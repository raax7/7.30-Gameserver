#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ReadyUp_Interact

#include "Basic.hpp"

#include "FortniteGame_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "GameplayTags_structs.hpp"
#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function BP_ReadyUp_Interact.BP_ReadyUp_Interact_C.ExecuteUbergraph_BP_ReadyUp_Interact
// 0x08A0 (0x08A0 - 0x0000)
struct BP_ReadyUp_Interact_C_ExecuteUbergraph_BP_ReadyUp_Interact final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4BD3[0xC];                                     // 0x0004(0x000C)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_MakeTransform_ReturnValue;                // 0x0010(0x0030)(IsPlainOldData, NoDestructor)
	class AActor*                                 CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue; // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_HasAuthority_ReturnValue;                 // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4BD4[0x7];                                     // 0x0049(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AAnnounce_Gen_Basic_C*                  CallFunc_FinishSpawningActor_ReturnValue;          // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortAsyncAction_WaitForClientAnnouncement* CallFunc_WaitForClientAnnouncement_ReturnValue;    // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 Temp_class_Variable;                               // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 K2Node_ClassDynamicCast_AsUser_Widget;             // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_ClassDynamicCast_bSuccess;                  // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0071(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4BD5[0x6];                                     // 0x0072(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UClass*                                 K2Node_CustomEvent_Loaded;                         // 0x0078(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class AFortPlayerController*>          K2Node_MakeArray_Array;                            // 0x0080(0x0010)(ZeroConstructor, ReferenceParm)
	struct FTransform                             CallFunc_MakeTransform_ReturnValue1;               // 0x0090(0x0030)(IsPlainOldData, NoDestructor)
	class AActor*                                 CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue1; // 0x00C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x00C8(0x0010)(ZeroConstructor, NoDestructor)
	class AAnnounce_Gen_Basic_C*                  CallFunc_FinishSpawningActor_ReturnValue1;         // 0x00D8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortAsyncAction_WaitForClientAnnouncement* CallFunc_WaitForClientAnnouncement_ReturnValue1;   // 0x00E0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate1;             // 0x00E8(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue1;                     // 0x00F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4BD6[0x7];                                     // 0x00F9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class AFortPlayerController*>          K2Node_MakeArray_Array1;                           // 0x0100(0x0010)(ZeroConstructor, ReferenceParm)
	bool                                          CallFunc_IsDedicatedServer_ReturnValue;            // 0x0110(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4BD7[0x3];                                     // 0x0111(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(TSubclassOf<class UObject> Loaded)> K2Node_CreateDelegate_OutputDelegate2;             // 0x0114(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_4BD8[0x4];                                     // 0x0124(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	const class AFortPawn*                        K2Node_Event_InteractingPawn;                      // 0x0128(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerPawn*                        K2Node_DynamicCast_AsFort_Player_Pawn;             // 0x0130(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0138(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4BD9[0x7];                                     // 0x0139(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UUserWidget*                            CallFunc_Create_ReturnValue;                       // 0x0140(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AController*                            CallFunc_GetController_ReturnValue;                // 0x0148(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IFortInitializeFromObjectInterface> K2Node_DynamicCast_AsFort_Initialize_from_Object_Interface; // 0x0150(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_DynamicCast_bSuccess1;                      // 0x0160(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4BDA[0x7];                                     // 0x0161(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AFortPlayerController*                  K2Node_DynamicCast_AsFort_Player_Controller;       // 0x0168(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess2;                      // 0x0170(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	EFortVoteType                                 K2Node_CustomEvent_VoteType;                       // 0x0171(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EFortVoteStatus                               K2Node_CustomEvent_VoteStatus;                     // 0x0172(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4BDB[0x1];                                     // 0x0173(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_CustomEvent_VoteResult;                     // 0x0174(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FVoter>                         K2Node_CustomEvent_Voters;                         // 0x0178(0x0010)(ConstParm, ZeroConstructor, ReferenceParm)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0188(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue1;           // 0x0189(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x018A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_SwitchEnum1_CmpSuccess;                     // 0x018B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_SwitchEnum2_CmpSuccess;                     // 0x018C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4BDC[0x3];                                     // 0x018D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class IFortInventoryOwnerInterface> CallFunc_ReturnBluGloToPlayer_InventoryOwner_CastInput; // 0x0190(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class AGameStateBase*                         CallFunc_GetGameState_ReturnValue;                 // 0x01A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortGameStateZone*                     K2Node_DynamicCast_AsFort_Game_State_Zone;         // 0x01A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess3;                      // 0x01B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4BDD[0x3];                                     // 0x01B1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(EFortVoteType VoteType, EFortVoteStatus VoteStatus, int32 VoteResult, TArray<struct FVoter>& Voters)> K2Node_CreateDelegate_OutputDelegate3;             // 0x01B4(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(EFortVoteType VoteType, EFortVoteStatus VoteStatus, int32 VoteResult, TArray<struct FVoter>& Voters)> K2Node_CreateDelegate_OutputDelegate4;             // 0x01C4(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_4BDE[0x4];                                     // 0x01D4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x01D8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x01E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_MultiGate_FirstRun;                         // 0x01E1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4BDF[0x2];                                     // 0x01E2(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_MultiGate_Data;                             // 0x01E4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_MultiGate_ScratchBool;                      // 0x01E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4BE0[0x3];                                     // 0x01E9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_MultiGate_ScratchIndex;                     // 0x01EC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IFortInventoryOwnerInterface> CallFunc_ReturnBluGloToPlayer_InventoryOwner1_CastInput; // 0x01F0(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class AFortMission*                           CallFunc_GetMission_ReturnValue;                   // 0x0200(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate5;             // 0x0208(0x0010)(ZeroConstructor, NoDestructor)
	struct FSlateBrush                            CallFunc_MakeBrushFromTexture_ReturnValue;         // 0x0218(0x0088)()
	struct FFortClientAnnouncementData_Basic      K2Node_MakeStruct_FortClientAnnouncementData_Basic; // 0x02A0(0x00E8)()
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate6;             // 0x0388(0x0010)(ZeroConstructor, NoDestructor)
	struct FSlateBrush                            CallFunc_MakeBrushFromTexture_ReturnValue1;        // 0x0398(0x0088)()
	struct FGuid                                  K2Node_HandleMissionEvent_InMissionGuid2;          // 0x0420(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagContainer                  K2Node_HandleMissionEvent_ObjectiveHandle2;        // 0x0430(0x0020)()
	class UFortMissionEventParams*                K2Node_HandleMissionEvent_Params2;                 // 0x0450(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_HandleMissionEvent_DO_NOT_USE_THIS_OR_VARIABLES_BELOW2; // 0x0458(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4BE1[0x7];                                     // 0x0459(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                K2Node_HandleMissionEvent_EventFocus2;             // 0x0460(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	const class UDataAsset*                       K2Node_HandleMissionEvent_EventContent2;           // 0x0468(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 K2Node_HandleMissionEvent_EventInstigator2;        // 0x0470(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_HandleMissionEvent_GenericInt2;             // 0x0478(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_HandleMissionEvent_GenericFloat2;           // 0x047C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   K2Node_HandleMissionEvent_GenericText2;            // 0x0480(0x0018)(ConstParm)
	struct FGameplayTagContainer                  K2Node_HandleMissionEvent_GameplayTags2;           // 0x0498(0x0020)()
	struct FFortMissionEvent                      K2Node_HandleMissionEvent_MissionEvent2;           // 0x04B8(0x0098)(ConstParm)
	struct FFortClientAnnouncementData_Basic      K2Node_MakeStruct_FortClientAnnouncementData_Basic1; // 0x0550(0x00E8)()
	struct FGuid                                  K2Node_HandleMissionEvent_InMissionGuid1;          // 0x0638(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagContainer                  K2Node_HandleMissionEvent_ObjectiveHandle1;        // 0x0648(0x0020)()
	class UFortMissionEventParams*                K2Node_HandleMissionEvent_Params1;                 // 0x0668(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_HandleMissionEvent_DO_NOT_USE_THIS_OR_VARIABLES_BELOW1; // 0x0670(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4BE2[0x7];                                     // 0x0671(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                K2Node_HandleMissionEvent_EventFocus1;             // 0x0678(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	const class UDataAsset*                       K2Node_HandleMissionEvent_EventContent1;           // 0x0680(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 K2Node_HandleMissionEvent_EventInstigator1;        // 0x0688(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_HandleMissionEvent_GenericInt1;             // 0x0690(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_HandleMissionEvent_GenericFloat1;           // 0x0694(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   K2Node_HandleMissionEvent_GenericText1;            // 0x0698(0x0018)(ConstParm)
	struct FGameplayTagContainer                  K2Node_HandleMissionEvent_GameplayTags1;           // 0x06B0(0x0020)()
	struct FFortMissionEvent                      K2Node_HandleMissionEvent_MissionEvent1;           // 0x06D0(0x0098)(ConstParm)
	struct FGuid                                  K2Node_HandleMissionEvent_InMissionGuid;           // 0x0768(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagContainer                  K2Node_HandleMissionEvent_ObjectiveHandle;         // 0x0778(0x0020)()
	class UFortMissionEventParams*                K2Node_HandleMissionEvent_Params;                  // 0x0798(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_HandleMissionEvent_DO_NOT_USE_THIS_OR_VARIABLES_BELOW; // 0x07A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4BE3[0x7];                                     // 0x07A1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                K2Node_HandleMissionEvent_EventFocus;              // 0x07A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	const class UDataAsset*                       K2Node_HandleMissionEvent_EventContent;            // 0x07B0(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 K2Node_HandleMissionEvent_EventInstigator;         // 0x07B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_HandleMissionEvent_GenericInt;              // 0x07C0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_HandleMissionEvent_GenericFloat;            // 0x07C4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   K2Node_HandleMissionEvent_GenericText;             // 0x07C8(0x0018)(ConstParm)
	struct FGameplayTagContainer                  K2Node_HandleMissionEvent_GameplayTags;            // 0x07E0(0x0020)()
	struct FFortMissionEvent                      K2Node_HandleMissionEvent_MissionEvent;            // 0x0800(0x0098)(ConstParm)
};

