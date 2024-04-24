#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ProjectileTrajectory_AthenaRed_Playset

#include "Basic.hpp"

#include "BP_ProjectileTrajectory_AthenaRed_Playset_classes.hpp"
#include "BP_ProjectileTrajectory_AthenaRed_Playset_parameters.hpp"


namespace SDK
{

// Function BP_ProjectileTrajectory_AthenaRed_Playset.BP_ProjectileTrajectory_AthenaRed_Playset_C.ExecuteUbergraph_BP_ProjectileTrajectory_AthenaRed_Playset
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ProjectileTrajectory_AthenaRed_Playset_C::ExecuteUbergraph_BP_ProjectileTrajectory_AthenaRed_Playset(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ProjectileTrajectory_AthenaRed_Playset_C", "ExecuteUbergraph_BP_ProjectileTrajectory_AthenaRed_Playset");

	Params::BP_ProjectileTrajectory_AthenaRed_Playset_C_ExecuteUbergraph_BP_ProjectileTrajectory_AthenaRed_Playset Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ProjectileTrajectory_AthenaRed_Playset.BP_ProjectileTrajectory_AthenaRed_Playset_C.ReceiveDestroyed
// (Event, Public, BlueprintEvent)

void ABP_ProjectileTrajectory_AthenaRed_Playset_C::ReceiveDestroyed()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ProjectileTrajectory_AthenaRed_Playset_C", "ReceiveDestroyed");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ProjectileTrajectory_AthenaRed_Playset.BP_ProjectileTrajectory_AthenaRed_Playset_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_ProjectileTrajectory_AthenaRed_Playset_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ProjectileTrajectory_AthenaRed_Playset_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ProjectileTrajectory_AthenaRed_Playset.BP_ProjectileTrajectory_AthenaRed_Playset_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_ProjectileTrajectory_AthenaRed_Playset_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ProjectileTrajectory_AthenaRed_Playset_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}

}

