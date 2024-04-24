#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: EmergencyNoticeWidget

#include "Basic.hpp"


namespace SDK::Params
{

// Function EmergencyNoticeWidget.EmergencyNoticeWidget_C.ExecuteUbergraph_EmergencyNoticeWidget
// 0x0050 (0x0050 - 0x0000)
struct EmergencyNoticeWidget_C_ExecuteUbergraph_EmergencyNoticeWidget final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4562[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   K2Node_Event_Title;                                // 0x0008(0x0018)(ConstParm)
	class FText                                   K2Node_Event_Body;                                 // 0x0020(0x0018)(ConstParm)
	class FText                                   CallFunc_TextToUpper_ReturnValue;                  // 0x0038(0x0018)()
};

// Function EmergencyNoticeWidget.EmergencyNoticeWidget_C.Show Notice
// 0x0008 (0x0008 - 0x0000)
struct EmergencyNoticeWidget_C_Show_Notice final
{
public:
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function EmergencyNoticeWidget.EmergencyNoticeWidget_C.ShowNotice
// 0x0030 (0x0030 - 0x0000)
struct EmergencyNoticeWidget_C_ShowNotice final
{
public:
	class FText                                   Title;                                             // 0x0000(0x0018)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class FText                                   Body;                                              // 0x0018(0x0018)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

}

