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


// System.String
struct String_t;
// System.Void
struct Void_t1185182177;
// UnityEngine.Texture
struct Texture_t3661962703;
// UnityEngine.WebCamDevice[]
struct WebCamDeviceU5BU5D_t4294070825;
// UnityEngine.WebCamTexture
struct WebCamTexture_t1514609158;

extern String_t* _stringLiteral757602046;
extern const uint32_t WebCamTexture__ctor_m2601640589_MetadataUsageId;

struct WebCamDeviceU5BU5D_t4294070825;


#ifndef U3CMODULEU3E_T692745535_H
#define U3CMODULEU3E_T692745535_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t692745535 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CMODULEU3E_T692745535_H
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
#ifndef WEBCAMDEVICE_T1322781432_H
#define WEBCAMDEVICE_T1322781432_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.WebCamDevice
struct  WebCamDevice_t1322781432 
{
public:
	// System.String UnityEngine.WebCamDevice::m_Name
	String_t* ___m_Name_0;
	// System.Int32 UnityEngine.WebCamDevice::m_Flags
	int32_t ___m_Flags_1;

public:
	inline static int32_t get_offset_of_m_Name_0() { return static_cast<int32_t>(offsetof(WebCamDevice_t1322781432, ___m_Name_0)); }
	inline String_t* get_m_Name_0() const { return ___m_Name_0; }
	inline String_t** get_address_of_m_Name_0() { return &___m_Name_0; }
	inline void set_m_Name_0(String_t* value)
	{
		___m_Name_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_Name_0), value);
	}

	inline static int32_t get_offset_of_m_Flags_1() { return static_cast<int32_t>(offsetof(WebCamDevice_t1322781432, ___m_Flags_1)); }
	inline int32_t get_m_Flags_1() const { return ___m_Flags_1; }
	inline int32_t* get_address_of_m_Flags_1() { return &___m_Flags_1; }
	inline void set_m_Flags_1(int32_t value)
	{
		___m_Flags_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.WebCamDevice
struct WebCamDevice_t1322781432_marshaled_pinvoke
{
	char* ___m_Name_0;
	int32_t ___m_Flags_1;
};
// Native definition for COM marshalling of UnityEngine.WebCamDevice
struct WebCamDevice_t1322781432_marshaled_com
{
	Il2CppChar* ___m_Name_0;
	int32_t ___m_Flags_1;
};
#endif // WEBCAMDEVICE_T1322781432_H
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
#ifndef WEBCAMTEXTURE_T1514609158_H
#define WEBCAMTEXTURE_T1514609158_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.WebCamTexture
struct  WebCamTexture_t1514609158  : public Texture_t3661962703
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WEBCAMTEXTURE_T1514609158_H
// UnityEngine.WebCamDevice[]
struct WebCamDeviceU5BU5D_t4294070825  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) WebCamDevice_t1322781432  m_Items[1];

public:
	inline WebCamDevice_t1322781432  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline WebCamDevice_t1322781432 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, WebCamDevice_t1322781432  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline WebCamDevice_t1322781432  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline WebCamDevice_t1322781432 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, WebCamDevice_t1322781432  value)
	{
		m_Items[index] = value;
	}
};



