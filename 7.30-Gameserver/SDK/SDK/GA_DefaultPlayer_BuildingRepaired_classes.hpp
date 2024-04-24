#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_DefaultPlayer_BuildingRepaired

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GA_DefaultPlayer_BuildingRepaired.GA_DefaultPlayer_BuildingRepaired_C
// 0x0008 (0x0940 - 0x0938)
class UGA_DefaultPlayer_BuildingRepaired_C final : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0938(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_GA_DefaultPlayer_BuildingRepaired(int32 EntryPoint);
	void K2_ActivateAbilityFromEvent(const struct FGameplayEventData& EventData);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_DefaultPlayer_BuildingRepaired_C">();
	}
	static class UGA_DefaultPlayer_BuildingRepaired_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_DefaultPlayer_BuildingRepaired_C>();
	}
};

}

