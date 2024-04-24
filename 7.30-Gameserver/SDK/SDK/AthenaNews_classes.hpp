#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AthenaNews

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_structs.hpp"
#include "FortniteUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass AthenaNews.AthenaNews_C
// 0x0050 (0x02D0 - 0x0280)
class UAthenaNews_C final : public UFortAthenaNewsWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0280(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Intro;                                             // 0x0288(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UAthenaNewsTile_C*                      AthenaNewsTile;                                    // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAthenaNewsTile_C*                      AthenaNewsTile_1;                                  // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAthenaNewsTile_C*                      AthenaNewsTile_2;                                  // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAthenaNewsTile_Spotlight_C*            AthenaNewsTile_Spotlight;                          // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       SpecialEventSubHeader;                             // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        WidgetSwitcher_MoTD_Layout;                        // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	UMulticastDelegateProperty_                   UpdateStyle;                                       // 0x02C0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void UpdateStyle__DelegateSignature(EAthenaNewsStyle NewStyle);
	void ExecuteUbergraph_AthenaNews(int32 EntryPoint);
	void HandleNewsStyle(EAthenaNewsStyle NewsStyle);
	void BeginIntroSequence();
	void ResetViewConfiguration();
	void SingleItemConfiguration();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AthenaNews_C">();
	}
	static class UAthenaNews_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAthenaNews_C>();
	}
};

}

