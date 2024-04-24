#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_CameraLens_SpookyMist_Dive

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass B_CameraLens_SpookyMist_Dive.B_CameraLens_SpookyMist_Dive_C
// 0x0020 (0x0410 - 0x03F0)
class AB_CameraLens_SpookyMist_Dive_C final : public AEmitterCameraLensEffectBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x03F0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class AActor*                                 VelocityActor;                                     // 0x03F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                TargetRot;                                         // 0x0400(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_B_CameraLens_SpookyMist_Dive(int32 EntryPoint);
	void ReceiveBeginPlay();
	void UserConstructionScript();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"B_CameraLens_SpookyMist_Dive_C">();
	}
	static class AB_CameraLens_SpookyMist_Dive_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AB_CameraLens_SpookyMist_Dive_C>();
	}
};

}

