#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SocialPanel

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK::Params
{

// Function SocialPanel.SocialPanel_C.ExecuteUbergraph_SocialPanel
// 0x0028 (0x0028 - 0x0000)
struct SocialPanel_C_ExecuteUbergraph_SocialPanel final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5466[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UCommonButton*                          K2Node_ComponentBoundEvent_Button;                 // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsAnySlideOutMenuOpen_ReturnValue;        // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5467[0x7];                                     // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortUIManagerWidget_NUI*               CallFunc_GetUIManagerWidget_ReturnValue;           // 0x0020(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SocialPanel.SocialPanel_C.BndEvt__SocialPanel_TopBarExtension_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct SocialPanel_C_BndEvt__SocialPanel_TopBarExtension_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature final
{
public:
	class UCommonButton*                          Button;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SocialPanel.SocialPanel_C.OnMouseButtonDown_0
// 0x02D8 (0x02D8 - 0x0000)
struct SocialPanel_C_OnMouseButtonDown_0 final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                          MouseEvent;                                        // 0x0038(0x0070)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                            ReturnValue;                                       // 0x00A8(0x00B8)(Parm, OutParm, ReturnParm)
	struct FEventReply                            CallFunc_Unhandled_ReturnValue;                    // 0x0160(0x00B8)()
	bool                                          CallFunc_IsAnySlideOutMenuOpen_ReturnValue;        // 0x0218(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5468[0x7];                                     // 0x0219(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FEventReply                            CallFunc_Handled_ReturnValue;                      // 0x0220(0x00B8)()
};

// Function SocialPanel.SocialPanel_C.ClosePanelAfterAnimation
// 0x0018 (0x0018 - 0x0000)
struct SocialPanel_C_ClosePanelAfterAnimation final
{
public:
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0000(0x0010)(ZeroConstructor, NoDestructor)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SocialPanel.SocialPanel_C.Play Panel Animation Sound
// 0x0001 (0x0001 - 0x0000)
struct SocialPanel_C_Play_Panel_Animation_Sound final
{
public:
	bool                                          CallFunc_IsAnimationPlaying_ReturnValue;           // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}

