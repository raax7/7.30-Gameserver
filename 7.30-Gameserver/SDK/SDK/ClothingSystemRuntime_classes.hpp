#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ClothingSystemRuntime

#include "Basic.hpp"

#include "ClothingSystemRuntimeInterface_classes.hpp"
#include "CoreUObject_classes.hpp"
#include "ClothingSystemRuntime_structs.hpp"


namespace SDK
{

// Class ClothingSystemRuntime.ClothingAssetCustomData
// 0x0000 (0x0028 - 0x0028)
class UClothingAssetCustomData final : public UObject
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ClothingAssetCustomData">();
	}
	static class UClothingAssetCustomData* GetDefaultObj()
	{
		return GetDefaultObjImpl<UClothingAssetCustomData>();
	}
};

// Class ClothingSystemRuntime.ClothingAsset
// 0x0130 (0x0178 - 0x0048)
class UClothingAsset final : public UClothingAssetBase
{
public:
	class UPhysicsAsset*                          PhysicsAsset;                                      // 0x0048(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FClothConfig                           ClothConfig;                                       // 0x0050(0x00D4)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_2898[0x4];                                     // 0x0124(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FClothLODData>                  LODData;                                           // 0x0128(0x0010)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<int32>                                 LodMap;                                            // 0x0138(0x0010)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class FName>                           UsedBoneNames;                                     // 0x0148(0x0010)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<int32>                                 UsedBoneIndices;                                   // 0x0158(0x0010)(ZeroConstructor, NativeAccessSpecifierPublic)
	int32                                         ReferenceBoneIndex;                                // 0x0168(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_2899[0x4];                                     // 0x016C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UClothingAssetCustomData*               CustomData;                                        // 0x0170(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ClothingAsset">();
	}
	static class UClothingAsset* GetDefaultObj()
	{
		return GetDefaultObjImpl<UClothingAsset>();
	}
};

// Class ClothingSystemRuntime.ClothingSimulationFactoryNv
// 0x0000 (0x0028 - 0x0028)
class UClothingSimulationFactoryNv final : public UClothingSimulationFactory
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ClothingSimulationFactoryNv">();
	}
	static class UClothingSimulationFactoryNv* GetDefaultObj()
	{
		return GetDefaultObjImpl<UClothingSimulationFactoryNv>();
	}
};

// Class ClothingSystemRuntime.ClothingSimulationInteractorNv
// 0x0010 (0x0040 - 0x0030)
class UClothingSimulationInteractorNv final : public UClothingSimulationInteractor
{
public:
	uint8                                         Pad_289A[0x10];                                    // 0x0030(0x0010)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void DisableGravityOverride();
	void EnableGravityOverride(const struct FVector& InVector);
	void SetAnimDriveDamperStiffness(float InStiffness);
	void SetAnimDriveSpringStiffness(float InStiffness);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ClothingSimulationInteractorNv">();
	}
	static class UClothingSimulationInteractorNv* GetDefaultObj()
	{
		return GetDefaultObjImpl<UClothingSimulationInteractorNv>();
	}
};

}

