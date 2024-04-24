#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MaterialShaderQualitySettings

#include "Basic.hpp"


namespace SDK
{

// Enum MaterialShaderQualitySettings.EMobileCSMQuality
// NumValues: 0x0004
enum class EMobileCSMQuality : uint8
{
	NoFiltering                              = 0,
	PCF_1x1                                  = 1,
	PCF_2x2                                  = 2,
	EMobileCSMQuality_MAX                    = 3,
};

// ScriptStruct MaterialShaderQualitySettings.MaterialQualityOverrides
// 0x0008 (0x0008 - 0x0000)
struct FMaterialQualityOverrides final
{
public:
	bool                                          bDiscardQualityDuringCook;                         // 0x0000(0x0001)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bEnableOverride;                                   // 0x0001(0x0001)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bForceFullyRough;                                  // 0x0002(0x0001)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bForceNonMetal;                                    // 0x0003(0x0001)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bForceDisableLMDirectionality;                     // 0x0004(0x0001)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bForceLQReflections;                               // 0x0005(0x0001)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bDisableMaterialNormalCalculation;                 // 0x0006(0x0001)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EMobileCSMQuality                             MobileCSMQuality;                                  // 0x0007(0x0001)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}

