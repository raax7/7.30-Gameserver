#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Gen_ReadyUp_StartObjective

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Gen_ReadyUp_StartObjective.Gen_ReadyUp_StartObjective_C
// 0x0038 (0x0060 - 0x0028)
class UGen_ReadyUp_StartObjective_C final : public UFortMissionEventParams
{
public:
	float                                         ReadyUpTimerLength;                                // 0x0028(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_48DB[0x4];                                     // 0x002C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   InteractText;                                      // 0x0030(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FTransform>                     InteractSpawnLocation;                             // 0x0048(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int32                                         BluGloMissionActivationQty;                        // 0x0058(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsFightTheStorm;                                   // 0x005C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void BreakParams(float* Param_ReadyUpTimerLength, TArray<struct FTransform>* Param_InteractSpawnLocation, class FText* Param_InteractText, int32* Param_BluGloMissionActivationQty, bool* Param_IsFightTheStorm);
	void SetParams(float Param_ReadyUpTimerLength, TArray<struct FTransform>& Param_InteractSpawnLocation, const class FText& Param_InteractText, int32 Param_BluGloMissionActivationQty, bool Param_IsFightTheStorm, class UGen_ReadyUp_StartObjective_C** ThisObject);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Gen_ReadyUp_StartObjective_C">();
	}
	static class UGen_ReadyUp_StartObjective_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGen_ReadyUp_StartObjective_C>();
	}
};

}

