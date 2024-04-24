#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Fort_Entry_Music_Controller_BP

#include "Basic.hpp"

#include "Fort_Entry_Music_Controller_BP_classes.hpp"
#include "Fort_Entry_Music_Controller_BP_parameters.hpp"


namespace SDK
{

// Function Fort_Entry_Music_Controller_BP.Fort_Entry_Music_Controller_BP_C.ExecuteUbergraph_Fort_Entry_Music_Controller_BP
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AFort_Entry_Music_Controller_BP_C::ExecuteUbergraph_Fort_Entry_Music_Controller_BP(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fort_Entry_Music_Controller_BP_C", "ExecuteUbergraph_Fort_Entry_Music_Controller_BP");

	Params::Fort_Entry_Music_Controller_BP_C_ExecuteUbergraph_Fort_Entry_Music_Controller_BP Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Fort_Entry_Music_Controller_BP.Fort_Entry_Music_Controller_BP_C.ClearDelayedPlayMusicPack
// (BlueprintCallable, BlueprintEvent)

void AFort_Entry_Music_Controller_BP_C::ClearDelayedPlayMusicPack()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fort_Entry_Music_Controller_BP_C", "ClearDelayedPlayMusicPack");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Fort_Entry_Music_Controller_BP.Fort_Entry_Music_Controller_BP_C.DelayedPlayMusicPack
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAthenaMusicPackItemDefinition*   Param_MusicPackToPlayLater                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AFort_Entry_Music_Controller_BP_C::DelayedPlayMusicPack(class UAthenaMusicPackItemDefinition* Param_MusicPackToPlayLater)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fort_Entry_Music_Controller_BP_C", "DelayedPlayMusicPack");

	Params::Fort_Entry_Music_Controller_BP_C_DelayedPlayMusicPack Parms{};

	Parms.Param_MusicPackToPlayLater = Param_MusicPackToPlayLater;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Fort_Entry_Music_Controller_BP.Fort_Entry_Music_Controller_BP_C.MakeNextMusicPackStartFromBeginning
// (BlueprintCallable, BlueprintEvent)

void AFort_Entry_Music_Controller_BP_C::MakeNextMusicPackStartFromBeginning()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fort_Entry_Music_Controller_BP_C", "MakeNextMusicPackStartFromBeginning");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Fort_Entry_Music_Controller_BP.Fort_Entry_Music_Controller_BP_C.Lobby Music Override
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Lobby_Music_Activate                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class USoundBase*                       New_Music                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AFort_Entry_Music_Controller_BP_C::Lobby_Music_Override(bool Lobby_Music_Activate, class USoundBase* New_Music)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fort_Entry_Music_Controller_BP_C", "Lobby Music Override");

	Params::Fort_Entry_Music_Controller_BP_C_Lobby_Music_Override Parms{};

	Parms.Lobby_Music_Activate = Lobby_Music_Activate;
	Parms.New_Music = New_Music;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Fort_Entry_Music_Controller_BP.Fort_Entry_Music_Controller_BP_C.Change Music
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class USoundBase*                       New_Music                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AFort_Entry_Music_Controller_BP_C::Change_Music(class USoundBase* New_Music)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fort_Entry_Music_Controller_BP_C", "Change Music");

	Params::Fort_Entry_Music_Controller_BP_C_Change_Music Parms{};

	Parms.New_Music = New_Music;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Fort_Entry_Music_Controller_BP.Fort_Entry_Music_Controller_BP_C.ListenToMusicPacks
// (BlueprintCallable, BlueprintEvent)

void AFort_Entry_Music_Controller_BP_C::ListenToMusicPacks()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fort_Entry_Music_Controller_BP_C", "ListenToMusicPacks");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Fort_Entry_Music_Controller_BP.Fort_Entry_Music_Controller_BP_C.OnMusicPackChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAthenaMusicPackItemDefinition*   NewMusicPack                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AFort_Entry_Music_Controller_BP_C::OnMusicPackChanged(const class UAthenaMusicPackItemDefinition* NewMusicPack)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fort_Entry_Music_Controller_BP_C", "OnMusicPackChanged");

	Params::Fort_Entry_Music_Controller_BP_C_OnMusicPackChanged Parms{};

	Parms.NewMusicPack = NewMusicPack;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Fort_Entry_Music_Controller_BP.Fort_Entry_Music_Controller_BP_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AFort_Entry_Music_Controller_BP_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fort_Entry_Music_Controller_BP_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}

}

