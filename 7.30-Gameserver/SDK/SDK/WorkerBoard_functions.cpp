#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WorkerBoard

#include "Basic.hpp"

#include "WorkerBoard_classes.hpp"
#include "WorkerBoard_parameters.hpp"


namespace SDK
{

// Function WorkerBoard.WorkerBoard_C.ExecuteUbergraph_WorkerBoard
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AWorkerBoard_C::ExecuteUbergraph_WorkerBoard(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WorkerBoard_C", "ExecuteUbergraph_WorkerBoard");

	Params::WorkerBoard_C_ExecuteUbergraph_WorkerBoard Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WorkerBoard.WorkerBoard_C.CameraChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EFrontEndCamera                         NewCamera                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EFrontEndCamera                         OldCamera                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AWorkerBoard_C::CameraChanged(EFrontEndCamera NewCamera, EFrontEndCamera OldCamera)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WorkerBoard_C", "CameraChanged");

	Params::WorkerBoard_C_CameraChanged Parms{};

	Parms.NewCamera = NewCamera;
	Parms.OldCamera = OldCamera;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WorkerBoard.WorkerBoard_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AWorkerBoard_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WorkerBoard_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WorkerBoard.WorkerBoard_C.PopulateSuvivorsBoard
// (BlueprintCallable, BlueprintEvent)

void AWorkerBoard_C::PopulateSuvivorsBoard()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WorkerBoard_C", "PopulateSuvivorsBoard");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WorkerBoard.WorkerBoard_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AWorkerBoard_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WorkerBoard_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WorkerBoard.WorkerBoard_C.PopulateSurivorArt
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AWorkerBoard_C::PopulateSurivorArt()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WorkerBoard_C", "PopulateSurivorArt");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WorkerBoard.WorkerBoard_C.UpdateVisibility
// (Public, BlueprintCallable, BlueprintEvent)

void AWorkerBoard_C::UpdateVisibility()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WorkerBoard_C", "UpdateVisibility");

	UObject::ProcessEvent(Func, nullptr);
}

}

