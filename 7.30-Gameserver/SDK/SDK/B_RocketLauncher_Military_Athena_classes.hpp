#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_RocketLauncher_Military_Athena

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "B_RocketLauncher_Generic_Athena_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass B_RocketLauncher_Military_Athena.B_RocketLauncher_Military_Athena_C
// 0x0038 (0x0E20 - 0x0DE8)
class AB_RocketLauncher_Military_Athena_C final : public AB_RocketLauncher_Generic_Athena_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_B_RocketLauncher_Military_Athena_C; // 0x0DE8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UParticleSystemComponent*               P_M202_Muzzle_MagazineEject_Smoke;                 // 0x0DF0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               P_M202_Muzzle_MagazineEject;                       // 0x0DF8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UArrowComponent*                        ArrowBack;                                         // 0x0E00(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               MuzzleBack;                                        // 0x0E08(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UArrowComponent*                        Arrow;                                             // 0x0E10(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	EFortReloadFXState                            ReloadState;                                       // 0x0E18(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_B_RocketLauncher_Military_Athena(int32 EntryPoint);
	void ResetDoOnce();
	void SoundFX(class FName EventName, float EmitterTime, int32 ParticleTime, const struct FVector& Location, const struct FVector& Velocity, const struct FVector& Direction, const struct FVector& Normal, class FName BoneName, class UPhysicalMaterial* PhysMat);
	void OnPlayReloadFX(EFortReloadFXState ReloadStage);
	void Muzzle_Flash_FX(bool Persistent_Fire);
	void UserConstructionScript();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"B_RocketLauncher_Military_Athena_C">();
	}
	static class AB_RocketLauncher_Military_Athena_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AB_RocketLauncher_Military_Athena_C>();
	}
};

}

