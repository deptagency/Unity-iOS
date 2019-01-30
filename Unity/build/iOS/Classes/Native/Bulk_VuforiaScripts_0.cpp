#import <TargetConditionals.h> // Modified by PostBuild.cs
#if !TARGET_OS_SIMULATOR // Modified by PostBuild.cs
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

template <typename R>
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// DefaultInitializationErrorHandler
struct DefaultInitializationErrorHandler_t7C0EE05C3D7BF5C7A141BC322D2F0B950B101D38;
// DefaultTrackableEventHandler
struct DefaultTrackableEventHandler_t6997E0A19AC0FABC165FB7264F57DF2EDF4E8022;
// System.Action`1<System.Int32Enum>
struct Action_1_tABA1E3BFA092E3309A0ECC53722E4F9826DCE983;
// System.Action`1<UnityEngine.Font>
struct Action_1_t795662E553415ECF2DD0F8EEB9BA170C3670F37C;
// System.Action`1<Vuforia.VuforiaUnity/InitError>
struct Action_1_tAA7EF8692AA276A9B2E6353FC26F374339933EFF;
// System.AsyncCallback
struct AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4;
// System.Char[]
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2;
// System.Collections.Generic.List`1<Vuforia.ITrackableEventHandler>
struct List_1_tE4338C7F7D33C78CB75B44EB5CCCA0152E97497B;
// System.DelegateData
struct DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE;
// System.Delegate[]
struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86;
// System.IAsyncResult
struct IAsyncResult_t8E194308510B375B42432981AE5E7488C458D598;
// System.Object[]
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.String
struct String_t;
// System.Void
struct Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017;
// UnityEngine.Behaviour
struct Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8;
// UnityEngine.Canvas
struct Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591;
// UnityEngine.Canvas/WillRenderCanvases
struct WillRenderCanvases_tBD5AD090B5938021DEAA679A5AEEA790F60A8BEE;
// UnityEngine.Canvas[]
struct CanvasU5BU5D_t9A0DED7A1C92D7DCBC82864C92A06CA527E72E60;
// UnityEngine.Collider
struct Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF;
// UnityEngine.Collider[]
struct ColliderU5BU5D_t2814A7DE0594A145A9E2C23548AF5B6E9DF8402A;
// UnityEngine.Component
struct Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621;
// UnityEngine.Font
struct Font_t1EDE54AF557272BE314EB4B40EFA50CEB353CA26;
// UnityEngine.Font/FontTextureRebuildCallback
struct FontTextureRebuildCallback_tD700C63BB1A449E3A0464C81701E981677D3021C;
// UnityEngine.GUI/WindowFunction
struct WindowFunction_t9AF05117863D95AA9F85D497A3B9B53216708100;
// UnityEngine.GUIStyle
struct GUIStyle_t671F175A201A19166385EE3392292A5F50070572;
// UnityEngine.GUIStyleState
struct GUIStyleState_t2AA5CB82EB2571B0496D1F0B9D29D2B8D8B1E7E5;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429;
// UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0;
// UnityEngine.RectOffset
struct RectOffset_tED44B1176E93501050480416699D1F11BAE8C87A;
// UnityEngine.Renderer
struct Renderer_t0556D67DD582620D1F495627EDE30D03284151F4;
// UnityEngine.Renderer[]
struct RendererU5BU5D_tF85DA3E8016B6D367A055C3BF54C575FDA7DAEEF;
// UnityEngine.Texture2D
struct Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C;
// Vuforia.ITrackableEventHandler
struct ITrackableEventHandler_t9460928CD061E83FD8942A0ED1865D2451A5E248;
// Vuforia.Trackable
struct Trackable_t2A23C572321E7D4FEAC9A1019DFA0AA144FC9B8F;
// Vuforia.TrackableBehaviour
struct TrackableBehaviour_t579D75AAFEF7B2D69F4B68931D5A58074E80A7E4;
// Vuforia.VuforiaConfiguration
struct VuforiaConfiguration_t389C464955859AB411F51B7950ACBAA6DCAFCD82;
// Vuforia.VuforiaConfiguration/DeviceTrackerConfiguration
struct DeviceTrackerConfiguration_tC11D2DA49200D3693731D6AFF3F793E4315D1E3F;
// Vuforia.VuforiaConfiguration/DigitalEyewearConfiguration
struct DigitalEyewearConfiguration_t1BA464AEDA9C847084FCF4F1CA3C92719D655B18;
// Vuforia.VuforiaConfiguration/GenericVuforiaConfiguration
struct GenericVuforiaConfiguration_t6FBB0036347CB878A938375817103A20CDD59064;
// Vuforia.VuforiaConfiguration/SmartTerrainConfiguration
struct SmartTerrainConfiguration_t6104CF56BC1AFE13ED509BB01CBE90E7E64372C7;
// Vuforia.VuforiaConfiguration/VideoBackgroundConfiguration
struct VideoBackgroundConfiguration_tCC24E374B966B79D018C14F6807A6DDA47302F17;
// Vuforia.VuforiaConfiguration/WebCamConfiguration
struct WebCamConfiguration_t0A5BD19A86D3AA8B68FB79C1EA8A5855A6C9F321;
// Vuforia.VuforiaRuntime
struct VuforiaRuntime_t12D46DC6B127017866AA832739B2B22B0612DC1D;
// VuforiaMonoBehaviour
struct VuforiaMonoBehaviour_t806C61E721B78928AF6266F3AF838FA2CB56AB5D;

extern RuntimeClass* Action_1_tAA7EF8692AA276A9B2E6353FC26F374339933EFF_il2cpp_TypeInfo_var;
extern RuntimeClass* Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var;
extern RuntimeClass* GUIStyle_t671F175A201A19166385EE3392292A5F50070572_il2cpp_TypeInfo_var;
extern RuntimeClass* GUI_t3E5CBC6B113E392EBBE1453DEF2B7CD020F345AA_il2cpp_TypeInfo_var;
extern RuntimeClass* InitError_t486F7D53F5B0B7943D4E22BE2D32F4913D4A0431_il2cpp_TypeInfo_var;
extern RuntimeClass* Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var;
extern RuntimeClass* Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var;
extern RuntimeClass* ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var;
extern RuntimeClass* Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var;
extern RuntimeClass* RectOffset_tED44B1176E93501050480416699D1F11BAE8C87A_il2cpp_TypeInfo_var;
extern RuntimeClass* Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C_il2cpp_TypeInfo_var;
extern RuntimeClass* VuforiaConfiguration_t389C464955859AB411F51B7950ACBAA6DCAFCD82_il2cpp_TypeInfo_var;
extern RuntimeClass* VuforiaRuntime_t12D46DC6B127017866AA832739B2B22B0612DC1D_il2cpp_TypeInfo_var;
extern RuntimeClass* WindowFunction_t9AF05117863D95AA9F85D497A3B9B53216708100_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral044603D8671032519EBDE55C39570454D34DA7EF;
extern String_t* _stringLiteral0A0FAEEF2117767792A00F86536670A04B480323;
extern String_t* _stringLiteral1561AEF8B532C2B1664689CD3DEB85C31F3B9692;
extern String_t* _stringLiteral157E87C861F13A22AF3DFA90069304007ACABD9E;
extern String_t* _stringLiteral368855C3B48C6461C105F7AA11EBE1FD792BE6BF;
extern String_t* _stringLiteral3A2524B609E886EDA2270A78B1F1D5DF105A613E;
extern String_t* _stringLiteral4C8A375D0F1708E37C1F10C81E8A8EADDCF1422F;
extern String_t* _stringLiteral53A0ACFAD59379B3E050338BF9F23CFC172EE787;
extern String_t* _stringLiteral55B91F52D8FEC72F2D5BBC45A4C7444CF770FBBD;
extern String_t* _stringLiteral661EA0491F0E7BED843FF5C5C2C407A8494948C2;
extern String_t* _stringLiteral71853C6197A6A7F222DB0F1978C7CB232B87C5EE;
extern String_t* _stringLiteral74D8330FF7EE2BF01889D92730C9FB1CC78C788F;
extern String_t* _stringLiteral774E15162F27F67F38D0C5637BB389016A9F090D;
extern String_t* _stringLiteral7AB1A22C152A21E59C89CBA73DA7DCB91237992A;
extern String_t* _stringLiteral908E199B682ED6E6E7C82E2EC3BEBABD072C4298;
extern String_t* _stringLiteral922A19D8476F24CEFB157C2DA69F9CA731E3045A;
extern String_t* _stringLiteral9A0E3D30C6D98ED2A2095BC0AF35EECC4E78E1BF;
extern String_t* _stringLiteralA5C50226661674EB4C0B1740C606FA2451271989;
extern String_t* _stringLiteralAD01E3847AA5918933113DC21A22AF4AD31DD4B7;
extern String_t* _stringLiteralB858CB282617FB0956D960215C8E84D1CCF909C6;
extern String_t* _stringLiteralBBFA773E5A63A5EA58C9B6207E608CA0120E592A;
extern String_t* _stringLiteralCEC5376077C18B47415F5EA601FF194999757256;
extern String_t* _stringLiteralD8F3DAF68846C2D999956AB061674C6E36560643;
extern String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
extern String_t* _stringLiteralDADF5911397D06A03A60E28AE30A0F473FE2B810;
extern String_t* _stringLiteralE051901EED152C2098713B06124991AA7D11FFCC;
extern String_t* _stringLiteralE1A26226E225524718652DAB2A25B6F6ED567B4E;
extern String_t* _stringLiteralE53A10BF18D590A4D354358810000744DAF6ACFD;
extern String_t* _stringLiteralE9D15606A3059B500ED24D58BAEE69DD511A6EC2;
extern String_t* _stringLiteralEF377B931B216AE61345F4D7136A8873D40DCB6B;
extern String_t* _stringLiteralF20D8C26DA74DE4466E64B5213AE19C080FADD5E;
extern const RuntimeMethod* Action_1__ctor_m93D264DDF8D63987A4D835C83F40D588CDCC86B8_RuntimeMethod_var;
extern const RuntimeMethod* Component_GetComponent_TisTrackableBehaviour_t579D75AAFEF7B2D69F4B68931D5A58074E80A7E4_m81E3785465C5B36522D217B045A33CD65B28B229_RuntimeMethod_var;
extern const RuntimeMethod* Component_GetComponentsInChildren_TisCanvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591_m0DCB451DDA382B4BF6D882CBA43DBDD200C1FCF2_RuntimeMethod_var;
extern const RuntimeMethod* Component_GetComponentsInChildren_TisCollider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF_mB7DEF049AA2B4E9D96FAE153C296F52B2ACCF244_RuntimeMethod_var;
extern const RuntimeMethod* Component_GetComponentsInChildren_TisRenderer_t0556D67DD582620D1F495627EDE30D03284151F4_mE634C4CC0E00DB6D11503C88000677CD2A806228_RuntimeMethod_var;
extern const RuntimeMethod* DefaultInitializationErrorHandler_DrawWindowContent_m114AFA0267557CA2520A32E85061A4BB09F04978_RuntimeMethod_var;
extern const RuntimeMethod* DefaultInitializationErrorHandler_OnVuforiaInitializationError_m0F4B53613340C11BADBE8E7FADA57096A43F30C0_RuntimeMethod_var;
extern const RuntimeMethod* Resources_GetBuiltinResource_TisFont_t1EDE54AF557272BE314EB4B40EFA50CEB353CA26_mEECDBF58A9BE0C87D23275A7997B2445D783E371_RuntimeMethod_var;
extern const uint32_t DefaultInitializationErrorHandler_Awake_mC462A9A2FF6999FAD58B36658BA7F5F4CFEA2885_MetadataUsageId;
extern const uint32_t DefaultInitializationErrorHandler_CreateSinglePixelTexture_m314E1B3B003A6F0253FD1A13070B93BCE6415AD6_MetadataUsageId;
extern const uint32_t DefaultInitializationErrorHandler_DrawWindowContent_m114AFA0267557CA2520A32E85061A4BB09F04978_MetadataUsageId;
extern const uint32_t DefaultInitializationErrorHandler_OnDestroy_m788237090CDF21C5258502222D398EFC4F0A09FF_MetadataUsageId;
extern const uint32_t DefaultInitializationErrorHandler_OnGUI_m0BCBF01D8F93A0D5810B96D01A3C357333ED1305_MetadataUsageId;
extern const uint32_t DefaultInitializationErrorHandler_SetErrorCode_m8D02B872B53162E5CEE1ABD461F59B4F1D642AFE_MetadataUsageId;
extern const uint32_t DefaultInitializationErrorHandler_SetupGUIStyles_m95161DC5F2ECD9341D49F9AF35D11B36E3FBB8E7_MetadataUsageId;
extern const uint32_t DefaultInitializationErrorHandler__ctor_m63E4F5C46CEF6A1D36DB1999995CFAF271895876_MetadataUsageId;
extern const uint32_t DefaultInitializationErrorHandler_getKeyInfo_m2810070CDC373FC5667406EA32A1B060E067E2DC_MetadataUsageId;
extern const uint32_t DefaultTrackableEventHandler_OnDestroy_m5E62349849150C8A7D3805322622A958505710AC_MetadataUsageId;
extern const uint32_t DefaultTrackableEventHandler_OnTrackableStateChanged_m92AA21345F1F7A16C0DEE34FA82FB4882A1A6BAD_MetadataUsageId;
extern const uint32_t DefaultTrackableEventHandler_OnTrackingFound_m4A4E9931C2178216A864B8E341B6A923711EE8B1_MetadataUsageId;
extern const uint32_t DefaultTrackableEventHandler_OnTrackingLost_m26ACF13397E907EF90414CAEF8FEEDB3324C4E95_MetadataUsageId;
extern const uint32_t DefaultTrackableEventHandler_Start_mF3B83475AAE698302E8A037B49DA2297894216DE_MetadataUsageId;
struct GUIStyleState_t2AA5CB82EB2571B0496D1F0B9D29D2B8D8B1E7E5_marshaled_com;
struct GUIStyleState_t2AA5CB82EB2571B0496D1F0B9D29D2B8D8B1E7E5_marshaled_pinvoke;
struct GUIStyle_t671F175A201A19166385EE3392292A5F50070572_marshaled_com;
struct GUIStyle_t671F175A201A19166385EE3392292A5F50070572_marshaled_pinvoke;
struct RectOffset_tED44B1176E93501050480416699D1F11BAE8C87A_marshaled_com;

struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A;
struct CanvasU5BU5D_t9A0DED7A1C92D7DCBC82864C92A06CA527E72E60;
struct ColliderU5BU5D_t2814A7DE0594A145A9E2C23548AF5B6E9DF8402A;
struct RendererU5BU5D_tF85DA3E8016B6D367A055C3BF54C575FDA7DAEEF;


