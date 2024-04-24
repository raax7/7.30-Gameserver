#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MatchSummaryListEntryWidget

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass MatchSummaryListEntryWidget.MatchSummaryListEntryWidget_C
// 0x0040 (0x0B78 - 0x0B38)
class UMatchSummaryListEntryWidget_C final : public UAthenaProfileStatListWidgetBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0B38(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UCommonTextBlock*                       OnestPlace1;                                       // 0x0B40(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 BlueGradBaseFill;                                  // 0x0B48(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       ElimsText;                                         // 0x0B50(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       MatchEntryNumber;                                  // 0x0B58(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonDateTimeTextBlock*               MatchTime;                                         // 0x0B60(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       PlacementText;                                     // 0x0B68(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonNumericTextBlock*                ScoreText;                                         // 0x0B70(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_MatchSummaryListEntryWidget(int32 EntryPoint);
	void OnStatChanged();
	void Update();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"MatchSummaryListEntryWidget_C">();
	}
	static class UMatchSummaryListEntryWidget_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMatchSummaryListEntryWidget_C>();
	}
};

}

