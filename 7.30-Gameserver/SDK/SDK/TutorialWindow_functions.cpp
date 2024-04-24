#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TutorialWindow

#include "Basic.hpp"

#include "TutorialWindow_classes.hpp"
#include "TutorialWindow_parameters.hpp"


namespace SDK
{

// Function TutorialWindow.TutorialWindow_C.OnRequestRetry__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UTutorialWindow_C::OnRequestRetry__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TutorialWindow_C", "OnRequestRetry__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function TutorialWindow.TutorialWindow_C.ExecuteUbergraph_TutorialWindow
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTutorialWindow_C::ExecuteUbergraph_TutorialWindow(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TutorialWindow_C", "ExecuteUbergraph_TutorialWindow");

	Params::TutorialWindow_C_ExecuteUbergraph_TutorialWindow Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function TutorialWindow.TutorialWindow_C.BndEvt__IconTextButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*                    Button                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTutorialWindow_C::BndEvt__IconTextButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TutorialWindow_C", "BndEvt__IconTextButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature");

	Params::TutorialWindow_C_BndEvt__IconTextButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}


// Function TutorialWindow.TutorialWindow_C.SetDescription
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             Param_Description                                      (BlueprintVisible, BlueprintReadOnly, Parm)

void UTutorialWindow_C::SetDescription(const class FText& Param_Description)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TutorialWindow_C", "SetDescription");

	Params::TutorialWindow_C_SetDescription Parms{};

	Parms.Param_Description = std::move(Param_Description);

	UObject::ProcessEvent(Func, &Parms);
}

}

