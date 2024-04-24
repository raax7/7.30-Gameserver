#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_Prj_Athena_ShockGrenade

#include "Basic.hpp"

#include "B_Prj_Athena_ShockGrenade_classes.hpp"
#include "B_Prj_Athena_ShockGrenade_parameters.hpp"


namespace SDK
{

// Function B_Prj_Athena_ShockGrenade.B_Prj_Athena_ShockGrenade_C.ExecuteUbergraph_B_Prj_Athena_ShockGrenade
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_Prj_Athena_ShockGrenade_C::ExecuteUbergraph_B_Prj_Athena_ShockGrenade(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Prj_Athena_ShockGrenade_C", "ExecuteUbergraph_B_Prj_Athena_ShockGrenade");

	Params::B_Prj_Athena_ShockGrenade_C_ExecuteUbergraph_B_Prj_Athena_ShockGrenade Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_Prj_Athena_ShockGrenade.B_Prj_Athena_ShockGrenade_C.BndEvt__ProjectileMovementComponent_K2Node_ComponentBoundEvent_1_OnProjectileBounceDelegate__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// struct FHitResult                       ImpactResult                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// struct FVector                          ImpactVelocity                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_Prj_Athena_ShockGrenade_C::BndEvt__ProjectileMovementComponent_K2Node_ComponentBoundEvent_1_OnProjectileBounceDelegate__DelegateSignature(const struct FHitResult& ImpactResult, const struct FVector& ImpactVelocity)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Prj_Athena_ShockGrenade_C", "BndEvt__ProjectileMovementComponent_K2Node_ComponentBoundEvent_1_OnProjectileBounceDelegate__DelegateSignature");

	Params::B_Prj_Athena_ShockGrenade_C_BndEvt__ProjectileMovementComponent_K2Node_ComponentBoundEvent_1_OnProjectileBounceDelegate__DelegateSignature Parms{};

	Parms.ImpactResult = std::move(ImpactResult);
	Parms.ImpactVelocity = std::move(ImpactVelocity);

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_Prj_Athena_ShockGrenade.B_Prj_Athena_ShockGrenade_C.OnTouched
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// class AActor*                           OtherActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*              OtherComp                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                       HitResult                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                                    bIsOverlap                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AB_Prj_Athena_ShockGrenade_C::OnTouched(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FHitResult& HitResult, bool bIsOverlap)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Prj_Athena_ShockGrenade_C", "OnTouched");

	Params::B_Prj_Athena_ShockGrenade_C_OnTouched Parms{};

	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.HitResult = std::move(HitResult);
	Parms.bIsOverlap = bIsOverlap;

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_Prj_Athena_ShockGrenade.B_Prj_Athena_ShockGrenade_C.LaunchDeimos
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)

void AB_Prj_Athena_ShockGrenade_C::LaunchDeimos()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Prj_Athena_ShockGrenade_C", "LaunchDeimos");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_Prj_Athena_ShockGrenade.B_Prj_Athena_ShockGrenade_C.BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*              OverlappedComponent                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           OtherActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*              OtherComp                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   OtherBodyIndex                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bFromSweep                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                       SweepResult                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void AB_Prj_Athena_ShockGrenade_C::BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Prj_Athena_ShockGrenade_C", "BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature");

	Params::B_Prj_Athena_ShockGrenade_C_BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature Parms{};

	Parms.OverlappedComponent = OverlappedComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.OtherBodyIndex = OtherBodyIndex;
	Parms.bFromSweep = bFromSweep;
	Parms.SweepResult = std::move(SweepResult);

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_Prj_Athena_ShockGrenade.B_Prj_Athena_ShockGrenade_C.OnExploded
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// TArray<class AActor*>                   HitActors                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FHitResult>               HitResults                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, ContainsInstancedReference)

void AB_Prj_Athena_ShockGrenade_C::OnExploded(const TArray<class AActor*>& HitActors, const TArray<struct FHitResult>& HitResults)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Prj_Athena_ShockGrenade_C", "OnExploded");

	Params::B_Prj_Athena_ShockGrenade_C_OnExploded Parms{};

	Parms.HitActors = std::move(HitActors);
	Parms.HitResults = std::move(HitResults);

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_Prj_Athena_ShockGrenade.B_Prj_Athena_ShockGrenade_C.Stop_Rotation
// (BlueprintCallable, BlueprintEvent)

void AB_Prj_Athena_ShockGrenade_C::Stop_Rotation()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Prj_Athena_ShockGrenade_C", "Stop_Rotation");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_Prj_Athena_ShockGrenade.B_Prj_Athena_ShockGrenade_C.OnStop
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FHitResult                       Hit                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void AB_Prj_Athena_ShockGrenade_C::OnStop(const struct FHitResult& Hit)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Prj_Athena_ShockGrenade_C", "OnStop");

	Params::B_Prj_Athena_ShockGrenade_C_OnStop Parms{};

	Parms.Hit = std::move(Hit);

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_Prj_Athena_ShockGrenade.B_Prj_Athena_ShockGrenade_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AB_Prj_Athena_ShockGrenade_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Prj_Athena_ShockGrenade_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_Prj_Athena_ShockGrenade.B_Prj_Athena_ShockGrenade_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AB_Prj_Athena_ShockGrenade_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Prj_Athena_ShockGrenade_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_Prj_Athena_ShockGrenade.B_Prj_Athena_ShockGrenade_C.Handle Pawn Detach RC
// (Public, BlueprintCallable, BlueprintEvent)

void AB_Prj_Athena_ShockGrenade_C::Handle_Pawn_Detach_RC()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Prj_Athena_ShockGrenade_C", "Handle Pawn Detach RC");

	UObject::ProcessEvent(Func, nullptr);
}

}

