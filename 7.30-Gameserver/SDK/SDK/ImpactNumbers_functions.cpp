#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ImpactNumbers

#include "Basic.hpp"

#include "ImpactNumbers_classes.hpp"
#include "ImpactNumbers_parameters.hpp"


namespace SDK
{

// Function ImpactNumbers.ImpactNumbers_C.ExecuteUbergraph_ImpactNumbers
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AImpactNumbers_C::ExecuteUbergraph_ImpactNumbers(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ImpactNumbers_C", "ExecuteUbergraph_ImpactNumbers");

	Params::ImpactNumbers_C_ExecuteUbergraph_ImpactNumbers Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ImpactNumbers.ImpactNumbers_C.OnNewDamageNumber
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFortDamageNumberInfo            NewDamageNumberInfo                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)

void AImpactNumbers_C::OnNewDamageNumber(const struct FFortDamageNumberInfo& NewDamageNumberInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ImpactNumbers_C", "OnNewDamageNumber");

	Params::ImpactNumbers_C_OnNewDamageNumber Parms{};

	Parms.NewDamageNumberInfo = std::move(NewDamageNumberInfo);

	UObject::ProcessEvent(Func, &Parms);
}


// Function ImpactNumbers.ImpactNumbers_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AImpactNumbers_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ImpactNumbers_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ImpactNumbers.ImpactNumbers_C.init a new number set
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFortDamageNumberInfo            NewDamageHitInfoStruct                                 (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// struct FTransform                       OutCameraTransform                                     (Parm, OutParm, IsPlainOldData, NoDestructor)
// struct FVector                          OutNumberLocation                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AImpactNumbers_C::Init_a_new_number_set(struct FFortDamageNumberInfo& NewDamageHitInfoStruct, struct FTransform* OutCameraTransform, struct FVector* OutNumberLocation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ImpactNumbers_C", "init a new number set");

	Params::ImpactNumbers_C_Init_a_new_number_set Parms{};

	Parms.NewDamageHitInfoStruct = std::move(NewDamageHitInfoStruct);

	UObject::ProcessEvent(Func, &Parms);

	NewDamageHitInfoStruct = std::move(Parms.NewDamageHitInfoStruct);

	if (OutCameraTransform != nullptr)
		*OutCameraTransform = std::move(Parms.OutCameraTransform);

	if (OutNumberLocation != nullptr)
		*OutNumberLocation = std::move(Parms.OutNumberLocation);
}

}