#ifndef U3CMODULEU3E_TBB5D6FDE6CBE0067E5DC774822D5054F01745F8C_H
#define U3CMODULEU3E_TBB5D6FDE6CBE0067E5DC774822D5054F01745F8C_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_tBB5D6FDE6CBE0067E5DC774822D5054F01745F8C 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CMODULEU3E_TBB5D6FDE6CBE0067E5DC774822D5054F01745F8C_H
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
struct Il2CppArrayBounds;
#ifndef RUNTIMEARRAY_H
#define RUNTIMEARRAY_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Array

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEARRAY_H
#ifndef STRING_T_H
#define STRING_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.String
struct  String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((&___Empty_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRING_T_H
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
#ifndef BOOLEAN_TB53F6830F670160873277339AA58F15CAED4399C_H
#define BOOLEAN_TB53F6830F670160873277339AA58F15CAED4399C_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Boolean
struct  Boolean_tB53F6830F670160873277339AA58F15CAED4399C 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((&___TrueString_5), value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((&___FalseString_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BOOLEAN_TB53F6830F670160873277339AA58F15CAED4399C_H
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
#ifndef INT32_T585191389E07734F19F3156FF88FB3EF4800D102_H
#define INT32_T585191389E07734F19F3156FF88FB3EF4800D102_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int32
struct  Int32_t585191389E07734F19F3156FF88FB3EF4800D102 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_t585191389E07734F19F3156FF88FB3EF4800D102, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT32_T585191389E07734F19F3156FF88FB3EF4800D102_H
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
#ifndef RECT_T35B976DE901B5423C11705E156938EA27AB402CE_H
#define RECT_T35B976DE901B5423C11705E156938EA27AB402CE_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Rect
struct  Rect_t35B976DE901B5423C11705E156938EA27AB402CE 
{
public:
	// System.Single UnityEngine.Rect::m_XMin
	float ___m_XMin_0;
	// System.Single UnityEngine.Rect::m_YMin
	float ___m_YMin_1;
	// System.Single UnityEngine.Rect::m_Width
	float ___m_Width_2;
	// System.Single UnityEngine.Rect::m_Height
	float ___m_Height_3;

public:
	inline static int32_t get_offset_of_m_XMin_0() { return static_cast<int32_t>(offsetof(Rect_t35B976DE901B5423C11705E156938EA27AB402CE, ___m_XMin_0)); }
	inline float get_m_XMin_0() const { return ___m_XMin_0; }
	inline float* get_address_of_m_XMin_0() { return &___m_XMin_0; }
	inline void set_m_XMin_0(float value)
	{
		___m_XMin_0 = value;
	}

	inline static int32_t get_offset_of_m_YMin_1() { return static_cast<int32_t>(offsetof(Rect_t35B976DE901B5423C11705E156938EA27AB402CE, ___m_YMin_1)); }
	inline float get_m_YMin_1() const { return ___m_YMin_1; }
	inline float* get_address_of_m_YMin_1() { return &___m_YMin_1; }
	inline void set_m_YMin_1(float value)
	{
		___m_YMin_1 = value;
	}

	inline static int32_t get_offset_of_m_Width_2() { return static_cast<int32_t>(offsetof(Rect_t35B976DE901B5423C11705E156938EA27AB402CE, ___m_Width_2)); }
	inline float get_m_Width_2() const { return ___m_Width_2; }
	inline float* get_address_of_m_Width_2() { return &___m_Width_2; }
	inline void set_m_Width_2(float value)
	{
		___m_Width_2 = value;
	}

	inline static int32_t get_offset_of_m_Height_3() { return static_cast<int32_t>(offsetof(Rect_t35B976DE901B5423C11705E156938EA27AB402CE, ___m_Height_3)); }
	inline float get_m_Height_3() const { return ___m_Height_3; }
	inline float* get_address_of_m_Height_3() { return &___m_Height_3; }
	inline void set_m_Height_3(float value)
	{
		___m_Height_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RECT_T35B976DE901B5423C11705E156938EA27AB402CE_H
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
#ifndef GUISTYLESTATE_T2AA5CB82EB2571B0496D1F0B9D29D2B8D8B1E7E5_H
#define GUISTYLESTATE_T2AA5CB82EB2571B0496D1F0B9D29D2B8D8B1E7E5_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.GUIStyleState
struct  GUIStyleState_t2AA5CB82EB2571B0496D1F0B9D29D2B8D8B1E7E5  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.GUIStyleState::m_Ptr
	intptr_t ___m_Ptr_0;
	// UnityEngine.GUIStyle UnityEngine.GUIStyleState::m_SourceStyle
	GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * ___m_SourceStyle_1;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(GUIStyleState_t2AA5CB82EB2571B0496D1F0B9D29D2B8D8B1E7E5, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}

	inline static int32_t get_offset_of_m_SourceStyle_1() { return static_cast<int32_t>(offsetof(GUIStyleState_t2AA5CB82EB2571B0496D1F0B9D29D2B8D8B1E7E5, ___m_SourceStyle_1)); }
	inline GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * get_m_SourceStyle_1() const { return ___m_SourceStyle_1; }
	inline GUIStyle_t671F175A201A19166385EE3392292A5F50070572 ** get_address_of_m_SourceStyle_1() { return &___m_SourceStyle_1; }
	inline void set_m_SourceStyle_1(GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * value)
	{
		___m_SourceStyle_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_SourceStyle_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.GUIStyleState
struct GUIStyleState_t2AA5CB82EB2571B0496D1F0B9D29D2B8D8B1E7E5_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	GUIStyle_t671F175A201A19166385EE3392292A5F50070572_marshaled_pinvoke* ___m_SourceStyle_1;
};
// Native definition for COM marshalling of UnityEngine.GUIStyleState
struct GUIStyleState_t2AA5CB82EB2571B0496D1F0B9D29D2B8D8B1E7E5_marshaled_com
{
	intptr_t ___m_Ptr_0;
	GUIStyle_t671F175A201A19166385EE3392292A5F50070572_marshaled_com* ___m_SourceStyle_1;
};
#endif // GUISTYLESTATE_T2AA5CB82EB2571B0496D1F0B9D29D2B8D8B1E7E5_H
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
#ifndef RECTOFFSET_TED44B1176E93501050480416699D1F11BAE8C87A_H
#define RECTOFFSET_TED44B1176E93501050480416699D1F11BAE8C87A_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.RectOffset
struct  RectOffset_tED44B1176E93501050480416699D1F11BAE8C87A  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.RectOffset::m_Ptr
	intptr_t ___m_Ptr_0;
	// System.Object UnityEngine.RectOffset::m_SourceStyle
	RuntimeObject * ___m_SourceStyle_1;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(RectOffset_tED44B1176E93501050480416699D1F11BAE8C87A, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}

	inline static int32_t get_offset_of_m_SourceStyle_1() { return static_cast<int32_t>(offsetof(RectOffset_tED44B1176E93501050480416699D1F11BAE8C87A, ___m_SourceStyle_1)); }
	inline RuntimeObject * get_m_SourceStyle_1() const { return ___m_SourceStyle_1; }
	inline RuntimeObject ** get_address_of_m_SourceStyle_1() { return &___m_SourceStyle_1; }
	inline void set_m_SourceStyle_1(RuntimeObject * value)
	{
		___m_SourceStyle_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_SourceStyle_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.RectOffset
struct RectOffset_tED44B1176E93501050480416699D1F11BAE8C87A_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	Il2CppIUnknown* ___m_SourceStyle_1;
};
// Native definition for COM marshalling of UnityEngine.RectOffset
struct RectOffset_tED44B1176E93501050480416699D1F11BAE8C87A_marshaled_com
{
	intptr_t ___m_Ptr_0;
	Il2CppIUnknown* ___m_SourceStyle_1;
};
#endif // RECTOFFSET_TED44B1176E93501050480416699D1F11BAE8C87A_H
#ifndef TEXTANCHOR_TEC19034D476659A5E05366C63564F34DD30E7C57_H
#define TEXTANCHOR_TEC19034D476659A5E05366C63564F34DD30E7C57_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.TextAnchor
struct  TextAnchor_tEC19034D476659A5E05366C63564F34DD30E7C57 
{
public:
	// System.Int32 UnityEngine.TextAnchor::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TextAnchor_tEC19034D476659A5E05366C63564F34DD30E7C57, ___value___2)); }
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
#endif // TEXTANCHOR_TEC19034D476659A5E05366C63564F34DD30E7C57_H
#ifndef TEXTUREFORMAT_T7C6B5101554065C47682E592D1E26079D4EC2DCE_H
#define TEXTUREFORMAT_T7C6B5101554065C47682E592D1E26079D4EC2DCE_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.TextureFormat
struct  TextureFormat_t7C6B5101554065C47682E592D1E26079D4EC2DCE 
{
public:
	// System.Int32 UnityEngine.TextureFormat::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TextureFormat_t7C6B5101554065C47682E592D1E26079D4EC2DCE, ___value___2)); }
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
#endif // TEXTUREFORMAT_T7C6B5101554065C47682E592D1E26079D4EC2DCE_H
#ifndef CAMERADEVICEMODE_T31CE15C1D60CED5FC63DF3962D53D5DAADD40589_H
#define CAMERADEVICEMODE_T31CE15C1D60CED5FC63DF3962D53D5DAADD40589_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.CameraDevice/CameraDeviceMode
struct  CameraDeviceMode_t31CE15C1D60CED5FC63DF3962D53D5DAADD40589 
{
public:
	// System.Int32 Vuforia.CameraDevice/CameraDeviceMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CameraDeviceMode_t31CE15C1D60CED5FC63DF3962D53D5DAADD40589, ___value___2)); }
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
#endif // CAMERADEVICEMODE_T31CE15C1D60CED5FC63DF3962D53D5DAADD40589_H
#ifndef CAMERADIRECTION_T99A7DDFDD0655039A53CB7B65650BF9C584F427C_H
#define CAMERADIRECTION_T99A7DDFDD0655039A53CB7B65650BF9C584F427C_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.CameraDevice/CameraDirection
struct  CameraDirection_t99A7DDFDD0655039A53CB7B65650BF9C584F427C 
{
public:
	// System.Int32 Vuforia.CameraDevice/CameraDirection::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CameraDirection_t99A7DDFDD0655039A53CB7B65650BF9C584F427C, ___value___2)); }
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
#endif // CAMERADIRECTION_T99A7DDFDD0655039A53CB7B65650BF9C584F427C_H
#ifndef STATUS_T9B64F0BA3AD7E64C80B7CD10F61ECC24F20EC092_H
#define STATUS_T9B64F0BA3AD7E64C80B7CD10F61ECC24F20EC092_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.TrackableBehaviour/Status
struct  Status_t9B64F0BA3AD7E64C80B7CD10F61ECC24F20EC092 
{
public:
	// System.Int32 Vuforia.TrackableBehaviour/Status::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Status_t9B64F0BA3AD7E64C80B7CD10F61ECC24F20EC092, ___value___2)); }
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
#endif // STATUS_T9B64F0BA3AD7E64C80B7CD10F61ECC24F20EC092_H
#ifndef VIDEOBACKGROUNDREFLECTION_TBD028C69522ED582C56ECBB8246555DAFCDDC6EF_H
#define VIDEOBACKGROUNDREFLECTION_TBD028C69522ED582C56ECBB8246555DAFCDDC6EF_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.VuforiaRenderer/VideoBackgroundReflection
struct  VideoBackgroundReflection_tBD028C69522ED582C56ECBB8246555DAFCDDC6EF 
{
public:
	// System.Int32 Vuforia.VuforiaRenderer/VideoBackgroundReflection::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(VideoBackgroundReflection_tBD028C69522ED582C56ECBB8246555DAFCDDC6EF, ___value___2)); }
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
#endif // VIDEOBACKGROUNDREFLECTION_TBD028C69522ED582C56ECBB8246555DAFCDDC6EF_H
#ifndef INITSTATE_T0072A2BD2C69378E4575A8148A3DB0974451CD70_H
#define INITSTATE_T0072A2BD2C69378E4575A8148A3DB0974451CD70_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.VuforiaRuntime/InitState
struct  InitState_t0072A2BD2C69378E4575A8148A3DB0974451CD70 
{
public:
	// System.Int32 Vuforia.VuforiaRuntime/InitState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(InitState_t0072A2BD2C69378E4575A8148A3DB0974451CD70, ___value___2)); }
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
#endif // INITSTATE_T0072A2BD2C69378E4575A8148A3DB0974451CD70_H
#ifndef INITERROR_T486F7D53F5B0B7943D4E22BE2D32F4913D4A0431_H
#define INITERROR_T486F7D53F5B0B7943D4E22BE2D32F4913D4A0431_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.VuforiaUnity/InitError
struct  InitError_t486F7D53F5B0B7943D4E22BE2D32F4913D4A0431 
{
public:
	// System.Int32 Vuforia.VuforiaUnity/InitError::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(InitError_t486F7D53F5B0B7943D4E22BE2D32F4913D4A0431, ___value___2)); }
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
#endif // INITERROR_T486F7D53F5B0B7943D4E22BE2D32F4913D4A0431_H
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
#ifndef FONT_T1EDE54AF557272BE314EB4B40EFA50CEB353CA26_H
#define FONT_T1EDE54AF557272BE314EB4B40EFA50CEB353CA26_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Font
struct  Font_t1EDE54AF557272BE314EB4B40EFA50CEB353CA26  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:
	// UnityEngine.Font/FontTextureRebuildCallback UnityEngine.Font::m_FontTextureRebuildCallback
	FontTextureRebuildCallback_tD700C63BB1A449E3A0464C81701E981677D3021C * ___m_FontTextureRebuildCallback_5;

public:
	inline static int32_t get_offset_of_m_FontTextureRebuildCallback_5() { return static_cast<int32_t>(offsetof(Font_t1EDE54AF557272BE314EB4B40EFA50CEB353CA26, ___m_FontTextureRebuildCallback_5)); }
	inline FontTextureRebuildCallback_tD700C63BB1A449E3A0464C81701E981677D3021C * get_m_FontTextureRebuildCallback_5() const { return ___m_FontTextureRebuildCallback_5; }
	inline FontTextureRebuildCallback_tD700C63BB1A449E3A0464C81701E981677D3021C ** get_address_of_m_FontTextureRebuildCallback_5() { return &___m_FontTextureRebuildCallback_5; }
	inline void set_m_FontTextureRebuildCallback_5(FontTextureRebuildCallback_tD700C63BB1A449E3A0464C81701E981677D3021C * value)
	{
		___m_FontTextureRebuildCallback_5 = value;
		Il2CppCodeGenWriteBarrier((&___m_FontTextureRebuildCallback_5), value);
	}
};

struct Font_t1EDE54AF557272BE314EB4B40EFA50CEB353CA26_StaticFields
{
public:
	// System.Action`1<UnityEngine.Font> UnityEngine.Font::textureRebuilt
	Action_1_t795662E553415ECF2DD0F8EEB9BA170C3670F37C * ___textureRebuilt_4;

public:
	inline static int32_t get_offset_of_textureRebuilt_4() { return static_cast<int32_t>(offsetof(Font_t1EDE54AF557272BE314EB4B40EFA50CEB353CA26_StaticFields, ___textureRebuilt_4)); }
	inline Action_1_t795662E553415ECF2DD0F8EEB9BA170C3670F37C * get_textureRebuilt_4() const { return ___textureRebuilt_4; }
	inline Action_1_t795662E553415ECF2DD0F8EEB9BA170C3670F37C ** get_address_of_textureRebuilt_4() { return &___textureRebuilt_4; }
	inline void set_textureRebuilt_4(Action_1_t795662E553415ECF2DD0F8EEB9BA170C3670F37C * value)
	{
		___textureRebuilt_4 = value;
		Il2CppCodeGenWriteBarrier((&___textureRebuilt_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FONT_T1EDE54AF557272BE314EB4B40EFA50CEB353CA26_H
#ifndef GUISTYLE_T671F175A201A19166385EE3392292A5F50070572_H
#define GUISTYLE_T671F175A201A19166385EE3392292A5F50070572_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.GUIStyle
struct  GUIStyle_t671F175A201A19166385EE3392292A5F50070572  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.GUIStyle::m_Ptr
	intptr_t ___m_Ptr_0;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_Normal
	GUIStyleState_t2AA5CB82EB2571B0496D1F0B9D29D2B8D8B1E7E5 * ___m_Normal_1;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_Hover
	GUIStyleState_t2AA5CB82EB2571B0496D1F0B9D29D2B8D8B1E7E5 * ___m_Hover_2;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_Active
	GUIStyleState_t2AA5CB82EB2571B0496D1F0B9D29D2B8D8B1E7E5 * ___m_Active_3;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_Focused
	GUIStyleState_t2AA5CB82EB2571B0496D1F0B9D29D2B8D8B1E7E5 * ___m_Focused_4;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_OnNormal
	GUIStyleState_t2AA5CB82EB2571B0496D1F0B9D29D2B8D8B1E7E5 * ___m_OnNormal_5;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_OnHover
	GUIStyleState_t2AA5CB82EB2571B0496D1F0B9D29D2B8D8B1E7E5 * ___m_OnHover_6;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_OnActive
	GUIStyleState_t2AA5CB82EB2571B0496D1F0B9D29D2B8D8B1E7E5 * ___m_OnActive_7;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_OnFocused
	GUIStyleState_t2AA5CB82EB2571B0496D1F0B9D29D2B8D8B1E7E5 * ___m_OnFocused_8;
	// UnityEngine.RectOffset UnityEngine.GUIStyle::m_Border
	RectOffset_tED44B1176E93501050480416699D1F11BAE8C87A * ___m_Border_9;
	// UnityEngine.RectOffset UnityEngine.GUIStyle::m_Padding
	RectOffset_tED44B1176E93501050480416699D1F11BAE8C87A * ___m_Padding_10;
	// UnityEngine.RectOffset UnityEngine.GUIStyle::m_Margin
	RectOffset_tED44B1176E93501050480416699D1F11BAE8C87A * ___m_Margin_11;
	// UnityEngine.RectOffset UnityEngine.GUIStyle::m_Overflow
	RectOffset_tED44B1176E93501050480416699D1F11BAE8C87A * ___m_Overflow_12;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(GUIStyle_t671F175A201A19166385EE3392292A5F50070572, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}

	inline static int32_t get_offset_of_m_Normal_1() { return static_cast<int32_t>(offsetof(GUIStyle_t671F175A201A19166385EE3392292A5F50070572, ___m_Normal_1)); }
	inline GUIStyleState_t2AA5CB82EB2571B0496D1F0B9D29D2B8D8B1E7E5 * get_m_Normal_1() const { return ___m_Normal_1; }
	inline GUIStyleState_t2AA5CB82EB2571B0496D1F0B9D29D2B8D8B1E7E5 ** get_address_of_m_Normal_1() { return &___m_Normal_1; }
	inline void set_m_Normal_1(GUIStyleState_t2AA5CB82EB2571B0496D1F0B9D29D2B8D8B1E7E5 * value)
	{
		___m_Normal_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_Normal_1), value);
	}

	inline static int32_t get_offset_of_m_Hover_2() { return static_cast<int32_t>(offsetof(GUIStyle_t671F175A201A19166385EE3392292A5F50070572, ___m_Hover_2)); }
	inline GUIStyleState_t2AA5CB82EB2571B0496D1F0B9D29D2B8D8B1E7E5 * get_m_Hover_2() const { return ___m_Hover_2; }
	inline GUIStyleState_t2AA5CB82EB2571B0496D1F0B9D29D2B8D8B1E7E5 ** get_address_of_m_Hover_2() { return &___m_Hover_2; }
	inline void set_m_Hover_2(GUIStyleState_t2AA5CB82EB2571B0496D1F0B9D29D2B8D8B1E7E5 * value)
	{
		___m_Hover_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_Hover_2), value);
	}

	inline static int32_t get_offset_of_m_Active_3() { return static_cast<int32_t>(offsetof(GUIStyle_t671F175A201A19166385EE3392292A5F50070572, ___m_Active_3)); }
	inline GUIStyleState_t2AA5CB82EB2571B0496D1F0B9D29D2B8D8B1E7E5 * get_m_Active_3() const { return ___m_Active_3; }
	inline GUIStyleState_t2AA5CB82EB2571B0496D1F0B9D29D2B8D8B1E7E5 ** get_address_of_m_Active_3() { return &___m_Active_3; }
	inline void set_m_Active_3(GUIStyleState_t2AA5CB82EB2571B0496D1F0B9D29D2B8D8B1E7E5 * value)
	{
		___m_Active_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_Active_3), value);
	}

	inline static int32_t get_offset_of_m_Focused_4() { return static_cast<int32_t>(offsetof(GUIStyle_t671F175A201A19166385EE3392292A5F50070572, ___m_Focused_4)); }
	inline GUIStyleState_t2AA5CB82EB2571B0496D1F0B9D29D2B8D8B1E7E5 * get_m_Focused_4() const { return ___m_Focused_4; }
	inline GUIStyleState_t2AA5CB82EB2571B0496D1F0B9D29D2B8D8B1E7E5 ** get_address_of_m_Focused_4() { return &___m_Focused_4; }
	inline void set_m_Focused_4(GUIStyleState_t2AA5CB82EB2571B0496D1F0B9D29D2B8D8B1E7E5 * value)
	{
		___m_Focused_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_Focused_4), value);
	}

	inline static int32_t get_offset_of_m_OnNormal_5() { return static_cast<int32_t>(offsetof(GUIStyle_t671F175A201A19166385EE3392292A5F50070572, ___m_OnNormal_5)); }
	inline GUIStyleState_t2AA5CB82EB2571B0496D1F0B9D29D2B8D8B1E7E5 * get_m_OnNormal_5() const { return ___m_OnNormal_5; }
	inline GUIStyleState_t2AA5CB82EB2571B0496D1F0B9D29D2B8D8B1E7E5 ** get_address_of_m_OnNormal_5() { return &___m_OnNormal_5; }
	inline void set_m_OnNormal_5(GUIStyleState_t2AA5CB82EB2571B0496D1F0B9D29D2B8D8B1E7E5 * value)
	{
		___m_OnNormal_5 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnNormal_5), value);
	}

	inline static int32_t get_offset_of_m_OnHover_6() { return static_cast<int32_t>(offsetof(GUIStyle_t671F175A201A19166385EE3392292A5F50070572, ___m_OnHover_6)); }
	inline GUIStyleState_t2AA5CB82EB2571B0496D1F0B9D29D2B8D8B1E7E5 * get_m_OnHover_6() const { return ___m_OnHover_6; }
	inline GUIStyleState_t2AA5CB82EB2571B0496D1F0B9D29D2B8D8B1E7E5 ** get_address_of_m_OnHover_6() { return &___m_OnHover_6; }
	inline void set_m_OnHover_6(GUIStyleState_t2AA5CB82EB2571B0496D1F0B9D29D2B8D8B1E7E5 * value)
	{
		___m_OnHover_6 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnHover_6), value);
	}

	inline static int32_t get_offset_of_m_OnActive_7() { return static_cast<int32_t>(offsetof(GUIStyle_t671F175A201A19166385EE3392292A5F50070572, ___m_OnActive_7)); }
	inline GUIStyleState_t2AA5CB82EB2571B0496D1F0B9D29D2B8D8B1E7E5 * get_m_OnActive_7() const { return ___m_OnActive_7; }
	inline GUIStyleState_t2AA5CB82EB2571B0496D1F0B9D29D2B8D8B1E7E5 ** get_address_of_m_OnActive_7() { return &___m_OnActive_7; }
	inline void set_m_OnActive_7(GUIStyleState_t2AA5CB82EB2571B0496D1F0B9D29D2B8D8B1E7E5 * value)
	{
		___m_OnActive_7 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnActive_7), value);
	}

	inline static int32_t get_offset_of_m_OnFocused_8() { return static_cast<int32_t>(offsetof(GUIStyle_t671F175A201A19166385EE3392292A5F50070572, ___m_OnFocused_8)); }
	inline GUIStyleState_t2AA5CB82EB2571B0496D1F0B9D29D2B8D8B1E7E5 * get_m_OnFocused_8() const { return ___m_OnFocused_8; }
	inline GUIStyleState_t2AA5CB82EB2571B0496D1F0B9D29D2B8D8B1E7E5 ** get_address_of_m_OnFocused_8() { return &___m_OnFocused_8; }
	inline void set_m_OnFocused_8(GUIStyleState_t2AA5CB82EB2571B0496D1F0B9D29D2B8D8B1E7E5 * value)
	{
		___m_OnFocused_8 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnFocused_8), value);
	}

	inline static int32_t get_offset_of_m_Border_9() { return static_cast<int32_t>(offsetof(GUIStyle_t671F175A201A19166385EE3392292A5F50070572, ___m_Border_9)); }
	inline RectOffset_tED44B1176E93501050480416699D1F11BAE8C87A * get_m_Border_9() const { return ___m_Border_9; }
	inline RectOffset_tED44B1176E93501050480416699D1F11BAE8C87A ** get_address_of_m_Border_9() { return &___m_Border_9; }
	inline void set_m_Border_9(RectOffset_tED44B1176E93501050480416699D1F11BAE8C87A * value)
	{
		___m_Border_9 = value;
		Il2CppCodeGenWriteBarrier((&___m_Border_9), value);
	}

	inline static int32_t get_offset_of_m_Padding_10() { return static_cast<int32_t>(offsetof(GUIStyle_t671F175A201A19166385EE3392292A5F50070572, ___m_Padding_10)); }
	inline RectOffset_tED44B1176E93501050480416699D1F11BAE8C87A * get_m_Padding_10() const { return ___m_Padding_10; }
	inline RectOffset_tED44B1176E93501050480416699D1F11BAE8C87A ** get_address_of_m_Padding_10() { return &___m_Padding_10; }
	inline void set_m_Padding_10(RectOffset_tED44B1176E93501050480416699D1F11BAE8C87A * value)
	{
		___m_Padding_10 = value;
		Il2CppCodeGenWriteBarrier((&___m_Padding_10), value);
	}

	inline static int32_t get_offset_of_m_Margin_11() { return static_cast<int32_t>(offsetof(GUIStyle_t671F175A201A19166385EE3392292A5F50070572, ___m_Margin_11)); }
	inline RectOffset_tED44B1176E93501050480416699D1F11BAE8C87A * get_m_Margin_11() const { return ___m_Margin_11; }
	inline RectOffset_tED44B1176E93501050480416699D1F11BAE8C87A ** get_address_of_m_Margin_11() { return &___m_Margin_11; }
	inline void set_m_Margin_11(RectOffset_tED44B1176E93501050480416699D1F11BAE8C87A * value)
	{
		___m_Margin_11 = value;
		Il2CppCodeGenWriteBarrier((&___m_Margin_11), value);
	}

	inline static int32_t get_offset_of_m_Overflow_12() { return static_cast<int32_t>(offsetof(GUIStyle_t671F175A201A19166385EE3392292A5F50070572, ___m_Overflow_12)); }
	inline RectOffset_tED44B1176E93501050480416699D1F11BAE8C87A * get_m_Overflow_12() const { return ___m_Overflow_12; }
	inline RectOffset_tED44B1176E93501050480416699D1F11BAE8C87A ** get_address_of_m_Overflow_12() { return &___m_Overflow_12; }
	inline void set_m_Overflow_12(RectOffset_tED44B1176E93501050480416699D1F11BAE8C87A * value)
	{
		___m_Overflow_12 = value;
		Il2CppCodeGenWriteBarrier((&___m_Overflow_12), value);
	}
};

struct GUIStyle_t671F175A201A19166385EE3392292A5F50070572_StaticFields
{
public:
	// System.Boolean UnityEngine.GUIStyle::showKeyboardFocus
	bool ___showKeyboardFocus_13;
	// UnityEngine.GUIStyle UnityEngine.GUIStyle::s_None
	GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * ___s_None_14;

public:
	inline static int32_t get_offset_of_showKeyboardFocus_13() { return static_cast<int32_t>(offsetof(GUIStyle_t671F175A201A19166385EE3392292A5F50070572_StaticFields, ___showKeyboardFocus_13)); }
	inline bool get_showKeyboardFocus_13() const { return ___showKeyboardFocus_13; }
	inline bool* get_address_of_showKeyboardFocus_13() { return &___showKeyboardFocus_13; }
	inline void set_showKeyboardFocus_13(bool value)
	{
		___showKeyboardFocus_13 = value;
	}

	inline static int32_t get_offset_of_s_None_14() { return static_cast<int32_t>(offsetof(GUIStyle_t671F175A201A19166385EE3392292A5F50070572_StaticFields, ___s_None_14)); }
	inline GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * get_s_None_14() const { return ___s_None_14; }
	inline GUIStyle_t671F175A201A19166385EE3392292A5F50070572 ** get_address_of_s_None_14() { return &___s_None_14; }
	inline void set_s_None_14(GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * value)
	{
		___s_None_14 = value;
		Il2CppCodeGenWriteBarrier((&___s_None_14), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.GUIStyle
struct GUIStyle_t671F175A201A19166385EE3392292A5F50070572_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	GUIStyleState_t2AA5CB82EB2571B0496D1F0B9D29D2B8D8B1E7E5_marshaled_pinvoke* ___m_Normal_1;
	GUIStyleState_t2AA5CB82EB2571B0496D1F0B9D29D2B8D8B1E7E5_marshaled_pinvoke* ___m_Hover_2;
	GUIStyleState_t2AA5CB82EB2571B0496D1F0B9D29D2B8D8B1E7E5_marshaled_pinvoke* ___m_Active_3;
	GUIStyleState_t2AA5CB82EB2571B0496D1F0B9D29D2B8D8B1E7E5_marshaled_pinvoke* ___m_Focused_4;
	GUIStyleState_t2AA5CB82EB2571B0496D1F0B9D29D2B8D8B1E7E5_marshaled_pinvoke* ___m_OnNormal_5;
	GUIStyleState_t2AA5CB82EB2571B0496D1F0B9D29D2B8D8B1E7E5_marshaled_pinvoke* ___m_OnHover_6;
	GUIStyleState_t2AA5CB82EB2571B0496D1F0B9D29D2B8D8B1E7E5_marshaled_pinvoke* ___m_OnActive_7;
	GUIStyleState_t2AA5CB82EB2571B0496D1F0B9D29D2B8D8B1E7E5_marshaled_pinvoke* ___m_OnFocused_8;
	RectOffset_tED44B1176E93501050480416699D1F11BAE8C87A_marshaled_pinvoke ___m_Border_9;
	RectOffset_tED44B1176E93501050480416699D1F11BAE8C87A_marshaled_pinvoke ___m_Padding_10;
	RectOffset_tED44B1176E93501050480416699D1F11BAE8C87A_marshaled_pinvoke ___m_Margin_11;
	RectOffset_tED44B1176E93501050480416699D1F11BAE8C87A_marshaled_pinvoke ___m_Overflow_12;
};
// Native definition for COM marshalling of UnityEngine.GUIStyle
struct GUIStyle_t671F175A201A19166385EE3392292A5F50070572_marshaled_com
{
	intptr_t ___m_Ptr_0;
	GUIStyleState_t2AA5CB82EB2571B0496D1F0B9D29D2B8D8B1E7E5_marshaled_com* ___m_Normal_1;
	GUIStyleState_t2AA5CB82EB2571B0496D1F0B9D29D2B8D8B1E7E5_marshaled_com* ___m_Hover_2;
	GUIStyleState_t2AA5CB82EB2571B0496D1F0B9D29D2B8D8B1E7E5_marshaled_com* ___m_Active_3;
	GUIStyleState_t2AA5CB82EB2571B0496D1F0B9D29D2B8D8B1E7E5_marshaled_com* ___m_Focused_4;
	GUIStyleState_t2AA5CB82EB2571B0496D1F0B9D29D2B8D8B1E7E5_marshaled_com* ___m_OnNormal_5;
	GUIStyleState_t2AA5CB82EB2571B0496D1F0B9D29D2B8D8B1E7E5_marshaled_com* ___m_OnHover_6;
	GUIStyleState_t2AA5CB82EB2571B0496D1F0B9D29D2B8D8B1E7E5_marshaled_com* ___m_OnActive_7;
	GUIStyleState_t2AA5CB82EB2571B0496D1F0B9D29D2B8D8B1E7E5_marshaled_com* ___m_OnFocused_8;
	RectOffset_tED44B1176E93501050480416699D1F11BAE8C87A_marshaled_com* ___m_Border_9;
	RectOffset_tED44B1176E93501050480416699D1F11BAE8C87A_marshaled_com* ___m_Padding_10;
	RectOffset_tED44B1176E93501050480416699D1F11BAE8C87A_marshaled_com* ___m_Margin_11;
	RectOffset_tED44B1176E93501050480416699D1F11BAE8C87A_marshaled_com* ___m_Overflow_12;
};
#endif // GUISTYLE_T671F175A201A19166385EE3392292A5F50070572_H
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
#ifndef TEXTURE_T387FE83BB848001FD06B14707AEA6D5A0F6A95F4_H
#define TEXTURE_T387FE83BB848001FD06B14707AEA6D5A0F6A95F4_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Texture
struct  Texture_t387FE83BB848001FD06B14707AEA6D5A0F6A95F4  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEXTURE_T387FE83BB848001FD06B14707AEA6D5A0F6A95F4_H
#ifndef GENERICVUFORIACONFIGURATION_T6FBB0036347CB878A938375817103A20CDD59064_H
#define GENERICVUFORIACONFIGURATION_T6FBB0036347CB878A938375817103A20CDD59064_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.VuforiaConfiguration/GenericVuforiaConfiguration
struct  GenericVuforiaConfiguration_t6FBB0036347CB878A938375817103A20CDD59064  : public RuntimeObject
{
public:
	// System.String Vuforia.VuforiaConfiguration/GenericVuforiaConfiguration::vuforiaLicenseKey
	String_t* ___vuforiaLicenseKey_1;
	// System.String Vuforia.VuforiaConfiguration/GenericVuforiaConfiguration::ufoLicenseKey
	String_t* ___ufoLicenseKey_2;
	// System.Boolean Vuforia.VuforiaConfiguration/GenericVuforiaConfiguration::delayedInitialization
	bool ___delayedInitialization_3;
	// Vuforia.CameraDevice/CameraDeviceMode Vuforia.VuforiaConfiguration/GenericVuforiaConfiguration::cameraDeviceModeSetting
	int32_t ___cameraDeviceModeSetting_4;
	// System.Int32 Vuforia.VuforiaConfiguration/GenericVuforiaConfiguration::maxSimultaneousImageTargets
	int32_t ___maxSimultaneousImageTargets_5;
	// System.Int32 Vuforia.VuforiaConfiguration/GenericVuforiaConfiguration::maxSimultaneousObjectTargets
	int32_t ___maxSimultaneousObjectTargets_6;
	// System.Boolean Vuforia.VuforiaConfiguration/GenericVuforiaConfiguration::useDelayedLoadingObjectTargets
	bool ___useDelayedLoadingObjectTargets_7;
	// Vuforia.CameraDevice/CameraDirection Vuforia.VuforiaConfiguration/GenericVuforiaConfiguration::cameraDirection
	int32_t ___cameraDirection_8;
	// Vuforia.VuforiaRenderer/VideoBackgroundReflection Vuforia.VuforiaConfiguration/GenericVuforiaConfiguration::mirrorVideoBackground
	int32_t ___mirrorVideoBackground_9;
	// System.String Vuforia.VuforiaConfiguration/GenericVuforiaConfiguration::version
	String_t* ___version_10;
	// System.String Vuforia.VuforiaConfiguration/GenericVuforiaConfiguration::eulaAcceptedVersions
	String_t* ___eulaAcceptedVersions_11;

public:
	inline static int32_t get_offset_of_vuforiaLicenseKey_1() { return static_cast<int32_t>(offsetof(GenericVuforiaConfiguration_t6FBB0036347CB878A938375817103A20CDD59064, ___vuforiaLicenseKey_1)); }
	inline String_t* get_vuforiaLicenseKey_1() const { return ___vuforiaLicenseKey_1; }
	inline String_t** get_address_of_vuforiaLicenseKey_1() { return &___vuforiaLicenseKey_1; }
	inline void set_vuforiaLicenseKey_1(String_t* value)
	{
		___vuforiaLicenseKey_1 = value;
		Il2CppCodeGenWriteBarrier((&___vuforiaLicenseKey_1), value);
	}

	inline static int32_t get_offset_of_ufoLicenseKey_2() { return static_cast<int32_t>(offsetof(GenericVuforiaConfiguration_t6FBB0036347CB878A938375817103A20CDD59064, ___ufoLicenseKey_2)); }
	inline String_t* get_ufoLicenseKey_2() const { return ___ufoLicenseKey_2; }
	inline String_t** get_address_of_ufoLicenseKey_2() { return &___ufoLicenseKey_2; }
	inline void set_ufoLicenseKey_2(String_t* value)
	{
		___ufoLicenseKey_2 = value;
		Il2CppCodeGenWriteBarrier((&___ufoLicenseKey_2), value);
	}

	inline static int32_t get_offset_of_delayedInitialization_3() { return static_cast<int32_t>(offsetof(GenericVuforiaConfiguration_t6FBB0036347CB878A938375817103A20CDD59064, ___delayedInitialization_3)); }
	inline bool get_delayedInitialization_3() const { return ___delayedInitialization_3; }
	inline bool* get_address_of_delayedInitialization_3() { return &___delayedInitialization_3; }
	inline void set_delayedInitialization_3(bool value)
	{
		___delayedInitialization_3 = value;
	}

	inline static int32_t get_offset_of_cameraDeviceModeSetting_4() { return static_cast<int32_t>(offsetof(GenericVuforiaConfiguration_t6FBB0036347CB878A938375817103A20CDD59064, ___cameraDeviceModeSetting_4)); }
	inline int32_t get_cameraDeviceModeSetting_4() const { return ___cameraDeviceModeSetting_4; }
	inline int32_t* get_address_of_cameraDeviceModeSetting_4() { return &___cameraDeviceModeSetting_4; }
	inline void set_cameraDeviceModeSetting_4(int32_t value)
	{
		___cameraDeviceModeSetting_4 = value;
	}

	inline static int32_t get_offset_of_maxSimultaneousImageTargets_5() { return static_cast<int32_t>(offsetof(GenericVuforiaConfiguration_t6FBB0036347CB878A938375817103A20CDD59064, ___maxSimultaneousImageTargets_5)); }
	inline int32_t get_maxSimultaneousImageTargets_5() const { return ___maxSimultaneousImageTargets_5; }
	inline int32_t* get_address_of_maxSimultaneousImageTargets_5() { return &___maxSimultaneousImageTargets_5; }
	inline void set_maxSimultaneousImageTargets_5(int32_t value)
	{
		___maxSimultaneousImageTargets_5 = value;
	}

	inline static int32_t get_offset_of_maxSimultaneousObjectTargets_6() { return static_cast<int32_t>(offsetof(GenericVuforiaConfiguration_t6FBB0036347CB878A938375817103A20CDD59064, ___maxSimultaneousObjectTargets_6)); }
	inline int32_t get_maxSimultaneousObjectTargets_6() const { return ___maxSimultaneousObjectTargets_6; }
	inline int32_t* get_address_of_maxSimultaneousObjectTargets_6() { return &___maxSimultaneousObjectTargets_6; }
	inline void set_maxSimultaneousObjectTargets_6(int32_t value)
	{
		___maxSimultaneousObjectTargets_6 = value;
	}

	inline static int32_t get_offset_of_useDelayedLoadingObjectTargets_7() { return static_cast<int32_t>(offsetof(GenericVuforiaConfiguration_t6FBB0036347CB878A938375817103A20CDD59064, ___useDelayedLoadingObjectTargets_7)); }
	inline bool get_useDelayedLoadingObjectTargets_7() const { return ___useDelayedLoadingObjectTargets_7; }
	inline bool* get_address_of_useDelayedLoadingObjectTargets_7() { return &___useDelayedLoadingObjectTargets_7; }
	inline void set_useDelayedLoadingObjectTargets_7(bool value)
	{
		___useDelayedLoadingObjectTargets_7 = value;
	}

	inline static int32_t get_offset_of_cameraDirection_8() { return static_cast<int32_t>(offsetof(GenericVuforiaConfiguration_t6FBB0036347CB878A938375817103A20CDD59064, ___cameraDirection_8)); }
	inline int32_t get_cameraDirection_8() const { return ___cameraDirection_8; }
	inline int32_t* get_address_of_cameraDirection_8() { return &___cameraDirection_8; }
	inline void set_cameraDirection_8(int32_t value)
	{
		___cameraDirection_8 = value;
	}

	inline static int32_t get_offset_of_mirrorVideoBackground_9() { return static_cast<int32_t>(offsetof(GenericVuforiaConfiguration_t6FBB0036347CB878A938375817103A20CDD59064, ___mirrorVideoBackground_9)); }
	inline int32_t get_mirrorVideoBackground_9() const { return ___mirrorVideoBackground_9; }
	inline int32_t* get_address_of_mirrorVideoBackground_9() { return &___mirrorVideoBackground_9; }
	inline void set_mirrorVideoBackground_9(int32_t value)
	{
		___mirrorVideoBackground_9 = value;
	}

	inline static int32_t get_offset_of_version_10() { return static_cast<int32_t>(offsetof(GenericVuforiaConfiguration_t6FBB0036347CB878A938375817103A20CDD59064, ___version_10)); }
	inline String_t* get_version_10() const { return ___version_10; }
	inline String_t** get_address_of_version_10() { return &___version_10; }
	inline void set_version_10(String_t* value)
	{
		___version_10 = value;
		Il2CppCodeGenWriteBarrier((&___version_10), value);
	}

	inline static int32_t get_offset_of_eulaAcceptedVersions_11() { return static_cast<int32_t>(offsetof(GenericVuforiaConfiguration_t6FBB0036347CB878A938375817103A20CDD59064, ___eulaAcceptedVersions_11)); }
	inline String_t* get_eulaAcceptedVersions_11() const { return ___eulaAcceptedVersions_11; }
	inline String_t** get_address_of_eulaAcceptedVersions_11() { return &___eulaAcceptedVersions_11; }
	inline void set_eulaAcceptedVersions_11(String_t* value)
	{
		___eulaAcceptedVersions_11 = value;
		Il2CppCodeGenWriteBarrier((&___eulaAcceptedVersions_11), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GENERICVUFORIACONFIGURATION_T6FBB0036347CB878A938375817103A20CDD59064_H
#ifndef VUFORIARUNTIME_T12D46DC6B127017866AA832739B2B22B0612DC1D_H
#define VUFORIARUNTIME_T12D46DC6B127017866AA832739B2B22B0612DC1D_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.VuforiaRuntime
struct  VuforiaRuntime_t12D46DC6B127017866AA832739B2B22B0612DC1D  : public RuntimeObject
{
public:
	// System.Action`1<Vuforia.VuforiaUnity/InitError> Vuforia.VuforiaRuntime::mOnVuforiaInitError
	Action_1_tAA7EF8692AA276A9B2E6353FC26F374339933EFF * ___mOnVuforiaInitError_1;
	// System.Boolean Vuforia.VuforiaRuntime::mFailedToInitialize
	bool ___mFailedToInitialize_2;
	// Vuforia.VuforiaUnity/InitError Vuforia.VuforiaRuntime::mInitError
	int32_t ___mInitError_3;
	// Vuforia.VuforiaRuntime/InitState Vuforia.VuforiaRuntime::mInitState
	int32_t ___mInitState_4;
	// System.Boolean Vuforia.VuforiaRuntime::mInitThreadReturned
	bool ___mInitThreadReturned_5;
	// Vuforia.VuforiaUnity/InitError Vuforia.VuforiaRuntime::mReturnedError
	int32_t ___mReturnedError_6;
	// System.Boolean Vuforia.VuforiaRuntime::mAppIsQuitting
	bool ___mAppIsQuitting_9;

public:
	inline static int32_t get_offset_of_mOnVuforiaInitError_1() { return static_cast<int32_t>(offsetof(VuforiaRuntime_t12D46DC6B127017866AA832739B2B22B0612DC1D, ___mOnVuforiaInitError_1)); }
	inline Action_1_tAA7EF8692AA276A9B2E6353FC26F374339933EFF * get_mOnVuforiaInitError_1() const { return ___mOnVuforiaInitError_1; }
	inline Action_1_tAA7EF8692AA276A9B2E6353FC26F374339933EFF ** get_address_of_mOnVuforiaInitError_1() { return &___mOnVuforiaInitError_1; }
	inline void set_mOnVuforiaInitError_1(Action_1_tAA7EF8692AA276A9B2E6353FC26F374339933EFF * value)
	{
		___mOnVuforiaInitError_1 = value;
		Il2CppCodeGenWriteBarrier((&___mOnVuforiaInitError_1), value);
	}

	inline static int32_t get_offset_of_mFailedToInitialize_2() { return static_cast<int32_t>(offsetof(VuforiaRuntime_t12D46DC6B127017866AA832739B2B22B0612DC1D, ___mFailedToInitialize_2)); }
	inline bool get_mFailedToInitialize_2() const { return ___mFailedToInitialize_2; }
	inline bool* get_address_of_mFailedToInitialize_2() { return &___mFailedToInitialize_2; }
	inline void set_mFailedToInitialize_2(bool value)
	{
		___mFailedToInitialize_2 = value;
	}

	inline static int32_t get_offset_of_mInitError_3() { return static_cast<int32_t>(offsetof(VuforiaRuntime_t12D46DC6B127017866AA832739B2B22B0612DC1D, ___mInitError_3)); }
	inline int32_t get_mInitError_3() const { return ___mInitError_3; }
	inline int32_t* get_address_of_mInitError_3() { return &___mInitError_3; }
	inline void set_mInitError_3(int32_t value)
	{
		___mInitError_3 = value;
	}

	inline static int32_t get_offset_of_mInitState_4() { return static_cast<int32_t>(offsetof(VuforiaRuntime_t12D46DC6B127017866AA832739B2B22B0612DC1D, ___mInitState_4)); }
	inline int32_t get_mInitState_4() const { return ___mInitState_4; }
	inline int32_t* get_address_of_mInitState_4() { return &___mInitState_4; }
	inline void set_mInitState_4(int32_t value)
	{
		___mInitState_4 = value;
	}

	inline static int32_t get_offset_of_mInitThreadReturned_5() { return static_cast<int32_t>(offsetof(VuforiaRuntime_t12D46DC6B127017866AA832739B2B22B0612DC1D, ___mInitThreadReturned_5)); }
	inline bool get_mInitThreadReturned_5() const { return ___mInitThreadReturned_5; }
	inline bool* get_address_of_mInitThreadReturned_5() { return &___mInitThreadReturned_5; }
	inline void set_mInitThreadReturned_5(bool value)
	{
		___mInitThreadReturned_5 = value;
	}

	inline static int32_t get_offset_of_mReturnedError_6() { return static_cast<int32_t>(offsetof(VuforiaRuntime_t12D46DC6B127017866AA832739B2B22B0612DC1D, ___mReturnedError_6)); }
	inline int32_t get_mReturnedError_6() const { return ___mReturnedError_6; }
	inline int32_t* get_address_of_mReturnedError_6() { return &___mReturnedError_6; }
	inline void set_mReturnedError_6(int32_t value)
	{
		___mReturnedError_6 = value;
	}

	inline static int32_t get_offset_of_mAppIsQuitting_9() { return static_cast<int32_t>(offsetof(VuforiaRuntime_t12D46DC6B127017866AA832739B2B22B0612DC1D, ___mAppIsQuitting_9)); }
	inline bool get_mAppIsQuitting_9() const { return ___mAppIsQuitting_9; }
	inline bool* get_address_of_mAppIsQuitting_9() { return &___mAppIsQuitting_9; }
	inline void set_mAppIsQuitting_9(bool value)
	{
		___mAppIsQuitting_9 = value;
	}
};

struct VuforiaRuntime_t12D46DC6B127017866AA832739B2B22B0612DC1D_StaticFields
{
public:
	// Vuforia.VuforiaRuntime Vuforia.VuforiaRuntime::mInstance
	VuforiaRuntime_t12D46DC6B127017866AA832739B2B22B0612DC1D * ___mInstance_7;
	// System.Object Vuforia.VuforiaRuntime::mPadlock
	RuntimeObject * ___mPadlock_8;

public:
	inline static int32_t get_offset_of_mInstance_7() { return static_cast<int32_t>(offsetof(VuforiaRuntime_t12D46DC6B127017866AA832739B2B22B0612DC1D_StaticFields, ___mInstance_7)); }
	inline VuforiaRuntime_t12D46DC6B127017866AA832739B2B22B0612DC1D * get_mInstance_7() const { return ___mInstance_7; }
	inline VuforiaRuntime_t12D46DC6B127017866AA832739B2B22B0612DC1D ** get_address_of_mInstance_7() { return &___mInstance_7; }
	inline void set_mInstance_7(VuforiaRuntime_t12D46DC6B127017866AA832739B2B22B0612DC1D * value)
	{
		___mInstance_7 = value;
		Il2CppCodeGenWriteBarrier((&___mInstance_7), value);
	}

	inline static int32_t get_offset_of_mPadlock_8() { return static_cast<int32_t>(offsetof(VuforiaRuntime_t12D46DC6B127017866AA832739B2B22B0612DC1D_StaticFields, ___mPadlock_8)); }
	inline RuntimeObject * get_mPadlock_8() const { return ___mPadlock_8; }
	inline RuntimeObject ** get_address_of_mPadlock_8() { return &___mPadlock_8; }
	inline void set_mPadlock_8(RuntimeObject * value)
	{
		___mPadlock_8 = value;
		Il2CppCodeGenWriteBarrier((&___mPadlock_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VUFORIARUNTIME_T12D46DC6B127017866AA832739B2B22B0612DC1D_H
#ifndef ACTION_1_TAA7EF8692AA276A9B2E6353FC26F374339933EFF_H
#define ACTION_1_TAA7EF8692AA276A9B2E6353FC26F374339933EFF_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Action`1<Vuforia.VuforiaUnity/InitError>
struct  Action_1_tAA7EF8692AA276A9B2E6353FC26F374339933EFF  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ACTION_1_TAA7EF8692AA276A9B2E6353FC26F374339933EFF_H
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
#ifndef COLLIDER_T0FEEB36760860AD21B3B1F0509C365B393EC4BDF_H
#define COLLIDER_T0FEEB36760860AD21B3B1F0509C365B393EC4BDF_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Collider
struct  Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLLIDER_T0FEEB36760860AD21B3B1F0509C365B393EC4BDF_H
#ifndef WINDOWFUNCTION_T9AF05117863D95AA9F85D497A3B9B53216708100_H
#define WINDOWFUNCTION_T9AF05117863D95AA9F85D497A3B9B53216708100_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.GUI/WindowFunction
struct  WindowFunction_t9AF05117863D95AA9F85D497A3B9B53216708100  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WINDOWFUNCTION_T9AF05117863D95AA9F85D497A3B9B53216708100_H
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
#ifndef TEXTURE2D_TBBF96AC337723E2EF156DF17E09D4379FD05DE1C_H
#define TEXTURE2D_TBBF96AC337723E2EF156DF17E09D4379FD05DE1C_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Texture2D
struct  Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C  : public Texture_t387FE83BB848001FD06B14707AEA6D5A0F6A95F4
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEXTURE2D_TBBF96AC337723E2EF156DF17E09D4379FD05DE1C_H
#ifndef VUFORIACONFIGURATION_T389C464955859AB411F51B7950ACBAA6DCAFCD82_H
#define VUFORIACONFIGURATION_T389C464955859AB411F51B7950ACBAA6DCAFCD82_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.VuforiaConfiguration
struct  VuforiaConfiguration_t389C464955859AB411F51B7950ACBAA6DCAFCD82  : public ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734
{
public:
	// Vuforia.VuforiaConfiguration/GenericVuforiaConfiguration Vuforia.VuforiaConfiguration::vuforia
	GenericVuforiaConfiguration_t6FBB0036347CB878A938375817103A20CDD59064 * ___vuforia_6;
	// Vuforia.VuforiaConfiguration/DigitalEyewearConfiguration Vuforia.VuforiaConfiguration::digitalEyewear
	DigitalEyewearConfiguration_t1BA464AEDA9C847084FCF4F1CA3C92719D655B18 * ___digitalEyewear_7;
	// Vuforia.VuforiaConfiguration/VideoBackgroundConfiguration Vuforia.VuforiaConfiguration::videoBackground
	VideoBackgroundConfiguration_tCC24E374B966B79D018C14F6807A6DDA47302F17 * ___videoBackground_8;
	// Vuforia.VuforiaConfiguration/DeviceTrackerConfiguration Vuforia.VuforiaConfiguration::deviceTracker
	DeviceTrackerConfiguration_tC11D2DA49200D3693731D6AFF3F793E4315D1E3F * ___deviceTracker_9;
	// Vuforia.VuforiaConfiguration/SmartTerrainConfiguration Vuforia.VuforiaConfiguration::smartTerrain
	SmartTerrainConfiguration_t6104CF56BC1AFE13ED509BB01CBE90E7E64372C7 * ___smartTerrain_10;
	// Vuforia.VuforiaConfiguration/WebCamConfiguration Vuforia.VuforiaConfiguration::webcam
	WebCamConfiguration_t0A5BD19A86D3AA8B68FB79C1EA8A5855A6C9F321 * ___webcam_11;

public:
	inline static int32_t get_offset_of_vuforia_6() { return static_cast<int32_t>(offsetof(VuforiaConfiguration_t389C464955859AB411F51B7950ACBAA6DCAFCD82, ___vuforia_6)); }
	inline GenericVuforiaConfiguration_t6FBB0036347CB878A938375817103A20CDD59064 * get_vuforia_6() const { return ___vuforia_6; }
	inline GenericVuforiaConfiguration_t6FBB0036347CB878A938375817103A20CDD59064 ** get_address_of_vuforia_6() { return &___vuforia_6; }
	inline void set_vuforia_6(GenericVuforiaConfiguration_t6FBB0036347CB878A938375817103A20CDD59064 * value)
	{
		___vuforia_6 = value;
		Il2CppCodeGenWriteBarrier((&___vuforia_6), value);
	}

	inline static int32_t get_offset_of_digitalEyewear_7() { return static_cast<int32_t>(offsetof(VuforiaConfiguration_t389C464955859AB411F51B7950ACBAA6DCAFCD82, ___digitalEyewear_7)); }
	inline DigitalEyewearConfiguration_t1BA464AEDA9C847084FCF4F1CA3C92719D655B18 * get_digitalEyewear_7() const { return ___digitalEyewear_7; }
	inline DigitalEyewearConfiguration_t1BA464AEDA9C847084FCF4F1CA3C92719D655B18 ** get_address_of_digitalEyewear_7() { return &___digitalEyewear_7; }
	inline void set_digitalEyewear_7(DigitalEyewearConfiguration_t1BA464AEDA9C847084FCF4F1CA3C92719D655B18 * value)
	{
		___digitalEyewear_7 = value;
		Il2CppCodeGenWriteBarrier((&___digitalEyewear_7), value);
	}

	inline static int32_t get_offset_of_videoBackground_8() { return static_cast<int32_t>(offsetof(VuforiaConfiguration_t389C464955859AB411F51B7950ACBAA6DCAFCD82, ___videoBackground_8)); }
	inline VideoBackgroundConfiguration_tCC24E374B966B79D018C14F6807A6DDA47302F17 * get_videoBackground_8() const { return ___videoBackground_8; }
	inline VideoBackgroundConfiguration_tCC24E374B966B79D018C14F6807A6DDA47302F17 ** get_address_of_videoBackground_8() { return &___videoBackground_8; }
	inline void set_videoBackground_8(VideoBackgroundConfiguration_tCC24E374B966B79D018C14F6807A6DDA47302F17 * value)
	{
		___videoBackground_8 = value;
		Il2CppCodeGenWriteBarrier((&___videoBackground_8), value);
	}

	inline static int32_t get_offset_of_deviceTracker_9() { return static_cast<int32_t>(offsetof(VuforiaConfiguration_t389C464955859AB411F51B7950ACBAA6DCAFCD82, ___deviceTracker_9)); }
	inline DeviceTrackerConfiguration_tC11D2DA49200D3693731D6AFF3F793E4315D1E3F * get_deviceTracker_9() const { return ___deviceTracker_9; }
	inline DeviceTrackerConfiguration_tC11D2DA49200D3693731D6AFF3F793E4315D1E3F ** get_address_of_deviceTracker_9() { return &___deviceTracker_9; }
	inline void set_deviceTracker_9(DeviceTrackerConfiguration_tC11D2DA49200D3693731D6AFF3F793E4315D1E3F * value)
	{
		___deviceTracker_9 = value;
		Il2CppCodeGenWriteBarrier((&___deviceTracker_9), value);
	}

	inline static int32_t get_offset_of_smartTerrain_10() { return static_cast<int32_t>(offsetof(VuforiaConfiguration_t389C464955859AB411F51B7950ACBAA6DCAFCD82, ___smartTerrain_10)); }
	inline SmartTerrainConfiguration_t6104CF56BC1AFE13ED509BB01CBE90E7E64372C7 * get_smartTerrain_10() const { return ___smartTerrain_10; }
	inline SmartTerrainConfiguration_t6104CF56BC1AFE13ED509BB01CBE90E7E64372C7 ** get_address_of_smartTerrain_10() { return &___smartTerrain_10; }
	inline void set_smartTerrain_10(SmartTerrainConfiguration_t6104CF56BC1AFE13ED509BB01CBE90E7E64372C7 * value)
	{
		___smartTerrain_10 = value;
		Il2CppCodeGenWriteBarrier((&___smartTerrain_10), value);
	}

	inline static int32_t get_offset_of_webcam_11() { return static_cast<int32_t>(offsetof(VuforiaConfiguration_t389C464955859AB411F51B7950ACBAA6DCAFCD82, ___webcam_11)); }
	inline WebCamConfiguration_t0A5BD19A86D3AA8B68FB79C1EA8A5855A6C9F321 * get_webcam_11() const { return ___webcam_11; }
	inline WebCamConfiguration_t0A5BD19A86D3AA8B68FB79C1EA8A5855A6C9F321 ** get_address_of_webcam_11() { return &___webcam_11; }
	inline void set_webcam_11(WebCamConfiguration_t0A5BD19A86D3AA8B68FB79C1EA8A5855A6C9F321 * value)
	{
		___webcam_11 = value;
		Il2CppCodeGenWriteBarrier((&___webcam_11), value);
	}
};

struct VuforiaConfiguration_t389C464955859AB411F51B7950ACBAA6DCAFCD82_StaticFields
{
public:
	// Vuforia.VuforiaConfiguration Vuforia.VuforiaConfiguration::mInstance
	VuforiaConfiguration_t389C464955859AB411F51B7950ACBAA6DCAFCD82 * ___mInstance_4;
	// System.Object Vuforia.VuforiaConfiguration::mPadlock
	RuntimeObject * ___mPadlock_5;

public:
	inline static int32_t get_offset_of_mInstance_4() { return static_cast<int32_t>(offsetof(VuforiaConfiguration_t389C464955859AB411F51B7950ACBAA6DCAFCD82_StaticFields, ___mInstance_4)); }
	inline VuforiaConfiguration_t389C464955859AB411F51B7950ACBAA6DCAFCD82 * get_mInstance_4() const { return ___mInstance_4; }
	inline VuforiaConfiguration_t389C464955859AB411F51B7950ACBAA6DCAFCD82 ** get_address_of_mInstance_4() { return &___mInstance_4; }
	inline void set_mInstance_4(VuforiaConfiguration_t389C464955859AB411F51B7950ACBAA6DCAFCD82 * value)
	{
		___mInstance_4 = value;
		Il2CppCodeGenWriteBarrier((&___mInstance_4), value);
	}

	inline static int32_t get_offset_of_mPadlock_5() { return static_cast<int32_t>(offsetof(VuforiaConfiguration_t389C464955859AB411F51B7950ACBAA6DCAFCD82_StaticFields, ___mPadlock_5)); }
	inline RuntimeObject * get_mPadlock_5() const { return ___mPadlock_5; }
	inline RuntimeObject ** get_address_of_mPadlock_5() { return &___mPadlock_5; }
	inline void set_mPadlock_5(RuntimeObject * value)
	{
		___mPadlock_5 = value;
		Il2CppCodeGenWriteBarrier((&___mPadlock_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VUFORIACONFIGURATION_T389C464955859AB411F51B7950ACBAA6DCAFCD82_H
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
#ifndef MONOBEHAVIOUR_T4A60845CF505405AF8BE8C61CC07F75CADEF6429_H
#define MONOBEHAVIOUR_T4A60845CF505405AF8BE8C61CC07F75CADEF6429_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429  : public Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOBEHAVIOUR_T4A60845CF505405AF8BE8C61CC07F75CADEF6429_H
#ifndef DEFAULTTRACKABLEEVENTHANDLER_T6997E0A19AC0FABC165FB7264F57DF2EDF4E8022_H
#define DEFAULTTRACKABLEEVENTHANDLER_T6997E0A19AC0FABC165FB7264F57DF2EDF4E8022_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DefaultTrackableEventHandler
struct  DefaultTrackableEventHandler_t6997E0A19AC0FABC165FB7264F57DF2EDF4E8022  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// Vuforia.TrackableBehaviour DefaultTrackableEventHandler::mTrackableBehaviour
	TrackableBehaviour_t579D75AAFEF7B2D69F4B68931D5A58074E80A7E4 * ___mTrackableBehaviour_4;
	// Vuforia.TrackableBehaviour/Status DefaultTrackableEventHandler::m_PreviousStatus
	int32_t ___m_PreviousStatus_5;
	// Vuforia.TrackableBehaviour/Status DefaultTrackableEventHandler::m_NewStatus
	int32_t ___m_NewStatus_6;

public:
	inline static int32_t get_offset_of_mTrackableBehaviour_4() { return static_cast<int32_t>(offsetof(DefaultTrackableEventHandler_t6997E0A19AC0FABC165FB7264F57DF2EDF4E8022, ___mTrackableBehaviour_4)); }
	inline TrackableBehaviour_t579D75AAFEF7B2D69F4B68931D5A58074E80A7E4 * get_mTrackableBehaviour_4() const { return ___mTrackableBehaviour_4; }
	inline TrackableBehaviour_t579D75AAFEF7B2D69F4B68931D5A58074E80A7E4 ** get_address_of_mTrackableBehaviour_4() { return &___mTrackableBehaviour_4; }
	inline void set_mTrackableBehaviour_4(TrackableBehaviour_t579D75AAFEF7B2D69F4B68931D5A58074E80A7E4 * value)
	{
		___mTrackableBehaviour_4 = value;
		Il2CppCodeGenWriteBarrier((&___mTrackableBehaviour_4), value);
	}

	inline static int32_t get_offset_of_m_PreviousStatus_5() { return static_cast<int32_t>(offsetof(DefaultTrackableEventHandler_t6997E0A19AC0FABC165FB7264F57DF2EDF4E8022, ___m_PreviousStatus_5)); }
	inline int32_t get_m_PreviousStatus_5() const { return ___m_PreviousStatus_5; }
	inline int32_t* get_address_of_m_PreviousStatus_5() { return &___m_PreviousStatus_5; }
	inline void set_m_PreviousStatus_5(int32_t value)
	{
		___m_PreviousStatus_5 = value;
	}

	inline static int32_t get_offset_of_m_NewStatus_6() { return static_cast<int32_t>(offsetof(DefaultTrackableEventHandler_t6997E0A19AC0FABC165FB7264F57DF2EDF4E8022, ___m_NewStatus_6)); }
	inline int32_t get_m_NewStatus_6() const { return ___m_NewStatus_6; }
	inline int32_t* get_address_of_m_NewStatus_6() { return &___m_NewStatus_6; }
	inline void set_m_NewStatus_6(int32_t value)
	{
		___m_NewStatus_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEFAULTTRACKABLEEVENTHANDLER_T6997E0A19AC0FABC165FB7264F57DF2EDF4E8022_H
#ifndef VUFORIAMONOBEHAVIOUR_T806C61E721B78928AF6266F3AF838FA2CB56AB5D_H
#define VUFORIAMONOBEHAVIOUR_T806C61E721B78928AF6266F3AF838FA2CB56AB5D_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// VuforiaMonoBehaviour
struct  VuforiaMonoBehaviour_t806C61E721B78928AF6266F3AF838FA2CB56AB5D  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VUFORIAMONOBEHAVIOUR_T806C61E721B78928AF6266F3AF838FA2CB56AB5D_H
#ifndef DEFAULTINITIALIZATIONERRORHANDLER_T7C0EE05C3D7BF5C7A141BC322D2F0B950B101D38_H
#define DEFAULTINITIALIZATIONERRORHANDLER_T7C0EE05C3D7BF5C7A141BC322D2F0B950B101D38_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DefaultInitializationErrorHandler
struct  DefaultInitializationErrorHandler_t7C0EE05C3D7BF5C7A141BC322D2F0B950B101D38  : public VuforiaMonoBehaviour_t806C61E721B78928AF6266F3AF838FA2CB56AB5D
{
public:
	// System.String DefaultInitializationErrorHandler::mErrorText
	String_t* ___mErrorText_4;
	// System.Boolean DefaultInitializationErrorHandler::mErrorOccurred
	bool ___mErrorOccurred_5;
	// UnityEngine.GUIStyle DefaultInitializationErrorHandler::bodyStyle
	GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * ___bodyStyle_7;
	// UnityEngine.GUIStyle DefaultInitializationErrorHandler::headerStyle
	GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * ___headerStyle_8;
	// UnityEngine.GUIStyle DefaultInitializationErrorHandler::footerStyle
	GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * ___footerStyle_9;
	// UnityEngine.Texture2D DefaultInitializationErrorHandler::bodyTexture
	Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * ___bodyTexture_10;
	// UnityEngine.Texture2D DefaultInitializationErrorHandler::headerTexture
	Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * ___headerTexture_11;
	// UnityEngine.Texture2D DefaultInitializationErrorHandler::footerTexture
	Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * ___footerTexture_12;

public:
	inline static int32_t get_offset_of_mErrorText_4() { return static_cast<int32_t>(offsetof(DefaultInitializationErrorHandler_t7C0EE05C3D7BF5C7A141BC322D2F0B950B101D38, ___mErrorText_4)); }
	inline String_t* get_mErrorText_4() const { return ___mErrorText_4; }
	inline String_t** get_address_of_mErrorText_4() { return &___mErrorText_4; }
	inline void set_mErrorText_4(String_t* value)
	{
		___mErrorText_4 = value;
		Il2CppCodeGenWriteBarrier((&___mErrorText_4), value);
	}

	inline static int32_t get_offset_of_mErrorOccurred_5() { return static_cast<int32_t>(offsetof(DefaultInitializationErrorHandler_t7C0EE05C3D7BF5C7A141BC322D2F0B950B101D38, ___mErrorOccurred_5)); }
	inline bool get_mErrorOccurred_5() const { return ___mErrorOccurred_5; }
	inline bool* get_address_of_mErrorOccurred_5() { return &___mErrorOccurred_5; }
	inline void set_mErrorOccurred_5(bool value)
	{
		___mErrorOccurred_5 = value;
	}

	inline static int32_t get_offset_of_bodyStyle_7() { return static_cast<int32_t>(offsetof(DefaultInitializationErrorHandler_t7C0EE05C3D7BF5C7A141BC322D2F0B950B101D38, ___bodyStyle_7)); }
	inline GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * get_bodyStyle_7() const { return ___bodyStyle_7; }
	inline GUIStyle_t671F175A201A19166385EE3392292A5F50070572 ** get_address_of_bodyStyle_7() { return &___bodyStyle_7; }
	inline void set_bodyStyle_7(GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * value)
	{
		___bodyStyle_7 = value;
		Il2CppCodeGenWriteBarrier((&___bodyStyle_7), value);
	}

	inline static int32_t get_offset_of_headerStyle_8() { return static_cast<int32_t>(offsetof(DefaultInitializationErrorHandler_t7C0EE05C3D7BF5C7A141BC322D2F0B950B101D38, ___headerStyle_8)); }
	inline GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * get_headerStyle_8() const { return ___headerStyle_8; }
	inline GUIStyle_t671F175A201A19166385EE3392292A5F50070572 ** get_address_of_headerStyle_8() { return &___headerStyle_8; }
	inline void set_headerStyle_8(GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * value)
	{
		___headerStyle_8 = value;
		Il2CppCodeGenWriteBarrier((&___headerStyle_8), value);
	}

	inline static int32_t get_offset_of_footerStyle_9() { return static_cast<int32_t>(offsetof(DefaultInitializationErrorHandler_t7C0EE05C3D7BF5C7A141BC322D2F0B950B101D38, ___footerStyle_9)); }
	inline GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * get_footerStyle_9() const { return ___footerStyle_9; }
	inline GUIStyle_t671F175A201A19166385EE3392292A5F50070572 ** get_address_of_footerStyle_9() { return &___footerStyle_9; }
	inline void set_footerStyle_9(GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * value)
	{
		___footerStyle_9 = value;
		Il2CppCodeGenWriteBarrier((&___footerStyle_9), value);
	}

	inline static int32_t get_offset_of_bodyTexture_10() { return static_cast<int32_t>(offsetof(DefaultInitializationErrorHandler_t7C0EE05C3D7BF5C7A141BC322D2F0B950B101D38, ___bodyTexture_10)); }
	inline Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * get_bodyTexture_10() const { return ___bodyTexture_10; }
	inline Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C ** get_address_of_bodyTexture_10() { return &___bodyTexture_10; }
	inline void set_bodyTexture_10(Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * value)
	{
		___bodyTexture_10 = value;
		Il2CppCodeGenWriteBarrier((&___bodyTexture_10), value);
	}

	inline static int32_t get_offset_of_headerTexture_11() { return static_cast<int32_t>(offsetof(DefaultInitializationErrorHandler_t7C0EE05C3D7BF5C7A141BC322D2F0B950B101D38, ___headerTexture_11)); }
	inline Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * get_headerTexture_11() const { return ___headerTexture_11; }
	inline Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C ** get_address_of_headerTexture_11() { return &___headerTexture_11; }
	inline void set_headerTexture_11(Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * value)
	{
		___headerTexture_11 = value;
		Il2CppCodeGenWriteBarrier((&___headerTexture_11), value);
	}

	inline static int32_t get_offset_of_footerTexture_12() { return static_cast<int32_t>(offsetof(DefaultInitializationErrorHandler_t7C0EE05C3D7BF5C7A141BC322D2F0B950B101D38, ___footerTexture_12)); }
	inline Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * get_footerTexture_12() const { return ___footerTexture_12; }
	inline Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C ** get_address_of_footerTexture_12() { return &___footerTexture_12; }
	inline void set_footerTexture_12(Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * value)
	{
		___footerTexture_12 = value;
		Il2CppCodeGenWriteBarrier((&___footerTexture_12), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEFAULTINITIALIZATIONERRORHANDLER_T7C0EE05C3D7BF5C7A141BC322D2F0B950B101D38_H
#ifndef TRACKABLEBEHAVIOUR_T579D75AAFEF7B2D69F4B68931D5A58074E80A7E4_H
#define TRACKABLEBEHAVIOUR_T579D75AAFEF7B2D69F4B68931D5A58074E80A7E4_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.TrackableBehaviour
struct  TrackableBehaviour_t579D75AAFEF7B2D69F4B68931D5A58074E80A7E4  : public VuforiaMonoBehaviour_t806C61E721B78928AF6266F3AF838FA2CB56AB5D
{
public:
	// System.Double Vuforia.TrackableBehaviour::<TimeStamp>k__BackingField
	double ___U3CTimeStampU3Ek__BackingField_4;
	// System.String Vuforia.TrackableBehaviour::mTrackableName
	String_t* ___mTrackableName_5;
	// System.Boolean Vuforia.TrackableBehaviour::mPreserveChildSize
	bool ___mPreserveChildSize_6;
	// System.Boolean Vuforia.TrackableBehaviour::mInitializedInEditor
	bool ___mInitializedInEditor_7;
	// UnityEngine.Vector3 Vuforia.TrackableBehaviour::mPreviousScale
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___mPreviousScale_8;
	// Vuforia.TrackableBehaviour/Status Vuforia.TrackableBehaviour::mStatus
	int32_t ___mStatus_9;
	// Vuforia.Trackable Vuforia.TrackableBehaviour::mTrackable
	RuntimeObject* ___mTrackable_10;
	// System.Collections.Generic.List`1<Vuforia.ITrackableEventHandler> Vuforia.TrackableBehaviour::mTrackableEventHandlers
	List_1_tE4338C7F7D33C78CB75B44EB5CCCA0152E97497B * ___mTrackableEventHandlers_11;

public:
	inline static int32_t get_offset_of_U3CTimeStampU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(TrackableBehaviour_t579D75AAFEF7B2D69F4B68931D5A58074E80A7E4, ___U3CTimeStampU3Ek__BackingField_4)); }
	inline double get_U3CTimeStampU3Ek__BackingField_4() const { return ___U3CTimeStampU3Ek__BackingField_4; }
	inline double* get_address_of_U3CTimeStampU3Ek__BackingField_4() { return &___U3CTimeStampU3Ek__BackingField_4; }
	inline void set_U3CTimeStampU3Ek__BackingField_4(double value)
	{
		___U3CTimeStampU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of_mTrackableName_5() { return static_cast<int32_t>(offsetof(TrackableBehaviour_t579D75AAFEF7B2D69F4B68931D5A58074E80A7E4, ___mTrackableName_5)); }
	inline String_t* get_mTrackableName_5() const { return ___mTrackableName_5; }
	inline String_t** get_address_of_mTrackableName_5() { return &___mTrackableName_5; }
	inline void set_mTrackableName_5(String_t* value)
	{
		___mTrackableName_5 = value;
		Il2CppCodeGenWriteBarrier((&___mTrackableName_5), value);
	}

	inline static int32_t get_offset_of_mPreserveChildSize_6() { return static_cast<int32_t>(offsetof(TrackableBehaviour_t579D75AAFEF7B2D69F4B68931D5A58074E80A7E4, ___mPreserveChildSize_6)); }
	inline bool get_mPreserveChildSize_6() const { return ___mPreserveChildSize_6; }
	inline bool* get_address_of_mPreserveChildSize_6() { return &___mPreserveChildSize_6; }
	inline void set_mPreserveChildSize_6(bool value)
	{
		___mPreserveChildSize_6 = value;
	}

	inline static int32_t get_offset_of_mInitializedInEditor_7() { return static_cast<int32_t>(offsetof(TrackableBehaviour_t579D75AAFEF7B2D69F4B68931D5A58074E80A7E4, ___mInitializedInEditor_7)); }
	inline bool get_mInitializedInEditor_7() const { return ___mInitializedInEditor_7; }
	inline bool* get_address_of_mInitializedInEditor_7() { return &___mInitializedInEditor_7; }
	inline void set_mInitializedInEditor_7(bool value)
	{
		___mInitializedInEditor_7 = value;
	}

	inline static int32_t get_offset_of_mPreviousScale_8() { return static_cast<int32_t>(offsetof(TrackableBehaviour_t579D75AAFEF7B2D69F4B68931D5A58074E80A7E4, ___mPreviousScale_8)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_mPreviousScale_8() const { return ___mPreviousScale_8; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_mPreviousScale_8() { return &___mPreviousScale_8; }
	inline void set_mPreviousScale_8(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___mPreviousScale_8 = value;
	}

	inline static int32_t get_offset_of_mStatus_9() { return static_cast<int32_t>(offsetof(TrackableBehaviour_t579D75AAFEF7B2D69F4B68931D5A58074E80A7E4, ___mStatus_9)); }
	inline int32_t get_mStatus_9() const { return ___mStatus_9; }
	inline int32_t* get_address_of_mStatus_9() { return &___mStatus_9; }
	inline void set_mStatus_9(int32_t value)
	{
		___mStatus_9 = value;
	}

	inline static int32_t get_offset_of_mTrackable_10() { return static_cast<int32_t>(offsetof(TrackableBehaviour_t579D75AAFEF7B2D69F4B68931D5A58074E80A7E4, ___mTrackable_10)); }
	inline RuntimeObject* get_mTrackable_10() const { return ___mTrackable_10; }
	inline RuntimeObject** get_address_of_mTrackable_10() { return &___mTrackable_10; }
	inline void set_mTrackable_10(RuntimeObject* value)
	{
		___mTrackable_10 = value;
		Il2CppCodeGenWriteBarrier((&___mTrackable_10), value);
	}

	inline static int32_t get_offset_of_mTrackableEventHandlers_11() { return static_cast<int32_t>(offsetof(TrackableBehaviour_t579D75AAFEF7B2D69F4B68931D5A58074E80A7E4, ___mTrackableEventHandlers_11)); }
	inline List_1_tE4338C7F7D33C78CB75B44EB5CCCA0152E97497B * get_mTrackableEventHandlers_11() const { return ___mTrackableEventHandlers_11; }
	inline List_1_tE4338C7F7D33C78CB75B44EB5CCCA0152E97497B ** get_address_of_mTrackableEventHandlers_11() { return &___mTrackableEventHandlers_11; }
	inline void set_mTrackableEventHandlers_11(List_1_tE4338C7F7D33C78CB75B44EB5CCCA0152E97497B * value)
	{
		___mTrackableEventHandlers_11 = value;
		Il2CppCodeGenWriteBarrier((&___mTrackableEventHandlers_11), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRACKABLEBEHAVIOUR_T579D75AAFEF7B2D69F4B68931D5A58074E80A7E4_H
// System.Object[]
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject * m_Items[1];

public:
	inline RuntimeObject * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline RuntimeObject * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// UnityEngine.Collider[]
struct ColliderU5BU5D_t2814A7DE0594A145A9E2C23548AF5B6E9DF8402A  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF * m_Items[1];

public:
	inline Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// UnityEngine.Canvas[]
struct CanvasU5BU5D_t9A0DED7A1C92D7DCBC82864C92A06CA527E72E60  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * m_Items[1];

public:
	inline Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// UnityEngine.Renderer[]
struct RendererU5BU5D_tF85DA3E8016B6D367A055C3BF54C575FDA7DAEEF  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * m_Items[1];

public:
	inline Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};


// System.Void System.Action`1<System.Int32Enum>::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void Action_1__ctor_mD0D31654D450BEB7CFFA7B079FD2EB5946C2B8E8_gshared (Action_1_tABA1E3BFA092E3309A0ECC53722E4F9826DCE983 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method);
// !!0 UnityEngine.Resources::GetBuiltinResource<System.Object>(System.String)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Resources_GetBuiltinResource_TisRuntimeObject_m85F17CF969B8729F73D7FC6E935EF20EF3AAA994_gshared (String_t* p0, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<System.Object>()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponent_TisRuntimeObject_m3FED1FF44F93EF1C3A07526800331B638EF4105B_gshared (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method);
// !!0[] UnityEngine.Component::GetComponentsInChildren<System.Object>(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* Component_GetComponentsInChildren_TisRuntimeObject_m58F7AC53741315DA8288813302360E0A36C78D25_gshared (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, bool p0, const RuntimeMethod* method);

// System.Void DefaultInitializationErrorHandler::SetErrorCode(Vuforia.VuforiaUnity/InitError)
extern "C" IL2CPP_METHOD_ATTR void DefaultInitializationErrorHandler_SetErrorCode_m8D02B872B53162E5CEE1ABD461F59B4F1D642AFE (DefaultInitializationErrorHandler_t7C0EE05C3D7BF5C7A141BC322D2F0B950B101D38 * __this, int32_t ___errorCode0, const RuntimeMethod* method);
// System.Void DefaultInitializationErrorHandler::SetErrorOccurred(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void DefaultInitializationErrorHandler_SetErrorOccurred_m1C60E1BBE9B405868D52BD600246F46DF47B8578 (DefaultInitializationErrorHandler_t7C0EE05C3D7BF5C7A141BC322D2F0B950B101D38 * __this, bool ___errorOccurred0, const RuntimeMethod* method);
// Vuforia.VuforiaRuntime Vuforia.VuforiaRuntime::get_Instance()
extern "C" IL2CPP_METHOD_ATTR VuforiaRuntime_t12D46DC6B127017866AA832739B2B22B0612DC1D * VuforiaRuntime_get_Instance_m09A801C6052F96463B0F330EE3F2453DFB329607 (const RuntimeMethod* method);
// System.Void System.Action`1<Vuforia.VuforiaUnity/InitError>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m93D264DDF8D63987A4D835C83F40D588CDCC86B8 (Action_1_tAA7EF8692AA276A9B2E6353FC26F374339933EFF * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tAA7EF8692AA276A9B2E6353FC26F374339933EFF *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_1__ctor_mD0D31654D450BEB7CFFA7B079FD2EB5946C2B8E8_gshared)(__this, p0, p1, method);
}
// System.Void Vuforia.VuforiaRuntime::RegisterVuforiaInitErrorCallback(System.Action`1<Vuforia.VuforiaUnity/InitError>)
extern "C" IL2CPP_METHOD_ATTR void VuforiaRuntime_RegisterVuforiaInitErrorCallback_m0DD342AE8B42646920AB2E96118805150FF5A68F (VuforiaRuntime_t12D46DC6B127017866AA832739B2B22B0612DC1D * __this, Action_1_tAA7EF8692AA276A9B2E6353FC26F374339933EFF * p0, const RuntimeMethod* method);
// System.Void DefaultInitializationErrorHandler::SetupGUIStyles()
extern "C" IL2CPP_METHOD_ATTR void DefaultInitializationErrorHandler_SetupGUIStyles_m95161DC5F2ECD9341D49F9AF35D11B36E3FBB8E7 (DefaultInitializationErrorHandler_t7C0EE05C3D7BF5C7A141BC322D2F0B950B101D38 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.Screen::get_width()
extern "C" IL2CPP_METHOD_ATTR int32_t Screen_get_width_m8ECCEF7FF17395D1237BC0193D7A6640A3FEEAD3 (const RuntimeMethod* method);
// System.Int32 UnityEngine.Screen::get_height()
extern "C" IL2CPP_METHOD_ATTR int32_t Screen_get_height_mF5B64EBC4CDE0EAAA5713C1452ED2CE475F25150 (const RuntimeMethod* method);
// System.Void UnityEngine.Rect::.ctor(System.Single,System.Single,System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR void Rect__ctor_m50B92C75005C9C5A0D05E6E0EBB43AFAF7C66280 (Rect_t35B976DE901B5423C11705E156938EA27AB402CE * __this, float p0, float p1, float p2, float p3, const RuntimeMethod* method);
// System.Void UnityEngine.GUI/WindowFunction::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void WindowFunction__ctor_m216C357C45DF9A8ABE74056B8BDB1B7F94EE2D81 (WindowFunction_t9AF05117863D95AA9F85D497A3B9B53216708100 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method);
// UnityEngine.Rect UnityEngine.GUI::Window(System.Int32,UnityEngine.Rect,UnityEngine.GUI/WindowFunction,System.String)
extern "C" IL2CPP_METHOD_ATTR Rect_t35B976DE901B5423C11705E156938EA27AB402CE  GUI_Window_mEB4F2621947A8A1140E495493A5B35DCF92E31C0 (int32_t p0, Rect_t35B976DE901B5423C11705E156938EA27AB402CE  p1, WindowFunction_t9AF05117863D95AA9F85D497A3B9B53216708100 * p2, String_t* p3, const RuntimeMethod* method);
// System.Void Vuforia.VuforiaRuntime::UnregisterVuforiaInitErrorCallback(System.Action`1<Vuforia.VuforiaUnity/InitError>)
extern "C" IL2CPP_METHOD_ATTR void VuforiaRuntime_UnregisterVuforiaInitErrorCallback_m07045CAF11270BE48936D22CDE99FB2F026329E3 (VuforiaRuntime_t12D46DC6B127017866AA832739B2B22B0612DC1D * __this, Action_1_tAA7EF8692AA276A9B2E6353FC26F374339933EFF * p0, const RuntimeMethod* method);
// System.Void UnityEngine.GUI::Label(UnityEngine.Rect,System.String,UnityEngine.GUIStyle)
extern "C" IL2CPP_METHOD_ATTR void GUI_Label_m283D6B1DD970038379FBB974BC5A45F87CA727B6 (Rect_t35B976DE901B5423C11705E156938EA27AB402CE  p0, String_t* p1, GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * p2, const RuntimeMethod* method);
// System.Boolean UnityEngine.GUI::Button(UnityEngine.Rect,System.String,UnityEngine.GUIStyle)
extern "C" IL2CPP_METHOD_ATTR bool GUI_Button_mC39C9F8426A10930825737A6D63B7C8DDF24748B (Rect_t35B976DE901B5423C11705E156938EA27AB402CE  p0, String_t* p1, GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * p2, const RuntimeMethod* method);
// System.Void UnityEngine.Application::Quit()
extern "C" IL2CPP_METHOD_ATTR void Application_Quit_mA005EB22CB989AC3794334754F15E1C0D2FF1C95 (const RuntimeMethod* method);
// System.String DefaultInitializationErrorHandler::getKeyInfo()
extern "C" IL2CPP_METHOD_ATTR String_t* DefaultInitializationErrorHandler_getKeyInfo_m2810070CDC373FC5667406EA32A1B060E067E2DC (DefaultInitializationErrorHandler_t7C0EE05C3D7BF5C7A141BC322D2F0B950B101D38 * __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE (String_t* p0, String_t* p1, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Concat_mF4626905368D6558695A823466A1AF65EADB9923 (String_t* p0, String_t* p1, String_t* p2, const RuntimeMethod* method);
// System.String UnityEngine.Application::get_productName()
extern "C" IL2CPP_METHOD_ATTR String_t* Application_get_productName_m9F65580744751D3771DA955C0D947787F3F5E9A5 (const RuntimeMethod* method);
// System.String System.String::Replace(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Replace_m970DFB0A280952FA7D3BA20AB7A8FB9F80CF6470 (String_t* __this, String_t* p0, String_t* p1, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String,System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Concat_mDD2E38332DED3A8C088D38D78A0E0BEB5091DA64 (String_t* p0, String_t* p1, String_t* p2, String_t* p3, const RuntimeMethod* method);
// System.String System.String::Concat(System.Object[])
extern "C" IL2CPP_METHOD_ATTR String_t* String_Concat_mB7BA84F13912303B2E5E40FBF0109E1A328ACA07 (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* p0, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogError(System.Object)
extern "C" IL2CPP_METHOD_ATTR void Debug_LogError_m3BCF9B78263152261565DCA9DB7D55F0C391ED29 (RuntimeObject * p0, const RuntimeMethod* method);
// Vuforia.VuforiaConfiguration Vuforia.VuforiaConfiguration::get_Instance()
extern "C" IL2CPP_METHOD_ATTR VuforiaConfiguration_t389C464955859AB411F51B7950ACBAA6DCAFCD82 * VuforiaConfiguration_get_Instance_mB41F218B6090038BBA15873FEB67D1132526914C (const RuntimeMethod* method);
// Vuforia.VuforiaConfiguration/GenericVuforiaConfiguration Vuforia.VuforiaConfiguration::get_Vuforia()
extern "C" IL2CPP_METHOD_ATTR GenericVuforiaConfiguration_t6FBB0036347CB878A938375817103A20CDD59064 * VuforiaConfiguration_get_Vuforia_mAE9E228790390C66CF46E33B874B802D5AA8692D (VuforiaConfiguration_t389C464955859AB411F51B7950ACBAA6DCAFCD82 * __this, const RuntimeMethod* method);
// System.String Vuforia.VuforiaConfiguration/GenericVuforiaConfiguration::get_LicenseKey()
extern "C" IL2CPP_METHOD_ATTR String_t* GenericVuforiaConfiguration_get_LicenseKey_m37C1FB7D6702C2A7990BE00F23F23EA6FE61B7D6 (GenericVuforiaConfiguration_t6FBB0036347CB878A938375817103A20CDD59064 * __this, const RuntimeMethod* method);
// System.Int32 System.String::get_Length()
extern "C" IL2CPP_METHOD_ATTR int32_t String_get_Length_mD48C8A16A5CF1914F330DCE82D9BE15C3BEDD018 (String_t* __this, const RuntimeMethod* method);
// System.String System.String::Substring(System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Substring_mB593C0A320C683E6E47EFFC0A12B7A465E5E43BB (String_t* __this, int32_t p0, int32_t p1, const RuntimeMethod* method);
// System.Single UnityEngine.Screen::get_dpi()
extern "C" IL2CPP_METHOD_ATTR float Screen_get_dpi_m92A755DE9E23ABA717B5594F4F52AFB0FBEAC1D3 (const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::get_white()
extern "C" IL2CPP_METHOD_ATTR Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  Color_get_white_mE7F3AC4FF0D6F35E48049C73116A222CBE96D905 (const RuntimeMethod* method);
// UnityEngine.Texture2D DefaultInitializationErrorHandler::CreateSinglePixelTexture(UnityEngine.Color)
extern "C" IL2CPP_METHOD_ATTR Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * DefaultInitializationErrorHandler_CreateSinglePixelTexture_m314E1B3B003A6F0253FD1A13070B93BCE6415AD6 (DefaultInitializationErrorHandler_t7C0EE05C3D7BF5C7A141BC322D2F0B950B101D38 * __this, Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___color0, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::InverseLerp(System.Single,System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR float Mathf_InverseLerp_m7054CDF25056E9B27D2467F91C95D628508F1F31 (float p0, float p1, float p2, const RuntimeMethod* method);
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR void Color__ctor_mC9AEEB3931D5B8C37483A884DD8EB40DC8946369 (Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * __this, float p0, float p1, float p2, const RuntimeMethod* method);
// System.Void UnityEngine.GUIStyle::.ctor()
extern "C" IL2CPP_METHOD_ATTR void GUIStyle__ctor_m8AA3D5AA506A252687923D0DA80741862AA83805 (GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * __this, const RuntimeMethod* method);
// UnityEngine.GUIStyleState UnityEngine.GUIStyle::get_normal()
extern "C" IL2CPP_METHOD_ATTR GUIStyleState_t2AA5CB82EB2571B0496D1F0B9D29D2B8D8B1E7E5 * GUIStyle_get_normal_mC5CB22EED8113DEC86C54FB42F757B635D09DD2F (GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.GUIStyleState::set_background(UnityEngine.Texture2D)
extern "C" IL2CPP_METHOD_ATTR void GUIStyleState_set_background_m1BB0CD97092DE9CB40908A8061068D83FB2655AF (GUIStyleState_t2AA5CB82EB2571B0496D1F0B9D29D2B8D8B1E7E5 * __this, Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * p0, const RuntimeMethod* method);
// !!0 UnityEngine.Resources::GetBuiltinResource<UnityEngine.Font>(System.String)
inline Font_t1EDE54AF557272BE314EB4B40EFA50CEB353CA26 * Resources_GetBuiltinResource_TisFont_t1EDE54AF557272BE314EB4B40EFA50CEB353CA26_mEECDBF58A9BE0C87D23275A7997B2445D783E371 (String_t* p0, const RuntimeMethod* method)
{
	return ((  Font_t1EDE54AF557272BE314EB4B40EFA50CEB353CA26 * (*) (String_t*, const RuntimeMethod*))Resources_GetBuiltinResource_TisRuntimeObject_m85F17CF969B8729F73D7FC6E935EF20EF3AAA994_gshared)(p0, method);
}
// System.Void UnityEngine.GUIStyle::set_font(UnityEngine.Font)
extern "C" IL2CPP_METHOD_ATTR void GUIStyle_set_font_m348ACE92DE82C381C7AFE216029DB8D87F47E0A0 (GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * __this, Font_t1EDE54AF557272BE314EB4B40EFA50CEB353CA26 * p0, const RuntimeMethod* method);
// System.Void UnityEngine.GUIStyle::set_fontSize(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void GUIStyle_set_fontSize_mA9F9F916A9BC3B81CFEE7460966FFD1E6B67F45F (GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * __this, int32_t p0, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::get_black()
extern "C" IL2CPP_METHOD_ATTR Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  Color_get_black_mEB3C91F45F8AA7E4842238DFCC578BB322723DAF (const RuntimeMethod* method);
// System.Void UnityEngine.GUIStyleState::set_textColor(UnityEngine.Color)
extern "C" IL2CPP_METHOD_ATTR void GUIStyleState_set_textColor_m2B235845A292C22ABEDEFBB2FD798DEB4E104983 (GUIStyleState_t2AA5CB82EB2571B0496D1F0B9D29D2B8D8B1E7E5 * __this, Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  p0, const RuntimeMethod* method);
// System.Void UnityEngine.GUIStyle::set_wordWrap(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void GUIStyle_set_wordWrap_mB35DAD8BA109B812A2FCAED339BC5C6D7C3850C1 (GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * __this, bool p0, const RuntimeMethod* method);
// System.Void UnityEngine.GUIStyle::set_alignment(UnityEngine.TextAnchor)
extern "C" IL2CPP_METHOD_ATTR void GUIStyle_set_alignment_m80647E2DCB359B9521A6D8D53EA457E2648488CF (GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * __this, int32_t p0, const RuntimeMethod* method);
// System.Void UnityEngine.RectOffset::.ctor(System.Int32,System.Int32,System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void RectOffset__ctor_mF2A621DBA17A10660FEBE6237ACF4904DA6F9F29 (RectOffset_tED44B1176E93501050480416699D1F11BAE8C87A * __this, int32_t p0, int32_t p1, int32_t p2, int32_t p3, const RuntimeMethod* method);
// System.Void UnityEngine.GUIStyle::set_padding(UnityEngine.RectOffset)
extern "C" IL2CPP_METHOD_ATTR void GUIStyle_set_padding_m125FFFE385BFA7D60E4D9D822053DE9508A7A465 (GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * __this, RectOffset_tED44B1176E93501050480416699D1F11BAE8C87A * p0, const RuntimeMethod* method);
// System.Void UnityEngine.GUIStyle::.ctor(UnityEngine.GUIStyle)
extern "C" IL2CPP_METHOD_ATTR void GUIStyle__ctor_m64098019A1065381E9909C513D3B8CA4617EF168 (GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * __this, GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * p0, const RuntimeMethod* method);
// System.Void UnityEngine.Texture2D::.ctor(System.Int32,System.Int32,UnityEngine.TextureFormat,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void Texture2D__ctor_m22561E039BC96019757E6B2427BE09734AE2C44A (Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * __this, int32_t p0, int32_t p1, int32_t p2, bool p3, const RuntimeMethod* method);
// System.Void UnityEngine.Texture2D::SetPixel(System.Int32,System.Int32,UnityEngine.Color)
extern "C" IL2CPP_METHOD_ATTR void Texture2D_SetPixel_m8BE87C152447B812D06CB894B3570269CC2DE7C3 (Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * __this, int32_t p0, int32_t p1, Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  p2, const RuntimeMethod* method);
// System.Void UnityEngine.Texture2D::Apply()
extern "C" IL2CPP_METHOD_ATTR void Texture2D_Apply_m0F3B4A4B1B89E44E2AF60ABDEFAA18D93735B5CA (Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * __this, const RuntimeMethod* method);
// System.Void VuforiaMonoBehaviour::.ctor()
extern "C" IL2CPP_METHOD_ATTR void VuforiaMonoBehaviour__ctor_mB7B4A9CA2FA82920C82606F093597594EF3F9F91 (VuforiaMonoBehaviour_t806C61E721B78928AF6266F3AF838FA2CB56AB5D * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<Vuforia.TrackableBehaviour>()
inline TrackableBehaviour_t579D75AAFEF7B2D69F4B68931D5A58074E80A7E4 * Component_GetComponent_TisTrackableBehaviour_t579D75AAFEF7B2D69F4B68931D5A58074E80A7E4_m81E3785465C5B36522D217B045A33CD65B28B229 (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method)
{
	return ((  TrackableBehaviour_t579D75AAFEF7B2D69F4B68931D5A58074E80A7E4 * (*) (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m3FED1FF44F93EF1C3A07526800331B638EF4105B_gshared)(__this, method);
}
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
extern "C" IL2CPP_METHOD_ATTR bool Object_op_Implicit_m8B2A44B4B1406ED346D1AE6D962294FD58D0D534 (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * p0, const RuntimeMethod* method);
// System.Void Vuforia.TrackableBehaviour::RegisterTrackableEventHandler(Vuforia.ITrackableEventHandler)
extern "C" IL2CPP_METHOD_ATTR void TrackableBehaviour_RegisterTrackableEventHandler_m7435CD138D1B0794CD09A2E7DFAB9C5D9C1CB5ED (TrackableBehaviour_t579D75AAFEF7B2D69F4B68931D5A58074E80A7E4 * __this, RuntimeObject* p0, const RuntimeMethod* method);
// System.Boolean Vuforia.TrackableBehaviour::UnregisterTrackableEventHandler(Vuforia.ITrackableEventHandler)
extern "C" IL2CPP_METHOD_ATTR bool TrackableBehaviour_UnregisterTrackableEventHandler_m64B4269C6DBD319C750932217B98F21DDA90B0FD (TrackableBehaviour_t579D75AAFEF7B2D69F4B68931D5A58074E80A7E4 * __this, RuntimeObject* p0, const RuntimeMethod* method);
// System.String Vuforia.TrackableBehaviour::get_TrackableName()
extern "C" IL2CPP_METHOD_ATTR String_t* TrackableBehaviour_get_TrackableName_m7D1E2DB1F426F533F5894A3020D807958BBE4EFF (TrackableBehaviour_t579D75AAFEF7B2D69F4B68931D5A58074E80A7E4 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::Log(System.Object)
extern "C" IL2CPP_METHOD_ATTR void Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708 (RuntimeObject * p0, const RuntimeMethod* method);
// !!0[] UnityEngine.Component::GetComponentsInChildren<UnityEngine.Renderer>(System.Boolean)
inline RendererU5BU5D_tF85DA3E8016B6D367A055C3BF54C575FDA7DAEEF* Component_GetComponentsInChildren_TisRenderer_t0556D67DD582620D1F495627EDE30D03284151F4_mE634C4CC0E00DB6D11503C88000677CD2A806228 (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, bool p0, const RuntimeMethod* method)
{
	return ((  RendererU5BU5D_tF85DA3E8016B6D367A055C3BF54C575FDA7DAEEF* (*) (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *, bool, const RuntimeMethod*))Component_GetComponentsInChildren_TisRuntimeObject_m58F7AC53741315DA8288813302360E0A36C78D25_gshared)(__this, p0, method);
}
// !!0[] UnityEngine.Component::GetComponentsInChildren<UnityEngine.Collider>(System.Boolean)
inline ColliderU5BU5D_t2814A7DE0594A145A9E2C23548AF5B6E9DF8402A* Component_GetComponentsInChildren_TisCollider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF_mB7DEF049AA2B4E9D96FAE153C296F52B2ACCF244 (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, bool p0, const RuntimeMethod* method)
{
	return ((  ColliderU5BU5D_t2814A7DE0594A145A9E2C23548AF5B6E9DF8402A* (*) (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *, bool, const RuntimeMethod*))Component_GetComponentsInChildren_TisRuntimeObject_m58F7AC53741315DA8288813302360E0A36C78D25_gshared)(__this, p0, method);
}
// !!0[] UnityEngine.Component::GetComponentsInChildren<UnityEngine.Canvas>(System.Boolean)
inline CanvasU5BU5D_t9A0DED7A1C92D7DCBC82864C92A06CA527E72E60* Component_GetComponentsInChildren_TisCanvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591_m0DCB451DDA382B4BF6D882CBA43DBDD200C1FCF2 (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, bool p0, const RuntimeMethod* method)
{
	return ((  CanvasU5BU5D_t9A0DED7A1C92D7DCBC82864C92A06CA527E72E60* (*) (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *, bool, const RuntimeMethod*))Component_GetComponentsInChildren_TisRuntimeObject_m58F7AC53741315DA8288813302360E0A36C78D25_gshared)(__this, p0, method);
}
// System.Void UnityEngine.Renderer::set_enabled(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void Renderer_set_enabled_m0933766657F2685BAAE3340B0A984C0E63925303 (Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * __this, bool p0, const RuntimeMethod* method);
// System.Void UnityEngine.Collider::set_enabled(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void Collider_set_enabled_mF84DE8B0C8CAF33ACDB7F29BC055D9C8CFACB57B (Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF * __this, bool p0, const RuntimeMethod* method);
// System.Void UnityEngine.Behaviour::set_enabled(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void Behaviour_set_enabled_m9755D3B17D7022D23D1E4C618BD9A6B66A5ADC6B (Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8 * __this, bool p0, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
extern "C" IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97 (MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 * __this, const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void DefaultInitializationErrorHandler::OnVuforiaInitializationError(Vuforia.VuforiaUnity/InitError)
extern "C" IL2CPP_METHOD_ATTR void DefaultInitializationErrorHandler_OnVuforiaInitializationError_m0F4B53613340C11BADBE8E7FADA57096A43F30C0 (DefaultInitializationErrorHandler_t7C0EE05C3D7BF5C7A141BC322D2F0B950B101D38 * __this, int32_t ___initError0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___initError0;
		if (!L_0)
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_1 = ___initError0;
		DefaultInitializationErrorHandler_SetErrorCode_m8D02B872B53162E5CEE1ABD461F59B4F1D642AFE(__this, L_1, /*hidden argument*/NULL);
		DefaultInitializationErrorHandler_SetErrorOccurred_m1C60E1BBE9B405868D52BD600246F46DF47B8578(__this, (bool)1, /*hidden argument*/NULL);
	}

IL_0011:
	{
		return;
	}
}
// System.Void DefaultInitializationErrorHandler::Awake()
extern "C" IL2CPP_METHOD_ATTR void DefaultInitializationErrorHandler_Awake_mC462A9A2FF6999FAD58B36658BA7F5F4CFEA2885 (DefaultInitializationErrorHandler_t7C0EE05C3D7BF5C7A141BC322D2F0B950B101D38 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DefaultInitializationErrorHandler_Awake_mC462A9A2FF6999FAD58B36658BA7F5F4CFEA2885_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(VuforiaRuntime_t12D46DC6B127017866AA832739B2B22B0612DC1D_il2cpp_TypeInfo_var);
		VuforiaRuntime_t12D46DC6B127017866AA832739B2B22B0612DC1D * L_0 = VuforiaRuntime_get_Instance_m09A801C6052F96463B0F330EE3F2453DFB329607(/*hidden argument*/NULL);
		Action_1_tAA7EF8692AA276A9B2E6353FC26F374339933EFF * L_1 = (Action_1_tAA7EF8692AA276A9B2E6353FC26F374339933EFF *)il2cpp_codegen_object_new(Action_1_tAA7EF8692AA276A9B2E6353FC26F374339933EFF_il2cpp_TypeInfo_var);
		Action_1__ctor_m93D264DDF8D63987A4D835C83F40D588CDCC86B8(L_1, __this, (intptr_t)((intptr_t)DefaultInitializationErrorHandler_OnVuforiaInitializationError_m0F4B53613340C11BADBE8E7FADA57096A43F30C0_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_m93D264DDF8D63987A4D835C83F40D588CDCC86B8_RuntimeMethod_var);
		NullCheck(L_0);
		VuforiaRuntime_RegisterVuforiaInitErrorCallback_m0DD342AE8B42646920AB2E96118805150FF5A68F(L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void DefaultInitializationErrorHandler::Start()
extern "C" IL2CPP_METHOD_ATTR void DefaultInitializationErrorHandler_Start_m1981DCC87B96E05271901E52DE67CDC113757383 (DefaultInitializationErrorHandler_t7C0EE05C3D7BF5C7A141BC322D2F0B950B101D38 * __this, const RuntimeMethod* method)
{
	{
		DefaultInitializationErrorHandler_SetupGUIStyles_m95161DC5F2ECD9341D49F9AF35D11B36E3FBB8E7(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void DefaultInitializationErrorHandler::OnGUI()
extern "C" IL2CPP_METHOD_ATTR void DefaultInitializationErrorHandler_OnGUI_m0BCBF01D8F93A0D5810B96D01A3C357333ED1305 (DefaultInitializationErrorHandler_t7C0EE05C3D7BF5C7A141BC322D2F0B950B101D38 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DefaultInitializationErrorHandler_OnGUI_m0BCBF01D8F93A0D5810B96D01A3C357333ED1305_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = __this->get_mErrorOccurred_5();
		if (!L_0)
		{
			goto IL_003b;
		}
	}
	{
		int32_t L_1 = Screen_get_width_m8ECCEF7FF17395D1237BC0193D7A6640A3FEEAD3(/*hidden argument*/NULL);
		int32_t L_2 = Screen_get_height_mF5B64EBC4CDE0EAAA5713C1452ED2CE475F25150(/*hidden argument*/NULL);
		Rect_t35B976DE901B5423C11705E156938EA27AB402CE  L_3;
		memset(&L_3, 0, sizeof(L_3));
		Rect__ctor_m50B92C75005C9C5A0D05E6E0EBB43AFAF7C66280((&L_3), (0.0f), (0.0f), (((float)((float)L_1))), (((float)((float)L_2))), /*hidden argument*/NULL);
		WindowFunction_t9AF05117863D95AA9F85D497A3B9B53216708100 * L_4 = (WindowFunction_t9AF05117863D95AA9F85D497A3B9B53216708100 *)il2cpp_codegen_object_new(WindowFunction_t9AF05117863D95AA9F85D497A3B9B53216708100_il2cpp_TypeInfo_var);
		WindowFunction__ctor_m216C357C45DF9A8ABE74056B8BDB1B7F94EE2D81(L_4, __this, (intptr_t)((intptr_t)DefaultInitializationErrorHandler_DrawWindowContent_m114AFA0267557CA2520A32E85061A4BB09F04978_RuntimeMethod_var), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t3E5CBC6B113E392EBBE1453DEF2B7CD020F345AA_il2cpp_TypeInfo_var);
		GUI_Window_mEB4F2621947A8A1140E495493A5B35DCF92E31C0(0, L_3, L_4, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, /*hidden argument*/NULL);
	}

IL_003b:
	{
		return;
	}
}
// System.Void DefaultInitializationErrorHandler::OnDestroy()
extern "C" IL2CPP_METHOD_ATTR void DefaultInitializationErrorHandler_OnDestroy_m788237090CDF21C5258502222D398EFC4F0A09FF (DefaultInitializationErrorHandler_t7C0EE05C3D7BF5C7A141BC322D2F0B950B101D38 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DefaultInitializationErrorHandler_OnDestroy_m788237090CDF21C5258502222D398EFC4F0A09FF_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(VuforiaRuntime_t12D46DC6B127017866AA832739B2B22B0612DC1D_il2cpp_TypeInfo_var);
		VuforiaRuntime_t12D46DC6B127017866AA832739B2B22B0612DC1D * L_0 = VuforiaRuntime_get_Instance_m09A801C6052F96463B0F330EE3F2453DFB329607(/*hidden argument*/NULL);
		Action_1_tAA7EF8692AA276A9B2E6353FC26F374339933EFF * L_1 = (Action_1_tAA7EF8692AA276A9B2E6353FC26F374339933EFF *)il2cpp_codegen_object_new(Action_1_tAA7EF8692AA276A9B2E6353FC26F374339933EFF_il2cpp_TypeInfo_var);
		Action_1__ctor_m93D264DDF8D63987A4D835C83F40D588CDCC86B8(L_1, __this, (intptr_t)((intptr_t)DefaultInitializationErrorHandler_OnVuforiaInitializationError_m0F4B53613340C11BADBE8E7FADA57096A43F30C0_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_m93D264DDF8D63987A4D835C83F40D588CDCC86B8_RuntimeMethod_var);
		NullCheck(L_0);
		VuforiaRuntime_UnregisterVuforiaInitErrorCallback_m07045CAF11270BE48936D22CDE99FB2F026329E3(L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void DefaultInitializationErrorHandler::DrawWindowContent(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void DefaultInitializationErrorHandler_DrawWindowContent_m114AFA0267557CA2520A32E85061A4BB09F04978 (DefaultInitializationErrorHandler_t7C0EE05C3D7BF5C7A141BC322D2F0B950B101D38 * __this, int32_t ___id0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DefaultInitializationErrorHandler_DrawWindowContent_m114AFA0267557CA2520A32E85061A4BB09F04978_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Rect_t35B976DE901B5423C11705E156938EA27AB402CE  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Rect_t35B976DE901B5423C11705E156938EA27AB402CE  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		int32_t L_0 = Screen_get_width_m8ECCEF7FF17395D1237BC0193D7A6640A3FEEAD3(/*hidden argument*/NULL);
		int32_t L_1 = Screen_get_height_mF5B64EBC4CDE0EAAA5713C1452ED2CE475F25150(/*hidden argument*/NULL);
		Rect__ctor_m50B92C75005C9C5A0D05E6E0EBB43AFAF7C66280((Rect_t35B976DE901B5423C11705E156938EA27AB402CE *)(&V_0), (0.0f), (0.0f), (((float)((float)L_0))), (((float)((float)((int32_t)((int32_t)L_1/(int32_t)8))))), /*hidden argument*/NULL);
		int32_t L_2 = Screen_get_height_mF5B64EBC4CDE0EAAA5713C1452ED2CE475F25150(/*hidden argument*/NULL);
		int32_t L_3 = Screen_get_width_m8ECCEF7FF17395D1237BC0193D7A6640A3FEEAD3(/*hidden argument*/NULL);
		int32_t L_4 = Screen_get_height_mF5B64EBC4CDE0EAAA5713C1452ED2CE475F25150(/*hidden argument*/NULL);
		Rect__ctor_m50B92C75005C9C5A0D05E6E0EBB43AFAF7C66280((Rect_t35B976DE901B5423C11705E156938EA27AB402CE *)(&V_1), (0.0f), (((float)((float)((int32_t)((int32_t)L_2/(int32_t)8))))), (((float)((float)L_3))), (((float)((float)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)((int32_t)L_4/(int32_t)8)), (int32_t)6))))), /*hidden argument*/NULL);
		int32_t L_5 = Screen_get_height_mF5B64EBC4CDE0EAAA5713C1452ED2CE475F25150(/*hidden argument*/NULL);
		int32_t L_6 = Screen_get_height_mF5B64EBC4CDE0EAAA5713C1452ED2CE475F25150(/*hidden argument*/NULL);
		int32_t L_7 = Screen_get_width_m8ECCEF7FF17395D1237BC0193D7A6640A3FEEAD3(/*hidden argument*/NULL);
		int32_t L_8 = Screen_get_height_mF5B64EBC4CDE0EAAA5713C1452ED2CE475F25150(/*hidden argument*/NULL);
		Rect_t35B976DE901B5423C11705E156938EA27AB402CE  L_9;
		memset(&L_9, 0, sizeof(L_9));
		Rect__ctor_m50B92C75005C9C5A0D05E6E0EBB43AFAF7C66280((&L_9), (0.0f), (((float)((float)((int32_t)il2cpp_codegen_subtract((int32_t)L_5, (int32_t)((int32_t)((int32_t)L_6/(int32_t)8))))))), (((float)((float)L_7))), (((float)((float)((int32_t)((int32_t)L_8/(int32_t)8))))), /*hidden argument*/NULL);
		Rect_t35B976DE901B5423C11705E156938EA27AB402CE  L_10 = V_0;
		GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * L_11 = __this->get_headerStyle_8();
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t3E5CBC6B113E392EBBE1453DEF2B7CD020F345AA_il2cpp_TypeInfo_var);
		GUI_Label_m283D6B1DD970038379FBB974BC5A45F87CA727B6(L_10, _stringLiteral0A0FAEEF2117767792A00F86536670A04B480323, L_11, /*hidden argument*/NULL);
		Rect_t35B976DE901B5423C11705E156938EA27AB402CE  L_12 = V_1;
		String_t* L_13 = __this->get_mErrorText_4();
		GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * L_14 = __this->get_bodyStyle_7();
		GUI_Label_m283D6B1DD970038379FBB974BC5A45F87CA727B6(L_12, L_13, L_14, /*hidden argument*/NULL);
		GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * L_15 = __this->get_footerStyle_9();
		bool L_16 = GUI_Button_mC39C9F8426A10930825737A6D63B7C8DDF24748B(L_9, _stringLiteralBBFA773E5A63A5EA58C9B6207E608CA0120E592A, L_15, /*hidden argument*/NULL);
		if (!L_16)
		{
			goto IL_00a3;
		}
	}
	{
		Application_Quit_mA005EB22CB989AC3794334754F15E1C0D2FF1C95(/*hidden argument*/NULL);
	}

IL_00a3:
	{
		return;
	}
}
// System.Void DefaultInitializationErrorHandler::SetErrorCode(Vuforia.VuforiaUnity/InitError)
extern "C" IL2CPP_METHOD_ATTR void DefaultInitializationErrorHandler_SetErrorCode_m8D02B872B53162E5CEE1ABD461F59B4F1D642AFE (DefaultInitializationErrorHandler_t7C0EE05C3D7BF5C7A141BC322D2F0B950B101D38 * __this, int32_t ___errorCode0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DefaultInitializationErrorHandler_SetErrorCode_m8D02B872B53162E5CEE1ABD461F59B4F1D642AFE_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		int32_t L_0 = ___errorCode0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)((int32_t)-10))))
		{
			case 0:
			{
				goto IL_0036;
			}
			case 1:
			{
				goto IL_00a3;
			}
			case 2:
			{
				goto IL_008b;
			}
			case 3:
			{
				goto IL_0071;
			}
			case 4:
			{
				goto IL_007e;
			}
			case 5:
			{
				goto IL_0056;
			}
			case 6:
			{
				goto IL_0046;
			}
			case 7:
			{
				goto IL_00c0;
			}
			case 8:
			{
				goto IL_00dc;
			}
			case 9:
			{
				goto IL_00e9;
			}
		}
	}
	{
		goto IL_00f4;
	}

IL_0036:
	{
		__this->set_mErrorText_4(_stringLiteral922A19D8476F24CEFB157C2DA69F9CA731E3045A);
		goto IL_00f4;
	}

IL_0046:
	{
		__this->set_mErrorText_4(_stringLiteralE051901EED152C2098713B06124991AA7D11FFCC);
		goto IL_00f4;
	}

IL_0056:
	{
		String_t* L_1 = DefaultInitializationErrorHandler_getKeyInfo_m2810070CDC373FC5667406EA32A1B060E067E2DC(__this, /*hidden argument*/NULL);
		String_t* L_2 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(_stringLiteral157E87C861F13A22AF3DFA90069304007ACABD9E, L_1, /*hidden argument*/NULL);
		__this->set_mErrorText_4(L_2);
		goto IL_00f4;
	}

IL_0071:
	{
		__this->set_mErrorText_4(_stringLiteral368855C3B48C6461C105F7AA11EBE1FD792BE6BF);
		goto IL_00f4;
	}

IL_007e:
	{
		__this->set_mErrorText_4(_stringLiteralEF377B931B216AE61345F4D7136A8873D40DCB6B);
		goto IL_00f4;
	}

IL_008b:
	{
		String_t* L_3 = DefaultInitializationErrorHandler_getKeyInfo_m2810070CDC373FC5667406EA32A1B060E067E2DC(__this, /*hidden argument*/NULL);
		String_t* L_4 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(_stringLiteral4C8A375D0F1708E37C1F10C81E8A8EADDCF1422F, L_3, /*hidden argument*/NULL);
		__this->set_mErrorText_4(L_4);
		goto IL_00f4;
	}

IL_00a3:
	{
		String_t* L_5 = DefaultInitializationErrorHandler_getKeyInfo_m2810070CDC373FC5667406EA32A1B060E067E2DC(__this, /*hidden argument*/NULL);
		String_t* L_6 = String_Concat_mF4626905368D6558695A823466A1AF65EADB9923(_stringLiteral9A0E3D30C6D98ED2A2095BC0AF35EECC4E78E1BF, L_5, _stringLiteralE1A26226E225524718652DAB2A25B6F6ED567B4E, /*hidden argument*/NULL);
		__this->set_mErrorText_4(L_6);
		goto IL_00f4;
	}

IL_00c0:
	{
		String_t* L_7 = Application_get_productName_m9F65580744751D3771DA955C0D947787F3F5E9A5(/*hidden argument*/NULL);
		String_t* L_8 = String_Concat_mF4626905368D6558695A823466A1AF65EADB9923(_stringLiteralF20D8C26DA74DE4466E64B5213AE19C080FADD5E, L_7, _stringLiteralA5C50226661674EB4C0B1740C606FA2451271989, /*hidden argument*/NULL);
		__this->set_mErrorText_4(L_8);
		goto IL_00f4;
	}

IL_00dc:
	{
		__this->set_mErrorText_4(_stringLiteral774E15162F27F67F38D0C5637BB389016A9F090D);
		goto IL_00f4;
	}

IL_00e9:
	{
		__this->set_mErrorText_4(_stringLiteralCEC5376077C18B47415F5EA601FF194999757256);
	}

IL_00f4:
	{
		RuntimeObject * L_9 = Box(InitError_t486F7D53F5B0B7943D4E22BE2D32F4913D4A0431_il2cpp_TypeInfo_var, (&___errorCode0));
		NullCheck(L_9);
		String_t* L_10 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_9);
		___errorCode0 = *(int32_t*)UnBox(L_9);
		NullCheck(L_10);
		String_t* L_11 = String_Replace_m970DFB0A280952FA7D3BA20AB7A8FB9F80CF6470(L_10, _stringLiteral53A0ACFAD59379B3E050338BF9F23CFC172EE787, _stringLiteralB858CB282617FB0956D960215C8E84D1CCF909C6, /*hidden argument*/NULL);
		String_t* L_12 = __this->get_mErrorText_4();
		String_t* L_13 = String_Concat_mDD2E38332DED3A8C088D38D78A0E0BEB5091DA64(_stringLiteral1561AEF8B532C2B1664689CD3DEB85C31F3B9692, L_11, _stringLiteralDADF5911397D06A03A60E28AE30A0F473FE2B810, L_12, /*hidden argument*/NULL);
		__this->set_mErrorText_4(L_13);
		String_t* L_14 = __this->get_mErrorText_4();
		NullCheck(L_14);
		String_t* L_15 = String_Replace_m970DFB0A280952FA7D3BA20AB7A8FB9F80CF6470(L_14, _stringLiteral1561AEF8B532C2B1664689CD3DEB85C31F3B9692, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, /*hidden argument*/NULL);
		NullCheck(L_15);
		String_t* L_16 = String_Replace_m970DFB0A280952FA7D3BA20AB7A8FB9F80CF6470(L_15, _stringLiteral7AB1A22C152A21E59C89CBA73DA7DCB91237992A, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, /*hidden argument*/NULL);
		V_0 = L_16;
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_17 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)4);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_18 = L_17;
		NullCheck(L_18);
		ArrayElementTypeCheck (L_18, _stringLiteral908E199B682ED6E6E7C82E2EC3BEBABD072C4298);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)_stringLiteral908E199B682ED6E6E7C82E2EC3BEBABD072C4298);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_19 = L_18;
		int32_t L_20 = ___errorCode0;
		int32_t L_21 = L_20;
		RuntimeObject * L_22 = Box(InitError_t486F7D53F5B0B7943D4E22BE2D32F4913D4A0431_il2cpp_TypeInfo_var, &L_21);
		NullCheck(L_19);
		ArrayElementTypeCheck (L_19, L_22);
		(L_19)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_22);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_23 = L_19;
		NullCheck(L_23);
		ArrayElementTypeCheck (L_23, _stringLiteral71853C6197A6A7F222DB0F1978C7CB232B87C5EE);
		(L_23)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)_stringLiteral71853C6197A6A7F222DB0F1978C7CB232B87C5EE);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_24 = L_23;
		String_t* L_25 = V_0;
		NullCheck(L_24);
		ArrayElementTypeCheck (L_24, L_25);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_25);
		String_t* L_26 = String_Concat_mB7BA84F13912303B2E5E40FBF0109E1A328ACA07(L_24, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogError_m3BCF9B78263152261565DCA9DB7D55F0C391ED29(L_26, /*hidden argument*/NULL);
		return;
	}
}
// System.Void DefaultInitializationErrorHandler::SetErrorOccurred(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void DefaultInitializationErrorHandler_SetErrorOccurred_m1C60E1BBE9B405868D52BD600246F46DF47B8578 (DefaultInitializationErrorHandler_t7C0EE05C3D7BF5C7A141BC322D2F0B950B101D38 * __this, bool ___errorOccurred0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___errorOccurred0;
		__this->set_mErrorOccurred_5(L_0);
		return;
	}
}
// System.String DefaultInitializationErrorHandler::getKeyInfo()
extern "C" IL2CPP_METHOD_ATTR String_t* DefaultInitializationErrorHandler_getKeyInfo_m2810070CDC373FC5667406EA32A1B060E067E2DC (DefaultInitializationErrorHandler_t7C0EE05C3D7BF5C7A141BC322D2F0B950B101D38 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DefaultInitializationErrorHandler_getKeyInfo_m2810070CDC373FC5667406EA32A1B060E067E2DC_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	String_t* V_1 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(VuforiaConfiguration_t389C464955859AB411F51B7950ACBAA6DCAFCD82_il2cpp_TypeInfo_var);
		VuforiaConfiguration_t389C464955859AB411F51B7950ACBAA6DCAFCD82 * L_0 = VuforiaConfiguration_get_Instance_mB41F218B6090038BBA15873FEB67D1132526914C(/*hidden argument*/NULL);
		NullCheck(L_0);
		GenericVuforiaConfiguration_t6FBB0036347CB878A938375817103A20CDD59064 * L_1 = VuforiaConfiguration_get_Vuforia_mAE9E228790390C66CF46E33B874B802D5AA8692D(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		String_t* L_2 = GenericVuforiaConfiguration_get_LicenseKey_m37C1FB7D6702C2A7990BE00F23F23EA6FE61B7D6(L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		String_t* L_3 = V_0;
		NullCheck(L_3);
		int32_t L_4 = String_get_Length_mD48C8A16A5CF1914F330DCE82D9BE15C3BEDD018(L_3, /*hidden argument*/NULL);
		if ((((int32_t)L_4) <= ((int32_t)((int32_t)10))))
		{
			goto IL_0073;
		}
	}
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_5 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)7);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_6 = L_5;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, _stringLiteral55B91F52D8FEC72F2D5BBC45A4C7444CF770FBBD);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)_stringLiteral55B91F52D8FEC72F2D5BBC45A4C7444CF770FBBD);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_7 = L_6;
		String_t* L_8 = V_0;
		NullCheck(L_8);
		int32_t L_9 = String_get_Length_mD48C8A16A5CF1914F330DCE82D9BE15C3BEDD018(L_8, /*hidden argument*/NULL);
		int32_t L_10 = L_9;
		RuntimeObject * L_11 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_10);
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_11);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_11);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_12 = L_7;
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, _stringLiteral044603D8671032519EBDE55C39570454D34DA7EF);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)_stringLiteral044603D8671032519EBDE55C39570454D34DA7EF);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_13 = L_12;
		String_t* L_14 = V_0;
		NullCheck(L_14);
		String_t* L_15 = String_Substring_mB593C0A320C683E6E47EFFC0A12B7A465E5E43BB(L_14, 0, 5, /*hidden argument*/NULL);
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, L_15);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_15);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_16 = L_13;
		NullCheck(L_16);
		ArrayElementTypeCheck (L_16, _stringLiteral661EA0491F0E7BED843FF5C5C2C407A8494948C2);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject *)_stringLiteral661EA0491F0E7BED843FF5C5C2C407A8494948C2);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_17 = L_16;
		String_t* L_18 = V_0;
		String_t* L_19 = V_0;
		NullCheck(L_19);
		int32_t L_20 = String_get_Length_mD48C8A16A5CF1914F330DCE82D9BE15C3BEDD018(L_19, /*hidden argument*/NULL);
		NullCheck(L_18);
		String_t* L_21 = String_Substring_mB593C0A320C683E6E47EFFC0A12B7A465E5E43BB(L_18, ((int32_t)il2cpp_codegen_subtract((int32_t)L_20, (int32_t)5)), 5, /*hidden argument*/NULL);
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, L_21);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(5), (RuntimeObject *)L_21);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_22 = L_17;
		NullCheck(L_22);
		ArrayElementTypeCheck (L_22, _stringLiteral3A2524B609E886EDA2270A78B1F1D5DF105A613E);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(6), (RuntimeObject *)_stringLiteral3A2524B609E886EDA2270A78B1F1D5DF105A613E);
		String_t* L_23 = String_Concat_mB7BA84F13912303B2E5E40FBF0109E1A328ACA07(L_22, /*hidden argument*/NULL);
		V_1 = L_23;
		goto IL_00a9;
	}

IL_0073:
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_24 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)5);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_25 = L_24;
		NullCheck(L_25);
		ArrayElementTypeCheck (L_25, _stringLiteral55B91F52D8FEC72F2D5BBC45A4C7444CF770FBBD);
		(L_25)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)_stringLiteral55B91F52D8FEC72F2D5BBC45A4C7444CF770FBBD);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_26 = L_25;
		String_t* L_27 = V_0;
		NullCheck(L_27);
		int32_t L_28 = String_get_Length_mD48C8A16A5CF1914F330DCE82D9BE15C3BEDD018(L_27, /*hidden argument*/NULL);
		int32_t L_29 = L_28;
		RuntimeObject * L_30 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_29);
		NullCheck(L_26);
		ArrayElementTypeCheck (L_26, L_30);
		(L_26)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_30);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_31 = L_26;
		NullCheck(L_31);
		ArrayElementTypeCheck (L_31, _stringLiteralE9D15606A3059B500ED24D58BAEE69DD511A6EC2);
		(L_31)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)_stringLiteralE9D15606A3059B500ED24D58BAEE69DD511A6EC2);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_32 = L_31;
		String_t* L_33 = V_0;
		NullCheck(L_32);
		ArrayElementTypeCheck (L_32, L_33);
		(L_32)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_33);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_34 = L_32;
		NullCheck(L_34);
		ArrayElementTypeCheck (L_34, _stringLiteral3A2524B609E886EDA2270A78B1F1D5DF105A613E);
		(L_34)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject *)_stringLiteral3A2524B609E886EDA2270A78B1F1D5DF105A613E);
		String_t* L_35 = String_Concat_mB7BA84F13912303B2E5E40FBF0109E1A328ACA07(L_34, /*hidden argument*/NULL);
		V_1 = L_35;
	}

