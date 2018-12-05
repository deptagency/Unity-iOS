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
struct DefaultInitializationErrorHandler_t3109936861;
// DefaultTrackableEventHandler
struct DefaultTrackableEventHandler_t1588957063;
// System.Action`1<UnityEngine.Font>
struct Action_1_t2129269699;
// System.Action`1<Vuforia.VuforiaUnity/InitError>
struct Action_1_t3593217305;
// System.AsyncCallback
struct AsyncCallback_t3962456242;
// System.Char[]
struct CharU5BU5D_t3528271667;
// System.Collections.Generic.List`1<Vuforia.ITrackableEventHandler>
struct List_1_t2968050330;
// System.DelegateData
struct DelegateData_t1677132599;
// System.Delegate[]
struct DelegateU5BU5D_t1703627840;
// System.IAsyncResult
struct IAsyncResult_t767004451;
// System.Object[]
struct ObjectU5BU5D_t2843939325;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.String
struct String_t;
// System.Void
struct Void_t1185182177;
// UnityEngine.Behaviour
struct Behaviour_t1437897464;
// UnityEngine.Canvas
struct Canvas_t3310196443;
// UnityEngine.Canvas/WillRenderCanvases
struct WillRenderCanvases_t3309123499;
// UnityEngine.Canvas[]
struct CanvasU5BU5D_t682926938;
// UnityEngine.Collider
struct Collider_t1773347010;
// UnityEngine.Collider[]
struct ColliderU5BU5D_t4234922487;
// UnityEngine.Component
struct Component_t1923634451;
// UnityEngine.Font
struct Font_t1956802104;
// UnityEngine.Font/FontTextureRebuildCallback
struct FontTextureRebuildCallback_t2467502454;
// UnityEngine.GUI/WindowFunction
struct WindowFunction_t3146511083;
// UnityEngine.GUIStyle
struct GUIStyle_t3956901511;
// UnityEngine.GUIStyleState
struct GUIStyleState_t1397964415;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t3962482529;
// UnityEngine.Object
struct Object_t631007953;
// UnityEngine.RectOffset
struct RectOffset_t1369453676;
// UnityEngine.Renderer
struct Renderer_t2627027031;
// UnityEngine.Renderer[]
struct RendererU5BU5D_t3210418286;
// UnityEngine.Texture2D
struct Texture2D_t3840446185;
// Vuforia.ITrackableEventHandler
struct ITrackableEventHandler_t1495975588;
// Vuforia.Trackable
struct Trackable_t2451999991;
// Vuforia.TrackableBehaviour
struct TrackableBehaviour_t1113559212;
// Vuforia.VuforiaConfiguration
struct VuforiaConfiguration_t1763229349;
// Vuforia.VuforiaConfiguration/DeviceTrackerConfiguration
struct DeviceTrackerConfiguration_t721467671;
// Vuforia.VuforiaConfiguration/DigitalEyewearConfiguration
struct DigitalEyewearConfiguration_t546560202;
// Vuforia.VuforiaConfiguration/GenericVuforiaConfiguration
struct GenericVuforiaConfiguration_t3697830469;
// Vuforia.VuforiaConfiguration/SmartTerrainConfiguration
struct SmartTerrainConfiguration_t1514074484;
// Vuforia.VuforiaConfiguration/VideoBackgroundConfiguration
struct VideoBackgroundConfiguration_t3392414655;
// Vuforia.VuforiaConfiguration/WebCamConfiguration
struct WebCamConfiguration_t1101614731;
// Vuforia.VuforiaRuntime
struct VuforiaRuntime_t1949122020;
// VuforiaMonoBehaviour
struct VuforiaMonoBehaviour_t1150221792;

extern RuntimeClass* Action_1_t3593217305_il2cpp_TypeInfo_var;
extern RuntimeClass* Debug_t3317548046_il2cpp_TypeInfo_var;
extern RuntimeClass* GUIStyle_t3956901511_il2cpp_TypeInfo_var;
extern RuntimeClass* GUI_t1624858472_il2cpp_TypeInfo_var;
extern RuntimeClass* InitError_t3420749710_il2cpp_TypeInfo_var;
extern RuntimeClass* Int32_t2950945753_il2cpp_TypeInfo_var;
extern RuntimeClass* Mathf_t3464937446_il2cpp_TypeInfo_var;
extern RuntimeClass* ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var;
extern RuntimeClass* Object_t631007953_il2cpp_TypeInfo_var;
extern RuntimeClass* RectOffset_t1369453676_il2cpp_TypeInfo_var;
extern RuntimeClass* String_t_il2cpp_TypeInfo_var;
extern RuntimeClass* Texture2D_t3840446185_il2cpp_TypeInfo_var;
extern RuntimeClass* VuforiaConfiguration_t1763229349_il2cpp_TypeInfo_var;
extern RuntimeClass* VuforiaRuntime_t1949122020_il2cpp_TypeInfo_var;
extern RuntimeClass* WindowFunction_t3146511083_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral1108443480;
extern String_t* _stringLiteral1253325676;
extern String_t* _stringLiteral1431967569;
extern String_t* _stringLiteral1498400317;
extern String_t* _stringLiteral2016908147;
extern String_t* _stringLiteral2072581803;
extern String_t* _stringLiteral2072975055;
extern String_t* _stringLiteral229317972;
extern String_t* _stringLiteral2293327149;
extern String_t* _stringLiteral2642543365;
extern String_t* _stringLiteral2746058527;
extern String_t* _stringLiteral2746077084;
extern String_t* _stringLiteral2959890895;
extern String_t* _stringLiteral2974894664;
extern String_t* _stringLiteral3073488411;
extern String_t* _stringLiteral3122929577;
extern String_t* _stringLiteral3183081100;
extern String_t* _stringLiteral3279329212;
extern String_t* _stringLiteral3325583105;
extern String_t* _stringLiteral3452614528;
extern String_t* _stringLiteral3452614641;
extern String_t* _stringLiteral3453007782;
extern String_t* _stringLiteral3483481617;
extern String_t* _stringLiteral3483484711;
extern String_t* _stringLiteral3567432369;
extern String_t* _stringLiteral3752705136;
extern String_t* _stringLiteral3797279721;
extern String_t* _stringLiteral3820270571;
extern String_t* _stringLiteral491174246;
extern String_t* _stringLiteral868600955;
extern const RuntimeMethod* Action_1__ctor_m2713332384_RuntimeMethod_var;
extern const RuntimeMethod* Component_GetComponent_TisTrackableBehaviour_t1113559212_m1736119408_RuntimeMethod_var;
extern const RuntimeMethod* Component_GetComponentsInChildren_TisCanvas_t3310196443_m1479281147_RuntimeMethod_var;
extern const RuntimeMethod* Component_GetComponentsInChildren_TisCollider_t1773347010_m2667952426_RuntimeMethod_var;
extern const RuntimeMethod* Component_GetComponentsInChildren_TisRenderer_t2627027031_m2673895911_RuntimeMethod_var;
extern const RuntimeMethod* DefaultInitializationErrorHandler_DrawWindowContent_m3171003143_RuntimeMethod_var;
extern const RuntimeMethod* DefaultInitializationErrorHandler_OnVuforiaInitializationError_m3498850087_RuntimeMethod_var;
extern const RuntimeMethod* Resources_GetBuiltinResource_TisFont_t1956802104_m2738776830_RuntimeMethod_var;
extern const uint32_t DefaultInitializationErrorHandler_Awake_m2464808560_MetadataUsageId;
extern const uint32_t DefaultInitializationErrorHandler_CreateSinglePixelTexture_m3383403409_MetadataUsageId;
extern const uint32_t DefaultInitializationErrorHandler_DrawWindowContent_m3171003143_MetadataUsageId;
extern const uint32_t DefaultInitializationErrorHandler_OnDestroy_m1669200062_MetadataUsageId;
extern const uint32_t DefaultInitializationErrorHandler_OnGUI_m440136624_MetadataUsageId;
extern const uint32_t DefaultInitializationErrorHandler_SetErrorCode_m594938833_MetadataUsageId;
extern const uint32_t DefaultInitializationErrorHandler_SetupGUIStyles_m1676302763_MetadataUsageId;
extern const uint32_t DefaultInitializationErrorHandler__ctor_m2502050417_MetadataUsageId;
extern const uint32_t DefaultInitializationErrorHandler_getKeyInfo_m3940778236_MetadataUsageId;
extern const uint32_t DefaultTrackableEventHandler_OnDestroy_m3526422712_MetadataUsageId;
extern const uint32_t DefaultTrackableEventHandler_OnTrackableStateChanged_m615981434_MetadataUsageId;
extern const uint32_t DefaultTrackableEventHandler_OnTrackingFound_m2146197130_MetadataUsageId;
extern const uint32_t DefaultTrackableEventHandler_OnTrackingLost_m2776455481_MetadataUsageId;
extern const uint32_t DefaultTrackableEventHandler_Start_m3259365141_MetadataUsageId;
struct GUIStyleState_t1397964415_marshaled_com;
struct GUIStyleState_t1397964415_marshaled_pinvoke;
struct GUIStyle_t3956901511_marshaled_com;
struct GUIStyle_t3956901511_marshaled_pinvoke;
struct RectOffset_t1369453676_marshaled_com;

struct ObjectU5BU5D_t2843939325;
struct CanvasU5BU5D_t682926938;
struct ColliderU5BU5D_t4234922487;
struct RendererU5BU5D_t3210418286;


#ifndef U3CMODULEU3E_T692745547_H
#define U3CMODULEU3E_T692745547_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t692745547 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CMODULEU3E_T692745547_H
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
#ifndef VALUETYPE_T3640485471_H
#define VALUETYPE_T3640485471_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t3640485471  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t3640485471_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t3640485471_marshaled_com
{
};
#endif // VALUETYPE_T3640485471_H
#ifndef BOOLEAN_T97287965_H
#define BOOLEAN_T97287965_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Boolean
struct  Boolean_t97287965 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_t97287965, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_t97287965_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_t97287965_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((&___TrueString_5), value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_t97287965_StaticFields, ___FalseString_6)); }
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
#endif // BOOLEAN_T97287965_H
#ifndef ENUM_T4135868527_H
#define ENUM_T4135868527_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Enum
struct  Enum_t4135868527  : public ValueType_t3640485471
{
public:

public:
};

