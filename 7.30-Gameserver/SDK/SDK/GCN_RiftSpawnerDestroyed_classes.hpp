#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GCN_RiftSpawnerDestroyed

#include "Basic.hpp"

#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GCN_RiftSpawnerDestroyed.GCN_RiftSpawnerDestroyed_C
// 0x0000 (0x01A0 - 0x01A0)
class UGCN_RiftSpawnerDestroyed_C final : public UFortGameplayCueNotify_Burst
{
public:
	void OnBurst(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters, const TArray<class UParticleSystemComponent*>& ParticleComponents, const TArray<class UAudioComponent*>& AudioComponents, class UCameraShake* BurstCameraShakeInstance, class ADecalActor* BurstDecalInstance) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GCN_RiftSpawnerDestroyed_C">();
	}
	static class UGCN_RiftSpawnerDestroyed_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGCN_RiftSpawnerDestroyed_C>();
	}
};

}

