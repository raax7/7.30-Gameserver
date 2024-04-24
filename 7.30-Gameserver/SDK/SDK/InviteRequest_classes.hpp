#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: InviteRequest

#include "Basic.hpp"

#include "FortniteUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass InviteRequest.InviteRequest_C
// 0x0010 (0x0260 - 0x0250)
class UInviteRequest_C final : public UFortInviteRequest
{
public:
	class UBorder*                                Border_Invite;                                     // 0x0250(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UInviteEventTitle_C*                    InviteEventTitle;                                  // 0x0258(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"InviteRequest_C">();
	}
	static class UInviteRequest_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UInviteRequest_C>();
	}
};

}

