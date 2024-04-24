#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: HeroesCamera_Blueprint

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass HeroesCamera_Blueprint.HeroesCamera_Blueprint_C
// 0x0020 (0x08A0 - 0x0880)
class AHeroesCamera_Blueprint_C final : public AFortCameraBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0880(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	bool                                          MouseDown;                                         // 0x0888(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5E7F[0x7];                                     // 0x0889(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AFortPlayerPawn*                        Cached_Pawn;                                       // 0x0890(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_HeroesCamera_Blueprint(int32 EntryPoint);
	void OnActivated();
	void ReceiveTick(float DeltaSeconds);
	void OnDeactivated();
	void InpActEvt_RightMouseButton_K2Node_InputKeyEvent_0(const struct FKey& Key);
	void InpActEvt_RightMouseButton_K2Node_InputKeyEvent_1(const struct FKey& Key);
	void InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_2(const struct FKey& Key);
	void InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_3(const struct FKey& Key);
	void UserConstructionScript();
	void HandleMouseRelease();
	void HandleMousePress();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"HeroesCamera_Blueprint_C">();
	}
	static class AHeroesCamera_Blueprint_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AHeroesCamera_Blueprint_C>();
	}
};

}

