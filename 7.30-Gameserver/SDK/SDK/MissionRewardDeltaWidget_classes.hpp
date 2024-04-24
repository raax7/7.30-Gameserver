#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MissionRewardDeltaWidget

#include "Basic.hpp"

#include "FortniteUI_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass MissionRewardDeltaWidget.MissionRewardDeltaWidget_C
// 0x0040 (0x0268 - 0x0228)
class UMissionRewardDeltaWidget_C final : public UUserWidget
{
public:
	class UWidgetAnimation*                       Intro;                                             // 0x0228(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UCommonBorder*                          BorderMinusDeltaBacking;                           // 0x0230(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       RewardDelta;                                       // 0x0238(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 RewardImage;                                       // 0x0240(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       RewardName;                                        // 0x0248(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       RewardQuantity;                                    // 0x0250(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FFortItemDelta                         ItemDelta;                                         // 0x0258(0x0010)(Edit, BlueprintVisible, NoDestructor)

public:
	void SetDeltaReward(const struct FFortItemDelta& DeltaReward);
	void IntroAnim();
	void Reset_IntroAnim();
	void Rewind_IntroAnim();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"MissionRewardDeltaWidget_C">();
	}
	static class UMissionRewardDeltaWidget_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMissionRewardDeltaWidget_C>();
	}
};

}

