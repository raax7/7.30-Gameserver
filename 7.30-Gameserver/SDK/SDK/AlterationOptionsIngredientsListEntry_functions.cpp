#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AlterationOptionsIngredientsListEntry

#include "Basic.hpp"

#include "AlterationOptionsIngredientsListEntry_classes.hpp"
#include "AlterationOptionsIngredientsListEntry_parameters.hpp"


namespace SDK
{

// Function AlterationOptionsIngredientsListEntry.AlterationOptionsIngredientsListEntry_C.ExecuteUbergraph_AlterationOptionsIngredientsListEntry
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAlterationOptionsIngredientsListEntry_C::ExecuteUbergraph_AlterationOptionsIngredientsListEntry(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AlterationOptionsIngredientsListEntry_C", "ExecuteUbergraph_AlterationOptionsIngredientsListEntry");

	Params::AlterationOptionsIngredientsListEntry_C_ExecuteUbergraph_AlterationOptionsIngredientsListEntry Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AlterationOptionsIngredientsListEntry.AlterationOptionsIngredientsListEntry_C.HandleDifferentItemOrQuantitySetBP
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                                    IsBeingReset                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAlterationOptionsIngredientsListEntry_C::HandleDifferentItemOrQuantitySetBP(const bool IsBeingReset)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AlterationOptionsIngredientsListEntry_C", "HandleDifferentItemOrQuantitySetBP");

	Params::AlterationOptionsIngredientsListEntry_C_HandleDifferentItemOrQuantitySetBP Parms{};

	Parms.IsBeingReset = IsBeingReset;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AlterationOptionsIngredientsListEntry.AlterationOptionsIngredientsListEntry_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UAlterationOptionsIngredientsListEntry_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AlterationOptionsIngredientsListEntry_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AlterationOptionsIngredientsListEntry.AlterationOptionsIngredientsListEntry_C.GetIconBrush
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UFortItemDefinition*              ItemDefinition                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateBrush                      Brush                                                  (Parm, OutParm)

void UAlterationOptionsIngredientsListEntry_C::GetIconBrush(class UFortItemDefinition* ItemDefinition, struct FSlateBrush* Brush)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AlterationOptionsIngredientsListEntry_C", "GetIconBrush");

	Params::AlterationOptionsIngredientsListEntry_C_GetIconBrush Parms{};

	Parms.ItemDefinition = ItemDefinition;

	UObject::ProcessEvent(Func, &Parms);

	if (Brush != nullptr)
		*Brush = std::move(Parms.Brush);
}


// Function AlterationOptionsIngredientsListEntry.AlterationOptionsIngredientsListEntry_C.SetIngredientCount
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UAlterationOptionsIngredientsListEntry_C::SetIngredientCount()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AlterationOptionsIngredientsListEntry_C", "SetIngredientCount");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AlterationOptionsIngredientsListEntry.AlterationOptionsIngredientsListEntry_C.GetHaveQuantity
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int32 UAlterationOptionsIngredientsListEntry_C::GetHaveQuantity()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AlterationOptionsIngredientsListEntry_C", "GetHaveQuantity");

	Params::AlterationOptionsIngredientsListEntry_C_GetHaveQuantity Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

