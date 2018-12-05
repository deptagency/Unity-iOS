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


// Microsoft.Win32.RegistryKey
struct RegistryKey_t4211574351;
// System.Action`1<System.Object>
struct Action_1_t3252573759;
// System.AsyncCallback
struct AsyncCallback_t3962456242;
// System.Byte
struct Byte_t1134296376;
// System.Byte[]
struct ByteU5BU5D_t4116647657;
// System.Char
struct Char_t3634460470;
// System.Char[]
struct CharU5BU5D_t3528271667;
// System.Collections.Generic.Dictionary`2<System.Guid,System.Type>
struct Dictionary_2_t1532962293;
// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeType>>
struct List_1_t1035217313;
// System.Collections.IDictionary
struct IDictionary_t1363984059;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.TimeZoneInfo>
struct ReadOnlyCollection_1_t1373982141;
// System.DateTimeParse/DS[][]
struct DSU5BU5DU5BU5D_t211577518;
// System.DateTimeParse/MatchNumberDelegate
struct MatchNumberDelegate_t272938340;
// System.DelegateData
struct DelegateData_t1677132599;
// System.Delegate[]
struct DelegateU5BU5D_t1703627840;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t1169129676;
// System.Double[]
struct DoubleU5BU5D_t3413330114;
// System.Exception
struct Exception_t;
// System.Globalization.Calendar
struct Calendar_t1661121569;
// System.Globalization.CompareInfo
struct CompareInfo_t1092934962;
// System.IAsyncResult
struct IAsyncResult_t767004451;
// System.Int32
struct Int32_t2950945753;
// System.Int32[]
struct Int32U5BU5D_t385246372;
// System.IntPtr[]
struct IntPtrU5BU5D_t4013366056;
// System.MonoTypeInfo
struct MonoTypeInfo_t3366989025;
// System.Object[]
struct ObjectU5BU5D_t2843939325;
// System.Reflection.Binder
struct Binder_t2999457153;
// System.Reflection.Emit.AssemblyBuilder
struct AssemblyBuilder_t359885250;
// System.Reflection.MemberFilter
struct MemberFilter_t426314064;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Reflection.RuntimeConstructorInfo
struct RuntimeConstructorInfo_t1806616898;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_t2481557153;
// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t386037858;
// System.Security.Util.Tokenizer/StringMaker
struct StringMaker_t2784115625;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t1281789340;
// System.Threading.CancellationTokenSource
struct CancellationTokenSource_t540272775;
// System.TimeZoneInfo/AdjustmentRule[]
struct AdjustmentRuleU5BU5D_t1469475992;
// System.Type[]
struct TypeU5BU5D_t3940880105;
// System.Void
struct Void_t1185182177;

struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;



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
#ifndef ATTRIBUTE_T861562559_H
#define ATTRIBUTE_T861562559_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Attribute
struct  Attribute_t861562559  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ATTRIBUTE_T861562559_H
#ifndef DATETIMEPARSE_T715850018_H
#define DATETIMEPARSE_T715850018_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.DateTimeParse
struct  DateTimeParse_t715850018  : public RuntimeObject
{
public:

public:
};

struct DateTimeParse_t715850018_StaticFields
{
public:
	// System.DateTimeParse/MatchNumberDelegate System.DateTimeParse::m_hebrewNumberParser
	MatchNumberDelegate_t272938340 * ___m_hebrewNumberParser_0;
	// System.DateTimeParse/DS[][] System.DateTimeParse::dateParsingStates
	DSU5BU5DU5BU5D_t211577518* ___dateParsingStates_1;

public:
	inline static int32_t get_offset_of_m_hebrewNumberParser_0() { return static_cast<int32_t>(offsetof(DateTimeParse_t715850018_StaticFields, ___m_hebrewNumberParser_0)); }
	inline MatchNumberDelegate_t272938340 * get_m_hebrewNumberParser_0() const { return ___m_hebrewNumberParser_0; }
	inline MatchNumberDelegate_t272938340 ** get_address_of_m_hebrewNumberParser_0() { return &___m_hebrewNumberParser_0; }
	inline void set_m_hebrewNumberParser_0(MatchNumberDelegate_t272938340 * value)
	{
		___m_hebrewNumberParser_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_hebrewNumberParser_0), value);
	}

	inline static int32_t get_offset_of_dateParsingStates_1() { return static_cast<int32_t>(offsetof(DateTimeParse_t715850018_StaticFields, ___dateParsingStates_1)); }
	inline DSU5BU5DU5BU5D_t211577518* get_dateParsingStates_1() const { return ___dateParsingStates_1; }
	inline DSU5BU5DU5BU5D_t211577518** get_address_of_dateParsingStates_1() { return &___dateParsingStates_1; }
	inline void set_dateParsingStates_1(DSU5BU5DU5BU5D_t211577518* value)
	{
		___dateParsingStates_1 = value;
		Il2CppCodeGenWriteBarrier((&___dateParsingStates_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATETIMEPARSE_T715850018_H
#ifndef EXCEPTION_T_H
#define EXCEPTION_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Exception
struct  Exception_t  : public RuntimeObject
{
public:
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t * ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject * ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject * ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_t2481557153 * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t1169129676* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t4013366056* ___native_trace_ips_15;

public:
	inline static int32_t get_offset_of__className_1() { return static_cast<int32_t>(offsetof(Exception_t, ____className_1)); }
	inline String_t* get__className_1() const { return ____className_1; }
	inline String_t** get_address_of__className_1() { return &____className_1; }
	inline void set__className_1(String_t* value)
	{
		____className_1 = value;
		Il2CppCodeGenWriteBarrier((&____className_1), value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(Exception_t, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier((&____message_2), value);
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(Exception_t, ____data_3)); }
	inline RuntimeObject* get__data_3() const { return ____data_3; }
	inline RuntimeObject** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(RuntimeObject* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((&____data_3), value);
	}

	inline static int32_t get_offset_of__innerException_4() { return static_cast<int32_t>(offsetof(Exception_t, ____innerException_4)); }
	inline Exception_t * get__innerException_4() const { return ____innerException_4; }
	inline Exception_t ** get_address_of__innerException_4() { return &____innerException_4; }
	inline void set__innerException_4(Exception_t * value)
	{
		____innerException_4 = value;
		Il2CppCodeGenWriteBarrier((&____innerException_4), value);
	}

	inline static int32_t get_offset_of__helpURL_5() { return static_cast<int32_t>(offsetof(Exception_t, ____helpURL_5)); }
	inline String_t* get__helpURL_5() const { return ____helpURL_5; }
	inline String_t** get_address_of__helpURL_5() { return &____helpURL_5; }
	inline void set__helpURL_5(String_t* value)
	{
		____helpURL_5 = value;
		Il2CppCodeGenWriteBarrier((&____helpURL_5), value);
	}

	inline static int32_t get_offset_of__stackTrace_6() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTrace_6)); }
	inline RuntimeObject * get__stackTrace_6() const { return ____stackTrace_6; }
	inline RuntimeObject ** get_address_of__stackTrace_6() { return &____stackTrace_6; }
	inline void set__stackTrace_6(RuntimeObject * value)
	{
		____stackTrace_6 = value;
		Il2CppCodeGenWriteBarrier((&____stackTrace_6), value);
	}

	inline static int32_t get_offset_of__stackTraceString_7() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTraceString_7)); }
	inline String_t* get__stackTraceString_7() const { return ____stackTraceString_7; }
	inline String_t** get_address_of__stackTraceString_7() { return &____stackTraceString_7; }
	inline void set__stackTraceString_7(String_t* value)
	{
		____stackTraceString_7 = value;
		Il2CppCodeGenWriteBarrier((&____stackTraceString_7), value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_8() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_8)); }
	inline String_t* get__remoteStackTraceString_8() const { return ____remoteStackTraceString_8; }
	inline String_t** get_address_of__remoteStackTraceString_8() { return &____remoteStackTraceString_8; }
	inline void set__remoteStackTraceString_8(String_t* value)
	{
		____remoteStackTraceString_8 = value;
		Il2CppCodeGenWriteBarrier((&____remoteStackTraceString_8), value);
	}

	inline static int32_t get_offset_of__remoteStackIndex_9() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackIndex_9)); }
	inline int32_t get__remoteStackIndex_9() const { return ____remoteStackIndex_9; }
	inline int32_t* get_address_of__remoteStackIndex_9() { return &____remoteStackIndex_9; }
	inline void set__remoteStackIndex_9(int32_t value)
	{
		____remoteStackIndex_9 = value;
	}

	inline static int32_t get_offset_of__dynamicMethods_10() { return static_cast<int32_t>(offsetof(Exception_t, ____dynamicMethods_10)); }
	inline RuntimeObject * get__dynamicMethods_10() const { return ____dynamicMethods_10; }
	inline RuntimeObject ** get_address_of__dynamicMethods_10() { return &____dynamicMethods_10; }
	inline void set__dynamicMethods_10(RuntimeObject * value)
	{
		____dynamicMethods_10 = value;
		Il2CppCodeGenWriteBarrier((&____dynamicMethods_10), value);
	}

	inline static int32_t get_offset_of__HResult_11() { return static_cast<int32_t>(offsetof(Exception_t, ____HResult_11)); }
	inline int32_t get__HResult_11() const { return ____HResult_11; }
	inline int32_t* get_address_of__HResult_11() { return &____HResult_11; }
	inline void set__HResult_11(int32_t value)
	{
		____HResult_11 = value;
	}

	inline static int32_t get_offset_of__source_12() { return static_cast<int32_t>(offsetof(Exception_t, ____source_12)); }
	inline String_t* get__source_12() const { return ____source_12; }
	inline String_t** get_address_of__source_12() { return &____source_12; }
	inline void set__source_12(String_t* value)
	{
		____source_12 = value;
		Il2CppCodeGenWriteBarrier((&____source_12), value);
	}

	inline static int32_t get_offset_of__safeSerializationManager_13() { return static_cast<int32_t>(offsetof(Exception_t, ____safeSerializationManager_13)); }
	inline SafeSerializationManager_t2481557153 * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_t2481557153 ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_t2481557153 * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((&____safeSerializationManager_13), value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t1169129676* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t1169129676** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t1169129676* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((&___captured_traces_14), value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t4013366056* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t4013366056** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t4013366056* value)
	{
		___native_trace_ips_15 = value;
		Il2CppCodeGenWriteBarrier((&___native_trace_ips_15), value);
	}
};

