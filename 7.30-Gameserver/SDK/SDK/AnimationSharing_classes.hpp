#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AnimationSharing

#include "Basic.hpp"

#include "Engine_classes.hpp"
#include "AnimationSharing_structs.hpp"
#include "CoreUObject_classes.hpp"


namespace SDK
{

// Class AnimationSharing.AnimSharingStateInstance
// 0x0028 (0x0290 - 0x0268)
class UAnimSharingStateInstance : public UAnimInstance
{
public:
	class UAnimSequence*                          AnimationToPlay;                                   // 0x0268(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                         PermutationTimeOffset;                             // 0x0270(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                         PlayRate;                                          // 0x0274(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                          bStateBool;                                        // 0x0278(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_B61[0x17];                                     // 0x0279(0x0017)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void GetInstancedActors(TArray<class AActor*>* Actors);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AnimSharingStateInstance">();
	}
	static class UAnimSharingStateInstance* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAnimSharingStateInstance>();
	}
};

// Class AnimationSharing.AnimSharingTransitionInstance
// 0x0018 (0x0280 - 0x0268)
class UAnimSharingTransitionInstance final : public UAnimInstance
{
public:
	TWeakObjectPtr<class USkeletalMeshComponent>  FromComponent;                                     // 0x0268(0x0008)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TWeakObjectPtr<class USkeletalMeshComponent>  ToComponent;                                       // 0x0270(0x0008)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                         BlendTime;                                         // 0x0278(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                          bBlendBool;                                        // 0x027C(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_B62[0x3];                                      // 0x027D(0x0003)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AnimSharingTransitionInstance">();
	}
	static class UAnimSharingTransitionInstance* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAnimSharingTransitionInstance>();
	}
};

// Class AnimationSharing.AnimSharingAdditiveInstance
// 0x0018 (0x0280 - 0x0268)
class UAnimSharingAdditiveInstance final : public UAnimInstance
{
public:
	TWeakObjectPtr<class USkeletalMeshComponent>  BaseComponent;                                     // 0x0268(0x0008)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TWeakObjectPtr<class UAnimSequence>           AdditiveAnimation;                                 // 0x0270(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                         Alpha;                                             // 0x0278(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                          bStateBool;                                        // 0x027C(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_B63[0x3];                                      // 0x027D(0x0003)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AnimSharingAdditiveInstance">();
	}
	static class UAnimSharingAdditiveInstance* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAnimSharingAdditiveInstance>();
	}
};

// Class AnimationSharing.AnimSharingInstance
// 0x0110 (0x0138 - 0x0028)
class UAnimSharingInstance final : public UObject
{
public:
	TArray<class AActor*>                         RegisteredActors;                                  // 0x0028(0x0010)(Edit, ZeroConstructor, Transient, EditConst, NativeAccessSpecifierPublic)
	uint8                                         Pad_B64[0x70];                                     // 0x0038(0x0070)(Fixing Size After Last Property [ Dumper-7 ])
	class UAnimationSharingStateProcessor*        StateProcessor;                                    // 0x00A8(0x0008)(Edit, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_B65[0x38];                                     // 0x00B0(0x0038)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UAnimSequence*>                  UsedAnimationSequences;                            // 0x00E8(0x0010)(Edit, ZeroConstructor, Transient, EditConst, NativeAccessSpecifierPublic)
	uint8                                         Pad_B66[0x10];                                     // 0x00F8(0x0010)(Fixing Size After Last Property [ Dumper-7 ])
	class UEnum*                                  StateEnum;                                         // 0x0108(0x0008)(Edit, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                 SharingActor;                                      // 0x0110(0x0008)(Edit, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_B67[0x20];                                     // 0x0118(0x0020)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AnimSharingInstance">();
	}
	static class UAnimSharingInstance* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAnimSharingInstance>();
	}
};

// Class AnimationSharing.AnimationSharingManager
// 0x0088 (0x00B0 - 0x0028)
class UAnimationSharingManager final : public UObject
{
public:
	uint8                                         Pad_B68[0x10];                                     // 0x0028(0x0010)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UAnimSharingInstance*>           PerSkeletonData;                                   // 0x0038(0x0010)(Edit, ZeroConstructor, Transient, EditConst, Protected, NativeAccessSpecifierProtected)
	uint8                                         Pad_B69[0x68];                                     // 0x0048(0x0068)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static bool AnimSharingEnabled();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AnimationSharingManager">();
	}
	static class UAnimationSharingManager* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAnimationSharingManager>();
	}
};

// Class AnimationSharing.AnimationSharingSetup
// 0x0020 (0x0048 - 0x0028)
class UAnimationSharingSetup final : public UObject
{
public:
	TArray<struct FPerSkeletonAnimationSharingSetup> SkeletonSetups;                                    // 0x0028(0x0010)(Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic)
	struct FAnimationSharingScalability           ScalabilitySettings;                               // 0x0038(0x0010)(Edit, Config, NoDestructor, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AnimationSharingSetup">();
	}
	static class UAnimationSharingSetup* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAnimationSharingSetup>();
	}
};

// Class AnimationSharing.AnimationSharingStateProcessor
// 0x0028 (0x0050 - 0x0028)
class UAnimationSharingStateProcessor : public UObject
{
public:
	TSoftObjectPtr<class UEnum>                   AnimationStateEnum;                                // 0x0028(0x0028)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	class UEnum* GetAnimationStateEnum();
	void ProcessActorState(int32* OutState, class AActor* InActor, uint8 CurrentState, uint8 OnDemandState, bool* bShouldProcess);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AnimationSharingStateProcessor">();
	}
	static class UAnimationSharingStateProcessor* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAnimationSharingStateProcessor>();
	}
};

}

