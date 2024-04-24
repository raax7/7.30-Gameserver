#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MainTabTutorialBangWrapper

#include "Basic.hpp"

#include "MainTabTutorialBangWrapper_classes.hpp"
#include "MainTabTutorialBangWrapper_parameters.hpp"


namespace SDK
{

// Function MainTabTutorialBangWrapper.MainTabTutorialBangWrapper_C.TabAdded__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UMainTabTutorialBangWrapper_C::TabAdded__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MainTabTutorialBangWrapper_C", "TabAdded__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MainTabTutorialBangWrapper.MainTabTutorialBangWrapper_C.TabDialogClosed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UMainTabTutorialBangWrapper_C::TabDialogClosed__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MainTabTutorialBangWrapper_C", "TabDialogClosed__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MainTabTutorialBangWrapper.MainTabTutorialBangWrapper_C.StopTabCallout__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UMainTabTutorialBangWrapper_C::StopTabCallout__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MainTabTutorialBangWrapper_C", "StopTabCallout__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MainTabTutorialBangWrapper.MainTabTutorialBangWrapper_C.ExecuteUbergraph_MainTabTutorialBangWrapper
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMainTabTutorialBangWrapper_C::ExecuteUbergraph_MainTabTutorialBangWrapper(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MainTabTutorialBangWrapper_C", "ExecuteUbergraph_MainTabTutorialBangWrapper");

	Params::MainTabTutorialBangWrapper_C_ExecuteUbergraph_MainTabTutorialBangWrapper Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MainTabTutorialBangWrapper.MainTabTutorialBangWrapper_C.Tab Reveal Message Closed
// (BlueprintCallable, BlueprintEvent)

void UMainTabTutorialBangWrapper_C::Tab_Reveal_Message_Closed()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MainTabTutorialBangWrapper_C", "Tab Reveal Message Closed");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MainTabTutorialBangWrapper.MainTabTutorialBangWrapper_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMainTabTutorialBangWrapper_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MainTabTutorialBangWrapper_C", "PreConstruct");

	Params::MainTabTutorialBangWrapper_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MainTabTutorialBangWrapper.MainTabTutorialBangWrapper_C.OnStartCallout
// (Event, Protected, BlueprintEvent)
// Parameters:
// class FName                             TutorialObjectiveName                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// ETutorialType                           TutorialType                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMainTabTutorialBangWrapper_C::OnStartCallout(class FName TutorialObjectiveName, ETutorialType TutorialType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MainTabTutorialBangWrapper_C", "OnStartCallout");

	Params::MainTabTutorialBangWrapper_C_OnStartCallout Parms{};

	Parms.TutorialObjectiveName = TutorialObjectiveName;
	Parms.TutorialType = TutorialType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MainTabTutorialBangWrapper.MainTabTutorialBangWrapper_C.OnStopCallout
// (Event, Protected, BlueprintEvent)

void UMainTabTutorialBangWrapper_C::OnStopCallout()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MainTabTutorialBangWrapper_C", "OnStopCallout");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MainTabTutorialBangWrapper.MainTabTutorialBangWrapper_C.OnBangStateChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                                    bEnabled                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                                   Param_Count                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMainTabTutorialBangWrapper_C::OnBangStateChanged(bool bEnabled, int32 Param_Count)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MainTabTutorialBangWrapper_C", "OnBangStateChanged");

	Params::MainTabTutorialBangWrapper_C_OnBangStateChanged Parms{};

	Parms.bEnabled = bEnabled;
	Parms.Param_Count = Param_Count;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MainTabTutorialBangWrapper.MainTabTutorialBangWrapper_C.SetTutorialBorderStyle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                           BorderStyle                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMainTabTutorialBangWrapper_C::SetTutorialBorderStyle(class UClass* BorderStyle)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MainTabTutorialBangWrapper_C", "SetTutorialBorderStyle");

	Params::MainTabTutorialBangWrapper_C_SetTutorialBorderStyle Parms{};

	Parms.BorderStyle = BorderStyle;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MainTabTutorialBangWrapper.MainTabTutorialBangWrapper_C.Update Bang Icon Version
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InCount                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMainTabTutorialBangWrapper_C::Update_Bang_Icon_Version(int32 InCount)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MainTabTutorialBangWrapper_C", "Update Bang Icon Version");

	Params::MainTabTutorialBangWrapper_C_Update_Bang_Icon_Version Parms{};

	Parms.InCount = InCount;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MainTabTutorialBangWrapper.MainTabTutorialBangWrapper_C.Adjust Bang Image Translation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D                        Translation                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMainTabTutorialBangWrapper_C::Adjust_Bang_Image_Translation(const struct FVector2D& Translation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MainTabTutorialBangWrapper_C", "Adjust Bang Image Translation");

	Params::MainTabTutorialBangWrapper_C_Adjust_Bang_Image_Translation Parms{};

	Parms.Translation = std::move(Translation);

	UObject::ProcessEvent(Func, &Parms);
}


// Function MainTabTutorialBangWrapper.MainTabTutorialBangWrapper_C.SetUIFeatureRevealData
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EFortUIFeature                          UIFeature                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                             RevealText                                             (BlueprintVisible, BlueprintReadOnly, Parm)

void UMainTabTutorialBangWrapper_C::SetUIFeatureRevealData(EFortUIFeature UIFeature, const class FText& RevealText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MainTabTutorialBangWrapper_C", "SetUIFeatureRevealData");

	Params::MainTabTutorialBangWrapper_C_SetUIFeatureRevealData Parms{};

	Parms.UIFeature = UIFeature;
	Parms.RevealText = std::move(RevealText);

	UObject::ProcessEvent(Func, &Parms);
}


// Function MainTabTutorialBangWrapper.MainTabTutorialBangWrapper_C.SetShouldSuppressBang
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Param_ShouldSuppressBang                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMainTabTutorialBangWrapper_C::SetShouldSuppressBang(bool Param_ShouldSuppressBang)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MainTabTutorialBangWrapper_C", "SetShouldSuppressBang");

	Params::MainTabTutorialBangWrapper_C_SetShouldSuppressBang Parms{};

	Parms.Param_ShouldSuppressBang = Param_ShouldSuppressBang;

	UObject::ProcessEvent(Func, &Parms);
}

}

