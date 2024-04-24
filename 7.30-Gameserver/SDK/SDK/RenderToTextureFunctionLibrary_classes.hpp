#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: RenderToTextureFunctionLibrary

#include "Basic.hpp"

#include "Engine_classes.hpp"
#include "EIntTypes_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass RenderToTextureFunctionLibrary.RenderToTextureFunctionLibrary_C
// 0x0000 (0x0028 - 0x0028)
class URenderToTextureFunctionLibrary_C final : public UBlueprintFunctionLibrary
{
public:
	static void Array_to_HLSL_Int_Array(EIntTypes Type, class FString& Variable_Name, TArray<int32>& Int, TArray<struct FVector2D>& Int2, TArray<struct FVector>& Int3, TArray<struct FLinearColor>& Int4, class UObject* __WorldContext, class FString* String);
	static void Set_Canvas_Material_Scale_and_Position(const struct FVector2D& Size, const struct FVector2D& Position, float Scale, class UObject* __WorldContext, struct FVector2D* Screen_Position, struct FVector2D* Screen_Size);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"RenderToTextureFunctionLibrary_C">();
	}
	static class URenderToTextureFunctionLibrary_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<URenderToTextureFunctionLibrary_C>();
	}
};

}

