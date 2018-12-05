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


// System.Char[]
struct CharU5BU5D_t3528271667;
// System.String
struct String_t;
// System.Void
struct Void_t1185182177;
// UnityEngine.GUIStyle
struct GUIStyle_t3956901511;
// UnityEngine.Texture2D
struct Texture2D_t3840446185;
// Vuforia.TrackableBehaviour
struct TrackableBehaviour_t1113559212;




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
#ifndef U3CMODULEU3E_T692745548_H
#define U3CMODULEU3E_T692745548_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t692745548 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CMODULEU3E_T692745548_H
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
#ifndef __STATICARRAYINITTYPESIZEU3D24_T3517759981_H
#define __STATICARRAYINITTYPESIZEU3D24_T3517759981_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=24
struct  __StaticArrayInitTypeSizeU3D24_t3517759981 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D24_t3517759981__padding[24];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // __STATICARRAYINITTYPESIZEU3D24_T3517759981_H
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
#ifndef U3CPRIVATEIMPLEMENTATIONDETAILSU3E_T3057255368_H
#define U3CPRIVATEIMPLEMENTATIONDETAILSU3E_T3057255368_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>
struct  U3CPrivateImplementationDetailsU3E_t3057255368  : public RuntimeObject
{
public:

public:
};

struct U3CPrivateImplementationDetailsU3E_t3057255368_StaticFields
{
public:
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=24 <PrivateImplementationDetails>::898C2022A0C02FCE602BF05E1C09BD48301606E5
	__StaticArrayInitTypeSizeU3D24_t3517759981  ___898C2022A0C02FCE602BF05E1C09BD48301606E5_0;

public:
	inline static int32_t get_offset_of_U3898C2022A0C02FCE602BF05E1C09BD48301606E5_0() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255368_StaticFields, ___898C2022A0C02FCE602BF05E1C09BD48301606E5_0)); }
	inline __StaticArrayInitTypeSizeU3D24_t3517759981  get_U3898C2022A0C02FCE602BF05E1C09BD48301606E5_0() const { return ___898C2022A0C02FCE602BF05E1C09BD48301606E5_0; }
	inline __StaticArrayInitTypeSizeU3D24_t3517759981 * get_address_of_U3898C2022A0C02FCE602BF05E1C09BD48301606E5_0() { return &___898C2022A0C02FCE602BF05E1C09BD48301606E5_0; }
	inline void set_U3898C2022A0C02FCE602BF05E1C09BD48301606E5_0(__StaticArrayInitTypeSizeU3D24_t3517759981  value)
	{
		___898C2022A0C02FCE602BF05E1C09BD48301606E5_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CPRIVATEIMPLEMENTATIONDETAILSU3E_T3057255368_H
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
#ifndef CONFIGUREVUFORIADATASETLOADER_T752219322_H
#define CONFIGUREVUFORIADATASETLOADER_T752219322_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Rocket.ConfigureVuforiaDatasetLoader
struct  ConfigureVuforiaDatasetLoader_t752219322  : public MonoBehaviour_t3962482529
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONFIGUREVUFORIADATASETLOADER_T752219322_H
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
#ifndef WIREFRAMETRACKABLEEVENTHANDLER_T2143753312_H
#define WIREFRAMETRACKABLEEVENTHANDLER_T2143753312_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.WireframeTrackableEventHandler
struct  WireframeTrackableEventHandler_t2143753312  : public VuforiaMonoBehaviour_t1150221792
{
public:
	// Vuforia.TrackableBehaviour Vuforia.WireframeTrackableEventHandler::mTrackableBehaviour
	TrackableBehaviour_t1113559212 * ___mTrackableBehaviour_4;

public:
	inline static int32_t get_offset_of_mTrackableBehaviour_4() { return static_cast<int32_t>(offsetof(WireframeTrackableEventHandler_t2143753312, ___mTrackableBehaviour_4)); }
	inline TrackableBehaviour_t1113559212 * get_mTrackableBehaviour_4() const { return ___mTrackableBehaviour_4; }
	inline TrackableBehaviour_t1113559212 ** get_address_of_mTrackableBehaviour_4() { return &___mTrackableBehaviour_4; }
	inline void set_mTrackableBehaviour_4(TrackableBehaviour_t1113559212 * value)
	{
		___mTrackableBehaviour_4 = value;
		Il2CppCodeGenWriteBarrier((&___mTrackableBehaviour_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WIREFRAMETRACKABLEEVENTHANDLER_T2143753312_H





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4100 = { sizeof (WireframeTrackableEventHandler_t2143753312), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4100[1] = 
{
	WireframeTrackableEventHandler_t2143753312::get_offset_of_mTrackableBehaviour_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4101 = { sizeof (U3CPrivateImplementationDetailsU3E_t3057255368), -1, sizeof(U3CPrivateImplementationDetailsU3E_t3057255368_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable4101[1] = 
{
	U3CPrivateImplementationDetailsU3E_t3057255368_StaticFields::get_offset_of_U3898C2022A0C02FCE602BF05E1C09BD48301606E5_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4102 = { sizeof (__StaticArrayInitTypeSizeU3D24_t3517759981)+ sizeof (RuntimeObject), sizeof(__StaticArrayInitTypeSizeU3D24_t3517759981 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4103 = { sizeof (U3CModuleU3E_t692745547), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4104 = { sizeof (DefaultInitializationErrorHandler_t3109936861), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4104[9] = 
{
	DefaultInitializationErrorHandler_t3109936861::get_offset_of_mErrorText_4(),
	DefaultInitializationErrorHandler_t3109936861::get_offset_of_mErrorOccurred_5(),
	0,
	DefaultInitializationErrorHandler_t3109936861::get_offset_of_bodyStyle_7(),
	DefaultInitializationErrorHandler_t3109936861::get_offset_of_headerStyle_8(),
	DefaultInitializationErrorHandler_t3109936861::get_offset_of_footerStyle_9(),
	DefaultInitializationErrorHandler_t3109936861::get_offset_of_bodyTexture_10(),
	DefaultInitializationErrorHandler_t3109936861::get_offset_of_headerTexture_11(),
	DefaultInitializationErrorHandler_t3109936861::get_offset_of_footerTexture_12(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4105 = { sizeof (DefaultTrackableEventHandler_t1588957063), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4105[3] = 
{
	DefaultTrackableEventHandler_t1588957063::get_offset_of_mTrackableBehaviour_4(),
	DefaultTrackableEventHandler_t1588957063::get_offset_of_m_PreviousStatus_5(),
	DefaultTrackableEventHandler_t1588957063::get_offset_of_m_NewStatus_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4106 = { sizeof (U3CModuleU3E_t692745548), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4107 = { sizeof (ConfigureVuforiaDatasetLoader_t752219322), -1, 0, 0 };
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // Modified by PostBuild.cs
