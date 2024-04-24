#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AthenaLockedStyleNotification

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass AthenaLockedStyleNotification.AthenaLockedStyleNotification_C
// 0x0010 (0x0238 - 0x0228)
class UAthenaLockedStyleNotification_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0228(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UCommonTextBlock*                       DescriptionText;                                   // 0x0230(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_AthenaLockedStyleNotification(int32 EntryPoint);
	void Construct();
	void SetLockedStyleDescription(const class FText& LockedStyleDescription);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AthenaLockedStyleNotification_C">();
	}
	static class UAthenaLockedStyleNotification_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAthenaLockedStyleNotification_C>();
	}
};

}

