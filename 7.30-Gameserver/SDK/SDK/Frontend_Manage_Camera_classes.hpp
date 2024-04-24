#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Frontend_Manage_Camera

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Frontend_Manage_Camera.Frontend_Manage_Camera_C
// 0x0040 (0x08C0 - 0x0880)
class AFrontend_Manage_Camera_C final : public AFortCameraBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0880(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UArrowComponent*                        Arrow;                                             // 0x0888(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 FortEntryMusic;                                    // 0x0890(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFort_Entry_Music_Controller_BP_C*      Fort_Entry_Music_Controller;                       // 0x0898(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	UMulticastDelegateProperty_                   CameraHasBeenSelected;                             // 0x08A0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	UMulticastDelegateProperty_                   CameraHasBeenDeselected;                           // 0x08B0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void CameraHasBeenSelected__DelegateSignature(bool IsSensei);
	void CameraHasBeenDeselected__DelegateSignature();
	void ExecuteUbergraph_Frontend_Manage_Camera(int32 EntryPoint);
	void CameraDeselected();
	void CameraSelected(bool IsSensei);
	void OnActivated();
	void OnDeactivated();
	void UserConstructionScript();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Frontend_Manage_Camera_C">();
	}
	static class AFrontend_Manage_Camera_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AFrontend_Manage_Camera_C>();
	}
};

}

