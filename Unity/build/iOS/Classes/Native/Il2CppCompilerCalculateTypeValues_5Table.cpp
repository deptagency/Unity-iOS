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


// Mono.Security.StrongName
struct StrongName_t4093849377;
// System.AsyncCallback
struct AsyncCallback_t3962456242;
// System.Boolean[]
struct BooleanU5BU5D_t2897418192;
// System.Byte[]
struct ByteU5BU5D_t4116647657;
// System.Char[]
struct CharU5BU5D_t3528271667;
// System.Collections.ArrayList
struct ArrayList_t2718874744;
// System.Collections.Generic.IList`1<System.Reflection.CustomAttributeNamedArgument>
struct IList_1_t2103185493;
// System.Collections.Generic.IList`1<System.Reflection.CustomAttributeTypedArgument>
struct IList_1_t243502644;
// System.Collections.IDictionary
struct IDictionary_t1363984059;
// System.Delegate
struct Delegate_t1188392813;
// System.DelegateData
struct DelegateData_t1677132599;
// System.Delegate[]
struct DelegateU5BU5D_t1703627840;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t1169129676;
// System.Exception[]
struct ExceptionU5BU5D_t2535001212;
// System.Globalization.CultureInfo
struct CultureInfo_t4157843068;
// System.IAsyncResult
struct IAsyncResult_t767004451;
// System.IO.Stream
struct Stream_t1273022909;
// System.IntPtr[]
struct IntPtrU5BU5D_t4013366056;
// System.Object[]
struct ObjectU5BU5D_t2843939325;
// System.Reflection.Assembly
struct Assembly_t;
// System.Reflection.Assembly/ResolveEventHolder
struct ResolveEventHolder_t2120639521;
// System.Reflection.Binder
struct Binder_t2999457153;
// System.Reflection.ConstructorInfo
struct ConstructorInfo_t5769829;
// System.Reflection.CustomAttributeData/LazyCAttrData
struct LazyCAttrData_t3989247807;
// System.Reflection.Emit.CustomAttributeBuilder[]
struct CustomAttributeBuilderU5BU5D_t2951373564;
// System.Reflection.Emit.DynamicILInfo
struct DynamicILInfo_t2059132200;
// System.Reflection.Emit.ILGenerator
struct ILGenerator_t1388622344;
// System.Reflection.Emit.ModuleBuilder
struct ModuleBuilder_t731887691;
// System.Reflection.Emit.ModuleBuilder[]
struct ModuleBuilderU5BU5D_t2441092650;
// System.Reflection.Emit.MonoResource[]
struct MonoResourceU5BU5D_t979189380;
// System.Reflection.Emit.MonoWin32Resource[]
struct MonoWin32ResourceU5BU5D_t4084032906;
// System.Reflection.Emit.ParameterBuilder[]
struct ParameterBuilderU5BU5D_t3054868058;
// System.Reflection.Emit.RefEmitPermissionSet[]
struct RefEmitPermissionSetU5BU5D_t567451178;
// System.Reflection.Emit.TypeBuilder
struct TypeBuilder_t1073948154;
// System.Reflection.Emit.TypeBuilderInstantiation
struct TypeBuilderInstantiation_t1969526298;
// System.Reflection.EventInfo/AddEventAdapter
struct AddEventAdapter_t1787725097;
// System.Reflection.ExceptionHandlingClause[]
struct ExceptionHandlingClauseU5BU5D_t280209828;
// System.Reflection.FieldInfo[]
struct FieldInfoU5BU5D_t846150980;
// System.Reflection.LocalVariableInfo[]
struct LocalVariableInfoU5BU5D_t2827056530;
// System.Reflection.MemberFilter
struct MemberFilter_t426314064;
// System.Reflection.MemberInfo
struct MemberInfo_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Reflection.MethodInfo[]
struct MethodInfoU5BU5D_t2572182361;
// System.Reflection.Module
struct Module_t2987026101;
// System.Reflection.Module[]
struct ModuleU5BU5D_t4238763736;
// System.Reflection.MonoMethod
struct MonoMethod_t;
// System.Reflection.MonoProperty/GetterAdapter
struct GetterAdapter_t2155025054;
// System.Reflection.PropertyInfo[]
struct PropertyInfoU5BU5D_t1461822886;
// System.Reflection.StrongNameKeyPair
struct StrongNameKeyPair_t3411219591;
// System.Reflection.TypeFilter
struct TypeFilter_t2356120900;
// System.Resources.Win32VersionResource
struct Win32VersionResource_t1367628464;
// System.Runtime.InteropServices.MarshalAsAttribute
struct MarshalAsAttribute_t3522571978;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_t2481557153;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t950877179;
// System.RuntimeType
struct RuntimeType_t3636489352;
// System.Security.Cryptography.RSA
struct RSA_t2385438082;
// System.Security.PermissionSet
struct PermissionSet_t223948603;
// System.Security.Policy.Evidence
struct Evidence_t2008144148;
// System.String
struct String_t;
// System.Type
struct Type_t;
// System.Type[]
struct TypeU5BU5D_t3940880105;
// System.Type[][]
struct TypeU5BU5DU5BU5D_t4042077012;
// System.Version
struct Version_t3456873960;
// System.Void
struct Void_t1185182177;

struct Assembly_t_marshaled_com;
struct Assembly_t_marshaled_pinvoke;
struct CultureInfo_t4157843068_marshaled_com;
struct CultureInfo_t4157843068_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct ModuleBuilder_t731887691_marshaled_com;
struct ModuleBuilder_t731887691_marshaled_pinvoke;
struct MonoResource_t4103430009_marshaled_com;
struct MonoResource_t4103430009_marshaled_pinvoke;
struct MonoWin32Resource_t1904229483_marshaled_com;
struct MonoWin32Resource_t1904229483_marshaled_pinvoke;
struct RefEmitPermissionSet_t484390987_marshaled_com;
struct RefEmitPermissionSet_t484390987_marshaled_pinvoke;



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
#ifndef RESOLVEEVENTHOLDER_T2120639521_H
#define RESOLVEEVENTHOLDER_T2120639521_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.Assembly/ResolveEventHolder
struct  ResolveEventHolder_t2120639521  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESOLVEEVENTHOLDER_T2120639521_H
#ifndef BINDER_T2999457153_H
#define BINDER_T2999457153_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.Binder
struct  Binder_t2999457153  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BINDER_T2999457153_H
#ifndef CUSTOMATTRIBUTEDATA_T1084486650_H
#define CUSTOMATTRIBUTEDATA_T1084486650_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.CustomAttributeData
struct  CustomAttributeData_t1084486650  : public RuntimeObject
{
public:
	// System.Reflection.ConstructorInfo System.Reflection.CustomAttributeData::ctorInfo
	ConstructorInfo_t5769829 * ___ctorInfo_0;
	// System.Collections.Generic.IList`1<System.Reflection.CustomAttributeTypedArgument> System.Reflection.CustomAttributeData::ctorArgs
	RuntimeObject* ___ctorArgs_1;
	// System.Collections.Generic.IList`1<System.Reflection.CustomAttributeNamedArgument> System.Reflection.CustomAttributeData::namedArgs
	RuntimeObject* ___namedArgs_2;
	// System.Reflection.CustomAttributeData/LazyCAttrData System.Reflection.CustomAttributeData::lazyData
	LazyCAttrData_t3989247807 * ___lazyData_3;

public:
	inline static int32_t get_offset_of_ctorInfo_0() { return static_cast<int32_t>(offsetof(CustomAttributeData_t1084486650, ___ctorInfo_0)); }
	inline ConstructorInfo_t5769829 * get_ctorInfo_0() const { return ___ctorInfo_0; }
	inline ConstructorInfo_t5769829 ** get_address_of_ctorInfo_0() { return &___ctorInfo_0; }
	inline void set_ctorInfo_0(ConstructorInfo_t5769829 * value)
	{
		___ctorInfo_0 = value;
		Il2CppCodeGenWriteBarrier((&___ctorInfo_0), value);
	}

	inline static int32_t get_offset_of_ctorArgs_1() { return static_cast<int32_t>(offsetof(CustomAttributeData_t1084486650, ___ctorArgs_1)); }
	inline RuntimeObject* get_ctorArgs_1() const { return ___ctorArgs_1; }
	inline RuntimeObject** get_address_of_ctorArgs_1() { return &___ctorArgs_1; }
	inline void set_ctorArgs_1(RuntimeObject* value)
	{
		___ctorArgs_1 = value;
		Il2CppCodeGenWriteBarrier((&___ctorArgs_1), value);
	}

	inline static int32_t get_offset_of_namedArgs_2() { return static_cast<int32_t>(offsetof(CustomAttributeData_t1084486650, ___namedArgs_2)); }
	inline RuntimeObject* get_namedArgs_2() const { return ___namedArgs_2; }
	inline RuntimeObject** get_address_of_namedArgs_2() { return &___namedArgs_2; }
	inline void set_namedArgs_2(RuntimeObject* value)
	{
		___namedArgs_2 = value;
		Il2CppCodeGenWriteBarrier((&___namedArgs_2), value);
	}

