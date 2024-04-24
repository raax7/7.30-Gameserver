#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Shotgun_BreakAction

#include "Basic.hpp"

#include "AnimGraphRuntime_structs.hpp"
#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// AnimBlueprintGeneratedClass BP_Shotgun_BreakAction.BP_Shotgun_BreakAction_C
// 0x0090 (0x02F8 - 0x0268)
class UBP_Shotgun_BreakAction_C final : public UAnimInstance
{
public:
	uint8                                         Pad_64C9[0x8];                                     // 0x0268(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0270(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                         AnimGraphNode_Root_BA976D5D4DB7967075F7CDB8A77EDD8C; // 0x0278(0x0020)()
	struct FAnimNode_Slot                         AnimGraphNode_Slot_40047C1541B43E34DADF6696EC1EDEBE; // 0x0298(0x0048)()
	struct FAnimNode_RefPose                      AnimGraphNode_LocalRefPose_EADE6A484AF7A66F69258C8F614628BF; // 0x02E0(0x0018)()

public:
	void ExecuteUbergraph_BP_Shotgun_BreakAction(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Shotgun_BreakAction_C">();
	}
	static class UBP_Shotgun_BreakAction_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_Shotgun_BreakAction_C>();
	}
};

}

