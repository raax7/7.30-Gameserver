#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Athena_Environmental_ZipLine

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_Athena_Environmental_ZipLine.BP_Athena_Environmental_ZipLine_C
// 0x0118 (0x04A8 - 0x0390)
class ABP_Athena_Environmental_ZipLine_C final : public AFortAthenaZipline
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0390(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                   SM_Line;                                           // 0x0398(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCapsuleComponent*                      OverlapCapsule;                                    // 0x03A0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        Zipline;                                           // 0x03A8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        Scene;                                             // 0x03B0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FVector                                StartLocation;                                     // 0x03B8(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                TargetLocation;                                    // 0x03C4(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                MotorOffset;                                       // 0x03D0(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         LineThickness;                                     // 0x03DC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         LineCollisionThickness;                            // 0x03E0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                PlayerOffsetToLine;                                // 0x03E4(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 PoleA;                                             // 0x03F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class AActor*                                 PoleB;                                             // 0x03F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	struct FCurveTableRowHandle                   SpeedCTHandle;                                     // 0x0400(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FCurveTableRowHandle                   ZipLineEnabledCTHandle;                            // 0x0410(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FCurveTableRowHandle                   LineCollisionRadiusCTHandle;                       // 0x0420(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FCurveTableRowHandle                   BuildingCheckBoxExtentsCTHandle;                   // 0x0430(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class FName                                   BackendName;                                       // 0x0440(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortQuestItemDefinition*               QuestItem;                                         // 0x0448(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FDataTableRowHandle                    ObjStat;                                           // 0x0450(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	float                                         LineExtendBeyondPoleLength;                        // 0x0460(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                PoleASocketLocation;                               // 0x0464(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                PoleBSocketLocation;                               // 0x0470(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2F8C[0x4];                                     // 0x047C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AFortPlayerPawn*                        PlayerPawn;                                        // 0x0480(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class AFortPlayerPawn*>                PlayersPendingMovementModeChange;                  // 0x0488(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	float                                         CollisionHeightAboveLine;                          // 0x0498(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                PlayerOffsetToLine_Hoverboard;                     // 0x049C(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_Athena_Environmental_ZipLine(int32 EntryPoint);
	void HandleOnMovementModeChanged(class ACharacter* Character, EMovementMode PrevMovementMode, uint8 PreviousCustomMode);
	void HandleOnMapInfoInitialized();
	void BndEvt__OverlapCapsule_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
	void ReceiveBeginPlay();
	void BndEvt__OverlapCapsule_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void UserConstructionScript();
	void StartZipLining(class AFortPlayerPawn* FortPlayerPawn);
	void GetCharacterCustomMovementMode(class APawn* Character, EFortCustomMovement* CustomMovementMode, EMovementMode* MovementMode);
	void QuestCheckForUse(class AFortPlayerController* FortPlayerController);
	void CheckForBuildings(class AFortPlayerPawn* Player, bool* BuildingNearby_);
	void HandleEnterZipline(class AFortPlayerPawn* InPlayerPawn);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Athena_Environmental_ZipLine_C">();
	}
	static class ABP_Athena_Environmental_ZipLine_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_Athena_Environmental_ZipLine_C>();
	}
};

}

