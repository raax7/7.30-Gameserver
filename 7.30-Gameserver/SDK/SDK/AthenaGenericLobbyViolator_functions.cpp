#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AthenaGenericLobbyViolator

#include "Basic.hpp"

#include "AthenaGenericLobbyViolator_classes.hpp"
#include "AthenaGenericLobbyViolator_parameters.hpp"


namespace SDK
{

// Function AthenaGenericLobbyViolator.AthenaGenericLobbyViolator_C.SetGamemodeName
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             Param_Name                                             (BlueprintVisible, BlueprintReadOnly, Parm)
// class FText                             Param_SubText                                          (BlueprintVisible, BlueprintReadOnly, Parm)

void UAthenaGenericLobbyViolator_C::SetGamemodeName(const class FText& Param_Name, const class FText& Param_SubText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaGenericLobbyViolator_C", "SetGamemodeName");

	Params::AthenaGenericLobbyViolator_C_SetGamemodeName Parms{};

	Parms.Param_Name = std::move(Param_Name);
	Parms.Param_SubText = std::move(Param_SubText);

	UObject::ProcessEvent(Func, &Parms);
}

}

