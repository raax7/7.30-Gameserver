#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Constructor_FeelTheBase_DeathListener

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "GameplayTags_structs.hpp"
#include "GAT_GenericTriggeredAbility_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GA_Constructor_FeelTheBase_DeathListener.GA_Constructor_FeelTheBase_DeathListener_C
// 0x0040 (0x0A50 - 0x0A10)
class UGA_Constructor_FeelTheBase_DeathListener_C final : public UGAT_GenericTriggeredAbility_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_GA_Constructor_FeelTheBase_DeathListener_C; // 0x0A10(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UClass*                                 StackCount;                                        // 0x0A18(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagContainer                  OverflowTag;                                       // 0x0A20(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                         Stack1;                                            // 0x0A40(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Stack2;                                            // 0x0A44(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Stack3;                                            // 0x0A48(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_GA_Constructor_FeelTheBase_DeathListener(int32 EntryPoint);
	void K2_ActivateAbilityFromEvent(const struct FGameplayEventData& Param_EventData);
	void Exceute_GC(class AB_Constructor_BASE_C* BaseReference, bool* Overflow);
	void ActivateBaseStacks(int32 Param_StackCount, class AB_Constructor_BASE_C* BaseReference);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_Constructor_FeelTheBase_DeathListener_C">();
	}
	static class UGA_Constructor_FeelTheBase_DeathListener_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_Constructor_FeelTheBase_DeathListener_C>();
	}
};

}

