#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MiniItemCraftingIngredientsDetailWidget

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass MiniItemCraftingIngredientsDetailWidget.MiniItemCraftingIngredientsDetailWidget_C
// 0x0010 (0x0288 - 0x0278)
class UMiniItemCraftingIngredientsDetailWidget_C final : public UFortItemDetailElementWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UMiniCraftingIngredientList_C*          MiniCraftingIngredientList;                        // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_MiniItemCraftingIngredientsDetailWidget(int32 EntryPoint);
	void Construct();
	void HandlePostDifferentItemToCompareWithSet();
	void HandlePostDifferentItemToDetailSet();
	void GetRecipeItemQuantityPairs(class UFortItem* Item, TArray<struct FFortItemQuantityPair>* Pairs);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"MiniItemCraftingIngredientsDetailWidget_C">();
	}
	static class UMiniItemCraftingIngredientsDetailWidget_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMiniItemCraftingIngredientsDetailWidget_C>();
	}
};

}

