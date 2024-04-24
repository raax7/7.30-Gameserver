#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Announce_Gen_Conversation

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Announce_Gen_Conversation.Announce_Gen_Conversation_C
// 0x0008 (0x0418 - 0x0410)
class AAnnounce_Gen_Conversation_C final : public AFortClientAnnouncement_Conversation
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0410(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_Announce_Gen_Conversation(int32 EntryPoint);
	void OnConversationFinished(const struct FFortConversationSentence& FinishingSentence, int32 FinishingSentenceSentenceIndex);
	void UserConstructionScript();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Announce_Gen_Conversation_C">();
	}
	static class AAnnounce_Gen_Conversation_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AAnnounce_Gen_Conversation_C>();
	}
};

}

