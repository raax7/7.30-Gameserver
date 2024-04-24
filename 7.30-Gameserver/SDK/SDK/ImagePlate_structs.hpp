#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ImagePlate

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "MovieScene_structs.hpp"


namespace SDK
{

// ScriptStruct ImagePlate.MovieSceneImagePlateSectionParams
// 0x0018 (0x0018 - 0x0000)
struct FMovieSceneImagePlateSectionParams final
{
public:
	struct FFrameNumber                           SectionStartTime;                                  // 0x0000(0x0004)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1040[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UImagePlateFileSequence*                FileSequence;                                      // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bReuseExistingTexture;                             // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1041[0x7];                                     // 0x0011(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// ScriptStruct ImagePlate.MovieSceneImagePlateSectionTemplate
// 0x0040 (0x0060 - 0x0020)
struct FMovieSceneImagePlateSectionTemplate final : public FMovieSceneEvalTemplate
{
public:
	struct FMovieScenePropertySectionData         PropertyData;                                      // 0x0020(0x0028)(NativeAccessSpecifierPrivate)
	struct FMovieSceneImagePlateSectionParams     Params;                                            // 0x0048(0x0018)(NoDestructor, NativeAccessSpecifierPrivate)
};

// ScriptStruct ImagePlate.ImagePlateParameters
// 0x0038 (0x0038 - 0x0000)
struct FImagePlateParameters final
{
public:
	class UMaterialInterface*                     Material;                                          // 0x0000(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                   TextureParameterName;                              // 0x0008(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bFillScreen;                                       // 0x0010(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1042[0x3];                                     // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector2D                              FillScreenAmount;                                  // 0x0014(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                              FixedSize;                                         // 0x001C(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1043[0x4];                                     // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UTexture*                               RenderTexture;                                     // 0x0028(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInstanceDynamic*               DynamicMaterial;                                   // 0x0030(0x0008)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}

