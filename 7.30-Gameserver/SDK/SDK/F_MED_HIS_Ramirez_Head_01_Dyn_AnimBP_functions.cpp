#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: F_MED_HIS_Ramirez_Head_01_Dyn_AnimBP

#include "Basic.hpp"

#include "F_MED_HIS_Ramirez_Head_01_Dyn_AnimBP_classes.hpp"
#include "F_MED_HIS_Ramirez_Head_01_Dyn_AnimBP_parameters.hpp"


namespace SDK
{

// Function F_MED_HIS_Ramirez_Head_01_Dyn_AnimBP.F_MED_HIS_Ramirez_Head_01_Dyn_AnimBP_C.ExecuteUbergraph_F_MED_HIS_Ramirez_Head_01_Dyn_AnimBP
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UF_MED_HIS_Ramirez_Head_01_Dyn_AnimBP_C::ExecuteUbergraph_F_MED_HIS_Ramirez_Head_01_Dyn_AnimBP(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("F_MED_HIS_Ramirez_Head_01_Dyn_AnimBP_C", "ExecuteUbergraph_F_MED_HIS_Ramirez_Head_01_Dyn_AnimBP");

	Params::F_MED_HIS_Ramirez_Head_01_Dyn_AnimBP_C_ExecuteUbergraph_F_MED_HIS_Ramirez_Head_01_Dyn_AnimBP Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function F_MED_HIS_Ramirez_Head_01_Dyn_AnimBP.F_MED_HIS_Ramirez_Head_01_Dyn_AnimBP_C.BlueprintInitializeAnimation
// (Event, Public, BlueprintEvent)

void UF_MED_HIS_Ramirez_Head_01_Dyn_AnimBP_C::BlueprintInitializeAnimation()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("F_MED_HIS_Ramirez_Head_01_Dyn_AnimBP_C", "BlueprintInitializeAnimation");

	UObject::ProcessEvent(Func, nullptr);
}

}

