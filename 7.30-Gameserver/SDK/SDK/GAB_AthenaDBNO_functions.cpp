#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GAB_AthenaDBNO

#include "Basic.hpp"

#include "GAB_AthenaDBNO_classes.hpp"
#include "GAB_AthenaDBNO_parameters.hpp"


namespace SDK
{

// Function GAB_AthenaDBNO.GAB_AthenaDBNO_C.ExecuteUbergraph_GAB_AthenaDBNO
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGAB_AthenaDBNO_C::ExecuteUbergraph_GAB_AthenaDBNO(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GAB_AthenaDBNO_C", "ExecuteUbergraph_GAB_AthenaDBNO");

	Params::GAB_AthenaDBNO_C_ExecuteUbergraph_GAB_AthenaDBNO Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GAB_AthenaDBNO.GAB_AthenaDBNO_C.K2_ActivateAbilityFromEvent
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// struct FGameplayEventData               EventData                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UGAB_AthenaDBNO_C::K2_ActivateAbilityFromEvent(const struct FGameplayEventData& EventData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GAB_AthenaDBNO_C", "K2_ActivateAbilityFromEvent");

	Params::GAB_AthenaDBNO_C_K2_ActivateAbilityFromEvent Parms{};

	Parms.EventData = std::move(EventData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GAB_AthenaDBNO.GAB_AthenaDBNO_C.K2_OnEndAbility
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                                    bWasCancelled                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UGAB_AthenaDBNO_C::K2_OnEndAbility(bool bWasCancelled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GAB_AthenaDBNO_C", "K2_OnEndAbility");

	Params::GAB_AthenaDBNO_C_K2_OnEndAbility Parms{};

	Parms.bWasCancelled = bWasCancelled;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GAB_AthenaDBNO.GAB_AthenaDBNO_C.OnFinish_4C169D40441E45B462D83CBBA67F6E45
// (BlueprintCallable, BlueprintEvent)

void UGAB_AthenaDBNO_C::OnFinish_4C169D40441E45B462D83CBBA67F6E45()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GAB_AthenaDBNO_C", "OnFinish_4C169D40441E45B462D83CBBA67F6E45");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GAB_AthenaDBNO.GAB_AthenaDBNO_C.OnStateEnded_C85094F843D5075FE4872C95AFC5D6B6
// (BlueprintCallable, BlueprintEvent)

void UGAB_AthenaDBNO_C::OnStateEnded_C85094F843D5075FE4872C95AFC5D6B6()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GAB_AthenaDBNO_C", "OnStateEnded_C85094F843D5075FE4872C95AFC5D6B6");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GAB_AthenaDBNO.GAB_AthenaDBNO_C.OnStateInterrupted_C85094F843D5075FE4872C95AFC5D6B6
// (BlueprintCallable, BlueprintEvent)

void UGAB_AthenaDBNO_C::OnStateInterrupted_C85094F843D5075FE4872C95AFC5D6B6()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GAB_AthenaDBNO_C", "OnStateInterrupted_C85094F843D5075FE4872C95AFC5D6B6");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GAB_AthenaDBNO.GAB_AthenaDBNO_C.OnCompleted_F0F6785443BD2E74F5591884CB19F35F
// (BlueprintCallable, BlueprintEvent)

void UGAB_AthenaDBNO_C::OnCompleted_F0F6785443BD2E74F5591884CB19F35F()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GAB_AthenaDBNO_C", "OnCompleted_F0F6785443BD2E74F5591884CB19F35F");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GAB_AthenaDBNO.GAB_AthenaDBNO_C.OnBlendOut_F0F6785443BD2E74F5591884CB19F35F
// (BlueprintCallable, BlueprintEvent)

void UGAB_AthenaDBNO_C::OnBlendOut_F0F6785443BD2E74F5591884CB19F35F()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GAB_AthenaDBNO_C", "OnBlendOut_F0F6785443BD2E74F5591884CB19F35F");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GAB_AthenaDBNO.GAB_AthenaDBNO_C.OnInterrupted_F0F6785443BD2E74F5591884CB19F35F
// (BlueprintCallable, BlueprintEvent)

void UGAB_AthenaDBNO_C::OnInterrupted_F0F6785443BD2E74F5591884CB19F35F()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GAB_AthenaDBNO_C", "OnInterrupted_F0F6785443BD2E74F5591884CB19F35F");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GAB_AthenaDBNO.GAB_AthenaDBNO_C.OnCancelled_F0F6785443BD2E74F5591884CB19F35F
// (BlueprintCallable, BlueprintEvent)

void UGAB_AthenaDBNO_C::OnCancelled_F0F6785443BD2E74F5591884CB19F35F()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GAB_AthenaDBNO_C", "OnCancelled_F0F6785443BD2E74F5591884CB19F35F");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GAB_AthenaDBNO.GAB_AthenaDBNO_C.InitializeDeathHitDirection
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayEventData               EventHitData                                           (BlueprintVisible, BlueprintReadOnly, Parm)

void UGAB_AthenaDBNO_C::InitializeDeathHitDirection(const struct FGameplayEventData& EventHitData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GAB_AthenaDBNO_C", "InitializeDeathHitDirection");

	Params::GAB_AthenaDBNO_C_InitializeDeathHitDirection Parms{};

	Parms.EventHitData = std::move(EventHitData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GAB_AthenaDBNO.GAB_AthenaDBNO_C.GetInitialHealAmount
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   Health                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGAB_AthenaDBNO_C::GetInitialHealAmount(float* Health)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GAB_AthenaDBNO_C", "GetInitialHealAmount");

	Params::GAB_AthenaDBNO_C_GetInitialHealAmount Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Health != nullptr)
		*Health = Parms.Health;
}

}

