#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Athena_C4_Passive

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "GameplayTags_structs.hpp"
#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GA_Athena_C4_Passive.GA_Athena_C4_Passive_C
// 0x0018 (0x0950 - 0x0938)
class UGA_Athena_C4_Passive_C final : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0938(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FGameplayTag                           TrackGroupTag;                                     // 0x0940(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UFortWorldItemDefinition*               C4ItemDef;                                         // 0x0948(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_GA_Athena_C4_Passive(int32 EntryPoint);
	void EventReceived_66DB263A44E303CAE6B174AFF4094381(const struct FGameplayEventData& Payload);
	void K2_ActivateAbility();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_Athena_C4_Passive_C">();
	}
	static class UGA_Athena_C4_Passive_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_Athena_C4_Passive_C>();
	}
};

}