struct Enum_t4135868527_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t3528271667* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t4135868527_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t3528271667* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t3528271667** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t3528271667* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((&___enumSeperatorCharArray_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t4135868527_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t4135868527_marshaled_com
{
};
#endif // ENUM_T4135868527_H
#ifndef INT32_T2950945753_H
#define INT32_T2950945753_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int32
struct  Int32_t2950945753 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_t2950945753, ___m_value_0)); }
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
#endif // INT32_T2950945753_H
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
#ifndef SINGLE_T1397266774_H
#define SINGLE_T1397266774_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Single
struct  Single_t1397266774 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_t1397266774, ___m_value_0)); }
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
#endif // SINGLE_T1397266774_H
#ifndef VOID_T1185182177_H
#define VOID_T1185182177_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Void
struct  Void_t1185182177 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t1185182177__padding[1];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VOID_T1185182177_H
#ifndef COLOR_T2555686324_H
#define COLOR_T2555686324_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Color
struct  Color_t2555686324 
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
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_t2555686324, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_t2555686324, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_t2555686324, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_t2555686324, ___a_3)); }
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
#endif // COLOR_T2555686324_H
#ifndef RECT_T2360479859_H
#define RECT_T2360479859_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Rect
struct  Rect_t2360479859 
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
	inline static int32_t get_offset_of_m_XMin_0() { return static_cast<int32_t>(offsetof(Rect_t2360479859, ___m_XMin_0)); }
	inline float get_m_XMin_0() const { return ___m_XMin_0; }
	inline float* get_address_of_m_XMin_0() { return &___m_XMin_0; }
	inline void set_m_XMin_0(float value)
	{
		___m_XMin_0 = value;
	}

	inline static int32_t get_offset_of_m_YMin_1() { return static_cast<int32_t>(offsetof(Rect_t2360479859, ___m_YMin_1)); }
	inline float get_m_YMin_1() const { return ___m_YMin_1; }
	inline float* get_address_of_m_YMin_1() { return &___m_YMin_1; }
	inline void set_m_YMin_1(float value)
	{
		___m_YMin_1 = value;
	}

	inline static int32_t get_offset_of_m_Width_2() { return static_cast<int32_t>(offsetof(Rect_t2360479859, ___m_Width_2)); }
	inline float get_m_Width_2() const { return ___m_Width_2; }
	inline float* get_address_of_m_Width_2() { return &___m_Width_2; }
	inline void set_m_Width_2(float value)
	{
		___m_Width_2 = value;
	}

	inline static int32_t get_offset_of_m_Height_3() { return static_cast<int32_t>(offsetof(Rect_t2360479859, ___m_Height_3)); }
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
#endif // RECT_T2360479859_H
#ifndef VECTOR3_T3722313464_H
#define VECTOR3_T3722313464_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector3
struct  Vector3_t3722313464 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_t3722313464_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t3722313464  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t3722313464  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t3722313464  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t3722313464  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t3722313464  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t3722313464  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t3722313464  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t3722313464  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t3722313464  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t3722313464  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___zeroVector_5)); }
	inline Vector3_t3722313464  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_t3722313464 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_t3722313464  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___oneVector_6)); }
	inline Vector3_t3722313464  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_t3722313464 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_t3722313464  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___upVector_7)); }
	inline Vector3_t3722313464  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_t3722313464 * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_t3722313464  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___downVector_8)); }
	inline Vector3_t3722313464  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_t3722313464 * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_t3722313464  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___leftVector_9)); }
	inline Vector3_t3722313464  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_t3722313464 * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_t3722313464  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___rightVector_10)); }
	inline Vector3_t3722313464  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_t3722313464 * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_t3722313464  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___forwardVector_11)); }
	inline Vector3_t3722313464  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_t3722313464 * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_t3722313464  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___backVector_12)); }
	inline Vector3_t3722313464  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_t3722313464 * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_t3722313464  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_t3722313464  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_t3722313464 * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_t3722313464  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_t3722313464  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_t3722313464 * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_t3722313464  value)
	{
		___negativeInfinityVector_14 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR3_T3722313464_H
#ifndef DELEGATE_T1188392813_H
#define DELEGATE_T1188392813_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Delegate
struct  Delegate_t1188392813  : public RuntimeObject
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
	DelegateData_t1677132599 * ___data_9;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_10;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_target_2), value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_extra_arg_5() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___extra_arg_5)); }
	inline intptr_t get_extra_arg_5() const { return ___extra_arg_5; }
	inline intptr_t* get_address_of_extra_arg_5() { return &___extra_arg_5; }
	inline void set_extra_arg_5(intptr_t value)
	{
		___extra_arg_5 = value;
	}

	inline static int32_t get_offset_of_method_code_6() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_code_6)); }
	inline intptr_t get_method_code_6() const { return ___method_code_6; }
	inline intptr_t* get_address_of_method_code_6() { return &___method_code_6; }
	inline void set_method_code_6(intptr_t value)
	{
		___method_code_6 = value;
	}

	inline static int32_t get_offset_of_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_info_7)); }
	inline MethodInfo_t * get_method_info_7() const { return ___method_info_7; }
	inline MethodInfo_t ** get_address_of_method_info_7() { return &___method_info_7; }
	inline void set_method_info_7(MethodInfo_t * value)
	{
		___method_info_7 = value;
		Il2CppCodeGenWriteBarrier((&___method_info_7), value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((&___original_method_info_8), value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___data_9)); }
	inline DelegateData_t1677132599 * get_data_9() const { return ___data_9; }
	inline DelegateData_t1677132599 ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t1677132599 * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((&___data_9), value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_is_virtual_10)); }
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
struct Delegate_t1188392813_marshaled_pinvoke
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
	DelegateData_t1677132599 * ___data_9;
	int32_t ___method_is_virtual_10;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t1188392813_marshaled_com
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
	DelegateData_t1677132599 * ___data_9;
	int32_t ___method_is_virtual_10;
};
#endif // DELEGATE_T1188392813_H
#ifndef GUISTYLESTATE_T1397964415_H
#define GUISTYLESTATE_T1397964415_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.GUIStyleState
struct  GUIStyleState_t1397964415  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.GUIStyleState::m_Ptr
	intptr_t ___m_Ptr_0;
	// UnityEngine.GUIStyle UnityEngine.GUIStyleState::m_SourceStyle
	GUIStyle_t3956901511 * ___m_SourceStyle_1;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(GUIStyleState_t1397964415, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}

	inline static int32_t get_offset_of_m_SourceStyle_1() { return static_cast<int32_t>(offsetof(GUIStyleState_t1397964415, ___m_SourceStyle_1)); }
	inline GUIStyle_t3956901511 * get_m_SourceStyle_1() const { return ___m_SourceStyle_1; }
	inline GUIStyle_t3956901511 ** get_address_of_m_SourceStyle_1() { return &___m_SourceStyle_1; }
	inline void set_m_SourceStyle_1(GUIStyle_t3956901511 * value)
	{
		___m_SourceStyle_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_SourceStyle_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.GUIStyleState
struct GUIStyleState_t1397964415_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	GUIStyle_t3956901511_marshaled_pinvoke* ___m_SourceStyle_1;
};
// Native definition for COM marshalling of UnityEngine.GUIStyleState
struct GUIStyleState_t1397964415_marshaled_com
{
	intptr_t ___m_Ptr_0;
	GUIStyle_t3956901511_marshaled_com* ___m_SourceStyle_1;
};
#endif // GUISTYLESTATE_T1397964415_H
#ifndef OBJECT_T631007953_H
#define OBJECT_T631007953_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Object
struct  Object_t631007953  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_t631007953, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_t631007953_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_t631007953_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
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
struct Object_t631007953_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_t631007953_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};
#endif // OBJECT_T631007953_H
#ifndef RECTOFFSET_T1369453676_H
#define RECTOFFSET_T1369453676_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.RectOffset
struct  RectOffset_t1369453676  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.RectOffset::m_Ptr
	intptr_t ___m_Ptr_0;
	// System.Object UnityEngine.RectOffset::m_SourceStyle
	RuntimeObject * ___m_SourceStyle_1;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(RectOffset_t1369453676, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}

	inline static int32_t get_offset_of_m_SourceStyle_1() { return static_cast<int32_t>(offsetof(RectOffset_t1369453676, ___m_SourceStyle_1)); }
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
struct RectOffset_t1369453676_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	Il2CppIUnknown* ___m_SourceStyle_1;
};
// Native definition for COM marshalling of UnityEngine.RectOffset
struct RectOffset_t1369453676_marshaled_com
{
	intptr_t ___m_Ptr_0;
	Il2CppIUnknown* ___m_SourceStyle_1;
};
#endif // RECTOFFSET_T1369453676_H
#ifndef TEXTANCHOR_T2035777396_H
#define TEXTANCHOR_T2035777396_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.TextAnchor
struct  TextAnchor_t2035777396 
{
public:
	// System.Int32 UnityEngine.TextAnchor::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TextAnchor_t2035777396, ___value___2)); }
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
#endif // TEXTANCHOR_T2035777396_H
#ifndef TEXTUREFORMAT_T2701165832_H
#define TEXTUREFORMAT_T2701165832_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.TextureFormat
struct  TextureFormat_t2701165832 
{
public:
	// System.Int32 UnityEngine.TextureFormat::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TextureFormat_t2701165832, ___value___2)); }
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
#endif // TEXTUREFORMAT_T2701165832_H
#ifndef CAMERADEVICEMODE_T2478715656_H
#define CAMERADEVICEMODE_T2478715656_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.CameraDevice/CameraDeviceMode
struct  CameraDeviceMode_t2478715656 
{
public:
	// System.Int32 Vuforia.CameraDevice/CameraDeviceMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CameraDeviceMode_t2478715656, ___value___2)); }
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
#endif // CAMERADEVICEMODE_T2478715656_H
#ifndef CAMERADIRECTION_T637748435_H
#define CAMERADIRECTION_T637748435_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.CameraDevice/CameraDirection
struct  CameraDirection_t637748435 
{
public:
	// System.Int32 Vuforia.CameraDevice/CameraDirection::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CameraDirection_t637748435, ___value___2)); }
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
#endif // CAMERADIRECTION_T637748435_H
#ifndef STATUS_T1100905814_H
#define STATUS_T1100905814_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.TrackableBehaviour/Status
struct  Status_t1100905814 
{
public:
	// System.Int32 Vuforia.TrackableBehaviour/Status::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Status_t1100905814, ___value___2)); }
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
#endif // STATUS_T1100905814_H
#ifndef VIDEOBACKGROUNDREFLECTION_T736962841_H
#define VIDEOBACKGROUNDREFLECTION_T736962841_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.VuforiaRenderer/VideoBackgroundReflection
struct  VideoBackgroundReflection_t736962841 
{
public:
	// System.Int32 Vuforia.VuforiaRenderer/VideoBackgroundReflection::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(VideoBackgroundReflection_t736962841, ___value___2)); }
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
#endif // VIDEOBACKGROUNDREFLECTION_T736962841_H
#ifndef INITSTATE_T3374939742_H
#define INITSTATE_T3374939742_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.VuforiaRuntime/InitState
struct  InitState_t3374939742 
{
public:
	// System.Int32 Vuforia.VuforiaRuntime/InitState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(InitState_t3374939742, ___value___2)); }
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
#endif // INITSTATE_T3374939742_H
#ifndef INITERROR_T3420749710_H
#define INITERROR_T3420749710_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.VuforiaUnity/InitError
struct  InitError_t3420749710 
{
public:
	// System.Int32 Vuforia.VuforiaUnity/InitError::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(InitError_t3420749710, ___value___2)); }
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
#endif // INITERROR_T3420749710_H
#ifndef MULTICASTDELEGATE_T_H
#define MULTICASTDELEGATE_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MulticastDelegate
struct  MulticastDelegate_t  : public Delegate_t1188392813
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_t1703627840* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_t1703627840* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_t1703627840** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_t1703627840* value)
	{
		___delegates_11 = value;
		Il2CppCodeGenWriteBarrier((&___delegates_11), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t1188392813_marshaled_pinvoke
{
	DelegateU5BU5D_t1703627840* ___delegates_11;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t1188392813_marshaled_com
{
	DelegateU5BU5D_t1703627840* ___delegates_11;
};
#endif // MULTICASTDELEGATE_T_H
#ifndef COMPONENT_T1923634451_H
#define COMPONENT_T1923634451_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Component
struct  Component_t1923634451  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPONENT_T1923634451_H
#ifndef FONT_T1956802104_H
#define FONT_T1956802104_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Font
struct  Font_t1956802104  : public Object_t631007953
{
public:
	// UnityEngine.Font/FontTextureRebuildCallback UnityEngine.Font::m_FontTextureRebuildCallback
	FontTextureRebuildCallback_t2467502454 * ___m_FontTextureRebuildCallback_5;

public:
	inline static int32_t get_offset_of_m_FontTextureRebuildCallback_5() { return static_cast<int32_t>(offsetof(Font_t1956802104, ___m_FontTextureRebuildCallback_5)); }
	inline FontTextureRebuildCallback_t2467502454 * get_m_FontTextureRebuildCallback_5() const { return ___m_FontTextureRebuildCallback_5; }
	inline FontTextureRebuildCallback_t2467502454 ** get_address_of_m_FontTextureRebuildCallback_5() { return &___m_FontTextureRebuildCallback_5; }
	inline void set_m_FontTextureRebuildCallback_5(FontTextureRebuildCallback_t2467502454 * value)
	{
		___m_FontTextureRebuildCallback_5 = value;
		Il2CppCodeGenWriteBarrier((&___m_FontTextureRebuildCallback_5), value);
	}
};

struct Font_t1956802104_StaticFields
{
public:
	// System.Action`1<UnityEngine.Font> UnityEngine.Font::textureRebuilt
	Action_1_t2129269699 * ___textureRebuilt_4;

public:
	inline static int32_t get_offset_of_textureRebuilt_4() { return static_cast<int32_t>(offsetof(Font_t1956802104_StaticFields, ___textureRebuilt_4)); }
	inline Action_1_t2129269699 * get_textureRebuilt_4() const { return ___textureRebuilt_4; }
	inline Action_1_t2129269699 ** get_address_of_textureRebuilt_4() { return &___textureRebuilt_4; }
	inline void set_textureRebuilt_4(Action_1_t2129269699 * value)
	{
		___textureRebuilt_4 = value;
		Il2CppCodeGenWriteBarrier((&___textureRebuilt_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FONT_T1956802104_H
#ifndef GUISTYLE_T3956901511_H
#define GUISTYLE_T3956901511_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.GUIStyle
struct  GUIStyle_t3956901511  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.GUIStyle::m_Ptr
	intptr_t ___m_Ptr_0;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_Normal
	GUIStyleState_t1397964415 * ___m_Normal_1;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_Hover
	GUIStyleState_t1397964415 * ___m_Hover_2;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_Active
	GUIStyleState_t1397964415 * ___m_Active_3;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_Focused
	GUIStyleState_t1397964415 * ___m_Focused_4;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_OnNormal
	GUIStyleState_t1397964415 * ___m_OnNormal_5;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_OnHover
	GUIStyleState_t1397964415 * ___m_OnHover_6;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_OnActive
	GUIStyleState_t1397964415 * ___m_OnActive_7;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_OnFocused
	GUIStyleState_t1397964415 * ___m_OnFocused_8;
	// UnityEngine.RectOffset UnityEngine.GUIStyle::m_Border
	RectOffset_t1369453676 * ___m_Border_9;
	// UnityEngine.RectOffset UnityEngine.GUIStyle::m_Padding
	RectOffset_t1369453676 * ___m_Padding_10;
	// UnityEngine.RectOffset UnityEngine.GUIStyle::m_Margin
	RectOffset_t1369453676 * ___m_Margin_11;
	// UnityEngine.RectOffset UnityEngine.GUIStyle::m_Overflow
	RectOffset_t1369453676 * ___m_Overflow_12;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(GUIStyle_t3956901511, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}

	inline static int32_t get_offset_of_m_Normal_1() { return static_cast<int32_t>(offsetof(GUIStyle_t3956901511, ___m_Normal_1)); }
	inline GUIStyleState_t1397964415 * get_m_Normal_1() const { return ___m_Normal_1; }
	inline GUIStyleState_t1397964415 ** get_address_of_m_Normal_1() { return &___m_Normal_1; }
	inline void set_m_Normal_1(GUIStyleState_t1397964415 * value)
	{
		___m_Normal_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_Normal_1), value);
	}

	inline static int32_t get_offset_of_m_Hover_2() { return static_cast<int32_t>(offsetof(GUIStyle_t3956901511, ___m_Hover_2)); }
	inline GUIStyleState_t1397964415 * get_m_Hover_2() const { return ___m_Hover_2; }
	inline GUIStyleState_t1397964415 ** get_address_of_m_Hover_2() { return &___m_Hover_2; }
	inline void set_m_Hover_2(GUIStyleState_t1397964415 * value)
	{
		___m_Hover_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_Hover_2), value);
	}

	inline static int32_t get_offset_of_m_Active_3() { return static_cast<int32_t>(offsetof(GUIStyle_t3956901511, ___m_Active_3)); }
	inline GUIStyleState_t1397964415 * get_m_Active_3() const { return ___m_Active_3; }
	inline GUIStyleState_t1397964415 ** get_address_of_m_Active_3() { return &___m_Active_3; }
	inline void set_m_Active_3(GUIStyleState_t1397964415 * value)
	{
		___m_Active_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_Active_3), value);
	}

	inline static int32_t get_offset_of_m_Focused_4() { return static_cast<int32_t>(offsetof(GUIStyle_t3956901511, ___m_Focused_4)); }
	inline GUIStyleState_t1397964415 * get_m_Focused_4() const { return ___m_Focused_4; }
	inline GUIStyleState_t1397964415 ** get_address_of_m_Focused_4() { return &___m_Focused_4; }
	inline void set_m_Focused_4(GUIStyleState_t1397964415 * value)
	{
		___m_Focused_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_Focused_4), value);
	}

	inline static int32_t get_offset_of_m_OnNormal_5() { return static_cast<int32_t>(offsetof(GUIStyle_t3956901511, ___m_OnNormal_5)); }
	inline GUIStyleState_t1397964415 * get_m_OnNormal_5() const { return ___m_OnNormal_5; }
	inline GUIStyleState_t1397964415 ** get_address_of_m_OnNormal_5() { return &___m_OnNormal_5; }
	inline void set_m_OnNormal_5(GUIStyleState_t1397964415 * value)
	{
		___m_OnNormal_5 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnNormal_5), value);
	}

	inline static int32_t get_offset_of_m_OnHover_6() { return static_cast<int32_t>(offsetof(GUIStyle_t3956901511, ___m_OnHover_6)); }
	inline GUIStyleState_t1397964415 * get_m_OnHover_6() const { return ___m_OnHover_6; }
	inline GUIStyleState_t1397964415 ** get_address_of_m_OnHover_6() { return &___m_OnHover_6; }
	inline void set_m_OnHover_6(GUIStyleState_t1397964415 * value)
	{
		___m_OnHover_6 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnHover_6), value);
	}

	inline static int32_t get_offset_of_m_OnActive_7() { return static_cast<int32_t>(offsetof(GUIStyle_t3956901511, ___m_OnActive_7)); }
	inline GUIStyleState_t1397964415 * get_m_OnActive_7() const { return ___m_OnActive_7; }
	inline GUIStyleState_t1397964415 ** get_address_of_m_OnActive_7() { return &___m_OnActive_7; }
	inline void set_m_OnActive_7(GUIStyleState_t1397964415 * value)
	{
		___m_OnActive_7 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnActive_7), value);
	}

	inline static int32_t get_offset_of_m_OnFocused_8() { return static_cast<int32_t>(offsetof(GUIStyle_t3956901511, ___m_OnFocused_8)); }
	inline GUIStyleState_t1397964415 * get_m_OnFocused_8() const { return ___m_OnFocused_8; }
	inline GUIStyleState_t1397964415 ** get_address_of_m_OnFocused_8() { return &___m_OnFocused_8; }
	inline void set_m_OnFocused_8(GUIStyleState_t1397964415 * value)
	{
		___m_OnFocused_8 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnFocused_8), value);
	}

	inline static int32_t get_offset_of_m_Border_9() { return static_cast<int32_t>(offsetof(GUIStyle_t3956901511, ___m_Border_9)); }
	inline RectOffset_t1369453676 * get_m_Border_9() const { return ___m_Border_9; }
	inline RectOffset_t1369453676 ** get_address_of_m_Border_9() { return &___m_Border_9; }
	inline void set_m_Border_9(RectOffset_t1369453676 * value)
	{
		___m_Border_9 = value;
		Il2CppCodeGenWriteBarrier((&___m_Border_9), value);
	}

	inline static int32_t get_offset_of_m_Padding_10() { return static_cast<int32_t>(offsetof(GUIStyle_t3956901511, ___m_Padding_10)); }
	inline RectOffset_t1369453676 * get_m_Padding_10() const { return ___m_Padding_10; }
	inline RectOffset_t1369453676 ** get_address_of_m_Padding_10() { return &___m_Padding_10; }
	inline void set_m_Padding_10(RectOffset_t1369453676 * value)
	{
		___m_Padding_10 = value;
		Il2CppCodeGenWriteBarrier((&___m_Padding_10), value);
	}

	inline static int32_t get_offset_of_m_Margin_11() { return static_cast<int32_t>(offsetof(GUIStyle_t3956901511, ___m_Margin_11)); }
	inline RectOffset_t1369453676 * get_m_Margin_11() const { return ___m_Margin_11; }
	inline RectOffset_t1369453676 ** get_address_of_m_Margin_11() { return &___m_Margin_11; }
	inline void set_m_Margin_11(RectOffset_t1369453676 * value)
	{
		___m_Margin_11 = value;
		Il2CppCodeGenWriteBarrier((&___m_Margin_11), value);
	}

	inline static int32_t get_offset_of_m_Overflow_12() { return static_cast<int32_t>(offsetof(GUIStyle_t3956901511, ___m_Overflow_12)); }
	inline RectOffset_t1369453676 * get_m_Overflow_12() const { return ___m_Overflow_12; }
	inline RectOffset_t1369453676 ** get_address_of_m_Overflow_12() { return &___m_Overflow_12; }
	inline void set_m_Overflow_12(RectOffset_t1369453676 * value)
	{
		___m_Overflow_12 = value;
		Il2CppCodeGenWriteBarrier((&___m_Overflow_12), value);
	}
};

struct GUIStyle_t3956901511_StaticFields
{
public:
	// System.Boolean UnityEngine.GUIStyle::showKeyboardFocus
	bool ___showKeyboardFocus_13;
	// UnityEngine.GUIStyle UnityEngine.GUIStyle::s_None
	GUIStyle_t3956901511 * ___s_None_14;

public:
	inline static int32_t get_offset_of_showKeyboardFocus_13() { return static_cast<int32_t>(offsetof(GUIStyle_t3956901511_StaticFields, ___showKeyboardFocus_13)); }
	inline bool get_showKeyboardFocus_13() const { return ___showKeyboardFocus_13; }
	inline bool* get_address_of_showKeyboardFocus_13() { return &___showKeyboardFocus_13; }
	inline void set_showKeyboardFocus_13(bool value)
	{
		___showKeyboardFocus_13 = value;
	}

