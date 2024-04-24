#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UACBase

#include "Basic.hpp"

#include "UACBase_classes.hpp"
#include "UACBase_parameters.hpp"


namespace SDK
{

// Function UACBase.UACNetworkComponent.SendClientHello
// (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:
// uint32                                  SessionKey                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UUACNetworkComponent::SendClientHello(uint32 SessionKey)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UACNetworkComponent", "SendClientHello");

	Params::UACNetworkComponent_SendClientHello Parms{};

	Parms.SessionKey = SessionKey;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function UACBase.UACNetworkComponent.SendPacketToClient
// (Net, NetReliable, Native, Event, Protected, NetClient)
// Parameters:
// uint8                                   Type                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<uint8>                           Packet                                                 (ConstParm, Parm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UUACNetworkComponent::SendPacketToClient(uint8 Type, const TArray<uint8>& Packet)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UACNetworkComponent", "SendPacketToClient");

	Params::UACNetworkComponent_SendPacketToClient Parms{};

	Parms.Type = Type;
	Parms.Packet = std::move(Packet);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function UACBase.UACNetworkComponent.SendPacketToServer
// (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
// Parameters:
// uint8                                   Type                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<uint8>                           Packet                                                 (ConstParm, Parm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UUACNetworkComponent::SendPacketToServer(uint8 Type, const TArray<uint8>& Packet)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UACNetworkComponent", "SendPacketToServer");

	Params::UACNetworkComponent_SendPacketToServer Parms{};

	Parms.Type = Type;
	Parms.Packet = std::move(Packet);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

}

