#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MinigameSettingsMachine

#include "Basic.hpp"

#include "MinigameSettingsMachine_classes.hpp"
#include "MinigameSettingsMachine_parameters.hpp"


namespace SDK
{

// Function MinigameSettingsMachine.MinigameSettingsMachine_C.ExecuteUbergraph_MinigameSettingsMachine
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AMinigameSettingsMachine_C::ExecuteUbergraph_MinigameSettingsMachine(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MinigameSettingsMachine_C", "ExecuteUbergraph_MinigameSettingsMachine");

	Params::MinigameSettingsMachine_C_ExecuteUbergraph_MinigameSettingsMachine Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MinigameSettingsMachine.MinigameSettingsMachine_C.SetGameModeToDeathmatch
// (BlueprintCallable, BlueprintEvent)

void AMinigameSettingsMachine_C::SetGameModeToDeathmatch()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MinigameSettingsMachine_C", "SetGameModeToDeathmatch");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MinigameSettingsMachine.MinigameSettingsMachine_C.AbandonMinigameHelper
// (BlueprintCallable, BlueprintEvent)

void AMinigameSettingsMachine_C::AbandonMinigameHelper()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MinigameSettingsMachine_C", "AbandonMinigameHelper");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MinigameSettingsMachine.MinigameSettingsMachine_C.StartMinigameHelper
// (BlueprintCallable, BlueprintEvent)

void AMinigameSettingsMachine_C::StartMinigameHelper()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MinigameSettingsMachine_C", "StartMinigameHelper");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MinigameSettingsMachine.MinigameSettingsMachine_C.OnGameSettingsUpdated
// (BlueprintCallable, BlueprintEvent)

void AMinigameSettingsMachine_C::OnGameSettingsUpdated()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MinigameSettingsMachine_C", "OnGameSettingsUpdated");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MinigameSettingsMachine.MinigameSettingsMachine_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AMinigameSettingsMachine_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MinigameSettingsMachine_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MinigameSettingsMachine.MinigameSettingsMachine_C.BlueprintOnInteract
// (BlueprintAuthorityOnly, Event, Public, BlueprintEvent)
// Parameters:
// class AFortPawn*                        InteractingPawn                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AMinigameSettingsMachine_C::BlueprintOnInteract(const class AFortPawn* InteractingPawn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MinigameSettingsMachine_C", "BlueprintOnInteract");

	Params::MinigameSettingsMachine_C_BlueprintOnInteract Parms{};

	Parms.InteractingPawn = InteractingPawn;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MinigameSettingsMachine.MinigameSettingsMachine_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AMinigameSettingsMachine_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MinigameSettingsMachine_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MinigameSettingsMachine.MinigameSettingsMachine_C.BlueprintOnLocalInteract
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortPlayerPawn*                  InteractingPawn                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AMinigameSettingsMachine_C::BlueprintOnLocalInteract(class AFortPlayerPawn* InteractingPawn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MinigameSettingsMachine_C", "BlueprintOnLocalInteract");

	Params::MinigameSettingsMachine_C_BlueprintOnLocalInteract Parms{};

	Parms.InteractingPawn = InteractingPawn;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function MinigameSettingsMachine.MinigameSettingsMachine_C.GetPickupSpawnLocation
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                          SpawnLocation                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AMinigameSettingsMachine_C::GetPickupSpawnLocation(struct FVector* SpawnLocation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MinigameSettingsMachine_C", "GetPickupSpawnLocation");

	Params::MinigameSettingsMachine_C_GetPickupSpawnLocation Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (SpawnLocation != nullptr)
		*SpawnLocation = std::move(Parms.SpawnLocation);
}


// Function MinigameSettingsMachine.MinigameSettingsMachine_C.IsValidGame
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    bCanStartGame                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AMinigameSettingsMachine_C::IsValidGame(bool* bCanStartGame)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MinigameSettingsMachine_C", "IsValidGame");

	Params::MinigameSettingsMachine_C_IsValidGame Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (bCanStartGame != nullptr)
		*bCanStartGame = Parms.bCanStartGame;
}


// Function MinigameSettingsMachine.MinigameSettingsMachine_C.HasMinigameStarted
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    bHasStarted                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AMinigameSettingsMachine_C::HasMinigameStarted(bool* bHasStarted)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MinigameSettingsMachine_C", "HasMinigameStarted");

	Params::MinigameSettingsMachine_C_HasMinigameStarted Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (bHasStarted != nullptr)
		*bHasStarted = Parms.bHasStarted;
}


// Function MinigameSettingsMachine.MinigameSettingsMachine_C.UpdateGameMode
// (Public, BlueprintCallable, BlueprintEvent)

void AMinigameSettingsMachine_C::UpdateGameMode()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MinigameSettingsMachine_C", "UpdateGameMode");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MinigameSettingsMachine.MinigameSettingsMachine_C.UpdateTimeLimit
// (Public, BlueprintCallable, BlueprintEvent)

void AMinigameSettingsMachine_C::UpdateTimeLimit()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MinigameSettingsMachine_C", "UpdateTimeLimit");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MinigameSettingsMachine.MinigameSettingsMachine_C.GetCurrentMinigame
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AFortMinigame*                    Minigame                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AMinigameSettingsMachine_C::GetCurrentMinigame(class AFortMinigame** Minigame)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MinigameSettingsMachine_C", "GetCurrentMinigame");

