#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Trap_Floor_Player_Campfire

#include "Basic.hpp"

#include "Trap_Floor_Player_Campfire_classes.hpp"
#include "Trap_Floor_Player_Campfire_parameters.hpp"


namespace SDK
{

// Function Trap_Floor_Player_Campfire.Trap_Floor_Player_Campfire_C.ExecuteUbergraph_Trap_Floor_Player_Campfire
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ATrap_Floor_Player_Campfire_C::ExecuteUbergraph_Trap_Floor_Player_Campfire(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Trap_Floor_Player_Campfire_C", "ExecuteUbergraph_Trap_Floor_Player_Campfire");

	Params::Trap_Floor_Player_Campfire_C_ExecuteUbergraph_Trap_Floor_Player_Campfire Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Trap_Floor_Player_Campfire.Trap_Floor_Player_Campfire_C.CharLogs
// (BlueprintCallable, BlueprintEvent)

void ATrap_Floor_Player_Campfire_C::CharLogs()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Trap_Floor_Player_Campfire_C", "CharLogs");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Trap_Floor_Player_Campfire.Trap_Floor_Player_Campfire_C.DousedTime
// (BlueprintCallable, BlueprintEvent)

void ATrap_Floor_Player_Campfire_C::DousedTime()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Trap_Floor_Player_Campfire_C", "DousedTime");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Trap_Floor_Player_Campfire.Trap_Floor_Player_Campfire_C.TriggerLaunchEffects
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortPlayerPawnAthena*            Pawn                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ATrap_Floor_Player_Campfire_C::TriggerLaunchEffects(class AFortPlayerPawnAthena* Pawn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Trap_Floor_Player_Campfire_C", "TriggerLaunchEffects");

	Params::Trap_Floor_Player_Campfire_C_TriggerLaunchEffects Parms{};

	Parms.Pawn = Pawn;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Trap_Floor_Player_Campfire.Trap_Floor_Player_Campfire_C.OnOutOfDurability
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void ATrap_Floor_Player_Campfire_C::OnOutOfDurability()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Trap_Floor_Player_Campfire_C", "OnOutOfDurability");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Trap_Floor_Player_Campfire.Trap_Floor_Player_Campfire_C.GameplayCue.Abilities.Activation.Traps.ActivateTrap
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EGameplayCueEvent                       EventType                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters           Parameters                                             (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)

void ATrap_Floor_Player_Campfire_C::GameplayCue_Abilities_Activation_Traps_ActivateTrap(EGameplayCueEvent EventType, const struct FGameplayCueParameters& Parameters)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Trap_Floor_Player_Campfire_C", "GameplayCue.Abilities.Activation.Traps.ActivateTrap");

	Params::Trap_Floor_Player_Campfire_C_GameplayCue_Abilities_Activation_Traps_ActivateTrap Parms{};

	Parms.EventType = EventType;
	Parms.Parameters = std::move(Parameters);

	UObject::ProcessEvent(Func, &Parms);
}


// Function Trap_Floor_Player_Campfire.Trap_Floor_Player_Campfire_C.GameplayCue.Abilities.Activation.Traps.ReloadBegin
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EGameplayCueEvent                       EventType                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters           Parameters                                             (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)

void ATrap_Floor_Player_Campfire_C::GameplayCue_Abilities_Activation_Traps_ReloadBegin(EGameplayCueEvent EventType, const struct FGameplayCueParameters& Parameters)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Trap_Floor_Player_Campfire_C", "GameplayCue.Abilities.Activation.Traps.ReloadBegin");

	Params::Trap_Floor_Player_Campfire_C_GameplayCue_Abilities_Activation_Traps_ReloadBegin Parms{};

	Parms.EventType = EventType;
	Parms.Parameters = std::move(Parameters);

	UObject::ProcessEvent(Func, &Parms);
}


// Function Trap_Floor_Player_Campfire.Trap_Floor_Player_Campfire_C.OnFinishedBuilding
// (Event, Public, BlueprintEvent)

void ATrap_Floor_Player_Campfire_C::OnFinishedBuilding()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Trap_Floor_Player_Campfire_C", "OnFinishedBuilding");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Trap_Floor_Player_Campfire.Trap_Floor_Player_Campfire_C.OnPlaced
// (Event, Public, BlueprintEvent)

void ATrap_Floor_Player_Campfire_C::OnPlaced()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Trap_Floor_Player_Campfire_C", "OnPlaced");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Trap_Floor_Player_Campfire.Trap_Floor_Player_Campfire_C.OnReloadEnd
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void ATrap_Floor_Player_Campfire_C::OnReloadEnd()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Trap_Floor_Player_Campfire_C", "OnReloadEnd");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Trap_Floor_Player_Campfire.Trap_Floor_Player_Campfire_C.DarkenLogs__UpdateFunc
// (BlueprintEvent)

void ATrap_Floor_Player_Campfire_C::DarkenLogs__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Trap_Floor_Player_Campfire_C", "DarkenLogs__UpdateFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Trap_Floor_Player_Campfire.Trap_Floor_Player_Campfire_C.DarkenLogs__FinishedFunc
// (BlueprintEvent)

void ATrap_Floor_Player_Campfire_C::DarkenLogs__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Trap_Floor_Player_Campfire_C", "DarkenLogs__FinishedFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Trap_Floor_Player_Campfire.Trap_Floor_Player_Campfire_C.FadeDoused__UpdateFunc
// (BlueprintEvent)

void ATrap_Floor_Player_Campfire_C::FadeDoused__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Trap_Floor_Player_Campfire_C", "FadeDoused__UpdateFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Trap_Floor_Player_Campfire.Trap_Floor_Player_Campfire_C.FadeDoused__FinishedFunc
// (BlueprintEvent)

void ATrap_Floor_Player_Campfire_C::FadeDoused__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Trap_Floor_Player_Campfire_C", "FadeDoused__FinishedFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Trap_Floor_Player_Campfire.Trap_Floor_Player_Campfire_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ATrap_Floor_Player_Campfire_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Trap_Floor_Player_Campfire_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Trap_Floor_Player_Campfire.Trap_Floor_Player_Campfire_C.OnRep_IsActive
// (BlueprintCallable, BlueprintEvent)

void ATrap_Floor_Player_Campfire_C::OnRep_IsActive()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Trap_Floor_Player_Campfire_C", "OnRep_IsActive");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Trap_Floor_Player_Campfire.Trap_Floor_Player_Campfire_C.HealTicks
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ATrap_Floor_Player_Campfire_C::HealTicks()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Trap_Floor_Player_Campfire_C", "HealTicks");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Trap_Floor_Player_Campfire.Trap_Floor_Player_Campfire_C.InitCampfireEffects
// (Public, BlueprintCallable, BlueprintEvent)

void ATrap_Floor_Player_Campfire_C::InitCampfireEffects()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Trap_Floor_Player_Campfire_C", "InitCampfireEffects");

	UObject::ProcessEvent(Func, nullptr);
}

}

