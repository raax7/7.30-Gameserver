#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_BGA_FireworksMortar_Holder

#include "Basic.hpp"

#include "B_BGA_FireworksMortar_Holder_classes.hpp"
#include "B_BGA_FireworksMortar_Holder_parameters.hpp"


namespace SDK
{

// Function B_BGA_FireworksMortar_Holder.B_BGA_FireworksMortar_Holder_C.ExecuteUbergraph_B_BGA_FireworksMortar_Holder
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_BGA_FireworksMortar_Holder_C::ExecuteUbergraph_B_BGA_FireworksMortar_Holder(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_BGA_FireworksMortar_Holder_C", "ExecuteUbergraph_B_BGA_FireworksMortar_Holder");

	Params::B_BGA_FireworksMortar_Holder_C_ExecuteUbergraph_B_BGA_FireworksMortar_Holder Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_BGA_FireworksMortar_Holder.B_BGA_FireworksMortar_Holder_C.GameplayCue.Athena.FireworksMortar.MuzzleFlash
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EGameplayCueEvent                       EventType                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters           Parameters                                             (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)

void AB_BGA_FireworksMortar_Holder_C::GameplayCue_Athena_FireworksMortar_MuzzleFlash(EGameplayCueEvent EventType, const struct FGameplayCueParameters& Parameters)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_BGA_FireworksMortar_Holder_C", "GameplayCue.Athena.FireworksMortar.MuzzleFlash");

	Params::B_BGA_FireworksMortar_Holder_C_GameplayCue_Athena_FireworksMortar_MuzzleFlash Parms{};

	Parms.EventType = EventType;
	Parms.Parameters = std::move(Parameters);

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_BGA_FireworksMortar_Holder.B_BGA_FireworksMortar_Holder_C.Remove Rocket
// (BlueprintCallable, BlueprintEvent)

void AB_BGA_FireworksMortar_Holder_C::Remove_Rocket()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_BGA_FireworksMortar_Holder_C", "Remove Rocket");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_BGA_FireworksMortar_Holder.B_BGA_FireworksMortar_Holder_C.HandleBinding
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           Actor                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_BGA_FireworksMortar_Holder_C::HandleBinding(class AActor* Actor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_BGA_FireworksMortar_Holder_C", "HandleBinding");

	Params::B_BGA_FireworksMortar_Holder_C_HandleBinding Parms{};

	Parms.Actor = Actor;

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_BGA_FireworksMortar_Holder.B_BGA_FireworksMortar_Holder_C.AttachMortar
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           AttachActor                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                       Hit                                                    (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void AB_BGA_FireworksMortar_Holder_C::AttachMortar(class AActor* AttachActor, const struct FHitResult& Hit)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_BGA_FireworksMortar_Holder_C", "AttachMortar");

	Params::B_BGA_FireworksMortar_Holder_C_AttachMortar Parms{};

	Parms.AttachActor = AttachActor;
	Parms.Hit = std::move(Hit);

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_BGA_FireworksMortar_Holder.B_BGA_FireworksMortar_Holder_C.MuzzleFlash
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)

void AB_BGA_FireworksMortar_Holder_C::MuzzleFlash()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_BGA_FireworksMortar_Holder_C", "MuzzleFlash");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_BGA_FireworksMortar_Holder.B_BGA_FireworksMortar_Holder_C.HitSaved
// (BlueprintCallable, BlueprintEvent)

void AB_BGA_FireworksMortar_Holder_C::HitSaved()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_BGA_FireworksMortar_Holder_C", "HitSaved");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_BGA_FireworksMortar_Holder.B_BGA_FireworksMortar_Holder_C.DestroyHolder
// (BlueprintCallable, BlueprintEvent)

void AB_BGA_FireworksMortar_Holder_C::DestroyHolder()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_BGA_FireworksMortar_Holder_C", "DestroyHolder");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_BGA_FireworksMortar_Holder.B_BGA_FireworksMortar_Holder_C.SetRotation
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FRotator                         PlayerYaw                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                                   Param_YawOffset                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_BGA_FireworksMortar_Holder_C::SetRotation(const struct FRotator& PlayerYaw, float Param_YawOffset)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_BGA_FireworksMortar_Holder_C", "SetRotation");

	Params::B_BGA_FireworksMortar_Holder_C_SetRotation Parms{};

	Parms.PlayerYaw = std::move(PlayerYaw);
	Parms.Param_YawOffset = Param_YawOffset;

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_BGA_FireworksMortar_Holder.B_BGA_FireworksMortar_Holder_C.BaseDestroyed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           DestroyedActor                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_BGA_FireworksMortar_Holder_C::BaseDestroyed(class AActor* DestroyedActor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_BGA_FireworksMortar_Holder_C", "BaseDestroyed");

	Params::B_BGA_FireworksMortar_Holder_C_BaseDestroyed Parms{};

	Parms.DestroyedActor = DestroyedActor;

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_BGA_FireworksMortar_Holder.B_BGA_FireworksMortar_Holder_C.BaseDied
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           DamagedActor                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   Damage                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AController*                      InstigatedBy                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           DamageCauser                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          HitLocation                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*              FHitComponent                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                             BoneName                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          Momentum                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_BGA_FireworksMortar_Holder_C::BaseDied(class AActor* DamagedActor, float Damage, class AController* InstigatedBy, class AActor* DamageCauser, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, class FName BoneName, const struct FVector& Momentum)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_BGA_FireworksMortar_Holder_C", "BaseDied");

	Params::B_BGA_FireworksMortar_Holder_C_BaseDied Parms{};

	Parms.DamagedActor = DamagedActor;
	Parms.Damage = Damage;
	Parms.InstigatedBy = InstigatedBy;
	Parms.DamageCauser = DamageCauser;
	Parms.HitLocation = std::move(HitLocation);
	Parms.FHitComponent = FHitComponent;
	Parms.BoneName = BoneName;
	Parms.Momentum = std::move(Momentum);

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_BGA_FireworksMortar_Holder.B_BGA_FireworksMortar_Holder_C.ReceiveHit
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*              MyComp                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           Other                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*              OtherComp                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bSelfMoved                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                          HitLocation                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          Param_HitNormal                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          NormalImpulse                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                       Hit                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void AB_BGA_FireworksMortar_Holder_C::ReceiveHit(class UPrimitiveComponent* MyComp, class AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, const struct FVector& HitLocation, const struct FVector& Param_HitNormal, const struct FVector& NormalImpulse, const struct FHitResult& Hit)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_BGA_FireworksMortar_Holder_C", "ReceiveHit");

	Params::B_BGA_FireworksMortar_Holder_C_ReceiveHit Parms{};

	Parms.MyComp = MyComp;
	Parms.Other = Other;
	Parms.OtherComp = OtherComp;
	Parms.bSelfMoved = bSelfMoved;
	Parms.HitLocation = std::move(HitLocation);
	Parms.Param_HitNormal = std::move(Param_HitNormal);
	Parms.NormalImpulse = std::move(NormalImpulse);
	Parms.Hit = std::move(Hit);

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_BGA_FireworksMortar_Holder.B_BGA_FireworksMortar_Holder_C.StartSpawningBottleRockets
// (BlueprintCallable, BlueprintEvent)

void AB_BGA_FireworksMortar_Holder_C::StartSpawningBottleRockets()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_BGA_FireworksMortar_Holder_C", "StartSpawningBottleRockets");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_BGA_FireworksMortar_Holder.B_BGA_FireworksMortar_Holder_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AB_BGA_FireworksMortar_Holder_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_BGA_FireworksMortar_Holder_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_BGA_FireworksMortar_Holder.B_BGA_FireworksMortar_Holder_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AB_BGA_FireworksMortar_Holder_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_BGA_FireworksMortar_Holder_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_BGA_FireworksMortar_Holder.B_BGA_FireworksMortar_Holder_C.OnRep_bResumeSimulation
// (BlueprintCallable, BlueprintEvent)

void AB_BGA_FireworksMortar_Holder_C::OnRep_bResumeSimulation()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_BGA_FireworksMortar_Holder_C", "OnRep_bResumeSimulation");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_BGA_FireworksMortar_Holder.B_BGA_FireworksMortar_Holder_C.OnRep_StartedDestroying
// (BlueprintCallable, BlueprintEvent)

void AB_BGA_FireworksMortar_Holder_C::OnRep_StartedDestroying()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_BGA_FireworksMortar_Holder_C", "OnRep_StartedDestroying");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_BGA_FireworksMortar_Holder.B_BGA_FireworksMortar_Holder_C.OnRep_ApplyRotation
// (HasDefaults, BlueprintCallable, BlueprintEvent)

void AB_BGA_FireworksMortar_Holder_C::OnRep_ApplyRotation()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_BGA_FireworksMortar_Holder_C", "OnRep_ApplyRotation");

	UObject::ProcessEvent(Func, nullptr);
}

}

