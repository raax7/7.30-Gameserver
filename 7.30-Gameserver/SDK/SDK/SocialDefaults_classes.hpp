#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SocialDefaults

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "SocialTypes_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// Class SocialDefaults.ChatColorSchemeDataAsset
// 0x0120 (0x0150 - 0x0030)
class UChatColorSchemeDataAsset final : public UDataAsset
{
public:
	struct FChatColorScheme                       ChatColorData;                                     // 0x0030(0x0120)(Edit, NoDestructor, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ChatColorSchemeDataAsset">();
	}
	static class UChatColorSchemeDataAsset* GetDefaultObj()
	{
		return GetDefaultObjImpl<UChatColorSchemeDataAsset>();
	}
};

// Class SocialDefaults.SocialActionButtonStyleDataAsset
// 0x0278 (0x02A8 - 0x0030)
class USocialActionButtonStyleDataAsset final : public UDataAsset
{
public:
	struct FButtonStyle                           Style;                                             // 0x0030(0x0278)(Edit, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SocialActionButtonStyleDataAsset">();
	}
	static class USocialActionButtonStyleDataAsset* GetDefaultObj()
	{
		return GetDefaultObjImpl<USocialActionButtonStyleDataAsset>();
	}
};

// Class SocialDefaults.SocialChatChromeColorSchemeDataAsset
// 0x0050 (0x0080 - 0x0030)
class USocialChatChromeColorSchemeDataAsset final : public UDataAsset
{
public:
	struct FChatChromeColorScheme                 Style;                                             // 0x0030(0x0050)(Edit, NoDestructor, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SocialChatChromeColorSchemeDataAsset">();
	}
	static class USocialChatChromeColorSchemeDataAsset* GetDefaultObj()
	{
		return GetDefaultObjImpl<USocialChatChromeColorSchemeDataAsset>();
	}
};

// Class SocialDefaults.SocialChatChromeMarginsDataAsset
// 0x0068 (0x0098 - 0x0030)
class USocialChatChromeMarginsDataAsset final : public UDataAsset
{
public:
	struct FChatChromeMargins                     Style;                                             // 0x0030(0x0064)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_28D5[0x4];                                     // 0x0094(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SocialChatChromeMarginsDataAsset">();
	}
	static class USocialChatChromeMarginsDataAsset* GetDefaultObj()
	{
		return GetDefaultObjImpl<USocialChatChromeMarginsDataAsset>();
	}
};

// Class SocialDefaults.SocialChatChromeStyleDataAsset
// 0x07C8 (0x07F8 - 0x0030)
class USocialChatChromeStyleDataAsset final : public UDataAsset
{
public:
	struct FChatChromeStyle                       Style;                                             // 0x0030(0x07C8)(Edit, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SocialChatChromeStyleDataAsset">();
	}
	static class USocialChatChromeStyleDataAsset* GetDefaultObj()
	{
		return GetDefaultObjImpl<USocialChatChromeStyleDataAsset>();
	}
};

// Class SocialDefaults.SocialChatMarkupStyleDataAsset
// 0x0690 (0x06C0 - 0x0030)
class USocialChatMarkupStyleDataAsset final : public UDataAsset
{
public:
	struct FChatMarkupStyle                       Style;                                             // 0x0030(0x0690)(Edit, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SocialChatMarkupStyleDataAsset">();
	}
	static class USocialChatMarkupStyleDataAsset* GetDefaultObj()
	{
		return GetDefaultObjImpl<USocialChatMarkupStyleDataAsset>();
	}
};

// Class SocialDefaults.SocialChatStyleDataAsset
// 0x1360 (0x1390 - 0x0030)
class USocialChatStyleDataAsset final : public UDataAsset
{
public:
	struct FChatStyle                             Style;                                             // 0x0030(0x1360)(Edit, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SocialChatStyleDataAsset">();
	}
	static class USocialChatStyleDataAsset* GetDefaultObj()
	{
		return GetDefaultObjImpl<USocialChatStyleDataAsset>();
	}
};

// Class SocialDefaults.SocialCheckBoxStyleDataAsset
// 0x0580 (0x05B0 - 0x0030)
class USocialCheckBoxStyleDataAsset final : public UDataAsset
{
public:
	struct FCheckBoxStyle                         Style;                                             // 0x0030(0x0580)(Edit, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SocialCheckBoxStyleDataAsset">();
	}
	static class USocialCheckBoxStyleDataAsset* GetDefaultObj()
	{
		return GetDefaultObjImpl<USocialCheckBoxStyleDataAsset>();
	}
};

// Class SocialDefaults.SocialFontStyleDataAsset
// 0x0210 (0x0240 - 0x0030)
class USocialFontStyleDataAsset final : public UDataAsset
{
public:
	struct FSocialFontStyle                       Style;                                             // 0x0030(0x0210)(Edit, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SocialFontStyleDataAsset">();
	}
	static class USocialFontStyleDataAsset* GetDefaultObj()
	{
		return GetDefaultObjImpl<USocialFontStyleDataAsset>();
	}
};

