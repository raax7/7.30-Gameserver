#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ItemReceived14DaysPresent

#include "Basic.hpp"

#include "ItemReceived14DaysPresent_classes.hpp"
#include "ItemReceived14DaysPresent_parameters.hpp"


namespace SDK
{

// Function ItemReceived14DaysPresent.ItemReceived14DaysPresent_C.ExecuteUbergraph_ItemReceived14DaysPresent
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemReceived14DaysPresent_C::ExecuteUbergraph_ItemReceived14DaysPresent(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemReceived14DaysPresent_C", "ExecuteUbergraph_ItemReceived14DaysPresent");

	Params::ItemReceived14DaysPresent_C_ExecuteUbergraph_ItemReceived14DaysPresent Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ItemReceived14DaysPresent.ItemReceived14DaysPresent_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UItemReceived14DaysPresent_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemReceived14DaysPresent_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

}

