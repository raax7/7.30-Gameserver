#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: InputReflectorButton

#include "Basic.hpp"

#include "InputReflectorButton_classes.hpp"
#include "InputReflectorButton_parameters.hpp"


namespace SDK
{

// Function InputReflectorButton.InputReflectorButton_C.ExecuteUbergraph_InputReflectorButton
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UInputReflectorButton_C::ExecuteUbergraph_InputReflectorButton(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InputReflectorButton_C", "ExecuteUbergraph_InputReflectorButton");

	Params::InputReflectorButton_C_ExecuteUbergraph_InputReflectorButton Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function InputReflectorButton.InputReflectorButton_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UInputReflectorButton_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InputReflectorButton_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function InputReflectorButton.InputReflectorButton_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UInputReflectorButton_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InputReflectorButton_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function InputReflectorButton.InputReflectorButton_C.OnActionComplete
// (Event, Protected, BlueprintEvent)

void UInputReflectorButton_C::OnActionComplete()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InputReflectorButton_C", "OnActionComplete");

	UObject::ProcessEvent(Func, nullptr);
}


// Function InputReflectorButton.InputReflectorButton_C.OnActionProgress
// (Event, Protected, BlueprintEvent)
// Parameters:
// float                                   HeldPercent                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UInputReflectorButton_C::OnActionProgress(float HeldPercent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InputReflectorButton_C", "OnActionProgress");

	Params::InputReflectorButton_C_OnActionProgress Parms{};

	Parms.HeldPercent = HeldPercent;

	UObject::ProcessEvent(Func, &Parms);
}


// Function InputReflectorButton.InputReflectorButton_C.OnTriggeredInputActionChanged
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// struct FDataTableRowHandle              NewTriggeredAction                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)

void UInputReflectorButton_C::OnTriggeredInputActionChanged(const struct FDataTableRowHandle& NewTriggeredAction)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InputReflectorButton_C", "OnTriggeredInputActionChanged");

	Params::InputReflectorButton_C_OnTriggeredInputActionChanged Parms{};

	Parms.NewTriggeredAction = std::move(NewTriggeredAction);

	UObject::ProcessEvent(Func, &Parms);
}


// Function InputReflectorButton.InputReflectorButton_C.BndEvt__CommonActionWidgetAction_K2Node_ComponentBoundEvent_0_OnInputMethodChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                                    bUsingGamepad                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UInputReflectorButton_C::BndEvt__CommonActionWidgetAction_K2Node_ComponentBoundEvent_0_OnInputMethodChanged__DelegateSignature(bool bUsingGamepad)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InputReflectorButton_C", "BndEvt__CommonActionWidgetAction_K2Node_ComponentBoundEvent_0_OnInputMethodChanged__DelegateSignature");

	Params::InputReflectorButton_C_BndEvt__CommonActionWidgetAction_K2Node_ComponentBoundEvent_0_OnInputMethodChanged__DelegateSignature Parms{};

	Parms.bUsingGamepad = bUsingGamepad;

	UObject::ProcessEvent(Func, &Parms);
}


// Function InputReflectorButton.InputReflectorButton_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UInputReflectorButton_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InputReflectorButton_C", "PreConstruct");

	Params::InputReflectorButton_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function InputReflectorButton.InputReflectorButton_C.OnCurrentTextStyleChanged
// (Event, Protected, BlueprintEvent)

void UInputReflectorButton_C::OnCurrentTextStyleChanged()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InputReflectorButton_C", "OnCurrentTextStyleChanged");

	UObject::ProcessEvent(Func, nullptr);
}


// Function InputReflectorButton.InputReflectorButton_C.Set Text
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             Param_ButtonText                                       (BlueprintVisible, BlueprintReadOnly, Parm)

void UInputReflectorButton_C::Set_Text(const class FText& Param_ButtonText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InputReflectorButton_C", "Set Text");

	Params::InputReflectorButton_C_Set_Text Parms{};

	Parms.Param_ButtonText = std::move(Param_ButtonText);

	UObject::ProcessEvent(Func, &Parms);
}


// Function InputReflectorButton.InputReflectorButton_C.Set Icon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSlateBrush                      Param_IconBrush                                        (BlueprintVisible, BlueprintReadOnly, Parm)

void UInputReflectorButton_C::Set_Icon(const struct FSlateBrush& Param_IconBrush)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InputReflectorButton_C", "Set Icon");

	Params::InputReflectorButton_C_Set_Icon Parms{};

	Parms.Param_IconBrush = std::move(Param_IconBrush);

	UObject::ProcessEvent(Func, &Parms);
}


// Function InputReflectorButton.InputReflectorButton_C.InitializeButton
// (Public, BlueprintCallable, BlueprintEvent)

