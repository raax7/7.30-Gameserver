#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BGA_IslandPortal

#include "Basic.hpp"

#include "BGA_IslandPortal_classes.hpp"
#include "BGA_IslandPortal_parameters.hpp"


namespace SDK
{

// Function BGA_IslandPortal.BGA_IslandPortal_C.UpdatePlayerName__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             NewPlayerName                                          (BlueprintVisible, BlueprintReadOnly, Parm)

void ABGA_IslandPortal_C::UpdatePlayerName__DelegateSignature(const class FText& NewPlayerName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_IslandPortal_C", "UpdatePlayerName__DelegateSignature");

	Params::BGA_IslandPortal_C_UpdatePlayerName__DelegateSignature Parms{};

	Parms.NewPlayerName = std::move(NewPlayerName);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BGA_IslandPortal.BGA_IslandPortal_C.UpdatePlayerPop__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NewPop                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABGA_IslandPortal_C::UpdatePlayerPop__DelegateSignature(int32 NewPop)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_IslandPortal_C", "UpdatePlayerPop__DelegateSignature");

	Params::BGA_IslandPortal_C_UpdatePlayerPop__DelegateSignature Parms{};

	Parms.NewPop = NewPop;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BGA_IslandPortal.BGA_IslandPortal_C.UpdateIslandName__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             NewIslandName                                          (BlueprintVisible, BlueprintReadOnly, Parm)

void ABGA_IslandPortal_C::UpdateIslandName__DelegateSignature(const class FText& NewIslandName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_IslandPortal_C", "UpdateIslandName__DelegateSignature");

	Params::BGA_IslandPortal_C_UpdateIslandName__DelegateSignature Parms{};

	Parms.NewIslandName = std::move(NewIslandName);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BGA_IslandPortal.BGA_IslandPortal_C.UpdatePortalUIVis__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Show                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    WasHidden                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABGA_IslandPortal_C::UpdatePortalUIVis__DelegateSignature(bool Show, bool WasHidden)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_IslandPortal_C", "UpdatePortalUIVis__DelegateSignature");

	Params::BGA_IslandPortal_C_UpdatePortalUIVis__DelegateSignature Parms{};

	Parms.Show = Show;
	Parms.WasHidden = WasHidden;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BGA_IslandPortal.BGA_IslandPortal_C.UpdateIsCuratedPortal__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bIsCurated                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    bIsLinkCode                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    bIsUserInitiatedLoad                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABGA_IslandPortal_C::UpdateIsCuratedPortal__DelegateSignature(bool bIsCurated, bool bIsLinkCode, bool bIsUserInitiatedLoad)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_IslandPortal_C", "UpdateIsCuratedPortal__DelegateSignature");

	Params::BGA_IslandPortal_C_UpdateIsCuratedPortal__DelegateSignature Parms{};

	Parms.bIsCurated = bIsCurated;
	Parms.bIsLinkCode = bIsLinkCode;
	Parms.bIsUserInitiatedLoad = bIsUserInitiatedLoad;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BGA_IslandPortal.BGA_IslandPortal_C.UpdateDescription__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             Description                                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABGA_IslandPortal_C::UpdateDescription__DelegateSignature(const class FText& Description)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_IslandPortal_C", "UpdateDescription__DelegateSignature");

	Params::BGA_IslandPortal_C_UpdateDescription__DelegateSignature Parms{};

	Parms.Description = std::move(Description);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BGA_IslandPortal.BGA_IslandPortal_C.UpdateLinkCode__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           LinkCode                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void ABGA_IslandPortal_C::UpdateLinkCode__DelegateSignature(const class FString& LinkCode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_IslandPortal_C", "UpdateLinkCode__DelegateSignature");

	Params::BGA_IslandPortal_C_UpdateLinkCode__DelegateSignature Parms{};

	Parms.LinkCode = std::move(LinkCode);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BGA_IslandPortal.BGA_IslandPortal_C.ExecuteUbergraph_BGA_IslandPortal
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABGA_IslandPortal_C::ExecuteUbergraph_BGA_IslandPortal(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_IslandPortal_C", "ExecuteUbergraph_BGA_IslandPortal");

	Params::BGA_IslandPortal_C_ExecuteUbergraph_BGA_IslandPortal Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BGA_IslandPortal.BGA_IslandPortal_C.OnThumbnailTextureReady
// (Event, Protected, BlueprintEvent)

void ABGA_IslandPortal_C::OnThumbnailTextureReady()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_IslandPortal_C", "OnThumbnailTextureReady");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BGA_IslandPortal.BGA_IslandPortal_C.Play Rift Exit Sound
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                          Location                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABGA_IslandPortal_C::Play_Rift_Exit_Sound(const struct FVector& Location)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_IslandPortal_C", "Play Rift Exit Sound");

	Params::BGA_IslandPortal_C_Play_Rift_Exit_Sound Parms{};

	Parms.Location = std::move(Location);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BGA_IslandPortal.BGA_IslandPortal_C.ClientSaveDisplayChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                                    bSaving                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABGA_IslandPortal_C::ClientSaveDisplayChanged(bool bSaving)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_IslandPortal_C", "ClientSaveDisplayChanged");

	Params::BGA_IslandPortal_C_ClientSaveDisplayChanged Parms{};

	Parms.bSaving = bSaving;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BGA_IslandPortal.BGA_IslandPortal_C.CuratedPortalChanged
// (Event, Public, BlueprintEvent)

void ABGA_IslandPortal_C::CuratedPortalChanged()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_IslandPortal_C", "CuratedPortalChanged");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BGA_IslandPortal.BGA_IslandPortal_C.UpdatePortal
// (BlueprintCallable, BlueprintEvent)

void ABGA_IslandPortal_C::UpdatePortal()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_IslandPortal_C", "UpdatePortal");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BGA_IslandPortal.BGA_IslandPortal_C.PortalOpenChanged
// (Event, Public, BlueprintEvent)

void ABGA_IslandPortal_C::PortalOpenChanged()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_IslandPortal_C", "PortalOpenChanged");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BGA_IslandPortal.BGA_IslandPortal_C.TeleportToCreativeHub
// (BlueprintCallable, BlueprintEvent)

void ABGA_IslandPortal_C::TeleportToCreativeHub()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_IslandPortal_C", "TeleportToCreativeHub");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BGA_IslandPortal.BGA_IslandPortal_C.DisplayNameChanged
// (Event, Public, BlueprintEvent)

void ABGA_IslandPortal_C::DisplayNameChanged()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_IslandPortal_C", "DisplayNameChanged");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BGA_IslandPortal.BGA_IslandPortal_C.PopulationChanged
// (Event, Public, BlueprintEvent)

void ABGA_IslandPortal_C::PopulationChanged()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_IslandPortal_C", "PopulationChanged");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BGA_IslandPortal.BGA_IslandPortal_C.CheckShouldDisplayUI
// (BlueprintCallable, BlueprintEvent)

void ABGA_IslandPortal_C::CheckShouldDisplayUI()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_IslandPortal_C", "CheckShouldDisplayUI");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BGA_IslandPortal.BGA_IslandPortal_C.OwningPlayerChanged
// (Event, Public, BlueprintEvent)

void ABGA_IslandPortal_C::OwningPlayerChanged()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_IslandPortal_C", "OwningPlayerChanged");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BGA_IslandPortal.BGA_IslandPortal_C.CheckIsMyPortal
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Param_IsMyPortal                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABGA_IslandPortal_C::CheckIsMyPortal(bool Param_IsMyPortal)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_IslandPortal_C", "CheckIsMyPortal");

	Params::BGA_IslandPortal_C_CheckIsMyPortal Parms{};

	Parms.Param_IsMyPortal = Param_IsMyPortal;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BGA_IslandPortal.BGA_IslandPortal_C.EvaluateOverlap
// (BlueprintCallable, BlueprintEvent)

void ABGA_IslandPortal_C::EvaluateOverlap()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_IslandPortal_C", "EvaluateOverlap");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BGA_IslandPortal.BGA_IslandPortal_C.ClientTeleportToLobbyIsland
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortPlayerController*            RequestingController                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABGA_IslandPortal_C::ClientTeleportToLobbyIsland(class AFortPlayerController* RequestingController)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_IslandPortal_C", "ClientTeleportToLobbyIsland");

	Params::BGA_IslandPortal_C_ClientTeleportToLobbyIsland Parms{};

	Parms.RequestingController = RequestingController;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BGA_IslandPortal.BGA_IslandPortal_C.NotifyTeleportedPlayerPawn
// (Event, Public, BlueprintEvent)
// Parameters:
// class AFortPlayerPawn*                  Param_PlayerPawn                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABGA_IslandPortal_C::NotifyTeleportedPlayerPawn(class AFortPlayerPawn* Param_PlayerPawn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_IslandPortal_C", "NotifyTeleportedPlayerPawn");

	Params::BGA_IslandPortal_C_NotifyTeleportedPlayerPawn Parms{};

	Parms.Param_PlayerPawn = Param_PlayerPawn;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BGA_IslandPortal.BGA_IslandPortal_C.LoadIslandUI
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortPlayerPawn*                  InteractingPawn                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABGA_IslandPortal_C::LoadIslandUI(class AFortPlayerPawn* InteractingPawn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_IslandPortal_C", "LoadIslandUI");

	Params::BGA_IslandPortal_C_LoadIslandUI Parms{};

	Parms.InteractingPawn = InteractingPawn;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BGA_IslandPortal.BGA_IslandPortal_C.NotifyTeleportedVehicle
// (Event, Public, BlueprintEvent)
// Parameters:
// class AFortAthenaVehicle*               Param_Vehicle                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABGA_IslandPortal_C::NotifyTeleportedVehicle(class AFortAthenaVehicle* Param_Vehicle)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_IslandPortal_C", "NotifyTeleportedVehicle");

	Params::BGA_IslandPortal_C_NotifyTeleportedVehicle Parms{};

	Parms.Param_Vehicle = Param_Vehicle;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BGA_IslandPortal.BGA_IslandPortal_C.OverlappingOnBeginPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor*                           Actor                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABGA_IslandPortal_C::OverlappingOnBeginPlay(class AActor* Actor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_IslandPortal_C", "OverlappingOnBeginPlay");

	Params::BGA_IslandPortal_C_OverlappingOnBeginPlay Parms{};

	Parms.Actor = Actor;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BGA_IslandPortal.BGA_IslandPortal_C.PlayCosmeticFX
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                          DestinationLocation                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABGA_IslandPortal_C::PlayCosmeticFX(const struct FVector& DestinationLocation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_IslandPortal_C", "PlayCosmeticFX");

	Params::BGA_IslandPortal_C_PlayCosmeticFX Parms{};

	Parms.DestinationLocation = std::move(DestinationLocation);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BGA_IslandPortal.BGA_IslandPortal_C.PlayTeleportFX
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                          PlayerLocation                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          DestinationLocation                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABGA_IslandPortal_C::PlayTeleportFX(const struct FVector& PlayerLocation, const struct FVector& DestinationLocation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_IslandPortal_C", "PlayTeleportFX");

	Params::BGA_IslandPortal_C_PlayTeleportFX Parms{};

	Parms.PlayerLocation = std::move(PlayerLocation);
	Parms.DestinationLocation = std::move(DestinationLocation);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BGA_IslandPortal.BGA_IslandPortal_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABGA_IslandPortal_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_IslandPortal_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BGA_IslandPortal.BGA_IslandPortal_C.BndEvt__Capsule_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*              OverlappedComponent                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           OtherActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*              OtherComp                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   OtherBodyIndex                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABGA_IslandPortal_C::BndEvt__Capsule_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_IslandPortal_C", "BndEvt__Capsule_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature");

	Params::BGA_IslandPortal_C_BndEvt__Capsule_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature Parms{};

	Parms.OverlappedComponent = OverlappedComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.OtherBodyIndex = OtherBodyIndex;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BGA_IslandPortal.BGA_IslandPortal_C.BndEvt__Capsule_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*              OverlappedComponent                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           OtherActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*              OtherComp                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   OtherBodyIndex                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bFromSweep                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                       SweepResult                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void ABGA_IslandPortal_C::BndEvt__Capsule_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_IslandPortal_C", "BndEvt__Capsule_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature");

	Params::BGA_IslandPortal_C_BndEvt__Capsule_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature Parms{};

	Parms.OverlappedComponent = OverlappedComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.OtherBodyIndex = OtherBodyIndex;
	Parms.bFromSweep = bFromSweep;
	Parms.SweepResult = std::move(SweepResult);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BGA_IslandPortal.BGA_IslandPortal_C.BndEvt__OverlapCapsule_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*              OverlappedComponent                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           OtherActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*              OtherComp                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   OtherBodyIndex                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bFromSweep                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                       SweepResult                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void ABGA_IslandPortal_C::BndEvt__OverlapCapsule_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_IslandPortal_C", "BndEvt__OverlapCapsule_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature");

	Params::BGA_IslandPortal_C_BndEvt__OverlapCapsule_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature Parms{};

	Parms.OverlappedComponent = OverlappedComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.OtherBodyIndex = OtherBodyIndex;
	Parms.bFromSweep = bFromSweep;
	Parms.SweepResult = std::move(SweepResult);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BGA_IslandPortal.BGA_IslandPortal_C.OnLoaded_F2A7F21346C6B461BE9A1182BB5B5DD5
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                           Loaded                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABGA_IslandPortal_C::OnLoaded_F2A7F21346C6B461BE9A1182BB5B5DD5(class UClass* Loaded)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_IslandPortal_C", "OnLoaded_F2A7F21346C6B461BE9A1182BB5B5DD5");

	Params::BGA_IslandPortal_C_OnLoaded_F2A7F21346C6B461BE9A1182BB5B5DD5 Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BGA_IslandPortal.BGA_IslandPortal_C.OnLoaded_A43955A14A20383F466DF18A87BBA501
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                           Loaded                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABGA_IslandPortal_C::OnLoaded_A43955A14A20383F466DF18A87BBA501(class UClass* Loaded)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_IslandPortal_C", "OnLoaded_A43955A14A20383F466DF18A87BBA501");

	Params::BGA_IslandPortal_C_OnLoaded_A43955A14A20383F466DF18A87BBA501 Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BGA_IslandPortal.BGA_IslandPortal_C.OnLoaded_25EC650C4A5067360B49BC87DAFA1B71
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                           Loaded                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABGA_IslandPortal_C::OnLoaded_25EC650C4A5067360B49BC87DAFA1B71(class UClass* Loaded)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_IslandPortal_C", "OnLoaded_25EC650C4A5067360B49BC87DAFA1B71");

	Params::BGA_IslandPortal_C_OnLoaded_25EC650C4A5067360B49BC87DAFA1B71 Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BGA_IslandPortal.BGA_IslandPortal_C.Timeline_0__UpdateFunc
// (BlueprintEvent)

void ABGA_IslandPortal_C::Timeline_0__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_IslandPortal_C", "Timeline_0__UpdateFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BGA_IslandPortal.BGA_IslandPortal_C.Timeline_0__FinishedFunc
// (BlueprintEvent)

void ABGA_IslandPortal_C::Timeline_0__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_IslandPortal_C", "Timeline_0__FinishedFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BGA_IslandPortal.BGA_IslandPortal_C.VectorScale__UpdateFunc
// (BlueprintEvent)

void ABGA_IslandPortal_C::VectorScale__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_IslandPortal_C", "VectorScale__UpdateFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BGA_IslandPortal.BGA_IslandPortal_C.VectorScale__FinishedFunc
// (BlueprintEvent)

void ABGA_IslandPortal_C::VectorScale__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_IslandPortal_C", "VectorScale__FinishedFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BGA_IslandPortal.BGA_IslandPortal_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABGA_IslandPortal_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_IslandPortal_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BGA_IslandPortal.BGA_IslandPortal_C.PlayExpandOrCollapseAudio
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Expand                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABGA_IslandPortal_C::PlayExpandOrCollapseAudio(bool Expand)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_IslandPortal_C", "PlayExpandOrCollapseAudio");

	Params::BGA_IslandPortal_C_PlayExpandOrCollapseAudio Parms{};

	Parms.Expand = Expand;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BGA_IslandPortal.BGA_IslandPortal_C.OnRep_TeleportLocation
// (BlueprintCallable, BlueprintEvent)

void ABGA_IslandPortal_C::OnRep_TeleportLocation()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_IslandPortal_C", "OnRep_TeleportLocation");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BGA_IslandPortal.BGA_IslandPortal_C.OnRep_Vehicle
// (BlueprintCallable, BlueprintEvent)

void ABGA_IslandPortal_C::OnRep_Vehicle()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_IslandPortal_C", "OnRep_Vehicle");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BGA_IslandPortal.BGA_IslandPortal_C.OnRep_PlayerPawn
// (BlueprintCallable, BlueprintEvent)

void ABGA_IslandPortal_C::OnRep_PlayerPawn()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_IslandPortal_C", "OnRep_PlayerPawn");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BGA_IslandPortal.BGA_IslandPortal_C.CheckForRiftLocUpdate
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AController*                      InController                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABGA_IslandPortal_C::CheckForRiftLocUpdate(class AController* InController)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_IslandPortal_C", "CheckForRiftLocUpdate");

	Params::BGA_IslandPortal_C_CheckForRiftLocUpdate Parms{};

	Parms.InController = InController;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BGA_IslandPortal.BGA_IslandPortal_C.UseRiftQuestUpdate
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AController*                      InController                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABGA_IslandPortal_C::UseRiftQuestUpdate(class AController* InController)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_IslandPortal_C", "UseRiftQuestUpdate");

	Params::BGA_IslandPortal_C_UseRiftQuestUpdate Parms{};

	Parms.InController = InController;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BGA_IslandPortal.BGA_IslandPortal_C.GetPortalPosition
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                          Location                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABGA_IslandPortal_C::GetPortalPosition(struct FVector* Location)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_IslandPortal_C", "GetPortalPosition");

	Params::BGA_IslandPortal_C_GetPortalPosition Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Location != nullptr)
		*Location = std::move(Parms.Location);
}


// Function BGA_IslandPortal.BGA_IslandPortal_C.BlueprintOnLocalInteract
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortPlayerPawn*                  InteractingPawn                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABGA_IslandPortal_C::BlueprintOnLocalInteract(class AFortPlayerPawn* InteractingPawn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_IslandPortal_C", "BlueprintOnLocalInteract");

	Params::BGA_IslandPortal_C_BlueprintOnLocalInteract Parms{};

	Parms.InteractingPawn = InteractingPawn;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BGA_IslandPortal.BGA_IslandPortal_C.TeleportToLobbyIsland
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortPlayerController*            RequestingController                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABGA_IslandPortal_C::TeleportToLobbyIsland(class AFortPlayerController* RequestingController)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_IslandPortal_C", "TeleportToLobbyIsland");

	Params::BGA_IslandPortal_C_TeleportToLobbyIsland Parms{};

	Parms.RequestingController = RequestingController;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BGA_IslandPortal.BGA_IslandPortal_C.SetPortalUIVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Show                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABGA_IslandPortal_C::SetPortalUIVisibility(bool Show)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_IslandPortal_C", "SetPortalUIVisibility");

	Params::BGA_IslandPortal_C_SetPortalUIVisibility Parms{};

	Parms.Show = Show;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BGA_IslandPortal.BGA_IslandPortal_C.UpdatePopulationDisplay
// (Public, BlueprintCallable, BlueprintEvent)

void ABGA_IslandPortal_C::UpdatePopulationDisplay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_IslandPortal_C", "UpdatePopulationDisplay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BGA_IslandPortal.BGA_IslandPortal_C.UpdateNameDisplay
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABGA_IslandPortal_C::UpdateNameDisplay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_IslandPortal_C", "UpdateNameDisplay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BGA_IslandPortal.BGA_IslandPortal_C.ScaleThumbnailPlaneByTextureSize
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

struct FVector ABGA_IslandPortal_C::ScaleThumbnailPlaneByTextureSize()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_IslandPortal_C", "ScaleThumbnailPlaneByTextureSize");

	Params::BGA_IslandPortal_C_ScaleThumbnailPlaneByTextureSize Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BGA_IslandPortal.BGA_IslandPortal_C.BlueprintCanInteract
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AFortPawn*                        InteractingPawn                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABGA_IslandPortal_C::BlueprintCanInteract(const class AFortPawn* InteractingPawn) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_IslandPortal_C", "BlueprintCanInteract");

	Params::BGA_IslandPortal_C_BlueprintCanInteract Parms{};

	Parms.InteractingPawn = InteractingPawn;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BGA_IslandPortal.BGA_IslandPortal_C.BlueprintGetInteractionString
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AFortPawn*                        InteractingPawn                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                             ReturnValue                                            (Parm, OutParm, ReturnParm)

class FText ABGA_IslandPortal_C::BlueprintGetInteractionString(const class AFortPawn* InteractingPawn) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_IslandPortal_C", "BlueprintGetInteractionString");

	Params::BGA_IslandPortal_C_BlueprintGetInteractionString Parms{};

	Parms.InteractingPawn = InteractingPawn;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

