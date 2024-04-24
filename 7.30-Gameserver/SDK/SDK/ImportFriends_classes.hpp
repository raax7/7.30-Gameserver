#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ImportFriends

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "FortniteUI_structs.hpp"
#include "FortniteUI_classes.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass ImportFriends.ImportFriends_C
// 0x0160 (0x0510 - 0x03B0)
class UImportFriends_C final : public UFortSocialImportPanel
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x03B0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Intro_V2;                                          // 0x03B8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       ArrowPulse;                                        // 0x03C0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Intro;                                             // 0x03C8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UCommonTextBlock*                       AddFriendsDescription;                             // 0x03D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       CommonTextBlock_0;                                 // 0x03D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       CT_AddFriendsDescription;                          // 0x03E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       CT_ChangeInSettingsText;                           // 0x03E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       CT_LimitedTimeHeader;                              // 0x03F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       CT_TakenToLauncher;                                // 0x03F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_1;                                           // 0x0400(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UItemInfoWidget_C*                      ItemInfoWidget;                                    // 0x0408(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USafeZone*                              SafeZone_0;                                        // 0x0410(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScaleBox*                              SBox_AddFriendButtonScaleBox;                      // 0x0418(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScaleBox*                              ScaleBoxDescription;                               // 0x0420(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScaleBox*                              ScaleBoxHeader;                                    // 0x0428(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	EFrontEndCamera                               DesiredFrontEndCamera;                             // 0x0430(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_56DC[0x7];                                     // 0x0431(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UFortItemDefinition*                    PreviewItemDef;                                    // 0x0438(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         HeartbeatDelayIntroAnimation;                      // 0x0440(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         DebugSocialImportType;                             // 0x0444(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bHasReward;                                        // 0x0445(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_56DD[0x2];                                     // 0x0446(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   FacebookHeader;                                    // 0x0448(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                   VKHeader;                                          // 0x0460(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                   SteamHeader;                                       // 0x0478(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                   PlaystationHeader;                                 // 0x0490(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                   XboxHeader;                                        // 0x04A8(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	ESocialImportPanelPlatform                    SocialPlatform;                                    // 0x04C0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_56DE[0x3];                                     // 0x04C1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         WrapHeaderAt;                                      // 0x04C4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   XboxDescriptionText;                               // 0x04C8(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                   PSNDescriptionText;                                // 0x04E0(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                   SwitchDescriptionText;                             // 0x04F8(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void ExecuteUbergraph_ImportFriends(int32 EntryPoint);
	void OnAnimationFinished(const class UWidgetAnimation* Animation);
	void OnIncentivizedSet(bool bIncentivized);
	void OnActivated();
	void BndEvt__Button_RemindMeLater_K2Node_ComponentBoundEvent_796_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void HandleDescriptionText();
	void HandleHeaderText();
	void OnPanelTypeSet(ESocialImportPanelType NewType);
	void PreConstruct(bool IsDesignTime);
	void ScaleTextboxWithWrappingWorkaround(class UScaleBox* ContainingScalebox, int32 CharLimitThreshold, class UCommonTextBlock* TargetText, int32 WrapAtHorrizontal);
	void ScaleTextButton(int32 CharThreshold, class UScaleBox* ContainingScalebox, class UIconTextButton_C* Button);
	void SetupNav();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ImportFriends_C">();
	}
	static class UImportFriends_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UImportFriends_C>();
	}
};

}

