#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WeaponSummaryListEntryWidget

#include "Basic.hpp"

#include "FortniteGame_structs.hpp"
#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function WeaponSummaryListEntryWidget.WeaponSummaryListEntryWidget_C.ExecuteUbergraph_WeaponSummaryListEntryWidget
// 0x0004 (0x0004 - 0x0000)
struct WeaponSummaryListEntryWidget_C_ExecuteUbergraph_WeaponSummaryListEntryWidget final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WeaponSummaryListEntryWidget.WeaponSummaryListEntryWidget_C.Update
// 0x0128 (0x0128 - 0x0000)
struct WeaponSummaryListEntryWidget_C_Update final
{
public:
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue;           // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAthenaBaseStatView*                    CallFunc_GetBaseStatView_ReturnValue;              // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAthenaWeaponStatView*                  K2Node_DynamicCast_AsAthena_Weapon_Stat_View;      // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5A1E[0x7];                                     // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UFortWeaponItemDefinition*              CallFunc_GetWeaponDefinition_ReturnValue;          // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortItem*                              CallFunc_CreateTemporaryItemInstanceBP_ReturnValue; // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EFortRarity                                   CallFunc_GetRarity_ReturnValue;                    // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5A1F[0x7];                                     // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFortRarityItemData                    CallFunc_BPGetRarityData_ReturnValue;              // 0x0038(0x0080)()
	class FText                                   CallFunc_GetDisplayName_ReturnValue;               // 0x00B8(0x0018)()
	class FText                                   CallFunc_TextToUpper_ReturnValue;                  // 0x00D0(0x0018)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x00E8(0x0028)()
	class FText                                   CallFunc_TextToUpper_ReturnValue1;                 // 0x0110(0x0018)()
};

}

