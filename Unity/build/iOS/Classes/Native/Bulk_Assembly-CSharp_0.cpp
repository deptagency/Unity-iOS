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


// Rocket.ConfigureVuforiaDatasetLoader
struct ConfigureVuforiaDatasetLoader_t752219322;
// System.Collections.Generic.HashSet`1<System.String>
struct HashSet_1_t412400163;
// System.Collections.Generic.List`1<System.String>
struct List_1_t3319525431;
// System.String
struct String_t;
// System.Void
struct Void_t1185182177;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t3962482529;
// Vuforia.DatabaseLoadARController
struct DatabaseLoadARController_t1526318335;
// Vuforia.VuforiaBehaviour
struct VuforiaBehaviour_t2151848540;

extern RuntimeClass* DatabaseLoadARController_t1526318335_il2cpp_TypeInfo_var;
extern RuntimeClass* Path_t1605229823_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral1401458499;
extern String_t* _stringLiteral2150195461;
extern const uint32_t ConfigureVuforiaDatasetLoader_Awake_m928415736_MetadataUsageId;



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
#ifndef ARCONTROLLER_T116632334_H
#define ARCONTROLLER_T116632334_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.ARController
struct  ARController_t116632334  : public RuntimeObject
{
public:
	// Vuforia.VuforiaBehaviour Vuforia.ARController::mVuforiaBehaviour
	VuforiaBehaviour_t2151848540 * ___mVuforiaBehaviour_0;

public:
	inline static int32_t get_offset_of_mVuforiaBehaviour_0() { return static_cast<int32_t>(offsetof(ARController_t116632334, ___mVuforiaBehaviour_0)); }
	inline VuforiaBehaviour_t2151848540 * get_mVuforiaBehaviour_0() const { return ___mVuforiaBehaviour_0; }
	inline VuforiaBehaviour_t2151848540 ** get_address_of_mVuforiaBehaviour_0() { return &___mVuforiaBehaviour_0; }
	inline void set_mVuforiaBehaviour_0(VuforiaBehaviour_t2151848540 * value)
	{
		___mVuforiaBehaviour_0 = value;
		Il2CppCodeGenWriteBarrier((&___mVuforiaBehaviour_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARCONTROLLER_T116632334_H
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
#ifndef DATABASELOADARCONTROLLER_T1526318335_H
#define DATABASELOADARCONTROLLER_T1526318335_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.DatabaseLoadARController
struct  DatabaseLoadARController_t1526318335  : public ARController_t116632334
{
public:
	// System.Boolean Vuforia.DatabaseLoadARController::mDatasetsLoaded
	bool ___mDatasetsLoaded_1;
	// System.Collections.Generic.List`1<System.String> Vuforia.DatabaseLoadARController::mExternalDatasetRoots
	List_1_t3319525431 * ___mExternalDatasetRoots_2;
	// System.Collections.Generic.HashSet`1<System.String> Vuforia.DatabaseLoadARController::mDataSetsToLoad
	HashSet_1_t412400163 * ___mDataSetsToLoad_3;
	// System.Collections.Generic.HashSet`1<System.String> Vuforia.DatabaseLoadARController::mDataSetsToActivate
	HashSet_1_t412400163 * ___mDataSetsToActivate_4;

public:
	inline static int32_t get_offset_of_mDatasetsLoaded_1() { return static_cast<int32_t>(offsetof(DatabaseLoadARController_t1526318335, ___mDatasetsLoaded_1)); }
	inline bool get_mDatasetsLoaded_1() const { return ___mDatasetsLoaded_1; }
	inline bool* get_address_of_mDatasetsLoaded_1() { return &___mDatasetsLoaded_1; }
	inline void set_mDatasetsLoaded_1(bool value)
	{
		___mDatasetsLoaded_1 = value;
	}

	inline static int32_t get_offset_of_mExternalDatasetRoots_2() { return static_cast<int32_t>(offsetof(DatabaseLoadARController_t1526318335, ___mExternalDatasetRoots_2)); }
	inline List_1_t3319525431 * get_mExternalDatasetRoots_2() const { return ___mExternalDatasetRoots_2; }
	inline List_1_t3319525431 ** get_address_of_mExternalDatasetRoots_2() { return &___mExternalDatasetRoots_2; }
	inline void set_mExternalDatasetRoots_2(List_1_t3319525431 * value)
	{
		___mExternalDatasetRoots_2 = value;
		Il2CppCodeGenWriteBarrier((&___mExternalDatasetRoots_2), value);
	}

	inline static int32_t get_offset_of_mDataSetsToLoad_3() { return static_cast<int32_t>(offsetof(DatabaseLoadARController_t1526318335, ___mDataSetsToLoad_3)); }
	inline HashSet_1_t412400163 * get_mDataSetsToLoad_3() const { return ___mDataSetsToLoad_3; }
	inline HashSet_1_t412400163 ** get_address_of_mDataSetsToLoad_3() { return &___mDataSetsToLoad_3; }
	inline void set_mDataSetsToLoad_3(HashSet_1_t412400163 * value)
	{
		___mDataSetsToLoad_3 = value;
		Il2CppCodeGenWriteBarrier((&___mDataSetsToLoad_3), value);
	}

	inline static int32_t get_offset_of_mDataSetsToActivate_4() { return static_cast<int32_t>(offsetof(DatabaseLoadARController_t1526318335, ___mDataSetsToActivate_4)); }
	inline HashSet_1_t412400163 * get_mDataSetsToActivate_4() const { return ___mDataSetsToActivate_4; }
	inline HashSet_1_t412400163 ** get_address_of_mDataSetsToActivate_4() { return &___mDataSetsToActivate_4; }
	inline void set_mDataSetsToActivate_4(HashSet_1_t412400163 * value)
	{
		___mDataSetsToActivate_4 = value;
		Il2CppCodeGenWriteBarrier((&___mDataSetsToActivate_4), value);
	}
};

struct DatabaseLoadARController_t1526318335_StaticFields
{
public:
	// Vuforia.DatabaseLoadARController Vuforia.DatabaseLoadARController::mInstance
	DatabaseLoadARController_t1526318335 * ___mInstance_5;
	// System.Object Vuforia.DatabaseLoadARController::mPadlock
	RuntimeObject * ___mPadlock_6;

public:
	inline static int32_t get_offset_of_mInstance_5() { return static_cast<int32_t>(offsetof(DatabaseLoadARController_t1526318335_StaticFields, ___mInstance_5)); }
	inline DatabaseLoadARController_t1526318335 * get_mInstance_5() const { return ___mInstance_5; }
	inline DatabaseLoadARController_t1526318335 ** get_address_of_mInstance_5() { return &___mInstance_5; }
	inline void set_mInstance_5(DatabaseLoadARController_t1526318335 * value)
	{
		___mInstance_5 = value;
		Il2CppCodeGenWriteBarrier((&___mInstance_5), value);
	}

	inline static int32_t get_offset_of_mPadlock_6() { return static_cast<int32_t>(offsetof(DatabaseLoadARController_t1526318335_StaticFields, ___mPadlock_6)); }
	inline RuntimeObject * get_mPadlock_6() const { return ___mPadlock_6; }
	inline RuntimeObject ** get_address_of_mPadlock_6() { return &___mPadlock_6; }
	inline void set_mPadlock_6(RuntimeObject * value)
	{
		___mPadlock_6 = value;
		Il2CppCodeGenWriteBarrier((&___mPadlock_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATABASELOADARCONTROLLER_T1526318335_H
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



// System.Void UnityEngine.MonoBehaviour::.ctor()
extern "C" IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m1579109191 (MonoBehaviour_t3962482529 * __this, const RuntimeMethod* method);
// Vuforia.DatabaseLoadARController Vuforia.DatabaseLoadARController::get_Instance()
extern "C" IL2CPP_METHOD_ATTR DatabaseLoadARController_t1526318335 * DatabaseLoadARController_get_Instance_m1478400917 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.String UnityEngine.Application::get_dataPath()
extern "C" IL2CPP_METHOD_ATTR String_t* Application_get_dataPath_m4232621142 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.String System.IO.Path::Combine(System.String,System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* Path_Combine_m2030093709 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, String_t* p2, const RuntimeMethod* method);
// System.Void Vuforia.DatabaseLoadARController::AddExternalDatasetSearchDir(System.String)
extern "C" IL2CPP_METHOD_ATTR void DatabaseLoadARController_AddExternalDatasetSearchDir_m89374503 (DatabaseLoadARController_t1526318335 * __this, String_t* p0, const RuntimeMethod* method);
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
// System.Void Rocket.ConfigureVuforiaDatasetLoader::.ctor()
extern "C" IL2CPP_METHOD_ATTR void ConfigureVuforiaDatasetLoader__ctor_m2542288509 (ConfigureVuforiaDatasetLoader_t752219322 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Rocket.ConfigureVuforiaDatasetLoader::Awake()
extern "C" IL2CPP_METHOD_ATTR void ConfigureVuforiaDatasetLoader_Awake_m928415736 (ConfigureVuforiaDatasetLoader_t752219322 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ConfigureVuforiaDatasetLoader_Awake_m928415736_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(DatabaseLoadARController_t1526318335_il2cpp_TypeInfo_var);
		DatabaseLoadARController_t1526318335 * L_0 = DatabaseLoadARController_get_Instance_m1478400917(NULL /*static, unused*/, /*hidden argument*/NULL);
		String_t* L_1 = Application_get_dataPath_m4232621142(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Path_t1605229823_il2cpp_TypeInfo_var);
		String_t* L_2 = Path_Combine_m2030093709(NULL /*static, unused*/, L_1, _stringLiteral2150195461, _stringLiteral1401458499, /*hidden argument*/NULL);
		NullCheck(L_0);
		DatabaseLoadARController_AddExternalDatasetSearchDir_m89374503(L_0, L_2, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // Modified by PostBuild.cs