IL_00a9:
	{
		String_t* L_36 = V_1;
		return L_36;
	}
}
// System.Void DefaultInitializationErrorHandler::SetupGUIStyles()
extern "C" IL2CPP_METHOD_ATTR void DefaultInitializationErrorHandler_SetupGUIStyles_m95161DC5F2ECD9341D49F9AF35D11B36E3FBB8E7 (DefaultInitializationErrorHandler_t7C0EE05C3D7BF5C7A141BC322D2F0B950B101D38 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DefaultInitializationErrorHandler_SetupGUIStyles_m95161DC5F2ECD9341D49F9AF35D11B36E3FBB8E7_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t G_B3_0 = 0;
	int32_t G_B6_0 = 0;
	{
		int32_t L_0 = Screen_get_width_m8ECCEF7FF17395D1237BC0193D7A6640A3FEEAD3(/*hidden argument*/NULL);
		int32_t L_1 = Screen_get_height_mF5B64EBC4CDE0EAAA5713C1452ED2CE475F25150(/*hidden argument*/NULL);
		if ((((int32_t)L_0) < ((int32_t)L_1)))
		{
			goto IL_0013;
		}
	}
	{
		int32_t L_2 = Screen_get_height_mF5B64EBC4CDE0EAAA5713C1452ED2CE475F25150(/*hidden argument*/NULL);
		G_B3_0 = L_2;
		goto IL_0018;
	}

IL_0013:
	{
		int32_t L_3 = Screen_get_width_m8ECCEF7FF17395D1237BC0193D7A6640A3FEEAD3(/*hidden argument*/NULL);
		G_B3_0 = L_3;
	}

IL_0018:
	{
		float L_4 = Screen_get_dpi_m92A755DE9E23ABA717B5594F4F52AFB0FBEAC1D3(/*hidden argument*/NULL);
		if ((((float)((float)((float)(((float)((float)G_B3_0)))/(float)L_4))) > ((float)(4.0f))))
		{
			goto IL_0029;
		}
	}
	{
		G_B6_0 = 1;
		goto IL_002a;
	}

IL_0029:
	{
		G_B6_0 = 2;
	}

IL_002a:
	{
		V_0 = G_B6_0;
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_5 = Color_get_white_mE7F3AC4FF0D6F35E48049C73116A222CBE96D905(/*hidden argument*/NULL);
		Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * L_6 = DefaultInitializationErrorHandler_CreateSinglePixelTexture_m314E1B3B003A6F0253FD1A13070B93BCE6415AD6(__this, L_5, /*hidden argument*/NULL);
		__this->set_bodyTexture_10(L_6);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		float L_7 = Mathf_InverseLerp_m7054CDF25056E9B27D2467F91C95D628508F1F31((0.0f), (255.0f), (220.0f), /*hidden argument*/NULL);
		float L_8 = Mathf_InverseLerp_m7054CDF25056E9B27D2467F91C95D628508F1F31((0.0f), (255.0f), (220.0f), /*hidden argument*/NULL);
		float L_9 = Mathf_InverseLerp_m7054CDF25056E9B27D2467F91C95D628508F1F31((0.0f), (255.0f), (220.0f), /*hidden argument*/NULL);
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_10;
		memset(&L_10, 0, sizeof(L_10));
		Color__ctor_mC9AEEB3931D5B8C37483A884DD8EB40DC8946369((&L_10), L_7, L_8, L_9, /*hidden argument*/NULL);
		Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * L_11 = DefaultInitializationErrorHandler_CreateSinglePixelTexture_m314E1B3B003A6F0253FD1A13070B93BCE6415AD6(__this, L_10, /*hidden argument*/NULL);
		__this->set_headerTexture_11(L_11);
		float L_12 = Mathf_InverseLerp_m7054CDF25056E9B27D2467F91C95D628508F1F31((0.0f), (255.0f), (35.0f), /*hidden argument*/NULL);
		float L_13 = Mathf_InverseLerp_m7054CDF25056E9B27D2467F91C95D628508F1F31((0.0f), (255.0f), (178.0f), /*hidden argument*/NULL);
		float L_14 = Mathf_InverseLerp_m7054CDF25056E9B27D2467F91C95D628508F1F31((0.0f), (255.0f), (0.0f), /*hidden argument*/NULL);
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_15;
		memset(&L_15, 0, sizeof(L_15));
		Color__ctor_mC9AEEB3931D5B8C37483A884DD8EB40DC8946369((&L_15), L_12, L_13, L_14, /*hidden argument*/NULL);
		Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * L_16 = DefaultInitializationErrorHandler_CreateSinglePixelTexture_m314E1B3B003A6F0253FD1A13070B93BCE6415AD6(__this, L_15, /*hidden argument*/NULL);
		__this->set_footerTexture_12(L_16);
		GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * L_17 = (GUIStyle_t671F175A201A19166385EE3392292A5F50070572 *)il2cpp_codegen_object_new(GUIStyle_t671F175A201A19166385EE3392292A5F50070572_il2cpp_TypeInfo_var);
		GUIStyle__ctor_m8AA3D5AA506A252687923D0DA80741862AA83805(L_17, /*hidden argument*/NULL);
		__this->set_bodyStyle_7(L_17);
		GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * L_18 = __this->get_bodyStyle_7();
		NullCheck(L_18);
		GUIStyleState_t2AA5CB82EB2571B0496D1F0B9D29D2B8D8B1E7E5 * L_19 = GUIStyle_get_normal_mC5CB22EED8113DEC86C54FB42F757B635D09DD2F(L_18, /*hidden argument*/NULL);
		Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * L_20 = __this->get_bodyTexture_10();
		NullCheck(L_19);
		GUIStyleState_set_background_m1BB0CD97092DE9CB40908A8061068D83FB2655AF(L_19, L_20, /*hidden argument*/NULL);
		GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * L_21 = __this->get_bodyStyle_7();
		Font_t1EDE54AF557272BE314EB4B40EFA50CEB353CA26 * L_22 = Resources_GetBuiltinResource_TisFont_t1EDE54AF557272BE314EB4B40EFA50CEB353CA26_mEECDBF58A9BE0C87D23275A7997B2445D783E371(_stringLiteralAD01E3847AA5918933113DC21A22AF4AD31DD4B7, /*hidden argument*/Resources_GetBuiltinResource_TisFont_t1EDE54AF557272BE314EB4B40EFA50CEB353CA26_mEECDBF58A9BE0C87D23275A7997B2445D783E371_RuntimeMethod_var);
		NullCheck(L_21);
		GUIStyle_set_font_m348ACE92DE82C381C7AFE216029DB8D87F47E0A0(L_21, L_22, /*hidden argument*/NULL);
		GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * L_23 = __this->get_bodyStyle_7();
		int32_t L_24 = V_0;
		float L_25 = Screen_get_dpi_m92A755DE9E23ABA717B5594F4F52AFB0FBEAC1D3(/*hidden argument*/NULL);
		NullCheck(L_23);
		GUIStyle_set_fontSize_mA9F9F916A9BC3B81CFEE7460966FFD1E6B67F45F(L_23, (((int32_t)((int32_t)((float)((float)((float)il2cpp_codegen_multiply((float)(((float)((float)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)18), (int32_t)L_24))))), (float)L_25))/(float)(160.0f)))))), /*hidden argument*/NULL);
		GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * L_26 = __this->get_bodyStyle_7();
		NullCheck(L_26);
		GUIStyleState_t2AA5CB82EB2571B0496D1F0B9D29D2B8D8B1E7E5 * L_27 = GUIStyle_get_normal_mC5CB22EED8113DEC86C54FB42F757B635D09DD2F(L_26, /*hidden argument*/NULL);
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_28 = Color_get_black_mEB3C91F45F8AA7E4842238DFCC578BB322723DAF(/*hidden argument*/NULL);
		NullCheck(L_27);
		GUIStyleState_set_textColor_m2B235845A292C22ABEDEFBB2FD798DEB4E104983(L_27, L_28, /*hidden argument*/NULL);
		GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * L_29 = __this->get_bodyStyle_7();
		NullCheck(L_29);
		GUIStyle_set_wordWrap_mB35DAD8BA109B812A2FCAED339BC5C6D7C3850C1(L_29, (bool)1, /*hidden argument*/NULL);
		GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * L_30 = __this->get_bodyStyle_7();
		NullCheck(L_30);
		GUIStyle_set_alignment_m80647E2DCB359B9521A6D8D53EA457E2648488CF(L_30, 4, /*hidden argument*/NULL);
		GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * L_31 = __this->get_bodyStyle_7();
		RectOffset_tED44B1176E93501050480416699D1F11BAE8C87A * L_32 = (RectOffset_tED44B1176E93501050480416699D1F11BAE8C87A *)il2cpp_codegen_object_new(RectOffset_tED44B1176E93501050480416699D1F11BAE8C87A_il2cpp_TypeInfo_var);
		RectOffset__ctor_mF2A621DBA17A10660FEBE6237ACF4904DA6F9F29(L_32, ((int32_t)40), ((int32_t)40), 0, 0, /*hidden argument*/NULL);
		NullCheck(L_31);
		GUIStyle_set_padding_m125FFFE385BFA7D60E4D9D822053DE9508A7A465(L_31, L_32, /*hidden argument*/NULL);
		GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * L_33 = __this->get_bodyStyle_7();
		GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * L_34 = (GUIStyle_t671F175A201A19166385EE3392292A5F50070572 *)il2cpp_codegen_object_new(GUIStyle_t671F175A201A19166385EE3392292A5F50070572_il2cpp_TypeInfo_var);
		GUIStyle__ctor_m64098019A1065381E9909C513D3B8CA4617EF168(L_34, L_33, /*hidden argument*/NULL);
		__this->set_headerStyle_8(L_34);
		GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * L_35 = __this->get_headerStyle_8();
		NullCheck(L_35);
		GUIStyleState_t2AA5CB82EB2571B0496D1F0B9D29D2B8D8B1E7E5 * L_36 = GUIStyle_get_normal_mC5CB22EED8113DEC86C54FB42F757B635D09DD2F(L_35, /*hidden argument*/NULL);
		Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * L_37 = __this->get_headerTexture_11();
		NullCheck(L_36);
		GUIStyleState_set_background_m1BB0CD97092DE9CB40908A8061068D83FB2655AF(L_36, L_37, /*hidden argument*/NULL);
		GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * L_38 = __this->get_headerStyle_8();
		int32_t L_39 = V_0;
		float L_40 = Screen_get_dpi_m92A755DE9E23ABA717B5594F4F52AFB0FBEAC1D3(/*hidden argument*/NULL);
		NullCheck(L_38);
		GUIStyle_set_fontSize_mA9F9F916A9BC3B81CFEE7460966FFD1E6B67F45F(L_38, (((int32_t)((int32_t)((float)((float)((float)il2cpp_codegen_multiply((float)(((float)((float)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)24), (int32_t)L_39))))), (float)L_40))/(float)(160.0f)))))), /*hidden argument*/NULL);
		GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * L_41 = __this->get_bodyStyle_7();
		GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * L_42 = (GUIStyle_t671F175A201A19166385EE3392292A5F50070572 *)il2cpp_codegen_object_new(GUIStyle_t671F175A201A19166385EE3392292A5F50070572_il2cpp_TypeInfo_var);
		GUIStyle__ctor_m64098019A1065381E9909C513D3B8CA4617EF168(L_42, L_41, /*hidden argument*/NULL);
		__this->set_footerStyle_9(L_42);
		GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * L_43 = __this->get_footerStyle_9();
		NullCheck(L_43);
		GUIStyleState_t2AA5CB82EB2571B0496D1F0B9D29D2B8D8B1E7E5 * L_44 = GUIStyle_get_normal_mC5CB22EED8113DEC86C54FB42F757B635D09DD2F(L_43, /*hidden argument*/NULL);
		Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * L_45 = __this->get_footerTexture_12();
		NullCheck(L_44);
		GUIStyleState_set_background_m1BB0CD97092DE9CB40908A8061068D83FB2655AF(L_44, L_45, /*hidden argument*/NULL);
		GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * L_46 = __this->get_footerStyle_9();
		NullCheck(L_46);
		GUIStyleState_t2AA5CB82EB2571B0496D1F0B9D29D2B8D8B1E7E5 * L_47 = GUIStyle_get_normal_mC5CB22EED8113DEC86C54FB42F757B635D09DD2F(L_46, /*hidden argument*/NULL);
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_48 = Color_get_white_mE7F3AC4FF0D6F35E48049C73116A222CBE96D905(/*hidden argument*/NULL);
		NullCheck(L_47);
		GUIStyleState_set_textColor_m2B235845A292C22ABEDEFBB2FD798DEB4E104983(L_47, L_48, /*hidden argument*/NULL);
		GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * L_49 = __this->get_footerStyle_9();
		int32_t L_50 = V_0;
		float L_51 = Screen_get_dpi_m92A755DE9E23ABA717B5594F4F52AFB0FBEAC1D3(/*hidden argument*/NULL);
		NullCheck(L_49);
		GUIStyle_set_fontSize_mA9F9F916A9BC3B81CFEE7460966FFD1E6B67F45F(L_49, (((int32_t)((int32_t)((float)((float)((float)il2cpp_codegen_multiply((float)(((float)((float)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)28), (int32_t)L_50))))), (float)L_51))/(float)(160.0f)))))), /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Texture2D DefaultInitializationErrorHandler::CreateSinglePixelTexture(UnityEngine.Color)
