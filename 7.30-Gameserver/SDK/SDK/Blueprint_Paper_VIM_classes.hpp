#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Blueprint_Paper_VIM

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "AnimGraphRuntime_structs.hpp"
#include "FortniteGame_classes.hpp"


namespace SDK
{

// AnimBlueprintGeneratedClass Blueprint_Paper_VIM.Blueprint_Paper_VIM_C
// 0x04F8 (0x0808 - 0x0310)
class UBlueprint_Paper_VIM_C final : public UFortAnimInstance
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0310(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_SpringBone                   AnimGraphNode_SpringBone_985813CD40257121C24510B1EFA3045F; // 0x0318(0x0128)()
	struct FAnimNode_SpringBone                   AnimGraphNode_SpringBone_88B6F311437F6802F9D4E885AEBB612D; // 0x0440(0x0128)()
	struct FAnimNode_SpringBone                   AnimGraphNode_SpringBone_62132DD84DE9792F6948379FF19FE9B0; // 0x0568(0x0128)()
	struct FAnimNode_SpringBone                   AnimGraphNode_SpringBone_D9C2507C414C01F7CECC0291267407DC; // 0x0690(0x0128)()
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_209BCB204FB8EDDD0FE0ECAF3A14490E; // 0x07B8(0x0020)()
	struct FAnimNode_Root                         AnimGraphNode_Root_EAD8434D41BA827A02AADFB11592B5F7; // 0x07D8(0x0020)()
	struct FAnimNode_MeshSpaceRefPose             AnimGraphNode_MeshRefPose_12EF14484EC26A755A1F178B81B266BF; // 0x07F8(0x0010)()

public:
	void ExecuteUbergraph_Blueprint_Paper_VIM(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Blueprint_Paper_VIM_C">();
	}
	static class UBlueprint_Paper_VIM_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBlueprint_Paper_VIM_C>();
	}
};

}

