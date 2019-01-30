#import <TargetConditionals.h> // Modified by PostBuild.cs
#if TARGET_OS_SIMULATOR // Modified by PostBuild.cs
#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>
#include <stdint.h>

#include "il2cpp-class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"


// System.Action`1<System.Boolean>
struct Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD;
// System.Action`1<System.String>
struct Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0;
// System.Action`1<UnityEngine.AsyncOperation>
struct Action_1_tCBF754C290FAE894631BED8FD56E9E22C4C187F9;
// System.Action`1<UnityEngine.Camera>
struct Action_1_t6D83B4F361CDBC0D6B559F8DA3A9646E2ED9561C;
// System.Action`1<UnityEngine.Playables.PlayableDirector>
struct Action_1_t25E50453F931760A3FC110C4EC79B73BBC203021;
// System.Action`1<UnityEngineInternal.Input.NativeInputUpdateType>
struct Action_1_tA0A72999A108CE29CD4CB14537B8FE41501859C1;
// System.Action`2<System.Boolean,System.String>
struct Action_2_tC679CE201889334CCB7E9B60CBBA75C1611AE4E2;
// System.Action`2<System.Int32,System.String>
struct Action_2_t3DE7FA14577DE01568F76D409273F315827CAA36;
// System.Action`3<UnityEngineInternal.Input.NativeInputUpdateType,System.Int32,System.IntPtr>
struct Action_3_t218EFA183BDE39E1AC9A0240E98B4BFC33A703D4;
// System.AsyncCallback
struct AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4;
// System.Char[]
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2;
// System.Collections.Generic.Dictionary`2/Entry<System.Int32,UnityEngine.Experimental.TerrainAPI.TerrainUtility/TerrainMap>[]
struct EntryU5BU5D_t60C83E552A9B7713913AA260DDAA0AFF0A75765F;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,UnityEngine.Experimental.TerrainAPI.TerrainUtility/TerrainMap>
struct KeyCollection_t542DBD0562DA7AC8F172BD71C05844EFAD576100;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,UnityEngine.Experimental.TerrainAPI.TerrainUtility/TerrainMap>
struct ValueCollection_t60741DBA4647D7259ECB16D50D6AC4FEE46A5B88;
// System.Collections.Generic.Dictionary`2<UnityEngine.Experimental.TerrainAPI.TerrainUtility/TerrainMap/TileCoord,UnityEngine.Terrain>
struct Dictionary_2_tEB34CAE1B4D0E725777A5B9D419AF51BE918C30C;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_t7B82AA0F8B96BAAA21E36DDF7A1FE4348BDDBE95;
// System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>
struct List_1_t34542C6C883A3FAA3E3C444443435BE548121E21;
// System.Collections.Generic.List`1<UnityEngine.Yoga.YogaNode>
struct List_1_tC208E7A364FF0C3FDC57107BD002A16939F7EE92;
// System.DelegateData
struct DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE;
// System.Delegate[]
struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86;
// System.IAsyncResult
struct IAsyncResult_t8E194308510B375B42432981AE5E7488C458D598;
// System.Int32[]
struct Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E;
// System.Text.RegularExpressions.Regex
struct Regex_tFD46E63A462E852189FD6AB4E2B0B67C4D8FDBDF;
// System.Void
struct Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017;
// UnityEngine.AnimationState
struct AnimationState_t48FF4D41FEF3492F8286100BE3758CE3A4656386;
// UnityEngine.AnimatorOverrideController/OnOverrideControllerDirtyCallback
struct OnOverrideControllerDirtyCallback_t73560E6E30067C09BC58A15F9D2726051B077E2E;
// UnityEngine.Canvas/WillRenderCanvases
struct WillRenderCanvases_tBD5AD090B5938021DEAA679A5AEEA790F60A8BEE;
// UnityEngine.Experimental.TerrainAPI.TerrainUtility/<CollectTerrains>c__AnonStorey1
struct U3CCollectTerrainsU3Ec__AnonStorey1_t41DA2A02D290EE5FEF14389A4391CBC1E3E622A5;
// UnityEngine.GameObject
struct GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F;
// UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0;
// UnityEngine.SocialPlatforms.IScore
struct IScore_t8EC2280EF29BB961820B7DF6D14E28EEE6CCF315;
// UnityEngine.SocialPlatforms.IScore[]
struct IScoreU5BU5D_t64BCFED7B59BE0D35420A0A92BEC5140C035952C;
// UnityEngine.SocialPlatforms.IUserProfile[]
struct IUserProfileU5BU5D_tBE2EEBD677C2C607E3F86B6ABF3F164B72E570B0;
// UnityEngine.SocialPlatforms.Impl.AchievementDescription[]
struct AchievementDescriptionU5BU5D_t2E09F4A316E4A9274CF8B7BF231DE9AEBE02F062;
// UnityEngine.SocialPlatforms.Impl.Leaderboard
struct Leaderboard_t01480B36811BC84DF398C8A847972B62F5E2E4FE;
// UnityEngine.SocialPlatforms.Impl.LocalUser
struct LocalUser_tBBCEEB55B6F28DFA7F4677E9273622A34CABB135;
// UnityEngine.SocialPlatforms.Impl.UserProfile[]
struct UserProfileU5BU5D_t74EE7690744D8F99BA578ACE0CC65C45837F522F;
// UnityEngine.Sprite
struct Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198;
// UnityEngine.Sprite[]
struct SpriteU5BU5D_tF94AD07E062BC08ECD019A21E7A7B861654905F7;
// UnityEngine.Terrain
struct Terrain_t0BF7371FA90643325F50A87C7894D7BEBBE08943;
// UnityEngine.Texture2D
struct Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C;
// UnityEngine.Tilemaps.Tilemap
struct Tilemap_t0F92148668211805A631B93488D4A629EC378B10;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28;
// UnityEngine.Yoga.BaselineFunction
struct BaselineFunction_t0A87479762FB382A84709009E9B6DCC597C6C9DF;
// UnityEngine.Yoga.MeasureFunction
struct MeasureFunction_tC5585E81380F4017044CE57AE21E178BAE2607AB;
// UnityEngine.Yoga.YogaNode
struct YogaNode_tFCB801A447DAC7A335C686ABC5941A4357102A2C;

struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_com;



