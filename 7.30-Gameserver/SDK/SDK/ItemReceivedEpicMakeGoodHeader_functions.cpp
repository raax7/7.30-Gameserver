#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ItemReceivedEpicMakeGoodHeader

#include "Basic.hpp"

#include "ItemReceivedEpicMakeGoodHeader_classes.hpp"
#include "ItemReceivedEpicMakeGoodHeader_parameters.hpp"


namespace SDK
{

// Function ItemReceivedEpicMakeGoodHeader.ItemReceivedEpicMakeGoodHeader_C.ExecuteUbergraph_ItemReceivedEpicMakeGoodHeader
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemReceivedEpicMakeGoodHeader_C::ExecuteUbergraph_ItemReceivedEpicMakeGoodHeader(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemReceivedEpicMakeGoodHeader_C", "ExecuteUbergraph_ItemReceivedEpicMakeGoodHeader");

	Params::ItemReceivedEpicMakeGoodHeader_C_ExecuteUbergraph_ItemReceivedEpicMakeGoodHeader Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ItemReceivedEpicMakeGoodHeader.ItemReceivedEpicMakeGoodHeader_C.InitFromGiftBoxItem_BP
// (Public, BlueprintCallable, BlueprintEvent)

void UItemReceivedEpicMakeGoodHeader_C::InitFromGiftBoxItem_BP()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemReceivedEpicMakeGoodHeader_C", "InitFromGiftBoxItem_BP");

	UObject::ProcessEvent(Func, nullptr);
}

}