struct Exception_t_StaticFields
{
public:
	// System.Object System.Exception::s_EDILock
	RuntimeObject * ___s_EDILock_0;

public:
	inline static int32_t get_offset_of_s_EDILock_0() { return static_cast<int32_t>(offsetof(Exception_t_StaticFields, ___s_EDILock_0)); }
	inline RuntimeObject * get_s_EDILock_0() const { return ___s_EDILock_0; }
	inline RuntimeObject ** get_address_of_s_EDILock_0() { return &___s_EDILock_0; }
	inline void set_s_EDILock_0(RuntimeObject * value)
	{
		___s_EDILock_0 = value;
		Il2CppCodeGenWriteBarrier((&___s_EDILock_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_t2481557153 * ____safeSerializationManager_13;
	StackTraceU5BU5D_t1169129676* ___captured_traces_14;
	intptr_t* ___native_trace_ips_15;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_t2481557153 * ____safeSerializationManager_13;
	StackTraceU5BU5D_t1169129676* ___captured_traces_14;
	intptr_t* ___native_trace_ips_15;
};
#endif // EXCEPTION_T_H
#ifndef GC_T959872083_H
#define GC_T959872083_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.GC
struct  GC_t959872083  : public RuntimeObject
{
public:

public:
};

struct GC_t959872083_StaticFields
{
public:
	// System.Object System.GC::EPHEMERON_TOMBSTONE
	RuntimeObject * ___EPHEMERON_TOMBSTONE_0;

public:
	inline static int32_t get_offset_of_EPHEMERON_TOMBSTONE_0() { return static_cast<int32_t>(offsetof(GC_t959872083_StaticFields, ___EPHEMERON_TOMBSTONE_0)); }
	inline RuntimeObject * get_EPHEMERON_TOMBSTONE_0() const { return ___EPHEMERON_TOMBSTONE_0; }
	inline RuntimeObject ** get_address_of_EPHEMERON_TOMBSTONE_0() { return &___EPHEMERON_TOMBSTONE_0; }
	inline void set_EPHEMERON_TOMBSTONE_0(RuntimeObject * value)
	{
		___EPHEMERON_TOMBSTONE_0 = value;
		Il2CppCodeGenWriteBarrier((&___EPHEMERON_TOMBSTONE_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GC_T959872083_H
#ifndef MATH_T1671470975_H
#define MATH_T1671470975_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Math
struct  Math_t1671470975  : public RuntimeObject
{
public:

public:
};

struct Math_t1671470975_StaticFields
{
public:
	// System.Double System.Math::doubleRoundLimit
	double ___doubleRoundLimit_0;
	// System.Double[] System.Math::roundPower10Double
	DoubleU5BU5D_t3413330114* ___roundPower10Double_2;

public:
	inline static int32_t get_offset_of_doubleRoundLimit_0() { return static_cast<int32_t>(offsetof(Math_t1671470975_StaticFields, ___doubleRoundLimit_0)); }
	inline double get_doubleRoundLimit_0() const { return ___doubleRoundLimit_0; }
	inline double* get_address_of_doubleRoundLimit_0() { return &___doubleRoundLimit_0; }
	inline void set_doubleRoundLimit_0(double value)
	{
		___doubleRoundLimit_0 = value;
	}

	inline static int32_t get_offset_of_roundPower10Double_2() { return static_cast<int32_t>(offsetof(Math_t1671470975_StaticFields, ___roundPower10Double_2)); }
	inline DoubleU5BU5D_t3413330114* get_roundPower10Double_2() const { return ___roundPower10Double_2; }
	inline DoubleU5BU5D_t3413330114** get_address_of_roundPower10Double_2() { return &___roundPower10Double_2; }
	inline void set_roundPower10Double_2(DoubleU5BU5D_t3413330114* value)
	{
		___roundPower10Double_2 = value;
		Il2CppCodeGenWriteBarrier((&___roundPower10Double_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MATH_T1671470975_H
#ifndef NUMBER_T1718410752_H
#define NUMBER_T1718410752_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Number
struct  Number_t1718410752  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NUMBER_T1718410752_H
#ifndef RANDOM_T108471755_H
#define RANDOM_T108471755_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Random
struct  Random_t108471755  : public RuntimeObject
{
public:
	// System.Int32 System.Random::inext
	int32_t ___inext_0;
	// System.Int32 System.Random::inextp
	int32_t ___inextp_1;
	// System.Int32[] System.Random::SeedArray
	Int32U5BU5D_t385246372* ___SeedArray_2;

public:
	inline static int32_t get_offset_of_inext_0() { return static_cast<int32_t>(offsetof(Random_t108471755, ___inext_0)); }
	inline int32_t get_inext_0() const { return ___inext_0; }
	inline int32_t* get_address_of_inext_0() { return &___inext_0; }
	inline void set_inext_0(int32_t value)
	{
		___inext_0 = value;
	}

	inline static int32_t get_offset_of_inextp_1() { return static_cast<int32_t>(offsetof(Random_t108471755, ___inextp_1)); }
	inline int32_t get_inextp_1() const { return ___inextp_1; }
	inline int32_t* get_address_of_inextp_1() { return &___inextp_1; }
	inline void set_inextp_1(int32_t value)
	{
		___inextp_1 = value;
	}

	inline static int32_t get_offset_of_SeedArray_2() { return static_cast<int32_t>(offsetof(Random_t108471755, ___SeedArray_2)); }
	inline Int32U5BU5D_t385246372* get_SeedArray_2() const { return ___SeedArray_2; }
	inline Int32U5BU5D_t385246372** get_address_of_SeedArray_2() { return &___SeedArray_2; }
	inline void set_SeedArray_2(Int32U5BU5D_t385246372* value)
	{
		___SeedArray_2 = value;
		Il2CppCodeGenWriteBarrier((&___SeedArray_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RANDOM_T108471755_H
#ifndef MEMBERINFO_T_H
#define MEMBERINFO_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MemberInfo
struct  MemberInfo_t  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MEMBERINFO_T_H
#ifndef SHAREDSTATICS_T285331669_H
#define SHAREDSTATICS_T285331669_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.SharedStatics
struct  SharedStatics_t285331669  : public RuntimeObject
{
public:
	// System.Security.Util.Tokenizer/StringMaker System.SharedStatics::_maker
	StringMaker_t2784115625 * ____maker_1;

public:
	inline static int32_t get_offset_of__maker_1() { return static_cast<int32_t>(offsetof(SharedStatics_t285331669, ____maker_1)); }
	inline StringMaker_t2784115625 * get__maker_1() const { return ____maker_1; }
	inline StringMaker_t2784115625 ** get_address_of__maker_1() { return &____maker_1; }
	inline void set__maker_1(StringMaker_t2784115625 * value)
	{
		____maker_1 = value;
		Il2CppCodeGenWriteBarrier((&____maker_1), value);
	}
};

struct SharedStatics_t285331669_StaticFields
{
public:
	// System.SharedStatics System.SharedStatics::_sharedStatics
	SharedStatics_t285331669 * ____sharedStatics_0;

public:
	inline static int32_t get_offset_of__sharedStatics_0() { return static_cast<int32_t>(offsetof(SharedStatics_t285331669_StaticFields, ____sharedStatics_0)); }
	inline SharedStatics_t285331669 * get__sharedStatics_0() const { return ____sharedStatics_0; }
	inline SharedStatics_t285331669 ** get_address_of__sharedStatics_0() { return &____sharedStatics_0; }
	inline void set__sharedStatics_0(SharedStatics_t285331669 * value)
	{
		____sharedStatics_0 = value;
		Il2CppCodeGenWriteBarrier((&____sharedStatics_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SHAREDSTATICS_T285331669_H
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
#ifndef STRINGCOMPARER_T3301955079_H
#define STRINGCOMPARER_T3301955079_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.StringComparer
struct  StringComparer_t3301955079  : public RuntimeObject
{
public:

public:
};

struct StringComparer_t3301955079_StaticFields
{
public:
	// System.StringComparer System.StringComparer::_invariantCulture
	StringComparer_t3301955079 * ____invariantCulture_0;
	// System.StringComparer System.StringComparer::_invariantCultureIgnoreCase
	StringComparer_t3301955079 * ____invariantCultureIgnoreCase_1;
	// System.StringComparer System.StringComparer::_ordinal
	StringComparer_t3301955079 * ____ordinal_2;
	// System.StringComparer System.StringComparer::_ordinalIgnoreCase
	StringComparer_t3301955079 * ____ordinalIgnoreCase_3;

public:
	inline static int32_t get_offset_of__invariantCulture_0() { return static_cast<int32_t>(offsetof(StringComparer_t3301955079_StaticFields, ____invariantCulture_0)); }
	inline StringComparer_t3301955079 * get__invariantCulture_0() const { return ____invariantCulture_0; }
	inline StringComparer_t3301955079 ** get_address_of__invariantCulture_0() { return &____invariantCulture_0; }
	inline void set__invariantCulture_0(StringComparer_t3301955079 * value)
	{
		____invariantCulture_0 = value;
		Il2CppCodeGenWriteBarrier((&____invariantCulture_0), value);
	}

	inline static int32_t get_offset_of__invariantCultureIgnoreCase_1() { return static_cast<int32_t>(offsetof(StringComparer_t3301955079_StaticFields, ____invariantCultureIgnoreCase_1)); }
	inline StringComparer_t3301955079 * get__invariantCultureIgnoreCase_1() const { return ____invariantCultureIgnoreCase_1; }
	inline StringComparer_t3301955079 ** get_address_of__invariantCultureIgnoreCase_1() { return &____invariantCultureIgnoreCase_1; }
	inline void set__invariantCultureIgnoreCase_1(StringComparer_t3301955079 * value)
	{
		____invariantCultureIgnoreCase_1 = value;
		Il2CppCodeGenWriteBarrier((&____invariantCultureIgnoreCase_1), value);
	}

	inline static int32_t get_offset_of__ordinal_2() { return static_cast<int32_t>(offsetof(StringComparer_t3301955079_StaticFields, ____ordinal_2)); }
	inline StringComparer_t3301955079 * get__ordinal_2() const { return ____ordinal_2; }
	inline StringComparer_t3301955079 ** get_address_of__ordinal_2() { return &____ordinal_2; }
	inline void set__ordinal_2(StringComparer_t3301955079 * value)
	{
		____ordinal_2 = value;
		Il2CppCodeGenWriteBarrier((&____ordinal_2), value);
	}

	inline static int32_t get_offset_of__ordinalIgnoreCase_3() { return static_cast<int32_t>(offsetof(StringComparer_t3301955079_StaticFields, ____ordinalIgnoreCase_3)); }
	inline StringComparer_t3301955079 * get__ordinalIgnoreCase_3() const { return ____ordinalIgnoreCase_3; }
	inline StringComparer_t3301955079 ** get_address_of__ordinalIgnoreCase_3() { return &____ordinalIgnoreCase_3; }
	inline void set__ordinalIgnoreCase_3(StringComparer_t3301955079 * value)
	{
		____ordinalIgnoreCase_3 = value;
		Il2CppCodeGenWriteBarrier((&____ordinalIgnoreCase_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRINGCOMPARER_T3301955079_H
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
#ifndef DATETIME_T3738529785_H
#define DATETIME_T3738529785_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.DateTime
struct  DateTime_t3738529785 
{
public:
	// System.UInt64 System.DateTime::dateData
	uint64_t ___dateData_44;

public:
	inline static int32_t get_offset_of_dateData_44() { return static_cast<int32_t>(offsetof(DateTime_t3738529785, ___dateData_44)); }
	inline uint64_t get_dateData_44() const { return ___dateData_44; }
	inline uint64_t* get_address_of_dateData_44() { return &___dateData_44; }
	inline void set_dateData_44(uint64_t value)
	{
		___dateData_44 = value;
	}
};

struct DateTime_t3738529785_StaticFields
{
public:
	// System.Int32[] System.DateTime::DaysToMonth365
	Int32U5BU5D_t385246372* ___DaysToMonth365_29;
	// System.Int32[] System.DateTime::DaysToMonth366
	Int32U5BU5D_t385246372* ___DaysToMonth366_30;
	// System.DateTime System.DateTime::MinValue
	DateTime_t3738529785  ___MinValue_31;
	// System.DateTime System.DateTime::MaxValue
	DateTime_t3738529785  ___MaxValue_32;

public:
	inline static int32_t get_offset_of_DaysToMonth365_29() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___DaysToMonth365_29)); }
	inline Int32U5BU5D_t385246372* get_DaysToMonth365_29() const { return ___DaysToMonth365_29; }
	inline Int32U5BU5D_t385246372** get_address_of_DaysToMonth365_29() { return &___DaysToMonth365_29; }
	inline void set_DaysToMonth365_29(Int32U5BU5D_t385246372* value)
	{
		___DaysToMonth365_29 = value;
		Il2CppCodeGenWriteBarrier((&___DaysToMonth365_29), value);
	}

	inline static int32_t get_offset_of_DaysToMonth366_30() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___DaysToMonth366_30)); }
	inline Int32U5BU5D_t385246372* get_DaysToMonth366_30() const { return ___DaysToMonth366_30; }
	inline Int32U5BU5D_t385246372** get_address_of_DaysToMonth366_30() { return &___DaysToMonth366_30; }
	inline void set_DaysToMonth366_30(Int32U5BU5D_t385246372* value)
	{
		___DaysToMonth366_30 = value;
		Il2CppCodeGenWriteBarrier((&___DaysToMonth366_30), value);
	}

	inline static int32_t get_offset_of_MinValue_31() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___MinValue_31)); }
	inline DateTime_t3738529785  get_MinValue_31() const { return ___MinValue_31; }
	inline DateTime_t3738529785 * get_address_of_MinValue_31() { return &___MinValue_31; }
	inline void set_MinValue_31(DateTime_t3738529785  value)
	{
		___MinValue_31 = value;
	}

	inline static int32_t get_offset_of_MaxValue_32() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___MaxValue_32)); }
	inline DateTime_t3738529785  get_MaxValue_32() const { return ___MaxValue_32; }
	inline DateTime_t3738529785 * get_address_of_MaxValue_32() { return &___MaxValue_32; }
	inline void set_MaxValue_32(DateTime_t3738529785  value)
	{
		___MaxValue_32 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATETIME_T3738529785_H
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
#ifndef FLAGSATTRIBUTE_T2262502849_H
#define FLAGSATTRIBUTE_T2262502849_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.FlagsAttribute
struct  FlagsAttribute_t2262502849  : public Attribute_t861562559
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FLAGSATTRIBUTE_T2262502849_H
#ifndef GUID_T_H
#define GUID_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Guid
struct  Guid_t 
{
public:
	// System.Int32 System.Guid::_a
	int32_t ____a_1;
	// System.Int16 System.Guid::_b
	int16_t ____b_2;
	// System.Int16 System.Guid::_c
	int16_t ____c_3;
	// System.Byte System.Guid::_d
	uint8_t ____d_4;
	// System.Byte System.Guid::_e
	uint8_t ____e_5;
	// System.Byte System.Guid::_f
	uint8_t ____f_6;
	// System.Byte System.Guid::_g
	uint8_t ____g_7;
	// System.Byte System.Guid::_h
	uint8_t ____h_8;
	// System.Byte System.Guid::_i
	uint8_t ____i_9;
	// System.Byte System.Guid::_j
	uint8_t ____j_10;
	// System.Byte System.Guid::_k
	uint8_t ____k_11;

public:
	inline static int32_t get_offset_of__a_1() { return static_cast<int32_t>(offsetof(Guid_t, ____a_1)); }
	inline int32_t get__a_1() const { return ____a_1; }
	inline int32_t* get_address_of__a_1() { return &____a_1; }
	inline void set__a_1(int32_t value)
	{
		____a_1 = value;
	}

	inline static int32_t get_offset_of__b_2() { return static_cast<int32_t>(offsetof(Guid_t, ____b_2)); }
	inline int16_t get__b_2() const { return ____b_2; }
	inline int16_t* get_address_of__b_2() { return &____b_2; }
	inline void set__b_2(int16_t value)
	{
		____b_2 = value;
	}

	inline static int32_t get_offset_of__c_3() { return static_cast<int32_t>(offsetof(Guid_t, ____c_3)); }
	inline int16_t get__c_3() const { return ____c_3; }
	inline int16_t* get_address_of__c_3() { return &____c_3; }
	inline void set__c_3(int16_t value)
	{
		____c_3 = value;
	}

	inline static int32_t get_offset_of__d_4() { return static_cast<int32_t>(offsetof(Guid_t, ____d_4)); }
	inline uint8_t get__d_4() const { return ____d_4; }
	inline uint8_t* get_address_of__d_4() { return &____d_4; }
	inline void set__d_4(uint8_t value)
	{
		____d_4 = value;
	}

	inline static int32_t get_offset_of__e_5() { return static_cast<int32_t>(offsetof(Guid_t, ____e_5)); }
	inline uint8_t get__e_5() const { return ____e_5; }
	inline uint8_t* get_address_of__e_5() { return &____e_5; }
	inline void set__e_5(uint8_t value)
	{
		____e_5 = value;
	}

	inline static int32_t get_offset_of__f_6() { return static_cast<int32_t>(offsetof(Guid_t, ____f_6)); }
	inline uint8_t get__f_6() const { return ____f_6; }
	inline uint8_t* get_address_of__f_6() { return &____f_6; }
	inline void set__f_6(uint8_t value)
	{
		____f_6 = value;
	}

	inline static int32_t get_offset_of__g_7() { return static_cast<int32_t>(offsetof(Guid_t, ____g_7)); }
	inline uint8_t get__g_7() const { return ____g_7; }
	inline uint8_t* get_address_of__g_7() { return &____g_7; }
	inline void set__g_7(uint8_t value)
	{
		____g_7 = value;
	}

	inline static int32_t get_offset_of__h_8() { return static_cast<int32_t>(offsetof(Guid_t, ____h_8)); }
	inline uint8_t get__h_8() const { return ____h_8; }
	inline uint8_t* get_address_of__h_8() { return &____h_8; }
	inline void set__h_8(uint8_t value)
	{
		____h_8 = value;
	}

	inline static int32_t get_offset_of__i_9() { return static_cast<int32_t>(offsetof(Guid_t, ____i_9)); }
	inline uint8_t get__i_9() const { return ____i_9; }
	inline uint8_t* get_address_of__i_9() { return &____i_9; }
	inline void set__i_9(uint8_t value)
	{
		____i_9 = value;
	}

	inline static int32_t get_offset_of__j_10() { return static_cast<int32_t>(offsetof(Guid_t, ____j_10)); }
	inline uint8_t get__j_10() const { return ____j_10; }
	inline uint8_t* get_address_of__j_10() { return &____j_10; }
	inline void set__j_10(uint8_t value)
	{
		____j_10 = value;
	}

	inline static int32_t get_offset_of__k_11() { return static_cast<int32_t>(offsetof(Guid_t, ____k_11)); }
	inline uint8_t get__k_11() const { return ____k_11; }
	inline uint8_t* get_address_of__k_11() { return &____k_11; }
	inline void set__k_11(uint8_t value)
	{
		____k_11 = value;
	}
};

struct Guid_t_StaticFields
{
public:
	// System.Guid System.Guid::Empty
	Guid_t  ___Empty_0;
	// System.Object System.Guid::_rngAccess
	RuntimeObject * ____rngAccess_12;
	// System.Security.Cryptography.RandomNumberGenerator System.Guid::_rng
	RandomNumberGenerator_t386037858 * ____rng_13;
	// System.Security.Cryptography.RandomNumberGenerator System.Guid::_fastRng
	RandomNumberGenerator_t386037858 * ____fastRng_14;

public:
	inline static int32_t get_offset_of_Empty_0() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ___Empty_0)); }
	inline Guid_t  get_Empty_0() const { return ___Empty_0; }
	inline Guid_t * get_address_of_Empty_0() { return &___Empty_0; }
	inline void set_Empty_0(Guid_t  value)
	{
		___Empty_0 = value;
	}

	inline static int32_t get_offset_of__rngAccess_12() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____rngAccess_12)); }
	inline RuntimeObject * get__rngAccess_12() const { return ____rngAccess_12; }
	inline RuntimeObject ** get_address_of__rngAccess_12() { return &____rngAccess_12; }
	inline void set__rngAccess_12(RuntimeObject * value)
	{
		____rngAccess_12 = value;
		Il2CppCodeGenWriteBarrier((&____rngAccess_12), value);
	}

	inline static int32_t get_offset_of__rng_13() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____rng_13)); }
	inline RandomNumberGenerator_t386037858 * get__rng_13() const { return ____rng_13; }
	inline RandomNumberGenerator_t386037858 ** get_address_of__rng_13() { return &____rng_13; }
	inline void set__rng_13(RandomNumberGenerator_t386037858 * value)
	{
		____rng_13 = value;
		Il2CppCodeGenWriteBarrier((&____rng_13), value);
	}

	inline static int32_t get_offset_of__fastRng_14() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____fastRng_14)); }
	inline RandomNumberGenerator_t386037858 * get__fastRng_14() const { return ____fastRng_14; }
	inline RandomNumberGenerator_t386037858 ** get_address_of__fastRng_14() { return &____fastRng_14; }
	inline void set__fastRng_14(RandomNumberGenerator_t386037858 * value)
	{
		____fastRng_14 = value;
		Il2CppCodeGenWriteBarrier((&____fastRng_14), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GUID_T_H
#ifndef INT16_T2552820387_H
#define INT16_T2552820387_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int16
struct  Int16_t2552820387 
{
public:
	// System.Int16 System.Int16::m_value
	int16_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int16_t2552820387, ___m_value_0)); }
	inline int16_t get_m_value_0() const { return ___m_value_0; }
	inline int16_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int16_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT16_T2552820387_H
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
#ifndef INT64_T3736567304_H
#define INT64_T3736567304_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int64
struct  Int64_t3736567304 
{
public:
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int64_t3736567304, ___m_value_0)); }
	inline int64_t get_m_value_0() const { return ___m_value_0; }
	inline int64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int64_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT64_T3736567304_H
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
#ifndef INVALIDTIMEZONEEXCEPTION_T4066718130_H
#define INVALIDTIMEZONEEXCEPTION_T4066718130_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.InvalidTimeZoneException
struct  InvalidTimeZoneException_t4066718130  : public Exception_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INVALIDTIMEZONEEXCEPTION_T4066718130_H
#ifndef NONSERIALIZEDATTRIBUTE_T2945079482_H
#define NONSERIALIZEDATTRIBUTE_T2945079482_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.NonSerializedAttribute
struct  NonSerializedAttribute_t2945079482  : public Attribute_t861562559
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NONSERIALIZEDATTRIBUTE_T2945079482_H
#ifndef NUMBERBUFFER_T2021063877_H
#define NUMBERBUFFER_T2021063877_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Number/NumberBuffer
struct  NumberBuffer_t2021063877 
{
public:
	// System.Byte* System.Number/NumberBuffer::baseAddress
	uint8_t* ___baseAddress_1;
	// System.Char* System.Number/NumberBuffer::digits
	Il2CppChar* ___digits_2;
	// System.Int32 System.Number/NumberBuffer::precision
	int32_t ___precision_3;
	// System.Int32 System.Number/NumberBuffer::scale
	int32_t ___scale_4;
	// System.Boolean System.Number/NumberBuffer::sign
	bool ___sign_5;

public:
	inline static int32_t get_offset_of_baseAddress_1() { return static_cast<int32_t>(offsetof(NumberBuffer_t2021063877, ___baseAddress_1)); }
	inline uint8_t* get_baseAddress_1() const { return ___baseAddress_1; }
	inline uint8_t** get_address_of_baseAddress_1() { return &___baseAddress_1; }
	inline void set_baseAddress_1(uint8_t* value)
	{
		___baseAddress_1 = value;
	}

	inline static int32_t get_offset_of_digits_2() { return static_cast<int32_t>(offsetof(NumberBuffer_t2021063877, ___digits_2)); }
	inline Il2CppChar* get_digits_2() const { return ___digits_2; }
	inline Il2CppChar** get_address_of_digits_2() { return &___digits_2; }
	inline void set_digits_2(Il2CppChar* value)
	{
		___digits_2 = value;
	}

	inline static int32_t get_offset_of_precision_3() { return static_cast<int32_t>(offsetof(NumberBuffer_t2021063877, ___precision_3)); }
	inline int32_t get_precision_3() const { return ___precision_3; }
	inline int32_t* get_address_of_precision_3() { return &___precision_3; }
	inline void set_precision_3(int32_t value)
	{
		___precision_3 = value;
	}

	inline static int32_t get_offset_of_scale_4() { return static_cast<int32_t>(offsetof(NumberBuffer_t2021063877, ___scale_4)); }
	inline int32_t get_scale_4() const { return ___scale_4; }
	inline int32_t* get_address_of_scale_4() { return &___scale_4; }
	inline void set_scale_4(int32_t value)
	{
		___scale_4 = value;
	}

	inline static int32_t get_offset_of_sign_5() { return static_cast<int32_t>(offsetof(NumberBuffer_t2021063877, ___sign_5)); }
	inline bool get_sign_5() const { return ___sign_5; }
	inline bool* get_address_of_sign_5() { return &___sign_5; }
	inline void set_sign_5(bool value)
	{
		___sign_5 = value;
	}
};