#ifndef U3CMODULEU3E_T091C966E943CA3E1F5D551C43C6FE64881C5BB24_H
#define U3CMODULEU3E_T091C966E943CA3E1F5D551C43C6FE64881C5BB24_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t091C966E943CA3E1F5D551C43C6FE64881C5BB24 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CMODULEU3E_T091C966E943CA3E1F5D551C43C6FE64881C5BB24_H
#ifndef U3CMODULEU3E_T188571242096CC1D2BEFEA0CA619B862EF745D19_H
#define U3CMODULEU3E_T188571242096CC1D2BEFEA0CA619B862EF745D19_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t188571242096CC1D2BEFEA0CA619B862EF745D19 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CMODULEU3E_T188571242096CC1D2BEFEA0CA619B862EF745D19_H
#ifndef U3CMODULEU3E_TF1895192DB0786D7B32E637E7538ADA625D10FB5_H
#define U3CMODULEU3E_TF1895192DB0786D7B32E637E7538ADA625D10FB5_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_tF1895192DB0786D7B32E637E7538ADA625D10FB5 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CMODULEU3E_TF1895192DB0786D7B32E637E7538ADA625D10FB5_H
#ifndef U3CMODULEU3E_T5AF943BF708588C1841CAB8BCD8AC614C6E8F142_H
#define U3CMODULEU3E_T5AF943BF708588C1841CAB8BCD8AC614C6E8F142_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t5AF943BF708588C1841CAB8BCD8AC614C6E8F142 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CMODULEU3E_T5AF943BF708588C1841CAB8BCD8AC614C6E8F142_H
#ifndef U3CMODULEU3E_TAA355D8AE5C7E9492E77ED0BEF24E3CD28D275D9_H
#define U3CMODULEU3E_TAA355D8AE5C7E9492E77ED0BEF24E3CD28D275D9_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_tAA355D8AE5C7E9492E77ED0BEF24E3CD28D275D9 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CMODULEU3E_TAA355D8AE5C7E9492E77ED0BEF24E3CD28D275D9_H
#ifndef U3CMODULEU3E_T304FD43409445C967EFB33BCD33189C66F66BB72_H
#define U3CMODULEU3E_T304FD43409445C967EFB33BCD33189C66F66BB72_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t304FD43409445C967EFB33BCD33189C66F66BB72 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CMODULEU3E_T304FD43409445C967EFB33BCD33189C66F66BB72_H
#ifndef U3CMODULEU3E_TB054F17A779AC945E3659AF119A96DB806541AF9_H
#define U3CMODULEU3E_TB054F17A779AC945E3659AF119A96DB806541AF9_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_tB054F17A779AC945E3659AF119A96DB806541AF9 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CMODULEU3E_TB054F17A779AC945E3659AF119A96DB806541AF9_H
#ifndef U3CMODULEU3E_TF8A948C14EE892A95D0E0992A0BE6B176FF2DA1D_H
#define U3CMODULEU3E_TF8A948C14EE892A95D0E0992A0BE6B176FF2DA1D_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_tF8A948C14EE892A95D0E0992A0BE6B176FF2DA1D 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CMODULEU3E_TF8A948C14EE892A95D0E0992A0BE6B176FF2DA1D_H
#ifndef U3CMODULEU3E_TAF0352AF459FC6ADDA335387111E96B1480224D6_H
#define U3CMODULEU3E_TAF0352AF459FC6ADDA335387111E96B1480224D6_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_tAF0352AF459FC6ADDA335387111E96B1480224D6 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CMODULEU3E_TAF0352AF459FC6ADDA335387111E96B1480224D6_H
#ifndef U3CMODULEU3E_T140A63E1069F1772D5238396CDA7CE5372253E44_H
#define U3CMODULEU3E_T140A63E1069F1772D5238396CDA7CE5372253E44_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t140A63E1069F1772D5238396CDA7CE5372253E44 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CMODULEU3E_T140A63E1069F1772D5238396CDA7CE5372253E44_H
#ifndef U3CMODULEU3E_T2FBFFC67F8D6B1FA13284515F9BBD8C9333B5C86_H
#define U3CMODULEU3E_T2FBFFC67F8D6B1FA13284515F9BBD8C9333B5C86_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t2FBFFC67F8D6B1FA13284515F9BBD8C9333B5C86 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CMODULEU3E_T2FBFFC67F8D6B1FA13284515F9BBD8C9333B5C86_H
#ifndef U3CMODULEU3E_T79D7DE725655CFC1B063EA359E8D75692CF5DC2F_H
#define U3CMODULEU3E_T79D7DE725655CFC1B063EA359E8D75692CF5DC2F_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t79D7DE725655CFC1B063EA359E8D75692CF5DC2F 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CMODULEU3E_T79D7DE725655CFC1B063EA359E8D75692CF5DC2F_H
#ifndef RUNTIMEOBJECT_H
#define RUNTIMEOBJECT_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEOBJECT_H
#ifndef DICTIONARY_2_T651CE851D569289A981D44DC5543BEA956206753_H
#define DICTIONARY_2_T651CE851D569289A981D44DC5543BEA956206753_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Experimental.TerrainAPI.TerrainUtility/TerrainMap>
struct  Dictionary_2_t651CE851D569289A981D44DC5543BEA956206753  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t60C83E552A9B7713913AA260DDAA0AFF0A75765F* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_t542DBD0562DA7AC8F172BD71C05844EFAD576100 * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t60741DBA4647D7259ECB16D50D6AC4FEE46A5B88 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t651CE851D569289A981D44DC5543BEA956206753, ___buckets_0)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((&___buckets_0), value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t651CE851D569289A981D44DC5543BEA956206753, ___entries_1)); }
	inline EntryU5BU5D_t60C83E552A9B7713913AA260DDAA0AFF0A75765F* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t60C83E552A9B7713913AA260DDAA0AFF0A75765F** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t60C83E552A9B7713913AA260DDAA0AFF0A75765F* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((&___entries_1), value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t651CE851D569289A981D44DC5543BEA956206753, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t651CE851D569289A981D44DC5543BEA956206753, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t651CE851D569289A981D44DC5543BEA956206753, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t651CE851D569289A981D44DC5543BEA956206753, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t651CE851D569289A981D44DC5543BEA956206753, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((&___comparer_6), value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t651CE851D569289A981D44DC5543BEA956206753, ___keys_7)); }
	inline KeyCollection_t542DBD0562DA7AC8F172BD71C05844EFAD576100 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t542DBD0562DA7AC8F172BD71C05844EFAD576100 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t542DBD0562DA7AC8F172BD71C05844EFAD576100 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((&___keys_7), value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t651CE851D569289A981D44DC5543BEA956206753, ___values_8)); }
	inline ValueCollection_t60741DBA4647D7259ECB16D50D6AC4FEE46A5B88 * get_values_8() const { return ___values_8; }
	inline ValueCollection_t60741DBA4647D7259ECB16D50D6AC4FEE46A5B88 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t60741DBA4647D7259ECB16D50D6AC4FEE46A5B88 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((&___values_8), value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t651CE851D569289A981D44DC5543BEA956206753, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((&____syncRoot_9), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DICTIONARY_2_T651CE851D569289A981D44DC5543BEA956206753_H
#ifndef VALUETYPE_T4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_H
#define VALUETYPE_T4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_com
{
};
#endif // VALUETYPE_T4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_H
#ifndef TERRAINUTILITY_T82C295A06EAAEA3D755971EBE55084B993C7FC7B_H
#define TERRAINUTILITY_T82C295A06EAAEA3D755971EBE55084B993C7FC7B_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.TerrainAPI.TerrainUtility
struct  TerrainUtility_t82C295A06EAAEA3D755971EBE55084B993C7FC7B  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TERRAINUTILITY_T82C295A06EAAEA3D755971EBE55084B993C7FC7B_H
#ifndef U3CCOLLECTTERRAINSU3EC__ANONSTOREY0_T4BCCA12171A915F3BCE4B2B0F9A4EBD484BC78CA_H
#define U3CCOLLECTTERRAINSU3EC__ANONSTOREY0_T4BCCA12171A915F3BCE4B2B0F9A4EBD484BC78CA_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.TerrainAPI.TerrainUtility/<CollectTerrains>c__AnonStorey0
struct  U3CCollectTerrainsU3Ec__AnonStorey0_t4BCCA12171A915F3BCE4B2B0F9A4EBD484BC78CA  : public RuntimeObject
{
public:
	// UnityEngine.Terrain UnityEngine.Experimental.TerrainAPI.TerrainUtility/<CollectTerrains>c__AnonStorey0::t
	Terrain_t0BF7371FA90643325F50A87C7894D7BEBBE08943 * ___t_0;
	// UnityEngine.Experimental.TerrainAPI.TerrainUtility/<CollectTerrains>c__AnonStorey1 UnityEngine.Experimental.TerrainAPI.TerrainUtility/<CollectTerrains>c__AnonStorey0::<>f__ref$1
	U3CCollectTerrainsU3Ec__AnonStorey1_t41DA2A02D290EE5FEF14389A4391CBC1E3E622A5 * ___U3CU3Ef__refU241_1;

public:
	inline static int32_t get_offset_of_t_0() { return static_cast<int32_t>(offsetof(U3CCollectTerrainsU3Ec__AnonStorey0_t4BCCA12171A915F3BCE4B2B0F9A4EBD484BC78CA, ___t_0)); }
	inline Terrain_t0BF7371FA90643325F50A87C7894D7BEBBE08943 * get_t_0() const { return ___t_0; }
	inline Terrain_t0BF7371FA90643325F50A87C7894D7BEBBE08943 ** get_address_of_t_0() { return &___t_0; }
	inline void set_t_0(Terrain_t0BF7371FA90643325F50A87C7894D7BEBBE08943 * value)
	{
		___t_0 = value;
		Il2CppCodeGenWriteBarrier((&___t_0), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__refU241_1() { return static_cast<int32_t>(offsetof(U3CCollectTerrainsU3Ec__AnonStorey0_t4BCCA12171A915F3BCE4B2B0F9A4EBD484BC78CA, ___U3CU3Ef__refU241_1)); }
	inline U3CCollectTerrainsU3Ec__AnonStorey1_t41DA2A02D290EE5FEF14389A4391CBC1E3E622A5 * get_U3CU3Ef__refU241_1() const { return ___U3CU3Ef__refU241_1; }
	inline U3CCollectTerrainsU3Ec__AnonStorey1_t41DA2A02D290EE5FEF14389A4391CBC1E3E622A5 ** get_address_of_U3CU3Ef__refU241_1() { return &___U3CU3Ef__refU241_1; }
	inline void set_U3CU3Ef__refU241_1(U3CCollectTerrainsU3Ec__AnonStorey1_t41DA2A02D290EE5FEF14389A4391CBC1E3E622A5 * value)
	{
		___U3CU3Ef__refU241_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__refU241_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CCOLLECTTERRAINSU3EC__ANONSTOREY0_T4BCCA12171A915F3BCE4B2B0F9A4EBD484BC78CA_H
#ifndef U3CCOLLECTTERRAINSU3EC__ANONSTOREY1_T41DA2A02D290EE5FEF14389A4391CBC1E3E622A5_H
#define U3CCOLLECTTERRAINSU3EC__ANONSTOREY1_T41DA2A02D290EE5FEF14389A4391CBC1E3E622A5_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.TerrainAPI.TerrainUtility/<CollectTerrains>c__AnonStorey1
struct  U3CCollectTerrainsU3Ec__AnonStorey1_t41DA2A02D290EE5FEF14389A4391CBC1E3E622A5  : public RuntimeObject
{
public:
	// System.Boolean UnityEngine.Experimental.TerrainAPI.TerrainUtility/<CollectTerrains>c__AnonStorey1::onlyAutoConnectedTerrains
	bool ___onlyAutoConnectedTerrains_0;

public:
	inline static int32_t get_offset_of_onlyAutoConnectedTerrains_0() { return static_cast<int32_t>(offsetof(U3CCollectTerrainsU3Ec__AnonStorey1_t41DA2A02D290EE5FEF14389A4391CBC1E3E622A5, ___onlyAutoConnectedTerrains_0)); }
	inline bool get_onlyAutoConnectedTerrains_0() const { return ___onlyAutoConnectedTerrains_0; }
	inline bool* get_address_of_onlyAutoConnectedTerrains_0() { return &___onlyAutoConnectedTerrains_0; }
	inline void set_onlyAutoConnectedTerrains_0(bool value)
	{
		___onlyAutoConnectedTerrains_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CCOLLECTTERRAINSU3EC__ANONSTOREY1_T41DA2A02D290EE5FEF14389A4391CBC1E3E622A5_H
#ifndef U3CCREATEFROMPLACEMENTU3EC__ANONSTOREY0_T785BD4BDC25E101807FE78EE2D72D5954E42248C_H
#define U3CCREATEFROMPLACEMENTU3EC__ANONSTOREY0_T785BD4BDC25E101807FE78EE2D72D5954E42248C_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.TerrainAPI.TerrainUtility/TerrainMap/<CreateFromPlacement>c__AnonStorey0
struct  U3CCreateFromPlacementU3Ec__AnonStorey0_t785BD4BDC25E101807FE78EE2D72D5954E42248C  : public RuntimeObject
{
public:
	// System.Int32 UnityEngine.Experimental.TerrainAPI.TerrainUtility/TerrainMap/<CreateFromPlacement>c__AnonStorey0::groupID
	int32_t ___groupID_0;

public:
	inline static int32_t get_offset_of_groupID_0() { return static_cast<int32_t>(offsetof(U3CCreateFromPlacementU3Ec__AnonStorey0_t785BD4BDC25E101807FE78EE2D72D5954E42248C, ___groupID_0)); }
	inline int32_t get_groupID_0() const { return ___groupID_0; }
	inline int32_t* get_address_of_groupID_0() { return &___groupID_0; }
	inline void set_groupID_0(int32_t value)
	{
		___groupID_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CCREATEFROMPLACEMENTU3EC__ANONSTOREY0_T785BD4BDC25E101807FE78EE2D72D5954E42248C_H
#ifndef VFXMANAGER_TDE794F20EA719507EADF091F8042A8B097F1E8E5_H
#define VFXMANAGER_TDE794F20EA719507EADF091F8042A8B097F1E8E5_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.VFX.VFXManager
struct  VFXManager_tDE794F20EA719507EADF091F8042A8B097F1E8E5  : public RuntimeObject
{
public:

public:
};

struct VFXManager_tDE794F20EA719507EADF091F8042A8B097F1E8E5_StaticFields
{
public:
	// System.Action`1<UnityEngine.Camera> UnityEngine.Experimental.VFX.VFXManager::<>f__mg$cache0
	Action_1_t6D83B4F361CDBC0D6B559F8DA3A9646E2ED9561C * ___U3CU3Ef__mgU24cache0_0;
	// System.Action`1<UnityEngine.Camera> UnityEngine.Experimental.VFX.VFXManager::<>f__mg$cache1
	Action_1_t6D83B4F361CDBC0D6B559F8DA3A9646E2ED9561C * ___U3CU3Ef__mgU24cache1_1;

public:
	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache0_0() { return static_cast<int32_t>(offsetof(VFXManager_tDE794F20EA719507EADF091F8042A8B097F1E8E5_StaticFields, ___U3CU3Ef__mgU24cache0_0)); }
	inline Action_1_t6D83B4F361CDBC0D6B559F8DA3A9646E2ED9561C * get_U3CU3Ef__mgU24cache0_0() const { return ___U3CU3Ef__mgU24cache0_0; }
	inline Action_1_t6D83B4F361CDBC0D6B559F8DA3A9646E2ED9561C ** get_address_of_U3CU3Ef__mgU24cache0_0() { return &___U3CU3Ef__mgU24cache0_0; }
	inline void set_U3CU3Ef__mgU24cache0_0(Action_1_t6D83B4F361CDBC0D6B559F8DA3A9646E2ED9561C * value)
	{
		___U3CU3Ef__mgU24cache0_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache0_0), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache1_1() { return static_cast<int32_t>(offsetof(VFXManager_tDE794F20EA719507EADF091F8042A8B097F1E8E5_StaticFields, ___U3CU3Ef__mgU24cache1_1)); }
	inline Action_1_t6D83B4F361CDBC0D6B559F8DA3A9646E2ED9561C * get_U3CU3Ef__mgU24cache1_1() const { return ___U3CU3Ef__mgU24cache1_1; }
	inline Action_1_t6D83B4F361CDBC0D6B559F8DA3A9646E2ED9561C ** get_address_of_U3CU3Ef__mgU24cache1_1() { return &___U3CU3Ef__mgU24cache1_1; }
	inline void set_U3CU3Ef__mgU24cache1_1(Action_1_t6D83B4F361CDBC0D6B559F8DA3A9646E2ED9561C * value)
	{
		___U3CU3Ef__mgU24cache1_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache1_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VFXMANAGER_TDE794F20EA719507EADF091F8042A8B097F1E8E5_H
#ifndef RECTTRANSFORMUTILITY_T9B90669A72B05A33DD88BEBB817BC9CDBB614BBA_H
#define RECTTRANSFORMUTILITY_T9B90669A72B05A33DD88BEBB817BC9CDBB614BBA_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.RectTransformUtility
struct  RectTransformUtility_t9B90669A72B05A33DD88BEBB817BC9CDBB614BBA  : public RuntimeObject
{
public:

public:
};

struct RectTransformUtility_t9B90669A72B05A33DD88BEBB817BC9CDBB614BBA_StaticFields
{
public:
	// UnityEngine.Vector3[] UnityEngine.RectTransformUtility::s_Corners
	Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* ___s_Corners_0;

public:
	inline static int32_t get_offset_of_s_Corners_0() { return static_cast<int32_t>(offsetof(RectTransformUtility_t9B90669A72B05A33DD88BEBB817BC9CDBB614BBA_StaticFields, ___s_Corners_0)); }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* get_s_Corners_0() const { return ___s_Corners_0; }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28** get_address_of_s_Corners_0() { return &___s_Corners_0; }
	inline void set_s_Corners_0(Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* value)
	{
		___s_Corners_0 = value;
		Il2CppCodeGenWriteBarrier((&___s_Corners_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RECTTRANSFORMUTILITY_T9B90669A72B05A33DD88BEBB817BC9CDBB614BBA_H
#ifndef GAMECENTERPLATFORM_T699FF764080BA03011F7DBEA26659A3E4FB2ED43_H
#define GAMECENTERPLATFORM_T699FF764080BA03011F7DBEA26659A3E4FB2ED43_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform
struct  GameCenterPlatform_t699FF764080BA03011F7DBEA26659A3E4FB2ED43  : public RuntimeObject
{
public:

public:
};

struct GameCenterPlatform_t699FF764080BA03011F7DBEA26659A3E4FB2ED43_StaticFields
{
public:
	// System.Action`2<System.Boolean,System.String> UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::s_AuthenticateCallback
	Action_2_tC679CE201889334CCB7E9B60CBBA75C1611AE4E2 * ___s_AuthenticateCallback_0;
	// UnityEngine.SocialPlatforms.Impl.AchievementDescription[] UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::s_adCache
	AchievementDescriptionU5BU5D_t2E09F4A316E4A9274CF8B7BF231DE9AEBE02F062* ___s_adCache_1;
	// UnityEngine.SocialPlatforms.Impl.UserProfile[] UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::s_friends
	UserProfileU5BU5D_t74EE7690744D8F99BA578ACE0CC65C45837F522F* ___s_friends_2;
	// UnityEngine.SocialPlatforms.Impl.UserProfile[] UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::s_users
	UserProfileU5BU5D_t74EE7690744D8F99BA578ACE0CC65C45837F522F* ___s_users_3;
	// System.Action`1<System.Boolean> UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::s_ResetAchievements
	Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD * ___s_ResetAchievements_4;
	// UnityEngine.SocialPlatforms.Impl.LocalUser UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::m_LocalUser
	LocalUser_tBBCEEB55B6F28DFA7F4677E9273622A34CABB135 * ___m_LocalUser_5;
	// System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard> UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::m_GcBoards
	List_1_t34542C6C883A3FAA3E3C444443435BE548121E21 * ___m_GcBoards_6;

public:
	inline static int32_t get_offset_of_s_AuthenticateCallback_0() { return static_cast<int32_t>(offsetof(GameCenterPlatform_t699FF764080BA03011F7DBEA26659A3E4FB2ED43_StaticFields, ___s_AuthenticateCallback_0)); }
	inline Action_2_tC679CE201889334CCB7E9B60CBBA75C1611AE4E2 * get_s_AuthenticateCallback_0() const { return ___s_AuthenticateCallback_0; }
	inline Action_2_tC679CE201889334CCB7E9B60CBBA75C1611AE4E2 ** get_address_of_s_AuthenticateCallback_0() { return &___s_AuthenticateCallback_0; }
	inline void set_s_AuthenticateCallback_0(Action_2_tC679CE201889334CCB7E9B60CBBA75C1611AE4E2 * value)
	{
		___s_AuthenticateCallback_0 = value;
		Il2CppCodeGenWriteBarrier((&___s_AuthenticateCallback_0), value);
	}

	inline static int32_t get_offset_of_s_adCache_1() { return static_cast<int32_t>(offsetof(GameCenterPlatform_t699FF764080BA03011F7DBEA26659A3E4FB2ED43_StaticFields, ___s_adCache_1)); }
	inline AchievementDescriptionU5BU5D_t2E09F4A316E4A9274CF8B7BF231DE9AEBE02F062* get_s_adCache_1() const { return ___s_adCache_1; }
	inline AchievementDescriptionU5BU5D_t2E09F4A316E4A9274CF8B7BF231DE9AEBE02F062** get_address_of_s_adCache_1() { return &___s_adCache_1; }
	inline void set_s_adCache_1(AchievementDescriptionU5BU5D_t2E09F4A316E4A9274CF8B7BF231DE9AEBE02F062* value)
	{
		___s_adCache_1 = value;
		Il2CppCodeGenWriteBarrier((&___s_adCache_1), value);
	}

	inline static int32_t get_offset_of_s_friends_2() { return static_cast<int32_t>(offsetof(GameCenterPlatform_t699FF764080BA03011F7DBEA26659A3E4FB2ED43_StaticFields, ___s_friends_2)); }
	inline UserProfileU5BU5D_t74EE7690744D8F99BA578ACE0CC65C45837F522F* get_s_friends_2() const { return ___s_friends_2; }
	inline UserProfileU5BU5D_t74EE7690744D8F99BA578ACE0CC65C45837F522F** get_address_of_s_friends_2() { return &___s_friends_2; }
	inline void set_s_friends_2(UserProfileU5BU5D_t74EE7690744D8F99BA578ACE0CC65C45837F522F* value)
	{
		___s_friends_2 = value;
		Il2CppCodeGenWriteBarrier((&___s_friends_2), value);
	}

	inline static int32_t get_offset_of_s_users_3() { return static_cast<int32_t>(offsetof(GameCenterPlatform_t699FF764080BA03011F7DBEA26659A3E4FB2ED43_StaticFields, ___s_users_3)); }
	inline UserProfileU5BU5D_t74EE7690744D8F99BA578ACE0CC65C45837F522F* get_s_users_3() const { return ___s_users_3; }
	inline UserProfileU5BU5D_t74EE7690744D8F99BA578ACE0CC65C45837F522F** get_address_of_s_users_3() { return &___s_users_3; }
	inline void set_s_users_3(UserProfileU5BU5D_t74EE7690744D8F99BA578ACE0CC65C45837F522F* value)
	{
		___s_users_3 = value;
		Il2CppCodeGenWriteBarrier((&___s_users_3), value);
	}

	inline static int32_t get_offset_of_s_ResetAchievements_4() { return static_cast<int32_t>(offsetof(GameCenterPlatform_t699FF764080BA03011F7DBEA26659A3E4FB2ED43_StaticFields, ___s_ResetAchievements_4)); }
	inline Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD * get_s_ResetAchievements_4() const { return ___s_ResetAchievements_4; }
	inline Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD ** get_address_of_s_ResetAchievements_4() { return &___s_ResetAchievements_4; }
	inline void set_s_ResetAchievements_4(Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD * value)
	{
		___s_ResetAchievements_4 = value;
		Il2CppCodeGenWriteBarrier((&___s_ResetAchievements_4), value);
	}

	inline static int32_t get_offset_of_m_LocalUser_5() { return static_cast<int32_t>(offsetof(GameCenterPlatform_t699FF764080BA03011F7DBEA26659A3E4FB2ED43_StaticFields, ___m_LocalUser_5)); }
	inline LocalUser_tBBCEEB55B6F28DFA7F4677E9273622A34CABB135 * get_m_LocalUser_5() const { return ___m_LocalUser_5; }
	inline LocalUser_tBBCEEB55B6F28DFA7F4677E9273622A34CABB135 ** get_address_of_m_LocalUser_5() { return &___m_LocalUser_5; }
	inline void set_m_LocalUser_5(LocalUser_tBBCEEB55B6F28DFA7F4677E9273622A34CABB135 * value)
	{
		___m_LocalUser_5 = value;
		Il2CppCodeGenWriteBarrier((&___m_LocalUser_5), value);
	}

	inline static int32_t get_offset_of_m_GcBoards_6() { return static_cast<int32_t>(offsetof(GameCenterPlatform_t699FF764080BA03011F7DBEA26659A3E4FB2ED43_StaticFields, ___m_GcBoards_6)); }
	inline List_1_t34542C6C883A3FAA3E3C444443435BE548121E21 * get_m_GcBoards_6() const { return ___m_GcBoards_6; }
	inline List_1_t34542C6C883A3FAA3E3C444443435BE548121E21 ** get_address_of_m_GcBoards_6() { return &___m_GcBoards_6; }
	inline void set_m_GcBoards_6(List_1_t34542C6C883A3FAA3E3C444443435BE548121E21 * value)
	{
		___m_GcBoards_6 = value;
		Il2CppCodeGenWriteBarrier((&___m_GcBoards_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GAMECENTERPLATFORM_T699FF764080BA03011F7DBEA26659A3E4FB2ED43_H
#ifndef U3CUNITYENGINE_SOCIALPLATFORMS_ISOCIALPLATFORM_AUTHENTICATEU3EC__ANONSTOREY0_T5601A9A066EAEA224918FCB9B71F770D57C3B488_H
#define U3CUNITYENGINE_SOCIALPLATFORMS_ISOCIALPLATFORM_AUTHENTICATEU3EC__ANONSTOREY0_T5601A9A066EAEA224918FCB9B71F770D57C3B488_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform/<UnityEngine_SocialPlatforms_ISocialPlatform_Authenticate>c__AnonStorey0
struct  U3CUnityEngine_SocialPlatforms_ISocialPlatform_AuthenticateU3Ec__AnonStorey0_t5601A9A066EAEA224918FCB9B71F770D57C3B488  : public RuntimeObject
{
public:
	// System.Action`1<System.Boolean> UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform/<UnityEngine_SocialPlatforms_ISocialPlatform_Authenticate>c__AnonStorey0::callback
	Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD * ___callback_0;

public:
	inline static int32_t get_offset_of_callback_0() { return static_cast<int32_t>(offsetof(U3CUnityEngine_SocialPlatforms_ISocialPlatform_AuthenticateU3Ec__AnonStorey0_t5601A9A066EAEA224918FCB9B71F770D57C3B488, ___callback_0)); }
	inline Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD * get_callback_0() const { return ___callback_0; }
	inline Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD ** get_address_of_callback_0() { return &___callback_0; }
	inline void set_callback_0(Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD * value)
	{
		___callback_0 = value;
		Il2CppCodeGenWriteBarrier((&___callback_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CUNITYENGINE_SOCIALPLATFORMS_ISOCIALPLATFORM_AUTHENTICATEU3EC__ANONSTOREY0_T5601A9A066EAEA224918FCB9B71F770D57C3B488_H
#ifndef ACHIEVEMENTDESCRIPTION_T3A0A2B1921C25802FE46B81BF301BFCAA2FEE6E7_H
#define ACHIEVEMENTDESCRIPTION_T3A0A2B1921C25802FE46B81BF301BFCAA2FEE6E7_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SocialPlatforms.Impl.AchievementDescription
struct  AchievementDescription_t3A0A2B1921C25802FE46B81BF301BFCAA2FEE6E7  : public RuntimeObject
{
public:
	// System.String UnityEngine.SocialPlatforms.Impl.AchievementDescription::m_Title
	String_t* ___m_Title_0;
	// UnityEngine.Texture2D UnityEngine.SocialPlatforms.Impl.AchievementDescription::m_Image
	Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * ___m_Image_1;
	// System.String UnityEngine.SocialPlatforms.Impl.AchievementDescription::m_AchievedDescription
	String_t* ___m_AchievedDescription_2;
	// System.String UnityEngine.SocialPlatforms.Impl.AchievementDescription::m_UnachievedDescription
	String_t* ___m_UnachievedDescription_3;
	// System.Boolean UnityEngine.SocialPlatforms.Impl.AchievementDescription::m_Hidden
	bool ___m_Hidden_4;
	// System.Int32 UnityEngine.SocialPlatforms.Impl.AchievementDescription::m_Points
	int32_t ___m_Points_5;
	// System.String UnityEngine.SocialPlatforms.Impl.AchievementDescription::<id>k__BackingField
	String_t* ___U3CidU3Ek__BackingField_6;

public:
	inline static int32_t get_offset_of_m_Title_0() { return static_cast<int32_t>(offsetof(AchievementDescription_t3A0A2B1921C25802FE46B81BF301BFCAA2FEE6E7, ___m_Title_0)); }
	inline String_t* get_m_Title_0() const { return ___m_Title_0; }
	inline String_t** get_address_of_m_Title_0() { return &___m_Title_0; }
	inline void set_m_Title_0(String_t* value)
	{
		___m_Title_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_Title_0), value);
	}

	inline static int32_t get_offset_of_m_Image_1() { return static_cast<int32_t>(offsetof(AchievementDescription_t3A0A2B1921C25802FE46B81BF301BFCAA2FEE6E7, ___m_Image_1)); }
	inline Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * get_m_Image_1() const { return ___m_Image_1; }
	inline Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C ** get_address_of_m_Image_1() { return &___m_Image_1; }
	inline void set_m_Image_1(Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * value)
	{
		___m_Image_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_Image_1), value);
	}

	inline static int32_t get_offset_of_m_AchievedDescription_2() { return static_cast<int32_t>(offsetof(AchievementDescription_t3A0A2B1921C25802FE46B81BF301BFCAA2FEE6E7, ___m_AchievedDescription_2)); }
	inline String_t* get_m_AchievedDescription_2() const { return ___m_AchievedDescription_2; }
	inline String_t** get_address_of_m_AchievedDescription_2() { return &___m_AchievedDescription_2; }
	inline void set_m_AchievedDescription_2(String_t* value)
	{
		___m_AchievedDescription_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_AchievedDescription_2), value);
	}

	inline static int32_t get_offset_of_m_UnachievedDescription_3() { return static_cast<int32_t>(offsetof(AchievementDescription_t3A0A2B1921C25802FE46B81BF301BFCAA2FEE6E7, ___m_UnachievedDescription_3)); }
	inline String_t* get_m_UnachievedDescription_3() const { return ___m_UnachievedDescription_3; }
	inline String_t** get_address_of_m_UnachievedDescription_3() { return &___m_UnachievedDescription_3; }
	inline void set_m_UnachievedDescription_3(String_t* value)
	{
		___m_UnachievedDescription_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_UnachievedDescription_3), value);
	}

	inline static int32_t get_offset_of_m_Hidden_4() { return static_cast<int32_t>(offsetof(AchievementDescription_t3A0A2B1921C25802FE46B81BF301BFCAA2FEE6E7, ___m_Hidden_4)); }
	inline bool get_m_Hidden_4() const { return ___m_Hidden_4; }
	inline bool* get_address_of_m_Hidden_4() { return &___m_Hidden_4; }
	inline void set_m_Hidden_4(bool value)
	{
		___m_Hidden_4 = value;
	}

	inline static int32_t get_offset_of_m_Points_5() { return static_cast<int32_t>(offsetof(AchievementDescription_t3A0A2B1921C25802FE46B81BF301BFCAA2FEE6E7, ___m_Points_5)); }
	inline int32_t get_m_Points_5() const { return ___m_Points_5; }
	inline int32_t* get_address_of_m_Points_5() { return &___m_Points_5; }
	inline void set_m_Points_5(int32_t value)
	{
		___m_Points_5 = value;
	}

	inline static int32_t get_offset_of_U3CidU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(AchievementDescription_t3A0A2B1921C25802FE46B81BF301BFCAA2FEE6E7, ___U3CidU3Ek__BackingField_6)); }
	inline String_t* get_U3CidU3Ek__BackingField_6() const { return ___U3CidU3Ek__BackingField_6; }
	inline String_t** get_address_of_U3CidU3Ek__BackingField_6() { return &___U3CidU3Ek__BackingField_6; }
	inline void set_U3CidU3Ek__BackingField_6(String_t* value)
	{
		___U3CidU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((&___U3CidU3Ek__BackingField_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ACHIEVEMENTDESCRIPTION_T3A0A2B1921C25802FE46B81BF301BFCAA2FEE6E7_H
#ifndef ITILEMAP_T784A442A8BD2283058F44E8C0FE5257168459BE3_H
#define ITILEMAP_T784A442A8BD2283058F44E8C0FE5257168459BE3_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Tilemaps.ITilemap
struct  ITilemap_t784A442A8BD2283058F44E8C0FE5257168459BE3  : public RuntimeObject
{
public:
	// UnityEngine.Tilemaps.Tilemap UnityEngine.Tilemaps.ITilemap::m_Tilemap
	Tilemap_t0F92148668211805A631B93488D4A629EC378B10 * ___m_Tilemap_1;

public:
	inline static int32_t get_offset_of_m_Tilemap_1() { return static_cast<int32_t>(offsetof(ITilemap_t784A442A8BD2283058F44E8C0FE5257168459BE3, ___m_Tilemap_1)); }
	inline Tilemap_t0F92148668211805A631B93488D4A629EC378B10 * get_m_Tilemap_1() const { return ___m_Tilemap_1; }
	inline Tilemap_t0F92148668211805A631B93488D4A629EC378B10 ** get_address_of_m_Tilemap_1() { return &___m_Tilemap_1; }
	inline void set_m_Tilemap_1(Tilemap_t0F92148668211805A631B93488D4A629EC378B10 * value)
	{
		___m_Tilemap_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_Tilemap_1), value);
	}
};

struct ITilemap_t784A442A8BD2283058F44E8C0FE5257168459BE3_StaticFields
{
public:
	// UnityEngine.Tilemaps.ITilemap UnityEngine.Tilemaps.ITilemap::s_Instance
	ITilemap_t784A442A8BD2283058F44E8C0FE5257168459BE3 * ___s_Instance_0;

public:
	inline static int32_t get_offset_of_s_Instance_0() { return static_cast<int32_t>(offsetof(ITilemap_t784A442A8BD2283058F44E8C0FE5257168459BE3_StaticFields, ___s_Instance_0)); }
	inline ITilemap_t784A442A8BD2283058F44E8C0FE5257168459BE3 * get_s_Instance_0() const { return ___s_Instance_0; }
	inline ITilemap_t784A442A8BD2283058F44E8C0FE5257168459BE3 ** get_address_of_s_Instance_0() { return &___s_Instance_0; }
	inline void set_s_Instance_0(ITilemap_t784A442A8BD2283058F44E8C0FE5257168459BE3 * value)
	{
		___s_Instance_0 = value;
		Il2CppCodeGenWriteBarrier((&___s_Instance_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ITILEMAP_T784A442A8BD2283058F44E8C0FE5257168459BE3_H
#ifndef UISYSTEMPROFILERAPI_TD33E558B2D0176096E5DB375956ACA9F03678F1B_H
#define UISYSTEMPROFILERAPI_TD33E558B2D0176096E5DB375956ACA9F03678F1B_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UISystemProfilerApi
struct  UISystemProfilerApi_tD33E558B2D0176096E5DB375956ACA9F03678F1B  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UISYSTEMPROFILERAPI_TD33E558B2D0176096E5DB375956ACA9F03678F1B_H
#ifndef XRDEVICE_T392FCA3D1DCEB95FF500C8F374C88B034C31DF4A_H
#define XRDEVICE_T392FCA3D1DCEB95FF500C8F374C88B034C31DF4A_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.XRDevice
struct  XRDevice_t392FCA3D1DCEB95FF500C8F374C88B034C31DF4A  : public RuntimeObject
{
public:

public:
};

struct XRDevice_t392FCA3D1DCEB95FF500C8F374C88B034C31DF4A_StaticFields
{
public:
	// System.Action`1<System.String> UnityEngine.XR.XRDevice::deviceLoaded
	Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0 * ___deviceLoaded_0;

public:
	inline static int32_t get_offset_of_deviceLoaded_0() { return static_cast<int32_t>(offsetof(XRDevice_t392FCA3D1DCEB95FF500C8F374C88B034C31DF4A_StaticFields, ___deviceLoaded_0)); }
	inline Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0 * get_deviceLoaded_0() const { return ___deviceLoaded_0; }
	inline Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0 ** get_address_of_deviceLoaded_0() { return &___deviceLoaded_0; }
	inline void set_deviceLoaded_0(Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0 * value)
	{
		___deviceLoaded_0 = value;
		Il2CppCodeGenWriteBarrier((&___deviceLoaded_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XRDEVICE_T392FCA3D1DCEB95FF500C8F374C88B034C31DF4A_H
#ifndef YIELDINSTRUCTION_T836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_H
#define YIELDINSTRUCTION_T836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.YieldInstruction
struct  YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_marshaled_com
{
};
#endif // YIELDINSTRUCTION_T836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_H
#ifndef NATIVE_TAB7B2E3A68EEFE9B7A356DB4CC8EC664EB765C2A_H
#define NATIVE_TAB7B2E3A68EEFE9B7A356DB4CC8EC664EB765C2A_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Yoga.Native
struct  Native_tAB7B2E3A68EEFE9B7A356DB4CC8EC664EB765C2A  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NATIVE_TAB7B2E3A68EEFE9B7A356DB4CC8EC664EB765C2A_H
#ifndef NATIVEINPUTSYSTEM_T522F6391494159917EE6963E9E61C9EFA9C5795C_H
#define NATIVEINPUTSYSTEM_T522F6391494159917EE6963E9E61C9EFA9C5795C_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngineInternal.Input.NativeInputSystem
struct  NativeInputSystem_t522F6391494159917EE6963E9E61C9EFA9C5795C  : public RuntimeObject
{
public:

public:
};

struct NativeInputSystem_t522F6391494159917EE6963E9E61C9EFA9C5795C_StaticFields
{
public:
	// System.Action`3<UnityEngineInternal.Input.NativeInputUpdateType,System.Int32,System.IntPtr> UnityEngineInternal.Input.NativeInputSystem::onUpdate
	Action_3_t218EFA183BDE39E1AC9A0240E98B4BFC33A703D4 * ___onUpdate_0;
	// System.Action`1<UnityEngineInternal.Input.NativeInputUpdateType> UnityEngineInternal.Input.NativeInputSystem::onBeforeUpdate
	Action_1_tA0A72999A108CE29CD4CB14537B8FE41501859C1 * ___onBeforeUpdate_1;
	// System.Action`2<System.Int32,System.String> UnityEngineInternal.Input.NativeInputSystem::s_OnDeviceDiscoveredCallback
	Action_2_t3DE7FA14577DE01568F76D409273F315827CAA36 * ___s_OnDeviceDiscoveredCallback_2;

public:
	inline static int32_t get_offset_of_onUpdate_0() { return static_cast<int32_t>(offsetof(NativeInputSystem_t522F6391494159917EE6963E9E61C9EFA9C5795C_StaticFields, ___onUpdate_0)); }
	inline Action_3_t218EFA183BDE39E1AC9A0240E98B4BFC33A703D4 * get_onUpdate_0() const { return ___onUpdate_0; }
	inline Action_3_t218EFA183BDE39E1AC9A0240E98B4BFC33A703D4 ** get_address_of_onUpdate_0() { return &___onUpdate_0; }
	inline void set_onUpdate_0(Action_3_t218EFA183BDE39E1AC9A0240E98B4BFC33A703D4 * value)
	{
		___onUpdate_0 = value;
		Il2CppCodeGenWriteBarrier((&___onUpdate_0), value);
	}

	inline static int32_t get_offset_of_onBeforeUpdate_1() { return static_cast<int32_t>(offsetof(NativeInputSystem_t522F6391494159917EE6963E9E61C9EFA9C5795C_StaticFields, ___onBeforeUpdate_1)); }
	inline Action_1_tA0A72999A108CE29CD4CB14537B8FE41501859C1 * get_onBeforeUpdate_1() const { return ___onBeforeUpdate_1; }
	inline Action_1_tA0A72999A108CE29CD4CB14537B8FE41501859C1 ** get_address_of_onBeforeUpdate_1() { return &___onBeforeUpdate_1; }
	inline void set_onBeforeUpdate_1(Action_1_tA0A72999A108CE29CD4CB14537B8FE41501859C1 * value)
	{
		___onBeforeUpdate_1 = value;
		Il2CppCodeGenWriteBarrier((&___onBeforeUpdate_1), value);
	}

	inline static int32_t get_offset_of_s_OnDeviceDiscoveredCallback_2() { return static_cast<int32_t>(offsetof(NativeInputSystem_t522F6391494159917EE6963E9E61C9EFA9C5795C_StaticFields, ___s_OnDeviceDiscoveredCallback_2)); }
	inline Action_2_t3DE7FA14577DE01568F76D409273F315827CAA36 * get_s_OnDeviceDiscoveredCallback_2() const { return ___s_OnDeviceDiscoveredCallback_2; }
	inline Action_2_t3DE7FA14577DE01568F76D409273F315827CAA36 ** get_address_of_s_OnDeviceDiscoveredCallback_2() { return &___s_OnDeviceDiscoveredCallback_2; }
	inline void set_s_OnDeviceDiscoveredCallback_2(Action_2_t3DE7FA14577DE01568F76D409273F315827CAA36 * value)
	{
		___s_OnDeviceDiscoveredCallback_2 = value;
		Il2CppCodeGenWriteBarrier((&___s_OnDeviceDiscoveredCallback_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NATIVEINPUTSYSTEM_T522F6391494159917EE6963E9E61C9EFA9C5795C_H
#ifndef WEBREQUESTUTILS_TBE8F8607E3A9633419968F6AF2F706A029AE1296_H
#define WEBREQUESTUTILS_TBE8F8607E3A9633419968F6AF2F706A029AE1296_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngineInternal.WebRequestUtils
struct  WebRequestUtils_tBE8F8607E3A9633419968F6AF2F706A029AE1296  : public RuntimeObject
{
public:

public:
};

struct WebRequestUtils_tBE8F8607E3A9633419968F6AF2F706A029AE1296_StaticFields
{
public:
	// System.Text.RegularExpressions.Regex UnityEngineInternal.WebRequestUtils::domainRegex
	Regex_tFD46E63A462E852189FD6AB4E2B0B67C4D8FDBDF * ___domainRegex_0;

public:
	inline static int32_t get_offset_of_domainRegex_0() { return static_cast<int32_t>(offsetof(WebRequestUtils_tBE8F8607E3A9633419968F6AF2F706A029AE1296_StaticFields, ___domainRegex_0)); }
	inline Regex_tFD46E63A462E852189FD6AB4E2B0B67C4D8FDBDF * get_domainRegex_0() const { return ___domainRegex_0; }
	inline Regex_tFD46E63A462E852189FD6AB4E2B0B67C4D8FDBDF ** get_address_of_domainRegex_0() { return &___domainRegex_0; }
	inline void set_domainRegex_0(Regex_tFD46E63A462E852189FD6AB4E2B0B67C4D8FDBDF * value)
	{
		___domainRegex_0 = value;
		Il2CppCodeGenWriteBarrier((&___domainRegex_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WEBREQUESTUTILS_TBE8F8607E3A9633419968F6AF2F706A029AE1296_H
#ifndef DATETIME_T349B7449FBAAFF4192636E2B7A07694DA9236132_H
#define DATETIME_T349B7449FBAAFF4192636E2B7A07694DA9236132_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.DateTime
struct  DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 
{
public:
	// System.UInt64 System.DateTime::dateData
	uint64_t ___dateData_44;

public:
	inline static int32_t get_offset_of_dateData_44() { return static_cast<int32_t>(offsetof(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132, ___dateData_44)); }
	inline uint64_t get_dateData_44() const { return ___dateData_44; }
	inline uint64_t* get_address_of_dateData_44() { return &___dateData_44; }
	inline void set_dateData_44(uint64_t value)
	{
		___dateData_44 = value;
	}
};

struct DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_StaticFields
{
public:
	// System.Int32[] System.DateTime::DaysToMonth365
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___DaysToMonth365_29;
	// System.Int32[] System.DateTime::DaysToMonth366
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___DaysToMonth366_30;
	// System.DateTime System.DateTime::MinValue
	DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ___MinValue_31;
	// System.DateTime System.DateTime::MaxValue
	DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ___MaxValue_32;

public:
	inline static int32_t get_offset_of_DaysToMonth365_29() { return static_cast<int32_t>(offsetof(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_StaticFields, ___DaysToMonth365_29)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_DaysToMonth365_29() const { return ___DaysToMonth365_29; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_DaysToMonth365_29() { return &___DaysToMonth365_29; }
	inline void set_DaysToMonth365_29(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___DaysToMonth365_29 = value;
		Il2CppCodeGenWriteBarrier((&___DaysToMonth365_29), value);
	}

	inline static int32_t get_offset_of_DaysToMonth366_30() { return static_cast<int32_t>(offsetof(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_StaticFields, ___DaysToMonth366_30)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_DaysToMonth366_30() const { return ___DaysToMonth366_30; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_DaysToMonth366_30() { return &___DaysToMonth366_30; }
	inline void set_DaysToMonth366_30(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___DaysToMonth366_30 = value;
		Il2CppCodeGenWriteBarrier((&___DaysToMonth366_30), value);
	}

	inline static int32_t get_offset_of_MinValue_31() { return static_cast<int32_t>(offsetof(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_StaticFields, ___MinValue_31)); }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  get_MinValue_31() const { return ___MinValue_31; }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 * get_address_of_MinValue_31() { return &___MinValue_31; }
	inline void set_MinValue_31(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  value)
	{
		___MinValue_31 = value;
	}

	inline static int32_t get_offset_of_MaxValue_32() { return static_cast<int32_t>(offsetof(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_StaticFields, ___MaxValue_32)); }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  get_MaxValue_32() const { return ___MaxValue_32; }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 * get_address_of_MaxValue_32() { return &___MaxValue_32; }
	inline void set_MaxValue_32(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  value)
	{
		___MaxValue_32 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATETIME_T349B7449FBAAFF4192636E2B7A07694DA9236132_H
#ifndef ENUM_T2AF27C02B8653AE29442467390005ABC74D8F521_H
#define ENUM_T2AF27C02B8653AE29442467390005ABC74D8F521_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Enum
struct  Enum_t2AF27C02B8653AE29442467390005ABC74D8F521  : public ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF
{
public:

public:
};

struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((&___enumSeperatorCharArray_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_com
{
};
#endif // ENUM_T2AF27C02B8653AE29442467390005ABC74D8F521_H
#ifndef INTPTR_T_H
#define INTPTR_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IntPtr
struct  IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTPTR_T_H
#ifndef SINGLE_TDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_H
#define SINGLE_TDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Single
struct  Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SINGLE_TDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_H
#ifndef VOID_T22962CB4C05B1D89B55A6E1139F0E87A90987017_H
#define VOID_T22962CB4C05B1D89B55A6E1139F0E87A90987017_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Void
struct  Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017__padding[1];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VOID_T22962CB4C05B1D89B55A6E1139F0E87A90987017_H
#ifndef ANIMATORCLIPINFO_T78457ABBA83D388EDFF26F436F5E61A29CF4E180_H
#define ANIMATORCLIPINFO_T78457ABBA83D388EDFF26F436F5E61A29CF4E180_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AnimatorClipInfo
struct  AnimatorClipInfo_t78457ABBA83D388EDFF26F436F5E61A29CF4E180 
{
public:
	// System.Int32 UnityEngine.AnimatorClipInfo::m_ClipInstanceID
	int32_t ___m_ClipInstanceID_0;
	// System.Single UnityEngine.AnimatorClipInfo::m_Weight
	float ___m_Weight_1;

public:
	inline static int32_t get_offset_of_m_ClipInstanceID_0() { return static_cast<int32_t>(offsetof(AnimatorClipInfo_t78457ABBA83D388EDFF26F436F5E61A29CF4E180, ___m_ClipInstanceID_0)); }
	inline int32_t get_m_ClipInstanceID_0() const { return ___m_ClipInstanceID_0; }
	inline int32_t* get_address_of_m_ClipInstanceID_0() { return &___m_ClipInstanceID_0; }
	inline void set_m_ClipInstanceID_0(int32_t value)
	{
		___m_ClipInstanceID_0 = value;
	}

	inline static int32_t get_offset_of_m_Weight_1() { return static_cast<int32_t>(offsetof(AnimatorClipInfo_t78457ABBA83D388EDFF26F436F5E61A29CF4E180, ___m_Weight_1)); }
	inline float get_m_Weight_1() const { return ___m_Weight_1; }
	inline float* get_address_of_m_Weight_1() { return &___m_Weight_1; }
	inline void set_m_Weight_1(float value)
	{
		___m_Weight_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ANIMATORCLIPINFO_T78457ABBA83D388EDFF26F436F5E61A29CF4E180_H
#ifndef ANIMATORSTATEINFO_TF6D8ADF771CD13DC578AC9A574FD33CC99AD46E2_H
#define ANIMATORSTATEINFO_TF6D8ADF771CD13DC578AC9A574FD33CC99AD46E2_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AnimatorStateInfo
struct  AnimatorStateInfo_tF6D8ADF771CD13DC578AC9A574FD33CC99AD46E2 
{
public:
	// System.Int32 UnityEngine.AnimatorStateInfo::m_Name
	int32_t ___m_Name_0;
	// System.Int32 UnityEngine.AnimatorStateInfo::m_Path
	int32_t ___m_Path_1;
	// System.Int32 UnityEngine.AnimatorStateInfo::m_FullPath
	int32_t ___m_FullPath_2;
	// System.Single UnityEngine.AnimatorStateInfo::m_NormalizedTime
	float ___m_NormalizedTime_3;
	// System.Single UnityEngine.AnimatorStateInfo::m_Length
	float ___m_Length_4;
	// System.Single UnityEngine.AnimatorStateInfo::m_Speed
	float ___m_Speed_5;
	// System.Single UnityEngine.AnimatorStateInfo::m_SpeedMultiplier
	float ___m_SpeedMultiplier_6;
	// System.Int32 UnityEngine.AnimatorStateInfo::m_Tag
	int32_t ___m_Tag_7;
	// System.Int32 UnityEngine.AnimatorStateInfo::m_Loop
	int32_t ___m_Loop_8;

public:
	inline static int32_t get_offset_of_m_Name_0() { return static_cast<int32_t>(offsetof(AnimatorStateInfo_tF6D8ADF771CD13DC578AC9A574FD33CC99AD46E2, ___m_Name_0)); }
	inline int32_t get_m_Name_0() const { return ___m_Name_0; }
	inline int32_t* get_address_of_m_Name_0() { return &___m_Name_0; }
	inline void set_m_Name_0(int32_t value)
	{
		___m_Name_0 = value;
	}

	inline static int32_t get_offset_of_m_Path_1() { return static_cast<int32_t>(offsetof(AnimatorStateInfo_tF6D8ADF771CD13DC578AC9A574FD33CC99AD46E2, ___m_Path_1)); }
	inline int32_t get_m_Path_1() const { return ___m_Path_1; }
	inline int32_t* get_address_of_m_Path_1() { return &___m_Path_1; }
	inline void set_m_Path_1(int32_t value)
	{
		___m_Path_1 = value;
	}

	inline static int32_t get_offset_of_m_FullPath_2() { return static_cast<int32_t>(offsetof(AnimatorStateInfo_tF6D8ADF771CD13DC578AC9A574FD33CC99AD46E2, ___m_FullPath_2)); }
	inline int32_t get_m_FullPath_2() const { return ___m_FullPath_2; }
	inline int32_t* get_address_of_m_FullPath_2() { return &___m_FullPath_2; }
	inline void set_m_FullPath_2(int32_t value)
	{
		___m_FullPath_2 = value;
	}

	inline static int32_t get_offset_of_m_NormalizedTime_3() { return static_cast<int32_t>(offsetof(AnimatorStateInfo_tF6D8ADF771CD13DC578AC9A574FD33CC99AD46E2, ___m_NormalizedTime_3)); }
	inline float get_m_NormalizedTime_3() const { return ___m_NormalizedTime_3; }
	inline float* get_address_of_m_NormalizedTime_3() { return &___m_NormalizedTime_3; }
	inline void set_m_NormalizedTime_3(float value)
	{
		___m_NormalizedTime_3 = value;
	}

	inline static int32_t get_offset_of_m_Length_4() { return static_cast<int32_t>(offsetof(AnimatorStateInfo_tF6D8ADF771CD13DC578AC9A574FD33CC99AD46E2, ___m_Length_4)); }
	inline float get_m_Length_4() const { return ___m_Length_4; }
	inline float* get_address_of_m_Length_4() { return &___m_Length_4; }
	inline void set_m_Length_4(float value)
	{
		___m_Length_4 = value;
	}

	inline static int32_t get_offset_of_m_Speed_5() { return static_cast<int32_t>(offsetof(AnimatorStateInfo_tF6D8ADF771CD13DC578AC9A574FD33CC99AD46E2, ___m_Speed_5)); }
	inline float get_m_Speed_5() const { return ___m_Speed_5; }
	inline float* get_address_of_m_Speed_5() { return &___m_Speed_5; }
	inline void set_m_Speed_5(float value)
	{
		___m_Speed_5 = value;
	}

	inline static int32_t get_offset_of_m_SpeedMultiplier_6() { return static_cast<int32_t>(offsetof(AnimatorStateInfo_tF6D8ADF771CD13DC578AC9A574FD33CC99AD46E2, ___m_SpeedMultiplier_6)); }
	inline float get_m_SpeedMultiplier_6() const { return ___m_SpeedMultiplier_6; }
	inline float* get_address_of_m_SpeedMultiplier_6() { return &___m_SpeedMultiplier_6; }
	inline void set_m_SpeedMultiplier_6(float value)
	{
		___m_SpeedMultiplier_6 = value;
	}

	inline static int32_t get_offset_of_m_Tag_7() { return static_cast<int32_t>(offsetof(AnimatorStateInfo_tF6D8ADF771CD13DC578AC9A574FD33CC99AD46E2, ___m_Tag_7)); }
	inline int32_t get_m_Tag_7() const { return ___m_Tag_7; }
	inline int32_t* get_address_of_m_Tag_7() { return &___m_Tag_7; }
	inline void set_m_Tag_7(int32_t value)
	{
		___m_Tag_7 = value;
	}

	inline static int32_t get_offset_of_m_Loop_8() { return static_cast<int32_t>(offsetof(AnimatorStateInfo_tF6D8ADF771CD13DC578AC9A574FD33CC99AD46E2, ___m_Loop_8)); }
	inline int32_t get_m_Loop_8() const { return ___m_Loop_8; }
	inline int32_t* get_address_of_m_Loop_8() { return &___m_Loop_8; }
	inline void set_m_Loop_8(int32_t value)
	{
		___m_Loop_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ANIMATORSTATEINFO_TF6D8ADF771CD13DC578AC9A574FD33CC99AD46E2_H
#ifndef COLOR_T119BCA590009762C7223FDD3AF9706653AC84ED2_H
#define COLOR_T119BCA590009762C7223FDD3AF9706653AC84ED2_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Color
struct  Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 
{
public:
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;

public:
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLOR_T119BCA590009762C7223FDD3AF9706653AC84ED2_H
#ifndef COLOR32_T23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23_H
#define COLOR32_T23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Color32
struct  Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23 
{
public:
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int32 UnityEngine.Color32::rgba
			int32_t ___rgba_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___rgba_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Byte UnityEngine.Color32::r
			uint8_t ___r_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___r_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___g_2_OffsetPadding[1];
			// System.Byte UnityEngine.Color32::g
			uint8_t ___g_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___g_2_OffsetPadding_forAlignmentOnly[1];
			uint8_t ___g_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___b_3_OffsetPadding[2];
			// System.Byte UnityEngine.Color32::b
			uint8_t ___b_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___b_3_OffsetPadding_forAlignmentOnly[2];
			uint8_t ___b_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___a_4_OffsetPadding[3];
			// System.Byte UnityEngine.Color32::a
			uint8_t ___a_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___a_4_OffsetPadding_forAlignmentOnly[3];
			uint8_t ___a_4_forAlignmentOnly;
		};
	};

public:
	inline static int32_t get_offset_of_rgba_0() { return static_cast<int32_t>(offsetof(Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23, ___rgba_0)); }
	inline int32_t get_rgba_0() const { return ___rgba_0; }
	inline int32_t* get_address_of_rgba_0() { return &___rgba_0; }
	inline void set_rgba_0(int32_t value)
	{
		___rgba_0 = value;
	}

	inline static int32_t get_offset_of_r_1() { return static_cast<int32_t>(offsetof(Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23, ___r_1)); }
	inline uint8_t get_r_1() const { return ___r_1; }
	inline uint8_t* get_address_of_r_1() { return &___r_1; }
	inline void set_r_1(uint8_t value)
	{
		___r_1 = value;
	}

	inline static int32_t get_offset_of_g_2() { return static_cast<int32_t>(offsetof(Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23, ___g_2)); }
	inline uint8_t get_g_2() const { return ___g_2; }
	inline uint8_t* get_address_of_g_2() { return &___g_2; }
	inline void set_g_2(uint8_t value)
	{
		___g_2 = value;
	}

	inline static int32_t get_offset_of_b_3() { return static_cast<int32_t>(offsetof(Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23, ___b_3)); }
	inline uint8_t get_b_3() const { return ___b_3; }
	inline uint8_t* get_address_of_b_3() { return &___b_3; }
	inline void set_b_3(uint8_t value)
	{
		___b_3 = value;
	}

	inline static int32_t get_offset_of_a_4() { return static_cast<int32_t>(offsetof(Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23, ___a_4)); }
	inline uint8_t get_a_4() const { return ___a_4; }
	inline uint8_t* get_address_of_a_4() { return &___a_4; }
	inline void set_a_4(uint8_t value)
	{
		___a_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLOR32_T23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23_H
#ifndef TERRAINGROUPS_T88B87E7C8DA6A97E904D74167C43D631796ECBC5_H
#define TERRAINGROUPS_T88B87E7C8DA6A97E904D74167C43D631796ECBC5_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.TerrainAPI.TerrainUtility/TerrainGroups
struct  TerrainGroups_t88B87E7C8DA6A97E904D74167C43D631796ECBC5  : public Dictionary_2_t651CE851D569289A981D44DC5543BEA956206753
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TERRAINGROUPS_T88B87E7C8DA6A97E904D74167C43D631796ECBC5_H
#ifndef TILECOORD_T51EDF1EA1A3A7F9C1D85C186E7A7954535C225BA_H
#define TILECOORD_T51EDF1EA1A3A7F9C1D85C186E7A7954535C225BA_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.TerrainAPI.TerrainUtility/TerrainMap/TileCoord
struct  TileCoord_t51EDF1EA1A3A7F9C1D85C186E7A7954535C225BA 
{
public:
	// System.Int32 UnityEngine.Experimental.TerrainAPI.TerrainUtility/TerrainMap/TileCoord::tileX
	int32_t ___tileX_0;
	// System.Int32 UnityEngine.Experimental.TerrainAPI.TerrainUtility/TerrainMap/TileCoord::tileZ
	int32_t ___tileZ_1;

public:
	inline static int32_t get_offset_of_tileX_0() { return static_cast<int32_t>(offsetof(TileCoord_t51EDF1EA1A3A7F9C1D85C186E7A7954535C225BA, ___tileX_0)); }
	inline int32_t get_tileX_0() const { return ___tileX_0; }
	inline int32_t* get_address_of_tileX_0() { return &___tileX_0; }
	inline void set_tileX_0(int32_t value)
	{
		___tileX_0 = value;
	}

	inline static int32_t get_offset_of_tileZ_1() { return static_cast<int32_t>(offsetof(TileCoord_t51EDF1EA1A3A7F9C1D85C186E7A7954535C225BA, ___tileZ_1)); }
	inline int32_t get_tileZ_1() const { return ___tileZ_1; }
	inline int32_t* get_address_of_tileZ_1() { return &___tileZ_1; }
	inline void set_tileZ_1(int32_t value)
	{
		___tileZ_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TILECOORD_T51EDF1EA1A3A7F9C1D85C186E7A7954535C225BA_H
#ifndef MATRIX4X4_T6BF60F70C9169DF14C9D2577672A44224B236ECA_H
#define MATRIX4X4_T6BF60F70C9169DF14C9D2577672A44224B236ECA_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Matrix4x4
struct  Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA 
{
public:
	// System.Single UnityEngine.Matrix4x4::m00
	float ___m00_0;
	// System.Single UnityEngine.Matrix4x4::m10
	float ___m10_1;
	// System.Single UnityEngine.Matrix4x4::m20
	float ___m20_2;
	// System.Single UnityEngine.Matrix4x4::m30
	float ___m30_3;
	// System.Single UnityEngine.Matrix4x4::m01
	float ___m01_4;
	// System.Single UnityEngine.Matrix4x4::m11
	float ___m11_5;
	// System.Single UnityEngine.Matrix4x4::m21
	float ___m21_6;
	// System.Single UnityEngine.Matrix4x4::m31
	float ___m31_7;
	// System.Single UnityEngine.Matrix4x4::m02
	float ___m02_8;
	// System.Single UnityEngine.Matrix4x4::m12
	float ___m12_9;
	// System.Single UnityEngine.Matrix4x4::m22
	float ___m22_10;
	// System.Single UnityEngine.Matrix4x4::m32
	float ___m32_11;
	// System.Single UnityEngine.Matrix4x4::m03
	float ___m03_12;
	// System.Single UnityEngine.Matrix4x4::m13
	float ___m13_13;
	// System.Single UnityEngine.Matrix4x4::m23
	float ___m23_14;
	// System.Single UnityEngine.Matrix4x4::m33
	float ___m33_15;

public:
	inline static int32_t get_offset_of_m00_0() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m00_0)); }
	inline float get_m00_0() const { return ___m00_0; }
	inline float* get_address_of_m00_0() { return &___m00_0; }
	inline void set_m00_0(float value)
	{
		___m00_0 = value;
	}

	inline static int32_t get_offset_of_m10_1() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m10_1)); }
	inline float get_m10_1() const { return ___m10_1; }
	inline float* get_address_of_m10_1() { return &___m10_1; }
	inline void set_m10_1(float value)
	{
		___m10_1 = value;
	}

	inline static int32_t get_offset_of_m20_2() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m20_2)); }
	inline float get_m20_2() const { return ___m20_2; }
	inline float* get_address_of_m20_2() { return &___m20_2; }
	inline void set_m20_2(float value)
	{
		___m20_2 = value;
	}

	inline static int32_t get_offset_of_m30_3() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m30_3)); }
	inline float get_m30_3() const { return ___m30_3; }
	inline float* get_address_of_m30_3() { return &___m30_3; }
	inline void set_m30_3(float value)
	{
		___m30_3 = value;
	}

	inline static int32_t get_offset_of_m01_4() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m01_4)); }
	inline float get_m01_4() const { return ___m01_4; }
	inline float* get_address_of_m01_4() { return &___m01_4; }
	inline void set_m01_4(float value)
	{
		___m01_4 = value;
	}

	inline static int32_t get_offset_of_m11_5() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m11_5)); }
	inline float get_m11_5() const { return ___m11_5; }
	inline float* get_address_of_m11_5() { return &___m11_5; }
	inline void set_m11_5(float value)
	{
		___m11_5 = value;
	}

	inline static int32_t get_offset_of_m21_6() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m21_6)); }
	inline float get_m21_6() const { return ___m21_6; }
	inline float* get_address_of_m21_6() { return &___m21_6; }
	inline void set_m21_6(float value)
	{
		___m21_6 = value;
	}

	inline static int32_t get_offset_of_m31_7() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m31_7)); }
	inline float get_m31_7() const { return ___m31_7; }
	inline float* get_address_of_m31_7() { return &___m31_7; }
	inline void set_m31_7(float value)
	{
		___m31_7 = value;
	}

	inline static int32_t get_offset_of_m02_8() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m02_8)); }
	inline float get_m02_8() const { return ___m02_8; }
	inline float* get_address_of_m02_8() { return &___m02_8; }
	inline void set_m02_8(float value)
	{
		___m02_8 = value;
	}

	inline static int32_t get_offset_of_m12_9() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m12_9)); }
	inline float get_m12_9() const { return ___m12_9; }
	inline float* get_address_of_m12_9() { return &___m12_9; }
	inline void set_m12_9(float value)
	{
		___m12_9 = value;
	}

	inline static int32_t get_offset_of_m22_10() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m22_10)); }
	inline float get_m22_10() const { return ___m22_10; }
	inline float* get_address_of_m22_10() { return &___m22_10; }
	inline void set_m22_10(float value)
	{
		___m22_10 = value;
	}

	inline static int32_t get_offset_of_m32_11() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m32_11)); }
	inline float get_m32_11() const { return ___m32_11; }
	inline float* get_address_of_m32_11() { return &___m32_11; }
	inline void set_m32_11(float value)
	{
		___m32_11 = value;
	}

	inline static int32_t get_offset_of_m03_12() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m03_12)); }
	inline float get_m03_12() const { return ___m03_12; }
	inline float* get_address_of_m03_12() { return &___m03_12; }
	inline void set_m03_12(float value)
	{
		___m03_12 = value;
	}

	inline static int32_t get_offset_of_m13_13() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m13_13)); }
	inline float get_m13_13() const { return ___m13_13; }
	inline float* get_address_of_m13_13() { return &___m13_13; }
	inline void set_m13_13(float value)
	{
		___m13_13 = value;
	}

	inline static int32_t get_offset_of_m23_14() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m23_14)); }
	inline float get_m23_14() const { return ___m23_14; }
	inline float* get_address_of_m23_14() { return &___m23_14; }
	inline void set_m23_14(float value)
	{
		___m23_14 = value;
	}

	inline static int32_t get_offset_of_m33_15() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m33_15)); }
	inline float get_m33_15() const { return ___m33_15; }
	inline float* get_address_of_m33_15() { return &___m33_15; }
	inline void set_m33_15(float value)
	{
		___m33_15 = value;
	}
};

struct Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA_StaticFields
{
public:
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::zeroMatrix
	Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  ___zeroMatrix_16;
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::identityMatrix
	Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  ___identityMatrix_17;

public:
	inline static int32_t get_offset_of_zeroMatrix_16() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA_StaticFields, ___zeroMatrix_16)); }
	inline Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  get_zeroMatrix_16() const { return ___zeroMatrix_16; }
	inline Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA * get_address_of_zeroMatrix_16() { return &___zeroMatrix_16; }
	inline void set_zeroMatrix_16(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  value)
	{
		___zeroMatrix_16 = value;
	}

	inline static int32_t get_offset_of_identityMatrix_17() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA_StaticFields, ___identityMatrix_17)); }
	inline Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  get_identityMatrix_17() const { return ___identityMatrix_17; }
	inline Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA * get_address_of_identityMatrix_17() { return &___identityMatrix_17; }
	inline void set_identityMatrix_17(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  value)
	{
		___identityMatrix_17 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MATRIX4X4_T6BF60F70C9169DF14C9D2577672A44224B236ECA_H
#ifndef QUATERNION_T319F3319A7D43FFA5D819AD6C0A98851F0095357_H
#define QUATERNION_T319F3319A7D43FFA5D819AD6C0A98851F0095357_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Quaternion
struct  Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 
{
public:
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  value)
	{
		___identityQuaternion_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // QUATERNION_T319F3319A7D43FFA5D819AD6C0A98851F0095357_H
#ifndef GCACHIEVEMENTDATA_T5CBCF44628981C91C76C552716A7D551670DCE55_H
#define GCACHIEVEMENTDATA_T5CBCF44628981C91C76C552716A7D551670DCE55_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SocialPlatforms.GameCenter.GcAchievementData
struct  GcAchievementData_t5CBCF44628981C91C76C552716A7D551670DCE55 
{
public:
	// System.String UnityEngine.SocialPlatforms.GameCenter.GcAchievementData::m_Identifier
	String_t* ___m_Identifier_0;
	// System.Double UnityEngine.SocialPlatforms.GameCenter.GcAchievementData::m_PercentCompleted
	double ___m_PercentCompleted_1;
	// System.Int32 UnityEngine.SocialPlatforms.GameCenter.GcAchievementData::m_Completed
	int32_t ___m_Completed_2;
	// System.Int32 UnityEngine.SocialPlatforms.GameCenter.GcAchievementData::m_Hidden
	int32_t ___m_Hidden_3;
	// System.Int32 UnityEngine.SocialPlatforms.GameCenter.GcAchievementData::m_LastReportedDate
	int32_t ___m_LastReportedDate_4;

public:
	inline static int32_t get_offset_of_m_Identifier_0() { return static_cast<int32_t>(offsetof(GcAchievementData_t5CBCF44628981C91C76C552716A7D551670DCE55, ___m_Identifier_0)); }
	inline String_t* get_m_Identifier_0() const { return ___m_Identifier_0; }
	inline String_t** get_address_of_m_Identifier_0() { return &___m_Identifier_0; }
	inline void set_m_Identifier_0(String_t* value)
	{
		___m_Identifier_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_Identifier_0), value);
	}

	inline static int32_t get_offset_of_m_PercentCompleted_1() { return static_cast<int32_t>(offsetof(GcAchievementData_t5CBCF44628981C91C76C552716A7D551670DCE55, ___m_PercentCompleted_1)); }
	inline double get_m_PercentCompleted_1() const { return ___m_PercentCompleted_1; }
	inline double* get_address_of_m_PercentCompleted_1() { return &___m_PercentCompleted_1; }
	inline void set_m_PercentCompleted_1(double value)
	{
		___m_PercentCompleted_1 = value;
	}

	inline static int32_t get_offset_of_m_Completed_2() { return static_cast<int32_t>(offsetof(GcAchievementData_t5CBCF44628981C91C76C552716A7D551670DCE55, ___m_Completed_2)); }
	inline int32_t get_m_Completed_2() const { return ___m_Completed_2; }
	inline int32_t* get_address_of_m_Completed_2() { return &___m_Completed_2; }
	inline void set_m_Completed_2(int32_t value)
	{
		___m_Completed_2 = value;
	}

	inline static int32_t get_offset_of_m_Hidden_3() { return static_cast<int32_t>(offsetof(GcAchievementData_t5CBCF44628981C91C76C552716A7D551670DCE55, ___m_Hidden_3)); }
	inline int32_t get_m_Hidden_3() const { return ___m_Hidden_3; }
	inline int32_t* get_address_of_m_Hidden_3() { return &___m_Hidden_3; }
	inline void set_m_Hidden_3(int32_t value)
	{
		___m_Hidden_3 = value;
	}

	inline static int32_t get_offset_of_m_LastReportedDate_4() { return static_cast<int32_t>(offsetof(GcAchievementData_t5CBCF44628981C91C76C552716A7D551670DCE55, ___m_LastReportedDate_4)); }
	inline int32_t get_m_LastReportedDate_4() const { return ___m_LastReportedDate_4; }
	inline int32_t* get_address_of_m_LastReportedDate_4() { return &___m_LastReportedDate_4; }
	inline void set_m_LastReportedDate_4(int32_t value)
	{
		___m_LastReportedDate_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.SocialPlatforms.GameCenter.GcAchievementData
struct GcAchievementData_t5CBCF44628981C91C76C552716A7D551670DCE55_marshaled_pinvoke
{
	char* ___m_Identifier_0;
	double ___m_PercentCompleted_1;
	int32_t ___m_Completed_2;
	int32_t ___m_Hidden_3;
	int32_t ___m_LastReportedDate_4;
};
// Native definition for COM marshalling of UnityEngine.SocialPlatforms.GameCenter.GcAchievementData
struct GcAchievementData_t5CBCF44628981C91C76C552716A7D551670DCE55_marshaled_com
{
	Il2CppChar* ___m_Identifier_0;
	double ___m_PercentCompleted_1;
	int32_t ___m_Completed_2;
	int32_t ___m_Hidden_3;
	int32_t ___m_LastReportedDate_4;
};
#endif // GCACHIEVEMENTDATA_T5CBCF44628981C91C76C552716A7D551670DCE55_H
#ifndef GCACHIEVEMENTDESCRIPTIONDATA_T12849233B11B5241066E0D33B3681C2352CAF0A0_H
#define GCACHIEVEMENTDESCRIPTIONDATA_T12849233B11B5241066E0D33B3681C2352CAF0A0_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SocialPlatforms.GameCenter.GcAchievementDescriptionData
struct  GcAchievementDescriptionData_t12849233B11B5241066E0D33B3681C2352CAF0A0 
{
public:
	// System.String UnityEngine.SocialPlatforms.GameCenter.GcAchievementDescriptionData::m_Identifier
	String_t* ___m_Identifier_0;
	// System.String UnityEngine.SocialPlatforms.GameCenter.GcAchievementDescriptionData::m_Title
	String_t* ___m_Title_1;
	// UnityEngine.Texture2D UnityEngine.SocialPlatforms.GameCenter.GcAchievementDescriptionData::m_Image
	Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * ___m_Image_2;
	// System.String UnityEngine.SocialPlatforms.GameCenter.GcAchievementDescriptionData::m_AchievedDescription
	String_t* ___m_AchievedDescription_3;
	// System.String UnityEngine.SocialPlatforms.GameCenter.GcAchievementDescriptionData::m_UnachievedDescription
	String_t* ___m_UnachievedDescription_4;
	// System.Int32 UnityEngine.SocialPlatforms.GameCenter.GcAchievementDescriptionData::m_Hidden
	int32_t ___m_Hidden_5;
	// System.Int32 UnityEngine.SocialPlatforms.GameCenter.GcAchievementDescriptionData::m_Points
	int32_t ___m_Points_6;

public:
	inline static int32_t get_offset_of_m_Identifier_0() { return static_cast<int32_t>(offsetof(GcAchievementDescriptionData_t12849233B11B5241066E0D33B3681C2352CAF0A0, ___m_Identifier_0)); }
	inline String_t* get_m_Identifier_0() const { return ___m_Identifier_0; }
	inline String_t** get_address_of_m_Identifier_0() { return &___m_Identifier_0; }
	inline void set_m_Identifier_0(String_t* value)
	{
		___m_Identifier_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_Identifier_0), value);
	}

	inline static int32_t get_offset_of_m_Title_1() { return static_cast<int32_t>(offsetof(GcAchievementDescriptionData_t12849233B11B5241066E0D33B3681C2352CAF0A0, ___m_Title_1)); }
	inline String_t* get_m_Title_1() const { return ___m_Title_1; }
	inline String_t** get_address_of_m_Title_1() { return &___m_Title_1; }
	inline void set_m_Title_1(String_t* value)
	{
		___m_Title_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_Title_1), value);
	}

	inline static int32_t get_offset_of_m_Image_2() { return static_cast<int32_t>(offsetof(GcAchievementDescriptionData_t12849233B11B5241066E0D33B3681C2352CAF0A0, ___m_Image_2)); }
	inline Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * get_m_Image_2() const { return ___m_Image_2; }
	inline Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C ** get_address_of_m_Image_2() { return &___m_Image_2; }
	inline void set_m_Image_2(Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * value)
	{
		___m_Image_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_Image_2), value);
	}

	inline static int32_t get_offset_of_m_AchievedDescription_3() { return static_cast<int32_t>(offsetof(GcAchievementDescriptionData_t12849233B11B5241066E0D33B3681C2352CAF0A0, ___m_AchievedDescription_3)); }
	inline String_t* get_m_AchievedDescription_3() const { return ___m_AchievedDescription_3; }
	inline String_t** get_address_of_m_AchievedDescription_3() { return &___m_AchievedDescription_3; }
	inline void set_m_AchievedDescription_3(String_t* value)
	{
		___m_AchievedDescription_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_AchievedDescription_3), value);
	}

	inline static int32_t get_offset_of_m_UnachievedDescription_4() { return static_cast<int32_t>(offsetof(GcAchievementDescriptionData_t12849233B11B5241066E0D33B3681C2352CAF0A0, ___m_UnachievedDescription_4)); }
	inline String_t* get_m_UnachievedDescription_4() const { return ___m_UnachievedDescription_4; }
	inline String_t** get_address_of_m_UnachievedDescription_4() { return &___m_UnachievedDescription_4; }
	inline void set_m_UnachievedDescription_4(String_t* value)
	{
		___m_UnachievedDescription_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_UnachievedDescription_4), value);
	}

	inline static int32_t get_offset_of_m_Hidden_5() { return static_cast<int32_t>(offsetof(GcAchievementDescriptionData_t12849233B11B5241066E0D33B3681C2352CAF0A0, ___m_Hidden_5)); }
	inline int32_t get_m_Hidden_5() const { return ___m_Hidden_5; }
	inline int32_t* get_address_of_m_Hidden_5() { return &___m_Hidden_5; }
	inline void set_m_Hidden_5(int32_t value)
	{
		___m_Hidden_5 = value;
	}

	inline static int32_t get_offset_of_m_Points_6() { return static_cast<int32_t>(offsetof(GcAchievementDescriptionData_t12849233B11B5241066E0D33B3681C2352CAF0A0, ___m_Points_6)); }
	inline int32_t get_m_Points_6() const { return ___m_Points_6; }
	inline int32_t* get_address_of_m_Points_6() { return &___m_Points_6; }
	inline void set_m_Points_6(int32_t value)
	{
		___m_Points_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.SocialPlatforms.GameCenter.GcAchievementDescriptionData
struct GcAchievementDescriptionData_t12849233B11B5241066E0D33B3681C2352CAF0A0_marshaled_pinvoke
{
	char* ___m_Identifier_0;
	char* ___m_Title_1;
	Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * ___m_Image_2;
	char* ___m_AchievedDescription_3;
	char* ___m_UnachievedDescription_4;
	int32_t ___m_Hidden_5;
	int32_t ___m_Points_6;
};
// Native definition for COM marshalling of UnityEngine.SocialPlatforms.GameCenter.GcAchievementDescriptionData
struct GcAchievementDescriptionData_t12849233B11B5241066E0D33B3681C2352CAF0A0_marshaled_com
{
	Il2CppChar* ___m_Identifier_0;
	Il2CppChar* ___m_Title_1;
	Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * ___m_Image_2;
	Il2CppChar* ___m_AchievedDescription_3;
	Il2CppChar* ___m_UnachievedDescription_4;
	int32_t ___m_Hidden_5;
	int32_t ___m_Points_6;
};
#endif // GCACHIEVEMENTDESCRIPTIONDATA_T12849233B11B5241066E0D33B3681C2352CAF0A0_H
#ifndef GCSCOREDATA_T45EF6CC4038C34CE5823D33D1978C5A3F2E0D09A_H
#define GCSCOREDATA_T45EF6CC4038C34CE5823D33D1978C5A3F2E0D09A_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SocialPlatforms.GameCenter.GcScoreData
struct  GcScoreData_t45EF6CC4038C34CE5823D33D1978C5A3F2E0D09A 
{
public:
	// System.String UnityEngine.SocialPlatforms.GameCenter.GcScoreData::m_Category
	String_t* ___m_Category_0;
	// System.UInt32 UnityEngine.SocialPlatforms.GameCenter.GcScoreData::m_ValueLow
	uint32_t ___m_ValueLow_1;
	// System.Int32 UnityEngine.SocialPlatforms.GameCenter.GcScoreData::m_ValueHigh
	int32_t ___m_ValueHigh_2;
	// System.Int32 UnityEngine.SocialPlatforms.GameCenter.GcScoreData::m_Date
	int32_t ___m_Date_3;
	// System.String UnityEngine.SocialPlatforms.GameCenter.GcScoreData::m_FormattedValue
	String_t* ___m_FormattedValue_4;
	// System.String UnityEngine.SocialPlatforms.GameCenter.GcScoreData::m_PlayerID
	String_t* ___m_PlayerID_5;
	// System.Int32 UnityEngine.SocialPlatforms.GameCenter.GcScoreData::m_Rank
	int32_t ___m_Rank_6;

public:
	inline static int32_t get_offset_of_m_Category_0() { return static_cast<int32_t>(offsetof(GcScoreData_t45EF6CC4038C34CE5823D33D1978C5A3F2E0D09A, ___m_Category_0)); }
	inline String_t* get_m_Category_0() const { return ___m_Category_0; }
	inline String_t** get_address_of_m_Category_0() { return &___m_Category_0; }
	inline void set_m_Category_0(String_t* value)
	{
		___m_Category_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_Category_0), value);
	}

	inline static int32_t get_offset_of_m_ValueLow_1() { return static_cast<int32_t>(offsetof(GcScoreData_t45EF6CC4038C34CE5823D33D1978C5A3F2E0D09A, ___m_ValueLow_1)); }
	inline uint32_t get_m_ValueLow_1() const { return ___m_ValueLow_1; }
	inline uint32_t* get_address_of_m_ValueLow_1() { return &___m_ValueLow_1; }
	inline void set_m_ValueLow_1(uint32_t value)
	{
		___m_ValueLow_1 = value;
	}

	inline static int32_t get_offset_of_m_ValueHigh_2() { return static_cast<int32_t>(offsetof(GcScoreData_t45EF6CC4038C34CE5823D33D1978C5A3F2E0D09A, ___m_ValueHigh_2)); }
	inline int32_t get_m_ValueHigh_2() const { return ___m_ValueHigh_2; }
	inline int32_t* get_address_of_m_ValueHigh_2() { return &___m_ValueHigh_2; }
	inline void set_m_ValueHigh_2(int32_t value)
	{
		___m_ValueHigh_2 = value;
	}

	inline static int32_t get_offset_of_m_Date_3() { return static_cast<int32_t>(offsetof(GcScoreData_t45EF6CC4038C34CE5823D33D1978C5A3F2E0D09A, ___m_Date_3)); }
	inline int32_t get_m_Date_3() const { return ___m_Date_3; }
	inline int32_t* get_address_of_m_Date_3() { return &___m_Date_3; }
	inline void set_m_Date_3(int32_t value)
	{
		___m_Date_3 = value;
	}

	inline static int32_t get_offset_of_m_FormattedValue_4() { return static_cast<int32_t>(offsetof(GcScoreData_t45EF6CC4038C34CE5823D33D1978C5A3F2E0D09A, ___m_FormattedValue_4)); }
	inline String_t* get_m_FormattedValue_4() const { return ___m_FormattedValue_4; }
	inline String_t** get_address_of_m_FormattedValue_4() { return &___m_FormattedValue_4; }
	inline void set_m_FormattedValue_4(String_t* value)
	{
		___m_FormattedValue_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_FormattedValue_4), value);
	}

	inline static int32_t get_offset_of_m_PlayerID_5() { return static_cast<int32_t>(offsetof(GcScoreData_t45EF6CC4038C34CE5823D33D1978C5A3F2E0D09A, ___m_PlayerID_5)); }
	inline String_t* get_m_PlayerID_5() const { return ___m_PlayerID_5; }
	inline String_t** get_address_of_m_PlayerID_5() { return &___m_PlayerID_5; }
	inline void set_m_PlayerID_5(String_t* value)
	{
		___m_PlayerID_5 = value;
		Il2CppCodeGenWriteBarrier((&___m_PlayerID_5), value);
	}

	inline static int32_t get_offset_of_m_Rank_6() { return static_cast<int32_t>(offsetof(GcScoreData_t45EF6CC4038C34CE5823D33D1978C5A3F2E0D09A, ___m_Rank_6)); }
	inline int32_t get_m_Rank_6() const { return ___m_Rank_6; }
	inline int32_t* get_address_of_m_Rank_6() { return &___m_Rank_6; }
	inline void set_m_Rank_6(int32_t value)
	{
		___m_Rank_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.SocialPlatforms.GameCenter.GcScoreData
struct GcScoreData_t45EF6CC4038C34CE5823D33D1978C5A3F2E0D09A_marshaled_pinvoke
{
	char* ___m_Category_0;
	uint32_t ___m_ValueLow_1;
	int32_t ___m_ValueHigh_2;
	int32_t ___m_Date_3;
	char* ___m_FormattedValue_4;
	char* ___m_PlayerID_5;
	int32_t ___m_Rank_6;
};
// Native definition for COM marshalling of UnityEngine.SocialPlatforms.GameCenter.GcScoreData
struct GcScoreData_t45EF6CC4038C34CE5823D33D1978C5A3F2E0D09A_marshaled_com
{
	Il2CppChar* ___m_Category_0;
	uint32_t ___m_ValueLow_1;
	int32_t ___m_ValueHigh_2;
	int32_t ___m_Date_3;
	Il2CppChar* ___m_FormattedValue_4;
	Il2CppChar* ___m_PlayerID_5;
	int32_t ___m_Rank_6;
};
#endif // GCSCOREDATA_T45EF6CC4038C34CE5823D33D1978C5A3F2E0D09A_H
#ifndef GCUSERPROFILEDATA_TDCEBF6CF74E9EBC0B9F9847CE96118169391B57D_H
#define GCUSERPROFILEDATA_TDCEBF6CF74E9EBC0B9F9847CE96118169391B57D_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SocialPlatforms.GameCenter.GcUserProfileData
struct  GcUserProfileData_tDCEBF6CF74E9EBC0B9F9847CE96118169391B57D 
{
public:
	// System.String UnityEngine.SocialPlatforms.GameCenter.GcUserProfileData::userName
	String_t* ___userName_0;
	// System.String UnityEngine.SocialPlatforms.GameCenter.GcUserProfileData::userID
	String_t* ___userID_1;
	// System.Int32 UnityEngine.SocialPlatforms.GameCenter.GcUserProfileData::isFriend
	int32_t ___isFriend_2;
	// UnityEngine.Texture2D UnityEngine.SocialPlatforms.GameCenter.GcUserProfileData::image
	Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * ___image_3;

public:
	inline static int32_t get_offset_of_userName_0() { return static_cast<int32_t>(offsetof(GcUserProfileData_tDCEBF6CF74E9EBC0B9F9847CE96118169391B57D, ___userName_0)); }
	inline String_t* get_userName_0() const { return ___userName_0; }
	inline String_t** get_address_of_userName_0() { return &___userName_0; }
	inline void set_userName_0(String_t* value)
	{
		___userName_0 = value;
		Il2CppCodeGenWriteBarrier((&___userName_0), value);
	}

	inline static int32_t get_offset_of_userID_1() { return static_cast<int32_t>(offsetof(GcUserProfileData_tDCEBF6CF74E9EBC0B9F9847CE96118169391B57D, ___userID_1)); }
	inline String_t* get_userID_1() const { return ___userID_1; }
	inline String_t** get_address_of_userID_1() { return &___userID_1; }
	inline void set_userID_1(String_t* value)
	{
		___userID_1 = value;
		Il2CppCodeGenWriteBarrier((&___userID_1), value);
	}

	inline static int32_t get_offset_of_isFriend_2() { return static_cast<int32_t>(offsetof(GcUserProfileData_tDCEBF6CF74E9EBC0B9F9847CE96118169391B57D, ___isFriend_2)); }
	inline int32_t get_isFriend_2() const { return ___isFriend_2; }
	inline int32_t* get_address_of_isFriend_2() { return &___isFriend_2; }
	inline void set_isFriend_2(int32_t value)
	{
		___isFriend_2 = value;
	}

	inline static int32_t get_offset_of_image_3() { return static_cast<int32_t>(offsetof(GcUserProfileData_tDCEBF6CF74E9EBC0B9F9847CE96118169391B57D, ___image_3)); }
	inline Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * get_image_3() const { return ___image_3; }
	inline Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C ** get_address_of_image_3() { return &___image_3; }
	inline void set_image_3(Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * value)
	{
		___image_3 = value;
		Il2CppCodeGenWriteBarrier((&___image_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.SocialPlatforms.GameCenter.GcUserProfileData
struct GcUserProfileData_tDCEBF6CF74E9EBC0B9F9847CE96118169391B57D_marshaled_pinvoke
{
	char* ___userName_0;
	char* ___userID_1;
	int32_t ___isFriend_2;
	Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * ___image_3;
};
// Native definition for COM marshalling of UnityEngine.SocialPlatforms.GameCenter.GcUserProfileData
struct GcUserProfileData_tDCEBF6CF74E9EBC0B9F9847CE96118169391B57D_marshaled_com
{
	Il2CppChar* ___userName_0;
	Il2CppChar* ___userID_1;
	int32_t ___isFriend_2;
	Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * ___image_3;
};
#endif // GCUSERPROFILEDATA_TDCEBF6CF74E9EBC0B9F9847CE96118169391B57D_H
#ifndef RANGE_T2332F6C6E1E19A355F5C1A93FF4434B92FBDBABC_H
#define RANGE_T2332F6C6E1E19A355F5C1A93FF4434B92FBDBABC_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SocialPlatforms.Range
struct  Range_t2332F6C6E1E19A355F5C1A93FF4434B92FBDBABC 
{
public:
	// System.Int32 UnityEngine.SocialPlatforms.Range::from
	int32_t ___from_0;
	// System.Int32 UnityEngine.SocialPlatforms.Range::count
	int32_t ___count_1;

public:
	inline static int32_t get_offset_of_from_0() { return static_cast<int32_t>(offsetof(Range_t2332F6C6E1E19A355F5C1A93FF4434B92FBDBABC, ___from_0)); }
	inline int32_t get_from_0() const { return ___from_0; }
	inline int32_t* get_address_of_from_0() { return &___from_0; }
	inline void set_from_0(int32_t value)
	{
		___from_0 = value;
	}

	inline static int32_t get_offset_of_count_1() { return static_cast<int32_t>(offsetof(Range_t2332F6C6E1E19A355F5C1A93FF4434B92FBDBABC, ___count_1)); }
	inline int32_t get_count_1() const { return ___count_1; }
	inline int32_t* get_address_of_count_1() { return &___count_1; }
	inline void set_count_1(int32_t value)
	{
		___count_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RANGE_T2332F6C6E1E19A355F5C1A93FF4434B92FBDBABC_H
#ifndef TILEANIMATIONDATA_T2A9C81AD1F3E916C2DE292A6F3953FC8C38EFDA8_H
#define TILEANIMATIONDATA_T2A9C81AD1F3E916C2DE292A6F3953FC8C38EFDA8_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Tilemaps.TileAnimationData
struct  TileAnimationData_t2A9C81AD1F3E916C2DE292A6F3953FC8C38EFDA8 
{
public:
	// UnityEngine.Sprite[] UnityEngine.Tilemaps.TileAnimationData::m_AnimatedSprites
	SpriteU5BU5D_tF94AD07E062BC08ECD019A21E7A7B861654905F7* ___m_AnimatedSprites_0;
	// System.Single UnityEngine.Tilemaps.TileAnimationData::m_AnimationSpeed
	float ___m_AnimationSpeed_1;
	// System.Single UnityEngine.Tilemaps.TileAnimationData::m_AnimationStartTime
	float ___m_AnimationStartTime_2;

public:
	inline static int32_t get_offset_of_m_AnimatedSprites_0() { return static_cast<int32_t>(offsetof(TileAnimationData_t2A9C81AD1F3E916C2DE292A6F3953FC8C38EFDA8, ___m_AnimatedSprites_0)); }
	inline SpriteU5BU5D_tF94AD07E062BC08ECD019A21E7A7B861654905F7* get_m_AnimatedSprites_0() const { return ___m_AnimatedSprites_0; }
	inline SpriteU5BU5D_tF94AD07E062BC08ECD019A21E7A7B861654905F7** get_address_of_m_AnimatedSprites_0() { return &___m_AnimatedSprites_0; }
	inline void set_m_AnimatedSprites_0(SpriteU5BU5D_tF94AD07E062BC08ECD019A21E7A7B861654905F7* value)
	{
		___m_AnimatedSprites_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_AnimatedSprites_0), value);
	}

	inline static int32_t get_offset_of_m_AnimationSpeed_1() { return static_cast<int32_t>(offsetof(TileAnimationData_t2A9C81AD1F3E916C2DE292A6F3953FC8C38EFDA8, ___m_AnimationSpeed_1)); }
	inline float get_m_AnimationSpeed_1() const { return ___m_AnimationSpeed_1; }
	inline float* get_address_of_m_AnimationSpeed_1() { return &___m_AnimationSpeed_1; }
	inline void set_m_AnimationSpeed_1(float value)
	{
		___m_AnimationSpeed_1 = value;
	}

	inline static int32_t get_offset_of_m_AnimationStartTime_2() { return static_cast<int32_t>(offsetof(TileAnimationData_t2A9C81AD1F3E916C2DE292A6F3953FC8C38EFDA8, ___m_AnimationStartTime_2)); }
	inline float get_m_AnimationStartTime_2() const { return ___m_AnimationStartTime_2; }
	inline float* get_address_of_m_AnimationStartTime_2() { return &___m_AnimationStartTime_2; }
	inline void set_m_AnimationStartTime_2(float value)
	{
		___m_AnimationStartTime_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Tilemaps.TileAnimationData
struct TileAnimationData_t2A9C81AD1F3E916C2DE292A6F3953FC8C38EFDA8_marshaled_pinvoke
{
	SpriteU5BU5D_tF94AD07E062BC08ECD019A21E7A7B861654905F7* ___m_AnimatedSprites_0;
	float ___m_AnimationSpeed_1;
	float ___m_AnimationStartTime_2;
};
// Native definition for COM marshalling of UnityEngine.Tilemaps.TileAnimationData
struct TileAnimationData_t2A9C81AD1F3E916C2DE292A6F3953FC8C38EFDA8_marshaled_com
{
	SpriteU5BU5D_tF94AD07E062BC08ECD019A21E7A7B861654905F7* ___m_AnimatedSprites_0;
	float ___m_AnimationSpeed_1;
	float ___m_AnimationStartTime_2;
};
#endif // TILEANIMATIONDATA_T2A9C81AD1F3E916C2DE292A6F3953FC8C38EFDA8_H
#ifndef VECTOR3_TDCF05E21F632FE2BA260C06E0D10CA81513E6720_H
#define VECTOR3_TDCF05E21F632FE2BA260C06E0D10CA81513E6720_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector3
struct  Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___zeroVector_5)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___oneVector_6)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___upVector_7)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___downVector_8)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___leftVector_9)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___rightVector_10)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___forwardVector_11)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___backVector_12)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___negativeInfinityVector_14 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR3_TDCF05E21F632FE2BA260C06E0D10CA81513E6720_H
#ifndef YOGASIZE_T0F2077727A4CBD4C36F3DC0CBE1FB0A67D9EAD23_H
#define YOGASIZE_T0F2077727A4CBD4C36F3DC0CBE1FB0A67D9EAD23_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Yoga.YogaSize
struct  YogaSize_t0F2077727A4CBD4C36F3DC0CBE1FB0A67D9EAD23 
{
public:
	// System.Single UnityEngine.Yoga.YogaSize::width
	float ___width_0;
	// System.Single UnityEngine.Yoga.YogaSize::height
	float ___height_1;

public:
	inline static int32_t get_offset_of_width_0() { return static_cast<int32_t>(offsetof(YogaSize_t0F2077727A4CBD4C36F3DC0CBE1FB0A67D9EAD23, ___width_0)); }
	inline float get_width_0() const { return ___width_0; }
	inline float* get_address_of_width_0() { return &___width_0; }
	inline void set_width_0(float value)
	{
		___width_0 = value;
	}

