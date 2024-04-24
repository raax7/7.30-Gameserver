#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: StorePinataMaster_Parent

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass StorePinataMaster_Parent.StorePinataMaster_Parent_C
// 0x0010 (0x0340 - 0x0330)
class AStorePinataMaster_Parent_C : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0330(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                        PinataSceneRoot;                                   // 0x0338(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_StorePinataMaster_Parent(int32 EntryPoint);
	void CameraResetComplete();
	void CameraTransitionComplete();
	void InitiatePinata();
	void UserConstructionScript();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"StorePinataMaster_Parent_C">();
	}
	static class AStorePinataMaster_Parent_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AStorePinataMaster_Parent_C>();
	}
};

}

