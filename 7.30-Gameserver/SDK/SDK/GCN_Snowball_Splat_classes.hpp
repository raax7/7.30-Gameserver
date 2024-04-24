#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GCN_Snowball_Splat

#include "Basic.hpp"

#include "GC_Tomato_Hit_Splat_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GCN_Snowball_Splat.GCN_Snowball_Splat_C
// 0x0010 (0x01B0 - 0x01A0)
class UGCN_Snowball_Splat_C final : public UGC_Tomato_Hit_Splat_C
{
public:
	bool                                          Decal;                                             // 0x01A0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_34AF[0x7];                                     // 0x01A1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 NewVar_0;                                          // 0x01A8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void OnBurst(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters, const TArray<class UParticleSystemComponent*>& ParticleComponents, const TArray<class UAudioComponent*>& AudioComponents, class UCameraShake* BurstCameraShakeInstance, class ADecalActor* BurstDecalInstance) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GCN_Snowball_Splat_C">();
	}
	static class UGCN_Snowball_Splat_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGCN_Snowball_Splat_C>();
	}
};

}

