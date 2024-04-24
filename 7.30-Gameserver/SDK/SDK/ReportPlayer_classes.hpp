#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ReportPlayer

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_structs.hpp"
#include "FortniteUI_classes.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass ReportPlayer.ReportPlayer_C
// 0x0140 (0x0500 - 0x03C0)
class UReportPlayer_C final : public UFeedbackReportPlayerBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x03C0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       ImageLoaded;                                       // 0x03C8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       ReportSent;                                        // 0x03D0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Intro;                                             // 0x03D8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UIconTextButton_C*                      B_Tab_AdditionalInfo;                              // 0x03E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                      B_Tab_PlayerName;                                  // 0x03E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                      B_Tab_Reason;                                      // 0x03F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                      Button_ReportFinished;                             // 0x03F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCircularThrobber*                      CircularThrobber_0;                                // 0x0400(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCurrentReportStackingEntry_C*          CurrentReportStackingEntry;                        // 0x0408(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_34;                                          // 0x0410(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class ULightbox_C*                            Lightbox_0;                                        // 0x0418(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USafeZone*                              SafeZone_0;                                        // 0x0420(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               SB_StackingEntry;                                  // 0x0428(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        Switcher_MainPanelContent;                         // 0x0430(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonWidgetSwitcher*                  Switcher_TabContent;                               // 0x0438(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       T_PlayerReporting;                                 // 0x0440(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           VB_StackingEntryContainer;                         // 0x0448(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                   ModalHeader_Title;                                 // 0x0450(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                   TabTitle_PlayerName;                               // 0x0468(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                   TabTitle_AdditionalInfo;                           // 0x0480(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                   TabTitle_TabReason;                                // 0x0498(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                   ButtonLabel_SendPlayerReport;                      // 0x04B0(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class UIconTextButton_C*>              TabButtons;                                        // 0x04C8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FDataTableRowHandle                    BackAction;                                        // 0x04D8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	TArray<class UCurrentReportStackingEntry_C*>  StackingSelectedDisplays;                          // 0x04E8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                          ImagedLoadComplete;                                // 0x04F8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_ReportPlayer(int32 EntryPoint);
	void OnFeedbackSentSuccessful_1();
	void BndEvt__Button_ReportFinished_K2Node_ComponentBoundEvent_138_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__Button_Send_K2Node_ComponentBoundEvent_12_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void OnListViewSelectionMade(EPlayerReportingStep ReportingStep, const class FText& SelectedText);
	void PreConstruct(bool IsDesignTime);
	void BndEvt__B_Tab_AdditionalInfo_K2Node_ComponentBoundEvent_35_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__B_Tab_Reason_K2Node_ComponentBoundEvent_18_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__B_Tab_PlayerName_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void OnPopulateView(EPlayerReportingStep CurrentStep);
	void OnActivated();
	void OnTabClicked(class UCommonButton* Button);
	void BndEvt__Button_Cancel_K2Node_ComponentBoundEvent_1184_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void Construct();
	void OnLoaded_69F2E4A6451E92C2AF9C36808D6C297B(class UObject* Loaded);
	void HandleBottomBarBackButtonClicked(bool* Passhtrough);
	void EnableTabByCurrentStep(EPlayerReportingStep CurrentStep);
	void SetEnableTabButton(class UIconTextButton_C* InTabButton, bool Param_bIsEnabled);
	void HandleTabsByCurrentStep(EPlayerReportingStep CurStep);
	void DisableTabsByCurrentStep(EPlayerReportingStep CurStep);
	void HandleDisplayNewReportPlayerEntryItemSelection(EPlayerReportingStep DisplayedStep, const class FText& DisplayedText);
	void RemoveStackedEntriesByStep(EPlayerReportingStep CurrentStep);
	void ClearStackingEntries();
	void ResetAnims();
	void ResetSwitcherStates();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ReportPlayer_C">();
	}
	static class UReportPlayer_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UReportPlayer_C>();
	}
};

}

