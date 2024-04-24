#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: FortVolumeActor_Base

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass FortVolumeActor_Base.FortVolumeActor_Base_C
// 0x0028 (0x0AF0 - 0x0AC8)
class AFortVolumeActor_Base_C : public AFortVolume
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0AC8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	float                                         TransitionTL_Fade_DD1C029E4A879F5D954A60A7D9770B8A; // 0x0AD0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            TransitionTL__Direction_DD1C029E4A879F5D954A60A7D9770B8A; // 0x0AD4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_654E[0x3];                                     // 0x0AD5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     TransitionTL;                                      // 0x0AD8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               BoundsMeshMID;                                     // 0x0AE0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                     BoundsMeshSourceMaterial;                          // 0x0AE8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_FortVolumeActor_Base(int32 EntryPoint);
	void OnDeathPlayEffects(float Damage, const struct FGameplayTagContainer& DamageTags, const struct FVector& Momentum, const struct FHitResult& HitInfo, class AFortPawn* InstigatedBy, class AActor* DamageCauser, const struct FGameplayEffectContextHandle& EffectContext);
	void ReceiveBeginPlay();
	void TransitionTL__UpdateFunc();
	void TransitionTL__FinishedFunc();
	void UserConstructionScript();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"FortVolumeActor_Base_C">();
	}
	static class AFortVolumeActor_Base_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AFortVolumeActor_Base_C>();
	}
};

}

