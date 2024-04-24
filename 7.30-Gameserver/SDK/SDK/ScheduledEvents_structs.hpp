#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ScheduledEvents

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "JsonUtilities_structs.hpp"


namespace SDK
{

// ScriptStruct ScheduledEvents.EventRecord
// 0x0020 (0x0020 - 0x0000)
struct FEventRecord final
{
public:
	class FString                                 EventType;                                         // 0x0000(0x0010)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDateTime                              ActiveUntil;                                       // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDateTime                              ActiveSince;                                       // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct ScheduledEvents.EventChannelState
// 0x0038 (0x0038 - 0x0000)
struct FEventChannelState final
{
public:
	struct FDateTime                              ValidFrom;                                         // 0x0000(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FEventRecord>                   ActiveEvents;                                      // 0x0008(0x0010)(ZeroConstructor, NativeAccessSpecifierPublic)
	struct FJsonObjectWrapper                     State;                                             // 0x0018(0x0020)(NativeAccessSpecifierPublic)
};

// ScriptStruct ScheduledEvents.EventsTimeline
// 0x0018 (0x0018 - 0x0000)
struct FEventsTimeline final
{
public:
	struct FDateTime                              CacheExpire;                                       // 0x0000(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FEventChannelState>             States;                                            // 0x0008(0x0010)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// ScriptStruct ScheduledEvents.CalendarDownload
// 0x0060 (0x0060 - 0x0000)
struct FCalendarDownload final
{
public:
	struct FDateTime                              CurrentTime;                                       // 0x0000(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                        EventsTimeOffsetHrs;                               // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<class FString, struct FEventsTimeline>   Channels;                                          // 0x0010(0x0050)(ZeroConstructor, NativeAccessSpecifierPublic)
};

}

