#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_SoundIndicator_01

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass B_SoundIndicator_01.B_SoundIndicator_01_C
// 0x03E0 (0x0830 - 0x0450)
class AB_SoundIndicator_01_C final : public AFortSoundCameraLensEffect
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0450(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	bool                                          Chest;                                             // 0x0458(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          FootstepsOrGlider;                                 // 0x0459(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          Gunshot;                                           // 0x045A(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          Plane;                                             // 0x045B(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          Generic;                                           // 0x045C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_43E5[0x3];                                     // 0x045D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FRuntimeFloatCurve                     Gunshot_Falloff_Long_Range;                        // 0x0460(0x0088)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRuntimeFloatCurve                     Chest_Falloff;                                     // 0x04E8(0x0088)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRuntimeFloatCurve                     Footsteps_Falloff;                                 // 0x0570(0x0088)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRuntimeFloatCurve                     Gunshot_Falloff_Mid_Range;                         // 0x05F8(0x0088)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRuntimeFloatCurve                     Gunshot_Falloff_Melee;                             // 0x0680(0x0088)(Edit, BlueprintVisible, DisableEditOnInstance)
	float                                         OppositeFacingGunshotStrength;                     // 0x0708(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         FacingGunshotExponentNear;                         // 0x070C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         ForwardFacingGunshotStrength;                      // 0x0710(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         FacingGunshotExponentFar;                          // 0x0714(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         DistanceDivisor;                                   // 0x0718(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_43E6[0x4];                                     // 0x071C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FRuntimeFloatCurve                     Glider_Falloff;                                    // 0x0720(0x0088)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRuntimeFloatCurve                     Plane_Falloff;                                     // 0x07A8(0x0088)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void ExecuteUbergraph_B_SoundIndicator_01(int32 EntryPoint);
	void OnEffectActivated();
	void ReceiveBeginPlay();
	void UserConstructionScript();
	void UpdateEmitterStates();
	struct FRuntimeFloatCurve GetWeaponCurve();
	void CalculateFiringAngle(float* DotResult);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"B_SoundIndicator_01_C">();
	}
	static class AB_SoundIndicator_01_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AB_SoundIndicator_01_C>();
	}
};

}

