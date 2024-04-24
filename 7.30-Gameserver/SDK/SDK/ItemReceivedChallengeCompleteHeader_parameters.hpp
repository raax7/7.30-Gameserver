#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ItemReceivedChallengeCompleteHeader

#include "Basic.hpp"

#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function ItemReceivedChallengeCompleteHeader.ItemReceivedChallengeCompleteHeader_C.ExecuteUbergraph_ItemReceivedChallengeCompleteHeader
// 0x01B8 (0x01B8 - 0x0000)
struct ItemReceivedChallengeCompleteHeader_C_ExecuteUbergraph_ItemReceivedChallengeCompleteHeader final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_55FA[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   Temp_text_Variable;                                // 0x0008(0x0018)()
	class UFortMcpContext*                        CallFunc_GetContext_ReturnValue;                   // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortMcpProfileAthena*                  CallFunc_GetAthenaProfile_ReturnValue;             // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortItemDefinition*                    CallFunc_RetrieveItemDefintionFromParam_ReturnValue; // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_HasPurchasedSeasonBook_ReturnValue;       // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_55FB[0x7];                                     // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UFortChallengeBundleItemDefinition*     K2Node_DynamicCast_AsFort_Challenge_Bundle_Item_Definition; // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable1;                               // 0x0049(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_55FC[0x6];                                     // 0x004A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_GetShortNameNumber_ReturnValue;           // 0x0050(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0068(0x0040)(HasGetValueTypeHash)
	class UImage*                                 K2Node_Select_Default;                             // 0x00A8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x00B0(0x0010)(ZeroConstructor, ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x00C0(0x0018)()
	bool                                          CallFunc_TextIsEmpty_ReturnValue;                  // 0x00D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_55FD[0x7];                                     // 0x00D9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_GetShortName_ReturnValue;                 // 0x00E0(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData1;             // 0x00F8(0x0040)(HasGetValueTypeHash)
	class FText                                   K2Node_Select1_Default;                            // 0x0138(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData2;             // 0x0150(0x0040)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array1;                           // 0x0190(0x0010)(ZeroConstructor, ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue1;                      // 0x01A0(0x0018)()
};

}

