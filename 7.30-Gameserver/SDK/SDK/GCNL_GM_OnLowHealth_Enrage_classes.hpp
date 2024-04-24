#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GCNL_GM_OnLowHealth_Enrage

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GCNL_GM_OnLowHealth_Enrage.GCNL_GM_OnLowHealth_Enrage_C
// 0x0080 (0x04A8 - 0x0428)
class AGCNL_GM_OnLowHealth_Enrage_C final : public AFortGameplayCueNotify_Looping
{
public:
	class UParticleSystemComponent*               HandTrail_R;                                       // 0x0428(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               HandTrail_L;                                       // 0x0430(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               Body_Mist;                                         // 0x0438(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               BodyMistFX;                                        // 0x0440(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               Hand_Trail_L;                                      // 0x0448(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               HandTrailR;                                        // 0x0450(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TMap<class FName, struct FLinearColor>        Enrage_Map;                                        // 0x0458(0x0050)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

public:
	void UserConstructionScript();
	bool OnActive(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GCNL_GM_OnLowHealth_Enrage_C">();
	}
	static class AGCNL_GM_OnLowHealth_Enrage_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AGCNL_GM_OnLowHealth_Enrage_C>();
	}
};

}

