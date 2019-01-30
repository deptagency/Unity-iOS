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
struct ConfigureVuforiaDatasetLoader_t9699ED1842BECE4CD781F2452D5E64CDAB228748;
// System.Collections.Generic.HashSet`1<System.String>
struct HashSet_1_tC8214FEC830040D37F12A482FF0284D9C2B9001E;
// System.Collections.Generic.List`1<System.String>
struct List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3;
// System.String
struct String_t;
// System.Void
struct Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429;
// Vuforia.DatabaseLoadARController
struct DatabaseLoadARController_t46BD7BB216821464A9EB9C66E30CC19A31FA1C7A;
// Vuforia.VuforiaBehaviour
struct VuforiaBehaviour_t9E688F16A822A56C5BB1910EF9B91448A9165BC2;

extern RuntimeClass* DatabaseLoadARController_t46BD7BB216821464A9EB9C66E30CC19A31FA1C7A_il2cpp_TypeInfo_var;
extern RuntimeClass* Path_t0B99A4B924A6FDF08814FFA8DD4CD121ED1A0752_il2cpp_TypeInfo_var;
extern String_t* _stringLiteralDA433CD41E7FB7CD7B029E3B2A46C1F024984C0A;
extern String_t* _stringLiteralEA7313426FF06F0BA28DA9611859D3A50AAE87F5;
extern const uint32_t ConfigureVuforiaDatasetLoader_Awake_m5A1AF19420675B22F5B65777465DA9A67A852DA4_MetadataUsageId;



