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


// System.Action
struct Action_t1264377477;
// System.Byte[]
struct ByteU5BU5D_t4116647657;
// System.Char[]
struct CharU5BU5D_t3528271667;
// System.Collections.IDictionary
struct IDictionary_t1363984059;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t1693217257;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t1169129676;
// System.Exception
struct Exception_t;
// System.Int32[]
struct Int32U5BU5D_t385246372;
// System.IntPtr[]
struct IntPtrU5BU5D_t4013366056;
// System.MarshalByRefObject
struct MarshalByRefObject_t2760389100;
// System.Object[]
struct ObjectU5BU5D_t2843939325;
// System.Reflection.MethodBase
struct MethodBase_t;
// System.Reflection.MonoMethod
struct MonoMethod_t;
// System.Runtime.CompilerServices.IAsyncStateMachine
struct IAsyncStateMachine_t923100567;
// System.Runtime.Remoting.Identity
struct Identity_t1873279371;
// System.Runtime.Remoting.Messaging.ArgInfo
struct ArgInfo_t3261134217;
// System.Runtime.Remoting.Messaging.AsyncResult
struct AsyncResult_t4194309572;
// System.Runtime.Remoting.Messaging.IMessageSink
struct IMessageSink_t2514424906;
// System.Runtime.Remoting.Messaging.IMethodCallMessage
struct IMethodCallMessage_t2377797630;
// System.Runtime.Remoting.Messaging.IMethodMessage
struct IMethodMessage_t3120117683;
// System.Runtime.Remoting.Messaging.LogicalCallContext
struct LogicalCallContext_t3342013719;
// System.Runtime.Remoting.Messaging.MCMDictionary
struct MCMDictionary_t204981990;
// System.Runtime.Remoting.Messaging.MessageDictionary
struct MessageDictionary_t2102240473;
// System.Runtime.Remoting.Messaging.MethodReturnDictionary
struct MethodReturnDictionary_t2551046119;
// System.Runtime.Remoting.Messaging.ObjRefSurrogate
struct ObjRefSurrogate_t3860276170;
// System.Runtime.Remoting.Messaging.RemotingSurrogate
struct RemotingSurrogate_t2834579653;
// System.Runtime.Remoting.Proxies.RealProxy
struct RealProxy_t2312050253;
// System.Runtime.Remoting.ServerIdentity
struct ServerIdentity_t2342208608;
// System.Runtime.Serialization.ISurrogateSelector
struct ISurrogateSelector_t3040401154;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_t2481557153;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t1281789340;
// System.Threading.ContextCallback
struct ContextCallback_t3823316192;
// System.Threading.ExecutionContext
struct ExecutionContext_t1748372627;
// System.Threading.SendOrPostCallback
struct SendOrPostCallback_t2750080073;
// System.Threading.Tasks.Task
struct Task_t3187275312;
// System.Threading.Tasks.Task`1<System.Boolean>
struct Task_1_t1502828140;
// System.Threading.Tasks.Task`1<System.Int32>[]
struct Task_1U5BU5D_t2104922937;
// System.Threading.Tasks.Task`1<System.Threading.Tasks.VoidTaskResult>
struct Task_1_t4022128754;
// System.Threading.WaitCallback
struct WaitCallback_t2448485498;
// System.Type
struct Type_t;
// System.Type[]
struct TypeU5BU5D_t3940880105;
// System.UInt32[]
struct UInt32U5BU5D_t2770800703;

struct AsyncResult_t4194309572_marshaled_com;
struct AsyncResult_t4194309572_marshaled_pinvoke;
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
#ifndef EVENTARGS_T3591816995_H
#define EVENTARGS_T3591816995_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.EventArgs
struct  EventArgs_t3591816995  : public RuntimeObject
{
public:

public:
};

struct EventArgs_t3591816995_StaticFields
{
public:
	// System.EventArgs System.EventArgs::Empty
	EventArgs_t3591816995 * ___Empty_0;

public:
	inline static int32_t get_offset_of_Empty_0() { return static_cast<int32_t>(offsetof(EventArgs_t3591816995_StaticFields, ___Empty_0)); }
	inline EventArgs_t3591816995 * get_Empty_0() const { return ___Empty_0; }
	inline EventArgs_t3591816995 ** get_address_of_Empty_0() { return &___Empty_0; }
	inline void set_Empty_0(EventArgs_t3591816995 * value)
	{
		___Empty_0 = value;
		Il2CppCodeGenWriteBarrier((&___Empty_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EVENTARGS_T3591816995_H
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
#ifndef U3CU3EC_T3555681664_H
#define U3CU3EC_T3555681664_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.AsyncMethodBuilderCore/<>c
struct  U3CU3Ec_t3555681664  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t3555681664_StaticFields
{
public:
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore/<>c System.Runtime.CompilerServices.AsyncMethodBuilderCore/<>c::<>9
	U3CU3Ec_t3555681664 * ___U3CU3E9_0;
	// System.Threading.SendOrPostCallback System.Runtime.CompilerServices.AsyncMethodBuilderCore/<>c::<>9__6_0
	SendOrPostCallback_t2750080073 * ___U3CU3E9__6_0_1;
	// System.Threading.WaitCallback System.Runtime.CompilerServices.AsyncMethodBuilderCore/<>c::<>9__6_1
	WaitCallback_t2448485498 * ___U3CU3E9__6_1_2;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t3555681664_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t3555681664 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t3555681664 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t3555681664 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3E9_0), value);
	}

	inline static int32_t get_offset_of_U3CU3E9__6_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_t3555681664_StaticFields, ___U3CU3E9__6_0_1)); }
	inline SendOrPostCallback_t2750080073 * get_U3CU3E9__6_0_1() const { return ___U3CU3E9__6_0_1; }
	inline SendOrPostCallback_t2750080073 ** get_address_of_U3CU3E9__6_0_1() { return &___U3CU3E9__6_0_1; }
	inline void set_U3CU3E9__6_0_1(SendOrPostCallback_t2750080073 * value)
	{
		___U3CU3E9__6_0_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3E9__6_0_1), value);
	}

	inline static int32_t get_offset_of_U3CU3E9__6_1_2() { return static_cast<int32_t>(offsetof(U3CU3Ec_t3555681664_StaticFields, ___U3CU3E9__6_1_2)); }
	inline WaitCallback_t2448485498 * get_U3CU3E9__6_1_2() const { return ___U3CU3E9__6_1_2; }
	inline WaitCallback_t2448485498 ** get_address_of_U3CU3E9__6_1_2() { return &___U3CU3E9__6_1_2; }
	inline void set_U3CU3E9__6_1_2(WaitCallback_t2448485498 * value)
	{
		___U3CU3E9__6_1_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3E9__6_1_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CU3EC_T3555681664_H
#ifndef U3CU3EC__DISPLAYCLASS4_0_T3836450705_H
#define U3CU3EC__DISPLAYCLASS4_0_T3836450705_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.AsyncMethodBuilderCore/<>c__DisplayClass4_0
struct  U3CU3Ec__DisplayClass4_0_t3836450705  : public RuntimeObject
{
public:
	// System.Threading.Tasks.Task System.Runtime.CompilerServices.AsyncMethodBuilderCore/<>c__DisplayClass4_0::innerTask
	Task_t3187275312 * ___innerTask_0;
	// System.Action System.Runtime.CompilerServices.AsyncMethodBuilderCore/<>c__DisplayClass4_0::continuation
	Action_t1264377477 * ___continuation_1;

public:
	inline static int32_t get_offset_of_innerTask_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass4_0_t3836450705, ___innerTask_0)); }
	inline Task_t3187275312 * get_innerTask_0() const { return ___innerTask_0; }
	inline Task_t3187275312 ** get_address_of_innerTask_0() { return &___innerTask_0; }
	inline void set_innerTask_0(Task_t3187275312 * value)
	{
		___innerTask_0 = value;
		Il2CppCodeGenWriteBarrier((&___innerTask_0), value);
	}

	inline static int32_t get_offset_of_continuation_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass4_0_t3836450705, ___continuation_1)); }
	inline Action_t1264377477 * get_continuation_1() const { return ___continuation_1; }
	inline Action_t1264377477 ** get_address_of_continuation_1() { return &___continuation_1; }
	inline void set_continuation_1(Action_t1264377477 * value)
	{
		___continuation_1 = value;
		Il2CppCodeGenWriteBarrier((&___continuation_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CU3EC__DISPLAYCLASS4_0_T3836450705_H
#ifndef CONTINUATIONWRAPPER_T392291031_H
#define CONTINUATIONWRAPPER_T392291031_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.AsyncMethodBuilderCore/ContinuationWrapper
struct  ContinuationWrapper_t392291031  : public RuntimeObject
{
public:
	// System.Action System.Runtime.CompilerServices.AsyncMethodBuilderCore/ContinuationWrapper::m_continuation
	Action_t1264377477 * ___m_continuation_0;
	// System.Action System.Runtime.CompilerServices.AsyncMethodBuilderCore/ContinuationWrapper::m_invokeAction
	Action_t1264377477 * ___m_invokeAction_1;
	// System.Threading.Tasks.Task System.Runtime.CompilerServices.AsyncMethodBuilderCore/ContinuationWrapper::m_innerTask
	Task_t3187275312 * ___m_innerTask_2;

public:
	inline static int32_t get_offset_of_m_continuation_0() { return static_cast<int32_t>(offsetof(ContinuationWrapper_t392291031, ___m_continuation_0)); }
	inline Action_t1264377477 * get_m_continuation_0() const { return ___m_continuation_0; }
	inline Action_t1264377477 ** get_address_of_m_continuation_0() { return &___m_continuation_0; }
	inline void set_m_continuation_0(Action_t1264377477 * value)
	{
		___m_continuation_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_continuation_0), value);
	}

	inline static int32_t get_offset_of_m_invokeAction_1() { return static_cast<int32_t>(offsetof(ContinuationWrapper_t392291031, ___m_invokeAction_1)); }
	inline Action_t1264377477 * get_m_invokeAction_1() const { return ___m_invokeAction_1; }
	inline Action_t1264377477 ** get_address_of_m_invokeAction_1() { return &___m_invokeAction_1; }
	inline void set_m_invokeAction_1(Action_t1264377477 * value)
	{
		___m_invokeAction_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_invokeAction_1), value);
	}

	inline static int32_t get_offset_of_m_innerTask_2() { return static_cast<int32_t>(offsetof(ContinuationWrapper_t392291031, ___m_innerTask_2)); }
	inline Task_t3187275312 * get_m_innerTask_2() const { return ___m_innerTask_2; }
	inline Task_t3187275312 ** get_address_of_m_innerTask_2() { return &___m_innerTask_2; }
	inline void set_m_innerTask_2(Task_t3187275312 * value)
	{
		___m_innerTask_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_innerTask_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONTINUATIONWRAPPER_T392291031_H
#ifndef MOVENEXTRUNNER_T4042132640_H
#define MOVENEXTRUNNER_T4042132640_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.AsyncMethodBuilderCore/MoveNextRunner
struct  MoveNextRunner_t4042132640  : public RuntimeObject
{
public:
	// System.Threading.ExecutionContext System.Runtime.CompilerServices.AsyncMethodBuilderCore/MoveNextRunner::m_context
	ExecutionContext_t1748372627 * ___m_context_0;
	// System.Runtime.CompilerServices.IAsyncStateMachine System.Runtime.CompilerServices.AsyncMethodBuilderCore/MoveNextRunner::m_stateMachine
	RuntimeObject* ___m_stateMachine_1;

public:
	inline static int32_t get_offset_of_m_context_0() { return static_cast<int32_t>(offsetof(MoveNextRunner_t4042132640, ___m_context_0)); }
	inline ExecutionContext_t1748372627 * get_m_context_0() const { return ___m_context_0; }
	inline ExecutionContext_t1748372627 ** get_address_of_m_context_0() { return &___m_context_0; }
	inline void set_m_context_0(ExecutionContext_t1748372627 * value)
	{
		___m_context_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_context_0), value);
	}

	inline static int32_t get_offset_of_m_stateMachine_1() { return static_cast<int32_t>(offsetof(MoveNextRunner_t4042132640, ___m_stateMachine_1)); }
	inline RuntimeObject* get_m_stateMachine_1() const { return ___m_stateMachine_1; }
	inline RuntimeObject** get_address_of_m_stateMachine_1() { return &___m_stateMachine_1; }
	inline void set_m_stateMachine_1(RuntimeObject* value)
	{
		___m_stateMachine_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_stateMachine_1), value);
	}
};

