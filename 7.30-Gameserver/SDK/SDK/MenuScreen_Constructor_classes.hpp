#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MenuScreen_Constructor

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "AnimGraphRuntime_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "FortniteGame_classes.hpp"


namespace SDK
{

// AnimBlueprintGeneratedClass MenuScreen_Constructor.MenuScreen_Constructor_C
// 0x04A8 (0x07A8 - 0x0300)
class UMenuScreen_Constructor_C final : public UFrontendAnimInstance
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0300(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_51136A9E446592F9DA802D8316553F4A; // 0x0308(0x0020)()
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_72E3A5084877E826D78190958B50B30E; // 0x0328(0x0020)()
	struct FAnimNode_Root                         AnimGraphNode_Root_F64C467C442A6D34A1666EA1BF342A2B; // 0x0348(0x0020)()
	struct FAnimNode_Slot                         AnimGraphNode_Slot_D9B684254003641AE72DD489B091046B; // 0x0368(0x0048)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_07E146734FAAC10EDA1AA99B23C1DCC3; // 0x03B0(0x0078)()
	struct FAnimNode_BlendListByEnum              AnimGraphNode_BlendListByEnum_39B34F994D4009B88DDC4CBFB15815AD; // 0x0428(0x00B0)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_FE38F79D451A9AF748C98B81F3662628; // 0x04D8(0x0078)()
	struct FAnimNode_LegIK                        AnimGraphNode_LegIK_2652A70742C375CFD05CB38F1B50C95A; // 0x0550(0x00F8)()
	struct FAnimNode_ModifyBone                   AnimGraphNode_ModifyBone_C5561120498D2F0E23E19DB15CEF0EF7; // 0x0648(0x0108)()
	UMulticastDelegateProperty_                   MenuScreenDispatcher;                              // 0x0750(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FVector                                Offset;                                            // 0x0760(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               OffsetRotate;                                      // 0x076C(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	TArray<class USkeletalMesh*>                  FrontendNPCMeshes;                                 // 0x0778(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                         IKAlpha;                                           // 0x0788(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_60B8[0x4];                                     // 0x078C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerPawn_Generic_C*                  PawnOwnerGeneric;                                  // 0x0790(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UAnimMontage*>                   NPCMontageList;                                    // 0x0798(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

public:
	void MenuScreenDispatcher__DelegateSignature();
	void ExecuteUbergraph_MenuScreen_Constructor(int32 EntryPoint);
	void BlueprintInitializeAnimation();
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void AnimNotify_playFacialAnim();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"MenuScreen_Constructor_C">();
	}
	static class UMenuScreen_Constructor_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMenuScreen_Constructor_C>();
	}
};

}

