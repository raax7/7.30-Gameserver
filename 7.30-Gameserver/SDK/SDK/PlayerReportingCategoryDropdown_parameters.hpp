#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PlayerReportingCategoryDropdown

#include "Basic.hpp"


namespace SDK::Params
{

// Function PlayerReportingCategoryDropdown.PlayerReportingCategoryDropdown_C.ExecuteUbergraph_PlayerReportingCategoryDropdown
// 0x0060 (0x0060 - 0x0000)
struct PlayerReportingCategoryDropdown_C_ExecuteUbergraph_PlayerReportingCategoryDropdown final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class FText>                           CallFunc_GetPlayerReportingCategoryLabels_ReturnValue; // 0x0010(0x0010)(ZeroConstructor, ReferenceParm)
	class FText                                   CallFunc_Array_Get_Item;                           // 0x0020(0x0018)()
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3B35[0x4];                                     // 0x003C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3B36[0x7];                                     // 0x0049(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UIconTextButton_C*                      CallFunc_Create_ReturnValue;                       // 0x0050(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UVerticalBoxSlot*                       CallFunc_AddChildToVerticalBox_ReturnValue;        // 0x0058(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

