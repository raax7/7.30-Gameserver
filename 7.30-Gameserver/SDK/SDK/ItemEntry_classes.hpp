#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ItemEntry

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CommonUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass ItemEntry.ItemEntry_C
// 0x0020 (0x0B48 - 0x0B28)
class UItemEntry_C final : public UCommonButton
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0B28(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UCommonTextBlock*                       Name_ItemEntry_C;                                  // 0x0B30(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	UMulticastDelegateProperty_                   Entry_Selected;                                    // 0x0B38(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void Entry_Selected__DelegateSignature(class UFortItemDefinition* Items_Definition);
	void ExecuteUbergraph_ItemEntry(int32 EntryPoint);
	void Construct();
	void OnListItemObjectSet(class UObject* ListItemObject);
	void BP_OnItemSelectionChanged(bool bIsSelected);
	void BP_OnItemExpansionChanged(bool bIsExpanded);
	void BP_OnEntryReleased();

	class UObject* GetListItemObject() const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ItemEntry_C">();
	}
	static class UItemEntry_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UItemEntry_C>();
	}
};

}