	inline static int32_t get_offset_of_height_1() { return static_cast<int32_t>(offsetof(YogaSize_t0F2077727A4CBD4C36F3DC0CBE1FB0A67D9EAD23, ___height_1)); }
	inline float get_height_1() const { return ___height_1; }
	inline float* get_address_of_height_1() { return &___height_1; }
	inline void set_height_1(float value)
	{
		___height_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // YOGASIZE_T0F2077727A4CBD4C36F3DC0CBE1FB0A67D9EAD23_H
#ifndef DELEGATE_T_H
#define DELEGATE_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Delegate
struct  Delegate_t  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_7;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_8;
	// System.DelegateData System.Delegate::data
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_10;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_target_2), value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_extra_arg_5() { return static_cast<int32_t>(offsetof(Delegate_t, ___extra_arg_5)); }
	inline intptr_t get_extra_arg_5() const { return ___extra_arg_5; }
	inline intptr_t* get_address_of_extra_arg_5() { return &___extra_arg_5; }
	inline void set_extra_arg_5(intptr_t value)
	{
		___extra_arg_5 = value;
	}

	inline static int32_t get_offset_of_method_code_6() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_code_6)); }
	inline intptr_t get_method_code_6() const { return ___method_code_6; }
	inline intptr_t* get_address_of_method_code_6() { return &___method_code_6; }
	inline void set_method_code_6(intptr_t value)
	{
		___method_code_6 = value;
	}

	inline static int32_t get_offset_of_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_info_7)); }
	inline MethodInfo_t * get_method_info_7() const { return ___method_info_7; }
	inline MethodInfo_t ** get_address_of_method_info_7() { return &___method_info_7; }
	inline void set_method_info_7(MethodInfo_t * value)
	{
		___method_info_7 = value;
		Il2CppCodeGenWriteBarrier((&___method_info_7), value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((&___original_method_info_8), value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t, ___data_9)); }
	inline DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * get_data_9() const { return ___data_9; }
	inline DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((&___data_9), value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_is_virtual_10)); }
	inline bool get_method_is_virtual_10() const { return ___method_is_virtual_10; }
	inline bool* get_address_of_method_is_virtual_10() { return &___method_is_virtual_10; }
	inline void set_method_is_virtual_10(bool value)
	{
		___method_is_virtual_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
	int32_t ___method_is_virtual_10;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
	int32_t ___method_is_virtual_10;
};
#endif // DELEGATE_T_H
#ifndef ANIMATIONEVENTSOURCE_T0CA86CB3D775209B46F475A99887C93530F20702_H
#define ANIMATIONEVENTSOURCE_T0CA86CB3D775209B46F475A99887C93530F20702_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AnimationEventSource
struct  AnimationEventSource_t0CA86CB3D775209B46F475A99887C93530F20702 
{
public:
	// System.Int32 UnityEngine.AnimationEventSource::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AnimationEventSource_t0CA86CB3D775209B46F475A99887C93530F20702, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ANIMATIONEVENTSOURCE_T0CA86CB3D775209B46F475A99887C93530F20702_H
#ifndef ASYNCOPERATION_T304C51ABED8AE734CC8DDDFE13013D8D5A44641D_H
#define ASYNCOPERATION_T304C51ABED8AE734CC8DDDFE13013D8D5A44641D_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AsyncOperation
struct  AsyncOperation_t304C51ABED8AE734CC8DDDFE13013D8D5A44641D  : public YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44
{
public:
	// System.IntPtr UnityEngine.AsyncOperation::m_Ptr
	intptr_t ___m_Ptr_0;
	// System.Action`1<UnityEngine.AsyncOperation> UnityEngine.AsyncOperation::m_completeCallback
	Action_1_tCBF754C290FAE894631BED8FD56E9E22C4C187F9 * ___m_completeCallback_1;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(AsyncOperation_t304C51ABED8AE734CC8DDDFE13013D8D5A44641D, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}

