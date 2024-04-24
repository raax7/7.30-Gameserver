#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PlayerActionedWindow

#include "Basic.hpp"

#include "PlayerActionedWindow_classes.hpp"
#include "PlayerActionedWindow_parameters.hpp"


namespace SDK
{

// Function PlayerActionedWindow.PlayerActionedWindow_C.ExecuteUbergraph_PlayerActionedWindow
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPlayerActionedWindow_C::ExecuteUbergraph_PlayerActionedWindow(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerActionedWindow_C", "ExecuteUbergraph_PlayerActionedWindow");

	Params::PlayerActionedWindow_C_ExecuteUbergraph_PlayerActionedWindow Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PlayerActionedWindow.PlayerActionedWindow_C.BndEvt__CloseButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*                    Button                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPlayerActionedWindow_C::BndEvt__CloseButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerActionedWindow_C", "BndEvt__CloseButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature");

	Params::PlayerActionedWindow_C_BndEvt__CloseButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PlayerActionedWindow.PlayerActionedWindow_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UPlayerActionedWindow_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerActionedWindow_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PlayerActionedWindow.PlayerActionedWindow_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UPlayerActionedWindow_C::OnActivated()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerActionedWindow_C", "OnActivated");

	UObject::ProcessEvent(Func, nullptr);
}

}

