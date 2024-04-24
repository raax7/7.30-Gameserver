#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AssetRegistry

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK
{

// ScriptStruct AssetRegistry.ARFilter
// 0x00E8 (0x00E8 - 0x0000)
struct FARFilter final
{
public:
	TArray<class FName>                           PackageNames;                                      // 0x0000(0x0010)(BlueprintVisible, ZeroConstructor, Transient, NativeAccessSpecifierPublic)
	TArray<class FName>                           PackagePaths;                                      // 0x0010(0x0010)(BlueprintVisible, ZeroConstructor, Transient, NativeAccessSpecifierPublic)
	TArray<class FName>                           ObjectPaths;                                       // 0x0020(0x0010)(BlueprintVisible, ZeroConstructor, Transient, NativeAccessSpecifierPublic)
	TArray<class FName>                           ClassNames;                                        // 0x0030(0x0010)(BlueprintVisible, ZeroConstructor, Transient, NativeAccessSpecifierPublic)
	uint8                                         Pad_2807[0x50];                                    // 0x0040(0x0050)(Fixing Size After Last Property [ Dumper-7 ])
	TSet<class FName>                             RecursiveClassesExclusionSet;                      // 0x0090(0x0050)(BlueprintVisible, ZeroConstructor, Transient, NativeAccessSpecifierPublic)
	bool                                          bRecursivePaths;                                   // 0x00E0(0x0001)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bRecursiveClasses;                                 // 0x00E1(0x0001)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bIncludeOnlyOnDiskAssets;                          // 0x00E2(0x0001)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_2808[0x5];                                     // 0x00E3(0x0005)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// ScriptStruct AssetRegistry.AssetData
// 0x0050 (0x0050 - 0x0000)
struct alignas(0x08) FAssetData final
{
public:
	class FName                                   ObjectPath;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                   PackageName;                                       // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                   PackagePath;                                       // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                   AssetName;                                         // 0x0018(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                   AssetClass;                                        // 0x0020(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_2809[0x28];                                    // 0x0028(0x0028)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// ScriptStruct AssetRegistry.AssetBundleEntry
// 0x0028 (0x0028 - 0x0000)
struct FAssetBundleEntry final
{
public:
	struct FPrimaryAssetId                        BundleScope;                                       // 0x0000(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                   BundleName;                                        // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FSoftObjectPath>                BundleAssets;                                      // 0x0018(0x0010)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// ScriptStruct AssetRegistry.AssetBundleData
// 0x0010 (0x0010 - 0x0000)
struct FAssetBundleData final
{
public:
	TArray<struct FAssetBundleEntry>              Bundles;                                           // 0x0000(0x0010)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// ScriptStruct AssetRegistry.TagAndValue
// 0x0018 (0x0018 - 0x0000)
struct FTagAndValue final
{
public:
	class FName                                   Tag;                                               // 0x0000(0x0008)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 Value;                                             // 0x0008(0x0010)(BlueprintVisible, ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}