extern "C" IL2CPP_METHOD_ATTR Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * DefaultInitializationErrorHandler_CreateSinglePixelTexture_m314E1B3B003A6F0253FD1A13070B93BCE6415AD6 (DefaultInitializationErrorHandler_t7C0EE05C3D7BF5C7A141BC322D2F0B950B101D38 * __this, Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___color0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DefaultInitializationErrorHandler_CreateSinglePixelTexture_m314E1B3B003A6F0253FD1A13070B93BCE6415AD6_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * L_0 = (Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C *)il2cpp_codegen_object_new(Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C_il2cpp_TypeInfo_var);
		Texture2D__ctor_m22561E039BC96019757E6B2427BE09734AE2C44A(L_0, 1, 1, 5, (bool)0, /*hidden argument*/NULL);
		Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * L_1 = L_0;
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_2 = ___color0;
		NullCheck(L_1);
		Texture2D_SetPixel_m8BE87C152447B812D06CB894B3570269CC2DE7C3(L_1, 0, 0, L_2, /*hidden argument*/NULL);
		Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * L_3 = L_1;
		NullCheck(L_3);
		Texture2D_Apply_m0F3B4A4B1B89E44E2AF60ABDEFAA18D93735B5CA(L_3, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Void DefaultInitializationErrorHandler::.ctor()
extern "C" IL2CPP_METHOD_ATTR void DefaultInitializationErrorHandler__ctor_m63E4F5C46CEF6A1D36DB1999995CFAF271895876 (DefaultInitializationErrorHandler_t7C0EE05C3D7BF5C7A141BC322D2F0B950B101D38 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DefaultInitializationErrorHandler__ctor_m63E4F5C46CEF6A1D36DB1999995CFAF271895876_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_mErrorText_4(_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		VuforiaMonoBehaviour__ctor_mB7B4A9CA2FA82920C82606F093597594EF3F9F91(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void DefaultTrackableEventHandler::Start()
extern "C" IL2CPP_METHOD_ATTR void DefaultTrackableEventHandler_Start_mF3B83475AAE698302E8A037B49DA2297894216DE (DefaultTrackableEventHandler_t6997E0A19AC0FABC165FB7264F57DF2EDF4E8022 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DefaultTrackableEventHandler_Start_mF3B83475AAE698302E8A037B49DA2297894216DE_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		TrackableBehaviour_t579D75AAFEF7B2D69F4B68931D5A58074E80A7E4 * L_0 = Component_GetComponent_TisTrackableBehaviour_t579D75AAFEF7B2D69F4B68931D5A58074E80A7E4_m81E3785465C5B36522D217B045A33CD65B28B229(__this, /*hidden argument*/Component_GetComponent_TisTrackableBehaviour_t579D75AAFEF7B2D69F4B68931D5A58074E80A7E4_m81E3785465C5B36522D217B045A33CD65B28B229_RuntimeMethod_var);
		__this->set_mTrackableBehaviour_4(L_0);
		TrackableBehaviour_t579D75AAFEF7B2D69F4B68931D5A58074E80A7E4 * L_1 = __this->get_mTrackableBehaviour_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_2 = Object_op_Implicit_m8B2A44B4B1406ED346D1AE6D962294FD58D0D534(L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0025;
		}
	}
	{
		TrackableBehaviour_t579D75AAFEF7B2D69F4B68931D5A58074E80A7E4 * L_3 = __this->get_mTrackableBehaviour_4();
		NullCheck(L_3);
		TrackableBehaviour_RegisterTrackableEventHandler_m7435CD138D1B0794CD09A2E7DFAB9C5D9C1CB5ED(L_3, __this, /*hidden argument*/NULL);
	}

IL_0025:
	{
		return;
	}
}
// System.Void DefaultTrackableEventHandler::OnDestroy()
extern "C" IL2CPP_METHOD_ATTR void DefaultTrackableEventHandler_OnDestroy_m5E62349849150C8A7D3805322622A958505710AC (DefaultTrackableEventHandler_t6997E0A19AC0FABC165FB7264F57DF2EDF4E8022 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DefaultTrackableEventHandler_OnDestroy_m5E62349849150C8A7D3805322622A958505710AC_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		TrackableBehaviour_t579D75AAFEF7B2D69F4B68931D5A58074E80A7E4 * L_0 = __this->get_mTrackableBehaviour_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Implicit_m8B2A44B4B1406ED346D1AE6D962294FD58D0D534(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		TrackableBehaviour_t579D75AAFEF7B2D69F4B68931D5A58074E80A7E4 * L_2 = __this->get_mTrackableBehaviour_4();
		NullCheck(L_2);
		TrackableBehaviour_UnregisterTrackableEventHandler_m64B4269C6DBD319C750932217B98F21DDA90B0FD(L_2, __this, /*hidden argument*/NULL);
	}

IL_001a:
	{
		return;
	}
}
// System.Void DefaultTrackableEventHandler::OnTrackableStateChanged(Vuforia.TrackableBehaviour/Status,Vuforia.TrackableBehaviour/Status)
extern "C" IL2CPP_METHOD_ATTR void DefaultTrackableEventHandler_OnTrackableStateChanged_m92AA21345F1F7A16C0DEE34FA82FB4882A1A6BAD (DefaultTrackableEventHandler_t6997E0A19AC0FABC165FB7264F57DF2EDF4E8022 * __this, int32_t ___previousStatus0, int32_t ___newStatus1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DefaultTrackableEventHandler_OnTrackableStateChanged_m92AA21345F1F7A16C0DEE34FA82FB4882A1A6BAD_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___previousStatus0;
		__this->set_m_PreviousStatus_5(L_0);
		int32_t L_1 = ___newStatus1;
		__this->set_m_NewStatus_6(L_1);
		int32_t L_2 = ___newStatus1;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_3 = ___newStatus1;
		if ((((int32_t)L_3) == ((int32_t)3)))
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_4 = ___newStatus1;
		if ((!(((uint32_t)L_4) == ((uint32_t)4))))
		{
			goto IL_0040;
		}
	}

IL_001a:
	{
		TrackableBehaviour_t579D75AAFEF7B2D69F4B68931D5A58074E80A7E4 * L_5 = __this->get_mTrackableBehaviour_4();
		NullCheck(L_5);
		String_t* L_6 = TrackableBehaviour_get_TrackableName_m7D1E2DB1F426F533F5894A3020D807958BBE4EFF(L_5, /*hidden argument*/NULL);
		String_t* L_7 = String_Concat_mF4626905368D6558695A823466A1AF65EADB9923(_stringLiteralE53A10BF18D590A4D354358810000744DAF6ACFD, L_6, _stringLiteral74D8330FF7EE2BF01889D92730C9FB1CC78C788F, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(L_7, /*hidden argument*/NULL);
		VirtActionInvoker0::Invoke(7 /* System.Void DefaultTrackableEventHandler::OnTrackingFound() */, __this);
		return;
	}

IL_0040:
	{
		int32_t L_8 = ___previousStatus0;
		if ((!(((uint32_t)L_8) == ((uint32_t)3))))
		{
			goto IL_006d;
		}
	}
	{
		int32_t L_9 = ___newStatus1;
		if (L_9)
		{
			goto IL_006d;
		}
	}
	{
		TrackableBehaviour_t579D75AAFEF7B2D69F4B68931D5A58074E80A7E4 * L_10 = __this->get_mTrackableBehaviour_4();
		NullCheck(L_10);
		String_t* L_11 = TrackableBehaviour_get_TrackableName_m7D1E2DB1F426F533F5894A3020D807958BBE4EFF(L_10, /*hidden argument*/NULL);
		String_t* L_12 = String_Concat_mF4626905368D6558695A823466A1AF65EADB9923(_stringLiteralE53A10BF18D590A4D354358810000744DAF6ACFD, L_11, _stringLiteralD8F3DAF68846C2D999956AB061674C6E36560643, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(L_12, /*hidden argument*/NULL);
		VirtActionInvoker0::Invoke(8 /* System.Void DefaultTrackableEventHandler::OnTrackingLost() */, __this);
		return;
	}

IL_006d:
	{
		VirtActionInvoker0::Invoke(8 /* System.Void DefaultTrackableEventHandler::OnTrackingLost() */, __this);
		return;
	}
}
// System.Void DefaultTrackableEventHandler::OnTrackingFound()
extern "C" IL2CPP_METHOD_ATTR void DefaultTrackableEventHandler_OnTrackingFound_m4A4E9931C2178216A864B8E341B6A923711EE8B1 (DefaultTrackableEventHandler_t6997E0A19AC0FABC165FB7264F57DF2EDF4E8022 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DefaultTrackableEventHandler_OnTrackingFound_m4A4E9931C2178216A864B8E341B6A923711EE8B1_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ColliderU5BU5D_t2814A7DE0594A145A9E2C23548AF5B6E9DF8402A* V_0 = NULL;
	CanvasU5BU5D_t9A0DED7A1C92D7DCBC82864C92A06CA527E72E60* V_1 = NULL;
	RendererU5BU5D_tF85DA3E8016B6D367A055C3BF54C575FDA7DAEEF* V_2 = NULL;
	int32_t V_3 = 0;
	ColliderU5BU5D_t2814A7DE0594A145A9E2C23548AF5B6E9DF8402A* V_4 = NULL;
	CanvasU5BU5D_t9A0DED7A1C92D7DCBC82864C92A06CA527E72E60* V_5 = NULL;
	{
		RendererU5BU5D_tF85DA3E8016B6D367A055C3BF54C575FDA7DAEEF* L_0 = Component_GetComponentsInChildren_TisRenderer_t0556D67DD582620D1F495627EDE30D03284151F4_mE634C4CC0E00DB6D11503C88000677CD2A806228(__this, (bool)1, /*hidden argument*/Component_GetComponentsInChildren_TisRenderer_t0556D67DD582620D1F495627EDE30D03284151F4_mE634C4CC0E00DB6D11503C88000677CD2A806228_RuntimeMethod_var);
		ColliderU5BU5D_t2814A7DE0594A145A9E2C23548AF5B6E9DF8402A* L_1 = Component_GetComponentsInChildren_TisCollider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF_mB7DEF049AA2B4E9D96FAE153C296F52B2ACCF244(__this, (bool)1, /*hidden argument*/Component_GetComponentsInChildren_TisCollider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF_mB7DEF049AA2B4E9D96FAE153C296F52B2ACCF244_RuntimeMethod_var);
		V_0 = L_1;
		CanvasU5BU5D_t9A0DED7A1C92D7DCBC82864C92A06CA527E72E60* L_2 = Component_GetComponentsInChildren_TisCanvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591_m0DCB451DDA382B4BF6D882CBA43DBDD200C1FCF2(__this, (bool)1, /*hidden argument*/Component_GetComponentsInChildren_TisCanvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591_m0DCB451DDA382B4BF6D882CBA43DBDD200C1FCF2_RuntimeMethod_var);
		V_1 = L_2;
		V_2 = L_0;
		V_3 = 0;
		goto IL_0029;
	}

IL_001c:
	{
		RendererU5BU5D_tF85DA3E8016B6D367A055C3BF54C575FDA7DAEEF* L_3 = V_2;
		int32_t L_4 = V_3;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		NullCheck(L_6);
		Renderer_set_enabled_m0933766657F2685BAAE3340B0A984C0E63925303(L_6, (bool)1, /*hidden argument*/NULL);
		int32_t L_7 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)1));
	}

IL_0029:
	{
		int32_t L_8 = V_3;
		RendererU5BU5D_tF85DA3E8016B6D367A055C3BF54C575FDA7DAEEF* L_9 = V_2;
		NullCheck(L_9);
		if ((((int32_t)L_8) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_9)->max_length)))))))
		{
			goto IL_001c;
		}
	}
	{
		ColliderU5BU5D_t2814A7DE0594A145A9E2C23548AF5B6E9DF8402A* L_10 = V_0;
		V_4 = L_10;
		V_3 = 0;
		goto IL_0044;
	}