	inline static int32_t get_offset_of_s_None_14() { return static_cast<int32_t>(offsetof(GUIStyle_t3956901511_StaticFields, ___s_None_14)); }
	inline GUIStyle_t3956901511 * get_s_None_14() const { return ___s_None_14; }
	inline GUIStyle_t3956901511 ** get_address_of_s_None_14() { return &___s_None_14; }
	inline void set_s_None_14(GUIStyle_t3956901511 * value)
	{
		___s_None_14 = value;
		Il2CppCodeGenWriteBarrier((&___s_None_14), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.GUIStyle
struct GUIStyle_t3956901511_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	GUIStyleState_t1397964415_marshaled_pinvoke* ___m_Normal_1;
	GUIStyleState_t1397964415_marshaled_pinvoke* ___m_Hover_2;
	GUIStyleState_t1397964415_marshaled_pinvoke* ___m_Active_3;
	GUIStyleState_t1397964415_marshaled_pinvoke* ___m_Focused_4;
	GUIStyleState_t1397964415_marshaled_pinvoke* ___m_OnNormal_5;
	GUIStyleState_t1397964415_marshaled_pinvoke* ___m_OnHover_6;
	GUIStyleState_t1397964415_marshaled_pinvoke* ___m_OnActive_7;
	GUIStyleState_t1397964415_marshaled_pinvoke* ___m_OnFocused_8;
	RectOffset_t1369453676_marshaled_pinvoke ___m_Border_9;
	RectOffset_t1369453676_marshaled_pinvoke ___m_Padding_10;
	RectOffset_t1369453676_marshaled_pinvoke ___m_Margin_11;
	RectOffset_t1369453676_marshaled_pinvoke ___m_Overflow_12;
};
// Native definition for COM marshalling of UnityEngine.GUIStyle
struct GUIStyle_t3956901511_marshaled_com
{
	intptr_t ___m_Ptr_0;
	GUIStyleState_t1397964415_marshaled_com* ___m_Normal_1;
	GUIStyleState_t1397964415_marshaled_com* ___m_Hover_2;
	GUIStyleState_t1397964415_marshaled_com* ___m_Active_3;
	GUIStyleState_t1397964415_marshaled_com* ___m_Focused_4;
	GUIStyleState_t1397964415_marshaled_com* ___m_OnNormal_5;
	GUIStyleState_t1397964415_marshaled_com* ___m_OnHover_6;
	GUIStyleState_t1397964415_marshaled_com* ___m_OnActive_7;
	GUIStyleState_t1397964415_marshaled_com* ___m_OnFocused_8;
	RectOffset_t1369453676_marshaled_com* ___m_Border_9;
	RectOffset_t1369453676_marshaled_com* ___m_Padding_10;
	RectOffset_t1369453676_marshaled_com* ___m_Margin_11;
	RectOffset_t1369453676_marshaled_com* ___m_Overflow_12;
};
#endif // GUISTYLE_T3956901511_H
#ifndef SCRIPTABLEOBJECT_T2528358522_H
#define SCRIPTABLEOBJECT_T2528358522_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.ScriptableObject
struct  ScriptableObject_t2528358522  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_t2528358522_marshaled_pinvoke : public Object_t631007953_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_t2528358522_marshaled_com : public Object_t631007953_marshaled_com
{
};
#endif // SCRIPTABLEOBJECT_T2528358522_H
#ifndef TEXTURE_T3661962703_H
#define TEXTURE_T3661962703_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Texture
struct  Texture_t3661962703  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEXTURE_T3661962703_H
#ifndef GENERICVUFORIACONFIGURATION_T3697830469_H
#define GENERICVUFORIACONFIGURATION_T3697830469_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.VuforiaConfiguration/GenericVuforiaConfiguration
struct  GenericVuforiaConfiguration_t3697830469  : public RuntimeObject
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
	inline static int32_t get_offset_of_vuforiaLicenseKey_1() { return static_cast<int32_t>(offsetof(GenericVuforiaConfiguration_t3697830469, ___vuforiaLicenseKey_1)); }
	inline String_t* get_vuforiaLicenseKey_1() const { return ___vuforiaLicenseKey_1; }
	inline String_t** get_address_of_vuforiaLicenseKey_1() { return &___vuforiaLicenseKey_1; }
	inline void set_vuforiaLicenseKey_1(String_t* value)
	{
		___vuforiaLicenseKey_1 = value;
		Il2CppCodeGenWriteBarrier((&___vuforiaLicenseKey_1), value);
	}

	inline static int32_t get_offset_of_ufoLicenseKey_2() { return static_cast<int32_t>(offsetof(GenericVuforiaConfiguration_t3697830469, ___ufoLicenseKey_2)); }
	inline String_t* get_ufoLicenseKey_2() const { return ___ufoLicenseKey_2; }
	inline String_t** get_address_of_ufoLicenseKey_2() { return &___ufoLicenseKey_2; }
	inline void set_ufoLicenseKey_2(String_t* value)
	{
		___ufoLicenseKey_2 = value;
		Il2CppCodeGenWriteBarrier((&___ufoLicenseKey_2), value);
	}

	inline static int32_t get_offset_of_delayedInitialization_3() { return static_cast<int32_t>(offsetof(GenericVuforiaConfiguration_t3697830469, ___delayedInitialization_3)); }
	inline bool get_delayedInitialization_3() const { return ___delayedInitialization_3; }
	inline bool* get_address_of_delayedInitialization_3() { return &___delayedInitialization_3; }
	inline void set_delayedInitialization_3(bool value)
	{
		___delayedInitialization_3 = value;
	}

	inline static int32_t get_offset_of_cameraDeviceModeSetting_4() { return static_cast<int32_t>(offsetof(GenericVuforiaConfiguration_t3697830469, ___cameraDeviceModeSetting_4)); }
	inline int32_t get_cameraDeviceModeSetting_4() const { return ___cameraDeviceModeSetting_4; }
	inline int32_t* get_address_of_cameraDeviceModeSetting_4() { return &___cameraDeviceModeSetting_4; }
	inline void set_cameraDeviceModeSetting_4(int32_t value)
	{
		___cameraDeviceModeSetting_4 = value;
	}

	inline static int32_t get_offset_of_maxSimultaneousImageTargets_5() { return static_cast<int32_t>(offsetof(GenericVuforiaConfiguration_t3697830469, ___maxSimultaneousImageTargets_5)); }
	inline int32_t get_maxSimultaneousImageTargets_5() const { return ___maxSimultaneousImageTargets_5; }
	inline int32_t* get_address_of_maxSimultaneousImageTargets_5() { return &___maxSimultaneousImageTargets_5; }
	inline void set_maxSimultaneousImageTargets_5(int32_t value)
	{
		___maxSimultaneousImageTargets_5 = value;
	}

	inline static int32_t get_offset_of_maxSimultaneousObjectTargets_6() { return static_cast<int32_t>(offsetof(GenericVuforiaConfiguration_t3697830469, ___maxSimultaneousObjectTargets_6)); }
	inline int32_t get_maxSimultaneousObjectTargets_6() const { return ___maxSimultaneousObjectTargets_6; }
	inline int32_t* get_address_of_maxSimultaneousObjectTargets_6() { return &___maxSimultaneousObjectTargets_6; }
	inline void set_maxSimultaneousObjectTargets_6(int32_t value)
	{
		___maxSimultaneousObjectTargets_6 = value;
	}

	inline static int32_t get_offset_of_useDelayedLoadingObjectTargets_7() { return static_cast<int32_t>(offsetof(GenericVuforiaConfiguration_t3697830469, ___useDelayedLoadingObjectTargets_7)); }
	inline bool get_useDelayedLoadingObjectTargets_7() const { return ___useDelayedLoadingObjectTargets_7; }
	inline bool* get_address_of_useDelayedLoadingObjectTargets_7() { return &___useDelayedLoadingObjectTargets_7; }
	inline void set_useDelayedLoadingObjectTargets_7(bool value)
	{
		___useDelayedLoadingObjectTargets_7 = value;
	}

	inline static int32_t get_offset_of_cameraDirection_8() { return static_cast<int32_t>(offsetof(GenericVuforiaConfiguration_t3697830469, ___cameraDirection_8)); }
	inline int32_t get_cameraDirection_8() const { return ___cameraDirection_8; }
	inline int32_t* get_address_of_cameraDirection_8() { return &___cameraDirection_8; }
	inline void set_cameraDirection_8(int32_t value)
	{
		___cameraDirection_8 = value;
	}

	inline static int32_t get_offset_of_mirrorVideoBackground_9() { return static_cast<int32_t>(offsetof(GenericVuforiaConfiguration_t3697830469, ___mirrorVideoBackground_9)); }
	inline int32_t get_mirrorVideoBackground_9() const { return ___mirrorVideoBackground_9; }
	inline int32_t* get_address_of_mirrorVideoBackground_9() { return &___mirrorVideoBackground_9; }
	inline void set_mirrorVideoBackground_9(int32_t value)
	{
		___mirrorVideoBackground_9 = value;
	}

	inline static int32_t get_offset_of_version_10() { return static_cast<int32_t>(offsetof(GenericVuforiaConfiguration_t3697830469, ___version_10)); }
	inline String_t* get_version_10() const { return ___version_10; }
	inline String_t** get_address_of_version_10() { return &___version_10; }
	inline void set_version_10(String_t* value)
	{
		___version_10 = value;
		Il2CppCodeGenWriteBarrier((&___version_10), value);
	}

	inline static int32_t get_offset_of_eulaAcceptedVersions_11() { return static_cast<int32_t>(offsetof(GenericVuforiaConfiguration_t3697830469, ___eulaAcceptedVersions_11)); }
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
#endif // GENERICVUFORIACONFIGURATION_T3697830469_H
#ifndef VUFORIARUNTIME_T1949122020_H
#define VUFORIARUNTIME_T1949122020_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.VuforiaRuntime
struct  VuforiaRuntime_t1949122020  : public RuntimeObject
{
public:
	// System.Action`1<Vuforia.VuforiaUnity/InitError> Vuforia.VuforiaRuntime::mOnVuforiaInitError
	Action_1_t3593217305 * ___mOnVuforiaInitError_1;
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
	inline static int32_t get_offset_of_mOnVuforiaInitError_1() { return static_cast<int32_t>(offsetof(VuforiaRuntime_t1949122020, ___mOnVuforiaInitError_1)); }
	inline Action_1_t3593217305 * get_mOnVuforiaInitError_1() const { return ___mOnVuforiaInitError_1; }
	inline Action_1_t3593217305 ** get_address_of_mOnVuforiaInitError_1() { return &___mOnVuforiaInitError_1; }
	inline void set_mOnVuforiaInitError_1(Action_1_t3593217305 * value)
	{
		___mOnVuforiaInitError_1 = value;
		Il2CppCodeGenWriteBarrier((&___mOnVuforiaInitError_1), value);
	}

	inline static int32_t get_offset_of_mFailedToInitialize_2() { return static_cast<int32_t>(offsetof(VuforiaRuntime_t1949122020, ___mFailedToInitialize_2)); }
	inline bool get_mFailedToInitialize_2() const { return ___mFailedToInitialize_2; }
	inline bool* get_address_of_mFailedToInitialize_2() { return &___mFailedToInitialize_2; }
	inline void set_mFailedToInitialize_2(bool value)
	{
		___mFailedToInitialize_2 = value;
	}

	inline static int32_t get_offset_of_mInitError_3() { return static_cast<int32_t>(offsetof(VuforiaRuntime_t1949122020, ___mInitError_3)); }
	inline int32_t get_mInitError_3() const { return ___mInitError_3; }
	inline int32_t* get_address_of_mInitError_3() { return &___mInitError_3; }
	inline void set_mInitError_3(int32_t value)
	{
		___mInitError_3 = value;
	}

	inline static int32_t get_offset_of_mInitState_4() { return static_cast<int32_t>(offsetof(VuforiaRuntime_t1949122020, ___mInitState_4)); }
	inline int32_t get_mInitState_4() const { return ___mInitState_4; }
	inline int32_t* get_address_of_mInitState_4() { return &___mInitState_4; }
	inline void set_mInitState_4(int32_t value)
	{
		___mInitState_4 = value;
	}

	inline static int32_t get_offset_of_mInitThreadReturned_5() { return static_cast<int32_t>(offsetof(VuforiaRuntime_t1949122020, ___mInitThreadReturned_5)); }
	inline bool get_mInitThreadReturned_5() const { return ___mInitThreadReturned_5; }
	inline bool* get_address_of_mInitThreadReturned_5() { return &___mInitThreadReturned_5; }
	inline void set_mInitThreadReturned_5(bool value)
	{
		___mInitThreadReturned_5 = value;
	}

	inline static int32_t get_offset_of_mReturnedError_6() { return static_cast<int32_t>(offsetof(VuforiaRuntime_t1949122020, ___mReturnedError_6)); }
	inline int32_t get_mReturnedError_6() const { return ___mReturnedError_6; }
	inline int32_t* get_address_of_mReturnedError_6() { return &___mReturnedError_6; }
	inline void set_mReturnedError_6(int32_t value)
	{
		___mReturnedError_6 = value;
	}

	inline static int32_t get_offset_of_mAppIsQuitting_9() { return static_cast<int32_t>(offsetof(VuforiaRuntime_t1949122020, ___mAppIsQuitting_9)); }
	inline bool get_mAppIsQuitting_9() const { return ___mAppIsQuitting_9; }
	inline bool* get_address_of_mAppIsQuitting_9() { return &___mAppIsQuitting_9; }
	inline void set_mAppIsQuitting_9(bool value)
	{
		___mAppIsQuitting_9 = value;
	}
};

struct VuforiaRuntime_t1949122020_StaticFields
{
public:
	// Vuforia.VuforiaRuntime Vuforia.VuforiaRuntime::mInstance
	VuforiaRuntime_t1949122020 * ___mInstance_7;
	// System.Object Vuforia.VuforiaRuntime::mPadlock
	RuntimeObject * ___mPadlock_8;

public:
	inline static int32_t get_offset_of_mInstance_7() { return static_cast<int32_t>(offsetof(VuforiaRuntime_t1949122020_StaticFields, ___mInstance_7)); }
	inline VuforiaRuntime_t1949122020 * get_mInstance_7() const { return ___mInstance_7; }
	inline VuforiaRuntime_t1949122020 ** get_address_of_mInstance_7() { return &___mInstance_7; }
	inline void set_mInstance_7(VuforiaRuntime_t1949122020 * value)
	{
		___mInstance_7 = value;
		Il2CppCodeGenWriteBarrier((&___mInstance_7), value);
	}

	inline static int32_t get_offset_of_mPadlock_8() { return static_cast<int32_t>(offsetof(VuforiaRuntime_t1949122020_StaticFields, ___mPadlock_8)); }
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
#endif // VUFORIARUNTIME_T1949122020_H
#ifndef ACTION_1_T3593217305_H
#define ACTION_1_T3593217305_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Action`1<Vuforia.VuforiaUnity/InitError>
struct  Action_1_t3593217305  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ACTION_1_T3593217305_H
#ifndef BEHAVIOUR_T1437897464_H
#define BEHAVIOUR_T1437897464_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Behaviour
struct  Behaviour_t1437897464  : public Component_t1923634451
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BEHAVIOUR_T1437897464_H
#ifndef COLLIDER_T1773347010_H
#define COLLIDER_T1773347010_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Collider
struct  Collider_t1773347010  : public Component_t1923634451
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLLIDER_T1773347010_H
#ifndef WINDOWFUNCTION_T3146511083_H
#define WINDOWFUNCTION_T3146511083_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.GUI/WindowFunction
struct  WindowFunction_t3146511083  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WINDOWFUNCTION_T3146511083_H
#ifndef RENDERER_T2627027031_H
#define RENDERER_T2627027031_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Renderer
struct  Renderer_t2627027031  : public Component_t1923634451
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RENDERER_T2627027031_H
#ifndef TEXTURE2D_T3840446185_H
#define TEXTURE2D_T3840446185_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Texture2D
struct  Texture2D_t3840446185  : public Texture_t3661962703
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEXTURE2D_T3840446185_H
#ifndef VUFORIACONFIGURATION_T1763229349_H
#define VUFORIACONFIGURATION_T1763229349_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.VuforiaConfiguration
struct  VuforiaConfiguration_t1763229349  : public ScriptableObject_t2528358522
{
public:
	// Vuforia.VuforiaConfiguration/GenericVuforiaConfiguration Vuforia.VuforiaConfiguration::vuforia
	GenericVuforiaConfiguration_t3697830469 * ___vuforia_6;
	// Vuforia.VuforiaConfiguration/DigitalEyewearConfiguration Vuforia.VuforiaConfiguration::digitalEyewear
	DigitalEyewearConfiguration_t546560202 * ___digitalEyewear_7;
	// Vuforia.VuforiaConfiguration/VideoBackgroundConfiguration Vuforia.VuforiaConfiguration::videoBackground
	VideoBackgroundConfiguration_t3392414655 * ___videoBackground_8;
	// Vuforia.VuforiaConfiguration/DeviceTrackerConfiguration Vuforia.VuforiaConfiguration::deviceTracker
	DeviceTrackerConfiguration_t721467671 * ___deviceTracker_9;
	// Vuforia.VuforiaConfiguration/SmartTerrainConfiguration Vuforia.VuforiaConfiguration::smartTerrain
	SmartTerrainConfiguration_t1514074484 * ___smartTerrain_10;
	// Vuforia.VuforiaConfiguration/WebCamConfiguration Vuforia.VuforiaConfiguration::webcam
	WebCamConfiguration_t1101614731 * ___webcam_11;

public:
	inline static int32_t get_offset_of_vuforia_6() { return static_cast<int32_t>(offsetof(VuforiaConfiguration_t1763229349, ___vuforia_6)); }
	inline GenericVuforiaConfiguration_t3697830469 * get_vuforia_6() const { return ___vuforia_6; }
	inline GenericVuforiaConfiguration_t3697830469 ** get_address_of_vuforia_6() { return &___vuforia_6; }
	inline void set_vuforia_6(GenericVuforiaConfiguration_t3697830469 * value)
	{
		___vuforia_6 = value;
		Il2CppCodeGenWriteBarrier((&___vuforia_6), value);
	}

	inline static int32_t get_offset_of_digitalEyewear_7() { return static_cast<int32_t>(offsetof(VuforiaConfiguration_t1763229349, ___digitalEyewear_7)); }
	inline DigitalEyewearConfiguration_t546560202 * get_digitalEyewear_7() const { return ___digitalEyewear_7; }
	inline DigitalEyewearConfiguration_t546560202 ** get_address_of_digitalEyewear_7() { return &___digitalEyewear_7; }
	inline void set_digitalEyewear_7(DigitalEyewearConfiguration_t546560202 * value)
	{
		___digitalEyewear_7 = value;
		Il2CppCodeGenWriteBarrier((&___digitalEyewear_7), value);
	}

	inline static int32_t get_offset_of_videoBackground_8() { return static_cast<int32_t>(offsetof(VuforiaConfiguration_t1763229349, ___videoBackground_8)); }
	inline VideoBackgroundConfiguration_t3392414655 * get_videoBackground_8() const { return ___videoBackground_8; }
	inline VideoBackgroundConfiguration_t3392414655 ** get_address_of_videoBackground_8() { return &___videoBackground_8; }
	inline void set_videoBackground_8(VideoBackgroundConfiguration_t3392414655 * value)
	{
		___videoBackground_8 = value;
		Il2CppCodeGenWriteBarrier((&___videoBackground_8), value);
	}

	inline static int32_t get_offset_of_deviceTracker_9() { return static_cast<int32_t>(offsetof(VuforiaConfiguration_t1763229349, ___deviceTracker_9)); }
	inline DeviceTrackerConfiguration_t721467671 * get_deviceTracker_9() const { return ___deviceTracker_9; }
	inline DeviceTrackerConfiguration_t721467671 ** get_address_of_deviceTracker_9() { return &___deviceTracker_9; }
	inline void set_deviceTracker_9(DeviceTrackerConfiguration_t721467671 * value)
	{
		___deviceTracker_9 = value;
		Il2CppCodeGenWriteBarrier((&___deviceTracker_9), value);
	}

	inline static int32_t get_offset_of_smartTerrain_10() { return static_cast<int32_t>(offsetof(VuforiaConfiguration_t1763229349, ___smartTerrain_10)); }
	inline SmartTerrainConfiguration_t1514074484 * get_smartTerrain_10() const { return ___smartTerrain_10; }
	inline SmartTerrainConfiguration_t1514074484 ** get_address_of_smartTerrain_10() { return &___smartTerrain_10; }
	inline void set_smartTerrain_10(SmartTerrainConfiguration_t1514074484 * value)
	{
		___smartTerrain_10 = value;
		Il2CppCodeGenWriteBarrier((&___smartTerrain_10), value);
	}

	inline static int32_t get_offset_of_webcam_11() { return static_cast<int32_t>(offsetof(VuforiaConfiguration_t1763229349, ___webcam_11)); }
	inline WebCamConfiguration_t1101614731 * get_webcam_11() const { return ___webcam_11; }
	inline WebCamConfiguration_t1101614731 ** get_address_of_webcam_11() { return &___webcam_11; }
	inline void set_webcam_11(WebCamConfiguration_t1101614731 * value)
	{
		___webcam_11 = value;
		Il2CppCodeGenWriteBarrier((&___webcam_11), value);
	}
};

struct VuforiaConfiguration_t1763229349_StaticFields
{
public:
	// Vuforia.VuforiaConfiguration Vuforia.VuforiaConfiguration::mInstance
	VuforiaConfiguration_t1763229349 * ___mInstance_4;
	// System.Object Vuforia.VuforiaConfiguration::mPadlock
	RuntimeObject * ___mPadlock_5;

public:
	inline static int32_t get_offset_of_mInstance_4() { return static_cast<int32_t>(offsetof(VuforiaConfiguration_t1763229349_StaticFields, ___mInstance_4)); }
	inline VuforiaConfiguration_t1763229349 * get_mInstance_4() const { return ___mInstance_4; }
	inline VuforiaConfiguration_t1763229349 ** get_address_of_mInstance_4() { return &___mInstance_4; }
	inline void set_mInstance_4(VuforiaConfiguration_t1763229349 * value)
	{
		___mInstance_4 = value;
		Il2CppCodeGenWriteBarrier((&___mInstance_4), value);
	}

	inline static int32_t get_offset_of_mPadlock_5() { return static_cast<int32_t>(offsetof(VuforiaConfiguration_t1763229349_StaticFields, ___mPadlock_5)); }
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
#endif // VUFORIACONFIGURATION_T1763229349_H
#ifndef CANVAS_T3310196443_H
#define CANVAS_T3310196443_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Canvas
struct  Canvas_t3310196443  : public Behaviour_t1437897464
{
public:

public:
};

struct Canvas_t3310196443_StaticFields
{
public:
	// UnityEngine.Canvas/WillRenderCanvases UnityEngine.Canvas::willRenderCanvases
	WillRenderCanvases_t3309123499 * ___willRenderCanvases_4;

public:
	inline static int32_t get_offset_of_willRenderCanvases_4() { return static_cast<int32_t>(offsetof(Canvas_t3310196443_StaticFields, ___willRenderCanvases_4)); }
	inline WillRenderCanvases_t3309123499 * get_willRenderCanvases_4() const { return ___willRenderCanvases_4; }
	inline WillRenderCanvases_t3309123499 ** get_address_of_willRenderCanvases_4() { return &___willRenderCanvases_4; }
	inline void set_willRenderCanvases_4(WillRenderCanvases_t3309123499 * value)
	{
		___willRenderCanvases_4 = value;
		Il2CppCodeGenWriteBarrier((&___willRenderCanvases_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CANVAS_T3310196443_H
#ifndef MONOBEHAVIOUR_T3962482529_H
#define MONOBEHAVIOUR_T3962482529_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t3962482529  : public Behaviour_t1437897464
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOBEHAVIOUR_T3962482529_H
#ifndef DEFAULTTRACKABLEEVENTHANDLER_T1588957063_H
#define DEFAULTTRACKABLEEVENTHANDLER_T1588957063_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DefaultTrackableEventHandler
struct  DefaultTrackableEventHandler_t1588957063  : public MonoBehaviour_t3962482529
{
public:
	// Vuforia.TrackableBehaviour DefaultTrackableEventHandler::mTrackableBehaviour
	TrackableBehaviour_t1113559212 * ___mTrackableBehaviour_4;
	// Vuforia.TrackableBehaviour/Status DefaultTrackableEventHandler::m_PreviousStatus
	int32_t ___m_PreviousStatus_5;
	// Vuforia.TrackableBehaviour/Status DefaultTrackableEventHandler::m_NewStatus
	int32_t ___m_NewStatus_6;

public:
	inline static int32_t get_offset_of_mTrackableBehaviour_4() { return static_cast<int32_t>(offsetof(DefaultTrackableEventHandler_t1588957063, ___mTrackableBehaviour_4)); }
	inline TrackableBehaviour_t1113559212 * get_mTrackableBehaviour_4() const { return ___mTrackableBehaviour_4; }
	inline TrackableBehaviour_t1113559212 ** get_address_of_mTrackableBehaviour_4() { return &___mTrackableBehaviour_4; }
	inline void set_mTrackableBehaviour_4(TrackableBehaviour_t1113559212 * value)
	{
		___mTrackableBehaviour_4 = value;
		Il2CppCodeGenWriteBarrier((&___mTrackableBehaviour_4), value);
	}

	inline static int32_t get_offset_of_m_PreviousStatus_5() { return static_cast<int32_t>(offsetof(DefaultTrackableEventHandler_t1588957063, ___m_PreviousStatus_5)); }
	inline int32_t get_m_PreviousStatus_5() const { return ___m_PreviousStatus_5; }
	inline int32_t* get_address_of_m_PreviousStatus_5() { return &___m_PreviousStatus_5; }
	inline void set_m_PreviousStatus_5(int32_t value)
	{
		___m_PreviousStatus_5 = value;
	}

	inline static int32_t get_offset_of_m_NewStatus_6() { return static_cast<int32_t>(offsetof(DefaultTrackableEventHandler_t1588957063, ___m_NewStatus_6)); }
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
#endif // DEFAULTTRACKABLEEVENTHANDLER_T1588957063_H
#ifndef VUFORIAMONOBEHAVIOUR_T1150221792_H
#define VUFORIAMONOBEHAVIOUR_T1150221792_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// VuforiaMonoBehaviour
struct  VuforiaMonoBehaviour_t1150221792  : public MonoBehaviour_t3962482529
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VUFORIAMONOBEHAVIOUR_T1150221792_H
#ifndef DEFAULTINITIALIZATIONERRORHANDLER_T3109936861_H
#define DEFAULTINITIALIZATIONERRORHANDLER_T3109936861_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DefaultInitializationErrorHandler
struct  DefaultInitializationErrorHandler_t3109936861  : public VuforiaMonoBehaviour_t1150221792
{
public:
	// System.String DefaultInitializationErrorHandler::mErrorText
	String_t* ___mErrorText_4;
	// System.Boolean DefaultInitializationErrorHandler::mErrorOccurred
	bool ___mErrorOccurred_5;
	// UnityEngine.GUIStyle DefaultInitializationErrorHandler::bodyStyle
	GUIStyle_t3956901511 * ___bodyStyle_7;
	// UnityEngine.GUIStyle DefaultInitializationErrorHandler::headerStyle
	GUIStyle_t3956901511 * ___headerStyle_8;
	// UnityEngine.GUIStyle DefaultInitializationErrorHandler::footerStyle
	GUIStyle_t3956901511 * ___footerStyle_9;
	// UnityEngine.Texture2D DefaultInitializationErrorHandler::bodyTexture
	Texture2D_t3840446185 * ___bodyTexture_10;
	// UnityEngine.Texture2D DefaultInitializationErrorHandler::headerTexture
	Texture2D_t3840446185 * ___headerTexture_11;
	// UnityEngine.Texture2D DefaultInitializationErrorHandler::footerTexture
	Texture2D_t3840446185 * ___footerTexture_12;

public:
	inline static int32_t get_offset_of_mErrorText_4() { return static_cast<int32_t>(offsetof(DefaultInitializationErrorHandler_t3109936861, ___mErrorText_4)); }
	inline String_t* get_mErrorText_4() const { return ___mErrorText_4; }
	inline String_t** get_address_of_mErrorText_4() { return &___mErrorText_4; }
	inline void set_mErrorText_4(String_t* value)
	{
		___mErrorText_4 = value;
		Il2CppCodeGenWriteBarrier((&___mErrorText_4), value);
	}

	inline static int32_t get_offset_of_mErrorOccurred_5() { return static_cast<int32_t>(offsetof(DefaultInitializationErrorHandler_t3109936861, ___mErrorOccurred_5)); }
	inline bool get_mErrorOccurred_5() const { return ___mErrorOccurred_5; }
	inline bool* get_address_of_mErrorOccurred_5() { return &___mErrorOccurred_5; }
	inline void set_mErrorOccurred_5(bool value)
	{
		___mErrorOccurred_5 = value;
	}

	inline static int32_t get_offset_of_bodyStyle_7() { return static_cast<int32_t>(offsetof(DefaultInitializationErrorHandler_t3109936861, ___bodyStyle_7)); }
	inline GUIStyle_t3956901511 * get_bodyStyle_7() const { return ___bodyStyle_7; }
	inline GUIStyle_t3956901511 ** get_address_of_bodyStyle_7() { return &___bodyStyle_7; }
	inline void set_bodyStyle_7(GUIStyle_t3956901511 * value)
	{
		___bodyStyle_7 = value;
		Il2CppCodeGenWriteBarrier((&___bodyStyle_7), value);
	}

	inline static int32_t get_offset_of_headerStyle_8() { return static_cast<int32_t>(offsetof(DefaultInitializationErrorHandler_t3109936861, ___headerStyle_8)); }
	inline GUIStyle_t3956901511 * get_headerStyle_8() const { return ___headerStyle_8; }
	inline GUIStyle_t3956901511 ** get_address_of_headerStyle_8() { return &___headerStyle_8; }
	inline void set_headerStyle_8(GUIStyle_t3956901511 * value)
	{
		___headerStyle_8 = value;
		Il2CppCodeGenWriteBarrier((&___headerStyle_8), value);
	}

	inline static int32_t get_offset_of_footerStyle_9() { return static_cast<int32_t>(offsetof(DefaultInitializationErrorHandler_t3109936861, ___footerStyle_9)); }
	inline GUIStyle_t3956901511 * get_footerStyle_9() const { return ___footerStyle_9; }
	inline GUIStyle_t3956901511 ** get_address_of_footerStyle_9() { return &___footerStyle_9; }
	inline void set_footerStyle_9(GUIStyle_t3956901511 * value)
	{
		___footerStyle_9 = value;
		Il2CppCodeGenWriteBarrier((&___footerStyle_9), value);
	}

	inline static int32_t get_offset_of_bodyTexture_10() { return static_cast<int32_t>(offsetof(DefaultInitializationErrorHandler_t3109936861, ___bodyTexture_10)); }
	inline Texture2D_t3840446185 * get_bodyTexture_10() const { return ___bodyTexture_10; }
	inline Texture2D_t3840446185 ** get_address_of_bodyTexture_10() { return &___bodyTexture_10; }
	inline void set_bodyTexture_10(Texture2D_t3840446185 * value)
	{
		___bodyTexture_10 = value;
		Il2CppCodeGenWriteBarrier((&___bodyTexture_10), value);
	}

	inline static int32_t get_offset_of_headerTexture_11() { return static_cast<int32_t>(offsetof(DefaultInitializationErrorHandler_t3109936861, ___headerTexture_11)); }
	inline Texture2D_t3840446185 * get_headerTexture_11() const { return ___headerTexture_11; }
	inline Texture2D_t3840446185 ** get_address_of_headerTexture_11() { return &___headerTexture_11; }
	inline void set_headerTexture_11(Texture2D_t3840446185 * value)
	{
		___headerTexture_11 = value;
		Il2CppCodeGenWriteBarrier((&___headerTexture_11), value);
	}

	inline static int32_t get_offset_of_footerTexture_12() { return static_cast<int32_t>(offsetof(DefaultInitializationErrorHandler_t3109936861, ___footerTexture_12)); }
	inline Texture2D_t3840446185 * get_footerTexture_12() const { return ___footerTexture_12; }
	inline Texture2D_t3840446185 ** get_address_of_footerTexture_12() { return &___footerTexture_12; }
	inline void set_footerTexture_12(Texture2D_t3840446185 * value)
	{
		___footerTexture_12 = value;
		Il2CppCodeGenWriteBarrier((&___footerTexture_12), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEFAULTINITIALIZATIONERRORHANDLER_T3109936861_H
#ifndef TRACKABLEBEHAVIOUR_T1113559212_H
#define TRACKABLEBEHAVIOUR_T1113559212_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.TrackableBehaviour
struct  TrackableBehaviour_t1113559212  : public VuforiaMonoBehaviour_t1150221792
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
	Vector3_t3722313464  ___mPreviousScale_8;
	// Vuforia.TrackableBehaviour/Status Vuforia.TrackableBehaviour::mStatus
	int32_t ___mStatus_9;
	// Vuforia.Trackable Vuforia.TrackableBehaviour::mTrackable
	RuntimeObject* ___mTrackable_10;
	// System.Collections.Generic.List`1<Vuforia.ITrackableEventHandler> Vuforia.TrackableBehaviour::mTrackableEventHandlers
	List_1_t2968050330 * ___mTrackableEventHandlers_11;

public:
	inline static int32_t get_offset_of_U3CTimeStampU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(TrackableBehaviour_t1113559212, ___U3CTimeStampU3Ek__BackingField_4)); }
	inline double get_U3CTimeStampU3Ek__BackingField_4() const { return ___U3CTimeStampU3Ek__BackingField_4; }
	inline double* get_address_of_U3CTimeStampU3Ek__BackingField_4() { return &___U3CTimeStampU3Ek__BackingField_4; }
	inline void set_U3CTimeStampU3Ek__BackingField_4(double value)
	{
		___U3CTimeStampU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of_mTrackableName_5() { return static_cast<int32_t>(offsetof(TrackableBehaviour_t1113559212, ___mTrackableName_5)); }
	inline String_t* get_mTrackableName_5() const { return ___mTrackableName_5; }
	inline String_t** get_address_of_mTrackableName_5() { return &___mTrackableName_5; }
	inline void set_mTrackableName_5(String_t* value)
	{
		___mTrackableName_5 = value;
		Il2CppCodeGenWriteBarrier((&___mTrackableName_5), value);
	}

	inline static int32_t get_offset_of_mPreserveChildSize_6() { return static_cast<int32_t>(offsetof(TrackableBehaviour_t1113559212, ___mPreserveChildSize_6)); }
	inline bool get_mPreserveChildSize_6() const { return ___mPreserveChildSize_6; }
	inline bool* get_address_of_mPreserveChildSize_6() { return &___mPreserveChildSize_6; }
	inline void set_mPreserveChildSize_6(bool value)
	{
		___mPreserveChildSize_6 = value;
	}

	inline static int32_t get_offset_of_mInitializedInEditor_7() { return static_cast<int32_t>(offsetof(TrackableBehaviour_t1113559212, ___mInitializedInEditor_7)); }
	inline bool get_mInitializedInEditor_7() const { return ___mInitializedInEditor_7; }
	inline bool* get_address_of_mInitializedInEditor_7() { return &___mInitializedInEditor_7; }
	inline void set_mInitializedInEditor_7(bool value)
	{
		___mInitializedInEditor_7 = value;
	}

	inline static int32_t get_offset_of_mPreviousScale_8() { return static_cast<int32_t>(offsetof(TrackableBehaviour_t1113559212, ___mPreviousScale_8)); }
	inline Vector3_t3722313464  get_mPreviousScale_8() const { return ___mPreviousScale_8; }
	inline Vector3_t3722313464 * get_address_of_mPreviousScale_8() { return &___mPreviousScale_8; }
	inline void set_mPreviousScale_8(Vector3_t3722313464  value)
	{
		___mPreviousScale_8 = value;
	}

	inline static int32_t get_offset_of_mStatus_9() { return static_cast<int32_t>(offsetof(TrackableBehaviour_t1113559212, ___mStatus_9)); }
	inline int32_t get_mStatus_9() const { return ___mStatus_9; }
	inline int32_t* get_address_of_mStatus_9() { return &___mStatus_9; }
	inline void set_mStatus_9(int32_t value)
	{
		___mStatus_9 = value;
	}

	inline static int32_t get_offset_of_mTrackable_10() { return static_cast<int32_t>(offsetof(TrackableBehaviour_t1113559212, ___mTrackable_10)); }
	inline RuntimeObject* get_mTrackable_10() const { return ___mTrackable_10; }
	inline RuntimeObject** get_address_of_mTrackable_10() { return &___mTrackable_10; }
	inline void set_mTrackable_10(RuntimeObject* value)
	{
		___mTrackable_10 = value;
		Il2CppCodeGenWriteBarrier((&___mTrackable_10), value);
	}

	inline static int32_t get_offset_of_mTrackableEventHandlers_11() { return static_cast<int32_t>(offsetof(TrackableBehaviour_t1113559212, ___mTrackableEventHandlers_11)); }
	inline List_1_t2968050330 * get_mTrackableEventHandlers_11() const { return ___mTrackableEventHandlers_11; }
	inline List_1_t2968050330 ** get_address_of_mTrackableEventHandlers_11() { return &___mTrackableEventHandlers_11; }
	inline void set_mTrackableEventHandlers_11(List_1_t2968050330 * value)
	{
		___mTrackableEventHandlers_11 = value;
		Il2CppCodeGenWriteBarrier((&___mTrackableEventHandlers_11), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRACKABLEBEHAVIOUR_T1113559212_H
// System.Object[]
struct ObjectU5BU5D_t2843939325  : public RuntimeArray
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
// UnityEngine.Renderer[]
struct RendererU5BU5D_t3210418286  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Renderer_t2627027031 * m_Items[1];

public:
	inline Renderer_t2627027031 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Renderer_t2627027031 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Renderer_t2627027031 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline Renderer_t2627027031 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Renderer_t2627027031 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Renderer_t2627027031 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// UnityEngine.Collider[]
struct ColliderU5BU5D_t4234922487  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Collider_t1773347010 * m_Items[1];

public:
	inline Collider_t1773347010 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Collider_t1773347010 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Collider_t1773347010 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline Collider_t1773347010 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Collider_t1773347010 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Collider_t1773347010 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// UnityEngine.Canvas[]
struct CanvasU5BU5D_t682926938  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Canvas_t3310196443 * m_Items[1];

public:
	inline Canvas_t3310196443 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Canvas_t3310196443 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Canvas_t3310196443 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline Canvas_t3310196443 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Canvas_t3310196443 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Canvas_t3310196443 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};


// System.Void System.Action`1<Vuforia.VuforiaUnity/InitError>::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void Action_1__ctor_m2713332384_gshared (Action_1_t3593217305 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method);
// !!0 UnityEngine.Resources::GetBuiltinResource<System.Object>(System.String)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Resources_GetBuiltinResource_TisRuntimeObject_m3352626831_gshared (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<System.Object>()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponent_TisRuntimeObject_m2906321015_gshared (Component_t1923634451 * __this, const RuntimeMethod* method);
// !!0[] UnityEngine.Component::GetComponentsInChildren<System.Object>(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR ObjectU5BU5D_t2843939325* Component_GetComponentsInChildren_TisRuntimeObject_m2748495586_gshared (Component_t1923634451 * __this, bool p0, const RuntimeMethod* method);

// System.Void VuforiaMonoBehaviour::.ctor()
extern "C" IL2CPP_METHOD_ATTR void VuforiaMonoBehaviour__ctor_m348562674 (VuforiaMonoBehaviour_t1150221792 * __this, const RuntimeMethod* method);
// System.Void DefaultInitializationErrorHandler::SetErrorCode(Vuforia.VuforiaUnity/InitError)
extern "C" IL2CPP_METHOD_ATTR void DefaultInitializationErrorHandler_SetErrorCode_m594938833 (DefaultInitializationErrorHandler_t3109936861 * __this, int32_t ___errorCode0, const RuntimeMethod* method);
// System.Void DefaultInitializationErrorHandler::SetErrorOccurred(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void DefaultInitializationErrorHandler_SetErrorOccurred_m2281554525 (DefaultInitializationErrorHandler_t3109936861 * __this, bool ___errorOccurred0, const RuntimeMethod* method);
// Vuforia.VuforiaRuntime Vuforia.VuforiaRuntime::get_Instance()
extern "C" IL2CPP_METHOD_ATTR VuforiaRuntime_t1949122020 * VuforiaRuntime_get_Instance_m1058251676 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Void System.Action`1<Vuforia.VuforiaUnity/InitError>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m2713332384 (Action_1_t3593217305 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t3593217305 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_1__ctor_m2713332384_gshared)(__this, p0, p1, method);
}
// System.Void Vuforia.VuforiaRuntime::RegisterVuforiaInitErrorCallback(System.Action`1<Vuforia.VuforiaUnity/InitError>)
extern "C" IL2CPP_METHOD_ATTR void VuforiaRuntime_RegisterVuforiaInitErrorCallback_m2728879505 (VuforiaRuntime_t1949122020 * __this, Action_1_t3593217305 * p0, const RuntimeMethod* method);
// System.Void DefaultInitializationErrorHandler::SetupGUIStyles()
extern "C" IL2CPP_METHOD_ATTR void DefaultInitializationErrorHandler_SetupGUIStyles_m1676302763 (DefaultInitializationErrorHandler_t3109936861 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.Screen::get_width()
extern "C" IL2CPP_METHOD_ATTR int32_t Screen_get_width_m345039817 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Int32 UnityEngine.Screen::get_height()
extern "C" IL2CPP_METHOD_ATTR int32_t Screen_get_height_m1623532518 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Void UnityEngine.Rect::.ctor(System.Single,System.Single,System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR void Rect__ctor_m2614021312 (Rect_t2360479859 * __this, float p0, float p1, float p2, float p3, const RuntimeMethod* method);
// System.Void UnityEngine.GUI/WindowFunction::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void WindowFunction__ctor_m2544237635 (WindowFunction_t3146511083 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method);
// UnityEngine.Rect UnityEngine.GUI::Window(System.Int32,UnityEngine.Rect,UnityEngine.GUI/WindowFunction,System.String)
extern "C" IL2CPP_METHOD_ATTR Rect_t2360479859  GUI_Window_m1088326791 (RuntimeObject * __this /* static, unused */, int32_t p0, Rect_t2360479859  p1, WindowFunction_t3146511083 * p2, String_t* p3, const RuntimeMethod* method);
// System.Void Vuforia.VuforiaRuntime::UnregisterVuforiaInitErrorCallback(System.Action`1<Vuforia.VuforiaUnity/InitError>)
extern "C" IL2CPP_METHOD_ATTR void VuforiaRuntime_UnregisterVuforiaInitErrorCallback_m1304340042 (VuforiaRuntime_t1949122020 * __this, Action_1_t3593217305 * p0, const RuntimeMethod* method);
// System.Void UnityEngine.GUI::Label(UnityEngine.Rect,System.String,UnityEngine.GUIStyle)
extern "C" IL2CPP_METHOD_ATTR void GUI_Label_m2420537077 (RuntimeObject * __this /* static, unused */, Rect_t2360479859  p0, String_t* p1, GUIStyle_t3956901511 * p2, const RuntimeMethod* method);
// System.Boolean UnityEngine.GUI::Button(UnityEngine.Rect,System.String,UnityEngine.GUIStyle)
extern "C" IL2CPP_METHOD_ATTR bool GUI_Button_m2223708732 (RuntimeObject * __this /* static, unused */, Rect_t2360479859  p0, String_t* p1, GUIStyle_t3956901511 * p2, const RuntimeMethod* method);
// System.Void UnityEngine.Application::Quit()
extern "C" IL2CPP_METHOD_ATTR void Application_Quit_m470877999 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.String DefaultInitializationErrorHandler::getKeyInfo()
extern "C" IL2CPP_METHOD_ATTR String_t* DefaultInitializationErrorHandler_getKeyInfo_m3940778236 (DefaultInitializationErrorHandler_t3109936861 * __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Concat_m3937257545 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Concat_m3755062657 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, String_t* p2, const RuntimeMethod* method);
// System.String UnityEngine.Application::get_productName()
extern "C" IL2CPP_METHOD_ATTR String_t* Application_get_productName_m2401755738 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.String System.String::Replace(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Replace_m1273907647 (String_t* __this, String_t* p0, String_t* p1, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String,System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Concat_m2163913788 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, String_t* p2, String_t* p3, const RuntimeMethod* method);
// System.String System.String::Concat(System.Object[])
extern "C" IL2CPP_METHOD_ATTR String_t* String_Concat_m2971454694 (RuntimeObject * __this /* static, unused */, ObjectU5BU5D_t2843939325* p0, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogError(System.Object)
extern "C" IL2CPP_METHOD_ATTR void Debug_LogError_m2850623458 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, const RuntimeMethod* method);
// Vuforia.VuforiaConfiguration Vuforia.VuforiaConfiguration::get_Instance()
extern "C" IL2CPP_METHOD_ATTR VuforiaConfiguration_t1763229349 * VuforiaConfiguration_get_Instance_m3335903280 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// Vuforia.VuforiaConfiguration/GenericVuforiaConfiguration Vuforia.VuforiaConfiguration::get_Vuforia()
extern "C" IL2CPP_METHOD_ATTR GenericVuforiaConfiguration_t3697830469 * VuforiaConfiguration_get_Vuforia_m1588208597 (VuforiaConfiguration_t1763229349 * __this, const RuntimeMethod* method);
// System.String Vuforia.VuforiaConfiguration/GenericVuforiaConfiguration::get_LicenseKey()
extern "C" IL2CPP_METHOD_ATTR String_t* GenericVuforiaConfiguration_get_LicenseKey_m2270076687 (GenericVuforiaConfiguration_t3697830469 * __this, const RuntimeMethod* method);
// System.Int32 System.String::get_Length()
extern "C" IL2CPP_METHOD_ATTR int32_t String_get_Length_m3847582255 (String_t* __this, const RuntimeMethod* method);
// System.String System.String::Substring(System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Substring_m1610150815 (String_t* __this, int32_t p0, int32_t p1, const RuntimeMethod* method);
// System.Single UnityEngine.Screen::get_dpi()
extern "C" IL2CPP_METHOD_ATTR float Screen_get_dpi_m495672463 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::get_white()
extern "C" IL2CPP_METHOD_ATTR Color_t2555686324  Color_get_white_m332174077 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// UnityEngine.Texture2D DefaultInitializationErrorHandler::CreateSinglePixelTexture(UnityEngine.Color)
extern "C" IL2CPP_METHOD_ATTR Texture2D_t3840446185 * DefaultInitializationErrorHandler_CreateSinglePixelTexture_m3383403409 (DefaultInitializationErrorHandler_t3109936861 * __this, Color_t2555686324  ___color0, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::InverseLerp(System.Single,System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR float Mathf_InverseLerp_m4155825980 (RuntimeObject * __this /* static, unused */, float p0, float p1, float p2, const RuntimeMethod* method);
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR void Color__ctor_m286683560 (Color_t2555686324 * __this, float p0, float p1, float p2, const RuntimeMethod* method);
// System.Void UnityEngine.GUIStyle::.ctor()
extern "C" IL2CPP_METHOD_ATTR void GUIStyle__ctor_m4038363858 (GUIStyle_t3956901511 * __this, const RuntimeMethod* method);
// UnityEngine.GUIStyleState UnityEngine.GUIStyle::get_normal()
extern "C" IL2CPP_METHOD_ATTR GUIStyleState_t1397964415 * GUIStyle_get_normal_m729441812 (GUIStyle_t3956901511 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.GUIStyleState::set_background(UnityEngine.Texture2D)
extern "C" IL2CPP_METHOD_ATTR void GUIStyleState_set_background_m369476077 (GUIStyleState_t1397964415 * __this, Texture2D_t3840446185 * p0, const RuntimeMethod* method);
// !!0 UnityEngine.Resources::GetBuiltinResource<UnityEngine.Font>(System.String)
inline Font_t1956802104 * Resources_GetBuiltinResource_TisFont_t1956802104_m2738776830 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method)
{
	return ((  Font_t1956802104 * (*) (RuntimeObject * /* static, unused */, String_t*, const RuntimeMethod*))Resources_GetBuiltinResource_TisRuntimeObject_m3352626831_gshared)(__this /* static, unused */, p0, method);
}
// System.Void UnityEngine.GUIStyle::set_font(UnityEngine.Font)
extern "C" IL2CPP_METHOD_ATTR void GUIStyle_set_font_m2490449107 (GUIStyle_t3956901511 * __this, Font_t1956802104 * p0, const RuntimeMethod* method);
// System.Void UnityEngine.GUIStyle::set_fontSize(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void GUIStyle_set_fontSize_m1566850023 (GUIStyle_t3956901511 * __this, int32_t p0, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::get_black()
extern "C" IL2CPP_METHOD_ATTR Color_t2555686324  Color_get_black_m719512684 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Void UnityEngine.GUIStyleState::set_textColor(UnityEngine.Color)
extern "C" IL2CPP_METHOD_ATTR void GUIStyleState_set_textColor_m1105876047 (GUIStyleState_t1397964415 * __this, Color_t2555686324  p0, const RuntimeMethod* method);
// System.Void UnityEngine.GUIStyle::set_wordWrap(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void GUIStyle_set_wordWrap_m1419501823 (GUIStyle_t3956901511 * __this, bool p0, const RuntimeMethod* method);
// System.Void UnityEngine.GUIStyle::set_alignment(UnityEngine.TextAnchor)
extern "C" IL2CPP_METHOD_ATTR void GUIStyle_set_alignment_m3944619660 (GUIStyle_t3956901511 * __this, int32_t p0, const RuntimeMethod* method);
// System.Void UnityEngine.RectOffset::.ctor(System.Int32,System.Int32,System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void RectOffset__ctor_m732140021 (RectOffset_t1369453676 * __this, int32_t p0, int32_t p1, int32_t p2, int32_t p3, const RuntimeMethod* method);
// System.Void UnityEngine.GUIStyle::set_padding(UnityEngine.RectOffset)
extern "C" IL2CPP_METHOD_ATTR void GUIStyle_set_padding_m3302456044 (GUIStyle_t3956901511 * __this, RectOffset_t1369453676 * p0, const RuntimeMethod* method);
// System.Void UnityEngine.GUIStyle::.ctor(UnityEngine.GUIStyle)
extern "C" IL2CPP_METHOD_ATTR void GUIStyle__ctor_m2912682974 (GUIStyle_t3956901511 * __this, GUIStyle_t3956901511 * p0, const RuntimeMethod* method);
// System.Void UnityEngine.Texture2D::.ctor(System.Int32,System.Int32,UnityEngine.TextureFormat,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void Texture2D__ctor_m2862217990 (Texture2D_t3840446185 * __this, int32_t p0, int32_t p1, int32_t p2, bool p3, const RuntimeMethod* method);
// System.Void UnityEngine.Texture2D::SetPixel(System.Int32,System.Int32,UnityEngine.Color)
extern "C" IL2CPP_METHOD_ATTR void Texture2D_SetPixel_m2984741184 (Texture2D_t3840446185 * __this, int32_t p0, int32_t p1, Color_t2555686324  p2, const RuntimeMethod* method);
// System.Void UnityEngine.Texture2D::Apply()
extern "C" IL2CPP_METHOD_ATTR void Texture2D_Apply_m2271746283 (Texture2D_t3840446185 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
extern "C" IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m1579109191 (MonoBehaviour_t3962482529 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<Vuforia.TrackableBehaviour>()
inline TrackableBehaviour_t1113559212 * Component_GetComponent_TisTrackableBehaviour_t1113559212_m1736119408 (Component_t1923634451 * __this, const RuntimeMethod* method)
{
	return ((  TrackableBehaviour_t1113559212 * (*) (Component_t1923634451 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m2906321015_gshared)(__this, method);
}
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
extern "C" IL2CPP_METHOD_ATTR bool Object_op_Implicit_m3574996620 (RuntimeObject * __this /* static, unused */, Object_t631007953 * p0, const RuntimeMethod* method);
// System.Void Vuforia.TrackableBehaviour::RegisterTrackableEventHandler(Vuforia.ITrackableEventHandler)
extern "C" IL2CPP_METHOD_ATTR void TrackableBehaviour_RegisterTrackableEventHandler_m2462783619 (TrackableBehaviour_t1113559212 * __this, RuntimeObject* p0, const RuntimeMethod* method);
// System.Boolean Vuforia.TrackableBehaviour::UnregisterTrackableEventHandler(Vuforia.ITrackableEventHandler)
extern "C" IL2CPP_METHOD_ATTR bool TrackableBehaviour_UnregisterTrackableEventHandler_m1201569614 (TrackableBehaviour_t1113559212 * __this, RuntimeObject* p0, const RuntimeMethod* method);
// System.String Vuforia.TrackableBehaviour::get_TrackableName()
extern "C" IL2CPP_METHOD_ATTR String_t* TrackableBehaviour_get_TrackableName_m3644057705 (TrackableBehaviour_t1113559212 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::Log(System.Object)
extern "C" IL2CPP_METHOD_ATTR void Debug_Log_m4051431634 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, const RuntimeMethod* method);
// !!0[] UnityEngine.Component::GetComponentsInChildren<UnityEngine.Renderer>(System.Boolean)
inline RendererU5BU5D_t3210418286* Component_GetComponentsInChildren_TisRenderer_t2627027031_m2673895911 (Component_t1923634451 * __this, bool p0, const RuntimeMethod* method)
{
	return ((  RendererU5BU5D_t3210418286* (*) (Component_t1923634451 *, bool, const RuntimeMethod*))Component_GetComponentsInChildren_TisRuntimeObject_m2748495586_gshared)(__this, p0, method);
}
// !!0[] UnityEngine.Component::GetComponentsInChildren<UnityEngine.Collider>(System.Boolean)
inline ColliderU5BU5D_t4234922487* Component_GetComponentsInChildren_TisCollider_t1773347010_m2667952426 (Component_t1923634451 * __this, bool p0, const RuntimeMethod* method)
{
	return ((  ColliderU5BU5D_t4234922487* (*) (Component_t1923634451 *, bool, const RuntimeMethod*))Component_GetComponentsInChildren_TisRuntimeObject_m2748495586_gshared)(__this, p0, method);
}
// !!0[] UnityEngine.Component::GetComponentsInChildren<UnityEngine.Canvas>(System.Boolean)
inline CanvasU5BU5D_t682926938* Component_GetComponentsInChildren_TisCanvas_t3310196443_m1479281147 (Component_t1923634451 * __this, bool p0, const RuntimeMethod* method)
{
	return ((  CanvasU5BU5D_t682926938* (*) (Component_t1923634451 *, bool, const RuntimeMethod*))Component_GetComponentsInChildren_TisRuntimeObject_m2748495586_gshared)(__this, p0, method);
}
// System.Void UnityEngine.Renderer::set_enabled(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void Renderer_set_enabled_m1727253150 (Renderer_t2627027031 * __this, bool p0, const RuntimeMethod* method);
// System.Void UnityEngine.Collider::set_enabled(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void Collider_set_enabled_m1517463283 (Collider_t1773347010 * __this, bool p0, const RuntimeMethod* method);
// System.Void UnityEngine.Behaviour::set_enabled(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void Behaviour_set_enabled_m20417929 (Behaviour_t1437897464 * __this, bool p0, const RuntimeMethod* method);
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
// System.Void DefaultInitializationErrorHandler::.ctor()
extern "C" IL2CPP_METHOD_ATTR void DefaultInitializationErrorHandler__ctor_m2502050417 (DefaultInitializationErrorHandler_t3109936861 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DefaultInitializationErrorHandler__ctor_m2502050417_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		__this->set_mErrorText_4(L_0);
		VuforiaMonoBehaviour__ctor_m348562674(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void DefaultInitializationErrorHandler::OnVuforiaInitializationError(Vuforia.VuforiaUnity/InitError)
extern "C" IL2CPP_METHOD_ATTR void DefaultInitializationErrorHandler_OnVuforiaInitializationError_m3498850087 (DefaultInitializationErrorHandler_t3109936861 * __this, int32_t ___initError0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___initError0;
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_1 = ___initError0;
		DefaultInitializationErrorHandler_SetErrorCode_m594938833(__this, L_1, /*hidden argument*/NULL);
		DefaultInitializationErrorHandler_SetErrorOccurred_m2281554525(__this, (bool)1, /*hidden argument*/NULL);
	}

IL_0014:
	{
		return;
	}
}
// System.Void DefaultInitializationErrorHandler::Awake()
extern "C" IL2CPP_METHOD_ATTR void DefaultInitializationErrorHandler_Awake_m2464808560 (DefaultInitializationErrorHandler_t3109936861 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DefaultInitializationErrorHandler_Awake_m2464808560_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(VuforiaRuntime_t1949122020_il2cpp_TypeInfo_var);
		VuforiaRuntime_t1949122020 * L_0 = VuforiaRuntime_get_Instance_m1058251676(NULL /*static, unused*/, /*hidden argument*/NULL);
		intptr_t L_1 = (intptr_t)DefaultInitializationErrorHandler_OnVuforiaInitializationError_m3498850087_RuntimeMethod_var;
		Action_1_t3593217305 * L_2 = (Action_1_t3593217305 *)il2cpp_codegen_object_new(Action_1_t3593217305_il2cpp_TypeInfo_var);
		Action_1__ctor_m2713332384(L_2, __this, (intptr_t)L_1, /*hidden argument*/Action_1__ctor_m2713332384_RuntimeMethod_var);
		NullCheck(L_0);
		VuforiaRuntime_RegisterVuforiaInitErrorCallback_m2728879505(L_0, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void DefaultInitializationErrorHandler::Start()
extern "C" IL2CPP_METHOD_ATTR void DefaultInitializationErrorHandler_Start_m170033127 (DefaultInitializationErrorHandler_t3109936861 * __this, const RuntimeMethod* method)
{
	{
		DefaultInitializationErrorHandler_SetupGUIStyles_m1676302763(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void DefaultInitializationErrorHandler::OnGUI()
extern "C" IL2CPP_METHOD_ATTR void DefaultInitializationErrorHandler_OnGUI_m440136624 (DefaultInitializationErrorHandler_t3109936861 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DefaultInitializationErrorHandler_OnGUI_m440136624_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = __this->get_mErrorOccurred_5();
		if (!L_0)
		{
			goto IL_003e;
		}
	}
	{
		int32_t L_1 = Screen_get_width_m345039817(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_2 = Screen_get_height_m1623532518(NULL /*static, unused*/, /*hidden argument*/NULL);
		Rect_t2360479859  L_3;
		memset(&L_3, 0, sizeof(L_3));
		Rect__ctor_m2614021312((&L_3), (0.0f), (0.0f), (((float)((float)L_1))), (((float)((float)L_2))), /*hidden argument*/NULL);
		intptr_t L_4 = (intptr_t)DefaultInitializationErrorHandler_DrawWindowContent_m3171003143_RuntimeMethod_var;
		WindowFunction_t3146511083 * L_5 = (WindowFunction_t3146511083 *)il2cpp_codegen_object_new(WindowFunction_t3146511083_il2cpp_TypeInfo_var);
		WindowFunction__ctor_m2544237635(L_5, __this, (intptr_t)L_4, /*hidden argument*/NULL);
		String_t* L_6 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t1624858472_il2cpp_TypeInfo_var);
		GUI_Window_m1088326791(NULL /*static, unused*/, 0, L_3, L_5, L_6, /*hidden argument*/NULL);
	}

IL_003e:
	{
		return;
	}
}
// System.Void DefaultInitializationErrorHandler::OnDestroy()
extern "C" IL2CPP_METHOD_ATTR void DefaultInitializationErrorHandler_OnDestroy_m1669200062 (DefaultInitializationErrorHandler_t3109936861 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DefaultInitializationErrorHandler_OnDestroy_m1669200062_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(VuforiaRuntime_t1949122020_il2cpp_TypeInfo_var);
		VuforiaRuntime_t1949122020 * L_0 = VuforiaRuntime_get_Instance_m1058251676(NULL /*static, unused*/, /*hidden argument*/NULL);
		intptr_t L_1 = (intptr_t)DefaultInitializationErrorHandler_OnVuforiaInitializationError_m3498850087_RuntimeMethod_var;
		Action_1_t3593217305 * L_2 = (Action_1_t3593217305 *)il2cpp_codegen_object_new(Action_1_t3593217305_il2cpp_TypeInfo_var);
		Action_1__ctor_m2713332384(L_2, __this, (intptr_t)L_1, /*hidden argument*/Action_1__ctor_m2713332384_RuntimeMethod_var);
		NullCheck(L_0);
		VuforiaRuntime_UnregisterVuforiaInitErrorCallback_m1304340042(L_0, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void DefaultInitializationErrorHandler::DrawWindowContent(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void DefaultInitializationErrorHandler_DrawWindowContent_m3171003143 (DefaultInitializationErrorHandler_t3109936861 * __this, int32_t ___id0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DefaultInitializationErrorHandler_DrawWindowContent_m3171003143_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Rect_t2360479859  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Rect_t2360479859  V_1;
	memset(&V_1, 0, sizeof(V_1));
	Rect_t2360479859  V_2;
	memset(&V_2, 0, sizeof(V_2));
	{
		int32_t L_0 = Screen_get_width_m345039817(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_1 = Screen_get_height_m1623532518(NULL /*static, unused*/, /*hidden argument*/NULL);
		Rect__ctor_m2614021312((Rect_t2360479859 *)(&V_0), (0.0f), (0.0f), (((float)((float)L_0))), (((float)((float)((int32_t)((int32_t)L_1/(int32_t)8))))), /*hidden argument*/NULL);
		int32_t L_2 = Screen_get_height_m1623532518(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_3 = Screen_get_width_m345039817(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_4 = Screen_get_height_m1623532518(NULL /*static, unused*/, /*hidden argument*/NULL);
		Rect__ctor_m2614021312((Rect_t2360479859 *)(&V_1), (0.0f), (((float)((float)((int32_t)((int32_t)L_2/(int32_t)8))))), (((float)((float)L_3))), (((float)((float)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)((int32_t)L_4/(int32_t)8)), (int32_t)6))))), /*hidden argument*/NULL);
		int32_t L_5 = Screen_get_height_m1623532518(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_6 = Screen_get_height_m1623532518(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_7 = Screen_get_width_m345039817(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_8 = Screen_get_height_m1623532518(NULL /*static, unused*/, /*hidden argument*/NULL);
		Rect__ctor_m2614021312((Rect_t2360479859 *)(&V_2), (0.0f), (((float)((float)((int32_t)il2cpp_codegen_subtract((int32_t)L_5, (int32_t)((int32_t)((int32_t)L_6/(int32_t)8))))))), (((float)((float)L_7))), (((float)((float)((int32_t)((int32_t)L_8/(int32_t)8))))), /*hidden argument*/NULL);
		Rect_t2360479859  L_9 = V_0;
		GUIStyle_t3956901511 * L_10 = __this->get_headerStyle_8();
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t1624858472_il2cpp_TypeInfo_var);
		GUI_Label_m2420537077(NULL /*static, unused*/, L_9, _stringLiteral2016908147, L_10, /*hidden argument*/NULL);
		Rect_t2360479859  L_11 = V_1;
		String_t* L_12 = __this->get_mErrorText_4();
		GUIStyle_t3956901511 * L_13 = __this->get_bodyStyle_7();
		GUI_Label_m2420537077(NULL /*static, unused*/, L_11, L_12, L_13, /*hidden argument*/NULL);
		Rect_t2360479859  L_14 = V_2;
		GUIStyle_t3956901511 * L_15 = __this->get_footerStyle_9();
		bool L_16 = GUI_Button_m2223708732(NULL /*static, unused*/, L_14, _stringLiteral3483484711, L_15, /*hidden argument*/NULL);
		if (!L_16)
		{
			goto IL_00a9;
		}
	}
	{
		Application_Quit_m470877999(NULL /*static, unused*/, /*hidden argument*/NULL);
	}

IL_00a9:
	{
		return;
	}
}
// System.Void DefaultInitializationErrorHandler::SetErrorCode(Vuforia.VuforiaUnity/InitError)
extern "C" IL2CPP_METHOD_ATTR void DefaultInitializationErrorHandler_SetErrorCode_m594938833 (DefaultInitializationErrorHandler_t3109936861 * __this, int32_t ___errorCode0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DefaultInitializationErrorHandler_SetErrorCode_m594938833_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		int32_t L_0 = ___errorCode0;
		switch (((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)((int32_t)10))))
		{
			case 0:
			{
				goto IL_0036;
			}
			case 1:
			{
				goto IL_00ac;
			}
			case 2:
			{
				goto IL_0091;
			}
			case 3:
			{
				goto IL_0071;
			}
			case 4:
			{
				goto IL_0081;
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
				goto IL_00cc;
			}
			case 8:
			{
				goto IL_00eb;
			}
			case 9:
			{
				goto IL_00fb;
			}
		}
	}
	{
		goto IL_010b;
	}

IL_0036:
	{
		__this->set_mErrorText_4(_stringLiteral3279329212);
		goto IL_010b;
	}

IL_0046:
	{
		__this->set_mErrorText_4(_stringLiteral3325583105);
		goto IL_010b;
	}

IL_0056:
	{
		String_t* L_1 = DefaultInitializationErrorHandler_getKeyInfo_m3940778236(__this, /*hidden argument*/NULL);
		String_t* L_2 = String_Concat_m3937257545(NULL /*static, unused*/, _stringLiteral1253325676, L_1, /*hidden argument*/NULL);
		__this->set_mErrorText_4(L_2);
		goto IL_010b;
	}

IL_0071:
	{
		__this->set_mErrorText_4(_stringLiteral2959890895);
		goto IL_010b;
	}

IL_0081:
	{
		__this->set_mErrorText_4(_stringLiteral2293327149);
		goto IL_010b;
	}

IL_0091:
	{
		String_t* L_3 = DefaultInitializationErrorHandler_getKeyInfo_m3940778236(__this, /*hidden argument*/NULL);
		String_t* L_4 = String_Concat_m3937257545(NULL /*static, unused*/, _stringLiteral2746077084, L_3, /*hidden argument*/NULL);
		__this->set_mErrorText_4(L_4);
		goto IL_010b;
	}

IL_00ac:
	{
		String_t* L_5 = DefaultInitializationErrorHandler_getKeyInfo_m3940778236(__this, /*hidden argument*/NULL);
		String_t* L_6 = String_Concat_m3755062657(NULL /*static, unused*/, _stringLiteral2746058527, L_5, _stringLiteral491174246, /*hidden argument*/NULL);
		__this->set_mErrorText_4(L_6);
		goto IL_010b;
	}

IL_00cc:
	{
		String_t* L_7 = Application_get_productName_m2401755738(NULL /*static, unused*/, /*hidden argument*/NULL);
		String_t* L_8 = String_Concat_m3755062657(NULL /*static, unused*/, _stringLiteral3183081100, L_7, _stringLiteral868600955, /*hidden argument*/NULL);
		__this->set_mErrorText_4(L_8);
		goto IL_010b;
	}

IL_00eb:
	{
		__this->set_mErrorText_4(_stringLiteral3122929577);
		goto IL_010b;
	}

IL_00fb:
	{
		__this->set_mErrorText_4(_stringLiteral3567432369);
		goto IL_010b;
	}

IL_010b:
	{
		RuntimeObject * L_9 = Box(InitError_t3420749710_il2cpp_TypeInfo_var, (&___errorCode0));
		NullCheck(L_9);
		String_t* L_10 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_9);
		___errorCode0 = *(int32_t*)UnBox(L_9);
		NullCheck(L_10);
		String_t* L_11 = String_Replace_m1273907647(L_10, _stringLiteral3452614641, _stringLiteral3452614528, /*hidden argument*/NULL);
		String_t* L_12 = __this->get_mErrorText_4();
		String_t* L_13 = String_Concat_m2163913788(NULL /*static, unused*/, _stringLiteral229317972, L_11, _stringLiteral2072581803, L_12, /*hidden argument*/NULL);
		__this->set_mErrorText_4(L_13);
		String_t* L_14 = __this->get_mErrorText_4();
		String_t* L_15 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		NullCheck(L_14);
		String_t* L_16 = String_Replace_m1273907647(L_14, _stringLiteral229317972, L_15, /*hidden argument*/NULL);
		String_t* L_17 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		NullCheck(L_16);
		String_t* L_18 = String_Replace_m1273907647(L_16, _stringLiteral2642543365, L_17, /*hidden argument*/NULL);
		V_0 = L_18;
		ObjectU5BU5D_t2843939325* L_19 = (ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)4);
		ObjectU5BU5D_t2843939325* L_20 = L_19;
		NullCheck(L_20);
		ArrayElementTypeCheck (L_20, _stringLiteral3752705136);
		(L_20)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)_stringLiteral3752705136);
		ObjectU5BU5D_t2843939325* L_21 = L_20;
		int32_t L_22 = ___errorCode0;
		int32_t L_23 = L_22;
		RuntimeObject * L_24 = Box(InitError_t3420749710_il2cpp_TypeInfo_var, &L_23);
		NullCheck(L_21);
		ArrayElementTypeCheck (L_21, L_24);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_24);
		ObjectU5BU5D_t2843939325* L_25 = L_21;
		NullCheck(L_25);
		ArrayElementTypeCheck (L_25, _stringLiteral3453007782);
		(L_25)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)_stringLiteral3453007782);
		ObjectU5BU5D_t2843939325* L_26 = L_25;
		String_t* L_27 = V_0;
		NullCheck(L_26);
		ArrayElementTypeCheck (L_26, L_27);
		(L_26)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_27);
		String_t* L_28 = String_Concat_m2971454694(NULL /*static, unused*/, L_26, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_LogError_m2850623458(NULL /*static, unused*/, L_28, /*hidden argument*/NULL);
		return;
	}
}
// System.Void DefaultInitializationErrorHandler::SetErrorOccurred(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void DefaultInitializationErrorHandler_SetErrorOccurred_m2281554525 (DefaultInitializationErrorHandler_t3109936861 * __this, bool ___errorOccurred0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___errorOccurred0;
		__this->set_mErrorOccurred_5(L_0);
		return;
	}
}
// System.String DefaultInitializationErrorHandler::getKeyInfo()
extern "C" IL2CPP_METHOD_ATTR String_t* DefaultInitializationErrorHandler_getKeyInfo_m3940778236 (DefaultInitializationErrorHandler_t3109936861 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DefaultInitializationErrorHandler_getKeyInfo_m3940778236_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	String_t* V_1 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(VuforiaConfiguration_t1763229349_il2cpp_TypeInfo_var);
		VuforiaConfiguration_t1763229349 * L_0 = VuforiaConfiguration_get_Instance_m3335903280(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		GenericVuforiaConfiguration_t3697830469 * L_1 = VuforiaConfiguration_get_Vuforia_m1588208597(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		String_t* L_2 = GenericVuforiaConfiguration_get_LicenseKey_m2270076687(L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		String_t* L_3 = V_0;
		NullCheck(L_3);
		int32_t L_4 = String_get_Length_m3847582255(L_3, /*hidden argument*/NULL);
		if ((((int32_t)L_4) <= ((int32_t)((int32_t)10))))
		{
			goto IL_0079;
		}
	}
	{
		ObjectU5BU5D_t2843939325* L_5 = (ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)7);
		ObjectU5BU5D_t2843939325* L_6 = L_5;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, _stringLiteral1431967569);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)_stringLiteral1431967569);
		ObjectU5BU5D_t2843939325* L_7 = L_6;
		String_t* L_8 = V_0;
		NullCheck(L_8);
		int32_t L_9 = String_get_Length_m3847582255(L_8, /*hidden argument*/NULL);
		int32_t L_10 = L_9;
		RuntimeObject * L_11 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_10);
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_11);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_11);
		ObjectU5BU5D_t2843939325* L_12 = L_7;
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, _stringLiteral3797279721);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)_stringLiteral3797279721);
		ObjectU5BU5D_t2843939325* L_13 = L_12;
		String_t* L_14 = V_0;
		NullCheck(L_14);
		String_t* L_15 = String_Substring_m1610150815(L_14, 0, 5, /*hidden argument*/NULL);
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, L_15);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_15);
		ObjectU5BU5D_t2843939325* L_16 = L_13;
		NullCheck(L_16);
		ArrayElementTypeCheck (L_16, _stringLiteral1108443480);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject *)_stringLiteral1108443480);
		ObjectU5BU5D_t2843939325* L_17 = L_16;
		String_t* L_18 = V_0;
		String_t* L_19 = V_0;
		NullCheck(L_19);
		int32_t L_20 = String_get_Length_m3847582255(L_19, /*hidden argument*/NULL);
		NullCheck(L_18);
		String_t* L_21 = String_Substring_m1610150815(L_18, ((int32_t)il2cpp_codegen_subtract((int32_t)L_20, (int32_t)5)), 5, /*hidden argument*/NULL);
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, L_21);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(5), (RuntimeObject *)L_21);
		ObjectU5BU5D_t2843939325* L_22 = L_17;
		NullCheck(L_22);
		ArrayElementTypeCheck (L_22, _stringLiteral2072975055);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(6), (RuntimeObject *)_stringLiteral2072975055);
		String_t* L_23 = String_Concat_m2971454694(NULL /*static, unused*/, L_22, /*hidden argument*/NULL);
		V_1 = L_23;
		goto IL_00af;
	}

IL_0079:
	{
		ObjectU5BU5D_t2843939325* L_24 = (ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)5);
		ObjectU5BU5D_t2843939325* L_25 = L_24;
		NullCheck(L_25);
		ArrayElementTypeCheck (L_25, _stringLiteral1431967569);
		(L_25)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)_stringLiteral1431967569);
		ObjectU5BU5D_t2843939325* L_26 = L_25;
		String_t* L_27 = V_0;
		NullCheck(L_27);
		int32_t L_28 = String_get_Length_m3847582255(L_27, /*hidden argument*/NULL);
		int32_t L_29 = L_28;
		RuntimeObject * L_30 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_29);
		NullCheck(L_26);
		ArrayElementTypeCheck (L_26, L_30);
		(L_26)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_30);
		ObjectU5BU5D_t2843939325* L_31 = L_26;
		NullCheck(L_31);
		ArrayElementTypeCheck (L_31, _stringLiteral1498400317);
		(L_31)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)_stringLiteral1498400317);
		ObjectU5BU5D_t2843939325* L_32 = L_31;
		String_t* L_33 = V_0;
		NullCheck(L_32);
		ArrayElementTypeCheck (L_32, L_33);
		(L_32)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_33);
		ObjectU5BU5D_t2843939325* L_34 = L_32;
		NullCheck(L_34);
		ArrayElementTypeCheck (L_34, _stringLiteral2072975055);
		(L_34)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject *)_stringLiteral2072975055);
		String_t* L_35 = String_Concat_m2971454694(NULL /*static, unused*/, L_34, /*hidden argument*/NULL);
		V_1 = L_35;
	}

