#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Athena_TowerGrenadeWithTrajectory

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "GA_Athena_UtilityGrenade_WithTrajectory_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GA_Athena_TowerGrenadeWithTrajectory.GA_Athena_TowerGrenadeWithTrajectory_C
// 0x0030 (0x0C68 - 0x0C38)
class UGA_Athena_TowerGrenadeWithTrajectory_C final : public UGA_Athena_UtilityGrenade_WithTrajectory_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_GA_Athena_TowerGrenadeWithTrajectory_C; // 0x0C38(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class ABP_ProjectileTrajectory_C*             ProjectileTrajectoryRed;                           // 0x0C40(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 TrajectoryIndicatorRedClass;                       // 0x0C48(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FDataTableRowHandle                    ObjectiveStat;                                     // 0x0C50(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	class UFortQuestItemDefinition*               QuestItemUsePortafort;                             // 0x0C60(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_GA_Athena_TowerGrenadeWithTrajectory(int32 EntryPoint);
	void UpdateTrajectorySpline();
	void Server_SpawnProjectile(const struct FVector& Location, const struct FRotator& Direction);
	void CleanupTrajectoryDisplay();
	void K2_ActivateAbility();
	void SetupDummyProjectileRed();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_Athena_TowerGrenadeWithTrajectory_C">();
	}
	static class UGA_Athena_TowerGrenadeWithTrajectory_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_Athena_TowerGrenadeWithTrajectory_C>();
	}
};

}