	Params::MinigameSettingsMachine_C_GetCurrentMinigame Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Minigame != nullptr)
		*Minigame = Parms.Minigame;
}


// Function MinigameSettingsMachine.MinigameSettingsMachine_C.UpdateSpawnLocationSetting
// (Public, BlueprintCallable, BlueprintEvent)

void AMinigameSettingsMachine_C::UpdateSpawnLocationSetting()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MinigameSettingsMachine_C", "UpdateSpawnLocationSetting");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MinigameSettingsMachine.MinigameSettingsMachine_C.UpdateTeamSetting
// (Public, BlueprintCallable, BlueprintEvent)

void AMinigameSettingsMachine_C::UpdateTeamSetting()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MinigameSettingsMachine_C", "UpdateTeamSetting");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MinigameSettingsMachine.MinigameSettingsMachine_C.UpdatePostGameSpawnLocationSetting
// (Public, BlueprintCallable, BlueprintEvent)

void AMinigameSettingsMachine_C::UpdatePostGameSpawnLocationSetting()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MinigameSettingsMachine_C", "UpdatePostGameSpawnLocationSetting");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MinigameSettingsMachine.MinigameSettingsMachine_C.UpdatePlayerLives
// (Public, BlueprintCallable, BlueprintEvent)

void AMinigameSettingsMachine_C::UpdatePlayerLives()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MinigameSettingsMachine_C", "UpdatePlayerLives");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MinigameSettingsMachine.MinigameSettingsMachine_C.UpdateAutoEndTeamThreshold
// (Public, BlueprintCallable, BlueprintEvent)

void AMinigameSettingsMachine_C::UpdateAutoEndTeamThreshold()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MinigameSettingsMachine_C", "UpdateAutoEndTeamThreshold");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MinigameSettingsMachine.MinigameSettingsMachine_C.UpdateTeamToMoveToWhenOutOfSpawns
// (Public, BlueprintCallable, BlueprintEvent)

void AMinigameSettingsMachine_C::UpdateTeamToMoveToWhenOutOfSpawns()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MinigameSettingsMachine_C", "UpdateTeamToMoveToWhenOutOfSpawns");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MinigameSettingsMachine.MinigameSettingsMachine_C.UpdateEndConditions
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AMinigameSettingsMachine_C::UpdateEndConditions()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MinigameSettingsMachine_C", "UpdateEndConditions");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MinigameSettingsMachine.MinigameSettingsMachine_C.BlueprintCanInteract
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AFortPawn*                        InteractingPawn                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AMinigameSettingsMachine_C::BlueprintCanInteract(const class AFortPawn* InteractingPawn) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MinigameSettingsMachine_C", "BlueprintCanInteract");

	Params::MinigameSettingsMachine_C_BlueprintCanInteract Parms{};

	Parms.InteractingPawn = InteractingPawn;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function MinigameSettingsMachine.MinigameSettingsMachine_C.BlueprintGetInteractionString
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AFortPawn*                        InteractingPawn                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                             ReturnValue                                            (Parm, OutParm, ReturnParm)

class FText AMinigameSettingsMachine_C::BlueprintGetInteractionString(const class AFortPawn* InteractingPawn) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MinigameSettingsMachine_C", "BlueprintGetInteractionString");

	Params::MinigameSettingsMachine_C_BlueprintGetInteractionString Parms{};

	Parms.InteractingPawn = InteractingPawn;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function MinigameSettingsMachine.MinigameSettingsMachine_C.BlueprintGetFailedInteractionString
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AFortPawn*                        InteractingPawn                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                             ReturnValue                                            (Parm, OutParm, ReturnParm)

class FText AMinigameSettingsMachine_C::BlueprintGetFailedInteractionString(const class AFortPawn* InteractingPawn) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MinigameSettingsMachine_C", "BlueprintGetFailedInteractionString");

	Params::MinigameSettingsMachine_C_BlueprintGetFailedInteractionString Parms{};

	Parms.InteractingPawn = InteractingPawn;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

