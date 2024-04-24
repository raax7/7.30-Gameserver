#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Rift_Athena_Skydive

#include "Basic.hpp"

#include "GA_Rift_Athena_Skydive_classes.hpp"
#include "GA_Rift_Athena_Skydive_parameters.hpp"


namespace SDK
{

// Function GA_Rift_Athena_Skydive.GA_Rift_Athena_Skydive_C.ExecuteUbergraph_GA_Rift_Athena_Skydive
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Rift_Athena_Skydive_C::ExecuteUbergraph_GA_Rift_Athena_Skydive(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Rift_Athena_Skydive_C", "ExecuteUbergraph_GA_Rift_Athena_Skydive");

	Params::GA_Rift_Athena_Skydive_C_ExecuteUbergraph_GA_Rift_Athena_Skydive Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_Rift_Athena_Skydive.GA_Rift_Athena_Skydive_C.SetPlayerToSkydive
// (BlueprintCallable, BlueprintEvent)

void UGA_Rift_Athena_Skydive_C::SetPlayerToSkydive()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Rift_Athena_Skydive_C", "SetPlayerToSkydive");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_Rift_Athena_Skydive.GA_Rift_Athena_Skydive_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)

void UGA_Rift_Athena_Skydive_C::K2_ActivateAbility()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Rift_Athena_Skydive_C", "K2_ActivateAbility");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_Rift_Athena_Skydive.GA_Rift_Athena_Skydive_C.OnChange_16E0EB444DDAC48E8E9CC99B762C0DC5
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EMovementMode                           NewMovementMode                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Rift_Athena_Skydive_C::OnChange_16E0EB444DDAC48E8E9CC99B762C0DC5(EMovementMode NewMovementMode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Rift_Athena_Skydive_C", "OnChange_16E0EB444DDAC48E8E9CC99B762C0DC5");

	Params::GA_Rift_Athena_Skydive_C_OnChange_16E0EB444DDAC48E8E9CC99B762C0DC5 Parms{};

	Parms.NewMovementMode = NewMovementMode;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_Rift_Athena_Skydive.GA_Rift_Athena_Skydive_C.OnBlendOut_AA0523504B7CA4F488E1E6A11F48308A
// (BlueprintCallable, BlueprintEvent)

void UGA_Rift_Athena_Skydive_C::OnBlendOut_AA0523504B7CA4F488E1E6A11F48308A()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Rift_Athena_Skydive_C", "OnBlendOut_AA0523504B7CA4F488E1E6A11F48308A");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_Rift_Athena_Skydive.GA_Rift_Athena_Skydive_C.OnCancelled_AA0523504B7CA4F488E1E6A11F48308A
// (BlueprintCallable, BlueprintEvent)

void UGA_Rift_Athena_Skydive_C::OnCancelled_AA0523504B7CA4F488E1E6A11F48308A()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Rift_Athena_Skydive_C", "OnCancelled_AA0523504B7CA4F488E1E6A11F48308A");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_Rift_Athena_Skydive.GA_Rift_Athena_Skydive_C.OnCompleted_AA0523504B7CA4F488E1E6A11F48308A
// (BlueprintCallable, BlueprintEvent)

void UGA_Rift_Athena_Skydive_C::OnCompleted_AA0523504B7CA4F488E1E6A11F48308A()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Rift_Athena_Skydive_C", "OnCompleted_AA0523504B7CA4F488E1E6A11F48308A");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_Rift_Athena_Skydive.GA_Rift_Athena_Skydive_C.OnInterrupted_AA0523504B7CA4F488E1E6A11F48308A
// (BlueprintCallable, BlueprintEvent)

void UGA_Rift_Athena_Skydive_C::OnInterrupted_AA0523504B7CA4F488E1E6A11F48308A()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Rift_Athena_Skydive_C", "OnInterrupted_AA0523504B7CA4F488E1E6A11F48308A");

	UObject::ProcessEvent(Func, nullptr);
}

}

