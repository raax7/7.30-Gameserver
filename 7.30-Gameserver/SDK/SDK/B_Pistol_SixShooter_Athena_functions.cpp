#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_Pistol_SixShooter_Athena

#include "Basic.hpp"

#include "B_Pistol_SixShooter_Athena_classes.hpp"


namespace SDK
{

// Function B_Pistol_SixShooter_Athena.B_Pistol_SixShooter_Athena_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AB_Pistol_SixShooter_Athena_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Pistol_SixShooter_Athena_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}

}

