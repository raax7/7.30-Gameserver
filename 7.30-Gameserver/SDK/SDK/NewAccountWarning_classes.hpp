#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: NewAccountWarning

#include "Basic.hpp"

#include "FortniteUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass NewAccountWarning.NewAccountWarning_C
// 0x0010 (0x0358 - 0x0348)
class UNewAccountWarning_C final : public UFortNewAccountWarning
{
public:
	class UCommonTextBlock*                       CommonTextBlock_2;                                 // 0x0348(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       CommonTextBlock_3;                                 // 0x0350(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"NewAccountWarning_C">();
	}
	static class UNewAccountWarning_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNewAccountWarning_C>();
	}
};

}

