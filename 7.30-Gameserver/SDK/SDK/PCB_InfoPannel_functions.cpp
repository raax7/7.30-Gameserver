#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PCB_InfoPannel

#include "Basic.hpp"

#include "PCB_InfoPannel_classes.hpp"
#include "PCB_InfoPannel_parameters.hpp"


namespace SDK
{

// Function PCB_InfoPannel.PCB_InfoPannel_C.ExecuteUbergraph_PCB_InfoPannel
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPCB_InfoPannel_C::ExecuteUbergraph_PCB_InfoPannel(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PCB_InfoPannel_C", "ExecuteUbergraph_PCB_InfoPannel");

	Params::PCB_InfoPannel_C_ExecuteUbergraph_PCB_InfoPannel Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PCB_InfoPannel.PCB_InfoPannel_C.CmsDataRead
// (Event, Public, BlueprintEvent)

void UPCB_InfoPannel_C::CmsDataRead()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PCB_InfoPannel_C", "CmsDataRead");

	UObject::ProcessEvent(Func, nullptr);
}

}

