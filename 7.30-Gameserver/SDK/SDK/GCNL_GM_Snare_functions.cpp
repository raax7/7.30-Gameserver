#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GCNL_GM_Snare

#include "Basic.hpp"

#include "GCNL_GM_Snare_classes.hpp"
#include "GCNL_GM_Snare_parameters.hpp"


namespace SDK
{

// Function GCNL_GM_Snare.GCNL_GM_Snare_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AGCNL_GM_Snare_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCNL_GM_Snare_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GCNL_GM_Snare.GCNL_GM_Snare_C.OnWhileActiveParticleSystemActivate
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UParticleSystemComponent*         WhileActiveParticleSysComponent                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters           Parameters                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)

void AGCNL_GM_Snare_C::OnWhileActiveParticleSystemActivate(class UParticleSystemComponent* WhileActiveParticleSysComponent, const struct FGameplayCueParameters& Parameters) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCNL_GM_Snare_C", "OnWhileActiveParticleSystemActivate");

	Params::GCNL_GM_Snare_C_OnWhileActiveParticleSystemActivate Parms{};

	Parms.WhileActiveParticleSysComponent = WhileActiveParticleSysComponent;
	Parms.Parameters = std::move(Parameters);

	UObject::ProcessEvent(Func, &Parms);
}

}

