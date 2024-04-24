#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: QuestSceneActor

#include "Basic.hpp"

#include "QuestSceneActor_classes.hpp"
#include "QuestSceneActor_parameters.hpp"


namespace SDK
{

// Function QuestSceneActor.QuestSceneActor_C.ExecuteUbergraph_QuestSceneActor
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AQuestSceneActor_C::ExecuteUbergraph_QuestSceneActor(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestSceneActor_C", "ExecuteUbergraph_QuestSceneActor");

	Params::QuestSceneActor_C_ExecuteUbergraph_QuestSceneActor Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function QuestSceneActor.QuestSceneActor_C.CameraChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EFrontEndCamera                         NewCamera                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EFrontEndCamera                         OldCamera                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AQuestSceneActor_C::CameraChanged(EFrontEndCamera NewCamera, EFrontEndCamera OldCamera)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestSceneActor_C", "CameraChanged");

	Params::QuestSceneActor_C_CameraChanged Parms{};

	Parms.NewCamera = NewCamera;
	Parms.OldCamera = OldCamera;

	UObject::ProcessEvent(Func, &Parms);
}


// Function QuestSceneActor.QuestSceneActor_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AQuestSceneActor_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestSceneActor_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function QuestSceneActor.QuestSceneActor_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AQuestSceneActor_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestSceneActor_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}

}

