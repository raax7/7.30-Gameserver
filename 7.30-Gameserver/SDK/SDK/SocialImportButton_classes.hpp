#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SocialImportButton

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass SocialImportButton.SocialImportButton_C
// 0x0040 (0x0B98 - 0x0B58)
class USocialImportButton_C final : public UFortSocialImportButton
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0B58(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UCommonTextBlock*                       CenterButtonTextWidget;                            // 0x0B60(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                                ContentBorder;                                     // 0x0B68(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 LeftSideImage;                                     // 0x0B70(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNamedSlot*                             RightExtraContentSlot;                             // 0x0B78(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                   TextOverride;                                      // 0x0B80(0x0018)(Edit, BlueprintVisible, ExposeOnSpawn)

public:
	void ExecuteUbergraph_SocialImportButton(int32 EntryPoint);
	void OnCaptionGenerated(const class FText& Caption);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SocialImportButton_C">();
	}
	static class USocialImportButton_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USocialImportButton_C>();
	}
};

}