#ifndef U3CMODULEU3E_T6CDDDF959E7E18A6744E43B613F41CDAC780256A_H
#define U3CMODULEU3E_T6CDDDF959E7E18A6744E43B613F41CDAC780256A_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t6CDDDF959E7E18A6744E43B613F41CDAC780256A 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CMODULEU3E_T6CDDDF959E7E18A6744E43B613F41CDAC780256A_H
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
#ifndef ARCONTROLLER_TBCF5CBE22AE2AD3FF6DCAC88E78FF7C929D91293_H
#define ARCONTROLLER_TBCF5CBE22AE2AD3FF6DCAC88E78FF7C929D91293_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.ARController
struct  ARController_tBCF5CBE22AE2AD3FF6DCAC88E78FF7C929D91293  : public RuntimeObject
{
public:
	// Vuforia.VuforiaBehaviour Vuforia.ARController::mVuforiaBehaviour
	VuforiaBehaviour_t9E688F16A822A56C5BB1910EF9B91448A9165BC2 * ___mVuforiaBehaviour_0;

public:
	inline static int32_t get_offset_of_mVuforiaBehaviour_0() { return static_cast<int32_t>(offsetof(ARController_tBCF5CBE22AE2AD3FF6DCAC88E78FF7C929D91293, ___mVuforiaBehaviour_0)); }
	inline VuforiaBehaviour_t9E688F16A822A56C5BB1910EF9B91448A9165BC2 * get_mVuforiaBehaviour_0() const { return ___mVuforiaBehaviour_0; }
	inline VuforiaBehaviour_t9E688F16A822A56C5BB1910EF9B91448A9165BC2 ** get_address_of_mVuforiaBehaviour_0() { return &___mVuforiaBehaviour_0; }
	inline void set_mVuforiaBehaviour_0(VuforiaBehaviour_t9E688F16A822A56C5BB1910EF9B91448A9165BC2 * value)
	{
		___mVuforiaBehaviour_0 = value;
		Il2CppCodeGenWriteBarrier((&___mVuforiaBehaviour_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARCONTROLLER_TBCF5CBE22AE2AD3FF6DCAC88E78FF7C929D91293_H
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
#ifndef DATABASELOADARCONTROLLER_T46BD7BB216821464A9EB9C66E30CC19A31FA1C7A_H
#define DATABASELOADARCONTROLLER_T46BD7BB216821464A9EB9C66E30CC19A31FA1C7A_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.DatabaseLoadARController
struct  DatabaseLoadARController_t46BD7BB216821464A9EB9C66E30CC19A31FA1C7A  : public ARController_tBCF5CBE22AE2AD3FF6DCAC88E78FF7C929D91293
{
public:
	// System.Boolean Vuforia.DatabaseLoadARController::mDatasetsLoaded
	bool ___mDatasetsLoaded_1;
	// System.Collections.Generic.List`1<System.String> Vuforia.DatabaseLoadARController::mExternalDatasetRoots
	List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * ___mExternalDatasetRoots_2;
	// System.Collections.Generic.HashSet`1<System.String> Vuforia.DatabaseLoadARController::mDataSetsToLoad
	HashSet_1_tC8214FEC830040D37F12A482FF0284D9C2B9001E * ___mDataSetsToLoad_3;
	// System.Collections.Generic.HashSet`1<System.String> Vuforia.DatabaseLoadARController::mDataSetsToActivate
	HashSet_1_tC8214FEC830040D37F12A482FF0284D9C2B9001E * ___mDataSetsToActivate_4;

public:
	inline static int32_t get_offset_of_mDatasetsLoaded_1() { return static_cast<int32_t>(offsetof(DatabaseLoadARController_t46BD7BB216821464A9EB9C66E30CC19A31FA1C7A, ___mDatasetsLoaded_1)); }
	inline bool get_mDatasetsLoaded_1() const { return ___mDatasetsLoaded_1; }
	inline bool* get_address_of_mDatasetsLoaded_1() { return &___mDatasetsLoaded_1; }
	inline void set_mDatasetsLoaded_1(bool value)
	{
		___mDatasetsLoaded_1 = value;
	}

	inline static int32_t get_offset_of_mExternalDatasetRoots_2() { return static_cast<int32_t>(offsetof(DatabaseLoadARController_t46BD7BB216821464A9EB9C66E30CC19A31FA1C7A, ___mExternalDatasetRoots_2)); }
	inline List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * get_mExternalDatasetRoots_2() const { return ___mExternalDatasetRoots_2; }
	inline List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 ** get_address_of_mExternalDatasetRoots_2() { return &___mExternalDatasetRoots_2; }
	inline void set_mExternalDatasetRoots_2(List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * value)
	{
		___mExternalDatasetRoots_2 = value;
		Il2CppCodeGenWriteBarrier((&___mExternalDatasetRoots_2), value);
	}

	inline static int32_t get_offset_of_mDataSetsToLoad_3() { return static_cast<int32_t>(offsetof(DatabaseLoadARController_t46BD7BB216821464A9EB9C66E30CC19A31FA1C7A, ___mDataSetsToLoad_3)); }
	inline HashSet_1_tC8214FEC830040D37F12A482FF0284D9C2B9001E * get_mDataSetsToLoad_3() const { return ___mDataSetsToLoad_3; }
	inline HashSet_1_tC8214FEC830040D37F12A482FF0284D9C2B9001E ** get_address_of_mDataSetsToLoad_3() { return &___mDataSetsToLoad_3; }
	inline void set_mDataSetsToLoad_3(HashSet_1_tC8214FEC830040D37F12A482FF0284D9C2B9001E * value)
	{
		___mDataSetsToLoad_3 = value;
		Il2CppCodeGenWriteBarrier((&___mDataSetsToLoad_3), value);
	}

	inline static int32_t get_offset_of_mDataSetsToActivate_4() { return static_cast<int32_t>(offsetof(DatabaseLoadARController_t46BD7BB216821464A9EB9C66E30CC19A31FA1C7A, ___mDataSetsToActivate_4)); }
	inline HashSet_1_tC8214FEC830040D37F12A482FF0284D9C2B9001E * get_mDataSetsToActivate_4() const { return ___mDataSetsToActivate_4; }
	inline HashSet_1_tC8214FEC830040D37F12A482FF0284D9C2B9001E ** get_address_of_mDataSetsToActivate_4() { return &___mDataSetsToActivate_4; }
	inline void set_mDataSetsToActivate_4(HashSet_1_tC8214FEC830040D37F12A482FF0284D9C2B9001E * value)
	{
		___mDataSetsToActivate_4 = value;
		Il2CppCodeGenWriteBarrier((&___mDataSetsToActivate_4), value);
	}
};

struct DatabaseLoadARController_t46BD7BB216821464A9EB9C66E30CC19A31FA1C7A_StaticFields
{
public:
	// Vuforia.DatabaseLoadARController Vuforia.DatabaseLoadARController::mInstance
	DatabaseLoadARController_t46BD7BB216821464A9EB9C66E30CC19A31FA1C7A * ___mInstance_5;
	// System.Object Vuforia.DatabaseLoadARController::mPadlock
	RuntimeObject * ___mPadlock_6;

public:
	inline static int32_t get_offset_of_mInstance_5() { return static_cast<int32_t>(offsetof(DatabaseLoadARController_t46BD7BB216821464A9EB9C66E30CC19A31FA1C7A_StaticFields, ___mInstance_5)); }
	inline DatabaseLoadARController_t46BD7BB216821464A9EB9C66E30CC19A31FA1C7A * get_mInstance_5() const { return ___mInstance_5; }
	inline DatabaseLoadARController_t46BD7BB216821464A9EB9C66E30CC19A31FA1C7A ** get_address_of_mInstance_5() { return &___mInstance_5; }
	inline void set_mInstance_5(DatabaseLoadARController_t46BD7BB216821464A9EB9C66E30CC19A31FA1C7A * value)
	{
		___mInstance_5 = value;
		Il2CppCodeGenWriteBarrier((&___mInstance_5), value);
	}

	inline static int32_t get_offset_of_mPadlock_6() { return static_cast<int32_t>(offsetof(DatabaseLoadARController_t46BD7BB216821464A9EB9C66E30CC19A31FA1C7A_StaticFields, ___mPadlock_6)); }
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
#endif // DATABASELOADARCONTROLLER_T46BD7BB216821464A9EB9C66E30CC19A31FA1C7A_H
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
#ifndef CONFIGUREVUFORIADATASETLOADER_T9699ED1842BECE4CD781F2452D5E64CDAB228748_H
#define CONFIGUREVUFORIADATASETLOADER_T9699ED1842BECE4CD781F2452D5E64CDAB228748_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Rocket.ConfigureVuforiaDatasetLoader
struct  ConfigureVuforiaDatasetLoader_t9699ED1842BECE4CD781F2452D5E64CDAB228748  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONFIGUREVUFORIADATASETLOADER_T9699ED1842BECE4CD781F2452D5E64CDAB228748_H



// Vuforia.DatabaseLoadARController Vuforia.DatabaseLoadARController::get_Instance()
extern "C" IL2CPP_METHOD_ATTR DatabaseLoadARController_t46BD7BB216821464A9EB9C66E30CC19A31FA1C7A * DatabaseLoadARController_get_Instance_m7832AF26EA7B3F732500D1EC9AD142B22C4603EE (const RuntimeMethod* method);
// System.String UnityEngine.Application::get_dataPath()
extern "C" IL2CPP_METHOD_ATTR String_t* Application_get_dataPath_m33D721D71C0687F0013C8953FDB0807B7B3F2A01 (const RuntimeMethod* method);
// System.String System.IO.Path::Combine(System.String,System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* Path_Combine_mAB92AD33FF91D3550E1683D5E732895A08B758DA (String_t* p0, String_t* p1, String_t* p2, const RuntimeMethod* method);
// System.Void Vuforia.DatabaseLoadARController::AddExternalDatasetSearchDir(System.String)
extern "C" IL2CPP_METHOD_ATTR void DatabaseLoadARController_AddExternalDatasetSearchDir_m321F7268D0C8DA3991890C0FBA97DE1B8B49D6EE (DatabaseLoadARController_t46BD7BB216821464A9EB9C66E30CC19A31FA1C7A * __this, String_t* p0, const RuntimeMethod* method);
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
// System.Void Rocket.ConfigureVuforiaDatasetLoader::Awake()
extern "C" IL2CPP_METHOD_ATTR void ConfigureVuforiaDatasetLoader_Awake_m5A1AF19420675B22F5B65777465DA9A67A852DA4 (ConfigureVuforiaDatasetLoader_t9699ED1842BECE4CD781F2452D5E64CDAB228748 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ConfigureVuforiaDatasetLoader_Awake_m5A1AF19420675B22F5B65777465DA9A67A852DA4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(DatabaseLoadARController_t46BD7BB216821464A9EB9C66E30CC19A31FA1C7A_il2cpp_TypeInfo_var);
		DatabaseLoadARController_t46BD7BB216821464A9EB9C66E30CC19A31FA1C7A * L_0 = DatabaseLoadARController_get_Instance_m7832AF26EA7B3F732500D1EC9AD142B22C4603EE(/*hidden argument*/NULL);
		String_t* L_1 = Application_get_dataPath_m33D721D71C0687F0013C8953FDB0807B7B3F2A01(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Path_t0B99A4B924A6FDF08814FFA8DD4CD121ED1A0752_il2cpp_TypeInfo_var);
		String_t* L_2 = Path_Combine_mAB92AD33FF91D3550E1683D5E732895A08B758DA(L_1, _stringLiteralDA433CD41E7FB7CD7B029E3B2A46C1F024984C0A, _stringLiteralEA7313426FF06F0BA28DA9611859D3A50AAE87F5, /*hidden argument*/NULL);
		NullCheck(L_0);
		DatabaseLoadARController_AddExternalDatasetSearchDir_m321F7268D0C8DA3991890C0FBA97DE1B8B49D6EE(L_0, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Rocket.ConfigureVuforiaDatasetLoader::.ctor()
extern "C" IL2CPP_METHOD_ATTR void ConfigureVuforiaDatasetLoader__ctor_m4E96B77A4D6C14A826C4481A4CC0EFB60309DC40 (ConfigureVuforiaDatasetLoader_t9699ED1842BECE4CD781F2452D5E64CDAB228748 * __this, const RuntimeMethod* method)
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