struct NumberBuffer_t2021063877_StaticFields
{
public:
	// System.Int32 System.Number/NumberBuffer::NumberBufferBytes
	int32_t ___NumberBufferBytes_0;

public:
	inline static int32_t get_offset_of_NumberBufferBytes_0() { return static_cast<int32_t>(offsetof(NumberBuffer_t2021063877_StaticFields, ___NumberBufferBytes_0)); }
	inline int32_t get_NumberBufferBytes_0() const { return ___NumberBufferBytes_0; }
	inline int32_t* get_address_of_NumberBufferBytes_0() { return &___NumberBufferBytes_0; }
	inline void set_NumberBufferBytes_0(int32_t value)
	{
		___NumberBufferBytes_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Number/NumberBuffer
struct NumberBuffer_t2021063877_marshaled_pinvoke
{
	uint8_t* ___baseAddress_1;
	Il2CppChar* ___digits_2;
	int32_t ___precision_3;
	int32_t ___scale_4;
	int32_t ___sign_5;
};
// Native definition for COM marshalling of System.Number/NumberBuffer
struct NumberBuffer_t2021063877_marshaled_com
{
	uint8_t* ___baseAddress_1;
	Il2CppChar* ___digits_2;
	int32_t ___precision_3;
	int32_t ___scale_4;
	int32_t ___sign_5;
};
#endif // NUMBERBUFFER_T2021063877_H
#ifndef OBSOLETEATTRIBUTE_T303876359_H
#define OBSOLETEATTRIBUTE_T303876359_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ObsoleteAttribute
struct  ObsoleteAttribute_t303876359  : public Attribute_t861562559
{
public:
	// System.String System.ObsoleteAttribute::_message
	String_t* ____message_0;
	// System.Boolean System.ObsoleteAttribute::_error
	bool ____error_1;

public:
	inline static int32_t get_offset_of__message_0() { return static_cast<int32_t>(offsetof(ObsoleteAttribute_t303876359, ____message_0)); }
	inline String_t* get__message_0() const { return ____message_0; }
	inline String_t** get_address_of__message_0() { return &____message_0; }
	inline void set__message_0(String_t* value)
	{
		____message_0 = value;
		Il2CppCodeGenWriteBarrier((&____message_0), value);
	}

	inline static int32_t get_offset_of__error_1() { return static_cast<int32_t>(offsetof(ObsoleteAttribute_t303876359, ____error_1)); }
	inline bool get__error_1() const { return ____error_1; }
	inline bool* get_address_of__error_1() { return &____error_1; }
	inline void set__error_1(bool value)
	{
		____error_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OBSOLETEATTRIBUTE_T303876359_H
#ifndef ORDINALCOMPARER_T3407243298_H
#define ORDINALCOMPARER_T3407243298_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.OrdinalComparer
struct  OrdinalComparer_t3407243298  : public StringComparer_t3301955079
{
public:
	// System.Boolean System.OrdinalComparer::_ignoreCase
	bool ____ignoreCase_4;

public:
	inline static int32_t get_offset_of__ignoreCase_4() { return static_cast<int32_t>(offsetof(OrdinalComparer_t3407243298, ____ignoreCase_4)); }
	inline bool get__ignoreCase_4() const { return ____ignoreCase_4; }
	inline bool* get_address_of__ignoreCase_4() { return &____ignoreCase_4; }
	inline void set__ignoreCase_4(bool value)
	{
		____ignoreCase_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ORDINALCOMPARER_T3407243298_H
#ifndef PARAMARRAYATTRIBUTE_T3664765590_H
#define PARAMARRAYATTRIBUTE_T3664765590_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ParamArrayAttribute
struct  ParamArrayAttribute_t3664765590  : public Attribute_t861562559
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PARAMARRAYATTRIBUTE_T3664765590_H
#ifndef PARAMSARRAY_T4224664136_H
#define PARAMSARRAY_T4224664136_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ParamsArray
struct  ParamsArray_t4224664136 
{
public:
	// System.Object System.ParamsArray::arg0
	RuntimeObject * ___arg0_3;
	// System.Object System.ParamsArray::arg1
	RuntimeObject * ___arg1_4;
	// System.Object System.ParamsArray::arg2
	RuntimeObject * ___arg2_5;
	// System.Object[] System.ParamsArray::args
	ObjectU5BU5D_t2843939325* ___args_6;

public:
	inline static int32_t get_offset_of_arg0_3() { return static_cast<int32_t>(offsetof(ParamsArray_t4224664136, ___arg0_3)); }
	inline RuntimeObject * get_arg0_3() const { return ___arg0_3; }
	inline RuntimeObject ** get_address_of_arg0_3() { return &___arg0_3; }
	inline void set_arg0_3(RuntimeObject * value)
	{
		___arg0_3 = value;
		Il2CppCodeGenWriteBarrier((&___arg0_3), value);
	}

	inline static int32_t get_offset_of_arg1_4() { return static_cast<int32_t>(offsetof(ParamsArray_t4224664136, ___arg1_4)); }
	inline RuntimeObject * get_arg1_4() const { return ___arg1_4; }
	inline RuntimeObject ** get_address_of_arg1_4() { return &___arg1_4; }
	inline void set_arg1_4(RuntimeObject * value)
	{
		___arg1_4 = value;
		Il2CppCodeGenWriteBarrier((&___arg1_4), value);
	}

	inline static int32_t get_offset_of_arg2_5() { return static_cast<int32_t>(offsetof(ParamsArray_t4224664136, ___arg2_5)); }
	inline RuntimeObject * get_arg2_5() const { return ___arg2_5; }
	inline RuntimeObject ** get_address_of_arg2_5() { return &___arg2_5; }
	inline void set_arg2_5(RuntimeObject * value)
	{
		___arg2_5 = value;
		Il2CppCodeGenWriteBarrier((&___arg2_5), value);
	}

	inline static int32_t get_offset_of_args_6() { return static_cast<int32_t>(offsetof(ParamsArray_t4224664136, ___args_6)); }
	inline ObjectU5BU5D_t2843939325* get_args_6() const { return ___args_6; }
	inline ObjectU5BU5D_t2843939325** get_address_of_args_6() { return &___args_6; }
	inline void set_args_6(ObjectU5BU5D_t2843939325* value)
	{
		___args_6 = value;
		Il2CppCodeGenWriteBarrier((&___args_6), value);
	}
};

struct ParamsArray_t4224664136_StaticFields
{
public:
	// System.Object[] System.ParamsArray::oneArgArray
	ObjectU5BU5D_t2843939325* ___oneArgArray_0;
	// System.Object[] System.ParamsArray::twoArgArray
	ObjectU5BU5D_t2843939325* ___twoArgArray_1;
	// System.Object[] System.ParamsArray::threeArgArray
	ObjectU5BU5D_t2843939325* ___threeArgArray_2;

public:
	inline static int32_t get_offset_of_oneArgArray_0() { return static_cast<int32_t>(offsetof(ParamsArray_t4224664136_StaticFields, ___oneArgArray_0)); }
	inline ObjectU5BU5D_t2843939325* get_oneArgArray_0() const { return ___oneArgArray_0; }
	inline ObjectU5BU5D_t2843939325** get_address_of_oneArgArray_0() { return &___oneArgArray_0; }
	inline void set_oneArgArray_0(ObjectU5BU5D_t2843939325* value)
	{
		___oneArgArray_0 = value;
		Il2CppCodeGenWriteBarrier((&___oneArgArray_0), value);
	}

	inline static int32_t get_offset_of_twoArgArray_1() { return static_cast<int32_t>(offsetof(ParamsArray_t4224664136_StaticFields, ___twoArgArray_1)); }
	inline ObjectU5BU5D_t2843939325* get_twoArgArray_1() const { return ___twoArgArray_1; }
	inline ObjectU5BU5D_t2843939325** get_address_of_twoArgArray_1() { return &___twoArgArray_1; }
	inline void set_twoArgArray_1(ObjectU5BU5D_t2843939325* value)
	{
		___twoArgArray_1 = value;
		Il2CppCodeGenWriteBarrier((&___twoArgArray_1), value);
	}

	inline static int32_t get_offset_of_threeArgArray_2() { return static_cast<int32_t>(offsetof(ParamsArray_t4224664136_StaticFields, ___threeArgArray_2)); }
	inline ObjectU5BU5D_t2843939325* get_threeArgArray_2() const { return ___threeArgArray_2; }
	inline ObjectU5BU5D_t2843939325** get_address_of_threeArgArray_2() { return &___threeArgArray_2; }
	inline void set_threeArgArray_2(ObjectU5BU5D_t2843939325* value)
	{
		___threeArgArray_2 = value;
		Il2CppCodeGenWriteBarrier((&___threeArgArray_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ParamsArray
struct ParamsArray_t4224664136_marshaled_pinvoke
{
	Il2CppIUnknown* ___arg0_3;
	Il2CppIUnknown* ___arg1_4;
	Il2CppIUnknown* ___arg2_5;
	ObjectU5BU5D_t2843939325* ___args_6;
};
// Native definition for COM marshalling of System.ParamsArray
struct ParamsArray_t4224664136_marshaled_com
{
	Il2CppIUnknown* ___arg0_3;
	Il2CppIUnknown* ___arg1_4;
	Il2CppIUnknown* ___arg2_5;
	ObjectU5BU5D_t2843939325* ___args_6;
};
#endif // PARAMSARRAY_T4224664136_H
#ifndef SBYTE_T1669577662_H
#define SBYTE_T1669577662_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.SByte
struct  SByte_t1669577662 
{
public:
	// System.SByte System.SByte::m_value
	int8_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(SByte_t1669577662, ___m_value_0)); }
	inline int8_t get_m_value_0() const { return ___m_value_0; }
	inline int8_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int8_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SBYTE_T1669577662_H
#ifndef STATHREADATTRIBUTE_T2720218673_H
#define STATHREADATTRIBUTE_T2720218673_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.STAThreadAttribute
struct  STAThreadAttribute_t2720218673  : public Attribute_t861562559
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STATHREADATTRIBUTE_T2720218673_H
#ifndef SERIALIZABLEATTRIBUTE_T1992588303_H
#define SERIALIZABLEATTRIBUTE_T1992588303_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.SerializableAttribute
struct  SerializableAttribute_t1992588303  : public Attribute_t861562559
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SERIALIZABLEATTRIBUTE_T1992588303_H
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
#ifndef SYSTEMEXCEPTION_T176217640_H
#define SYSTEMEXCEPTION_T176217640_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.SystemException
struct  SystemException_t176217640  : public Exception_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYSTEMEXCEPTION_T176217640_H
#ifndef THREADSTATICATTRIBUTE_T3840787420_H
#define THREADSTATICATTRIBUTE_T3840787420_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ThreadStaticAttribute
struct  ThreadStaticAttribute_t3840787420  : public Attribute_t861562559
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // THREADSTATICATTRIBUTE_T3840787420_H
#ifndef CANCELLATIONTOKEN_T784455623_H
#define CANCELLATIONTOKEN_T784455623_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.CancellationToken
struct  CancellationToken_t784455623 
{
public:
	// System.Threading.CancellationTokenSource System.Threading.CancellationToken::m_source
	CancellationTokenSource_t540272775 * ___m_source_0;

public:
	inline static int32_t get_offset_of_m_source_0() { return static_cast<int32_t>(offsetof(CancellationToken_t784455623, ___m_source_0)); }
	inline CancellationTokenSource_t540272775 * get_m_source_0() const { return ___m_source_0; }
	inline CancellationTokenSource_t540272775 ** get_address_of_m_source_0() { return &___m_source_0; }
	inline void set_m_source_0(CancellationTokenSource_t540272775 * value)
	{
		___m_source_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_source_0), value);
	}
};

struct CancellationToken_t784455623_StaticFields
{
public:
	// System.Action`1<System.Object> System.Threading.CancellationToken::s_ActionToActionObjShunt
	Action_1_t3252573759 * ___s_ActionToActionObjShunt_1;

public:
	inline static int32_t get_offset_of_s_ActionToActionObjShunt_1() { return static_cast<int32_t>(offsetof(CancellationToken_t784455623_StaticFields, ___s_ActionToActionObjShunt_1)); }
	inline Action_1_t3252573759 * get_s_ActionToActionObjShunt_1() const { return ___s_ActionToActionObjShunt_1; }
	inline Action_1_t3252573759 ** get_address_of_s_ActionToActionObjShunt_1() { return &___s_ActionToActionObjShunt_1; }
	inline void set_s_ActionToActionObjShunt_1(Action_1_t3252573759 * value)
	{
		___s_ActionToActionObjShunt_1 = value;
		Il2CppCodeGenWriteBarrier((&___s_ActionToActionObjShunt_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Threading.CancellationToken
struct CancellationToken_t784455623_marshaled_pinvoke
{
	CancellationTokenSource_t540272775 * ___m_source_0;
};
// Native definition for COM marshalling of System.Threading.CancellationToken
struct CancellationToken_t784455623_marshaled_com
{
	CancellationTokenSource_t540272775 * ___m_source_0;
};
#endif // CANCELLATIONTOKEN_T784455623_H
#ifndef __DTSTRING_T2014593278_H
#define __DTSTRING_T2014593278_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.__DTString
struct  __DTString_t2014593278 
{
public:
	// System.String System.__DTString::Value
	String_t* ___Value_0;
	// System.Int32 System.__DTString::Index
	int32_t ___Index_1;
	// System.Int32 System.__DTString::len
	int32_t ___len_2;
	// System.Char System.__DTString::m_current
	Il2CppChar ___m_current_3;
	// System.Globalization.CompareInfo System.__DTString::m_info
	CompareInfo_t1092934962 * ___m_info_4;
	// System.Boolean System.__DTString::m_checkDigitToken
	bool ___m_checkDigitToken_5;

public:
	inline static int32_t get_offset_of_Value_0() { return static_cast<int32_t>(offsetof(__DTString_t2014593278, ___Value_0)); }
	inline String_t* get_Value_0() const { return ___Value_0; }
	inline String_t** get_address_of_Value_0() { return &___Value_0; }
	inline void set_Value_0(String_t* value)
	{
		___Value_0 = value;
		Il2CppCodeGenWriteBarrier((&___Value_0), value);
	}

	inline static int32_t get_offset_of_Index_1() { return static_cast<int32_t>(offsetof(__DTString_t2014593278, ___Index_1)); }
	inline int32_t get_Index_1() const { return ___Index_1; }
	inline int32_t* get_address_of_Index_1() { return &___Index_1; }
	inline void set_Index_1(int32_t value)
	{
		___Index_1 = value;
	}

	inline static int32_t get_offset_of_len_2() { return static_cast<int32_t>(offsetof(__DTString_t2014593278, ___len_2)); }
	inline int32_t get_len_2() const { return ___len_2; }
	inline int32_t* get_address_of_len_2() { return &___len_2; }
	inline void set_len_2(int32_t value)
	{
		___len_2 = value;
	}

	inline static int32_t get_offset_of_m_current_3() { return static_cast<int32_t>(offsetof(__DTString_t2014593278, ___m_current_3)); }
	inline Il2CppChar get_m_current_3() const { return ___m_current_3; }
	inline Il2CppChar* get_address_of_m_current_3() { return &___m_current_3; }
	inline void set_m_current_3(Il2CppChar value)
	{
		___m_current_3 = value;
	}

	inline static int32_t get_offset_of_m_info_4() { return static_cast<int32_t>(offsetof(__DTString_t2014593278, ___m_info_4)); }
	inline CompareInfo_t1092934962 * get_m_info_4() const { return ___m_info_4; }
	inline CompareInfo_t1092934962 ** get_address_of_m_info_4() { return &___m_info_4; }
	inline void set_m_info_4(CompareInfo_t1092934962 * value)
	{
		___m_info_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_info_4), value);
	}

	inline static int32_t get_offset_of_m_checkDigitToken_5() { return static_cast<int32_t>(offsetof(__DTString_t2014593278, ___m_checkDigitToken_5)); }
	inline bool get_m_checkDigitToken_5() const { return ___m_checkDigitToken_5; }
	inline bool* get_address_of_m_checkDigitToken_5() { return &___m_checkDigitToken_5; }
	inline void set_m_checkDigitToken_5(bool value)
	{
		___m_checkDigitToken_5 = value;
	}
};

struct __DTString_t2014593278_StaticFields
{
public:
	// System.Char[] System.__DTString::WhiteSpaceChecks
	CharU5BU5D_t3528271667* ___WhiteSpaceChecks_6;

public:
	inline static int32_t get_offset_of_WhiteSpaceChecks_6() { return static_cast<int32_t>(offsetof(__DTString_t2014593278_StaticFields, ___WhiteSpaceChecks_6)); }
	inline CharU5BU5D_t3528271667* get_WhiteSpaceChecks_6() const { return ___WhiteSpaceChecks_6; }
	inline CharU5BU5D_t3528271667** get_address_of_WhiteSpaceChecks_6() { return &___WhiteSpaceChecks_6; }
	inline void set_WhiteSpaceChecks_6(CharU5BU5D_t3528271667* value)
	{
		___WhiteSpaceChecks_6 = value;
		Il2CppCodeGenWriteBarrier((&___WhiteSpaceChecks_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.__DTString
struct __DTString_t2014593278_marshaled_pinvoke
{
	char* ___Value_0;
	int32_t ___Index_1;
	int32_t ___len_2;
	uint8_t ___m_current_3;
	CompareInfo_t1092934962 * ___m_info_4;
	int32_t ___m_checkDigitToken_5;
};
// Native definition for COM marshalling of System.__DTString
struct __DTString_t2014593278_marshaled_com
{
	Il2CppChar* ___Value_0;
	int32_t ___Index_1;
	int32_t ___len_2;
	uint8_t ___m_current_3;
	CompareInfo_t1092934962 * ___m_info_4;
	int32_t ___m_checkDigitToken_5;
};
#endif // __DTSTRING_T2014593278_H
#ifndef ARITHMETICEXCEPTION_T4283546778_H
#define ARITHMETICEXCEPTION_T4283546778_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ArithmeticException
struct  ArithmeticException_t4283546778  : public SystemException_t176217640
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARITHMETICEXCEPTION_T4283546778_H
#ifndef DTSUBSTRINGTYPE_T2997180936_H
#define DTSUBSTRINGTYPE_T2997180936_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.DTSubStringType
struct  DTSubStringType_t2997180936 
{
public:
	// System.Int32 System.DTSubStringType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DTSubStringType_t2997180936, ___value___2)); }
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
#endif // DTSUBSTRINGTYPE_T2997180936_H
#ifndef DS_T2232270370_H
#define DS_T2232270370_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.DateTimeParse/DS
struct  DS_t2232270370 
{
public:
	// System.Int32 System.DateTimeParse/DS::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DS_t2232270370, ___value___2)); }
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
#endif // DS_T2232270370_H
#ifndef DTT_T3179813875_H
#define DTT_T3179813875_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.DateTimeParse/DTT
struct  DTT_t3179813875 
{
public:
	// System.Int32 System.DateTimeParse/DTT::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DTT_t3179813875, ___value___2)); }
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
#endif // DTT_T3179813875_H
#ifndef TM_T3750251568_H
#define TM_T3750251568_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.DateTimeParse/TM
struct  TM_t3750251568 
{
public:
	// System.Int32 System.DateTimeParse/TM::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TM_t3750251568, ___value___2)); }
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
#endif // TM_T3750251568_H
#ifndef DAYOFWEEK_T3650621421_H
#define DAYOFWEEK_T3650621421_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.DayOfWeek
struct  DayOfWeek_t3650621421 
{
public:
	// System.Int32 System.DayOfWeek::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DayOfWeek_t3650621421, ___value___2)); }
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
#endif // DAYOFWEEK_T3650621421_H
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
#ifndef EXCEPTIONMESSAGEKIND_T312672609_H
#define EXCEPTIONMESSAGEKIND_T312672609_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Exception/ExceptionMessageKind
struct  ExceptionMessageKind_t312672609 
{
public:
	// System.Int32 System.Exception/ExceptionMessageKind::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ExceptionMessageKind_t312672609, ___value___2)); }
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
#endif // EXCEPTIONMESSAGEKIND_T312672609_H
#ifndef EXCEPTIONARGUMENT_T2411851266_H
#define EXCEPTIONARGUMENT_T2411851266_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ExceptionArgument
struct  ExceptionArgument_t2411851266 
{
public:
	// System.Int32 System.ExceptionArgument::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ExceptionArgument_t2411851266, ___value___2)); }
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
#endif // EXCEPTIONARGUMENT_T2411851266_H
#ifndef EXCEPTIONRESOURCE_T2631664984_H
#define EXCEPTIONRESOURCE_T2631664984_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ExceptionResource
struct  ExceptionResource_t2631664984 
{
public:
	// System.Int32 System.ExceptionResource::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ExceptionResource_t2631664984, ___value___2)); }
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
#endif // EXCEPTIONRESOURCE_T2631664984_H
#ifndef EXECUTIONENGINEEXCEPTION_T1142598034_H
#define EXECUTIONENGINEEXCEPTION_T1142598034_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ExecutionEngineException
struct  ExecutionEngineException_t1142598034  : public SystemException_t176217640
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXECUTIONENGINEEXCEPTION_T1142598034_H
#ifndef FORMATEXCEPTION_T154580423_H
#define FORMATEXCEPTION_T154580423_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.FormatException
struct  FormatException_t154580423  : public SystemException_t176217640
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FORMATEXCEPTION_T154580423_H
#ifndef COMPAREOPTIONS_T4130014775_H
#define COMPAREOPTIONS_T4130014775_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Globalization.CompareOptions
struct  CompareOptions_t4130014775 
{
public:
	// System.Int32 System.Globalization.CompareOptions::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CompareOptions_t4130014775, ___value___2)); }
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
#endif // COMPAREOPTIONS_T4130014775_H
#ifndef GUIDPARSETHROWSTYLE_T3123097615_H
#define GUIDPARSETHROWSTYLE_T3123097615_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Guid/GuidParseThrowStyle
struct  GuidParseThrowStyle_t3123097615 
{
public:
	// System.Int32 System.Guid/GuidParseThrowStyle::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(GuidParseThrowStyle_t3123097615, ___value___2)); }
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
#endif // GUIDPARSETHROWSTYLE_T3123097615_H
#ifndef GUIDSTYLES_T3169508594_H
#define GUIDSTYLES_T3169508594_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Guid/GuidStyles
struct  GuidStyles_t3169508594 
{
public:
	// System.Int32 System.Guid/GuidStyles::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(GuidStyles_t3169508594, ___value___2)); }
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
#endif // GUIDSTYLES_T3169508594_H
#ifndef PARSEFAILUREKIND_T2638710854_H
#define PARSEFAILUREKIND_T2638710854_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Guid/ParseFailureKind
struct  ParseFailureKind_t2638710854 
{
public:
	// System.Int32 System.Guid/ParseFailureKind::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ParseFailureKind_t2638710854, ___value___2)); }
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
#endif // PARSEFAILUREKIND_T2638710854_H
#ifndef INDEXOUTOFRANGEEXCEPTION_T1578797820_H
#define INDEXOUTOFRANGEEXCEPTION_T1578797820_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IndexOutOfRangeException
struct  IndexOutOfRangeException_t1578797820  : public SystemException_t176217640
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INDEXOUTOFRANGEEXCEPTION_T1578797820_H
#ifndef INVALIDCASTEXCEPTION_T3927145244_H
#define INVALIDCASTEXCEPTION_T3927145244_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.InvalidCastException
struct  InvalidCastException_t3927145244  : public SystemException_t176217640
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INVALIDCASTEXCEPTION_T3927145244_H
#ifndef INVALIDOPERATIONEXCEPTION_T56020091_H
#define INVALIDOPERATIONEXCEPTION_T56020091_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.InvalidOperationException
struct  InvalidOperationException_t56020091  : public SystemException_t176217640
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INVALIDOPERATIONEXCEPTION_T56020091_H
#ifndef INVALIDPROGRAMEXCEPTION_T3836716986_H
#define INVALIDPROGRAMEXCEPTION_T3836716986_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.InvalidProgramException
struct  InvalidProgramException_t3836716986  : public SystemException_t176217640
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INVALIDPROGRAMEXCEPTION_T3836716986_H
#ifndef MEMBERACCESSEXCEPTION_T1734467078_H
#define MEMBERACCESSEXCEPTION_T1734467078_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MemberAccessException
struct  MemberAccessException_t1734467078  : public SystemException_t176217640
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MEMBERACCESSEXCEPTION_T1734467078_H
#ifndef MULTICASTNOTSUPPORTEDEXCEPTION_T3095221246_H
#define MULTICASTNOTSUPPORTEDEXCEPTION_T3095221246_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MulticastNotSupportedException
struct  MulticastNotSupportedException_t3095221246  : public SystemException_t176217640
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MULTICASTNOTSUPPORTEDEXCEPTION_T3095221246_H
#ifndef NOTIMPLEMENTEDEXCEPTION_T3489357830_H
#define NOTIMPLEMENTEDEXCEPTION_T3489357830_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.NotImplementedException
struct  NotImplementedException_t3489357830  : public SystemException_t176217640
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NOTIMPLEMENTEDEXCEPTION_T3489357830_H
#ifndef NOTSUPPORTEDEXCEPTION_T1314879016_H
#define NOTSUPPORTEDEXCEPTION_T1314879016_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.NotSupportedException
struct  NotSupportedException_t1314879016  : public SystemException_t176217640
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NOTSUPPORTEDEXCEPTION_T1314879016_H
#ifndef NULLREFERENCEEXCEPTION_T1023182353_H
#define NULLREFERENCEEXCEPTION_T1023182353_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.NullReferenceException
struct  NullReferenceException_t1023182353  : public SystemException_t176217640
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NULLREFERENCEEXCEPTION_T1023182353_H
#ifndef OPERATIONCANCELEDEXCEPTION_T926488448_H
#define OPERATIONCANCELEDEXCEPTION_T926488448_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.OperationCanceledException
struct  OperationCanceledException_t926488448  : public SystemException_t176217640
{
public:
	// System.Threading.CancellationToken System.OperationCanceledException::_cancellationToken
	CancellationToken_t784455623  ____cancellationToken_17;

public:
	inline static int32_t get_offset_of__cancellationToken_17() { return static_cast<int32_t>(offsetof(OperationCanceledException_t926488448, ____cancellationToken_17)); }
	inline CancellationToken_t784455623  get__cancellationToken_17() const { return ____cancellationToken_17; }
	inline CancellationToken_t784455623 * get_address_of__cancellationToken_17() { return &____cancellationToken_17; }
	inline void set__cancellationToken_17(CancellationToken_t784455623  value)
	{
		____cancellationToken_17 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OPERATIONCANCELEDEXCEPTION_T926488448_H
#ifndef OUTOFMEMORYEXCEPTION_T2437671686_H
#define OUTOFMEMORYEXCEPTION_T2437671686_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.OutOfMemoryException
struct  OutOfMemoryException_t2437671686  : public SystemException_t176217640
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OUTOFMEMORYEXCEPTION_T2437671686_H
#ifndef PARSEFAILUREKIND_T3807567368_H
#define PARSEFAILUREKIND_T3807567368_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ParseFailureKind
struct  ParseFailureKind_t3807567368 
{
public:
	// System.Int32 System.ParseFailureKind::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ParseFailureKind_t3807567368, ___value___2)); }
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
#endif // PARSEFAILUREKIND_T3807567368_H
#ifndef PARSEFLAGS_T3686506164_H
#define PARSEFLAGS_T3686506164_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ParseFlags
struct  ParseFlags_t3686506164 
{
public:
	// System.Int32 System.ParseFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ParseFlags_t3686506164, ___value___2)); }
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
#endif // PARSEFLAGS_T3686506164_H
#ifndef RANKEXCEPTION_T3812021567_H
#define RANKEXCEPTION_T3812021567_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.RankException
struct  RankException_t3812021567  : public SystemException_t176217640
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RANKEXCEPTION_T3812021567_H
#ifndef BINDINGFLAGS_T2721792723_H
#define BINDINGFLAGS_T2721792723_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.BindingFlags
struct  BindingFlags_t2721792723 
{
public:
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BindingFlags_t2721792723, ___value___2)); }
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
#endif // BINDINGFLAGS_T2721792723_H
#ifndef MEMBERLISTTYPE_T1519024423_H
#define MEMBERLISTTYPE_T1519024423_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.RuntimeType/MemberListType
struct  MemberListType_t1519024423 
{
public:
	// System.Int32 System.RuntimeType/MemberListType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(MemberListType_t1519024423, ___value___2)); }
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
#endif // MEMBERLISTTYPE_T1519024423_H
#ifndef RUNTIMETYPEHANDLE_T3027515415_H
#define RUNTIMETYPEHANDLE_T3027515415_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.RuntimeTypeHandle
struct  RuntimeTypeHandle_t3027515415 
{
public:
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeTypeHandle_t3027515415, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMETYPEHANDLE_T3027515415_H
#ifndef STACKOVERFLOWEXCEPTION_T3629451388_H
#define STACKOVERFLOWEXCEPTION_T3629451388_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.StackOverflowException
struct  StackOverflowException_t3629451388  : public SystemException_t176217640
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STACKOVERFLOWEXCEPTION_T3629451388_H
#ifndef STRINGSPLITOPTIONS_T641086070_H
#define STRINGSPLITOPTIONS_T641086070_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.StringSplitOptions
struct  StringSplitOptions_t641086070 
{
public:
	// System.Int32 System.StringSplitOptions::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(StringSplitOptions_t641086070, ___value___2)); }
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
#endif // STRINGSPLITOPTIONS_T641086070_H
#ifndef TIMESPAN_T881159249_H
#define TIMESPAN_T881159249_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.TimeSpan
struct  TimeSpan_t881159249 
{
public:
	// System.Int64 System.TimeSpan::_ticks
	int64_t ____ticks_3;

public:
	inline static int32_t get_offset_of__ticks_3() { return static_cast<int32_t>(offsetof(TimeSpan_t881159249, ____ticks_3)); }
	inline int64_t get__ticks_3() const { return ____ticks_3; }
	inline int64_t* get_address_of__ticks_3() { return &____ticks_3; }
	inline void set__ticks_3(int64_t value)
	{
		____ticks_3 = value;
	}
};

struct TimeSpan_t881159249_StaticFields
{
public:
	// System.TimeSpan System.TimeSpan::Zero
	TimeSpan_t881159249  ___Zero_0;
	// System.TimeSpan System.TimeSpan::MaxValue
	TimeSpan_t881159249  ___MaxValue_1;
	// System.TimeSpan System.TimeSpan::MinValue
	TimeSpan_t881159249  ___MinValue_2;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.TimeSpan::_legacyConfigChecked
	bool ____legacyConfigChecked_4;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.TimeSpan::_legacyMode
	bool ____legacyMode_5;

public:
	inline static int32_t get_offset_of_Zero_0() { return static_cast<int32_t>(offsetof(TimeSpan_t881159249_StaticFields, ___Zero_0)); }
	inline TimeSpan_t881159249  get_Zero_0() const { return ___Zero_0; }
	inline TimeSpan_t881159249 * get_address_of_Zero_0() { return &___Zero_0; }
	inline void set_Zero_0(TimeSpan_t881159249  value)
	{
		___Zero_0 = value;
	}

	inline static int32_t get_offset_of_MaxValue_1() { return static_cast<int32_t>(offsetof(TimeSpan_t881159249_StaticFields, ___MaxValue_1)); }
	inline TimeSpan_t881159249  get_MaxValue_1() const { return ___MaxValue_1; }
	inline TimeSpan_t881159249 * get_address_of_MaxValue_1() { return &___MaxValue_1; }
	inline void set_MaxValue_1(TimeSpan_t881159249  value)
	{
		___MaxValue_1 = value;
	}

	inline static int32_t get_offset_of_MinValue_2() { return static_cast<int32_t>(offsetof(TimeSpan_t881159249_StaticFields, ___MinValue_2)); }
	inline TimeSpan_t881159249  get_MinValue_2() const { return ___MinValue_2; }
	inline TimeSpan_t881159249 * get_address_of_MinValue_2() { return &___MinValue_2; }
	inline void set_MinValue_2(TimeSpan_t881159249  value)
	{
		___MinValue_2 = value;
	}

	inline static int32_t get_offset_of__legacyConfigChecked_4() { return static_cast<int32_t>(offsetof(TimeSpan_t881159249_StaticFields, ____legacyConfigChecked_4)); }
	inline bool get__legacyConfigChecked_4() const { return ____legacyConfigChecked_4; }
	inline bool* get_address_of__legacyConfigChecked_4() { return &____legacyConfigChecked_4; }
	inline void set__legacyConfigChecked_4(bool value)
	{
		____legacyConfigChecked_4 = value;
	}

	inline static int32_t get_offset_of__legacyMode_5() { return static_cast<int32_t>(offsetof(TimeSpan_t881159249_StaticFields, ____legacyMode_5)); }
	inline bool get__legacyMode_5() const { return ____legacyMode_5; }
	inline bool* get_address_of__legacyMode_5() { return &____legacyMode_5; }
	inline void set__legacyMode_5(bool value)
	{
		____legacyMode_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TIMESPAN_T881159249_H
#ifndef TIMEZONEINFOOPTIONS_T3189697361_H
#define TIMEZONEINFOOPTIONS_T3189697361_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.TimeZoneInfoOptions
struct  TimeZoneInfoOptions_t3189697361 
{
public:
	// System.Int32 System.TimeZoneInfoOptions::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TimeZoneInfoOptions_t3189697361, ___value___2)); }
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
#endif // TIMEZONEINFOOPTIONS_T3189697361_H
#ifndef TIMEOUTEXCEPTION_T407538241_H
#define TIMEOUTEXCEPTION_T407538241_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.TimeoutException
struct  TimeoutException_t407538241  : public SystemException_t176217640
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TIMEOUTEXCEPTION_T407538241_H
#ifndef TOKENTYPE_T216849757_H
#define TOKENTYPE_T216849757_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.TokenType
struct  TokenType_t216849757 
{
public:
	// System.Int32 System.TokenType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TokenType_t216849757, ___value___2)); }
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
#endif // TOKENTYPE_T216849757_H
#ifndef TYPENAMEFORMATFLAGS_T1563831851_H
#define TYPENAMEFORMATFLAGS_T1563831851_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.TypeNameFormatFlags
struct  TypeNameFormatFlags_t1563831851 
{
public:
	// System.Int32 System.TypeNameFormatFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TypeNameFormatFlags_t1563831851, ___value___2)); }
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
#endif // TYPENAMEFORMATFLAGS_T1563831851_H
#ifndef TYPENAMEKIND_T4058497967_H
#define TYPENAMEKIND_T4058497967_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.TypeNameKind
struct  TypeNameKind_t4058497967 
{
public:
	// System.Int32 System.TypeNameKind::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TypeNameKind_t4058497967, ___value___2)); }
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
#endif // TYPENAMEKIND_T4058497967_H
#ifndef CULTUREAWARECOMPARER_T30646139_H
#define CULTUREAWARECOMPARER_T30646139_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.CultureAwareComparer
struct  CultureAwareComparer_t30646139  : public StringComparer_t3301955079
{
public:
	// System.Globalization.CompareInfo System.CultureAwareComparer::_compareInfo
	CompareInfo_t1092934962 * ____compareInfo_4;
	// System.Boolean System.CultureAwareComparer::_ignoreCase
	bool ____ignoreCase_5;
	// System.Globalization.CompareOptions System.CultureAwareComparer::_options
	int32_t ____options_6;

public:
	inline static int32_t get_offset_of__compareInfo_4() { return static_cast<int32_t>(offsetof(CultureAwareComparer_t30646139, ____compareInfo_4)); }
	inline CompareInfo_t1092934962 * get__compareInfo_4() const { return ____compareInfo_4; }
	inline CompareInfo_t1092934962 ** get_address_of__compareInfo_4() { return &____compareInfo_4; }
	inline void set__compareInfo_4(CompareInfo_t1092934962 * value)
	{
		____compareInfo_4 = value;
		Il2CppCodeGenWriteBarrier((&____compareInfo_4), value);
	}

	inline static int32_t get_offset_of__ignoreCase_5() { return static_cast<int32_t>(offsetof(CultureAwareComparer_t30646139, ____ignoreCase_5)); }
	inline bool get__ignoreCase_5() const { return ____ignoreCase_5; }
	inline bool* get_address_of__ignoreCase_5() { return &____ignoreCase_5; }
	inline void set__ignoreCase_5(bool value)
	{
		____ignoreCase_5 = value;
	}

	inline static int32_t get_offset_of__options_6() { return static_cast<int32_t>(offsetof(CultureAwareComparer_t30646139, ____options_6)); }
	inline int32_t get__options_6() const { return ____options_6; }
	inline int32_t* get_address_of__options_6() { return &____options_6; }
	inline void set__options_6(int32_t value)
	{
		____options_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CULTUREAWARECOMPARER_T30646139_H
#ifndef DTSUBSTRING_T967826655_H
#define DTSUBSTRING_T967826655_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.DTSubString
struct  DTSubString_t967826655 
{
public:
	// System.String System.DTSubString::s
	String_t* ___s_0;
	// System.Int32 System.DTSubString::index
	int32_t ___index_1;
	// System.Int32 System.DTSubString::length
	int32_t ___length_2;
	// System.DTSubStringType System.DTSubString::type
	int32_t ___type_3;
	// System.Int32 System.DTSubString::value
	int32_t ___value_4;

public:
	inline static int32_t get_offset_of_s_0() { return static_cast<int32_t>(offsetof(DTSubString_t967826655, ___s_0)); }
	inline String_t* get_s_0() const { return ___s_0; }
	inline String_t** get_address_of_s_0() { return &___s_0; }
	inline void set_s_0(String_t* value)
	{
		___s_0 = value;
		Il2CppCodeGenWriteBarrier((&___s_0), value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(DTSubString_t967826655, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_length_2() { return static_cast<int32_t>(offsetof(DTSubString_t967826655, ___length_2)); }
	inline int32_t get_length_2() const { return ___length_2; }
	inline int32_t* get_address_of_length_2() { return &___length_2; }
	inline void set_length_2(int32_t value)
	{
		___length_2 = value;
	}

	inline static int32_t get_offset_of_type_3() { return static_cast<int32_t>(offsetof(DTSubString_t967826655, ___type_3)); }
	inline int32_t get_type_3() const { return ___type_3; }
	inline int32_t* get_address_of_type_3() { return &___type_3; }
	inline void set_type_3(int32_t value)
	{
		___type_3 = value;
	}

	inline static int32_t get_offset_of_value_4() { return static_cast<int32_t>(offsetof(DTSubString_t967826655, ___value_4)); }
	inline int32_t get_value_4() const { return ___value_4; }
	inline int32_t* get_address_of_value_4() { return &___value_4; }
	inline void set_value_4(int32_t value)
	{
		___value_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.DTSubString
struct DTSubString_t967826655_marshaled_pinvoke
{
	char* ___s_0;
	int32_t ___index_1;
	int32_t ___length_2;
	int32_t ___type_3;
	int32_t ___value_4;
};
// Native definition for COM marshalling of System.DTSubString
struct DTSubString_t967826655_marshaled_com
{
	Il2CppChar* ___s_0;
	int32_t ___index_1;
	int32_t ___length_2;
	int32_t ___type_3;
	int32_t ___value_4;
};
#endif // DTSUBSTRING_T967826655_H
#ifndef DATETIMEFORMAT_T4286173316_H
#define DATETIMEFORMAT_T4286173316_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.DateTimeFormat
struct  DateTimeFormat_t4286173316  : public RuntimeObject
{
public:

public:
};

struct DateTimeFormat_t4286173316_StaticFields
{
public:
	// System.TimeSpan System.DateTimeFormat::NullOffset
	TimeSpan_t881159249  ___NullOffset_0;
	// System.Char[] System.DateTimeFormat::allStandardFormats
	CharU5BU5D_t3528271667* ___allStandardFormats_1;
	// System.String[] System.DateTimeFormat::fixedNumberFormats
	StringU5BU5D_t1281789340* ___fixedNumberFormats_2;

public:
	inline static int32_t get_offset_of_NullOffset_0() { return static_cast<int32_t>(offsetof(DateTimeFormat_t4286173316_StaticFields, ___NullOffset_0)); }
	inline TimeSpan_t881159249  get_NullOffset_0() const { return ___NullOffset_0; }
	inline TimeSpan_t881159249 * get_address_of_NullOffset_0() { return &___NullOffset_0; }
	inline void set_NullOffset_0(TimeSpan_t881159249  value)
	{
		___NullOffset_0 = value;
	}

	inline static int32_t get_offset_of_allStandardFormats_1() { return static_cast<int32_t>(offsetof(DateTimeFormat_t4286173316_StaticFields, ___allStandardFormats_1)); }
	inline CharU5BU5D_t3528271667* get_allStandardFormats_1() const { return ___allStandardFormats_1; }
	inline CharU5BU5D_t3528271667** get_address_of_allStandardFormats_1() { return &___allStandardFormats_1; }
	inline void set_allStandardFormats_1(CharU5BU5D_t3528271667* value)
	{
		___allStandardFormats_1 = value;
		Il2CppCodeGenWriteBarrier((&___allStandardFormats_1), value);
	}

	inline static int32_t get_offset_of_fixedNumberFormats_2() { return static_cast<int32_t>(offsetof(DateTimeFormat_t4286173316_StaticFields, ___fixedNumberFormats_2)); }
	inline StringU5BU5D_t1281789340* get_fixedNumberFormats_2() const { return ___fixedNumberFormats_2; }
	inline StringU5BU5D_t1281789340** get_address_of_fixedNumberFormats_2() { return &___fixedNumberFormats_2; }
	inline void set_fixedNumberFormats_2(StringU5BU5D_t1281789340* value)
	{
		___fixedNumberFormats_2 = value;
		Il2CppCodeGenWriteBarrier((&___fixedNumberFormats_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATETIMEFORMAT_T4286173316_H
#ifndef DATETIMERAWINFO_T1172279960_H
#define DATETIMERAWINFO_T1172279960_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.DateTimeRawInfo
struct  DateTimeRawInfo_t1172279960 
{
public:
	// System.Int32* System.DateTimeRawInfo::num
	int32_t* ___num_0;
	// System.Int32 System.DateTimeRawInfo::numCount
	int32_t ___numCount_1;
	// System.Int32 System.DateTimeRawInfo::month
	int32_t ___month_2;
	// System.Int32 System.DateTimeRawInfo::year
	int32_t ___year_3;
	// System.Int32 System.DateTimeRawInfo::dayOfWeek
	int32_t ___dayOfWeek_4;
	// System.Int32 System.DateTimeRawInfo::era
	int32_t ___era_5;
	// System.DateTimeParse/TM System.DateTimeRawInfo::timeMark
	int32_t ___timeMark_6;
	// System.Double System.DateTimeRawInfo::fraction
	double ___fraction_7;
	// System.Boolean System.DateTimeRawInfo::hasSameDateAndTimeSeparators
	bool ___hasSameDateAndTimeSeparators_8;
	// System.Boolean System.DateTimeRawInfo::timeZone
	bool ___timeZone_9;

public:
	inline static int32_t get_offset_of_num_0() { return static_cast<int32_t>(offsetof(DateTimeRawInfo_t1172279960, ___num_0)); }
	inline int32_t* get_num_0() const { return ___num_0; }
	inline int32_t** get_address_of_num_0() { return &___num_0; }
	inline void set_num_0(int32_t* value)
	{
		___num_0 = value;
	}

	inline static int32_t get_offset_of_numCount_1() { return static_cast<int32_t>(offsetof(DateTimeRawInfo_t1172279960, ___numCount_1)); }
	inline int32_t get_numCount_1() const { return ___numCount_1; }
	inline int32_t* get_address_of_numCount_1() { return &___numCount_1; }
	inline void set_numCount_1(int32_t value)
	{
		___numCount_1 = value;
	}

	inline static int32_t get_offset_of_month_2() { return static_cast<int32_t>(offsetof(DateTimeRawInfo_t1172279960, ___month_2)); }
	inline int32_t get_month_2() const { return ___month_2; }
	inline int32_t* get_address_of_month_2() { return &___month_2; }
	inline void set_month_2(int32_t value)
	{
		___month_2 = value;
	}

	inline static int32_t get_offset_of_year_3() { return static_cast<int32_t>(offsetof(DateTimeRawInfo_t1172279960, ___year_3)); }
	inline int32_t get_year_3() const { return ___year_3; }
	inline int32_t* get_address_of_year_3() { return &___year_3; }
	inline void set_year_3(int32_t value)
	{
		___year_3 = value;
	}

	inline static int32_t get_offset_of_dayOfWeek_4() { return static_cast<int32_t>(offsetof(DateTimeRawInfo_t1172279960, ___dayOfWeek_4)); }
	inline int32_t get_dayOfWeek_4() const { return ___dayOfWeek_4; }
	inline int32_t* get_address_of_dayOfWeek_4() { return &___dayOfWeek_4; }
	inline void set_dayOfWeek_4(int32_t value)
	{
		___dayOfWeek_4 = value;
	}

	inline static int32_t get_offset_of_era_5() { return static_cast<int32_t>(offsetof(DateTimeRawInfo_t1172279960, ___era_5)); }
	inline int32_t get_era_5() const { return ___era_5; }
	inline int32_t* get_address_of_era_5() { return &___era_5; }
	inline void set_era_5(int32_t value)
	{
		___era_5 = value;
	}

	inline static int32_t get_offset_of_timeMark_6() { return static_cast<int32_t>(offsetof(DateTimeRawInfo_t1172279960, ___timeMark_6)); }
	inline int32_t get_timeMark_6() const { return ___timeMark_6; }
	inline int32_t* get_address_of_timeMark_6() { return &___timeMark_6; }
	inline void set_timeMark_6(int32_t value)
	{
		___timeMark_6 = value;
	}

	inline static int32_t get_offset_of_fraction_7() { return static_cast<int32_t>(offsetof(DateTimeRawInfo_t1172279960, ___fraction_7)); }
	inline double get_fraction_7() const { return ___fraction_7; }
	inline double* get_address_of_fraction_7() { return &___fraction_7; }
	inline void set_fraction_7(double value)
	{
		___fraction_7 = value;
	}

	inline static int32_t get_offset_of_hasSameDateAndTimeSeparators_8() { return static_cast<int32_t>(offsetof(DateTimeRawInfo_t1172279960, ___hasSameDateAndTimeSeparators_8)); }
	inline bool get_hasSameDateAndTimeSeparators_8() const { return ___hasSameDateAndTimeSeparators_8; }
	inline bool* get_address_of_hasSameDateAndTimeSeparators_8() { return &___hasSameDateAndTimeSeparators_8; }
	inline void set_hasSameDateAndTimeSeparators_8(bool value)
	{
		___hasSameDateAndTimeSeparators_8 = value;
	}

	inline static int32_t get_offset_of_timeZone_9() { return static_cast<int32_t>(offsetof(DateTimeRawInfo_t1172279960, ___timeZone_9)); }
	inline bool get_timeZone_9() const { return ___timeZone_9; }
	inline bool* get_address_of_timeZone_9() { return &___timeZone_9; }
	inline void set_timeZone_9(bool value)
	{
		___timeZone_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.DateTimeRawInfo
struct DateTimeRawInfo_t1172279960_marshaled_pinvoke
{
	int32_t* ___num_0;
	int32_t ___numCount_1;
	int32_t ___month_2;
	int32_t ___year_3;
	int32_t ___dayOfWeek_4;
	int32_t ___era_5;
	int32_t ___timeMark_6;
	double ___fraction_7;
	int32_t ___hasSameDateAndTimeSeparators_8;
	int32_t ___timeZone_9;
};
// Native definition for COM marshalling of System.DateTimeRawInfo
struct DateTimeRawInfo_t1172279960_marshaled_com
{
	int32_t* ___num_0;
	int32_t ___numCount_1;
	int32_t ___month_2;
	int32_t ___year_3;
	int32_t ___dayOfWeek_4;
	int32_t ___era_5;
	int32_t ___timeMark_6;
	double ___fraction_7;
	int32_t ___hasSameDateAndTimeSeparators_8;
	int32_t ___timeZone_9;
};
#endif // DATETIMERAWINFO_T1172279960_H
#ifndef DATETIMERESULT_T2747711438_H
#define DATETIMERESULT_T2747711438_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.DateTimeResult
struct  DateTimeResult_t2747711438 
{
public:
	// System.Int32 System.DateTimeResult::Year
	int32_t ___Year_0;
	// System.Int32 System.DateTimeResult::Month
	int32_t ___Month_1;
	// System.Int32 System.DateTimeResult::Day
	int32_t ___Day_2;
	// System.Int32 System.DateTimeResult::Hour
	int32_t ___Hour_3;
	// System.Int32 System.DateTimeResult::Minute
	int32_t ___Minute_4;
	// System.Int32 System.DateTimeResult::Second
	int32_t ___Second_5;
	// System.Double System.DateTimeResult::fraction
	double ___fraction_6;
	// System.Int32 System.DateTimeResult::era
	int32_t ___era_7;
	// System.ParseFlags System.DateTimeResult::flags
	int32_t ___flags_8;
	// System.TimeSpan System.DateTimeResult::timeZoneOffset
	TimeSpan_t881159249  ___timeZoneOffset_9;
	// System.Globalization.Calendar System.DateTimeResult::calendar
	Calendar_t1661121569 * ___calendar_10;
	// System.DateTime System.DateTimeResult::parsedDate
	DateTime_t3738529785  ___parsedDate_11;
	// System.ParseFailureKind System.DateTimeResult::failure
	int32_t ___failure_12;
	// System.String System.DateTimeResult::failureMessageID
	String_t* ___failureMessageID_13;
	// System.Object System.DateTimeResult::failureMessageFormatArgument
	RuntimeObject * ___failureMessageFormatArgument_14;
	// System.String System.DateTimeResult::failureArgumentName
	String_t* ___failureArgumentName_15;

public:
	inline static int32_t get_offset_of_Year_0() { return static_cast<int32_t>(offsetof(DateTimeResult_t2747711438, ___Year_0)); }
	inline int32_t get_Year_0() const { return ___Year_0; }
	inline int32_t* get_address_of_Year_0() { return &___Year_0; }
	inline void set_Year_0(int32_t value)
	{
		___Year_0 = value;
	}

	inline static int32_t get_offset_of_Month_1() { return static_cast<int32_t>(offsetof(DateTimeResult_t2747711438, ___Month_1)); }
	inline int32_t get_Month_1() const { return ___Month_1; }
	inline int32_t* get_address_of_Month_1() { return &___Month_1; }
	inline void set_Month_1(int32_t value)
	{
		___Month_1 = value;
	}

	inline static int32_t get_offset_of_Day_2() { return static_cast<int32_t>(offsetof(DateTimeResult_t2747711438, ___Day_2)); }
	inline int32_t get_Day_2() const { return ___Day_2; }
	inline int32_t* get_address_of_Day_2() { return &___Day_2; }
	inline void set_Day_2(int32_t value)
	{
		___Day_2 = value;
	}

	inline static int32_t get_offset_of_Hour_3() { return static_cast<int32_t>(offsetof(DateTimeResult_t2747711438, ___Hour_3)); }
	inline int32_t get_Hour_3() const { return ___Hour_3; }
	inline int32_t* get_address_of_Hour_3() { return &___Hour_3; }
	inline void set_Hour_3(int32_t value)
	{
		___Hour_3 = value;
	}

	inline static int32_t get_offset_of_Minute_4() { return static_cast<int32_t>(offsetof(DateTimeResult_t2747711438, ___Minute_4)); }
	inline int32_t get_Minute_4() const { return ___Minute_4; }
	inline int32_t* get_address_of_Minute_4() { return &___Minute_4; }
	inline void set_Minute_4(int32_t value)
	{
		___Minute_4 = value;
	}

	inline static int32_t get_offset_of_Second_5() { return static_cast<int32_t>(offsetof(DateTimeResult_t2747711438, ___Second_5)); }
	inline int32_t get_Second_5() const { return ___Second_5; }
	inline int32_t* get_address_of_Second_5() { return &___Second_5; }
	inline void set_Second_5(int32_t value)
	{
		___Second_5 = value;
	}

	inline static int32_t get_offset_of_fraction_6() { return static_cast<int32_t>(offsetof(DateTimeResult_t2747711438, ___fraction_6)); }
	inline double get_fraction_6() const { return ___fraction_6; }
	inline double* get_address_of_fraction_6() { return &___fraction_6; }
	inline void set_fraction_6(double value)
	{
		___fraction_6 = value;
	}

	inline static int32_t get_offset_of_era_7() { return static_cast<int32_t>(offsetof(DateTimeResult_t2747711438, ___era_7)); }
	inline int32_t get_era_7() const { return ___era_7; }
	inline int32_t* get_address_of_era_7() { return &___era_7; }
	inline void set_era_7(int32_t value)
	{
		___era_7 = value;
	}

	inline static int32_t get_offset_of_flags_8() { return static_cast<int32_t>(offsetof(DateTimeResult_t2747711438, ___flags_8)); }
	inline int32_t get_flags_8() const { return ___flags_8; }
	inline int32_t* get_address_of_flags_8() { return &___flags_8; }
	inline void set_flags_8(int32_t value)
	{
		___flags_8 = value;
	}

	inline static int32_t get_offset_of_timeZoneOffset_9() { return static_cast<int32_t>(offsetof(DateTimeResult_t2747711438, ___timeZoneOffset_9)); }
	inline TimeSpan_t881159249  get_timeZoneOffset_9() const { return ___timeZoneOffset_9; }
	inline TimeSpan_t881159249 * get_address_of_timeZoneOffset_9() { return &___timeZoneOffset_9; }
	inline void set_timeZoneOffset_9(TimeSpan_t881159249  value)
	{
		___timeZoneOffset_9 = value;
	}

	inline static int32_t get_offset_of_calendar_10() { return static_cast<int32_t>(offsetof(DateTimeResult_t2747711438, ___calendar_10)); }
	inline Calendar_t1661121569 * get_calendar_10() const { return ___calendar_10; }
	inline Calendar_t1661121569 ** get_address_of_calendar_10() { return &___calendar_10; }
	inline void set_calendar_10(Calendar_t1661121569 * value)
	{
		___calendar_10 = value;
		Il2CppCodeGenWriteBarrier((&___calendar_10), value);
	}

	inline static int32_t get_offset_of_parsedDate_11() { return static_cast<int32_t>(offsetof(DateTimeResult_t2747711438, ___parsedDate_11)); }
	inline DateTime_t3738529785  get_parsedDate_11() const { return ___parsedDate_11; }
	inline DateTime_t3738529785 * get_address_of_parsedDate_11() { return &___parsedDate_11; }
	inline void set_parsedDate_11(DateTime_t3738529785  value)
	{
		___parsedDate_11 = value;
	}

	inline static int32_t get_offset_of_failure_12() { return static_cast<int32_t>(offsetof(DateTimeResult_t2747711438, ___failure_12)); }
	inline int32_t get_failure_12() const { return ___failure_12; }
	inline int32_t* get_address_of_failure_12() { return &___failure_12; }
	inline void set_failure_12(int32_t value)
	{
		___failure_12 = value;
	}

	inline static int32_t get_offset_of_failureMessageID_13() { return static_cast<int32_t>(offsetof(DateTimeResult_t2747711438, ___failureMessageID_13)); }
	inline String_t* get_failureMessageID_13() const { return ___failureMessageID_13; }
	inline String_t** get_address_of_failureMessageID_13() { return &___failureMessageID_13; }
	inline void set_failureMessageID_13(String_t* value)
	{
		___failureMessageID_13 = value;
		Il2CppCodeGenWriteBarrier((&___failureMessageID_13), value);
	}

	inline static int32_t get_offset_of_failureMessageFormatArgument_14() { return static_cast<int32_t>(offsetof(DateTimeResult_t2747711438, ___failureMessageFormatArgument_14)); }
	inline RuntimeObject * get_failureMessageFormatArgument_14() const { return ___failureMessageFormatArgument_14; }
	inline RuntimeObject ** get_address_of_failureMessageFormatArgument_14() { return &___failureMessageFormatArgument_14; }
	inline void set_failureMessageFormatArgument_14(RuntimeObject * value)
	{
		___failureMessageFormatArgument_14 = value;
		Il2CppCodeGenWriteBarrier((&___failureMessageFormatArgument_14), value);
	}

	inline static int32_t get_offset_of_failureArgumentName_15() { return static_cast<int32_t>(offsetof(DateTimeResult_t2747711438, ___failureArgumentName_15)); }
	inline String_t* get_failureArgumentName_15() const { return ___failureArgumentName_15; }
	inline String_t** get_address_of_failureArgumentName_15() { return &___failureArgumentName_15; }
	inline void set_failureArgumentName_15(String_t* value)
	{
		___failureArgumentName_15 = value;
		Il2CppCodeGenWriteBarrier((&___failureArgumentName_15), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.DateTimeResult
struct DateTimeResult_t2747711438_marshaled_pinvoke
{
	int32_t ___Year_0;
	int32_t ___Month_1;
	int32_t ___Day_2;
	int32_t ___Hour_3;
	int32_t ___Minute_4;
	int32_t ___Second_5;
	double ___fraction_6;
	int32_t ___era_7;
	int32_t ___flags_8;
	TimeSpan_t881159249  ___timeZoneOffset_9;
	Calendar_t1661121569 * ___calendar_10;
	DateTime_t3738529785  ___parsedDate_11;
	int32_t ___failure_12;
	char* ___failureMessageID_13;
	Il2CppIUnknown* ___failureMessageFormatArgument_14;
	char* ___failureArgumentName_15;
};
// Native definition for COM marshalling of System.DateTimeResult
struct DateTimeResult_t2747711438_marshaled_com
{
	int32_t ___Year_0;
	int32_t ___Month_1;
	int32_t ___Day_2;
	int32_t ___Hour_3;
	int32_t ___Minute_4;
	int32_t ___Second_5;
	double ___fraction_6;
	int32_t ___era_7;
	int32_t ___flags_8;
	TimeSpan_t881159249  ___timeZoneOffset_9;
	Calendar_t1661121569 * ___calendar_10;
	DateTime_t3738529785  ___parsedDate_11;
	int32_t ___failure_12;
	Il2CppChar* ___failureMessageID_13;
	Il2CppIUnknown* ___failureMessageFormatArgument_14;
	Il2CppChar* ___failureArgumentName_15;
};
#endif // DATETIMERESULT_T2747711438_H
#ifndef DATETIMETOKEN_T1473016582_H
#define DATETIMETOKEN_T1473016582_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.DateTimeToken
struct  DateTimeToken_t1473016582 
{
public:
	// System.DateTimeParse/DTT System.DateTimeToken::dtt
	int32_t ___dtt_0;
	// System.TokenType System.DateTimeToken::suffix
	int32_t ___suffix_1;
	// System.Int32 System.DateTimeToken::num
	int32_t ___num_2;

public:
	inline static int32_t get_offset_of_dtt_0() { return static_cast<int32_t>(offsetof(DateTimeToken_t1473016582, ___dtt_0)); }
	inline int32_t get_dtt_0() const { return ___dtt_0; }
	inline int32_t* get_address_of_dtt_0() { return &___dtt_0; }
	inline void set_dtt_0(int32_t value)
	{
		___dtt_0 = value;
	}

	inline static int32_t get_offset_of_suffix_1() { return static_cast<int32_t>(offsetof(DateTimeToken_t1473016582, ___suffix_1)); }
	inline int32_t get_suffix_1() const { return ___suffix_1; }
	inline int32_t* get_address_of_suffix_1() { return &___suffix_1; }
	inline void set_suffix_1(int32_t value)
	{
		___suffix_1 = value;
	}

	inline static int32_t get_offset_of_num_2() { return static_cast<int32_t>(offsetof(DateTimeToken_t1473016582, ___num_2)); }
	inline int32_t get_num_2() const { return ___num_2; }
	inline int32_t* get_address_of_num_2() { return &___num_2; }
	inline void set_num_2(int32_t value)
	{
		___num_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATETIMETOKEN_T1473016582_H
#ifndef FIELDACCESSEXCEPTION_T238379456_H
#define FIELDACCESSEXCEPTION_T238379456_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.FieldAccessException
struct  FieldAccessException_t238379456  : public MemberAccessException_t1734467078
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FIELDACCESSEXCEPTION_T238379456_H
#ifndef GUIDRESULT_T1584437374_H
#define GUIDRESULT_T1584437374_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Guid/GuidResult
struct  GuidResult_t1584437374 
{
public:
	// System.Guid System.Guid/GuidResult::parsedGuid
	Guid_t  ___parsedGuid_0;
	// System.Guid/GuidParseThrowStyle System.Guid/GuidResult::throwStyle
	int32_t ___throwStyle_1;
	// System.Guid/ParseFailureKind System.Guid/GuidResult::m_failure
	int32_t ___m_failure_2;
	// System.String System.Guid/GuidResult::m_failureMessageID
	String_t* ___m_failureMessageID_3;
	// System.Object System.Guid/GuidResult::m_failureMessageFormatArgument
	RuntimeObject * ___m_failureMessageFormatArgument_4;
	// System.String System.Guid/GuidResult::m_failureArgumentName
	String_t* ___m_failureArgumentName_5;
	// System.Exception System.Guid/GuidResult::m_innerException
	Exception_t * ___m_innerException_6;

public:
	inline static int32_t get_offset_of_parsedGuid_0() { return static_cast<int32_t>(offsetof(GuidResult_t1584437374, ___parsedGuid_0)); }
	inline Guid_t  get_parsedGuid_0() const { return ___parsedGuid_0; }
	inline Guid_t * get_address_of_parsedGuid_0() { return &___parsedGuid_0; }
	inline void set_parsedGuid_0(Guid_t  value)
	{
		___parsedGuid_0 = value;
	}

	inline static int32_t get_offset_of_throwStyle_1() { return static_cast<int32_t>(offsetof(GuidResult_t1584437374, ___throwStyle_1)); }
	inline int32_t get_throwStyle_1() const { return ___throwStyle_1; }
	inline int32_t* get_address_of_throwStyle_1() { return &___throwStyle_1; }
	inline void set_throwStyle_1(int32_t value)
	{
		___throwStyle_1 = value;
	}

	inline static int32_t get_offset_of_m_failure_2() { return static_cast<int32_t>(offsetof(GuidResult_t1584437374, ___m_failure_2)); }
	inline int32_t get_m_failure_2() const { return ___m_failure_2; }
	inline int32_t* get_address_of_m_failure_2() { return &___m_failure_2; }
	inline void set_m_failure_2(int32_t value)
	{
		___m_failure_2 = value;
	}

	inline static int32_t get_offset_of_m_failureMessageID_3() { return static_cast<int32_t>(offsetof(GuidResult_t1584437374, ___m_failureMessageID_3)); }
	inline String_t* get_m_failureMessageID_3() const { return ___m_failureMessageID_3; }
	inline String_t** get_address_of_m_failureMessageID_3() { return &___m_failureMessageID_3; }
	inline void set_m_failureMessageID_3(String_t* value)
	{
		___m_failureMessageID_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_failureMessageID_3), value);
	}

	inline static int32_t get_offset_of_m_failureMessageFormatArgument_4() { return static_cast<int32_t>(offsetof(GuidResult_t1584437374, ___m_failureMessageFormatArgument_4)); }
	inline RuntimeObject * get_m_failureMessageFormatArgument_4() const { return ___m_failureMessageFormatArgument_4; }
	inline RuntimeObject ** get_address_of_m_failureMessageFormatArgument_4() { return &___m_failureMessageFormatArgument_4; }
	inline void set_m_failureMessageFormatArgument_4(RuntimeObject * value)
	{
		___m_failureMessageFormatArgument_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_failureMessageFormatArgument_4), value);
	}

	inline static int32_t get_offset_of_m_failureArgumentName_5() { return static_cast<int32_t>(offsetof(GuidResult_t1584437374, ___m_failureArgumentName_5)); }
	inline String_t* get_m_failureArgumentName_5() const { return ___m_failureArgumentName_5; }
	inline String_t** get_address_of_m_failureArgumentName_5() { return &___m_failureArgumentName_5; }
	inline void set_m_failureArgumentName_5(String_t* value)
	{
		___m_failureArgumentName_5 = value;
		Il2CppCodeGenWriteBarrier((&___m_failureArgumentName_5), value);
	}

	inline static int32_t get_offset_of_m_innerException_6() { return static_cast<int32_t>(offsetof(GuidResult_t1584437374, ___m_innerException_6)); }
	inline Exception_t * get_m_innerException_6() const { return ___m_innerException_6; }
	inline Exception_t ** get_address_of_m_innerException_6() { return &___m_innerException_6; }
	inline void set_m_innerException_6(Exception_t * value)
	{
		___m_innerException_6 = value;
		Il2CppCodeGenWriteBarrier((&___m_innerException_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Guid/GuidResult
struct GuidResult_t1584437374_marshaled_pinvoke
{
	Guid_t  ___parsedGuid_0;
	int32_t ___throwStyle_1;
	int32_t ___m_failure_2;
	char* ___m_failureMessageID_3;
	Il2CppIUnknown* ___m_failureMessageFormatArgument_4;
	char* ___m_failureArgumentName_5;
	Exception_t_marshaled_pinvoke* ___m_innerException_6;
};
// Native definition for COM marshalling of System.Guid/GuidResult
struct GuidResult_t1584437374_marshaled_com
{
	Guid_t  ___parsedGuid_0;
	int32_t ___throwStyle_1;
	int32_t ___m_failure_2;
	Il2CppChar* ___m_failureMessageID_3;
	Il2CppIUnknown* ___m_failureMessageFormatArgument_4;
	Il2CppChar* ___m_failureArgumentName_5;
	Exception_t_marshaled_com* ___m_innerException_6;
};
#endif // GUIDRESULT_T1584437374_H
#ifndef METHODACCESSEXCEPTION_T190175859_H
#define METHODACCESSEXCEPTION_T190175859_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MethodAccessException
struct  MethodAccessException_t190175859  : public MemberAccessException_t1734467078
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // METHODACCESSEXCEPTION_T190175859_H
#ifndef MISSINGMEMBEREXCEPTION_T1385081665_H
#define MISSINGMEMBEREXCEPTION_T1385081665_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MissingMemberException
struct  MissingMemberException_t1385081665  : public MemberAccessException_t1734467078
{
public:
	// System.String System.MissingMemberException::ClassName
	String_t* ___ClassName_17;
	// System.String System.MissingMemberException::MemberName
	String_t* ___MemberName_18;
	// System.Byte[] System.MissingMemberException::Signature
	ByteU5BU5D_t4116647657* ___Signature_19;

public:
	inline static int32_t get_offset_of_ClassName_17() { return static_cast<int32_t>(offsetof(MissingMemberException_t1385081665, ___ClassName_17)); }
	inline String_t* get_ClassName_17() const { return ___ClassName_17; }
	inline String_t** get_address_of_ClassName_17() { return &___ClassName_17; }
	inline void set_ClassName_17(String_t* value)
	{
		___ClassName_17 = value;
		Il2CppCodeGenWriteBarrier((&___ClassName_17), value);
	}

	inline static int32_t get_offset_of_MemberName_18() { return static_cast<int32_t>(offsetof(MissingMemberException_t1385081665, ___MemberName_18)); }
	inline String_t* get_MemberName_18() const { return ___MemberName_18; }
	inline String_t** get_address_of_MemberName_18() { return &___MemberName_18; }
	inline void set_MemberName_18(String_t* value)
	{
		___MemberName_18 = value;
		Il2CppCodeGenWriteBarrier((&___MemberName_18), value);
	}

	inline static int32_t get_offset_of_Signature_19() { return static_cast<int32_t>(offsetof(MissingMemberException_t1385081665, ___Signature_19)); }
	inline ByteU5BU5D_t4116647657* get_Signature_19() const { return ___Signature_19; }
	inline ByteU5BU5D_t4116647657** get_address_of_Signature_19() { return &___Signature_19; }
	inline void set_Signature_19(ByteU5BU5D_t4116647657* value)
	{
		___Signature_19 = value;
		Il2CppCodeGenWriteBarrier((&___Signature_19), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MISSINGMEMBEREXCEPTION_T1385081665_H
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
#ifndef NOTFINITENUMBEREXCEPTION_T4049580392_H
#define NOTFINITENUMBEREXCEPTION_T4049580392_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.NotFiniteNumberException
struct  NotFiniteNumberException_t4049580392  : public ArithmeticException_t4283546778
{
public:
	// System.Double System.NotFiniteNumberException::_offendingNumber
	double ____offendingNumber_17;

public:
	inline static int32_t get_offset_of__offendingNumber_17() { return static_cast<int32_t>(offsetof(NotFiniteNumberException_t4049580392, ____offendingNumber_17)); }
	inline double get__offendingNumber_17() const { return ____offendingNumber_17; }
	inline double* get_address_of__offendingNumber_17() { return &____offendingNumber_17; }
	inline void set__offendingNumber_17(double value)
	{
		____offendingNumber_17 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NOTFINITENUMBEREXCEPTION_T4049580392_H
#ifndef OBJECTDISPOSEDEXCEPTION_T21392786_H
#define OBJECTDISPOSEDEXCEPTION_T21392786_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ObjectDisposedException
struct  ObjectDisposedException_t21392786  : public InvalidOperationException_t56020091
{
public:
	// System.String System.ObjectDisposedException::objectName
	String_t* ___objectName_17;

public:
	inline static int32_t get_offset_of_objectName_17() { return static_cast<int32_t>(offsetof(ObjectDisposedException_t21392786, ___objectName_17)); }
	inline String_t* get_objectName_17() const { return ___objectName_17; }
	inline String_t** get_address_of_objectName_17() { return &___objectName_17; }
	inline void set_objectName_17(String_t* value)
	{
		___objectName_17 = value;
		Il2CppCodeGenWriteBarrier((&___objectName_17), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OBJECTDISPOSEDEXCEPTION_T21392786_H
#ifndef OVERFLOWEXCEPTION_T2020128637_H
#define OVERFLOWEXCEPTION_T2020128637_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.OverflowException
struct  OverflowException_t2020128637  : public ArithmeticException_t4283546778
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OVERFLOWEXCEPTION_T2020128637_H
#ifndef PARSINGINFO_T1001632991_H
#define PARSINGINFO_T1001632991_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ParsingInfo
struct  ParsingInfo_t1001632991 
{
public:
	// System.Globalization.Calendar System.ParsingInfo::calendar
	Calendar_t1661121569 * ___calendar_0;
	// System.Int32 System.ParsingInfo::dayOfWeek
	int32_t ___dayOfWeek_1;
	// System.DateTimeParse/TM System.ParsingInfo::timeMark
	int32_t ___timeMark_2;
	// System.Boolean System.ParsingInfo::fUseHour12
	bool ___fUseHour12_3;
	// System.Boolean System.ParsingInfo::fUseTwoDigitYear
	bool ___fUseTwoDigitYear_4;
	// System.Boolean System.ParsingInfo::fAllowInnerWhite
	bool ___fAllowInnerWhite_5;
	// System.Boolean System.ParsingInfo::fAllowTrailingWhite
	bool ___fAllowTrailingWhite_6;
	// System.Boolean System.ParsingInfo::fCustomNumberParser
	bool ___fCustomNumberParser_7;
	// System.DateTimeParse/MatchNumberDelegate System.ParsingInfo::parseNumberDelegate
	MatchNumberDelegate_t272938340 * ___parseNumberDelegate_8;

public:
	inline static int32_t get_offset_of_calendar_0() { return static_cast<int32_t>(offsetof(ParsingInfo_t1001632991, ___calendar_0)); }
	inline Calendar_t1661121569 * get_calendar_0() const { return ___calendar_0; }
	inline Calendar_t1661121569 ** get_address_of_calendar_0() { return &___calendar_0; }
	inline void set_calendar_0(Calendar_t1661121569 * value)
	{
		___calendar_0 = value;
		Il2CppCodeGenWriteBarrier((&___calendar_0), value);
	}

	inline static int32_t get_offset_of_dayOfWeek_1() { return static_cast<int32_t>(offsetof(ParsingInfo_t1001632991, ___dayOfWeek_1)); }
	inline int32_t get_dayOfWeek_1() const { return ___dayOfWeek_1; }
	inline int32_t* get_address_of_dayOfWeek_1() { return &___dayOfWeek_1; }
	inline void set_dayOfWeek_1(int32_t value)
	{
		___dayOfWeek_1 = value;
	}

	inline static int32_t get_offset_of_timeMark_2() { return static_cast<int32_t>(offsetof(ParsingInfo_t1001632991, ___timeMark_2)); }
	inline int32_t get_timeMark_2() const { return ___timeMark_2; }
	inline int32_t* get_address_of_timeMark_2() { return &___timeMark_2; }
	inline void set_timeMark_2(int32_t value)
	{
		___timeMark_2 = value;
	}

	inline static int32_t get_offset_of_fUseHour12_3() { return static_cast<int32_t>(offsetof(ParsingInfo_t1001632991, ___fUseHour12_3)); }
	inline bool get_fUseHour12_3() const { return ___fUseHour12_3; }
	inline bool* get_address_of_fUseHour12_3() { return &___fUseHour12_3; }
	inline void set_fUseHour12_3(bool value)
	{
		___fUseHour12_3 = value;
	}

	inline static int32_t get_offset_of_fUseTwoDigitYear_4() { return static_cast<int32_t>(offsetof(ParsingInfo_t1001632991, ___fUseTwoDigitYear_4)); }
	inline bool get_fUseTwoDigitYear_4() const { return ___fUseTwoDigitYear_4; }
	inline bool* get_address_of_fUseTwoDigitYear_4() { return &___fUseTwoDigitYear_4; }
	inline void set_fUseTwoDigitYear_4(bool value)
	{
		___fUseTwoDigitYear_4 = value;
	}

	inline static int32_t get_offset_of_fAllowInnerWhite_5() { return static_cast<int32_t>(offsetof(ParsingInfo_t1001632991, ___fAllowInnerWhite_5)); }
	inline bool get_fAllowInnerWhite_5() const { return ___fAllowInnerWhite_5; }
	inline bool* get_address_of_fAllowInnerWhite_5() { return &___fAllowInnerWhite_5; }
	inline void set_fAllowInnerWhite_5(bool value)
	{
		___fAllowInnerWhite_5 = value;
	}

	inline static int32_t get_offset_of_fAllowTrailingWhite_6() { return static_cast<int32_t>(offsetof(ParsingInfo_t1001632991, ___fAllowTrailingWhite_6)); }
	inline bool get_fAllowTrailingWhite_6() const { return ___fAllowTrailingWhite_6; }
	inline bool* get_address_of_fAllowTrailingWhite_6() { return &___fAllowTrailingWhite_6; }
	inline void set_fAllowTrailingWhite_6(bool value)
	{
		___fAllowTrailingWhite_6 = value;
	}

	inline static int32_t get_offset_of_fCustomNumberParser_7() { return static_cast<int32_t>(offsetof(ParsingInfo_t1001632991, ___fCustomNumberParser_7)); }
	inline bool get_fCustomNumberParser_7() const { return ___fCustomNumberParser_7; }
	inline bool* get_address_of_fCustomNumberParser_7() { return &___fCustomNumberParser_7; }
	inline void set_fCustomNumberParser_7(bool value)
	{
		___fCustomNumberParser_7 = value;
	}

	inline static int32_t get_offset_of_parseNumberDelegate_8() { return static_cast<int32_t>(offsetof(ParsingInfo_t1001632991, ___parseNumberDelegate_8)); }
	inline MatchNumberDelegate_t272938340 * get_parseNumberDelegate_8() const { return ___parseNumberDelegate_8; }
	inline MatchNumberDelegate_t272938340 ** get_address_of_parseNumberDelegate_8() { return &___parseNumberDelegate_8; }
	inline void set_parseNumberDelegate_8(MatchNumberDelegate_t272938340 * value)
	{
		___parseNumberDelegate_8 = value;
		Il2CppCodeGenWriteBarrier((&___parseNumberDelegate_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ParsingInfo
struct ParsingInfo_t1001632991_marshaled_pinvoke
{
	Calendar_t1661121569 * ___calendar_0;
	int32_t ___dayOfWeek_1;
	int32_t ___timeMark_2;
	int32_t ___fUseHour12_3;
	int32_t ___fUseTwoDigitYear_4;
	int32_t ___fAllowInnerWhite_5;
	int32_t ___fAllowTrailingWhite_6;
	int32_t ___fCustomNumberParser_7;
	Il2CppMethodPointer ___parseNumberDelegate_8;
};
// Native definition for COM marshalling of System.ParsingInfo
struct ParsingInfo_t1001632991_marshaled_com
{
	Calendar_t1661121569 * ___calendar_0;
	int32_t ___dayOfWeek_1;
	int32_t ___timeMark_2;
	int32_t ___fUseHour12_3;
	int32_t ___fUseTwoDigitYear_4;
	int32_t ___fAllowInnerWhite_5;
	int32_t ___fAllowTrailingWhite_6;
	int32_t ___fCustomNumberParser_7;
	Il2CppMethodPointer ___parseNumberDelegate_8;
};
#endif // PARSINGINFO_T1001632991_H
#ifndef PLATFORMNOTSUPPORTEDEXCEPTION_T3572244504_H
#define PLATFORMNOTSUPPORTEDEXCEPTION_T3572244504_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.PlatformNotSupportedException
struct  PlatformNotSupportedException_t3572244504  : public NotSupportedException_t1314879016
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLATFORMNOTSUPPORTEDEXCEPTION_T3572244504_H
#ifndef TIMEZONEINFO_T161405854_H
#define TIMEZONEINFO_T161405854_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.TimeZoneInfo
struct  TimeZoneInfo_t161405854  : public RuntimeObject
{
public:
	// System.TimeSpan System.TimeZoneInfo::baseUtcOffset
	TimeSpan_t881159249  ___baseUtcOffset_0;
	// System.String System.TimeZoneInfo::daylightDisplayName
	String_t* ___daylightDisplayName_1;
	// System.String System.TimeZoneInfo::displayName
	String_t* ___displayName_2;
	// System.String System.TimeZoneInfo::id
	String_t* ___id_3;
	// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeType>> System.TimeZoneInfo::transitions
	List_1_t1035217313 * ___transitions_5;
	// System.String System.TimeZoneInfo::standardDisplayName
	String_t* ___standardDisplayName_7;
	// System.Boolean System.TimeZoneInfo::supportsDaylightSavingTime
	bool ___supportsDaylightSavingTime_8;
	// System.TimeZoneInfo/AdjustmentRule[] System.TimeZoneInfo::adjustmentRules
	AdjustmentRuleU5BU5D_t1469475992* ___adjustmentRules_11;

public:
	inline static int32_t get_offset_of_baseUtcOffset_0() { return static_cast<int32_t>(offsetof(TimeZoneInfo_t161405854, ___baseUtcOffset_0)); }
	inline TimeSpan_t881159249  get_baseUtcOffset_0() const { return ___baseUtcOffset_0; }
	inline TimeSpan_t881159249 * get_address_of_baseUtcOffset_0() { return &___baseUtcOffset_0; }
	inline void set_baseUtcOffset_0(TimeSpan_t881159249  value)
	{
		___baseUtcOffset_0 = value;
	}

	inline static int32_t get_offset_of_daylightDisplayName_1() { return static_cast<int32_t>(offsetof(TimeZoneInfo_t161405854, ___daylightDisplayName_1)); }
	inline String_t* get_daylightDisplayName_1() const { return ___daylightDisplayName_1; }
	inline String_t** get_address_of_daylightDisplayName_1() { return &___daylightDisplayName_1; }
	inline void set_daylightDisplayName_1(String_t* value)
	{
		___daylightDisplayName_1 = value;
		Il2CppCodeGenWriteBarrier((&___daylightDisplayName_1), value);
	}

	inline static int32_t get_offset_of_displayName_2() { return static_cast<int32_t>(offsetof(TimeZoneInfo_t161405854, ___displayName_2)); }
	inline String_t* get_displayName_2() const { return ___displayName_2; }
	inline String_t** get_address_of_displayName_2() { return &___displayName_2; }
	inline void set_displayName_2(String_t* value)
	{
		___displayName_2 = value;
		Il2CppCodeGenWriteBarrier((&___displayName_2), value);
	}

	inline static int32_t get_offset_of_id_3() { return static_cast<int32_t>(offsetof(TimeZoneInfo_t161405854, ___id_3)); }
	inline String_t* get_id_3() const { return ___id_3; }
	inline String_t** get_address_of_id_3() { return &___id_3; }
	inline void set_id_3(String_t* value)
	{
		___id_3 = value;
		Il2CppCodeGenWriteBarrier((&___id_3), value);
	}

	inline static int32_t get_offset_of_transitions_5() { return static_cast<int32_t>(offsetof(TimeZoneInfo_t161405854, ___transitions_5)); }
	inline List_1_t1035217313 * get_transitions_5() const { return ___transitions_5; }
	inline List_1_t1035217313 ** get_address_of_transitions_5() { return &___transitions_5; }
	inline void set_transitions_5(List_1_t1035217313 * value)
	{
		___transitions_5 = value;
		Il2CppCodeGenWriteBarrier((&___transitions_5), value);
	}

	inline static int32_t get_offset_of_standardDisplayName_7() { return static_cast<int32_t>(offsetof(TimeZoneInfo_t161405854, ___standardDisplayName_7)); }
	inline String_t* get_standardDisplayName_7() const { return ___standardDisplayName_7; }
	inline String_t** get_address_of_standardDisplayName_7() { return &___standardDisplayName_7; }
	inline void set_standardDisplayName_7(String_t* value)
	{
		___standardDisplayName_7 = value;
		Il2CppCodeGenWriteBarrier((&___standardDisplayName_7), value);
	}

	inline static int32_t get_offset_of_supportsDaylightSavingTime_8() { return static_cast<int32_t>(offsetof(TimeZoneInfo_t161405854, ___supportsDaylightSavingTime_8)); }
	inline bool get_supportsDaylightSavingTime_8() const { return ___supportsDaylightSavingTime_8; }
	inline bool* get_address_of_supportsDaylightSavingTime_8() { return &___supportsDaylightSavingTime_8; }
	inline void set_supportsDaylightSavingTime_8(bool value)
	{
		___supportsDaylightSavingTime_8 = value;
	}

	inline static int32_t get_offset_of_adjustmentRules_11() { return static_cast<int32_t>(offsetof(TimeZoneInfo_t161405854, ___adjustmentRules_11)); }
	inline AdjustmentRuleU5BU5D_t1469475992* get_adjustmentRules_11() const { return ___adjustmentRules_11; }
	inline AdjustmentRuleU5BU5D_t1469475992** get_address_of_adjustmentRules_11() { return &___adjustmentRules_11; }
	inline void set_adjustmentRules_11(AdjustmentRuleU5BU5D_t1469475992* value)
	{
		___adjustmentRules_11 = value;
		Il2CppCodeGenWriteBarrier((&___adjustmentRules_11), value);
	}
};

struct TimeZoneInfo_t161405854_StaticFields
{
public:
	// System.TimeZoneInfo System.TimeZoneInfo::local
	TimeZoneInfo_t161405854 * ___local_4;
	// System.Boolean System.TimeZoneInfo::readlinkNotFound
	bool ___readlinkNotFound_6;
	// System.TimeZoneInfo System.TimeZoneInfo::utc
	TimeZoneInfo_t161405854 * ___utc_9;
	// System.String System.TimeZoneInfo::timeZoneDirectory
	String_t* ___timeZoneDirectory_10;
	// Microsoft.Win32.RegistryKey System.TimeZoneInfo::timeZoneKey
	RegistryKey_t4211574351 * ___timeZoneKey_12;
	// Microsoft.Win32.RegistryKey System.TimeZoneInfo::localZoneKey
	RegistryKey_t4211574351 * ___localZoneKey_13;
	// System.Collections.ObjectModel.ReadOnlyCollection`1<System.TimeZoneInfo> System.TimeZoneInfo::systemTimeZones
	ReadOnlyCollection_1_t1373982141 * ___systemTimeZones_14;

public:
	inline static int32_t get_offset_of_local_4() { return static_cast<int32_t>(offsetof(TimeZoneInfo_t161405854_StaticFields, ___local_4)); }
	inline TimeZoneInfo_t161405854 * get_local_4() const { return ___local_4; }
	inline TimeZoneInfo_t161405854 ** get_address_of_local_4() { return &___local_4; }
	inline void set_local_4(TimeZoneInfo_t161405854 * value)
	{
		___local_4 = value;
		Il2CppCodeGenWriteBarrier((&___local_4), value);
	}

	inline static int32_t get_offset_of_readlinkNotFound_6() { return static_cast<int32_t>(offsetof(TimeZoneInfo_t161405854_StaticFields, ___readlinkNotFound_6)); }
	inline bool get_readlinkNotFound_6() const { return ___readlinkNotFound_6; }
	inline bool* get_address_of_readlinkNotFound_6() { return &___readlinkNotFound_6; }
	inline void set_readlinkNotFound_6(bool value)
	{
		___readlinkNotFound_6 = value;
	}

	inline static int32_t get_offset_of_utc_9() { return static_cast<int32_t>(offsetof(TimeZoneInfo_t161405854_StaticFields, ___utc_9)); }
	inline TimeZoneInfo_t161405854 * get_utc_9() const { return ___utc_9; }
	inline TimeZoneInfo_t161405854 ** get_address_of_utc_9() { return &___utc_9; }
	inline void set_utc_9(TimeZoneInfo_t161405854 * value)
	{
		___utc_9 = value;
		Il2CppCodeGenWriteBarrier((&___utc_9), value);
	}

	inline static int32_t get_offset_of_timeZoneDirectory_10() { return static_cast<int32_t>(offsetof(TimeZoneInfo_t161405854_StaticFields, ___timeZoneDirectory_10)); }
	inline String_t* get_timeZoneDirectory_10() const { return ___timeZoneDirectory_10; }
	inline String_t** get_address_of_timeZoneDirectory_10() { return &___timeZoneDirectory_10; }
	inline void set_timeZoneDirectory_10(String_t* value)
	{
		___timeZoneDirectory_10 = value;
		Il2CppCodeGenWriteBarrier((&___timeZoneDirectory_10), value);
	}

	inline static int32_t get_offset_of_timeZoneKey_12() { return static_cast<int32_t>(offsetof(TimeZoneInfo_t161405854_StaticFields, ___timeZoneKey_12)); }
	inline RegistryKey_t4211574351 * get_timeZoneKey_12() const { return ___timeZoneKey_12; }
	inline RegistryKey_t4211574351 ** get_address_of_timeZoneKey_12() { return &___timeZoneKey_12; }
	inline void set_timeZoneKey_12(RegistryKey_t4211574351 * value)
	{
		___timeZoneKey_12 = value;
		Il2CppCodeGenWriteBarrier((&___timeZoneKey_12), value);
	}

	inline static int32_t get_offset_of_localZoneKey_13() { return static_cast<int32_t>(offsetof(TimeZoneInfo_t161405854_StaticFields, ___localZoneKey_13)); }
	inline RegistryKey_t4211574351 * get_localZoneKey_13() const { return ___localZoneKey_13; }
	inline RegistryKey_t4211574351 ** get_address_of_localZoneKey_13() { return &___localZoneKey_13; }
	inline void set_localZoneKey_13(RegistryKey_t4211574351 * value)
	{
		___localZoneKey_13 = value;
		Il2CppCodeGenWriteBarrier((&___localZoneKey_13), value);
	}

	inline static int32_t get_offset_of_systemTimeZones_14() { return static_cast<int32_t>(offsetof(TimeZoneInfo_t161405854_StaticFields, ___systemTimeZones_14)); }
	inline ReadOnlyCollection_1_t1373982141 * get_systemTimeZones_14() const { return ___systemTimeZones_14; }
	inline ReadOnlyCollection_1_t1373982141 ** get_address_of_systemTimeZones_14() { return &___systemTimeZones_14; }
	inline void set_systemTimeZones_14(ReadOnlyCollection_1_t1373982141 * value)
	{
		___systemTimeZones_14 = value;
		Il2CppCodeGenWriteBarrier((&___systemTimeZones_14), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TIMEZONEINFO_T161405854_H
#ifndef TRANSITIONTIME_T449921781_H
#define TRANSITIONTIME_T449921781_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.TimeZoneInfo/TransitionTime
struct  TransitionTime_t449921781 
{
public:
	// System.DateTime System.TimeZoneInfo/TransitionTime::m_timeOfDay
	DateTime_t3738529785  ___m_timeOfDay_0;
	// System.Byte System.TimeZoneInfo/TransitionTime::m_month
	uint8_t ___m_month_1;
	// System.Byte System.TimeZoneInfo/TransitionTime::m_week
	uint8_t ___m_week_2;
	// System.Byte System.TimeZoneInfo/TransitionTime::m_day
	uint8_t ___m_day_3;
	// System.DayOfWeek System.TimeZoneInfo/TransitionTime::m_dayOfWeek
	int32_t ___m_dayOfWeek_4;
	// System.Boolean System.TimeZoneInfo/TransitionTime::m_isFixedDateRule
	bool ___m_isFixedDateRule_5;

public:
	inline static int32_t get_offset_of_m_timeOfDay_0() { return static_cast<int32_t>(offsetof(TransitionTime_t449921781, ___m_timeOfDay_0)); }
	inline DateTime_t3738529785  get_m_timeOfDay_0() const { return ___m_timeOfDay_0; }
	inline DateTime_t3738529785 * get_address_of_m_timeOfDay_0() { return &___m_timeOfDay_0; }
	inline void set_m_timeOfDay_0(DateTime_t3738529785  value)
	{
		___m_timeOfDay_0 = value;
	}

	inline static int32_t get_offset_of_m_month_1() { return static_cast<int32_t>(offsetof(TransitionTime_t449921781, ___m_month_1)); }
	inline uint8_t get_m_month_1() const { return ___m_month_1; }
	inline uint8_t* get_address_of_m_month_1() { return &___m_month_1; }
	inline void set_m_month_1(uint8_t value)
	{
		___m_month_1 = value;
	}

	inline static int32_t get_offset_of_m_week_2() { return static_cast<int32_t>(offsetof(TransitionTime_t449921781, ___m_week_2)); }
	inline uint8_t get_m_week_2() const { return ___m_week_2; }
	inline uint8_t* get_address_of_m_week_2() { return &___m_week_2; }
	inline void set_m_week_2(uint8_t value)
	{
		___m_week_2 = value;
	}

	inline static int32_t get_offset_of_m_day_3() { return static_cast<int32_t>(offsetof(TransitionTime_t449921781, ___m_day_3)); }
	inline uint8_t get_m_day_3() const { return ___m_day_3; }
	inline uint8_t* get_address_of_m_day_3() { return &___m_day_3; }
	inline void set_m_day_3(uint8_t value)
	{
		___m_day_3 = value;
	}

	inline static int32_t get_offset_of_m_dayOfWeek_4() { return static_cast<int32_t>(offsetof(TransitionTime_t449921781, ___m_dayOfWeek_4)); }
	inline int32_t get_m_dayOfWeek_4() const { return ___m_dayOfWeek_4; }
	inline int32_t* get_address_of_m_dayOfWeek_4() { return &___m_dayOfWeek_4; }
	inline void set_m_dayOfWeek_4(int32_t value)
	{
		___m_dayOfWeek_4 = value;
	}

	inline static int32_t get_offset_of_m_isFixedDateRule_5() { return static_cast<int32_t>(offsetof(TransitionTime_t449921781, ___m_isFixedDateRule_5)); }
	inline bool get_m_isFixedDateRule_5() const { return ___m_isFixedDateRule_5; }
	inline bool* get_address_of_m_isFixedDateRule_5() { return &___m_isFixedDateRule_5; }
	inline void set_m_isFixedDateRule_5(bool value)
	{
		___m_isFixedDateRule_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.TimeZoneInfo/TransitionTime
struct TransitionTime_t449921781_marshaled_pinvoke
{
	DateTime_t3738529785  ___m_timeOfDay_0;
	uint8_t ___m_month_1;
	uint8_t ___m_week_2;
	uint8_t ___m_day_3;
	int32_t ___m_dayOfWeek_4;
	int32_t ___m_isFixedDateRule_5;
};
// Native definition for COM marshalling of System.TimeZoneInfo/TransitionTime
struct TransitionTime_t449921781_marshaled_com
{
	DateTime_t3738529785  ___m_timeOfDay_0;
	uint8_t ___m_month_1;
	uint8_t ___m_week_2;
	uint8_t ___m_day_3;
	int32_t ___m_dayOfWeek_4;
	int32_t ___m_isFixedDateRule_5;
};
#endif // TRANSITIONTIME_T449921781_H
#ifndef TYPE_T_H
#define TYPE_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Type
struct  Type_t  : public MemberInfo_t
{
public:
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t3027515415  ____impl_9;

public:
	inline static int32_t get_offset_of__impl_9() { return static_cast<int32_t>(offsetof(Type_t, ____impl_9)); }
	inline RuntimeTypeHandle_t3027515415  get__impl_9() const { return ____impl_9; }
	inline RuntimeTypeHandle_t3027515415 * get_address_of__impl_9() { return &____impl_9; }
	inline void set__impl_9(RuntimeTypeHandle_t3027515415  value)
	{
		____impl_9 = value;
	}
};

struct Type_t_StaticFields
{
public:
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_t426314064 * ___FilterAttribute_0;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_t426314064 * ___FilterName_1;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_t426314064 * ___FilterNameIgnoreCase_2;
	// System.Object System.Type::Missing
	RuntimeObject * ___Missing_3;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_4;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t3940880105* ___EmptyTypes_5;
	// System.Reflection.Binder System.Type::defaultBinder
	Binder_t2999457153 * ___defaultBinder_6;

public:
	inline static int32_t get_offset_of_FilterAttribute_0() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterAttribute_0)); }
	inline MemberFilter_t426314064 * get_FilterAttribute_0() const { return ___FilterAttribute_0; }
	inline MemberFilter_t426314064 ** get_address_of_FilterAttribute_0() { return &___FilterAttribute_0; }
	inline void set_FilterAttribute_0(MemberFilter_t426314064 * value)
	{
		___FilterAttribute_0 = value;
		Il2CppCodeGenWriteBarrier((&___FilterAttribute_0), value);
	}

	inline static int32_t get_offset_of_FilterName_1() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterName_1)); }
	inline MemberFilter_t426314064 * get_FilterName_1() const { return ___FilterName_1; }
	inline MemberFilter_t426314064 ** get_address_of_FilterName_1() { return &___FilterName_1; }
	inline void set_FilterName_1(MemberFilter_t426314064 * value)
	{
		___FilterName_1 = value;
		Il2CppCodeGenWriteBarrier((&___FilterName_1), value);
	}

	inline static int32_t get_offset_of_FilterNameIgnoreCase_2() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterNameIgnoreCase_2)); }
	inline MemberFilter_t426314064 * get_FilterNameIgnoreCase_2() const { return ___FilterNameIgnoreCase_2; }
	inline MemberFilter_t426314064 ** get_address_of_FilterNameIgnoreCase_2() { return &___FilterNameIgnoreCase_2; }
	inline void set_FilterNameIgnoreCase_2(MemberFilter_t426314064 * value)
	{
		___FilterNameIgnoreCase_2 = value;
		Il2CppCodeGenWriteBarrier((&___FilterNameIgnoreCase_2), value);
	}

	inline static int32_t get_offset_of_Missing_3() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Missing_3)); }
	inline RuntimeObject * get_Missing_3() const { return ___Missing_3; }
	inline RuntimeObject ** get_address_of_Missing_3() { return &___Missing_3; }
	inline void set_Missing_3(RuntimeObject * value)
	{
		___Missing_3 = value;
		Il2CppCodeGenWriteBarrier((&___Missing_3), value);
	}

	inline static int32_t get_offset_of_Delimiter_4() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Delimiter_4)); }
	inline Il2CppChar get_Delimiter_4() const { return ___Delimiter_4; }
	inline Il2CppChar* get_address_of_Delimiter_4() { return &___Delimiter_4; }
	inline void set_Delimiter_4(Il2CppChar value)
	{
		___Delimiter_4 = value;
	}

	inline static int32_t get_offset_of_EmptyTypes_5() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___EmptyTypes_5)); }
	inline TypeU5BU5D_t3940880105* get_EmptyTypes_5() const { return ___EmptyTypes_5; }
	inline TypeU5BU5D_t3940880105** get_address_of_EmptyTypes_5() { return &___EmptyTypes_5; }
	inline void set_EmptyTypes_5(TypeU5BU5D_t3940880105* value)
	{
		___EmptyTypes_5 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyTypes_5), value);
	}

	inline static int32_t get_offset_of_defaultBinder_6() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___defaultBinder_6)); }
	inline Binder_t2999457153 * get_defaultBinder_6() const { return ___defaultBinder_6; }
	inline Binder_t2999457153 ** get_address_of_defaultBinder_6() { return &___defaultBinder_6; }
	inline void set_defaultBinder_6(Binder_t2999457153 * value)
	{
		___defaultBinder_6 = value;
		Il2CppCodeGenWriteBarrier((&___defaultBinder_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPE_T_H
#ifndef MATCHNUMBERDELEGATE_T272938340_H
#define MATCHNUMBERDELEGATE_T272938340_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.DateTimeParse/MatchNumberDelegate
struct  MatchNumberDelegate_t272938340  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MATCHNUMBERDELEGATE_T272938340_H
#ifndef MISSINGFIELDEXCEPTION_T1989070983_H
#define MISSINGFIELDEXCEPTION_T1989070983_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MissingFieldException
struct  MissingFieldException_t1989070983  : public MissingMemberException_t1385081665
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MISSINGFIELDEXCEPTION_T1989070983_H
#ifndef MISSINGMETHODEXCEPTION_T1274661534_H
#define MISSINGMETHODEXCEPTION_T1274661534_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MissingMethodException
struct  MissingMethodException_t1274661534  : public MissingMemberException_t1385081665
{
public:
	// System.String System.MissingMethodException::signature
	String_t* ___signature_20;

public:
	inline static int32_t get_offset_of_signature_20() { return static_cast<int32_t>(offsetof(MissingMethodException_t1274661534, ___signature_20)); }
	inline String_t* get_signature_20() const { return ___signature_20; }
	inline String_t** get_address_of_signature_20() { return &___signature_20; }
	inline void set_signature_20(String_t* value)
	{
		___signature_20 = value;
		Il2CppCodeGenWriteBarrier((&___signature_20), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MISSINGMETHODEXCEPTION_T1274661534_H
#ifndef TYPEINFO_T1690786683_H
#define TYPEINFO_T1690786683_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.TypeInfo
struct  TypeInfo_t1690786683  : public Type_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPEINFO_T1690786683_H
#ifndef ADJUSTMENTRULE_T74449909_H
#define ADJUSTMENTRULE_T74449909_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.TimeZoneInfo/AdjustmentRule
struct  AdjustmentRule_t74449909  : public RuntimeObject
{
public:
	// System.DateTime System.TimeZoneInfo/AdjustmentRule::m_dateStart
	DateTime_t3738529785  ___m_dateStart_0;
	// System.DateTime System.TimeZoneInfo/AdjustmentRule::m_dateEnd
	DateTime_t3738529785  ___m_dateEnd_1;
	// System.TimeSpan System.TimeZoneInfo/AdjustmentRule::m_daylightDelta
	TimeSpan_t881159249  ___m_daylightDelta_2;
	// System.TimeZoneInfo/TransitionTime System.TimeZoneInfo/AdjustmentRule::m_daylightTransitionStart
	TransitionTime_t449921781  ___m_daylightTransitionStart_3;
	// System.TimeZoneInfo/TransitionTime System.TimeZoneInfo/AdjustmentRule::m_daylightTransitionEnd
	TransitionTime_t449921781  ___m_daylightTransitionEnd_4;
	// System.TimeSpan System.TimeZoneInfo/AdjustmentRule::m_baseUtcOffsetDelta
	TimeSpan_t881159249  ___m_baseUtcOffsetDelta_5;

public:
	inline static int32_t get_offset_of_m_dateStart_0() { return static_cast<int32_t>(offsetof(AdjustmentRule_t74449909, ___m_dateStart_0)); }
	inline DateTime_t3738529785  get_m_dateStart_0() const { return ___m_dateStart_0; }
	inline DateTime_t3738529785 * get_address_of_m_dateStart_0() { return &___m_dateStart_0; }
	inline void set_m_dateStart_0(DateTime_t3738529785  value)
	{
		___m_dateStart_0 = value;
	}

	inline static int32_t get_offset_of_m_dateEnd_1() { return static_cast<int32_t>(offsetof(AdjustmentRule_t74449909, ___m_dateEnd_1)); }
	inline DateTime_t3738529785  get_m_dateEnd_1() const { return ___m_dateEnd_1; }
	inline DateTime_t3738529785 * get_address_of_m_dateEnd_1() { return &___m_dateEnd_1; }
	inline void set_m_dateEnd_1(DateTime_t3738529785  value)
	{
		___m_dateEnd_1 = value;
	}

	inline static int32_t get_offset_of_m_daylightDelta_2() { return static_cast<int32_t>(offsetof(AdjustmentRule_t74449909, ___m_daylightDelta_2)); }
	inline TimeSpan_t881159249  get_m_daylightDelta_2() const { return ___m_daylightDelta_2; }
	inline TimeSpan_t881159249 * get_address_of_m_daylightDelta_2() { return &___m_daylightDelta_2; }
	inline void set_m_daylightDelta_2(TimeSpan_t881159249  value)
	{
		___m_daylightDelta_2 = value;
	}

	inline static int32_t get_offset_of_m_daylightTransitionStart_3() { return static_cast<int32_t>(offsetof(AdjustmentRule_t74449909, ___m_daylightTransitionStart_3)); }
	inline TransitionTime_t449921781  get_m_daylightTransitionStart_3() const { return ___m_daylightTransitionStart_3; }
	inline TransitionTime_t449921781 * get_address_of_m_daylightTransitionStart_3() { return &___m_daylightTransitionStart_3; }
	inline void set_m_daylightTransitionStart_3(TransitionTime_t449921781  value)
	{
		___m_daylightTransitionStart_3 = value;
	}

	inline static int32_t get_offset_of_m_daylightTransitionEnd_4() { return static_cast<int32_t>(offsetof(AdjustmentRule_t74449909, ___m_daylightTransitionEnd_4)); }
	inline TransitionTime_t449921781  get_m_daylightTransitionEnd_4() const { return ___m_daylightTransitionEnd_4; }
	inline TransitionTime_t449921781 * get_address_of_m_daylightTransitionEnd_4() { return &___m_daylightTransitionEnd_4; }
	inline void set_m_daylightTransitionEnd_4(TransitionTime_t449921781  value)
	{
		___m_daylightTransitionEnd_4 = value;
	}

	inline static int32_t get_offset_of_m_baseUtcOffsetDelta_5() { return static_cast<int32_t>(offsetof(AdjustmentRule_t74449909, ___m_baseUtcOffsetDelta_5)); }
	inline TimeSpan_t881159249  get_m_baseUtcOffsetDelta_5() const { return ___m_baseUtcOffsetDelta_5; }
	inline TimeSpan_t881159249 * get_address_of_m_baseUtcOffsetDelta_5() { return &___m_baseUtcOffsetDelta_5; }
	inline void set_m_baseUtcOffsetDelta_5(TimeSpan_t881159249  value)
	{
		___m_baseUtcOffsetDelta_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ADJUSTMENTRULE_T74449909_H
#ifndef RUNTIMETYPE_T3636489352_H
#define RUNTIMETYPE_T3636489352_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.RuntimeType
struct  RuntimeType_t3636489352  : public TypeInfo_t1690786683
{
public:
	// System.MonoTypeInfo System.RuntimeType::type_info
	MonoTypeInfo_t3366989025 * ___type_info_26;
	// System.Object System.RuntimeType::GenericCache
	RuntimeObject * ___GenericCache_27;
	// System.Reflection.RuntimeConstructorInfo System.RuntimeType::m_serializationCtor
	RuntimeConstructorInfo_t1806616898 * ___m_serializationCtor_28;

public:
	inline static int32_t get_offset_of_type_info_26() { return static_cast<int32_t>(offsetof(RuntimeType_t3636489352, ___type_info_26)); }
	inline MonoTypeInfo_t3366989025 * get_type_info_26() const { return ___type_info_26; }
	inline MonoTypeInfo_t3366989025 ** get_address_of_type_info_26() { return &___type_info_26; }
	inline void set_type_info_26(MonoTypeInfo_t3366989025 * value)
	{
		___type_info_26 = value;
		Il2CppCodeGenWriteBarrier((&___type_info_26), value);
	}

	inline static int32_t get_offset_of_GenericCache_27() { return static_cast<int32_t>(offsetof(RuntimeType_t3636489352, ___GenericCache_27)); }
	inline RuntimeObject * get_GenericCache_27() const { return ___GenericCache_27; }
	inline RuntimeObject ** get_address_of_GenericCache_27() { return &___GenericCache_27; }
	inline void set_GenericCache_27(RuntimeObject * value)
	{
		___GenericCache_27 = value;
		Il2CppCodeGenWriteBarrier((&___GenericCache_27), value);
	}

	inline static int32_t get_offset_of_m_serializationCtor_28() { return static_cast<int32_t>(offsetof(RuntimeType_t3636489352, ___m_serializationCtor_28)); }
	inline RuntimeConstructorInfo_t1806616898 * get_m_serializationCtor_28() const { return ___m_serializationCtor_28; }
	inline RuntimeConstructorInfo_t1806616898 ** get_address_of_m_serializationCtor_28() { return &___m_serializationCtor_28; }
	inline void set_m_serializationCtor_28(RuntimeConstructorInfo_t1806616898 * value)
	{
		___m_serializationCtor_28 = value;
		Il2CppCodeGenWriteBarrier((&___m_serializationCtor_28), value);
	}
};

struct RuntimeType_t3636489352_StaticFields
{
public:
	// System.RuntimeType System.RuntimeType::ValueType
	RuntimeType_t3636489352 * ___ValueType_10;
	// System.RuntimeType System.RuntimeType::EnumType
	RuntimeType_t3636489352 * ___EnumType_11;
	// System.RuntimeType System.RuntimeType::ObjectType
	RuntimeType_t3636489352 * ___ObjectType_12;
	// System.RuntimeType System.RuntimeType::StringType
	RuntimeType_t3636489352 * ___StringType_13;
	// System.RuntimeType System.RuntimeType::DelegateType
	RuntimeType_t3636489352 * ___DelegateType_14;
	// System.Type[] System.RuntimeType::s_SICtorParamTypes
	TypeU5BU5D_t3940880105* ___s_SICtorParamTypes_15;
	// System.RuntimeType System.RuntimeType::s_typedRef
	RuntimeType_t3636489352 * ___s_typedRef_25;
	// System.Collections.Generic.Dictionary`2<System.Guid,System.Type> System.RuntimeType::clsid_types
	Dictionary_2_t1532962293 * ___clsid_types_29;
	// System.Reflection.Emit.AssemblyBuilder System.RuntimeType::clsid_assemblybuilder
	AssemblyBuilder_t359885250 * ___clsid_assemblybuilder_30;

public:
	inline static int32_t get_offset_of_ValueType_10() { return static_cast<int32_t>(offsetof(RuntimeType_t3636489352_StaticFields, ___ValueType_10)); }
	inline RuntimeType_t3636489352 * get_ValueType_10() const { return ___ValueType_10; }
	inline RuntimeType_t3636489352 ** get_address_of_ValueType_10() { return &___ValueType_10; }
	inline void set_ValueType_10(RuntimeType_t3636489352 * value)
	{
		___ValueType_10 = value;
		Il2CppCodeGenWriteBarrier((&___ValueType_10), value);
	}

	inline static int32_t get_offset_of_EnumType_11() { return static_cast<int32_t>(offsetof(RuntimeType_t3636489352_StaticFields, ___EnumType_11)); }
	inline RuntimeType_t3636489352 * get_EnumType_11() const { return ___EnumType_11; }
	inline RuntimeType_t3636489352 ** get_address_of_EnumType_11() { return &___EnumType_11; }
	inline void set_EnumType_11(RuntimeType_t3636489352 * value)
	{
		___EnumType_11 = value;
		Il2CppCodeGenWriteBarrier((&___EnumType_11), value);
	}

	inline static int32_t get_offset_of_ObjectType_12() { return static_cast<int32_t>(offsetof(RuntimeType_t3636489352_StaticFields, ___ObjectType_12)); }
	inline RuntimeType_t3636489352 * get_ObjectType_12() const { return ___ObjectType_12; }
	inline RuntimeType_t3636489352 ** get_address_of_ObjectType_12() { return &___ObjectType_12; }
	inline void set_ObjectType_12(RuntimeType_t3636489352 * value)
	{
		___ObjectType_12 = value;
		Il2CppCodeGenWriteBarrier((&___ObjectType_12), value);
	}

	inline static int32_t get_offset_of_StringType_13() { return static_cast<int32_t>(offsetof(RuntimeType_t3636489352_StaticFields, ___StringType_13)); }
	inline RuntimeType_t3636489352 * get_StringType_13() const { return ___StringType_13; }
	inline RuntimeType_t3636489352 ** get_address_of_StringType_13() { return &___StringType_13; }
	inline void set_StringType_13(RuntimeType_t3636489352 * value)
	{
		___StringType_13 = value;
		Il2CppCodeGenWriteBarrier((&___StringType_13), value);
	}

	inline static int32_t get_offset_of_DelegateType_14() { return static_cast<int32_t>(offsetof(RuntimeType_t3636489352_StaticFields, ___DelegateType_14)); }
	inline RuntimeType_t3636489352 * get_DelegateType_14() const { return ___DelegateType_14; }
	inline RuntimeType_t3636489352 ** get_address_of_DelegateType_14() { return &___DelegateType_14; }
	inline void set_DelegateType_14(RuntimeType_t3636489352 * value)
	{
		___DelegateType_14 = value;
		Il2CppCodeGenWriteBarrier((&___DelegateType_14), value);
	}

	inline static int32_t get_offset_of_s_SICtorParamTypes_15() { return static_cast<int32_t>(offsetof(RuntimeType_t3636489352_StaticFields, ___s_SICtorParamTypes_15)); }
	inline TypeU5BU5D_t3940880105* get_s_SICtorParamTypes_15() const { return ___s_SICtorParamTypes_15; }
	inline TypeU5BU5D_t3940880105** get_address_of_s_SICtorParamTypes_15() { return &___s_SICtorParamTypes_15; }
	inline void set_s_SICtorParamTypes_15(TypeU5BU5D_t3940880105* value)
	{
		___s_SICtorParamTypes_15 = value;
		Il2CppCodeGenWriteBarrier((&___s_SICtorParamTypes_15), value);
	}

	inline static int32_t get_offset_of_s_typedRef_25() { return static_cast<int32_t>(offsetof(RuntimeType_t3636489352_StaticFields, ___s_typedRef_25)); }
	inline RuntimeType_t3636489352 * get_s_typedRef_25() const { return ___s_typedRef_25; }
	inline RuntimeType_t3636489352 ** get_address_of_s_typedRef_25() { return &___s_typedRef_25; }
	inline void set_s_typedRef_25(RuntimeType_t3636489352 * value)
	{
		___s_typedRef_25 = value;
		Il2CppCodeGenWriteBarrier((&___s_typedRef_25), value);
	}

	inline static int32_t get_offset_of_clsid_types_29() { return static_cast<int32_t>(offsetof(RuntimeType_t3636489352_StaticFields, ___clsid_types_29)); }
	inline Dictionary_2_t1532962293 * get_clsid_types_29() const { return ___clsid_types_29; }
	inline Dictionary_2_t1532962293 ** get_address_of_clsid_types_29() { return &___clsid_types_29; }
	inline void set_clsid_types_29(Dictionary_2_t1532962293 * value)
	{
		___clsid_types_29 = value;
		Il2CppCodeGenWriteBarrier((&___clsid_types_29), value);
	}

	inline static int32_t get_offset_of_clsid_assemblybuilder_30() { return static_cast<int32_t>(offsetof(RuntimeType_t3636489352_StaticFields, ___clsid_assemblybuilder_30)); }
	inline AssemblyBuilder_t359885250 * get_clsid_assemblybuilder_30() const { return ___clsid_assemblybuilder_30; }
	inline AssemblyBuilder_t359885250 ** get_address_of_clsid_assemblybuilder_30() { return &___clsid_assemblybuilder_30; }
	inline void set_clsid_assemblybuilder_30(AssemblyBuilder_t359885250 * value)
	{
		___clsid_assemblybuilder_30 = value;
		Il2CppCodeGenWriteBarrier((&___clsid_assemblybuilder_30), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMETYPE_T3636489352_H
#ifndef REFLECTIONONLYTYPE_T351397180_H
#define REFLECTIONONLYTYPE_T351397180_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ReflectionOnlyType
struct  ReflectionOnlyType_t351397180  : public RuntimeType_t3636489352
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REFLECTIONONLYTYPE_T351397180_H





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize200 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize201 = { sizeof (Exception_t), -1, sizeof(Exception_t_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable201[17] = 
{
	Exception_t_StaticFields::get_offset_of_s_EDILock_0(),
	Exception_t::get_offset_of__className_1(),
	Exception_t::get_offset_of__message_2(),
	Exception_t::get_offset_of__data_3(),
	Exception_t::get_offset_of__innerException_4(),
	Exception_t::get_offset_of__helpURL_5(),
	Exception_t::get_offset_of__stackTrace_6(),
	Exception_t::get_offset_of__stackTraceString_7(),
	Exception_t::get_offset_of__remoteStackTraceString_8(),
	Exception_t::get_offset_of__remoteStackIndex_9(),
	Exception_t::get_offset_of__dynamicMethods_10(),
	Exception_t::get_offset_of__HResult_11(),
	Exception_t::get_offset_of__source_12(),
	Exception_t::get_offset_of__safeSerializationManager_13(),
	Exception_t::get_offset_of_captured_traces_14(),
	Exception_t::get_offset_of_native_trace_ips_15(),
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize202 = { sizeof (ExceptionMessageKind_t312672609)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable202[4] = 
{
	ExceptionMessageKind_t312672609::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize203 = { sizeof (ExecutionEngineException_t1142598034), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize204 = { sizeof (FieldAccessException_t238379456), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize205 = { sizeof (FlagsAttribute_t2262502849), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize206 = { sizeof (FormatException_t154580423), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize207 = { sizeof (GC_t959872083), -1, sizeof(GC_t959872083_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable207[1] = 
{
	GC_t959872083_StaticFields::get_offset_of_EPHEMERON_TOMBSTONE_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize208 = { sizeof (DateTimeFormat_t4286173316), -1, sizeof(DateTimeFormat_t4286173316_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable208[3] = 
{
	DateTimeFormat_t4286173316_StaticFields::get_offset_of_NullOffset_0(),
	DateTimeFormat_t4286173316_StaticFields::get_offset_of_allStandardFormats_1(),
	DateTimeFormat_t4286173316_StaticFields::get_offset_of_fixedNumberFormats_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize209 = { sizeof (DateTimeParse_t715850018), -1, sizeof(DateTimeParse_t715850018_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable209[2] = 
{
	DateTimeParse_t715850018_StaticFields::get_offset_of_m_hebrewNumberParser_0(),
	DateTimeParse_t715850018_StaticFields::get_offset_of_dateParsingStates_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize210 = { sizeof (MatchNumberDelegate_t272938340), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize211 = { sizeof (DTT_t3179813875)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable211[22] = 
{
	DTT_t3179813875::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize212 = { sizeof (TM_t3750251568)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable212[4] = 
{
	TM_t3750251568::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize213 = { sizeof (DS_t2232270370)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable213[40] = 
{
	DS_t2232270370::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize214 = { sizeof (__DTString_t2014593278)+ sizeof (RuntimeObject), -1, sizeof(__DTString_t2014593278_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable214[7] = 
{
	__DTString_t2014593278::get_offset_of_Value_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	__DTString_t2014593278::get_offset_of_Index_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	__DTString_t2014593278::get_offset_of_len_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	__DTString_t2014593278::get_offset_of_m_current_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	__DTString_t2014593278::get_offset_of_m_info_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
	__DTString_t2014593278::get_offset_of_m_checkDigitToken_5() + static_cast<int32_t>(sizeof(RuntimeObject)),
	__DTString_t2014593278_StaticFields::get_offset_of_WhiteSpaceChecks_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize215 = { sizeof (DTSubStringType_t2997180936)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable215[6] = 
{
	DTSubStringType_t2997180936::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize216 = { sizeof (DTSubString_t967826655)+ sizeof (RuntimeObject), sizeof(DTSubString_t967826655_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable216[5] = 
{
	DTSubString_t967826655::get_offset_of_s_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	DTSubString_t967826655::get_offset_of_index_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	DTSubString_t967826655::get_offset_of_length_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	DTSubString_t967826655::get_offset_of_type_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	DTSubString_t967826655::get_offset_of_value_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize217 = { sizeof (DateTimeToken_t1473016582)+ sizeof (RuntimeObject), sizeof(DateTimeToken_t1473016582 ), 0, 0 };
extern const int32_t g_FieldOffsetTable217[3] = 
{
	DateTimeToken_t1473016582::get_offset_of_dtt_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	DateTimeToken_t1473016582::get_offset_of_suffix_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	DateTimeToken_t1473016582::get_offset_of_num_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize218 = { sizeof (DateTimeRawInfo_t1172279960)+ sizeof (RuntimeObject), sizeof(DateTimeRawInfo_t1172279960_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable218[10] = 
{
	DateTimeRawInfo_t1172279960::get_offset_of_num_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	DateTimeRawInfo_t1172279960::get_offset_of_numCount_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	DateTimeRawInfo_t1172279960::get_offset_of_month_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	DateTimeRawInfo_t1172279960::get_offset_of_year_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	DateTimeRawInfo_t1172279960::get_offset_of_dayOfWeek_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
	DateTimeRawInfo_t1172279960::get_offset_of_era_5() + static_cast<int32_t>(sizeof(RuntimeObject)),
	DateTimeRawInfo_t1172279960::get_offset_of_timeMark_6() + static_cast<int32_t>(sizeof(RuntimeObject)),
	DateTimeRawInfo_t1172279960::get_offset_of_fraction_7() + static_cast<int32_t>(sizeof(RuntimeObject)),
	DateTimeRawInfo_t1172279960::get_offset_of_hasSameDateAndTimeSeparators_8() + static_cast<int32_t>(sizeof(RuntimeObject)),
	DateTimeRawInfo_t1172279960::get_offset_of_timeZone_9() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize219 = { sizeof (ParseFailureKind_t3807567368)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable219[6] = 
{
	ParseFailureKind_t3807567368::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize220 = { sizeof (ParseFlags_t3686506164)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable220[16] = 
{
	ParseFlags_t3686506164::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize221 = { sizeof (DateTimeResult_t2747711438)+ sizeof (RuntimeObject), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable221[16] = 
{
	DateTimeResult_t2747711438::get_offset_of_Year_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	DateTimeResult_t2747711438::get_offset_of_Month_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	DateTimeResult_t2747711438::get_offset_of_Day_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	DateTimeResult_t2747711438::get_offset_of_Hour_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	DateTimeResult_t2747711438::get_offset_of_Minute_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
	DateTimeResult_t2747711438::get_offset_of_Second_5() + static_cast<int32_t>(sizeof(RuntimeObject)),
	DateTimeResult_t2747711438::get_offset_of_fraction_6() + static_cast<int32_t>(sizeof(RuntimeObject)),
	DateTimeResult_t2747711438::get_offset_of_era_7() + static_cast<int32_t>(sizeof(RuntimeObject)),
	DateTimeResult_t2747711438::get_offset_of_flags_8() + static_cast<int32_t>(sizeof(RuntimeObject)),
	DateTimeResult_t2747711438::get_offset_of_timeZoneOffset_9() + static_cast<int32_t>(sizeof(RuntimeObject)),
	DateTimeResult_t2747711438::get_offset_of_calendar_10() + static_cast<int32_t>(sizeof(RuntimeObject)),
	DateTimeResult_t2747711438::get_offset_of_parsedDate_11() + static_cast<int32_t>(sizeof(RuntimeObject)),
	DateTimeResult_t2747711438::get_offset_of_failure_12() + static_cast<int32_t>(sizeof(RuntimeObject)),
	DateTimeResult_t2747711438::get_offset_of_failureMessageID_13() + static_cast<int32_t>(sizeof(RuntimeObject)),
	DateTimeResult_t2747711438::get_offset_of_failureMessageFormatArgument_14() + static_cast<int32_t>(sizeof(RuntimeObject)),
	DateTimeResult_t2747711438::get_offset_of_failureArgumentName_15() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize222 = { sizeof (ParsingInfo_t1001632991)+ sizeof (RuntimeObject), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable222[9] = 
{
	ParsingInfo_t1001632991::get_offset_of_calendar_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ParsingInfo_t1001632991::get_offset_of_dayOfWeek_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ParsingInfo_t1001632991::get_offset_of_timeMark_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ParsingInfo_t1001632991::get_offset_of_fUseHour12_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ParsingInfo_t1001632991::get_offset_of_fUseTwoDigitYear_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ParsingInfo_t1001632991::get_offset_of_fAllowInnerWhite_5() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ParsingInfo_t1001632991::get_offset_of_fAllowTrailingWhite_6() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ParsingInfo_t1001632991::get_offset_of_fCustomNumberParser_7() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ParsingInfo_t1001632991::get_offset_of_parseNumberDelegate_8() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize223 = { sizeof (TokenType_t216849757)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable223[33] = 
{
	TokenType_t216849757::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize224 = { sizeof (Guid_t)+ sizeof (RuntimeObject), sizeof(Guid_t ), sizeof(Guid_t_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable224[15] = 
{
	Guid_t_StaticFields::get_offset_of_Empty_0(),
	Guid_t::get_offset_of__a_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Guid_t::get_offset_of__b_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Guid_t::get_offset_of__c_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Guid_t::get_offset_of__d_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Guid_t::get_offset_of__e_5() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Guid_t::get_offset_of__f_6() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Guid_t::get_offset_of__g_7() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Guid_t::get_offset_of__h_8() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Guid_t::get_offset_of__i_9() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Guid_t::get_offset_of__j_10() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Guid_t::get_offset_of__k_11() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Guid_t_StaticFields::get_offset_of__rngAccess_12(),
	Guid_t_StaticFields::get_offset_of__rng_13(),
	Guid_t_StaticFields::get_offset_of__fastRng_14(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize225 = { sizeof (GuidStyles_t3169508594)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable225[16] = 
{
	GuidStyles_t3169508594::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize226 = { sizeof (GuidParseThrowStyle_t3123097615)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable226[4] = 
{
	GuidParseThrowStyle_t3123097615::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize227 = { sizeof (ParseFailureKind_t2638710854)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable227[7] = 
{
	ParseFailureKind_t2638710854::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize228 = { sizeof (GuidResult_t1584437374)+ sizeof (RuntimeObject), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable228[7] = 
{
	GuidResult_t1584437374::get_offset_of_parsedGuid_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	GuidResult_t1584437374::get_offset_of_throwStyle_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	GuidResult_t1584437374::get_offset_of_m_failure_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	GuidResult_t1584437374::get_offset_of_m_failureMessageID_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	GuidResult_t1584437374::get_offset_of_m_failureMessageFormatArgument_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
	GuidResult_t1584437374::get_offset_of_m_failureArgumentName_5() + static_cast<int32_t>(sizeof(RuntimeObject)),
	GuidResult_t1584437374::get_offset_of_m_innerException_6() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize229 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize230 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize231 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize232 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize233 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize234 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize235 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize236 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize237 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize238 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize239 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize240 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize241 = { sizeof (IndexOutOfRangeException_t1578797820), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize242 = { sizeof (Int16_t2552820387)+ sizeof (RuntimeObject), sizeof(int16_t), 0, 0 };
extern const int32_t g_FieldOffsetTable242[3] = 
{
	Int16_t2552820387::get_offset_of_m_value_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize243 = { sizeof (Int32_t2950945753)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable243[3] = 
{
	Int32_t2950945753::get_offset_of_m_value_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize244 = { sizeof (Int64_t3736567304)+ sizeof (RuntimeObject), sizeof(int64_t), 0, 0 };
extern const int32_t g_FieldOffsetTable244[3] = 
{
	Int64_t3736567304::get_offset_of_m_value_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize245 = { sizeof (InvalidCastException_t3927145244), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize246 = { sizeof (InvalidOperationException_t56020091), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize247 = { sizeof (InvalidProgramException_t3836716986), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize248 = { sizeof (InvalidTimeZoneException_t4066718130), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize249 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize250 = { sizeof (Math_t1671470975), -1, sizeof(Math_t1671470975_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable250[5] = 
{
	Math_t1671470975_StaticFields::get_offset_of_doubleRoundLimit_0(),
	0,
	Math_t1671470975_StaticFields::get_offset_of_roundPower10Double_2(),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize251 = { sizeof (MemberAccessException_t1734467078), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize252 = { sizeof (MethodAccessException_t190175859), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize253 = { sizeof (MissingFieldException_t1989070983), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize254 = { sizeof (MissingMemberException_t1385081665), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable254[3] = 
{
	MissingMemberException_t1385081665::get_offset_of_ClassName_17(),
	MissingMemberException_t1385081665::get_offset_of_MemberName_18(),
	MissingMemberException_t1385081665::get_offset_of_Signature_19(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize255 = { sizeof (MissingMethodException_t1274661534), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable255[1] = 
{
	MissingMethodException_t1274661534::get_offset_of_signature_20(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize256 = { sizeof (MulticastNotSupportedException_t3095221246), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize257 = { sizeof (NonSerializedAttribute_t2945079482), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize258 = { sizeof (NotFiniteNumberException_t4049580392), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable258[1] = 
{
	NotFiniteNumberException_t4049580392::get_offset_of__offendingNumber_17(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize259 = { sizeof (NotImplementedException_t3489357830), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize260 = { sizeof (NotSupportedException_t1314879016), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize261 = { sizeof (NullReferenceException_t1023182353), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize262 = { sizeof (Number_t1718410752), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize263 = { sizeof (NumberBuffer_t2021063877)+ sizeof (RuntimeObject), sizeof(NumberBuffer_t2021063877_marshaled_pinvoke), sizeof(NumberBuffer_t2021063877_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable263[6] = 
{
	NumberBuffer_t2021063877_StaticFields::get_offset_of_NumberBufferBytes_0(),
	NumberBuffer_t2021063877::get_offset_of_baseAddress_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	NumberBuffer_t2021063877::get_offset_of_digits_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	NumberBuffer_t2021063877::get_offset_of_precision_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	NumberBuffer_t2021063877::get_offset_of_scale_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
	NumberBuffer_t2021063877::get_offset_of_sign_5() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize264 = { sizeof (ObjectDisposedException_t21392786), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable264[1] = 
{
	ObjectDisposedException_t21392786::get_offset_of_objectName_17(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize265 = { sizeof (ObsoleteAttribute_t303876359), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable265[2] = 
{
	ObsoleteAttribute_t303876359::get_offset_of__message_0(),
	ObsoleteAttribute_t303876359::get_offset_of__error_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize266 = { sizeof (OperationCanceledException_t926488448), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable266[1] = 
{
	OperationCanceledException_t926488448::get_offset_of__cancellationToken_17(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize267 = { sizeof (OutOfMemoryException_t2437671686), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize268 = { sizeof (OverflowException_t2020128637), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize269 = { sizeof (ParamArrayAttribute_t3664765590), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize270 = { sizeof (ParamsArray_t4224664136)+ sizeof (RuntimeObject), -1, sizeof(ParamsArray_t4224664136_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable270[7] = 
{
	ParamsArray_t4224664136_StaticFields::get_offset_of_oneArgArray_0(),
	ParamsArray_t4224664136_StaticFields::get_offset_of_twoArgArray_1(),
	ParamsArray_t4224664136_StaticFields::get_offset_of_threeArgArray_2(),
	ParamsArray_t4224664136::get_offset_of_arg0_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ParamsArray_t4224664136::get_offset_of_arg1_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ParamsArray_t4224664136::get_offset_of_arg2_5() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ParamsArray_t4224664136::get_offset_of_args_6() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize271 = { sizeof (PlatformNotSupportedException_t3572244504), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize272 = { sizeof (Random_t108471755), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable272[3] = 
{
	Random_t108471755::get_offset_of_inext_0(),
	Random_t108471755::get_offset_of_inextp_1(),
	Random_t108471755::get_offset_of_SeedArray_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize273 = { sizeof (RankException_t3812021567), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize274 = { sizeof (TypeNameFormatFlags_t1563831851)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable274[11] = 
{
	TypeNameFormatFlags_t1563831851::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize275 = { sizeof (TypeNameKind_t4058497967)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable275[5] = 
{
	TypeNameKind_t4058497967::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize276 = { sizeof (RuntimeType_t3636489352), -1, sizeof(RuntimeType_t3636489352_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable276[21] = 
{
	RuntimeType_t3636489352_StaticFields::get_offset_of_ValueType_10(),
	RuntimeType_t3636489352_StaticFields::get_offset_of_EnumType_11(),
	RuntimeType_t3636489352_StaticFields::get_offset_of_ObjectType_12(),
	RuntimeType_t3636489352_StaticFields::get_offset_of_StringType_13(),
	RuntimeType_t3636489352_StaticFields::get_offset_of_DelegateType_14(),
	RuntimeType_t3636489352_StaticFields::get_offset_of_s_SICtorParamTypes_15(),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	RuntimeType_t3636489352_StaticFields::get_offset_of_s_typedRef_25(),
	RuntimeType_t3636489352::get_offset_of_type_info_26(),
	RuntimeType_t3636489352::get_offset_of_GenericCache_27(),
	RuntimeType_t3636489352::get_offset_of_m_serializationCtor_28(),
	RuntimeType_t3636489352_StaticFields::get_offset_of_clsid_types_29(),
	RuntimeType_t3636489352_StaticFields::get_offset_of_clsid_assemblybuilder_30(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize277 = { sizeof (MemberListType_t1519024423)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable277[5] = 
{
	MemberListType_t1519024423::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize278 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable278[4] = 
{
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize279 = { sizeof (ReflectionOnlyType_t351397180), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize280 = { sizeof (SByte_t1669577662)+ sizeof (RuntimeObject), sizeof(int8_t), 0, 0 };
extern const int32_t g_FieldOffsetTable280[3] = 
{
	SByte_t1669577662::get_offset_of_m_value_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize281 = { sizeof (SerializableAttribute_t1992588303), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize282 = { sizeof (SharedStatics_t285331669), -1, sizeof(SharedStatics_t285331669_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable282[2] = 
{
	SharedStatics_t285331669_StaticFields::get_offset_of__sharedStatics_0(),
	SharedStatics_t285331669::get_offset_of__maker_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize283 = { sizeof (Single_t1397266774)+ sizeof (RuntimeObject), sizeof(float), 0, 0 };
extern const int32_t g_FieldOffsetTable283[7] = 
{
	Single_t1397266774::get_offset_of_m_value_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize284 = { sizeof (StackOverflowException_t3629451388), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize285 = { sizeof (String_t), sizeof(char*), sizeof(String_t_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable285[8] = 
{
	String_t::get_offset_of_m_stringLength_0(),
	String_t::get_offset_of_m_firstChar_1(),
	0,
	0,
	0,
	String_t_StaticFields::get_offset_of_Empty_5(),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize286 = { sizeof (StringSplitOptions_t641086070)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable286[3] = 
{
	StringSplitOptions_t641086070::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize287 = { sizeof (StringComparer_t3301955079), -1, sizeof(StringComparer_t3301955079_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable287[4] = 
{
	StringComparer_t3301955079_StaticFields::get_offset_of__invariantCulture_0(),
	StringComparer_t3301955079_StaticFields::get_offset_of__invariantCultureIgnoreCase_1(),
	StringComparer_t3301955079_StaticFields::get_offset_of__ordinal_2(),
	StringComparer_t3301955079_StaticFields::get_offset_of__ordinalIgnoreCase_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize288 = { sizeof (CultureAwareComparer_t30646139), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable288[3] = 
{
	CultureAwareComparer_t30646139::get_offset_of__compareInfo_4(),
	CultureAwareComparer_t30646139::get_offset_of__ignoreCase_5(),
	CultureAwareComparer_t30646139::get_offset_of__options_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize289 = { sizeof (OrdinalComparer_t3407243298), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable289[1] = 
{
	OrdinalComparer_t3407243298::get_offset_of__ignoreCase_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize290 = { sizeof (SystemException_t176217640), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize291 = { sizeof (STAThreadAttribute_t2720218673), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize292 = { sizeof (ThreadStaticAttribute_t3840787420), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize293 = { sizeof (ExceptionArgument_t2411851266)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable293[29] = 
{
	ExceptionArgument_t2411851266::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize294 = { sizeof (ExceptionResource_t2631664984)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable294[47] = 
{
	ExceptionResource_t2631664984::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize295 = { sizeof (TimeoutException_t407538241), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize296 = { sizeof (TimeSpan_t881159249)+ sizeof (RuntimeObject), sizeof(TimeSpan_t881159249 ), sizeof(TimeSpan_t881159249_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable296[6] = 
{
	TimeSpan_t881159249_StaticFields::get_offset_of_Zero_0(),
	TimeSpan_t881159249_StaticFields::get_offset_of_MaxValue_1(),
	TimeSpan_t881159249_StaticFields::get_offset_of_MinValue_2(),
	TimeSpan_t881159249::get_offset_of__ticks_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	TimeSpan_t881159249_StaticFields::get_offset_of__legacyConfigChecked_4(),
	TimeSpan_t881159249_StaticFields::get_offset_of__legacyMode_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize297 = { sizeof (TimeZoneInfoOptions_t3189697361)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable297[3] = 
{
	TimeZoneInfoOptions_t3189697361::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize298 = { sizeof (TimeZoneInfo_t161405854), -1, sizeof(TimeZoneInfo_t161405854_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable298[15] = 
{
	TimeZoneInfo_t161405854::get_offset_of_baseUtcOffset_0(),
	TimeZoneInfo_t161405854::get_offset_of_daylightDisplayName_1(),
	TimeZoneInfo_t161405854::get_offset_of_displayName_2(),
	TimeZoneInfo_t161405854::get_offset_of_id_3(),
	TimeZoneInfo_t161405854_StaticFields::get_offset_of_local_4(),
	TimeZoneInfo_t161405854::get_offset_of_transitions_5(),
	TimeZoneInfo_t161405854_StaticFields::get_offset_of_readlinkNotFound_6(),
	TimeZoneInfo_t161405854::get_offset_of_standardDisplayName_7(),
	TimeZoneInfo_t161405854::get_offset_of_supportsDaylightSavingTime_8(),
	TimeZoneInfo_t161405854_StaticFields::get_offset_of_utc_9(),
	TimeZoneInfo_t161405854_StaticFields::get_offset_of_timeZoneDirectory_10(),
	TimeZoneInfo_t161405854::get_offset_of_adjustmentRules_11(),
	TimeZoneInfo_t161405854_StaticFields::get_offset_of_timeZoneKey_12(),
	TimeZoneInfo_t161405854_StaticFields::get_offset_of_localZoneKey_13(),
	TimeZoneInfo_t161405854_StaticFields::get_offset_of_systemTimeZones_14(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize299 = { sizeof (AdjustmentRule_t74449909), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable299[6] = 
{
	AdjustmentRule_t74449909::get_offset_of_m_dateStart_0(),
	AdjustmentRule_t74449909::get_offset_of_m_dateEnd_1(),
	AdjustmentRule_t74449909::get_offset_of_m_daylightDelta_2(),
	AdjustmentRule_t74449909::get_offset_of_m_daylightTransitionStart_3(),
	AdjustmentRule_t74449909::get_offset_of_m_daylightTransitionEnd_4(),
	AdjustmentRule_t74449909::get_offset_of_m_baseUtcOffsetDelta_5(),
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // Modified by PostBuild.cs
