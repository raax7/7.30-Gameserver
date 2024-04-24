#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Athena_Player_SneakySnowman

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "GameplayAbilities_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Athena_Player_SneakySnowman.Athena_Player_SneakySnowman_C
// 0x0058 (0x0800 - 0x07A8)
class AAthena_Player_SneakySnowman_C final : public ABuildingGameplayActorBalloon
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x07A8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                   SM_SneakySnowman;                                  // 0x07B0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        Scene;                                             // 0x07B8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                          Effects;                                           // 0x07C0(0x0001)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_325C[0x7];                                     // 0x07C1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AFortPlayerPawn*                        PlayerPawn;                                        // 0x07C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         TotalDamage;                                       // 0x07D0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_325D[0x4];                                     // 0x07D4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AB_Prj_Athena_SneakySnowman_C*          SneakySnowmanProj;                                 // 0x07D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FScalableFloat                         MaxHealth;                                         // 0x07E0(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void ExecuteUbergraph_Athena_Player_SneakySnowman(int32 EntryPoint);
	void OnDeathServer(float Damage, const struct FGameplayTagContainer& DamageTags, const struct FVector& Momentum, const struct FHitResult& HitInfo, class AController* InstigatedBy, class AActor* DamageCauser, const struct FGameplayEffectContextHandle& EffectContext);
	void ReceiveBeginPlay();
	void OnDamageServer(float Damage, const struct FGameplayTagContainer& DamageTags, const struct FVector& Momentum, const struct FHitResult& HitInfo, class AController* InstigatedBy, class AActor* DamageCauser, const struct FGameplayEffectContextHandle& EffectContext);
	void UserConstructionScript();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Athena_Player_SneakySnowman_C">();
	}
	static class AAthena_Player_SneakySnowman_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AAthena_Player_SneakySnowman_C>();
	}
};

}

