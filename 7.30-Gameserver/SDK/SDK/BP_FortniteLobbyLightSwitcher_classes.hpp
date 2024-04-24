#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_FortniteLobbyLightSwitcher

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_FortniteLobbyLightSwitcher.BP_FortniteLobbyLightSwitcher_C
// 0x0070 (0x03A0 - 0x0330)
class ABP_FortniteLobbyLightSwitcher_C final : public AActor
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
	uint8                                         Pad_5E4C[0x6];                                     // 0x0382(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class ASkyLight*                              SkyLight_LowDetailMode;                            // 0x0388(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AExponentialHeightFog*                  ExponentialHeightfog_LowDetailMode;                // 0x0390(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          LOW_FX_Setting_Use_MobileLighting;                 // 0x0398(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          IsLightalreadyActive;                              // 0x0399(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_BP_FortniteLobbyLightSwitcher(int32 EntryPoint);
	void UpdateSettings();
	void DisableLobbySetLighting();
	void EnableLobbySetLighting();
	void ReceiveBeginPlay();
	void UserConstructionScript();
	void SetVisiblityofSceneLighting(bool Activate);
	void SetVisiblityofDetailSpecificMeshes();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_FortniteLobbyLightSwitcher_C">();
	}
	static class ABP_FortniteLobbyLightSwitcher_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_FortniteLobbyLightSwitcher_C>();
	}
};

}

