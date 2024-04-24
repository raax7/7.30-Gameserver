#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: EpicGameplayStatsRuntime

#include "Basic.hpp"

#include "Engine_classes.hpp"
#include "EpicGameplayStatsRuntime_structs.hpp"


namespace SDK
{

// Class EpicGameplayStatsRuntime.BlueprintGameplayStatsLibrary
// 0x0000 (0x0028 - 0x0028)
class UBlueprintGameplayStatsLibrary final : public UBlueprintFunctionLibrary
{
public:
	static bool EqualEqual_GameplayStatTagGameplayStatTag(const struct FGameplayStatTag& A, const struct FGameplayStatTag& B);
	static bool NotEqual_GameplayStatTagGameplayStatTag(const struct FGameplayStatTag& A, const struct FGameplayStatTag& B);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"BlueprintGameplayStatsLibrary">();
	}
	static class UBlueprintGameplayStatsLibrary* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBlueprintGameplayStatsLibrary>();
	}
};

// Class EpicGameplayStatsRuntime.GameplayTagTableManager
// 0x0068 (0x0098 - 0x0030)
class UGameplayTagTableManager final : public UDataAsset
{
public:
	TArray<struct FManagedGameplayTagDataTableItem> Tables;                                            // 0x0030(0x0010)(Edit, ZeroConstructor, NativeAccessSpecifierPrivate)
	uint8                                         Pad_125D[0x58];                                    // 0x0040(0x0058)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"GameplayTagTableManager">();
	}
	static class UGameplayTagTableManager* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGameplayTagTableManager>();
	}
};

}

