#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_DamageBalloon_Athena

#include "Basic.hpp"

#include "BP_DamageBalloon_Athena_classes.hpp"
#include "BP_DamageBalloon_Athena_parameters.hpp"


namespace SDK
{

// Function BP_DamageBalloon_Athena.BP_DamageBalloon_Athena_C.OnBalloonDestroyed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABP_DamageBalloon_Athena_C::OnBalloonDestroyed__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DamageBalloon_Athena_C", "OnBalloonDestroyed__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_DamageBalloon_Athena.BP_DamageBalloon_Athena_C.ExecuteUbergraph_BP_DamageBalloon_Athena
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_DamageBalloon_Athena_C::ExecuteUbergraph_BP_DamageBalloon_Athena(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DamageBalloon_Athena_C", "ExecuteUbergraph_BP_DamageBalloon_Athena");

	Params::BP_DamageBalloon_Athena_C_ExecuteUbergraph_BP_DamageBalloon_Athena Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_DamageBalloon_Athena.BP_DamageBalloon_Athena_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_DamageBalloon_Athena_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DamageBalloon_Athena_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_DamageBalloon_Athena.BP_DamageBalloon_Athena_C.CrateIsGone
// (BlueprintCallable, BlueprintEvent)

void ABP_DamageBalloon_Athena_C::CrateIsGone()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DamageBalloon_Athena_C", "CrateIsGone");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_DamageBalloon_Athena.BP_DamageBalloon_Athena_C.OnDamageServer
// (BlueprintAuthorityOnly, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// float                                   Damage                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer            DamageTags                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FVector                          Momentum                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                       HitInfo                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// class AController*                      InstigatedBy                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           DamageCauser                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEffectContextHandle     EffectContext                                          (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_DamageBalloon_Athena_C::OnDamageServer(float Damage, const struct FGameplayTagContainer& DamageTags, const struct FVector& Momentum, const struct FHitResult& HitInfo, class AController* InstigatedBy, class AActor* DamageCauser, const struct FGameplayEffectContextHandle& EffectContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DamageBalloon_Athena_C", "OnDamageServer");

	Params::BP_DamageBalloon_Athena_C_OnDamageServer Parms{};

	Parms.Damage = Damage;
	Parms.DamageTags = std::move(DamageTags);
	Parms.Momentum = std::move(Momentum);
	Parms.HitInfo = std::move(HitInfo);
	Parms.InstigatedBy = InstigatedBy;
	Parms.DamageCauser = DamageCauser;
	Parms.EffectContext = std::move(EffectContext);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_DamageBalloon_Athena.BP_DamageBalloon_Athena_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_DamageBalloon_Athena_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DamageBalloon_Athena_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_DamageBalloon_Athena.BP_DamageBalloon_Athena_C.ShouldDie
// (BlueprintAuthorityOnly, Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   Damage                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AController*                      EventInstigator                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           DamageCauser                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABP_DamageBalloon_Athena_C::ShouldDie(float Damage, class AController* EventInstigator, class AActor* DamageCauser)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DamageBalloon_Athena_C", "ShouldDie");

	Params::BP_DamageBalloon_Athena_C_ShouldDie Parms{};

	Parms.Damage = Damage;
	Parms.EventInstigator = EventInstigator;
	Parms.DamageCauser = DamageCauser;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BP_DamageBalloon_Athena.BP_DamageBalloon_Athena_C.OnRep_DestroyBalloon
// (BlueprintCallable, BlueprintEvent)

void ABP_DamageBalloon_Athena_C::OnRep_DestroyBalloon()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DamageBalloon_Athena_C", "OnRep_DestroyBalloon");

	UObject::ProcessEvent(Func, nullptr);
}

}