// Class SocialDefaults.SocialListMarginsDataAsset
// 0x0200 (0x0230 - 0x0030)
class USocialListMarginsDataAsset final : public UDataAsset
{
public:
	struct FSocialListMargins                     Style;                                             // 0x0030(0x0200)(Edit, NoDestructor, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SocialListMarginsDataAsset">();
	}
	static class USocialListMarginsDataAsset* GetDefaultObj()
	{
		return GetDefaultObjImpl<USocialListMarginsDataAsset>();
	}
};

// Class SocialDefaults.SocialListStyleDataAsset
// 0x26F8 (0x2728 - 0x0030)
class USocialListStyleDataAsset final : public UDataAsset
{
public:
	struct FSocialListStyle                       Style;                                             // 0x0030(0x26F8)(Edit, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SocialListStyleDataAsset">();
	}
	static class USocialListStyleDataAsset* GetDefaultObj()
	{
		return GetDefaultObjImpl<USocialListStyleDataAsset>();
	}
};

// Class SocialDefaults.SocialProfanityDataAsset
// 0x0010 (0x0040 - 0x0030)
class USocialProfanityDataAsset final : public UDataAsset
{
public:
	TArray<struct FProfanityData>                 ProfanityData;                                     // 0x0030(0x0010)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SocialProfanityDataAsset">();
	}
	static class USocialProfanityDataAsset* GetDefaultObj()
	{
		return GetDefaultObjImpl<USocialProfanityDataAsset>();
	}
};

// Class SocialDefaults.SocialRadioBoxStyleDataAsset
// 0x0580 (0x05B0 - 0x0030)
class USocialRadioBoxStyleDataAsset final : public UDataAsset
{
public:
	struct FCheckBoxStyle                         Style;                                             // 0x0030(0x0580)(Edit, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SocialRadioBoxStyleDataAsset">();
	}
	static class USocialRadioBoxStyleDataAsset* GetDefaultObj()
	{
		return GetDefaultObjImpl<USocialRadioBoxStyleDataAsset>();
	}
};

// Class SocialDefaults.SocialScrollBarStyleDataAsset
// 0x04D0 (0x0500 - 0x0030)
class USocialScrollBarStyleDataAsset final : public UDataAsset
{
public:
	struct FScrollBarStyle                        Style;                                             // 0x0030(0x04D0)(Edit, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SocialScrollBarStyleDataAsset">();
	}
	static class USocialScrollBarStyleDataAsset* GetDefaultObj()
	{
		return GetDefaultObjImpl<USocialScrollBarStyleDataAsset>();
	}
};

// Class SocialDefaults.SocialSoundSchemaDataAsset
// 0x0048 (0x0078 - 0x0030)
class USocialSoundSchemaDataAsset final : public UDataAsset
{
public:
	struct FSocialSoundSchema                     SoundSchema;                                       // 0x0030(0x0048)(Edit, NoDestructor, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SocialSoundSchemaDataAsset">();
	}
	static class USocialSoundSchemaDataAsset* GetDefaultObj()
	{
		return GetDefaultObjImpl<USocialSoundSchemaDataAsset>();
	}
};

// Class SocialDefaults.SocialStyleDataAsset
// 0x67E8 (0x6818 - 0x0030)
class USocialStyleDataAsset final : public UDataAsset
{
public:
	class USocialFontStyleDataAsset*              SmallFontStyle;                                    // 0x0030(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USocialFontStyleDataAsset*              NormalFontStyle;                                   // 0x0038(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USocialFontStyleDataAsset*              LargeFontStyle;                                    // 0x0040(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USocialFontStyleDataAsset*              ChatFontStyle;                                     // 0x0048(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USocialListStyleDataAsset*              SocialListStyle;                                   // 0x0050(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USocialListMarginsDataAsset*            SocialListMargins;                                 // 0x0058(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USocialChatStyleDataAsset*              ChatStyle;                                         // 0x0060(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USocialChatChromeStyleDataAsset*        ChatChromeStyle;                                   // 0x0068(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USocialChatChromeMarginsDataAsset*      ChatChromeMargins;                                 // 0x0070(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USocialChatChromeColorSchemeDataAsset*  ChatChromeColorScheme;                             // 0x0078(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UChatColorSchemeDataAsset*              ChatColorScheme;                                   // 0x0080(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USocialSoundSchemaDataAsset*            SoundSchema;                                       // 0x0088(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USocialActionButtonStyleDataAsset*      ActionButtonStyle;                                 // 0x0090(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USocialCheckBoxStyleDataAsset*          CheckBoxStyle;                                     // 0x0098(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USocialRadioBoxStyleDataAsset*          RadioBoxStyle;                                     // 0x00A0(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USocialScrollBarStyleDataAsset*         ScrollBoxStyle;                                    // 0x00A8(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USocialChatMarkupStyleDataAsset*        MarkupStyle;                                       // 0x00B0(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USocialProfanityDataAsset*              ProfanityDataAsset;                                // 0x00B8(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_28D6[0x6758];                                  // 0x00C0(0x6758)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SocialStyleDataAsset">();
	}
	static class USocialStyleDataAsset* GetDefaultObj()
	{
		return GetDefaultObjImpl<USocialStyleDataAsset>();
	}
};

}

