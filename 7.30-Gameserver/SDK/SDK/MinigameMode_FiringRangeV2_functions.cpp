#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MinigameMode_FiringRangeV2

#include "Basic.hpp"

#include "MinigameMode_FiringRangeV2_classes.hpp"
#include "MinigameMode_FiringRangeV2_parameters.hpp"


namespace SDK
{

// Function MinigameMode_FiringRangeV2.MinigameMode_FiringRangeV2_C.ExecuteUbergraph_MinigameMode_FiringRangeV2
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AMinigameMode_FiringRangeV2_C::ExecuteUbergraph_MinigameMode_FiringRangeV2(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MinigameMode_FiringRangeV2_C", "ExecuteUbergraph_MinigameMode_FiringRangeV2");

	Params::MinigameMode_FiringRangeV2_C_ExecuteUbergraph_MinigameMode_FiringRangeV2 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MinigameMode_FiringRangeV2.MinigameMode_FiringRangeV2_C.HandleMinigameStarted
// (Event, Protected, BlueprintEvent)

void AMinigameMode_FiringRangeV2_C::HandleMinigameStarted()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MinigameMode_FiringRangeV2_C", "HandleMinigameStarted");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MinigameMode_FiringRangeV2.MinigameMode_FiringRangeV2_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AMinigameMode_FiringRangeV2_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MinigameMode_FiringRangeV2_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MinigameMode_FiringRangeV2.MinigameMode_FiringRangeV2_C.GiftWeapons
// (Public, BlueprintCallable, BlueprintEvent)

void AMinigameMode_FiringRangeV2_C::GiftWeapons()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MinigameMode_FiringRangeV2_C", "GiftWeapons");

	UObject::ProcessEvent(Func, nullptr);
}

}