IL_00af:
	{
		String_t* L_36 = V_1;
		return L_36;
	}
}
// System.Void DefaultInitializationErrorHandler::SetupGUIStyles()
extern "C" IL2CPP_METHOD_ATTR void DefaultInitializationErrorHandler_SetupGUIStyles_m1676302763 (DefaultInitializationErrorHandler_t3109936861 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DefaultInitializationErrorHandler_SetupGUIStyles_m1676302763_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	float V_1 = 0.0f;
	int32_t V_2 = 0;
	int32_t G_B3_0 = 0;
	int32_t G_B6_0 = 0;
	{
		int32_t L_0 = Screen_get_width_m345039817(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_1 = Screen_get_height_m1623532518(NULL /*static, unused*/, /*hidden argument*/NULL);
		if ((((int32_t)L_0) >= ((int32_t)L_1)))
		{
			goto IL_0019;
		}
	}
	{
		int32_t L_2 = Screen_get_width_m345039817(NULL /*static, unused*/, /*hidden argument*/NULL);
		G_B3_0 = L_2;
		goto IL_001e;
	}

IL_0019:
	{
		int32_t L_3 = Screen_get_height_m1623532518(NULL /*static, unused*/, /*hidden argument*/NULL);
		G_B3_0 = L_3;
	}

IL_001e:
	{
		V_0 = G_B3_0;
		int32_t L_4 = V_0;
		float L_5 = Screen_get_dpi_m495672463(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_1 = ((float)((float)(((float)((float)L_4)))/(float)L_5));
		float L_6 = V_1;
		if ((!(((float)L_6) > ((float)(4.0f)))))
		{
			goto IL_0039;
		}
	}
	{
		G_B6_0 = 2;
		goto IL_003a;
	}

IL_0039:
	{
		G_B6_0 = 1;
	}

IL_003a:
	{
		V_2 = G_B6_0;
		Color_t2555686324  L_7 = Color_get_white_m332174077(NULL /*static, unused*/, /*hidden argument*/NULL);
		Texture2D_t3840446185 * L_8 = DefaultInitializationErrorHandler_CreateSinglePixelTexture_m3383403409(__this, L_7, /*hidden argument*/NULL);
		__this->set_bodyTexture_10(L_8);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		float L_9 = Mathf_InverseLerp_m4155825980(NULL /*static, unused*/, (0.0f), (255.0f), (220.0f), /*hidden argument*/NULL);
		float L_10 = Mathf_InverseLerp_m4155825980(NULL /*static, unused*/, (0.0f), (255.0f), (220.0f), /*hidden argument*/NULL);
		float L_11 = Mathf_InverseLerp_m4155825980(NULL /*static, unused*/, (0.0f), (255.0f), (220.0f), /*hidden argument*/NULL);
		Color_t2555686324  L_12;
		memset(&L_12, 0, sizeof(L_12));
		Color__ctor_m286683560((&L_12), L_9, L_10, L_11, /*hidden argument*/NULL);
		Texture2D_t3840446185 * L_13 = DefaultInitializationErrorHandler_CreateSinglePixelTexture_m3383403409(__this, L_12, /*hidden argument*/NULL);
		__this->set_headerTexture_11(L_13);
		float L_14 = Mathf_InverseLerp_m4155825980(NULL /*static, unused*/, (0.0f), (255.0f), (35.0f), /*hidden argument*/NULL);
		float L_15 = Mathf_InverseLerp_m4155825980(NULL /*static, unused*/, (0.0f), (255.0f), (178.0f), /*hidden argument*/NULL);
		float L_16 = Mathf_InverseLerp_m4155825980(NULL /*static, unused*/, (0.0f), (255.0f), (0.0f), /*hidden argument*/NULL);
		Color_t2555686324  L_17;
		memset(&L_17, 0, sizeof(L_17));
		Color__ctor_m286683560((&L_17), L_14, L_15, L_16, /*hidden argument*/NULL);
		Texture2D_t3840446185 * L_18 = DefaultInitializationErrorHandler_CreateSinglePixelTexture_m3383403409(__this, L_17, /*hidden argument*/NULL);
		__this->set_footerTexture_12(L_18);
		GUIStyle_t3956901511 * L_19 = (GUIStyle_t3956901511 *)il2cpp_codegen_object_new(GUIStyle_t3956901511_il2cpp_TypeInfo_var);
		GUIStyle__ctor_m4038363858(L_19, /*hidden argument*/NULL);
		__this->set_bodyStyle_7(L_19);
		GUIStyle_t3956901511 * L_20 = __this->get_bodyStyle_7();
		NullCheck(L_20);
		GUIStyleState_t1397964415 * L_21 = GUIStyle_get_normal_m729441812(L_20, /*hidden argument*/NULL);
		Texture2D_t3840446185 * L_22 = __this->get_bodyTexture_10();
		NullCheck(L_21);
		GUIStyleState_set_background_m369476077(L_21, L_22, /*hidden argument*/NULL);
		GUIStyle_t3956901511 * L_23 = __this->get_bodyStyle_7();
		Font_t1956802104 * L_24 = Resources_GetBuiltinResource_TisFont_t1956802104_m2738776830(NULL /*static, unused*/, _stringLiteral2974894664, /*hidden argument*/Resources_GetBuiltinResource_TisFont_t1956802104_m2738776830_RuntimeMethod_var);
		NullCheck(L_23);
		GUIStyle_set_font_m2490449107(L_23, L_24, /*hidden argument*/NULL);
		GUIStyle_t3956901511 * L_25 = __this->get_bodyStyle_7();
		int32_t L_26 = V_2;
		float L_27 = Screen_get_dpi_m495672463(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_25);
		GUIStyle_set_fontSize_m1566850023(L_25, (((int32_t)((int32_t)((float)((float)((float)il2cpp_codegen_multiply((float)(((float)((float)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)18), (int32_t)L_26))))), (float)L_27))/(float)(160.0f)))))), /*hidden argument*/NULL);
		GUIStyle_t3956901511 * L_28 = __this->get_bodyStyle_7();
		NullCheck(L_28);
		GUIStyleState_t1397964415 * L_29 = GUIStyle_get_normal_m729441812(L_28, /*hidden argument*/NULL);
		Color_t2555686324  L_30 = Color_get_black_m719512684(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_29);
		GUIStyleState_set_textColor_m1105876047(L_29, L_30, /*hidden argument*/NULL);
		GUIStyle_t3956901511 * L_31 = __this->get_bodyStyle_7();
		NullCheck(L_31);
		GUIStyle_set_wordWrap_m1419501823(L_31, (bool)1, /*hidden argument*/NULL);
		GUIStyle_t3956901511 * L_32 = __this->get_bodyStyle_7();
		NullCheck(L_32);
		GUIStyle_set_alignment_m3944619660(L_32, 4, /*hidden argument*/NULL);
		GUIStyle_t3956901511 * L_33 = __this->get_bodyStyle_7();
		RectOffset_t1369453676 * L_34 = (RectOffset_t1369453676 *)il2cpp_codegen_object_new(RectOffset_t1369453676_il2cpp_TypeInfo_var);
		RectOffset__ctor_m732140021(L_34, ((int32_t)40), ((int32_t)40), 0, 0, /*hidden argument*/NULL);
		NullCheck(L_33);
		GUIStyle_set_padding_m3302456044(L_33, L_34, /*hidden argument*/NULL);
		GUIStyle_t3956901511 * L_35 = __this->get_bodyStyle_7();
		GUIStyle_t3956901511 * L_36 = (GUIStyle_t3956901511 *)il2cpp_codegen_object_new(GUIStyle_t3956901511_il2cpp_TypeInfo_var);
		GUIStyle__ctor_m2912682974(L_36, L_35, /*hidden argument*/NULL);
		__this->set_headerStyle_8(L_36);
		GUIStyle_t3956901511 * L_37 = __this->get_headerStyle_8();
		NullCheck(L_37);
		GUIStyleState_t1397964415 * L_38 = GUIStyle_get_normal_m729441812(L_37, /*hidden argument*/NULL);
		Texture2D_t3840446185 * L_39 = __this->get_headerTexture_11();
		NullCheck(L_38);
		GUIStyleState_set_background_m369476077(L_38, L_39, /*hidden argument*/NULL);
		GUIStyle_t3956901511 * L_40 = __this->get_headerStyle_8();
		int32_t L_41 = V_2;
		float L_42 = Screen_get_dpi_m495672463(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_40);
		GUIStyle_set_fontSize_m1566850023(L_40, (((int32_t)((int32_t)((float)((float)((float)il2cpp_codegen_multiply((float)(((float)((float)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)24), (int32_t)L_41))))), (float)L_42))/(float)(160.0f)))))), /*hidden argument*/NULL);
		GUIStyle_t3956901511 * L_43 = __this->get_bodyStyle_7();
		GUIStyle_t3956901511 * L_44 = (GUIStyle_t3956901511 *)il2cpp_codegen_object_new(GUIStyle_t3956901511_il2cpp_TypeInfo_var);
		GUIStyle__ctor_m2912682974(L_44, L_43, /*hidden argument*/NULL);
		__this->set_footerStyle_9(L_44);
		GUIStyle_t3956901511 * L_45 = __this->get_footerStyle_9();
		NullCheck(L_45);
		GUIStyleState_t1397964415 * L_46 = GUIStyle_get_normal_m729441812(L_45, /*hidden argument*/NULL);
		Texture2D_t3840446185 * L_47 = __this->get_footerTexture_12();
		NullCheck(L_46);
		GUIStyleState_set_background_m369476077(L_46, L_47, /*hidden argument*/NULL);
		GUIStyle_t3956901511 * L_48 = __this->get_footerStyle_9();
		NullCheck(L_48);
		GUIStyleState_t1397964415 * L_49 = GUIStyle_get_normal_m729441812(L_48, /*hidden argument*/NULL);
		Color_t2555686324  L_50 = Color_get_white_m332174077(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_49);
		GUIStyleState_set_textColor_m1105876047(L_49, L_50, /*hidden argument*/NULL);
		GUIStyle_t3956901511 * L_51 = __this->get_footerStyle_9();
		int32_t L_52 = V_2;
		float L_53 = Screen_get_dpi_m495672463(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_51);
		GUIStyle_set_fontSize_m1566850023(L_51, (((int32_t)((int32_t)((float)((float)((float)il2cpp_codegen_multiply((float)(((float)((float)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)28), (int32_t)L_52))))), (float)L_53))/(float)(160.0f)))))), /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Texture2D DefaultInitializationErrorHandler::CreateSinglePixelTexture(UnityEngine.Color)
