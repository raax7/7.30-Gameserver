#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: LargeStatWidget

#include "Basic.hpp"

#include "LargeStatWidget_classes.hpp"
#include "LargeStatWidget_parameters.hpp"


namespace SDK
{

// Function LargeStatWidget.LargeStatWidget_C.ExecuteUbergraph_LargeStatWidget
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULargeStatWidget_C::ExecuteUbergraph_LargeStatWidget(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LargeStatWidget_C", "ExecuteUbergraph_LargeStatWidget");

	Params::LargeStatWidget_C_ExecuteUbergraph_LargeStatWidget Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LargeStatWidget.LargeStatWidget_C.OnStatChanged
// (Event, Protected, BlueprintEvent)

void ULargeStatWidget_C::OnStatChanged()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LargeStatWidget_C", "OnStatChanged");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LargeStatWidget.LargeStatWidget_C.SetStatEntryNumber
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Param_StatEntryNumber                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULargeStatWidget_C::SetStatEntryNumber(int32 Param_StatEntryNumber)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LargeStatWidget_C", "SetStatEntryNumber");

	Params::LargeStatWidget_C_SetStatEntryNumber Parms{};

	Parms.Param_StatEntryNumber = Param_StatEntryNumber;

	UObject::ProcessEvent(Func, &Parms);
}

}

