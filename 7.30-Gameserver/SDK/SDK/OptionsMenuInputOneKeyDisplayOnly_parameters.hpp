#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: OptionsMenuInputOneKeyDisplayOnly

#include "Basic.hpp"


namespace SDK::Params
{

// Function OptionsMenuInputOneKeyDisplayOnly.OptionsMenuInputOneKeyDisplayOnly_C.Input Clicked__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct OptionsMenuInputOneKeyDisplayOnly_C_Input_Clicked__DelegateSignature final
{
public:
	int32                                         Number_in_List;                                    // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Is_Primary_Button;                                 // 0x0004(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function OptionsMenuInputOneKeyDisplayOnly.OptionsMenuInputOneKeyDisplayOnly_C.UnbindClicked__DelegateSignature
// 0x0010 (0x0010 - 0x0000)
struct OptionsMenuInputOneKeyDisplayOnly_C_UnbindClicked__DelegateSignature final
{
public:
	int32                                         Number_in_List;                                    // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_56C4[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UOptionsMenuInputOneKey_C*              Widget;                                            // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function OptionsMenuInputOneKeyDisplayOnly.OptionsMenuInputOneKeyDisplayOnly_C.ExecuteUbergraph_OptionsMenuInputOneKeyDisplayOnly
// 0x0018 (0x0018 - 0x0000)
struct OptionsMenuInputOneKeyDisplayOnly_C_ExecuteUbergraph_OptionsMenuInputOneKeyDisplayOnly final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_56C5[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                K2Node_Event_ListItemObject;                       // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_bIsExpanded;                          // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_Event_bIsSelected;                          // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function OptionsMenuInputOneKeyDisplayOnly.OptionsMenuInputOneKeyDisplayOnly_C.OnListItemObjectSet
// 0x0008 (0x0008 - 0x0000)
struct OptionsMenuInputOneKeyDisplayOnly_C_OnListItemObjectSet final
{
public:
	class UObject*                                ListItemObject;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function OptionsMenuInputOneKeyDisplayOnly.OptionsMenuInputOneKeyDisplayOnly_C.BP_OnItemSelectionChanged
// 0x0001 (0x0001 - 0x0000)
struct OptionsMenuInputOneKeyDisplayOnly_C_BP_OnItemSelectionChanged final
{
public:
	bool                                          bIsSelected;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function OptionsMenuInputOneKeyDisplayOnly.OptionsMenuInputOneKeyDisplayOnly_C.BP_OnItemExpansionChanged
// 0x0001 (0x0001 - 0x0000)
struct OptionsMenuInputOneKeyDisplayOnly_C_BP_OnItemExpansionChanged final
{
public:
	bool                                          bIsExpanded;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function OptionsMenuInputOneKeyDisplayOnly.OptionsMenuInputOneKeyDisplayOnly_C.GetListItemObject
// 0x0008 (0x0008 - 0x0000)
struct OptionsMenuInputOneKeyDisplayOnly_C_GetListItemObject final
{
public:
	class UObject*                                ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

