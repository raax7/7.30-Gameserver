#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ChallengeBundleCategoryHeaderStyle

#include "Basic.hpp"

#include "ChallengeBundleCategoryHeaderStyleStruct_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass ChallengeBundleCategoryHeaderStyle.ChallengeBundleCategoryHeaderStyle_C
// 0x00C8 (0x00F8 - 0x0030)
class UChallengeBundleCategoryHeaderStyle_C final : public UPrimaryDataAsset
{
public:
	struct FChallengeBundleCategoryHeaderStyleStruct Style;                                             // 0x0030(0x00C8)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ChallengeBundleCategoryHeaderStyle_C">();
	}
	static class UChallengeBundleCategoryHeaderStyle_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UChallengeBundleCategoryHeaderStyle_C>();
	}
};

}

