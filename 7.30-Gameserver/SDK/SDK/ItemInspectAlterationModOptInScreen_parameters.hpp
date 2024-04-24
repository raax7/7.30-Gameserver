#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ItemInspectAlterationModOptInScreen

#include "Basic.hpp"

#include "FortniteGame_structs.hpp"


namespace SDK::Params
{

// Function ItemInspectAlterationModOptInScreen.ItemInspectAlterationModOptInScreen_C.ExecuteUbergraph_ItemInspectAlterationModOptInScreen
// 0x0060 (0x0060 - 0x0000)
struct ItemInspectAlterationModOptInScreen_C_ExecuteUbergraph_ItemInspectAlterationModOptInScreen final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3D32[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UCommonButton*                          K2Node_CustomEvent_Button4;                        // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonButton*                          K2Node_CustomEvent_Button3;                        // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonButton*                          K2Node_CustomEvent_Button2;                        // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_PauseAnimation_ReturnValue;               // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3D33[0x4];                                     // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationTimeRange_ReturnValue;       // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationTimeRange_ReturnValue1;      // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonButton*                          K2Node_CustomEvent_Button1;                        // 0x0040(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonButton*                          K2Node_CustomEvent_Button;                         // 0x0048(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortGlobalUIContext*                   CallFunc_GetContext_ReturnValue;                   // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetHidePerkRecombobulatorHelp_ReturnValue; // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function ItemInspectAlterationModOptInScreen.ItemInspectAlterationModOptInScreen_C.Handle Cancel Preview
// 0x0008 (0x0008 - 0x0000)
struct ItemInspectAlterationModOptInScreen_C_Handle_Cancel_Preview final
{
public:
	class UCommonButton*                          Button;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ItemInspectAlterationModOptInScreen.ItemInspectAlterationModOptInScreen_C.Handle Help Button
// 0x0008 (0x0008 - 0x0000)
struct ItemInspectAlterationModOptInScreen_C_Handle_Help_Button final
{
public:
	class UCommonButton*                          Button;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ItemInspectAlterationModOptInScreen.ItemInspectAlterationModOptInScreen_C.Handle OptIn Cancel
// 0x0008 (0x0008 - 0x0000)
struct ItemInspectAlterationModOptInScreen_C_Handle_OptIn_Cancel final
{
public:
	class UCommonButton*                          Button;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ItemInspectAlterationModOptInScreen.ItemInspectAlterationModOptInScreen_C.Handle OptIn Accept
// 0x0008 (0x0008 - 0x0000)
struct ItemInspectAlterationModOptInScreen_C_Handle_OptIn_Accept final
{
public:
	class UCommonButton*                          Button;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ItemInspectAlterationModOptInScreen.ItemInspectAlterationModOptInScreen_C.Handle Continue
// 0x0008 (0x0008 - 0x0000)
struct ItemInspectAlterationModOptInScreen_C_Handle_Continue final
{
public:
	class UCommonButton*                          Button;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ItemInspectAlterationModOptInScreen.ItemInspectAlterationModOptInScreen_C.Set Up Header Colors
// 0x0088 (0x0088 - 0x0000)
struct ItemInspectAlterationModOptInScreen_C_Set_Up_Header_Colors final
{
public:
	struct FFortRarityItemData                    RarityData;                                        // 0x0000(0x0080)(BlueprintVisible, BlueprintReadOnly, Parm)
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue;           // 0x0080(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ItemInspectAlterationModOptInScreen.ItemInspectAlterationModOptInScreen_C.SetupTriangles
// 0x0088 (0x0088 - 0x0000)
struct ItemInspectAlterationModOptInScreen_C_SetupTriangles final
{
public:
	struct FFortRarityItemData                    RarityData;                                        // 0x0000(0x0080)(BlueprintVisible, BlueprintReadOnly, Parm)
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue;           // 0x0080(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ItemInspectAlterationModOptInScreen.ItemInspectAlterationModOptInScreen_C.Update Colors
// 0x0088 (0x0088 - 0x0000)
struct ItemInspectAlterationModOptInScreen_C_Update_Colors final
{
public:
	EFortRarity                                   CallFunc_GetRarity_ReturnValue;                    // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3D34[0x6];                                     // 0x0002(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFortRarityItemData                    CallFunc_BPGetRarityData_ReturnValue;              // 0x0008(0x0080)()
};

// Function ItemInspectAlterationModOptInScreen.ItemInspectAlterationModOptInScreen_C.Reset To Show Help
// 0x0010 (0x0010 - 0x0000)
struct ItemInspectAlterationModOptInScreen_C_Reset_To_Show_Help final
{
public:
	float                                         CallFunc_GetEndTime_ReturnValue;                   // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3D35[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationTimeRange_ReturnValue;       // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ItemInspectAlterationModOptInScreen.ItemInspectAlterationModOptInScreen_C.BindDelegates
// 0x0050 (0x0050 - 0x0000)
struct ItemInspectAlterationModOptInScreen_C_BindDelegates final
{
public:
	TDelegate<void(class UCommonButton* Button)>  K2Node_CreateDelegate_OutputDelegate;              // 0x0000(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(class UCommonButton* Button)>  K2Node_CreateDelegate_OutputDelegate1;             // 0x0010(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(class UCommonButton* Button)>  K2Node_CreateDelegate_OutputDelegate2;             // 0x0020(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(class UCommonButton* Button)>  K2Node_CreateDelegate_OutputDelegate3;             // 0x0030(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(class UCommonButton* Button)>  K2Node_CreateDelegate_OutputDelegate4;             // 0x0040(0x0010)(ZeroConstructor, NoDestructor)
};

// Function ItemInspectAlterationModOptInScreen.ItemInspectAlterationModOptInScreen_C.SetScrollWidget
// 0x0008 (0x0008 - 0x0000)
struct ItemInspectAlterationModOptInScreen_C_SetScrollWidget final
{
public:
	class UFortUINavigationManager*               CallFunc_GetUINavigationManager_ReturnValue;       // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

