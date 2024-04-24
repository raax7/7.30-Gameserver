#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TT_Ninja_SwordHitsHeal

#include "Basic.hpp"

#include "GameplayTags_structs.hpp"


namespace SDK::Params
{

// Function TT_Ninja_SwordHitsHeal.TT_Ninja_SwordHitsHeal_C.InitializeAbilityInstanceInternal
// 0x0020 (0x0020 - 0x0000)
struct TT_Ninja_SwordHitsHeal_C_InitializeAbilityInstanceInternal final
{
public:
	const class UGameplayAbility*                 AbilityInstance;                                   // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	const class UFortTooltipContext*              Context;                                           // 0x0008(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UGA_Ninja_SwordHitsHeal_C*              K2Node_DynamicCast_AsGA_Ninja_Sword_Hits_Heal;     // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function TT_Ninja_SwordHitsHeal.TT_Ninja_SwordHitsHeal_C.GetTextForTokenFromAbilityInstanceInternal
// 0x0070 (0x0070 - 0x0000)
struct TT_Ninja_SwordHitsHeal_C_GetTextForTokenFromAbilityInstanceInternal final
{
public:
	const class UGameplayAbility*                 AbilityInstance;                                   // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           Tag;                                               // 0x0008(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash)
	const class UFortTooltipContext*              Context;                                           // 0x0010(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           Token;                                             // 0x0018(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash)
	class FText                                   OutText;                                           // 0x0020(0x0018)(Parm, OutParm)
	bool                                          ReturnValue;                                       // 0x0038(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	bool                                          GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess;   // 0x0039(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4897[0x6];                                     // 0x003A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UGA_Ninja_SwordHitsHeal_C*              K2Node_DynamicCast_AsGA_Ninja_Sword_Hits_Heal;     // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0049(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4898[0x2];                                     // 0x004A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Round_ReturnValue;                        // 0x004C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Conv_IntToFloat_ReturnValue;              // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4899[0x4];                                     // 0x0054(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_FloatToText_ReturnValue;             // 0x0058(0x0018)()
};

}