void UInputReflectorButton_C::InitializeButton()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InputReflectorButton_C", "InitializeButton");

	UObject::ProcessEvent(Func, nullptr);
}


// Function InputReflectorButton.InputReflectorButton_C.UpdateTextAndStyle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bUsingGamepad                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UInputReflectorButton_C::UpdateTextAndStyle(bool bUsingGamepad)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InputReflectorButton_C", "UpdateTextAndStyle");

	Params::InputReflectorButton_C_UpdateTextAndStyle Parms{};

	Parms.bUsingGamepad = bUsingGamepad;

	UObject::ProcessEvent(Func, &Parms);
}


// Function InputReflectorButton.InputReflectorButton_C.SetControllerStyle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                           Param_ControllerInputStyle                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UInputReflectorButton_C::SetControllerStyle(class UClass* Param_ControllerInputStyle)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InputReflectorButton_C", "SetControllerStyle");

	Params::InputReflectorButton_C_SetControllerStyle Parms{};

	Parms.Param_ControllerInputStyle = Param_ControllerInputStyle;

	UObject::ProcessEvent(Func, &Parms);
}


// Function InputReflectorButton.InputReflectorButton_C.UpdateText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UInputReflectorButton_C::UpdateText()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InputReflectorButton_C", "UpdateText");

	UObject::ProcessEvent(Func, nullptr);
}


// Function InputReflectorButton.InputReflectorButton_C.UpdateStyle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    UsingGamepad                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UInputReflectorButton_C::UpdateStyle(bool UsingGamepad)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InputReflectorButton_C", "UpdateStyle");

	Params::InputReflectorButton_C_UpdateStyle Parms{};

	Parms.UsingGamepad = UsingGamepad;

	UObject::ProcessEvent(Func, &Parms);
}


// Function InputReflectorButton.InputReflectorButton_C.SetMouseKeyboardStyle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                           Param_ControllerInputStyle                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UInputReflectorButton_C::SetMouseKeyboardStyle(class UClass* Param_ControllerInputStyle)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InputReflectorButton_C", "SetMouseKeyboardStyle");

	Params::InputReflectorButton_C_SetMouseKeyboardStyle Parms{};

	Parms.Param_ControllerInputStyle = Param_ControllerInputStyle;

	UObject::ProcessEvent(Func, &Parms);
}


// Function InputReflectorButton.InputReflectorButton_C.UpdateContentAlignment
// (Private, BlueprintCallable, BlueprintEvent)

void UInputReflectorButton_C::UpdateContentAlignment()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InputReflectorButton_C", "UpdateContentAlignment");

	UObject::ProcessEvent(Func, nullptr);
}


// Function InputReflectorButton.InputReflectorButton_C.SetContentAlignment
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EHorizontalAlignment                    Param_ContentAlignment                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UInputReflectorButton_C::SetContentAlignment(EHorizontalAlignment Param_ContentAlignment)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InputReflectorButton_C", "SetContentAlignment");

	Params::InputReflectorButton_C_SetContentAlignment Parms{};

	Parms.Param_ContentAlignment = Param_ContentAlignment;

	UObject::ProcessEvent(Func, &Parms);
}


// Function InputReflectorButton.InputReflectorButton_C.UpdateTextStyle
// (Public, BlueprintCallable, BlueprintEvent)

void UInputReflectorButton_C::UpdateTextStyle()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InputReflectorButton_C", "UpdateTextStyle");

	UObject::ProcessEvent(Func, nullptr);
}


// Function InputReflectorButton.InputReflectorButton_C.SetInitialMouseKeyboardStyle
// (Public, BlueprintCallable, BlueprintEvent)

void UInputReflectorButton_C::SetInitialMouseKeyboardStyle()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InputReflectorButton_C", "SetInitialMouseKeyboardStyle");

	UObject::ProcessEvent(Func, nullptr);
}


// Function InputReflectorButton.InputReflectorButton_C.SetTextInternal
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             InButtonText                                           (BlueprintVisible, BlueprintReadOnly, Parm)

void UInputReflectorButton_C::SetTextInternal(const class FText& InButtonText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InputReflectorButton_C", "SetTextInternal");

	Params::InputReflectorButton_C_SetTextInternal Parms{};

	Parms.InButtonText = std::move(InButtonText);

	UObject::ProcessEvent(Func, &Parms);
}


// Function InputReflectorButton.InputReflectorButton_C.ShowIcon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bShouldShow                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UInputReflectorButton_C::ShowIcon(bool bShouldShow)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InputReflectorButton_C", "ShowIcon");

	Params::InputReflectorButton_C_ShowIcon Parms{};

	Parms.bShouldShow = bShouldShow;

	UObject::ProcessEvent(Func, &Parms);
}

}

