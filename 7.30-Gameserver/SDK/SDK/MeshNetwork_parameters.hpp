#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MeshNetwork

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "MeshNetwork_structs.hpp"


namespace SDK::Params
{

// Function MeshNetwork.MeshBeaconClient.ServerUpdateLevelVisibility
// 0x000C (0x000C - 0x0000)
struct MeshBeaconClient_ServerUpdateLevelVisibility final
{
public:
	class FName                                   PackageName;                                       // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bIsVisible;                                        // 0x0008(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_106D[0x3];                                     // 0x0009(0x0003)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// Function MeshNetwork.MeshBeaconClient.ServerUpdateMultipleLevelsVisibility
// 0x0010 (0x0010 - 0x0000)
struct MeshBeaconClient_ServerUpdateMultipleLevelsVisibility final
{
public:
	TArray<struct FUpdateLevelVisibilityLevelInfo> LevelVisibilities;                                 // 0x0000(0x0010)(ConstParm, Parm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function MeshNetwork.MeshNetworkComponent.GetMeshNetworkNodeType
// 0x0001 (0x0001 - 0x0000)
struct MeshNetworkComponent_GetMeshNetworkNodeType final
{
public:
	EMeshNetworkNodeType                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MeshNetwork.MeshNetworkSubsystem.GetMetadata
// 0x0001 (0x0001 - 0x0000)
struct MeshNetworkSubsystem_GetMetadata final
{
public:
	struct FMeshMetaDataStruct                    MetaData;                                          // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function MeshNetwork.MeshNetworkSubsystem.SetMetaData
// 0x0001 (0x0001 - 0x0000)
struct MeshNetworkSubsystem_SetMetaData final
{
public:
	struct FMeshMetaDataStruct                    MetaData;                                          // 0x0000(0x0001)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function MeshNetwork.MeshNetworkSubsystem.GetConnectedToRoot
// 0x0001 (0x0001 - 0x0000)
struct MeshNetworkSubsystem_GetConnectedToRoot final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MeshNetwork.MeshNetworkSubsystem.GetGameServerNodeType
// 0x0001 (0x0001 - 0x0000)
struct MeshNetworkSubsystem_GetGameServerNodeType final
{
public:
	EMeshNetworkNodeType                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function MeshNetwork.MeshNetworkSubsystem.GetMeshNetworkNodeType
// 0x0001 (0x0001 - 0x0000)
struct MeshNetworkSubsystem_GetMeshNetworkNodeType final
{
public:
	EMeshNetworkNodeType                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}

