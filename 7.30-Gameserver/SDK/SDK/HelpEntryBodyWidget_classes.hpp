#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: HelpEntryBodyWidget

#include "Basic.hpp"

#include "CommonUI_classes.hpp"
#include "FortniteGame_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass HelpEntryBodyWidget.HelpEntryBodyWidget_C
// 0x0038 (0x0268 - 0x0230)
class UHelpEntryBodyWidget_C final : public UCommonUserWidget
{
public:
	class UCommonBorder*                          BottomContentBorder;                               // 0x0230(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 BottomImage;                                       // 0x0238(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URichTextBlock*                         EntryBody;                                         // 0x0240(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           RootVerticalBox;                                   // 0x0248(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonBorder*                          TopContentBorder;                                  // 0x0250(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 TopImage;                                          // 0x0258(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFortHelpItem*                          ActiveHelpItem;                                    // 0x0260(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void SetActiveEntry(class UFortHelpItem* InHelpItem);
	void UpdateBodyText();
	void UpdateAdditionalWidget();
	void UpdateAdditionalImage();
	void ResetAdditionalContent();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"HelpEntryBodyWidget_C">();
	}
	static class UHelpEntryBodyWidget_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UHelpEntryBodyWidget_C>();
	}
};

}

