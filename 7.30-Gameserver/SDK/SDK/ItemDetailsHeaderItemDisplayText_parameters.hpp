#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ItemDetailsHeaderItemDisplayText

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function ItemDetailsHeaderItemDisplayText.ItemDetailsHeaderItemDisplayText_C.ExecuteUbergraph_ItemDetailsHeaderItemDisplayText
// 0x0100 (0x0100 - 0x0000)
struct ItemDetailsHeaderItemDisplayText_C_ExecuteUbergraph_ItemDetailsHeaderItemDisplayText final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3B83[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UFortItemDefinition*                    CallFunc_GetSchematicCraftingResultBP_ReturnValue; // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortWeaponItemDefinition*              K2Node_DynamicCast_AsFort_Weapon_Item_Definition;  // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable1;                               // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EFortRarity                                   CallFunc_GetRarity_ReturnValue;                    // 0x001A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3B84[0x5];                                     // 0x001B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_GetDisplayName_DisplayName;               // 0x0020(0x0018)()
	struct FFortRarityItemData                    CallFunc_BPGetRarityData_ReturnValue;              // 0x0038(0x0080)()
	class FText                                   CallFunc_TextToUpper_ReturnValue;                  // 0x00B8(0x0018)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x00D0(0x0028)()
	bool                                          CallFunc_TextIsEmpty_ReturnValue;                  // 0x00F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x00F9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x00FA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x00FB(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ItemDetailsHeaderItemDisplayText.ItemDetailsHeaderItemDisplayText_C.GetDisplayName
// 0x0060 (0x0060 - 0x0000)
struct ItemDetailsHeaderItemDisplayText_C_GetDisplayName final
{
public:
	class FText                                   DisplayName;                                       // 0x0000(0x0018)(Parm, OutParm)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3B85[0x7];                                     // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_GetDisplayName_ReturnValue;               // 0x0020(0x0018)()
	class UFortWeaponItemDefinition*              CallFunc_GetSchematicCraftingResultOrCraftedWeaponBP_ReturnValue; // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue1;                     // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3B86[0x7];                                     // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_GetShortDisplayName_ReturnValue;          // 0x0048(0x0018)()
};

}

