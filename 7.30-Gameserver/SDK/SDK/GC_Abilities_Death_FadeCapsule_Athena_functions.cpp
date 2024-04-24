#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GC_Abilities_Death_FadeCapsule_Athena

#include "Basic.hpp"

#include "GC_Abilities_Death_FadeCapsule_Athena_classes.hpp"
#include "GC_Abilities_Death_FadeCapsule_Athena_parameters.hpp"


namespace SDK
{

// Function GC_Abilities_Death_FadeCapsule_Athena.GC_Abilities_Death_FadeCapsule_Athena_C.ExecuteUbergraph_GC_Abilities_Death_FadeCapsule_Athena
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGC_Abilities_Death_FadeCapsule_Athena_C::ExecuteUbergraph_GC_Abilities_Death_FadeCapsule_Athena(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GC_Abilities_Death_FadeCapsule_Athena_C", "ExecuteUbergraph_GC_Abilities_Death_FadeCapsule_Athena");

	Params::GC_Abilities_Death_FadeCapsule_Athena_C_ExecuteUbergraph_GC_Abilities_Death_FadeCapsule_Athena Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GC_Abilities_Death_FadeCapsule_Athena.GC_Abilities_Death_FadeCapsule_Athena_C.K2_HandleGameplayCue
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// class AActor*                           MyTarget                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EGameplayCueEvent                       EventType                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters           Parameters                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)

void AGC_Abilities_Death_FadeCapsule_Athena_C::K2_HandleGameplayCue(class AActor* MyTarget, EGameplayCueEvent EventType, const struct FGameplayCueParameters& Parameters)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GC_Abilities_Death_FadeCapsule_Athena_C", "K2_HandleGameplayCue");

	Params::GC_Abilities_Death_FadeCapsule_Athena_C_K2_HandleGameplayCue Parms{};

	Parms.MyTarget = MyTarget;
	Parms.EventType = EventType;
	Parms.Parameters = std::move(Parameters);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GC_Abilities_Death_FadeCapsule_Athena.GC_Abilities_Death_FadeCapsule_Athena_C.CapsuleFadeTL__UpdateFunc
// (BlueprintEvent)

void AGC_Abilities_Death_FadeCapsule_Athena_C::CapsuleFadeTL__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GC_Abilities_Death_FadeCapsule_Athena_C", "CapsuleFadeTL__UpdateFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GC_Abilities_Death_FadeCapsule_Athena.GC_Abilities_Death_FadeCapsule_Athena_C.CapsuleFadeTL__FinishedFunc
// (BlueprintEvent)

void AGC_Abilities_Death_FadeCapsule_Athena_C::CapsuleFadeTL__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GC_Abilities_Death_FadeCapsule_Athena_C", "CapsuleFadeTL__FinishedFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GC_Abilities_Death_FadeCapsule_Athena.GC_Abilities_Death_FadeCapsule_Athena_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AGC_Abilities_Death_FadeCapsule_Athena_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GC_Abilities_Death_FadeCapsule_Athena_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GC_Abilities_Death_FadeCapsule_Athena.GC_Abilities_Death_FadeCapsule_Athena_C.SkeletalMeshSetup
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortPlayerPawnAthena*            FortPawn                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGC_Abilities_Death_FadeCapsule_Athena_C::SkeletalMeshSetup(class AFortPlayerPawnAthena* FortPawn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GC_Abilities_Death_FadeCapsule_Athena_C", "SkeletalMeshSetup");

	Params::GC_Abilities_Death_FadeCapsule_Athena_C_SkeletalMeshSetup Parms{};

	Parms.FortPawn = FortPawn;

	UObject::ProcessEvent(Func, &Parms);
}

}

