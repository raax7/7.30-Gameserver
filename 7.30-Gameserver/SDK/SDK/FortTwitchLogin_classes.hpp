#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: FortTwitchLogin

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"
#include "FortniteGame_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass FortTwitchLogin.FortTwitchLogin_C
// 0x0068 (0x02E8 - 0x0280)
class UFortTwitchLogin_C final : public UFortTwitchLogin
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0280(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UVerticalBox*                           NotSignedInBox;                                    // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           SignedInBox;                                       // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                      SignInButton;                                      // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonWidgetSwitcher*                  SignInStatusSwitcher;                              // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                      SignOutButton;                                     // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       TwitchIdEntry;                                     // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                   NoLinkedAccountText;                               // 0x02B8(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	UMulticastDelegateProperty_                   OnRequestToolTipChange;                            // 0x02D0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          bShowingError;                                     // 0x02E0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void OnRequestToolTipChange__DelegateSignature(const class FText& NewTooltipText);
	void ExecuteUbergraph_FortTwitchLogin(int32 EntryPoint);
	void OnShowLoginError(const class FText& ErrorTitle, const class FText& ErrorMessage);
	void BndEvt__SignOutButton_K2Node_ComponentBoundEvent_131_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__SignOutButton_K2Node_ComponentBoundEvent_116_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__SignInButton_K2Node_ComponentBoundEvent_59_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__SignInButton_K2Node_ComponentBoundEvent_46_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__SignOutButton_K2Node_ComponentBoundEvent_229_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__SignInButton_K2Node_ComponentBoundEvent_209_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void OnLoginFlowModalDismissed(class UFortTwitchLoginModalWidget* Modal);
	void OnCancelButtonClicked();
	void OnLoginFlowModalCreated(class UFortTwitchLoginModalWidget* Modal);
	void OnLoginStatusChanged(bool bLoggedIn, const class FString& AccountName);
	void Initialize_Data();
	void DialogResult_5994C6BA48DC4D282A16D7BA54384F79(EFortDialogResult Result, class FName ResultName);
	void CenterOnWidget();
	void CenterActiveAuthButton();
	void Fire_SignIn_Analytic();
	void Fire_Logged_In_Analytic();
	struct FFortAnalyticsEventAttribute Build_Player_Name_Analytic_Attribute();
	struct FFortAnalyticsEventAttribute Build_Twitch_Name_Analytic_Attribute();
	struct FFortAnalyticsEventAttribute Build_Player_Id_Analytic_Attribute();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"FortTwitchLogin_C">();
	}
	static class UFortTwitchLogin_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortTwitchLogin_C>();
	}
};

}

