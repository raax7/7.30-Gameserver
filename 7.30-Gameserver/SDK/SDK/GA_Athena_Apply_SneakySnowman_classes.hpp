#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Athena_Apply_SneakySnowman

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "FortniteGame_classes.hpp"
#include "GameplayTags_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass GA_Athena_Apply_SneakySnowman.GA_Athena_Apply_SneakySnowman_C
// 0x00B0 (0x09E8 - 0x0938)
class UGA_Athena_Apply_SneakySnowman_C final : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0938(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FFortGameplayAbilityMontageInfo        AnimMontageInfo;                                   // 0x0940(0x0058)(Edit, BlueprintVisible, DisableEditOnInstance)
	class AFortPlayerPawn*                        PlayerPawn;                                        // 0x0998(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         TriggerDuration;                                   // 0x09A0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_61EB[0x4];                                     // 0x09A4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FDataTableRowHandle                    UseBushObjectiveStat;                              // 0x09A8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	class AAthena_Player_SneakySnowman_C*         PlayerSnowman;                                     // 0x09B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   SnowmanHolsterSelf;                                // 0x09C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagContainer                  SnowmanTag;                                        // 0x09C8(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void ExecuteUbergraph_GA_Athena_Apply_SneakySnowman(int32 EntryPoint);
	void K2_OnEndAbility(bool bWasCancelled);
	void K2_ActivateAbility();
	void Triggered_B326DD1943168A618B4EC399CC7213B2(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Cancelled_B326DD1943168A618B4EC399CC7213B2(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Completed_B326DD1943168A618B4EC399CC7213B2(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void QuestUpdate(class AFortPlayerController* FortPC);

	bool K2_CanActivateAbility(const struct FGameplayAbilityActorInfo& ActorInfo, struct FGameplayTagContainer* RelevantTags) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_Athena_Apply_SneakySnowman_C">();
	}
	static class UGA_Athena_Apply_SneakySnowman_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_Athena_Apply_SneakySnowman_C>();
	}
};

}

