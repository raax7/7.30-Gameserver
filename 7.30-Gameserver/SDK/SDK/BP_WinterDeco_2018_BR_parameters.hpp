#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_WinterDeco_2018_BR

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function BP_WinterDeco_2018_BR.BP_WinterDeco_2018_BR_C.ExecuteUbergraph_BP_WinterDeco_2018_BR
// 0x00E0 (0x00E0 - 0x0000)
struct BP_WinterDeco_2018_BR_C_ExecuteUbergraph_BP_WinterDeco_2018_BR final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1047[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 K2Node_CustomEvent_EventName2;                     // 0x0008(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	struct FTimespan                              K2Node_CustomEvent_TimeUntilEnd2;                  // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FTimespan                              K2Node_CustomEvent_TimeSinceBegin2;                // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_CustomEvent_TimeSpanRatio2;                 // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(const class FString& EventName, const struct FTimespan& TimeUntilEnd, const struct FTimespan& TimeSinceBegin, float TimespanRatio)> K2Node_CreateDelegate_OutputDelegate;              // 0x002C(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_1048[0x4];                                     // 0x003C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 K2Node_CustomEvent_EventName1;                     // 0x0040(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	struct FTimespan                              K2Node_CustomEvent_TimeUntilEnd1;                  // 0x0050(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FTimespan                              K2Node_CustomEvent_TimeSinceBegin1;                // 0x0058(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_CustomEvent_TimeSpanRatio1;                 // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(const class FString& EventName, const struct FTimespan& TimeUntilEnd, const struct FTimespan& TimeSinceBegin, float TimespanRatio)> K2Node_CreateDelegate_OutputDelegate1;             // 0x0064(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_1049[0x4];                                     // 0x0074(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 K2Node_CustomEvent_EventName;                      // 0x0078(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	struct FTimespan                              K2Node_CustomEvent_TimeUntilEnd;                   // 0x0088(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FTimespan                              K2Node_CustomEvent_TimeSinceBegin;                 // 0x0090(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_CustomEvent_TimeSpanRatio;                  // 0x0098(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(const class FString& EventName, const struct FTimespan& TimeUntilEnd, const struct FTimespan& TimeSinceBegin, float TimespanRatio)> K2Node_CreateDelegate_OutputDelegate2;             // 0x009C(0x0010)(ZeroConstructor, NoDestructor)
	float                                         Temp_float_Variable;                               // 0x00AC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimespan                              Temp_struct_Variable;                              // 0x00B0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FTimespan                              Temp_struct_Variable1;                             // 0x00B8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FString                                 Temp_string_Variable;                              // 0x00C0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class UFortAsyncAction_CalendarEventWatcher*  CallFunc_WatchCalendarEvent_ReturnValue;           // 0x00D0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x00D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_WinterDeco_2018_BR.BP_WinterDeco_2018_BR_C.OnEventActive_60D069544B14128930DDA499E61B26E0
// 0x0028 (0x0028 - 0x0000)
struct BP_WinterDeco_2018_BR_C_OnEventActive_60D069544B14128930DDA499E61B26E0 final
{
public:
	class FString                                 EventName;                                         // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	struct FTimespan                              TimeUntilEnd;                                      // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FTimespan                              TimeSinceBegin;                                    // 0x0018(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                         TimespanRatio;                                     // 0x0020(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_WinterDeco_2018_BR.BP_WinterDeco_2018_BR_C.OnEventUpdated_60D069544B14128930DDA499E61B26E0
// 0x0028 (0x0028 - 0x0000)
struct BP_WinterDeco_2018_BR_C_OnEventUpdated_60D069544B14128930DDA499E61B26E0 final
{
public:
	class FString                                 EventName;                                         // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	struct FTimespan                              TimeUntilEnd;                                      // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FTimespan                              TimeSinceBegin;                                    // 0x0018(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                         TimespanRatio;                                     // 0x0020(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_WinterDeco_2018_BR.BP_WinterDeco_2018_BR_C.OnEventEnded_60D069544B14128930DDA499E61B26E0
// 0x0028 (0x0028 - 0x0000)
struct BP_WinterDeco_2018_BR_C_OnEventEnded_60D069544B14128930DDA499E61B26E0 final
{
public:
	class FString                                 EventName;                                         // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	struct FTimespan                              TimeUntilEnd;                                      // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FTimespan                              TimeSinceBegin;                                    // 0x0018(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                         TimespanRatio;                                     // 0x0020(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