	inline static int32_t get_offset_of_m_completeCallback_1() { return static_cast<int32_t>(offsetof(AsyncOperation_t304C51ABED8AE734CC8DDDFE13013D8D5A44641D, ___m_completeCallback_1)); }
	inline Action_1_tCBF754C290FAE894631BED8FD56E9E22C4C187F9 * get_m_completeCallback_1() const { return ___m_completeCallback_1; }
	inline Action_1_tCBF754C290FAE894631BED8FD56E9E22C4C187F9 ** get_address_of_m_completeCallback_1() { return &___m_completeCallback_1; }
	inline void set_m_completeCallback_1(Action_1_tCBF754C290FAE894631BED8FD56E9E22C4C187F9 * value)
	{
		___m_completeCallback_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_completeCallback_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.AsyncOperation
struct AsyncOperation_t304C51ABED8AE734CC8DDDFE13013D8D5A44641D_marshaled_pinvoke : public YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	Il2CppMethodPointer ___m_completeCallback_1;
};
// Native definition for COM marshalling of UnityEngine.AsyncOperation
struct AsyncOperation_t304C51ABED8AE734CC8DDDFE13013D8D5A44641D_marshaled_com : public YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_marshaled_com
{
	intptr_t ___m_Ptr_0;
	Il2CppMethodPointer ___m_completeCallback_1;
};
#endif // ASYNCOPERATION_T304C51ABED8AE734CC8DDDFE13013D8D5A44641D_H
#ifndef ERRORCODE_TCC2BF2B1CF6C6645A76C1DEE65D4AA4A527FEC7A_H
#define ERRORCODE_TCC2BF2B1CF6C6645A76C1DEE65D4AA4A527FEC7A_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.TerrainAPI.TerrainUtility/TerrainMap/ErrorCode
struct  ErrorCode_tCC2BF2B1CF6C6645A76C1DEE65D4AA4A527FEC7A 
{
public:
	// System.Int32 UnityEngine.Experimental.TerrainAPI.TerrainUtility/TerrainMap/ErrorCode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ErrorCode_tCC2BF2B1CF6C6645A76C1DEE65D4AA4A527FEC7A, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ERRORCODE_TCC2BF2B1CF6C6645A76C1DEE65D4AA4A527FEC7A_H
#ifndef VFXEVENTATTRIBUTE_T8FE74C5425505C55B4F79299C569CCE1A47BE325_H
#define VFXEVENTATTRIBUTE_T8FE74C5425505C55B4F79299C569CCE1A47BE325_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.VFX.VFXEventAttribute
struct  VFXEventAttribute_t8FE74C5425505C55B4F79299C569CCE1A47BE325  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Experimental.VFX.VFXEventAttribute::m_Ptr
	intptr_t ___m_Ptr_0;
	// System.Boolean UnityEngine.Experimental.VFX.VFXEventAttribute::m_Owner
	bool ___m_Owner_1;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(VFXEventAttribute_t8FE74C5425505C55B4F79299C569CCE1A47BE325, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}

