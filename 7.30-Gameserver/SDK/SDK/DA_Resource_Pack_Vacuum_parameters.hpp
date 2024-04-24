#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: DA_Resource_Pack_Vacuum

#include "Basic.hpp"

#include "GameplayTags_structs.hpp"


namespace SDK::Params
{

// Function DA_Resource_Pack_Vacuum.DA_Resource_Pack_Vacuum_C.ExecuteUbergraph_DA_Resource_Pack_Vacuum
// 0x0028 (0x0028 - 0x0000)
struct DA_Resource_Pack_Vacuum_C_ExecuteUbergraph_DA_Resource_Pack_Vacuum final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_63BD[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AFortDecoHelper*                        K2Node_Event_FortDecoHelper;                       // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortDecoHelper*                        K2Node_Event_FortDecoHelper1;                      // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  CallFunc_GetInstigator_ReturnValue;                // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  CallFunc_GetInstigator_ReturnValue1;               // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function DA_Resource_Pack_Vacuum.DA_Resource_Pack_Vacuum_C.BPReleaseTrigger
// 0x0008 (0x0008 - 0x0000)
struct DA_Resource_Pack_Vacuum_C_BPReleaseTrigger final
{
public:
	class AFortDecoHelper*                        FortDecoHelper;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function DA_Resource_Pack_Vacuum.DA_Resource_Pack_Vacuum_C.BPPressTrigger
// 0x0008 (0x0008 - 0x0000)
struct DA_Resource_Pack_Vacuum_C_BPPressTrigger final
{
public:
	class AFortDecoHelper*                        FortDecoHelper;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function DA_Resource_Pack_Vacuum.DA_Resource_Pack_Vacuum_C.RaiseUsageError
// 0x0038 (0x0038 - 0x0000)
struct DA_Resource_Pack_Vacuum_C_RaiseUsageError final
{
public:
	struct FGameplayTagContainer                  FailedReason;                                      // 0x0000(0x0020)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class APawn*                                  CallFunc_GetInstigator_ReturnValue;                // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerPawn*                        K2Node_DynamicCast_AsFort_Player_Pawn;             // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function DA_Resource_Pack_Vacuum.DA_Resource_Pack_Vacuum_C.IsOnGround
// 0x0020 (0x0020 - 0x0000)
struct DA_Resource_Pack_Vacuum_C_IsOnGround final
{
public:
	bool                                          bOnGround;                                         // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_63BE[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APawn*                                  CallFunc_GetInstigator_ReturnValue;                // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerPawn*                        K2Node_DynamicCast_AsFort_Player_Pawn;             // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsFalling_ReturnValue;                    // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x001A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}