IL_0036:
	{
		ColliderU5BU5D_t2814A7DE0594A145A9E2C23548AF5B6E9DF8402A* L_11 = V_4;
		int32_t L_12 = V_3;
		NullCheck(L_11);
		int32_t L_13 = L_12;
		Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF * L_14 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		NullCheck(L_14);
		Collider_set_enabled_mF84DE8B0C8CAF33ACDB7F29BC055D9C8CFACB57B(L_14, (bool)1, /*hidden argument*/NULL);
		int32_t L_15 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_15, (int32_t)1));
	}

IL_0044:
	{
		int32_t L_16 = V_3;
		ColliderU5BU5D_t2814A7DE0594A145A9E2C23548AF5B6E9DF8402A* L_17 = V_4;
		NullCheck(L_17);
		if ((((int32_t)L_16) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_17)->max_length)))))))
		{
			goto IL_0036;
		}
	}
	{
		CanvasU5BU5D_t9A0DED7A1C92D7DCBC82864C92A06CA527E72E60* L_18 = V_1;
		V_5 = L_18;
		V_3 = 0;
		goto IL_0060;
	}

IL_0052:
	{
		CanvasU5BU5D_t9A0DED7A1C92D7DCBC82864C92A06CA527E72E60* L_19 = V_5;
		int32_t L_20 = V_3;
		NullCheck(L_19);
		int32_t L_21 = L_20;
		Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * L_22 = (L_19)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		NullCheck(L_22);
		Behaviour_set_enabled_m9755D3B17D7022D23D1E4C618BD9A6B66A5ADC6B(L_22, (bool)1, /*hidden argument*/NULL);
		int32_t L_23 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_23, (int32_t)1));
	}

