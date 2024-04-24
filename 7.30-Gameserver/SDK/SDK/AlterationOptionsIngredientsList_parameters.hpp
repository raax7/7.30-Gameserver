#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AlterationOptionsIngredientsList

#include "Basic.hpp"

#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function AlterationOptionsIngredientsList.AlterationOptionsIngredientsList_C.ExecuteUbergraph_AlterationOptionsIngredientsList
// 0x0028 (0x0028 - 0x0000)
struct AlterationOptionsIngredientsList_C_ExecuteUbergraph_AlterationOptionsIngredientsList final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FMargin                                K2Node_MakeStruct_Margin;                          // 0x0004(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3296[0x4];                                     // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UFortItemQuantityListEntryBase*         K2Node_Event_ListEntry;                            // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UHorizontalBoxSlot*                     CallFunc_AddChildToHorizontalBox_ReturnValue;      // 0x0020(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AlterationOptionsIngredientsList.AlterationOptionsIngredientsList_C.AddListEntry
// 0x0008 (0x0008 - 0x0000)
struct AlterationOptionsIngredientsList_C_AddListEntry final
{
public:
	class UFortItemQuantityListEntryBase*         ListEntry;                                         // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AlterationOptionsIngredientsList.AlterationOptionsIngredientsList_C.SetupTitle
// 0x0010 (0x0010 - 0x0000)
struct AlterationOptionsIngredientsList_C_SetupTitle final
{
public:
	bool                                          Temp_bool_Variable;                                // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsEmptyList_ReturnValue;                  // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3297[0x6];                                     // 0x0002(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                K2Node_Select_Default;                             // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

