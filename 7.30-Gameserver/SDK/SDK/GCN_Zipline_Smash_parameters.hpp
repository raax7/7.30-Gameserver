#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GCN_Zipline_Smash

#include "Basic.hpp"

#include "GameplayAbilities_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function GCN_Zipline_Smash.GCN_Zipline_Smash_C.OnBurst
// 0x0438 (0x0438 - 0x0000)
struct GCN_Zipline_Smash_C_OnBurst final
{
public:
	class AActor*                                 MyTarget;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayCueParameters                 Parameters;                                        // 0x0008(0x00B8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	TArray<class UParticleSystemComponent*>       ParticleComponents;                                // 0x00C0(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<class UAudioComponent*>                AudioComponents;                                   // 0x00D0(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class UCameraShake*                           BurstCameraShakeInstance;                          // 0x00E0(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ADecalActor*                            BurstDecalInstance;                                // 0x00E8(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class AActor*>                         Temp_object_Variable;                              // 0x00F0(0x0010)(ConstParm, ZeroConstructor, ReferenceParm)
	class UParticleSystemComponent*               CallFunc_Array_Get_Item;                           // 0x0100(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0108(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             CallFunc_K2_AddWorldOffset_SweepHitResult;         // 0x010C(0x0088)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0194(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_276C[0x3];                                     // 0x0195(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitResult                             CallFunc_K2_SetWorldRotation_SweepHitResult;       // 0x0198(0x0088)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	struct FVector                                CallFunc_GetForwardVector_ReturnValue;             // 0x0220(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetComponentLocation_ReturnValue;      // 0x022C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Multiply_VectorFloat_ReturnValue;         // 0x0238(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_276D[0x4];                                     // 0x0244(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<EObjectTypeQuery>                      K2Node_MakeArray_Array;                            // 0x0248(0x0010)(ConstParm, ZeroConstructor, ReferenceParm)
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue;             // 0x0258(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Subtract_VectorVector_ReturnValue;        // 0x0264(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue1;            // 0x0270(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             CallFunc_LineTraceSingleForObjects_OutHit;         // 0x027C(0x0088)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          CallFunc_LineTraceSingleForObjects_ReturnValue;    // 0x0304(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BreakHitResult_bBlockingHit;              // 0x0305(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BreakHitResult_bInitialOverlap;           // 0x0306(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_276E[0x1];                                     // 0x0307(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_BreakHitResult_Time;                      // 0x0308(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakHitResult_Distance;                  // 0x030C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_Location;                  // 0x0310(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_ImpactPoint;               // 0x031C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_Normal;                    // 0x0328(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_ImpactNormal;              // 0x0334(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPhysicalMaterial*                      CallFunc_BreakHitResult_PhysMat;                   // 0x0340(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_BreakHitResult_HitActor;                  // 0x0348(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    CallFunc_BreakHitResult_HitComponent;              // 0x0350(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_BreakHitResult_HitBoneName;               // 0x0358(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_HitItem;                   // 0x0360(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_FaceIndex;                 // 0x0364(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_TraceStart;                // 0x0368(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_TraceEnd;                  // 0x0374(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Multiply_VectorFloat_ReturnValue1;        // 0x0380(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_Conv_VectorToRotator_ReturnValue;         // 0x038C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FRotator                               CallFunc_Conv_VectorToRotator_ReturnValue1;        // 0x0398(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FHitResult                             CallFunc_K2_SetWorldLocationAndRotation_SweepHitResult; // 0x03A4(0x0088)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	uint8                                         Pad_276F[0x4];                                     // 0x042C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UDecalComponent*                        CallFunc_SpawnDecalAtLocation_ReturnValue;         // 0x0430(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

