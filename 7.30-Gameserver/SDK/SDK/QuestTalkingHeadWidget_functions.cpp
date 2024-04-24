#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: QuestTalkingHeadWidget

#include "Basic.hpp"

#include "QuestTalkingHeadWidget_classes.hpp"
#include "QuestTalkingHeadWidget_parameters.hpp"


namespace SDK
{

// Function QuestTalkingHeadWidget.QuestTalkingHeadWidget_C.ExecuteUbergraph_QuestTalkingHeadWidget
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuestTalkingHeadWidget_C::ExecuteUbergraph_QuestTalkingHeadWidget(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestTalkingHeadWidget_C", "ExecuteUbergraph_QuestTalkingHeadWidget");

	Params::QuestTalkingHeadWidget_C_ExecuteUbergraph_QuestTalkingHeadWidget Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function QuestTalkingHeadWidget.QuestTalkingHeadWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UQuestTalkingHeadWidget_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestTalkingHeadWidget_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function QuestTalkingHeadWidget.QuestTalkingHeadWidget_C.SetTalkingHeadImage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D*                       Icon                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuestTalkingHeadWidget_C::SetTalkingHeadImage(class UTexture2D* Icon)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestTalkingHeadWidget_C", "SetTalkingHeadImage");

	Params::QuestTalkingHeadWidget_C_SetTalkingHeadImage Parms{};

	Parms.Icon = Icon;

	UObject::ProcessEvent(Func, &Parms);
}


// Function QuestTalkingHeadWidget.QuestTalkingHeadWidget_C.SetTalkingHeadName
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             Title                                                  (BlueprintVisible, BlueprintReadOnly, Parm)

void UQuestTalkingHeadWidget_C::SetTalkingHeadName(const class FText& Title)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestTalkingHeadWidget_C", "SetTalkingHeadName");

	Params::QuestTalkingHeadWidget_C_SetTalkingHeadName Parms{};

	Parms.Title = std::move(Title);

	UObject::ProcessEvent(Func, &Parms);
}


// Function QuestTalkingHeadWidget.QuestTalkingHeadWidget_C.SetTalkingHeadSubtitle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             Subtitle                                               (BlueprintVisible, BlueprintReadOnly, Parm)

void UQuestTalkingHeadWidget_C::SetTalkingHeadSubtitle(const class FText& Subtitle)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestTalkingHeadWidget_C", "SetTalkingHeadSubtitle");

	Params::QuestTalkingHeadWidget_C_SetTalkingHeadSubtitle Parms{};

	Parms.Subtitle = std::move(Subtitle);

	UObject::ProcessEvent(Func, &Parms);
}


// Function QuestTalkingHeadWidget.QuestTalkingHeadWidget_C.HandleTalkingHeadBegin
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D*                       Image                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                             Title                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
// class FText                             Subtitle                                               (BlueprintVisible, BlueprintReadOnly, Parm)
// EFortAnnouncementDisplayPreference      Param_DisplayPreference                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuestTalkingHeadWidget_C::HandleTalkingHeadBegin(class UTexture2D* Image, const class FText& Title, const class FText& Subtitle, EFortAnnouncementDisplayPreference Param_DisplayPreference)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestTalkingHeadWidget_C", "HandleTalkingHeadBegin");

	Params::QuestTalkingHeadWidget_C_HandleTalkingHeadBegin Parms{};

	Parms.Image = Image;
	Parms.Title = std::move(Title);
	Parms.Subtitle = std::move(Subtitle);
	Parms.Param_DisplayPreference = Param_DisplayPreference;

	UObject::ProcessEvent(Func, &Parms);
}


// Function QuestTalkingHeadWidget.QuestTalkingHeadWidget_C.HandleTalkingHeadEnd
// (Public, BlueprintCallable, BlueprintEvent)

void UQuestTalkingHeadWidget_C::HandleTalkingHeadEnd()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestTalkingHeadWidget_C", "HandleTalkingHeadEnd");

	UObject::ProcessEvent(Func, nullptr);
}


// Function QuestTalkingHeadWidget.QuestTalkingHeadWidget_C.HandleShouldBlockSubtitlePortraitChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    ShouldBlockSubtitlePortrait                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuestTalkingHeadWidget_C::HandleShouldBlockSubtitlePortraitChanged(bool ShouldBlockSubtitlePortrait)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestTalkingHeadWidget_C", "HandleShouldBlockSubtitlePortraitChanged");

	Params::QuestTalkingHeadWidget_C_HandleShouldBlockSubtitlePortraitChanged Parms{};

	Parms.ShouldBlockSubtitlePortrait = ShouldBlockSubtitlePortrait;

	UObject::ProcessEvent(Func, &Parms);
}


// Function QuestTalkingHeadWidget.QuestTalkingHeadWidget_C.UpdateVisibility
// (Public, BlueprintCallable, BlueprintEvent)

void UQuestTalkingHeadWidget_C::UpdateVisibility()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuestTalkingHeadWidget_C", "UpdateVisibility");

	UObject::ProcessEvent(Func, nullptr);
}

}