// System.String UnityEngine.WebCamDevice::get_name()
extern "C" IL2CPP_METHOD_ATTR String_t* WebCamDevice_get_name_m3782173082 (WebCamDevice_t1322781432 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Texture::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Texture__ctor_m3554519797 (Texture_t3661962703 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.WebCamTexture::Internal_CreateWebCamTexture(UnityEngine.WebCamTexture,System.String,System.Int32,System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void WebCamTexture_Internal_CreateWebCamTexture_m2861130443 (RuntimeObject * __this /* static, unused */, WebCamTexture_t1514609158 * ___self0, String_t* ___scriptingDevice1, int32_t ___requestedWidth2, int32_t ___requestedHeight3, int32_t ___maxFramerate4, const RuntimeMethod* method);
// System.Void UnityEngine.WebCamTexture::INTERNAL_CALL_Play(UnityEngine.WebCamTexture)
extern "C" IL2CPP_METHOD_ATTR void WebCamTexture_INTERNAL_CALL_Play_m701961556 (RuntimeObject * __this /* static, unused */, WebCamTexture_t1514609158 * ___self0, const RuntimeMethod* method);
// System.Void UnityEngine.WebCamTexture::INTERNAL_CALL_Stop(UnityEngine.WebCamTexture)
extern "C" IL2CPP_METHOD_ATTR void WebCamTexture_INTERNAL_CALL_Stop_m2114762857 (RuntimeObject * __this /* static, unused */, WebCamTexture_t1514609158 * ___self0, const RuntimeMethod* method);
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
// Conversion methods for marshalling of: UnityEngine.WebCamDevice
extern "C" void WebCamDevice_t1322781432_marshal_pinvoke(const WebCamDevice_t1322781432& unmarshaled, WebCamDevice_t1322781432_marshaled_pinvoke& marshaled)
{
	marshaled.___m_Name_0 = il2cpp_codegen_marshal_string(unmarshaled.get_m_Name_0());
	marshaled.___m_Flags_1 = unmarshaled.get_m_Flags_1();
}
extern "C" void WebCamDevice_t1322781432_marshal_pinvoke_back(const WebCamDevice_t1322781432_marshaled_pinvoke& marshaled, WebCamDevice_t1322781432& unmarshaled)
{
	unmarshaled.set_m_Name_0(il2cpp_codegen_marshal_string_result(marshaled.___m_Name_0));
	int32_t unmarshaled_m_Flags_temp_1 = 0;
	unmarshaled_m_Flags_temp_1 = marshaled.___m_Flags_1;
	unmarshaled.set_m_Flags_1(unmarshaled_m_Flags_temp_1);
}
// Conversion method for clean up from marshalling of: UnityEngine.WebCamDevice
extern "C" void WebCamDevice_t1322781432_marshal_pinvoke_cleanup(WebCamDevice_t1322781432_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___m_Name_0);
	marshaled.___m_Name_0 = NULL;
}
// Conversion methods for marshalling of: UnityEngine.WebCamDevice
extern "C" void WebCamDevice_t1322781432_marshal_com(const WebCamDevice_t1322781432& unmarshaled, WebCamDevice_t1322781432_marshaled_com& marshaled)
{
	marshaled.___m_Name_0 = il2cpp_codegen_marshal_bstring(unmarshaled.get_m_Name_0());
	marshaled.___m_Flags_1 = unmarshaled.get_m_Flags_1();
}
extern "C" void WebCamDevice_t1322781432_marshal_com_back(const WebCamDevice_t1322781432_marshaled_com& marshaled, WebCamDevice_t1322781432& unmarshaled)
{
	unmarshaled.set_m_Name_0(il2cpp_codegen_marshal_bstring_result(marshaled.___m_Name_0));
	int32_t unmarshaled_m_Flags_temp_1 = 0;
	unmarshaled_m_Flags_temp_1 = marshaled.___m_Flags_1;
	unmarshaled.set_m_Flags_1(unmarshaled_m_Flags_temp_1);
}
// Conversion method for clean up from marshalling of: UnityEngine.WebCamDevice
extern "C" void WebCamDevice_t1322781432_marshal_com_cleanup(WebCamDevice_t1322781432_marshaled_com& marshaled)
{
	il2cpp_codegen_marshal_free_bstring(marshaled.___m_Name_0);
	marshaled.___m_Name_0 = NULL;
}
// System.String UnityEngine.WebCamDevice::get_name()
extern "C" IL2CPP_METHOD_ATTR String_t* WebCamDevice_get_name_m3782173082 (WebCamDevice_t1322781432 * __this, const RuntimeMethod* method)
{
	String_t* V_0 = NULL;
	{
		String_t* L_0 = __this->get_m_Name_0();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		String_t* L_1 = V_0;
		return L_1;
	}
}
extern "C"  String_t* WebCamDevice_get_name_m3782173082_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	WebCamDevice_t1322781432 * _thisAdjusted = reinterpret_cast<WebCamDevice_t1322781432 *>(__this + 1);
	return WebCamDevice_get_name_m3782173082(_thisAdjusted, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.WebCamTexture::.ctor()
extern "C" IL2CPP_METHOD_ATTR void WebCamTexture__ctor_m2601640589 (WebCamTexture_t1514609158 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebCamTexture__ctor_m2601640589_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Texture__ctor_m3554519797(__this, /*hidden argument*/NULL);
		WebCamTexture_Internal_CreateWebCamTexture_m2861130443(NULL /*static, unused*/, __this, _stringLiteral757602046, 0, 0, 0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.WebCamTexture::Internal_CreateWebCamTexture(UnityEngine.WebCamTexture,System.String,System.Int32,System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void WebCamTexture_Internal_CreateWebCamTexture_m2861130443 (RuntimeObject * __this /* static, unused */, WebCamTexture_t1514609158 * ___self0, String_t* ___scriptingDevice1, int32_t ___requestedWidth2, int32_t ___requestedHeight3, int32_t ___maxFramerate4, const RuntimeMethod* method)
{
	typedef void (*WebCamTexture_Internal_CreateWebCamTexture_m2861130443_ftn) (WebCamTexture_t1514609158 *, String_t*, int32_t, int32_t, int32_t);
	static WebCamTexture_Internal_CreateWebCamTexture_m2861130443_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (WebCamTexture_Internal_CreateWebCamTexture_m2861130443_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.WebCamTexture::Internal_CreateWebCamTexture(UnityEngine.WebCamTexture,System.String,System.Int32,System.Int32,System.Int32)");
	_il2cpp_icall_func(___self0, ___scriptingDevice1, ___requestedWidth2, ___requestedHeight3, ___maxFramerate4);
}
// System.Void UnityEngine.WebCamTexture::Play()
extern "C" IL2CPP_METHOD_ATTR void WebCamTexture_Play_m3866603461 (WebCamTexture_t1514609158 * __this, const RuntimeMethod* method)
{
	{
		WebCamTexture_INTERNAL_CALL_Play_m701961556(NULL /*static, unused*/, __this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.WebCamTexture::INTERNAL_CALL_Play(UnityEngine.WebCamTexture)
extern "C" IL2CPP_METHOD_ATTR void WebCamTexture_INTERNAL_CALL_Play_m701961556 (RuntimeObject * __this /* static, unused */, WebCamTexture_t1514609158 * ___self0, const RuntimeMethod* method)
{
	typedef void (*WebCamTexture_INTERNAL_CALL_Play_m701961556_ftn) (WebCamTexture_t1514609158 *);
	static WebCamTexture_INTERNAL_CALL_Play_m701961556_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (WebCamTexture_INTERNAL_CALL_Play_m701961556_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.WebCamTexture::INTERNAL_CALL_Play(UnityEngine.WebCamTexture)");
	_il2cpp_icall_func(___self0);
}
// System.Void UnityEngine.WebCamTexture::Stop()
extern "C" IL2CPP_METHOD_ATTR void WebCamTexture_Stop_m3471034432 (WebCamTexture_t1514609158 * __this, const RuntimeMethod* method)
{
	{
		WebCamTexture_INTERNAL_CALL_Stop_m2114762857(NULL /*static, unused*/, __this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.WebCamTexture::INTERNAL_CALL_Stop(UnityEngine.WebCamTexture)
extern "C" IL2CPP_METHOD_ATTR void WebCamTexture_INTERNAL_CALL_Stop_m2114762857 (RuntimeObject * __this /* static, unused */, WebCamTexture_t1514609158 * ___self0, const RuntimeMethod* method)
{
	typedef void (*WebCamTexture_INTERNAL_CALL_Stop_m2114762857_ftn) (WebCamTexture_t1514609158 *);
	static WebCamTexture_INTERNAL_CALL_Stop_m2114762857_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (WebCamTexture_INTERNAL_CALL_Stop_m2114762857_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.WebCamTexture::INTERNAL_CALL_Stop(UnityEngine.WebCamTexture)");
	_il2cpp_icall_func(___self0);
}
// System.Boolean UnityEngine.WebCamTexture::get_isPlaying()
extern "C" IL2CPP_METHOD_ATTR bool WebCamTexture_get_isPlaying_m3525118025 (WebCamTexture_t1514609158 * __this, const RuntimeMethod* method)
{
	typedef bool (*WebCamTexture_get_isPlaying_m3525118025_ftn) (WebCamTexture_t1514609158 *);
	static WebCamTexture_get_isPlaying_m3525118025_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (WebCamTexture_get_isPlaying_m3525118025_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.WebCamTexture::get_isPlaying()");
	bool retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Void UnityEngine.WebCamTexture::set_deviceName(System.String)
extern "C" IL2CPP_METHOD_ATTR void WebCamTexture_set_deviceName_m2479609938 (WebCamTexture_t1514609158 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	typedef void (*WebCamTexture_set_deviceName_m2479609938_ftn) (WebCamTexture_t1514609158 *, String_t*);
	static WebCamTexture_set_deviceName_m2479609938_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (WebCamTexture_set_deviceName_m2479609938_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.WebCamTexture::set_deviceName(System.String)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Void UnityEngine.WebCamTexture::set_requestedFPS(System.Single)
extern "C" IL2CPP_METHOD_ATTR void WebCamTexture_set_requestedFPS_m1422816314 (WebCamTexture_t1514609158 * __this, float ___value0, const RuntimeMethod* method)
{
	typedef void (*WebCamTexture_set_requestedFPS_m1422816314_ftn) (WebCamTexture_t1514609158 *, float);
	static WebCamTexture_set_requestedFPS_m1422816314_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (WebCamTexture_set_requestedFPS_m1422816314_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.WebCamTexture::set_requestedFPS(System.Single)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Void UnityEngine.WebCamTexture::set_requestedWidth(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void WebCamTexture_set_requestedWidth_m1301971691 (WebCamTexture_t1514609158 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	typedef void (*WebCamTexture_set_requestedWidth_m1301971691_ftn) (WebCamTexture_t1514609158 *, int32_t);
	static WebCamTexture_set_requestedWidth_m1301971691_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (WebCamTexture_set_requestedWidth_m1301971691_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.WebCamTexture::set_requestedWidth(System.Int32)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Void UnityEngine.WebCamTexture::set_requestedHeight(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void WebCamTexture_set_requestedHeight_m3636279808 (WebCamTexture_t1514609158 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	typedef void (*WebCamTexture_set_requestedHeight_m3636279808_ftn) (WebCamTexture_t1514609158 *, int32_t);
	static WebCamTexture_set_requestedHeight_m3636279808_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (WebCamTexture_set_requestedHeight_m3636279808_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.WebCamTexture::set_requestedHeight(System.Int32)");
	_il2cpp_icall_func(__this, ___value0);
}
// UnityEngine.WebCamDevice[] UnityEngine.WebCamTexture::get_devices()
extern "C" IL2CPP_METHOD_ATTR WebCamDeviceU5BU5D_t4294070825* WebCamTexture_get_devices_m844246756 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	typedef WebCamDeviceU5BU5D_t4294070825* (*WebCamTexture_get_devices_m844246756_ftn) ();
	static WebCamTexture_get_devices_m844246756_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (WebCamTexture_get_devices_m844246756_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.WebCamTexture::get_devices()");
	WebCamDeviceU5BU5D_t4294070825* retVal = _il2cpp_icall_func();
	return retVal;
}
// System.Boolean UnityEngine.WebCamTexture::get_didUpdateThisFrame()
extern "C" IL2CPP_METHOD_ATTR bool WebCamTexture_get_didUpdateThisFrame_m567567483 (WebCamTexture_t1514609158 * __this, const RuntimeMethod* method)
{
	typedef bool (*WebCamTexture_get_didUpdateThisFrame_m567567483_ftn) (WebCamTexture_t1514609158 *);
	static WebCamTexture_get_didUpdateThisFrame_m567567483_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (WebCamTexture_get_didUpdateThisFrame_m567567483_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.WebCamTexture::get_didUpdateThisFrame()");
	bool retVal = _il2cpp_icall_func(__this);
	return retVal;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // Modified by PostBuild.cs
