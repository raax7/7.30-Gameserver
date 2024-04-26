#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x330 (0xB08 - 0x7D8)
// BlueprintGeneratedClass BGA_RiftPortal_Item_Athena.BGA_RiftPortal_Item_Athena_C
class ABGA_RiftPortal_Item_Athena_C : public AFortAthenaRiftPortal
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x7D8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UPostProcessComponent*                 RiftPostProcess;                                   // 0x7E0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USphereComponent*                      PostProcessRadius;                                 // 0x7E8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              P_RiftClosingUp;                                   // 0x7F0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              P_Rift_Idle_Loop;                                  // 0x7F8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCapsuleComponent*                     OverlapCapsule;                                    // 0x800(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCapsuleComponent*                     Capsule;                                           // 0x808(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  SM_Rift;                                           // 0x810(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                       Audio_Looping;                                     // 0x818(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        FragmentMovement_Glow_9A68D88241DDB9CCA0BC82888C4EC266; // 0x820(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        FragmentMovement_Open_9A68D88241DDB9CCA0BC82888C4EC266; // 0x824(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                FragmentMovement__Direction_9A68D88241DDB9CCA0BC82888C4EC266; // 0x828(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_540D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    FragmentMovement;                                  // 0x830(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Audio_RiftDestroyed_PitchCurve_00EF53CD47287903FB5B01AC2A7BE7C6; // 0x838(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                Audio_RiftDestroyed__Direction_00EF53CD47287903FB5B01AC2A7BE7C6; // 0x83C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_540E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    Audio_RiftDestroyed;                               // 0x840(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        VectorScale_Open_1424CF6C4426FFF7BA2A64817506E111; // 0x848(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                VectorScale__Direction_1424CF6C4426FFF7BA2A64817506E111; // 0x84C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_540F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    VectorScale;                                       // 0x850(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                       DeathEffects;                                      // 0x858(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            EnteredRift;                                       // 0x860(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            RiftDestroyed;                                     // 0x868(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerPawn*                       PlayerPawn;                                        // 0x870(0x8)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               TeleportLocation;                                  // 0x878(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5410[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UParticleSystem*                       EnterRift;                                         // 0x888(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortAthenaVehicle*                    Vehicle;                                           // 0x890(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         PortalOpen;                                        // 0x898(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5411[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAnimMontage*                          FallingAnimation;                                  // 0x8A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FScalableFloat                        TeleportHeight;                                    // 0x8A8(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                        ActiveDuration;                                    // 0x8C8(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                        Hangtime;                                          // 0x8E8(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	float                                        TeleportDelay;                                     // 0x908(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5412[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class AFortPlayerPawn*>               PassengerArray;                                    // 0x910(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	class UParticleSystem*                       CrackExitRift;                                     // 0x920(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            PlayerExitSkyCrack;                                // 0x928(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               ActorOriginalLocation;                             // 0x930(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        MaxSpawnHeightMultiplier;                          // 0x93C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortQuestItemDefinition*              QuestItem;                                         // 0x940(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  ObjectiveBackendName;                              // 0x948(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FDataTableRowHandle                   ObjStat;                                           // 0x950(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	class UFortQuestItemDefinition*              RiftPortalLocationsQuest;                          // 0x960(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FDataTableRowHandle                   ObjStatLoc_1;                                      // 0x968(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FDataTableRowHandle                   ObjStatLoc_2;                                      // 0x978(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FDataTableRowHandle                   ObjStatLoc_3;                                      // 0x988(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FDataTableRowHandle                   ObjStatLoc_4;                                      // 0x998(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FDataTableRowHandle                   ObjStatLoc_5;                                      // 0x9A8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FDataTableRowHandle                   ObjStatLoc_6;                                      // 0x9B8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FDataTableRowHandle                   ObjStatLoc_7;                                      // 0x9C8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FDataTableRowHandle                   ObjStatLoc_8;                                      // 0x9D8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FDataTableRowHandle                   ObjStatLoc_9;                                      // 0x9E8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FDataTableRowHandle                   ObjStatLoc_10;                                     // 0x9F8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FDataTableRowHandle                   ObjStatLoc_11;                                     // 0xA08(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FDataTableRowHandle                   ObjStatLoc_12;                                     // 0xA18(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FDataTableRowHandle                   ObjStatLoc_13;                                     // 0xA28(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FDataTableRowHandle                   ObjStatLoc_14;                                     // 0xA38(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FDataTableRowHandle                   ObjStatLoc_15;                                     // 0xA48(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FDataTableRowHandle                   ObjStatLoc_16;                                     // 0xA58(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FDataTableRowHandle                   ObjStatLoc_17;                                     // 0xA68(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FDataTableRowHandle                   ObjStatLoc_18;                                     // 0xA78(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FDataTableRowHandle                   ObjStatLoc_19;                                     // 0xA88(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FDataTableRowHandle                   ObjStatLoc_20;                                     // 0xA98(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FDataTableRowHandle                   ObjStatLoc_21;                                     // 0xAA8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FDataTableRowHandle                   ObjStatLoc_22;                                     // 0xAB8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FDataTableRowHandle                   ObjStatLoc_23;                                     // 0xAC8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FDataTableRowHandle                   ObjStatLoc_24;                                     // 0xAD8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	bool                                         CreativeMode;                                      // 0xAE8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5413[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                OverlapActor;                                      // 0xAF0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        RiftLocationNum;                                   // 0xAF8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              ActorRotation;                                     // 0xAFC(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class ABGA_RiftPortal_Item_Athena_C* GetDefaultObj();

	void EjectFromTurret(class AFortPlayerPawn* PlayerPawn, class AFortAthenaVehicle* CallFunc_GetVehicle_ReturnValue, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue, bool CallFunc_CanTeleport_ReturnValue, int32 CallFunc_RemoveActiveEffectsWithGrantedTags_ReturnValue, bool CallFunc_IsInVehicle_ReturnValue);
	void Is_Flying(bool* NewParam, class UPawnMovementComponent* CallFunc_GetMovementComponent_ReturnValue, class UFortMovementComp_Character* K2Node_DynamicCast_AsFort_Movement_Comp_Character, bool K2Node_DynamicCast_bSuccess, bool CallFunc_EqualEqual_ByteByte_ReturnValue);
	void UseRiftQuestUpdate(class AController* InController, class AFortPlayerController* K2Node_DynamicCast_AsFort_Player_Controller, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, TArray<class AFortPlayerController*>& K2Node_MakeArray_Array, bool CallFunc_Athena_CheckQuestAndObjectiveCompletion_QuestIsValid, bool CallFunc_Athena_CheckQuestAndObjectiveCompletion_QuestCompleted, bool CallFunc_Athena_CheckQuestAndObjectiveCompletion_ObjectiveCompleted, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void CheckForRiftLocUpdate(class AController* InController, bool Temp_bool_Variable, class APawn* CallFunc_K2_GetPawn_ReturnValue, TScriptInterface<class IGameplayTagAssetInterface> K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface, bool K2Node_DynamicCast_bSuccess, TScriptInterface<class IGameplayTagAssetInterface> K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface1, bool K2Node_DynamicCast_bSuccess1, bool CallFunc_HasMatchingGameplayTag_ReturnValue, bool CallFunc_HasMatchingGameplayTag_ReturnValue1, TScriptInterface<class IGameplayTagAssetInterface> K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface2, bool K2Node_DynamicCast_bSuccess2, TScriptInterface<class IGameplayTagAssetInterface> K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface3, bool K2Node_DynamicCast_bSuccess3, bool CallFunc_HasMatchingGameplayTag_ReturnValue2, bool CallFunc_HasMatchingGameplayTag_ReturnValue3, TScriptInterface<class IGameplayTagAssetInterface> K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface4, bool K2Node_DynamicCast_bSuccess4, TScriptInterface<class IGameplayTagAssetInterface> K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface5, bool K2Node_DynamicCast_bSuccess5, bool CallFunc_HasMatchingGameplayTag_ReturnValue4, bool CallFunc_HasMatchingGameplayTag_ReturnValue5, TScriptInterface<class IGameplayTagAssetInterface> K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface6, bool K2Node_DynamicCast_bSuccess6, TScriptInterface<class IGameplayTagAssetInterface> K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface7, bool K2Node_DynamicCast_bSuccess7, bool CallFunc_HasMatchingGameplayTag_ReturnValue6, bool CallFunc_HasMatchingGameplayTag_ReturnValue7, TScriptInterface<class IGameplayTagAssetInterface> K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface8, bool K2Node_DynamicCast_bSuccess8, bool CallFunc_HasMatchingGameplayTag_ReturnValue8, TScriptInterface<class IGameplayTagAssetInterface> K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface9, bool K2Node_DynamicCast_bSuccess9, TScriptInterface<class IGameplayTagAssetInterface> K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface10, bool K2Node_DynamicCast_bSuccess10, bool CallFunc_HasMatchingGameplayTag_ReturnValue9, bool CallFunc_HasMatchingGameplayTag_ReturnValue10, TScriptInterface<class IGameplayTagAssetInterface> K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface11, bool K2Node_DynamicCast_bSuccess11, TScriptInterface<class IGameplayTagAssetInterface> K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface12, bool K2Node_DynamicCast_bSuccess12, bool CallFunc_HasMatchingGameplayTag_ReturnValue11, bool CallFunc_HasMatchingGameplayTag_ReturnValue12, TScriptInterface<class IGameplayTagAssetInterface> K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface13, bool K2Node_DynamicCast_bSuccess13, TScriptInterface<class IGameplayTagAssetInterface> K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface14, bool K2Node_DynamicCast_bSuccess14, bool CallFunc_HasMatchingGameplayTag_ReturnValue13, bool CallFunc_HasMatchingGameplayTag_ReturnValue14, TScriptInterface<class IGameplayTagAssetInterface> K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface15, bool K2Node_DynamicCast_bSuccess15, TScriptInterface<class IGameplayTagAssetInterface> K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface16, bool K2Node_DynamicCast_bSuccess16, bool CallFunc_HasMatchingGameplayTag_ReturnValue15, bool CallFunc_HasMatchingGameplayTag_ReturnValue16, TScriptInterface<class IGameplayTagAssetInterface> K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface17, bool K2Node_DynamicCast_bSuccess17, TScriptInterface<class IGameplayTagAssetInterface> K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface18, bool K2Node_DynamicCast_bSuccess18, bool CallFunc_HasMatchingGameplayTag_ReturnValue17, bool CallFunc_HasMatchingGameplayTag_ReturnValue18, TScriptInterface<class IGameplayTagAssetInterface> K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface19, bool K2Node_DynamicCast_bSuccess19, TScriptInterface<class IGameplayTagAssetInterface> K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface20, bool K2Node_DynamicCast_bSuccess20, bool CallFunc_HasMatchingGameplayTag_ReturnValue19, bool CallFunc_HasMatchingGameplayTag_ReturnValue20, TScriptInterface<class IGameplayTagAssetInterface> K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface21, bool K2Node_DynamicCast_bSuccess21, TScriptInterface<class IGameplayTagAssetInterface> K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface22, bool K2Node_DynamicCast_bSuccess22, bool CallFunc_HasMatchingGameplayTag_ReturnValue21, bool CallFunc_HasMatchingGameplayTag_ReturnValue22, TScriptInterface<class IGameplayTagAssetInterface> K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface23, bool K2Node_DynamicCast_bSuccess23, bool CallFunc_HasMatchingGameplayTag_ReturnValue23, class AFortPlayerController* K2Node_DynamicCast_AsFort_Player_Controller, bool K2Node_DynamicCast_bSuccess24, bool CallFunc_IsValid_ReturnValue, TArray<class AFortPlayerController*>& K2Node_MakeArray_Array, bool Temp_bool_Variable1, bool Temp_bool_Variable2, bool Temp_bool_Variable3, bool Temp_bool_Variable4, bool Temp_bool_Variable5, bool Temp_bool_Variable6, bool Temp_bool_Variable7, bool Temp_bool_Variable8, bool Temp_bool_Variable9, bool Temp_bool_Variable10, bool Temp_bool_Variable11, bool Temp_bool_Variable12, bool Temp_bool_Variable13, bool Temp_bool_Variable14, bool Temp_bool_Variable15, int32 Temp_int_Variable, const struct FDataTableRowHandle& Temp_struct_Variable, int32 Temp_int_Variable1, class FName Temp_name_Variable, class FName Temp_name_Variable1, class FName Temp_name_Variable2, class FName Temp_name_Variable3, class FName Temp_name_Variable4, class FName Temp_name_Variable5, class FName Temp_name_Variable6, class FName Temp_name_Variable7, class FName Temp_name_Variable8, class FName Temp_name_Variable9, class FName Temp_name_Variable10, class FName Temp_name_Variable11, class FName Temp_name_Variable12, class FName Temp_name_Variable13, class FName Temp_name_Variable14, class FName Temp_name_Variable15, class FName Temp_name_Variable16, class FName Temp_name_Variable17, class FName Temp_name_Variable18, class FName Temp_name_Variable19, class FName Temp_name_Variable20, class FName Temp_name_Variable21, class FName Temp_name_Variable22, class FName Temp_name_Variable23, bool Temp_bool_Variable16, bool Temp_bool_Variable17, bool Temp_bool_Variable18, bool Temp_bool_Variable19, bool Temp_bool_Variable20, bool Temp_bool_Variable21, bool Temp_bool_Variable22, const struct FDataTableRowHandle& K2Node_Select_Default, class FName K2Node_Select1_Default, const class FString& CallFunc_Conv_IntToString_ReturnValue, bool CallFunc_Athena_CheckQuestAndObjectiveCompletion_QuestIsValid, bool CallFunc_Athena_CheckQuestAndObjectiveCompletion_QuestCompleted, bool CallFunc_Athena_CheckQuestAndObjectiveCompletion_ObjectiveCompleted, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool Temp_bool_Variable23);
	void OnRep_PlayerPawn();
	void OnRep_Vehicle();
	void OnRep_TeleportLocation();
	void PlayExpandOrCollapseAudio(bool Expand, bool Temp_bool_Variable, class USoundBase* Temp_object_Variable, class USoundBase* Temp_object_Variable1, class USoundBase* K2Node_Select_Default, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue);
	void UserConstructionScript();
	void Audio_RiftDestroyed__FinishedFunc();
	void Audio_RiftDestroyed__UpdateFunc();
	void VectorScale__FinishedFunc();
	void VectorScale__UpdateFunc();
	void FragmentMovement__FinishedFunc();
	void FragmentMovement__UpdateFunc();
	void DestroyRift();
	void BndEvt__OverlapCapsule_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult);
	void BndEvt__Capsule_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult);
	void BndEvt__Capsule_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
	void ReceiveBeginPlay();
	void PlayTeleportFX(const struct FVector& PlayerLocation);
	void PlayCosmeticFX();
	void OverlappingOnBeginPlay(class AActor* Actor);
	void VehicleTeleportEvent();
	void NotifyTeleportedVehicle(class AFortAthenaVehicle* Vehicle);
	void PlaylistLoaded(class FName PlaylistName, struct FGameplayTagContainer& PlaylistContextTags);
	void VehicleInteractionFailed(class AFortPlayerPawnAthena* FortPlayerPawnAthena);
	void ExecuteUbergraph_BGA_RiftPortal_Item_Athena(int32 EntryPoint, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, int32 Temp_int_Loop_Counter_Variable1, bool CallFunc_HasAuthority_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue1, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent2, class AActor* K2Node_ComponentBoundEvent_OtherActor2, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp2, int32 K2Node_ComponentBoundEvent_OtherBodyIndex2, bool K2Node_ComponentBoundEvent_bFromSweep1, const struct FHitResult& K2Node_ComponentBoundEvent_SweepResult1, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent1, class AActor* K2Node_ComponentBoundEvent_OtherActor1, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp1, int32 K2Node_ComponentBoundEvent_OtherBodyIndex1, bool K2Node_ComponentBoundEvent_bFromSweep, const struct FHitResult& K2Node_ComponentBoundEvent_SweepResult, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent, class AActor* K2Node_ComponentBoundEvent_OtherActor, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp, int32 K2Node_ComponentBoundEvent_OtherBodyIndex, class AFortPlayerPawnAthena* K2Node_DynamicCast_AsFort_Player_Pawn_Athena, bool K2Node_DynamicCast_bSuccess1, TArray<class AActor*>& CallFunc_GetOverlappingActors_OverlappingActors, int32 Temp_int_Array_Index_Variable1, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, float CallFunc_GetValueAtLevel_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, const struct FVector& K2Node_CustomEvent_PlayerLocation, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue, const struct FRotator& CallFunc_MakeRotator_ReturnValue, bool CallFunc_IsPlaying_ReturnValue, bool CallFunc_HasAuthority_ReturnValue1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, TArray<class AFortPlayerPawn*>& CallFunc_GetAllPassengers_ReturnValue, bool CallFunc_HasDriver_ReturnValue, int32 CallFunc_Array_Length_ReturnValue1, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue, class AFortAthenaVehicle* K2Node_DynamicCast_AsFort_Athena_Vehicle, bool K2Node_DynamicCast_bSuccess2, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn1, bool K2Node_DynamicCast_bSuccess3, class AActor* K2Node_Event_Actor, class AFortAthenaVehicle* CallFunc_GetVehicle_ReturnValue, bool CallFunc_HasDriver_ReturnValue1, bool CallFunc_IsInVehicle_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue1, bool CallFunc_HasAuthority_ReturnValue2, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue2, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, float CallFunc_GetValueAtLevel_ReturnValue1, const struct FVector& CallFunc_Add_VectorVector_ReturnValue1, const struct FVector& CallFunc_MakeVector_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue1, class AFortPlayerPawnAthena* K2Node_DynamicCast_AsFort_Player_Pawn_Athena1, bool K2Node_DynamicCast_bSuccess4, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, bool CallFunc_LocalIsTryingToEnterVehicle_ReturnValue, float CallFunc_GetValueAtLevel_ReturnValue2, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, class UAudioComponent* CallFunc_SpawnSoundAtLocation_ReturnValue, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn2, bool K2Node_DynamicCast_bSuccess5, bool CallFunc_IsLocallyControlled_ReturnValue, bool CallFunc_IsDrivingVehicle_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class AFortAthenaVehicle* CallFunc_GetVehicle_ReturnValue1, class AFortAthenaVehicle* K2Node_Event_Vehicle, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue3, class AFortPlayerPawn* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue2, bool CallFunc_Less_IntInt_ReturnValue, class AGameStateBase* CallFunc_GetGameState_ReturnValue, class FName K2Node_CustomEvent_PlaylistName, const struct FGameplayTagContainer& K2Node_CustomEvent_PlaylistContextTags, class AFortGameStateAthena* K2Node_DynamicCast_AsFort_Game_State_Athena, bool K2Node_DynamicCast_bSuccess6, bool CallFunc_Athena_CheckCreativeMode_CanCompleteQuest, bool CallFunc_Athena_CheckCreativeMode_CanCompleteQuest1, bool CallFunc_IsValid_ReturnValue1, bool CallFunc_IsValid_ReturnValue2, TArray<class AFortPlayerPawn*>& CallFunc_GetAllPassengers_ReturnValue1, class AFortPlayerPawn* CallFunc_GetDriver_ReturnValue, class AFortPlayerPawn* CallFunc_Array_Get_Item1, bool CallFunc_IsValid_ReturnValue3, bool CallFunc_IsValid_ReturnValue4, class AController* CallFunc_GetController_ReturnValue, class AController* CallFunc_GetController_ReturnValue1, int32 CallFunc_Array_Length_ReturnValue3, class AController* CallFunc_GetController_ReturnValue2, bool CallFunc_Less_IntInt_ReturnValue1, bool CallFunc_IsDedicatedServer_ReturnValue, TArray<class AFortPlayerPawn*>& CallFunc_GetAllPassengers_ReturnValue2, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, const struct FRotator& CallFunc_MakeRotator_ReturnValue1, class AFortPlayerPawnAthena* K2Node_CustomEvent_FortPlayerPawnAthena, TArray<class AActor*>& CallFunc_GetOverlappingActors_OverlappingActors1, bool CallFunc_Array_Contains_ReturnValue, bool CallFunc_Is_Flying_NewParam, bool CallFunc_Is_Flying_NewParam1, bool CallFunc_CanTeleport_ReturnValue, float CallFunc_SelectFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, const struct FRotator& CallFunc_MakeRotator_ReturnValue2, const struct FHitResult& CallFunc_K2_SetRelativeRotation_SweepHitResult);
};

}

