#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AthenaStatsRow

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CommonUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass AthenaStatsRow.AthenaStatsRow_C
// 0x0040 (0x0270 - 0x0230)
class UAthenaStatsRow_C final : public UCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0230(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UCommonTextBlock*                       Name_AthenaStatsRow_C;                             // 0x0238(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       Value;                                             // 0x0240(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                   StatName;                                          // 0x0248(0x0018)(Edit, BlueprintVisible)
	class FString                                 BaseGameplayTag;                                   // 0x0260(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_AthenaStatsRow(int32 EntryPoint);
	void PreConstruct(bool IsDesignTime);
	void SetStatValueAsText(const class FText& StatValue);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AthenaStatsRow_C">();
	}
	static class UAthenaStatsRow_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAthenaStatsRow_C>();
	}
};

}

