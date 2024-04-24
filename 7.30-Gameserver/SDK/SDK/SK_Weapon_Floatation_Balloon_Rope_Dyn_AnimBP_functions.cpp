#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SK_Weapon_Floatation_Balloon_Rope_Dyn_AnimBP

#include "Basic.hpp"

#include "SK_Weapon_Floatation_Balloon_Rope_Dyn_AnimBP_classes.hpp"
#include "SK_Weapon_Floatation_Balloon_Rope_Dyn_AnimBP_parameters.hpp"


namespace SDK
{

// Function SK_Weapon_Floatation_Balloon_Rope_Dyn_AnimBP.SK_Weapon_Floatation_Balloon_Rope_Dyn_AnimBP_C.ExecuteUbergraph_SK_Weapon_Floatation_Balloon_Rope_Dyn_AnimBP
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USK_Weapon_Floatation_Balloon_Rope_Dyn_AnimBP_C::ExecuteUbergraph_SK_Weapon_Floatation_Balloon_Rope_Dyn_AnimBP(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SK_Weapon_Floatation_Balloon_Rope_Dyn_AnimBP_C", "ExecuteUbergraph_SK_Weapon_Floatation_Balloon_Rope_Dyn_AnimBP");

	Params::SK_Weapon_Floatation_Balloon_Rope_Dyn_AnimBP_C_ExecuteUbergraph_SK_Weapon_Floatation_Balloon_Rope_Dyn_AnimBP Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SK_Weapon_Floatation_Balloon_Rope_Dyn_AnimBP.SK_Weapon_Floatation_Balloon_Rope_Dyn_AnimBP_C.BlueprintInitializeAnimation
// (Event, Public, BlueprintEvent)

void USK_Weapon_Floatation_Balloon_Rope_Dyn_AnimBP_C::BlueprintInitializeAnimation()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SK_Weapon_Floatation_Balloon_Rope_Dyn_AnimBP_C", "BlueprintInitializeAnimation");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SK_Weapon_Floatation_Balloon_Rope_Dyn_AnimBP.SK_Weapon_Floatation_Balloon_Rope_Dyn_AnimBP_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaTimeX                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USK_Weapon_Floatation_Balloon_Rope_Dyn_AnimBP_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SK_Weapon_Floatation_Balloon_Rope_Dyn_AnimBP_C", "BlueprintUpdateAnimation");

	Params::SK_Weapon_Floatation_Balloon_Rope_Dyn_AnimBP_C_BlueprintUpdateAnimation Parms{};

	Parms.DeltaTimeX = DeltaTimeX;

	UObject::ProcessEvent(Func, &Parms);
}

}

