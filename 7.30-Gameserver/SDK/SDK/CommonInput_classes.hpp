#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CommonInput

#include "Basic.hpp"

#include "CommonInput_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// Class CommonInput.CommonInputSubsystem
// 0x0048 (0x0070 - 0x0028)
class UCommonInputSubsystem final : public UGameInstanceSubsystem
{
public:
	UMulticastDelegateProperty_                   OnInputMethodChanged;                              // 0x0028(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                         Pad_CCF[0x18];                                     // 0x0038(0x0018)(Fixing Size After Last Property [ Dumper-7 ])
	ECommonInputType                              CurrentInputType;                                  // 0x0050(0x0001)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	ECommonGamepadType                            GamepadInputType;                                  // 0x0051(0x0001)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_CD0[0x17];                                     // 0x0052(0x0017)(Fixing Size After Last Property [ Dumper-7 ])
	bool                                          bIsGamepadSimulatedClick;                          // 0x0069(0x0001)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_CD1[0x6];                                      // 0x006A(0x0006)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void InputMethodChangedDelegate__DelegateSignature(ECommonInputType bNewInputType);
	void SetCurrentInputType(ECommonInputType NewInputType);
	void SetGamepadInputType(ECommonGamepadType InGamepadInputType);

	ECommonGamepadType GetCurrentGamepadType() const;
	ECommonInputType GetCurrentInputType() const;
	ECommonInputType GetDefaultInputType() const;
	bool IsUsingPointerInput() const;
	bool ShouldShowInputKeys() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"CommonInputSubsystem">();
	}
	static class UCommonInputSubsystem* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCommonInputSubsystem>();
	}
};

}

