#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MainModeItemDetailsHostPanel

#include "Basic.hpp"

#include "MainModeItemDetailsHostPanel_classes.hpp"
#include "MainModeItemDetailsHostPanel_parameters.hpp"


namespace SDK
{

// Function MainModeItemDetailsHostPanel.MainModeItemDetailsHostPanel_C.ExecuteUbergraph_MainModeItemDetailsHostPanel
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMainModeItemDetailsHostPanel_C::ExecuteUbergraph_MainModeItemDetailsHostPanel(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MainModeItemDetailsHostPanel_C", "ExecuteUbergraph_MainModeItemDetailsHostPanel");

	Params::MainModeItemDetailsHostPanel_C_ExecuteUbergraph_MainModeItemDetailsHostPanel Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MainModeItemDetailsHostPanel.MainModeItemDetailsHostPanel_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UMainModeItemDetailsHostPanel_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MainModeItemDetailsHostPanel_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MainModeItemDetailsHostPanel.MainModeItemDetailsHostPanel_C.HandleHasItemMarkedForMulchingChanged
// (Event, Protected, BlueprintEvent)

void UMainModeItemDetailsHostPanel_C::HandleHasItemMarkedForMulchingChanged()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MainModeItemDetailsHostPanel_C", "HandleHasItemMarkedForMulchingChanged");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MainModeItemDetailsHostPanel.MainModeItemDetailsHostPanel_C.UpdateDescriptionVisibility
// (Public, BlueprintCallable, BlueprintEvent)

void UMainModeItemDetailsHostPanel_C::UpdateDescriptionVisibility()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MainModeItemDetailsHostPanel_C", "UpdateDescriptionVisibility");

	UObject::ProcessEvent(Func, nullptr);
}

}

