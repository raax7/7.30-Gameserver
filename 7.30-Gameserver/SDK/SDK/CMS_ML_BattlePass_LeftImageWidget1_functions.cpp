#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CMS_ML_BattlePass_LeftImageWidget1

#include "Basic.hpp"

#include "CMS_ML_BattlePass_LeftImageWidget1_classes.hpp"
#include "CMS_ML_BattlePass_LeftImageWidget1_parameters.hpp"


namespace SDK
{

// Function CMS_ML_BattlePass_LeftImageWidget1.CMS_ML_BattlePass_LeftImageWidget1_C.ExecuteUbergraph_CMS_ML_BattlePass_LeftImageWidget1
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCMS_ML_BattlePass_LeftImageWidget1_C::ExecuteUbergraph_CMS_ML_BattlePass_LeftImageWidget1(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CMS_ML_BattlePass_LeftImageWidget1_C", "ExecuteUbergraph_CMS_ML_BattlePass_LeftImageWidget1");

	Params::CMS_ML_BattlePass_LeftImageWidget1_C_ExecuteUbergraph_CMS_ML_BattlePass_LeftImageWidget1 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CMS_ML_BattlePass_LeftImageWidget1.CMS_ML_BattlePass_LeftImageWidget1_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UCMS_ML_BattlePass_LeftImageWidget1_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CMS_ML_BattlePass_LeftImageWidget1_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

}

