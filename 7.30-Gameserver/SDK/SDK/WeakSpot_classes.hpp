#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WeakSpot

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"
#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass WeakSpot.WeakSpot_C
// 0x0098 (0x0410 - 0x0378)
class AWeakSpot_C final : public ABuildingWeakSpot
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0378(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                   ConnectTheDotsComponent;                           // 0x0380(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               ParticleComponent;                                 // 0x0388(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCapsuleComponent*                      CollisionComponent;                                // 0x0390(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                         ScaleDownParticleTL_ScaleDown_544AE05F40294D09C3C361AB7BCF6C4E; // 0x0398(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            ScaleDownParticleTL__Direction_544AE05F40294D09C3C361AB7BCF6C4E; // 0x039C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_50CB[0x3];                                     // 0x039D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     ScaleDownParticleTL;                               // 0x03A0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             SpawnSound;                                        // 0x03A8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                Particle_Location;                                 // 0x03B0(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_50CC[0x4];                                     // 0x03BC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class USoundBase*>                     Crack_sounds;                                      // 0x03C0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                         ConnectTheDotsWidth;                               // 0x03D0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                         ConnectTheDotsDuration;                            // 0x03D4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         ConnectTheDotsTimeoutFromPreviousHit;              // 0x03D8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         ConnectTheDotsDurationScale;                       // 0x03DC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         ConnectTheDotsMaxDuration;                         // 0x03E0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         ConnectTheDotsTileScale;                           // 0x03E4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         ConnectTheDotsMinLength;                           // 0x03E8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         ConnectTheDotsMaxLength;                           // 0x03EC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                        DamageTemplate;                                    // 0x03F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                        IdleTemplate;                                      // 0x03F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               ConnectMID;                                        // 0x0400(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           HideMeshTimer;                                     // 0x0408(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_WeakSpot(int32 EntryPoint);
	void HideMesh();
	void OnFadeOut();
	void OnHit();
	void OnStartDirectionEffect();
	void ScaleDownParticleTL__FinishedFunc();
	void ScaleDownParticleTL__UpdateFunc();
	void UserConstructionScript();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WeakSpot_C">();
	}
	static class AWeakSpot_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AWeakSpot_C>();
	}
};

}

