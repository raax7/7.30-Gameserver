#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ItemRatingIndicator

#include "Basic.hpp"

#include "ItemRatingIndicator_classes.hpp"
#include "ItemRatingIndicator_parameters.hpp"


namespace SDK
{

// Function ItemRatingIndicator.ItemRatingIndicator_C.ExecuteUbergraph_ItemRatingIndicator
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemRatingIndicator_C::ExecuteUbergraph_ItemRatingIndicator(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemRatingIndicator_C", "ExecuteUbergraph_ItemRatingIndicator");

	Params::ItemRatingIndicator_C_ExecuteUbergraph_ItemRatingIndicator Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ItemRatingIndicator.ItemRatingIndicator_C.HandleViewModelChanged
// (Event, Protected, BlueprintEvent)

void UItemRatingIndicator_C::HandleViewModelChanged()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemRatingIndicator_C", "HandleViewModelChanged");

	UObject::ProcessEvent(Func, nullptr);
}

}

