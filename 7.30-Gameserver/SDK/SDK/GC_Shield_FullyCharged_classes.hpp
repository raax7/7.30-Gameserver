#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GC_Shield_FullyCharged

#include "Basic.hpp"

#include "FortniteGame_structs.hpp"
#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GC_Shield_FullyCharged.GC_Shield_FullyCharged_C
// 0x0000 (0x01A0 - 0x01A0)
class UGC_Shield_FullyCharged_C final : public UFortGameplayCueNotify_Burst
{
public:
	void OnBurst(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters, const TArray<class UParticleSystemComponent*>& ParticleComponents, const TArray<class UAudioComponent*>& AudioComponents, class UCameraShake* BurstCameraShakeInstance, class ADecalActor* BurstDecalInstance) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GC_Shield_FullyCharged_C">();
	}
	static class UGC_Shield_FullyCharged_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGC_Shield_FullyCharged_C>();
	}
};

}

