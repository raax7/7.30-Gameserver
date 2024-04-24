#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Generic_BotTurretExplosion

#include "Basic.hpp"

#include "GA_Generic_BotTurretExplosion_classes.hpp"
#include "GA_Generic_BotTurretExplosion_parameters.hpp"


namespace SDK
{

// Function GA_Generic_BotTurretExplosion.GA_Generic_BotTurretExplosion_C.ExecuteUbergraph_GA_Generic_BotTurretExplosion
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Generic_BotTurretExplosion_C::ExecuteUbergraph_GA_Generic_BotTurretExplosion(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Generic_BotTurretExplosion_C", "ExecuteUbergraph_GA_Generic_BotTurretExplosion");

	Params::GA_Generic_BotTurretExplosion_C_ExecuteUbergraph_GA_Generic_BotTurretExplosion Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_Generic_BotTurretExplosion.GA_Generic_BotTurretExplosion_C.Cancelled_0AE6B0594940799A0AB506A647527DAE
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayTag                     ApplicationTag                                         (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void UGA_Generic_BotTurretExplosion_C::Cancelled_0AE6B0594940799A0AB506A647527DAE(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Generic_BotTurretExplosion_C", "Cancelled_0AE6B0594940799A0AB506A647527DAE");

	Params::GA_Generic_BotTurretExplosion_C_Cancelled_0AE6B0594940799A0AB506A647527DAE Parms{};

	Parms.TargetData = std::move(TargetData);
	Parms.ApplicationTag = std::move(ApplicationTag);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_Generic_BotTurretExplosion.GA_Generic_BotTurretExplosion_C.K2_ActivateAbilityFromEvent
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// struct FGameplayEventData               EventData                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UGA_Generic_BotTurretExplosion_C::K2_ActivateAbilityFromEvent(const struct FGameplayEventData& EventData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Generic_BotTurretExplosion_C", "K2_ActivateAbilityFromEvent");

	Params::GA_Generic_BotTurretExplosion_C_K2_ActivateAbilityFromEvent Parms{};

	Parms.EventData = std::move(EventData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_Generic_BotTurretExplosion.GA_Generic_BotTurretExplosion_C.Targeted_0AE6B0594940799A0AB506A647527DAE
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayTag                     ApplicationTag                                         (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void UGA_Generic_BotTurretExplosion_C::Targeted_0AE6B0594940799A0AB506A647527DAE(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Generic_BotTurretExplosion_C", "Targeted_0AE6B0594940799A0AB506A647527DAE");

	Params::GA_Generic_BotTurretExplosion_C_Targeted_0AE6B0594940799A0AB506A647527DAE Parms{};

	Parms.TargetData = std::move(TargetData);
	Parms.ApplicationTag = std::move(ApplicationTag);

	UObject::ProcessEvent(Func, &Parms);
}

}

