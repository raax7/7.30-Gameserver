#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ProgressModalWidget

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK::Params
{

// Function ProgressModalWidget.ProgressModalWidget_C.ExecuteUbergraph_ProgressModalWidget
// 0x0100 (0x0100 - 0x0000)
struct ProgressModalWidget_C_ExecuteUbergraph_ProgressModalWidget final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate1;             // 0x0014(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate2;             // 0x0024(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_3E99[0x4];                                     // 0x0034(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   K2Node_Event_InTitle;                              // 0x0038(0x0018)(ConstParm)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate3;             // 0x0050(0x0010)(ZeroConstructor, NoDestructor)
	class FText                                   K2Node_Event_InDescription;                        // 0x0060(0x0018)(ConstParm)
	struct FSlateBrush                            K2Node_Event_InIcon;                               // 0x0078(0x0088)()
};

// Function ProgressModalWidget.ProgressModalWidget_C.Initialize
// 0x0008 (0x0008 - 0x0000)
struct ProgressModalWidget_C_Initialize final
{
public:
	class UFortUINavigationManager*               CallFunc_GetUINavigationManager_ReturnValue;       // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ProgressModalWidget.ProgressModalWidget_C.OnAnalogValueChanged
// 0x02A0 (0x02A0 - 0x0000)
struct ProgressModalWidget_C_OnAnalogValueChanged final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FAnalogInputEvent                      InAnalogInputEvent;                                // 0x0038(0x0040)(BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                            ReturnValue;                                       // 0x0078(0x00B8)(Parm, OutParm, ReturnParm)
	struct FEventReply                            CallFunc_Unhandled_ReturnValue;                    // 0x0130(0x00B8)()
	struct FEventReply                            CallFunc_Handled_ReturnValue;                      // 0x01E8(0x00B8)()
};

// Function ProgressModalWidget.ProgressModalWidget_C.SetDescription
// 0x0018 (0x0018 - 0x0000)
struct ProgressModalWidget_C_SetDescription final
{
public:
	class FText                                   InDescription;                                     // 0x0000(0x0018)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function ProgressModalWidget.ProgressModalWidget_C.SetIcon
// 0x0088 (0x0088 - 0x0000)
struct ProgressModalWidget_C_SetIcon final
{
public:
	struct FSlateBrush                            InIcon;                                            // 0x0000(0x0088)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function ProgressModalWidget.ProgressModalWidget_C.SetTitle
// 0x0018 (0x0018 - 0x0000)
struct ProgressModalWidget_C_SetTitle final
{
public:
	class FText                                   InTitle;                                           // 0x0000(0x0018)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

}