IL_0060:
	{
		int32_t L_24 = V_3;
		CanvasU5BU5D_t9A0DED7A1C92D7DCBC82864C92A06CA527E72E60* L_25 = V_5;
		NullCheck(L_25);
		if ((((int32_t)L_24) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_25)->max_length)))))))
		{
			goto IL_0052;
		}
	}
	{
		return;
	}
}
// System.Void DefaultTrackableEventHandler::OnTrackingLost()
extern "C" IL2CPP_METHOD_ATTR void DefaultTrackableEventHandler_OnTrackingLost_m26ACF13397E907EF90414CAEF8FEEDB3324C4E95 (DefaultTrackableEventHandler_t6997E0A19AC0FABC165FB7264F57DF2EDF4E8022 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DefaultTrackableEventHandler_OnTrackingLost_m26ACF13397E907EF90414CAEF8FEEDB3324C4E95_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ColliderU5BU5D_t2814A7DE0594A145A9E2C23548AF5B6E9DF8402A* V_0 = NULL;
	CanvasU5BU5D_t9A0DED7A1C92D7DCBC82864C92A06CA527E72E60* V_1 = NULL;
	RendererU5BU5D_tF85DA3E8016B6D367A055C3BF54C575FDA7DAEEF* V_2 = NULL;
	int32_t V_3 = 0;
	ColliderU5BU5D_t2814A7DE0594A145A9E2C23548AF5B6E9DF8402A* V_4 = NULL;
	CanvasU5BU5D_t9A0DED7A1C92D7DCBC82864C92A06CA527E72E60* V_5 = NULL;
	{
		RendererU5BU5D_tF85DA3E8016B6D367A055C3BF54C575FDA7DAEEF* L_0 = Component_GetComponentsInChildren_TisRenderer_t0556D67DD582620D1F495627EDE30D03284151F4_mE634C4CC0E00DB6D11503C88000677CD2A806228(__this, (bool)1, /*hidden argument*/Component_GetComponentsInChildren_TisRenderer_t0556D67DD582620D1F495627EDE30D03284151F4_mE634C4CC0E00DB6D11503C88000677CD2A806228_RuntimeMethod_var);
		ColliderU5BU5D_t2814A7DE0594A145A9E2C23548AF5B6E9DF8402A* L_1 = Component_GetComponentsInChildren_TisCollider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF_mB7DEF049AA2B4E9D96FAE153C296F52B2ACCF244(__this, (bool)1, /*hidden argument*/Component_GetComponentsInChildren_TisCollider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF_mB7DEF049AA2B4E9D96FAE153C296F52B2ACCF244_RuntimeMethod_var);
		V_0 = L_1;
		CanvasU5BU5D_t9A0DED7A1C92D7DCBC82864C92A06CA527E72E60* L_2 = Component_GetComponentsInChildren_TisCanvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591_m0DCB451DDA382B4BF6D882CBA43DBDD200C1FCF2(__this, (bool)1, /*hidden argument*/Component_GetComponentsInChildren_TisCanvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591_m0DCB451DDA382B4BF6D882CBA43DBDD200C1FCF2_RuntimeMethod_var);
		V_1 = L_2;
		V_2 = L_0;
		V_3 = 0;
		goto IL_0029;
	}

IL_001c:
	{
		RendererU5BU5D_tF85DA3E8016B6D367A055C3BF54C575FDA7DAEEF* L_3 = V_2;
		int32_t L_4 = V_3;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		NullCheck(L_6);
		Renderer_set_enabled_m0933766657F2685BAAE3340B0A984C0E63925303(L_6, (bool)0, /*hidden argument*/NULL);
		int32_t L_7 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)1));
	}

