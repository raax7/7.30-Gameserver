#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x958 - 0x938)
// BlueprintGeneratedClass GA_Trap_MountedTurret.GA_Trap_MountedTurret_C
class UGA_Trap_MountedTurret_C : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x938(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UFortWeaponItemDefinition*             MountedTurretWeapon;                               // 0x940(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortWeapon*                           PreviousWeapon;                                    // 0x948(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerPawn*                       FortPawn;                                          // 0x950(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UGA_Trap_MountedTurret_C* GetDefaultObj();

	void Removed_5AEF8B64474E58FA96707F8A7FD72F76();
	void K2_ActivateAbility();
	void K2_OnEndAbility(bool bWasCancelled);
	void ExecuteUbergraph_GA_Trap_MountedTurret(int32 EntryPoint, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UAbilityTask_WaitGameplayTagRemoved* CallFunc_WaitGameplayTagRemove_ReturnValue, bool CallFunc_IsValid_ReturnValue, class AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess, bool K2Node_Event_bWasCancelled, bool CallFunc_IsOperatingTurret_ReturnValue, bool CallFunc_IsValid_ReturnValue1, bool CallFunc_IsValid_ReturnValue2);
};

}


