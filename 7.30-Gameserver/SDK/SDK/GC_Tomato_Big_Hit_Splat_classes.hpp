#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GC_Tomato_Big_Hit_Splat

#include "Basic.hpp"

#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GC_Tomato_Big_Hit_Splat.GC_Tomato_Big_Hit_Splat_C
// 0x0000 (0x01A0 - 0x01A0)
class UGC_Tomato_Big_Hit_Splat_C final : public UFortGameplayCueNotify_Burst
{
public:
	void OnBurst(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters, const TArray<class UParticleSystemComponent*>& ParticleComponents, const TArray<class UAudioComponent*>& AudioComponents, class UCameraShake* BurstCameraShakeInstance, class ADecalActor* BurstDecalInstance) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GC_Tomato_Big_Hit_Splat_C">();
	}
	static class UGC_Tomato_Big_Hit_Splat_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGC_Tomato_Big_Hit_Splat_C>();
	}
};

}