extern "C" IL2CPP_METHOD_ATTR Texture2D_t3840446185 * DefaultInitializationErrorHandler_CreateSinglePixelTexture_m3383403409 (DefaultInitializationErrorHandler_t3109936861 * __this, Color_t2555686324  ___color0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DefaultInitializationErrorHandler_CreateSinglePixelTexture_m3383403409_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Texture2D_t3840446185 * V_0 = NULL;
	{
		Texture2D_t3840446185 * L_0 = (Texture2D_t3840446185 *)il2cpp_codegen_object_new(Texture2D_t3840446185_il2cpp_TypeInfo_var);
		Texture2D__ctor_m2862217990(L_0, 1, 1, 5, (bool)0, /*hidden argument*/NULL);
		V_0 = L_0;
		Texture2D_t3840446185 * L_1 = V_0;
		Color_t2555686324  L_2 = ___color0;
		NullCheck(L_1);
		Texture2D_SetPixel_m2984741184(L_1, 0, 0, L_2, /*hidden argument*/NULL);
		Texture2D_t3840446185 * L_3 = V_0;
		NullCheck(L_3);
		Texture2D_Apply_m2271746283(L_3, /*hidden argument*/NULL);
		Texture2D_t3840446185 * L_4 = V_0;
		return L_4;
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
// System.Void DefaultTrackableEventHandler::.ctor()
extern "C" IL2CPP_METHOD_ATTR void DefaultTrackableEventHandler__ctor_m1782586389 (DefaultTrackableEventHandler_t1588957063 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void DefaultTrackableEventHandler::Start()
extern "C" IL2CPP_METHOD_ATTR void DefaultTrackableEventHandler_Start_m3259365141 (DefaultTrackableEventHandler_t1588957063 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DefaultTrackableEventHandler_Start_m3259365141_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		TrackableBehaviour_t1113559212 * L_0 = Component_GetComponent_TisTrackableBehaviour_t1113559212_m1736119408(__this, /*hidden argument*/Component_GetComponent_TisTrackableBehaviour_t1113559212_m1736119408_RuntimeMethod_var);
		__this->set_mTrackableBehaviour_4(L_0);
		TrackableBehaviour_t1113559212 * L_1 = __this->get_mTrackableBehaviour_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_2 = Object_op_Implicit_m3574996620(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0028;
		}
	}
	{
		TrackableBehaviour_t1113559212 * L_3 = __this->get_mTrackableBehaviour_4();
		NullCheck(L_3);
		TrackableBehaviour_RegisterTrackableEventHandler_m2462783619(L_3, __this, /*hidden argument*/NULL);
	}

IL_0028:
	{
		return;
	}
}
// System.Void DefaultTrackableEventHandler::OnDestroy()
extern "C" IL2CPP_METHOD_ATTR void DefaultTrackableEventHandler_OnDestroy_m3526422712 (DefaultTrackableEventHandler_t1588957063 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DefaultTrackableEventHandler_OnDestroy_m3526422712_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		TrackableBehaviour_t1113559212 * L_0 = __this->get_mTrackableBehaviour_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Implicit_m3574996620(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		TrackableBehaviour_t1113559212 * L_2 = __this->get_mTrackableBehaviour_4();
		NullCheck(L_2);
		TrackableBehaviour_UnregisterTrackableEventHandler_m1201569614(L_2, __this, /*hidden argument*/NULL);
	}

IL_001d:
	{
		return;
	}
}
// System.Void DefaultTrackableEventHandler::OnTrackableStateChanged(Vuforia.TrackableBehaviour/Status,Vuforia.TrackableBehaviour/Status)
extern "C" IL2CPP_METHOD_ATTR void DefaultTrackableEventHandler_OnTrackableStateChanged_m615981434 (DefaultTrackableEventHandler_t1588957063 * __this, int32_t ___previousStatus0, int32_t ___newStatus1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DefaultTrackableEventHandler_OnTrackableStateChanged_m615981434_MetadataUsageId);
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
			goto IL_0023;
		}
	}
	{
		int32_t L_3 = ___newStatus1;
		if ((((int32_t)L_3) == ((int32_t)3)))
		{
			goto IL_0023;
		}
	}
	{
		int32_t L_4 = ___newStatus1;
		if ((!(((uint32_t)L_4) == ((uint32_t)4))))
		{
			goto IL_004d;
		}
	}

