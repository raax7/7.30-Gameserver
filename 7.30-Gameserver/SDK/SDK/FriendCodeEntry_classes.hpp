#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: FriendCodeEntry

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass FriendCodeEntry.FriendCodeEntry_C
// 0x0038 (0x0C00 - 0x0BC8)
class UFriendCodeEntry_C final : public UFortFriendCodeEntryBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0BC8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UBorder*                                Border_0;                                          // 0x0BD0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                                Border_1;                                          // 0x0BD8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                                Border_2;                                          // 0x0BE0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                                Border_Fill;                                       // 0x0BE8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        WidgetSwitcher_0;                                  // 0x0BF0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               MID_FillBorder;                                    // 0x0BF8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_FriendCodeEntry(int32 EntryPoint);
	void BP_OnClicked();
	void SetUsedDisplayState();
	void Construct();
	void SetupMIDs();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"FriendCodeEntry_C">();
	}
	static class UFriendCodeEntry_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFriendCodeEntry_C>();
	}
};

}