	inline static int32_t get_offset_of_m_Owner_1() { return static_cast<int32_t>(offsetof(VFXEventAttribute_t8FE74C5425505C55B4F79299C569CCE1A47BE325, ___m_Owner_1)); }
	inline bool get_m_Owner_1() const { return ___m_Owner_1; }
	inline bool* get_address_of_m_Owner_1() { return &___m_Owner_1; }
	inline void set_m_Owner_1(bool value)
	{
		___m_Owner_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Experimental.VFX.VFXEventAttribute
struct VFXEventAttribute_t8FE74C5425505C55B4F79299C569CCE1A47BE325_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	int32_t ___m_Owner_1;
};
// Native definition for COM marshalling of UnityEngine.Experimental.VFX.VFXEventAttribute
struct VFXEventAttribute_t8FE74C5425505C55B4F79299C569CCE1A47BE325_marshaled_com
{
	intptr_t ___m_Ptr_0;
	int32_t ___m_Owner_1;
};
#endif // VFXEVENTATTRIBUTE_T8FE74C5425505C55B4F79299C569CCE1A47BE325_H
#ifndef VFXEXPRESSIONVALUES_TBEEC793A9CD5134400899D1AAE1ABF13AF6562F2_H
#define VFXEXPRESSIONVALUES_TBEEC793A9CD5134400899D1AAE1ABF13AF6562F2_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.VFX.VFXExpressionValues
struct  VFXExpressionValues_tBEEC793A9CD5134400899D1AAE1ABF13AF6562F2  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Experimental.VFX.VFXExpressionValues::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(VFXExpressionValues_tBEEC793A9CD5134400899D1AAE1ABF13AF6562F2, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Experimental.VFX.VFXExpressionValues
struct VFXExpressionValues_tBEEC793A9CD5134400899D1AAE1ABF13AF6562F2_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Experimental.VFX.VFXExpressionValues
struct VFXExpressionValues_tBEEC793A9CD5134400899D1AAE1ABF13AF6562F2_marshaled_com
{
	intptr_t ___m_Ptr_0;
};
#endif // VFXEXPRESSIONVALUES_TBEEC793A9CD5134400899D1AAE1ABF13AF6562F2_H
#ifndef VFXSPAWNERSTATE_T614A1AADC2EDB20E82A625BE053A22DB31D89AC7_H
#define VFXSPAWNERSTATE_T614A1AADC2EDB20E82A625BE053A22DB31D89AC7_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.VFX.VFXSpawnerState
struct  VFXSpawnerState_t614A1AADC2EDB20E82A625BE053A22DB31D89AC7  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Experimental.VFX.VFXSpawnerState::m_Ptr
	intptr_t ___m_Ptr_0;
	// System.Boolean UnityEngine.Experimental.VFX.VFXSpawnerState::m_Owner
	bool ___m_Owner_1;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(VFXSpawnerState_t614A1AADC2EDB20E82A625BE053A22DB31D89AC7, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}

	inline static int32_t get_offset_of_m_Owner_1() { return static_cast<int32_t>(offsetof(VFXSpawnerState_t614A1AADC2EDB20E82A625BE053A22DB31D89AC7, ___m_Owner_1)); }
	inline bool get_m_Owner_1() const { return ___m_Owner_1; }
	inline bool* get_address_of_m_Owner_1() { return &___m_Owner_1; }
	inline void set_m_Owner_1(bool value)
	{
		___m_Owner_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Experimental.VFX.VFXSpawnerState
struct VFXSpawnerState_t614A1AADC2EDB20E82A625BE053A22DB31D89AC7_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	int32_t ___m_Owner_1;
};
// Native definition for COM marshalling of UnityEngine.Experimental.VFX.VFXSpawnerState
struct VFXSpawnerState_t614A1AADC2EDB20E82A625BE053A22DB31D89AC7_marshaled_com
{
	intptr_t ___m_Ptr_0;
	int32_t ___m_Owner_1;
};
#endif // VFXSPAWNERSTATE_T614A1AADC2EDB20E82A625BE053A22DB31D89AC7_H
#ifndef HUMANLIMIT_T6AB2A599FC9E1F7E1598954FA9A0E568ECA5B6F3_H
#define HUMANLIMIT_T6AB2A599FC9E1F7E1598954FA9A0E568ECA5B6F3_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.HumanLimit
struct  HumanLimit_t6AB2A599FC9E1F7E1598954FA9A0E568ECA5B6F3 
{
public:
	// UnityEngine.Vector3 UnityEngine.HumanLimit::m_Min
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___m_Min_0;
	// UnityEngine.Vector3 UnityEngine.HumanLimit::m_Max
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___m_Max_1;
	// UnityEngine.Vector3 UnityEngine.HumanLimit::m_Center
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___m_Center_2;
	// System.Single UnityEngine.HumanLimit::m_AxisLength
	float ___m_AxisLength_3;
	// System.Int32 UnityEngine.HumanLimit::m_UseDefaultValues
	int32_t ___m_UseDefaultValues_4;

public:
	inline static int32_t get_offset_of_m_Min_0() { return static_cast<int32_t>(offsetof(HumanLimit_t6AB2A599FC9E1F7E1598954FA9A0E568ECA5B6F3, ___m_Min_0)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_m_Min_0() const { return ___m_Min_0; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_m_Min_0() { return &___m_Min_0; }
	inline void set_m_Min_0(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___m_Min_0 = value;
	}

	inline static int32_t get_offset_of_m_Max_1() { return static_cast<int32_t>(offsetof(HumanLimit_t6AB2A599FC9E1F7E1598954FA9A0E568ECA5B6F3, ___m_Max_1)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_m_Max_1() const { return ___m_Max_1; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_m_Max_1() { return &___m_Max_1; }
	inline void set_m_Max_1(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___m_Max_1 = value;
	}

	inline static int32_t get_offset_of_m_Center_2() { return static_cast<int32_t>(offsetof(HumanLimit_t6AB2A599FC9E1F7E1598954FA9A0E568ECA5B6F3, ___m_Center_2)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_m_Center_2() const { return ___m_Center_2; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_m_Center_2() { return &___m_Center_2; }
	inline void set_m_Center_2(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___m_Center_2 = value;
	}

	inline static int32_t get_offset_of_m_AxisLength_3() { return static_cast<int32_t>(offsetof(HumanLimit_t6AB2A599FC9E1F7E1598954FA9A0E568ECA5B6F3, ___m_AxisLength_3)); }
	inline float get_m_AxisLength_3() const { return ___m_AxisLength_3; }
	inline float* get_address_of_m_AxisLength_3() { return &___m_AxisLength_3; }
	inline void set_m_AxisLength_3(float value)
	{
		___m_AxisLength_3 = value;
	}

	inline static int32_t get_offset_of_m_UseDefaultValues_4() { return static_cast<int32_t>(offsetof(HumanLimit_t6AB2A599FC9E1F7E1598954FA9A0E568ECA5B6F3, ___m_UseDefaultValues_4)); }
	inline int32_t get_m_UseDefaultValues_4() const { return ___m_UseDefaultValues_4; }
	inline int32_t* get_address_of_m_UseDefaultValues_4() { return &___m_UseDefaultValues_4; }
	inline void set_m_UseDefaultValues_4(int32_t value)
	{
		___m_UseDefaultValues_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HUMANLIMIT_T6AB2A599FC9E1F7E1598954FA9A0E568ECA5B6F3_H
#ifndef CERTIFICATEHANDLER_TBD070BF4150A44AB482FD36EA3882C363117E8C0_H
#define CERTIFICATEHANDLER_TBD070BF4150A44AB482FD36EA3882C363117E8C0_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.CertificateHandler
struct  CertificateHandler_tBD070BF4150A44AB482FD36EA3882C363117E8C0  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Networking.CertificateHandler::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(CertificateHandler_tBD070BF4150A44AB482FD36EA3882C363117E8C0, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Networking.CertificateHandler
struct CertificateHandler_tBD070BF4150A44AB482FD36EA3882C363117E8C0_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Networking.CertificateHandler
struct CertificateHandler_tBD070BF4150A44AB482FD36EA3882C363117E8C0_marshaled_com
{
	intptr_t ___m_Ptr_0;
};
#endif // CERTIFICATEHANDLER_TBD070BF4150A44AB482FD36EA3882C363117E8C0_H
#ifndef OBJECT_TAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_H
#define OBJECT_TAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Object
struct  Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};
#endif // OBJECT_TAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_H
#ifndef PARTICLE_T64AF74F5D9C7EE7018AD98F29E4FF653558A581E_H
#define PARTICLE_T64AF74F5D9C7EE7018AD98F29E4FF653558A581E_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.ParticleSystem/Particle
struct  Particle_t64AF74F5D9C7EE7018AD98F29E4FF653558A581E 
{
public:
	// UnityEngine.Vector3 UnityEngine.ParticleSystem/Particle::m_Position
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___m_Position_0;
	// UnityEngine.Vector3 UnityEngine.ParticleSystem/Particle::m_Velocity
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___m_Velocity_1;
	// UnityEngine.Vector3 UnityEngine.ParticleSystem/Particle::m_AnimatedVelocity
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___m_AnimatedVelocity_2;
	// UnityEngine.Vector3 UnityEngine.ParticleSystem/Particle::m_InitialVelocity
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___m_InitialVelocity_3;
	// UnityEngine.Vector3 UnityEngine.ParticleSystem/Particle::m_AxisOfRotation
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___m_AxisOfRotation_4;
	// UnityEngine.Vector3 UnityEngine.ParticleSystem/Particle::m_Rotation
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___m_Rotation_5;
	// UnityEngine.Vector3 UnityEngine.ParticleSystem/Particle::m_AngularVelocity
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___m_AngularVelocity_6;
	// UnityEngine.Vector3 UnityEngine.ParticleSystem/Particle::m_StartSize
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___m_StartSize_7;
	// UnityEngine.Color32 UnityEngine.ParticleSystem/Particle::m_StartColor
	Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  ___m_StartColor_8;
	// System.UInt32 UnityEngine.ParticleSystem/Particle::m_RandomSeed
	uint32_t ___m_RandomSeed_9;
	// System.Single UnityEngine.ParticleSystem/Particle::m_Lifetime
	float ___m_Lifetime_10;
	// System.Single UnityEngine.ParticleSystem/Particle::m_StartLifetime
	float ___m_StartLifetime_11;
	// System.Single UnityEngine.ParticleSystem/Particle::m_EmitAccumulator0
	float ___m_EmitAccumulator0_12;
	// System.Single UnityEngine.ParticleSystem/Particle::m_EmitAccumulator1
	float ___m_EmitAccumulator1_13;
	// System.UInt32 UnityEngine.ParticleSystem/Particle::m_Flags
	uint32_t ___m_Flags_14;

public:
	inline static int32_t get_offset_of_m_Position_0() { return static_cast<int32_t>(offsetof(Particle_t64AF74F5D9C7EE7018AD98F29E4FF653558A581E, ___m_Position_0)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_m_Position_0() const { return ___m_Position_0; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_m_Position_0() { return &___m_Position_0; }
	inline void set_m_Position_0(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___m_Position_0 = value;
	}

	inline static int32_t get_offset_of_m_Velocity_1() { return static_cast<int32_t>(offsetof(Particle_t64AF74F5D9C7EE7018AD98F29E4FF653558A581E, ___m_Velocity_1)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_m_Velocity_1() const { return ___m_Velocity_1; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_m_Velocity_1() { return &___m_Velocity_1; }
	inline void set_m_Velocity_1(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___m_Velocity_1 = value;
	}

	inline static int32_t get_offset_of_m_AnimatedVelocity_2() { return static_cast<int32_t>(offsetof(Particle_t64AF74F5D9C7EE7018AD98F29E4FF653558A581E, ___m_AnimatedVelocity_2)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_m_AnimatedVelocity_2() const { return ___m_AnimatedVelocity_2; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_m_AnimatedVelocity_2() { return &___m_AnimatedVelocity_2; }
	inline void set_m_AnimatedVelocity_2(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___m_AnimatedVelocity_2 = value;
	}

	inline static int32_t get_offset_of_m_InitialVelocity_3() { return static_cast<int32_t>(offsetof(Particle_t64AF74F5D9C7EE7018AD98F29E4FF653558A581E, ___m_InitialVelocity_3)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_m_InitialVelocity_3() const { return ___m_InitialVelocity_3; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_m_InitialVelocity_3() { return &___m_InitialVelocity_3; }
	inline void set_m_InitialVelocity_3(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___m_InitialVelocity_3 = value;
	}

	inline static int32_t get_offset_of_m_AxisOfRotation_4() { return static_cast<int32_t>(offsetof(Particle_t64AF74F5D9C7EE7018AD98F29E4FF653558A581E, ___m_AxisOfRotation_4)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_m_AxisOfRotation_4() const { return ___m_AxisOfRotation_4; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_m_AxisOfRotation_4() { return &___m_AxisOfRotation_4; }
	inline void set_m_AxisOfRotation_4(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___m_AxisOfRotation_4 = value;
	}

	inline static int32_t get_offset_of_m_Rotation_5() { return static_cast<int32_t>(offsetof(Particle_t64AF74F5D9C7EE7018AD98F29E4FF653558A581E, ___m_Rotation_5)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_m_Rotation_5() const { return ___m_Rotation_5; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_m_Rotation_5() { return &___m_Rotation_5; }
	inline void set_m_Rotation_5(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___m_Rotation_5 = value;
	}

	inline static int32_t get_offset_of_m_AngularVelocity_6() { return static_cast<int32_t>(offsetof(Particle_t64AF74F5D9C7EE7018AD98F29E4FF653558A581E, ___m_AngularVelocity_6)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_m_AngularVelocity_6() const { return ___m_AngularVelocity_6; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_m_AngularVelocity_6() { return &___m_AngularVelocity_6; }
	inline void set_m_AngularVelocity_6(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___m_AngularVelocity_6 = value;
	}

	inline static int32_t get_offset_of_m_StartSize_7() { return static_cast<int32_t>(offsetof(Particle_t64AF74F5D9C7EE7018AD98F29E4FF653558A581E, ___m_StartSize_7)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_m_StartSize_7() const { return ___m_StartSize_7; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_m_StartSize_7() { return &___m_StartSize_7; }
	inline void set_m_StartSize_7(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___m_StartSize_7 = value;
	}

	inline static int32_t get_offset_of_m_StartColor_8() { return static_cast<int32_t>(offsetof(Particle_t64AF74F5D9C7EE7018AD98F29E4FF653558A581E, ___m_StartColor_8)); }
	inline Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  get_m_StartColor_8() const { return ___m_StartColor_8; }
	inline Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23 * get_address_of_m_StartColor_8() { return &___m_StartColor_8; }
	inline void set_m_StartColor_8(Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  value)
	{
		___m_StartColor_8 = value;
	}

	inline static int32_t get_offset_of_m_RandomSeed_9() { return static_cast<int32_t>(offsetof(Particle_t64AF74F5D9C7EE7018AD98F29E4FF653558A581E, ___m_RandomSeed_9)); }
	inline uint32_t get_m_RandomSeed_9() const { return ___m_RandomSeed_9; }
	inline uint32_t* get_address_of_m_RandomSeed_9() { return &___m_RandomSeed_9; }
	inline void set_m_RandomSeed_9(uint32_t value)
	{
		___m_RandomSeed_9 = value;
	}

	inline static int32_t get_offset_of_m_Lifetime_10() { return static_cast<int32_t>(offsetof(Particle_t64AF74F5D9C7EE7018AD98F29E4FF653558A581E, ___m_Lifetime_10)); }
	inline float get_m_Lifetime_10() const { return ___m_Lifetime_10; }
	inline float* get_address_of_m_Lifetime_10() { return &___m_Lifetime_10; }
	inline void set_m_Lifetime_10(float value)
	{
		___m_Lifetime_10 = value;
	}

	inline static int32_t get_offset_of_m_StartLifetime_11() { return static_cast<int32_t>(offsetof(Particle_t64AF74F5D9C7EE7018AD98F29E4FF653558A581E, ___m_StartLifetime_11)); }
	inline float get_m_StartLifetime_11() const { return ___m_StartLifetime_11; }
	inline float* get_address_of_m_StartLifetime_11() { return &___m_StartLifetime_11; }
	inline void set_m_StartLifetime_11(float value)
	{
		___m_StartLifetime_11 = value;
	}

	inline static int32_t get_offset_of_m_EmitAccumulator0_12() { return static_cast<int32_t>(offsetof(Particle_t64AF74F5D9C7EE7018AD98F29E4FF653558A581E, ___m_EmitAccumulator0_12)); }
	inline float get_m_EmitAccumulator0_12() const { return ___m_EmitAccumulator0_12; }
	inline float* get_address_of_m_EmitAccumulator0_12() { return &___m_EmitAccumulator0_12; }
	inline void set_m_EmitAccumulator0_12(float value)
	{
		___m_EmitAccumulator0_12 = value;
	}

	inline static int32_t get_offset_of_m_EmitAccumulator1_13() { return static_cast<int32_t>(offsetof(Particle_t64AF74F5D9C7EE7018AD98F29E4FF653558A581E, ___m_EmitAccumulator1_13)); }
	inline float get_m_EmitAccumulator1_13() const { return ___m_EmitAccumulator1_13; }
	inline float* get_address_of_m_EmitAccumulator1_13() { return &___m_EmitAccumulator1_13; }
	inline void set_m_EmitAccumulator1_13(float value)
	{
		___m_EmitAccumulator1_13 = value;
	}

	inline static int32_t get_offset_of_m_Flags_14() { return static_cast<int32_t>(offsetof(Particle_t64AF74F5D9C7EE7018AD98F29E4FF653558A581E, ___m_Flags_14)); }
	inline uint32_t get_m_Flags_14() const { return ___m_Flags_14; }
	inline uint32_t* get_address_of_m_Flags_14() { return &___m_Flags_14; }
	inline void set_m_Flags_14(uint32_t value)
	{
		___m_Flags_14 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PARTICLE_T64AF74F5D9C7EE7018AD98F29E4FF653558A581E_H
#ifndef PLAYABLEHANDLE_T9D3B4E540D4413CED81DDD6A24C5373BEFA1D182_H
#define PLAYABLEHANDLE_T9D3B4E540D4413CED81DDD6A24C5373BEFA1D182_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Playables.PlayableHandle
struct  PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 
{
public:
	// System.IntPtr UnityEngine.Playables.PlayableHandle::m_Handle
	intptr_t ___m_Handle_0;
	// System.UInt32 UnityEngine.Playables.PlayableHandle::m_Version
	uint32_t ___m_Version_1;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182, ___m_Handle_0)); }
	inline intptr_t get_m_Handle_0() const { return ___m_Handle_0; }
	inline intptr_t* get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(intptr_t value)
	{
		___m_Handle_0 = value;
	}

	inline static int32_t get_offset_of_m_Version_1() { return static_cast<int32_t>(offsetof(PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182, ___m_Version_1)); }
	inline uint32_t get_m_Version_1() const { return ___m_Version_1; }
	inline uint32_t* get_address_of_m_Version_1() { return &___m_Version_1; }
	inline void set_m_Version_1(uint32_t value)
	{
		___m_Version_1 = value;
	}
};

struct PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182_StaticFields
{
public:
	// UnityEngine.Playables.PlayableHandle UnityEngine.Playables.PlayableHandle::m_Null
	PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  ___m_Null_2;

public:
	inline static int32_t get_offset_of_m_Null_2() { return static_cast<int32_t>(offsetof(PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182_StaticFields, ___m_Null_2)); }
	inline PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  get_m_Null_2() const { return ___m_Null_2; }
	inline PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 * get_address_of_m_Null_2() { return &___m_Null_2; }
	inline void set_m_Null_2(PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  value)
	{
		___m_Null_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYABLEHANDLE_T9D3B4E540D4413CED81DDD6A24C5373BEFA1D182_H
#ifndef RENDERMODE_TB54632E74CDC4A990E815EB8C3CC515D3A9E2F60_H
#define RENDERMODE_TB54632E74CDC4A990E815EB8C3CC515D3A9E2F60_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.RenderMode
struct  RenderMode_tB54632E74CDC4A990E815EB8C3CC515D3A9E2F60 
{
public:
	// System.Int32 UnityEngine.RenderMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(RenderMode_tB54632E74CDC4A990E815EB8C3CC515D3A9E2F60, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RENDERMODE_TB54632E74CDC4A990E815EB8C3CC515D3A9E2F60_H
#ifndef SKELETONBONE_TCDF297229129311214294465F3FA353DB09726F5_H
#define SKELETONBONE_TCDF297229129311214294465F3FA353DB09726F5_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SkeletonBone
struct  SkeletonBone_tCDF297229129311214294465F3FA353DB09726F5 
{
public:
	// System.String UnityEngine.SkeletonBone::name
	String_t* ___name_0;
	// System.String UnityEngine.SkeletonBone::parentName
	String_t* ___parentName_1;
	// UnityEngine.Vector3 UnityEngine.SkeletonBone::position
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___position_2;
	// UnityEngine.Quaternion UnityEngine.SkeletonBone::rotation
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___rotation_3;
	// UnityEngine.Vector3 UnityEngine.SkeletonBone::scale
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___scale_4;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(SkeletonBone_tCDF297229129311214294465F3FA353DB09726F5, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier((&___name_0), value);
	}

	inline static int32_t get_offset_of_parentName_1() { return static_cast<int32_t>(offsetof(SkeletonBone_tCDF297229129311214294465F3FA353DB09726F5, ___parentName_1)); }
	inline String_t* get_parentName_1() const { return ___parentName_1; }
	inline String_t** get_address_of_parentName_1() { return &___parentName_1; }
	inline void set_parentName_1(String_t* value)
	{
		___parentName_1 = value;
		Il2CppCodeGenWriteBarrier((&___parentName_1), value);
	}

	inline static int32_t get_offset_of_position_2() { return static_cast<int32_t>(offsetof(SkeletonBone_tCDF297229129311214294465F3FA353DB09726F5, ___position_2)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_position_2() const { return ___position_2; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_position_2() { return &___position_2; }
	inline void set_position_2(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___position_2 = value;
	}

	inline static int32_t get_offset_of_rotation_3() { return static_cast<int32_t>(offsetof(SkeletonBone_tCDF297229129311214294465F3FA353DB09726F5, ___rotation_3)); }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  get_rotation_3() const { return ___rotation_3; }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * get_address_of_rotation_3() { return &___rotation_3; }
	inline void set_rotation_3(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  value)
	{
		___rotation_3 = value;
	}

	inline static int32_t get_offset_of_scale_4() { return static_cast<int32_t>(offsetof(SkeletonBone_tCDF297229129311214294465F3FA353DB09726F5, ___scale_4)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_scale_4() const { return ___scale_4; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_scale_4() { return &___scale_4; }
	inline void set_scale_4(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___scale_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.SkeletonBone
struct SkeletonBone_tCDF297229129311214294465F3FA353DB09726F5_marshaled_pinvoke
{
	char* ___name_0;
	char* ___parentName_1;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___position_2;
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___rotation_3;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___scale_4;
};
// Native definition for COM marshalling of UnityEngine.SkeletonBone
struct SkeletonBone_tCDF297229129311214294465F3FA353DB09726F5_marshaled_com
{
	Il2CppChar* ___name_0;
	Il2CppChar* ___parentName_1;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___position_2;
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___rotation_3;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___scale_4;
};
#endif // SKELETONBONE_TCDF297229129311214294465F3FA353DB09726F5_H
#ifndef GCLEADERBOARD_T363887C9C2BFA6F02D08CC6F6BB93E8ABE9A42D2_H
#define GCLEADERBOARD_T363887C9C2BFA6F02D08CC6F6BB93E8ABE9A42D2_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard
struct  GcLeaderboard_t363887C9C2BFA6F02D08CC6F6BB93E8ABE9A42D2  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard::m_InternalLeaderboard
	intptr_t ___m_InternalLeaderboard_0;
	// UnityEngine.SocialPlatforms.Impl.Leaderboard UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard::m_GenericLeaderboard
	Leaderboard_t01480B36811BC84DF398C8A847972B62F5E2E4FE * ___m_GenericLeaderboard_1;

public:
	inline static int32_t get_offset_of_m_InternalLeaderboard_0() { return static_cast<int32_t>(offsetof(GcLeaderboard_t363887C9C2BFA6F02D08CC6F6BB93E8ABE9A42D2, ___m_InternalLeaderboard_0)); }
	inline intptr_t get_m_InternalLeaderboard_0() const { return ___m_InternalLeaderboard_0; }
	inline intptr_t* get_address_of_m_InternalLeaderboard_0() { return &___m_InternalLeaderboard_0; }
	inline void set_m_InternalLeaderboard_0(intptr_t value)
	{
		___m_InternalLeaderboard_0 = value;
	}

	inline static int32_t get_offset_of_m_GenericLeaderboard_1() { return static_cast<int32_t>(offsetof(GcLeaderboard_t363887C9C2BFA6F02D08CC6F6BB93E8ABE9A42D2, ___m_GenericLeaderboard_1)); }
	inline Leaderboard_t01480B36811BC84DF398C8A847972B62F5E2E4FE * get_m_GenericLeaderboard_1() const { return ___m_GenericLeaderboard_1; }
	inline Leaderboard_t01480B36811BC84DF398C8A847972B62F5E2E4FE ** get_address_of_m_GenericLeaderboard_1() { return &___m_GenericLeaderboard_1; }
	inline void set_m_GenericLeaderboard_1(Leaderboard_t01480B36811BC84DF398C8A847972B62F5E2E4FE * value)
	{
		___m_GenericLeaderboard_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_GenericLeaderboard_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard
struct GcLeaderboard_t363887C9C2BFA6F02D08CC6F6BB93E8ABE9A42D2_marshaled_pinvoke
{
	intptr_t ___m_InternalLeaderboard_0;
	Leaderboard_t01480B36811BC84DF398C8A847972B62F5E2E4FE * ___m_GenericLeaderboard_1;
};
// Native definition for COM marshalling of UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard
struct GcLeaderboard_t363887C9C2BFA6F02D08CC6F6BB93E8ABE9A42D2_marshaled_com
{
	intptr_t ___m_InternalLeaderboard_0;
	Leaderboard_t01480B36811BC84DF398C8A847972B62F5E2E4FE * ___m_GenericLeaderboard_1;
};
#endif // GCLEADERBOARD_T363887C9C2BFA6F02D08CC6F6BB93E8ABE9A42D2_H
#ifndef ACHIEVEMENT_T853D7B9496E1B0395F9DC4EC4B6C677A82498633_H
#define ACHIEVEMENT_T853D7B9496E1B0395F9DC4EC4B6C677A82498633_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SocialPlatforms.Impl.Achievement
struct  Achievement_t853D7B9496E1B0395F9DC4EC4B6C677A82498633  : public RuntimeObject
{
public:
	// System.Boolean UnityEngine.SocialPlatforms.Impl.Achievement::m_Completed
	bool ___m_Completed_0;
	// System.Boolean UnityEngine.SocialPlatforms.Impl.Achievement::m_Hidden
	bool ___m_Hidden_1;
	// System.DateTime UnityEngine.SocialPlatforms.Impl.Achievement::m_LastReportedDate
	DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ___m_LastReportedDate_2;
	// System.String UnityEngine.SocialPlatforms.Impl.Achievement::<id>k__BackingField
	String_t* ___U3CidU3Ek__BackingField_3;
	// System.Double UnityEngine.SocialPlatforms.Impl.Achievement::<percentCompleted>k__BackingField
	double ___U3CpercentCompletedU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_m_Completed_0() { return static_cast<int32_t>(offsetof(Achievement_t853D7B9496E1B0395F9DC4EC4B6C677A82498633, ___m_Completed_0)); }
	inline bool get_m_Completed_0() const { return ___m_Completed_0; }
	inline bool* get_address_of_m_Completed_0() { return &___m_Completed_0; }
	inline void set_m_Completed_0(bool value)
	{
		___m_Completed_0 = value;
	}

	inline static int32_t get_offset_of_m_Hidden_1() { return static_cast<int32_t>(offsetof(Achievement_t853D7B9496E1B0395F9DC4EC4B6C677A82498633, ___m_Hidden_1)); }
	inline bool get_m_Hidden_1() const { return ___m_Hidden_1; }
	inline bool* get_address_of_m_Hidden_1() { return &___m_Hidden_1; }
	inline void set_m_Hidden_1(bool value)
	{
		___m_Hidden_1 = value;
	}

	inline static int32_t get_offset_of_m_LastReportedDate_2() { return static_cast<int32_t>(offsetof(Achievement_t853D7B9496E1B0395F9DC4EC4B6C677A82498633, ___m_LastReportedDate_2)); }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  get_m_LastReportedDate_2() const { return ___m_LastReportedDate_2; }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 * get_address_of_m_LastReportedDate_2() { return &___m_LastReportedDate_2; }
	inline void set_m_LastReportedDate_2(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  value)
	{
		___m_LastReportedDate_2 = value;
	}

	inline static int32_t get_offset_of_U3CidU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(Achievement_t853D7B9496E1B0395F9DC4EC4B6C677A82498633, ___U3CidU3Ek__BackingField_3)); }
	inline String_t* get_U3CidU3Ek__BackingField_3() const { return ___U3CidU3Ek__BackingField_3; }
	inline String_t** get_address_of_U3CidU3Ek__BackingField_3() { return &___U3CidU3Ek__BackingField_3; }
	inline void set_U3CidU3Ek__BackingField_3(String_t* value)
	{
		___U3CidU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((&___U3CidU3Ek__BackingField_3), value);
	}

	inline static int32_t get_offset_of_U3CpercentCompletedU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(Achievement_t853D7B9496E1B0395F9DC4EC4B6C677A82498633, ___U3CpercentCompletedU3Ek__BackingField_4)); }
	inline double get_U3CpercentCompletedU3Ek__BackingField_4() const { return ___U3CpercentCompletedU3Ek__BackingField_4; }
	inline double* get_address_of_U3CpercentCompletedU3Ek__BackingField_4() { return &___U3CpercentCompletedU3Ek__BackingField_4; }
	inline void set_U3CpercentCompletedU3Ek__BackingField_4(double value)
	{
		___U3CpercentCompletedU3Ek__BackingField_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ACHIEVEMENT_T853D7B9496E1B0395F9DC4EC4B6C677A82498633_H
#ifndef SCORE_TE23EDB9F6DECBC3AD8D644EC255512A0CDF533E7_H
#define SCORE_TE23EDB9F6DECBC3AD8D644EC255512A0CDF533E7_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SocialPlatforms.Impl.Score
struct  Score_tE23EDB9F6DECBC3AD8D644EC255512A0CDF533E7  : public RuntimeObject
{
public:
	// System.DateTime UnityEngine.SocialPlatforms.Impl.Score::m_Date
	DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ___m_Date_0;
	// System.String UnityEngine.SocialPlatforms.Impl.Score::m_FormattedValue
	String_t* ___m_FormattedValue_1;
	// System.String UnityEngine.SocialPlatforms.Impl.Score::m_UserID
	String_t* ___m_UserID_2;
	// System.Int32 UnityEngine.SocialPlatforms.Impl.Score::m_Rank
	int32_t ___m_Rank_3;
	// System.String UnityEngine.SocialPlatforms.Impl.Score::<leaderboardID>k__BackingField
	String_t* ___U3CleaderboardIDU3Ek__BackingField_4;
	// System.Int64 UnityEngine.SocialPlatforms.Impl.Score::<value>k__BackingField
	int64_t ___U3CvalueU3Ek__BackingField_5;

public:
	inline static int32_t get_offset_of_m_Date_0() { return static_cast<int32_t>(offsetof(Score_tE23EDB9F6DECBC3AD8D644EC255512A0CDF533E7, ___m_Date_0)); }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  get_m_Date_0() const { return ___m_Date_0; }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 * get_address_of_m_Date_0() { return &___m_Date_0; }
	inline void set_m_Date_0(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  value)
	{
		___m_Date_0 = value;
	}

	inline static int32_t get_offset_of_m_FormattedValue_1() { return static_cast<int32_t>(offsetof(Score_tE23EDB9F6DECBC3AD8D644EC255512A0CDF533E7, ___m_FormattedValue_1)); }
	inline String_t* get_m_FormattedValue_1() const { return ___m_FormattedValue_1; }
	inline String_t** get_address_of_m_FormattedValue_1() { return &___m_FormattedValue_1; }
	inline void set_m_FormattedValue_1(String_t* value)
	{
		___m_FormattedValue_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_FormattedValue_1), value);
	}

	inline static int32_t get_offset_of_m_UserID_2() { return static_cast<int32_t>(offsetof(Score_tE23EDB9F6DECBC3AD8D644EC255512A0CDF533E7, ___m_UserID_2)); }
	inline String_t* get_m_UserID_2() const { return ___m_UserID_2; }
	inline String_t** get_address_of_m_UserID_2() { return &___m_UserID_2; }
	inline void set_m_UserID_2(String_t* value)
	{
		___m_UserID_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_UserID_2), value);
	}

	inline static int32_t get_offset_of_m_Rank_3() { return static_cast<int32_t>(offsetof(Score_tE23EDB9F6DECBC3AD8D644EC255512A0CDF533E7, ___m_Rank_3)); }
	inline int32_t get_m_Rank_3() const { return ___m_Rank_3; }
	inline int32_t* get_address_of_m_Rank_3() { return &___m_Rank_3; }
	inline void set_m_Rank_3(int32_t value)
	{
		___m_Rank_3 = value;
	}

	inline static int32_t get_offset_of_U3CleaderboardIDU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(Score_tE23EDB9F6DECBC3AD8D644EC255512A0CDF533E7, ___U3CleaderboardIDU3Ek__BackingField_4)); }
	inline String_t* get_U3CleaderboardIDU3Ek__BackingField_4() const { return ___U3CleaderboardIDU3Ek__BackingField_4; }
	inline String_t** get_address_of_U3CleaderboardIDU3Ek__BackingField_4() { return &___U3CleaderboardIDU3Ek__BackingField_4; }
	inline void set_U3CleaderboardIDU3Ek__BackingField_4(String_t* value)
	{
		___U3CleaderboardIDU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((&___U3CleaderboardIDU3Ek__BackingField_4), value);
	}

	inline static int32_t get_offset_of_U3CvalueU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(Score_tE23EDB9F6DECBC3AD8D644EC255512A0CDF533E7, ___U3CvalueU3Ek__BackingField_5)); }
	inline int64_t get_U3CvalueU3Ek__BackingField_5() const { return ___U3CvalueU3Ek__BackingField_5; }
	inline int64_t* get_address_of_U3CvalueU3Ek__BackingField_5() { return &___U3CvalueU3Ek__BackingField_5; }
	inline void set_U3CvalueU3Ek__BackingField_5(int64_t value)
	{
		___U3CvalueU3Ek__BackingField_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SCORE_TE23EDB9F6DECBC3AD8D644EC255512A0CDF533E7_H
#ifndef TIMESCOPE_T33ED9CE3541B951879D86F5AE6A8D9389E7A2369_H
#define TIMESCOPE_T33ED9CE3541B951879D86F5AE6A8D9389E7A2369_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SocialPlatforms.TimeScope
struct  TimeScope_t33ED9CE3541B951879D86F5AE6A8D9389E7A2369 
{
public:
	// System.Int32 UnityEngine.SocialPlatforms.TimeScope::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TimeScope_t33ED9CE3541B951879D86F5AE6A8D9389E7A2369, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TIMESCOPE_T33ED9CE3541B951879D86F5AE6A8D9389E7A2369_H
#ifndef USERSCOPE_T85B1CA855A894226BDE6A19B4CBE7EC9F02D16E3_H
#define USERSCOPE_T85B1CA855A894226BDE6A19B4CBE7EC9F02D16E3_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SocialPlatforms.UserScope
struct  UserScope_t85B1CA855A894226BDE6A19B4CBE7EC9F02D16E3 
{
public:
	// System.Int32 UnityEngine.SocialPlatforms.UserScope::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(UserScope_t85B1CA855A894226BDE6A19B4CBE7EC9F02D16E3, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // USERSCOPE_T85B1CA855A894226BDE6A19B4CBE7EC9F02D16E3_H
#ifndef USERSTATE_T84B00958348DD8A2B8778416E393E229DACA5871_H
#define USERSTATE_T84B00958348DD8A2B8778416E393E229DACA5871_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SocialPlatforms.UserState
struct  UserState_t84B00958348DD8A2B8778416E393E229DACA5871 
{
public:
	// System.Int32 UnityEngine.SocialPlatforms.UserState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(UserState_t84B00958348DD8A2B8778416E393E229DACA5871, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // USERSTATE_T84B00958348DD8A2B8778416E393E229DACA5871_H
#ifndef BOUNDARYVALUETYPE_TAD21AC67F7D3AC4FF445A0D6002E7914F07000EA_H
#define BOUNDARYVALUETYPE_TAD21AC67F7D3AC4FF445A0D6002E7914F07000EA_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.TerrainData/BoundaryValueType
struct  BoundaryValueType_tAD21AC67F7D3AC4FF445A0D6002E7914F07000EA 
{
public:
	// System.Int32 UnityEngine.TerrainData/BoundaryValueType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BoundaryValueType_tAD21AC67F7D3AC4FF445A0D6002E7914F07000EA, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BOUNDARYVALUETYPE_TAD21AC67F7D3AC4FF445A0D6002E7914F07000EA_H
#ifndef COLLIDERTYPE_TCF48B308BF04CE1D262A726D500126E8C8859F2B_H
#define COLLIDERTYPE_TCF48B308BF04CE1D262A726D500126E8C8859F2B_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Tilemaps.Tile/ColliderType
struct  ColliderType_tCF48B308BF04CE1D262A726D500126E8C8859F2B 
{
public:
	// System.Int32 UnityEngine.Tilemaps.Tile/ColliderType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ColliderType_tCF48B308BF04CE1D262A726D500126E8C8859F2B, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLLIDERTYPE_TCF48B308BF04CE1D262A726D500126E8C8859F2B_H
#ifndef TILEFLAGS_TBD601639E3CC4B4BA675548F3B8F17B709A974AF_H
#define TILEFLAGS_TBD601639E3CC4B4BA675548F3B8F17B709A974AF_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Tilemaps.TileFlags
struct  TileFlags_tBD601639E3CC4B4BA675548F3B8F17B709A974AF 
{
public:
	// System.Int32 UnityEngine.Tilemaps.TileFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TileFlags_tBD601639E3CC4B4BA675548F3B8F17B709A974AF, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TILEFLAGS_TBD601639E3CC4B4BA675548F3B8F17B709A974AF_H
#ifndef TRACKEDREFERENCE_TE93229EF7055CBB35B2A98DD2493947428D06107_H
#define TRACKEDREFERENCE_TE93229EF7055CBB35B2A98DD2493947428D06107_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.TrackedReference
struct  TrackedReference_tE93229EF7055CBB35B2A98DD2493947428D06107  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.TrackedReference::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(TrackedReference_tE93229EF7055CBB35B2A98DD2493947428D06107, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.TrackedReference
struct TrackedReference_tE93229EF7055CBB35B2A98DD2493947428D06107_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.TrackedReference
struct TrackedReference_tE93229EF7055CBB35B2A98DD2493947428D06107_marshaled_com
{
	intptr_t ___m_Ptr_0;
};
#endif // TRACKEDREFERENCE_TE93229EF7055CBB35B2A98DD2493947428D06107_H
#ifndef SAMPLETYPE_T2144AEAF3447ACAFCE1C13AF669F63192F8E75EC_H
#define SAMPLETYPE_T2144AEAF3447ACAFCE1C13AF669F63192F8E75EC_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UISystemProfilerApi/SampleType
struct  SampleType_t2144AEAF3447ACAFCE1C13AF669F63192F8E75EC 
{
public:
	// System.Int32 UnityEngine.UISystemProfilerApi/SampleType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SampleType_t2144AEAF3447ACAFCE1C13AF669F63192F8E75EC, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SAMPLETYPE_T2144AEAF3447ACAFCE1C13AF669F63192F8E75EC_H
#ifndef YOGAMEASUREMODE_T29AF57E74BCD4C16019B8BE88A317D54DA70C29F_H
#define YOGAMEASUREMODE_T29AF57E74BCD4C16019B8BE88A317D54DA70C29F_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Yoga.YogaMeasureMode
struct  YogaMeasureMode_t29AF57E74BCD4C16019B8BE88A317D54DA70C29F 
{
public:
	// System.Int32 UnityEngine.Yoga.YogaMeasureMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(YogaMeasureMode_t29AF57E74BCD4C16019B8BE88A317D54DA70C29F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // YOGAMEASUREMODE_T29AF57E74BCD4C16019B8BE88A317D54DA70C29F_H
#ifndef YOGANODE_TFCB801A447DAC7A335C686ABC5941A4357102A2C_H
#define YOGANODE_TFCB801A447DAC7A335C686ABC5941A4357102A2C_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Yoga.YogaNode
struct  YogaNode_tFCB801A447DAC7A335C686ABC5941A4357102A2C  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Yoga.YogaNode::_ygNode
	intptr_t ____ygNode_0;
	// System.Collections.Generic.List`1<UnityEngine.Yoga.YogaNode> UnityEngine.Yoga.YogaNode::_children
	List_1_tC208E7A364FF0C3FDC57107BD002A16939F7EE92 * ____children_1;
	// UnityEngine.Yoga.MeasureFunction UnityEngine.Yoga.YogaNode::_measureFunction
	MeasureFunction_tC5585E81380F4017044CE57AE21E178BAE2607AB * ____measureFunction_2;
	// UnityEngine.Yoga.BaselineFunction UnityEngine.Yoga.YogaNode::_baselineFunction
	BaselineFunction_t0A87479762FB382A84709009E9B6DCC597C6C9DF * ____baselineFunction_3;

public:
	inline static int32_t get_offset_of__ygNode_0() { return static_cast<int32_t>(offsetof(YogaNode_tFCB801A447DAC7A335C686ABC5941A4357102A2C, ____ygNode_0)); }
	inline intptr_t get__ygNode_0() const { return ____ygNode_0; }
	inline intptr_t* get_address_of__ygNode_0() { return &____ygNode_0; }
	inline void set__ygNode_0(intptr_t value)
	{
		____ygNode_0 = value;
	}

	inline static int32_t get_offset_of__children_1() { return static_cast<int32_t>(offsetof(YogaNode_tFCB801A447DAC7A335C686ABC5941A4357102A2C, ____children_1)); }
	inline List_1_tC208E7A364FF0C3FDC57107BD002A16939F7EE92 * get__children_1() const { return ____children_1; }
	inline List_1_tC208E7A364FF0C3FDC57107BD002A16939F7EE92 ** get_address_of__children_1() { return &____children_1; }
	inline void set__children_1(List_1_tC208E7A364FF0C3FDC57107BD002A16939F7EE92 * value)
	{
		____children_1 = value;
		Il2CppCodeGenWriteBarrier((&____children_1), value);
	}

	inline static int32_t get_offset_of__measureFunction_2() { return static_cast<int32_t>(offsetof(YogaNode_tFCB801A447DAC7A335C686ABC5941A4357102A2C, ____measureFunction_2)); }
	inline MeasureFunction_tC5585E81380F4017044CE57AE21E178BAE2607AB * get__measureFunction_2() const { return ____measureFunction_2; }
	inline MeasureFunction_tC5585E81380F4017044CE57AE21E178BAE2607AB ** get_address_of__measureFunction_2() { return &____measureFunction_2; }
	inline void set__measureFunction_2(MeasureFunction_tC5585E81380F4017044CE57AE21E178BAE2607AB * value)
	{
		____measureFunction_2 = value;
		Il2CppCodeGenWriteBarrier((&____measureFunction_2), value);
	}

	inline static int32_t get_offset_of__baselineFunction_3() { return static_cast<int32_t>(offsetof(YogaNode_tFCB801A447DAC7A335C686ABC5941A4357102A2C, ____baselineFunction_3)); }
	inline BaselineFunction_t0A87479762FB382A84709009E9B6DCC597C6C9DF * get__baselineFunction_3() const { return ____baselineFunction_3; }
	inline BaselineFunction_t0A87479762FB382A84709009E9B6DCC597C6C9DF ** get_address_of__baselineFunction_3() { return &____baselineFunction_3; }
	inline void set__baselineFunction_3(BaselineFunction_t0A87479762FB382A84709009E9B6DCC597C6C9DF * value)
	{
		____baselineFunction_3 = value;
		Il2CppCodeGenWriteBarrier((&____baselineFunction_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // YOGANODE_TFCB801A447DAC7A335C686ABC5941A4357102A2C_H
#ifndef NATIVEINPUTUPDATETYPE_T744D5594ED044E47F3BAF84F45326948B8930C71_H
#define NATIVEINPUTUPDATETYPE_T744D5594ED044E47F3BAF84F45326948B8930C71_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngineInternal.Input.NativeInputUpdateType
struct  NativeInputUpdateType_t744D5594ED044E47F3BAF84F45326948B8930C71 
{
public:
	// System.Int32 UnityEngineInternal.Input.NativeInputUpdateType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(NativeInputUpdateType_t744D5594ED044E47F3BAF84F45326948B8930C71, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NATIVEINPUTUPDATETYPE_T744D5594ED044E47F3BAF84F45326948B8930C71_H
#ifndef MULTICASTDELEGATE_T_H
#define MULTICASTDELEGATE_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MulticastDelegate
struct  MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* value)
	{
		___delegates_11 = value;
		Il2CppCodeGenWriteBarrier((&___delegates_11), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* ___delegates_11;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* ___delegates_11;
};
#endif // MULTICASTDELEGATE_T_H
#ifndef ANIMATIONEVENT_TEDD4E45FEA5CA4657CBBF1E0CFF657191D90673F_H
#define ANIMATIONEVENT_TEDD4E45FEA5CA4657CBBF1E0CFF657191D90673F_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AnimationEvent
struct  AnimationEvent_tEDD4E45FEA5CA4657CBBF1E0CFF657191D90673F  : public RuntimeObject
{
public:
	// System.Single UnityEngine.AnimationEvent::m_Time
	float ___m_Time_0;
	// System.String UnityEngine.AnimationEvent::m_FunctionName
	String_t* ___m_FunctionName_1;
	// System.String UnityEngine.AnimationEvent::m_StringParameter
	String_t* ___m_StringParameter_2;
	// UnityEngine.Object UnityEngine.AnimationEvent::m_ObjectReferenceParameter
	Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___m_ObjectReferenceParameter_3;
	// System.Single UnityEngine.AnimationEvent::m_FloatParameter
	float ___m_FloatParameter_4;
	// System.Int32 UnityEngine.AnimationEvent::m_IntParameter
	int32_t ___m_IntParameter_5;
	// System.Int32 UnityEngine.AnimationEvent::m_MessageOptions
	int32_t ___m_MessageOptions_6;
	// UnityEngine.AnimationEventSource UnityEngine.AnimationEvent::m_Source
	int32_t ___m_Source_7;
	// UnityEngine.AnimationState UnityEngine.AnimationEvent::m_StateSender
	AnimationState_t48FF4D41FEF3492F8286100BE3758CE3A4656386 * ___m_StateSender_8;
	// UnityEngine.AnimatorStateInfo UnityEngine.AnimationEvent::m_AnimatorStateInfo
	AnimatorStateInfo_tF6D8ADF771CD13DC578AC9A574FD33CC99AD46E2  ___m_AnimatorStateInfo_9;
	// UnityEngine.AnimatorClipInfo UnityEngine.AnimationEvent::m_AnimatorClipInfo
	AnimatorClipInfo_t78457ABBA83D388EDFF26F436F5E61A29CF4E180  ___m_AnimatorClipInfo_10;

public:
	inline static int32_t get_offset_of_m_Time_0() { return static_cast<int32_t>(offsetof(AnimationEvent_tEDD4E45FEA5CA4657CBBF1E0CFF657191D90673F, ___m_Time_0)); }
	inline float get_m_Time_0() const { return ___m_Time_0; }
	inline float* get_address_of_m_Time_0() { return &___m_Time_0; }
	inline void set_m_Time_0(float value)
	{
		___m_Time_0 = value;
	}

	inline static int32_t get_offset_of_m_FunctionName_1() { return static_cast<int32_t>(offsetof(AnimationEvent_tEDD4E45FEA5CA4657CBBF1E0CFF657191D90673F, ___m_FunctionName_1)); }
	inline String_t* get_m_FunctionName_1() const { return ___m_FunctionName_1; }
	inline String_t** get_address_of_m_FunctionName_1() { return &___m_FunctionName_1; }
	inline void set_m_FunctionName_1(String_t* value)
	{
		___m_FunctionName_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_FunctionName_1), value);
	}

	inline static int32_t get_offset_of_m_StringParameter_2() { return static_cast<int32_t>(offsetof(AnimationEvent_tEDD4E45FEA5CA4657CBBF1E0CFF657191D90673F, ___m_StringParameter_2)); }
	inline String_t* get_m_StringParameter_2() const { return ___m_StringParameter_2; }
	inline String_t** get_address_of_m_StringParameter_2() { return &___m_StringParameter_2; }
	inline void set_m_StringParameter_2(String_t* value)
	{
		___m_StringParameter_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_StringParameter_2), value);
	}

	inline static int32_t get_offset_of_m_ObjectReferenceParameter_3() { return static_cast<int32_t>(offsetof(AnimationEvent_tEDD4E45FEA5CA4657CBBF1E0CFF657191D90673F, ___m_ObjectReferenceParameter_3)); }
	inline Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * get_m_ObjectReferenceParameter_3() const { return ___m_ObjectReferenceParameter_3; }
	inline Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 ** get_address_of_m_ObjectReferenceParameter_3() { return &___m_ObjectReferenceParameter_3; }
	inline void set_m_ObjectReferenceParameter_3(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * value)
	{
		___m_ObjectReferenceParameter_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_ObjectReferenceParameter_3), value);
	}

	inline static int32_t get_offset_of_m_FloatParameter_4() { return static_cast<int32_t>(offsetof(AnimationEvent_tEDD4E45FEA5CA4657CBBF1E0CFF657191D90673F, ___m_FloatParameter_4)); }
	inline float get_m_FloatParameter_4() const { return ___m_FloatParameter_4; }
	inline float* get_address_of_m_FloatParameter_4() { return &___m_FloatParameter_4; }
	inline void set_m_FloatParameter_4(float value)
	{
		___m_FloatParameter_4 = value;
	}

	inline static int32_t get_offset_of_m_IntParameter_5() { return static_cast<int32_t>(offsetof(AnimationEvent_tEDD4E45FEA5CA4657CBBF1E0CFF657191D90673F, ___m_IntParameter_5)); }
	inline int32_t get_m_IntParameter_5() const { return ___m_IntParameter_5; }
	inline int32_t* get_address_of_m_IntParameter_5() { return &___m_IntParameter_5; }
	inline void set_m_IntParameter_5(int32_t value)
	{
		___m_IntParameter_5 = value;
	}

	inline static int32_t get_offset_of_m_MessageOptions_6() { return static_cast<int32_t>(offsetof(AnimationEvent_tEDD4E45FEA5CA4657CBBF1E0CFF657191D90673F, ___m_MessageOptions_6)); }
	inline int32_t get_m_MessageOptions_6() const { return ___m_MessageOptions_6; }
	inline int32_t* get_address_of_m_MessageOptions_6() { return &___m_MessageOptions_6; }
	inline void set_m_MessageOptions_6(int32_t value)
	{
		___m_MessageOptions_6 = value;
	}

	inline static int32_t get_offset_of_m_Source_7() { return static_cast<int32_t>(offsetof(AnimationEvent_tEDD4E45FEA5CA4657CBBF1E0CFF657191D90673F, ___m_Source_7)); }
	inline int32_t get_m_Source_7() const { return ___m_Source_7; }
	inline int32_t* get_address_of_m_Source_7() { return &___m_Source_7; }
	inline void set_m_Source_7(int32_t value)
	{
		___m_Source_7 = value;
	}

	inline static int32_t get_offset_of_m_StateSender_8() { return static_cast<int32_t>(offsetof(AnimationEvent_tEDD4E45FEA5CA4657CBBF1E0CFF657191D90673F, ___m_StateSender_8)); }
	inline AnimationState_t48FF4D41FEF3492F8286100BE3758CE3A4656386 * get_m_StateSender_8() const { return ___m_StateSender_8; }
	inline AnimationState_t48FF4D41FEF3492F8286100BE3758CE3A4656386 ** get_address_of_m_StateSender_8() { return &___m_StateSender_8; }
	inline void set_m_StateSender_8(AnimationState_t48FF4D41FEF3492F8286100BE3758CE3A4656386 * value)
	{
		___m_StateSender_8 = value;
		Il2CppCodeGenWriteBarrier((&___m_StateSender_8), value);
	}

	inline static int32_t get_offset_of_m_AnimatorStateInfo_9() { return static_cast<int32_t>(offsetof(AnimationEvent_tEDD4E45FEA5CA4657CBBF1E0CFF657191D90673F, ___m_AnimatorStateInfo_9)); }
	inline AnimatorStateInfo_tF6D8ADF771CD13DC578AC9A574FD33CC99AD46E2  get_m_AnimatorStateInfo_9() const { return ___m_AnimatorStateInfo_9; }
	inline AnimatorStateInfo_tF6D8ADF771CD13DC578AC9A574FD33CC99AD46E2 * get_address_of_m_AnimatorStateInfo_9() { return &___m_AnimatorStateInfo_9; }
	inline void set_m_AnimatorStateInfo_9(AnimatorStateInfo_tF6D8ADF771CD13DC578AC9A574FD33CC99AD46E2  value)
	{
		___m_AnimatorStateInfo_9 = value;
	}

	inline static int32_t get_offset_of_m_AnimatorClipInfo_10() { return static_cast<int32_t>(offsetof(AnimationEvent_tEDD4E45FEA5CA4657CBBF1E0CFF657191D90673F, ___m_AnimatorClipInfo_10)); }
	inline AnimatorClipInfo_t78457ABBA83D388EDFF26F436F5E61A29CF4E180  get_m_AnimatorClipInfo_10() const { return ___m_AnimatorClipInfo_10; }
	inline AnimatorClipInfo_t78457ABBA83D388EDFF26F436F5E61A29CF4E180 * get_address_of_m_AnimatorClipInfo_10() { return &___m_AnimatorClipInfo_10; }
	inline void set_m_AnimatorClipInfo_10(AnimatorClipInfo_t78457ABBA83D388EDFF26F436F5E61A29CF4E180  value)
	{
		___m_AnimatorClipInfo_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.AnimationEvent
struct AnimationEvent_tEDD4E45FEA5CA4657CBBF1E0CFF657191D90673F_marshaled_pinvoke
{
	float ___m_Time_0;
	char* ___m_FunctionName_1;
	char* ___m_StringParameter_2;
	Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_pinvoke ___m_ObjectReferenceParameter_3;
	float ___m_FloatParameter_4;
	int32_t ___m_IntParameter_5;
	int32_t ___m_MessageOptions_6;
	int32_t ___m_Source_7;
	AnimationState_t48FF4D41FEF3492F8286100BE3758CE3A4656386 * ___m_StateSender_8;
	AnimatorStateInfo_tF6D8ADF771CD13DC578AC9A574FD33CC99AD46E2  ___m_AnimatorStateInfo_9;
	AnimatorClipInfo_t78457ABBA83D388EDFF26F436F5E61A29CF4E180  ___m_AnimatorClipInfo_10;
};
// Native definition for COM marshalling of UnityEngine.AnimationEvent
struct AnimationEvent_tEDD4E45FEA5CA4657CBBF1E0CFF657191D90673F_marshaled_com
{
	float ___m_Time_0;
	Il2CppChar* ___m_FunctionName_1;
	Il2CppChar* ___m_StringParameter_2;
	Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_com* ___m_ObjectReferenceParameter_3;
	float ___m_FloatParameter_4;
	int32_t ___m_IntParameter_5;
	int32_t ___m_MessageOptions_6;
	int32_t ___m_Source_7;
	AnimationState_t48FF4D41FEF3492F8286100BE3758CE3A4656386 * ___m_StateSender_8;
	AnimatorStateInfo_tF6D8ADF771CD13DC578AC9A574FD33CC99AD46E2  ___m_AnimatorStateInfo_9;
	AnimatorClipInfo_t78457ABBA83D388EDFF26F436F5E61A29CF4E180  ___m_AnimatorClipInfo_10;
};
#endif // ANIMATIONEVENT_TEDD4E45FEA5CA4657CBBF1E0CFF657191D90673F_H
#ifndef ANIMATIONSTATE_T48FF4D41FEF3492F8286100BE3758CE3A4656386_H
#define ANIMATIONSTATE_T48FF4D41FEF3492F8286100BE3758CE3A4656386_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AnimationState
struct  AnimationState_t48FF4D41FEF3492F8286100BE3758CE3A4656386  : public TrackedReference_tE93229EF7055CBB35B2A98DD2493947428D06107
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ANIMATIONSTATE_T48FF4D41FEF3492F8286100BE3758CE3A4656386_H
#ifndef ANIMATORCONTROLLERPLAYABLE_T352C2C3D059CFC0404FF4FBBA302F16C5966F44B_H
#define ANIMATORCONTROLLERPLAYABLE_T352C2C3D059CFC0404FF4FBBA302F16C5966F44B_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Animations.AnimatorControllerPlayable
struct  AnimatorControllerPlayable_t352C2C3D059CFC0404FF4FBBA302F16C5966F44B 
{
public:
	// UnityEngine.Playables.PlayableHandle UnityEngine.Animations.AnimatorControllerPlayable::m_Handle
	PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(AnimatorControllerPlayable_t352C2C3D059CFC0404FF4FBBA302F16C5966F44B, ___m_Handle_0)); }
	inline PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  get_m_Handle_0() const { return ___m_Handle_0; }
	inline PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 * get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  value)
	{
		___m_Handle_0 = value;
	}
};

struct AnimatorControllerPlayable_t352C2C3D059CFC0404FF4FBBA302F16C5966F44B_StaticFields
{
public:
	// UnityEngine.Animations.AnimatorControllerPlayable UnityEngine.Animations.AnimatorControllerPlayable::m_NullPlayable
	AnimatorControllerPlayable_t352C2C3D059CFC0404FF4FBBA302F16C5966F44B  ___m_NullPlayable_1;

public:
	inline static int32_t get_offset_of_m_NullPlayable_1() { return static_cast<int32_t>(offsetof(AnimatorControllerPlayable_t352C2C3D059CFC0404FF4FBBA302F16C5966F44B_StaticFields, ___m_NullPlayable_1)); }
	inline AnimatorControllerPlayable_t352C2C3D059CFC0404FF4FBBA302F16C5966F44B  get_m_NullPlayable_1() const { return ___m_NullPlayable_1; }
	inline AnimatorControllerPlayable_t352C2C3D059CFC0404FF4FBBA302F16C5966F44B * get_address_of_m_NullPlayable_1() { return &___m_NullPlayable_1; }
	inline void set_m_NullPlayable_1(AnimatorControllerPlayable_t352C2C3D059CFC0404FF4FBBA302F16C5966F44B  value)
	{
		___m_NullPlayable_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ANIMATORCONTROLLERPLAYABLE_T352C2C3D059CFC0404FF4FBBA302F16C5966F44B_H
#ifndef ASSETBUNDLECREATEREQUEST_T8D8FCFC0424680D7B5E04346D932442D5886CD2E_H
#define ASSETBUNDLECREATEREQUEST_T8D8FCFC0424680D7B5E04346D932442D5886CD2E_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AssetBundleCreateRequest
struct  AssetBundleCreateRequest_t8D8FCFC0424680D7B5E04346D932442D5886CD2E  : public AsyncOperation_t304C51ABED8AE734CC8DDDFE13013D8D5A44641D
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.AssetBundleCreateRequest
struct AssetBundleCreateRequest_t8D8FCFC0424680D7B5E04346D932442D5886CD2E_marshaled_pinvoke : public AsyncOperation_t304C51ABED8AE734CC8DDDFE13013D8D5A44641D_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.AssetBundleCreateRequest
struct AssetBundleCreateRequest_t8D8FCFC0424680D7B5E04346D932442D5886CD2E_marshaled_com : public AsyncOperation_t304C51ABED8AE734CC8DDDFE13013D8D5A44641D_marshaled_com
{
};
#endif // ASSETBUNDLECREATEREQUEST_T8D8FCFC0424680D7B5E04346D932442D5886CD2E_H
#ifndef ASSETBUNDLERECOMPRESSOPERATION_TD941F40367DFE0A376269FCBE02234C5C8E9BFB6_H
#define ASSETBUNDLERECOMPRESSOPERATION_TD941F40367DFE0A376269FCBE02234C5C8E9BFB6_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AssetBundleRecompressOperation
struct  AssetBundleRecompressOperation_tD941F40367DFE0A376269FCBE02234C5C8E9BFB6  : public AsyncOperation_t304C51ABED8AE734CC8DDDFE13013D8D5A44641D
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.AssetBundleRecompressOperation
struct AssetBundleRecompressOperation_tD941F40367DFE0A376269FCBE02234C5C8E9BFB6_marshaled_pinvoke : public AsyncOperation_t304C51ABED8AE734CC8DDDFE13013D8D5A44641D_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.AssetBundleRecompressOperation
struct AssetBundleRecompressOperation_tD941F40367DFE0A376269FCBE02234C5C8E9BFB6_marshaled_com : public AsyncOperation_t304C51ABED8AE734CC8DDDFE13013D8D5A44641D_marshaled_com
{
};
#endif // ASSETBUNDLERECOMPRESSOPERATION_TD941F40367DFE0A376269FCBE02234C5C8E9BFB6_H
#ifndef ASSETBUNDLEREQUEST_TF8897443AF1FC6C3E04911FAA9EDAE89B0A0A962_H
#define ASSETBUNDLEREQUEST_TF8897443AF1FC6C3E04911FAA9EDAE89B0A0A962_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AssetBundleRequest
struct  AssetBundleRequest_tF8897443AF1FC6C3E04911FAA9EDAE89B0A0A962  : public AsyncOperation_t304C51ABED8AE734CC8DDDFE13013D8D5A44641D
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.AssetBundleRequest
struct AssetBundleRequest_tF8897443AF1FC6C3E04911FAA9EDAE89B0A0A962_marshaled_pinvoke : public AsyncOperation_t304C51ABED8AE734CC8DDDFE13013D8D5A44641D_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.AssetBundleRequest
struct AssetBundleRequest_tF8897443AF1FC6C3E04911FAA9EDAE89B0A0A962_marshaled_com : public AsyncOperation_t304C51ABED8AE734CC8DDDFE13013D8D5A44641D_marshaled_com
{
};
#endif // ASSETBUNDLEREQUEST_TF8897443AF1FC6C3E04911FAA9EDAE89B0A0A962_H
#ifndef COMPONENT_T05064EF382ABCAF4B8C94F8A350EA85184C26621_H
#define COMPONENT_T05064EF382ABCAF4B8C94F8A350EA85184C26621_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Component
struct  Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPONENT_T05064EF382ABCAF4B8C94F8A350EA85184C26621_H
#ifndef TERRAINMAP_T8D09DC412F632DAB9EA8FB7A11A34EB7464D547C_H
#define TERRAINMAP_T8D09DC412F632DAB9EA8FB7A11A34EB7464D547C_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.TerrainAPI.TerrainUtility/TerrainMap
struct  TerrainMap_t8D09DC412F632DAB9EA8FB7A11A34EB7464D547C  : public RuntimeObject
{
public:
	// UnityEngine.Vector3 UnityEngine.Experimental.TerrainAPI.TerrainUtility/TerrainMap::m_patchSize
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___m_patchSize_0;
	// UnityEngine.Experimental.TerrainAPI.TerrainUtility/TerrainMap/ErrorCode UnityEngine.Experimental.TerrainAPI.TerrainUtility/TerrainMap::m_errorCode
	int32_t ___m_errorCode_1;
	// System.Collections.Generic.Dictionary`2<UnityEngine.Experimental.TerrainAPI.TerrainUtility/TerrainMap/TileCoord,UnityEngine.Terrain> UnityEngine.Experimental.TerrainAPI.TerrainUtility/TerrainMap::m_terrainTiles
	Dictionary_2_tEB34CAE1B4D0E725777A5B9D419AF51BE918C30C * ___m_terrainTiles_2;

public:
	inline static int32_t get_offset_of_m_patchSize_0() { return static_cast<int32_t>(offsetof(TerrainMap_t8D09DC412F632DAB9EA8FB7A11A34EB7464D547C, ___m_patchSize_0)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_m_patchSize_0() const { return ___m_patchSize_0; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_m_patchSize_0() { return &___m_patchSize_0; }
	inline void set_m_patchSize_0(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___m_patchSize_0 = value;
	}

	inline static int32_t get_offset_of_m_errorCode_1() { return static_cast<int32_t>(offsetof(TerrainMap_t8D09DC412F632DAB9EA8FB7A11A34EB7464D547C, ___m_errorCode_1)); }
	inline int32_t get_m_errorCode_1() const { return ___m_errorCode_1; }
	inline int32_t* get_address_of_m_errorCode_1() { return &___m_errorCode_1; }
	inline void set_m_errorCode_1(int32_t value)
	{
		___m_errorCode_1 = value;
	}

	inline static int32_t get_offset_of_m_terrainTiles_2() { return static_cast<int32_t>(offsetof(TerrainMap_t8D09DC412F632DAB9EA8FB7A11A34EB7464D547C, ___m_terrainTiles_2)); }
	inline Dictionary_2_tEB34CAE1B4D0E725777A5B9D419AF51BE918C30C * get_m_terrainTiles_2() const { return ___m_terrainTiles_2; }
	inline Dictionary_2_tEB34CAE1B4D0E725777A5B9D419AF51BE918C30C ** get_address_of_m_terrainTiles_2() { return &___m_terrainTiles_2; }
	inline void set_m_terrainTiles_2(Dictionary_2_tEB34CAE1B4D0E725777A5B9D419AF51BE918C30C * value)
	{
		___m_terrainTiles_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_terrainTiles_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TERRAINMAP_T8D09DC412F632DAB9EA8FB7A11A34EB7464D547C_H
#ifndef HUMANBONE_T2CE168CF8638CEABF48FB7B7CCF77BBE0CECF995_H
#define HUMANBONE_T2CE168CF8638CEABF48FB7B7CCF77BBE0CECF995_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.HumanBone
struct  HumanBone_t2CE168CF8638CEABF48FB7B7CCF77BBE0CECF995 
{
public:
	// System.String UnityEngine.HumanBone::m_BoneName
	String_t* ___m_BoneName_0;
	// System.String UnityEngine.HumanBone::m_HumanName
	String_t* ___m_HumanName_1;
	// UnityEngine.HumanLimit UnityEngine.HumanBone::limit
	HumanLimit_t6AB2A599FC9E1F7E1598954FA9A0E568ECA5B6F3  ___limit_2;

public:
	inline static int32_t get_offset_of_m_BoneName_0() { return static_cast<int32_t>(offsetof(HumanBone_t2CE168CF8638CEABF48FB7B7CCF77BBE0CECF995, ___m_BoneName_0)); }
	inline String_t* get_m_BoneName_0() const { return ___m_BoneName_0; }
	inline String_t** get_address_of_m_BoneName_0() { return &___m_BoneName_0; }
	inline void set_m_BoneName_0(String_t* value)
	{
		___m_BoneName_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_BoneName_0), value);
	}

	inline static int32_t get_offset_of_m_HumanName_1() { return static_cast<int32_t>(offsetof(HumanBone_t2CE168CF8638CEABF48FB7B7CCF77BBE0CECF995, ___m_HumanName_1)); }
	inline String_t* get_m_HumanName_1() const { return ___m_HumanName_1; }
	inline String_t** get_address_of_m_HumanName_1() { return &___m_HumanName_1; }
	inline void set_m_HumanName_1(String_t* value)
	{
		___m_HumanName_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_HumanName_1), value);
	}

	inline static int32_t get_offset_of_limit_2() { return static_cast<int32_t>(offsetof(HumanBone_t2CE168CF8638CEABF48FB7B7CCF77BBE0CECF995, ___limit_2)); }
	inline HumanLimit_t6AB2A599FC9E1F7E1598954FA9A0E568ECA5B6F3  get_limit_2() const { return ___limit_2; }
	inline HumanLimit_t6AB2A599FC9E1F7E1598954FA9A0E568ECA5B6F3 * get_address_of_limit_2() { return &___limit_2; }
	inline void set_limit_2(HumanLimit_t6AB2A599FC9E1F7E1598954FA9A0E568ECA5B6F3  value)
	{
		___limit_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.HumanBone
struct HumanBone_t2CE168CF8638CEABF48FB7B7CCF77BBE0CECF995_marshaled_pinvoke
{
	char* ___m_BoneName_0;
	char* ___m_HumanName_1;
	HumanLimit_t6AB2A599FC9E1F7E1598954FA9A0E568ECA5B6F3  ___limit_2;
};
// Native definition for COM marshalling of UnityEngine.HumanBone
struct HumanBone_t2CE168CF8638CEABF48FB7B7CCF77BBE0CECF995_marshaled_com
{
	Il2CppChar* ___m_BoneName_0;
	Il2CppChar* ___m_HumanName_1;
	HumanLimit_t6AB2A599FC9E1F7E1598954FA9A0E568ECA5B6F3  ___limit_2;
};
#endif // HUMANBONE_T2CE168CF8638CEABF48FB7B7CCF77BBE0CECF995_H
#ifndef EMITPARAMS_T03557E552852EC6B71876CD05C4098733702A219_H
#define EMITPARAMS_T03557E552852EC6B71876CD05C4098733702A219_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.ParticleSystem/EmitParams
struct  EmitParams_t03557E552852EC6B71876CD05C4098733702A219 
{
public:
	// UnityEngine.ParticleSystem/Particle UnityEngine.ParticleSystem/EmitParams::m_Particle
	Particle_t64AF74F5D9C7EE7018AD98F29E4FF653558A581E  ___m_Particle_0;
	// System.Boolean UnityEngine.ParticleSystem/EmitParams::m_PositionSet
	bool ___m_PositionSet_1;
	// System.Boolean UnityEngine.ParticleSystem/EmitParams::m_VelocitySet
	bool ___m_VelocitySet_2;
	// System.Boolean UnityEngine.ParticleSystem/EmitParams::m_AxisOfRotationSet
	bool ___m_AxisOfRotationSet_3;
	// System.Boolean UnityEngine.ParticleSystem/EmitParams::m_RotationSet
	bool ___m_RotationSet_4;
	// System.Boolean UnityEngine.ParticleSystem/EmitParams::m_AngularVelocitySet
	bool ___m_AngularVelocitySet_5;
	// System.Boolean UnityEngine.ParticleSystem/EmitParams::m_StartSizeSet
	bool ___m_StartSizeSet_6;
	// System.Boolean UnityEngine.ParticleSystem/EmitParams::m_StartColorSet
	bool ___m_StartColorSet_7;
	// System.Boolean UnityEngine.ParticleSystem/EmitParams::m_RandomSeedSet
	bool ___m_RandomSeedSet_8;
	// System.Boolean UnityEngine.ParticleSystem/EmitParams::m_StartLifetimeSet
	bool ___m_StartLifetimeSet_9;
	// System.Boolean UnityEngine.ParticleSystem/EmitParams::m_ApplyShapeToPosition
	bool ___m_ApplyShapeToPosition_10;

public:
	inline static int32_t get_offset_of_m_Particle_0() { return static_cast<int32_t>(offsetof(EmitParams_t03557E552852EC6B71876CD05C4098733702A219, ___m_Particle_0)); }
	inline Particle_t64AF74F5D9C7EE7018AD98F29E4FF653558A581E  get_m_Particle_0() const { return ___m_Particle_0; }
	inline Particle_t64AF74F5D9C7EE7018AD98F29E4FF653558A581E * get_address_of_m_Particle_0() { return &___m_Particle_0; }
	inline void set_m_Particle_0(Particle_t64AF74F5D9C7EE7018AD98F29E4FF653558A581E  value)
	{
		___m_Particle_0 = value;
	}

	inline static int32_t get_offset_of_m_PositionSet_1() { return static_cast<int32_t>(offsetof(EmitParams_t03557E552852EC6B71876CD05C4098733702A219, ___m_PositionSet_1)); }
	inline bool get_m_PositionSet_1() const { return ___m_PositionSet_1; }
	inline bool* get_address_of_m_PositionSet_1() { return &___m_PositionSet_1; }
	inline void set_m_PositionSet_1(bool value)
	{
		___m_PositionSet_1 = value;
	}

	inline static int32_t get_offset_of_m_VelocitySet_2() { return static_cast<int32_t>(offsetof(EmitParams_t03557E552852EC6B71876CD05C4098733702A219, ___m_VelocitySet_2)); }
	inline bool get_m_VelocitySet_2() const { return ___m_VelocitySet_2; }
	inline bool* get_address_of_m_VelocitySet_2() { return &___m_VelocitySet_2; }
	inline void set_m_VelocitySet_2(bool value)
	{
		___m_VelocitySet_2 = value;
	}

	inline static int32_t get_offset_of_m_AxisOfRotationSet_3() { return static_cast<int32_t>(offsetof(EmitParams_t03557E552852EC6B71876CD05C4098733702A219, ___m_AxisOfRotationSet_3)); }
	inline bool get_m_AxisOfRotationSet_3() const { return ___m_AxisOfRotationSet_3; }
	inline bool* get_address_of_m_AxisOfRotationSet_3() { return &___m_AxisOfRotationSet_3; }
	inline void set_m_AxisOfRotationSet_3(bool value)
	{
		___m_AxisOfRotationSet_3 = value;
	}

	inline static int32_t get_offset_of_m_RotationSet_4() { return static_cast<int32_t>(offsetof(EmitParams_t03557E552852EC6B71876CD05C4098733702A219, ___m_RotationSet_4)); }
	inline bool get_m_RotationSet_4() const { return ___m_RotationSet_4; }
	inline bool* get_address_of_m_RotationSet_4() { return &___m_RotationSet_4; }
	inline void set_m_RotationSet_4(bool value)
	{
		___m_RotationSet_4 = value;
	}

	inline static int32_t get_offset_of_m_AngularVelocitySet_5() { return static_cast<int32_t>(offsetof(EmitParams_t03557E552852EC6B71876CD05C4098733702A219, ___m_AngularVelocitySet_5)); }
	inline bool get_m_AngularVelocitySet_5() const { return ___m_AngularVelocitySet_5; }
	inline bool* get_address_of_m_AngularVelocitySet_5() { return &___m_AngularVelocitySet_5; }
	inline void set_m_AngularVelocitySet_5(bool value)
	{
		___m_AngularVelocitySet_5 = value;
	}

	inline static int32_t get_offset_of_m_StartSizeSet_6() { return static_cast<int32_t>(offsetof(EmitParams_t03557E552852EC6B71876CD05C4098733702A219, ___m_StartSizeSet_6)); }
	inline bool get_m_StartSizeSet_6() const { return ___m_StartSizeSet_6; }
	inline bool* get_address_of_m_StartSizeSet_6() { return &___m_StartSizeSet_6; }
	inline void set_m_StartSizeSet_6(bool value)
	{
		___m_StartSizeSet_6 = value;
	}

	inline static int32_t get_offset_of_m_StartColorSet_7() { return static_cast<int32_t>(offsetof(EmitParams_t03557E552852EC6B71876CD05C4098733702A219, ___m_StartColorSet_7)); }
	inline bool get_m_StartColorSet_7() const { return ___m_StartColorSet_7; }
	inline bool* get_address_of_m_StartColorSet_7() { return &___m_StartColorSet_7; }
	inline void set_m_StartColorSet_7(bool value)
	{
		___m_StartColorSet_7 = value;
	}

	inline static int32_t get_offset_of_m_RandomSeedSet_8() { return static_cast<int32_t>(offsetof(EmitParams_t03557E552852EC6B71876CD05C4098733702A219, ___m_RandomSeedSet_8)); }
	inline bool get_m_RandomSeedSet_8() const { return ___m_RandomSeedSet_8; }
	inline bool* get_address_of_m_RandomSeedSet_8() { return &___m_RandomSeedSet_8; }
	inline void set_m_RandomSeedSet_8(bool value)
	{
		___m_RandomSeedSet_8 = value;
	}

	inline static int32_t get_offset_of_m_StartLifetimeSet_9() { return static_cast<int32_t>(offsetof(EmitParams_t03557E552852EC6B71876CD05C4098733702A219, ___m_StartLifetimeSet_9)); }
	inline bool get_m_StartLifetimeSet_9() const { return ___m_StartLifetimeSet_9; }
	inline bool* get_address_of_m_StartLifetimeSet_9() { return &___m_StartLifetimeSet_9; }
	inline void set_m_StartLifetimeSet_9(bool value)
	{
		___m_StartLifetimeSet_9 = value;
	}

	inline static int32_t get_offset_of_m_ApplyShapeToPosition_10() { return static_cast<int32_t>(offsetof(EmitParams_t03557E552852EC6B71876CD05C4098733702A219, ___m_ApplyShapeToPosition_10)); }
	inline bool get_m_ApplyShapeToPosition_10() const { return ___m_ApplyShapeToPosition_10; }
	inline bool* get_address_of_m_ApplyShapeToPosition_10() { return &___m_ApplyShapeToPosition_10; }
	inline void set_m_ApplyShapeToPosition_10(bool value)
	{
		___m_ApplyShapeToPosition_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.ParticleSystem/EmitParams
struct EmitParams_t03557E552852EC6B71876CD05C4098733702A219_marshaled_pinvoke
{
	Particle_t64AF74F5D9C7EE7018AD98F29E4FF653558A581E  ___m_Particle_0;
	int32_t ___m_PositionSet_1;
	int32_t ___m_VelocitySet_2;
	int32_t ___m_AxisOfRotationSet_3;
	int32_t ___m_RotationSet_4;
	int32_t ___m_AngularVelocitySet_5;
	int32_t ___m_StartSizeSet_6;
	int32_t ___m_StartColorSet_7;
	int32_t ___m_RandomSeedSet_8;
	int32_t ___m_StartLifetimeSet_9;
	int32_t ___m_ApplyShapeToPosition_10;
};
// Native definition for COM marshalling of UnityEngine.ParticleSystem/EmitParams
struct EmitParams_t03557E552852EC6B71876CD05C4098733702A219_marshaled_com
{
	Particle_t64AF74F5D9C7EE7018AD98F29E4FF653558A581E  ___m_Particle_0;
	int32_t ___m_PositionSet_1;
	int32_t ___m_VelocitySet_2;
	int32_t ___m_AxisOfRotationSet_3;
	int32_t ___m_RotationSet_4;
	int32_t ___m_AngularVelocitySet_5;
	int32_t ___m_StartSizeSet_6;
	int32_t ___m_StartColorSet_7;
	int32_t ___m_RandomSeedSet_8;
	int32_t ___m_StartLifetimeSet_9;
	int32_t ___m_ApplyShapeToPosition_10;
};
#endif // EMITPARAMS_T03557E552852EC6B71876CD05C4098733702A219_H
#ifndef RUNTIMEANIMATORCONTROLLER_TDA6672C8194522C2F60F8F2F241657E57C3520BD_H
#define RUNTIMEANIMATORCONTROLLER_TDA6672C8194522C2F60F8F2F241657E57C3520BD_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.RuntimeAnimatorController
struct  RuntimeAnimatorController_tDA6672C8194522C2F60F8F2F241657E57C3520BD  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEANIMATORCONTROLLER_TDA6672C8194522C2F60F8F2F241657E57C3520BD_H
#ifndef SCRIPTABLEOBJECT_TAB015486CEAB714DA0D5C1BA389B84FB90427734_H
#define SCRIPTABLEOBJECT_TAB015486CEAB714DA0D5C1BA389B84FB90427734_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.ScriptableObject
struct  ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734_marshaled_pinvoke : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734_marshaled_com : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_com
{
};
#endif // SCRIPTABLEOBJECT_TAB015486CEAB714DA0D5C1BA389B84FB90427734_H
#ifndef LEADERBOARD_T01480B36811BC84DF398C8A847972B62F5E2E4FE_H
#define LEADERBOARD_T01480B36811BC84DF398C8A847972B62F5E2E4FE_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SocialPlatforms.Impl.Leaderboard
struct  Leaderboard_t01480B36811BC84DF398C8A847972B62F5E2E4FE  : public RuntimeObject
{
public:
	// System.Boolean UnityEngine.SocialPlatforms.Impl.Leaderboard::m_Loading
	bool ___m_Loading_0;
	// UnityEngine.SocialPlatforms.IScore UnityEngine.SocialPlatforms.Impl.Leaderboard::m_LocalUserScore
	RuntimeObject* ___m_LocalUserScore_1;
	// System.UInt32 UnityEngine.SocialPlatforms.Impl.Leaderboard::m_MaxRange
	uint32_t ___m_MaxRange_2;
	// UnityEngine.SocialPlatforms.IScore[] UnityEngine.SocialPlatforms.Impl.Leaderboard::m_Scores
	IScoreU5BU5D_t64BCFED7B59BE0D35420A0A92BEC5140C035952C* ___m_Scores_3;
	// System.String UnityEngine.SocialPlatforms.Impl.Leaderboard::m_Title
	String_t* ___m_Title_4;
	// System.String[] UnityEngine.SocialPlatforms.Impl.Leaderboard::m_UserIDs
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ___m_UserIDs_5;
	// System.String UnityEngine.SocialPlatforms.Impl.Leaderboard::<id>k__BackingField
	String_t* ___U3CidU3Ek__BackingField_6;
	// UnityEngine.SocialPlatforms.UserScope UnityEngine.SocialPlatforms.Impl.Leaderboard::<userScope>k__BackingField
	int32_t ___U3CuserScopeU3Ek__BackingField_7;
	// UnityEngine.SocialPlatforms.Range UnityEngine.SocialPlatforms.Impl.Leaderboard::<range>k__BackingField
	Range_t2332F6C6E1E19A355F5C1A93FF4434B92FBDBABC  ___U3CrangeU3Ek__BackingField_8;
	// UnityEngine.SocialPlatforms.TimeScope UnityEngine.SocialPlatforms.Impl.Leaderboard::<timeScope>k__BackingField
	int32_t ___U3CtimeScopeU3Ek__BackingField_9;

public:
	inline static int32_t get_offset_of_m_Loading_0() { return static_cast<int32_t>(offsetof(Leaderboard_t01480B36811BC84DF398C8A847972B62F5E2E4FE, ___m_Loading_0)); }
	inline bool get_m_Loading_0() const { return ___m_Loading_0; }
	inline bool* get_address_of_m_Loading_0() { return &___m_Loading_0; }
	inline void set_m_Loading_0(bool value)
	{
		___m_Loading_0 = value;
	}

	inline static int32_t get_offset_of_m_LocalUserScore_1() { return static_cast<int32_t>(offsetof(Leaderboard_t01480B36811BC84DF398C8A847972B62F5E2E4FE, ___m_LocalUserScore_1)); }
	inline RuntimeObject* get_m_LocalUserScore_1() const { return ___m_LocalUserScore_1; }
	inline RuntimeObject** get_address_of_m_LocalUserScore_1() { return &___m_LocalUserScore_1; }
	inline void set_m_LocalUserScore_1(RuntimeObject* value)
	{
		___m_LocalUserScore_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_LocalUserScore_1), value);
	}

	inline static int32_t get_offset_of_m_MaxRange_2() { return static_cast<int32_t>(offsetof(Leaderboard_t01480B36811BC84DF398C8A847972B62F5E2E4FE, ___m_MaxRange_2)); }
	inline uint32_t get_m_MaxRange_2() const { return ___m_MaxRange_2; }
	inline uint32_t* get_address_of_m_MaxRange_2() { return &___m_MaxRange_2; }
	inline void set_m_MaxRange_2(uint32_t value)
	{
		___m_MaxRange_2 = value;
	}

	inline static int32_t get_offset_of_m_Scores_3() { return static_cast<int32_t>(offsetof(Leaderboard_t01480B36811BC84DF398C8A847972B62F5E2E4FE, ___m_Scores_3)); }
	inline IScoreU5BU5D_t64BCFED7B59BE0D35420A0A92BEC5140C035952C* get_m_Scores_3() const { return ___m_Scores_3; }
	inline IScoreU5BU5D_t64BCFED7B59BE0D35420A0A92BEC5140C035952C** get_address_of_m_Scores_3() { return &___m_Scores_3; }
	inline void set_m_Scores_3(IScoreU5BU5D_t64BCFED7B59BE0D35420A0A92BEC5140C035952C* value)
	{
		___m_Scores_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_Scores_3), value);
	}

	inline static int32_t get_offset_of_m_Title_4() { return static_cast<int32_t>(offsetof(Leaderboard_t01480B36811BC84DF398C8A847972B62F5E2E4FE, ___m_Title_4)); }
	inline String_t* get_m_Title_4() const { return ___m_Title_4; }
	inline String_t** get_address_of_m_Title_4() { return &___m_Title_4; }
	inline void set_m_Title_4(String_t* value)
	{
		___m_Title_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_Title_4), value);
	}

	inline static int32_t get_offset_of_m_UserIDs_5() { return static_cast<int32_t>(offsetof(Leaderboard_t01480B36811BC84DF398C8A847972B62F5E2E4FE, ___m_UserIDs_5)); }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* get_m_UserIDs_5() const { return ___m_UserIDs_5; }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E** get_address_of_m_UserIDs_5() { return &___m_UserIDs_5; }
	inline void set_m_UserIDs_5(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* value)
	{
		___m_UserIDs_5 = value;
		Il2CppCodeGenWriteBarrier((&___m_UserIDs_5), value);
	}

	inline static int32_t get_offset_of_U3CidU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(Leaderboard_t01480B36811BC84DF398C8A847972B62F5E2E4FE, ___U3CidU3Ek__BackingField_6)); }
	inline String_t* get_U3CidU3Ek__BackingField_6() const { return ___U3CidU3Ek__BackingField_6; }
	inline String_t** get_address_of_U3CidU3Ek__BackingField_6() { return &___U3CidU3Ek__BackingField_6; }
	inline void set_U3CidU3Ek__BackingField_6(String_t* value)
	{
		___U3CidU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((&___U3CidU3Ek__BackingField_6), value);
	}

	inline static int32_t get_offset_of_U3CuserScopeU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(Leaderboard_t01480B36811BC84DF398C8A847972B62F5E2E4FE, ___U3CuserScopeU3Ek__BackingField_7)); }
	inline int32_t get_U3CuserScopeU3Ek__BackingField_7() const { return ___U3CuserScopeU3Ek__BackingField_7; }
	inline int32_t* get_address_of_U3CuserScopeU3Ek__BackingField_7() { return &___U3CuserScopeU3Ek__BackingField_7; }
	inline void set_U3CuserScopeU3Ek__BackingField_7(int32_t value)
	{
		___U3CuserScopeU3Ek__BackingField_7 = value;
	}

	inline static int32_t get_offset_of_U3CrangeU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(Leaderboard_t01480B36811BC84DF398C8A847972B62F5E2E4FE, ___U3CrangeU3Ek__BackingField_8)); }
	inline Range_t2332F6C6E1E19A355F5C1A93FF4434B92FBDBABC  get_U3CrangeU3Ek__BackingField_8() const { return ___U3CrangeU3Ek__BackingField_8; }
	inline Range_t2332F6C6E1E19A355F5C1A93FF4434B92FBDBABC * get_address_of_U3CrangeU3Ek__BackingField_8() { return &___U3CrangeU3Ek__BackingField_8; }
	inline void set_U3CrangeU3Ek__BackingField_8(Range_t2332F6C6E1E19A355F5C1A93FF4434B92FBDBABC  value)
	{
		___U3CrangeU3Ek__BackingField_8 = value;
	}

	inline static int32_t get_offset_of_U3CtimeScopeU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(Leaderboard_t01480B36811BC84DF398C8A847972B62F5E2E4FE, ___U3CtimeScopeU3Ek__BackingField_9)); }
	inline int32_t get_U3CtimeScopeU3Ek__BackingField_9() const { return ___U3CtimeScopeU3Ek__BackingField_9; }
	inline int32_t* get_address_of_U3CtimeScopeU3Ek__BackingField_9() { return &___U3CtimeScopeU3Ek__BackingField_9; }
	inline void set_U3CtimeScopeU3Ek__BackingField_9(int32_t value)
	{
		___U3CtimeScopeU3Ek__BackingField_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LEADERBOARD_T01480B36811BC84DF398C8A847972B62F5E2E4FE_H
#ifndef USERPROFILE_TB1F9D8E54F0480240196974DCCAF2742F8F0A51E_H
#define USERPROFILE_TB1F9D8E54F0480240196974DCCAF2742F8F0A51E_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SocialPlatforms.Impl.UserProfile
struct  UserProfile_tB1F9D8E54F0480240196974DCCAF2742F8F0A51E  : public RuntimeObject
{
public:
	// System.String UnityEngine.SocialPlatforms.Impl.UserProfile::m_UserName
	String_t* ___m_UserName_0;
	// System.String UnityEngine.SocialPlatforms.Impl.UserProfile::m_ID
	String_t* ___m_ID_1;
	// System.Boolean UnityEngine.SocialPlatforms.Impl.UserProfile::m_IsFriend
	bool ___m_IsFriend_2;
	// UnityEngine.SocialPlatforms.UserState UnityEngine.SocialPlatforms.Impl.UserProfile::m_State
	int32_t ___m_State_3;
	// UnityEngine.Texture2D UnityEngine.SocialPlatforms.Impl.UserProfile::m_Image
	Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * ___m_Image_4;

public:
	inline static int32_t get_offset_of_m_UserName_0() { return static_cast<int32_t>(offsetof(UserProfile_tB1F9D8E54F0480240196974DCCAF2742F8F0A51E, ___m_UserName_0)); }
	inline String_t* get_m_UserName_0() const { return ___m_UserName_0; }
	inline String_t** get_address_of_m_UserName_0() { return &___m_UserName_0; }
	inline void set_m_UserName_0(String_t* value)
	{
		___m_UserName_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_UserName_0), value);
	}

	inline static int32_t get_offset_of_m_ID_1() { return static_cast<int32_t>(offsetof(UserProfile_tB1F9D8E54F0480240196974DCCAF2742F8F0A51E, ___m_ID_1)); }
	inline String_t* get_m_ID_1() const { return ___m_ID_1; }
	inline String_t** get_address_of_m_ID_1() { return &___m_ID_1; }
	inline void set_m_ID_1(String_t* value)
	{
		___m_ID_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_ID_1), value);
	}

	inline static int32_t get_offset_of_m_IsFriend_2() { return static_cast<int32_t>(offsetof(UserProfile_tB1F9D8E54F0480240196974DCCAF2742F8F0A51E, ___m_IsFriend_2)); }
	inline bool get_m_IsFriend_2() const { return ___m_IsFriend_2; }
	inline bool* get_address_of_m_IsFriend_2() { return &___m_IsFriend_2; }
	inline void set_m_IsFriend_2(bool value)
	{
		___m_IsFriend_2 = value;
	}

	inline static int32_t get_offset_of_m_State_3() { return static_cast<int32_t>(offsetof(UserProfile_tB1F9D8E54F0480240196974DCCAF2742F8F0A51E, ___m_State_3)); }
	inline int32_t get_m_State_3() const { return ___m_State_3; }
	inline int32_t* get_address_of_m_State_3() { return &___m_State_3; }
	inline void set_m_State_3(int32_t value)
	{
		___m_State_3 = value;
	}

	inline static int32_t get_offset_of_m_Image_4() { return static_cast<int32_t>(offsetof(UserProfile_tB1F9D8E54F0480240196974DCCAF2742F8F0A51E, ___m_Image_4)); }
	inline Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * get_m_Image_4() const { return ___m_Image_4; }
	inline Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C ** get_address_of_m_Image_4() { return &___m_Image_4; }
	inline void set_m_Image_4(Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * value)
	{
		___m_Image_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_Image_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // USERPROFILE_TB1F9D8E54F0480240196974DCCAF2742F8F0A51E_H
#ifndef TERRAINDATA_T9D44396901570930AFE428DAC19ABE0C1477CFE2_H
#define TERRAINDATA_T9D44396901570930AFE428DAC19ABE0C1477CFE2_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.TerrainData
struct  TerrainData_t9D44396901570930AFE428DAC19ABE0C1477CFE2  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};

struct TerrainData_t9D44396901570930AFE428DAC19ABE0C1477CFE2_StaticFields
{
public:
	// System.Int32 UnityEngine.TerrainData::k_MaximumResolution
	int32_t ___k_MaximumResolution_4;
	// System.Int32 UnityEngine.TerrainData::k_MinimumDetailResolutionPerPatch
	int32_t ___k_MinimumDetailResolutionPerPatch_5;
	// System.Int32 UnityEngine.TerrainData::k_MaximumDetailResolutionPerPatch
	int32_t ___k_MaximumDetailResolutionPerPatch_6;
	// System.Int32 UnityEngine.TerrainData::k_MaximumDetailPatchCount
	int32_t ___k_MaximumDetailPatchCount_7;
	// System.Int32 UnityEngine.TerrainData::k_MinimumAlphamapResolution
	int32_t ___k_MinimumAlphamapResolution_8;
	// System.Int32 UnityEngine.TerrainData::k_MaximumAlphamapResolution
	int32_t ___k_MaximumAlphamapResolution_9;
	// System.Int32 UnityEngine.TerrainData::k_MinimumBaseMapResolution
	int32_t ___k_MinimumBaseMapResolution_10;
	// System.Int32 UnityEngine.TerrainData::k_MaximumBaseMapResolution
	int32_t ___k_MaximumBaseMapResolution_11;

public:
	inline static int32_t get_offset_of_k_MaximumResolution_4() { return static_cast<int32_t>(offsetof(TerrainData_t9D44396901570930AFE428DAC19ABE0C1477CFE2_StaticFields, ___k_MaximumResolution_4)); }
	inline int32_t get_k_MaximumResolution_4() const { return ___k_MaximumResolution_4; }
	inline int32_t* get_address_of_k_MaximumResolution_4() { return &___k_MaximumResolution_4; }
	inline void set_k_MaximumResolution_4(int32_t value)
	{
		___k_MaximumResolution_4 = value;
	}

	inline static int32_t get_offset_of_k_MinimumDetailResolutionPerPatch_5() { return static_cast<int32_t>(offsetof(TerrainData_t9D44396901570930AFE428DAC19ABE0C1477CFE2_StaticFields, ___k_MinimumDetailResolutionPerPatch_5)); }
	inline int32_t get_k_MinimumDetailResolutionPerPatch_5() const { return ___k_MinimumDetailResolutionPerPatch_5; }
	inline int32_t* get_address_of_k_MinimumDetailResolutionPerPatch_5() { return &___k_MinimumDetailResolutionPerPatch_5; }
	inline void set_k_MinimumDetailResolutionPerPatch_5(int32_t value)
	{
		___k_MinimumDetailResolutionPerPatch_5 = value;
	}

	inline static int32_t get_offset_of_k_MaximumDetailResolutionPerPatch_6() { return static_cast<int32_t>(offsetof(TerrainData_t9D44396901570930AFE428DAC19ABE0C1477CFE2_StaticFields, ___k_MaximumDetailResolutionPerPatch_6)); }
	inline int32_t get_k_MaximumDetailResolutionPerPatch_6() const { return ___k_MaximumDetailResolutionPerPatch_6; }
	inline int32_t* get_address_of_k_MaximumDetailResolutionPerPatch_6() { return &___k_MaximumDetailResolutionPerPatch_6; }
	inline void set_k_MaximumDetailResolutionPerPatch_6(int32_t value)
	{
		___k_MaximumDetailResolutionPerPatch_6 = value;
	}

	inline static int32_t get_offset_of_k_MaximumDetailPatchCount_7() { return static_cast<int32_t>(offsetof(TerrainData_t9D44396901570930AFE428DAC19ABE0C1477CFE2_StaticFields, ___k_MaximumDetailPatchCount_7)); }
	inline int32_t get_k_MaximumDetailPatchCount_7() const { return ___k_MaximumDetailPatchCount_7; }
	inline int32_t* get_address_of_k_MaximumDetailPatchCount_7() { return &___k_MaximumDetailPatchCount_7; }
	inline void set_k_MaximumDetailPatchCount_7(int32_t value)
	{
		___k_MaximumDetailPatchCount_7 = value;
	}

	inline static int32_t get_offset_of_k_MinimumAlphamapResolution_8() { return static_cast<int32_t>(offsetof(TerrainData_t9D44396901570930AFE428DAC19ABE0C1477CFE2_StaticFields, ___k_MinimumAlphamapResolution_8)); }
	inline int32_t get_k_MinimumAlphamapResolution_8() const { return ___k_MinimumAlphamapResolution_8; }
	inline int32_t* get_address_of_k_MinimumAlphamapResolution_8() { return &___k_MinimumAlphamapResolution_8; }
	inline void set_k_MinimumAlphamapResolution_8(int32_t value)
	{
		___k_MinimumAlphamapResolution_8 = value;
	}

	inline static int32_t get_offset_of_k_MaximumAlphamapResolution_9() { return static_cast<int32_t>(offsetof(TerrainData_t9D44396901570930AFE428DAC19ABE0C1477CFE2_StaticFields, ___k_MaximumAlphamapResolution_9)); }
	inline int32_t get_k_MaximumAlphamapResolution_9() const { return ___k_MaximumAlphamapResolution_9; }
	inline int32_t* get_address_of_k_MaximumAlphamapResolution_9() { return &___k_MaximumAlphamapResolution_9; }
	inline void set_k_MaximumAlphamapResolution_9(int32_t value)
	{
		___k_MaximumAlphamapResolution_9 = value;
	}

	inline static int32_t get_offset_of_k_MinimumBaseMapResolution_10() { return static_cast<int32_t>(offsetof(TerrainData_t9D44396901570930AFE428DAC19ABE0C1477CFE2_StaticFields, ___k_MinimumBaseMapResolution_10)); }
	inline int32_t get_k_MinimumBaseMapResolution_10() const { return ___k_MinimumBaseMapResolution_10; }
	inline int32_t* get_address_of_k_MinimumBaseMapResolution_10() { return &___k_MinimumBaseMapResolution_10; }
	inline void set_k_MinimumBaseMapResolution_10(int32_t value)
	{
		___k_MinimumBaseMapResolution_10 = value;
	}

	inline static int32_t get_offset_of_k_MaximumBaseMapResolution_11() { return static_cast<int32_t>(offsetof(TerrainData_t9D44396901570930AFE428DAC19ABE0C1477CFE2_StaticFields, ___k_MaximumBaseMapResolution_11)); }
	inline int32_t get_k_MaximumBaseMapResolution_11() const { return ___k_MaximumBaseMapResolution_11; }
	inline int32_t* get_address_of_k_MaximumBaseMapResolution_11() { return &___k_MaximumBaseMapResolution_11; }
	inline void set_k_MaximumBaseMapResolution_11(int32_t value)
	{
		___k_MaximumBaseMapResolution_11 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TERRAINDATA_T9D44396901570930AFE428DAC19ABE0C1477CFE2_H
#ifndef TILEDATA_T8A50A35CAFD87C12E27D7E596D968C9114A4CBB5_H
#define TILEDATA_T8A50A35CAFD87C12E27D7E596D968C9114A4CBB5_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Tilemaps.TileData
struct  TileData_t8A50A35CAFD87C12E27D7E596D968C9114A4CBB5 
{
public:
	// UnityEngine.Sprite UnityEngine.Tilemaps.TileData::m_Sprite
	Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * ___m_Sprite_0;
	// UnityEngine.Color UnityEngine.Tilemaps.TileData::m_Color
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___m_Color_1;
	// UnityEngine.Matrix4x4 UnityEngine.Tilemaps.TileData::m_Transform
	Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  ___m_Transform_2;
	// UnityEngine.GameObject UnityEngine.Tilemaps.TileData::m_GameObject
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___m_GameObject_3;
	// UnityEngine.Tilemaps.TileFlags UnityEngine.Tilemaps.TileData::m_Flags
	int32_t ___m_Flags_4;
	// UnityEngine.Tilemaps.Tile/ColliderType UnityEngine.Tilemaps.TileData::m_ColliderType
	int32_t ___m_ColliderType_5;

public:
	inline static int32_t get_offset_of_m_Sprite_0() { return static_cast<int32_t>(offsetof(TileData_t8A50A35CAFD87C12E27D7E596D968C9114A4CBB5, ___m_Sprite_0)); }
	inline Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * get_m_Sprite_0() const { return ___m_Sprite_0; }
	inline Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 ** get_address_of_m_Sprite_0() { return &___m_Sprite_0; }
	inline void set_m_Sprite_0(Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * value)
	{
		___m_Sprite_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_Sprite_0), value);
	}

	inline static int32_t get_offset_of_m_Color_1() { return static_cast<int32_t>(offsetof(TileData_t8A50A35CAFD87C12E27D7E596D968C9114A4CBB5, ___m_Color_1)); }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  get_m_Color_1() const { return ___m_Color_1; }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * get_address_of_m_Color_1() { return &___m_Color_1; }
	inline void set_m_Color_1(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  value)
	{
		___m_Color_1 = value;
	}

	inline static int32_t get_offset_of_m_Transform_2() { return static_cast<int32_t>(offsetof(TileData_t8A50A35CAFD87C12E27D7E596D968C9114A4CBB5, ___m_Transform_2)); }
	inline Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  get_m_Transform_2() const { return ___m_Transform_2; }
	inline Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA * get_address_of_m_Transform_2() { return &___m_Transform_2; }
	inline void set_m_Transform_2(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  value)
	{
		___m_Transform_2 = value;
	}

	inline static int32_t get_offset_of_m_GameObject_3() { return static_cast<int32_t>(offsetof(TileData_t8A50A35CAFD87C12E27D7E596D968C9114A4CBB5, ___m_GameObject_3)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_m_GameObject_3() const { return ___m_GameObject_3; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_m_GameObject_3() { return &___m_GameObject_3; }
	inline void set_m_GameObject_3(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___m_GameObject_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_GameObject_3), value);
	}

	inline static int32_t get_offset_of_m_Flags_4() { return static_cast<int32_t>(offsetof(TileData_t8A50A35CAFD87C12E27D7E596D968C9114A4CBB5, ___m_Flags_4)); }
	inline int32_t get_m_Flags_4() const { return ___m_Flags_4; }
	inline int32_t* get_address_of_m_Flags_4() { return &___m_Flags_4; }
	inline void set_m_Flags_4(int32_t value)
	{
		___m_Flags_4 = value;
	}

	inline static int32_t get_offset_of_m_ColliderType_5() { return static_cast<int32_t>(offsetof(TileData_t8A50A35CAFD87C12E27D7E596D968C9114A4CBB5, ___m_ColliderType_5)); }
	inline int32_t get_m_ColliderType_5() const { return ___m_ColliderType_5; }
	inline int32_t* get_address_of_m_ColliderType_5() { return &___m_ColliderType_5; }
	inline void set_m_ColliderType_5(int32_t value)
	{
		___m_ColliderType_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Tilemaps.TileData
struct TileData_t8A50A35CAFD87C12E27D7E596D968C9114A4CBB5_marshaled_pinvoke
{
	Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * ___m_Sprite_0;
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___m_Color_1;
	Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  ___m_Transform_2;
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___m_GameObject_3;
	int32_t ___m_Flags_4;
	int32_t ___m_ColliderType_5;
};
// Native definition for COM marshalling of UnityEngine.Tilemaps.TileData
struct TileData_t8A50A35CAFD87C12E27D7E596D968C9114A4CBB5_marshaled_com
{
	Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * ___m_Sprite_0;
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___m_Color_1;
	Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  ___m_Transform_2;
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___m_GameObject_3;
	int32_t ___m_Flags_4;
	int32_t ___m_ColliderType_5;
};
#endif // TILEDATA_T8A50A35CAFD87C12E27D7E596D968C9114A4CBB5_H
#ifndef ANIMATOROVERRIDECONTROLLER_T130F04B57E753FD4288EF3235699ABE7C88FF312_H
#define ANIMATOROVERRIDECONTROLLER_T130F04B57E753FD4288EF3235699ABE7C88FF312_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AnimatorOverrideController
struct  AnimatorOverrideController_t130F04B57E753FD4288EF3235699ABE7C88FF312  : public RuntimeAnimatorController_tDA6672C8194522C2F60F8F2F241657E57C3520BD
{
public:
	// UnityEngine.AnimatorOverrideController/OnOverrideControllerDirtyCallback UnityEngine.AnimatorOverrideController::OnOverrideControllerDirty
	OnOverrideControllerDirtyCallback_t73560E6E30067C09BC58A15F9D2726051B077E2E * ___OnOverrideControllerDirty_4;

public:
	inline static int32_t get_offset_of_OnOverrideControllerDirty_4() { return static_cast<int32_t>(offsetof(AnimatorOverrideController_t130F04B57E753FD4288EF3235699ABE7C88FF312, ___OnOverrideControllerDirty_4)); }
	inline OnOverrideControllerDirtyCallback_t73560E6E30067C09BC58A15F9D2726051B077E2E * get_OnOverrideControllerDirty_4() const { return ___OnOverrideControllerDirty_4; }
	inline OnOverrideControllerDirtyCallback_t73560E6E30067C09BC58A15F9D2726051B077E2E ** get_address_of_OnOverrideControllerDirty_4() { return &___OnOverrideControllerDirty_4; }
	inline void set_OnOverrideControllerDirty_4(OnOverrideControllerDirtyCallback_t73560E6E30067C09BC58A15F9D2726051B077E2E * value)
	{
		___OnOverrideControllerDirty_4 = value;
		Il2CppCodeGenWriteBarrier((&___OnOverrideControllerDirty_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ANIMATOROVERRIDECONTROLLER_T130F04B57E753FD4288EF3235699ABE7C88FF312_H
#ifndef ONOVERRIDECONTROLLERDIRTYCALLBACK_T73560E6E30067C09BC58A15F9D2726051B077E2E_H
#define ONOVERRIDECONTROLLERDIRTYCALLBACK_T73560E6E30067C09BC58A15F9D2726051B077E2E_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AnimatorOverrideController/OnOverrideControllerDirtyCallback
struct  OnOverrideControllerDirtyCallback_t73560E6E30067C09BC58A15F9D2726051B077E2E  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ONOVERRIDECONTROLLERDIRTYCALLBACK_T73560E6E30067C09BC58A15F9D2726051B077E2E_H
#ifndef BEHAVIOUR_TBDC7E9C3C898AD8348891B82D3E345801D920CA8_H
#define BEHAVIOUR_TBDC7E9C3C898AD8348891B82D3E345801D920CA8_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Behaviour
struct  Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BEHAVIOUR_TBDC7E9C3C898AD8348891B82D3E345801D920CA8_H
#ifndef WILLRENDERCANVASES_TBD5AD090B5938021DEAA679A5AEEA790F60A8BEE_H
#define WILLRENDERCANVASES_TBD5AD090B5938021DEAA679A5AEEA790F60A8BEE_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Canvas/WillRenderCanvases
struct  WillRenderCanvases_tBD5AD090B5938021DEAA679A5AEEA790F60A8BEE  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WILLRENDERCANVASES_TBD5AD090B5938021DEAA679A5AEEA790F60A8BEE_H
#ifndef CANVASRENDERER_TB4D9C9FE77FD5C9C4546FC022D6E956960BC2B72_H
#define CANVASRENDERER_TB4D9C9FE77FD5C9C4546FC022D6E956960BC2B72_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.CanvasRenderer
struct  CanvasRenderer_tB4D9C9FE77FD5C9C4546FC022D6E956960BC2B72  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:
	// System.Boolean UnityEngine.CanvasRenderer::<isMask>k__BackingField
	bool ___U3CisMaskU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_U3CisMaskU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(CanvasRenderer_tB4D9C9FE77FD5C9C4546FC022D6E956960BC2B72, ___U3CisMaskU3Ek__BackingField_4)); }
	inline bool get_U3CisMaskU3Ek__BackingField_4() const { return ___U3CisMaskU3Ek__BackingField_4; }
	inline bool* get_address_of_U3CisMaskU3Ek__BackingField_4() { return &___U3CisMaskU3Ek__BackingField_4; }
	inline void set_U3CisMaskU3Ek__BackingField_4(bool value)
	{
		___U3CisMaskU3Ek__BackingField_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CANVASRENDERER_TB4D9C9FE77FD5C9C4546FC022D6E956960BC2B72_H
#ifndef TERRAINFILTER_T02BF9FBD8E61763D1D8484B34936B36B1046C66B_H
#define TERRAINFILTER_T02BF9FBD8E61763D1D8484B34936B36B1046C66B_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.TerrainAPI.TerrainUtility/TerrainMap/TerrainFilter
struct  TerrainFilter_t02BF9FBD8E61763D1D8484B34936B36B1046C66B  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TERRAINFILTER_T02BF9FBD8E61763D1D8484B34936B36B1046C66B_H
#ifndef VFXSPAWNERCALLBACKS_T4A28725CC33298516D1479C1D2BFEC00034373A1_H
#define VFXSPAWNERCALLBACKS_T4A28725CC33298516D1479C1D2BFEC00034373A1_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.VFX.VFXSpawnerCallbacks
struct  VFXSpawnerCallbacks_t4A28725CC33298516D1479C1D2BFEC00034373A1  : public ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VFXSPAWNERCALLBACKS_T4A28725CC33298516D1479C1D2BFEC00034373A1_H
#ifndef PARTICLESYSTEM_T45DA87A3E83E738DA3FDAA5A48A133F1A1247C3D_H
#define PARTICLESYSTEM_T45DA87A3E83E738DA3FDAA5A48A133F1A1247C3D_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.ParticleSystem
struct  ParticleSystem_t45DA87A3E83E738DA3FDAA5A48A133F1A1247C3D  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PARTICLESYSTEM_T45DA87A3E83E738DA3FDAA5A48A133F1A1247C3D_H
#ifndef RENDERER_T0556D67DD582620D1F495627EDE30D03284151F4_H
#define RENDERER_T0556D67DD582620D1F495627EDE30D03284151F4_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Renderer
struct  Renderer_t0556D67DD582620D1F495627EDE30D03284151F4  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RENDERER_T0556D67DD582620D1F495627EDE30D03284151F4_H
#ifndef LOCALUSER_TBBCEEB55B6F28DFA7F4677E9273622A34CABB135_H
#define LOCALUSER_TBBCEEB55B6F28DFA7F4677E9273622A34CABB135_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SocialPlatforms.Impl.LocalUser
struct  LocalUser_tBBCEEB55B6F28DFA7F4677E9273622A34CABB135  : public UserProfile_tB1F9D8E54F0480240196974DCCAF2742F8F0A51E
{
public:
	// UnityEngine.SocialPlatforms.IUserProfile[] UnityEngine.SocialPlatforms.Impl.LocalUser::m_Friends
	IUserProfileU5BU5D_tBE2EEBD677C2C607E3F86B6ABF3F164B72E570B0* ___m_Friends_5;
	// System.Boolean UnityEngine.SocialPlatforms.Impl.LocalUser::m_Authenticated
	bool ___m_Authenticated_6;
	// System.Boolean UnityEngine.SocialPlatforms.Impl.LocalUser::m_Underage
	bool ___m_Underage_7;

public:
	inline static int32_t get_offset_of_m_Friends_5() { return static_cast<int32_t>(offsetof(LocalUser_tBBCEEB55B6F28DFA7F4677E9273622A34CABB135, ___m_Friends_5)); }
	inline IUserProfileU5BU5D_tBE2EEBD677C2C607E3F86B6ABF3F164B72E570B0* get_m_Friends_5() const { return ___m_Friends_5; }
	inline IUserProfileU5BU5D_tBE2EEBD677C2C607E3F86B6ABF3F164B72E570B0** get_address_of_m_Friends_5() { return &___m_Friends_5; }
	inline void set_m_Friends_5(IUserProfileU5BU5D_tBE2EEBD677C2C607E3F86B6ABF3F164B72E570B0* value)
	{
		___m_Friends_5 = value;
		Il2CppCodeGenWriteBarrier((&___m_Friends_5), value);
	}

	inline static int32_t get_offset_of_m_Authenticated_6() { return static_cast<int32_t>(offsetof(LocalUser_tBBCEEB55B6F28DFA7F4677E9273622A34CABB135, ___m_Authenticated_6)); }
	inline bool get_m_Authenticated_6() const { return ___m_Authenticated_6; }
	inline bool* get_address_of_m_Authenticated_6() { return &___m_Authenticated_6; }
	inline void set_m_Authenticated_6(bool value)
	{
		___m_Authenticated_6 = value;
	}

	inline static int32_t get_offset_of_m_Underage_7() { return static_cast<int32_t>(offsetof(LocalUser_tBBCEEB55B6F28DFA7F4677E9273622A34CABB135, ___m_Underage_7)); }
	inline bool get_m_Underage_7() const { return ___m_Underage_7; }
	inline bool* get_address_of_m_Underage_7() { return &___m_Underage_7; }
	inline void set_m_Underage_7(bool value)
	{
		___m_Underage_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LOCALUSER_TBBCEEB55B6F28DFA7F4677E9273622A34CABB135_H
#ifndef TILEBASE_TD2158024AAA28EB0EC62F253FA1D1A76BC50F85E_H
#define TILEBASE_TD2158024AAA28EB0EC62F253FA1D1A76BC50F85E_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Tilemaps.TileBase
struct  TileBase_tD2158024AAA28EB0EC62F253FA1D1A76BC50F85E  : public ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TILEBASE_TD2158024AAA28EB0EC62F253FA1D1A76BC50F85E_H
#ifndef BASELINEFUNCTION_T0A87479762FB382A84709009E9B6DCC597C6C9DF_H
#define BASELINEFUNCTION_T0A87479762FB382A84709009E9B6DCC597C6C9DF_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Yoga.BaselineFunction
struct  BaselineFunction_t0A87479762FB382A84709009E9B6DCC597C6C9DF  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BASELINEFUNCTION_T0A87479762FB382A84709009E9B6DCC597C6C9DF_H
#ifndef MEASUREFUNCTION_TC5585E81380F4017044CE57AE21E178BAE2607AB_H
#define MEASUREFUNCTION_TC5585E81380F4017044CE57AE21E178BAE2607AB_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Yoga.MeasureFunction
struct  MeasureFunction_tC5585E81380F4017044CE57AE21E178BAE2607AB  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MEASUREFUNCTION_TC5585E81380F4017044CE57AE21E178BAE2607AB_H
#ifndef CANVAS_TBC28BF1DD8D8499A89B5781505833D3728CF8591_H
#define CANVAS_TBC28BF1DD8D8499A89B5781505833D3728CF8591_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Canvas
struct  Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591  : public Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8
{
public:

public:
};

struct Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591_StaticFields
{
public:
	// UnityEngine.Canvas/WillRenderCanvases UnityEngine.Canvas::willRenderCanvases
	WillRenderCanvases_tBD5AD090B5938021DEAA679A5AEEA790F60A8BEE * ___willRenderCanvases_4;

public:
	inline static int32_t get_offset_of_willRenderCanvases_4() { return static_cast<int32_t>(offsetof(Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591_StaticFields, ___willRenderCanvases_4)); }
	inline WillRenderCanvases_tBD5AD090B5938021DEAA679A5AEEA790F60A8BEE * get_willRenderCanvases_4() const { return ___willRenderCanvases_4; }
	inline WillRenderCanvases_tBD5AD090B5938021DEAA679A5AEEA790F60A8BEE ** get_address_of_willRenderCanvases_4() { return &___willRenderCanvases_4; }
	inline void set_willRenderCanvases_4(WillRenderCanvases_tBD5AD090B5938021DEAA679A5AEEA790F60A8BEE * value)
	{
		___willRenderCanvases_4 = value;
		Il2CppCodeGenWriteBarrier((&___willRenderCanvases_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CANVAS_TBC28BF1DD8D8499A89B5781505833D3728CF8591_H
#ifndef CANVASGROUP_TE2C664C60990D1DCCEE0CC6545CC3E80369C7F90_H
#define CANVASGROUP_TE2C664C60990D1DCCEE0CC6545CC3E80369C7F90_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.CanvasGroup
struct  CanvasGroup_tE2C664C60990D1DCCEE0CC6545CC3E80369C7F90  : public Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CANVASGROUP_TE2C664C60990D1DCCEE0CC6545CC3E80369C7F90_H
#ifndef VISUALEFFECT_TBB62FCDE4826BA7FE8BEB728EC616C8E7ED5A506_H
#define VISUALEFFECT_TBB62FCDE4826BA7FE8BEB728EC616C8E7ED5A506_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.VFX.VisualEffect
struct  VisualEffect_tBB62FCDE4826BA7FE8BEB728EC616C8E7ED5A506  : public Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VISUALEFFECT_TBB62FCDE4826BA7FE8BEB728EC616C8E7ED5A506_H
#ifndef GRIDLAYOUT_T271F88A0992C64FE8E229D03480E3862B22D57F9_H
#define GRIDLAYOUT_T271F88A0992C64FE8E229D03480E3862B22D57F9_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.GridLayout
struct  GridLayout_t271F88A0992C64FE8E229D03480E3862B22D57F9  : public Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GRIDLAYOUT_T271F88A0992C64FE8E229D03480E3862B22D57F9_H
#ifndef PARTICLESYSTEMRENDERER_T86E4ED2C0ADF5D2E7FA3D636B6B070600D05C459_H
#define PARTICLESYSTEMRENDERER_T86E4ED2C0ADF5D2E7FA3D636B6B070600D05C459_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.ParticleSystemRenderer
struct  ParticleSystemRenderer_t86E4ED2C0ADF5D2E7FA3D636B6B070600D05C459  : public Renderer_t0556D67DD582620D1F495627EDE30D03284151F4
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PARTICLESYSTEMRENDERER_T86E4ED2C0ADF5D2E7FA3D636B6B070600D05C459_H
#ifndef PLAYABLEDIRECTOR_TAE05A3F910B71FA6BC7EED28C26C35945308D2B2_H
#define PLAYABLEDIRECTOR_TAE05A3F910B71FA6BC7EED28C26C35945308D2B2_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Playables.PlayableDirector
struct  PlayableDirector_tAE05A3F910B71FA6BC7EED28C26C35945308D2B2  : public Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8
{
public:
	// System.Action`1<UnityEngine.Playables.PlayableDirector> UnityEngine.Playables.PlayableDirector::played
	Action_1_t25E50453F931760A3FC110C4EC79B73BBC203021 * ___played_4;
	// System.Action`1<UnityEngine.Playables.PlayableDirector> UnityEngine.Playables.PlayableDirector::paused
	Action_1_t25E50453F931760A3FC110C4EC79B73BBC203021 * ___paused_5;
	// System.Action`1<UnityEngine.Playables.PlayableDirector> UnityEngine.Playables.PlayableDirector::stopped
	Action_1_t25E50453F931760A3FC110C4EC79B73BBC203021 * ___stopped_6;

public:
	inline static int32_t get_offset_of_played_4() { return static_cast<int32_t>(offsetof(PlayableDirector_tAE05A3F910B71FA6BC7EED28C26C35945308D2B2, ___played_4)); }
	inline Action_1_t25E50453F931760A3FC110C4EC79B73BBC203021 * get_played_4() const { return ___played_4; }
	inline Action_1_t25E50453F931760A3FC110C4EC79B73BBC203021 ** get_address_of_played_4() { return &___played_4; }
	inline void set_played_4(Action_1_t25E50453F931760A3FC110C4EC79B73BBC203021 * value)
	{
		___played_4 = value;
		Il2CppCodeGenWriteBarrier((&___played_4), value);
	}

	inline static int32_t get_offset_of_paused_5() { return static_cast<int32_t>(offsetof(PlayableDirector_tAE05A3F910B71FA6BC7EED28C26C35945308D2B2, ___paused_5)); }
	inline Action_1_t25E50453F931760A3FC110C4EC79B73BBC203021 * get_paused_5() const { return ___paused_5; }
	inline Action_1_t25E50453F931760A3FC110C4EC79B73BBC203021 ** get_address_of_paused_5() { return &___paused_5; }
	inline void set_paused_5(Action_1_t25E50453F931760A3FC110C4EC79B73BBC203021 * value)
	{
		___paused_5 = value;
		Il2CppCodeGenWriteBarrier((&___paused_5), value);
	}

	inline static int32_t get_offset_of_stopped_6() { return static_cast<int32_t>(offsetof(PlayableDirector_tAE05A3F910B71FA6BC7EED28C26C35945308D2B2, ___stopped_6)); }
	inline Action_1_t25E50453F931760A3FC110C4EC79B73BBC203021 * get_stopped_6() const { return ___stopped_6; }
	inline Action_1_t25E50453F931760A3FC110C4EC79B73BBC203021 ** get_address_of_stopped_6() { return &___stopped_6; }
	inline void set_stopped_6(Action_1_t25E50453F931760A3FC110C4EC79B73BBC203021 * value)
	{
		___stopped_6 = value;
		Il2CppCodeGenWriteBarrier((&___stopped_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYABLEDIRECTOR_TAE05A3F910B71FA6BC7EED28C26C35945308D2B2_H
#ifndef TERRAIN_T0BF7371FA90643325F50A87C7894D7BEBBE08943_H
#define TERRAIN_T0BF7371FA90643325F50A87C7894D7BEBBE08943_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Terrain
struct  Terrain_t0BF7371FA90643325F50A87C7894D7BEBBE08943  : public Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TERRAIN_T0BF7371FA90643325F50A87C7894D7BEBBE08943_H
#ifndef TILE_T275C7CE9C854F2912C851F345CCC00C45EDDE7AE_H
#define TILE_T275C7CE9C854F2912C851F345CCC00C45EDDE7AE_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Tilemaps.Tile
struct  Tile_t275C7CE9C854F2912C851F345CCC00C45EDDE7AE  : public TileBase_tD2158024AAA28EB0EC62F253FA1D1A76BC50F85E
{
public:
	// UnityEngine.Sprite UnityEngine.Tilemaps.Tile::m_Sprite
	Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * ___m_Sprite_4;
	// UnityEngine.Color UnityEngine.Tilemaps.Tile::m_Color
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___m_Color_5;
	// UnityEngine.Matrix4x4 UnityEngine.Tilemaps.Tile::m_Transform
	Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  ___m_Transform_6;
	// UnityEngine.GameObject UnityEngine.Tilemaps.Tile::m_InstancedGameObject
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___m_InstancedGameObject_7;
	// UnityEngine.Tilemaps.TileFlags UnityEngine.Tilemaps.Tile::m_Flags
	int32_t ___m_Flags_8;
	// UnityEngine.Tilemaps.Tile/ColliderType UnityEngine.Tilemaps.Tile::m_ColliderType
	int32_t ___m_ColliderType_9;

public:
	inline static int32_t get_offset_of_m_Sprite_4() { return static_cast<int32_t>(offsetof(Tile_t275C7CE9C854F2912C851F345CCC00C45EDDE7AE, ___m_Sprite_4)); }
	inline Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * get_m_Sprite_4() const { return ___m_Sprite_4; }
	inline Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 ** get_address_of_m_Sprite_4() { return &___m_Sprite_4; }
	inline void set_m_Sprite_4(Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * value)
	{
		___m_Sprite_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_Sprite_4), value);
	}

	inline static int32_t get_offset_of_m_Color_5() { return static_cast<int32_t>(offsetof(Tile_t275C7CE9C854F2912C851F345CCC00C45EDDE7AE, ___m_Color_5)); }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  get_m_Color_5() const { return ___m_Color_5; }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * get_address_of_m_Color_5() { return &___m_Color_5; }
	inline void set_m_Color_5(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  value)
	{
		___m_Color_5 = value;
	}

	inline static int32_t get_offset_of_m_Transform_6() { return static_cast<int32_t>(offsetof(Tile_t275C7CE9C854F2912C851F345CCC00C45EDDE7AE, ___m_Transform_6)); }
	inline Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  get_m_Transform_6() const { return ___m_Transform_6; }
	inline Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA * get_address_of_m_Transform_6() { return &___m_Transform_6; }
	inline void set_m_Transform_6(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  value)
	{
		___m_Transform_6 = value;
	}

	inline static int32_t get_offset_of_m_InstancedGameObject_7() { return static_cast<int32_t>(offsetof(Tile_t275C7CE9C854F2912C851F345CCC00C45EDDE7AE, ___m_InstancedGameObject_7)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_m_InstancedGameObject_7() const { return ___m_InstancedGameObject_7; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_m_InstancedGameObject_7() { return &___m_InstancedGameObject_7; }
	inline void set_m_InstancedGameObject_7(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___m_InstancedGameObject_7 = value;
		Il2CppCodeGenWriteBarrier((&___m_InstancedGameObject_7), value);
	}

	inline static int32_t get_offset_of_m_Flags_8() { return static_cast<int32_t>(offsetof(Tile_t275C7CE9C854F2912C851F345CCC00C45EDDE7AE, ___m_Flags_8)); }
	inline int32_t get_m_Flags_8() const { return ___m_Flags_8; }
	inline int32_t* get_address_of_m_Flags_8() { return &___m_Flags_8; }
	inline void set_m_Flags_8(int32_t value)
	{
		___m_Flags_8 = value;
	}

	inline static int32_t get_offset_of_m_ColliderType_9() { return static_cast<int32_t>(offsetof(Tile_t275C7CE9C854F2912C851F345CCC00C45EDDE7AE, ___m_ColliderType_9)); }
	inline int32_t get_m_ColliderType_9() const { return ___m_ColliderType_9; }
	inline int32_t* get_address_of_m_ColliderType_9() { return &___m_ColliderType_9; }
	inline void set_m_ColliderType_9(int32_t value)
	{
		___m_ColliderType_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TILE_T275C7CE9C854F2912C851F345CCC00C45EDDE7AE_H
#ifndef TILEMAP_T0F92148668211805A631B93488D4A629EC378B10_H
#define TILEMAP_T0F92148668211805A631B93488D4A629EC378B10_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Tilemaps.Tilemap
struct  Tilemap_t0F92148668211805A631B93488D4A629EC378B10  : public GridLayout_t271F88A0992C64FE8E229D03480E3862B22D57F9
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TILEMAP_T0F92148668211805A631B93488D4A629EC378B10_H





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2300 = { sizeof (AnimatorControllerPlayable_t352C2C3D059CFC0404FF4FBBA302F16C5966F44B)+ sizeof (RuntimeObject), sizeof(AnimatorControllerPlayable_t352C2C3D059CFC0404FF4FBBA302F16C5966F44B ), sizeof(AnimatorControllerPlayable_t352C2C3D059CFC0404FF4FBBA302F16C5966F44B_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2300[2] = 
{
	AnimatorControllerPlayable_t352C2C3D059CFC0404FF4FBBA302F16C5966F44B::get_offset_of_m_Handle_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	AnimatorControllerPlayable_t352C2C3D059CFC0404FF4FBBA302F16C5966F44B_StaticFields::get_offset_of_m_NullPlayable_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2301 = { sizeof (AnimatorOverrideController_t130F04B57E753FD4288EF3235699ABE7C88FF312), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2301[1] = 
{
	AnimatorOverrideController_t130F04B57E753FD4288EF3235699ABE7C88FF312::get_offset_of_OnOverrideControllerDirty_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2302 = { sizeof (OnOverrideControllerDirtyCallback_t73560E6E30067C09BC58A15F9D2726051B077E2E), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2303 = { sizeof (SkeletonBone_tCDF297229129311214294465F3FA353DB09726F5)+ sizeof (RuntimeObject), sizeof(SkeletonBone_tCDF297229129311214294465F3FA353DB09726F5_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable2303[5] = 
{
	SkeletonBone_tCDF297229129311214294465F3FA353DB09726F5::get_offset_of_name_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	SkeletonBone_tCDF297229129311214294465F3FA353DB09726F5::get_offset_of_parentName_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	SkeletonBone_tCDF297229129311214294465F3FA353DB09726F5::get_offset_of_position_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	SkeletonBone_tCDF297229129311214294465F3FA353DB09726F5::get_offset_of_rotation_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	SkeletonBone_tCDF297229129311214294465F3FA353DB09726F5::get_offset_of_scale_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2304 = { sizeof (HumanLimit_t6AB2A599FC9E1F7E1598954FA9A0E568ECA5B6F3)+ sizeof (RuntimeObject), sizeof(HumanLimit_t6AB2A599FC9E1F7E1598954FA9A0E568ECA5B6F3 ), 0, 0 };
extern const int32_t g_FieldOffsetTable2304[5] = 
{
	HumanLimit_t6AB2A599FC9E1F7E1598954FA9A0E568ECA5B6F3::get_offset_of_m_Min_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	HumanLimit_t6AB2A599FC9E1F7E1598954FA9A0E568ECA5B6F3::get_offset_of_m_Max_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	HumanLimit_t6AB2A599FC9E1F7E1598954FA9A0E568ECA5B6F3::get_offset_of_m_Center_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	HumanLimit_t6AB2A599FC9E1F7E1598954FA9A0E568ECA5B6F3::get_offset_of_m_AxisLength_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	HumanLimit_t6AB2A599FC9E1F7E1598954FA9A0E568ECA5B6F3::get_offset_of_m_UseDefaultValues_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2305 = { sizeof (HumanBone_t2CE168CF8638CEABF48FB7B7CCF77BBE0CECF995)+ sizeof (RuntimeObject), sizeof(HumanBone_t2CE168CF8638CEABF48FB7B7CCF77BBE0CECF995_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable2305[3] = 
{
	HumanBone_t2CE168CF8638CEABF48FB7B7CCF77BBE0CECF995::get_offset_of_m_BoneName_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	HumanBone_t2CE168CF8638CEABF48FB7B7CCF77BBE0CECF995::get_offset_of_m_HumanName_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	HumanBone_t2CE168CF8638CEABF48FB7B7CCF77BBE0CECF995::get_offset_of_limit_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2306 = { sizeof (RuntimeAnimatorController_tDA6672C8194522C2F60F8F2F241657E57C3520BD), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2307 = { sizeof (AnimationEventSource_t0CA86CB3D775209B46F475A99887C93530F20702)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2307[4] = 
{
	AnimationEventSource_t0CA86CB3D775209B46F475A99887C93530F20702::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2308 = { sizeof (AnimationEvent_tEDD4E45FEA5CA4657CBBF1E0CFF657191D90673F), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2308[11] = 
{
	AnimationEvent_tEDD4E45FEA5CA4657CBBF1E0CFF657191D90673F::get_offset_of_m_Time_0(),
	AnimationEvent_tEDD4E45FEA5CA4657CBBF1E0CFF657191D90673F::get_offset_of_m_FunctionName_1(),
	AnimationEvent_tEDD4E45FEA5CA4657CBBF1E0CFF657191D90673F::get_offset_of_m_StringParameter_2(),
	AnimationEvent_tEDD4E45FEA5CA4657CBBF1E0CFF657191D90673F::get_offset_of_m_ObjectReferenceParameter_3(),
	AnimationEvent_tEDD4E45FEA5CA4657CBBF1E0CFF657191D90673F::get_offset_of_m_FloatParameter_4(),
	AnimationEvent_tEDD4E45FEA5CA4657CBBF1E0CFF657191D90673F::get_offset_of_m_IntParameter_5(),
	AnimationEvent_tEDD4E45FEA5CA4657CBBF1E0CFF657191D90673F::get_offset_of_m_MessageOptions_6(),
	AnimationEvent_tEDD4E45FEA5CA4657CBBF1E0CFF657191D90673F::get_offset_of_m_Source_7(),
	AnimationEvent_tEDD4E45FEA5CA4657CBBF1E0CFF657191D90673F::get_offset_of_m_StateSender_8(),
	AnimationEvent_tEDD4E45FEA5CA4657CBBF1E0CFF657191D90673F::get_offset_of_m_AnimatorStateInfo_9(),
	AnimationEvent_tEDD4E45FEA5CA4657CBBF1E0CFF657191D90673F::get_offset_of_m_AnimatorClipInfo_10(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2309 = { sizeof (AnimationState_t48FF4D41FEF3492F8286100BE3758CE3A4656386), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2310 = { sizeof (U3CModuleU3E_t304FD43409445C967EFB33BCD33189C66F66BB72), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2311 = { sizeof (AssetBundleCreateRequest_t8D8FCFC0424680D7B5E04346D932442D5886CD2E), sizeof(AssetBundleCreateRequest_t8D8FCFC0424680D7B5E04346D932442D5886CD2E_marshaled_pinvoke), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2312 = { sizeof (AssetBundleRecompressOperation_tD941F40367DFE0A376269FCBE02234C5C8E9BFB6), sizeof(AssetBundleRecompressOperation_tD941F40367DFE0A376269FCBE02234C5C8E9BFB6_marshaled_pinvoke), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2313 = { sizeof (AssetBundleRequest_tF8897443AF1FC6C3E04911FAA9EDAE89B0A0A962), sizeof(AssetBundleRequest_tF8897443AF1FC6C3E04911FAA9EDAE89B0A0A962_marshaled_pinvoke), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2314 = { sizeof (U3CModuleU3E_t5AF943BF708588C1841CAB8BCD8AC614C6E8F142), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2315 = { sizeof (PlayableDirector_tAE05A3F910B71FA6BC7EED28C26C35945308D2B2), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2315[3] = 
{
	PlayableDirector_tAE05A3F910B71FA6BC7EED28C26C35945308D2B2::get_offset_of_played_4(),
	PlayableDirector_tAE05A3F910B71FA6BC7EED28C26C35945308D2B2::get_offset_of_paused_5(),
	PlayableDirector_tAE05A3F910B71FA6BC7EED28C26C35945308D2B2::get_offset_of_stopped_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2316 = { sizeof (U3CModuleU3E_t188571242096CC1D2BEFEA0CA619B862EF745D19), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2317 = { sizeof (GcUserProfileData_tDCEBF6CF74E9EBC0B9F9847CE96118169391B57D)+ sizeof (RuntimeObject), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2317[4] = 
{
	GcUserProfileData_tDCEBF6CF74E9EBC0B9F9847CE96118169391B57D::get_offset_of_userName_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	GcUserProfileData_tDCEBF6CF74E9EBC0B9F9847CE96118169391B57D::get_offset_of_userID_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	GcUserProfileData_tDCEBF6CF74E9EBC0B9F9847CE96118169391B57D::get_offset_of_isFriend_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	GcUserProfileData_tDCEBF6CF74E9EBC0B9F9847CE96118169391B57D::get_offset_of_image_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2318 = { sizeof (GcAchievementDescriptionData_t12849233B11B5241066E0D33B3681C2352CAF0A0)+ sizeof (RuntimeObject), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2318[7] = 
{
	GcAchievementDescriptionData_t12849233B11B5241066E0D33B3681C2352CAF0A0::get_offset_of_m_Identifier_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	GcAchievementDescriptionData_t12849233B11B5241066E0D33B3681C2352CAF0A0::get_offset_of_m_Title_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	GcAchievementDescriptionData_t12849233B11B5241066E0D33B3681C2352CAF0A0::get_offset_of_m_Image_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	GcAchievementDescriptionData_t12849233B11B5241066E0D33B3681C2352CAF0A0::get_offset_of_m_AchievedDescription_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	GcAchievementDescriptionData_t12849233B11B5241066E0D33B3681C2352CAF0A0::get_offset_of_m_UnachievedDescription_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
	GcAchievementDescriptionData_t12849233B11B5241066E0D33B3681C2352CAF0A0::get_offset_of_m_Hidden_5() + static_cast<int32_t>(sizeof(RuntimeObject)),
	GcAchievementDescriptionData_t12849233B11B5241066E0D33B3681C2352CAF0A0::get_offset_of_m_Points_6() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2319 = { sizeof (GcAchievementData_t5CBCF44628981C91C76C552716A7D551670DCE55)+ sizeof (RuntimeObject), sizeof(GcAchievementData_t5CBCF44628981C91C76C552716A7D551670DCE55_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable2319[5] = 
{
	GcAchievementData_t5CBCF44628981C91C76C552716A7D551670DCE55::get_offset_of_m_Identifier_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	GcAchievementData_t5CBCF44628981C91C76C552716A7D551670DCE55::get_offset_of_m_PercentCompleted_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	GcAchievementData_t5CBCF44628981C91C76C552716A7D551670DCE55::get_offset_of_m_Completed_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	GcAchievementData_t5CBCF44628981C91C76C552716A7D551670DCE55::get_offset_of_m_Hidden_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	GcAchievementData_t5CBCF44628981C91C76C552716A7D551670DCE55::get_offset_of_m_LastReportedDate_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2320 = { sizeof (GcScoreData_t45EF6CC4038C34CE5823D33D1978C5A3F2E0D09A)+ sizeof (RuntimeObject), sizeof(GcScoreData_t45EF6CC4038C34CE5823D33D1978C5A3F2E0D09A_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable2320[7] = 
{
	GcScoreData_t45EF6CC4038C34CE5823D33D1978C5A3F2E0D09A::get_offset_of_m_Category_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	GcScoreData_t45EF6CC4038C34CE5823D33D1978C5A3F2E0D09A::get_offset_of_m_ValueLow_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	GcScoreData_t45EF6CC4038C34CE5823D33D1978C5A3F2E0D09A::get_offset_of_m_ValueHigh_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	GcScoreData_t45EF6CC4038C34CE5823D33D1978C5A3F2E0D09A::get_offset_of_m_Date_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	GcScoreData_t45EF6CC4038C34CE5823D33D1978C5A3F2E0D09A::get_offset_of_m_FormattedValue_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
	GcScoreData_t45EF6CC4038C34CE5823D33D1978C5A3F2E0D09A::get_offset_of_m_PlayerID_5() + static_cast<int32_t>(sizeof(RuntimeObject)),
	GcScoreData_t45EF6CC4038C34CE5823D33D1978C5A3F2E0D09A::get_offset_of_m_Rank_6() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2321 = { sizeof (GameCenterPlatform_t699FF764080BA03011F7DBEA26659A3E4FB2ED43), -1, sizeof(GameCenterPlatform_t699FF764080BA03011F7DBEA26659A3E4FB2ED43_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2321[7] = 
{
	GameCenterPlatform_t699FF764080BA03011F7DBEA26659A3E4FB2ED43_StaticFields::get_offset_of_s_AuthenticateCallback_0(),
	GameCenterPlatform_t699FF764080BA03011F7DBEA26659A3E4FB2ED43_StaticFields::get_offset_of_s_adCache_1(),
	GameCenterPlatform_t699FF764080BA03011F7DBEA26659A3E4FB2ED43_StaticFields::get_offset_of_s_friends_2(),
	GameCenterPlatform_t699FF764080BA03011F7DBEA26659A3E4FB2ED43_StaticFields::get_offset_of_s_users_3(),
	GameCenterPlatform_t699FF764080BA03011F7DBEA26659A3E4FB2ED43_StaticFields::get_offset_of_s_ResetAchievements_4(),
	GameCenterPlatform_t699FF764080BA03011F7DBEA26659A3E4FB2ED43_StaticFields::get_offset_of_m_LocalUser_5(),
	GameCenterPlatform_t699FF764080BA03011F7DBEA26659A3E4FB2ED43_StaticFields::get_offset_of_m_GcBoards_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2322 = { sizeof (U3CUnityEngine_SocialPlatforms_ISocialPlatform_AuthenticateU3Ec__AnonStorey0_t5601A9A066EAEA224918FCB9B71F770D57C3B488), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2322[1] = 
{
	U3CUnityEngine_SocialPlatforms_ISocialPlatform_AuthenticateU3Ec__AnonStorey0_t5601A9A066EAEA224918FCB9B71F770D57C3B488::get_offset_of_callback_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2323 = { sizeof (LocalUser_tBBCEEB55B6F28DFA7F4677E9273622A34CABB135), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2323[3] = 
{
	LocalUser_tBBCEEB55B6F28DFA7F4677E9273622A34CABB135::get_offset_of_m_Friends_5(),
	LocalUser_tBBCEEB55B6F28DFA7F4677E9273622A34CABB135::get_offset_of_m_Authenticated_6(),
	LocalUser_tBBCEEB55B6F28DFA7F4677E9273622A34CABB135::get_offset_of_m_Underage_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2324 = { sizeof (UserProfile_tB1F9D8E54F0480240196974DCCAF2742F8F0A51E), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2324[5] = 
{
	UserProfile_tB1F9D8E54F0480240196974DCCAF2742F8F0A51E::get_offset_of_m_UserName_0(),
	UserProfile_tB1F9D8E54F0480240196974DCCAF2742F8F0A51E::get_offset_of_m_ID_1(),
	UserProfile_tB1F9D8E54F0480240196974DCCAF2742F8F0A51E::get_offset_of_m_IsFriend_2(),
	UserProfile_tB1F9D8E54F0480240196974DCCAF2742F8F0A51E::get_offset_of_m_State_3(),
	UserProfile_tB1F9D8E54F0480240196974DCCAF2742F8F0A51E::get_offset_of_m_Image_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2325 = { sizeof (Achievement_t853D7B9496E1B0395F9DC4EC4B6C677A82498633), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2325[5] = 
{
	Achievement_t853D7B9496E1B0395F9DC4EC4B6C677A82498633::get_offset_of_m_Completed_0(),
	Achievement_t853D7B9496E1B0395F9DC4EC4B6C677A82498633::get_offset_of_m_Hidden_1(),
	Achievement_t853D7B9496E1B0395F9DC4EC4B6C677A82498633::get_offset_of_m_LastReportedDate_2(),
	Achievement_t853D7B9496E1B0395F9DC4EC4B6C677A82498633::get_offset_of_U3CidU3Ek__BackingField_3(),
	Achievement_t853D7B9496E1B0395F9DC4EC4B6C677A82498633::get_offset_of_U3CpercentCompletedU3Ek__BackingField_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2326 = { sizeof (AchievementDescription_t3A0A2B1921C25802FE46B81BF301BFCAA2FEE6E7), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2326[7] = 
{
	AchievementDescription_t3A0A2B1921C25802FE46B81BF301BFCAA2FEE6E7::get_offset_of_m_Title_0(),
	AchievementDescription_t3A0A2B1921C25802FE46B81BF301BFCAA2FEE6E7::get_offset_of_m_Image_1(),
	AchievementDescription_t3A0A2B1921C25802FE46B81BF301BFCAA2FEE6E7::get_offset_of_m_AchievedDescription_2(),
	AchievementDescription_t3A0A2B1921C25802FE46B81BF301BFCAA2FEE6E7::get_offset_of_m_UnachievedDescription_3(),
	AchievementDescription_t3A0A2B1921C25802FE46B81BF301BFCAA2FEE6E7::get_offset_of_m_Hidden_4(),
	AchievementDescription_t3A0A2B1921C25802FE46B81BF301BFCAA2FEE6E7::get_offset_of_m_Points_5(),
	AchievementDescription_t3A0A2B1921C25802FE46B81BF301BFCAA2FEE6E7::get_offset_of_U3CidU3Ek__BackingField_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2327 = { sizeof (Score_tE23EDB9F6DECBC3AD8D644EC255512A0CDF533E7), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2327[6] = 
{
	Score_tE23EDB9F6DECBC3AD8D644EC255512A0CDF533E7::get_offset_of_m_Date_0(),
	Score_tE23EDB9F6DECBC3AD8D644EC255512A0CDF533E7::get_offset_of_m_FormattedValue_1(),
	Score_tE23EDB9F6DECBC3AD8D644EC255512A0CDF533E7::get_offset_of_m_UserID_2(),
	Score_tE23EDB9F6DECBC3AD8D644EC255512A0CDF533E7::get_offset_of_m_Rank_3(),
	Score_tE23EDB9F6DECBC3AD8D644EC255512A0CDF533E7::get_offset_of_U3CleaderboardIDU3Ek__BackingField_4(),
	Score_tE23EDB9F6DECBC3AD8D644EC255512A0CDF533E7::get_offset_of_U3CvalueU3Ek__BackingField_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2328 = { sizeof (Leaderboard_t01480B36811BC84DF398C8A847972B62F5E2E4FE), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2328[10] = 
{
	Leaderboard_t01480B36811BC84DF398C8A847972B62F5E2E4FE::get_offset_of_m_Loading_0(),
	Leaderboard_t01480B36811BC84DF398C8A847972B62F5E2E4FE::get_offset_of_m_LocalUserScore_1(),
	Leaderboard_t01480B36811BC84DF398C8A847972B62F5E2E4FE::get_offset_of_m_MaxRange_2(),
	Leaderboard_t01480B36811BC84DF398C8A847972B62F5E2E4FE::get_offset_of_m_Scores_3(),
	Leaderboard_t01480B36811BC84DF398C8A847972B62F5E2E4FE::get_offset_of_m_Title_4(),
	Leaderboard_t01480B36811BC84DF398C8A847972B62F5E2E4FE::get_offset_of_m_UserIDs_5(),
	Leaderboard_t01480B36811BC84DF398C8A847972B62F5E2E4FE::get_offset_of_U3CidU3Ek__BackingField_6(),
	Leaderboard_t01480B36811BC84DF398C8A847972B62F5E2E4FE::get_offset_of_U3CuserScopeU3Ek__BackingField_7(),
	Leaderboard_t01480B36811BC84DF398C8A847972B62F5E2E4FE::get_offset_of_U3CrangeU3Ek__BackingField_8(),
	Leaderboard_t01480B36811BC84DF398C8A847972B62F5E2E4FE::get_offset_of_U3CtimeScopeU3Ek__BackingField_9(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2329 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2330 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2331 = { sizeof (UserState_t84B00958348DD8A2B8778416E393E229DACA5871)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2331[6] = 
{
	UserState_t84B00958348DD8A2B8778416E393E229DACA5871::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2332 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2333 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2334 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2335 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2336 = { sizeof (UserScope_t85B1CA855A894226BDE6A19B4CBE7EC9F02D16E3)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2336[3] = 
{
	UserScope_t85B1CA855A894226BDE6A19B4CBE7EC9F02D16E3::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2337 = { sizeof (TimeScope_t33ED9CE3541B951879D86F5AE6A8D9389E7A2369)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2337[4] = 
{
	TimeScope_t33ED9CE3541B951879D86F5AE6A8D9389E7A2369::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2338 = { sizeof (Range_t2332F6C6E1E19A355F5C1A93FF4434B92FBDBABC)+ sizeof (RuntimeObject), sizeof(Range_t2332F6C6E1E19A355F5C1A93FF4434B92FBDBABC ), 0, 0 };
extern const int32_t g_FieldOffsetTable2338[2] = 
{
	Range_t2332F6C6E1E19A355F5C1A93FF4434B92FBDBABC::get_offset_of_from_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Range_t2332F6C6E1E19A355F5C1A93FF4434B92FBDBABC::get_offset_of_count_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2339 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2340 = { sizeof (GcLeaderboard_t363887C9C2BFA6F02D08CC6F6BB93E8ABE9A42D2), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2340[2] = 
{
	GcLeaderboard_t363887C9C2BFA6F02D08CC6F6BB93E8ABE9A42D2::get_offset_of_m_InternalLeaderboard_0(),
	GcLeaderboard_t363887C9C2BFA6F02D08CC6F6BB93E8ABE9A42D2::get_offset_of_m_GenericLeaderboard_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2341 = { sizeof (U3CModuleU3E_tF8A948C14EE892A95D0E0992A0BE6B176FF2DA1D), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2342 = { sizeof (NativeInputUpdateType_t744D5594ED044E47F3BAF84F45326948B8930C71)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2342[6] = 
{
	NativeInputUpdateType_t744D5594ED044E47F3BAF84F45326948B8930C71::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2343 = { sizeof (NativeInputSystem_t522F6391494159917EE6963E9E61C9EFA9C5795C), -1, sizeof(NativeInputSystem_t522F6391494159917EE6963E9E61C9EFA9C5795C_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2343[3] = 
{
	NativeInputSystem_t522F6391494159917EE6963E9E61C9EFA9C5795C_StaticFields::get_offset_of_onUpdate_0(),
	NativeInputSystem_t522F6391494159917EE6963E9E61C9EFA9C5795C_StaticFields::get_offset_of_onBeforeUpdate_1(),
	NativeInputSystem_t522F6391494159917EE6963E9E61C9EFA9C5795C_StaticFields::get_offset_of_s_OnDeviceDiscoveredCallback_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2344 = { sizeof (U3CModuleU3E_tAA355D8AE5C7E9492E77ED0BEF24E3CD28D275D9), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2345 = { sizeof (ParticleSystem_t45DA87A3E83E738DA3FDAA5A48A133F1A1247C3D), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2346 = { sizeof (Particle_t64AF74F5D9C7EE7018AD98F29E4FF653558A581E)+ sizeof (RuntimeObject), sizeof(Particle_t64AF74F5D9C7EE7018AD98F29E4FF653558A581E ), 0, 0 };
extern const int32_t g_FieldOffsetTable2346[15] = 
{
	Particle_t64AF74F5D9C7EE7018AD98F29E4FF653558A581E::get_offset_of_m_Position_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Particle_t64AF74F5D9C7EE7018AD98F29E4FF653558A581E::get_offset_of_m_Velocity_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Particle_t64AF74F5D9C7EE7018AD98F29E4FF653558A581E::get_offset_of_m_AnimatedVelocity_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Particle_t64AF74F5D9C7EE7018AD98F29E4FF653558A581E::get_offset_of_m_InitialVelocity_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Particle_t64AF74F5D9C7EE7018AD98F29E4FF653558A581E::get_offset_of_m_AxisOfRotation_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Particle_t64AF74F5D9C7EE7018AD98F29E4FF653558A581E::get_offset_of_m_Rotation_5() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Particle_t64AF74F5D9C7EE7018AD98F29E4FF653558A581E::get_offset_of_m_AngularVelocity_6() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Particle_t64AF74F5D9C7EE7018AD98F29E4FF653558A581E::get_offset_of_m_StartSize_7() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Particle_t64AF74F5D9C7EE7018AD98F29E4FF653558A581E::get_offset_of_m_StartColor_8() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Particle_t64AF74F5D9C7EE7018AD98F29E4FF653558A581E::get_offset_of_m_RandomSeed_9() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Particle_t64AF74F5D9C7EE7018AD98F29E4FF653558A581E::get_offset_of_m_Lifetime_10() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Particle_t64AF74F5D9C7EE7018AD98F29E4FF653558A581E::get_offset_of_m_StartLifetime_11() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Particle_t64AF74F5D9C7EE7018AD98F29E4FF653558A581E::get_offset_of_m_EmitAccumulator0_12() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Particle_t64AF74F5D9C7EE7018AD98F29E4FF653558A581E::get_offset_of_m_EmitAccumulator1_13() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Particle_t64AF74F5D9C7EE7018AD98F29E4FF653558A581E::get_offset_of_m_Flags_14() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2347 = { sizeof (EmitParams_t03557E552852EC6B71876CD05C4098733702A219)+ sizeof (RuntimeObject), sizeof(EmitParams_t03557E552852EC6B71876CD05C4098733702A219_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable2347[11] = 
{
	EmitParams_t03557E552852EC6B71876CD05C4098733702A219::get_offset_of_m_Particle_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	EmitParams_t03557E552852EC6B71876CD05C4098733702A219::get_offset_of_m_PositionSet_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	EmitParams_t03557E552852EC6B71876CD05C4098733702A219::get_offset_of_m_VelocitySet_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	EmitParams_t03557E552852EC6B71876CD05C4098733702A219::get_offset_of_m_AxisOfRotationSet_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	EmitParams_t03557E552852EC6B71876CD05C4098733702A219::get_offset_of_m_RotationSet_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
	EmitParams_t03557E552852EC6B71876CD05C4098733702A219::get_offset_of_m_AngularVelocitySet_5() + static_cast<int32_t>(sizeof(RuntimeObject)),
	EmitParams_t03557E552852EC6B71876CD05C4098733702A219::get_offset_of_m_StartSizeSet_6() + static_cast<int32_t>(sizeof(RuntimeObject)),
	EmitParams_t03557E552852EC6B71876CD05C4098733702A219::get_offset_of_m_StartColorSet_7() + static_cast<int32_t>(sizeof(RuntimeObject)),
	EmitParams_t03557E552852EC6B71876CD05C4098733702A219::get_offset_of_m_RandomSeedSet_8() + static_cast<int32_t>(sizeof(RuntimeObject)),
	EmitParams_t03557E552852EC6B71876CD05C4098733702A219::get_offset_of_m_StartLifetimeSet_9() + static_cast<int32_t>(sizeof(RuntimeObject)),
	EmitParams_t03557E552852EC6B71876CD05C4098733702A219::get_offset_of_m_ApplyShapeToPosition_10() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2348 = { sizeof (ParticleSystemRenderer_t86E4ED2C0ADF5D2E7FA3D636B6B070600D05C459), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2349 = { sizeof (U3CModuleU3E_tF1895192DB0786D7B32E637E7538ADA625D10FB5), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2350 = { sizeof (Terrain_t0BF7371FA90643325F50A87C7894D7BEBBE08943), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2351 = { sizeof (TerrainData_t9D44396901570930AFE428DAC19ABE0C1477CFE2), -1, sizeof(TerrainData_t9D44396901570930AFE428DAC19ABE0C1477CFE2_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2351[8] = 
{
	TerrainData_t9D44396901570930AFE428DAC19ABE0C1477CFE2_StaticFields::get_offset_of_k_MaximumResolution_4(),
	TerrainData_t9D44396901570930AFE428DAC19ABE0C1477CFE2_StaticFields::get_offset_of_k_MinimumDetailResolutionPerPatch_5(),
	TerrainData_t9D44396901570930AFE428DAC19ABE0C1477CFE2_StaticFields::get_offset_of_k_MaximumDetailResolutionPerPatch_6(),
	TerrainData_t9D44396901570930AFE428DAC19ABE0C1477CFE2_StaticFields::get_offset_of_k_MaximumDetailPatchCount_7(),
	TerrainData_t9D44396901570930AFE428DAC19ABE0C1477CFE2_StaticFields::get_offset_of_k_MinimumAlphamapResolution_8(),
	TerrainData_t9D44396901570930AFE428DAC19ABE0C1477CFE2_StaticFields::get_offset_of_k_MaximumAlphamapResolution_9(),
	TerrainData_t9D44396901570930AFE428DAC19ABE0C1477CFE2_StaticFields::get_offset_of_k_MinimumBaseMapResolution_10(),
	TerrainData_t9D44396901570930AFE428DAC19ABE0C1477CFE2_StaticFields::get_offset_of_k_MaximumBaseMapResolution_11(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2352 = { sizeof (BoundaryValueType_tAD21AC67F7D3AC4FF445A0D6002E7914F07000EA)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2352[9] = 
{
	BoundaryValueType_tAD21AC67F7D3AC4FF445A0D6002E7914F07000EA::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2353 = { sizeof (TerrainUtility_t82C295A06EAAEA3D755971EBE55084B993C7FC7B), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2354 = { sizeof (TerrainMap_t8D09DC412F632DAB9EA8FB7A11A34EB7464D547C), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2354[3] = 
{
	TerrainMap_t8D09DC412F632DAB9EA8FB7A11A34EB7464D547C::get_offset_of_m_patchSize_0(),
	TerrainMap_t8D09DC412F632DAB9EA8FB7A11A34EB7464D547C::get_offset_of_m_errorCode_1(),
	TerrainMap_t8D09DC412F632DAB9EA8FB7A11A34EB7464D547C::get_offset_of_m_terrainTiles_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2355 = { sizeof (TerrainFilter_t02BF9FBD8E61763D1D8484B34936B36B1046C66B), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2356 = { sizeof (TileCoord_t51EDF1EA1A3A7F9C1D85C186E7A7954535C225BA)+ sizeof (RuntimeObject), sizeof(TileCoord_t51EDF1EA1A3A7F9C1D85C186E7A7954535C225BA ), 0, 0 };
extern const int32_t g_FieldOffsetTable2356[2] = 
{
	TileCoord_t51EDF1EA1A3A7F9C1D85C186E7A7954535C225BA::get_offset_of_tileX_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	TileCoord_t51EDF1EA1A3A7F9C1D85C186E7A7954535C225BA::get_offset_of_tileZ_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2357 = { sizeof (ErrorCode_tCC2BF2B1CF6C6645A76C1DEE65D4AA4A527FEC7A)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2357[5] = 
{
	ErrorCode_tCC2BF2B1CF6C6645A76C1DEE65D4AA4A527FEC7A::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2358 = { sizeof (U3CCreateFromPlacementU3Ec__AnonStorey0_t785BD4BDC25E101807FE78EE2D72D5954E42248C), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2358[1] = 
{
	U3CCreateFromPlacementU3Ec__AnonStorey0_t785BD4BDC25E101807FE78EE2D72D5954E42248C::get_offset_of_groupID_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2359 = { sizeof (TerrainGroups_t88B87E7C8DA6A97E904D74167C43D631796ECBC5), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2360 = { sizeof (U3CCollectTerrainsU3Ec__AnonStorey1_t41DA2A02D290EE5FEF14389A4391CBC1E3E622A5), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2360[1] = 
{
	U3CCollectTerrainsU3Ec__AnonStorey1_t41DA2A02D290EE5FEF14389A4391CBC1E3E622A5::get_offset_of_onlyAutoConnectedTerrains_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2361 = { sizeof (U3CCollectTerrainsU3Ec__AnonStorey0_t4BCCA12171A915F3BCE4B2B0F9A4EBD484BC78CA), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2361[2] = 
{
	U3CCollectTerrainsU3Ec__AnonStorey0_t4BCCA12171A915F3BCE4B2B0F9A4EBD484BC78CA::get_offset_of_t_0(),
	U3CCollectTerrainsU3Ec__AnonStorey0_t4BCCA12171A915F3BCE4B2B0F9A4EBD484BC78CA::get_offset_of_U3CU3Ef__refU241_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2362 = { sizeof (U3CModuleU3E_t140A63E1069F1772D5238396CDA7CE5372253E44), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2363 = { sizeof (ITilemap_t784A442A8BD2283058F44E8C0FE5257168459BE3), -1, sizeof(ITilemap_t784A442A8BD2283058F44E8C0FE5257168459BE3_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2363[2] = 
{
	ITilemap_t784A442A8BD2283058F44E8C0FE5257168459BE3_StaticFields::get_offset_of_s_Instance_0(),
	ITilemap_t784A442A8BD2283058F44E8C0FE5257168459BE3::get_offset_of_m_Tilemap_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2364 = { sizeof (Tile_t275C7CE9C854F2912C851F345CCC00C45EDDE7AE), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2364[6] = 
{
	Tile_t275C7CE9C854F2912C851F345CCC00C45EDDE7AE::get_offset_of_m_Sprite_4(),
	Tile_t275C7CE9C854F2912C851F345CCC00C45EDDE7AE::get_offset_of_m_Color_5(),
	Tile_t275C7CE9C854F2912C851F345CCC00C45EDDE7AE::get_offset_of_m_Transform_6(),
	Tile_t275C7CE9C854F2912C851F345CCC00C45EDDE7AE::get_offset_of_m_InstancedGameObject_7(),
	Tile_t275C7CE9C854F2912C851F345CCC00C45EDDE7AE::get_offset_of_m_Flags_8(),
	Tile_t275C7CE9C854F2912C851F345CCC00C45EDDE7AE::get_offset_of_m_ColliderType_9(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2365 = { sizeof (ColliderType_tCF48B308BF04CE1D262A726D500126E8C8859F2B)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2365[4] = 
{
	ColliderType_tCF48B308BF04CE1D262A726D500126E8C8859F2B::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2366 = { sizeof (TileBase_tD2158024AAA28EB0EC62F253FA1D1A76BC50F85E), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2367 = { sizeof (Tilemap_t0F92148668211805A631B93488D4A629EC378B10), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2368 = { sizeof (TileFlags_tBD601639E3CC4B4BA675548F3B8F17B709A974AF)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2368[6] = 
{
	TileFlags_tBD601639E3CC4B4BA675548F3B8F17B709A974AF::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2369 = { sizeof (TileData_t8A50A35CAFD87C12E27D7E596D968C9114A4CBB5)+ sizeof (RuntimeObject), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2369[6] = 
{
	TileData_t8A50A35CAFD87C12E27D7E596D968C9114A4CBB5::get_offset_of_m_Sprite_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	TileData_t8A50A35CAFD87C12E27D7E596D968C9114A4CBB5::get_offset_of_m_Color_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	TileData_t8A50A35CAFD87C12E27D7E596D968C9114A4CBB5::get_offset_of_m_Transform_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	TileData_t8A50A35CAFD87C12E27D7E596D968C9114A4CBB5::get_offset_of_m_GameObject_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	TileData_t8A50A35CAFD87C12E27D7E596D968C9114A4CBB5::get_offset_of_m_Flags_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
	TileData_t8A50A35CAFD87C12E27D7E596D968C9114A4CBB5::get_offset_of_m_ColliderType_5() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2370 = { sizeof (TileAnimationData_t2A9C81AD1F3E916C2DE292A6F3953FC8C38EFDA8)+ sizeof (RuntimeObject), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2370[3] = 
{
	TileAnimationData_t2A9C81AD1F3E916C2DE292A6F3953FC8C38EFDA8::get_offset_of_m_AnimatedSprites_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	TileAnimationData_t2A9C81AD1F3E916C2DE292A6F3953FC8C38EFDA8::get_offset_of_m_AnimationSpeed_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	TileAnimationData_t2A9C81AD1F3E916C2DE292A6F3953FC8C38EFDA8::get_offset_of_m_AnimationStartTime_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2371 = { sizeof (U3CModuleU3E_t091C966E943CA3E1F5D551C43C6FE64881C5BB24), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2372 = { sizeof (BaselineFunction_t0A87479762FB382A84709009E9B6DCC597C6C9DF), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2373 = { sizeof (MeasureFunction_tC5585E81380F4017044CE57AE21E178BAE2607AB), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2374 = { sizeof (YogaMeasureMode_t29AF57E74BCD4C16019B8BE88A317D54DA70C29F)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2374[4] = 
{
	YogaMeasureMode_t29AF57E74BCD4C16019B8BE88A317D54DA70C29F::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2375 = { sizeof (Native_tAB7B2E3A68EEFE9B7A356DB4CC8EC664EB765C2A), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2376 = { sizeof (YogaNode_tFCB801A447DAC7A335C686ABC5941A4357102A2C), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2376[4] = 
{
	YogaNode_tFCB801A447DAC7A335C686ABC5941A4357102A2C::get_offset_of__ygNode_0(),
	YogaNode_tFCB801A447DAC7A335C686ABC5941A4357102A2C::get_offset_of__children_1(),
	YogaNode_tFCB801A447DAC7A335C686ABC5941A4357102A2C::get_offset_of__measureFunction_2(),
	YogaNode_tFCB801A447DAC7A335C686ABC5941A4357102A2C::get_offset_of__baselineFunction_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2377 = { sizeof (YogaSize_t0F2077727A4CBD4C36F3DC0CBE1FB0A67D9EAD23)+ sizeof (RuntimeObject), sizeof(YogaSize_t0F2077727A4CBD4C36F3DC0CBE1FB0A67D9EAD23 ), 0, 0 };
extern const int32_t g_FieldOffsetTable2377[2] = 
{
	YogaSize_t0F2077727A4CBD4C36F3DC0CBE1FB0A67D9EAD23::get_offset_of_width_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	YogaSize_t0F2077727A4CBD4C36F3DC0CBE1FB0A67D9EAD23::get_offset_of_height_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2378 = { sizeof (U3CModuleU3E_t79D7DE725655CFC1B063EA359E8D75692CF5DC2F), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2379 = { sizeof (RenderMode_tB54632E74CDC4A990E815EB8C3CC515D3A9E2F60)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2379[4] = 
{
	RenderMode_tB54632E74CDC4A990E815EB8C3CC515D3A9E2F60::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2380 = { sizeof (Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591), -1, sizeof(Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2380[1] = 
{
	Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591_StaticFields::get_offset_of_willRenderCanvases_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2381 = { sizeof (WillRenderCanvases_tBD5AD090B5938021DEAA679A5AEEA790F60A8BEE), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2382 = { sizeof (UISystemProfilerApi_tD33E558B2D0176096E5DB375956ACA9F03678F1B), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2383 = { sizeof (SampleType_t2144AEAF3447ACAFCE1C13AF669F63192F8E75EC)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2383[3] = 
{
	SampleType_t2144AEAF3447ACAFCE1C13AF669F63192F8E75EC::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2384 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2385 = { sizeof (CanvasGroup_tE2C664C60990D1DCCEE0CC6545CC3E80369C7F90), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2386 = { sizeof (CanvasRenderer_tB4D9C9FE77FD5C9C4546FC022D6E956960BC2B72), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2386[1] = 
{
	CanvasRenderer_tB4D9C9FE77FD5C9C4546FC022D6E956960BC2B72::get_offset_of_U3CisMaskU3Ek__BackingField_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2387 = { sizeof (RectTransformUtility_t9B90669A72B05A33DD88BEBB817BC9CDBB614BBA), -1, sizeof(RectTransformUtility_t9B90669A72B05A33DD88BEBB817BC9CDBB614BBA_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2387[1] = 
{
	RectTransformUtility_t9B90669A72B05A33DD88BEBB817BC9CDBB614BBA_StaticFields::get_offset_of_s_Corners_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2388 = { sizeof (U3CModuleU3E_t2FBFFC67F8D6B1FA13284515F9BBD8C9333B5C86), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2389 = { sizeof (WebRequestUtils_tBE8F8607E3A9633419968F6AF2F706A029AE1296), -1, sizeof(WebRequestUtils_tBE8F8607E3A9633419968F6AF2F706A029AE1296_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2389[1] = 
{
	WebRequestUtils_tBE8F8607E3A9633419968F6AF2F706A029AE1296_StaticFields::get_offset_of_domainRegex_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2390 = { sizeof (CertificateHandler_tBD070BF4150A44AB482FD36EA3882C363117E8C0), sizeof(CertificateHandler_tBD070BF4150A44AB482FD36EA3882C363117E8C0_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable2390[1] = 
{
	CertificateHandler_tBD070BF4150A44AB482FD36EA3882C363117E8C0::get_offset_of_m_Ptr_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2391 = { sizeof (U3CModuleU3E_tAF0352AF459FC6ADDA335387111E96B1480224D6), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2392 = { sizeof (VFXEventAttribute_t8FE74C5425505C55B4F79299C569CCE1A47BE325), sizeof(VFXEventAttribute_t8FE74C5425505C55B4F79299C569CCE1A47BE325_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable2392[2] = 
{
	VFXEventAttribute_t8FE74C5425505C55B4F79299C569CCE1A47BE325::get_offset_of_m_Ptr_0(),
	VFXEventAttribute_t8FE74C5425505C55B4F79299C569CCE1A47BE325::get_offset_of_m_Owner_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2393 = { sizeof (VFXExpressionValues_tBEEC793A9CD5134400899D1AAE1ABF13AF6562F2), sizeof(VFXExpressionValues_tBEEC793A9CD5134400899D1AAE1ABF13AF6562F2_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable2393[1] = 
{
	VFXExpressionValues_tBEEC793A9CD5134400899D1AAE1ABF13AF6562F2::get_offset_of_m_Ptr_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2394 = { sizeof (VFXManager_tDE794F20EA719507EADF091F8042A8B097F1E8E5), -1, sizeof(VFXManager_tDE794F20EA719507EADF091F8042A8B097F1E8E5_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2394[2] = 
{
	VFXManager_tDE794F20EA719507EADF091F8042A8B097F1E8E5_StaticFields::get_offset_of_U3CU3Ef__mgU24cache0_0(),
	VFXManager_tDE794F20EA719507EADF091F8042A8B097F1E8E5_StaticFields::get_offset_of_U3CU3Ef__mgU24cache1_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2395 = { sizeof (VFXSpawnerCallbacks_t4A28725CC33298516D1479C1D2BFEC00034373A1), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2396 = { sizeof (VFXSpawnerState_t614A1AADC2EDB20E82A625BE053A22DB31D89AC7), sizeof(VFXSpawnerState_t614A1AADC2EDB20E82A625BE053A22DB31D89AC7_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable2396[2] = 
{
	VFXSpawnerState_t614A1AADC2EDB20E82A625BE053A22DB31D89AC7::get_offset_of_m_Ptr_0(),
	VFXSpawnerState_t614A1AADC2EDB20E82A625BE053A22DB31D89AC7::get_offset_of_m_Owner_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2397 = { sizeof (VisualEffect_tBB62FCDE4826BA7FE8BEB728EC616C8E7ED5A506), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2398 = { sizeof (U3CModuleU3E_tB054F17A779AC945E3659AF119A96DB806541AF9), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2399 = { sizeof (XRDevice_t392FCA3D1DCEB95FF500C8F374C88B034C31DF4A), -1, sizeof(XRDevice_t392FCA3D1DCEB95FF500C8F374C88B034C31DF4A_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2399[1] = 
{
	XRDevice_t392FCA3D1DCEB95FF500C8F374C88B034C31DF4A_StaticFields::get_offset_of_deviceLoaded_0(),
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // Modified by PostBuild.cs
