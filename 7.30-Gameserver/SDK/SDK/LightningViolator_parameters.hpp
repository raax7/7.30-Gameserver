#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: LightningViolator

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function LightningViolator.LightningViolator_C.ExecuteUbergraph_LightningViolator
// 0x0030 (0x0030 - 0x0000)
struct LightningViolator_C_ExecuteUbergraph_LightningViolator final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_65FA[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           K2Node_CustomEvent_NewColor;                       // 0x0008(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   K2Node_CustomEvent_NewText;                        // 0x0018(0x0018)()
};

// Function LightningViolator.LightningViolator_C.EventSetText
// 0x0018 (0x0018 - 0x0000)
struct LightningViolator_C_EventSetText final
{
public:
	class FText                                   NewText;                                           // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function LightningViolator.LightningViolator_C.EventColorBG
// 0x0010 (0x0010 - 0x0000)
struct LightningViolator_C_EventColorBG final
{
public:
	struct FLinearColor                           NewColor;                                          // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function LightningViolator.LightningViolator_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct LightningViolator_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

}

