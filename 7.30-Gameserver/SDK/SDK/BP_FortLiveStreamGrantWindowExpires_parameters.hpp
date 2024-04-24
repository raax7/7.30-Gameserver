#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_FortLiveStreamGrantWindowExpires

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "CommonInput_structs.hpp"
#include "SlateCore_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function BP_FortLiveStreamGrantWindowExpires.BP_FortLiveStreamGrantWindowExpires_C.ExecuteUbergraph_BP_FortLiveStreamGrantWindowExpires
// 0x00E8 (0x00E8 - 0x0000)
struct BP_FortLiveStreamGrantWindowExpires_C_ExecuteUbergraph_BP_FortLiveStreamGrantWindowExpires final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_56ED[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_56EE[0x3];                                     // 0x000D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimespan                              CallFunc_MakeTimespan_ReturnValue;                 // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_CustomEvent_Seconds;                        // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_56EF[0x4];                                     // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimespan                              CallFunc_FromSeconds_ReturnValue;                  // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0028(0x0010)(ZeroConstructor, NoDestructor)
	class UFortMcpContext*                        CallFunc_GetContext_ReturnValue;                   // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x0040(0x0008)(NoDestructor, HasGetValueTypeHash)
	TArray<class FText>                           K2Node_CustomEvent_Names;                          // 0x0048(0x0010)(ConstParm, ZeroConstructor, ReferenceParm)
	TDelegate<void(float Seconds)>                K2Node_CreateDelegate_OutputDelegate1;             // 0x0058(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate2;             // 0x0068(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(TArray<class FText>& Names)>   K2Node_CreateDelegate_OutputDelegate3;             // 0x0078(0x0010)(ZeroConstructor, NoDestructor)
	struct FTimespan                              CallFunc_Subtract_TimespanTimespan_ReturnValue;    // 0x0088(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetTotalSeconds_ReturnValue;              // 0x0090(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_FloatFloat_ReturnValue;         // 0x0094(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0095(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_56F0[0x2];                                     // 0x0096(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate4;             // 0x0098(0x0010)(ZeroConstructor, NoDestructor)
	int32                                         CallFunc_Array_Length_ReturnValue1;                // 0x00A8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x00AC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue1;           // 0x00AD(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_56F1[0x2];                                     // 0x00AE(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_GetBroadcasterGrantWindowSecondsRemaining_ReturnValue; // 0x00B0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_FloatFloat_ReturnValue;           // 0x00B4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_56F2[0x3];                                     // 0x00B5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x00B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate5;             // 0x00C0(0x0010)(ZeroConstructor, NoDestructor)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue1;               // 0x00D0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue1;         // 0x00D8(0x0008)(NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue;              // 0x00E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_FortLiveStreamGrantWindowExpires.BP_FortLiveStreamGrantWindowExpires_C.OnLiveStreamingQuestWindowSelectedViewers_Event_0
// 0x0010 (0x0010 - 0x0000)
struct BP_FortLiveStreamGrantWindowExpires_C_OnLiveStreamingQuestWindowSelectedViewers_Event_0 final
{
public:
	TArray<class FText>                           Names;                                             // 0x0000(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function BP_FortLiveStreamGrantWindowExpires.BP_FortLiveStreamGrantWindowExpires_C.OnLiveStreamingQuestWindowStarts_Event_0
// 0x0004 (0x0004 - 0x0000)
struct BP_FortLiveStreamGrantWindowExpires_C_OnLiveStreamingQuestWindowStarts_Event_0 final
{
public:
	float                                         Seconds;                                           // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_FortLiveStreamGrantWindowExpires.BP_FortLiveStreamGrantWindowExpires_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct BP_FortLiveStreamGrantWindowExpires_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_FortLiveStreamGrantWindowExpires.BP_FortLiveStreamGrantWindowExpires_C.Set Stream Brush
// 0x0088 (0x0088 - 0x0000)
struct BP_FortLiveStreamGrantWindowExpires_C_Set_Stream_Brush final
{
public:
	struct FSlateBrush                            InBrush;                                           // 0x0000(0x0088)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function BP_FortLiveStreamGrantWindowExpires.BP_FortLiveStreamGrantWindowExpires_C.Update Expiration Text
// 0x0040 (0x0040 - 0x0000)
struct BP_FortLiveStreamGrantWindowExpires_C_Update_Expiration_Text final
{
public:
	struct FTimespan                              Timespan;                                          // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_56F3[0x3];                                     // 0x0009(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_GetTotalSeconds_ReturnValue;              // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_FloatFloat_ReturnValue;              // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_56F4[0x3];                                     // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_GetTotalSeconds_ReturnValue1;             // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_FMax_ReturnValue;                         // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_56F5[0x4];                                     // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimespan                              CallFunc_FromSeconds_ReturnValue;                  // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_GetTimespanAsText_ReturnValue;            // 0x0028(0x0018)()
};

// Function BP_FortLiveStreamGrantWindowExpires.BP_FortLiveStreamGrantWindowExpires_C.Update Name Text
// 0x0020 (0x0020 - 0x0000)
struct BP_FortLiveStreamGrantWindowExpires_C_Update_Name_Text final
{
public:
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_56F6[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Array_Get_Item;                           // 0x0008(0x0018)()
};

// Function BP_FortLiveStreamGrantWindowExpires.BP_FortLiveStreamGrantWindowExpires_C.GetToolTipWidget_0
// 0x0060 (0x0060 - 0x0000)
struct BP_FortLiveStreamGrantWindowExpires_C_GetToolTipWidget_0 final
{
public:
	class UWidget*                                ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonInputSubsystem*                  CallFunc_GetContext_ReturnValue;                   // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ECommonInputType                              CallFunc_GetCurrentInputType_ReturnValue;          // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_56F7[0x7];                                     // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue;              // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_56F8[0x7];                                     // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_MakeLiteralText_ReturnValue;              // 0x0028(0x0018)()
	class FText                                   CallFunc_MakeLiteralText_ReturnValue1;             // 0x0040(0x0018)()
	class UUserWidget*                            CallFunc_Create_Basic_Tooltip_Output;              // 0x0058(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

