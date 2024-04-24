#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MountedTurret_Gunner_AnimBP

#include "Basic.hpp"

#include "MountedTurret_Gunner_AnimBP_classes.hpp"
#include "MountedTurret_Gunner_AnimBP_parameters.hpp"


namespace SDK
{

// Function MountedTurret_Gunner_AnimBP.MountedTurret_Gunner_AnimBP_C.ExecuteUbergraph_MountedTurret_Gunner_AnimBP
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMountedTurret_Gunner_AnimBP_C::ExecuteUbergraph_MountedTurret_Gunner_AnimBP(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MountedTurret_Gunner_AnimBP_C", "ExecuteUbergraph_MountedTurret_Gunner_AnimBP");

	Params::MountedTurret_Gunner_AnimBP_C_ExecuteUbergraph_MountedTurret_Gunner_AnimBP Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MountedTurret_Gunner_AnimBP.MountedTurret_Gunner_AnimBP_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaTimeX                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMountedTurret_Gunner_AnimBP_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MountedTurret_Gunner_AnimBP_C", "BlueprintUpdateAnimation");

	Params::MountedTurret_Gunner_AnimBP_C_BlueprintUpdateAnimation Parms{};

	Parms.DeltaTimeX = DeltaTimeX;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MountedTurret_Gunner_AnimBP.MountedTurret_Gunner_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_MountedTurret_Gunner_AnimBP_AnimGraphNode_RotationOffsetBlendSpace_B42B4CC64E43087EE5F75AAA3AC31B87
// (BlueprintEvent)

void UMountedTurret_Gunner_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_MountedTurret_Gunner_AnimBP_AnimGraphNode_RotationOffsetBlendSpace_B42B4CC64E43087EE5F75AAA3AC31B87()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MountedTurret_Gunner_AnimBP_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_MountedTurret_Gunner_AnimBP_AnimGraphNode_RotationOffsetBlendSpace_B42B4CC64E43087EE5F75AAA3AC31B87");

	UObject::ProcessEvent(Func, nullptr);
}

}

