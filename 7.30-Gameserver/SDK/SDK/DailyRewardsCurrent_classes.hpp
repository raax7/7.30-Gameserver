#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: DailyRewardsCurrent

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"
#include "UMG_structs.hpp"
#include "FortniteGame_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass DailyRewardsCurrent.DailyRewardsCurrent_C
// 0x0068 (0x02A8 - 0x0240)
class UDailyRewardsCurrent_C final : public UFortDailyRewardsItem
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 Flare_Backing;                                     // 0x0248(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFortMultiSizeItemCard*                 FortItemCard;                                      // 0x0250(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ImageRarityFlare;                                  // 0x0258(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       ItemName;                                          // 0x0260(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       ScheduleText;                                      // 0x0268(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USpacer*                                Spacer_LFT;                                        // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USpacer*                                Spacer_RGT;                                        // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                   ScheduleName;                                      // 0x0280(0x0018)(Edit, BlueprintVisible, ExposeOnSpawn)
	bool                                          IsClaiming;                                        // 0x0298(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                         Pad_58E1[0x7];                                     // 0x0299(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInstanceDynamic*               RarityFlare_MID;                                   // 0x02A0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_DailyRewardsCurrent(int32 EntryPoint);
	void Construct();
	void Set_Item(class UFortItem* Item_To_Represent, int32 Quantity);
	void Set_Item_Flare();
	void InitializeRewardView();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"DailyRewardsCurrent_C">();
	}
	static class UDailyRewardsCurrent_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDailyRewardsCurrent_C>();
	}
};

}