IL_0023:
	{
		TrackableBehaviour_t1113559212 * L_5 = __this->get_mTrackableBehaviour_4();
		NullCheck(L_5);
		String_t* L_6 = TrackableBehaviour_get_TrackableName_m3644057705(L_5, /*hidden argument*/NULL);
		String_t* L_7 = String_Concat_m3755062657(NULL /*static, unused*/, _stringLiteral3820270571, L_6, _stringLiteral3073488411, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
		VirtActionInvoker0::Invoke(7 /* System.Void DefaultTrackableEventHandler::OnTrackingFound() */, __this);
		goto IL_008a;
	}

IL_004d:
	{
		int32_t L_8 = ___previousStatus0;
		if ((!(((uint32_t)L_8) == ((uint32_t)3))))
		{
			goto IL_0084;
		}
	}
	{
		int32_t L_9 = ___newStatus1;
		if (L_9)
		{
			goto IL_0084;
		}
	}
	{
		TrackableBehaviour_t1113559212 * L_10 = __this->get_mTrackableBehaviour_4();
		NullCheck(L_10);
		String_t* L_11 = TrackableBehaviour_get_TrackableName_m3644057705(L_10, /*hidden argument*/NULL);
		String_t* L_12 = String_Concat_m3755062657(NULL /*static, unused*/, _stringLiteral3820270571, L_11, _stringLiteral3483481617, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, L_12, /*hidden argument*/NULL);
		VirtActionInvoker0::Invoke(8 /* System.Void DefaultTrackableEventHandler::OnTrackingLost() */, __this);
		goto IL_008a;
	}

IL_0084:
	{
		VirtActionInvoker0::Invoke(8 /* System.Void DefaultTrackableEventHandler::OnTrackingLost() */, __this);
	}

IL_008a:
	{
		return;
	}
}
// System.Void DefaultTrackableEventHandler::OnTrackingFound()
extern "C" IL2CPP_METHOD_ATTR void DefaultTrackableEventHandler_OnTrackingFound_m2146197130 (DefaultTrackableEventHandler_t1588957063 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DefaultTrackableEventHandler_OnTrackingFound_m2146197130_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RendererU5BU5D_t3210418286* V_0 = NULL;
	ColliderU5BU5D_t4234922487* V_1 = NULL;
	CanvasU5BU5D_t682926938* V_2 = NULL;
	Renderer_t2627027031 * V_3 = NULL;
	RendererU5BU5D_t3210418286* V_4 = NULL;
	int32_t V_5 = 0;
	Collider_t1773347010 * V_6 = NULL;
	ColliderU5BU5D_t4234922487* V_7 = NULL;
	int32_t V_8 = 0;
	Canvas_t3310196443 * V_9 = NULL;
	CanvasU5BU5D_t682926938* V_10 = NULL;
	int32_t V_11 = 0;
	{
		RendererU5BU5D_t3210418286* L_0 = Component_GetComponentsInChildren_TisRenderer_t2627027031_m2673895911(__this, (bool)1, /*hidden argument*/Component_GetComponentsInChildren_TisRenderer_t2627027031_m2673895911_RuntimeMethod_var);
		V_0 = L_0;
		ColliderU5BU5D_t4234922487* L_1 = Component_GetComponentsInChildren_TisCollider_t1773347010_m2667952426(__this, (bool)1, /*hidden argument*/Component_GetComponentsInChildren_TisCollider_t1773347010_m2667952426_RuntimeMethod_var);
		V_1 = L_1;
		CanvasU5BU5D_t682926938* L_2 = Component_GetComponentsInChildren_TisCanvas_t3310196443_m1479281147(__this, (bool)1, /*hidden argument*/Component_GetComponentsInChildren_TisCanvas_t3310196443_m1479281147_RuntimeMethod_var);
		V_2 = L_2;
		RendererU5BU5D_t3210418286* L_3 = V_0;
		V_4 = L_3;
		V_5 = 0;
		goto IL_0036;
	}

IL_0023:
	{
		RendererU5BU5D_t3210418286* L_4 = V_4;
		int32_t L_5 = V_5;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		Renderer_t2627027031 * L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_3 = L_7;
		Renderer_t2627027031 * L_8 = V_3;
		NullCheck(L_8);
		Renderer_set_enabled_m1727253150(L_8, (bool)1, /*hidden argument*/NULL);
		int32_t L_9 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)1));
	}

