#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_Hookgun_Athena

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "B_Ranged_Generic_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass B_Hookgun_Athena.B_Hookgun_Athena_C
// 0x0018 (0x0DF0 - 0x0DD8)
class AB_Hookgun_Athena_C final : public AB_Ranged_Generic_C
{
public:
	struct FTimerHandle                           Timer;                                             // 0x0DD8(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerPawnAthena*                  Player_Pawn;                                       // 0x0DE0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Debug;                                             // 0x0DE8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void UserConstructionScript();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"B_Hookgun_Athena_C">();
	}
	static class AB_Hookgun_Athena_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AB_Hookgun_Athena_C>();
	}
};

}

