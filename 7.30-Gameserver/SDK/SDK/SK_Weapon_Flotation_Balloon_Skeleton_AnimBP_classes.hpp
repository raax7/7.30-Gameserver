#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SK_Weapon_Flotation_Balloon_Skeleton_AnimBP

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "AnimGraphRuntime_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "FortniteGame_classes.hpp"


namespace SDK
{

// AnimBlueprintGeneratedClass SK_Weapon_Flotation_Balloon_Skeleton_AnimBP.SK_Weapon_Flotation_Balloon_Skeleton_AnimBP_C
// 0x1630 (0x1A90 - 0x0460)
class USK_Weapon_Flotation_Balloon_Skeleton_AnimBP_C final : public UCustomCharacterPartAnimInstance_Balloons
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0460(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                         AnimGraphNode_Root_84DBDC5E48D5C47BF629D8899BCA1531; // 0x0468(0x0020)()
	struct FAnimNode_CopyPoseFromMesh             AnimGraphNode_CopyPoseFromMesh_2D7BF4A847530D38E2D24285CC0D9B49; // 0x0488(0x0138)(ContainsInstancedReference)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_1870934749976874408594AE24405264; // 0x05C0(0x0020)()
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_17811BD8492A719214EC19AD77BD6A29; // 0x05E0(0x0020)()
	struct FAnimNode_LookAt                       AnimGraphNode_LookAt_7B57FE4C487DC6F9E32018A7A0DBA84B; // 0x0600(0x01B0)()
	struct FAnimNode_ModifyBone                   AnimGraphNode_ModifyBone_3B803E214CCD9CFCB5B5D09DB5A8B420; // 0x07B0(0x0108)()
	struct FAnimNode_SpringBone                   AnimGraphNode_SpringBone_A2B0CFAC4A512F3CE1A066B8890AFC5B; // 0x08B8(0x0128)()
	struct FAnimNode_Trail                        AnimGraphNode_Trail_4DD306434D40186579746DBD80665345; // 0x09E0(0x0270)()
	struct FAnimNode_Trail                        AnimGraphNode_Trail_2CCCBB504F632B056034CBB56B083AA2; // 0x0C50(0x0270)()
	struct FAnimNode_BlendListByBool              AnimGraphNode_BlendListByBool_40EBC9F7420C7D18FB3EF7873680C297; // 0x0EC0(0x00A0)()
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_157C98D64BBFEB3B2713659127F338F5; // 0x0F60(0x0020)()
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_B6845B6B4E05D127D3B50BAE95CB9651; // 0x0F80(0x0020)()
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_3C924AAB4C8942759DF77CB84A5B5A9C; // 0x0FA0(0x0020)()
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_B72076124E994973DD23829C04501A7B; // 0x0FC0(0x0020)()
	struct FAnimNode_SaveCachedPose               AnimGraphNode_SaveCachedPose_AA5FA2D545EFB06B01EE68A8F361C4FF; // 0x0FE0(0x00B8)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_86F3EF14439003F0433E6FBB7150E2D7; // 0x1098(0x0028)()
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_735F27DB4774461703675DB46108F113; // 0x10C0(0x0020)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_BAF0B5704E7664BD4ADF328321D7937B; // 0x10E0(0x0028)()
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_6F2E049C465694CA22BCE899606D45EC; // 0x1108(0x0020)()
	struct FAnimNode_ModifyBone                   AnimGraphNode_ModifyBone_B7279996438367D62FB9FC859BD808DD; // 0x1128(0x0108)()
	struct FAnimNode_ModifyBone                   AnimGraphNode_ModifyBone_F27645FB40386CDEAAAFE09B3365281B; // 0x1230(0x0108)()
	struct FAnimNode_ModifyBone                   AnimGraphNode_ModifyBone_50FCD6544C176C6E4B22FFB88DA0089B; // 0x1338(0x0108)()
	struct FAnimNode_ModifyBone                   AnimGraphNode_ModifyBone_FFAF414B429EAC8E724CF089020CB32E; // 0x1440(0x0108)()
	struct FAnimNode_ModifyBone                   AnimGraphNode_ModifyBone_96616767415FC8DD6033C1BADDBB11AD; // 0x1548(0x0108)()
	struct FAnimNode_ModifyBone                   AnimGraphNode_ModifyBone_6261FF3E4C9A2F7C13F89493995D01DC; // 0x1650(0x0108)()
	struct FAnimNode_ModifyBone                   AnimGraphNode_ModifyBone_8A6318634970B2D5A10DEAAA53CD44D6; // 0x1758(0x0108)()
	struct FAnimNode_ModifyBone                   AnimGraphNode_ModifyBone_20E2ABA4445A43AE921AC893C5EDD267; // 0x1860(0x0108)()
	struct FAnimNode_ModifyBone                   AnimGraphNode_ModifyBone_D0E5B2AD4DD6104F9CE9EA9712442D74; // 0x1968(0x0108)()
	struct FRotator                               Head_corrective_rotation;                          // 0x1A70(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                         Headback_pose_alpha;                               // 0x1A7C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               SocketUpVector;                                    // 0x1A80(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_SK_Weapon_Flotation_Balloon_Skeleton_AnimBP(int32 EntryPoint);
	void BlueprintUpdateAnimation(float DeltaTimeX);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SK_Weapon_Flotation_Balloon_Skeleton_AnimBP_C">();
	}
	static class USK_Weapon_Flotation_Balloon_Skeleton_AnimBP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USK_Weapon_Flotation_Balloon_Skeleton_AnimBP_C>();
	}
};

}

