#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_FortniteResearchLights

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_FortniteResearchLights.BP_FortniteResearchLights_C
// 0x0068 (0x0398 - 0x0330)
class ABP_FortniteResearchLights_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0330(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0338(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class ADirectionalLight*                      DirectionLight;                                    // 0x0340(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASkyLight*                              SkyLight;                                          // 0x0348(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class APointLight*>                    Pointlights;                                       // 0x0350(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate)
	class AExponentialHeightFog*                  ExponentialHeightFog;                              // 0x0360(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ADirectionalLight*                      DirectionalLight_LowDetailMode;                    // 0x0368(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class AEmitter*>                       ParticleSystems;                                   // 0x0370(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate)
	bool                                          IsActive;                                          // 0x0380(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          DebugLOWQualityLighting;                           // 0x0381(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_360F[0x6];                                     // 0x0382(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class ASkyLight*                              SkyLight_LowDetailMode;                            // 0x0388(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AExponentialHeightFog*                  ExponentialHeightfog_LowDetailMode;                // 0x0390(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_FortniteResearchLights(int32 EntryPoint);
	void ReceiveBeginPlay();
	void EnableLobbySetLighting();
	void UpdateSettings();
	void DisableLobbySetLighting();
	void UserConstructionScript();
	void SetVisiblityofSceneLighting(bool Activate);
	void SetVisiblityofDetailSpecificMeshes();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_FortniteResearchLights_C">();
	}
	static class ABP_FortniteResearchLights_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_FortniteResearchLights_C>();
	}
};

}

