#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Snow_Ambient_Lobby

#include "Basic.hpp"


namespace SDK::Params
{

// Function BP_Snow_Ambient_Lobby.BP_Snow_Ambient_Lobby_C.ExecuteUbergraph_BP_Snow_Ambient_Lobby
// 0x0020 (0x0020 - 0x0000)
struct BP_Snow_Ambient_Lobby_C_ExecuteUbergraph_BP_Snow_Ambient_Lobby final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsActive_ReturnValue;                     // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_401E[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0008(0x0010)(ZeroConstructor, NoDestructor)
	class UGameUserSettings*                      CallFunc_GetGameUserSettings_ReturnValue;          // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

