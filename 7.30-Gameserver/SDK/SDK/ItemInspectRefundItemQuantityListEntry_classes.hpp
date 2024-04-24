#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ItemInspectRefundItemQuantityListEntry

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass ItemInspectRefundItemQuantityListEntry.ItemInspectRefundItemQuantityListEntry_C
// 0x0010 (0x0268 - 0x0258)
class UItemInspectRefundItemQuantityListEntry_C final : public UFortItemQuantityListEntryBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0258(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UItemCountRecycling_C*                  ItemCountRecycling;                                // 0x0260(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_ItemInspectRefundItemQuantityListEntry(int32 EntryPoint);
	void Construct();
	void HandleDifferentItemOrQuantitySetBP(const bool IsBeingReset);
	void UpdateItemAndQuantity(const bool DirectlySetQuantity);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ItemInspectRefundItemQuantityListEntry_C">();
	}
	static class UItemInspectRefundItemQuantityListEntry_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UItemInspectRefundItemQuantityListEntry_C>();
	}
};

}

