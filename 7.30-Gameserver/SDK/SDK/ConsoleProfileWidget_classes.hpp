#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ConsoleProfileWidget

#include "Basic.hpp"

#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass ConsoleProfileWidget.ConsoleProfileWidget_C
// 0x0010 (0x0238 - 0x0228)
class UConsoleProfileWidget_C final : public UUserWidget
{
public:
	class UCommonTextBlock*                       DisplayName;                                       // 0x0228(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       Prefix;                                            // 0x0230(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void SetDisplayName(const class FText& Param_DisplayName);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ConsoleProfileWidget_C">();
	}
	static class UConsoleProfileWidget_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UConsoleProfileWidget_C>();
	}
};

}

