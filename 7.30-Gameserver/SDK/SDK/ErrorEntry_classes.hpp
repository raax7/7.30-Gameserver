#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ErrorEntry

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_structs.hpp"
#include "CommonUI_classes.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass ErrorEntry.ErrorEntry_C
// 0x00B8 (0x02E8 - 0x0230)
class UErrorEntry_C final : public UCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0230(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UIconTextButton_C*                      IconTextButton;                                    // 0x0238(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       MESSAGE;                                           // 0x0240(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FFortErrorInfo                         ErrorInfo;                                         // 0x0248(0x0070)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FString                                 ErrorUrlBase;                                      // 0x02B8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	class FText                                   DebugMessage;                                      // 0x02C8(0x0018)(Edit, BlueprintVisible, ExposeOnSpawn)
	bool                                          bIsDebugMode;                                      // 0x02E0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)

public:
	void ExecuteUbergraph_ErrorEntry(int32 EntryPoint);
	void Construct();
	void BndEvt__IconTextButton_K2Node_ComponentBoundEvent_65_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void GetButtonVisibility(ESlateVisibility* NewParam);
	void SetErrorInfo(const struct FFortErrorInfo& Param_ErrorInfo);
	void Center_on_Widget(bool* Did_Center);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ErrorEntry_C">();
	}
	static class UErrorEntry_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UErrorEntry_C>();
	}
};

}

