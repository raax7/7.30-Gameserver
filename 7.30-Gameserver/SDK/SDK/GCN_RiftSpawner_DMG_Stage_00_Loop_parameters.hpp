#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GCN_RiftSpawner_DMG_Stage_00_Loop

#include "Basic.hpp"

#include "GameplayAbilities_structs.hpp"


namespace SDK::Params
{

// Function GCN_RiftSpawner_DMG_Stage_00_Loop.GCN_RiftSpawner_DMG_Stage_00_Loop_C.ExecuteUbergraph_GCN_RiftSpawner_DMG_Stage_00_Loop
// 0x00E8 (0x00E8 - 0x0000)
struct GCN_RiftSpawner_DMG_Stage_00_Loop_C_ExecuteUbergraph_GCN_RiftSpawner_DMG_Stage_00_Loop final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_44BE[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 K2Node_Event_MyTarget;                             // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayCueParameters                 K2Node_Event_Parameters;                           // 0x0010(0x00B8)(ConstParm, ContainsInstancedReference)
	TArray<class UParticleSystemComponent*>       K2Node_Event_ParticleComponents;                   // 0x00C8(0x0010)(ConstParm, ZeroConstructor, ReferenceParm)
	TArray<class UAudioComponent*>                K2Node_Event_AudioComponents;                      // 0x00D8(0x0010)(ConstParm, ZeroConstructor, ReferenceParm)
};

// Function GCN_RiftSpawner_DMG_Stage_00_Loop.GCN_RiftSpawner_DMG_Stage_00_Loop_C.OnLoopingStart
// 0x00E0 (0x00E0 - 0x0000)
struct GCN_RiftSpawner_DMG_Stage_00_Loop_C_OnLoopingStart final
{
public:
	class AActor*                                 MyTarget;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayCueParameters                 Parameters;                                        // 0x0008(0x00B8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	TArray<class UParticleSystemComponent*>       ParticleComponents;                                // 0x00C0(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<class UAudioComponent*>                AudioComponents;                                   // 0x00D0(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

}

