#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ProceduralMeshComponent

#include "Basic.hpp"

#include "ProceduralMeshComponent_structs.hpp"
#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK
{

// Class ProceduralMeshComponent.KismetProceduralMeshLibrary
// 0x0000 (0x0028 - 0x0028)
class UKismetProceduralMeshLibrary final : public UBlueprintFunctionLibrary
{
public:
	static void CalculateTangentsForMesh(const TArray<struct FVector>& Vertices, const TArray<int32>& Triangles, const TArray<struct FVector2D>& UVs, TArray<struct FVector>* Normals, TArray<struct FProcMeshTangent>* Tangents);
	static void ConvertQuadToTriangles(TArray<int32>& Triangles, int32 Vert0, int32 Vert1, int32 Vert2, int32 Vert3);
	static void CopyProceduralMeshFromStaticMeshComponent(class UStaticMeshComponent* StaticMeshComponent, int32 LODIndex, class UProceduralMeshComponent* ProcMeshComponent, bool bCreateCollision);
	static void CreateGridMeshSplit(int32 NumX, int32 NumY, TArray<int32>* Triangles, TArray<struct FVector>* Vertices, TArray<struct FVector2D>* UVs, TArray<struct FVector2D>* UV1s, float GridSpacing);
	static void CreateGridMeshTriangles(int32 NumX, int32 NumY, bool bWinding, TArray<int32>* Triangles);
	static void CreateGridMeshWelded(int32 NumX, int32 NumY, TArray<int32>* Triangles, TArray<struct FVector>* Vertices, TArray<struct FVector2D>* UVs, float GridSpacing);
	static void GenerateBoxMesh(const struct FVector& BoxRadius, TArray<struct FVector>* Vertices, TArray<int32>* Triangles, TArray<struct FVector>* Normals, TArray<struct FVector2D>* UVs, TArray<struct FProcMeshTangent>* Tangents);
	static void GetSectionFromProceduralMesh(class UProceduralMeshComponent* InProcMesh, int32 SectionIndex, TArray<struct FVector>* Vertices, TArray<int32>* Triangles, TArray<struct FVector>* Normals, TArray<struct FVector2D>* UVs, TArray<struct FProcMeshTangent>* Tangents);
	static void GetSectionFromStaticMesh(class UStaticMesh* InMesh, int32 LODIndex, int32 SectionIndex, TArray<struct FVector>* Vertices, TArray<int32>* Triangles, TArray<struct FVector>* Normals, TArray<struct FVector2D>* UVs, TArray<struct FProcMeshTangent>* Tangents);
	static void SliceProceduralMesh(class UProceduralMeshComponent* InProcMesh, const struct FVector& PlanePosition, const struct FVector& PlaneNormal, bool bCreateOtherHalf, class UProceduralMeshComponent** OutOtherHalfProcMesh, EProcMeshSliceCapOption CapOption, class UMaterialInterface* CapMaterial);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"KismetProceduralMeshLibrary">();
	}
	static class UKismetProceduralMeshLibrary* GetDefaultObj()
	{
		return GetDefaultObjImpl<UKismetProceduralMeshLibrary>();
	}
};

// Class ProceduralMeshComponent.ProceduralMeshComponent
// 0x0070 (0x0610 - 0x05A0)
class UProceduralMeshComponent final : public UMeshComponent
{
public:
	uint8                                         Pad_1179[0x8];                                     // 0x05A0(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	bool                                          bUseComplexAsSimpleCollision;                      // 0x05A8(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bUseAsyncCooking;                                  // 0x05A9(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_117A[0x6];                                     // 0x05AA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UBodySetup*                             ProcMeshBodySetup;                                 // 0x05B0(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FProcMeshSection>               ProcMeshSections;                                  // 0x05B8(0x0010)(ZeroConstructor, NativeAccessSpecifierPrivate)
	TArray<struct FKConvexElem>                   CollisionConvexElems;                              // 0x05C8(0x0010)(ZeroConstructor, NativeAccessSpecifierPrivate)
	struct FBoxSphereBounds                       LocalBounds;                                       // 0x05D8(0x001C)(ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPrivate)
	uint8                                         Pad_117B[0x4];                                     // 0x05F4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UBodySetup*>                     AsyncBodySetupQueue;                               // 0x05F8(0x0010)(ZeroConstructor, Transient, NativeAccessSpecifierPrivate)
	uint8                                         Pad_117C[0x8];                                     // 0x0608(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void AddCollisionConvexMesh(const TArray<struct FVector>& ConvexVerts);
	void ClearAllMeshSections();
	void ClearCollisionConvexMeshes();
	void ClearMeshSection(int32 SectionIndex);
	void CreateMeshSection(int32 SectionIndex, const TArray<struct FVector>& Vertices, const TArray<int32>& Triangles, const TArray<struct FVector>& Normals, const TArray<struct FVector2D>& UV0, const TArray<struct FColor>& VertexColors, const TArray<struct FProcMeshTangent>& Tangents, bool bCreateCollision);
	void CreateMeshSection_LinearColor(int32 SectionIndex, const TArray<struct FVector>& Vertices, const TArray<int32>& Triangles, const TArray<struct FVector>& Normals, const TArray<struct FVector2D>& UV0, const TArray<struct FVector2D>& UV1, const TArray<struct FVector2D>& UV2, const TArray<struct FVector2D>& UV3, const TArray<struct FLinearColor>& VertexColors, const TArray<struct FProcMeshTangent>& Tangents, bool bCreateCollision);
	void SetMeshSectionVisible(int32 SectionIndex, bool bNewVisibility);
	void UpdateMeshSection(int32 SectionIndex, const TArray<struct FVector>& Vertices, const TArray<struct FVector>& Normals, const TArray<struct FVector2D>& UV0, const TArray<struct FColor>& VertexColors, const TArray<struct FProcMeshTangent>& Tangents);
	void UpdateMeshSection_LinearColor(int32 SectionIndex, const TArray<struct FVector>& Vertices, const TArray<struct FVector>& Normals, const TArray<struct FVector2D>& UV0, const TArray<struct FVector2D>& UV1, const TArray<struct FVector2D>& UV2, const TArray<struct FVector2D>& UV3, const TArray<struct FLinearColor>& VertexColors, const TArray<struct FProcMeshTangent>& Tangents);

	int32 GetNumSections() const;
	bool IsMeshSectionVisible(int32 SectionIndex) const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ProceduralMeshComponent">();
	}
	static class UProceduralMeshComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UProceduralMeshComponent>();
	}
};

}

