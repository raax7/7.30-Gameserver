#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: FXSkeletonMeshComponent

#include "Basic.hpp"

#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass FXSkeletonMeshComponent.FXSkeletonMeshComponent_C
// 0x0000 (0x0BE0 - 0x0BE0)
class UFXSkeletonMeshComponent_C final : public UFortFXSkeletonMeshComponent
{
public:
	void ApplyBuildingHitEffect();
	void ApplyEffect(class UMaterialInterface* SourceMaterial, float FadeInTime, float Duration, float FadeOutTime);
	void ApplyAwakenEffect();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"FXSkeletonMeshComponent_C">();
	}
	static class UFXSkeletonMeshComponent_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFXSkeletonMeshComponent_C>();
	}
};

}

