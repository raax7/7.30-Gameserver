#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MissionDetailsModifierRow

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function MissionDetailsModifierRow.MissionDetailsModifierRow_C.ExecuteUbergraph_MissionDetailsModifierRow
// 0x0004 (0x0004 - 0x0000)
struct MissionDetailsModifierRow_C_ExecuteUbergraph_MissionDetailsModifierRow final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function MissionDetailsModifierRow.MissionDetailsModifierRow_C.Update
// 0x0008 (0x0008 - 0x0000)
struct MissionDetailsModifierRow_C_Update final
{
public:
	struct FVector2D                              NormalSize;                                        // 0x0000(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function MissionDetailsModifierRow.MissionDetailsModifierRow_C.PlayIntroAnimation
// 0x0008 (0x0008 - 0x0000)
struct MissionDetailsModifierRow_C_PlayIntroAnimation final
{
public:
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function MissionDetailsModifierRow.MissionDetailsModifierRow_C.Show Label
// 0x0005 (0x0005 - 0x0000)
struct MissionDetailsModifierRow_C_Show_Label final
{
public:
	bool                                          ShowLabel;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable1;                               // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function MissionDetailsModifierRow.MissionDetailsModifierRow_C.UpdateIcon
// 0x0030 (0x0030 - 0x0000)
struct MissionDetailsModifierRow_C_UpdateIcon final
{
public:
	struct FVector2D                              Normal_Size;                                       // 0x0000(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              Small_Size;                                        // 0x0008(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3601[0x3];                                     // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_BreakVector2D_X;                          // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_Y;                          // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_X1;                         // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_Y1;                         // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable1;                               // 0x0024(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3602[0x3];                                     // 0x0025(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         K2Node_Select_Default;                             // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Select1_Default;                            // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function MissionDetailsModifierRow.MissionDetailsModifierRow_C.SetName
// 0x0020 (0x0020 - 0x0000)
struct MissionDetailsModifierRow_C_SetName final
{
public:
	class FText                                   In_Name;                                           // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                          CallFunc_NotEqual_TextText_ReturnValue;            // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function MissionDetailsModifierRow.MissionDetailsModifierRow_C.SetShowName
// 0x0002 (0x0002 - 0x0000)
struct MissionDetailsModifierRow_C_SetShowName final
{
public:
	bool                                          In_Show;                                           // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_BoolBool_ReturnValue;            // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function MissionDetailsModifierRow.MissionDetailsModifierRow_C.SetNameTextStyle
// 0x0010 (0x0010 - 0x0000)
struct MissionDetailsModifierRow_C_SetNameTextStyle final
{
public:
	class UClass*                                 In_Style;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_ClassClass_ReturnValue;          // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function MissionDetailsModifierRow.MissionDetailsModifierRow_C.UpdateShowName
// 0x0004 (0x0004 - 0x0000)
struct MissionDetailsModifierRow_C_UpdateShowName final
{
public:
	bool                                          Temp_bool_Variable;                                // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable1;                               // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function MissionDetailsModifierRow.MissionDetailsModifierRow_C.SetDescription
// 0x0020 (0x0020 - 0x0000)
struct MissionDetailsModifierRow_C_SetDescription final
{
public:
	class FText                                   In_Description;                                    // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                          CallFunc_NotEqual_TextText_ReturnValue;            // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function MissionDetailsModifierRow.MissionDetailsModifierRow_C.SetShowDescription
// 0x0002 (0x0002 - 0x0000)
struct MissionDetailsModifierRow_C_SetShowDescription final
{
public:
	bool                                          In_Show;                                           // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_BoolBool_ReturnValue;            // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function MissionDetailsModifierRow.MissionDetailsModifierRow_C.UpdateShowDescription
// 0x0004 (0x0004 - 0x0000)
struct MissionDetailsModifierRow_C_UpdateShowDescription final
{
public:
	bool                                          Temp_bool_Variable;                                // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable1;                               // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function MissionDetailsModifierRow.MissionDetailsModifierRow_C.SetDescriptionTextStyle
// 0x0010 (0x0010 - 0x0000)
struct MissionDetailsModifierRow_C_SetDescriptionTextStyle final
{
public:
	class UClass*                                 In_Style;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_ClassClass_ReturnValue;          // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function MissionDetailsModifierRow.MissionDetailsModifierRow_C.SetUseSmallIcon
// 0x0002 (0x0002 - 0x0000)
struct MissionDetailsModifierRow_C_SetUseSmallIcon final
{
public:
	bool                                          In_Use;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_BoolBool_ReturnValue;            // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function MissionDetailsModifierRow.MissionDetailsModifierRow_C.SetIcon
// 0x0010 (0x0010 - 0x0000)
struct MissionDetailsModifierRow_C_SetIcon final
{
public:
	class UTexture2D*                             In_Icon;                                           // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_ObjectObject_ReturnValue;        // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function MissionDetailsModifierRow.MissionDetailsModifierRow_C.SetIconAsset
// 0x0030 (0x0030 - 0x0000)
struct MissionDetailsModifierRow_C_SetIconAsset final
{
public:
	TSoftObjectPtr<class UTexture2D>              In_Icon;                                           // 0x0000(0x0028)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_SoftObjectReference_ReturnValue; // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function MissionDetailsModifierRow.MissionDetailsModifierRow_C.SetData
// 0x0088 (0x0088 - 0x0000)
struct MissionDetailsModifierRow_C_SetData final
{
public:
	class FText                                   In_Name;                                           // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                          In_Show_Name;                                      // 0x0018(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3603[0x7];                                     // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UClass*                                 In_Name_Text_Style;                                // 0x0020(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   In_Description;                                    // 0x0028(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                          In_Show_Description;                               // 0x0040(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3604[0x7];                                     // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UClass*                                 In_Desc_Text_Style;                                // 0x0048(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             In_Icon;                                           // 0x0050(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          In_Use_Small_Icon;                                 // 0x0058(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3605[0x7];                                     // 0x0059(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TSoftObjectPtr<class UTexture2D>              In_Icon_Asset;                                     // 0x0060(0x0028)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

}