IL_0036:
	{
		int32_t L_10 = V_5;
		RendererU5BU5D_t3210418286* L_11 = V_4;
		NullCheck(L_11);
		if ((((int32_t)L_10) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_11)->max_length)))))))
		{
			goto IL_0023;
		}
	}
	{
		ColliderU5BU5D_t4234922487* L_12 = V_1;
		V_7 = L_12;
		V_8 = 0;
		goto IL_0061;
	}

IL_004c:
	{
		ColliderU5BU5D_t4234922487* L_13 = V_7;
		int32_t L_14 = V_8;
		NullCheck(L_13);
		int32_t L_15 = L_14;
		Collider_t1773347010 * L_16 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		V_6 = L_16;
		Collider_t1773347010 * L_17 = V_6;
		NullCheck(L_17);
		Collider_set_enabled_m1517463283(L_17, (bool)1, /*hidden argument*/NULL);
		int32_t L_18 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add((int32_t)L_18, (int32_t)1));
	}

IL_0061:
	{
		int32_t L_19 = V_8;
		ColliderU5BU5D_t4234922487* L_20 = V_7;
		NullCheck(L_20);
		if ((((int32_t)L_19) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_20)->max_length)))))))
		{
			goto IL_004c;
		}
	}
	{
		CanvasU5BU5D_t682926938* L_21 = V_2;
		V_10 = L_21;
		V_11 = 0;
		goto IL_008c;
	}

