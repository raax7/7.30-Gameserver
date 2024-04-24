#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_CameraLens_Cube_Area

#include "Basic.hpp"

#include "B_CameraLens_Cube_Area_classes.hpp"
#include "B_CameraLens_Cube_Area_parameters.hpp"


namespace SDK
{

// Function B_CameraLens_Cube_Area.B_CameraLens_Cube_Area_C.ExecuteUbergraph_B_CameraLens_Cube_Area
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_CameraLens_Cube_Area_C::ExecuteUbergraph_B_CameraLens_Cube_Area(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_CameraLens_Cube_Area_C", "ExecuteUbergraph_B_CameraLens_Cube_Area");

	Params::B_CameraLens_Cube_Area_C_ExecuteUbergraph_B_CameraLens_Cube_Area Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_CameraLens_Cube_Area.B_CameraLens_Cube_Area_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AB_CameraLens_Cube_Area_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_CameraLens_Cube_Area_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_CameraLens_Cube_Area.B_CameraLens_Cube_Area_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AB_CameraLens_Cube_Area_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_CameraLens_Cube_Area_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}

}

