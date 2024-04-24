#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_BGA_Athena_EnvCampFire

#include "Basic.hpp"

#include "B_BGA_Athena_EnvCampFire_classes.hpp"
#include "B_BGA_Athena_EnvCampFire_parameters.hpp"


namespace SDK
{

// Function B_BGA_Athena_EnvCampFire.B_BGA_Athena_EnvCampFire_C.ExecuteUbergraph_B_BGA_Athena_EnvCampFire
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_BGA_Athena_EnvCampFire_C::ExecuteUbergraph_B_BGA_Athena_EnvCampFire(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_BGA_Athena_EnvCampFire_C", "ExecuteUbergraph_B_BGA_Athena_EnvCampFire");

	Params::B_BGA_Athena_EnvCampFire_C_ExecuteUbergraph_B_BGA_Athena_EnvCampFire Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_BGA_Athena_EnvCampFire.B_BGA_Athena_EnvCampFire_C.HandleCharacterVariantTransition
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortPawn*                        TransitioningPawn                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_BGA_Athena_EnvCampFire_C::HandleCharacterVariantTransition(class AFortPawn* TransitioningPawn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_BGA_Athena_EnvCampFire_C", "HandleCharacterVariantTransition");

	Params::B_BGA_Athena_EnvCampFire_C_HandleCharacterVariantTransition Parms{};

	Parms.TransitioningPawn = TransitioningPawn;

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_BGA_Athena_EnvCampFire.B_BGA_Athena_EnvCampFire_C.Server_QuestObjectiveUpdated
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortPlayerController*            Controller                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortQuestItemDefinition*         QuestDef                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                             BackendName                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   CompletionCount                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    ObjectiveCompleted                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    QuestCompleted                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AB_BGA_Athena_EnvCampFire_C::Server_QuestObjectiveUpdated(class AFortPlayerController* Controller, const class UFortQuestItemDefinition* QuestDef, class FName BackendName, int32 CompletionCount, bool ObjectiveCompleted, bool QuestCompleted)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_BGA_Athena_EnvCampFire_C", "Server_QuestObjectiveUpdated");

	Params::B_BGA_Athena_EnvCampFire_C_Server_QuestObjectiveUpdated Parms{};

	Parms.Controller = Controller;
	Parms.QuestDef = QuestDef;
	Parms.BackendName = BackendName;
	Parms.CompletionCount = CompletionCount;
	Parms.ObjectiveCompleted = ObjectiveCompleted;
	Parms.QuestCompleted = QuestCompleted;

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_BGA_Athena_EnvCampFire.B_BGA_Athena_EnvCampFire_C.KillDouseSmokeWisp
// (BlueprintCallable, BlueprintEvent)

void AB_BGA_Athena_EnvCampFire_C::KillDouseSmokeWisp()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_BGA_Athena_EnvCampFire_C", "KillDouseSmokeWisp");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_BGA_Athena_EnvCampFire.B_BGA_Athena_EnvCampFire_C.SpecialS7LightsFireAfterOut
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)

void AB_BGA_Athena_EnvCampFire_C::SpecialS7LightsFireAfterOut()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_BGA_Athena_EnvCampFire_C", "SpecialS7LightsFireAfterOut");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_BGA_Athena_EnvCampFire.B_BGA_Athena_EnvCampFire_C.BlueprintOnInteract
// (BlueprintAuthorityOnly, Event, Public, BlueprintEvent)
// Parameters:
// class AFortPawn*                        Param_InteractingPawn                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_BGA_Athena_EnvCampFire_C::BlueprintOnInteract(const class AFortPawn* Param_InteractingPawn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_BGA_Athena_EnvCampFire_C", "BlueprintOnInteract");

	Params::B_BGA_Athena_EnvCampFire_C_BlueprintOnInteract Parms{};

	Parms.Param_InteractingPawn = Param_InteractingPawn;

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_BGA_Athena_EnvCampFire.B_BGA_Athena_EnvCampFire_C.CheckDestroyDisabled
// (BlueprintCallable, BlueprintEvent)

void AB_BGA_Athena_EnvCampFire_C::CheckDestroyDisabled()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_BGA_Athena_EnvCampFire_C", "CheckDestroyDisabled");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_BGA_Athena_EnvCampFire.B_BGA_Athena_EnvCampFire_C.Light
// (BlueprintCallable, BlueprintEvent)

void AB_BGA_Athena_EnvCampFire_C::Light()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_BGA_Athena_EnvCampFire_C", "Light");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_BGA_Athena_EnvCampFire.B_BGA_Athena_EnvCampFire_C.GoOut
// (BlueprintCallable, BlueprintEvent)

void AB_BGA_Athena_EnvCampFire_C::GoOut()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_BGA_Athena_EnvCampFire_C", "GoOut");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_BGA_Athena_EnvCampFire.B_BGA_Athena_EnvCampFire_C.HandleBoundDestroyed
// (BlueprintCallable, BlueprintEvent)

void AB_BGA_Athena_EnvCampFire_C::HandleBoundDestroyed()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_BGA_Athena_EnvCampFire_C", "HandleBoundDestroyed");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_BGA_Athena_EnvCampFire.B_BGA_Athena_EnvCampFire_C.BindToFloor
// (BlueprintCallable, BlueprintEvent)

void AB_BGA_Athena_EnvCampFire_C::BindToFloor()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_BGA_Athena_EnvCampFire_C", "BindToFloor");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_BGA_Athena_EnvCampFire.B_BGA_Athena_EnvCampFire_C.BuildingActorDestroyedCleanUp
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           DamagedActor                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   Damage                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AController*                      InstigatedBy                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           DamageCauser                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          HitLocation                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*              FHitComponent                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                             BoneName                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          Momentum                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_BGA_Athena_EnvCampFire_C::BuildingActorDestroyedCleanUp(class AActor* DamagedActor, float Damage, class AController* InstigatedBy, class AActor* DamageCauser, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, class FName BoneName, const struct FVector& Momentum)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_BGA_Athena_EnvCampFire_C", "BuildingActorDestroyedCleanUp");

	Params::B_BGA_Athena_EnvCampFire_C_BuildingActorDestroyedCleanUp Parms{};

	Parms.DamagedActor = DamagedActor;
	Parms.Damage = Damage;
	Parms.InstigatedBy = InstigatedBy;
	Parms.DamageCauser = DamageCauser;
	Parms.HitLocation = std::move(HitLocation);
	Parms.FHitComponent = FHitComponent;
	Parms.BoneName = BoneName;
	Parms.Momentum = std::move(Momentum);

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_BGA_Athena_EnvCampFire.B_BGA_Athena_EnvCampFire_C.Start
// (BlueprintCallable, BlueprintEvent)

void AB_BGA_Athena_EnvCampFire_C::Start()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_BGA_Athena_EnvCampFire_C", "Start");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_BGA_Athena_EnvCampFire.B_BGA_Athena_EnvCampFire_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AB_BGA_Athena_EnvCampFire_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_BGA_Athena_EnvCampFire_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_BGA_Athena_EnvCampFire.B_BGA_Athena_EnvCampFire_C.OnReady_9F4554BE40FCB41157835B9AD897EE69
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortGameStateAthena*             GameState                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortPlaylist*                    Playlist                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer            PlaylistContextTags                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void AB_BGA_Athena_EnvCampFire_C::OnReady_9F4554BE40FCB41157835B9AD897EE69(class AFortGameStateAthena* GameState, const class UFortPlaylist* Playlist, const struct FGameplayTagContainer& PlaylistContextTags)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_BGA_Athena_EnvCampFire_C", "OnReady_9F4554BE40FCB41157835B9AD897EE69");

	Params::B_BGA_Athena_EnvCampFire_C_OnReady_9F4554BE40FCB41157835B9AD897EE69 Parms{};

	Parms.GameState = GameState;
	Parms.Playlist = Playlist;
	Parms.PlaylistContextTags = std::move(PlaylistContextTags);

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_BGA_Athena_EnvCampFire.B_BGA_Athena_EnvCampFire_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AB_BGA_Athena_EnvCampFire_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_BGA_Athena_EnvCampFire_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_BGA_Athena_EnvCampFire.B_BGA_Athena_EnvCampFire_C.SetSheetValues
// (Public, BlueprintCallable, BlueprintEvent)

void AB_BGA_Athena_EnvCampFire_C::SetSheetValues()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_BGA_Athena_EnvCampFire_C", "SetSheetValues");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_BGA_Athena_EnvCampFire.B_BGA_Athena_EnvCampFire_C.RowToBool
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FScalableFloat                   Input                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AB_BGA_Athena_EnvCampFire_C::RowToBool(const struct FScalableFloat& Input)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_BGA_Athena_EnvCampFire_C", "RowToBool");

	Params::B_BGA_Athena_EnvCampFire_C_RowToBool Parms{};

	Parms.Input = std::move(Input);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function B_BGA_Athena_EnvCampFire.B_BGA_Athena_EnvCampFire_C.CheckIfUserIsSpecialS7
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortPawn*                        PawnWhoLitFire                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    UserIsSpecial                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AB_BGA_Athena_EnvCampFire_C::CheckIfUserIsSpecialS7(class AFortPawn* PawnWhoLitFire, bool* UserIsSpecial)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_BGA_Athena_EnvCampFire_C", "CheckIfUserIsSpecialS7");

	Params::B_BGA_Athena_EnvCampFire_C_CheckIfUserIsSpecialS7 Parms{};

	Parms.PawnWhoLitFire = PawnWhoLitFire;

	UObject::ProcessEvent(Func, &Parms);

	if (UserIsSpecial != nullptr)
		*UserIsSpecial = Parms.UserIsSpecial;
}


// Function B_BGA_Athena_EnvCampFire.B_BGA_Athena_EnvCampFire_C.OnRep_Destroyed
// (BlueprintCallable, BlueprintEvent)

void AB_BGA_Athena_EnvCampFire_C::OnRep_Destroyed()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_BGA_Athena_EnvCampFire_C", "OnRep_Destroyed");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_BGA_Athena_EnvCampFire.B_BGA_Athena_EnvCampFire_C.OnRep_LitRepBool
// (BlueprintCallable, BlueprintEvent)

void AB_BGA_Athena_EnvCampFire_C::OnRep_LitRepBool()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_BGA_Athena_EnvCampFire_C", "OnRep_LitRepBool");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_BGA_Athena_EnvCampFire.B_BGA_Athena_EnvCampFire_C.BlueprintCanInteract
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AFortPawn*                        Param_InteractingPawn                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AB_BGA_Athena_EnvCampFire_C::BlueprintCanInteract(const class AFortPawn* Param_InteractingPawn) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_BGA_Athena_EnvCampFire_C", "BlueprintCanInteract");

	Params::B_BGA_Athena_EnvCampFire_C_BlueprintCanInteract Parms{};

	Parms.Param_InteractingPawn = Param_InteractingPawn;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function B_BGA_Athena_EnvCampFire.B_BGA_Athena_EnvCampFire_C.BlueprintGetInteractionString
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AFortPawn*                        Param_InteractingPawn                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                             ReturnValue                                            (Parm, OutParm, ReturnParm)

class FText AB_BGA_Athena_EnvCampFire_C::BlueprintGetInteractionString(const class AFortPawn* Param_InteractingPawn) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_BGA_Athena_EnvCampFire_C", "BlueprintGetInteractionString");

	Params::B_BGA_Athena_EnvCampFire_C_BlueprintGetInteractionString Parms{};

	Parms.Param_InteractingPawn = Param_InteractingPawn;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