IL_0029:
	{
		int32_t L_8 = V_3;
		RendererU5BU5D_tF85DA3E8016B6D367A055C3BF54C575FDA7DAEEF* L_9 = V_2;
		NullCheck(L_9);
		if ((((int32_t)L_8) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_9)->max_length)))))))
		{
			goto IL_001c;
		}
	}
	{
		ColliderU5BU5D_t2814A7DE0594A145A9E2C23548AF5B6E9DF8402A* L_10 = V_0;
		V_4 = L_10;
		V_3 = 0;
		goto IL_0044;
	}

IL_0036:
	{
		ColliderU5BU5D_t2814A7DE0594A145A9E2C23548AF5B6E9DF8402A* L_11 = V_4;
		int32_t L_12 = V_3;
		NullCheck(L_11);
		int32_t L_13 = L_12;
		Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF * L_14 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		NullCheck(L_14);
		Collider_set_enabled_mF84DE8B0C8CAF33ACDB7F29BC055D9C8CFACB57B(L_14, (bool)0, /*hidden argument*/NULL);
		int32_t L_15 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_15, (int32_t)1));
	}

IL_0044:
	{
		int32_t L_16 = V_3;
		ColliderU5BU5D_t2814A7DE0594A145A9E2C23548AF5B6E9DF8402A* L_17 = V_4;
		NullCheck(L_17);
		if ((((int32_t)L_16) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_17)->max_length)))))))
		{
			goto IL_0036;
		}
	}
	{
		CanvasU5BU5D_t9A0DED7A1C92D7DCBC82864C92A06CA527E72E60* L_18 = V_1;
		V_5 = L_18;
		V_3 = 0;
		goto IL_0060;
	}