struct MoveNextRunner_t4042132640_StaticFields
{
public:
	// System.Threading.ContextCallback System.Runtime.CompilerServices.AsyncMethodBuilderCore/MoveNextRunner::s_invokeMoveNext
	ContextCallback_t3823316192 * ___s_invokeMoveNext_2;

public:
	inline static int32_t get_offset_of_s_invokeMoveNext_2() { return static_cast<int32_t>(offsetof(MoveNextRunner_t4042132640_StaticFields, ___s_invokeMoveNext_2)); }
	inline ContextCallback_t3823316192 * get_s_invokeMoveNext_2() const { return ___s_invokeMoveNext_2; }
	inline ContextCallback_t3823316192 ** get_address_of_s_invokeMoveNext_2() { return &___s_invokeMoveNext_2; }
	inline void set_s_invokeMoveNext_2(ContextCallback_t3823316192 * value)
	{
		___s_invokeMoveNext_2 = value;
		Il2CppCodeGenWriteBarrier((&___s_invokeMoveNext_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MOVENEXTRUNNER_T4042132640_H
#ifndef ASYNCTASKCACHE_T1993881178_H
#define ASYNCTASKCACHE_T1993881178_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.AsyncTaskCache
struct  AsyncTaskCache_t1993881178  : public RuntimeObject
{
public:

public:
};

struct AsyncTaskCache_t1993881178_StaticFields
{
public:
	// System.Threading.Tasks.Task`1<System.Boolean> System.Runtime.CompilerServices.AsyncTaskCache::TrueTask
	Task_1_t1502828140 * ___TrueTask_0;
	// System.Threading.Tasks.Task`1<System.Boolean> System.Runtime.CompilerServices.AsyncTaskCache::FalseTask
	Task_1_t1502828140 * ___FalseTask_1;
	// System.Threading.Tasks.Task`1<System.Int32>[] System.Runtime.CompilerServices.AsyncTaskCache::Int32Tasks
	Task_1U5BU5D_t2104922937* ___Int32Tasks_2;

public:
	inline static int32_t get_offset_of_TrueTask_0() { return static_cast<int32_t>(offsetof(AsyncTaskCache_t1993881178_StaticFields, ___TrueTask_0)); }
	inline Task_1_t1502828140 * get_TrueTask_0() const { return ___TrueTask_0; }
	inline Task_1_t1502828140 ** get_address_of_TrueTask_0() { return &___TrueTask_0; }
	inline void set_TrueTask_0(Task_1_t1502828140 * value)
	{
		___TrueTask_0 = value;
		Il2CppCodeGenWriteBarrier((&___TrueTask_0), value);
	}

	inline static int32_t get_offset_of_FalseTask_1() { return static_cast<int32_t>(offsetof(AsyncTaskCache_t1993881178_StaticFields, ___FalseTask_1)); }
	inline Task_1_t1502828140 * get_FalseTask_1() const { return ___FalseTask_1; }
	inline Task_1_t1502828140 ** get_address_of_FalseTask_1() { return &___FalseTask_1; }
	inline void set_FalseTask_1(Task_1_t1502828140 * value)
	{
		___FalseTask_1 = value;
		Il2CppCodeGenWriteBarrier((&___FalseTask_1), value);
	}

	inline static int32_t get_offset_of_Int32Tasks_2() { return static_cast<int32_t>(offsetof(AsyncTaskCache_t1993881178_StaticFields, ___Int32Tasks_2)); }
	inline Task_1U5BU5D_t2104922937* get_Int32Tasks_2() const { return ___Int32Tasks_2; }
	inline Task_1U5BU5D_t2104922937** get_address_of_Int32Tasks_2() { return &___Int32Tasks_2; }
	inline void set_Int32Tasks_2(Task_1U5BU5D_t2104922937* value)
	{
		___Int32Tasks_2 = value;
		Il2CppCodeGenWriteBarrier((&___Int32Tasks_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASYNCTASKCACHE_T1993881178_H
#ifndef ISVOLATILE_T2097058663_H
#define ISVOLATILE_T2097058663_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.IsVolatile
struct  IsVolatile_t2097058663  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ISVOLATILE_T2097058663_H
#ifndef JITHELPERS_T1212693971_H
#define JITHELPERS_T1212693971_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.JitHelpers
struct  JitHelpers_t1212693971  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // JITHELPERS_T1212693971_H
#ifndef RUNTIMEHELPERS_T1447613860_H
#define RUNTIMEHELPERS_T1447613860_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.RuntimeHelpers
struct  RuntimeHelpers_t1447613860  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEHELPERS_T1447613860_H
#ifndef CRITICALFINALIZEROBJECT_T701527852_H
#define CRITICALFINALIZEROBJECT_T701527852_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.ConstrainedExecution.CriticalFinalizerObject
struct  CriticalFinalizerObject_t701527852  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CRITICALFINALIZEROBJECT_T701527852_H
#ifndef EXCEPTIONDISPATCHINFO_T3750997369_H
#define EXCEPTIONDISPATCHINFO_T3750997369_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.ExceptionServices.ExceptionDispatchInfo
struct  ExceptionDispatchInfo_t3750997369  : public RuntimeObject
{
public:
	// System.Exception System.Runtime.ExceptionServices.ExceptionDispatchInfo::m_Exception
	Exception_t * ___m_Exception_0;
	// System.Object System.Runtime.ExceptionServices.ExceptionDispatchInfo::m_stackTrace
	RuntimeObject * ___m_stackTrace_1;

public:
	inline static int32_t get_offset_of_m_Exception_0() { return static_cast<int32_t>(offsetof(ExceptionDispatchInfo_t3750997369, ___m_Exception_0)); }
	inline Exception_t * get_m_Exception_0() const { return ___m_Exception_0; }
	inline Exception_t ** get_address_of_m_Exception_0() { return &___m_Exception_0; }
	inline void set_m_Exception_0(Exception_t * value)
	{
		___m_Exception_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_Exception_0), value);
	}

	inline static int32_t get_offset_of_m_stackTrace_1() { return static_cast<int32_t>(offsetof(ExceptionDispatchInfo_t3750997369, ___m_stackTrace_1)); }
	inline RuntimeObject * get_m_stackTrace_1() const { return ___m_stackTrace_1; }
	inline RuntimeObject ** get_address_of_m_stackTrace_1() { return &___m_stackTrace_1; }
	inline void set_m_stackTrace_1(RuntimeObject * value)
	{
		___m_stackTrace_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_stackTrace_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXCEPTIONDISPATCHINFO_T3750997369_H
#ifndef ERRORWRAPPER_T1772885312_H
#define ERRORWRAPPER_T1772885312_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.ErrorWrapper
struct  ErrorWrapper_t1772885312  : public RuntimeObject
{
public:
	// System.Int32 System.Runtime.InteropServices.ErrorWrapper::m_ErrorCode
	int32_t ___m_ErrorCode_0;

public:
	inline static int32_t get_offset_of_m_ErrorCode_0() { return static_cast<int32_t>(offsetof(ErrorWrapper_t1772885312, ___m_ErrorCode_0)); }
	inline int32_t get_m_ErrorCode_0() const { return ___m_ErrorCode_0; }
	inline int32_t* get_address_of_m_ErrorCode_0() { return &___m_ErrorCode_0; }
	inline void set_m_ErrorCode_0(int32_t value)
	{
		___m_ErrorCode_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ERRORWRAPPER_T1772885312_H
#ifndef MESSAGEDICTIONARY_T2102240473_H
#define MESSAGEDICTIONARY_T2102240473_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Messaging.MessageDictionary
struct  MessageDictionary_t2102240473  : public RuntimeObject
{
public:
	// System.Collections.IDictionary System.Runtime.Remoting.Messaging.MessageDictionary::_internalProperties
	RuntimeObject* ____internalProperties_0;
	// System.Runtime.Remoting.Messaging.IMethodMessage System.Runtime.Remoting.Messaging.MessageDictionary::_message
	RuntimeObject* ____message_1;
	// System.String[] System.Runtime.Remoting.Messaging.MessageDictionary::_methodKeys
	StringU5BU5D_t1281789340* ____methodKeys_2;
	// System.Boolean System.Runtime.Remoting.Messaging.MessageDictionary::_ownProperties
	bool ____ownProperties_3;

public:
	inline static int32_t get_offset_of__internalProperties_0() { return static_cast<int32_t>(offsetof(MessageDictionary_t2102240473, ____internalProperties_0)); }
	inline RuntimeObject* get__internalProperties_0() const { return ____internalProperties_0; }
	inline RuntimeObject** get_address_of__internalProperties_0() { return &____internalProperties_0; }
	inline void set__internalProperties_0(RuntimeObject* value)
	{
		____internalProperties_0 = value;
		Il2CppCodeGenWriteBarrier((&____internalProperties_0), value);
	}

	inline static int32_t get_offset_of__message_1() { return static_cast<int32_t>(offsetof(MessageDictionary_t2102240473, ____message_1)); }
	inline RuntimeObject* get__message_1() const { return ____message_1; }
	inline RuntimeObject** get_address_of__message_1() { return &____message_1; }
	inline void set__message_1(RuntimeObject* value)
	{
		____message_1 = value;
		Il2CppCodeGenWriteBarrier((&____message_1), value);
	}

	inline static int32_t get_offset_of__methodKeys_2() { return static_cast<int32_t>(offsetof(MessageDictionary_t2102240473, ____methodKeys_2)); }
	inline StringU5BU5D_t1281789340* get__methodKeys_2() const { return ____methodKeys_2; }
	inline StringU5BU5D_t1281789340** get_address_of__methodKeys_2() { return &____methodKeys_2; }
	inline void set__methodKeys_2(StringU5BU5D_t1281789340* value)
	{
		____methodKeys_2 = value;
		Il2CppCodeGenWriteBarrier((&____methodKeys_2), value);
	}

	inline static int32_t get_offset_of__ownProperties_3() { return static_cast<int32_t>(offsetof(MessageDictionary_t2102240473, ____ownProperties_3)); }
	inline bool get__ownProperties_3() const { return ____ownProperties_3; }
	inline bool* get_address_of__ownProperties_3() { return &____ownProperties_3; }
	inline void set__ownProperties_3(bool value)
	{
		____ownProperties_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MESSAGEDICTIONARY_T2102240473_H
#ifndef DICTIONARYENUMERATOR_T4026294478_H
#define DICTIONARYENUMERATOR_T4026294478_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Messaging.MessageDictionary/DictionaryEnumerator
struct  DictionaryEnumerator_t4026294478  : public RuntimeObject
{
public:
	// System.Runtime.Remoting.Messaging.MessageDictionary System.Runtime.Remoting.Messaging.MessageDictionary/DictionaryEnumerator::_methodDictionary
	MessageDictionary_t2102240473 * ____methodDictionary_0;
	// System.Collections.IDictionaryEnumerator System.Runtime.Remoting.Messaging.MessageDictionary/DictionaryEnumerator::_hashtableEnum
	RuntimeObject* ____hashtableEnum_1;
	// System.Int32 System.Runtime.Remoting.Messaging.MessageDictionary/DictionaryEnumerator::_posMethod
	int32_t ____posMethod_2;

public:
	inline static int32_t get_offset_of__methodDictionary_0() { return static_cast<int32_t>(offsetof(DictionaryEnumerator_t4026294478, ____methodDictionary_0)); }
	inline MessageDictionary_t2102240473 * get__methodDictionary_0() const { return ____methodDictionary_0; }
	inline MessageDictionary_t2102240473 ** get_address_of__methodDictionary_0() { return &____methodDictionary_0; }
	inline void set__methodDictionary_0(MessageDictionary_t2102240473 * value)
	{
		____methodDictionary_0 = value;
		Il2CppCodeGenWriteBarrier((&____methodDictionary_0), value);
	}

	inline static int32_t get_offset_of__hashtableEnum_1() { return static_cast<int32_t>(offsetof(DictionaryEnumerator_t4026294478, ____hashtableEnum_1)); }
	inline RuntimeObject* get__hashtableEnum_1() const { return ____hashtableEnum_1; }
	inline RuntimeObject** get_address_of__hashtableEnum_1() { return &____hashtableEnum_1; }
	inline void set__hashtableEnum_1(RuntimeObject* value)
	{
		____hashtableEnum_1 = value;
		Il2CppCodeGenWriteBarrier((&____hashtableEnum_1), value);
	}

	inline static int32_t get_offset_of__posMethod_2() { return static_cast<int32_t>(offsetof(DictionaryEnumerator_t4026294478, ____posMethod_2)); }
	inline int32_t get__posMethod_2() const { return ____posMethod_2; }
	inline int32_t* get_address_of__posMethod_2() { return &____posMethod_2; }
	inline void set__posMethod_2(int32_t value)
	{
		____posMethod_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DICTIONARYENUMERATOR_T4026294478_H
#ifndef METHODCALL_T861078140_H
#define METHODCALL_T861078140_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Messaging.MethodCall
struct  MethodCall_t861078140  : public RuntimeObject
{
public:
	// System.String System.Runtime.Remoting.Messaging.MethodCall::_uri
	String_t* ____uri_0;
	// System.String System.Runtime.Remoting.Messaging.MethodCall::_typeName
	String_t* ____typeName_1;
	// System.String System.Runtime.Remoting.Messaging.MethodCall::_methodName
	String_t* ____methodName_2;
	// System.Object[] System.Runtime.Remoting.Messaging.MethodCall::_args
	ObjectU5BU5D_t2843939325* ____args_3;
	// System.Type[] System.Runtime.Remoting.Messaging.MethodCall::_methodSignature
	TypeU5BU5D_t3940880105* ____methodSignature_4;
	// System.Reflection.MethodBase System.Runtime.Remoting.Messaging.MethodCall::_methodBase
	MethodBase_t * ____methodBase_5;
	// System.Runtime.Remoting.Messaging.LogicalCallContext System.Runtime.Remoting.Messaging.MethodCall::_callContext
	LogicalCallContext_t3342013719 * ____callContext_6;
	// System.Runtime.Remoting.Identity System.Runtime.Remoting.Messaging.MethodCall::_targetIdentity
	Identity_t1873279371 * ____targetIdentity_7;
	// System.Type[] System.Runtime.Remoting.Messaging.MethodCall::_genericArguments
	TypeU5BU5D_t3940880105* ____genericArguments_8;
	// System.Collections.IDictionary System.Runtime.Remoting.Messaging.MethodCall::ExternalProperties
	RuntimeObject* ___ExternalProperties_9;
	// System.Collections.IDictionary System.Runtime.Remoting.Messaging.MethodCall::InternalProperties
	RuntimeObject* ___InternalProperties_10;

public:
	inline static int32_t get_offset_of__uri_0() { return static_cast<int32_t>(offsetof(MethodCall_t861078140, ____uri_0)); }
	inline String_t* get__uri_0() const { return ____uri_0; }
	inline String_t** get_address_of__uri_0() { return &____uri_0; }
	inline void set__uri_0(String_t* value)
	{
		____uri_0 = value;
		Il2CppCodeGenWriteBarrier((&____uri_0), value);
	}

	inline static int32_t get_offset_of__typeName_1() { return static_cast<int32_t>(offsetof(MethodCall_t861078140, ____typeName_1)); }
	inline String_t* get__typeName_1() const { return ____typeName_1; }
	inline String_t** get_address_of__typeName_1() { return &____typeName_1; }
	inline void set__typeName_1(String_t* value)
	{
		____typeName_1 = value;
		Il2CppCodeGenWriteBarrier((&____typeName_1), value);
	}

	inline static int32_t get_offset_of__methodName_2() { return static_cast<int32_t>(offsetof(MethodCall_t861078140, ____methodName_2)); }
	inline String_t* get__methodName_2() const { return ____methodName_2; }
	inline String_t** get_address_of__methodName_2() { return &____methodName_2; }
	inline void set__methodName_2(String_t* value)
	{
		____methodName_2 = value;
		Il2CppCodeGenWriteBarrier((&____methodName_2), value);
	}

	inline static int32_t get_offset_of__args_3() { return static_cast<int32_t>(offsetof(MethodCall_t861078140, ____args_3)); }
	inline ObjectU5BU5D_t2843939325* get__args_3() const { return ____args_3; }
	inline ObjectU5BU5D_t2843939325** get_address_of__args_3() { return &____args_3; }
	inline void set__args_3(ObjectU5BU5D_t2843939325* value)
	{
		____args_3 = value;
		Il2CppCodeGenWriteBarrier((&____args_3), value);
	}

	inline static int32_t get_offset_of__methodSignature_4() { return static_cast<int32_t>(offsetof(MethodCall_t861078140, ____methodSignature_4)); }
	inline TypeU5BU5D_t3940880105* get__methodSignature_4() const { return ____methodSignature_4; }
	inline TypeU5BU5D_t3940880105** get_address_of__methodSignature_4() { return &____methodSignature_4; }
	inline void set__methodSignature_4(TypeU5BU5D_t3940880105* value)
	{
		____methodSignature_4 = value;
		Il2CppCodeGenWriteBarrier((&____methodSignature_4), value);
	}

	inline static int32_t get_offset_of__methodBase_5() { return static_cast<int32_t>(offsetof(MethodCall_t861078140, ____methodBase_5)); }
	inline MethodBase_t * get__methodBase_5() const { return ____methodBase_5; }
	inline MethodBase_t ** get_address_of__methodBase_5() { return &____methodBase_5; }
	inline void set__methodBase_5(MethodBase_t * value)
	{
		____methodBase_5 = value;
		Il2CppCodeGenWriteBarrier((&____methodBase_5), value);
	}

	inline static int32_t get_offset_of__callContext_6() { return static_cast<int32_t>(offsetof(MethodCall_t861078140, ____callContext_6)); }
	inline LogicalCallContext_t3342013719 * get__callContext_6() const { return ____callContext_6; }
	inline LogicalCallContext_t3342013719 ** get_address_of__callContext_6() { return &____callContext_6; }
	inline void set__callContext_6(LogicalCallContext_t3342013719 * value)
	{
		____callContext_6 = value;
		Il2CppCodeGenWriteBarrier((&____callContext_6), value);
	}

	inline static int32_t get_offset_of__targetIdentity_7() { return static_cast<int32_t>(offsetof(MethodCall_t861078140, ____targetIdentity_7)); }
	inline Identity_t1873279371 * get__targetIdentity_7() const { return ____targetIdentity_7; }
	inline Identity_t1873279371 ** get_address_of__targetIdentity_7() { return &____targetIdentity_7; }
	inline void set__targetIdentity_7(Identity_t1873279371 * value)
	{
		____targetIdentity_7 = value;
		Il2CppCodeGenWriteBarrier((&____targetIdentity_7), value);
	}

	inline static int32_t get_offset_of__genericArguments_8() { return static_cast<int32_t>(offsetof(MethodCall_t861078140, ____genericArguments_8)); }
	inline TypeU5BU5D_t3940880105* get__genericArguments_8() const { return ____genericArguments_8; }
	inline TypeU5BU5D_t3940880105** get_address_of__genericArguments_8() { return &____genericArguments_8; }
	inline void set__genericArguments_8(TypeU5BU5D_t3940880105* value)
	{
		____genericArguments_8 = value;
		Il2CppCodeGenWriteBarrier((&____genericArguments_8), value);
	}

	inline static int32_t get_offset_of_ExternalProperties_9() { return static_cast<int32_t>(offsetof(MethodCall_t861078140, ___ExternalProperties_9)); }
	inline RuntimeObject* get_ExternalProperties_9() const { return ___ExternalProperties_9; }
	inline RuntimeObject** get_address_of_ExternalProperties_9() { return &___ExternalProperties_9; }
	inline void set_ExternalProperties_9(RuntimeObject* value)
	{
		___ExternalProperties_9 = value;
		Il2CppCodeGenWriteBarrier((&___ExternalProperties_9), value);
	}

	inline static int32_t get_offset_of_InternalProperties_10() { return static_cast<int32_t>(offsetof(MethodCall_t861078140, ___InternalProperties_10)); }
	inline RuntimeObject* get_InternalProperties_10() const { return ___InternalProperties_10; }
	inline RuntimeObject** get_address_of_InternalProperties_10() { return &___InternalProperties_10; }
	inline void set_InternalProperties_10(RuntimeObject* value)
	{
		___InternalProperties_10 = value;
		Il2CppCodeGenWriteBarrier((&___InternalProperties_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // METHODCALL_T861078140_H
#ifndef METHODRESPONSE_T2147511201_H
#define METHODRESPONSE_T2147511201_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Messaging.MethodResponse
struct  MethodResponse_t2147511201  : public RuntimeObject
{
public:
	// System.String System.Runtime.Remoting.Messaging.MethodResponse::_methodName
	String_t* ____methodName_0;
	// System.String System.Runtime.Remoting.Messaging.MethodResponse::_uri
	String_t* ____uri_1;
	// System.String System.Runtime.Remoting.Messaging.MethodResponse::_typeName
	String_t* ____typeName_2;
	// System.Reflection.MethodBase System.Runtime.Remoting.Messaging.MethodResponse::_methodBase
	MethodBase_t * ____methodBase_3;
	// System.Object System.Runtime.Remoting.Messaging.MethodResponse::_returnValue
	RuntimeObject * ____returnValue_4;
	// System.Exception System.Runtime.Remoting.Messaging.MethodResponse::_exception
	Exception_t * ____exception_5;
	// System.Type[] System.Runtime.Remoting.Messaging.MethodResponse::_methodSignature
	TypeU5BU5D_t3940880105* ____methodSignature_6;
	// System.Runtime.Remoting.Messaging.ArgInfo System.Runtime.Remoting.Messaging.MethodResponse::_inArgInfo
	ArgInfo_t3261134217 * ____inArgInfo_7;
	// System.Object[] System.Runtime.Remoting.Messaging.MethodResponse::_args
	ObjectU5BU5D_t2843939325* ____args_8;
	// System.Object[] System.Runtime.Remoting.Messaging.MethodResponse::_outArgs
	ObjectU5BU5D_t2843939325* ____outArgs_9;
	// System.Runtime.Remoting.Messaging.IMethodCallMessage System.Runtime.Remoting.Messaging.MethodResponse::_callMsg
	RuntimeObject* ____callMsg_10;
	// System.Runtime.Remoting.Messaging.LogicalCallContext System.Runtime.Remoting.Messaging.MethodResponse::_callContext
	LogicalCallContext_t3342013719 * ____callContext_11;
	// System.Runtime.Remoting.Identity System.Runtime.Remoting.Messaging.MethodResponse::_targetIdentity
	Identity_t1873279371 * ____targetIdentity_12;
	// System.Collections.IDictionary System.Runtime.Remoting.Messaging.MethodResponse::ExternalProperties
	RuntimeObject* ___ExternalProperties_13;
	// System.Collections.IDictionary System.Runtime.Remoting.Messaging.MethodResponse::InternalProperties
	RuntimeObject* ___InternalProperties_14;

public:
	inline static int32_t get_offset_of__methodName_0() { return static_cast<int32_t>(offsetof(MethodResponse_t2147511201, ____methodName_0)); }
	inline String_t* get__methodName_0() const { return ____methodName_0; }
	inline String_t** get_address_of__methodName_0() { return &____methodName_0; }
	inline void set__methodName_0(String_t* value)
	{
		____methodName_0 = value;
		Il2CppCodeGenWriteBarrier((&____methodName_0), value);
	}

	inline static int32_t get_offset_of__uri_1() { return static_cast<int32_t>(offsetof(MethodResponse_t2147511201, ____uri_1)); }
	inline String_t* get__uri_1() const { return ____uri_1; }
	inline String_t** get_address_of__uri_1() { return &____uri_1; }
	inline void set__uri_1(String_t* value)
	{
		____uri_1 = value;
		Il2CppCodeGenWriteBarrier((&____uri_1), value);
	}

	inline static int32_t get_offset_of__typeName_2() { return static_cast<int32_t>(offsetof(MethodResponse_t2147511201, ____typeName_2)); }
	inline String_t* get__typeName_2() const { return ____typeName_2; }
	inline String_t** get_address_of__typeName_2() { return &____typeName_2; }
	inline void set__typeName_2(String_t* value)
	{
		____typeName_2 = value;
		Il2CppCodeGenWriteBarrier((&____typeName_2), value);
	}

	inline static int32_t get_offset_of__methodBase_3() { return static_cast<int32_t>(offsetof(MethodResponse_t2147511201, ____methodBase_3)); }
	inline MethodBase_t * get__methodBase_3() const { return ____methodBase_3; }
	inline MethodBase_t ** get_address_of__methodBase_3() { return &____methodBase_3; }
	inline void set__methodBase_3(MethodBase_t * value)
	{
		____methodBase_3 = value;
		Il2CppCodeGenWriteBarrier((&____methodBase_3), value);
	}

	inline static int32_t get_offset_of__returnValue_4() { return static_cast<int32_t>(offsetof(MethodResponse_t2147511201, ____returnValue_4)); }
	inline RuntimeObject * get__returnValue_4() const { return ____returnValue_4; }
	inline RuntimeObject ** get_address_of__returnValue_4() { return &____returnValue_4; }
	inline void set__returnValue_4(RuntimeObject * value)
	{
		____returnValue_4 = value;
		Il2CppCodeGenWriteBarrier((&____returnValue_4), value);
	}

	inline static int32_t get_offset_of__exception_5() { return static_cast<int32_t>(offsetof(MethodResponse_t2147511201, ____exception_5)); }
	inline Exception_t * get__exception_5() const { return ____exception_5; }
	inline Exception_t ** get_address_of__exception_5() { return &____exception_5; }
	inline void set__exception_5(Exception_t * value)
	{
		____exception_5 = value;
		Il2CppCodeGenWriteBarrier((&____exception_5), value);
	}

	inline static int32_t get_offset_of__methodSignature_6() { return static_cast<int32_t>(offsetof(MethodResponse_t2147511201, ____methodSignature_6)); }
	inline TypeU5BU5D_t3940880105* get__methodSignature_6() const { return ____methodSignature_6; }
	inline TypeU5BU5D_t3940880105** get_address_of__methodSignature_6() { return &____methodSignature_6; }
	inline void set__methodSignature_6(TypeU5BU5D_t3940880105* value)
	{
		____methodSignature_6 = value;
		Il2CppCodeGenWriteBarrier((&____methodSignature_6), value);
	}

	inline static int32_t get_offset_of__inArgInfo_7() { return static_cast<int32_t>(offsetof(MethodResponse_t2147511201, ____inArgInfo_7)); }
	inline ArgInfo_t3261134217 * get__inArgInfo_7() const { return ____inArgInfo_7; }
	inline ArgInfo_t3261134217 ** get_address_of__inArgInfo_7() { return &____inArgInfo_7; }
	inline void set__inArgInfo_7(ArgInfo_t3261134217 * value)
	{
		____inArgInfo_7 = value;
		Il2CppCodeGenWriteBarrier((&____inArgInfo_7), value);
	}

	inline static int32_t get_offset_of__args_8() { return static_cast<int32_t>(offsetof(MethodResponse_t2147511201, ____args_8)); }
	inline ObjectU5BU5D_t2843939325* get__args_8() const { return ____args_8; }
	inline ObjectU5BU5D_t2843939325** get_address_of__args_8() { return &____args_8; }
	inline void set__args_8(ObjectU5BU5D_t2843939325* value)
	{
		____args_8 = value;
		Il2CppCodeGenWriteBarrier((&____args_8), value);
	}

	inline static int32_t get_offset_of__outArgs_9() { return static_cast<int32_t>(offsetof(MethodResponse_t2147511201, ____outArgs_9)); }
	inline ObjectU5BU5D_t2843939325* get__outArgs_9() const { return ____outArgs_9; }
	inline ObjectU5BU5D_t2843939325** get_address_of__outArgs_9() { return &____outArgs_9; }
	inline void set__outArgs_9(ObjectU5BU5D_t2843939325* value)
	{
		____outArgs_9 = value;
		Il2CppCodeGenWriteBarrier((&____outArgs_9), value);
	}

	inline static int32_t get_offset_of__callMsg_10() { return static_cast<int32_t>(offsetof(MethodResponse_t2147511201, ____callMsg_10)); }
	inline RuntimeObject* get__callMsg_10() const { return ____callMsg_10; }
	inline RuntimeObject** get_address_of__callMsg_10() { return &____callMsg_10; }
	inline void set__callMsg_10(RuntimeObject* value)
	{
		____callMsg_10 = value;
		Il2CppCodeGenWriteBarrier((&____callMsg_10), value);
	}

	inline static int32_t get_offset_of__callContext_11() { return static_cast<int32_t>(offsetof(MethodResponse_t2147511201, ____callContext_11)); }
	inline LogicalCallContext_t3342013719 * get__callContext_11() const { return ____callContext_11; }
	inline LogicalCallContext_t3342013719 ** get_address_of__callContext_11() { return &____callContext_11; }
	inline void set__callContext_11(LogicalCallContext_t3342013719 * value)
	{
		____callContext_11 = value;
		Il2CppCodeGenWriteBarrier((&____callContext_11), value);
	}

	inline static int32_t get_offset_of__targetIdentity_12() { return static_cast<int32_t>(offsetof(MethodResponse_t2147511201, ____targetIdentity_12)); }
	inline Identity_t1873279371 * get__targetIdentity_12() const { return ____targetIdentity_12; }
	inline Identity_t1873279371 ** get_address_of__targetIdentity_12() { return &____targetIdentity_12; }
	inline void set__targetIdentity_12(Identity_t1873279371 * value)
	{
		____targetIdentity_12 = value;
		Il2CppCodeGenWriteBarrier((&____targetIdentity_12), value);
	}

	inline static int32_t get_offset_of_ExternalProperties_13() { return static_cast<int32_t>(offsetof(MethodResponse_t2147511201, ___ExternalProperties_13)); }
	inline RuntimeObject* get_ExternalProperties_13() const { return ___ExternalProperties_13; }
	inline RuntimeObject** get_address_of_ExternalProperties_13() { return &___ExternalProperties_13; }
	inline void set_ExternalProperties_13(RuntimeObject* value)
	{
		___ExternalProperties_13 = value;
		Il2CppCodeGenWriteBarrier((&___ExternalProperties_13), value);
	}

	inline static int32_t get_offset_of_InternalProperties_14() { return static_cast<int32_t>(offsetof(MethodResponse_t2147511201, ___InternalProperties_14)); }
	inline RuntimeObject* get_InternalProperties_14() const { return ___InternalProperties_14; }
	inline RuntimeObject** get_address_of_InternalProperties_14() { return &___InternalProperties_14; }
	inline void set_InternalProperties_14(RuntimeObject* value)
	{
		___InternalProperties_14 = value;
		Il2CppCodeGenWriteBarrier((&___InternalProperties_14), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // METHODRESPONSE_T2147511201_H
#ifndef OBJREFSURROGATE_T3860276170_H
#define OBJREFSURROGATE_T3860276170_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Messaging.ObjRefSurrogate
struct  ObjRefSurrogate_t3860276170  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OBJREFSURROGATE_T3860276170_H
#ifndef REMOTINGSURROGATE_T2834579653_H
#define REMOTINGSURROGATE_T2834579653_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Messaging.RemotingSurrogate
struct  RemotingSurrogate_t2834579653  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REMOTINGSURROGATE_T2834579653_H
#ifndef REMOTINGSURROGATESELECTOR_T2472351973_H
#define REMOTINGSURROGATESELECTOR_T2472351973_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Messaging.RemotingSurrogateSelector
struct  RemotingSurrogateSelector_t2472351973  : public RuntimeObject
{
public:
	// System.Runtime.Serialization.ISurrogateSelector System.Runtime.Remoting.Messaging.RemotingSurrogateSelector::_next
	RuntimeObject* ____next_3;

public:
	inline static int32_t get_offset_of__next_3() { return static_cast<int32_t>(offsetof(RemotingSurrogateSelector_t2472351973, ____next_3)); }
	inline RuntimeObject* get__next_3() const { return ____next_3; }
	inline RuntimeObject** get_address_of__next_3() { return &____next_3; }
	inline void set__next_3(RuntimeObject* value)
	{
		____next_3 = value;
		Il2CppCodeGenWriteBarrier((&____next_3), value);
	}
};

struct RemotingSurrogateSelector_t2472351973_StaticFields
{
public:
	// System.Type System.Runtime.Remoting.Messaging.RemotingSurrogateSelector::s_cachedTypeObjRef
	Type_t * ___s_cachedTypeObjRef_0;
	// System.Runtime.Remoting.Messaging.ObjRefSurrogate System.Runtime.Remoting.Messaging.RemotingSurrogateSelector::_objRefSurrogate
	ObjRefSurrogate_t3860276170 * ____objRefSurrogate_1;
	// System.Runtime.Remoting.Messaging.RemotingSurrogate System.Runtime.Remoting.Messaging.RemotingSurrogateSelector::_objRemotingSurrogate
	RemotingSurrogate_t2834579653 * ____objRemotingSurrogate_2;

public:
	inline static int32_t get_offset_of_s_cachedTypeObjRef_0() { return static_cast<int32_t>(offsetof(RemotingSurrogateSelector_t2472351973_StaticFields, ___s_cachedTypeObjRef_0)); }
	inline Type_t * get_s_cachedTypeObjRef_0() const { return ___s_cachedTypeObjRef_0; }
	inline Type_t ** get_address_of_s_cachedTypeObjRef_0() { return &___s_cachedTypeObjRef_0; }
	inline void set_s_cachedTypeObjRef_0(Type_t * value)
	{
		___s_cachedTypeObjRef_0 = value;
		Il2CppCodeGenWriteBarrier((&___s_cachedTypeObjRef_0), value);
	}

	inline static int32_t get_offset_of__objRefSurrogate_1() { return static_cast<int32_t>(offsetof(RemotingSurrogateSelector_t2472351973_StaticFields, ____objRefSurrogate_1)); }
	inline ObjRefSurrogate_t3860276170 * get__objRefSurrogate_1() const { return ____objRefSurrogate_1; }
	inline ObjRefSurrogate_t3860276170 ** get_address_of__objRefSurrogate_1() { return &____objRefSurrogate_1; }
	inline void set__objRefSurrogate_1(ObjRefSurrogate_t3860276170 * value)
	{
		____objRefSurrogate_1 = value;
		Il2CppCodeGenWriteBarrier((&____objRefSurrogate_1), value);
	}

	inline static int32_t get_offset_of__objRemotingSurrogate_2() { return static_cast<int32_t>(offsetof(RemotingSurrogateSelector_t2472351973_StaticFields, ____objRemotingSurrogate_2)); }
	inline RemotingSurrogate_t2834579653 * get__objRemotingSurrogate_2() const { return ____objRemotingSurrogate_2; }
	inline RemotingSurrogate_t2834579653 ** get_address_of__objRemotingSurrogate_2() { return &____objRemotingSurrogate_2; }
	inline void set__objRemotingSurrogate_2(RemotingSurrogate_t2834579653 * value)
	{
		____objRemotingSurrogate_2 = value;
		Il2CppCodeGenWriteBarrier((&____objRemotingSurrogate_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REMOTINGSURROGATESELECTOR_T2472351973_H
#ifndef RETURNMESSAGE_T1376985608_H
#define RETURNMESSAGE_T1376985608_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Messaging.ReturnMessage
struct  ReturnMessage_t1376985608  : public RuntimeObject
{
public:
	// System.Object[] System.Runtime.Remoting.Messaging.ReturnMessage::_outArgs
	ObjectU5BU5D_t2843939325* ____outArgs_0;
	// System.Object[] System.Runtime.Remoting.Messaging.ReturnMessage::_args
	ObjectU5BU5D_t2843939325* ____args_1;
	// System.Runtime.Remoting.Messaging.LogicalCallContext System.Runtime.Remoting.Messaging.ReturnMessage::_callCtx
	LogicalCallContext_t3342013719 * ____callCtx_2;
	// System.Object System.Runtime.Remoting.Messaging.ReturnMessage::_returnValue
	RuntimeObject * ____returnValue_3;
	// System.String System.Runtime.Remoting.Messaging.ReturnMessage::_uri
	String_t* ____uri_4;
	// System.Exception System.Runtime.Remoting.Messaging.ReturnMessage::_exception
	Exception_t * ____exception_5;
	// System.Reflection.MethodBase System.Runtime.Remoting.Messaging.ReturnMessage::_methodBase
	MethodBase_t * ____methodBase_6;
	// System.String System.Runtime.Remoting.Messaging.ReturnMessage::_methodName
	String_t* ____methodName_7;
	// System.Type[] System.Runtime.Remoting.Messaging.ReturnMessage::_methodSignature
	TypeU5BU5D_t3940880105* ____methodSignature_8;
	// System.String System.Runtime.Remoting.Messaging.ReturnMessage::_typeName
	String_t* ____typeName_9;
	// System.Runtime.Remoting.Messaging.MethodReturnDictionary System.Runtime.Remoting.Messaging.ReturnMessage::_properties
	MethodReturnDictionary_t2551046119 * ____properties_10;
	// System.Runtime.Remoting.Identity System.Runtime.Remoting.Messaging.ReturnMessage::_targetIdentity
	Identity_t1873279371 * ____targetIdentity_11;
	// System.Runtime.Remoting.Messaging.ArgInfo System.Runtime.Remoting.Messaging.ReturnMessage::_inArgInfo
	ArgInfo_t3261134217 * ____inArgInfo_12;

public:
	inline static int32_t get_offset_of__outArgs_0() { return static_cast<int32_t>(offsetof(ReturnMessage_t1376985608, ____outArgs_0)); }
	inline ObjectU5BU5D_t2843939325* get__outArgs_0() const { return ____outArgs_0; }
	inline ObjectU5BU5D_t2843939325** get_address_of__outArgs_0() { return &____outArgs_0; }
	inline void set__outArgs_0(ObjectU5BU5D_t2843939325* value)
	{
		____outArgs_0 = value;
		Il2CppCodeGenWriteBarrier((&____outArgs_0), value);
	}

	inline static int32_t get_offset_of__args_1() { return static_cast<int32_t>(offsetof(ReturnMessage_t1376985608, ____args_1)); }
	inline ObjectU5BU5D_t2843939325* get__args_1() const { return ____args_1; }
	inline ObjectU5BU5D_t2843939325** get_address_of__args_1() { return &____args_1; }
	inline void set__args_1(ObjectU5BU5D_t2843939325* value)
	{
		____args_1 = value;
		Il2CppCodeGenWriteBarrier((&____args_1), value);
	}

	inline static int32_t get_offset_of__callCtx_2() { return static_cast<int32_t>(offsetof(ReturnMessage_t1376985608, ____callCtx_2)); }
	inline LogicalCallContext_t3342013719 * get__callCtx_2() const { return ____callCtx_2; }
	inline LogicalCallContext_t3342013719 ** get_address_of__callCtx_2() { return &____callCtx_2; }
	inline void set__callCtx_2(LogicalCallContext_t3342013719 * value)
	{
		____callCtx_2 = value;
		Il2CppCodeGenWriteBarrier((&____callCtx_2), value);
	}

	inline static int32_t get_offset_of__returnValue_3() { return static_cast<int32_t>(offsetof(ReturnMessage_t1376985608, ____returnValue_3)); }
	inline RuntimeObject * get__returnValue_3() const { return ____returnValue_3; }
	inline RuntimeObject ** get_address_of__returnValue_3() { return &____returnValue_3; }
	inline void set__returnValue_3(RuntimeObject * value)
	{
		____returnValue_3 = value;
		Il2CppCodeGenWriteBarrier((&____returnValue_3), value);
	}

	inline static int32_t get_offset_of__uri_4() { return static_cast<int32_t>(offsetof(ReturnMessage_t1376985608, ____uri_4)); }
	inline String_t* get__uri_4() const { return ____uri_4; }
	inline String_t** get_address_of__uri_4() { return &____uri_4; }
	inline void set__uri_4(String_t* value)
	{
		____uri_4 = value;
		Il2CppCodeGenWriteBarrier((&____uri_4), value);
	}

	inline static int32_t get_offset_of__exception_5() { return static_cast<int32_t>(offsetof(ReturnMessage_t1376985608, ____exception_5)); }
	inline Exception_t * get__exception_5() const { return ____exception_5; }
	inline Exception_t ** get_address_of__exception_5() { return &____exception_5; }
	inline void set__exception_5(Exception_t * value)
	{
		____exception_5 = value;
		Il2CppCodeGenWriteBarrier((&____exception_5), value);
	}

	inline static int32_t get_offset_of__methodBase_6() { return static_cast<int32_t>(offsetof(ReturnMessage_t1376985608, ____methodBase_6)); }
	inline MethodBase_t * get__methodBase_6() const { return ____methodBase_6; }
	inline MethodBase_t ** get_address_of__methodBase_6() { return &____methodBase_6; }
	inline void set__methodBase_6(MethodBase_t * value)
	{
		____methodBase_6 = value;
		Il2CppCodeGenWriteBarrier((&____methodBase_6), value);
	}

	inline static int32_t get_offset_of__methodName_7() { return static_cast<int32_t>(offsetof(ReturnMessage_t1376985608, ____methodName_7)); }
	inline String_t* get__methodName_7() const { return ____methodName_7; }
	inline String_t** get_address_of__methodName_7() { return &____methodName_7; }
	inline void set__methodName_7(String_t* value)
	{
		____methodName_7 = value;
		Il2CppCodeGenWriteBarrier((&____methodName_7), value);
	}

	inline static int32_t get_offset_of__methodSignature_8() { return static_cast<int32_t>(offsetof(ReturnMessage_t1376985608, ____methodSignature_8)); }
	inline TypeU5BU5D_t3940880105* get__methodSignature_8() const { return ____methodSignature_8; }
	inline TypeU5BU5D_t3940880105** get_address_of__methodSignature_8() { return &____methodSignature_8; }
	inline void set__methodSignature_8(TypeU5BU5D_t3940880105* value)
	{
		____methodSignature_8 = value;
		Il2CppCodeGenWriteBarrier((&____methodSignature_8), value);
	}

	inline static int32_t get_offset_of__typeName_9() { return static_cast<int32_t>(offsetof(ReturnMessage_t1376985608, ____typeName_9)); }
	inline String_t* get__typeName_9() const { return ____typeName_9; }
	inline String_t** get_address_of__typeName_9() { return &____typeName_9; }
	inline void set__typeName_9(String_t* value)
	{
		____typeName_9 = value;
		Il2CppCodeGenWriteBarrier((&____typeName_9), value);
	}

	inline static int32_t get_offset_of__properties_10() { return static_cast<int32_t>(offsetof(ReturnMessage_t1376985608, ____properties_10)); }
	inline MethodReturnDictionary_t2551046119 * get__properties_10() const { return ____properties_10; }
	inline MethodReturnDictionary_t2551046119 ** get_address_of__properties_10() { return &____properties_10; }
	inline void set__properties_10(MethodReturnDictionary_t2551046119 * value)
	{
		____properties_10 = value;
		Il2CppCodeGenWriteBarrier((&____properties_10), value);
	}

	inline static int32_t get_offset_of__targetIdentity_11() { return static_cast<int32_t>(offsetof(ReturnMessage_t1376985608, ____targetIdentity_11)); }
	inline Identity_t1873279371 * get__targetIdentity_11() const { return ____targetIdentity_11; }
	inline Identity_t1873279371 ** get_address_of__targetIdentity_11() { return &____targetIdentity_11; }
	inline void set__targetIdentity_11(Identity_t1873279371 * value)
	{
		____targetIdentity_11 = value;
		Il2CppCodeGenWriteBarrier((&____targetIdentity_11), value);
	}

	inline static int32_t get_offset_of__inArgInfo_12() { return static_cast<int32_t>(offsetof(ReturnMessage_t1376985608, ____inArgInfo_12)); }
	inline ArgInfo_t3261134217 * get__inArgInfo_12() const { return ____inArgInfo_12; }
	inline ArgInfo_t3261134217 ** get_address_of__inArgInfo_12() { return &____inArgInfo_12; }
	inline void set__inArgInfo_12(ArgInfo_t3261134217 * value)
	{
		____inArgInfo_12 = value;
		Il2CppCodeGenWriteBarrier((&____inArgInfo_12), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RETURNMESSAGE_T1376985608_H
#ifndef SERVERCONTEXTTERMINATORSINK_T16296004_H
#define SERVERCONTEXTTERMINATORSINK_T16296004_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Messaging.ServerContextTerminatorSink
struct  ServerContextTerminatorSink_t16296004  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SERVERCONTEXTTERMINATORSINK_T16296004_H
#ifndef SERVEROBJECTREPLYSINK_T2966042986_H
#define SERVEROBJECTREPLYSINK_T2966042986_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Messaging.ServerObjectReplySink
struct  ServerObjectReplySink_t2966042986  : public RuntimeObject
{
public:
	// System.Runtime.Remoting.Messaging.IMessageSink System.Runtime.Remoting.Messaging.ServerObjectReplySink::_replySink
	RuntimeObject* ____replySink_0;
	// System.Runtime.Remoting.ServerIdentity System.Runtime.Remoting.Messaging.ServerObjectReplySink::_identity
	ServerIdentity_t2342208608 * ____identity_1;

public:
	inline static int32_t get_offset_of__replySink_0() { return static_cast<int32_t>(offsetof(ServerObjectReplySink_t2966042986, ____replySink_0)); }
	inline RuntimeObject* get__replySink_0() const { return ____replySink_0; }
	inline RuntimeObject** get_address_of__replySink_0() { return &____replySink_0; }
	inline void set__replySink_0(RuntimeObject* value)
	{
		____replySink_0 = value;
		Il2CppCodeGenWriteBarrier((&____replySink_0), value);
	}

	inline static int32_t get_offset_of__identity_1() { return static_cast<int32_t>(offsetof(ServerObjectReplySink_t2966042986, ____identity_1)); }
	inline ServerIdentity_t2342208608 * get__identity_1() const { return ____identity_1; }
	inline ServerIdentity_t2342208608 ** get_address_of__identity_1() { return &____identity_1; }
	inline void set__identity_1(ServerIdentity_t2342208608 * value)
	{
		____identity_1 = value;
		Il2CppCodeGenWriteBarrier((&____identity_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SERVEROBJECTREPLYSINK_T2966042986_H
#ifndef SERVEROBJECTTERMINATORSINK_T4187339465_H
#define SERVEROBJECTTERMINATORSINK_T4187339465_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Messaging.ServerObjectTerminatorSink
struct  ServerObjectTerminatorSink_t4187339465  : public RuntimeObject
{
public:
	// System.Runtime.Remoting.Messaging.IMessageSink System.Runtime.Remoting.Messaging.ServerObjectTerminatorSink::_nextSink
	RuntimeObject* ____nextSink_0;

public:
	inline static int32_t get_offset_of__nextSink_0() { return static_cast<int32_t>(offsetof(ServerObjectTerminatorSink_t4187339465, ____nextSink_0)); }
	inline RuntimeObject* get__nextSink_0() const { return ____nextSink_0; }
	inline RuntimeObject** get_address_of__nextSink_0() { return &____nextSink_0; }
	inline void set__nextSink_0(RuntimeObject* value)
	{
		____nextSink_0 = value;
		Il2CppCodeGenWriteBarrier((&____nextSink_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SERVEROBJECTTERMINATORSINK_T4187339465_H
#ifndef STACKBUILDERSINK_T883411942_H
#define STACKBUILDERSINK_T883411942_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Messaging.StackBuilderSink
struct  StackBuilderSink_t883411942  : public RuntimeObject
{
public:
	// System.MarshalByRefObject System.Runtime.Remoting.Messaging.StackBuilderSink::_target
	MarshalByRefObject_t2760389100 * ____target_0;
	// System.Runtime.Remoting.Proxies.RealProxy System.Runtime.Remoting.Messaging.StackBuilderSink::_rp
	RealProxy_t2312050253 * ____rp_1;

public:
	inline static int32_t get_offset_of__target_0() { return static_cast<int32_t>(offsetof(StackBuilderSink_t883411942, ____target_0)); }
	inline MarshalByRefObject_t2760389100 * get__target_0() const { return ____target_0; }
	inline MarshalByRefObject_t2760389100 ** get_address_of__target_0() { return &____target_0; }
	inline void set__target_0(MarshalByRefObject_t2760389100 * value)
	{
		____target_0 = value;
		Il2CppCodeGenWriteBarrier((&____target_0), value);
	}

	inline static int32_t get_offset_of__rp_1() { return static_cast<int32_t>(offsetof(StackBuilderSink_t883411942, ____rp_1)); }
	inline RealProxy_t2312050253 * get__rp_1() const { return ____rp_1; }
	inline RealProxy_t2312050253 ** get_address_of__rp_1() { return &____rp_1; }
	inline void set__rp_1(RealProxy_t2312050253 * value)
	{
		____rp_1 = value;
		Il2CppCodeGenWriteBarrier((&____rp_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STACKBUILDERSINK_T883411942_H
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
#ifndef DECIMAL_T2948259380_H
#define DECIMAL_T2948259380_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Decimal
struct  Decimal_t2948259380 
{
public:
	// System.Int32 System.Decimal::flags
	int32_t ___flags_14;
	// System.Int32 System.Decimal::hi
	int32_t ___hi_15;
	// System.Int32 System.Decimal::lo
	int32_t ___lo_16;
	// System.Int32 System.Decimal::mid
	int32_t ___mid_17;

public:
	inline static int32_t get_offset_of_flags_14() { return static_cast<int32_t>(offsetof(Decimal_t2948259380, ___flags_14)); }
	inline int32_t get_flags_14() const { return ___flags_14; }
	inline int32_t* get_address_of_flags_14() { return &___flags_14; }
	inline void set_flags_14(int32_t value)
	{
		___flags_14 = value;
	}

	inline static int32_t get_offset_of_hi_15() { return static_cast<int32_t>(offsetof(Decimal_t2948259380, ___hi_15)); }
	inline int32_t get_hi_15() const { return ___hi_15; }
	inline int32_t* get_address_of_hi_15() { return &___hi_15; }
	inline void set_hi_15(int32_t value)
	{
		___hi_15 = value;
	}

	inline static int32_t get_offset_of_lo_16() { return static_cast<int32_t>(offsetof(Decimal_t2948259380, ___lo_16)); }
	inline int32_t get_lo_16() const { return ___lo_16; }
	inline int32_t* get_address_of_lo_16() { return &___lo_16; }
	inline void set_lo_16(int32_t value)
	{
		___lo_16 = value;
	}

	inline static int32_t get_offset_of_mid_17() { return static_cast<int32_t>(offsetof(Decimal_t2948259380, ___mid_17)); }
	inline int32_t get_mid_17() const { return ___mid_17; }
	inline int32_t* get_address_of_mid_17() { return &___mid_17; }
	inline void set_mid_17(int32_t value)
	{
		___mid_17 = value;
	}
};

struct Decimal_t2948259380_StaticFields
{
public:
	// System.UInt32[] System.Decimal::Powers10
	UInt32U5BU5D_t2770800703* ___Powers10_6;
	// System.Decimal System.Decimal::Zero
	Decimal_t2948259380  ___Zero_7;
	// System.Decimal System.Decimal::One
	Decimal_t2948259380  ___One_8;
	// System.Decimal System.Decimal::MinusOne
	Decimal_t2948259380  ___MinusOne_9;
	// System.Decimal System.Decimal::MaxValue
	Decimal_t2948259380  ___MaxValue_10;
	// System.Decimal System.Decimal::MinValue
	Decimal_t2948259380  ___MinValue_11;
	// System.Decimal System.Decimal::NearNegativeZero
	Decimal_t2948259380  ___NearNegativeZero_12;
	// System.Decimal System.Decimal::NearPositiveZero
	Decimal_t2948259380  ___NearPositiveZero_13;

public:
	inline static int32_t get_offset_of_Powers10_6() { return static_cast<int32_t>(offsetof(Decimal_t2948259380_StaticFields, ___Powers10_6)); }
	inline UInt32U5BU5D_t2770800703* get_Powers10_6() const { return ___Powers10_6; }
	inline UInt32U5BU5D_t2770800703** get_address_of_Powers10_6() { return &___Powers10_6; }
	inline void set_Powers10_6(UInt32U5BU5D_t2770800703* value)
	{
		___Powers10_6 = value;
		Il2CppCodeGenWriteBarrier((&___Powers10_6), value);
	}

	inline static int32_t get_offset_of_Zero_7() { return static_cast<int32_t>(offsetof(Decimal_t2948259380_StaticFields, ___Zero_7)); }
	inline Decimal_t2948259380  get_Zero_7() const { return ___Zero_7; }
	inline Decimal_t2948259380 * get_address_of_Zero_7() { return &___Zero_7; }
	inline void set_Zero_7(Decimal_t2948259380  value)
	{
		___Zero_7 = value;
	}

	inline static int32_t get_offset_of_One_8() { return static_cast<int32_t>(offsetof(Decimal_t2948259380_StaticFields, ___One_8)); }
	inline Decimal_t2948259380  get_One_8() const { return ___One_8; }
	inline Decimal_t2948259380 * get_address_of_One_8() { return &___One_8; }
	inline void set_One_8(Decimal_t2948259380  value)
	{
		___One_8 = value;
	}

	inline static int32_t get_offset_of_MinusOne_9() { return static_cast<int32_t>(offsetof(Decimal_t2948259380_StaticFields, ___MinusOne_9)); }
	inline Decimal_t2948259380  get_MinusOne_9() const { return ___MinusOne_9; }
	inline Decimal_t2948259380 * get_address_of_MinusOne_9() { return &___MinusOne_9; }
	inline void set_MinusOne_9(Decimal_t2948259380  value)
	{
		___MinusOne_9 = value;
	}

	inline static int32_t get_offset_of_MaxValue_10() { return static_cast<int32_t>(offsetof(Decimal_t2948259380_StaticFields, ___MaxValue_10)); }
	inline Decimal_t2948259380  get_MaxValue_10() const { return ___MaxValue_10; }
	inline Decimal_t2948259380 * get_address_of_MaxValue_10() { return &___MaxValue_10; }
	inline void set_MaxValue_10(Decimal_t2948259380  value)
	{
		___MaxValue_10 = value;
	}

	inline static int32_t get_offset_of_MinValue_11() { return static_cast<int32_t>(offsetof(Decimal_t2948259380_StaticFields, ___MinValue_11)); }
	inline Decimal_t2948259380  get_MinValue_11() const { return ___MinValue_11; }
	inline Decimal_t2948259380 * get_address_of_MinValue_11() { return &___MinValue_11; }
	inline void set_MinValue_11(Decimal_t2948259380  value)
	{
		___MinValue_11 = value;
	}

	inline static int32_t get_offset_of_NearNegativeZero_12() { return static_cast<int32_t>(offsetof(Decimal_t2948259380_StaticFields, ___NearNegativeZero_12)); }
	inline Decimal_t2948259380  get_NearNegativeZero_12() const { return ___NearNegativeZero_12; }
	inline Decimal_t2948259380 * get_address_of_NearNegativeZero_12() { return &___NearNegativeZero_12; }
	inline void set_NearNegativeZero_12(Decimal_t2948259380  value)
	{
		___NearNegativeZero_12 = value;
	}

	inline static int32_t get_offset_of_NearPositiveZero_13() { return static_cast<int32_t>(offsetof(Decimal_t2948259380_StaticFields, ___NearPositiveZero_13)); }
	inline Decimal_t2948259380  get_NearPositiveZero_13() const { return ___NearPositiveZero_13; }
	inline Decimal_t2948259380 * get_address_of_NearPositiveZero_13() { return &___NearPositiveZero_13; }
	inline void set_NearPositiveZero_13(Decimal_t2948259380  value)
	{
		___NearPositiveZero_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DECIMAL_T2948259380_H
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
#ifndef ASYNCMETHODBUILDERCORE_T2955600131_H
#define ASYNCMETHODBUILDERCORE_T2955600131_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct  AsyncMethodBuilderCore_t2955600131 
{
public:
	// System.Runtime.CompilerServices.IAsyncStateMachine System.Runtime.CompilerServices.AsyncMethodBuilderCore::m_stateMachine
	RuntimeObject* ___m_stateMachine_0;
	// System.Action System.Runtime.CompilerServices.AsyncMethodBuilderCore::m_defaultContextAction
	Action_t1264377477 * ___m_defaultContextAction_1;

public:
	inline static int32_t get_offset_of_m_stateMachine_0() { return static_cast<int32_t>(offsetof(AsyncMethodBuilderCore_t2955600131, ___m_stateMachine_0)); }
	inline RuntimeObject* get_m_stateMachine_0() const { return ___m_stateMachine_0; }
	inline RuntimeObject** get_address_of_m_stateMachine_0() { return &___m_stateMachine_0; }
	inline void set_m_stateMachine_0(RuntimeObject* value)
	{
		___m_stateMachine_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_stateMachine_0), value);
	}

	inline static int32_t get_offset_of_m_defaultContextAction_1() { return static_cast<int32_t>(offsetof(AsyncMethodBuilderCore_t2955600131, ___m_defaultContextAction_1)); }
	inline Action_t1264377477 * get_m_defaultContextAction_1() const { return ___m_defaultContextAction_1; }
	inline Action_t1264377477 ** get_address_of_m_defaultContextAction_1() { return &___m_defaultContextAction_1; }
	inline void set_m_defaultContextAction_1(Action_t1264377477 * value)
	{
		___m_defaultContextAction_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_defaultContextAction_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_t2955600131_marshaled_pinvoke
{
	RuntimeObject* ___m_stateMachine_0;
	Il2CppMethodPointer ___m_defaultContextAction_1;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_t2955600131_marshaled_com
{
	RuntimeObject* ___m_stateMachine_0;
	Il2CppMethodPointer ___m_defaultContextAction_1;
};
#endif // ASYNCMETHODBUILDERCORE_T2955600131_H
#ifndef COMPILATIONRELAXATIONSATTRIBUTE_T1721442111_H
#define COMPILATIONRELAXATIONSATTRIBUTE_T1721442111_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.CompilationRelaxationsAttribute
struct  CompilationRelaxationsAttribute_t1721442111  : public Attribute_t861562559
{
public:
	// System.Int32 System.Runtime.CompilerServices.CompilationRelaxationsAttribute::m_relaxations
	int32_t ___m_relaxations_0;

public:
	inline static int32_t get_offset_of_m_relaxations_0() { return static_cast<int32_t>(offsetof(CompilationRelaxationsAttribute_t1721442111, ___m_relaxations_0)); }
	inline int32_t get_m_relaxations_0() const { return ___m_relaxations_0; }
	inline int32_t* get_address_of_m_relaxations_0() { return &___m_relaxations_0; }
	inline void set_m_relaxations_0(int32_t value)
	{
		___m_relaxations_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPILATIONRELAXATIONSATTRIBUTE_T1721442111_H
#ifndef COMPILERGENERATEDATTRIBUTE_T23527886_H
#define COMPILERGENERATEDATTRIBUTE_T23527886_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.CompilerGeneratedAttribute
struct  CompilerGeneratedAttribute_t23527886  : public Attribute_t861562559
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPILERGENERATEDATTRIBUTE_T23527886_H
#ifndef CONFIGUREDTASKAWAITER_T555647845_H
#define CONFIGUREDTASKAWAITER_T555647845_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter
struct  ConfiguredTaskAwaiter_t555647845 
{
public:
	// System.Threading.Tasks.Task System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter::m_task
	Task_t3187275312 * ___m_task_0;
	// System.Boolean System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter::m_continueOnCapturedContext
	bool ___m_continueOnCapturedContext_1;

public:
	inline static int32_t get_offset_of_m_task_0() { return static_cast<int32_t>(offsetof(ConfiguredTaskAwaiter_t555647845, ___m_task_0)); }
	inline Task_t3187275312 * get_m_task_0() const { return ___m_task_0; }
	inline Task_t3187275312 ** get_address_of_m_task_0() { return &___m_task_0; }
	inline void set_m_task_0(Task_t3187275312 * value)
	{
		___m_task_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_task_0), value);
	}

	inline static int32_t get_offset_of_m_continueOnCapturedContext_1() { return static_cast<int32_t>(offsetof(ConfiguredTaskAwaiter_t555647845, ___m_continueOnCapturedContext_1)); }
	inline bool get_m_continueOnCapturedContext_1() const { return ___m_continueOnCapturedContext_1; }
	inline bool* get_address_of_m_continueOnCapturedContext_1() { return &___m_continueOnCapturedContext_1; }
	inline void set_m_continueOnCapturedContext_1(bool value)
	{
		___m_continueOnCapturedContext_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter
struct ConfiguredTaskAwaiter_t555647845_marshaled_pinvoke
{
	Task_t3187275312 * ___m_task_0;
	int32_t ___m_continueOnCapturedContext_1;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter
struct ConfiguredTaskAwaiter_t555647845_marshaled_com
{
	Task_t3187275312 * ___m_task_0;
	int32_t ___m_continueOnCapturedContext_1;
};
#endif // CONFIGUREDTASKAWAITER_T555647845_H
#ifndef CUSTOMCONSTANTATTRIBUTE_T1681301359_H
#define CUSTOMCONSTANTATTRIBUTE_T1681301359_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.CustomConstantAttribute
struct  CustomConstantAttribute_t1681301359  : public Attribute_t861562559
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CUSTOMCONSTANTATTRIBUTE_T1681301359_H
#ifndef EPHEMERON_T1602596362_H
#define EPHEMERON_T1602596362_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.Ephemeron
struct  Ephemeron_t1602596362 
{
public:
	// System.Object System.Runtime.CompilerServices.Ephemeron::key
	RuntimeObject * ___key_0;
	// System.Object System.Runtime.CompilerServices.Ephemeron::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(Ephemeron_t1602596362, ___key_0)); }
	inline RuntimeObject * get_key_0() const { return ___key_0; }
	inline RuntimeObject ** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(RuntimeObject * value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((&___key_0), value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(Ephemeron_t1602596362, ___value_1)); }
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
// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.Ephemeron
struct Ephemeron_t1602596362_marshaled_pinvoke
{
	Il2CppIUnknown* ___key_0;
	Il2CppIUnknown* ___value_1;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.Ephemeron
struct Ephemeron_t1602596362_marshaled_com
{
	Il2CppIUnknown* ___key_0;
	Il2CppIUnknown* ___value_1;
};
#endif // EPHEMERON_T1602596362_H
#ifndef EXTENSIONATTRIBUTE_T1723066603_H
#define EXTENSIONATTRIBUTE_T1723066603_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.ExtensionAttribute
struct  ExtensionAttribute_t1723066603  : public Attribute_t861562559
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXTENSIONATTRIBUTE_T1723066603_H
#ifndef FIXEDBUFFERATTRIBUTE_T3759792648_H
#define FIXEDBUFFERATTRIBUTE_T3759792648_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.FixedBufferAttribute
struct  FixedBufferAttribute_t3759792648  : public Attribute_t861562559
{
public:
	// System.Type System.Runtime.CompilerServices.FixedBufferAttribute::elementType
	Type_t * ___elementType_0;
	// System.Int32 System.Runtime.CompilerServices.FixedBufferAttribute::length
	int32_t ___length_1;

public:
	inline static int32_t get_offset_of_elementType_0() { return static_cast<int32_t>(offsetof(FixedBufferAttribute_t3759792648, ___elementType_0)); }
	inline Type_t * get_elementType_0() const { return ___elementType_0; }
	inline Type_t ** get_address_of_elementType_0() { return &___elementType_0; }
	inline void set_elementType_0(Type_t * value)
	{
		___elementType_0 = value;
		Il2CppCodeGenWriteBarrier((&___elementType_0), value);
	}

	inline static int32_t get_offset_of_length_1() { return static_cast<int32_t>(offsetof(FixedBufferAttribute_t3759792648, ___length_1)); }
	inline int32_t get_length_1() const { return ___length_1; }
	inline int32_t* get_address_of_length_1() { return &___length_1; }
	inline void set_length_1(int32_t value)
	{
		___length_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FIXEDBUFFERATTRIBUTE_T3759792648_H
#ifndef FRIENDACCESSALLOWEDATTRIBUTE_T3640740047_H
#define FRIENDACCESSALLOWEDATTRIBUTE_T3640740047_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.FriendAccessAllowedAttribute
struct  FriendAccessAllowedAttribute_t3640740047  : public Attribute_t861562559
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FRIENDACCESSALLOWEDATTRIBUTE_T3640740047_H
#ifndef INTERNALSVISIBLETOATTRIBUTE_T922893634_H
#define INTERNALSVISIBLETOATTRIBUTE_T922893634_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.InternalsVisibleToAttribute
struct  InternalsVisibleToAttribute_t922893634  : public Attribute_t861562559
{
public:
	// System.String System.Runtime.CompilerServices.InternalsVisibleToAttribute::_assemblyName
	String_t* ____assemblyName_0;
	// System.Boolean System.Runtime.CompilerServices.InternalsVisibleToAttribute::_allInternalsVisible
	bool ____allInternalsVisible_1;

public:
	inline static int32_t get_offset_of__assemblyName_0() { return static_cast<int32_t>(offsetof(InternalsVisibleToAttribute_t922893634, ____assemblyName_0)); }
	inline String_t* get__assemblyName_0() const { return ____assemblyName_0; }
	inline String_t** get_address_of__assemblyName_0() { return &____assemblyName_0; }
	inline void set__assemblyName_0(String_t* value)
	{
		____assemblyName_0 = value;
		Il2CppCodeGenWriteBarrier((&____assemblyName_0), value);
	}

	inline static int32_t get_offset_of__allInternalsVisible_1() { return static_cast<int32_t>(offsetof(InternalsVisibleToAttribute_t922893634, ____allInternalsVisible_1)); }
	inline bool get__allInternalsVisible_1() const { return ____allInternalsVisible_1; }
	inline bool* get_address_of__allInternalsVisible_1() { return &____allInternalsVisible_1; }
	inline void set__allInternalsVisible_1(bool value)
	{
		____allInternalsVisible_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTERNALSVISIBLETOATTRIBUTE_T922893634_H
#ifndef RUNTIMECOMPATIBILITYATTRIBUTE_T1169614002_H
#define RUNTIMECOMPATIBILITYATTRIBUTE_T1169614002_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.RuntimeCompatibilityAttribute
struct  RuntimeCompatibilityAttribute_t1169614002  : public Attribute_t861562559
{
public:
	// System.Boolean System.Runtime.CompilerServices.RuntimeCompatibilityAttribute::m_wrapNonExceptionThrows
	bool ___m_wrapNonExceptionThrows_0;

public:
	inline static int32_t get_offset_of_m_wrapNonExceptionThrows_0() { return static_cast<int32_t>(offsetof(RuntimeCompatibilityAttribute_t1169614002, ___m_wrapNonExceptionThrows_0)); }
	inline bool get_m_wrapNonExceptionThrows_0() const { return ___m_wrapNonExceptionThrows_0; }
	inline bool* get_address_of_m_wrapNonExceptionThrows_0() { return &___m_wrapNonExceptionThrows_0; }
	inline void set_m_wrapNonExceptionThrows_0(bool value)
	{
		___m_wrapNonExceptionThrows_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMECOMPATIBILITYATTRIBUTE_T1169614002_H
#ifndef RUNTIMEWRAPPEDEXCEPTION_T2169265577_H
#define RUNTIMEWRAPPEDEXCEPTION_T2169265577_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.RuntimeWrappedException
struct  RuntimeWrappedException_t2169265577  : public Exception_t
{
public:
	// System.Object System.Runtime.CompilerServices.RuntimeWrappedException::m_wrappedException
	RuntimeObject * ___m_wrappedException_17;

public:
	inline static int32_t get_offset_of_m_wrappedException_17() { return static_cast<int32_t>(offsetof(RuntimeWrappedException_t2169265577, ___m_wrappedException_17)); }
	inline RuntimeObject * get_m_wrappedException_17() const { return ___m_wrappedException_17; }
	inline RuntimeObject ** get_address_of_m_wrappedException_17() { return &___m_wrappedException_17; }
	inline void set_m_wrappedException_17(RuntimeObject * value)
	{
		___m_wrappedException_17 = value;
		Il2CppCodeGenWriteBarrier((&___m_wrappedException_17), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEWRAPPEDEXCEPTION_T2169265577_H
#ifndef STATEMACHINEATTRIBUTE_T4271320854_H
#define STATEMACHINEATTRIBUTE_T4271320854_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.StateMachineAttribute
struct  StateMachineAttribute_t4271320854  : public Attribute_t861562559
{
public:
	// System.Type System.Runtime.CompilerServices.StateMachineAttribute::<StateMachineType>k__BackingField
	Type_t * ___U3CStateMachineTypeU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CStateMachineTypeU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(StateMachineAttribute_t4271320854, ___U3CStateMachineTypeU3Ek__BackingField_0)); }
	inline Type_t * get_U3CStateMachineTypeU3Ek__BackingField_0() const { return ___U3CStateMachineTypeU3Ek__BackingField_0; }
	inline Type_t ** get_address_of_U3CStateMachineTypeU3Ek__BackingField_0() { return &___U3CStateMachineTypeU3Ek__BackingField_0; }
	inline void set_U3CStateMachineTypeU3Ek__BackingField_0(Type_t * value)
	{
		___U3CStateMachineTypeU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CStateMachineTypeU3Ek__BackingField_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STATEMACHINEATTRIBUTE_T4271320854_H
#ifndef STRINGFREEZINGATTRIBUTE_T3031362240_H
#define STRINGFREEZINGATTRIBUTE_T3031362240_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.StringFreezingAttribute
struct  StringFreezingAttribute_t3031362240  : public Attribute_t861562559
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRINGFREEZINGATTRIBUTE_T3031362240_H
#ifndef TASKAWAITER_T919683548_H
#define TASKAWAITER_T919683548_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.TaskAwaiter
struct  TaskAwaiter_t919683548 
{
public:
	// System.Threading.Tasks.Task System.Runtime.CompilerServices.TaskAwaiter::m_task
	Task_t3187275312 * ___m_task_0;

public:
	inline static int32_t get_offset_of_m_task_0() { return static_cast<int32_t>(offsetof(TaskAwaiter_t919683548, ___m_task_0)); }
	inline Task_t3187275312 * get_m_task_0() const { return ___m_task_0; }
	inline Task_t3187275312 ** get_address_of_m_task_0() { return &___m_task_0; }
	inline void set_m_task_0(Task_t3187275312 * value)
	{
		___m_task_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_task_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.TaskAwaiter
struct TaskAwaiter_t919683548_marshaled_pinvoke
{
	Task_t3187275312 * ___m_task_0;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.TaskAwaiter
struct TaskAwaiter_t919683548_marshaled_com
{
	Task_t3187275312 * ___m_task_0;
};
#endif // TASKAWAITER_T919683548_H
#ifndef TUPLEELEMENTNAMESATTRIBUTE_T2959704422_H
#define TUPLEELEMENTNAMESATTRIBUTE_T2959704422_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.TupleElementNamesAttribute
struct  TupleElementNamesAttribute_t2959704422  : public Attribute_t861562559
{
public:
	// System.String[] System.Runtime.CompilerServices.TupleElementNamesAttribute::_transformNames
	StringU5BU5D_t1281789340* ____transformNames_0;

public:
	inline static int32_t get_offset_of__transformNames_0() { return static_cast<int32_t>(offsetof(TupleElementNamesAttribute_t2959704422, ____transformNames_0)); }
	inline StringU5BU5D_t1281789340* get__transformNames_0() const { return ____transformNames_0; }
	inline StringU5BU5D_t1281789340** get_address_of__transformNames_0() { return &____transformNames_0; }
	inline void set__transformNames_0(StringU5BU5D_t1281789340* value)
	{
		____transformNames_0 = value;
		Il2CppCodeGenWriteBarrier((&____transformNames_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TUPLEELEMENTNAMESATTRIBUTE_T2959704422_H
#ifndef TYPEDEPENDENCYATTRIBUTE_T1161440450_H
#define TYPEDEPENDENCYATTRIBUTE_T1161440450_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.TypeDependencyAttribute
struct  TypeDependencyAttribute_t1161440450  : public Attribute_t861562559
{
public:
	// System.String System.Runtime.CompilerServices.TypeDependencyAttribute::typeName
	String_t* ___typeName_0;

public:
	inline static int32_t get_offset_of_typeName_0() { return static_cast<int32_t>(offsetof(TypeDependencyAttribute_t1161440450, ___typeName_0)); }
	inline String_t* get_typeName_0() const { return ___typeName_0; }
	inline String_t** get_address_of_typeName_0() { return &___typeName_0; }
	inline void set_typeName_0(String_t* value)
	{
		___typeName_0 = value;
		Il2CppCodeGenWriteBarrier((&___typeName_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPEDEPENDENCYATTRIBUTE_T1161440450_H
#ifndef TYPEFORWARDEDFROMATTRIBUTE_T339055186_H
#define TYPEFORWARDEDFROMATTRIBUTE_T339055186_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.TypeForwardedFromAttribute
struct  TypeForwardedFromAttribute_t339055186  : public Attribute_t861562559
{
public:
	// System.String System.Runtime.CompilerServices.TypeForwardedFromAttribute::assemblyFullName
	String_t* ___assemblyFullName_0;

public:
	inline static int32_t get_offset_of_assemblyFullName_0() { return static_cast<int32_t>(offsetof(TypeForwardedFromAttribute_t339055186, ___assemblyFullName_0)); }
	inline String_t* get_assemblyFullName_0() const { return ___assemblyFullName_0; }
	inline String_t** get_address_of_assemblyFullName_0() { return &___assemblyFullName_0; }
	inline void set_assemblyFullName_0(String_t* value)
	{
		___assemblyFullName_0 = value;
		Il2CppCodeGenWriteBarrier((&___assemblyFullName_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPEFORWARDEDFROMATTRIBUTE_T339055186_H
#ifndef UNSAFEVALUETYPEATTRIBUTE_T3766537972_H
#define UNSAFEVALUETYPEATTRIBUTE_T3766537972_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.UnsafeValueTypeAttribute
struct  UnsafeValueTypeAttribute_t3766537972  : public Attribute_t861562559
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNSAFEVALUETYPEATTRIBUTE_T3766537972_H
#ifndef FIRSTCHANCEEXCEPTIONEVENTARGS_T1310290895_H
#define FIRSTCHANCEEXCEPTIONEVENTARGS_T1310290895_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.ExceptionServices.FirstChanceExceptionEventArgs
struct  FirstChanceExceptionEventArgs_t1310290895  : public EventArgs_t3591816995
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FIRSTCHANCEEXCEPTIONEVENTARGS_T1310290895_H
#ifndef HANDLEPROCESSCORRUPTEDSTATEEXCEPTIONSATTRIBUTE_T261253444_H
#define HANDLEPROCESSCORRUPTEDSTATEEXCEPTIONSATTRIBUTE_T261253444_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.ExceptionServices.HandleProcessCorruptedStateExceptionsAttribute
struct  HandleProcessCorruptedStateExceptionsAttribute_t261253444  : public Attribute_t861562559
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HANDLEPROCESSCORRUPTEDSTATEEXCEPTIONSATTRIBUTE_T261253444_H
#ifndef COMCOMPATIBLEVERSIONATTRIBUTE_T1233303509_H
#define COMCOMPATIBLEVERSIONATTRIBUTE_T1233303509_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.ComCompatibleVersionAttribute
struct  ComCompatibleVersionAttribute_t1233303509  : public Attribute_t861562559
{
public:
	// System.Int32 System.Runtime.InteropServices.ComCompatibleVersionAttribute::_major
	int32_t ____major_0;
	// System.Int32 System.Runtime.InteropServices.ComCompatibleVersionAttribute::_minor
	int32_t ____minor_1;
	// System.Int32 System.Runtime.InteropServices.ComCompatibleVersionAttribute::_build
	int32_t ____build_2;
	// System.Int32 System.Runtime.InteropServices.ComCompatibleVersionAttribute::_revision
	int32_t ____revision_3;

public:
	inline static int32_t get_offset_of__major_0() { return static_cast<int32_t>(offsetof(ComCompatibleVersionAttribute_t1233303509, ____major_0)); }
	inline int32_t get__major_0() const { return ____major_0; }
	inline int32_t* get_address_of__major_0() { return &____major_0; }
	inline void set__major_0(int32_t value)
	{
		____major_0 = value;
	}

	inline static int32_t get_offset_of__minor_1() { return static_cast<int32_t>(offsetof(ComCompatibleVersionAttribute_t1233303509, ____minor_1)); }
	inline int32_t get__minor_1() const { return ____minor_1; }
	inline int32_t* get_address_of__minor_1() { return &____minor_1; }
	inline void set__minor_1(int32_t value)
	{
		____minor_1 = value;
	}

	inline static int32_t get_offset_of__build_2() { return static_cast<int32_t>(offsetof(ComCompatibleVersionAttribute_t1233303509, ____build_2)); }
	inline int32_t get__build_2() const { return ____build_2; }
	inline int32_t* get_address_of__build_2() { return &____build_2; }
	inline void set__build_2(int32_t value)
	{
		____build_2 = value;
	}

	inline static int32_t get_offset_of__revision_3() { return static_cast<int32_t>(offsetof(ComCompatibleVersionAttribute_t1233303509, ____revision_3)); }
	inline int32_t get__revision_3() const { return ____revision_3; }
	inline int32_t* get_address_of__revision_3() { return &____revision_3; }
	inline void set__revision_3(int32_t value)
	{
		____revision_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMCOMPATIBLEVERSIONATTRIBUTE_T1233303509_H
#ifndef COMDEFAULTINTERFACEATTRIBUTE_T2734585253_H
#define COMDEFAULTINTERFACEATTRIBUTE_T2734585253_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.ComDefaultInterfaceAttribute
struct  ComDefaultInterfaceAttribute_t2734585253  : public Attribute_t861562559
{
public:
	// System.Type System.Runtime.InteropServices.ComDefaultInterfaceAttribute::_val
	Type_t * ____val_0;

public:
	inline static int32_t get_offset_of__val_0() { return static_cast<int32_t>(offsetof(ComDefaultInterfaceAttribute_t2734585253, ____val_0)); }
	inline Type_t * get__val_0() const { return ____val_0; }
	inline Type_t ** get_address_of__val_0() { return &____val_0; }
	inline void set__val_0(Type_t * value)
	{
		____val_0 = value;
		Il2CppCodeGenWriteBarrier((&____val_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMDEFAULTINTERFACEATTRIBUTE_T2734585253_H
#ifndef COMIMPORTATTRIBUTE_T1295173782_H
#define COMIMPORTATTRIBUTE_T1295173782_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.ComImportAttribute
struct  ComImportAttribute_t1295173782  : public Attribute_t861562559
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMIMPORTATTRIBUTE_T1295173782_H
#ifndef COMVISIBLEATTRIBUTE_T1362837655_H
#define COMVISIBLEATTRIBUTE_T1362837655_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.ComVisibleAttribute
struct  ComVisibleAttribute_t1362837655  : public Attribute_t861562559
{
public:
	// System.Boolean System.Runtime.InteropServices.ComVisibleAttribute::_val
	bool ____val_0;

public:
	inline static int32_t get_offset_of__val_0() { return static_cast<int32_t>(offsetof(ComVisibleAttribute_t1362837655, ____val_0)); }
	inline bool get__val_0() const { return ____val_0; }
	inline bool* get_address_of__val_0() { return &____val_0; }
	inline void set__val_0(bool value)
	{
		____val_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMVISIBLEATTRIBUTE_T1362837655_H
#ifndef DISPIDATTRIBUTE_T491906453_H
#define DISPIDATTRIBUTE_T491906453_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.DispIdAttribute
struct  DispIdAttribute_t491906453  : public Attribute_t861562559
{
public:
	// System.Int32 System.Runtime.InteropServices.DispIdAttribute::_val
	int32_t ____val_0;

public:
	inline static int32_t get_offset_of__val_0() { return static_cast<int32_t>(offsetof(DispIdAttribute_t491906453, ____val_0)); }
	inline int32_t get__val_0() const { return ____val_0; }
	inline int32_t* get_address_of__val_0() { return &____val_0; }
	inline void set__val_0(int32_t value)
	{
		____val_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DISPIDATTRIBUTE_T491906453_H
#ifndef FIELDOFFSETATTRIBUTE_T3945874278_H
#define FIELDOFFSETATTRIBUTE_T3945874278_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.FieldOffsetAttribute
struct  FieldOffsetAttribute_t3945874278  : public Attribute_t861562559
{
public:
	// System.Int32 System.Runtime.InteropServices.FieldOffsetAttribute::_val
	int32_t ____val_0;

public:
	inline static int32_t get_offset_of__val_0() { return static_cast<int32_t>(offsetof(FieldOffsetAttribute_t3945874278, ____val_0)); }
	inline int32_t get__val_0() const { return ____val_0; }
	inline int32_t* get_address_of__val_0() { return &____val_0; }
	inline void set__val_0(int32_t value)
	{
		____val_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FIELDOFFSETATTRIBUTE_T3945874278_H
#ifndef GUIDATTRIBUTE_T1304051729_H
#define GUIDATTRIBUTE_T1304051729_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.GuidAttribute
struct  GuidAttribute_t1304051729  : public Attribute_t861562559
{
public:
	// System.String System.Runtime.InteropServices.GuidAttribute::_val
	String_t* ____val_0;

public:
	inline static int32_t get_offset_of__val_0() { return static_cast<int32_t>(offsetof(GuidAttribute_t1304051729, ____val_0)); }
	inline String_t* get__val_0() const { return ____val_0; }
	inline String_t** get_address_of__val_0() { return &____val_0; }
	inline void set__val_0(String_t* value)
	{
		____val_0 = value;
		Il2CppCodeGenWriteBarrier((&____val_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GUIDATTRIBUTE_T1304051729_H
#ifndef INATTRIBUTE_T4080363445_H
#define INATTRIBUTE_T4080363445_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.InAttribute
struct  InAttribute_t4080363445  : public Attribute_t861562559
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INATTRIBUTE_T4080363445_H
#ifndef OPTIONALATTRIBUTE_T2982857498_H
#define OPTIONALATTRIBUTE_T2982857498_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.OptionalAttribute
struct  OptionalAttribute_t2982857498  : public Attribute_t861562559
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OPTIONALATTRIBUTE_T2982857498_H
#ifndef OUTATTRIBUTE_T3399657568_H
#define OUTATTRIBUTE_T3399657568_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.OutAttribute
struct  OutAttribute_t3399657568  : public Attribute_t861562559
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OUTATTRIBUTE_T3399657568_H
#ifndef PRESERVESIGATTRIBUTE_T979468563_H
#define PRESERVESIGATTRIBUTE_T979468563_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.PreserveSigAttribute
struct  PreserveSigAttribute_t979468563  : public Attribute_t861562559
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PRESERVESIGATTRIBUTE_T979468563_H
#ifndef TYPELIBIMPORTCLASSATTRIBUTE_T3680361199_H
#define TYPELIBIMPORTCLASSATTRIBUTE_T3680361199_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.TypeLibImportClassAttribute
struct  TypeLibImportClassAttribute_t3680361199  : public Attribute_t861562559
{
public:
	// System.String System.Runtime.InteropServices.TypeLibImportClassAttribute::_importClassName
	String_t* ____importClassName_0;

public:
	inline static int32_t get_offset_of__importClassName_0() { return static_cast<int32_t>(offsetof(TypeLibImportClassAttribute_t3680361199, ____importClassName_0)); }
	inline String_t* get__importClassName_0() const { return ____importClassName_0; }
	inline String_t** get_address_of__importClassName_0() { return &____importClassName_0; }
	inline void set__importClassName_0(String_t* value)
	{
		____importClassName_0 = value;
		Il2CppCodeGenWriteBarrier((&____importClassName_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPELIBIMPORTCLASSATTRIBUTE_T3680361199_H
#ifndef MCMDICTIONARY_T204981990_H
#define MCMDICTIONARY_T204981990_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Messaging.MCMDictionary
struct  MCMDictionary_t204981990  : public MessageDictionary_t2102240473
{
public:

public:
};

struct MCMDictionary_t204981990_StaticFields
{
public:
	// System.String[] System.Runtime.Remoting.Messaging.MCMDictionary::InternalKeys
	StringU5BU5D_t1281789340* ___InternalKeys_4;

public:
	inline static int32_t get_offset_of_InternalKeys_4() { return static_cast<int32_t>(offsetof(MCMDictionary_t204981990_StaticFields, ___InternalKeys_4)); }
	inline StringU5BU5D_t1281789340* get_InternalKeys_4() const { return ___InternalKeys_4; }
	inline StringU5BU5D_t1281789340** get_address_of_InternalKeys_4() { return &___InternalKeys_4; }
	inline void set_InternalKeys_4(StringU5BU5D_t1281789340* value)
	{
		___InternalKeys_4 = value;
		Il2CppCodeGenWriteBarrier((&___InternalKeys_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MCMDICTIONARY_T204981990_H
#ifndef METHODRETURNDICTIONARY_T2551046119_H
#define METHODRETURNDICTIONARY_T2551046119_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Messaging.MethodReturnDictionary
struct  MethodReturnDictionary_t2551046119  : public MessageDictionary_t2102240473
{
public:

public:
};

struct MethodReturnDictionary_t2551046119_StaticFields
{
public:
	// System.String[] System.Runtime.Remoting.Messaging.MethodReturnDictionary::InternalReturnKeys
	StringU5BU5D_t1281789340* ___InternalReturnKeys_4;
	// System.String[] System.Runtime.Remoting.Messaging.MethodReturnDictionary::InternalExceptionKeys
	StringU5BU5D_t1281789340* ___InternalExceptionKeys_5;

public:
	inline static int32_t get_offset_of_InternalReturnKeys_4() { return static_cast<int32_t>(offsetof(MethodReturnDictionary_t2551046119_StaticFields, ___InternalReturnKeys_4)); }
	inline StringU5BU5D_t1281789340* get_InternalReturnKeys_4() const { return ___InternalReturnKeys_4; }
	inline StringU5BU5D_t1281789340** get_address_of_InternalReturnKeys_4() { return &___InternalReturnKeys_4; }
	inline void set_InternalReturnKeys_4(StringU5BU5D_t1281789340* value)
	{
		___InternalReturnKeys_4 = value;
		Il2CppCodeGenWriteBarrier((&___InternalReturnKeys_4), value);
	}

	inline static int32_t get_offset_of_InternalExceptionKeys_5() { return static_cast<int32_t>(offsetof(MethodReturnDictionary_t2551046119_StaticFields, ___InternalExceptionKeys_5)); }
	inline StringU5BU5D_t1281789340* get_InternalExceptionKeys_5() const { return ___InternalExceptionKeys_5; }
	inline StringU5BU5D_t1281789340** get_address_of_InternalExceptionKeys_5() { return &___InternalExceptionKeys_5; }
	inline void set_InternalExceptionKeys_5(StringU5BU5D_t1281789340* value)
	{
		___InternalExceptionKeys_5 = value;
		Il2CppCodeGenWriteBarrier((&___InternalExceptionKeys_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // METHODRETURNDICTIONARY_T2551046119_H
#ifndef ONEWAYATTRIBUTE_T936468379_H
#define ONEWAYATTRIBUTE_T936468379_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Messaging.OneWayAttribute
struct  OneWayAttribute_t936468379  : public Attribute_t861562559
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ONEWAYATTRIBUTE_T936468379_H
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
#ifndef ASYNCSTATEMACHINEATTRIBUTE_T3081685207_H
#define ASYNCSTATEMACHINEATTRIBUTE_T3081685207_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.AsyncStateMachineAttribute
struct  AsyncStateMachineAttribute_t3081685207  : public StateMachineAttribute_t4271320854
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASYNCSTATEMACHINEATTRIBUTE_T3081685207_H
#ifndef ASYNCTASKMETHODBUILDER_1_T642595793_H
#define ASYNCTASKMETHODBUILDER_1_T642595793_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Threading.Tasks.VoidTaskResult>
struct  AsyncTaskMethodBuilder_1_t642595793 
{
public:
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_coreState
	AsyncMethodBuilderCore_t2955600131  ___m_coreState_1;
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_task
	Task_1_t4022128754 * ___m_task_2;

public:
	inline static int32_t get_offset_of_m_coreState_1() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_t642595793, ___m_coreState_1)); }
	inline AsyncMethodBuilderCore_t2955600131  get_m_coreState_1() const { return ___m_coreState_1; }
	inline AsyncMethodBuilderCore_t2955600131 * get_address_of_m_coreState_1() { return &___m_coreState_1; }
	inline void set_m_coreState_1(AsyncMethodBuilderCore_t2955600131  value)
	{
		___m_coreState_1 = value;
	}

	inline static int32_t get_offset_of_m_task_2() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_t642595793, ___m_task_2)); }
	inline Task_1_t4022128754 * get_m_task_2() const { return ___m_task_2; }
	inline Task_1_t4022128754 ** get_address_of_m_task_2() { return &___m_task_2; }
	inline void set_m_task_2(Task_1_t4022128754 * value)
	{
		___m_task_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_task_2), value);
	}
};

struct AsyncTaskMethodBuilder_1_t642595793_StaticFields
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::s_defaultResultTask
	Task_1_t4022128754 * ___s_defaultResultTask_0;

public:
	inline static int32_t get_offset_of_s_defaultResultTask_0() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_t642595793_StaticFields, ___s_defaultResultTask_0)); }
	inline Task_1_t4022128754 * get_s_defaultResultTask_0() const { return ___s_defaultResultTask_0; }
	inline Task_1_t4022128754 ** get_address_of_s_defaultResultTask_0() { return &___s_defaultResultTask_0; }
	inline void set_s_defaultResultTask_0(Task_1_t4022128754 * value)
	{
		___s_defaultResultTask_0 = value;
		Il2CppCodeGenWriteBarrier((&___s_defaultResultTask_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASYNCTASKMETHODBUILDER_1_T642595793_H
#ifndef COMPILATIONRELAXATIONS_T3292409279_H
#define COMPILATIONRELAXATIONS_T3292409279_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.CompilationRelaxations
struct  CompilationRelaxations_t3292409279 
{
public:
	// System.Int32 System.Runtime.CompilerServices.CompilationRelaxations::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CompilationRelaxations_t3292409279, ___value___2)); }
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
#endif // COMPILATIONRELAXATIONS_T3292409279_H
#ifndef CONFIGUREDTASKAWAITABLE_T166429847_H
#define CONFIGUREDTASKAWAITABLE_T166429847_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.ConfiguredTaskAwaitable
struct  ConfiguredTaskAwaitable_t166429847 
{
public:
	// System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter System.Runtime.CompilerServices.ConfiguredTaskAwaitable::m_configuredTaskAwaiter
	ConfiguredTaskAwaiter_t555647845  ___m_configuredTaskAwaiter_0;

public:
	inline static int32_t get_offset_of_m_configuredTaskAwaiter_0() { return static_cast<int32_t>(offsetof(ConfiguredTaskAwaitable_t166429847, ___m_configuredTaskAwaiter_0)); }
	inline ConfiguredTaskAwaiter_t555647845  get_m_configuredTaskAwaiter_0() const { return ___m_configuredTaskAwaiter_0; }
	inline ConfiguredTaskAwaiter_t555647845 * get_address_of_m_configuredTaskAwaiter_0() { return &___m_configuredTaskAwaiter_0; }
	inline void set_m_configuredTaskAwaiter_0(ConfiguredTaskAwaiter_t555647845  value)
	{
		___m_configuredTaskAwaiter_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.ConfiguredTaskAwaitable
struct ConfiguredTaskAwaitable_t166429847_marshaled_pinvoke
{
	ConfiguredTaskAwaiter_t555647845_marshaled_pinvoke ___m_configuredTaskAwaiter_0;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.ConfiguredTaskAwaitable
struct ConfiguredTaskAwaitable_t166429847_marshaled_com
{
	ConfiguredTaskAwaiter_t555647845_marshaled_com ___m_configuredTaskAwaiter_0;
};
#endif // CONFIGUREDTASKAWAITABLE_T166429847_H
#ifndef DATETIMECONSTANTATTRIBUTE_T375130962_H
#define DATETIMECONSTANTATTRIBUTE_T375130962_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.DateTimeConstantAttribute
struct  DateTimeConstantAttribute_t375130962  : public CustomConstantAttribute_t1681301359
{
public:
	// System.DateTime System.Runtime.CompilerServices.DateTimeConstantAttribute::date
	DateTime_t3738529785  ___date_0;

public:
	inline static int32_t get_offset_of_date_0() { return static_cast<int32_t>(offsetof(DateTimeConstantAttribute_t375130962, ___date_0)); }
	inline DateTime_t3738529785  get_date_0() const { return ___date_0; }
	inline DateTime_t3738529785 * get_address_of_date_0() { return &___date_0; }
	inline void set_date_0(DateTime_t3738529785  value)
	{
		___date_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATETIMECONSTANTATTRIBUTE_T375130962_H
#ifndef DECIMALCONSTANTATTRIBUTE_T1976047975_H
#define DECIMALCONSTANTATTRIBUTE_T1976047975_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.DecimalConstantAttribute
struct  DecimalConstantAttribute_t1976047975  : public Attribute_t861562559
{
public:
	// System.Decimal System.Runtime.CompilerServices.DecimalConstantAttribute::dec
	Decimal_t2948259380  ___dec_0;

public:
	inline static int32_t get_offset_of_dec_0() { return static_cast<int32_t>(offsetof(DecimalConstantAttribute_t1976047975, ___dec_0)); }
	inline Decimal_t2948259380  get_dec_0() const { return ___dec_0; }
	inline Decimal_t2948259380 * get_address_of_dec_0() { return &___dec_0; }
	inline void set_dec_0(Decimal_t2948259380  value)
	{
		___dec_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DECIMALCONSTANTATTRIBUTE_T1976047975_H
#ifndef ITERATORSTATEMACHINEATTRIBUTE_T542750406_H
#define ITERATORSTATEMACHINEATTRIBUTE_T542750406_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.IteratorStateMachineAttribute
struct  IteratorStateMachineAttribute_t542750406  : public StateMachineAttribute_t4271320854
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ITERATORSTATEMACHINEATTRIBUTE_T542750406_H
#ifndef LOADHINT_T3743314490_H
#define LOADHINT_T3743314490_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.LoadHint
struct  LoadHint_t3743314490 
{
public:
	// System.Int32 System.Runtime.CompilerServices.LoadHint::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(LoadHint_t3743314490, ___value___2)); }
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
#endif // LOADHINT_T3743314490_H
#ifndef METHODIMPLOPTIONS_T4141524024_H
#define METHODIMPLOPTIONS_T4141524024_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.MethodImplOptions
struct  MethodImplOptions_t4141524024 
{
public:
	// System.Int32 System.Runtime.CompilerServices.MethodImplOptions::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(MethodImplOptions_t4141524024, ___value___2)); }
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
#endif // METHODIMPLOPTIONS_T4141524024_H
#ifndef CER_T573022029_H
#define CER_T573022029_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.ConstrainedExecution.Cer
struct  Cer_t573022029 
{
public:
	// System.Int32 System.Runtime.ConstrainedExecution.Cer::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Cer_t573022029, ___value___2)); }
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
#endif // CER_T573022029_H
#ifndef CONSISTENCY_T4071665526_H
#define CONSISTENCY_T4071665526_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.ConstrainedExecution.Consistency
struct  Consistency_t4071665526 
{
public:
	// System.Int32 System.Runtime.ConstrainedExecution.Consistency::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Consistency_t4071665526, ___value___2)); }
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
#endif // CONSISTENCY_T4071665526_H
#ifndef CALLINGCONVENTION_T1027624783_H
#define CALLINGCONVENTION_T1027624783_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.CallingConvention
struct  CallingConvention_t1027624783 
{
public:
	// System.Int32 System.Runtime.InteropServices.CallingConvention::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CallingConvention_t1027624783, ___value___2)); }
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
#endif // CALLINGCONVENTION_T1027624783_H
#ifndef CHARSET_T3391187264_H
#define CHARSET_T3391187264_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.CharSet
struct  CharSet_t3391187264 
{
public:
	// System.Int32 System.Runtime.InteropServices.CharSet::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CharSet_t3391187264, ___value___2)); }
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
#endif // CHARSET_T3391187264_H
#ifndef CLASSINTERFACETYPE_T4029497327_H
#define CLASSINTERFACETYPE_T4029497327_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.ClassInterfaceType
struct  ClassInterfaceType_t4029497327 
{
public:
	// System.Int32 System.Runtime.InteropServices.ClassInterfaceType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ClassInterfaceType_t4029497327, ___value___2)); }
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
#endif // CLASSINTERFACETYPE_T4029497327_H
#ifndef COMINTERFACETYPE_T2732813453_H
#define COMINTERFACETYPE_T2732813453_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.ComInterfaceType
struct  ComInterfaceType_t2732813453 
{
public:
	// System.Int32 System.Runtime.InteropServices.ComInterfaceType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ComInterfaceType_t2732813453, ___value___2)); }
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
#endif // COMINTERFACETYPE_T2732813453_H
#ifndef EXTERNALEXCEPTION_T3544951457_H
#define EXTERNALEXCEPTION_T3544951457_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.ExternalException
struct  ExternalException_t3544951457  : public SystemException_t176217640
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXTERNALEXCEPTION_T3544951457_H
#ifndef UNMANAGEDTYPE_T523127242_H
#define UNMANAGEDTYPE_T523127242_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.UnmanagedType
struct  UnmanagedType_t523127242 
{
public:
	// System.Int32 System.Runtime.InteropServices.UnmanagedType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(UnmanagedType_t523127242, ___value___2)); }
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
#endif // UNMANAGEDTYPE_T523127242_H
#ifndef VARENUM_T1077183404_H
#define VARENUM_T1077183404_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.VarEnum
struct  VarEnum_t1077183404 
{
public:
	// System.Int32 System.Runtime.InteropServices.VarEnum::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(VarEnum_t1077183404, ___value___2)); }
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
#endif // VARENUM_T1077183404_H
#ifndef CALLTYPE_T3372275391_H
#define CALLTYPE_T3372275391_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Messaging.CallType
struct  CallType_t3372275391 
{
public:
	// System.Int32 System.Runtime.Remoting.Messaging.CallType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CallType_t3372275391, ___value___2)); }
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
#endif // CALLTYPE_T3372275391_H
#ifndef ASYNCTASKMETHODBUILDER_T3536885450_H
#define ASYNCTASKMETHODBUILDER_T3536885450_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder
struct  AsyncTaskMethodBuilder_t3536885450 
{
public:
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Threading.Tasks.VoidTaskResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder::m_builder
	AsyncTaskMethodBuilder_1_t642595793  ___m_builder_1;

public:
	inline static int32_t get_offset_of_m_builder_1() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_t3536885450, ___m_builder_1)); }
	inline AsyncTaskMethodBuilder_1_t642595793  get_m_builder_1() const { return ___m_builder_1; }
	inline AsyncTaskMethodBuilder_1_t642595793 * get_address_of_m_builder_1() { return &___m_builder_1; }
	inline void set_m_builder_1(AsyncTaskMethodBuilder_1_t642595793  value)
	{
		___m_builder_1 = value;
	}
};

struct AsyncTaskMethodBuilder_t3536885450_StaticFields
{
public:
	// System.Threading.Tasks.Task`1<System.Threading.Tasks.VoidTaskResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder::s_cachedCompleted
	Task_1_t4022128754 * ___s_cachedCompleted_0;

public:
	inline static int32_t get_offset_of_s_cachedCompleted_0() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_t3536885450_StaticFields, ___s_cachedCompleted_0)); }
	inline Task_1_t4022128754 * get_s_cachedCompleted_0() const { return ___s_cachedCompleted_0; }
	inline Task_1_t4022128754 ** get_address_of_s_cachedCompleted_0() { return &___s_cachedCompleted_0; }
	inline void set_s_cachedCompleted_0(Task_1_t4022128754 * value)
	{
		___s_cachedCompleted_0 = value;
		Il2CppCodeGenWriteBarrier((&___s_cachedCompleted_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.AsyncTaskMethodBuilder
struct AsyncTaskMethodBuilder_t3536885450_marshaled_pinvoke
{
	AsyncTaskMethodBuilder_1_t642595793  ___m_builder_1;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.AsyncTaskMethodBuilder
struct AsyncTaskMethodBuilder_t3536885450_marshaled_com
{
	AsyncTaskMethodBuilder_1_t642595793  ___m_builder_1;
};
#endif // ASYNCTASKMETHODBUILDER_T3536885450_H
#ifndef DEFAULTDEPENDENCYATTRIBUTE_T548613883_H
#define DEFAULTDEPENDENCYATTRIBUTE_T548613883_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.DefaultDependencyAttribute
struct  DefaultDependencyAttribute_t548613883  : public Attribute_t861562559
{
public:
	// System.Runtime.CompilerServices.LoadHint System.Runtime.CompilerServices.DefaultDependencyAttribute::loadHint
	int32_t ___loadHint_0;

public:
	inline static int32_t get_offset_of_loadHint_0() { return static_cast<int32_t>(offsetof(DefaultDependencyAttribute_t548613883, ___loadHint_0)); }
	inline int32_t get_loadHint_0() const { return ___loadHint_0; }
	inline int32_t* get_address_of_loadHint_0() { return &___loadHint_0; }
	inline void set_loadHint_0(int32_t value)
	{
		___loadHint_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEFAULTDEPENDENCYATTRIBUTE_T548613883_H
#ifndef METHODIMPLATTRIBUTE_T4096584501_H
#define METHODIMPLATTRIBUTE_T4096584501_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.MethodImplAttribute
struct  MethodImplAttribute_t4096584501  : public Attribute_t861562559
{
public:
	// System.Runtime.CompilerServices.MethodImplOptions System.Runtime.CompilerServices.MethodImplAttribute::_val
	int32_t ____val_0;

public:
	inline static int32_t get_offset_of__val_0() { return static_cast<int32_t>(offsetof(MethodImplAttribute_t4096584501, ____val_0)); }
	inline int32_t get__val_0() const { return ____val_0; }
	inline int32_t* get_address_of__val_0() { return &____val_0; }
	inline void set__val_0(int32_t value)
	{
		____val_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // METHODIMPLATTRIBUTE_T4096584501_H
#ifndef RELIABILITYCONTRACTATTRIBUTE_T502331440_H
#define RELIABILITYCONTRACTATTRIBUTE_T502331440_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.ConstrainedExecution.ReliabilityContractAttribute
struct  ReliabilityContractAttribute_t502331440  : public Attribute_t861562559
{
public:
	// System.Runtime.ConstrainedExecution.Consistency System.Runtime.ConstrainedExecution.ReliabilityContractAttribute::_consistency
	int32_t ____consistency_0;
	// System.Runtime.ConstrainedExecution.Cer System.Runtime.ConstrainedExecution.ReliabilityContractAttribute::_cer
	int32_t ____cer_1;

public:
	inline static int32_t get_offset_of__consistency_0() { return static_cast<int32_t>(offsetof(ReliabilityContractAttribute_t502331440, ____consistency_0)); }
	inline int32_t get__consistency_0() const { return ____consistency_0; }
	inline int32_t* get_address_of__consistency_0() { return &____consistency_0; }
	inline void set__consistency_0(int32_t value)
	{
		____consistency_0 = value;
	}

	inline static int32_t get_offset_of__cer_1() { return static_cast<int32_t>(offsetof(ReliabilityContractAttribute_t502331440, ____cer_1)); }
	inline int32_t get__cer_1() const { return ____cer_1; }
	inline int32_t* get_address_of__cer_1() { return &____cer_1; }
	inline void set__cer_1(int32_t value)
	{
		____cer_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RELIABILITYCONTRACTATTRIBUTE_T502331440_H
#ifndef COMEXCEPTION_T1620828383_H
#define COMEXCEPTION_T1620828383_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.COMException
struct  COMException_t1620828383  : public ExternalException_t3544951457
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMEXCEPTION_T1620828383_H
#ifndef CLASSINTERFACEATTRIBUTE_T2274790349_H
#define CLASSINTERFACEATTRIBUTE_T2274790349_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.ClassInterfaceAttribute
struct  ClassInterfaceAttribute_t2274790349  : public Attribute_t861562559
{
public:
	// System.Runtime.InteropServices.ClassInterfaceType System.Runtime.InteropServices.ClassInterfaceAttribute::_val
	int32_t ____val_0;

public:
	inline static int32_t get_offset_of__val_0() { return static_cast<int32_t>(offsetof(ClassInterfaceAttribute_t2274790349, ____val_0)); }
	inline int32_t get__val_0() const { return ____val_0; }
	inline int32_t* get_address_of__val_0() { return &____val_0; }
	inline void set__val_0(int32_t value)
	{
		____val_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CLASSINTERFACEATTRIBUTE_T2274790349_H
#ifndef DLLIMPORTATTRIBUTE_T92573803_H
#define DLLIMPORTATTRIBUTE_T92573803_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.DllImportAttribute
struct  DllImportAttribute_t92573803  : public Attribute_t861562559
{
public:
	// System.String System.Runtime.InteropServices.DllImportAttribute::_val
	String_t* ____val_0;
	// System.String System.Runtime.InteropServices.DllImportAttribute::EntryPoint
	String_t* ___EntryPoint_1;
	// System.Runtime.InteropServices.CharSet System.Runtime.InteropServices.DllImportAttribute::CharSet
	int32_t ___CharSet_2;
	// System.Boolean System.Runtime.InteropServices.DllImportAttribute::SetLastError
	bool ___SetLastError_3;
	// System.Boolean System.Runtime.InteropServices.DllImportAttribute::ExactSpelling
	bool ___ExactSpelling_4;
	// System.Boolean System.Runtime.InteropServices.DllImportAttribute::PreserveSig
	bool ___PreserveSig_5;
	// System.Runtime.InteropServices.CallingConvention System.Runtime.InteropServices.DllImportAttribute::CallingConvention
	int32_t ___CallingConvention_6;
	// System.Boolean System.Runtime.InteropServices.DllImportAttribute::BestFitMapping
	bool ___BestFitMapping_7;
	// System.Boolean System.Runtime.InteropServices.DllImportAttribute::ThrowOnUnmappableChar
	bool ___ThrowOnUnmappableChar_8;

public:
	inline static int32_t get_offset_of__val_0() { return static_cast<int32_t>(offsetof(DllImportAttribute_t92573803, ____val_0)); }
	inline String_t* get__val_0() const { return ____val_0; }
	inline String_t** get_address_of__val_0() { return &____val_0; }
	inline void set__val_0(String_t* value)
	{
		____val_0 = value;
		Il2CppCodeGenWriteBarrier((&____val_0), value);
	}

	inline static int32_t get_offset_of_EntryPoint_1() { return static_cast<int32_t>(offsetof(DllImportAttribute_t92573803, ___EntryPoint_1)); }
	inline String_t* get_EntryPoint_1() const { return ___EntryPoint_1; }
	inline String_t** get_address_of_EntryPoint_1() { return &___EntryPoint_1; }
	inline void set_EntryPoint_1(String_t* value)
	{
		___EntryPoint_1 = value;
		Il2CppCodeGenWriteBarrier((&___EntryPoint_1), value);
	}

	inline static int32_t get_offset_of_CharSet_2() { return static_cast<int32_t>(offsetof(DllImportAttribute_t92573803, ___CharSet_2)); }
	inline int32_t get_CharSet_2() const { return ___CharSet_2; }
	inline int32_t* get_address_of_CharSet_2() { return &___CharSet_2; }
	inline void set_CharSet_2(int32_t value)
	{
		___CharSet_2 = value;
	}

	inline static int32_t get_offset_of_SetLastError_3() { return static_cast<int32_t>(offsetof(DllImportAttribute_t92573803, ___SetLastError_3)); }
	inline bool get_SetLastError_3() const { return ___SetLastError_3; }
	inline bool* get_address_of_SetLastError_3() { return &___SetLastError_3; }
	inline void set_SetLastError_3(bool value)
	{
		___SetLastError_3 = value;
	}

	inline static int32_t get_offset_of_ExactSpelling_4() { return static_cast<int32_t>(offsetof(DllImportAttribute_t92573803, ___ExactSpelling_4)); }
	inline bool get_ExactSpelling_4() const { return ___ExactSpelling_4; }
	inline bool* get_address_of_ExactSpelling_4() { return &___ExactSpelling_4; }
	inline void set_ExactSpelling_4(bool value)
	{
		___ExactSpelling_4 = value;
	}

	inline static int32_t get_offset_of_PreserveSig_5() { return static_cast<int32_t>(offsetof(DllImportAttribute_t92573803, ___PreserveSig_5)); }
	inline bool get_PreserveSig_5() const { return ___PreserveSig_5; }
	inline bool* get_address_of_PreserveSig_5() { return &___PreserveSig_5; }
	inline void set_PreserveSig_5(bool value)
	{
		___PreserveSig_5 = value;
	}

	inline static int32_t get_offset_of_CallingConvention_6() { return static_cast<int32_t>(offsetof(DllImportAttribute_t92573803, ___CallingConvention_6)); }
	inline int32_t get_CallingConvention_6() const { return ___CallingConvention_6; }
	inline int32_t* get_address_of_CallingConvention_6() { return &___CallingConvention_6; }
	inline void set_CallingConvention_6(int32_t value)
	{
		___CallingConvention_6 = value;
	}

	inline static int32_t get_offset_of_BestFitMapping_7() { return static_cast<int32_t>(offsetof(DllImportAttribute_t92573803, ___BestFitMapping_7)); }
	inline bool get_BestFitMapping_7() const { return ___BestFitMapping_7; }
	inline bool* get_address_of_BestFitMapping_7() { return &___BestFitMapping_7; }
	inline void set_BestFitMapping_7(bool value)
	{
		___BestFitMapping_7 = value;
	}

	inline static int32_t get_offset_of_ThrowOnUnmappableChar_8() { return static_cast<int32_t>(offsetof(DllImportAttribute_t92573803, ___ThrowOnUnmappableChar_8)); }
	inline bool get_ThrowOnUnmappableChar_8() const { return ___ThrowOnUnmappableChar_8; }
	inline bool* get_address_of_ThrowOnUnmappableChar_8() { return &___ThrowOnUnmappableChar_8; }
	inline void set_ThrowOnUnmappableChar_8(bool value)
	{
		___ThrowOnUnmappableChar_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DLLIMPORTATTRIBUTE_T92573803_H
#ifndef INTERFACETYPEATTRIBUTE_T633123336_H
#define INTERFACETYPEATTRIBUTE_T633123336_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.InterfaceTypeAttribute
struct  InterfaceTypeAttribute_t633123336  : public Attribute_t861562559
{
public:
	// System.Runtime.InteropServices.ComInterfaceType System.Runtime.InteropServices.InterfaceTypeAttribute::_val
	int32_t ____val_0;

public:
	inline static int32_t get_offset_of__val_0() { return static_cast<int32_t>(offsetof(InterfaceTypeAttribute_t633123336, ____val_0)); }
	inline int32_t get__val_0() const { return ____val_0; }
	inline int32_t* get_address_of__val_0() { return &____val_0; }
	inline void set__val_0(int32_t value)
	{
		____val_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTERFACETYPEATTRIBUTE_T633123336_H
#ifndef UNMANAGEDFUNCTIONPOINTERATTRIBUTE_T1554680451_H
#define UNMANAGEDFUNCTIONPOINTERATTRIBUTE_T1554680451_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.UnmanagedFunctionPointerAttribute
struct  UnmanagedFunctionPointerAttribute_t1554680451  : public Attribute_t861562559
{
public:
	// System.Runtime.InteropServices.CallingConvention System.Runtime.InteropServices.UnmanagedFunctionPointerAttribute::m_callingConvention
	int32_t ___m_callingConvention_0;
	// System.Runtime.InteropServices.CharSet System.Runtime.InteropServices.UnmanagedFunctionPointerAttribute::CharSet
	int32_t ___CharSet_1;
	// System.Boolean System.Runtime.InteropServices.UnmanagedFunctionPointerAttribute::BestFitMapping
	bool ___BestFitMapping_2;
	// System.Boolean System.Runtime.InteropServices.UnmanagedFunctionPointerAttribute::ThrowOnUnmappableChar
	bool ___ThrowOnUnmappableChar_3;
	// System.Boolean System.Runtime.InteropServices.UnmanagedFunctionPointerAttribute::SetLastError
	bool ___SetLastError_4;

public:
	inline static int32_t get_offset_of_m_callingConvention_0() { return static_cast<int32_t>(offsetof(UnmanagedFunctionPointerAttribute_t1554680451, ___m_callingConvention_0)); }
	inline int32_t get_m_callingConvention_0() const { return ___m_callingConvention_0; }
	inline int32_t* get_address_of_m_callingConvention_0() { return &___m_callingConvention_0; }
	inline void set_m_callingConvention_0(int32_t value)
	{
		___m_callingConvention_0 = value;
	}

	inline static int32_t get_offset_of_CharSet_1() { return static_cast<int32_t>(offsetof(UnmanagedFunctionPointerAttribute_t1554680451, ___CharSet_1)); }
	inline int32_t get_CharSet_1() const { return ___CharSet_1; }
	inline int32_t* get_address_of_CharSet_1() { return &___CharSet_1; }
	inline void set_CharSet_1(int32_t value)
	{
		___CharSet_1 = value;
	}

	inline static int32_t get_offset_of_BestFitMapping_2() { return static_cast<int32_t>(offsetof(UnmanagedFunctionPointerAttribute_t1554680451, ___BestFitMapping_2)); }
	inline bool get_BestFitMapping_2() const { return ___BestFitMapping_2; }
	inline bool* get_address_of_BestFitMapping_2() { return &___BestFitMapping_2; }
	inline void set_BestFitMapping_2(bool value)
	{
		___BestFitMapping_2 = value;
	}

	inline static int32_t get_offset_of_ThrowOnUnmappableChar_3() { return static_cast<int32_t>(offsetof(UnmanagedFunctionPointerAttribute_t1554680451, ___ThrowOnUnmappableChar_3)); }
	inline bool get_ThrowOnUnmappableChar_3() const { return ___ThrowOnUnmappableChar_3; }
	inline bool* get_address_of_ThrowOnUnmappableChar_3() { return &___ThrowOnUnmappableChar_3; }
	inline void set_ThrowOnUnmappableChar_3(bool value)
	{
		___ThrowOnUnmappableChar_3 = value;
	}

	inline static int32_t get_offset_of_SetLastError_4() { return static_cast<int32_t>(offsetof(UnmanagedFunctionPointerAttribute_t1554680451, ___SetLastError_4)); }
	inline bool get_SetLastError_4() const { return ___SetLastError_4; }
	inline bool* get_address_of_SetLastError_4() { return &___SetLastError_4; }
	inline void set_SetLastError_4(bool value)
	{
		___SetLastError_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNMANAGEDFUNCTIONPOINTERATTRIBUTE_T1554680451_H
#ifndef MONOMETHODMESSAGE_T2807636944_H
#define MONOMETHODMESSAGE_T2807636944_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Messaging.MonoMethodMessage
struct  MonoMethodMessage_t2807636944  : public RuntimeObject
{
public:
	// System.Reflection.MonoMethod System.Runtime.Remoting.Messaging.MonoMethodMessage::method
	MonoMethod_t * ___method_0;
	// System.Object[] System.Runtime.Remoting.Messaging.MonoMethodMessage::args
	ObjectU5BU5D_t2843939325* ___args_1;
	// System.String[] System.Runtime.Remoting.Messaging.MonoMethodMessage::names
	StringU5BU5D_t1281789340* ___names_2;
	// System.Byte[] System.Runtime.Remoting.Messaging.MonoMethodMessage::arg_types
	ByteU5BU5D_t4116647657* ___arg_types_3;
	// System.Runtime.Remoting.Messaging.LogicalCallContext System.Runtime.Remoting.Messaging.MonoMethodMessage::ctx
	LogicalCallContext_t3342013719 * ___ctx_4;
	// System.Object System.Runtime.Remoting.Messaging.MonoMethodMessage::rval
	RuntimeObject * ___rval_5;
	// System.Exception System.Runtime.Remoting.Messaging.MonoMethodMessage::exc
	Exception_t * ___exc_6;
	// System.Runtime.Remoting.Messaging.AsyncResult System.Runtime.Remoting.Messaging.MonoMethodMessage::asyncResult
	AsyncResult_t4194309572 * ___asyncResult_7;
	// System.Runtime.Remoting.Messaging.CallType System.Runtime.Remoting.Messaging.MonoMethodMessage::call_type
	int32_t ___call_type_8;
	// System.String System.Runtime.Remoting.Messaging.MonoMethodMessage::uri
	String_t* ___uri_9;
	// System.Runtime.Remoting.Messaging.MCMDictionary System.Runtime.Remoting.Messaging.MonoMethodMessage::properties
	MCMDictionary_t204981990 * ___properties_10;
	// System.Type[] System.Runtime.Remoting.Messaging.MonoMethodMessage::methodSignature
	TypeU5BU5D_t3940880105* ___methodSignature_11;
	// System.Runtime.Remoting.Identity System.Runtime.Remoting.Messaging.MonoMethodMessage::identity
	Identity_t1873279371 * ___identity_12;

public:
	inline static int32_t get_offset_of_method_0() { return static_cast<int32_t>(offsetof(MonoMethodMessage_t2807636944, ___method_0)); }
	inline MonoMethod_t * get_method_0() const { return ___method_0; }
	inline MonoMethod_t ** get_address_of_method_0() { return &___method_0; }
	inline void set_method_0(MonoMethod_t * value)
	{
		___method_0 = value;
		Il2CppCodeGenWriteBarrier((&___method_0), value);
	}

	inline static int32_t get_offset_of_args_1() { return static_cast<int32_t>(offsetof(MonoMethodMessage_t2807636944, ___args_1)); }
	inline ObjectU5BU5D_t2843939325* get_args_1() const { return ___args_1; }
	inline ObjectU5BU5D_t2843939325** get_address_of_args_1() { return &___args_1; }
	inline void set_args_1(ObjectU5BU5D_t2843939325* value)
	{
		___args_1 = value;
		Il2CppCodeGenWriteBarrier((&___args_1), value);
	}

	inline static int32_t get_offset_of_names_2() { return static_cast<int32_t>(offsetof(MonoMethodMessage_t2807636944, ___names_2)); }
	inline StringU5BU5D_t1281789340* get_names_2() const { return ___names_2; }
	inline StringU5BU5D_t1281789340** get_address_of_names_2() { return &___names_2; }
	inline void set_names_2(StringU5BU5D_t1281789340* value)
	{
		___names_2 = value;
		Il2CppCodeGenWriteBarrier((&___names_2), value);
	}

	inline static int32_t get_offset_of_arg_types_3() { return static_cast<int32_t>(offsetof(MonoMethodMessage_t2807636944, ___arg_types_3)); }
	inline ByteU5BU5D_t4116647657* get_arg_types_3() const { return ___arg_types_3; }
	inline ByteU5BU5D_t4116647657** get_address_of_arg_types_3() { return &___arg_types_3; }
	inline void set_arg_types_3(ByteU5BU5D_t4116647657* value)
	{
		___arg_types_3 = value;
		Il2CppCodeGenWriteBarrier((&___arg_types_3), value);
	}

	inline static int32_t get_offset_of_ctx_4() { return static_cast<int32_t>(offsetof(MonoMethodMessage_t2807636944, ___ctx_4)); }
	inline LogicalCallContext_t3342013719 * get_ctx_4() const { return ___ctx_4; }
	inline LogicalCallContext_t3342013719 ** get_address_of_ctx_4() { return &___ctx_4; }
	inline void set_ctx_4(LogicalCallContext_t3342013719 * value)
	{
		___ctx_4 = value;
		Il2CppCodeGenWriteBarrier((&___ctx_4), value);
	}

	inline static int32_t get_offset_of_rval_5() { return static_cast<int32_t>(offsetof(MonoMethodMessage_t2807636944, ___rval_5)); }
	inline RuntimeObject * get_rval_5() const { return ___rval_5; }
	inline RuntimeObject ** get_address_of_rval_5() { return &___rval_5; }
	inline void set_rval_5(RuntimeObject * value)
	{
		___rval_5 = value;
		Il2CppCodeGenWriteBarrier((&___rval_5), value);
	}

	inline static int32_t get_offset_of_exc_6() { return static_cast<int32_t>(offsetof(MonoMethodMessage_t2807636944, ___exc_6)); }
	inline Exception_t * get_exc_6() const { return ___exc_6; }
	inline Exception_t ** get_address_of_exc_6() { return &___exc_6; }
	inline void set_exc_6(Exception_t * value)
	{
		___exc_6 = value;
		Il2CppCodeGenWriteBarrier((&___exc_6), value);
	}

	inline static int32_t get_offset_of_asyncResult_7() { return static_cast<int32_t>(offsetof(MonoMethodMessage_t2807636944, ___asyncResult_7)); }
	inline AsyncResult_t4194309572 * get_asyncResult_7() const { return ___asyncResult_7; }
	inline AsyncResult_t4194309572 ** get_address_of_asyncResult_7() { return &___asyncResult_7; }
	inline void set_asyncResult_7(AsyncResult_t4194309572 * value)
	{
		___asyncResult_7 = value;
		Il2CppCodeGenWriteBarrier((&___asyncResult_7), value);
	}

	inline static int32_t get_offset_of_call_type_8() { return static_cast<int32_t>(offsetof(MonoMethodMessage_t2807636944, ___call_type_8)); }
	inline int32_t get_call_type_8() const { return ___call_type_8; }
	inline int32_t* get_address_of_call_type_8() { return &___call_type_8; }
	inline void set_call_type_8(int32_t value)
	{
		___call_type_8 = value;
	}

	inline static int32_t get_offset_of_uri_9() { return static_cast<int32_t>(offsetof(MonoMethodMessage_t2807636944, ___uri_9)); }
	inline String_t* get_uri_9() const { return ___uri_9; }
	inline String_t** get_address_of_uri_9() { return &___uri_9; }
	inline void set_uri_9(String_t* value)
	{
		___uri_9 = value;
		Il2CppCodeGenWriteBarrier((&___uri_9), value);
	}

	inline static int32_t get_offset_of_properties_10() { return static_cast<int32_t>(offsetof(MonoMethodMessage_t2807636944, ___properties_10)); }
	inline MCMDictionary_t204981990 * get_properties_10() const { return ___properties_10; }
	inline MCMDictionary_t204981990 ** get_address_of_properties_10() { return &___properties_10; }
	inline void set_properties_10(MCMDictionary_t204981990 * value)
	{
		___properties_10 = value;
		Il2CppCodeGenWriteBarrier((&___properties_10), value);
	}

	inline static int32_t get_offset_of_methodSignature_11() { return static_cast<int32_t>(offsetof(MonoMethodMessage_t2807636944, ___methodSignature_11)); }
	inline TypeU5BU5D_t3940880105* get_methodSignature_11() const { return ___methodSignature_11; }
	inline TypeU5BU5D_t3940880105** get_address_of_methodSignature_11() { return &___methodSignature_11; }
	inline void set_methodSignature_11(TypeU5BU5D_t3940880105* value)
	{
		___methodSignature_11 = value;
		Il2CppCodeGenWriteBarrier((&___methodSignature_11), value);
	}

	inline static int32_t get_offset_of_identity_12() { return static_cast<int32_t>(offsetof(MonoMethodMessage_t2807636944, ___identity_12)); }
	inline Identity_t1873279371 * get_identity_12() const { return ___identity_12; }
	inline Identity_t1873279371 ** get_address_of_identity_12() { return &___identity_12; }
	inline void set_identity_12(Identity_t1873279371 * value)
	{
		___identity_12 = value;
		Il2CppCodeGenWriteBarrier((&___identity_12), value);
	}
};

struct MonoMethodMessage_t2807636944_StaticFields
{
public:
	// System.String System.Runtime.Remoting.Messaging.MonoMethodMessage::CallContextKey
	String_t* ___CallContextKey_13;
	// System.String System.Runtime.Remoting.Messaging.MonoMethodMessage::UriKey
	String_t* ___UriKey_14;

public:
	inline static int32_t get_offset_of_CallContextKey_13() { return static_cast<int32_t>(offsetof(MonoMethodMessage_t2807636944_StaticFields, ___CallContextKey_13)); }
	inline String_t* get_CallContextKey_13() const { return ___CallContextKey_13; }
	inline String_t** get_address_of_CallContextKey_13() { return &___CallContextKey_13; }
	inline void set_CallContextKey_13(String_t* value)
	{
		___CallContextKey_13 = value;
		Il2CppCodeGenWriteBarrier((&___CallContextKey_13), value);
	}

	inline static int32_t get_offset_of_UriKey_14() { return static_cast<int32_t>(offsetof(MonoMethodMessage_t2807636944_StaticFields, ___UriKey_14)); }
	inline String_t* get_UriKey_14() const { return ___UriKey_14; }
	inline String_t** get_address_of_UriKey_14() { return &___UriKey_14; }
	inline void set_UriKey_14(String_t* value)
	{
		___UriKey_14 = value;
		Il2CppCodeGenWriteBarrier((&___UriKey_14), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Runtime.Remoting.Messaging.MonoMethodMessage
struct MonoMethodMessage_t2807636944_marshaled_pinvoke
{
	MonoMethod_t * ___method_0;
	ObjectU5BU5D_t2843939325* ___args_1;
	char** ___names_2;
	uint8_t* ___arg_types_3;
	LogicalCallContext_t3342013719 * ___ctx_4;
	Il2CppIUnknown* ___rval_5;
	Exception_t_marshaled_pinvoke* ___exc_6;
	AsyncResult_t4194309572_marshaled_pinvoke* ___asyncResult_7;
	int32_t ___call_type_8;
	char* ___uri_9;
	MCMDictionary_t204981990 * ___properties_10;
	TypeU5BU5D_t3940880105* ___methodSignature_11;
	Identity_t1873279371 * ___identity_12;
};
// Native definition for COM marshalling of System.Runtime.Remoting.Messaging.MonoMethodMessage
struct MonoMethodMessage_t2807636944_marshaled_com
{
	MonoMethod_t * ___method_0;
	ObjectU5BU5D_t2843939325* ___args_1;
	Il2CppChar** ___names_2;
	uint8_t* ___arg_types_3;
	LogicalCallContext_t3342013719 * ___ctx_4;
	Il2CppIUnknown* ___rval_5;
	Exception_t_marshaled_com* ___exc_6;
	AsyncResult_t4194309572_marshaled_com* ___asyncResult_7;
	int32_t ___call_type_8;
	Il2CppChar* ___uri_9;
	MCMDictionary_t204981990 * ___properties_10;
	TypeU5BU5D_t3940880105* ___methodSignature_11;
	Identity_t1873279371 * ___identity_12;
};
#endif // MONOMETHODMESSAGE_T2807636944_H





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1300 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1301 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1302 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1303 = { sizeof (MethodCall_t861078140), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1303[11] = 
{
	MethodCall_t861078140::get_offset_of__uri_0(),
	MethodCall_t861078140::get_offset_of__typeName_1(),
	MethodCall_t861078140::get_offset_of__methodName_2(),
	MethodCall_t861078140::get_offset_of__args_3(),
	MethodCall_t861078140::get_offset_of__methodSignature_4(),
	MethodCall_t861078140::get_offset_of__methodBase_5(),
	MethodCall_t861078140::get_offset_of__callContext_6(),
	MethodCall_t861078140::get_offset_of__targetIdentity_7(),
	MethodCall_t861078140::get_offset_of__genericArguments_8(),
	MethodCall_t861078140::get_offset_of_ExternalProperties_9(),
	MethodCall_t861078140::get_offset_of_InternalProperties_10(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1304 = { sizeof (MCMDictionary_t204981990), -1, sizeof(MCMDictionary_t204981990_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1304[1] = 
{
	MCMDictionary_t204981990_StaticFields::get_offset_of_InternalKeys_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1305 = { sizeof (MessageDictionary_t2102240473), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1305[4] = 
{
	MessageDictionary_t2102240473::get_offset_of__internalProperties_0(),
	MessageDictionary_t2102240473::get_offset_of__message_1(),
	MessageDictionary_t2102240473::get_offset_of__methodKeys_2(),
	MessageDictionary_t2102240473::get_offset_of__ownProperties_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1306 = { sizeof (DictionaryEnumerator_t4026294478), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1306[3] = 
{
	DictionaryEnumerator_t4026294478::get_offset_of__methodDictionary_0(),
	DictionaryEnumerator_t4026294478::get_offset_of__hashtableEnum_1(),
	DictionaryEnumerator_t4026294478::get_offset_of__posMethod_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1307 = { sizeof (MethodResponse_t2147511201), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1307[15] = 
{
	MethodResponse_t2147511201::get_offset_of__methodName_0(),
	MethodResponse_t2147511201::get_offset_of__uri_1(),
	MethodResponse_t2147511201::get_offset_of__typeName_2(),
	MethodResponse_t2147511201::get_offset_of__methodBase_3(),
	MethodResponse_t2147511201::get_offset_of__returnValue_4(),
	MethodResponse_t2147511201::get_offset_of__exception_5(),
	MethodResponse_t2147511201::get_offset_of__methodSignature_6(),
	MethodResponse_t2147511201::get_offset_of__inArgInfo_7(),
	MethodResponse_t2147511201::get_offset_of__args_8(),
	MethodResponse_t2147511201::get_offset_of__outArgs_9(),
	MethodResponse_t2147511201::get_offset_of__callMsg_10(),
	MethodResponse_t2147511201::get_offset_of__callContext_11(),
	MethodResponse_t2147511201::get_offset_of__targetIdentity_12(),
	MethodResponse_t2147511201::get_offset_of_ExternalProperties_13(),
	MethodResponse_t2147511201::get_offset_of_InternalProperties_14(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1308 = { sizeof (MethodReturnDictionary_t2551046119), -1, sizeof(MethodReturnDictionary_t2551046119_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1308[2] = 
{
	MethodReturnDictionary_t2551046119_StaticFields::get_offset_of_InternalReturnKeys_4(),
	MethodReturnDictionary_t2551046119_StaticFields::get_offset_of_InternalExceptionKeys_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1309 = { sizeof (MonoMethodMessage_t2807636944), -1, sizeof(MonoMethodMessage_t2807636944_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1309[15] = 
{
	MonoMethodMessage_t2807636944::get_offset_of_method_0(),
	MonoMethodMessage_t2807636944::get_offset_of_args_1(),
	MonoMethodMessage_t2807636944::get_offset_of_names_2(),
	MonoMethodMessage_t2807636944::get_offset_of_arg_types_3(),
	MonoMethodMessage_t2807636944::get_offset_of_ctx_4(),
	MonoMethodMessage_t2807636944::get_offset_of_rval_5(),
	MonoMethodMessage_t2807636944::get_offset_of_exc_6(),
	MonoMethodMessage_t2807636944::get_offset_of_asyncResult_7(),
	MonoMethodMessage_t2807636944::get_offset_of_call_type_8(),
	MonoMethodMessage_t2807636944::get_offset_of_uri_9(),
	MonoMethodMessage_t2807636944::get_offset_of_properties_10(),
	MonoMethodMessage_t2807636944::get_offset_of_methodSignature_11(),
	MonoMethodMessage_t2807636944::get_offset_of_identity_12(),
	MonoMethodMessage_t2807636944_StaticFields::get_offset_of_CallContextKey_13(),
	MonoMethodMessage_t2807636944_StaticFields::get_offset_of_UriKey_14(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1310 = { sizeof (CallType_t3372275391)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1310[5] = 
{
	CallType_t3372275391::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1311 = { sizeof (OneWayAttribute_t936468379), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1312 = { sizeof (RemotingSurrogate_t2834579653), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1313 = { sizeof (ObjRefSurrogate_t3860276170), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1314 = { sizeof (RemotingSurrogateSelector_t2472351973), -1, sizeof(RemotingSurrogateSelector_t2472351973_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1314[4] = 
{
	RemotingSurrogateSelector_t2472351973_StaticFields::get_offset_of_s_cachedTypeObjRef_0(),
	RemotingSurrogateSelector_t2472351973_StaticFields::get_offset_of__objRefSurrogate_1(),
	RemotingSurrogateSelector_t2472351973_StaticFields::get_offset_of__objRemotingSurrogate_2(),
	RemotingSurrogateSelector_t2472351973::get_offset_of__next_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1315 = { sizeof (ReturnMessage_t1376985608), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1315[13] = 
{
	ReturnMessage_t1376985608::get_offset_of__outArgs_0(),
	ReturnMessage_t1376985608::get_offset_of__args_1(),
	ReturnMessage_t1376985608::get_offset_of__callCtx_2(),
	ReturnMessage_t1376985608::get_offset_of__returnValue_3(),
	ReturnMessage_t1376985608::get_offset_of__uri_4(),
	ReturnMessage_t1376985608::get_offset_of__exception_5(),
	ReturnMessage_t1376985608::get_offset_of__methodBase_6(),
	ReturnMessage_t1376985608::get_offset_of__methodName_7(),
	ReturnMessage_t1376985608::get_offset_of__methodSignature_8(),
	ReturnMessage_t1376985608::get_offset_of__typeName_9(),
	ReturnMessage_t1376985608::get_offset_of__properties_10(),
	ReturnMessage_t1376985608::get_offset_of__targetIdentity_11(),
	ReturnMessage_t1376985608::get_offset_of__inArgInfo_12(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1316 = { sizeof (ServerContextTerminatorSink_t16296004), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1317 = { sizeof (ServerObjectTerminatorSink_t4187339465), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1317[1] = 
{
	ServerObjectTerminatorSink_t4187339465::get_offset_of__nextSink_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1318 = { sizeof (ServerObjectReplySink_t2966042986), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1318[2] = 
{
	ServerObjectReplySink_t2966042986::get_offset_of__replySink_0(),
	ServerObjectReplySink_t2966042986::get_offset_of__identity_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1319 = { sizeof (StackBuilderSink_t883411942), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1319[2] = 
{
	StackBuilderSink_t883411942::get_offset_of__target_0(),
	StackBuilderSink_t883411942::get_offset_of__rp_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1320 = { sizeof (HandleProcessCorruptedStateExceptionsAttribute_t261253444), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1321 = { sizeof (FirstChanceExceptionEventArgs_t1310290895), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1322 = { sizeof (ExceptionDispatchInfo_t3750997369), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1322[2] = 
{
	ExceptionDispatchInfo_t3750997369::get_offset_of_m_Exception_0(),
	ExceptionDispatchInfo_t3750997369::get_offset_of_m_stackTrace_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1323 = { sizeof (CriticalFinalizerObject_t701527852), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1324 = { sizeof (Consistency_t4071665526)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1324[5] = 
{
	Consistency_t4071665526::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1325 = { sizeof (Cer_t573022029)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1325[4] = 
{
	Cer_t573022029::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1326 = { sizeof (ReliabilityContractAttribute_t502331440), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1326[2] = 
{
	ReliabilityContractAttribute_t502331440::get_offset_of__consistency_0(),
	ReliabilityContractAttribute_t502331440::get_offset_of__cer_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1327 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1328 = { sizeof (TupleElementNamesAttribute_t2959704422), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1328[1] = 
{
	TupleElementNamesAttribute_t2959704422::get_offset_of__transformNames_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1329 = { sizeof (AsyncTaskMethodBuilder_t3536885450)+ sizeof (RuntimeObject), -1, sizeof(AsyncTaskMethodBuilder_t3536885450_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1329[2] = 
{
	AsyncTaskMethodBuilder_t3536885450_StaticFields::get_offset_of_s_cachedCompleted_0(),
	AsyncTaskMethodBuilder_t3536885450::get_offset_of_m_builder_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1330 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable1330[3] = 
{
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1331 = { sizeof (AsyncTaskCache_t1993881178), -1, sizeof(AsyncTaskCache_t1993881178_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1331[3] = 
{
	AsyncTaskCache_t1993881178_StaticFields::get_offset_of_TrueTask_0(),
	AsyncTaskCache_t1993881178_StaticFields::get_offset_of_FalseTask_1(),
	AsyncTaskCache_t1993881178_StaticFields::get_offset_of_Int32Tasks_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1332 = { sizeof (AsyncMethodBuilderCore_t2955600131)+ sizeof (RuntimeObject), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1332[2] = 
{
	AsyncMethodBuilderCore_t2955600131::get_offset_of_m_stateMachine_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	AsyncMethodBuilderCore_t2955600131::get_offset_of_m_defaultContextAction_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1333 = { sizeof (MoveNextRunner_t4042132640), -1, sizeof(MoveNextRunner_t4042132640_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1333[3] = 
{
	MoveNextRunner_t4042132640::get_offset_of_m_context_0(),
	MoveNextRunner_t4042132640::get_offset_of_m_stateMachine_1(),
	MoveNextRunner_t4042132640_StaticFields::get_offset_of_s_invokeMoveNext_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1334 = { sizeof (ContinuationWrapper_t392291031), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1334[3] = 
{
	ContinuationWrapper_t392291031::get_offset_of_m_continuation_0(),
	ContinuationWrapper_t392291031::get_offset_of_m_invokeAction_1(),
	ContinuationWrapper_t392291031::get_offset_of_m_innerTask_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1335 = { sizeof (U3CU3Ec__DisplayClass4_0_t3836450705), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1335[2] = 
{
	U3CU3Ec__DisplayClass4_0_t3836450705::get_offset_of_innerTask_0(),
	U3CU3Ec__DisplayClass4_0_t3836450705::get_offset_of_continuation_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1336 = { sizeof (U3CU3Ec_t3555681664), -1, sizeof(U3CU3Ec_t3555681664_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1336[3] = 
{
	U3CU3Ec_t3555681664_StaticFields::get_offset_of_U3CU3E9_0(),
	U3CU3Ec_t3555681664_StaticFields::get_offset_of_U3CU3E9__6_0_1(),
	U3CU3Ec_t3555681664_StaticFields::get_offset_of_U3CU3E9__6_1_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1337 = { sizeof (AsyncStateMachineAttribute_t3081685207), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1338 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1339 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1340 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1341 = { sizeof (IteratorStateMachineAttribute_t542750406), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1342 = { sizeof (RuntimeCompatibilityAttribute_t1169614002), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1342[1] = 
{
	RuntimeCompatibilityAttribute_t1169614002::get_offset_of_m_wrapNonExceptionThrows_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1343 = { sizeof (RuntimeWrappedException_t2169265577), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1343[1] = 
{
	RuntimeWrappedException_t2169265577::get_offset_of_m_wrappedException_17(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1344 = { sizeof (StateMachineAttribute_t4271320854), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1344[1] = 
{
	StateMachineAttribute_t4271320854::get_offset_of_U3CStateMachineTypeU3Ek__BackingField_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1345 = { sizeof (TaskAwaiter_t919683548)+ sizeof (RuntimeObject), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1345[1] = 
{
	TaskAwaiter_t919683548::get_offset_of_m_task_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1346 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable1346[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1347 = { sizeof (ConfiguredTaskAwaitable_t166429847)+ sizeof (RuntimeObject), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1347[1] = 
{
	ConfiguredTaskAwaitable_t166429847::get_offset_of_m_configuredTaskAwaiter_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1348 = { sizeof (ConfiguredTaskAwaiter_t555647845)+ sizeof (RuntimeObject), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1348[2] = 
{
	ConfiguredTaskAwaiter_t555647845::get_offset_of_m_task_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ConfiguredTaskAwaiter_t555647845::get_offset_of_m_continueOnCapturedContext_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1349 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable1349[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1350 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable1350[2] = 
{
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1351 = { sizeof (TypeForwardedFromAttribute_t339055186), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1351[1] = 
{
	TypeForwardedFromAttribute_t339055186::get_offset_of_assemblyFullName_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1352 = { sizeof (LoadHint_t3743314490)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1352[4] = 
{
	LoadHint_t3743314490::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1353 = { sizeof (DefaultDependencyAttribute_t548613883), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1353[1] = 
{
	DefaultDependencyAttribute_t548613883::get_offset_of_loadHint_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1354 = { sizeof (CompilationRelaxations_t3292409279)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1354[2] = 
{
	CompilationRelaxations_t3292409279::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1355 = { sizeof (CompilationRelaxationsAttribute_t1721442111), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1355[1] = 
{
	CompilationRelaxationsAttribute_t1721442111::get_offset_of_m_relaxations_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1356 = { sizeof (CompilerGeneratedAttribute_t23527886), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1357 = { sizeof (CustomConstantAttribute_t1681301359), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1358 = { sizeof (DateTimeConstantAttribute_t375130962), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1358[1] = 
{
	DateTimeConstantAttribute_t375130962::get_offset_of_date_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1359 = { sizeof (DecimalConstantAttribute_t1976047975), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1359[1] = 
{
	DecimalConstantAttribute_t1976047975::get_offset_of_dec_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1360 = { sizeof (ExtensionAttribute_t1723066603), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1361 = { sizeof (FixedBufferAttribute_t3759792648), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1361[2] = 
{
	FixedBufferAttribute_t3759792648::get_offset_of_elementType_0(),
	FixedBufferAttribute_t3759792648::get_offset_of_length_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1362 = { sizeof (InternalsVisibleToAttribute_t922893634), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1362[2] = 
{
	InternalsVisibleToAttribute_t922893634::get_offset_of__assemblyName_0(),
	InternalsVisibleToAttribute_t922893634::get_offset_of__allInternalsVisible_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1363 = { sizeof (FriendAccessAllowedAttribute_t3640740047), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1364 = { sizeof (IsVolatile_t2097058663), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1365 = { sizeof (MethodImplOptions_t4141524024)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1365[9] = 
{
	MethodImplOptions_t4141524024::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1366 = { sizeof (MethodImplAttribute_t4096584501), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1366[1] = 
{
	MethodImplAttribute_t4096584501::get_offset_of__val_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1367 = { sizeof (TypeDependencyAttribute_t1161440450), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1367[1] = 
{
	TypeDependencyAttribute_t1161440450::get_offset_of_typeName_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1368 = { sizeof (UnsafeValueTypeAttribute_t3766537972), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1369 = { sizeof (StringFreezingAttribute_t3031362240), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1370 = { sizeof (JitHelpers_t1212693971), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1371 = { sizeof (Ephemeron_t1602596362)+ sizeof (RuntimeObject), sizeof(Ephemeron_t1602596362_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable1371[2] = 
{
	Ephemeron_t1602596362::get_offset_of_key_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Ephemeron_t1602596362::get_offset_of_value_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1372 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable1372[3] = 
{
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1373 = { sizeof (RuntimeHelpers_t1447613860), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1374 = { sizeof (UnmanagedFunctionPointerAttribute_t1554680451), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1374[5] = 
{
	UnmanagedFunctionPointerAttribute_t1554680451::get_offset_of_m_callingConvention_0(),
	UnmanagedFunctionPointerAttribute_t1554680451::get_offset_of_CharSet_1(),
	UnmanagedFunctionPointerAttribute_t1554680451::get_offset_of_BestFitMapping_2(),
	UnmanagedFunctionPointerAttribute_t1554680451::get_offset_of_ThrowOnUnmappableChar_3(),
	UnmanagedFunctionPointerAttribute_t1554680451::get_offset_of_SetLastError_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1375 = { sizeof (DispIdAttribute_t491906453), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1375[1] = 
{
	DispIdAttribute_t491906453::get_offset_of__val_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1376 = { sizeof (ComInterfaceType_t2732813453)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1376[5] = 
{
	ComInterfaceType_t2732813453::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1377 = { sizeof (InterfaceTypeAttribute_t633123336), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1377[1] = 
{
	InterfaceTypeAttribute_t633123336::get_offset_of__val_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1378 = { sizeof (ComDefaultInterfaceAttribute_t2734585253), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1378[1] = 
{
	ComDefaultInterfaceAttribute_t2734585253::get_offset_of__val_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1379 = { sizeof (ClassInterfaceType_t4029497327)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1379[4] = 
{
	ClassInterfaceType_t4029497327::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1380 = { sizeof (ClassInterfaceAttribute_t2274790349), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1380[1] = 
{
	ClassInterfaceAttribute_t2274790349::get_offset_of__val_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1381 = { sizeof (ComVisibleAttribute_t1362837655), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1381[1] = 
{
	ComVisibleAttribute_t1362837655::get_offset_of__val_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1382 = { sizeof (TypeLibImportClassAttribute_t3680361199), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1382[1] = 
{
	TypeLibImportClassAttribute_t3680361199::get_offset_of__importClassName_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1383 = { sizeof (VarEnum_t1077183404)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1383[45] = 
{
	VarEnum_t1077183404::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1384 = { sizeof (UnmanagedType_t523127242)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1384[39] = 
{
	UnmanagedType_t523127242::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1385 = { sizeof (ComImportAttribute_t1295173782), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1386 = { sizeof (GuidAttribute_t1304051729), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1386[1] = 
{
	GuidAttribute_t1304051729::get_offset_of__val_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1387 = { sizeof (PreserveSigAttribute_t979468563), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1388 = { sizeof (InAttribute_t4080363445), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1389 = { sizeof (OutAttribute_t3399657568), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1390 = { sizeof (OptionalAttribute_t2982857498), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1391 = { sizeof (DllImportAttribute_t92573803), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1391[9] = 
{
	DllImportAttribute_t92573803::get_offset_of__val_0(),
	DllImportAttribute_t92573803::get_offset_of_EntryPoint_1(),
	DllImportAttribute_t92573803::get_offset_of_CharSet_2(),
	DllImportAttribute_t92573803::get_offset_of_SetLastError_3(),
	DllImportAttribute_t92573803::get_offset_of_ExactSpelling_4(),
	DllImportAttribute_t92573803::get_offset_of_PreserveSig_5(),
	DllImportAttribute_t92573803::get_offset_of_CallingConvention_6(),
	DllImportAttribute_t92573803::get_offset_of_BestFitMapping_7(),
	DllImportAttribute_t92573803::get_offset_of_ThrowOnUnmappableChar_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1392 = { sizeof (FieldOffsetAttribute_t3945874278), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1392[1] = 
{
	FieldOffsetAttribute_t3945874278::get_offset_of__val_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1393 = { sizeof (ComCompatibleVersionAttribute_t1233303509), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1393[4] = 
{
	ComCompatibleVersionAttribute_t1233303509::get_offset_of__major_0(),
	ComCompatibleVersionAttribute_t1233303509::get_offset_of__minor_1(),
	ComCompatibleVersionAttribute_t1233303509::get_offset_of__build_2(),
	ComCompatibleVersionAttribute_t1233303509::get_offset_of__revision_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1394 = { sizeof (CallingConvention_t1027624783)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1394[6] = 
{
	CallingConvention_t1027624783::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1395 = { sizeof (CharSet_t3391187264)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1395[5] = 
{
	CharSet_t3391187264::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1396 = { sizeof (COMException_t1620828383), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1397 = { sizeof (ErrorWrapper_t1772885312), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1397[1] = 
{
	ErrorWrapper_t1772885312::get_offset_of_m_ErrorCode_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1398 = { sizeof (ExternalException_t3544951457), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1399 = { 0, -1, 0, 0 };
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // Modified by PostBuild.cs
