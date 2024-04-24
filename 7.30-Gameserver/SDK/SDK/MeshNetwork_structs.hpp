#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MeshNetwork

#include "Basic.hpp"


namespace SDK
{

// Enum MeshNetwork.EMeshNetworkNodeType
// NumValues: 0x0005
enum class EMeshNetworkNodeType : uint8
{
	Root                                     = 0,
	Inner                                    = 1,
	Edge                                     = 2,
	Client                                   = 3,
	EMeshNetworkNodeType_MAX                 = 4,
};

// Enum MeshNetwork.EMeshNetworkRelevancy
// NumValues: 0x0004
enum class EMeshNetworkRelevancy : uint8
{
	NotRelevant                              = 0,
	RelevantToEdgeNodes                      = 1,
	RelevantToClients                        = 2,
	EMeshNetworkRelevancy_MAX                = 3,
};

// ScriptStruct MeshNetwork.AggregatedFunction
// 0x0028 (0x0028 - 0x0000)
struct FAggregatedFunction final
{
public:
	class UFunction*                              Function;                                          // 0x0000(0x0008)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1069[0x20];                                    // 0x0008(0x0020)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// ScriptStruct MeshNetwork.MeshMetaDataStruct
// 0x0001 (0x0001 - 0x0000)
struct FMeshMetaDataStruct final
{
public:
	uint8                                         Pad_106A[0x1];                                     // 0x0000(0x0001)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

}

