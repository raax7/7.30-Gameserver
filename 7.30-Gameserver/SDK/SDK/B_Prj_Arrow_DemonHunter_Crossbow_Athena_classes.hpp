#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_Prj_Arrow_DemonHunter_Crossbow_Athena

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass B_Prj_Arrow_DemonHunter_Crossbow_Athena.B_Prj_Arrow_DemonHunter_Crossbow_Athena_C
// 0x0048 (0x0878 - 0x0830)
class AB_Prj_Arrow_DemonHunter_Crossbow_Athena_C final : public AFortProjectileAthena
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0830(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UBulletWhipTrackerComponent_Crossbow_C* BulletWhipTrackerComponent_Crossbow;               // 0x0838(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               P_Crossbow_Projectile;                             // 0x0840(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                        HitDeimosEffect;                                   // 0x0848(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                        HitPlayerEffect;                                   // 0x0850(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         NewVar_0;                                          // 0x0858(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5E92[0x4];                                     // 0x085C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USoundBase*                             BoltStuck;                                         // 0x0860(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             BoltBreak;                                         // 0x0868(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             Bolt_Surface_Impact;                               // 0x0870(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_B_Prj_Arrow_DemonHunter_Crossbow_Athena(int32 EntryPoint);
	void OnTouched(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FHitResult& HitResult, bool bIsOverlap);
	void UserConstructionScript();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"B_Prj_Arrow_DemonHunter_Crossbow_Athena_C">();
	}
	static class AB_Prj_Arrow_DemonHunter_Crossbow_Athena_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AB_Prj_Arrow_DemonHunter_Crossbow_Athena_C>();
	}
};

}