IL_0077:
	{
		CanvasU5BU5D_t682926938* L_22 = V_10;
		int32_t L_23 = V_11;
		NullCheck(L_22);
		int32_t L_24 = L_23;
		Canvas_t3310196443 * L_25 = (L_22)->GetAt(static_cast<il2cpp_array_size_t>(L_24));
		V_9 = L_25;
		Canvas_t3310196443 * L_26 = V_9;
		NullCheck(L_26);
		Behaviour_set_enabled_m20417929(L_26, (bool)1, /*hidden argument*/NULL);
		int32_t L_27 = V_11;
		V_11 = ((int32_t)il2cpp_codegen_add((int32_t)L_27, (int32_t)1));
	}

IL_008c:
	{
		int32_t L_28 = V_11;
		CanvasU5BU5D_t682926938* L_29 = V_10;
		NullCheck(L_29);
		if ((((int32_t)L_28) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_29)->max_length)))))))
		{
			goto IL_0077;
		}
	}
	{
		return;
	}
}
// System.Void DefaultTrackableEventHandler::OnTrackingLost()
extern "C" IL2CPP_METHOD_ATTR void DefaultTrackableEventHandler_OnTrackingLost_m2776455481 (DefaultTrackableEventHandler_t1588957063 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DefaultTrackableEventHandler_OnTrackingLost_m2776455481_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RendererU5BU5D_t3210418286* V_0 = NULL;
	ColliderU5BU5D_t4234922487* V_1 = NULL;
	CanvasU5BU5D_t682926938* V_2 = NULL;
	Renderer_t2627027031 * V_3 = NULL;
	RendererU5BU5D_t3210418286* V_4 = NULL;
	int32_t V_5 = 0;
	Collider_t1773347010 * V_6 = NULL;
	ColliderU5BU5D_t4234922487* V_7 = NULL;
	int32_t V_8 = 0;
	Canvas_t3310196443 * V_9 = NULL;
	CanvasU5BU5D_t682926938* V_10 = NULL;
	int32_t V_11 = 0;
	{
		RendererU5BU5D_t3210418286* L_0 = Component_GetComponentsInChildren_TisRenderer_t2627027031_m2673895911(__this, (bool)1, /*hidden argument*/Component_GetComponentsInChildren_TisRenderer_t2627027031_m2673895911_RuntimeMethod_var);
		V_0 = L_0;
		ColliderU5BU5D_t4234922487* L_1 = Component_GetComponentsInChildren_TisCollider_t1773347010_m2667952426(__this, (bool)1, /*hidden argument*/Component_GetComponentsInChildren_TisCollider_t1773347010_m2667952426_RuntimeMethod_var);
		V_1 = L_1;
		CanvasU5BU5D_t682926938* L_2 = Component_GetComponentsInChildren_TisCanvas_t3310196443_m1479281147(__this, (bool)1, /*hidden argument*/Component_GetComponentsInChildren_TisCanvas_t3310196443_m1479281147_RuntimeMethod_var);
		V_2 = L_2;
		RendererU5BU5D_t3210418286* L_3 = V_0;
		V_4 = L_3;
		V_5 = 0;
		goto IL_0036;
	}

IL_0023:
	{
		RendererU5BU5D_t3210418286* L_4 = V_4;
		int32_t L_5 = V_5;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		Renderer_t2627027031 * L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_3 = L_7;
		Renderer_t2627027031 * L_8 = V_3;
		NullCheck(L_8);
		Renderer_set_enabled_m1727253150(L_8, (bool)0, /*hidden argument*/NULL);
		int32_t L_9 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)1));
	}

IL_0036:
	{
		int32_t L_10 = V_5;
		RendererU5BU5D_t3210418286* L_11 = V_4;
		NullCheck(L_11);
		if ((((int32_t)L_10) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_11)->max_length)))))))
		{
			goto IL_0023;
		}
	}
	{
		ColliderU5BU5D_t4234922487* L_12 = V_1;
		V_7 = L_12;
		V_8 = 0;
		goto IL_0061;
	}

IL_004c:
	{
		ColliderU5BU5D_t4234922487* L_13 = V_7;
		int32_t L_14 = V_8;
		NullCheck(L_13);
		int32_t L_15 = L_14;
		Collider_t1773347010 * L_16 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		V_6 = L_16;
		Collider_t1773347010 * L_17 = V_6;
		NullCheck(L_17);
		Collider_set_enabled_m1517463283(L_17, (bool)0, /*hidden argument*/NULL);
		int32_t L_18 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add((int32_t)L_18, (int32_t)1));
	}

IL_0061:
	{
		int32_t L_19 = V_8;
		ColliderU5BU5D_t4234922487* L_20 = V_7;
		NullCheck(L_20);
		if ((((int32_t)L_19) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_20)->max_length)))))))
		{
			goto IL_004c;
		}
	}
	{
		CanvasU5BU5D_t682926938* L_21 = V_2;
		V_10 = L_21;
		V_11 = 0;
		goto IL_008c;
	}

IL_0077:
	{
		CanvasU5BU5D_t682926938* L_22 = V_10;
		int32_t L_23 = V_11;
		NullCheck(L_22);
		int32_t L_24 = L_23;
		Canvas_t3310196443 * L_25 = (L_22)->GetAt(static_cast<il2cpp_array_size_t>(L_24));
		V_9 = L_25;
		Canvas_t3310196443 * L_26 = V_9;
		NullCheck(L_26);
		Behaviour_set_enabled_m20417929(L_26, (bool)0, /*hidden argument*/NULL);
		int32_t L_27 = V_11;
		V_11 = ((int32_t)il2cpp_codegen_add((int32_t)L_27, (int32_t)1));
	}

IL_008c:
	{
		int32_t L_28 = V_11;
		CanvasU5BU5D_t682926938* L_29 = V_10;
		NullCheck(L_29);
		if ((((int32_t)L_28) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_29)->max_length)))))))
		{
			goto IL_0077;
		}
	}
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // Modified by PostBuild.cs
