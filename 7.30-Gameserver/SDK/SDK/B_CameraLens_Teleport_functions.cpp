#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_CameraLens_Teleport

#include "Basic.hpp"

#include "B_CameraLens_Teleport_classes.hpp"
#include "B_CameraLens_Teleport_parameters.hpp"


namespace SDK
{

// Function B_CameraLens_Teleport.B_CameraLens_Teleport_C.ExecuteUbergraph_B_CameraLens_Teleport
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_CameraLens_Teleport_C::ExecuteUbergraph_B_CameraLens_Teleport(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_CameraLens_Teleport_C", "ExecuteUbergraph_B_CameraLens_Teleport");

	Params::B_CameraLens_Teleport_C_ExecuteUbergraph_B_CameraLens_Teleport Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_CameraLens_Teleport.B_CameraLens_Teleport_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AB_CameraLens_Teleport_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_CameraLens_Teleport_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_CameraLens_Teleport.B_CameraLens_Teleport_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AB_CameraLens_Teleport_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_CameraLens_Teleport_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}

}