IL_0052:
	{
		CanvasU5BU5D_t9A0DED7A1C92D7DCBC82864C92A06CA527E72E60* L_19 = V_5;
		int32_t L_20 = V_3;
		NullCheck(L_19);
		int32_t L_21 = L_20;
		Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * L_22 = (L_19)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		NullCheck(L_22);
		Behaviour_set_enabled_m9755D3B17D7022D23D1E4C618BD9A6B66A5ADC6B(L_22, (bool)0, /*hidden argument*/NULL);
		int32_t L_23 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_23, (int32_t)1));
	}

IL_0060:
	{
		int32_t L_24 = V_3;
		CanvasU5BU5D_t9A0DED7A1C92D7DCBC82864C92A06CA527E72E60* L_25 = V_5;
		NullCheck(L_25);
		if ((((int32_t)L_24) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_25)->max_length)))))))
		{
			goto IL_0052;
		}
	}
	{
		return;
	}
}
// System.Void DefaultTrackableEventHandler::.ctor()
extern "C" IL2CPP_METHOD_ATTR void DefaultTrackableEventHandler__ctor_m3C2014411A75507754273235A44F881C354C2B6C (DefaultTrackableEventHandler_t6997E0A19AC0FABC165FB7264F57DF2EDF4E8022 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // Modified by PostBuild.cs