	inline static int32_t get_offset_of_lazyData_3() { return static_cast<int32_t>(offsetof(CustomAttributeData_t1084486650, ___lazyData_3)); }
	inline LazyCAttrData_t3989247807 * get_lazyData_3() const { return ___lazyData_3; }
	inline LazyCAttrData_t3989247807 ** get_address_of_lazyData_3() { return &___lazyData_3; }
	inline void set_lazyData_3(LazyCAttrData_t3989247807 * value)
	{
		___lazyData_3 = value;
		Il2CppCodeGenWriteBarrier((&___lazyData_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CUSTOMATTRIBUTEDATA_T1084486650_H
#ifndef CUSTOMATTRIBUTEBUILDER_T2781637217_H
#define CUSTOMATTRIBUTEBUILDER_T2781637217_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.Emit.CustomAttributeBuilder
struct  CustomAttributeBuilder_t2781637217  : public RuntimeObject
{
public:
	// System.Reflection.ConstructorInfo System.Reflection.Emit.CustomAttributeBuilder::ctor
	ConstructorInfo_t5769829 * ___ctor_0;
	// System.Byte[] System.Reflection.Emit.CustomAttributeBuilder::data
	ByteU5BU5D_t4116647657* ___data_1;
	// System.Object[] System.Reflection.Emit.CustomAttributeBuilder::args
	ObjectU5BU5D_t2843939325* ___args_2;
	// System.Reflection.PropertyInfo[] System.Reflection.Emit.CustomAttributeBuilder::namedProperties
	PropertyInfoU5BU5D_t1461822886* ___namedProperties_3;
	// System.Object[] System.Reflection.Emit.CustomAttributeBuilder::propertyValues
	ObjectU5BU5D_t2843939325* ___propertyValues_4;
	// System.Reflection.FieldInfo[] System.Reflection.Emit.CustomAttributeBuilder::namedFields
	FieldInfoU5BU5D_t846150980* ___namedFields_5;
	// System.Object[] System.Reflection.Emit.CustomAttributeBuilder::fieldValues
	ObjectU5BU5D_t2843939325* ___fieldValues_6;

public:
	inline static int32_t get_offset_of_ctor_0() { return static_cast<int32_t>(offsetof(CustomAttributeBuilder_t2781637217, ___ctor_0)); }
	inline ConstructorInfo_t5769829 * get_ctor_0() const { return ___ctor_0; }
	inline ConstructorInfo_t5769829 ** get_address_of_ctor_0() { return &___ctor_0; }
	inline void set_ctor_0(ConstructorInfo_t5769829 * value)
	{
		___ctor_0 = value;
		Il2CppCodeGenWriteBarrier((&___ctor_0), value);
	}

	inline static int32_t get_offset_of_data_1() { return static_cast<int32_t>(offsetof(CustomAttributeBuilder_t2781637217, ___data_1)); }
	inline ByteU5BU5D_t4116647657* get_data_1() const { return ___data_1; }
	inline ByteU5BU5D_t4116647657** get_address_of_data_1() { return &___data_1; }
	inline void set_data_1(ByteU5BU5D_t4116647657* value)
	{
		___data_1 = value;
		Il2CppCodeGenWriteBarrier((&___data_1), value);
	}

	inline static int32_t get_offset_of_args_2() { return static_cast<int32_t>(offsetof(CustomAttributeBuilder_t2781637217, ___args_2)); }
	inline ObjectU5BU5D_t2843939325* get_args_2() const { return ___args_2; }
	inline ObjectU5BU5D_t2843939325** get_address_of_args_2() { return &___args_2; }
	inline void set_args_2(ObjectU5BU5D_t2843939325* value)
	{
		___args_2 = value;
		Il2CppCodeGenWriteBarrier((&___args_2), value);
	}

	inline static int32_t get_offset_of_namedProperties_3() { return static_cast<int32_t>(offsetof(CustomAttributeBuilder_t2781637217, ___namedProperties_3)); }
	inline PropertyInfoU5BU5D_t1461822886* get_namedProperties_3() const { return ___namedProperties_3; }
	inline PropertyInfoU5BU5D_t1461822886** get_address_of_namedProperties_3() { return &___namedProperties_3; }
	inline void set_namedProperties_3(PropertyInfoU5BU5D_t1461822886* value)
	{
		___namedProperties_3 = value;
		Il2CppCodeGenWriteBarrier((&___namedProperties_3), value);
	}

	inline static int32_t get_offset_of_propertyValues_4() { return static_cast<int32_t>(offsetof(CustomAttributeBuilder_t2781637217, ___propertyValues_4)); }
	inline ObjectU5BU5D_t2843939325* get_propertyValues_4() const { return ___propertyValues_4; }
	inline ObjectU5BU5D_t2843939325** get_address_of_propertyValues_4() { return &___propertyValues_4; }
	inline void set_propertyValues_4(ObjectU5BU5D_t2843939325* value)
	{
		___propertyValues_4 = value;
		Il2CppCodeGenWriteBarrier((&___propertyValues_4), value);
	}

	inline static int32_t get_offset_of_namedFields_5() { return static_cast<int32_t>(offsetof(CustomAttributeBuilder_t2781637217, ___namedFields_5)); }
	inline FieldInfoU5BU5D_t846150980* get_namedFields_5() const { return ___namedFields_5; }
	inline FieldInfoU5BU5D_t846150980** get_address_of_namedFields_5() { return &___namedFields_5; }
	inline void set_namedFields_5(FieldInfoU5BU5D_t846150980* value)
	{
		___namedFields_5 = value;
		Il2CppCodeGenWriteBarrier((&___namedFields_5), value);
	}

	inline static int32_t get_offset_of_fieldValues_6() { return static_cast<int32_t>(offsetof(CustomAttributeBuilder_t2781637217, ___fieldValues_6)); }
	inline ObjectU5BU5D_t2843939325* get_fieldValues_6() const { return ___fieldValues_6; }
	inline ObjectU5BU5D_t2843939325** get_address_of_fieldValues_6() { return &___fieldValues_6; }
	inline void set_fieldValues_6(ObjectU5BU5D_t2843939325* value)
	{
		___fieldValues_6 = value;
		Il2CppCodeGenWriteBarrier((&___fieldValues_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Reflection.Emit.CustomAttributeBuilder
struct CustomAttributeBuilder_t2781637217_marshaled_pinvoke
{
	ConstructorInfo_t5769829 * ___ctor_0;
	uint8_t* ___data_1;
	ObjectU5BU5D_t2843939325* ___args_2;
	PropertyInfoU5BU5D_t1461822886* ___namedProperties_3;
	ObjectU5BU5D_t2843939325* ___propertyValues_4;
	FieldInfoU5BU5D_t846150980* ___namedFields_5;
	ObjectU5BU5D_t2843939325* ___fieldValues_6;
};
// Native definition for COM marshalling of System.Reflection.Emit.CustomAttributeBuilder
struct CustomAttributeBuilder_t2781637217_marshaled_com
{
	ConstructorInfo_t5769829 * ___ctor_0;
	uint8_t* ___data_1;
	ObjectU5BU5D_t2843939325* ___args_2;
	PropertyInfoU5BU5D_t1461822886* ___namedProperties_3;
	ObjectU5BU5D_t2843939325* ___propertyValues_4;
	FieldInfoU5BU5D_t846150980* ___namedFields_5;
	ObjectU5BU5D_t2843939325* ___fieldValues_6;
};
#endif // CUSTOMATTRIBUTEBUILDER_T2781637217_H
#ifndef DYNAMICILINFO_T2059132200_H
#define DYNAMICILINFO_T2059132200_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.Emit.DynamicILInfo
struct  DynamicILInfo_t2059132200  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DYNAMICILINFO_T2059132200_H
#ifndef INTROSPECTIONEXTENSIONS_T4219782190_H
#define INTROSPECTIONEXTENSIONS_T4219782190_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.IntrospectionExtensions
struct  IntrospectionExtensions_t4219782190  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTROSPECTIONEXTENSIONS_T4219782190_H
#ifndef LOCALVARIABLEINFO_T2426779395_H
#define LOCALVARIABLEINFO_T2426779395_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.LocalVariableInfo
struct  LocalVariableInfo_t2426779395  : public RuntimeObject
{
public:
	// System.Type System.Reflection.LocalVariableInfo::type
	Type_t * ___type_0;
	// System.Boolean System.Reflection.LocalVariableInfo::is_pinned
	bool ___is_pinned_1;
	// System.UInt16 System.Reflection.LocalVariableInfo::position
	uint16_t ___position_2;

public:
	inline static int32_t get_offset_of_type_0() { return static_cast<int32_t>(offsetof(LocalVariableInfo_t2426779395, ___type_0)); }
	inline Type_t * get_type_0() const { return ___type_0; }
	inline Type_t ** get_address_of_type_0() { return &___type_0; }
	inline void set_type_0(Type_t * value)
	{
		___type_0 = value;
		Il2CppCodeGenWriteBarrier((&___type_0), value);
	}

	inline static int32_t get_offset_of_is_pinned_1() { return static_cast<int32_t>(offsetof(LocalVariableInfo_t2426779395, ___is_pinned_1)); }
	inline bool get_is_pinned_1() const { return ___is_pinned_1; }
	inline bool* get_address_of_is_pinned_1() { return &___is_pinned_1; }
	inline void set_is_pinned_1(bool value)
	{
		___is_pinned_1 = value;
	}

	inline static int32_t get_offset_of_position_2() { return static_cast<int32_t>(offsetof(LocalVariableInfo_t2426779395, ___position_2)); }
	inline uint16_t get_position_2() const { return ___position_2; }
	inline uint16_t* get_address_of_position_2() { return &___position_2; }
	inline void set_position_2(uint16_t value)
	{
		___position_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Reflection.LocalVariableInfo
struct LocalVariableInfo_t2426779395_marshaled_pinvoke
{
	Type_t * ___type_0;
	int32_t ___is_pinned_1;
	uint16_t ___position_2;
};
// Native definition for COM marshalling of System.Reflection.LocalVariableInfo
struct LocalVariableInfo_t2426779395_marshaled_com
{
	Type_t * ___type_0;
	int32_t ___is_pinned_1;
	uint16_t ___position_2;
};
#endif // LOCALVARIABLEINFO_T2426779395_H
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
#ifndef METHODBODY_T3098043463_H
#define METHODBODY_T3098043463_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MethodBody
struct  MethodBody_t3098043463  : public RuntimeObject
{
public:
	// System.Reflection.ExceptionHandlingClause[] System.Reflection.MethodBody::clauses
	ExceptionHandlingClauseU5BU5D_t280209828* ___clauses_0;
	// System.Reflection.LocalVariableInfo[] System.Reflection.MethodBody::locals
	LocalVariableInfoU5BU5D_t2827056530* ___locals_1;
	// System.Byte[] System.Reflection.MethodBody::il
	ByteU5BU5D_t4116647657* ___il_2;
	// System.Boolean System.Reflection.MethodBody::init_locals
	bool ___init_locals_3;
	// System.Int32 System.Reflection.MethodBody::sig_token
	int32_t ___sig_token_4;
	// System.Int32 System.Reflection.MethodBody::max_stack
	int32_t ___max_stack_5;

public:
	inline static int32_t get_offset_of_clauses_0() { return static_cast<int32_t>(offsetof(MethodBody_t3098043463, ___clauses_0)); }
	inline ExceptionHandlingClauseU5BU5D_t280209828* get_clauses_0() const { return ___clauses_0; }
	inline ExceptionHandlingClauseU5BU5D_t280209828** get_address_of_clauses_0() { return &___clauses_0; }
	inline void set_clauses_0(ExceptionHandlingClauseU5BU5D_t280209828* value)
	{
		___clauses_0 = value;
		Il2CppCodeGenWriteBarrier((&___clauses_0), value);
	}

	inline static int32_t get_offset_of_locals_1() { return static_cast<int32_t>(offsetof(MethodBody_t3098043463, ___locals_1)); }
	inline LocalVariableInfoU5BU5D_t2827056530* get_locals_1() const { return ___locals_1; }
	inline LocalVariableInfoU5BU5D_t2827056530** get_address_of_locals_1() { return &___locals_1; }
	inline void set_locals_1(LocalVariableInfoU5BU5D_t2827056530* value)
	{
		___locals_1 = value;
		Il2CppCodeGenWriteBarrier((&___locals_1), value);
	}

	inline static int32_t get_offset_of_il_2() { return static_cast<int32_t>(offsetof(MethodBody_t3098043463, ___il_2)); }
	inline ByteU5BU5D_t4116647657* get_il_2() const { return ___il_2; }
	inline ByteU5BU5D_t4116647657** get_address_of_il_2() { return &___il_2; }
	inline void set_il_2(ByteU5BU5D_t4116647657* value)
	{
		___il_2 = value;
		Il2CppCodeGenWriteBarrier((&___il_2), value);
	}

	inline static int32_t get_offset_of_init_locals_3() { return static_cast<int32_t>(offsetof(MethodBody_t3098043463, ___init_locals_3)); }
	inline bool get_init_locals_3() const { return ___init_locals_3; }
	inline bool* get_address_of_init_locals_3() { return &___init_locals_3; }
	inline void set_init_locals_3(bool value)
	{
		___init_locals_3 = value;
	}

	inline static int32_t get_offset_of_sig_token_4() { return static_cast<int32_t>(offsetof(MethodBody_t3098043463, ___sig_token_4)); }
	inline int32_t get_sig_token_4() const { return ___sig_token_4; }
	inline int32_t* get_address_of_sig_token_4() { return &___sig_token_4; }
	inline void set_sig_token_4(int32_t value)
	{
		___sig_token_4 = value;
	}

	inline static int32_t get_offset_of_max_stack_5() { return static_cast<int32_t>(offsetof(MethodBody_t3098043463, ___max_stack_5)); }
	inline int32_t get_max_stack_5() const { return ___max_stack_5; }
	inline int32_t* get_address_of_max_stack_5() { return &___max_stack_5; }
	inline void set_max_stack_5(int32_t value)
	{
		___max_stack_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Reflection.MethodBody
struct MethodBody_t3098043463_marshaled_pinvoke
{
	ExceptionHandlingClauseU5BU5D_t280209828* ___clauses_0;
	LocalVariableInfoU5BU5D_t2827056530* ___locals_1;
	uint8_t* ___il_2;
	int32_t ___init_locals_3;
	int32_t ___sig_token_4;
	int32_t ___max_stack_5;
};
// Native definition for COM marshalling of System.Reflection.MethodBody
struct MethodBody_t3098043463_marshaled_com
{
	ExceptionHandlingClauseU5BU5D_t280209828* ___clauses_0;
	LocalVariableInfoU5BU5D_t2827056530* ___locals_1;
	uint8_t* ___il_2;
	int32_t ___init_locals_3;
	int32_t ___sig_token_4;
	int32_t ___max_stack_5;
};
#endif // METHODBODY_T3098043463_H
#ifndef MISSING_T508514592_H
#define MISSING_T508514592_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.Missing
struct  Missing_t508514592  : public RuntimeObject
{
public:

public:
};

struct Missing_t508514592_StaticFields
{
public:
	// System.Reflection.Missing System.Reflection.Missing::Value
	Missing_t508514592 * ___Value_0;

public:
	inline static int32_t get_offset_of_Value_0() { return static_cast<int32_t>(offsetof(Missing_t508514592_StaticFields, ___Value_0)); }
	inline Missing_t508514592 * get_Value_0() const { return ___Value_0; }
	inline Missing_t508514592 ** get_address_of_Value_0() { return &___Value_0; }
	inline void set_Value_0(Missing_t508514592 * value)
	{
		___Value_0 = value;
		Il2CppCodeGenWriteBarrier((&___Value_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MISSING_T508514592_H
#ifndef POINTER_T2088917139_H
#define POINTER_T2088917139_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.Pointer
struct  Pointer_t2088917139  : public RuntimeObject
{
public:
	// System.Void* System.Reflection.Pointer::_ptr
	void* ____ptr_0;
	// System.RuntimeType System.Reflection.Pointer::_ptrType
	RuntimeType_t3636489352 * ____ptrType_1;

public:
	inline static int32_t get_offset_of__ptr_0() { return static_cast<int32_t>(offsetof(Pointer_t2088917139, ____ptr_0)); }
	inline void* get__ptr_0() const { return ____ptr_0; }
	inline void** get_address_of__ptr_0() { return &____ptr_0; }
	inline void set__ptr_0(void* value)
	{
		____ptr_0 = value;
	}

	inline static int32_t get_offset_of__ptrType_1() { return static_cast<int32_t>(offsetof(Pointer_t2088917139, ____ptrType_1)); }
	inline RuntimeType_t3636489352 * get__ptrType_1() const { return ____ptrType_1; }
	inline RuntimeType_t3636489352 ** get_address_of__ptrType_1() { return &____ptrType_1; }
	inline void set__ptrType_1(RuntimeType_t3636489352 * value)
	{
		____ptrType_1 = value;
		Il2CppCodeGenWriteBarrier((&____ptrType_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // POINTER_T2088917139_H
#ifndef STRONGNAMEKEYPAIR_T3411219591_H
#define STRONGNAMEKEYPAIR_T3411219591_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.StrongNameKeyPair
struct  StrongNameKeyPair_t3411219591  : public RuntimeObject
{
public:
	// System.Byte[] System.Reflection.StrongNameKeyPair::_publicKey
	ByteU5BU5D_t4116647657* ____publicKey_0;
	// System.String System.Reflection.StrongNameKeyPair::_keyPairContainer
	String_t* ____keyPairContainer_1;
	// System.Boolean System.Reflection.StrongNameKeyPair::_keyPairExported
	bool ____keyPairExported_2;
	// System.Byte[] System.Reflection.StrongNameKeyPair::_keyPairArray
	ByteU5BU5D_t4116647657* ____keyPairArray_3;
	// System.Security.Cryptography.RSA System.Reflection.StrongNameKeyPair::_rsa
	RSA_t2385438082 * ____rsa_4;

public:
	inline static int32_t get_offset_of__publicKey_0() { return static_cast<int32_t>(offsetof(StrongNameKeyPair_t3411219591, ____publicKey_0)); }
	inline ByteU5BU5D_t4116647657* get__publicKey_0() const { return ____publicKey_0; }
	inline ByteU5BU5D_t4116647657** get_address_of__publicKey_0() { return &____publicKey_0; }
	inline void set__publicKey_0(ByteU5BU5D_t4116647657* value)
	{
		____publicKey_0 = value;
		Il2CppCodeGenWriteBarrier((&____publicKey_0), value);
	}

	inline static int32_t get_offset_of__keyPairContainer_1() { return static_cast<int32_t>(offsetof(StrongNameKeyPair_t3411219591, ____keyPairContainer_1)); }
	inline String_t* get__keyPairContainer_1() const { return ____keyPairContainer_1; }
	inline String_t** get_address_of__keyPairContainer_1() { return &____keyPairContainer_1; }
	inline void set__keyPairContainer_1(String_t* value)
	{
		____keyPairContainer_1 = value;
		Il2CppCodeGenWriteBarrier((&____keyPairContainer_1), value);
	}

	inline static int32_t get_offset_of__keyPairExported_2() { return static_cast<int32_t>(offsetof(StrongNameKeyPair_t3411219591, ____keyPairExported_2)); }
	inline bool get__keyPairExported_2() const { return ____keyPairExported_2; }
	inline bool* get_address_of__keyPairExported_2() { return &____keyPairExported_2; }
	inline void set__keyPairExported_2(bool value)
	{
		____keyPairExported_2 = value;
	}

	inline static int32_t get_offset_of__keyPairArray_3() { return static_cast<int32_t>(offsetof(StrongNameKeyPair_t3411219591, ____keyPairArray_3)); }
	inline ByteU5BU5D_t4116647657* get__keyPairArray_3() const { return ____keyPairArray_3; }
	inline ByteU5BU5D_t4116647657** get_address_of__keyPairArray_3() { return &____keyPairArray_3; }
	inline void set__keyPairArray_3(ByteU5BU5D_t4116647657* value)
	{
		____keyPairArray_3 = value;
		Il2CppCodeGenWriteBarrier((&____keyPairArray_3), value);
	}

	inline static int32_t get_offset_of__rsa_4() { return static_cast<int32_t>(offsetof(StrongNameKeyPair_t3411219591, ____rsa_4)); }
	inline RSA_t2385438082 * get__rsa_4() const { return ____rsa_4; }
	inline RSA_t2385438082 ** get_address_of__rsa_4() { return &____rsa_4; }
	inline void set__rsa_4(RSA_t2385438082 * value)
	{
		____rsa_4 = value;
		Il2CppCodeGenWriteBarrier((&____rsa_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRONGNAMEKEYPAIR_T3411219591_H
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
#ifndef APPLICATIONEXCEPTION_T2339761290_H
#define APPLICATIONEXCEPTION_T2339761290_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ApplicationException
struct  ApplicationException_t2339761290  : public Exception_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // APPLICATIONEXCEPTION_T2339761290_H
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
#ifndef CUSTOMATTRIBUTETYPEDARGUMENT_T2723150157_H
#define CUSTOMATTRIBUTETYPEDARGUMENT_T2723150157_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.CustomAttributeTypedArgument
struct  CustomAttributeTypedArgument_t2723150157 
{
public:
	// System.Type System.Reflection.CustomAttributeTypedArgument::argumentType
	Type_t * ___argumentType_0;
	// System.Object System.Reflection.CustomAttributeTypedArgument::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_argumentType_0() { return static_cast<int32_t>(offsetof(CustomAttributeTypedArgument_t2723150157, ___argumentType_0)); }
	inline Type_t * get_argumentType_0() const { return ___argumentType_0; }
	inline Type_t ** get_address_of_argumentType_0() { return &___argumentType_0; }
	inline void set_argumentType_0(Type_t * value)
	{
		___argumentType_0 = value;
		Il2CppCodeGenWriteBarrier((&___argumentType_0), value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(CustomAttributeTypedArgument_t2723150157, ___value_1)); }
	inline RuntimeObject * get_value_1() const { return ___value_1; }
	inline RuntimeObject ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(RuntimeObject * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((&___value_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Reflection.CustomAttributeTypedArgument
struct CustomAttributeTypedArgument_t2723150157_marshaled_pinvoke
{
	Type_t * ___argumentType_0;
	Il2CppIUnknown* ___value_1;
};
// Native definition for COM marshalling of System.Reflection.CustomAttributeTypedArgument
struct CustomAttributeTypedArgument_t2723150157_marshaled_com
{
	Type_t * ___argumentType_0;
	Il2CppIUnknown* ___value_1;
};
#endif // CUSTOMATTRIBUTETYPEDARGUMENT_T2723150157_H
#ifndef DEFAULTMEMBERATTRIBUTE_T3275092422_H
#define DEFAULTMEMBERATTRIBUTE_T3275092422_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.DefaultMemberAttribute
struct  DefaultMemberAttribute_t3275092422  : public Attribute_t861562559
{
public:
	// System.String System.Reflection.DefaultMemberAttribute::m_memberName
	String_t* ___m_memberName_0;

public:
	inline static int32_t get_offset_of_m_memberName_0() { return static_cast<int32_t>(offsetof(DefaultMemberAttribute_t3275092422, ___m_memberName_0)); }
	inline String_t* get_m_memberName_0() const { return ___m_memberName_0; }
	inline String_t** get_address_of_m_memberName_0() { return &___m_memberName_0; }
	inline void set_m_memberName_0(String_t* value)
	{
		___m_memberName_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_memberName_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEFAULTMEMBERATTRIBUTE_T3275092422_H
#ifndef MONOWIN32RESOURCE_T1904229483_H
#define MONOWIN32RESOURCE_T1904229483_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.Emit.MonoWin32Resource
struct  MonoWin32Resource_t1904229483 
{
public:
	// System.Int32 System.Reflection.Emit.MonoWin32Resource::res_type
	int32_t ___res_type_0;
	// System.Int32 System.Reflection.Emit.MonoWin32Resource::res_id
	int32_t ___res_id_1;
	// System.Int32 System.Reflection.Emit.MonoWin32Resource::lang_id
	int32_t ___lang_id_2;
	// System.Byte[] System.Reflection.Emit.MonoWin32Resource::data
	ByteU5BU5D_t4116647657* ___data_3;

public:
	inline static int32_t get_offset_of_res_type_0() { return static_cast<int32_t>(offsetof(MonoWin32Resource_t1904229483, ___res_type_0)); }
	inline int32_t get_res_type_0() const { return ___res_type_0; }
	inline int32_t* get_address_of_res_type_0() { return &___res_type_0; }
	inline void set_res_type_0(int32_t value)
	{
		___res_type_0 = value;
	}

	inline static int32_t get_offset_of_res_id_1() { return static_cast<int32_t>(offsetof(MonoWin32Resource_t1904229483, ___res_id_1)); }
	inline int32_t get_res_id_1() const { return ___res_id_1; }
	inline int32_t* get_address_of_res_id_1() { return &___res_id_1; }
	inline void set_res_id_1(int32_t value)
	{
		___res_id_1 = value;
	}

	inline static int32_t get_offset_of_lang_id_2() { return static_cast<int32_t>(offsetof(MonoWin32Resource_t1904229483, ___lang_id_2)); }
	inline int32_t get_lang_id_2() const { return ___lang_id_2; }
	inline int32_t* get_address_of_lang_id_2() { return &___lang_id_2; }
	inline void set_lang_id_2(int32_t value)
	{
		___lang_id_2 = value;
	}

	inline static int32_t get_offset_of_data_3() { return static_cast<int32_t>(offsetof(MonoWin32Resource_t1904229483, ___data_3)); }
	inline ByteU5BU5D_t4116647657* get_data_3() const { return ___data_3; }
	inline ByteU5BU5D_t4116647657** get_address_of_data_3() { return &___data_3; }
	inline void set_data_3(ByteU5BU5D_t4116647657* value)
	{
		___data_3 = value;
		Il2CppCodeGenWriteBarrier((&___data_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Reflection.Emit.MonoWin32Resource
struct MonoWin32Resource_t1904229483_marshaled_pinvoke
{
	int32_t ___res_type_0;
	int32_t ___res_id_1;
	int32_t ___lang_id_2;
	uint8_t* ___data_3;
};
// Native definition for COM marshalling of System.Reflection.Emit.MonoWin32Resource
struct MonoWin32Resource_t1904229483_marshaled_com
{
	int32_t ___res_type_0;
	int32_t ___res_id_1;
	int32_t ___lang_id_2;
	uint8_t* ___data_3;
};
#endif // MONOWIN32RESOURCE_T1904229483_H
#ifndef EVENTINFO_T_H
#define EVENTINFO_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.EventInfo
struct  EventInfo_t  : public MemberInfo_t
{
public:
	// System.Reflection.EventInfo/AddEventAdapter System.Reflection.EventInfo::cached_add_event
	AddEventAdapter_t1787725097 * ___cached_add_event_0;

public:
	inline static int32_t get_offset_of_cached_add_event_0() { return static_cast<int32_t>(offsetof(EventInfo_t, ___cached_add_event_0)); }
	inline AddEventAdapter_t1787725097 * get_cached_add_event_0() const { return ___cached_add_event_0; }
	inline AddEventAdapter_t1787725097 ** get_address_of_cached_add_event_0() { return &___cached_add_event_0; }
	inline void set_cached_add_event_0(AddEventAdapter_t1787725097 * value)
	{
		___cached_add_event_0 = value;
		Il2CppCodeGenWriteBarrier((&___cached_add_event_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EVENTINFO_T_H
#ifndef FIELDINFO_T_H
#define FIELDINFO_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.FieldInfo
struct  FieldInfo_t  : public MemberInfo_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FIELDINFO_T_H
#ifndef METHODBASE_T_H
#define METHODBASE_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MethodBase
struct  MethodBase_t  : public MemberInfo_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // METHODBASE_T_H
#ifndef PARAMETERMODIFIER_T1461694466_H
#define PARAMETERMODIFIER_T1461694466_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.ParameterModifier
struct  ParameterModifier_t1461694466 
{
public:
	// System.Boolean[] System.Reflection.ParameterModifier::_byRef
	BooleanU5BU5D_t2897418192* ____byRef_0;

public:
	inline static int32_t get_offset_of__byRef_0() { return static_cast<int32_t>(offsetof(ParameterModifier_t1461694466, ____byRef_0)); }
	inline BooleanU5BU5D_t2897418192* get__byRef_0() const { return ____byRef_0; }
	inline BooleanU5BU5D_t2897418192** get_address_of__byRef_0() { return &____byRef_0; }
	inline void set__byRef_0(BooleanU5BU5D_t2897418192* value)
	{
		____byRef_0 = value;
		Il2CppCodeGenWriteBarrier((&____byRef_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Reflection.ParameterModifier
struct ParameterModifier_t1461694466_marshaled_pinvoke
{
	int32_t* ____byRef_0;
};
// Native definition for COM marshalling of System.Reflection.ParameterModifier
struct ParameterModifier_t1461694466_marshaled_com
{
	int32_t* ____byRef_0;
};
#endif // PARAMETERMODIFIER_T1461694466_H
#ifndef PROPERTYINFO_T_H
#define PROPERTYINFO_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.PropertyInfo
struct  PropertyInfo_t  : public MemberInfo_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PROPERTYINFO_T_H
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
#ifndef UINTPTR_T_H
#define UINTPTR_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UIntPtr
struct  UIntPtr_t 
{
public:
	// System.Void* System.UIntPtr::_pointer
	void* ____pointer_1;

public:
	inline static int32_t get_offset_of__pointer_1() { return static_cast<int32_t>(offsetof(UIntPtr_t, ____pointer_1)); }
	inline void* get__pointer_1() const { return ____pointer_1; }
	inline void** get_address_of__pointer_1() { return &____pointer_1; }
	inline void set__pointer_1(void* value)
	{
		____pointer_1 = value;
	}
};

struct UIntPtr_t_StaticFields
{
public:
	// System.UIntPtr System.UIntPtr::Zero
	uintptr_t ___Zero_0;

public:
	inline static int32_t get_offset_of_Zero_0() { return static_cast<int32_t>(offsetof(UIntPtr_t_StaticFields, ___Zero_0)); }
	inline uintptr_t get_Zero_0() const { return ___Zero_0; }
	inline uintptr_t* get_address_of_Zero_0() { return &___Zero_0; }
	inline void set_Zero_0(uintptr_t value)
	{
		___Zero_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UINTPTR_T_H
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
#ifndef ASSEMBLYHASHALGORITHM_T1216504064_H
#define ASSEMBLYHASHALGORITHM_T1216504064_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Configuration.Assemblies.AssemblyHashAlgorithm
struct  AssemblyHashAlgorithm_t1216504064 
{
public:
	// System.Int32 System.Configuration.Assemblies.AssemblyHashAlgorithm::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AssemblyHashAlgorithm_t1216504064, ___value___2)); }
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
#endif // ASSEMBLYHASHALGORITHM_T1216504064_H
#ifndef ASSEMBLYVERSIONCOMPATIBILITY_T766556580_H
#define ASSEMBLYVERSIONCOMPATIBILITY_T766556580_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Configuration.Assemblies.AssemblyVersionCompatibility
struct  AssemblyVersionCompatibility_t766556580 
{
public:
	// System.Int32 System.Configuration.Assemblies.AssemblyVersionCompatibility::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AssemblyVersionCompatibility_t766556580, ___value___2)); }
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
#endif // ASSEMBLYVERSIONCOMPATIBILITY_T766556580_H
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
#ifndef ASSEMBLY_T_H
#define ASSEMBLY_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.Assembly
struct  Assembly_t  : public RuntimeObject
{
public:
	// System.IntPtr System.Reflection.Assembly::_mono_assembly
	intptr_t ____mono_assembly_0;
	// System.Reflection.Assembly/ResolveEventHolder System.Reflection.Assembly::resolve_event_holder
	ResolveEventHolder_t2120639521 * ___resolve_event_holder_1;
	// System.Security.Policy.Evidence System.Reflection.Assembly::_evidence
	Evidence_t2008144148 * ____evidence_2;
	// System.Security.PermissionSet System.Reflection.Assembly::_minimum
	PermissionSet_t223948603 * ____minimum_3;
	// System.Security.PermissionSet System.Reflection.Assembly::_optional
	PermissionSet_t223948603 * ____optional_4;
	// System.Security.PermissionSet System.Reflection.Assembly::_refuse
	PermissionSet_t223948603 * ____refuse_5;
	// System.Security.PermissionSet System.Reflection.Assembly::_granted
	PermissionSet_t223948603 * ____granted_6;
	// System.Security.PermissionSet System.Reflection.Assembly::_denied
	PermissionSet_t223948603 * ____denied_7;
	// System.Boolean System.Reflection.Assembly::fromByteArray
	bool ___fromByteArray_8;
	// System.String System.Reflection.Assembly::assemblyName
	String_t* ___assemblyName_9;

public:
	inline static int32_t get_offset_of__mono_assembly_0() { return static_cast<int32_t>(offsetof(Assembly_t, ____mono_assembly_0)); }
	inline intptr_t get__mono_assembly_0() const { return ____mono_assembly_0; }
	inline intptr_t* get_address_of__mono_assembly_0() { return &____mono_assembly_0; }
	inline void set__mono_assembly_0(intptr_t value)
	{
		____mono_assembly_0 = value;
	}

	inline static int32_t get_offset_of_resolve_event_holder_1() { return static_cast<int32_t>(offsetof(Assembly_t, ___resolve_event_holder_1)); }
	inline ResolveEventHolder_t2120639521 * get_resolve_event_holder_1() const { return ___resolve_event_holder_1; }
	inline ResolveEventHolder_t2120639521 ** get_address_of_resolve_event_holder_1() { return &___resolve_event_holder_1; }
	inline void set_resolve_event_holder_1(ResolveEventHolder_t2120639521 * value)
	{
		___resolve_event_holder_1 = value;
		Il2CppCodeGenWriteBarrier((&___resolve_event_holder_1), value);
	}

	inline static int32_t get_offset_of__evidence_2() { return static_cast<int32_t>(offsetof(Assembly_t, ____evidence_2)); }
	inline Evidence_t2008144148 * get__evidence_2() const { return ____evidence_2; }
	inline Evidence_t2008144148 ** get_address_of__evidence_2() { return &____evidence_2; }
	inline void set__evidence_2(Evidence_t2008144148 * value)
	{
		____evidence_2 = value;
		Il2CppCodeGenWriteBarrier((&____evidence_2), value);
	}

	inline static int32_t get_offset_of__minimum_3() { return static_cast<int32_t>(offsetof(Assembly_t, ____minimum_3)); }
	inline PermissionSet_t223948603 * get__minimum_3() const { return ____minimum_3; }
	inline PermissionSet_t223948603 ** get_address_of__minimum_3() { return &____minimum_3; }
	inline void set__minimum_3(PermissionSet_t223948603 * value)
	{
		____minimum_3 = value;
		Il2CppCodeGenWriteBarrier((&____minimum_3), value);
	}

	inline static int32_t get_offset_of__optional_4() { return static_cast<int32_t>(offsetof(Assembly_t, ____optional_4)); }
	inline PermissionSet_t223948603 * get__optional_4() const { return ____optional_4; }
	inline PermissionSet_t223948603 ** get_address_of__optional_4() { return &____optional_4; }
	inline void set__optional_4(PermissionSet_t223948603 * value)
	{
		____optional_4 = value;
		Il2CppCodeGenWriteBarrier((&____optional_4), value);
	}

	inline static int32_t get_offset_of__refuse_5() { return static_cast<int32_t>(offsetof(Assembly_t, ____refuse_5)); }
	inline PermissionSet_t223948603 * get__refuse_5() const { return ____refuse_5; }
	inline PermissionSet_t223948603 ** get_address_of__refuse_5() { return &____refuse_5; }
	inline void set__refuse_5(PermissionSet_t223948603 * value)
	{
		____refuse_5 = value;
		Il2CppCodeGenWriteBarrier((&____refuse_5), value);
	}

	inline static int32_t get_offset_of__granted_6() { return static_cast<int32_t>(offsetof(Assembly_t, ____granted_6)); }
	inline PermissionSet_t223948603 * get__granted_6() const { return ____granted_6; }
	inline PermissionSet_t223948603 ** get_address_of__granted_6() { return &____granted_6; }
	inline void set__granted_6(PermissionSet_t223948603 * value)
	{
		____granted_6 = value;
		Il2CppCodeGenWriteBarrier((&____granted_6), value);
	}

	inline static int32_t get_offset_of__denied_7() { return static_cast<int32_t>(offsetof(Assembly_t, ____denied_7)); }
	inline PermissionSet_t223948603 * get__denied_7() const { return ____denied_7; }
	inline PermissionSet_t223948603 ** get_address_of__denied_7() { return &____denied_7; }
	inline void set__denied_7(PermissionSet_t223948603 * value)
	{
		____denied_7 = value;
		Il2CppCodeGenWriteBarrier((&____denied_7), value);
	}

	inline static int32_t get_offset_of_fromByteArray_8() { return static_cast<int32_t>(offsetof(Assembly_t, ___fromByteArray_8)); }
	inline bool get_fromByteArray_8() const { return ___fromByteArray_8; }
	inline bool* get_address_of_fromByteArray_8() { return &___fromByteArray_8; }
	inline void set_fromByteArray_8(bool value)
	{
		___fromByteArray_8 = value;
	}

	inline static int32_t get_offset_of_assemblyName_9() { return static_cast<int32_t>(offsetof(Assembly_t, ___assemblyName_9)); }
	inline String_t* get_assemblyName_9() const { return ___assemblyName_9; }
	inline String_t** get_address_of_assemblyName_9() { return &___assemblyName_9; }
	inline void set_assemblyName_9(String_t* value)
	{
		___assemblyName_9 = value;
		Il2CppCodeGenWriteBarrier((&___assemblyName_9), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Reflection.Assembly
struct Assembly_t_marshaled_pinvoke
{
	intptr_t ____mono_assembly_0;
	ResolveEventHolder_t2120639521 * ___resolve_event_holder_1;
	Evidence_t2008144148 * ____evidence_2;
	PermissionSet_t223948603 * ____minimum_3;
	PermissionSet_t223948603 * ____optional_4;
	PermissionSet_t223948603 * ____refuse_5;
	PermissionSet_t223948603 * ____granted_6;
	PermissionSet_t223948603 * ____denied_7;
	int32_t ___fromByteArray_8;
	char* ___assemblyName_9;
};
// Native definition for COM marshalling of System.Reflection.Assembly
struct Assembly_t_marshaled_com
{
	intptr_t ____mono_assembly_0;
	ResolveEventHolder_t2120639521 * ___resolve_event_holder_1;
	Evidence_t2008144148 * ____evidence_2;
	PermissionSet_t223948603 * ____minimum_3;
	PermissionSet_t223948603 * ____optional_4;
	PermissionSet_t223948603 * ____refuse_5;
	PermissionSet_t223948603 * ____granted_6;
	PermissionSet_t223948603 * ____denied_7;
	int32_t ___fromByteArray_8;
	Il2CppChar* ___assemblyName_9;
};
#endif // ASSEMBLY_T_H
#ifndef ASSEMBLYCONTENTTYPE_T1652800354_H
#define ASSEMBLYCONTENTTYPE_T1652800354_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.AssemblyContentType
struct  AssemblyContentType_t1652800354 
{
public:
	// System.Int32 System.Reflection.AssemblyContentType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AssemblyContentType_t1652800354, ___value___2)); }
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
#endif // ASSEMBLYCONTENTTYPE_T1652800354_H
#ifndef ASSEMBLYNAMEFLAGS_T3675421470_H
#define ASSEMBLYNAMEFLAGS_T3675421470_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.AssemblyNameFlags
struct  AssemblyNameFlags_t3675421470 
{
public:
	// System.Int32 System.Reflection.AssemblyNameFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AssemblyNameFlags_t3675421470, ___value___2)); }
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
#endif // ASSEMBLYNAMEFLAGS_T3675421470_H
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
#ifndef CALLINGCONVENTIONS_T2253234531_H
#define CALLINGCONVENTIONS_T2253234531_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.CallingConventions
struct  CallingConventions_t2253234531 
{
public:
	// System.Int32 System.Reflection.CallingConventions::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CallingConventions_t2253234531, ___value___2)); }
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
#endif // CALLINGCONVENTIONS_T2253234531_H
#ifndef CONSTRUCTORINFO_T5769829_H
#define CONSTRUCTORINFO_T5769829_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.ConstructorInfo
struct  ConstructorInfo_t5769829  : public MethodBase_t
{
public:

public:
};

struct ConstructorInfo_t5769829_StaticFields
{
public:
	// System.String System.Reflection.ConstructorInfo::ConstructorName
	String_t* ___ConstructorName_0;
	// System.String System.Reflection.ConstructorInfo::TypeConstructorName
	String_t* ___TypeConstructorName_1;

public:
	inline static int32_t get_offset_of_ConstructorName_0() { return static_cast<int32_t>(offsetof(ConstructorInfo_t5769829_StaticFields, ___ConstructorName_0)); }
	inline String_t* get_ConstructorName_0() const { return ___ConstructorName_0; }
	inline String_t** get_address_of_ConstructorName_0() { return &___ConstructorName_0; }
	inline void set_ConstructorName_0(String_t* value)
	{
		___ConstructorName_0 = value;
		Il2CppCodeGenWriteBarrier((&___ConstructorName_0), value);
	}

	inline static int32_t get_offset_of_TypeConstructorName_1() { return static_cast<int32_t>(offsetof(ConstructorInfo_t5769829_StaticFields, ___TypeConstructorName_1)); }
	inline String_t* get_TypeConstructorName_1() const { return ___TypeConstructorName_1; }
	inline String_t** get_address_of_TypeConstructorName_1() { return &___TypeConstructorName_1; }
	inline void set_TypeConstructorName_1(String_t* value)
	{
		___TypeConstructorName_1 = value;
		Il2CppCodeGenWriteBarrier((&___TypeConstructorName_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONSTRUCTORINFO_T5769829_H
#ifndef LAZYCATTRDATA_T3989247807_H
#define LAZYCATTRDATA_T3989247807_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.CustomAttributeData/LazyCAttrData
struct  LazyCAttrData_t3989247807  : public RuntimeObject
{
public:
	// System.Reflection.Assembly System.Reflection.CustomAttributeData/LazyCAttrData::assembly
	Assembly_t * ___assembly_0;
	// System.IntPtr System.Reflection.CustomAttributeData/LazyCAttrData::data
	intptr_t ___data_1;
	// System.UInt32 System.Reflection.CustomAttributeData/LazyCAttrData::data_length
	uint32_t ___data_length_2;

public:
	inline static int32_t get_offset_of_assembly_0() { return static_cast<int32_t>(offsetof(LazyCAttrData_t3989247807, ___assembly_0)); }
	inline Assembly_t * get_assembly_0() const { return ___assembly_0; }
	inline Assembly_t ** get_address_of_assembly_0() { return &___assembly_0; }
	inline void set_assembly_0(Assembly_t * value)
	{
		___assembly_0 = value;
		Il2CppCodeGenWriteBarrier((&___assembly_0), value);
	}

	inline static int32_t get_offset_of_data_1() { return static_cast<int32_t>(offsetof(LazyCAttrData_t3989247807, ___data_1)); }
	inline intptr_t get_data_1() const { return ___data_1; }
	inline intptr_t* get_address_of_data_1() { return &___data_1; }
	inline void set_data_1(intptr_t value)
	{
		___data_1 = value;
	}

	inline static int32_t get_offset_of_data_length_2() { return static_cast<int32_t>(offsetof(LazyCAttrData_t3989247807, ___data_length_2)); }
	inline uint32_t get_data_length_2() const { return ___data_length_2; }
	inline uint32_t* get_address_of_data_length_2() { return &___data_length_2; }
	inline void set_data_length_2(uint32_t value)
	{
		___data_length_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LAZYCATTRDATA_T3989247807_H
#ifndef CUSTOMATTRIBUTENAMEDARGUMENT_T287865710_H
#define CUSTOMATTRIBUTENAMEDARGUMENT_T287865710_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.CustomAttributeNamedArgument
struct  CustomAttributeNamedArgument_t287865710 
{
public:
	// System.Reflection.CustomAttributeTypedArgument System.Reflection.CustomAttributeNamedArgument::typedArgument
	CustomAttributeTypedArgument_t2723150157  ___typedArgument_0;
	// System.Reflection.MemberInfo System.Reflection.CustomAttributeNamedArgument::memberInfo
	MemberInfo_t * ___memberInfo_1;

public:
	inline static int32_t get_offset_of_typedArgument_0() { return static_cast<int32_t>(offsetof(CustomAttributeNamedArgument_t287865710, ___typedArgument_0)); }
	inline CustomAttributeTypedArgument_t2723150157  get_typedArgument_0() const { return ___typedArgument_0; }
	inline CustomAttributeTypedArgument_t2723150157 * get_address_of_typedArgument_0() { return &___typedArgument_0; }
	inline void set_typedArgument_0(CustomAttributeTypedArgument_t2723150157  value)
	{
		___typedArgument_0 = value;
	}

	inline static int32_t get_offset_of_memberInfo_1() { return static_cast<int32_t>(offsetof(CustomAttributeNamedArgument_t287865710, ___memberInfo_1)); }
	inline MemberInfo_t * get_memberInfo_1() const { return ___memberInfo_1; }
	inline MemberInfo_t ** get_address_of_memberInfo_1() { return &___memberInfo_1; }
	inline void set_memberInfo_1(MemberInfo_t * value)
	{
		___memberInfo_1 = value;
		Il2CppCodeGenWriteBarrier((&___memberInfo_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Reflection.CustomAttributeNamedArgument
struct CustomAttributeNamedArgument_t287865710_marshaled_pinvoke
{
	CustomAttributeTypedArgument_t2723150157_marshaled_pinvoke ___typedArgument_0;
	MemberInfo_t * ___memberInfo_1;
};
// Native definition for COM marshalling of System.Reflection.CustomAttributeNamedArgument
struct CustomAttributeNamedArgument_t287865710_marshaled_com
{
	CustomAttributeTypedArgument_t2723150157_marshaled_com ___typedArgument_0;
	MemberInfo_t * ___memberInfo_1;
};
#endif // CUSTOMATTRIBUTENAMEDARGUMENT_T287865710_H
#ifndef ASSEMBLYBUILDERACCESS_T2806254258_H
#define ASSEMBLYBUILDERACCESS_T2806254258_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.Emit.AssemblyBuilderAccess
struct  AssemblyBuilderAccess_t2806254258 
{
public:
	// System.Int32 System.Reflection.Emit.AssemblyBuilderAccess::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AssemblyBuilderAccess_t2806254258, ___value___2)); }
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
#endif // ASSEMBLYBUILDERACCESS_T2806254258_H
#ifndef NATIVERESOURCETYPE_T2573963468_H
#define NATIVERESOURCETYPE_T2573963468_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.Emit.NativeResourceType
struct  NativeResourceType_t2573963468 
{
public:
	// System.Int32 System.Reflection.Emit.NativeResourceType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(NativeResourceType_t2573963468, ___value___2)); }
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
#endif // NATIVERESOURCETYPE_T2573963468_H
#ifndef PEFILEKINDS_T3631470751_H
#define PEFILEKINDS_T3631470751_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.Emit.PEFileKinds
struct  PEFileKinds_t3631470751 
{
public:
	// System.Int32 System.Reflection.Emit.PEFileKinds::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PEFileKinds_t3631470751, ___value___2)); }
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
#endif // PEFILEKINDS_T3631470751_H
#ifndef EVENTATTRIBUTES_T1153671773_H
#define EVENTATTRIBUTES_T1153671773_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.EventAttributes
struct  EventAttributes_t1153671773 
{
public:
	// System.Int32 System.Reflection.EventAttributes::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(EventAttributes_t1153671773, ___value___2)); }
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
#endif // EVENTATTRIBUTES_T1153671773_H
#ifndef EXCEPTIONHANDLINGCLAUSEOPTIONS_T945556827_H
#define EXCEPTIONHANDLINGCLAUSEOPTIONS_T945556827_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.ExceptionHandlingClauseOptions
struct  ExceptionHandlingClauseOptions_t945556827 
{
public:
	// System.Int32 System.Reflection.ExceptionHandlingClauseOptions::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ExceptionHandlingClauseOptions_t945556827, ___value___2)); }
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
#endif // EXCEPTIONHANDLINGCLAUSEOPTIONS_T945556827_H
#ifndef FIELDATTRIBUTES_T400321159_H
#define FIELDATTRIBUTES_T400321159_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.FieldAttributes
struct  FieldAttributes_t400321159 
{
public:
	// System.Int32 System.Reflection.FieldAttributes::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FieldAttributes_t400321159, ___value___2)); }
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
#endif // FIELDATTRIBUTES_T400321159_H
#ifndef GENERICPARAMETERATTRIBUTES_T1159165531_H
#define GENERICPARAMETERATTRIBUTES_T1159165531_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.GenericParameterAttributes
struct  GenericParameterAttributes_t1159165531 
{
public:
	// System.Int32 System.Reflection.GenericParameterAttributes::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(GenericParameterAttributes_t1159165531, ___value___2)); }
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
#endif // GENERICPARAMETERATTRIBUTES_T1159165531_H
#ifndef IMAGEFILEMACHINE_T799743225_H
#define IMAGEFILEMACHINE_T799743225_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.ImageFileMachine
struct  ImageFileMachine_t799743225 
{
public:
	// System.Int32 System.Reflection.ImageFileMachine::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ImageFileMachine_t799743225, ___value___2)); }
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
#endif // IMAGEFILEMACHINE_T799743225_H
#ifndef INVALIDFILTERCRITERIAEXCEPTION_T2427731508_H
#define INVALIDFILTERCRITERIAEXCEPTION_T2427731508_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.InvalidFilterCriteriaException
struct  InvalidFilterCriteriaException_t2427731508  : public ApplicationException_t2339761290
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INVALIDFILTERCRITERIAEXCEPTION_T2427731508_H
#ifndef MEMBERTYPES_T3790569052_H
#define MEMBERTYPES_T3790569052_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MemberTypes
struct  MemberTypes_t3790569052 
{
public:
	// System.Int32 System.Reflection.MemberTypes::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(MemberTypes_t3790569052, ___value___2)); }
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
#endif // MEMBERTYPES_T3790569052_H
#ifndef METHODATTRIBUTES_T2366443849_H
#define METHODATTRIBUTES_T2366443849_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MethodAttributes
struct  MethodAttributes_t2366443849 
{
public:
	// System.Int32 System.Reflection.MethodAttributes::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(MethodAttributes_t2366443849, ___value___2)); }
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
#endif // METHODATTRIBUTES_T2366443849_H
#ifndef METHODIMPLATTRIBUTES_T3646023817_H
#define METHODIMPLATTRIBUTES_T3646023817_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MethodImplAttributes
struct  MethodImplAttributes_t3646023817 
{
public:
	// System.Int32 System.Reflection.MethodImplAttributes::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(MethodImplAttributes_t3646023817, ___value___2)); }
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
#endif // METHODIMPLATTRIBUTES_T3646023817_H
#ifndef METHODINFO_T_H
#define METHODINFO_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MethodInfo
struct  MethodInfo_t  : public MethodBase_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // METHODINFO_T_H
#ifndef PINFO_T446749821_H
#define PINFO_T446749821_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.PInfo
struct  PInfo_t446749821 
{
public:
	// System.Int32 System.Reflection.PInfo::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PInfo_t446749821, ___value___2)); }
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
#endif // PINFO_T446749821_H
#ifndef PINVOKEATTRIBUTES_T2098850068_H
#define PINVOKEATTRIBUTES_T2098850068_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.PInvokeAttributes
struct  PInvokeAttributes_t2098850068 
{
public:
	// System.Int32 System.Reflection.PInvokeAttributes::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PInvokeAttributes_t2098850068, ___value___2)); }
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
#endif // PINVOKEATTRIBUTES_T2098850068_H
#ifndef PARAMETERATTRIBUTES_T1826424051_H
#define PARAMETERATTRIBUTES_T1826424051_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.ParameterAttributes
struct  ParameterAttributes_t1826424051 
{
public:
	// System.Int32 System.Reflection.ParameterAttributes::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ParameterAttributes_t1826424051, ___value___2)); }
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
#endif // PARAMETERATTRIBUTES_T1826424051_H
#ifndef PORTABLEEXECUTABLEKINDS_T1191923110_H
#define PORTABLEEXECUTABLEKINDS_T1191923110_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.PortableExecutableKinds
struct  PortableExecutableKinds_t1191923110 
{
public:
	// System.Int32 System.Reflection.PortableExecutableKinds::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PortableExecutableKinds_t1191923110, ___value___2)); }
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
#endif // PORTABLEEXECUTABLEKINDS_T1191923110_H
#ifndef PROCESSORARCHITECTURE_T305929193_H
#define PROCESSORARCHITECTURE_T305929193_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.ProcessorArchitecture
struct  ProcessorArchitecture_t305929193 
{
public:
	// System.Int32 System.Reflection.ProcessorArchitecture::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ProcessorArchitecture_t305929193, ___value___2)); }
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
#endif // PROCESSORARCHITECTURE_T305929193_H
#ifndef PROPERTYATTRIBUTES_T3388002996_H
#define PROPERTYATTRIBUTES_T3388002996_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.PropertyAttributes
struct  PropertyAttributes_t3388002996 
{
public:
	// System.Int32 System.Reflection.PropertyAttributes::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PropertyAttributes_t3388002996, ___value___2)); }
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
#endif // PROPERTYATTRIBUTES_T3388002996_H
#ifndef REFLECTIONTYPELOADEXCEPTION_T440884068_H
#define REFLECTIONTYPELOADEXCEPTION_T440884068_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.ReflectionTypeLoadException
struct  ReflectionTypeLoadException_t440884068  : public SystemException_t176217640
{
public:
	// System.Type[] System.Reflection.ReflectionTypeLoadException::_classes
	TypeU5BU5D_t3940880105* ____classes_17;
	// System.Exception[] System.Reflection.ReflectionTypeLoadException::_exceptions
	ExceptionU5BU5D_t2535001212* ____exceptions_18;

public:
	inline static int32_t get_offset_of__classes_17() { return static_cast<int32_t>(offsetof(ReflectionTypeLoadException_t440884068, ____classes_17)); }
	inline TypeU5BU5D_t3940880105* get__classes_17() const { return ____classes_17; }
	inline TypeU5BU5D_t3940880105** get_address_of__classes_17() { return &____classes_17; }
	inline void set__classes_17(TypeU5BU5D_t3940880105* value)
	{
		____classes_17 = value;
		Il2CppCodeGenWriteBarrier((&____classes_17), value);
	}

	inline static int32_t get_offset_of__exceptions_18() { return static_cast<int32_t>(offsetof(ReflectionTypeLoadException_t440884068, ____exceptions_18)); }
	inline ExceptionU5BU5D_t2535001212* get__exceptions_18() const { return ____exceptions_18; }
	inline ExceptionU5BU5D_t2535001212** get_address_of__exceptions_18() { return &____exceptions_18; }
	inline void set__exceptions_18(ExceptionU5BU5D_t2535001212* value)
	{
		____exceptions_18 = value;
		Il2CppCodeGenWriteBarrier((&____exceptions_18), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REFLECTIONTYPELOADEXCEPTION_T440884068_H
#ifndef RESOLVETOKENERROR_T3520275515_H
#define RESOLVETOKENERROR_T3520275515_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.ResolveTokenError
struct  ResolveTokenError_t3520275515 
{
public:
	// System.Int32 System.Reflection.ResolveTokenError::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ResolveTokenError_t3520275515, ___value___2)); }
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
#endif // RESOLVETOKENERROR_T3520275515_H
#ifndef RESOURCEATTRIBUTES_T3997964906_H
#define RESOURCEATTRIBUTES_T3997964906_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.ResourceAttributes
struct  ResourceAttributes_t3997964906 
{
public:
	// System.Int32 System.Reflection.ResourceAttributes::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ResourceAttributes_t3997964906, ___value___2)); }
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
#endif // RESOURCEATTRIBUTES_T3997964906_H
#ifndef RUNTIMEEVENTINFO_T842299361_H
#define RUNTIMEEVENTINFO_T842299361_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.RuntimeEventInfo
struct  RuntimeEventInfo_t842299361  : public EventInfo_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEEVENTINFO_T842299361_H
#ifndef RUNTIMEFIELDINFO_T4270975280_H
#define RUNTIMEFIELDINFO_T4270975280_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.RuntimeFieldInfo
struct  RuntimeFieldInfo_t4270975280  : public FieldInfo_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEFIELDINFO_T4270975280_H
#ifndef RUNTIMEPROPERTYINFO_T1784655210_H
#define RUNTIMEPROPERTYINFO_T1784655210_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.RuntimePropertyInfo
struct  RuntimePropertyInfo_t1784655210  : public PropertyInfo_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEPROPERTYINFO_T1784655210_H
#ifndef TARGETEXCEPTION_T3386045725_H
#define TARGETEXCEPTION_T3386045725_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.TargetException
struct  TargetException_t3386045725  : public ApplicationException_t2339761290
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TARGETEXCEPTION_T3386045725_H
#ifndef TARGETINVOCATIONEXCEPTION_T4266643902_H
#define TARGETINVOCATIONEXCEPTION_T4266643902_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.TargetInvocationException
struct  TargetInvocationException_t4266643902  : public ApplicationException_t2339761290
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TARGETINVOCATIONEXCEPTION_T4266643902_H
#ifndef TARGETPARAMETERCOUNTEXCEPTION_T1216617239_H
#define TARGETPARAMETERCOUNTEXCEPTION_T1216617239_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.TargetParameterCountException
struct  TargetParameterCountException_t1216617239  : public ApplicationException_t2339761290
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TARGETPARAMETERCOUNTEXCEPTION_T1216617239_H
#ifndef TYPEATTRIBUTES_T113483779_H
#define TYPEATTRIBUTES_T113483779_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.TypeAttributes
struct  TypeAttributes_t113483779 
{
public:
	// System.Int32 System.Reflection.TypeAttributes::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TypeAttributes_t113483779, ___value___2)); }
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
#endif // TYPEATTRIBUTES_T113483779_H
#ifndef RUNTIMEFIELDHANDLE_T1871169219_H
#define RUNTIMEFIELDHANDLE_T1871169219_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.RuntimeFieldHandle
struct  RuntimeFieldHandle_t1871169219 
{
public:
	// System.IntPtr System.RuntimeFieldHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeFieldHandle_t1871169219, ___value_0)); }
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
#endif // RUNTIMEFIELDHANDLE_T1871169219_H
#ifndef RUNTIMEMETHODHANDLE_T1133924984_H
#define RUNTIMEMETHODHANDLE_T1133924984_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.RuntimeMethodHandle
struct  RuntimeMethodHandle_t1133924984 
{
public:
	// System.IntPtr System.RuntimeMethodHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeMethodHandle_t1133924984, ___value_0)); }
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
#endif // RUNTIMEMETHODHANDLE_T1133924984_H
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
#ifndef SECURITYACTION_T569814076_H
#define SECURITYACTION_T569814076_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Permissions.SecurityAction
struct  SecurityAction_t569814076 
{
public:
	// System.Int32 System.Security.Permissions.SecurityAction::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SecurityAction_t569814076, ___value___2)); }
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
#endif // SECURITYACTION_T569814076_H
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
#ifndef ASSEMBLYNAME_T270931938_H
#define ASSEMBLYNAME_T270931938_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.AssemblyName
struct  AssemblyName_t270931938  : public RuntimeObject
{
public:
	// System.String System.Reflection.AssemblyName::name
	String_t* ___name_0;
	// System.String System.Reflection.AssemblyName::codebase
	String_t* ___codebase_1;
	// System.Int32 System.Reflection.AssemblyName::major
	int32_t ___major_2;
	// System.Int32 System.Reflection.AssemblyName::minor
	int32_t ___minor_3;
	// System.Int32 System.Reflection.AssemblyName::build
	int32_t ___build_4;
	// System.Int32 System.Reflection.AssemblyName::revision
	int32_t ___revision_5;
	// System.Globalization.CultureInfo System.Reflection.AssemblyName::cultureinfo
	CultureInfo_t4157843068 * ___cultureinfo_6;
	// System.Reflection.AssemblyNameFlags System.Reflection.AssemblyName::flags
	int32_t ___flags_7;
	// System.Configuration.Assemblies.AssemblyHashAlgorithm System.Reflection.AssemblyName::hashalg
	int32_t ___hashalg_8;
	// System.Reflection.StrongNameKeyPair System.Reflection.AssemblyName::keypair
	StrongNameKeyPair_t3411219591 * ___keypair_9;
	// System.Byte[] System.Reflection.AssemblyName::publicKey
	ByteU5BU5D_t4116647657* ___publicKey_10;
	// System.Byte[] System.Reflection.AssemblyName::keyToken
	ByteU5BU5D_t4116647657* ___keyToken_11;
	// System.Configuration.Assemblies.AssemblyVersionCompatibility System.Reflection.AssemblyName::versioncompat
	int32_t ___versioncompat_12;
	// System.Version System.Reflection.AssemblyName::version
	Version_t3456873960 * ___version_13;
	// System.Reflection.ProcessorArchitecture System.Reflection.AssemblyName::processor_architecture
	int32_t ___processor_architecture_14;
	// System.Reflection.AssemblyContentType System.Reflection.AssemblyName::contentType
	int32_t ___contentType_15;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(AssemblyName_t270931938, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier((&___name_0), value);
	}

	inline static int32_t get_offset_of_codebase_1() { return static_cast<int32_t>(offsetof(AssemblyName_t270931938, ___codebase_1)); }
	inline String_t* get_codebase_1() const { return ___codebase_1; }
	inline String_t** get_address_of_codebase_1() { return &___codebase_1; }
	inline void set_codebase_1(String_t* value)
	{
		___codebase_1 = value;
		Il2CppCodeGenWriteBarrier((&___codebase_1), value);
	}

	inline static int32_t get_offset_of_major_2() { return static_cast<int32_t>(offsetof(AssemblyName_t270931938, ___major_2)); }
	inline int32_t get_major_2() const { return ___major_2; }
	inline int32_t* get_address_of_major_2() { return &___major_2; }
	inline void set_major_2(int32_t value)
	{
		___major_2 = value;
	}

	inline static int32_t get_offset_of_minor_3() { return static_cast<int32_t>(offsetof(AssemblyName_t270931938, ___minor_3)); }
	inline int32_t get_minor_3() const { return ___minor_3; }
	inline int32_t* get_address_of_minor_3() { return &___minor_3; }
	inline void set_minor_3(int32_t value)
	{
		___minor_3 = value;
	}

	inline static int32_t get_offset_of_build_4() { return static_cast<int32_t>(offsetof(AssemblyName_t270931938, ___build_4)); }
	inline int32_t get_build_4() const { return ___build_4; }
	inline int32_t* get_address_of_build_4() { return &___build_4; }
	inline void set_build_4(int32_t value)
	{
		___build_4 = value;
	}

	inline static int32_t get_offset_of_revision_5() { return static_cast<int32_t>(offsetof(AssemblyName_t270931938, ___revision_5)); }
	inline int32_t get_revision_5() const { return ___revision_5; }
	inline int32_t* get_address_of_revision_5() { return &___revision_5; }
	inline void set_revision_5(int32_t value)
	{
		___revision_5 = value;
	}

	inline static int32_t get_offset_of_cultureinfo_6() { return static_cast<int32_t>(offsetof(AssemblyName_t270931938, ___cultureinfo_6)); }
	inline CultureInfo_t4157843068 * get_cultureinfo_6() const { return ___cultureinfo_6; }
	inline CultureInfo_t4157843068 ** get_address_of_cultureinfo_6() { return &___cultureinfo_6; }
	inline void set_cultureinfo_6(CultureInfo_t4157843068 * value)
	{
		___cultureinfo_6 = value;
		Il2CppCodeGenWriteBarrier((&___cultureinfo_6), value);
	}

	inline static int32_t get_offset_of_flags_7() { return static_cast<int32_t>(offsetof(AssemblyName_t270931938, ___flags_7)); }
	inline int32_t get_flags_7() const { return ___flags_7; }
	inline int32_t* get_address_of_flags_7() { return &___flags_7; }
	inline void set_flags_7(int32_t value)
	{
		___flags_7 = value;
	}

	inline static int32_t get_offset_of_hashalg_8() { return static_cast<int32_t>(offsetof(AssemblyName_t270931938, ___hashalg_8)); }
	inline int32_t get_hashalg_8() const { return ___hashalg_8; }
	inline int32_t* get_address_of_hashalg_8() { return &___hashalg_8; }
	inline void set_hashalg_8(int32_t value)
	{
		___hashalg_8 = value;
	}

	inline static int32_t get_offset_of_keypair_9() { return static_cast<int32_t>(offsetof(AssemblyName_t270931938, ___keypair_9)); }
	inline StrongNameKeyPair_t3411219591 * get_keypair_9() const { return ___keypair_9; }
	inline StrongNameKeyPair_t3411219591 ** get_address_of_keypair_9() { return &___keypair_9; }
	inline void set_keypair_9(StrongNameKeyPair_t3411219591 * value)
	{
		___keypair_9 = value;
		Il2CppCodeGenWriteBarrier((&___keypair_9), value);
	}

	inline static int32_t get_offset_of_publicKey_10() { return static_cast<int32_t>(offsetof(AssemblyName_t270931938, ___publicKey_10)); }
	inline ByteU5BU5D_t4116647657* get_publicKey_10() const { return ___publicKey_10; }
	inline ByteU5BU5D_t4116647657** get_address_of_publicKey_10() { return &___publicKey_10; }
	inline void set_publicKey_10(ByteU5BU5D_t4116647657* value)
	{
		___publicKey_10 = value;
		Il2CppCodeGenWriteBarrier((&___publicKey_10), value);
	}

	inline static int32_t get_offset_of_keyToken_11() { return static_cast<int32_t>(offsetof(AssemblyName_t270931938, ___keyToken_11)); }
	inline ByteU5BU5D_t4116647657* get_keyToken_11() const { return ___keyToken_11; }
	inline ByteU5BU5D_t4116647657** get_address_of_keyToken_11() { return &___keyToken_11; }
	inline void set_keyToken_11(ByteU5BU5D_t4116647657* value)
	{
		___keyToken_11 = value;
		Il2CppCodeGenWriteBarrier((&___keyToken_11), value);
	}

	inline static int32_t get_offset_of_versioncompat_12() { return static_cast<int32_t>(offsetof(AssemblyName_t270931938, ___versioncompat_12)); }
	inline int32_t get_versioncompat_12() const { return ___versioncompat_12; }
	inline int32_t* get_address_of_versioncompat_12() { return &___versioncompat_12; }
	inline void set_versioncompat_12(int32_t value)
	{
		___versioncompat_12 = value;
	}

	inline static int32_t get_offset_of_version_13() { return static_cast<int32_t>(offsetof(AssemblyName_t270931938, ___version_13)); }
	inline Version_t3456873960 * get_version_13() const { return ___version_13; }
	inline Version_t3456873960 ** get_address_of_version_13() { return &___version_13; }
	inline void set_version_13(Version_t3456873960 * value)
	{
		___version_13 = value;
		Il2CppCodeGenWriteBarrier((&___version_13), value);
	}

	inline static int32_t get_offset_of_processor_architecture_14() { return static_cast<int32_t>(offsetof(AssemblyName_t270931938, ___processor_architecture_14)); }
	inline int32_t get_processor_architecture_14() const { return ___processor_architecture_14; }
	inline int32_t* get_address_of_processor_architecture_14() { return &___processor_architecture_14; }
	inline void set_processor_architecture_14(int32_t value)
	{
		___processor_architecture_14 = value;
	}

	inline static int32_t get_offset_of_contentType_15() { return static_cast<int32_t>(offsetof(AssemblyName_t270931938, ___contentType_15)); }
	inline int32_t get_contentType_15() const { return ___contentType_15; }
	inline int32_t* get_address_of_contentType_15() { return &___contentType_15; }
	inline void set_contentType_15(int32_t value)
	{
		___contentType_15 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Reflection.AssemblyName
struct AssemblyName_t270931938_marshaled_pinvoke
{
	char* ___name_0;
	char* ___codebase_1;
	int32_t ___major_2;
	int32_t ___minor_3;
	int32_t ___build_4;
	int32_t ___revision_5;
	CultureInfo_t4157843068_marshaled_pinvoke* ___cultureinfo_6;
	int32_t ___flags_7;
	int32_t ___hashalg_8;
	StrongNameKeyPair_t3411219591 * ___keypair_9;
	uint8_t* ___publicKey_10;
	uint8_t* ___keyToken_11;
	int32_t ___versioncompat_12;
	Version_t3456873960 * ___version_13;
	int32_t ___processor_architecture_14;
	int32_t ___contentType_15;
};
// Native definition for COM marshalling of System.Reflection.AssemblyName
struct AssemblyName_t270931938_marshaled_com
{
	Il2CppChar* ___name_0;
	Il2CppChar* ___codebase_1;
	int32_t ___major_2;
	int32_t ___minor_3;
	int32_t ___build_4;
	int32_t ___revision_5;
	CultureInfo_t4157843068_marshaled_com* ___cultureinfo_6;
	int32_t ___flags_7;
	int32_t ___hashalg_8;
	StrongNameKeyPair_t3411219591 * ___keypair_9;
	uint8_t* ___publicKey_10;
	uint8_t* ___keyToken_11;
	int32_t ___versioncompat_12;
	Version_t3456873960 * ___version_13;
	int32_t ___processor_architecture_14;
	int32_t ___contentType_15;
};
#endif // ASSEMBLYNAME_T270931938_H
#ifndef CUSTOMATTRIBUTEFORMATEXCEPTION_T3940777761_H
#define CUSTOMATTRIBUTEFORMATEXCEPTION_T3940777761_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.CustomAttributeFormatException
struct  CustomAttributeFormatException_t3940777761  : public FormatException_t154580423
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CUSTOMATTRIBUTEFORMATEXCEPTION_T3940777761_H
#ifndef ASSEMBLYBUILDER_T359885250_H
#define ASSEMBLYBUILDER_T359885250_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.Emit.AssemblyBuilder
struct  AssemblyBuilder_t359885250  : public Assembly_t
{
public:
	// System.UIntPtr System.Reflection.Emit.AssemblyBuilder::dynamic_assembly
	uintptr_t ___dynamic_assembly_10;
	// System.Reflection.MethodInfo System.Reflection.Emit.AssemblyBuilder::entry_point
	MethodInfo_t * ___entry_point_11;
	// System.Reflection.Emit.ModuleBuilder[] System.Reflection.Emit.AssemblyBuilder::modules
	ModuleBuilderU5BU5D_t2441092650* ___modules_12;
	// System.String System.Reflection.Emit.AssemblyBuilder::name
	String_t* ___name_13;
	// System.String System.Reflection.Emit.AssemblyBuilder::dir
	String_t* ___dir_14;
	// System.Reflection.Emit.CustomAttributeBuilder[] System.Reflection.Emit.AssemblyBuilder::cattrs
	CustomAttributeBuilderU5BU5D_t2951373564* ___cattrs_15;
	// System.Reflection.Emit.MonoResource[] System.Reflection.Emit.AssemblyBuilder::resources
	MonoResourceU5BU5D_t979189380* ___resources_16;
	// System.Byte[] System.Reflection.Emit.AssemblyBuilder::public_key
	ByteU5BU5D_t4116647657* ___public_key_17;
	// System.String System.Reflection.Emit.AssemblyBuilder::version
	String_t* ___version_18;
	// System.String System.Reflection.Emit.AssemblyBuilder::culture
	String_t* ___culture_19;
	// System.UInt32 System.Reflection.Emit.AssemblyBuilder::algid
	uint32_t ___algid_20;
	// System.UInt32 System.Reflection.Emit.AssemblyBuilder::flags
	uint32_t ___flags_21;
	// System.Reflection.Emit.PEFileKinds System.Reflection.Emit.AssemblyBuilder::pekind
	int32_t ___pekind_22;
	// System.Boolean System.Reflection.Emit.AssemblyBuilder::delay_sign
	bool ___delay_sign_23;
	// System.UInt32 System.Reflection.Emit.AssemblyBuilder::access
	uint32_t ___access_24;
	// System.Reflection.Module[] System.Reflection.Emit.AssemblyBuilder::loaded_modules
	ModuleU5BU5D_t4238763736* ___loaded_modules_25;
	// System.Reflection.Emit.MonoWin32Resource[] System.Reflection.Emit.AssemblyBuilder::win32_resources
	MonoWin32ResourceU5BU5D_t4084032906* ___win32_resources_26;
	// System.Reflection.Emit.RefEmitPermissionSet[] System.Reflection.Emit.AssemblyBuilder::permissions_minimum
	RefEmitPermissionSetU5BU5D_t567451178* ___permissions_minimum_27;
	// System.Reflection.Emit.RefEmitPermissionSet[] System.Reflection.Emit.AssemblyBuilder::permissions_optional
	RefEmitPermissionSetU5BU5D_t567451178* ___permissions_optional_28;
	// System.Reflection.Emit.RefEmitPermissionSet[] System.Reflection.Emit.AssemblyBuilder::permissions_refused
	RefEmitPermissionSetU5BU5D_t567451178* ___permissions_refused_29;
	// System.Reflection.PortableExecutableKinds System.Reflection.Emit.AssemblyBuilder::peKind
	int32_t ___peKind_30;
	// System.Reflection.ImageFileMachine System.Reflection.Emit.AssemblyBuilder::machine
	int32_t ___machine_31;
	// System.Boolean System.Reflection.Emit.AssemblyBuilder::corlib_internal
	bool ___corlib_internal_32;
	// System.Type[] System.Reflection.Emit.AssemblyBuilder::type_forwarders
	TypeU5BU5D_t3940880105* ___type_forwarders_33;
	// System.Byte[] System.Reflection.Emit.AssemblyBuilder::pktoken
	ByteU5BU5D_t4116647657* ___pktoken_34;
	// System.Type System.Reflection.Emit.AssemblyBuilder::corlib_object_type
	Type_t * ___corlib_object_type_35;
	// System.Type System.Reflection.Emit.AssemblyBuilder::corlib_value_type
	Type_t * ___corlib_value_type_36;
	// System.Type System.Reflection.Emit.AssemblyBuilder::corlib_enum_type
	Type_t * ___corlib_enum_type_37;
	// System.Type System.Reflection.Emit.AssemblyBuilder::corlib_void_type
	Type_t * ___corlib_void_type_38;
	// System.Collections.ArrayList System.Reflection.Emit.AssemblyBuilder::resource_writers
	ArrayList_t2718874744 * ___resource_writers_39;
	// System.Resources.Win32VersionResource System.Reflection.Emit.AssemblyBuilder::version_res
	Win32VersionResource_t1367628464 * ___version_res_40;
	// System.Boolean System.Reflection.Emit.AssemblyBuilder::created
	bool ___created_41;
	// System.Boolean System.Reflection.Emit.AssemblyBuilder::is_module_only
	bool ___is_module_only_42;
	// Mono.Security.StrongName System.Reflection.Emit.AssemblyBuilder::sn
	StrongName_t4093849377 * ___sn_43;
	// System.Reflection.Emit.NativeResourceType System.Reflection.Emit.AssemblyBuilder::native_resource
	int32_t ___native_resource_44;
	// System.String System.Reflection.Emit.AssemblyBuilder::versioninfo_culture
	String_t* ___versioninfo_culture_45;
	// System.Reflection.Emit.ModuleBuilder System.Reflection.Emit.AssemblyBuilder::manifest_module
	ModuleBuilder_t731887691 * ___manifest_module_47;

public:
	inline static int32_t get_offset_of_dynamic_assembly_10() { return static_cast<int32_t>(offsetof(AssemblyBuilder_t359885250, ___dynamic_assembly_10)); }
	inline uintptr_t get_dynamic_assembly_10() const { return ___dynamic_assembly_10; }
	inline uintptr_t* get_address_of_dynamic_assembly_10() { return &___dynamic_assembly_10; }
	inline void set_dynamic_assembly_10(uintptr_t value)
	{
		___dynamic_assembly_10 = value;
	}

	inline static int32_t get_offset_of_entry_point_11() { return static_cast<int32_t>(offsetof(AssemblyBuilder_t359885250, ___entry_point_11)); }
	inline MethodInfo_t * get_entry_point_11() const { return ___entry_point_11; }
	inline MethodInfo_t ** get_address_of_entry_point_11() { return &___entry_point_11; }
	inline void set_entry_point_11(MethodInfo_t * value)
	{
		___entry_point_11 = value;
		Il2CppCodeGenWriteBarrier((&___entry_point_11), value);
	}

	inline static int32_t get_offset_of_modules_12() { return static_cast<int32_t>(offsetof(AssemblyBuilder_t359885250, ___modules_12)); }
	inline ModuleBuilderU5BU5D_t2441092650* get_modules_12() const { return ___modules_12; }
	inline ModuleBuilderU5BU5D_t2441092650** get_address_of_modules_12() { return &___modules_12; }
	inline void set_modules_12(ModuleBuilderU5BU5D_t2441092650* value)
	{
		___modules_12 = value;
		Il2CppCodeGenWriteBarrier((&___modules_12), value);
	}

	inline static int32_t get_offset_of_name_13() { return static_cast<int32_t>(offsetof(AssemblyBuilder_t359885250, ___name_13)); }
	inline String_t* get_name_13() const { return ___name_13; }
	inline String_t** get_address_of_name_13() { return &___name_13; }
	inline void set_name_13(String_t* value)
	{
		___name_13 = value;
		Il2CppCodeGenWriteBarrier((&___name_13), value);
	}

	inline static int32_t get_offset_of_dir_14() { return static_cast<int32_t>(offsetof(AssemblyBuilder_t359885250, ___dir_14)); }
	inline String_t* get_dir_14() const { return ___dir_14; }
	inline String_t** get_address_of_dir_14() { return &___dir_14; }
	inline void set_dir_14(String_t* value)
	{
		___dir_14 = value;
		Il2CppCodeGenWriteBarrier((&___dir_14), value);
	}

	inline static int32_t get_offset_of_cattrs_15() { return static_cast<int32_t>(offsetof(AssemblyBuilder_t359885250, ___cattrs_15)); }
	inline CustomAttributeBuilderU5BU5D_t2951373564* get_cattrs_15() const { return ___cattrs_15; }
	inline CustomAttributeBuilderU5BU5D_t2951373564** get_address_of_cattrs_15() { return &___cattrs_15; }
	inline void set_cattrs_15(CustomAttributeBuilderU5BU5D_t2951373564* value)
	{
		___cattrs_15 = value;
		Il2CppCodeGenWriteBarrier((&___cattrs_15), value);
	}

	inline static int32_t get_offset_of_resources_16() { return static_cast<int32_t>(offsetof(AssemblyBuilder_t359885250, ___resources_16)); }
	inline MonoResourceU5BU5D_t979189380* get_resources_16() const { return ___resources_16; }
	inline MonoResourceU5BU5D_t979189380** get_address_of_resources_16() { return &___resources_16; }
	inline void set_resources_16(MonoResourceU5BU5D_t979189380* value)
	{
		___resources_16 = value;
		Il2CppCodeGenWriteBarrier((&___resources_16), value);
	}

	inline static int32_t get_offset_of_public_key_17() { return static_cast<int32_t>(offsetof(AssemblyBuilder_t359885250, ___public_key_17)); }
	inline ByteU5BU5D_t4116647657* get_public_key_17() const { return ___public_key_17; }
	inline ByteU5BU5D_t4116647657** get_address_of_public_key_17() { return &___public_key_17; }
	inline void set_public_key_17(ByteU5BU5D_t4116647657* value)
	{
		___public_key_17 = value;
		Il2CppCodeGenWriteBarrier((&___public_key_17), value);
	}

	inline static int32_t get_offset_of_version_18() { return static_cast<int32_t>(offsetof(AssemblyBuilder_t359885250, ___version_18)); }
	inline String_t* get_version_18() const { return ___version_18; }
	inline String_t** get_address_of_version_18() { return &___version_18; }
	inline void set_version_18(String_t* value)
	{
		___version_18 = value;
		Il2CppCodeGenWriteBarrier((&___version_18), value);
	}

	inline static int32_t get_offset_of_culture_19() { return static_cast<int32_t>(offsetof(AssemblyBuilder_t359885250, ___culture_19)); }
	inline String_t* get_culture_19() const { return ___culture_19; }
	inline String_t** get_address_of_culture_19() { return &___culture_19; }
	inline void set_culture_19(String_t* value)
	{
		___culture_19 = value;
		Il2CppCodeGenWriteBarrier((&___culture_19), value);
	}

	inline static int32_t get_offset_of_algid_20() { return static_cast<int32_t>(offsetof(AssemblyBuilder_t359885250, ___algid_20)); }
	inline uint32_t get_algid_20() const { return ___algid_20; }
	inline uint32_t* get_address_of_algid_20() { return &___algid_20; }
	inline void set_algid_20(uint32_t value)
	{
		___algid_20 = value;
	}

	inline static int32_t get_offset_of_flags_21() { return static_cast<int32_t>(offsetof(AssemblyBuilder_t359885250, ___flags_21)); }
	inline uint32_t get_flags_21() const { return ___flags_21; }
	inline uint32_t* get_address_of_flags_21() { return &___flags_21; }
	inline void set_flags_21(uint32_t value)
	{
		___flags_21 = value;
	}

	inline static int32_t get_offset_of_pekind_22() { return static_cast<int32_t>(offsetof(AssemblyBuilder_t359885250, ___pekind_22)); }
	inline int32_t get_pekind_22() const { return ___pekind_22; }
	inline int32_t* get_address_of_pekind_22() { return &___pekind_22; }
	inline void set_pekind_22(int32_t value)
	{
		___pekind_22 = value;
	}

	inline static int32_t get_offset_of_delay_sign_23() { return static_cast<int32_t>(offsetof(AssemblyBuilder_t359885250, ___delay_sign_23)); }
	inline bool get_delay_sign_23() const { return ___delay_sign_23; }
	inline bool* get_address_of_delay_sign_23() { return &___delay_sign_23; }
	inline void set_delay_sign_23(bool value)
	{
		___delay_sign_23 = value;
	}

	inline static int32_t get_offset_of_access_24() { return static_cast<int32_t>(offsetof(AssemblyBuilder_t359885250, ___access_24)); }
	inline uint32_t get_access_24() const { return ___access_24; }
	inline uint32_t* get_address_of_access_24() { return &___access_24; }
	inline void set_access_24(uint32_t value)
	{
		___access_24 = value;
	}

	inline static int32_t get_offset_of_loaded_modules_25() { return static_cast<int32_t>(offsetof(AssemblyBuilder_t359885250, ___loaded_modules_25)); }
	inline ModuleU5BU5D_t4238763736* get_loaded_modules_25() const { return ___loaded_modules_25; }
	inline ModuleU5BU5D_t4238763736** get_address_of_loaded_modules_25() { return &___loaded_modules_25; }
	inline void set_loaded_modules_25(ModuleU5BU5D_t4238763736* value)
	{
		___loaded_modules_25 = value;
		Il2CppCodeGenWriteBarrier((&___loaded_modules_25), value);
	}

	inline static int32_t get_offset_of_win32_resources_26() { return static_cast<int32_t>(offsetof(AssemblyBuilder_t359885250, ___win32_resources_26)); }
	inline MonoWin32ResourceU5BU5D_t4084032906* get_win32_resources_26() const { return ___win32_resources_26; }
	inline MonoWin32ResourceU5BU5D_t4084032906** get_address_of_win32_resources_26() { return &___win32_resources_26; }
	inline void set_win32_resources_26(MonoWin32ResourceU5BU5D_t4084032906* value)
	{
		___win32_resources_26 = value;
		Il2CppCodeGenWriteBarrier((&___win32_resources_26), value);
	}

	inline static int32_t get_offset_of_permissions_minimum_27() { return static_cast<int32_t>(offsetof(AssemblyBuilder_t359885250, ___permissions_minimum_27)); }
	inline RefEmitPermissionSetU5BU5D_t567451178* get_permissions_minimum_27() const { return ___permissions_minimum_27; }
	inline RefEmitPermissionSetU5BU5D_t567451178** get_address_of_permissions_minimum_27() { return &___permissions_minimum_27; }
	inline void set_permissions_minimum_27(RefEmitPermissionSetU5BU5D_t567451178* value)
	{
		___permissions_minimum_27 = value;
		Il2CppCodeGenWriteBarrier((&___permissions_minimum_27), value);
	}

	inline static int32_t get_offset_of_permissions_optional_28() { return static_cast<int32_t>(offsetof(AssemblyBuilder_t359885250, ___permissions_optional_28)); }
	inline RefEmitPermissionSetU5BU5D_t567451178* get_permissions_optional_28() const { return ___permissions_optional_28; }
	inline RefEmitPermissionSetU5BU5D_t567451178** get_address_of_permissions_optional_28() { return &___permissions_optional_28; }
	inline void set_permissions_optional_28(RefEmitPermissionSetU5BU5D_t567451178* value)
	{
		___permissions_optional_28 = value;
		Il2CppCodeGenWriteBarrier((&___permissions_optional_28), value);
	}

	inline static int32_t get_offset_of_permissions_refused_29() { return static_cast<int32_t>(offsetof(AssemblyBuilder_t359885250, ___permissions_refused_29)); }
	inline RefEmitPermissionSetU5BU5D_t567451178* get_permissions_refused_29() const { return ___permissions_refused_29; }
	inline RefEmitPermissionSetU5BU5D_t567451178** get_address_of_permissions_refused_29() { return &___permissions_refused_29; }
	inline void set_permissions_refused_29(RefEmitPermissionSetU5BU5D_t567451178* value)
	{
		___permissions_refused_29 = value;
		Il2CppCodeGenWriteBarrier((&___permissions_refused_29), value);
	}

	inline static int32_t get_offset_of_peKind_30() { return static_cast<int32_t>(offsetof(AssemblyBuilder_t359885250, ___peKind_30)); }
	inline int32_t get_peKind_30() const { return ___peKind_30; }
	inline int32_t* get_address_of_peKind_30() { return &___peKind_30; }
	inline void set_peKind_30(int32_t value)
	{
		___peKind_30 = value;
	}

	inline static int32_t get_offset_of_machine_31() { return static_cast<int32_t>(offsetof(AssemblyBuilder_t359885250, ___machine_31)); }
	inline int32_t get_machine_31() const { return ___machine_31; }
	inline int32_t* get_address_of_machine_31() { return &___machine_31; }
	inline void set_machine_31(int32_t value)
	{
		___machine_31 = value;
	}

	inline static int32_t get_offset_of_corlib_internal_32() { return static_cast<int32_t>(offsetof(AssemblyBuilder_t359885250, ___corlib_internal_32)); }
	inline bool get_corlib_internal_32() const { return ___corlib_internal_32; }
	inline bool* get_address_of_corlib_internal_32() { return &___corlib_internal_32; }
	inline void set_corlib_internal_32(bool value)
	{
		___corlib_internal_32 = value;
	}

	inline static int32_t get_offset_of_type_forwarders_33() { return static_cast<int32_t>(offsetof(AssemblyBuilder_t359885250, ___type_forwarders_33)); }
	inline TypeU5BU5D_t3940880105* get_type_forwarders_33() const { return ___type_forwarders_33; }
	inline TypeU5BU5D_t3940880105** get_address_of_type_forwarders_33() { return &___type_forwarders_33; }
	inline void set_type_forwarders_33(TypeU5BU5D_t3940880105* value)
	{
		___type_forwarders_33 = value;
		Il2CppCodeGenWriteBarrier((&___type_forwarders_33), value);
	}

	inline static int32_t get_offset_of_pktoken_34() { return static_cast<int32_t>(offsetof(AssemblyBuilder_t359885250, ___pktoken_34)); }
	inline ByteU5BU5D_t4116647657* get_pktoken_34() const { return ___pktoken_34; }
	inline ByteU5BU5D_t4116647657** get_address_of_pktoken_34() { return &___pktoken_34; }
	inline void set_pktoken_34(ByteU5BU5D_t4116647657* value)
	{
		___pktoken_34 = value;
		Il2CppCodeGenWriteBarrier((&___pktoken_34), value);
	}

	inline static int32_t get_offset_of_corlib_object_type_35() { return static_cast<int32_t>(offsetof(AssemblyBuilder_t359885250, ___corlib_object_type_35)); }
	inline Type_t * get_corlib_object_type_35() const { return ___corlib_object_type_35; }
	inline Type_t ** get_address_of_corlib_object_type_35() { return &___corlib_object_type_35; }
	inline void set_corlib_object_type_35(Type_t * value)
	{
		___corlib_object_type_35 = value;
		Il2CppCodeGenWriteBarrier((&___corlib_object_type_35), value);
	}

	inline static int32_t get_offset_of_corlib_value_type_36() { return static_cast<int32_t>(offsetof(AssemblyBuilder_t359885250, ___corlib_value_type_36)); }
	inline Type_t * get_corlib_value_type_36() const { return ___corlib_value_type_36; }
	inline Type_t ** get_address_of_corlib_value_type_36() { return &___corlib_value_type_36; }
	inline void set_corlib_value_type_36(Type_t * value)
	{
		___corlib_value_type_36 = value;
		Il2CppCodeGenWriteBarrier((&___corlib_value_type_36), value);
	}

	inline static int32_t get_offset_of_corlib_enum_type_37() { return static_cast<int32_t>(offsetof(AssemblyBuilder_t359885250, ___corlib_enum_type_37)); }
	inline Type_t * get_corlib_enum_type_37() const { return ___corlib_enum_type_37; }
	inline Type_t ** get_address_of_corlib_enum_type_37() { return &___corlib_enum_type_37; }
	inline void set_corlib_enum_type_37(Type_t * value)
	{
		___corlib_enum_type_37 = value;
		Il2CppCodeGenWriteBarrier((&___corlib_enum_type_37), value);
	}

	inline static int32_t get_offset_of_corlib_void_type_38() { return static_cast<int32_t>(offsetof(AssemblyBuilder_t359885250, ___corlib_void_type_38)); }
	inline Type_t * get_corlib_void_type_38() const { return ___corlib_void_type_38; }
	inline Type_t ** get_address_of_corlib_void_type_38() { return &___corlib_void_type_38; }
	inline void set_corlib_void_type_38(Type_t * value)
	{
		___corlib_void_type_38 = value;
		Il2CppCodeGenWriteBarrier((&___corlib_void_type_38), value);
	}

	inline static int32_t get_offset_of_resource_writers_39() { return static_cast<int32_t>(offsetof(AssemblyBuilder_t359885250, ___resource_writers_39)); }
	inline ArrayList_t2718874744 * get_resource_writers_39() const { return ___resource_writers_39; }
	inline ArrayList_t2718874744 ** get_address_of_resource_writers_39() { return &___resource_writers_39; }
	inline void set_resource_writers_39(ArrayList_t2718874744 * value)
	{
		___resource_writers_39 = value;
		Il2CppCodeGenWriteBarrier((&___resource_writers_39), value);
	}

	inline static int32_t get_offset_of_version_res_40() { return static_cast<int32_t>(offsetof(AssemblyBuilder_t359885250, ___version_res_40)); }
	inline Win32VersionResource_t1367628464 * get_version_res_40() const { return ___version_res_40; }
	inline Win32VersionResource_t1367628464 ** get_address_of_version_res_40() { return &___version_res_40; }
	inline void set_version_res_40(Win32VersionResource_t1367628464 * value)
	{
		___version_res_40 = value;
		Il2CppCodeGenWriteBarrier((&___version_res_40), value);
	}

	inline static int32_t get_offset_of_created_41() { return static_cast<int32_t>(offsetof(AssemblyBuilder_t359885250, ___created_41)); }
	inline bool get_created_41() const { return ___created_41; }
	inline bool* get_address_of_created_41() { return &___created_41; }
	inline void set_created_41(bool value)
	{
		___created_41 = value;
	}

	inline static int32_t get_offset_of_is_module_only_42() { return static_cast<int32_t>(offsetof(AssemblyBuilder_t359885250, ___is_module_only_42)); }
	inline bool get_is_module_only_42() const { return ___is_module_only_42; }
	inline bool* get_address_of_is_module_only_42() { return &___is_module_only_42; }
	inline void set_is_module_only_42(bool value)
	{
		___is_module_only_42 = value;
	}

	inline static int32_t get_offset_of_sn_43() { return static_cast<int32_t>(offsetof(AssemblyBuilder_t359885250, ___sn_43)); }
	inline StrongName_t4093849377 * get_sn_43() const { return ___sn_43; }
	inline StrongName_t4093849377 ** get_address_of_sn_43() { return &___sn_43; }
	inline void set_sn_43(StrongName_t4093849377 * value)
	{
		___sn_43 = value;
		Il2CppCodeGenWriteBarrier((&___sn_43), value);
	}

	inline static int32_t get_offset_of_native_resource_44() { return static_cast<int32_t>(offsetof(AssemblyBuilder_t359885250, ___native_resource_44)); }
	inline int32_t get_native_resource_44() const { return ___native_resource_44; }
	inline int32_t* get_address_of_native_resource_44() { return &___native_resource_44; }
	inline void set_native_resource_44(int32_t value)
	{
		___native_resource_44 = value;
	}

	inline static int32_t get_offset_of_versioninfo_culture_45() { return static_cast<int32_t>(offsetof(AssemblyBuilder_t359885250, ___versioninfo_culture_45)); }
	inline String_t* get_versioninfo_culture_45() const { return ___versioninfo_culture_45; }
	inline String_t** get_address_of_versioninfo_culture_45() { return &___versioninfo_culture_45; }
	inline void set_versioninfo_culture_45(String_t* value)
	{
		___versioninfo_culture_45 = value;
		Il2CppCodeGenWriteBarrier((&___versioninfo_culture_45), value);
	}

	inline static int32_t get_offset_of_manifest_module_47() { return static_cast<int32_t>(offsetof(AssemblyBuilder_t359885250, ___manifest_module_47)); }
	inline ModuleBuilder_t731887691 * get_manifest_module_47() const { return ___manifest_module_47; }
	inline ModuleBuilder_t731887691 ** get_address_of_manifest_module_47() { return &___manifest_module_47; }
	inline void set_manifest_module_47(ModuleBuilder_t731887691 * value)
	{
		___manifest_module_47 = value;
		Il2CppCodeGenWriteBarrier((&___manifest_module_47), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Reflection.Emit.AssemblyBuilder
struct AssemblyBuilder_t359885250_marshaled_pinvoke : public Assembly_t_marshaled_pinvoke
{
	uintptr_t ___dynamic_assembly_10;
	MethodInfo_t * ___entry_point_11;
	ModuleBuilderU5BU5D_t2441092650* ___modules_12;
	char* ___name_13;
	char* ___dir_14;
	CustomAttributeBuilderU5BU5D_t2951373564* ___cattrs_15;
	MonoResource_t4103430009_marshaled_pinvoke* ___resources_16;
	uint8_t* ___public_key_17;
	char* ___version_18;
	char* ___culture_19;
	uint32_t ___algid_20;
	uint32_t ___flags_21;
	int32_t ___pekind_22;
	int32_t ___delay_sign_23;
	uint32_t ___access_24;
	ModuleU5BU5D_t4238763736* ___loaded_modules_25;
	MonoWin32Resource_t1904229483_marshaled_pinvoke* ___win32_resources_26;
	RefEmitPermissionSet_t484390987_marshaled_pinvoke* ___permissions_minimum_27;
	RefEmitPermissionSet_t484390987_marshaled_pinvoke* ___permissions_optional_28;
	RefEmitPermissionSet_t484390987_marshaled_pinvoke* ___permissions_refused_29;
	int32_t ___peKind_30;
	int32_t ___machine_31;
	int32_t ___corlib_internal_32;
	TypeU5BU5D_t3940880105* ___type_forwarders_33;
	uint8_t* ___pktoken_34;
	Type_t * ___corlib_object_type_35;
	Type_t * ___corlib_value_type_36;
	Type_t * ___corlib_enum_type_37;
	Type_t * ___corlib_void_type_38;
	ArrayList_t2718874744 * ___resource_writers_39;
	Win32VersionResource_t1367628464 * ___version_res_40;
	int32_t ___created_41;
	int32_t ___is_module_only_42;
	StrongName_t4093849377 * ___sn_43;
	int32_t ___native_resource_44;
	char* ___versioninfo_culture_45;
	ModuleBuilder_t731887691_marshaled_pinvoke* ___manifest_module_47;
};
// Native definition for COM marshalling of System.Reflection.Emit.AssemblyBuilder
struct AssemblyBuilder_t359885250_marshaled_com : public Assembly_t_marshaled_com
{
	uintptr_t ___dynamic_assembly_10;
	MethodInfo_t * ___entry_point_11;
	ModuleBuilderU5BU5D_t2441092650* ___modules_12;
	Il2CppChar* ___name_13;
	Il2CppChar* ___dir_14;
	CustomAttributeBuilderU5BU5D_t2951373564* ___cattrs_15;
	MonoResource_t4103430009_marshaled_com* ___resources_16;
	uint8_t* ___public_key_17;
	Il2CppChar* ___version_18;
	Il2CppChar* ___culture_19;
	uint32_t ___algid_20;
	uint32_t ___flags_21;
	int32_t ___pekind_22;
	int32_t ___delay_sign_23;
	uint32_t ___access_24;
	ModuleU5BU5D_t4238763736* ___loaded_modules_25;
	MonoWin32Resource_t1904229483_marshaled_com* ___win32_resources_26;
	RefEmitPermissionSet_t484390987_marshaled_com* ___permissions_minimum_27;
	RefEmitPermissionSet_t484390987_marshaled_com* ___permissions_optional_28;
	RefEmitPermissionSet_t484390987_marshaled_com* ___permissions_refused_29;
	int32_t ___peKind_30;
	int32_t ___machine_31;
	int32_t ___corlib_internal_32;
	TypeU5BU5D_t3940880105* ___type_forwarders_33;
	uint8_t* ___pktoken_34;
	Type_t * ___corlib_object_type_35;
	Type_t * ___corlib_value_type_36;
	Type_t * ___corlib_enum_type_37;
	Type_t * ___corlib_void_type_38;
	ArrayList_t2718874744 * ___resource_writers_39;
	Win32VersionResource_t1367628464 * ___version_res_40;
	int32_t ___created_41;
	int32_t ___is_module_only_42;
	StrongName_t4093849377 * ___sn_43;
	int32_t ___native_resource_44;
	Il2CppChar* ___versioninfo_culture_45;
	ModuleBuilder_t731887691_marshaled_com* ___manifest_module_47;
};
#endif // ASSEMBLYBUILDER_T359885250_H
#ifndef CONSTRUCTORBUILDER_T2813524108_H
#define CONSTRUCTORBUILDER_T2813524108_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.Emit.ConstructorBuilder
struct  ConstructorBuilder_t2813524108  : public ConstructorInfo_t5769829
{
public:
	// System.RuntimeMethodHandle System.Reflection.Emit.ConstructorBuilder::mhandle
	RuntimeMethodHandle_t1133924984  ___mhandle_2;
	// System.Reflection.Emit.ILGenerator System.Reflection.Emit.ConstructorBuilder::ilgen
	ILGenerator_t1388622344 * ___ilgen_3;
	// System.Type[] System.Reflection.Emit.ConstructorBuilder::parameters
	TypeU5BU5D_t3940880105* ___parameters_4;
	// System.Reflection.MethodAttributes System.Reflection.Emit.ConstructorBuilder::attrs
	int32_t ___attrs_5;
	// System.Reflection.MethodImplAttributes System.Reflection.Emit.ConstructorBuilder::iattrs
	int32_t ___iattrs_6;
	// System.Int32 System.Reflection.Emit.ConstructorBuilder::table_idx
	int32_t ___table_idx_7;
	// System.Reflection.CallingConventions System.Reflection.Emit.ConstructorBuilder::call_conv
	int32_t ___call_conv_8;
	// System.Reflection.Emit.TypeBuilder System.Reflection.Emit.ConstructorBuilder::type
	TypeBuilder_t1073948154 * ___type_9;
	// System.Reflection.Emit.ParameterBuilder[] System.Reflection.Emit.ConstructorBuilder::pinfo
	ParameterBuilderU5BU5D_t3054868058* ___pinfo_10;
	// System.Reflection.Emit.CustomAttributeBuilder[] System.Reflection.Emit.ConstructorBuilder::cattrs
	CustomAttributeBuilderU5BU5D_t2951373564* ___cattrs_11;
	// System.Boolean System.Reflection.Emit.ConstructorBuilder::init_locals
	bool ___init_locals_12;
	// System.Type[][] System.Reflection.Emit.ConstructorBuilder::paramModReq
	TypeU5BU5DU5BU5D_t4042077012* ___paramModReq_13;
	// System.Type[][] System.Reflection.Emit.ConstructorBuilder::paramModOpt
	TypeU5BU5DU5BU5D_t4042077012* ___paramModOpt_14;
	// System.Reflection.Emit.RefEmitPermissionSet[] System.Reflection.Emit.ConstructorBuilder::permissions
	RefEmitPermissionSetU5BU5D_t567451178* ___permissions_15;

public:
	inline static int32_t get_offset_of_mhandle_2() { return static_cast<int32_t>(offsetof(ConstructorBuilder_t2813524108, ___mhandle_2)); }
	inline RuntimeMethodHandle_t1133924984  get_mhandle_2() const { return ___mhandle_2; }
	inline RuntimeMethodHandle_t1133924984 * get_address_of_mhandle_2() { return &___mhandle_2; }
	inline void set_mhandle_2(RuntimeMethodHandle_t1133924984  value)
	{
		___mhandle_2 = value;
	}

	inline static int32_t get_offset_of_ilgen_3() { return static_cast<int32_t>(offsetof(ConstructorBuilder_t2813524108, ___ilgen_3)); }
	inline ILGenerator_t1388622344 * get_ilgen_3() const { return ___ilgen_3; }
	inline ILGenerator_t1388622344 ** get_address_of_ilgen_3() { return &___ilgen_3; }
	inline void set_ilgen_3(ILGenerator_t1388622344 * value)
	{
		___ilgen_3 = value;
		Il2CppCodeGenWriteBarrier((&___ilgen_3), value);
	}

	inline static int32_t get_offset_of_parameters_4() { return static_cast<int32_t>(offsetof(ConstructorBuilder_t2813524108, ___parameters_4)); }
	inline TypeU5BU5D_t3940880105* get_parameters_4() const { return ___parameters_4; }
	inline TypeU5BU5D_t3940880105** get_address_of_parameters_4() { return &___parameters_4; }
	inline void set_parameters_4(TypeU5BU5D_t3940880105* value)
	{
		___parameters_4 = value;
		Il2CppCodeGenWriteBarrier((&___parameters_4), value);
	}

	inline static int32_t get_offset_of_attrs_5() { return static_cast<int32_t>(offsetof(ConstructorBuilder_t2813524108, ___attrs_5)); }
	inline int32_t get_attrs_5() const { return ___attrs_5; }
	inline int32_t* get_address_of_attrs_5() { return &___attrs_5; }
	inline void set_attrs_5(int32_t value)
	{
		___attrs_5 = value;
	}

	inline static int32_t get_offset_of_iattrs_6() { return static_cast<int32_t>(offsetof(ConstructorBuilder_t2813524108, ___iattrs_6)); }
	inline int32_t get_iattrs_6() const { return ___iattrs_6; }
	inline int32_t* get_address_of_iattrs_6() { return &___iattrs_6; }
	inline void set_iattrs_6(int32_t value)
	{
		___iattrs_6 = value;
	}

	inline static int32_t get_offset_of_table_idx_7() { return static_cast<int32_t>(offsetof(ConstructorBuilder_t2813524108, ___table_idx_7)); }
	inline int32_t get_table_idx_7() const { return ___table_idx_7; }
	inline int32_t* get_address_of_table_idx_7() { return &___table_idx_7; }
	inline void set_table_idx_7(int32_t value)
	{
		___table_idx_7 = value;
	}

	inline static int32_t get_offset_of_call_conv_8() { return static_cast<int32_t>(offsetof(ConstructorBuilder_t2813524108, ___call_conv_8)); }
	inline int32_t get_call_conv_8() const { return ___call_conv_8; }
	inline int32_t* get_address_of_call_conv_8() { return &___call_conv_8; }
	inline void set_call_conv_8(int32_t value)
	{
		___call_conv_8 = value;
	}

	inline static int32_t get_offset_of_type_9() { return static_cast<int32_t>(offsetof(ConstructorBuilder_t2813524108, ___type_9)); }
	inline TypeBuilder_t1073948154 * get_type_9() const { return ___type_9; }
	inline TypeBuilder_t1073948154 ** get_address_of_type_9() { return &___type_9; }
	inline void set_type_9(TypeBuilder_t1073948154 * value)
	{
		___type_9 = value;
		Il2CppCodeGenWriteBarrier((&___type_9), value);
	}

	inline static int32_t get_offset_of_pinfo_10() { return static_cast<int32_t>(offsetof(ConstructorBuilder_t2813524108, ___pinfo_10)); }
	inline ParameterBuilderU5BU5D_t3054868058* get_pinfo_10() const { return ___pinfo_10; }
	inline ParameterBuilderU5BU5D_t3054868058** get_address_of_pinfo_10() { return &___pinfo_10; }
	inline void set_pinfo_10(ParameterBuilderU5BU5D_t3054868058* value)
	{
		___pinfo_10 = value;
		Il2CppCodeGenWriteBarrier((&___pinfo_10), value);
	}

	inline static int32_t get_offset_of_cattrs_11() { return static_cast<int32_t>(offsetof(ConstructorBuilder_t2813524108, ___cattrs_11)); }
	inline CustomAttributeBuilderU5BU5D_t2951373564* get_cattrs_11() const { return ___cattrs_11; }
	inline CustomAttributeBuilderU5BU5D_t2951373564** get_address_of_cattrs_11() { return &___cattrs_11; }
	inline void set_cattrs_11(CustomAttributeBuilderU5BU5D_t2951373564* value)
	{
		___cattrs_11 = value;
		Il2CppCodeGenWriteBarrier((&___cattrs_11), value);
	}

	inline static int32_t get_offset_of_init_locals_12() { return static_cast<int32_t>(offsetof(ConstructorBuilder_t2813524108, ___init_locals_12)); }
	inline bool get_init_locals_12() const { return ___init_locals_12; }
	inline bool* get_address_of_init_locals_12() { return &___init_locals_12; }
	inline void set_init_locals_12(bool value)
	{
		___init_locals_12 = value;
	}

	inline static int32_t get_offset_of_paramModReq_13() { return static_cast<int32_t>(offsetof(ConstructorBuilder_t2813524108, ___paramModReq_13)); }
	inline TypeU5BU5DU5BU5D_t4042077012* get_paramModReq_13() const { return ___paramModReq_13; }
	inline TypeU5BU5DU5BU5D_t4042077012** get_address_of_paramModReq_13() { return &___paramModReq_13; }
	inline void set_paramModReq_13(TypeU5BU5DU5BU5D_t4042077012* value)
	{
		___paramModReq_13 = value;
		Il2CppCodeGenWriteBarrier((&___paramModReq_13), value);
	}

	inline static int32_t get_offset_of_paramModOpt_14() { return static_cast<int32_t>(offsetof(ConstructorBuilder_t2813524108, ___paramModOpt_14)); }
	inline TypeU5BU5DU5BU5D_t4042077012* get_paramModOpt_14() const { return ___paramModOpt_14; }
	inline TypeU5BU5DU5BU5D_t4042077012** get_address_of_paramModOpt_14() { return &___paramModOpt_14; }
	inline void set_paramModOpt_14(TypeU5BU5DU5BU5D_t4042077012* value)
	{
		___paramModOpt_14 = value;
		Il2CppCodeGenWriteBarrier((&___paramModOpt_14), value);
	}

	inline static int32_t get_offset_of_permissions_15() { return static_cast<int32_t>(offsetof(ConstructorBuilder_t2813524108, ___permissions_15)); }
	inline RefEmitPermissionSetU5BU5D_t567451178* get_permissions_15() const { return ___permissions_15; }
	inline RefEmitPermissionSetU5BU5D_t567451178** get_address_of_permissions_15() { return &___permissions_15; }
	inline void set_permissions_15(RefEmitPermissionSetU5BU5D_t567451178* value)
	{
		___permissions_15 = value;
		Il2CppCodeGenWriteBarrier((&___permissions_15), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONSTRUCTORBUILDER_T2813524108_H
#ifndef CONSTRUCTORONTYPEBUILDERINST_T2679067155_H
#define CONSTRUCTORONTYPEBUILDERINST_T2679067155_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.Emit.ConstructorOnTypeBuilderInst
struct  ConstructorOnTypeBuilderInst_t2679067155  : public ConstructorInfo_t5769829
{
public:
	// System.Reflection.Emit.TypeBuilderInstantiation System.Reflection.Emit.ConstructorOnTypeBuilderInst::instantiation
	TypeBuilderInstantiation_t1969526298 * ___instantiation_2;
	// System.Reflection.ConstructorInfo System.Reflection.Emit.ConstructorOnTypeBuilderInst::cb
	ConstructorInfo_t5769829 * ___cb_3;

public:
	inline static int32_t get_offset_of_instantiation_2() { return static_cast<int32_t>(offsetof(ConstructorOnTypeBuilderInst_t2679067155, ___instantiation_2)); }
	inline TypeBuilderInstantiation_t1969526298 * get_instantiation_2() const { return ___instantiation_2; }
	inline TypeBuilderInstantiation_t1969526298 ** get_address_of_instantiation_2() { return &___instantiation_2; }
	inline void set_instantiation_2(TypeBuilderInstantiation_t1969526298 * value)
	{
		___instantiation_2 = value;
		Il2CppCodeGenWriteBarrier((&___instantiation_2), value);
	}

	inline static int32_t get_offset_of_cb_3() { return static_cast<int32_t>(offsetof(ConstructorOnTypeBuilderInst_t2679067155, ___cb_3)); }
	inline ConstructorInfo_t5769829 * get_cb_3() const { return ___cb_3; }
	inline ConstructorInfo_t5769829 ** get_address_of_cb_3() { return &___cb_3; }
	inline void set_cb_3(ConstructorInfo_t5769829 * value)
	{
		___cb_3 = value;
		Il2CppCodeGenWriteBarrier((&___cb_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONSTRUCTORONTYPEBUILDERINST_T2679067155_H
#ifndef DYNAMICMETHOD_T2537779570_H
#define DYNAMICMETHOD_T2537779570_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.Emit.DynamicMethod
struct  DynamicMethod_t2537779570  : public MethodInfo_t
{
public:
	// System.RuntimeMethodHandle System.Reflection.Emit.DynamicMethod::mhandle
	RuntimeMethodHandle_t1133924984  ___mhandle_0;
	// System.String System.Reflection.Emit.DynamicMethod::name
	String_t* ___name_1;
	// System.Type System.Reflection.Emit.DynamicMethod::returnType
	Type_t * ___returnType_2;
	// System.Type[] System.Reflection.Emit.DynamicMethod::parameters
	TypeU5BU5D_t3940880105* ___parameters_3;
	// System.Reflection.MethodAttributes System.Reflection.Emit.DynamicMethod::attributes
	int32_t ___attributes_4;
	// System.Reflection.CallingConventions System.Reflection.Emit.DynamicMethod::callingConvention
	int32_t ___callingConvention_5;
	// System.Reflection.Module System.Reflection.Emit.DynamicMethod::module
	Module_t2987026101 * ___module_6;
	// System.Boolean System.Reflection.Emit.DynamicMethod::skipVisibility
	bool ___skipVisibility_7;
	// System.Boolean System.Reflection.Emit.DynamicMethod::init_locals
	bool ___init_locals_8;
	// System.Reflection.Emit.ILGenerator System.Reflection.Emit.DynamicMethod::ilgen
	ILGenerator_t1388622344 * ___ilgen_9;
	// System.Int32 System.Reflection.Emit.DynamicMethod::nrefs
	int32_t ___nrefs_10;
	// System.Object[] System.Reflection.Emit.DynamicMethod::refs
	ObjectU5BU5D_t2843939325* ___refs_11;
	// System.IntPtr System.Reflection.Emit.DynamicMethod::referenced_by
	intptr_t ___referenced_by_12;
	// System.Type System.Reflection.Emit.DynamicMethod::owner
	Type_t * ___owner_13;
	// System.Delegate System.Reflection.Emit.DynamicMethod::deleg
	Delegate_t1188392813 * ___deleg_14;
	// System.Reflection.MonoMethod System.Reflection.Emit.DynamicMethod::method
	MonoMethod_t * ___method_15;
	// System.Reflection.Emit.ParameterBuilder[] System.Reflection.Emit.DynamicMethod::pinfo
	ParameterBuilderU5BU5D_t3054868058* ___pinfo_16;
	// System.Boolean System.Reflection.Emit.DynamicMethod::creating
	bool ___creating_17;
	// System.Reflection.Emit.DynamicILInfo System.Reflection.Emit.DynamicMethod::il_info
	DynamicILInfo_t2059132200 * ___il_info_18;

public:
	inline static int32_t get_offset_of_mhandle_0() { return static_cast<int32_t>(offsetof(DynamicMethod_t2537779570, ___mhandle_0)); }
	inline RuntimeMethodHandle_t1133924984  get_mhandle_0() const { return ___mhandle_0; }
	inline RuntimeMethodHandle_t1133924984 * get_address_of_mhandle_0() { return &___mhandle_0; }
	inline void set_mhandle_0(RuntimeMethodHandle_t1133924984  value)
	{
		___mhandle_0 = value;
	}

	inline static int32_t get_offset_of_name_1() { return static_cast<int32_t>(offsetof(DynamicMethod_t2537779570, ___name_1)); }
	inline String_t* get_name_1() const { return ___name_1; }
	inline String_t** get_address_of_name_1() { return &___name_1; }
	inline void set_name_1(String_t* value)
	{
		___name_1 = value;
		Il2CppCodeGenWriteBarrier((&___name_1), value);
	}

	inline static int32_t get_offset_of_returnType_2() { return static_cast<int32_t>(offsetof(DynamicMethod_t2537779570, ___returnType_2)); }
	inline Type_t * get_returnType_2() const { return ___returnType_2; }
	inline Type_t ** get_address_of_returnType_2() { return &___returnType_2; }
	inline void set_returnType_2(Type_t * value)
	{
		___returnType_2 = value;
		Il2CppCodeGenWriteBarrier((&___returnType_2), value);
	}

	inline static int32_t get_offset_of_parameters_3() { return static_cast<int32_t>(offsetof(DynamicMethod_t2537779570, ___parameters_3)); }
	inline TypeU5BU5D_t3940880105* get_parameters_3() const { return ___parameters_3; }
	inline TypeU5BU5D_t3940880105** get_address_of_parameters_3() { return &___parameters_3; }
	inline void set_parameters_3(TypeU5BU5D_t3940880105* value)
	{
		___parameters_3 = value;
		Il2CppCodeGenWriteBarrier((&___parameters_3), value);
	}

	inline static int32_t get_offset_of_attributes_4() { return static_cast<int32_t>(offsetof(DynamicMethod_t2537779570, ___attributes_4)); }
	inline int32_t get_attributes_4() const { return ___attributes_4; }
	inline int32_t* get_address_of_attributes_4() { return &___attributes_4; }
	inline void set_attributes_4(int32_t value)
	{
		___attributes_4 = value;
	}

	inline static int32_t get_offset_of_callingConvention_5() { return static_cast<int32_t>(offsetof(DynamicMethod_t2537779570, ___callingConvention_5)); }
	inline int32_t get_callingConvention_5() const { return ___callingConvention_5; }
	inline int32_t* get_address_of_callingConvention_5() { return &___callingConvention_5; }
	inline void set_callingConvention_5(int32_t value)
	{
		___callingConvention_5 = value;
	}

	inline static int32_t get_offset_of_module_6() { return static_cast<int32_t>(offsetof(DynamicMethod_t2537779570, ___module_6)); }
	inline Module_t2987026101 * get_module_6() const { return ___module_6; }
	inline Module_t2987026101 ** get_address_of_module_6() { return &___module_6; }
	inline void set_module_6(Module_t2987026101 * value)
	{
		___module_6 = value;
		Il2CppCodeGenWriteBarrier((&___module_6), value);
	}

	inline static int32_t get_offset_of_skipVisibility_7() { return static_cast<int32_t>(offsetof(DynamicMethod_t2537779570, ___skipVisibility_7)); }
	inline bool get_skipVisibility_7() const { return ___skipVisibility_7; }
	inline bool* get_address_of_skipVisibility_7() { return &___skipVisibility_7; }
	inline void set_skipVisibility_7(bool value)
	{
		___skipVisibility_7 = value;
	}

	inline static int32_t get_offset_of_init_locals_8() { return static_cast<int32_t>(offsetof(DynamicMethod_t2537779570, ___init_locals_8)); }
	inline bool get_init_locals_8() const { return ___init_locals_8; }
	inline bool* get_address_of_init_locals_8() { return &___init_locals_8; }
	inline void set_init_locals_8(bool value)
	{
		___init_locals_8 = value;
	}

	inline static int32_t get_offset_of_ilgen_9() { return static_cast<int32_t>(offsetof(DynamicMethod_t2537779570, ___ilgen_9)); }
	inline ILGenerator_t1388622344 * get_ilgen_9() const { return ___ilgen_9; }
	inline ILGenerator_t1388622344 ** get_address_of_ilgen_9() { return &___ilgen_9; }
	inline void set_ilgen_9(ILGenerator_t1388622344 * value)
	{
		___ilgen_9 = value;
		Il2CppCodeGenWriteBarrier((&___ilgen_9), value);
	}

	inline static int32_t get_offset_of_nrefs_10() { return static_cast<int32_t>(offsetof(DynamicMethod_t2537779570, ___nrefs_10)); }
	inline int32_t get_nrefs_10() const { return ___nrefs_10; }
	inline int32_t* get_address_of_nrefs_10() { return &___nrefs_10; }
	inline void set_nrefs_10(int32_t value)
	{
		___nrefs_10 = value;
	}

	inline static int32_t get_offset_of_refs_11() { return static_cast<int32_t>(offsetof(DynamicMethod_t2537779570, ___refs_11)); }
	inline ObjectU5BU5D_t2843939325* get_refs_11() const { return ___refs_11; }
	inline ObjectU5BU5D_t2843939325** get_address_of_refs_11() { return &___refs_11; }
	inline void set_refs_11(ObjectU5BU5D_t2843939325* value)
	{
		___refs_11 = value;
		Il2CppCodeGenWriteBarrier((&___refs_11), value);
	}

	inline static int32_t get_offset_of_referenced_by_12() { return static_cast<int32_t>(offsetof(DynamicMethod_t2537779570, ___referenced_by_12)); }
	inline intptr_t get_referenced_by_12() const { return ___referenced_by_12; }
	inline intptr_t* get_address_of_referenced_by_12() { return &___referenced_by_12; }
	inline void set_referenced_by_12(intptr_t value)
	{
		___referenced_by_12 = value;
	}

	inline static int32_t get_offset_of_owner_13() { return static_cast<int32_t>(offsetof(DynamicMethod_t2537779570, ___owner_13)); }
	inline Type_t * get_owner_13() const { return ___owner_13; }
	inline Type_t ** get_address_of_owner_13() { return &___owner_13; }
	inline void set_owner_13(Type_t * value)
	{
		___owner_13 = value;
		Il2CppCodeGenWriteBarrier((&___owner_13), value);
	}

	inline static int32_t get_offset_of_deleg_14() { return static_cast<int32_t>(offsetof(DynamicMethod_t2537779570, ___deleg_14)); }
	inline Delegate_t1188392813 * get_deleg_14() const { return ___deleg_14; }
	inline Delegate_t1188392813 ** get_address_of_deleg_14() { return &___deleg_14; }
	inline void set_deleg_14(Delegate_t1188392813 * value)
	{
		___deleg_14 = value;
		Il2CppCodeGenWriteBarrier((&___deleg_14), value);
	}

	inline static int32_t get_offset_of_method_15() { return static_cast<int32_t>(offsetof(DynamicMethod_t2537779570, ___method_15)); }
	inline MonoMethod_t * get_method_15() const { return ___method_15; }
	inline MonoMethod_t ** get_address_of_method_15() { return &___method_15; }
	inline void set_method_15(MonoMethod_t * value)
	{
		___method_15 = value;
		Il2CppCodeGenWriteBarrier((&___method_15), value);
	}

	inline static int32_t get_offset_of_pinfo_16() { return static_cast<int32_t>(offsetof(DynamicMethod_t2537779570, ___pinfo_16)); }
	inline ParameterBuilderU5BU5D_t3054868058* get_pinfo_16() const { return ___pinfo_16; }
	inline ParameterBuilderU5BU5D_t3054868058** get_address_of_pinfo_16() { return &___pinfo_16; }
	inline void set_pinfo_16(ParameterBuilderU5BU5D_t3054868058* value)
	{
		___pinfo_16 = value;
		Il2CppCodeGenWriteBarrier((&___pinfo_16), value);
	}

	inline static int32_t get_offset_of_creating_17() { return static_cast<int32_t>(offsetof(DynamicMethod_t2537779570, ___creating_17)); }
	inline bool get_creating_17() const { return ___creating_17; }
	inline bool* get_address_of_creating_17() { return &___creating_17; }
	inline void set_creating_17(bool value)
	{
		___creating_17 = value;
	}

	inline static int32_t get_offset_of_il_info_18() { return static_cast<int32_t>(offsetof(DynamicMethod_t2537779570, ___il_info_18)); }
	inline DynamicILInfo_t2059132200 * get_il_info_18() const { return ___il_info_18; }
	inline DynamicILInfo_t2059132200 ** get_address_of_il_info_18() { return &___il_info_18; }
	inline void set_il_info_18(DynamicILInfo_t2059132200 * value)
	{
		___il_info_18 = value;
		Il2CppCodeGenWriteBarrier((&___il_info_18), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DYNAMICMETHOD_T2537779570_H
#ifndef MONORESOURCE_T4103430009_H
#define MONORESOURCE_T4103430009_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.Emit.MonoResource
struct  MonoResource_t4103430009 
{
public:
	// System.Byte[] System.Reflection.Emit.MonoResource::data
	ByteU5BU5D_t4116647657* ___data_0;
	// System.String System.Reflection.Emit.MonoResource::name
	String_t* ___name_1;
	// System.String System.Reflection.Emit.MonoResource::filename
	String_t* ___filename_2;
	// System.Reflection.ResourceAttributes System.Reflection.Emit.MonoResource::attrs
	int32_t ___attrs_3;
	// System.Int32 System.Reflection.Emit.MonoResource::offset
	int32_t ___offset_4;
	// System.IO.Stream System.Reflection.Emit.MonoResource::stream
	Stream_t1273022909 * ___stream_5;

public:
	inline static int32_t get_offset_of_data_0() { return static_cast<int32_t>(offsetof(MonoResource_t4103430009, ___data_0)); }
	inline ByteU5BU5D_t4116647657* get_data_0() const { return ___data_0; }
	inline ByteU5BU5D_t4116647657** get_address_of_data_0() { return &___data_0; }
	inline void set_data_0(ByteU5BU5D_t4116647657* value)
	{
		___data_0 = value;
		Il2CppCodeGenWriteBarrier((&___data_0), value);
	}

	inline static int32_t get_offset_of_name_1() { return static_cast<int32_t>(offsetof(MonoResource_t4103430009, ___name_1)); }
	inline String_t* get_name_1() const { return ___name_1; }
	inline String_t** get_address_of_name_1() { return &___name_1; }
	inline void set_name_1(String_t* value)
	{
		___name_1 = value;
		Il2CppCodeGenWriteBarrier((&___name_1), value);
	}

	inline static int32_t get_offset_of_filename_2() { return static_cast<int32_t>(offsetof(MonoResource_t4103430009, ___filename_2)); }
	inline String_t* get_filename_2() const { return ___filename_2; }
	inline String_t** get_address_of_filename_2() { return &___filename_2; }
	inline void set_filename_2(String_t* value)
	{
		___filename_2 = value;
		Il2CppCodeGenWriteBarrier((&___filename_2), value);
	}

	inline static int32_t get_offset_of_attrs_3() { return static_cast<int32_t>(offsetof(MonoResource_t4103430009, ___attrs_3)); }
	inline int32_t get_attrs_3() const { return ___attrs_3; }
	inline int32_t* get_address_of_attrs_3() { return &___attrs_3; }
	inline void set_attrs_3(int32_t value)
	{
		___attrs_3 = value;
	}

	inline static int32_t get_offset_of_offset_4() { return static_cast<int32_t>(offsetof(MonoResource_t4103430009, ___offset_4)); }
	inline int32_t get_offset_4() const { return ___offset_4; }
	inline int32_t* get_address_of_offset_4() { return &___offset_4; }
	inline void set_offset_4(int32_t value)
	{
		___offset_4 = value;
	}

	inline static int32_t get_offset_of_stream_5() { return static_cast<int32_t>(offsetof(MonoResource_t4103430009, ___stream_5)); }
	inline Stream_t1273022909 * get_stream_5() const { return ___stream_5; }
	inline Stream_t1273022909 ** get_address_of_stream_5() { return &___stream_5; }
	inline void set_stream_5(Stream_t1273022909 * value)
	{
		___stream_5 = value;
		Il2CppCodeGenWriteBarrier((&___stream_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Reflection.Emit.MonoResource
struct MonoResource_t4103430009_marshaled_pinvoke
{
	uint8_t* ___data_0;
	char* ___name_1;
	char* ___filename_2;
	int32_t ___attrs_3;
	int32_t ___offset_4;
	Stream_t1273022909 * ___stream_5;
};
// Native definition for COM marshalling of System.Reflection.Emit.MonoResource
struct MonoResource_t4103430009_marshaled_com
{
	uint8_t* ___data_0;
	Il2CppChar* ___name_1;
	Il2CppChar* ___filename_2;
	int32_t ___attrs_3;
	int32_t ___offset_4;
	Stream_t1273022909 * ___stream_5;
};
#endif // MONORESOURCE_T4103430009_H
#ifndef REFEMITPERMISSIONSET_T484390987_H
#define REFEMITPERMISSIONSET_T484390987_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.Emit.RefEmitPermissionSet
struct  RefEmitPermissionSet_t484390987 
{
public:
	// System.Security.Permissions.SecurityAction System.Reflection.Emit.RefEmitPermissionSet::action
	int32_t ___action_0;
	// System.String System.Reflection.Emit.RefEmitPermissionSet::pset
	String_t* ___pset_1;

public:
	inline static int32_t get_offset_of_action_0() { return static_cast<int32_t>(offsetof(RefEmitPermissionSet_t484390987, ___action_0)); }
	inline int32_t get_action_0() const { return ___action_0; }
	inline int32_t* get_address_of_action_0() { return &___action_0; }
	inline void set_action_0(int32_t value)
	{
		___action_0 = value;
	}

	inline static int32_t get_offset_of_pset_1() { return static_cast<int32_t>(offsetof(RefEmitPermissionSet_t484390987, ___pset_1)); }
	inline String_t* get_pset_1() const { return ___pset_1; }
	inline String_t** get_address_of_pset_1() { return &___pset_1; }
	inline void set_pset_1(String_t* value)
	{
		___pset_1 = value;
		Il2CppCodeGenWriteBarrier((&___pset_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Reflection.Emit.RefEmitPermissionSet
struct RefEmitPermissionSet_t484390987_marshaled_pinvoke
{
	int32_t ___action_0;
	char* ___pset_1;
};
// Native definition for COM marshalling of System.Reflection.Emit.RefEmitPermissionSet
struct RefEmitPermissionSet_t484390987_marshaled_com
{
	int32_t ___action_0;
	Il2CppChar* ___pset_1;
};
#endif // REFEMITPERMISSIONSET_T484390987_H
#ifndef EXCEPTIONHANDLINGCLAUSE_T2620275417_H
#define EXCEPTIONHANDLINGCLAUSE_T2620275417_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.ExceptionHandlingClause
struct  ExceptionHandlingClause_t2620275417  : public RuntimeObject
{
public:
	// System.Type System.Reflection.ExceptionHandlingClause::catch_type
	Type_t * ___catch_type_0;
	// System.Int32 System.Reflection.ExceptionHandlingClause::filter_offset
	int32_t ___filter_offset_1;
	// System.Reflection.ExceptionHandlingClauseOptions System.Reflection.ExceptionHandlingClause::flags
	int32_t ___flags_2;
	// System.Int32 System.Reflection.ExceptionHandlingClause::try_offset
	int32_t ___try_offset_3;
	// System.Int32 System.Reflection.ExceptionHandlingClause::try_length
	int32_t ___try_length_4;
	// System.Int32 System.Reflection.ExceptionHandlingClause::handler_offset
	int32_t ___handler_offset_5;
	// System.Int32 System.Reflection.ExceptionHandlingClause::handler_length
	int32_t ___handler_length_6;

public:
	inline static int32_t get_offset_of_catch_type_0() { return static_cast<int32_t>(offsetof(ExceptionHandlingClause_t2620275417, ___catch_type_0)); }
	inline Type_t * get_catch_type_0() const { return ___catch_type_0; }
	inline Type_t ** get_address_of_catch_type_0() { return &___catch_type_0; }
	inline void set_catch_type_0(Type_t * value)
	{
		___catch_type_0 = value;
		Il2CppCodeGenWriteBarrier((&___catch_type_0), value);
	}

	inline static int32_t get_offset_of_filter_offset_1() { return static_cast<int32_t>(offsetof(ExceptionHandlingClause_t2620275417, ___filter_offset_1)); }
	inline int32_t get_filter_offset_1() const { return ___filter_offset_1; }
	inline int32_t* get_address_of_filter_offset_1() { return &___filter_offset_1; }
	inline void set_filter_offset_1(int32_t value)
	{
		___filter_offset_1 = value;
	}

	inline static int32_t get_offset_of_flags_2() { return static_cast<int32_t>(offsetof(ExceptionHandlingClause_t2620275417, ___flags_2)); }
	inline int32_t get_flags_2() const { return ___flags_2; }
	inline int32_t* get_address_of_flags_2() { return &___flags_2; }
	inline void set_flags_2(int32_t value)
	{
		___flags_2 = value;
	}

	inline static int32_t get_offset_of_try_offset_3() { return static_cast<int32_t>(offsetof(ExceptionHandlingClause_t2620275417, ___try_offset_3)); }
	inline int32_t get_try_offset_3() const { return ___try_offset_3; }
	inline int32_t* get_address_of_try_offset_3() { return &___try_offset_3; }
	inline void set_try_offset_3(int32_t value)
	{
		___try_offset_3 = value;
	}

	inline static int32_t get_offset_of_try_length_4() { return static_cast<int32_t>(offsetof(ExceptionHandlingClause_t2620275417, ___try_length_4)); }
	inline int32_t get_try_length_4() const { return ___try_length_4; }
	inline int32_t* get_address_of_try_length_4() { return &___try_length_4; }
	inline void set_try_length_4(int32_t value)
	{
		___try_length_4 = value;
	}

	inline static int32_t get_offset_of_handler_offset_5() { return static_cast<int32_t>(offsetof(ExceptionHandlingClause_t2620275417, ___handler_offset_5)); }
	inline int32_t get_handler_offset_5() const { return ___handler_offset_5; }
	inline int32_t* get_address_of_handler_offset_5() { return &___handler_offset_5; }
	inline void set_handler_offset_5(int32_t value)
	{
		___handler_offset_5 = value;
	}

	inline static int32_t get_offset_of_handler_length_6() { return static_cast<int32_t>(offsetof(ExceptionHandlingClause_t2620275417, ___handler_length_6)); }
	inline int32_t get_handler_length_6() const { return ___handler_length_6; }
	inline int32_t* get_address_of_handler_length_6() { return &___handler_length_6; }
	inline void set_handler_length_6(int32_t value)
	{
		___handler_length_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Reflection.ExceptionHandlingClause
struct ExceptionHandlingClause_t2620275417_marshaled_pinvoke
{
	Type_t * ___catch_type_0;
	int32_t ___filter_offset_1;
	int32_t ___flags_2;
	int32_t ___try_offset_3;
	int32_t ___try_length_4;
	int32_t ___handler_offset_5;
	int32_t ___handler_length_6;
};
// Native definition for COM marshalling of System.Reflection.ExceptionHandlingClause
struct ExceptionHandlingClause_t2620275417_marshaled_com
{
	Type_t * ___catch_type_0;
	int32_t ___filter_offset_1;
	int32_t ___flags_2;
	int32_t ___try_offset_3;
	int32_t ___try_length_4;
	int32_t ___handler_offset_5;
	int32_t ___handler_length_6;
};
#endif // EXCEPTIONHANDLINGCLAUSE_T2620275417_H
#ifndef MEMBERINFOSERIALIZATIONHOLDER_T1943730831_H
#define MEMBERINFOSERIALIZATIONHOLDER_T1943730831_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MemberInfoSerializationHolder
struct  MemberInfoSerializationHolder_t1943730831  : public RuntimeObject
{
public:
	// System.String System.Reflection.MemberInfoSerializationHolder::m_memberName
	String_t* ___m_memberName_0;
	// System.RuntimeType System.Reflection.MemberInfoSerializationHolder::m_reflectedType
	RuntimeType_t3636489352 * ___m_reflectedType_1;
	// System.String System.Reflection.MemberInfoSerializationHolder::m_signature
	String_t* ___m_signature_2;
	// System.String System.Reflection.MemberInfoSerializationHolder::m_signature2
	String_t* ___m_signature2_3;
	// System.Reflection.MemberTypes System.Reflection.MemberInfoSerializationHolder::m_memberType
	int32_t ___m_memberType_4;
	// System.Runtime.Serialization.SerializationInfo System.Reflection.MemberInfoSerializationHolder::m_info
	SerializationInfo_t950877179 * ___m_info_5;

public:
	inline static int32_t get_offset_of_m_memberName_0() { return static_cast<int32_t>(offsetof(MemberInfoSerializationHolder_t1943730831, ___m_memberName_0)); }
	inline String_t* get_m_memberName_0() const { return ___m_memberName_0; }
	inline String_t** get_address_of_m_memberName_0() { return &___m_memberName_0; }
	inline void set_m_memberName_0(String_t* value)
	{
		___m_memberName_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_memberName_0), value);
	}

	inline static int32_t get_offset_of_m_reflectedType_1() { return static_cast<int32_t>(offsetof(MemberInfoSerializationHolder_t1943730831, ___m_reflectedType_1)); }
	inline RuntimeType_t3636489352 * get_m_reflectedType_1() const { return ___m_reflectedType_1; }
	inline RuntimeType_t3636489352 ** get_address_of_m_reflectedType_1() { return &___m_reflectedType_1; }
	inline void set_m_reflectedType_1(RuntimeType_t3636489352 * value)
	{
		___m_reflectedType_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_reflectedType_1), value);
	}

	inline static int32_t get_offset_of_m_signature_2() { return static_cast<int32_t>(offsetof(MemberInfoSerializationHolder_t1943730831, ___m_signature_2)); }
	inline String_t* get_m_signature_2() const { return ___m_signature_2; }
	inline String_t** get_address_of_m_signature_2() { return &___m_signature_2; }
	inline void set_m_signature_2(String_t* value)
	{
		___m_signature_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_signature_2), value);
	}

	inline static int32_t get_offset_of_m_signature2_3() { return static_cast<int32_t>(offsetof(MemberInfoSerializationHolder_t1943730831, ___m_signature2_3)); }
	inline String_t* get_m_signature2_3() const { return ___m_signature2_3; }
	inline String_t** get_address_of_m_signature2_3() { return &___m_signature2_3; }
	inline void set_m_signature2_3(String_t* value)
	{
		___m_signature2_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_signature2_3), value);
	}

	inline static int32_t get_offset_of_m_memberType_4() { return static_cast<int32_t>(offsetof(MemberInfoSerializationHolder_t1943730831, ___m_memberType_4)); }
	inline int32_t get_m_memberType_4() const { return ___m_memberType_4; }
	inline int32_t* get_address_of_m_memberType_4() { return &___m_memberType_4; }
	inline void set_m_memberType_4(int32_t value)
	{
		___m_memberType_4 = value;
	}

	inline static int32_t get_offset_of_m_info_5() { return static_cast<int32_t>(offsetof(MemberInfoSerializationHolder_t1943730831, ___m_info_5)); }
	inline SerializationInfo_t950877179 * get_m_info_5() const { return ___m_info_5; }
	inline SerializationInfo_t950877179 ** get_address_of_m_info_5() { return &___m_info_5; }
	inline void set_m_info_5(SerializationInfo_t950877179 * value)
	{
		___m_info_5 = value;
		Il2CppCodeGenWriteBarrier((&___m_info_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MEMBERINFOSERIALIZATIONHOLDER_T1943730831_H
#ifndef MODULE_T2987026101_H
#define MODULE_T2987026101_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.Module
struct  Module_t2987026101  : public RuntimeObject
{
public:
	// System.IntPtr System.Reflection.Module::_impl
	intptr_t ____impl_2;
	// System.Reflection.Assembly System.Reflection.Module::assembly
	Assembly_t * ___assembly_3;
	// System.String System.Reflection.Module::fqname
	String_t* ___fqname_4;
	// System.String System.Reflection.Module::name
	String_t* ___name_5;
	// System.String System.Reflection.Module::scopename
	String_t* ___scopename_6;
	// System.Boolean System.Reflection.Module::is_resource
	bool ___is_resource_7;
	// System.Int32 System.Reflection.Module::token
	int32_t ___token_8;

public:
	inline static int32_t get_offset_of__impl_2() { return static_cast<int32_t>(offsetof(Module_t2987026101, ____impl_2)); }
	inline intptr_t get__impl_2() const { return ____impl_2; }
	inline intptr_t* get_address_of__impl_2() { return &____impl_2; }
	inline void set__impl_2(intptr_t value)
	{
		____impl_2 = value;
	}

	inline static int32_t get_offset_of_assembly_3() { return static_cast<int32_t>(offsetof(Module_t2987026101, ___assembly_3)); }
	inline Assembly_t * get_assembly_3() const { return ___assembly_3; }
	inline Assembly_t ** get_address_of_assembly_3() { return &___assembly_3; }
	inline void set_assembly_3(Assembly_t * value)
	{
		___assembly_3 = value;
		Il2CppCodeGenWriteBarrier((&___assembly_3), value);
	}

	inline static int32_t get_offset_of_fqname_4() { return static_cast<int32_t>(offsetof(Module_t2987026101, ___fqname_4)); }
	inline String_t* get_fqname_4() const { return ___fqname_4; }
	inline String_t** get_address_of_fqname_4() { return &___fqname_4; }
	inline void set_fqname_4(String_t* value)
	{
		___fqname_4 = value;
		Il2CppCodeGenWriteBarrier((&___fqname_4), value);
	}

	inline static int32_t get_offset_of_name_5() { return static_cast<int32_t>(offsetof(Module_t2987026101, ___name_5)); }
	inline String_t* get_name_5() const { return ___name_5; }
	inline String_t** get_address_of_name_5() { return &___name_5; }
	inline void set_name_5(String_t* value)
	{
		___name_5 = value;
		Il2CppCodeGenWriteBarrier((&___name_5), value);
	}

	inline static int32_t get_offset_of_scopename_6() { return static_cast<int32_t>(offsetof(Module_t2987026101, ___scopename_6)); }
	inline String_t* get_scopename_6() const { return ___scopename_6; }
	inline String_t** get_address_of_scopename_6() { return &___scopename_6; }
	inline void set_scopename_6(String_t* value)
	{
		___scopename_6 = value;
		Il2CppCodeGenWriteBarrier((&___scopename_6), value);
	}

	inline static int32_t get_offset_of_is_resource_7() { return static_cast<int32_t>(offsetof(Module_t2987026101, ___is_resource_7)); }
	inline bool get_is_resource_7() const { return ___is_resource_7; }
	inline bool* get_address_of_is_resource_7() { return &___is_resource_7; }
	inline void set_is_resource_7(bool value)
	{
		___is_resource_7 = value;
	}

	inline static int32_t get_offset_of_token_8() { return static_cast<int32_t>(offsetof(Module_t2987026101, ___token_8)); }
	inline int32_t get_token_8() const { return ___token_8; }
	inline int32_t* get_address_of_token_8() { return &___token_8; }
	inline void set_token_8(int32_t value)
	{
		___token_8 = value;
	}
};

struct Module_t2987026101_StaticFields
{
public:
	// System.Reflection.TypeFilter System.Reflection.Module::FilterTypeName
	TypeFilter_t2356120900 * ___FilterTypeName_0;
	// System.Reflection.TypeFilter System.Reflection.Module::FilterTypeNameIgnoreCase
	TypeFilter_t2356120900 * ___FilterTypeNameIgnoreCase_1;

public:
	inline static int32_t get_offset_of_FilterTypeName_0() { return static_cast<int32_t>(offsetof(Module_t2987026101_StaticFields, ___FilterTypeName_0)); }
	inline TypeFilter_t2356120900 * get_FilterTypeName_0() const { return ___FilterTypeName_0; }
	inline TypeFilter_t2356120900 ** get_address_of_FilterTypeName_0() { return &___FilterTypeName_0; }
	inline void set_FilterTypeName_0(TypeFilter_t2356120900 * value)
	{
		___FilterTypeName_0 = value;
		Il2CppCodeGenWriteBarrier((&___FilterTypeName_0), value);
	}

	inline static int32_t get_offset_of_FilterTypeNameIgnoreCase_1() { return static_cast<int32_t>(offsetof(Module_t2987026101_StaticFields, ___FilterTypeNameIgnoreCase_1)); }
	inline TypeFilter_t2356120900 * get_FilterTypeNameIgnoreCase_1() const { return ___FilterTypeNameIgnoreCase_1; }
	inline TypeFilter_t2356120900 ** get_address_of_FilterTypeNameIgnoreCase_1() { return &___FilterTypeNameIgnoreCase_1; }
	inline void set_FilterTypeNameIgnoreCase_1(TypeFilter_t2356120900 * value)
	{
		___FilterTypeNameIgnoreCase_1 = value;
		Il2CppCodeGenWriteBarrier((&___FilterTypeNameIgnoreCase_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Reflection.Module
struct Module_t2987026101_marshaled_pinvoke
{
	intptr_t ____impl_2;
	Assembly_t_marshaled_pinvoke* ___assembly_3;
	char* ___fqname_4;
	char* ___name_5;
	char* ___scopename_6;
	int32_t ___is_resource_7;
	int32_t ___token_8;
};
// Native definition for COM marshalling of System.Reflection.Module
struct Module_t2987026101_marshaled_com
{
	intptr_t ____impl_2;
	Assembly_t_marshaled_com* ___assembly_3;
	Il2CppChar* ___fqname_4;
	Il2CppChar* ___name_5;
	Il2CppChar* ___scopename_6;
	int32_t ___is_resource_7;
	int32_t ___token_8;
};
#endif // MODULE_T2987026101_H
#ifndef MONOEVENT_T_H
#define MONOEVENT_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MonoEvent
struct  MonoEvent_t  : public RuntimeEventInfo_t842299361
{
public:
	// System.IntPtr System.Reflection.MonoEvent::klass
	intptr_t ___klass_1;
	// System.IntPtr System.Reflection.MonoEvent::handle
	intptr_t ___handle_2;

public:
	inline static int32_t get_offset_of_klass_1() { return static_cast<int32_t>(offsetof(MonoEvent_t, ___klass_1)); }
	inline intptr_t get_klass_1() const { return ___klass_1; }
	inline intptr_t* get_address_of_klass_1() { return &___klass_1; }
	inline void set_klass_1(intptr_t value)
	{
		___klass_1 = value;
	}

	inline static int32_t get_offset_of_handle_2() { return static_cast<int32_t>(offsetof(MonoEvent_t, ___handle_2)); }
	inline intptr_t get_handle_2() const { return ___handle_2; }
	inline intptr_t* get_address_of_handle_2() { return &___handle_2; }
	inline void set_handle_2(intptr_t value)
	{
		___handle_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOEVENT_T_H
#ifndef MONOEVENTINFO_T346866618_H
#define MONOEVENTINFO_T346866618_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MonoEventInfo
struct  MonoEventInfo_t346866618 
{
public:
	// System.Type System.Reflection.MonoEventInfo::declaring_type
	Type_t * ___declaring_type_0;
	// System.Type System.Reflection.MonoEventInfo::reflected_type
	Type_t * ___reflected_type_1;
	// System.String System.Reflection.MonoEventInfo::name
	String_t* ___name_2;
	// System.Reflection.MethodInfo System.Reflection.MonoEventInfo::add_method
	MethodInfo_t * ___add_method_3;
	// System.Reflection.MethodInfo System.Reflection.MonoEventInfo::remove_method
	MethodInfo_t * ___remove_method_4;
	// System.Reflection.MethodInfo System.Reflection.MonoEventInfo::raise_method
	MethodInfo_t * ___raise_method_5;
	// System.Reflection.EventAttributes System.Reflection.MonoEventInfo::attrs
	int32_t ___attrs_6;
	// System.Reflection.MethodInfo[] System.Reflection.MonoEventInfo::other_methods
	MethodInfoU5BU5D_t2572182361* ___other_methods_7;

public:
	inline static int32_t get_offset_of_declaring_type_0() { return static_cast<int32_t>(offsetof(MonoEventInfo_t346866618, ___declaring_type_0)); }
	inline Type_t * get_declaring_type_0() const { return ___declaring_type_0; }
	inline Type_t ** get_address_of_declaring_type_0() { return &___declaring_type_0; }
	inline void set_declaring_type_0(Type_t * value)
	{
		___declaring_type_0 = value;
		Il2CppCodeGenWriteBarrier((&___declaring_type_0), value);
	}

	inline static int32_t get_offset_of_reflected_type_1() { return static_cast<int32_t>(offsetof(MonoEventInfo_t346866618, ___reflected_type_1)); }
	inline Type_t * get_reflected_type_1() const { return ___reflected_type_1; }
	inline Type_t ** get_address_of_reflected_type_1() { return &___reflected_type_1; }
	inline void set_reflected_type_1(Type_t * value)
	{
		___reflected_type_1 = value;
		Il2CppCodeGenWriteBarrier((&___reflected_type_1), value);
	}

	inline static int32_t get_offset_of_name_2() { return static_cast<int32_t>(offsetof(MonoEventInfo_t346866618, ___name_2)); }
	inline String_t* get_name_2() const { return ___name_2; }
	inline String_t** get_address_of_name_2() { return &___name_2; }
	inline void set_name_2(String_t* value)
	{
		___name_2 = value;
		Il2CppCodeGenWriteBarrier((&___name_2), value);
	}

	inline static int32_t get_offset_of_add_method_3() { return static_cast<int32_t>(offsetof(MonoEventInfo_t346866618, ___add_method_3)); }
	inline MethodInfo_t * get_add_method_3() const { return ___add_method_3; }
	inline MethodInfo_t ** get_address_of_add_method_3() { return &___add_method_3; }
	inline void set_add_method_3(MethodInfo_t * value)
	{
		___add_method_3 = value;
		Il2CppCodeGenWriteBarrier((&___add_method_3), value);
	}

	inline static int32_t get_offset_of_remove_method_4() { return static_cast<int32_t>(offsetof(MonoEventInfo_t346866618, ___remove_method_4)); }
	inline MethodInfo_t * get_remove_method_4() const { return ___remove_method_4; }
	inline MethodInfo_t ** get_address_of_remove_method_4() { return &___remove_method_4; }
	inline void set_remove_method_4(MethodInfo_t * value)
	{
		___remove_method_4 = value;
		Il2CppCodeGenWriteBarrier((&___remove_method_4), value);
	}

	inline static int32_t get_offset_of_raise_method_5() { return static_cast<int32_t>(offsetof(MonoEventInfo_t346866618, ___raise_method_5)); }
	inline MethodInfo_t * get_raise_method_5() const { return ___raise_method_5; }
	inline MethodInfo_t ** get_address_of_raise_method_5() { return &___raise_method_5; }
	inline void set_raise_method_5(MethodInfo_t * value)
	{
		___raise_method_5 = value;
		Il2CppCodeGenWriteBarrier((&___raise_method_5), value);
	}

	inline static int32_t get_offset_of_attrs_6() { return static_cast<int32_t>(offsetof(MonoEventInfo_t346866618, ___attrs_6)); }
	inline int32_t get_attrs_6() const { return ___attrs_6; }
	inline int32_t* get_address_of_attrs_6() { return &___attrs_6; }
	inline void set_attrs_6(int32_t value)
	{
		___attrs_6 = value;
	}

	inline static int32_t get_offset_of_other_methods_7() { return static_cast<int32_t>(offsetof(MonoEventInfo_t346866618, ___other_methods_7)); }
	inline MethodInfoU5BU5D_t2572182361* get_other_methods_7() const { return ___other_methods_7; }
	inline MethodInfoU5BU5D_t2572182361** get_address_of_other_methods_7() { return &___other_methods_7; }
	inline void set_other_methods_7(MethodInfoU5BU5D_t2572182361* value)
	{
		___other_methods_7 = value;
		Il2CppCodeGenWriteBarrier((&___other_methods_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Reflection.MonoEventInfo
struct MonoEventInfo_t346866618_marshaled_pinvoke
{
	Type_t * ___declaring_type_0;
	Type_t * ___reflected_type_1;
	char* ___name_2;
	MethodInfo_t * ___add_method_3;
	MethodInfo_t * ___remove_method_4;
	MethodInfo_t * ___raise_method_5;
	int32_t ___attrs_6;
	MethodInfoU5BU5D_t2572182361* ___other_methods_7;
};
// Native definition for COM marshalling of System.Reflection.MonoEventInfo
struct MonoEventInfo_t346866618_marshaled_com
{
	Type_t * ___declaring_type_0;
	Type_t * ___reflected_type_1;
	Il2CppChar* ___name_2;
	MethodInfo_t * ___add_method_3;
	MethodInfo_t * ___remove_method_4;
	MethodInfo_t * ___raise_method_5;
	int32_t ___attrs_6;
	MethodInfoU5BU5D_t2572182361* ___other_methods_7;
};
#endif // MONOEVENTINFO_T346866618_H
#ifndef MONOMETHODINFO_T1248819020_H
#define MONOMETHODINFO_T1248819020_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MonoMethodInfo
struct  MonoMethodInfo_t1248819020 
{
public:
	// System.Type System.Reflection.MonoMethodInfo::parent
	Type_t * ___parent_0;
	// System.Type System.Reflection.MonoMethodInfo::ret
	Type_t * ___ret_1;
	// System.Reflection.MethodAttributes System.Reflection.MonoMethodInfo::attrs
	int32_t ___attrs_2;
	// System.Reflection.MethodImplAttributes System.Reflection.MonoMethodInfo::iattrs
	int32_t ___iattrs_3;
	// System.Reflection.CallingConventions System.Reflection.MonoMethodInfo::callconv
	int32_t ___callconv_4;

public:
	inline static int32_t get_offset_of_parent_0() { return static_cast<int32_t>(offsetof(MonoMethodInfo_t1248819020, ___parent_0)); }
	inline Type_t * get_parent_0() const { return ___parent_0; }
	inline Type_t ** get_address_of_parent_0() { return &___parent_0; }
	inline void set_parent_0(Type_t * value)
	{
		___parent_0 = value;
		Il2CppCodeGenWriteBarrier((&___parent_0), value);
	}

	inline static int32_t get_offset_of_ret_1() { return static_cast<int32_t>(offsetof(MonoMethodInfo_t1248819020, ___ret_1)); }
	inline Type_t * get_ret_1() const { return ___ret_1; }
	inline Type_t ** get_address_of_ret_1() { return &___ret_1; }
	inline void set_ret_1(Type_t * value)
	{
		___ret_1 = value;
		Il2CppCodeGenWriteBarrier((&___ret_1), value);
	}

	inline static int32_t get_offset_of_attrs_2() { return static_cast<int32_t>(offsetof(MonoMethodInfo_t1248819020, ___attrs_2)); }
	inline int32_t get_attrs_2() const { return ___attrs_2; }
	inline int32_t* get_address_of_attrs_2() { return &___attrs_2; }
	inline void set_attrs_2(int32_t value)
	{
		___attrs_2 = value;
	}

	inline static int32_t get_offset_of_iattrs_3() { return static_cast<int32_t>(offsetof(MonoMethodInfo_t1248819020, ___iattrs_3)); }
	inline int32_t get_iattrs_3() const { return ___iattrs_3; }
	inline int32_t* get_address_of_iattrs_3() { return &___iattrs_3; }
	inline void set_iattrs_3(int32_t value)
	{
		___iattrs_3 = value;
	}

	inline static int32_t get_offset_of_callconv_4() { return static_cast<int32_t>(offsetof(MonoMethodInfo_t1248819020, ___callconv_4)); }
	inline int32_t get_callconv_4() const { return ___callconv_4; }
	inline int32_t* get_address_of_callconv_4() { return &___callconv_4; }
	inline void set_callconv_4(int32_t value)
	{
		___callconv_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Reflection.MonoMethodInfo
struct MonoMethodInfo_t1248819020_marshaled_pinvoke
{
	Type_t * ___parent_0;
	Type_t * ___ret_1;
	int32_t ___attrs_2;
	int32_t ___iattrs_3;
	int32_t ___callconv_4;
};
// Native definition for COM marshalling of System.Reflection.MonoMethodInfo
struct MonoMethodInfo_t1248819020_marshaled_com
{
	Type_t * ___parent_0;
	Type_t * ___ret_1;
	int32_t ___attrs_2;
	int32_t ___iattrs_3;
	int32_t ___callconv_4;
};
#endif // MONOMETHODINFO_T1248819020_H
#ifndef MONOPROPERTYINFO_T3087356066_H
#define MONOPROPERTYINFO_T3087356066_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MonoPropertyInfo
struct  MonoPropertyInfo_t3087356066 
{
public:
	// System.Type System.Reflection.MonoPropertyInfo::parent
	Type_t * ___parent_0;
	// System.Type System.Reflection.MonoPropertyInfo::declaring_type
	Type_t * ___declaring_type_1;
	// System.String System.Reflection.MonoPropertyInfo::name
	String_t* ___name_2;
	// System.Reflection.MethodInfo System.Reflection.MonoPropertyInfo::get_method
	MethodInfo_t * ___get_method_3;
	// System.Reflection.MethodInfo System.Reflection.MonoPropertyInfo::set_method
	MethodInfo_t * ___set_method_4;
	// System.Reflection.PropertyAttributes System.Reflection.MonoPropertyInfo::attrs
	int32_t ___attrs_5;

public:
	inline static int32_t get_offset_of_parent_0() { return static_cast<int32_t>(offsetof(MonoPropertyInfo_t3087356066, ___parent_0)); }
	inline Type_t * get_parent_0() const { return ___parent_0; }
	inline Type_t ** get_address_of_parent_0() { return &___parent_0; }
	inline void set_parent_0(Type_t * value)
	{
		___parent_0 = value;
		Il2CppCodeGenWriteBarrier((&___parent_0), value);
	}

	inline static int32_t get_offset_of_declaring_type_1() { return static_cast<int32_t>(offsetof(MonoPropertyInfo_t3087356066, ___declaring_type_1)); }
	inline Type_t * get_declaring_type_1() const { return ___declaring_type_1; }
	inline Type_t ** get_address_of_declaring_type_1() { return &___declaring_type_1; }
	inline void set_declaring_type_1(Type_t * value)
	{
		___declaring_type_1 = value;
		Il2CppCodeGenWriteBarrier((&___declaring_type_1), value);
	}

	inline static int32_t get_offset_of_name_2() { return static_cast<int32_t>(offsetof(MonoPropertyInfo_t3087356066, ___name_2)); }
	inline String_t* get_name_2() const { return ___name_2; }
	inline String_t** get_address_of_name_2() { return &___name_2; }
	inline void set_name_2(String_t* value)
	{
		___name_2 = value;
		Il2CppCodeGenWriteBarrier((&___name_2), value);
	}

	inline static int32_t get_offset_of_get_method_3() { return static_cast<int32_t>(offsetof(MonoPropertyInfo_t3087356066, ___get_method_3)); }
	inline MethodInfo_t * get_get_method_3() const { return ___get_method_3; }
	inline MethodInfo_t ** get_address_of_get_method_3() { return &___get_method_3; }
	inline void set_get_method_3(MethodInfo_t * value)
	{
		___get_method_3 = value;
		Il2CppCodeGenWriteBarrier((&___get_method_3), value);
	}

	inline static int32_t get_offset_of_set_method_4() { return static_cast<int32_t>(offsetof(MonoPropertyInfo_t3087356066, ___set_method_4)); }
	inline MethodInfo_t * get_set_method_4() const { return ___set_method_4; }
	inline MethodInfo_t ** get_address_of_set_method_4() { return &___set_method_4; }
	inline void set_set_method_4(MethodInfo_t * value)
	{
		___set_method_4 = value;
		Il2CppCodeGenWriteBarrier((&___set_method_4), value);
	}

	inline static int32_t get_offset_of_attrs_5() { return static_cast<int32_t>(offsetof(MonoPropertyInfo_t3087356066, ___attrs_5)); }
	inline int32_t get_attrs_5() const { return ___attrs_5; }
	inline int32_t* get_address_of_attrs_5() { return &___attrs_5; }
	inline void set_attrs_5(int32_t value)
	{
		___attrs_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Reflection.MonoPropertyInfo
struct MonoPropertyInfo_t3087356066_marshaled_pinvoke
{
	Type_t * ___parent_0;
	Type_t * ___declaring_type_1;
	char* ___name_2;
	MethodInfo_t * ___get_method_3;
	MethodInfo_t * ___set_method_4;
	int32_t ___attrs_5;
};
// Native definition for COM marshalling of System.Reflection.MonoPropertyInfo
struct MonoPropertyInfo_t3087356066_marshaled_com
{
	Type_t * ___parent_0;
	Type_t * ___declaring_type_1;
	Il2CppChar* ___name_2;
	MethodInfo_t * ___get_method_3;
	MethodInfo_t * ___set_method_4;
	int32_t ___attrs_5;
};
#endif // MONOPROPERTYINFO_T3087356066_H
#ifndef PARAMETERINFO_T1861056598_H
#define PARAMETERINFO_T1861056598_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.ParameterInfo
struct  ParameterInfo_t1861056598  : public RuntimeObject
{
public:
	// System.Type System.Reflection.ParameterInfo::ClassImpl
	Type_t * ___ClassImpl_0;
	// System.Object System.Reflection.ParameterInfo::DefaultValueImpl
	RuntimeObject * ___DefaultValueImpl_1;
	// System.Reflection.MemberInfo System.Reflection.ParameterInfo::MemberImpl
	MemberInfo_t * ___MemberImpl_2;
	// System.String System.Reflection.ParameterInfo::NameImpl
	String_t* ___NameImpl_3;
	// System.Int32 System.Reflection.ParameterInfo::PositionImpl
	int32_t ___PositionImpl_4;
	// System.Reflection.ParameterAttributes System.Reflection.ParameterInfo::AttrsImpl
	int32_t ___AttrsImpl_5;
	// System.Runtime.InteropServices.MarshalAsAttribute System.Reflection.ParameterInfo::marshalAs
	MarshalAsAttribute_t3522571978 * ___marshalAs_6;

public:
	inline static int32_t get_offset_of_ClassImpl_0() { return static_cast<int32_t>(offsetof(ParameterInfo_t1861056598, ___ClassImpl_0)); }
	inline Type_t * get_ClassImpl_0() const { return ___ClassImpl_0; }
	inline Type_t ** get_address_of_ClassImpl_0() { return &___ClassImpl_0; }
	inline void set_ClassImpl_0(Type_t * value)
	{
		___ClassImpl_0 = value;
		Il2CppCodeGenWriteBarrier((&___ClassImpl_0), value);
	}

	inline static int32_t get_offset_of_DefaultValueImpl_1() { return static_cast<int32_t>(offsetof(ParameterInfo_t1861056598, ___DefaultValueImpl_1)); }
	inline RuntimeObject * get_DefaultValueImpl_1() const { return ___DefaultValueImpl_1; }
	inline RuntimeObject ** get_address_of_DefaultValueImpl_1() { return &___DefaultValueImpl_1; }
	inline void set_DefaultValueImpl_1(RuntimeObject * value)
	{
		___DefaultValueImpl_1 = value;
		Il2CppCodeGenWriteBarrier((&___DefaultValueImpl_1), value);
	}

	inline static int32_t get_offset_of_MemberImpl_2() { return static_cast<int32_t>(offsetof(ParameterInfo_t1861056598, ___MemberImpl_2)); }
	inline MemberInfo_t * get_MemberImpl_2() const { return ___MemberImpl_2; }
	inline MemberInfo_t ** get_address_of_MemberImpl_2() { return &___MemberImpl_2; }
	inline void set_MemberImpl_2(MemberInfo_t * value)
	{
		___MemberImpl_2 = value;
		Il2CppCodeGenWriteBarrier((&___MemberImpl_2), value);
	}

	inline static int32_t get_offset_of_NameImpl_3() { return static_cast<int32_t>(offsetof(ParameterInfo_t1861056598, ___NameImpl_3)); }
	inline String_t* get_NameImpl_3() const { return ___NameImpl_3; }
	inline String_t** get_address_of_NameImpl_3() { return &___NameImpl_3; }
	inline void set_NameImpl_3(String_t* value)
	{
		___NameImpl_3 = value;
		Il2CppCodeGenWriteBarrier((&___NameImpl_3), value);
	}

	inline static int32_t get_offset_of_PositionImpl_4() { return static_cast<int32_t>(offsetof(ParameterInfo_t1861056598, ___PositionImpl_4)); }
	inline int32_t get_PositionImpl_4() const { return ___PositionImpl_4; }
	inline int32_t* get_address_of_PositionImpl_4() { return &___PositionImpl_4; }
	inline void set_PositionImpl_4(int32_t value)
	{
		___PositionImpl_4 = value;
	}

	inline static int32_t get_offset_of_AttrsImpl_5() { return static_cast<int32_t>(offsetof(ParameterInfo_t1861056598, ___AttrsImpl_5)); }
	inline int32_t get_AttrsImpl_5() const { return ___AttrsImpl_5; }
	inline int32_t* get_address_of_AttrsImpl_5() { return &___AttrsImpl_5; }
	inline void set_AttrsImpl_5(int32_t value)
	{
		___AttrsImpl_5 = value;
	}

	inline static int32_t get_offset_of_marshalAs_6() { return static_cast<int32_t>(offsetof(ParameterInfo_t1861056598, ___marshalAs_6)); }
	inline MarshalAsAttribute_t3522571978 * get_marshalAs_6() const { return ___marshalAs_6; }
	inline MarshalAsAttribute_t3522571978 ** get_address_of_marshalAs_6() { return &___marshalAs_6; }
	inline void set_marshalAs_6(MarshalAsAttribute_t3522571978 * value)
	{
		___marshalAs_6 = value;
		Il2CppCodeGenWriteBarrier((&___marshalAs_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Reflection.ParameterInfo
struct ParameterInfo_t1861056598_marshaled_pinvoke
{
	Type_t * ___ClassImpl_0;
	Il2CppIUnknown* ___DefaultValueImpl_1;
	MemberInfo_t * ___MemberImpl_2;
	char* ___NameImpl_3;
	int32_t ___PositionImpl_4;
	int32_t ___AttrsImpl_5;
	MarshalAsAttribute_t3522571978 * ___marshalAs_6;
};
// Native definition for COM marshalling of System.Reflection.ParameterInfo
struct ParameterInfo_t1861056598_marshaled_com
{
	Type_t * ___ClassImpl_0;
	Il2CppIUnknown* ___DefaultValueImpl_1;
	MemberInfo_t * ___MemberImpl_2;
	Il2CppChar* ___NameImpl_3;
	int32_t ___PositionImpl_4;
	int32_t ___AttrsImpl_5;
	MarshalAsAttribute_t3522571978 * ___marshalAs_6;
};
#endif // PARAMETERINFO_T1861056598_H
#ifndef RTFIELDINFO_T1523629740_H
#define RTFIELDINFO_T1523629740_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.RtFieldInfo
struct  RtFieldInfo_t1523629740  : public RuntimeFieldInfo_t4270975280
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RTFIELDINFO_T1523629740_H
#ifndef RUNTIMEASSEMBLY_T1451753063_H
#define RUNTIMEASSEMBLY_T1451753063_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.RuntimeAssembly
struct  RuntimeAssembly_t1451753063  : public Assembly_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEASSEMBLY_T1451753063_H
#ifndef RUNTIMECONSTRUCTORINFO_T1806616898_H
#define RUNTIMECONSTRUCTORINFO_T1806616898_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.RuntimeConstructorInfo
struct  RuntimeConstructorInfo_t1806616898  : public ConstructorInfo_t5769829
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMECONSTRUCTORINFO_T1806616898_H
#ifndef RUNTIMEMETHODINFO_T1367801569_H
#define RUNTIMEMETHODINFO_T1367801569_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.RuntimeMethodInfo
struct  RuntimeMethodInfo_t1367801569  : public MethodInfo_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEMETHODINFO_T1367801569_H
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
#ifndef ADDEVENTADAPTER_T1787725097_H
#define ADDEVENTADAPTER_T1787725097_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.EventInfo/AddEventAdapter
struct  AddEventAdapter_t1787725097  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ADDEVENTADAPTER_T1787725097_H
#ifndef MEMBERFILTER_T426314064_H
#define MEMBERFILTER_T426314064_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MemberFilter
struct  MemberFilter_t426314064  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MEMBERFILTER_T426314064_H
#ifndef MONOASSEMBLY_T1717092724_H
#define MONOASSEMBLY_T1717092724_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MonoAssembly
struct  MonoAssembly_t1717092724  : public RuntimeAssembly_t1451753063
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOASSEMBLY_T1717092724_H
#ifndef MONOCMETHOD_T3191134373_H
#define MONOCMETHOD_T3191134373_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MonoCMethod
struct  MonoCMethod_t3191134373  : public RuntimeConstructorInfo_t1806616898
{
public:
	// System.IntPtr System.Reflection.MonoCMethod::mhandle
	intptr_t ___mhandle_2;
	// System.String System.Reflection.MonoCMethod::name
	String_t* ___name_3;
	// System.Type System.Reflection.MonoCMethod::reftype
	Type_t * ___reftype_4;

public:
	inline static int32_t get_offset_of_mhandle_2() { return static_cast<int32_t>(offsetof(MonoCMethod_t3191134373, ___mhandle_2)); }
	inline intptr_t get_mhandle_2() const { return ___mhandle_2; }
	inline intptr_t* get_address_of_mhandle_2() { return &___mhandle_2; }
	inline void set_mhandle_2(intptr_t value)
	{
		___mhandle_2 = value;
	}

	inline static int32_t get_offset_of_name_3() { return static_cast<int32_t>(offsetof(MonoCMethod_t3191134373, ___name_3)); }
	inline String_t* get_name_3() const { return ___name_3; }
	inline String_t** get_address_of_name_3() { return &___name_3; }
	inline void set_name_3(String_t* value)
	{
		___name_3 = value;
		Il2CppCodeGenWriteBarrier((&___name_3), value);
	}

	inline static int32_t get_offset_of_reftype_4() { return static_cast<int32_t>(offsetof(MonoCMethod_t3191134373, ___reftype_4)); }
	inline Type_t * get_reftype_4() const { return ___reftype_4; }
	inline Type_t ** get_address_of_reftype_4() { return &___reftype_4; }
	inline void set_reftype_4(Type_t * value)
	{
		___reftype_4 = value;
		Il2CppCodeGenWriteBarrier((&___reftype_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOCMETHOD_T3191134373_H
#ifndef MONOFIELD_T_H
#define MONOFIELD_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MonoField
struct  MonoField_t  : public RtFieldInfo_t1523629740
{
public:
	// System.IntPtr System.Reflection.MonoField::klass
	intptr_t ___klass_0;
	// System.RuntimeFieldHandle System.Reflection.MonoField::fhandle
	RuntimeFieldHandle_t1871169219  ___fhandle_1;
	// System.String System.Reflection.MonoField::name
	String_t* ___name_2;
	// System.Type System.Reflection.MonoField::type
	Type_t * ___type_3;
	// System.Reflection.FieldAttributes System.Reflection.MonoField::attrs
	int32_t ___attrs_4;

public:
	inline static int32_t get_offset_of_klass_0() { return static_cast<int32_t>(offsetof(MonoField_t, ___klass_0)); }
	inline intptr_t get_klass_0() const { return ___klass_0; }
	inline intptr_t* get_address_of_klass_0() { return &___klass_0; }
	inline void set_klass_0(intptr_t value)
	{
		___klass_0 = value;
	}

	inline static int32_t get_offset_of_fhandle_1() { return static_cast<int32_t>(offsetof(MonoField_t, ___fhandle_1)); }
	inline RuntimeFieldHandle_t1871169219  get_fhandle_1() const { return ___fhandle_1; }
	inline RuntimeFieldHandle_t1871169219 * get_address_of_fhandle_1() { return &___fhandle_1; }
	inline void set_fhandle_1(RuntimeFieldHandle_t1871169219  value)
	{
		___fhandle_1 = value;
	}

	inline static int32_t get_offset_of_name_2() { return static_cast<int32_t>(offsetof(MonoField_t, ___name_2)); }
	inline String_t* get_name_2() const { return ___name_2; }
	inline String_t** get_address_of_name_2() { return &___name_2; }
	inline void set_name_2(String_t* value)
	{
		___name_2 = value;
		Il2CppCodeGenWriteBarrier((&___name_2), value);
	}

	inline static int32_t get_offset_of_type_3() { return static_cast<int32_t>(offsetof(MonoField_t, ___type_3)); }
	inline Type_t * get_type_3() const { return ___type_3; }
	inline Type_t ** get_address_of_type_3() { return &___type_3; }
	inline void set_type_3(Type_t * value)
	{
		___type_3 = value;
		Il2CppCodeGenWriteBarrier((&___type_3), value);
	}

	inline static int32_t get_offset_of_attrs_4() { return static_cast<int32_t>(offsetof(MonoField_t, ___attrs_4)); }
	inline int32_t get_attrs_4() const { return ___attrs_4; }
	inline int32_t* get_address_of_attrs_4() { return &___attrs_4; }
	inline void set_attrs_4(int32_t value)
	{
		___attrs_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOFIELD_T_H
#ifndef MONOMETHOD_T_H
#define MONOMETHOD_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MonoMethod
struct  MonoMethod_t  : public RuntimeMethodInfo_t1367801569
{
public:
	// System.IntPtr System.Reflection.MonoMethod::mhandle
	intptr_t ___mhandle_0;
	// System.String System.Reflection.MonoMethod::name
	String_t* ___name_1;
	// System.Type System.Reflection.MonoMethod::reftype
	Type_t * ___reftype_2;

public:
	inline static int32_t get_offset_of_mhandle_0() { return static_cast<int32_t>(offsetof(MonoMethod_t, ___mhandle_0)); }
	inline intptr_t get_mhandle_0() const { return ___mhandle_0; }
	inline intptr_t* get_address_of_mhandle_0() { return &___mhandle_0; }
	inline void set_mhandle_0(intptr_t value)
	{
		___mhandle_0 = value;
	}

	inline static int32_t get_offset_of_name_1() { return static_cast<int32_t>(offsetof(MonoMethod_t, ___name_1)); }
	inline String_t* get_name_1() const { return ___name_1; }
	inline String_t** get_address_of_name_1() { return &___name_1; }
	inline void set_name_1(String_t* value)
	{
		___name_1 = value;
		Il2CppCodeGenWriteBarrier((&___name_1), value);
	}

	inline static int32_t get_offset_of_reftype_2() { return static_cast<int32_t>(offsetof(MonoMethod_t, ___reftype_2)); }
	inline Type_t * get_reftype_2() const { return ___reftype_2; }
	inline Type_t ** get_address_of_reftype_2() { return &___reftype_2; }
	inline void set_reftype_2(Type_t * value)
	{
		___reftype_2 = value;
		Il2CppCodeGenWriteBarrier((&___reftype_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOMETHOD_T_H
#ifndef MONOPROPERTY_T_H
#define MONOPROPERTY_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MonoProperty
struct  MonoProperty_t  : public RuntimePropertyInfo_t1784655210
{
public:
	// System.IntPtr System.Reflection.MonoProperty::klass
	intptr_t ___klass_0;
	// System.IntPtr System.Reflection.MonoProperty::prop
	intptr_t ___prop_1;
	// System.Reflection.MonoPropertyInfo System.Reflection.MonoProperty::info
	MonoPropertyInfo_t3087356066  ___info_2;
	// System.Reflection.PInfo System.Reflection.MonoProperty::cached
	int32_t ___cached_3;
	// System.Reflection.MonoProperty/GetterAdapter System.Reflection.MonoProperty::cached_getter
	GetterAdapter_t2155025054 * ___cached_getter_4;

public:
	inline static int32_t get_offset_of_klass_0() { return static_cast<int32_t>(offsetof(MonoProperty_t, ___klass_0)); }
	inline intptr_t get_klass_0() const { return ___klass_0; }
	inline intptr_t* get_address_of_klass_0() { return &___klass_0; }
	inline void set_klass_0(intptr_t value)
	{
		___klass_0 = value;
	}

	inline static int32_t get_offset_of_prop_1() { return static_cast<int32_t>(offsetof(MonoProperty_t, ___prop_1)); }
	inline intptr_t get_prop_1() const { return ___prop_1; }
	inline intptr_t* get_address_of_prop_1() { return &___prop_1; }
	inline void set_prop_1(intptr_t value)
	{
		___prop_1 = value;
	}

	inline static int32_t get_offset_of_info_2() { return static_cast<int32_t>(offsetof(MonoProperty_t, ___info_2)); }
	inline MonoPropertyInfo_t3087356066  get_info_2() const { return ___info_2; }
	inline MonoPropertyInfo_t3087356066 * get_address_of_info_2() { return &___info_2; }
	inline void set_info_2(MonoPropertyInfo_t3087356066  value)
	{
		___info_2 = value;
	}

	inline static int32_t get_offset_of_cached_3() { return static_cast<int32_t>(offsetof(MonoProperty_t, ___cached_3)); }
	inline int32_t get_cached_3() const { return ___cached_3; }
	inline int32_t* get_address_of_cached_3() { return &___cached_3; }
	inline void set_cached_3(int32_t value)
	{
		___cached_3 = value;
	}

	inline static int32_t get_offset_of_cached_getter_4() { return static_cast<int32_t>(offsetof(MonoProperty_t, ___cached_getter_4)); }
	inline GetterAdapter_t2155025054 * get_cached_getter_4() const { return ___cached_getter_4; }
	inline GetterAdapter_t2155025054 ** get_address_of_cached_getter_4() { return &___cached_getter_4; }
	inline void set_cached_getter_4(GetterAdapter_t2155025054 * value)
	{
		___cached_getter_4 = value;
		Il2CppCodeGenWriteBarrier((&___cached_getter_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOPROPERTY_T_H
#ifndef GETTERADAPTER_T2155025054_H
#define GETTERADAPTER_T2155025054_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MonoProperty/GetterAdapter
struct  GetterAdapter_t2155025054  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GETTERADAPTER_T2155025054_H
#ifndef RUNTIMEMODULE_T2461322606_H
#define RUNTIMEMODULE_T2461322606_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.RuntimeModule
struct  RuntimeModule_t2461322606  : public Module_t2987026101
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEMODULE_T2461322606_H
#ifndef RUNTIMEPARAMETERINFO_T744328879_H
#define RUNTIMEPARAMETERINFO_T744328879_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.RuntimeParameterInfo
struct  RuntimeParameterInfo_t744328879  : public ParameterInfo_t1861056598
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEPARAMETERINFO_T744328879_H
#ifndef TYPEFILTER_T2356120900_H
#define TYPEFILTER_T2356120900_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.TypeFilter
struct  TypeFilter_t2356120900  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPEFILTER_T2356120900_H
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
#ifndef SYMBOLTYPE_T2660201939_H
#define SYMBOLTYPE_T2660201939_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.Emit.SymbolType
struct  SymbolType_t2660201939  : public TypeInfo_t1690786683
{
public:
	// System.Type System.Reflection.Emit.SymbolType::m_baseType
	Type_t * ___m_baseType_10;

public:
	inline static int32_t get_offset_of_m_baseType_10() { return static_cast<int32_t>(offsetof(SymbolType_t2660201939, ___m_baseType_10)); }
	inline Type_t * get_m_baseType_10() const { return ___m_baseType_10; }
	inline Type_t ** get_address_of_m_baseType_10() { return &___m_baseType_10; }
	inline void set_m_baseType_10(Type_t * value)
	{
		___m_baseType_10 = value;
		Il2CppCodeGenWriteBarrier((&___m_baseType_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYMBOLTYPE_T2660201939_H
#ifndef MONOMODULE_T3215834869_H
#define MONOMODULE_T3215834869_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MonoModule
struct  MonoModule_t3215834869  : public RuntimeModule_t2461322606
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOMODULE_T3215834869_H
#ifndef MONOPARAMETERINFO_T2370358381_H
#define MONOPARAMETERINFO_T2370358381_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MonoParameterInfo
struct  MonoParameterInfo_t2370358381  : public RuntimeParameterInfo_t744328879
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOPARAMETERINFO_T2370358381_H
#ifndef TYPEDELEGATOR_T3617470028_H
#define TYPEDELEGATOR_T3617470028_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.TypeDelegator
struct  TypeDelegator_t3617470028  : public TypeInfo_t1690786683
{
public:
	// System.Type System.Reflection.TypeDelegator::typeImpl
	Type_t * ___typeImpl_10;

public:
	inline static int32_t get_offset_of_typeImpl_10() { return static_cast<int32_t>(offsetof(TypeDelegator_t3617470028, ___typeImpl_10)); }
	inline Type_t * get_typeImpl_10() const { return ___typeImpl_10; }
	inline Type_t ** get_address_of_typeImpl_10() { return &___typeImpl_10; }
	inline void set_typeImpl_10(Type_t * value)
	{
		___typeImpl_10 = value;
		Il2CppCodeGenWriteBarrier((&___typeImpl_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPEDELEGATOR_T3617470028_H
#ifndef ARRAYTYPE_T700911890_H
#define ARRAYTYPE_T700911890_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.Emit.ArrayType
struct  ArrayType_t700911890  : public SymbolType_t2660201939
{
public:
	// System.Int32 System.Reflection.Emit.ArrayType::rank
	int32_t ___rank_11;

public:
	inline static int32_t get_offset_of_rank_11() { return static_cast<int32_t>(offsetof(ArrayType_t700911890, ___rank_11)); }
	inline int32_t get_rank_11() const { return ___rank_11; }
	inline int32_t* get_address_of_rank_11() { return &___rank_11; }
	inline void set_rank_11(int32_t value)
	{
		___rank_11 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARRAYTYPE_T700911890_H
#ifndef BYREFTYPE_T2066805327_H
#define BYREFTYPE_T2066805327_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.Emit.ByRefType
struct  ByRefType_t2066805327  : public SymbolType_t2660201939
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BYREFTYPE_T2066805327_H
#ifndef POINTERTYPE_T2717154204_H
#define POINTERTYPE_T2717154204_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.Emit.PointerType
struct  PointerType_t2717154204  : public SymbolType_t2660201939
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // POINTERTYPE_T2717154204_H





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize500 = { sizeof (ProcessorArchitecture_t305929193)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable500[7] = 
{
	ProcessorArchitecture_t305929193::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize501 = { sizeof (Binder_t2999457153), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize502 = { sizeof (BindingFlags_t2721792723)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable502[21] = 
{
	BindingFlags_t2721792723::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize503 = { sizeof (CallingConventions_t2253234531)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable503[6] = 
{
	CallingConventions_t2253234531::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize504 = { sizeof (DefaultMemberAttribute_t3275092422), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable504[1] = 
{
	DefaultMemberAttribute_t3275092422::get_offset_of_m_memberName_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize505 = { sizeof (EventAttributes_t1153671773)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable505[5] = 
{
	EventAttributes_t1153671773::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize506 = { sizeof (FieldAttributes_t400321159)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable506[20] = 
{
	FieldAttributes_t400321159::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize507 = { sizeof (GenericParameterAttributes_t1159165531)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable507[9] = 
{
	GenericParameterAttributes_t1159165531::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize508 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize509 = { sizeof (IntrospectionExtensions_t4219782190), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize510 = { sizeof (InvalidFilterCriteriaException_t2427731508), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize511 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize512 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize513 = { sizeof (PInvokeAttributes_t2098850068)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable513[23] = 
{
	PInvokeAttributes_t2098850068::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize514 = { sizeof (MemberFilter_t426314064), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize515 = { sizeof (MemberInfo_t), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize516 = { sizeof (MemberInfoSerializationHolder_t1943730831), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable516[6] = 
{
	MemberInfoSerializationHolder_t1943730831::get_offset_of_m_memberName_0(),
	MemberInfoSerializationHolder_t1943730831::get_offset_of_m_reflectedType_1(),
	MemberInfoSerializationHolder_t1943730831::get_offset_of_m_signature_2(),
	MemberInfoSerializationHolder_t1943730831::get_offset_of_m_signature2_3(),
	MemberInfoSerializationHolder_t1943730831::get_offset_of_m_memberType_4(),
	MemberInfoSerializationHolder_t1943730831::get_offset_of_m_info_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize517 = { sizeof (MemberTypes_t3790569052)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable517[10] = 
{
	MemberTypes_t3790569052::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize518 = { sizeof (MethodAttributes_t2366443849)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable518[25] = 
{
	MethodAttributes_t2366443849::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize519 = { sizeof (MethodBase_t), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize520 = { sizeof (ExceptionHandlingClauseOptions_t945556827)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable520[5] = 
{
	ExceptionHandlingClauseOptions_t945556827::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize521 = { sizeof (MethodImplAttributes_t3646023817)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable521[17] = 
{
	MethodImplAttributes_t3646023817::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize522 = { sizeof (MethodInfo_t), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize523 = { sizeof (Missing_t508514592), -1, sizeof(Missing_t508514592_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable523[1] = 
{
	Missing_t508514592_StaticFields::get_offset_of_Value_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize524 = { sizeof (ParameterAttributes_t1826424051)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable524[12] = 
{
	ParameterAttributes_t1826424051::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize525 = { sizeof (ParameterModifier_t1461694466)+ sizeof (RuntimeObject), sizeof(ParameterModifier_t1461694466_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable525[1] = 
{
	ParameterModifier_t1461694466::get_offset_of__byRef_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize526 = { sizeof (Pointer_t2088917139), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable526[2] = 
{
	Pointer_t2088917139::get_offset_of__ptr_0(),
	Pointer_t2088917139::get_offset_of__ptrType_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize527 = { sizeof (PropertyAttributes_t3388002996)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable527[9] = 
{
	PropertyAttributes_t3388002996::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize528 = { sizeof (ReflectionTypeLoadException_t440884068), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable528[2] = 
{
	ReflectionTypeLoadException_t440884068::get_offset_of__classes_17(),
	ReflectionTypeLoadException_t440884068::get_offset_of__exceptions_18(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize529 = { sizeof (ResourceAttributes_t3997964906)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable529[3] = 
{
	ResourceAttributes_t3997964906::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize530 = { sizeof (TargetException_t3386045725), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize531 = { sizeof (TargetInvocationException_t4266643902), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize532 = { sizeof (TargetParameterCountException_t1216617239), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize533 = { sizeof (TypeAttributes_t113483779)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable533[33] = 
{
	TypeAttributes_t113483779::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize534 = { sizeof (TypeDelegator_t3617470028), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable534[1] = 
{
	TypeDelegator_t3617470028::get_offset_of_typeImpl_10(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize535 = { sizeof (TypeFilter_t2356120900), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize536 = { sizeof (TypeInfo_t1690786683), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize537 = { sizeof (Assembly_t), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable537[10] = 
{
	Assembly_t::get_offset_of__mono_assembly_0(),
	Assembly_t::get_offset_of_resolve_event_holder_1(),
	Assembly_t::get_offset_of__evidence_2(),
	Assembly_t::get_offset_of__minimum_3(),
	Assembly_t::get_offset_of__optional_4(),
	Assembly_t::get_offset_of__refuse_5(),
	Assembly_t::get_offset_of__granted_6(),
	Assembly_t::get_offset_of__denied_7(),
	Assembly_t::get_offset_of_fromByteArray_8(),
	Assembly_t::get_offset_of_assemblyName_9(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize538 = { sizeof (ResolveEventHolder_t2120639521), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize539 = { sizeof (AssemblyName_t270931938), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable539[16] = 
{
	AssemblyName_t270931938::get_offset_of_name_0(),
	AssemblyName_t270931938::get_offset_of_codebase_1(),
	AssemblyName_t270931938::get_offset_of_major_2(),
	AssemblyName_t270931938::get_offset_of_minor_3(),
	AssemblyName_t270931938::get_offset_of_build_4(),
	AssemblyName_t270931938::get_offset_of_revision_5(),
	AssemblyName_t270931938::get_offset_of_cultureinfo_6(),
	AssemblyName_t270931938::get_offset_of_flags_7(),
	AssemblyName_t270931938::get_offset_of_hashalg_8(),
	AssemblyName_t270931938::get_offset_of_keypair_9(),
	AssemblyName_t270931938::get_offset_of_publicKey_10(),
	AssemblyName_t270931938::get_offset_of_keyToken_11(),
	AssemblyName_t270931938::get_offset_of_versioncompat_12(),
	AssemblyName_t270931938::get_offset_of_version_13(),
	AssemblyName_t270931938::get_offset_of_processor_architecture_14(),
	AssemblyName_t270931938::get_offset_of_contentType_15(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize540 = { sizeof (ConstructorInfo_t5769829), -1, sizeof(ConstructorInfo_t5769829_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable540[2] = 
{
	ConstructorInfo_t5769829_StaticFields::get_offset_of_ConstructorName_0(),
	ConstructorInfo_t5769829_StaticFields::get_offset_of_TypeConstructorName_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize541 = { sizeof (CustomAttributeData_t1084486650), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable541[4] = 
{
	CustomAttributeData_t1084486650::get_offset_of_ctorInfo_0(),
	CustomAttributeData_t1084486650::get_offset_of_ctorArgs_1(),
	CustomAttributeData_t1084486650::get_offset_of_namedArgs_2(),
	CustomAttributeData_t1084486650::get_offset_of_lazyData_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize542 = { sizeof (LazyCAttrData_t3989247807), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable542[3] = 
{
	LazyCAttrData_t3989247807::get_offset_of_assembly_0(),
	LazyCAttrData_t3989247807::get_offset_of_data_1(),
	LazyCAttrData_t3989247807::get_offset_of_data_length_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize543 = { sizeof (CustomAttributeFormatException_t3940777761), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize544 = { sizeof (CustomAttributeNamedArgument_t287865710)+ sizeof (RuntimeObject), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable544[2] = 
{
	CustomAttributeNamedArgument_t287865710::get_offset_of_typedArgument_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	CustomAttributeNamedArgument_t287865710::get_offset_of_memberInfo_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize545 = { sizeof (CustomAttributeTypedArgument_t2723150157)+ sizeof (RuntimeObject), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable545[2] = 
{
	CustomAttributeTypedArgument_t2723150157::get_offset_of_argumentType_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	CustomAttributeTypedArgument_t2723150157::get_offset_of_value_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize546 = { sizeof (EventInfo_t), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable546[1] = 
{
	EventInfo_t::get_offset_of_cached_add_event_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize547 = { sizeof (AddEventAdapter_t1787725097), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize548 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize549 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize550 = { sizeof (ExceptionHandlingClause_t2620275417), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable550[7] = 
{
	ExceptionHandlingClause_t2620275417::get_offset_of_catch_type_0(),
	ExceptionHandlingClause_t2620275417::get_offset_of_filter_offset_1(),
	ExceptionHandlingClause_t2620275417::get_offset_of_flags_2(),
	ExceptionHandlingClause_t2620275417::get_offset_of_try_offset_3(),
	ExceptionHandlingClause_t2620275417::get_offset_of_try_length_4(),
	ExceptionHandlingClause_t2620275417::get_offset_of_handler_offset_5(),
	ExceptionHandlingClause_t2620275417::get_offset_of_handler_length_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize551 = { sizeof (FieldInfo_t), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize552 = { sizeof (ImageFileMachine_t799743225)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable552[5] = 
{
	ImageFileMachine_t799743225::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize553 = { sizeof (LocalVariableInfo_t2426779395), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable553[3] = 
{
	LocalVariableInfo_t2426779395::get_offset_of_type_0(),
	LocalVariableInfo_t2426779395::get_offset_of_is_pinned_1(),
	LocalVariableInfo_t2426779395::get_offset_of_position_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize554 = { sizeof (MethodBody_t3098043463), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable554[6] = 
{
	MethodBody_t3098043463::get_offset_of_clauses_0(),
	MethodBody_t3098043463::get_offset_of_locals_1(),
	MethodBody_t3098043463::get_offset_of_il_2(),
	MethodBody_t3098043463::get_offset_of_init_locals_3(),
	MethodBody_t3098043463::get_offset_of_sig_token_4(),
	MethodBody_t3098043463::get_offset_of_max_stack_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize555 = { sizeof (ResolveTokenError_t3520275515)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable555[4] = 
{
	ResolveTokenError_t3520275515::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize556 = { sizeof (Module_t2987026101), -1, sizeof(Module_t2987026101_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable556[10] = 
{
	Module_t2987026101_StaticFields::get_offset_of_FilterTypeName_0(),
	Module_t2987026101_StaticFields::get_offset_of_FilterTypeNameIgnoreCase_1(),
	Module_t2987026101::get_offset_of__impl_2(),
	Module_t2987026101::get_offset_of_assembly_3(),
	Module_t2987026101::get_offset_of_fqname_4(),
	Module_t2987026101::get_offset_of_name_5(),
	Module_t2987026101::get_offset_of_scopename_6(),
	Module_t2987026101::get_offset_of_is_resource_7(),
	Module_t2987026101::get_offset_of_token_8(),
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize557 = { sizeof (RuntimeAssembly_t1451753063), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize558 = { sizeof (MonoAssembly_t1717092724), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize559 = { sizeof (MonoEventInfo_t346866618)+ sizeof (RuntimeObject), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable559[8] = 
{
	MonoEventInfo_t346866618::get_offset_of_declaring_type_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	MonoEventInfo_t346866618::get_offset_of_reflected_type_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	MonoEventInfo_t346866618::get_offset_of_name_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	MonoEventInfo_t346866618::get_offset_of_add_method_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	MonoEventInfo_t346866618::get_offset_of_remove_method_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
	MonoEventInfo_t346866618::get_offset_of_raise_method_5() + static_cast<int32_t>(sizeof(RuntimeObject)),
	MonoEventInfo_t346866618::get_offset_of_attrs_6() + static_cast<int32_t>(sizeof(RuntimeObject)),
	MonoEventInfo_t346866618::get_offset_of_other_methods_7() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize560 = { sizeof (RuntimeEventInfo_t842299361), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize561 = { sizeof (MonoEvent_t), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable561[2] = 
{
	MonoEvent_t::get_offset_of_klass_1(),
	MonoEvent_t::get_offset_of_handle_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize562 = { sizeof (RuntimeFieldInfo_t4270975280), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize563 = { sizeof (RtFieldInfo_t1523629740), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize564 = { sizeof (MonoField_t), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable564[5] = 
{
	MonoField_t::get_offset_of_klass_0(),
	MonoField_t::get_offset_of_fhandle_1(),
	MonoField_t::get_offset_of_name_2(),
	MonoField_t::get_offset_of_type_3(),
	MonoField_t::get_offset_of_attrs_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize565 = { sizeof (MonoMethodInfo_t1248819020)+ sizeof (RuntimeObject), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable565[5] = 
{
	MonoMethodInfo_t1248819020::get_offset_of_parent_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	MonoMethodInfo_t1248819020::get_offset_of_ret_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	MonoMethodInfo_t1248819020::get_offset_of_attrs_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	MonoMethodInfo_t1248819020::get_offset_of_iattrs_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	MonoMethodInfo_t1248819020::get_offset_of_callconv_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize566 = { sizeof (RuntimeMethodInfo_t1367801569), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize567 = { sizeof (MonoMethod_t), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable567[3] = 
{
	MonoMethod_t::get_offset_of_mhandle_0(),
	MonoMethod_t::get_offset_of_name_1(),
	MonoMethod_t::get_offset_of_reftype_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize568 = { sizeof (RuntimeConstructorInfo_t1806616898), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize569 = { sizeof (MonoCMethod_t3191134373), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable569[3] = 
{
	MonoCMethod_t3191134373::get_offset_of_mhandle_2(),
	MonoCMethod_t3191134373::get_offset_of_name_3(),
	MonoCMethod_t3191134373::get_offset_of_reftype_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize570 = { sizeof (RuntimeModule_t2461322606), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize571 = { sizeof (MonoModule_t3215834869), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize572 = { sizeof (RuntimeParameterInfo_t744328879), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize573 = { sizeof (MonoParameterInfo_t2370358381), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize574 = { sizeof (MonoPropertyInfo_t3087356066)+ sizeof (RuntimeObject), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable574[6] = 
{
	MonoPropertyInfo_t3087356066::get_offset_of_parent_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	MonoPropertyInfo_t3087356066::get_offset_of_declaring_type_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	MonoPropertyInfo_t3087356066::get_offset_of_name_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	MonoPropertyInfo_t3087356066::get_offset_of_get_method_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	MonoPropertyInfo_t3087356066::get_offset_of_set_method_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
	MonoPropertyInfo_t3087356066::get_offset_of_attrs_5() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize575 = { sizeof (PInfo_t446749821)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable575[7] = 
{
	PInfo_t446749821::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize576 = { sizeof (RuntimePropertyInfo_t1784655210), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize577 = { sizeof (MonoProperty_t), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable577[5] = 
{
	MonoProperty_t::get_offset_of_klass_0(),
	MonoProperty_t::get_offset_of_prop_1(),
	MonoProperty_t::get_offset_of_info_2(),
	MonoProperty_t::get_offset_of_cached_3(),
	MonoProperty_t::get_offset_of_cached_getter_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize578 = { sizeof (GetterAdapter_t2155025054), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize579 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize580 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize581 = { sizeof (ParameterInfo_t1861056598), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable581[7] = 
{
	ParameterInfo_t1861056598::get_offset_of_ClassImpl_0(),
	ParameterInfo_t1861056598::get_offset_of_DefaultValueImpl_1(),
	ParameterInfo_t1861056598::get_offset_of_MemberImpl_2(),
	ParameterInfo_t1861056598::get_offset_of_NameImpl_3(),
	ParameterInfo_t1861056598::get_offset_of_PositionImpl_4(),
	ParameterInfo_t1861056598::get_offset_of_AttrsImpl_5(),
	ParameterInfo_t1861056598::get_offset_of_marshalAs_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize582 = { sizeof (PortableExecutableKinds_t1191923110)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable582[7] = 
{
	PortableExecutableKinds_t1191923110::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize583 = { sizeof (PropertyInfo_t), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize584 = { sizeof (StrongNameKeyPair_t3411219591), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable584[5] = 
{
	StrongNameKeyPair_t3411219591::get_offset_of__publicKey_0(),
	StrongNameKeyPair_t3411219591::get_offset_of__keyPairContainer_1(),
	StrongNameKeyPair_t3411219591::get_offset_of__keyPairExported_2(),
	StrongNameKeyPair_t3411219591::get_offset_of__keyPairArray_3(),
	StrongNameKeyPair_t3411219591::get_offset_of__rsa_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize585 = { sizeof (SymbolType_t2660201939), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable585[1] = 
{
	SymbolType_t2660201939::get_offset_of_m_baseType_10(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize586 = { sizeof (NativeResourceType_t2573963468)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable586[5] = 
{
	NativeResourceType_t2573963468::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize587 = { sizeof (RefEmitPermissionSet_t484390987)+ sizeof (RuntimeObject), sizeof(RefEmitPermissionSet_t484390987_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable587[2] = 
{
	RefEmitPermissionSet_t484390987::get_offset_of_action_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	RefEmitPermissionSet_t484390987::get_offset_of_pset_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize588 = { sizeof (MonoResource_t4103430009)+ sizeof (RuntimeObject), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable588[6] = 
{
	MonoResource_t4103430009::get_offset_of_data_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	MonoResource_t4103430009::get_offset_of_name_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	MonoResource_t4103430009::get_offset_of_filename_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	MonoResource_t4103430009::get_offset_of_attrs_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	MonoResource_t4103430009::get_offset_of_offset_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
	MonoResource_t4103430009::get_offset_of_stream_5() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize589 = { sizeof (MonoWin32Resource_t1904229483)+ sizeof (RuntimeObject), sizeof(MonoWin32Resource_t1904229483_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable589[4] = 
{
	MonoWin32Resource_t1904229483::get_offset_of_res_type_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	MonoWin32Resource_t1904229483::get_offset_of_res_id_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	MonoWin32Resource_t1904229483::get_offset_of_lang_id_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	MonoWin32Resource_t1904229483::get_offset_of_data_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize590 = { sizeof (AssemblyBuilder_t359885250), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable590[38] = 
{
	AssemblyBuilder_t359885250::get_offset_of_dynamic_assembly_10(),
	AssemblyBuilder_t359885250::get_offset_of_entry_point_11(),
	AssemblyBuilder_t359885250::get_offset_of_modules_12(),
	AssemblyBuilder_t359885250::get_offset_of_name_13(),
	AssemblyBuilder_t359885250::get_offset_of_dir_14(),
	AssemblyBuilder_t359885250::get_offset_of_cattrs_15(),
	AssemblyBuilder_t359885250::get_offset_of_resources_16(),
	AssemblyBuilder_t359885250::get_offset_of_public_key_17(),
	AssemblyBuilder_t359885250::get_offset_of_version_18(),
	AssemblyBuilder_t359885250::get_offset_of_culture_19(),
	AssemblyBuilder_t359885250::get_offset_of_algid_20(),
	AssemblyBuilder_t359885250::get_offset_of_flags_21(),
	AssemblyBuilder_t359885250::get_offset_of_pekind_22(),
	AssemblyBuilder_t359885250::get_offset_of_delay_sign_23(),
	AssemblyBuilder_t359885250::get_offset_of_access_24(),
	AssemblyBuilder_t359885250::get_offset_of_loaded_modules_25(),
	AssemblyBuilder_t359885250::get_offset_of_win32_resources_26(),
	AssemblyBuilder_t359885250::get_offset_of_permissions_minimum_27(),
	AssemblyBuilder_t359885250::get_offset_of_permissions_optional_28(),
	AssemblyBuilder_t359885250::get_offset_of_permissions_refused_29(),
	AssemblyBuilder_t359885250::get_offset_of_peKind_30(),
	AssemblyBuilder_t359885250::get_offset_of_machine_31(),
	AssemblyBuilder_t359885250::get_offset_of_corlib_internal_32(),
	AssemblyBuilder_t359885250::get_offset_of_type_forwarders_33(),
	AssemblyBuilder_t359885250::get_offset_of_pktoken_34(),
	AssemblyBuilder_t359885250::get_offset_of_corlib_object_type_35(),
	AssemblyBuilder_t359885250::get_offset_of_corlib_value_type_36(),
	AssemblyBuilder_t359885250::get_offset_of_corlib_enum_type_37(),
	AssemblyBuilder_t359885250::get_offset_of_corlib_void_type_38(),
	AssemblyBuilder_t359885250::get_offset_of_resource_writers_39(),
	AssemblyBuilder_t359885250::get_offset_of_version_res_40(),
	AssemblyBuilder_t359885250::get_offset_of_created_41(),
	AssemblyBuilder_t359885250::get_offset_of_is_module_only_42(),
	AssemblyBuilder_t359885250::get_offset_of_sn_43(),
	AssemblyBuilder_t359885250::get_offset_of_native_resource_44(),
	AssemblyBuilder_t359885250::get_offset_of_versioninfo_culture_45(),
	0,
	AssemblyBuilder_t359885250::get_offset_of_manifest_module_47(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize591 = { sizeof (AssemblyBuilderAccess_t2806254258)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable591[6] = 
{
	AssemblyBuilderAccess_t2806254258::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize592 = { sizeof (ConstructorBuilder_t2813524108), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable592[14] = 
{
	ConstructorBuilder_t2813524108::get_offset_of_mhandle_2(),
	ConstructorBuilder_t2813524108::get_offset_of_ilgen_3(),
	ConstructorBuilder_t2813524108::get_offset_of_parameters_4(),
	ConstructorBuilder_t2813524108::get_offset_of_attrs_5(),
	ConstructorBuilder_t2813524108::get_offset_of_iattrs_6(),
	ConstructorBuilder_t2813524108::get_offset_of_table_idx_7(),
	ConstructorBuilder_t2813524108::get_offset_of_call_conv_8(),
	ConstructorBuilder_t2813524108::get_offset_of_type_9(),
	ConstructorBuilder_t2813524108::get_offset_of_pinfo_10(),
	ConstructorBuilder_t2813524108::get_offset_of_cattrs_11(),
	ConstructorBuilder_t2813524108::get_offset_of_init_locals_12(),
	ConstructorBuilder_t2813524108::get_offset_of_paramModReq_13(),
	ConstructorBuilder_t2813524108::get_offset_of_paramModOpt_14(),
	ConstructorBuilder_t2813524108::get_offset_of_permissions_15(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize593 = { sizeof (ConstructorOnTypeBuilderInst_t2679067155), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable593[2] = 
{
	ConstructorOnTypeBuilderInst_t2679067155::get_offset_of_instantiation_2(),
	ConstructorOnTypeBuilderInst_t2679067155::get_offset_of_cb_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize594 = { sizeof (CustomAttributeBuilder_t2781637217), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable594[7] = 
{
	CustomAttributeBuilder_t2781637217::get_offset_of_ctor_0(),
	CustomAttributeBuilder_t2781637217::get_offset_of_data_1(),
	CustomAttributeBuilder_t2781637217::get_offset_of_args_2(),
	CustomAttributeBuilder_t2781637217::get_offset_of_namedProperties_3(),
	CustomAttributeBuilder_t2781637217::get_offset_of_propertyValues_4(),
	CustomAttributeBuilder_t2781637217::get_offset_of_namedFields_5(),
	CustomAttributeBuilder_t2781637217::get_offset_of_fieldValues_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize595 = { sizeof (ArrayType_t700911890), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable595[1] = 
{
	ArrayType_t700911890::get_offset_of_rank_11(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize596 = { sizeof (ByRefType_t2066805327), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize597 = { sizeof (PointerType_t2717154204), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize598 = { sizeof (DynamicILInfo_t2059132200), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize599 = { sizeof (DynamicMethod_t2537779570), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable599[19] = 
{
	DynamicMethod_t2537779570::get_offset_of_mhandle_0(),
	DynamicMethod_t2537779570::get_offset_of_name_1(),
	DynamicMethod_t2537779570::get_offset_of_returnType_2(),
	DynamicMethod_t2537779570::get_offset_of_parameters_3(),
	DynamicMethod_t2537779570::get_offset_of_attributes_4(),
	DynamicMethod_t2537779570::get_offset_of_callingConvention_5(),
	DynamicMethod_t2537779570::get_offset_of_module_6(),
	DynamicMethod_t2537779570::get_offset_of_skipVisibility_7(),
	DynamicMethod_t2537779570::get_offset_of_init_locals_8(),
	DynamicMethod_t2537779570::get_offset_of_ilgen_9(),
	DynamicMethod_t2537779570::get_offset_of_nrefs_10(),
	DynamicMethod_t2537779570::get_offset_of_refs_11(),
	DynamicMethod_t2537779570::get_offset_of_referenced_by_12(),
	DynamicMethod_t2537779570::get_offset_of_owner_13(),
	DynamicMethod_t2537779570::get_offset_of_deleg_14(),
	DynamicMethod_t2537779570::get_offset_of_method_15(),
	DynamicMethod_t2537779570::get_offset_of_pinfo_16(),
	DynamicMethod_t2537779570::get_offset_of_creating_17(),
	DynamicMethod_t2537779570::get_offset_of_il_info_18(),
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // Modified by PostBuild.cs
