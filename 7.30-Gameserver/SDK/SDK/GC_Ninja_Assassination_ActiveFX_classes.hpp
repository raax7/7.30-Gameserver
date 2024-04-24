#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GC_Ninja_Assassination_ActiveFX

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteGame_classes.hpp"
#include "GameplayAbilities_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass GC_Ninja_Assassination_ActiveFX.GC_Ninja_Assassination_ActiveFX_C
// 0x0020 (0x0448 - 0x0428)
class AGC_Ninja_Assassination_ActiveFX_C final : public AFortGameplayCueNotify_Looping
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0428(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class FName                                   Assassination_Socket;                              // 0x0430(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Large_FXActive_Lvl;                                // 0x0438(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5173[0x4];                                     // 0x043C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 MyTarget;                                          // 0x0440(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_GC_Ninja_Assassination_ActiveFX(int32 EntryPoint);
	void K2_HandleGameplayCue(class AActor* Param_MyTarget, EGameplayCueEvent EventType, const struct FGameplayCueParameters& Parameters);
	void ReceiveBeginPlay();
	void UserConstructionScript();
	bool WhileActive(class AActor* Param_MyTarget, const struct FGameplayCueParameters& Parameters);

	void OnWhileActiveParticleSystemActivate(class UParticleSystemComponent* WhileActiveParticleSysComponent, const struct FGameplayCueParameters& Parameters) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GC_Ninja_Assassination_ActiveFX_C">();
	}
	static class AGC_Ninja_Assassination_ActiveFX_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AGC_Ninja_Assassination_ActiveFX_C>();
	}
};

}

