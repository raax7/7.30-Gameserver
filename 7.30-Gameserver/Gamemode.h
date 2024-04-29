#pragma once


namespace Gamemode
{
	bool (*ReadyToStartMatch)(AFortGameModeAthena*);
	bool ReadyToStartMatchHook(AFortGameModeAthena* GameMode)
	{
		auto ShowFoundation = [](ABuildingFoundation* BuildingFoundation) -> void
			{
				if (!BuildingFoundation)
				{
					LOG("Failed to show foundation!");
					return;
				}

				LOG(std::format("Showing Foundation with Name: {}", BuildingFoundation->GetName()));

				BuildingFoundation->DynamicFoundationType = EDynamicFoundationType::Static;
				BuildingFoundation->bServerStreamedInLevel = true;
				BuildingFoundation->OnRep_ServerStreamedInLevel();

				BuildingFoundation->SetDynamicFoundationEnabled(true);
				BuildingFoundation->ForceNetUpdate();
				BuildingFoundation->FlushNetDormancy();
				BuildingFoundation->OnLevelShown();
				BuildingFoundation->OnLevelStreamedIn();
			};

		static bool bShownFoundations = false;

		if (!bShownFoundations)
		{
			bShownFoundations = true;
			TArray<AActor*> AllBuildingFoundations;
			UGameplayStatics::GetDefaultObj()->GetAllActorsOfClass(UWorld::GetWorld(), ABuildingFoundation::StaticClass(), &AllBuildingFoundations);

			for (int i = 0; i < AllBuildingFoundations.Num(); ++i)
			{
				auto BuildingActor = AllBuildingFoundations[i];

				if (!BuildingActor)
				{
					LOG("Failed to find Building Foundation!");
					continue;
				}

				auto BuildingFoundation = (ABuildingFoundation*)BuildingActor;

				static std::vector<std::string> FoundationsToBlock{ "SLAB_1", "SLAB_3", "SLAB_BLANK", "PleasentParkDefault" };
				bool bBlockFoundation = false;

				for (const std::string& FoundationName : FoundationsToBlock)
				{
					if (BuildingFoundation->GetName() == FoundationName)
						bBlockFoundation = true;
				}

				if (!BuildingFoundation || BuildingFoundation->DynamicFoundationType != EDynamicFoundationType::StartDisabled || bBlockFoundation)
					continue;
				
				ShowFoundation(BuildingFoundation);

				if (!GetGameMode()->AIDirector)
				{
					GetGameMode()->AIDirector = SpawnActor<AFortAIDirector>({});
				}

				if (GetGameMode()->AIDirector)
				{
					GetGameMode()->AIDirector->Activate();
				}
			}
		}

		TArray<AActor*> WarmupActors;
		UGameplayStatics::GetDefaultObj()->GetAllActorsOfClass(UWorld::GetWorld(), AFortPlayerStartWarmup::StaticClass(), &WarmupActors);

		int WarmupSpots = WarmupActors.Num();

		WarmupActors.Free();

		if (WarmupSpots == 0)
		{
			return false;
		}

		static bool bInit = false;

		if (!bInit)
		{
			bInit = true;

			GameMode->WarmupRequiredPlayerCount = 1;

			UFortPlaylistAthena* Playlist = StaticFindObject<UFortPlaylistAthena>("/Game/Athena/Playlists/Deimos/Playlist_Deimos_Solo_Winter.Playlist_Deimos_Solo_Winter");

			GetGameState()->CurrentPlaylistInfo.BasePlaylist = Playlist;
			GetGameState()->CurrentPlaylistInfo.OverridePlaylist = Playlist;
			GetGameState()->CurrentPlaylistInfo.PlaylistReplicationKey++;
			GetGameState()->CurrentPlaylistInfo.MarkArrayDirty();

			GetGameState()->OnRep_CurrentPlaylistInfo();

			CreateNetDriver = decltype(CreateNetDriver)(MemoryUtils::SigScan("48 89 5C 24 10 57 48 83 EC ? 48 8B 81 D0 0B 00 00"));
			SetWorld = decltype(SetWorld)(BaseAddress() + 0x29cccc0);
			InitListen = decltype(InitListen)(BaseAddress() + 0x458c90);

			UWorld::GetWorld()->NetDriver = CreateNetDriver(UFortEngine::GetEngine(), UWorld::GetWorld(), UKismetStringLibrary::GetDefaultObj()->Conv_StringToName(L"GameNetDriver"));

			if (UWorld::GetWorld()->NetDriver)
			{
				UWorld::GetWorld()->NetDriver->World = UWorld::GetWorld();
				UWorld::GetWorld()->NetDriver->NetDriverName = UKismetStringLibrary::GetDefaultObj()->Conv_StringToName(L"GameNetDriver");

				FString Err;
				auto URL = FURL();
				URL.Port = 7777;

				InitListen(UWorld::GetWorld()->NetDriver, UWorld::GetWorld(), URL, true, Err);
				SetWorld(UWorld::GetWorld()->NetDriver, UWorld::GetWorld());

				ServerReplicateActors = decltype(ServerReplicateActors)(UWorld::GetWorld()->NetDriver->ReplicationDriver->Vft[0x56]);

				GameMode->GameSession->MaxPlayers = Playlist->MaxPlayers;
				GetGameState()->AirCraftBehavior = Playlist->AirCraftBehavior;
				GetGameState()->bIsLargeTeamGame = Playlist->bIsLargeTeamGame;

				UWorld::GetWorld()->LevelCollections[0].NetDriver = UWorld::GetWorld()->NetDriver;
				UWorld::GetWorld()->LevelCollections[1].NetDriver = UWorld::GetWorld()->NetDriver;

				if ((UWorld::GetWorld()->NetDriver->MaxInternetClientRate < UWorld::GetWorld()->NetDriver->MaxClientRate) && (UWorld::GetWorld()->NetDriver->MaxInternetClientRate > 2500))
				{
					UWorld::GetWorld()->NetDriver->MaxClientRate = UWorld::GetWorld()->NetDriver->MaxInternetClientRate;
				}
				
				LOG("Listening on Port 7777!");
				SetConsoleTitleA("7.30 Gameserver | Listening on Port 7777");
			}

			std::vector<std::string> WorldsToStream{ "/Temp/Game/Athena/Maps/POI/Athena_POI_CommunityPark_003_77acf920", "/Temp/Game/Athena/Maps/POI/Athena_POI_CommunityPark_003_M_5c711338" };

		
			for (int i = 0; i < UObject::GObjects->Num(); i++)
			{
				auto Object = UObject::GObjects->GetByIndex(i);

				if (!Object || !Object->IsA(ABuildingFoundation::StaticClass()))
					continue;

				auto Path = UKismetSystemLibrary::GetDefaultObj()->GetPathName(Object).ToString();

				for (const std::string& WorldName : WorldsToStream)
				{
					if (Path.contains(WorldName))
					{
						ShowFoundation((ABuildingFoundation*)Object);
						continue;
					}
				}
			}
			

			GetGameMode()->bWorldIsReady = true;
		}

		static bool bSetMapInfo = false;

		if (GetGameState()->MapInfo)
		{
			if (!bSetMapInfo)
			{
				bSetMapInfo = true;
				GetGameState()->MapInfo->SupplyDropInfoList[0]->SupplyDropClass = StaticLoadObject<UClass>("/Game/Athena/SupplyDrops/AthenaSupplyDrop_Holiday.AthenaSupplyDrop_Holiday_C");
			}
		}

		return ReadyToStartMatch(GameMode);
	}
	
