#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GCNL_GM_OnDmg_SpeedBuff

#include "Basic.hpp"

#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GCNL_GM_OnDmg_SpeedBuff.GCNL_GM_OnDmg_SpeedBuff_C
// 0x0000 (0x0428 - 0x0428)
class AGCNL_GM_OnDmg_SpeedBuff_C final : public AFortGameplayCueNotify_Looping
{
public:
	void UserConstructionScript();

	void OnWhileActiveParticleSystemActivate(class UParticleSystemComponent* WhileActiveParticleSysComponent, const struct FGameplayCueParameters& Parameters) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GCNL_GM_OnDmg_SpeedBuff_C">();
	}
	static class AGCNL_GM_OnDmg_SpeedBuff_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AGCNL_GM_OnDmg_SpeedBuff_C>();
	}
};

}

