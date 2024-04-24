#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GCL_PunchPack_Jump_Charge

#include "Basic.hpp"

#include "GCL_PunchPack_Jump_Charge_classes.hpp"
#include "GCL_PunchPack_Jump_Charge_parameters.hpp"


namespace SDK
{

// Function GCL_PunchPack_Jump_Charge.GCL_PunchPack_Jump_Charge_C.ExecuteUbergraph_GCL_PunchPack_Jump_Charge
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGCL_PunchPack_Jump_Charge_C::ExecuteUbergraph_GCL_PunchPack_Jump_Charge(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCL_PunchPack_Jump_Charge_C", "ExecuteUbergraph_GCL_PunchPack_Jump_Charge");

	Params::GCL_PunchPack_Jump_Charge_C_ExecuteUbergraph_GCL_PunchPack_Jump_Charge Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GCL_PunchPack_Jump_Charge.GCL_PunchPack_Jump_Charge_C.ChargeDelay
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Stop                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AGCL_PunchPack_Jump_Charge_C::ChargeDelay(bool Stop)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCL_PunchPack_Jump_Charge_C", "ChargeDelay");

	Params::GCL_PunchPack_Jump_Charge_C_ChargeDelay Parms{};

	Parms.Stop = Stop;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GCL_PunchPack_Jump_Charge.GCL_PunchPack_Jump_Charge_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// EEndPlayReason                          EndPlayReason                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGCL_PunchPack_Jump_Charge_C::ReceiveEndPlay(EEndPlayReason EndPlayReason)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCL_PunchPack_Jump_Charge_C", "ReceiveEndPlay");

	Params::GCL_PunchPack_Jump_Charge_C_ReceiveEndPlay Parms{};

	Parms.EndPlayReason = EndPlayReason;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GCL_PunchPack_Jump_Charge.GCL_PunchPack_Jump_Charge_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AGCL_PunchPack_Jump_Charge_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCL_PunchPack_Jump_Charge_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GCL_PunchPack_Jump_Charge.GCL_PunchPack_Jump_Charge_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AGCL_PunchPack_Jump_Charge_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCL_PunchPack_Jump_Charge_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GCL_PunchPack_Jump_Charge.GCL_PunchPack_Jump_Charge_C.OnRemove
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           MyTarget                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters           Parameters                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AGCL_PunchPack_Jump_Charge_C::OnRemove(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCL_PunchPack_Jump_Charge_C", "OnRemove");

	Params::GCL_PunchPack_Jump_Charge_C_OnRemove Parms{};

	Parms.MyTarget = MyTarget;
	Parms.Parameters = std::move(Parameters);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function GCL_PunchPack_Jump_Charge.GCL_PunchPack_Jump_Charge_C.WhileActive
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           MyTarget                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters           Parameters                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AGCL_PunchPack_Jump_Charge_C::WhileActive(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCL_PunchPack_Jump_Charge_C", "WhileActive");

	Params::GCL_PunchPack_Jump_Charge_C_WhileActive Parms{};

	Parms.MyTarget = MyTarget;
	Parms.Parameters = std::move(Parameters);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function GCL_PunchPack_Jump_Charge.GCL_PunchPack_Jump_Charge_C.OnStartParticleSystemSpawned
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UParticleSystemComponent*         SpawnedParticleSysComponent                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters           Parameters                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)

void AGCL_PunchPack_Jump_Charge_C::OnStartParticleSystemSpawned(class UParticleSystemComponent* SpawnedParticleSysComponent, const struct FGameplayCueParameters& Parameters) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCL_PunchPack_Jump_Charge_C", "OnStartParticleSystemSpawned");

	Params::GCL_PunchPack_Jump_Charge_C_OnStartParticleSystemSpawned Parms{};

	Parms.SpawnedParticleSysComponent = SpawnedParticleSysComponent;
	Parms.Parameters = std::move(Parameters);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GCL_PunchPack_Jump_Charge.GCL_PunchPack_Jump_Charge_C.OnWhileActiveParticleSystemDeactivate
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UParticleSystemComponent*         WhileActiveParticleSysComponent                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters           Parameters                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)

void AGCL_PunchPack_Jump_Charge_C::OnWhileActiveParticleSystemDeactivate(class UParticleSystemComponent* WhileActiveParticleSysComponent, const struct FGameplayCueParameters& Parameters) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCL_PunchPack_Jump_Charge_C", "OnWhileActiveParticleSystemDeactivate");

	Params::GCL_PunchPack_Jump_Charge_C_OnWhileActiveParticleSystemDeactivate Parms{};

	Parms.WhileActiveParticleSysComponent = WhileActiveParticleSysComponent;
	Parms.Parameters = std::move(Parameters);

	UObject::ProcessEvent(Func, &Parms);
}

}