	APawn* SpawnDefaultPawnForHook(AGameModeBase* GameMode, AController* NewPlayer, AActor* StartSpot)
	{
		auto Transform = StartSpot->GetTransform();

		static bool bFirstPlayer = false;

		if (!bFirstPlayer)
		{
			bFirstPlayer = true;

			GameUtils::Snow::SetSnow();
		}

		auto NewPawn = GameMode->SpawnDefaultPawnAtTransform(NewPlayer, Transform);

		for (int i = 0; i < GetGameMode()->StartingItems.Num(); i++)
		{
			auto NewItem = GetGameMode()->StartingItems[i];

			if (!NewItem.Item)
				continue;

			Inventory::GivePCItem((AFortPlayerController*)NewPlayer, NewItem.Item, NewItem.Count);
		}

		Inventory::Update((AFortPlayerController*)NewPlayer);

		Abilities::ApplySetToASC(((AFortPlayerState*)NewPlayer->PlayerState)->AbilitySystemComponent);

		return NewPawn;
	}

	static void (*HandleStartingNewPlayer)(AFortGameModeAthena*, AFortPlayerControllerAthena*);
	void HandleStartingNewPlayerHook(AFortGameModeAthena* GameMode, AFortPlayerControllerAthena* NewPlayer)
	{
		return HandleStartingNewPlayer(GameMode, NewPlayer);
	}


	void HookAll()
	{
		auto GameModeDefault = StaticFindObject<AFortGameModeAthena>("/Script/FortniteGame.Default__FortGameModeAthena");

		LOG("Hooking gamemode");

		VirtualHook(GameModeDefault->Vft, 251, ReadyToStartMatchHook, (PVOID*)&ReadyToStartMatch);
		VirtualHook(GameModeDefault->Vft, 194, SpawnDefaultPawnForHook);
		VirtualHook(GameModeDefault->Vft, 200, HandleStartingNewPlayerHook, (PVOID*)&HandleStartingNewPlayer);
	}
}