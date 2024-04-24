#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GAT_DanceGrenade

#include "Basic.hpp"

#include "GAT_DanceGrenade_classes.hpp"
#include "GAT_DanceGrenade_parameters.hpp"


namespace SDK
{

// Function GAT_DanceGrenade.GAT_DanceGrenade_C.ExecuteUbergraph_GAT_DanceGrenade
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGAT_DanceGrenade_C::ExecuteUbergraph_GAT_DanceGrenade(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GAT_DanceGrenade_C", "ExecuteUbergraph_GAT_DanceGrenade");

	Params::GAT_DanceGrenade_C_ExecuteUbergraph_GAT_DanceGrenade Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GAT_DanceGrenade.GAT_DanceGrenade_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)

void UGAT_DanceGrenade_C::K2_ActivateAbility()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GAT_DanceGrenade_C", "K2_ActivateAbility");

	UObject::ProcessEvent(Func, nullptr);
}

}

