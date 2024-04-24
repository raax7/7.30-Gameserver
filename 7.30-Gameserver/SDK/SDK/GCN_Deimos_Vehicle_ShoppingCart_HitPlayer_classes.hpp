#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GCN_Deimos_Vehicle_ShoppingCart_HitPlayer

#include "Basic.hpp"

#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GCN_Deimos_Vehicle_ShoppingCart_HitPlayer.GCN_Deimos_Vehicle_ShoppingCart_HitPlayer_C
// 0x0008 (0x01A8 - 0x01A0)
class UGCN_Deimos_Vehicle_ShoppingCart_HitPlayer_C final : public UFortGameplayCueNotify_Burst
{
public:
	class USoundConcurrency*                      ConcurrencySettings;                               // 0x01A0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void OnBurst(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters, const TArray<class UParticleSystemComponent*>& ParticleComponents, const TArray<class UAudioComponent*>& AudioComponents, class UCameraShake* BurstCameraShakeInstance, class ADecalActor* BurstDecalInstance) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GCN_Deimos_Vehicle_ShoppingCart_HitPlayer_C">();
	}
	static class UGCN_Deimos_Vehicle_ShoppingCart_HitPlayer_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGCN_Deimos_Vehicle_ShoppingCart_HitPlayer_C>();
	}
};

}

