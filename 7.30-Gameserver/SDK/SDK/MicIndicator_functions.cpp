#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MicIndicator

#include "Basic.hpp"

#include "MicIndicator_classes.hpp"
#include "MicIndicator_parameters.hpp"


namespace SDK
{

// Function MicIndicator.MicIndicator_C.ExecuteUbergraph_MicIndicator
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMicIndicator_C::ExecuteUbergraph_MicIndicator(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MicIndicator_C", "ExecuteUbergraph_MicIndicator");

	Params::MicIndicator_C_ExecuteUbergraph_MicIndicator Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MicIndicator.MicIndicator_C.OnPlayerMuted
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                                    Param_bIsMuted                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMicIndicator_C::OnPlayerMuted(bool Param_bIsMuted)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MicIndicator_C", "OnPlayerMuted");

	Params::MicIndicator_C_OnPlayerMuted Parms{};

	Parms.Param_bIsMuted = Param_bIsMuted;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MicIndicator.MicIndicator_C.OnPlayerTalkingChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                                    Param_bIsTalking                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMicIndicator_C::OnPlayerTalkingChanged(bool Param_bIsTalking)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MicIndicator_C", "OnPlayerTalkingChanged");

	Params::MicIndicator_C_OnPlayerTalkingChanged Parms{};

	Parms.Param_bIsTalking = Param_bIsTalking;

	UObject::ProcessEvent(Func, &Parms);
}

}