// Function BP_ReadyUp_Interact.BP_ReadyUp_Interact_C.HandleMissionEvent_ActivatePrimary
// 0x0130 (0x0130 - 0x0000)
struct BP_ReadyUp_Interact_C_HandleMissionEvent_ActivatePrimary final
{
public:
	struct FGuid                                  InMissionGuid;                                     // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagContainer                  ObjectiveHandle;                                   // 0x0010(0x0020)(BlueprintVisible, BlueprintReadOnly, Parm)
	class UFortMissionEventParams*                Params_0;                                          // 0x0030(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          DO_NOT_USE_THIS_OR_VARIABLES_BELOW;                // 0x0038(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4BE4[0x7];                                     // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                EventFocus;                                        // 0x0040(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	const class UDataAsset*                       EventContent;                                      // 0x0048(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 EventInstigator;                                   // 0x0050(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         GenericInt;                                        // 0x0058(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         GenericFloat;                                      // 0x005C(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   GenericText;                                       // 0x0060(0x0018)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayTagContainer                  GameplayTags;                                      // 0x0078(0x0020)(BlueprintVisible, BlueprintReadOnly, Parm)
	struct FFortMissionEvent                      MissionEvent;                                      // 0x0098(0x0098)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function BP_ReadyUp_Interact.BP_ReadyUp_Interact_C.HandleMissionEvent_UnSupported
// 0x0130 (0x0130 - 0x0000)
struct BP_ReadyUp_Interact_C_HandleMissionEvent_UnSupported final
{
public:
	struct FGuid                                  InMissionGuid;                                     // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagContainer                  ObjectiveHandle;                                   // 0x0010(0x0020)(BlueprintVisible, BlueprintReadOnly, Parm)
	class UFortMissionEventParams*                Params_0;                                          // 0x0030(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          DO_NOT_USE_THIS_OR_VARIABLES_BELOW;                // 0x0038(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4BE5[0x7];                                     // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                EventFocus;                                        // 0x0040(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	const class UDataAsset*                       EventContent;                                      // 0x0048(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 EventInstigator;                                   // 0x0050(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         GenericInt;                                        // 0x0058(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         GenericFloat;                                      // 0x005C(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   GenericText;                                       // 0x0060(0x0018)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayTagContainer                  GameplayTags;                                      // 0x0078(0x0020)(BlueprintVisible, BlueprintReadOnly, Parm)
	struct FFortMissionEvent                      MissionEvent;                                      // 0x0098(0x0098)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function BP_ReadyUp_Interact.BP_ReadyUp_Interact_C.HandleMissionEvent_Supported
// 0x0130 (0x0130 - 0x0000)
struct BP_ReadyUp_Interact_C_HandleMissionEvent_Supported final
{
public:
	struct FGuid                                  InMissionGuid;                                     // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagContainer                  ObjectiveHandle;                                   // 0x0010(0x0020)(BlueprintVisible, BlueprintReadOnly, Parm)
	class UFortMissionEventParams*                Params_0;                                          // 0x0030(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          DO_NOT_USE_THIS_OR_VARIABLES_BELOW;                // 0x0038(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4BE6[0x7];                                     // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                EventFocus;                                        // 0x0040(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	const class UDataAsset*                       EventContent;                                      // 0x0048(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 EventInstigator;                                   // 0x0050(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         GenericInt;                                        // 0x0058(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         GenericFloat;                                      // 0x005C(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   GenericText;                                       // 0x0060(0x0018)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayTagContainer                  GameplayTags;                                      // 0x0078(0x0020)(BlueprintVisible, BlueprintReadOnly, Parm)
	struct FFortMissionEvent                      MissionEvent;                                      // 0x0098(0x0098)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function BP_ReadyUp_Interact.BP_ReadyUp_Interact_C.VoteCalled
// 0x0018 (0x0018 - 0x0000)
struct BP_ReadyUp_Interact_C_VoteCalled final
{
public:
	EFortVoteType                                 VoteType;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EFortVoteStatus                               VoteStatus;                                        // 0x0001(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4BE7[0x2];                                     // 0x0002(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         VoteResult;                                        // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FVoter>                         Voters;                                            // 0x0008(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function BP_ReadyUp_Interact.BP_ReadyUp_Interact_C.BlueprintOnInteract
// 0x0008 (0x0008 - 0x0000)
struct BP_ReadyUp_Interact_C_BlueprintOnInteract final
{
public:
	const class AFortPawn*                        InteractingPawn;                                   // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_ReadyUp_Interact.BP_ReadyUp_Interact_C.OnLoaded_EF452E634A72368CE34CF0A4B53E9FCE
// 0x0008 (0x0008 - 0x0000)
struct BP_ReadyUp_Interact_C_OnLoaded_EF452E634A72368CE34CF0A4B53E9FCE final
{
public:
	class UClass*                                 Loaded;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_ReadyUp_Interact.BP_ReadyUp_Interact_C.ShouldDie
// 0x0020 (0x0020 - 0x0000)
struct BP_ReadyUp_Interact_C_ShouldDie final
{
public:
	float                                         Damage;                                            // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4BE8[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AController*                            EventInstigator;                                   // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 DamageCauser;                                      // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ReturnValue;                                       // 0x0018(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function BP_ReadyUp_Interact.BP_ReadyUp_Interact_C.ReturnBluGloToPlayer
// 0x0018 (0x0018 - 0x0000)
struct BP_ReadyUp_Interact_C_ReturnBluGloToPlayer final
{
public:
	TScriptInterface<class IFortInventoryOwnerInterface> InventoryOwner;                                    // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	int32                                         NumberBGtoReturn;                                  // 0x0010(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_ReadyUp_Interact.BP_ReadyUp_Interact_C.TakeBluGloFromPlayer
// 0x0010 (0x0010 - 0x0000)
struct BP_ReadyUp_Interact_C_TakeBluGloFromPlayer final
{
public:
	class AFortPlayerController*                  Param_PlayerController;                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         NumberBGtoTake;                                    // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_K2_RemoveItemFromPlayer_ReturnValue;      // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_ReadyUp_Interact.BP_ReadyUp_Interact_C.BlueprintCanInteract
// 0x0010 (0x0010 - 0x0000)
struct BP_ReadyUp_Interact_C_BlueprintCanInteract final
{
public:
	const class AFortPawn*                        InteractingPawn;                                   // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ReturnValue;                                       // 0x0008(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function BP_ReadyUp_Interact.BP_ReadyUp_Interact_C.BlueprintGetInteractionString
// 0x0020 (0x0020 - 0x0000)
struct BP_ReadyUp_Interact_C_BlueprintGetInteractionString final
{
public:
	const class AFortPawn*                        InteractingPawn;                                   // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   ReturnValue;                                       // 0x0008(0x0018)(Parm, OutParm, ReturnParm)
};

}

