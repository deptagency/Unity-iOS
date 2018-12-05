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


// Mono.Net.Security.MonoTlsStream
struct MonoTlsStream_t1980138907;
// Mono.Security.Interface.IMonoSslStream
struct IMonoSslStream_t1819859871;
// Mono.Security.Interface.MonoTlsProvider
struct MonoTlsProvider_t3152003291;
// System.AsyncCallback
struct AsyncCallback_t3962456242;
// System.Byte[]
struct ByteU5BU5D_t4116647657;
// System.Char[]
struct CharU5BU5D_t3528271667;
// System.Collections.ArrayList
struct ArrayList_t2718874744;
// System.Collections.Generic.Dictionary`2<System.Int32,System.String>
struct Dictionary_2_t736164020;
// System.Collections.Generic.Dictionary`2<System.String,System.Net.WebConnectionGroup>
struct Dictionary_2_t1497636287;
// System.Collections.Generic.Dictionary`2<System.Threading.Thread,System.Diagnostics.StackTrace>
struct Dictionary_2_t922677896;
// System.Collections.Generic.IList`1<System.ArraySegment`1<System.Byte>>
struct IList_1_t2098880770;
// System.Collections.Generic.LinkedList`1<System.Net.WebConnectionGroup/ConnectionState>
struct LinkedList_1_t491222822;
// System.Collections.Generic.List`1<System.Net.IPAddress>
struct List_1_t1713852332;
// System.Collections.Generic.List`1<System.Threading.Thread>
struct List_1_t3772910811;
// System.Collections.IDictionary
struct IDictionary_t1363984059;
// System.Collections.ObjectModel.Collection`1<System.Net.IPAddress>
struct Collection_1_t3481100804;
// System.Collections.Queue
struct Queue_t3637523393;
// System.Collections.Specialized.HybridDictionary
struct HybridDictionary_t4070033136;
// System.DelegateData
struct DelegateData_t1677132599;
// System.Delegate[]
struct DelegateU5BU5D_t1703627840;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t1169129676;
// System.EventHandler
struct EventHandler_t1348719766;
// System.EventHandler`1<System.Net.Sockets.SocketAsyncEventArgs>
struct EventHandler_1_t2070362453;
// System.Exception
struct Exception_t;
// System.Func`2<System.Net.SimpleAsyncResult,System.Boolean>
struct Func_2_t2426439321;
// System.IAsyncResult
struct IAsyncResult_t767004451;
// System.IO.MemoryStream
struct MemoryStream_t94973147;
// System.IO.Stream
struct Stream_t1273022909;
// System.IO.Stream/ReadWriteTask
struct ReadWriteTask_t156472862;
// System.IOAsyncCallback
struct IOAsyncCallback_t705871752;
// System.IOSelectorJob
struct IOSelectorJob_t2199748873;
// System.Int32[]
struct Int32U5BU5D_t385246372;
// System.IntPtr[]
struct IntPtrU5BU5D_t4013366056;
// System.Net.BindIPEndPoint
struct BindIPEndPoint_t1029027275;
// System.Net.Configuration.ConnectionManagementData
struct ConnectionManagementData_t2003128658;
// System.Net.CookieCollection
struct CookieCollection_t3881042616;
// System.Net.CookieContainer
struct CookieContainer_t2331592909;
// System.Net.EndPoint
struct EndPoint_t982345378;
// System.Net.HttpWebRequest
struct HttpWebRequest_t1669436515;
// System.Net.HttpWebResponse
struct HttpWebResponse_t3286585418;
// System.Net.ICertificatePolicy
struct ICertificatePolicy_t2970473191;
// System.Net.IPAddress[]
struct IPAddressU5BU5D_t596328627;
// System.Net.IPHostEntry
struct IPHostEntry_t263743900;
// System.Net.IWebConnectionState
struct IWebConnectionState_t1223684576;
// System.Net.MonoChunkStream
struct MonoChunkStream_t2034754733;
// System.Net.NetworkCredential
struct NetworkCredential_t3282608323;
// System.Net.NetworkInformation.IPAddressCollection
struct IPAddressCollection_t2315030214;
// System.Net.NetworkInformation.IPInterfaceProperties
struct IPInterfaceProperties_t3964383369;
// System.Net.NetworkInformation.NetworkInterfaceFactory
struct NetworkInterfaceFactory_t1756522298;
// System.Net.NetworkInformation.UnixNetworkInterface
struct UnixNetworkInterface_t2401762829;
// System.Net.NetworkInformation.Win32IPv4InterfaceStatistics
struct Win32IPv4InterfaceStatistics_t3096671123;
// System.Net.ServerCertValidationCallback
struct ServerCertValidationCallback_t1488468298;
// System.Net.ServicePoint
struct ServicePoint_t2786966844;
// System.Net.SimpleAsyncCallback
struct SimpleAsyncCallback_t2966023072;
// System.Net.SimpleAsyncResult
struct SimpleAsyncResult_t3946017618;
// System.Net.Sockets.SafeSocketHandle
struct SafeSocketHandle_t610293888;
// System.Net.Sockets.Socket
struct Socket_t1119025450;
// System.Net.WebAsyncResult
struct WebAsyncResult_t3421962937;
// System.Net.WebConnection
struct WebConnection_t3982808322;
// System.Net.WebConnection/AbortHelper
struct AbortHelper_t1490877826;
// System.Net.WebConnectionData
struct WebConnectionData_t3835660455;
// System.Net.WebConnectionGroup
struct WebConnectionGroup_t1712379988;
// System.Net.WebConnectionStream
struct WebConnectionStream_t2170064850;
// System.Net.WebHeaderCollection
struct WebHeaderCollection_t1942268960;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Runtime.Remoting.ServerIdentity
struct ServerIdentity_t2342208608;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_t2481557153;
// System.Security.Cryptography.X509Certificates.X509Certificate
struct X509Certificate_t713131622;
// System.Security.Cryptography.X509Certificates.X509CertificateCollection
struct X509CertificateCollection_t3399372417;
// System.Security.Cryptography.X509Certificates.X509Chain
struct X509Chain_t194917408;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t1281789340;
// System.Text.RegularExpressions.Regex
struct Regex_t3657309853;
// System.Text.StringBuilder
struct StringBuilder_t;
// System.Threading.ManualResetEvent
struct ManualResetEvent_t451242010;
// System.Threading.SemaphoreSlim
struct SemaphoreSlim_t2974092902;
// System.Threading.Timer
struct Timer_t716671026;
// System.Threading.WaitCallback
struct WaitCallback_t2448485498;
// System.UInt16[]
struct UInt16U5BU5D_t3326319531;
// System.UInt32[]
struct UInt32U5BU5D_t2770800703;
// System.Uri
struct Uri_t100236324;
// System.Version
struct Version_t3456873960;
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
#ifndef IOASYNCRESULT_T3640145766_H
#define IOASYNCRESULT_T3640145766_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IOAsyncResult
struct  IOAsyncResult_t3640145766  : public RuntimeObject
{
public:
	// System.AsyncCallback System.IOAsyncResult::async_callback
	AsyncCallback_t3962456242 * ___async_callback_0;
	// System.Object System.IOAsyncResult::async_state
	RuntimeObject * ___async_state_1;
	// System.Threading.ManualResetEvent System.IOAsyncResult::wait_handle
	ManualResetEvent_t451242010 * ___wait_handle_2;
	// System.Boolean System.IOAsyncResult::completed_synchronously
	bool ___completed_synchronously_3;
	// System.Boolean System.IOAsyncResult::completed
	bool ___completed_4;

public:
	inline static int32_t get_offset_of_async_callback_0() { return static_cast<int32_t>(offsetof(IOAsyncResult_t3640145766, ___async_callback_0)); }
	inline AsyncCallback_t3962456242 * get_async_callback_0() const { return ___async_callback_0; }
	inline AsyncCallback_t3962456242 ** get_address_of_async_callback_0() { return &___async_callback_0; }
	inline void set_async_callback_0(AsyncCallback_t3962456242 * value)
	{
		___async_callback_0 = value;
		Il2CppCodeGenWriteBarrier((&___async_callback_0), value);
	}

	inline static int32_t get_offset_of_async_state_1() { return static_cast<int32_t>(offsetof(IOAsyncResult_t3640145766, ___async_state_1)); }
	inline RuntimeObject * get_async_state_1() const { return ___async_state_1; }
	inline RuntimeObject ** get_address_of_async_state_1() { return &___async_state_1; }
	inline void set_async_state_1(RuntimeObject * value)
	{
		___async_state_1 = value;
		Il2CppCodeGenWriteBarrier((&___async_state_1), value);
	}

	inline static int32_t get_offset_of_wait_handle_2() { return static_cast<int32_t>(offsetof(IOAsyncResult_t3640145766, ___wait_handle_2)); }
	inline ManualResetEvent_t451242010 * get_wait_handle_2() const { return ___wait_handle_2; }
	inline ManualResetEvent_t451242010 ** get_address_of_wait_handle_2() { return &___wait_handle_2; }
	inline void set_wait_handle_2(ManualResetEvent_t451242010 * value)
	{
		___wait_handle_2 = value;
		Il2CppCodeGenWriteBarrier((&___wait_handle_2), value);
	}

	inline static int32_t get_offset_of_completed_synchronously_3() { return static_cast<int32_t>(offsetof(IOAsyncResult_t3640145766, ___completed_synchronously_3)); }
	inline bool get_completed_synchronously_3() const { return ___completed_synchronously_3; }
	inline bool* get_address_of_completed_synchronously_3() { return &___completed_synchronously_3; }
	inline void set_completed_synchronously_3(bool value)
	{
		___completed_synchronously_3 = value;
	}

	inline static int32_t get_offset_of_completed_4() { return static_cast<int32_t>(offsetof(IOAsyncResult_t3640145766, ___completed_4)); }
	inline bool get_completed_4() const { return ___completed_4; }
	inline bool* get_address_of_completed_4() { return &___completed_4; }
	inline void set_completed_4(bool value)
	{
		___completed_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.IOAsyncResult
struct IOAsyncResult_t3640145766_marshaled_pinvoke
{
	Il2CppMethodPointer ___async_callback_0;
	Il2CppIUnknown* ___async_state_1;
	ManualResetEvent_t451242010 * ___wait_handle_2;
	int32_t ___completed_synchronously_3;
	int32_t ___completed_4;
};
// Native definition for COM marshalling of System.IOAsyncResult
struct IOAsyncResult_t3640145766_marshaled_com
{
	Il2CppMethodPointer ___async_callback_0;
	Il2CppIUnknown* ___async_state_1;
	ManualResetEvent_t451242010 * ___wait_handle_2;
	int32_t ___completed_synchronously_3;
	int32_t ___completed_4;
};
#endif // IOASYNCRESULT_T3640145766_H
#ifndef MARSHALBYREFOBJECT_T2760389100_H
#define MARSHALBYREFOBJECT_T2760389100_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MarshalByRefObject
struct  MarshalByRefObject_t2760389100  : public RuntimeObject
{
public:
	// System.Runtime.Remoting.ServerIdentity System.MarshalByRefObject::_identity
	ServerIdentity_t2342208608 * ____identity_0;

public:
	inline static int32_t get_offset_of__identity_0() { return static_cast<int32_t>(offsetof(MarshalByRefObject_t2760389100, ____identity_0)); }
	inline ServerIdentity_t2342208608 * get__identity_0() const { return ____identity_0; }
	inline ServerIdentity_t2342208608 ** get_address_of__identity_0() { return &____identity_0; }
	inline void set__identity_0(ServerIdentity_t2342208608 * value)
	{
		____identity_0 = value;
		Il2CppCodeGenWriteBarrier((&____identity_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.MarshalByRefObject
struct MarshalByRefObject_t2760389100_marshaled_pinvoke
{
	ServerIdentity_t2342208608 * ____identity_0;
};
// Native definition for COM marshalling of System.MarshalByRefObject
struct MarshalByRefObject_t2760389100_marshaled_com
{
	ServerIdentity_t2342208608 * ____identity_0;
};
#endif // MARSHALBYREFOBJECT_T2760389100_H
#ifndef U3CU3EC__DISPLAYCLASS241_0_T955934074_H
#define U3CU3EC__DISPLAYCLASS241_0_T955934074_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.HttpWebRequest/<>c__DisplayClass241_0
struct  U3CU3Ec__DisplayClass241_0_t955934074  : public RuntimeObject
{
public:
	// System.Net.WebAsyncResult System.Net.HttpWebRequest/<>c__DisplayClass241_0::aread
	WebAsyncResult_t3421962937 * ___aread_0;
	// System.Net.HttpWebRequest System.Net.HttpWebRequest/<>c__DisplayClass241_0::<>4__this
	HttpWebRequest_t1669436515 * ___U3CU3E4__this_1;

public:
	inline static int32_t get_offset_of_aread_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass241_0_t955934074, ___aread_0)); }
	inline WebAsyncResult_t3421962937 * get_aread_0() const { return ___aread_0; }
	inline WebAsyncResult_t3421962937 ** get_address_of_aread_0() { return &___aread_0; }
	inline void set_aread_0(WebAsyncResult_t3421962937 * value)
	{
		___aread_0 = value;
		Il2CppCodeGenWriteBarrier((&___aread_0), value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass241_0_t955934074, ___U3CU3E4__this_1)); }
	inline HttpWebRequest_t1669436515 * get_U3CU3E4__this_1() const { return ___U3CU3E4__this_1; }
	inline HttpWebRequest_t1669436515 ** get_address_of_U3CU3E4__this_1() { return &___U3CU3E4__this_1; }
	inline void set_U3CU3E4__this_1(HttpWebRequest_t1669436515 * value)
	{
		___U3CU3E4__this_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3E4__this_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CU3EC__DISPLAYCLASS241_0_T955934074_H
#ifndef CHUNK_T275858543_H
#define CHUNK_T275858543_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.MonoChunkStream/Chunk
struct  Chunk_t275858543  : public RuntimeObject
{
public:
	// System.Byte[] System.Net.MonoChunkStream/Chunk::Bytes
	ByteU5BU5D_t4116647657* ___Bytes_0;
	// System.Int32 System.Net.MonoChunkStream/Chunk::Offset
	int32_t ___Offset_1;

public:
	inline static int32_t get_offset_of_Bytes_0() { return static_cast<int32_t>(offsetof(Chunk_t275858543, ___Bytes_0)); }
	inline ByteU5BU5D_t4116647657* get_Bytes_0() const { return ___Bytes_0; }
	inline ByteU5BU5D_t4116647657** get_address_of_Bytes_0() { return &___Bytes_0; }
	inline void set_Bytes_0(ByteU5BU5D_t4116647657* value)
	{
		___Bytes_0 = value;
		Il2CppCodeGenWriteBarrier((&___Bytes_0), value);
	}

	inline static int32_t get_offset_of_Offset_1() { return static_cast<int32_t>(offsetof(Chunk_t275858543, ___Offset_1)); }
	inline int32_t get_Offset_1() const { return ___Offset_1; }
	inline int32_t* get_address_of_Offset_1() { return &___Offset_1; }
	inline void set_Offset_1(int32_t value)
	{
		___Offset_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CHUNK_T275858543_H
#ifndef NETCONFIG_T2828594564_H
#define NETCONFIG_T2828594564_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetConfig
struct  NetConfig_t2828594564  : public RuntimeObject
{
public:
	// System.Int32 System.Net.NetConfig::MaxResponseHeadersLength
	int32_t ___MaxResponseHeadersLength_0;

public:
	inline static int32_t get_offset_of_MaxResponseHeadersLength_0() { return static_cast<int32_t>(offsetof(NetConfig_t2828594564, ___MaxResponseHeadersLength_0)); }
	inline int32_t get_MaxResponseHeadersLength_0() const { return ___MaxResponseHeadersLength_0; }
	inline int32_t* get_address_of_MaxResponseHeadersLength_0() { return &___MaxResponseHeadersLength_0; }
	inline void set_MaxResponseHeadersLength_0(int32_t value)
	{
		___MaxResponseHeadersLength_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NETCONFIG_T2828594564_H
#ifndef IPADDRESSCOLLECTION_T2315030214_H
#define IPADDRESSCOLLECTION_T2315030214_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.IPAddressCollection
struct  IPAddressCollection_t2315030214  : public RuntimeObject
{
public:
	// System.Collections.ObjectModel.Collection`1<System.Net.IPAddress> System.Net.NetworkInformation.IPAddressCollection::addresses
	Collection_1_t3481100804 * ___addresses_0;

public:
	inline static int32_t get_offset_of_addresses_0() { return static_cast<int32_t>(offsetof(IPAddressCollection_t2315030214, ___addresses_0)); }
	inline Collection_1_t3481100804 * get_addresses_0() const { return ___addresses_0; }
	inline Collection_1_t3481100804 ** get_address_of_addresses_0() { return &___addresses_0; }
	inline void set_addresses_0(Collection_1_t3481100804 * value)
	{
		___addresses_0 = value;
		Il2CppCodeGenWriteBarrier((&___addresses_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // IPADDRESSCOLLECTION_T2315030214_H
#ifndef IPGLOBALPROPERTIES_T3113415935_H
#define IPGLOBALPROPERTIES_T3113415935_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.IPGlobalProperties
struct  IPGlobalProperties_t3113415935  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // IPGLOBALPROPERTIES_T3113415935_H
#ifndef IPINTERFACEPROPERTIES_T3964383369_H
#define IPINTERFACEPROPERTIES_T3964383369_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.IPInterfaceProperties
struct  IPInterfaceProperties_t3964383369  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // IPINTERFACEPROPERTIES_T3964383369_H
#ifndef IPV4INTERFACESTATISTICS_T3249312820_H
#define IPV4INTERFACESTATISTICS_T3249312820_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.IPv4InterfaceStatistics
struct  IPv4InterfaceStatistics_t3249312820  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // IPV4INTERFACESTATISTICS_T3249312820_H
#ifndef NETWORKINTERFACE_T271883373_H
#define NETWORKINTERFACE_T271883373_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.NetworkInterface
struct  NetworkInterface_t271883373  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NETWORKINTERFACE_T271883373_H
#ifndef NETWORKINTERFACEFACTORY_T1756522298_H
#define NETWORKINTERFACEFACTORY_T1756522298_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.NetworkInterfaceFactory
struct  NetworkInterfaceFactory_t1756522298  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NETWORKINTERFACEFACTORY_T1756522298_H
#ifndef SYSTEMNETWORKINTERFACE_T699244148_H
#define SYSTEMNETWORKINTERFACE_T699244148_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.SystemNetworkInterface
struct  SystemNetworkInterface_t699244148  : public RuntimeObject
{
public:

public:
};

struct SystemNetworkInterface_t699244148_StaticFields
{
public:
	// System.Net.NetworkInformation.NetworkInterfaceFactory System.Net.NetworkInformation.SystemNetworkInterface::nif
	NetworkInterfaceFactory_t1756522298 * ___nif_0;

public:
	inline static int32_t get_offset_of_nif_0() { return static_cast<int32_t>(offsetof(SystemNetworkInterface_t699244148_StaticFields, ___nif_0)); }
	inline NetworkInterfaceFactory_t1756522298 * get_nif_0() const { return ___nif_0; }
	inline NetworkInterfaceFactory_t1756522298 ** get_address_of_nif_0() { return &___nif_0; }
	inline void set_nif_0(NetworkInterfaceFactory_t1756522298 * value)
	{
		___nif_0 = value;
		Il2CppCodeGenWriteBarrier((&___nif_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYSTEMNETWORKINTERFACE_T699244148_H
#ifndef SPKEY_T3654231119_H
#define SPKEY_T3654231119_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.ServicePointManager/SPKey
struct  SPKey_t3654231119  : public RuntimeObject
{
public:
	// System.Uri System.Net.ServicePointManager/SPKey::uri
	Uri_t100236324 * ___uri_0;
	// System.Uri System.Net.ServicePointManager/SPKey::proxy
	Uri_t100236324 * ___proxy_1;
	// System.Boolean System.Net.ServicePointManager/SPKey::use_connect
	bool ___use_connect_2;

public:
	inline static int32_t get_offset_of_uri_0() { return static_cast<int32_t>(offsetof(SPKey_t3654231119, ___uri_0)); }
	inline Uri_t100236324 * get_uri_0() const { return ___uri_0; }
	inline Uri_t100236324 ** get_address_of_uri_0() { return &___uri_0; }
	inline void set_uri_0(Uri_t100236324 * value)
	{
		___uri_0 = value;
		Il2CppCodeGenWriteBarrier((&___uri_0), value);
	}

	inline static int32_t get_offset_of_proxy_1() { return static_cast<int32_t>(offsetof(SPKey_t3654231119, ___proxy_1)); }
	inline Uri_t100236324 * get_proxy_1() const { return ___proxy_1; }
	inline Uri_t100236324 ** get_address_of_proxy_1() { return &___proxy_1; }
	inline void set_proxy_1(Uri_t100236324 * value)
	{
		___proxy_1 = value;
		Il2CppCodeGenWriteBarrier((&___proxy_1), value);
	}

	inline static int32_t get_offset_of_use_connect_2() { return static_cast<int32_t>(offsetof(SPKey_t3654231119, ___use_connect_2)); }
	inline bool get_use_connect_2() const { return ___use_connect_2; }
	inline bool* get_address_of_use_connect_2() { return &___use_connect_2; }
	inline void set_use_connect_2(bool value)
	{
		___use_connect_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SPKEY_T3654231119_H
#ifndef U3CU3EC__DISPLAYCLASS11_0_T377749183_H
#define U3CU3EC__DISPLAYCLASS11_0_T377749183_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.SimpleAsyncResult/<>c__DisplayClass11_0
struct  U3CU3Ec__DisplayClass11_0_t377749183  : public RuntimeObject
{
public:
	// System.Func`2<System.Net.SimpleAsyncResult,System.Boolean> System.Net.SimpleAsyncResult/<>c__DisplayClass11_0::func
	Func_2_t2426439321 * ___func_0;
	// System.Object System.Net.SimpleAsyncResult/<>c__DisplayClass11_0::locker
	RuntimeObject * ___locker_1;
	// System.Net.SimpleAsyncCallback System.Net.SimpleAsyncResult/<>c__DisplayClass11_0::callback
	SimpleAsyncCallback_t2966023072 * ___callback_2;

public:
	inline static int32_t get_offset_of_func_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass11_0_t377749183, ___func_0)); }
	inline Func_2_t2426439321 * get_func_0() const { return ___func_0; }
	inline Func_2_t2426439321 ** get_address_of_func_0() { return &___func_0; }
	inline void set_func_0(Func_2_t2426439321 * value)
	{
		___func_0 = value;
		Il2CppCodeGenWriteBarrier((&___func_0), value);
	}

	inline static int32_t get_offset_of_locker_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass11_0_t377749183, ___locker_1)); }
	inline RuntimeObject * get_locker_1() const { return ___locker_1; }
	inline RuntimeObject ** get_address_of_locker_1() { return &___locker_1; }
	inline void set_locker_1(RuntimeObject * value)
	{
		___locker_1 = value;
		Il2CppCodeGenWriteBarrier((&___locker_1), value);
	}

	inline static int32_t get_offset_of_callback_2() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass11_0_t377749183, ___callback_2)); }
	inline SimpleAsyncCallback_t2966023072 * get_callback_2() const { return ___callback_2; }
	inline SimpleAsyncCallback_t2966023072 ** get_address_of_callback_2() { return &___callback_2; }
	inline void set_callback_2(SimpleAsyncCallback_t2966023072 * value)
	{
		___callback_2 = value;
		Il2CppCodeGenWriteBarrier((&___callback_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CU3EC__DISPLAYCLASS11_0_T377749183_H
#ifndef U3CU3EC__DISPLAYCLASS9_0_T2879543744_H
#define U3CU3EC__DISPLAYCLASS9_0_T2879543744_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.SimpleAsyncResult/<>c__DisplayClass9_0
struct  U3CU3Ec__DisplayClass9_0_t2879543744  : public RuntimeObject
{
public:
	// System.AsyncCallback System.Net.SimpleAsyncResult/<>c__DisplayClass9_0::cb
	AsyncCallback_t3962456242 * ___cb_0;
	// System.Net.SimpleAsyncResult System.Net.SimpleAsyncResult/<>c__DisplayClass9_0::<>4__this
	SimpleAsyncResult_t3946017618 * ___U3CU3E4__this_1;

public:
	inline static int32_t get_offset_of_cb_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass9_0_t2879543744, ___cb_0)); }
	inline AsyncCallback_t3962456242 * get_cb_0() const { return ___cb_0; }
	inline AsyncCallback_t3962456242 ** get_address_of_cb_0() { return &___cb_0; }
	inline void set_cb_0(AsyncCallback_t3962456242 * value)
	{
		___cb_0 = value;
		Il2CppCodeGenWriteBarrier((&___cb_0), value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass9_0_t2879543744, ___U3CU3E4__this_1)); }
	inline SimpleAsyncResult_t3946017618 * get_U3CU3E4__this_1() const { return ___U3CU3E4__this_1; }
	inline SimpleAsyncResult_t3946017618 ** get_address_of_U3CU3E4__this_1() { return &___U3CU3E4__this_1; }
	inline void set_U3CU3E4__this_1(SimpleAsyncResult_t3946017618 * value)
	{
		___U3CU3E4__this_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3E4__this_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CU3EC__DISPLAYCLASS9_0_T2879543744_H
#ifndef LINGEROPTION_T2688985448_H
#define LINGEROPTION_T2688985448_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Sockets.LingerOption
struct  LingerOption_t2688985448  : public RuntimeObject
{
public:
	// System.Boolean System.Net.Sockets.LingerOption::enabled
	bool ___enabled_0;
	// System.Int32 System.Net.Sockets.LingerOption::lingerTime
	int32_t ___lingerTime_1;

public:
	inline static int32_t get_offset_of_enabled_0() { return static_cast<int32_t>(offsetof(LingerOption_t2688985448, ___enabled_0)); }
	inline bool get_enabled_0() const { return ___enabled_0; }
	inline bool* get_address_of_enabled_0() { return &___enabled_0; }
	inline void set_enabled_0(bool value)
	{
		___enabled_0 = value;
	}

	inline static int32_t get_offset_of_lingerTime_1() { return static_cast<int32_t>(offsetof(LingerOption_t2688985448, ___lingerTime_1)); }
	inline int32_t get_lingerTime_1() const { return ___lingerTime_1; }
	inline int32_t* get_address_of_lingerTime_1() { return &___lingerTime_1; }
	inline void set_lingerTime_1(int32_t value)
	{
		___lingerTime_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LINGEROPTION_T2688985448_H
#ifndef MULTICASTOPTION_T3861143239_H
#define MULTICASTOPTION_T3861143239_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Sockets.MulticastOption
struct  MulticastOption_t3861143239  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MULTICASTOPTION_T3861143239_H
#ifndef U3CU3EC_T240325972_H
#define U3CU3EC_T240325972_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Sockets.Socket/<>c
struct  U3CU3Ec_t240325972  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t240325972_StaticFields
{
public:
	// System.Net.Sockets.Socket/<>c System.Net.Sockets.Socket/<>c::<>9
	U3CU3Ec_t240325972 * ___U3CU3E9_0;
	// System.IOAsyncCallback System.Net.Sockets.Socket/<>c::<>9__241_0
	IOAsyncCallback_t705871752 * ___U3CU3E9__241_0_1;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t240325972_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t240325972 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t240325972 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t240325972 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3E9_0), value);
	}

	inline static int32_t get_offset_of_U3CU3E9__241_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_t240325972_StaticFields, ___U3CU3E9__241_0_1)); }
	inline IOAsyncCallback_t705871752 * get_U3CU3E9__241_0_1() const { return ___U3CU3E9__241_0_1; }
	inline IOAsyncCallback_t705871752 ** get_address_of_U3CU3E9__241_0_1() { return &___U3CU3E9__241_0_1; }
	inline void set_U3CU3E9__241_0_1(IOAsyncCallback_t705871752 * value)
	{
		___U3CU3E9__241_0_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3E9__241_0_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CU3EC_T240325972_H
#ifndef U3CU3EC__DISPLAYCLASS242_0_T616583391_H
#define U3CU3EC__DISPLAYCLASS242_0_T616583391_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Sockets.Socket/<>c__DisplayClass242_0
struct  U3CU3Ec__DisplayClass242_0_t616583391  : public RuntimeObject
{
public:
	// System.Int32 System.Net.Sockets.Socket/<>c__DisplayClass242_0::sent_so_far
	int32_t ___sent_so_far_0;

public:
	inline static int32_t get_offset_of_sent_so_far_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass242_0_t616583391, ___sent_so_far_0)); }
	inline int32_t get_sent_so_far_0() const { return ___sent_so_far_0; }
	inline int32_t* get_address_of_sent_so_far_0() { return &___sent_so_far_0; }
	inline void set_sent_so_far_0(int32_t value)
	{
		___sent_so_far_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CU3EC__DISPLAYCLASS242_0_T616583391_H
#ifndef U3CU3EC_T3573335103_H
#define U3CU3EC_T3573335103_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Sockets.SocketAsyncResult/<>c
struct  U3CU3Ec_t3573335103  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t3573335103_StaticFields
{
public:
	// System.Net.Sockets.SocketAsyncResult/<>c System.Net.Sockets.SocketAsyncResult/<>c::<>9
	U3CU3Ec_t3573335103 * ___U3CU3E9_0;
	// System.Threading.WaitCallback System.Net.Sockets.SocketAsyncResult/<>c::<>9__27_0
	WaitCallback_t2448485498 * ___U3CU3E9__27_0_1;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t3573335103_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t3573335103 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t3573335103 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t3573335103 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3E9_0), value);
	}

	inline static int32_t get_offset_of_U3CU3E9__27_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_t3573335103_StaticFields, ___U3CU3E9__27_0_1)); }
	inline WaitCallback_t2448485498 * get_U3CU3E9__27_0_1() const { return ___U3CU3E9__27_0_1; }
	inline WaitCallback_t2448485498 ** get_address_of_U3CU3E9__27_0_1() { return &___U3CU3E9__27_0_1; }
	inline void set_U3CU3E9__27_0_1(WaitCallback_t2448485498 * value)
	{
		___U3CU3E9__27_0_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3E9__27_0_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CU3EC_T3573335103_H
#ifndef ABORTHELPER_T1490877826_H
#define ABORTHELPER_T1490877826_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.WebConnection/AbortHelper
struct  AbortHelper_t1490877826  : public RuntimeObject
{
public:
	// System.Net.WebConnection System.Net.WebConnection/AbortHelper::Connection
	WebConnection_t3982808322 * ___Connection_0;

public:
	inline static int32_t get_offset_of_Connection_0() { return static_cast<int32_t>(offsetof(AbortHelper_t1490877826, ___Connection_0)); }
	inline WebConnection_t3982808322 * get_Connection_0() const { return ___Connection_0; }
	inline WebConnection_t3982808322 ** get_address_of_Connection_0() { return &___Connection_0; }
	inline void set_Connection_0(WebConnection_t3982808322 * value)
	{
		___Connection_0 = value;
		Il2CppCodeGenWriteBarrier((&___Connection_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ABORTHELPER_T1490877826_H
#ifndef WEBCONNECTIONGROUP_T1712379988_H
#define WEBCONNECTIONGROUP_T1712379988_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.WebConnectionGroup
struct  WebConnectionGroup_t1712379988  : public RuntimeObject
{
public:
	// System.Net.ServicePoint System.Net.WebConnectionGroup::sPoint
	ServicePoint_t2786966844 * ___sPoint_0;
	// System.String System.Net.WebConnectionGroup::name
	String_t* ___name_1;
	// System.Collections.Generic.LinkedList`1<System.Net.WebConnectionGroup/ConnectionState> System.Net.WebConnectionGroup::connections
	LinkedList_1_t491222822 * ___connections_2;
	// System.Collections.Queue System.Net.WebConnectionGroup::queue
	Queue_t3637523393 * ___queue_3;
	// System.Boolean System.Net.WebConnectionGroup::closing
	bool ___closing_4;
	// System.EventHandler System.Net.WebConnectionGroup::ConnectionClosed
	EventHandler_t1348719766 * ___ConnectionClosed_5;

public:
	inline static int32_t get_offset_of_sPoint_0() { return static_cast<int32_t>(offsetof(WebConnectionGroup_t1712379988, ___sPoint_0)); }
	inline ServicePoint_t2786966844 * get_sPoint_0() const { return ___sPoint_0; }
	inline ServicePoint_t2786966844 ** get_address_of_sPoint_0() { return &___sPoint_0; }
	inline void set_sPoint_0(ServicePoint_t2786966844 * value)
	{
		___sPoint_0 = value;
		Il2CppCodeGenWriteBarrier((&___sPoint_0), value);
	}

	inline static int32_t get_offset_of_name_1() { return static_cast<int32_t>(offsetof(WebConnectionGroup_t1712379988, ___name_1)); }
	inline String_t* get_name_1() const { return ___name_1; }
	inline String_t** get_address_of_name_1() { return &___name_1; }
	inline void set_name_1(String_t* value)
	{
		___name_1 = value;
		Il2CppCodeGenWriteBarrier((&___name_1), value);
	}

	inline static int32_t get_offset_of_connections_2() { return static_cast<int32_t>(offsetof(WebConnectionGroup_t1712379988, ___connections_2)); }
	inline LinkedList_1_t491222822 * get_connections_2() const { return ___connections_2; }
	inline LinkedList_1_t491222822 ** get_address_of_connections_2() { return &___connections_2; }
	inline void set_connections_2(LinkedList_1_t491222822 * value)
	{
		___connections_2 = value;
		Il2CppCodeGenWriteBarrier((&___connections_2), value);
	}

	inline static int32_t get_offset_of_queue_3() { return static_cast<int32_t>(offsetof(WebConnectionGroup_t1712379988, ___queue_3)); }
	inline Queue_t3637523393 * get_queue_3() const { return ___queue_3; }
	inline Queue_t3637523393 ** get_address_of_queue_3() { return &___queue_3; }
	inline void set_queue_3(Queue_t3637523393 * value)
	{
		___queue_3 = value;
		Il2CppCodeGenWriteBarrier((&___queue_3), value);
	}

	inline static int32_t get_offset_of_closing_4() { return static_cast<int32_t>(offsetof(WebConnectionGroup_t1712379988, ___closing_4)); }
	inline bool get_closing_4() const { return ___closing_4; }
	inline bool* get_address_of_closing_4() { return &___closing_4; }
	inline void set_closing_4(bool value)
	{
		___closing_4 = value;
	}

	inline static int32_t get_offset_of_ConnectionClosed_5() { return static_cast<int32_t>(offsetof(WebConnectionGroup_t1712379988, ___ConnectionClosed_5)); }
	inline EventHandler_t1348719766 * get_ConnectionClosed_5() const { return ___ConnectionClosed_5; }
	inline EventHandler_t1348719766 ** get_address_of_ConnectionClosed_5() { return &___ConnectionClosed_5; }
	inline void set_ConnectionClosed_5(EventHandler_t1348719766 * value)
	{
		___ConnectionClosed_5 = value;
		Il2CppCodeGenWriteBarrier((&___ConnectionClosed_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WEBCONNECTIONGROUP_T1712379988_H
#ifndef U3CU3EC__DISPLAYCLASS75_0_T2717095993_H
#define U3CU3EC__DISPLAYCLASS75_0_T2717095993_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.WebConnectionStream/<>c__DisplayClass75_0
struct  U3CU3Ec__DisplayClass75_0_t2717095993  : public RuntimeObject
{
public:
	// System.Net.WebConnectionStream System.Net.WebConnectionStream/<>c__DisplayClass75_0::<>4__this
	WebConnectionStream_t2170064850 * ___U3CU3E4__this_0;
	// System.Boolean System.Net.WebConnectionStream/<>c__DisplayClass75_0::setInternalLength
	bool ___setInternalLength_1;

public:
	inline static int32_t get_offset_of_U3CU3E4__this_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass75_0_t2717095993, ___U3CU3E4__this_0)); }
	inline WebConnectionStream_t2170064850 * get_U3CU3E4__this_0() const { return ___U3CU3E4__this_0; }
	inline WebConnectionStream_t2170064850 ** get_address_of_U3CU3E4__this_0() { return &___U3CU3E4__this_0; }
	inline void set_U3CU3E4__this_0(WebConnectionStream_t2170064850 * value)
	{
		___U3CU3E4__this_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3E4__this_0), value);
	}

	inline static int32_t get_offset_of_setInternalLength_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass75_0_t2717095993, ___setInternalLength_1)); }
	inline bool get_setInternalLength_1() const { return ___setInternalLength_1; }
	inline bool* get_address_of_setInternalLength_1() { return &___setInternalLength_1; }
	inline void set_setInternalLength_1(bool value)
	{
		___setInternalLength_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CU3EC__DISPLAYCLASS75_0_T2717095993_H
#ifndef U3CU3EC__DISPLAYCLASS76_0_T2716899385_H
#define U3CU3EC__DISPLAYCLASS76_0_T2716899385_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.WebConnectionStream/<>c__DisplayClass76_0
struct  U3CU3Ec__DisplayClass76_0_t2716899385  : public RuntimeObject
{
public:
	// System.Net.WebConnectionStream System.Net.WebConnectionStream/<>c__DisplayClass76_0::<>4__this
	WebConnectionStream_t2170064850 * ___U3CU3E4__this_0;
	// System.Net.SimpleAsyncResult System.Net.WebConnectionStream/<>c__DisplayClass76_0::result
	SimpleAsyncResult_t3946017618 * ___result_1;

public:
	inline static int32_t get_offset_of_U3CU3E4__this_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass76_0_t2716899385, ___U3CU3E4__this_0)); }
	inline WebConnectionStream_t2170064850 * get_U3CU3E4__this_0() const { return ___U3CU3E4__this_0; }
	inline WebConnectionStream_t2170064850 ** get_address_of_U3CU3E4__this_0() { return &___U3CU3E4__this_0; }
	inline void set_U3CU3E4__this_0(WebConnectionStream_t2170064850 * value)
	{
		___U3CU3E4__this_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3E4__this_0), value);
	}

	inline static int32_t get_offset_of_result_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass76_0_t2716899385, ___result_1)); }
	inline SimpleAsyncResult_t3946017618 * get_result_1() const { return ___result_1; }
	inline SimpleAsyncResult_t3946017618 ** get_address_of_result_1() { return &___result_1; }
	inline void set_result_1(SimpleAsyncResult_t3946017618 * value)
	{
		___result_1 = value;
		Il2CppCodeGenWriteBarrier((&___result_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CU3EC__DISPLAYCLASS76_0_T2716899385_H
#ifndef U3CU3EC__DISPLAYCLASS80_0_T2716768316_H
#define U3CU3EC__DISPLAYCLASS80_0_T2716768316_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.WebConnectionStream/<>c__DisplayClass80_0
struct  U3CU3Ec__DisplayClass80_0_t2716768316  : public RuntimeObject
{
public:
	// System.Net.SimpleAsyncResult System.Net.WebConnectionStream/<>c__DisplayClass80_0::result
	SimpleAsyncResult_t3946017618 * ___result_0;
	// System.Net.WebConnectionStream System.Net.WebConnectionStream/<>c__DisplayClass80_0::<>4__this
	WebConnectionStream_t2170064850 * ___U3CU3E4__this_1;
	// System.Int32 System.Net.WebConnectionStream/<>c__DisplayClass80_0::length
	int32_t ___length_2;
	// System.Byte[] System.Net.WebConnectionStream/<>c__DisplayClass80_0::bytes
	ByteU5BU5D_t4116647657* ___bytes_3;
	// System.AsyncCallback System.Net.WebConnectionStream/<>c__DisplayClass80_0::<>9__1
	AsyncCallback_t3962456242 * ___U3CU3E9__1_4;

public:
	inline static int32_t get_offset_of_result_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass80_0_t2716768316, ___result_0)); }
	inline SimpleAsyncResult_t3946017618 * get_result_0() const { return ___result_0; }
	inline SimpleAsyncResult_t3946017618 ** get_address_of_result_0() { return &___result_0; }
	inline void set_result_0(SimpleAsyncResult_t3946017618 * value)
	{
		___result_0 = value;
		Il2CppCodeGenWriteBarrier((&___result_0), value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass80_0_t2716768316, ___U3CU3E4__this_1)); }
	inline WebConnectionStream_t2170064850 * get_U3CU3E4__this_1() const { return ___U3CU3E4__this_1; }
	inline WebConnectionStream_t2170064850 ** get_address_of_U3CU3E4__this_1() { return &___U3CU3E4__this_1; }
	inline void set_U3CU3E4__this_1(WebConnectionStream_t2170064850 * value)
	{
		___U3CU3E4__this_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3E4__this_1), value);
	}

	inline static int32_t get_offset_of_length_2() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass80_0_t2716768316, ___length_2)); }
	inline int32_t get_length_2() const { return ___length_2; }
	inline int32_t* get_address_of_length_2() { return &___length_2; }
	inline void set_length_2(int32_t value)
	{
		___length_2 = value;
	}

	inline static int32_t get_offset_of_bytes_3() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass80_0_t2716768316, ___bytes_3)); }
	inline ByteU5BU5D_t4116647657* get_bytes_3() const { return ___bytes_3; }
	inline ByteU5BU5D_t4116647657** get_address_of_bytes_3() { return &___bytes_3; }
	inline void set_bytes_3(ByteU5BU5D_t4116647657* value)
	{
		___bytes_3 = value;
		Il2CppCodeGenWriteBarrier((&___bytes_3), value);
	}

	inline static int32_t get_offset_of_U3CU3E9__1_4() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass80_0_t2716768316, ___U3CU3E9__1_4)); }
	inline AsyncCallback_t3962456242 * get_U3CU3E9__1_4() const { return ___U3CU3E9__1_4; }
	inline AsyncCallback_t3962456242 ** get_address_of_U3CU3E9__1_4() { return &___U3CU3E9__1_4; }
	inline void set_U3CU3E9__1_4(AsyncCallback_t3962456242 * value)
	{
		___U3CU3E9__1_4 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3E9__1_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CU3EC__DISPLAYCLASS80_0_T2716768316_H
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
#ifndef BYTE_T1134296376_H
#define BYTE_T1134296376_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Byte
struct  Byte_t1134296376 
{
public:
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Byte_t1134296376, ___m_value_0)); }
	inline uint8_t get_m_value_0() const { return ___m_value_0; }
	inline uint8_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint8_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BYTE_T1134296376_H
#ifndef CHAR_T3634460470_H
#define CHAR_T3634460470_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Char
struct  Char_t3634460470 
{
public:
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Char_t3634460470, ___m_value_0)); }
	inline Il2CppChar get_m_value_0() const { return ___m_value_0; }
	inline Il2CppChar* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(Il2CppChar value)
	{
		___m_value_0 = value;
	}
};

struct Char_t3634460470_StaticFields
{
public:
	// System.Byte[] System.Char::categoryForLatin1
	ByteU5BU5D_t4116647657* ___categoryForLatin1_3;

public:
	inline static int32_t get_offset_of_categoryForLatin1_3() { return static_cast<int32_t>(offsetof(Char_t3634460470_StaticFields, ___categoryForLatin1_3)); }
	inline ByteU5BU5D_t4116647657* get_categoryForLatin1_3() const { return ___categoryForLatin1_3; }
	inline ByteU5BU5D_t4116647657** get_address_of_categoryForLatin1_3() { return &___categoryForLatin1_3; }
	inline void set_categoryForLatin1_3(ByteU5BU5D_t4116647657* value)
	{
		___categoryForLatin1_3 = value;
		Il2CppCodeGenWriteBarrier((&___categoryForLatin1_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CHAR_T3634460470_H
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
#ifndef STREAM_T1273022909_H
#define STREAM_T1273022909_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.Stream
struct  Stream_t1273022909  : public MarshalByRefObject_t2760389100
{
public:
	// System.IO.Stream/ReadWriteTask System.IO.Stream::_activeReadWriteTask
	ReadWriteTask_t156472862 * ____activeReadWriteTask_2;
	// System.Threading.SemaphoreSlim System.IO.Stream::_asyncActiveSemaphore
	SemaphoreSlim_t2974092902 * ____asyncActiveSemaphore_3;

public:
	inline static int32_t get_offset_of__activeReadWriteTask_2() { return static_cast<int32_t>(offsetof(Stream_t1273022909, ____activeReadWriteTask_2)); }
	inline ReadWriteTask_t156472862 * get__activeReadWriteTask_2() const { return ____activeReadWriteTask_2; }
	inline ReadWriteTask_t156472862 ** get_address_of__activeReadWriteTask_2() { return &____activeReadWriteTask_2; }
	inline void set__activeReadWriteTask_2(ReadWriteTask_t156472862 * value)
	{
		____activeReadWriteTask_2 = value;
		Il2CppCodeGenWriteBarrier((&____activeReadWriteTask_2), value);
	}

	inline static int32_t get_offset_of__asyncActiveSemaphore_3() { return static_cast<int32_t>(offsetof(Stream_t1273022909, ____asyncActiveSemaphore_3)); }
	inline SemaphoreSlim_t2974092902 * get__asyncActiveSemaphore_3() const { return ____asyncActiveSemaphore_3; }
	inline SemaphoreSlim_t2974092902 ** get_address_of__asyncActiveSemaphore_3() { return &____asyncActiveSemaphore_3; }
	inline void set__asyncActiveSemaphore_3(SemaphoreSlim_t2974092902 * value)
	{
		____asyncActiveSemaphore_3 = value;
		Il2CppCodeGenWriteBarrier((&____asyncActiveSemaphore_3), value);
	}
};

struct Stream_t1273022909_StaticFields
{
public:
	// System.IO.Stream System.IO.Stream::Null
	Stream_t1273022909 * ___Null_1;

public:
	inline static int32_t get_offset_of_Null_1() { return static_cast<int32_t>(offsetof(Stream_t1273022909_StaticFields, ___Null_1)); }
	inline Stream_t1273022909 * get_Null_1() const { return ___Null_1; }
	inline Stream_t1273022909 ** get_address_of_Null_1() { return &___Null_1; }
	inline void set_Null_1(Stream_t1273022909 * value)
	{
		___Null_1 = value;
		Il2CppCodeGenWriteBarrier((&___Null_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STREAM_T1273022909_H
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
#ifndef IPV6ADDRESSFORMATTER_T878312391_H
#define IPV6ADDRESSFORMATTER_T878312391_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.IPv6AddressFormatter
struct  IPv6AddressFormatter_t878312391 
{
public:
	// System.UInt16[] System.Net.IPv6AddressFormatter::address
	UInt16U5BU5D_t3326319531* ___address_0;
	// System.Int64 System.Net.IPv6AddressFormatter::scopeId
	int64_t ___scopeId_1;

public:
	inline static int32_t get_offset_of_address_0() { return static_cast<int32_t>(offsetof(IPv6AddressFormatter_t878312391, ___address_0)); }
	inline UInt16U5BU5D_t3326319531* get_address_0() const { return ___address_0; }
	inline UInt16U5BU5D_t3326319531** get_address_of_address_0() { return &___address_0; }
	inline void set_address_0(UInt16U5BU5D_t3326319531* value)
	{
		___address_0 = value;
		Il2CppCodeGenWriteBarrier((&___address_0), value);
	}

	inline static int32_t get_offset_of_scopeId_1() { return static_cast<int32_t>(offsetof(IPv6AddressFormatter_t878312391, ___scopeId_1)); }
	inline int64_t get_scopeId_1() const { return ___scopeId_1; }
	inline int64_t* get_address_of_scopeId_1() { return &___scopeId_1; }
	inline void set_scopeId_1(int64_t value)
	{
		___scopeId_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Net.IPv6AddressFormatter
struct IPv6AddressFormatter_t878312391_marshaled_pinvoke
{
	uint16_t* ___address_0;
	int64_t ___scopeId_1;
};
// Native definition for COM marshalling of System.Net.IPv6AddressFormatter
struct IPv6AddressFormatter_t878312391_marshaled_com
{
	uint16_t* ___address_0;
	int64_t ___scopeId_1;
};
#endif // IPV6ADDRESSFORMATTER_T878312391_H
#ifndef ALIGNMENTUNION_T208902285_H
#define ALIGNMENTUNION_T208902285_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.AlignmentUnion
struct  AlignmentUnion_t208902285 
{
public:
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.UInt64 System.Net.NetworkInformation.AlignmentUnion::Alignment
			uint64_t ___Alignment_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint64_t ___Alignment_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int32 System.Net.NetworkInformation.AlignmentUnion::Length
			int32_t ___Length_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___Length_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___IfIndex_2_OffsetPadding[4];
			// System.Int32 System.Net.NetworkInformation.AlignmentUnion::IfIndex
			int32_t ___IfIndex_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___IfIndex_2_OffsetPadding_forAlignmentOnly[4];
			int32_t ___IfIndex_2_forAlignmentOnly;
		};
	};

public:
	inline static int32_t get_offset_of_Alignment_0() { return static_cast<int32_t>(offsetof(AlignmentUnion_t208902285, ___Alignment_0)); }
	inline uint64_t get_Alignment_0() const { return ___Alignment_0; }
	inline uint64_t* get_address_of_Alignment_0() { return &___Alignment_0; }
	inline void set_Alignment_0(uint64_t value)
	{
		___Alignment_0 = value;
	}

	inline static int32_t get_offset_of_Length_1() { return static_cast<int32_t>(offsetof(AlignmentUnion_t208902285, ___Length_1)); }
	inline int32_t get_Length_1() const { return ___Length_1; }
	inline int32_t* get_address_of_Length_1() { return &___Length_1; }
	inline void set_Length_1(int32_t value)
	{
		___Length_1 = value;
	}

	inline static int32_t get_offset_of_IfIndex_2() { return static_cast<int32_t>(offsetof(AlignmentUnion_t208902285, ___IfIndex_2)); }
	inline int32_t get_IfIndex_2() const { return ___IfIndex_2; }
	inline int32_t* get_address_of_IfIndex_2() { return &___IfIndex_2; }
	inline void set_IfIndex_2(int32_t value)
	{
		___IfIndex_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ALIGNMENTUNION_T208902285_H
#ifndef COMMONUNIXIPGLOBALPROPERTIES_T1338606518_H
#define COMMONUNIXIPGLOBALPROPERTIES_T1338606518_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.CommonUnixIPGlobalProperties
struct  CommonUnixIPGlobalProperties_t1338606518  : public IPGlobalProperties_t3113415935
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMMONUNIXIPGLOBALPROPERTIES_T1338606518_H
#ifndef UNIXNETWORKINTERFACEAPI_T1061423219_H
#define UNIXNETWORKINTERFACEAPI_T1061423219_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.NetworkInterfaceFactory/UnixNetworkInterfaceAPI
struct  UnixNetworkInterfaceAPI_t1061423219  : public NetworkInterfaceFactory_t1756522298
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNIXNETWORKINTERFACEAPI_T1061423219_H
#ifndef WIN32NETWORKINTERFACEAPI_T912414909_H
#define WIN32NETWORKINTERFACEAPI_T912414909_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.NetworkInterfaceFactory/Win32NetworkInterfaceAPI
struct  Win32NetworkInterfaceAPI_t912414909  : public NetworkInterfaceFactory_t1756522298
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WIN32NETWORKINTERFACEAPI_T912414909_H
#ifndef WIN32IPADDRESSCOLLECTION_T1156671415_H
#define WIN32IPADDRESSCOLLECTION_T1156671415_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.Win32IPAddressCollection
struct  Win32IPAddressCollection_t1156671415  : public IPAddressCollection_t2315030214
{
public:

public:
};

struct Win32IPAddressCollection_t1156671415_StaticFields
{
public:
	// System.Net.NetworkInformation.Win32IPAddressCollection System.Net.NetworkInformation.Win32IPAddressCollection::Empty
	Win32IPAddressCollection_t1156671415 * ___Empty_1;

public:
	inline static int32_t get_offset_of_Empty_1() { return static_cast<int32_t>(offsetof(Win32IPAddressCollection_t1156671415_StaticFields, ___Empty_1)); }
	inline Win32IPAddressCollection_t1156671415 * get_Empty_1() const { return ___Empty_1; }
	inline Win32IPAddressCollection_t1156671415 ** get_address_of_Empty_1() { return &___Empty_1; }
	inline void set_Empty_1(Win32IPAddressCollection_t1156671415 * value)
	{
		___Empty_1 = value;
		Il2CppCodeGenWriteBarrier((&___Empty_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WIN32IPADDRESSCOLLECTION_T1156671415_H
#ifndef WIN32IPGLOBALPROPERTIES_T3375126358_H
#define WIN32IPGLOBALPROPERTIES_T3375126358_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.Win32IPGlobalProperties
struct  Win32IPGlobalProperties_t3375126358  : public IPGlobalProperties_t3113415935
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WIN32IPGLOBALPROPERTIES_T3375126358_H
#ifndef SOCKADDR_IN_T2786965223_H
#define SOCKADDR_IN_T2786965223_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.sockaddr_in
struct  sockaddr_in_t2786965223 
{
public:
	// System.UInt16 System.Net.NetworkInformation.sockaddr_in::sin_family
	uint16_t ___sin_family_0;
	// System.UInt16 System.Net.NetworkInformation.sockaddr_in::sin_port
	uint16_t ___sin_port_1;
	// System.UInt32 System.Net.NetworkInformation.sockaddr_in::sin_addr
	uint32_t ___sin_addr_2;

public:
	inline static int32_t get_offset_of_sin_family_0() { return static_cast<int32_t>(offsetof(sockaddr_in_t2786965223, ___sin_family_0)); }
	inline uint16_t get_sin_family_0() const { return ___sin_family_0; }
	inline uint16_t* get_address_of_sin_family_0() { return &___sin_family_0; }
	inline void set_sin_family_0(uint16_t value)
	{
		___sin_family_0 = value;
	}

	inline static int32_t get_offset_of_sin_port_1() { return static_cast<int32_t>(offsetof(sockaddr_in_t2786965223, ___sin_port_1)); }
	inline uint16_t get_sin_port_1() const { return ___sin_port_1; }
	inline uint16_t* get_address_of_sin_port_1() { return &___sin_port_1; }
	inline void set_sin_port_1(uint16_t value)
	{
		___sin_port_1 = value;
	}

	inline static int32_t get_offset_of_sin_addr_2() { return static_cast<int32_t>(offsetof(sockaddr_in_t2786965223, ___sin_addr_2)); }
	inline uint32_t get_sin_addr_2() const { return ___sin_addr_2; }
	inline uint32_t* get_address_of_sin_addr_2() { return &___sin_addr_2; }
	inline void set_sin_addr_2(uint32_t value)
	{
		___sin_addr_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SOCKADDR_IN_T2786965223_H
#ifndef WEBRESPONSE_T229922639_H
#define WEBRESPONSE_T229922639_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.WebResponse
struct  WebResponse_t229922639  : public MarshalByRefObject_t2760389100
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WEBRESPONSE_T229922639_H
#ifndef NULLABLE_1_T1819850047_H
#define NULLABLE_1_T1819850047_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Nullable`1<System.Boolean>
struct  Nullable_1_t1819850047 
{
public:
	// T System.Nullable`1::value
	bool ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t1819850047, ___value_0)); }
	inline bool get_value_0() const { return ___value_0; }
	inline bool* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(bool value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t1819850047, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NULLABLE_1_T1819850047_H
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
#ifndef UINT32_T2560061978_H
#define UINT32_T2560061978_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UInt32
struct  UInt32_t2560061978 
{
public:
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt32_t2560061978, ___m_value_0)); }
	inline uint32_t get_m_value_0() const { return ___m_value_0; }
	inline uint32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint32_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UINT32_T2560061978_H
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
#ifndef HTTPSTATUSCODE_T3035121829_H
#define HTTPSTATUSCODE_T3035121829_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.HttpStatusCode
struct  HttpStatusCode_t3035121829 
{
public:
	// System.Int32 System.Net.HttpStatusCode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(HttpStatusCode_t3035121829, ___value___2)); }
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
#endif // HTTPSTATUSCODE_T3035121829_H
#ifndef NTLMAUTHSTATE_T1717421993_H
#define NTLMAUTHSTATE_T1717421993_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.HttpWebRequest/NtlmAuthState
struct  NtlmAuthState_t1717421993 
{
public:
	// System.Int32 System.Net.HttpWebRequest/NtlmAuthState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(NtlmAuthState_t1717421993, ___value___2)); }
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
#endif // NTLMAUTHSTATE_T1717421993_H
#ifndef STATE_T1512905777_H
#define STATE_T1512905777_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.MonoChunkStream/State
struct  State_t1512905777 
{
public:
	// System.Int32 System.Net.MonoChunkStream/State::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(State_t1512905777, ___value___2)); }
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
#endif // STATE_T1512905777_H
#ifndef LINUXARPHARDWARE_T827080684_H
#define LINUXARPHARDWARE_T827080684_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.LinuxArpHardware
struct  LinuxArpHardware_t827080684 
{
public:
	// System.Int32 System.Net.NetworkInformation.LinuxArpHardware::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(LinuxArpHardware_t827080684, ___value___2)); }
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
#endif // LINUXARPHARDWARE_T827080684_H
#ifndef MACOSARPHARDWARE_T4198534184_H
#define MACOSARPHARDWARE_T4198534184_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.MacOsArpHardware
struct  MacOsArpHardware_t4198534184 
{
public:
	// System.Int32 System.Net.NetworkInformation.MacOsArpHardware::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(MacOsArpHardware_t4198534184, ___value___2)); }
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
#endif // MACOSARPHARDWARE_T4198534184_H
#ifndef NETBIOSNODETYPE_T3568904212_H
#define NETBIOSNODETYPE_T3568904212_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.NetBiosNodeType
struct  NetBiosNodeType_t3568904212 
{
public:
	// System.Int32 System.Net.NetworkInformation.NetBiosNodeType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(NetBiosNodeType_t3568904212, ___value___2)); }
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
#endif // NETBIOSNODETYPE_T3568904212_H
#ifndef NETWORKINTERFACECOMPONENT_T1400510776_H
#define NETWORKINTERFACECOMPONENT_T1400510776_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.NetworkInterfaceComponent
struct  NetworkInterfaceComponent_t1400510776 
{
public:
	// System.Int32 System.Net.NetworkInformation.NetworkInterfaceComponent::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(NetworkInterfaceComponent_t1400510776, ___value___2)); }
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
#endif // NETWORKINTERFACECOMPONENT_T1400510776_H
#ifndef LINUXNETWORKINTERFACEAPI_T1157390748_H
#define LINUXNETWORKINTERFACEAPI_T1157390748_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.NetworkInterfaceFactory/LinuxNetworkInterfaceAPI
struct  LinuxNetworkInterfaceAPI_t1157390748  : public UnixNetworkInterfaceAPI_t1061423219
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LINUXNETWORKINTERFACEAPI_T1157390748_H
#ifndef MACOSNETWORKINTERFACEAPI_T1249733612_H
#define MACOSNETWORKINTERFACEAPI_T1249733612_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.NetworkInterfaceFactory/MacOsNetworkInterfaceAPI
struct  MacOsNetworkInterfaceAPI_t1249733612  : public UnixNetworkInterfaceAPI_t1061423219
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MACOSNETWORKINTERFACEAPI_T1249733612_H
#ifndef NETWORKINTERFACETYPE_T616418749_H
#define NETWORKINTERFACETYPE_T616418749_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.NetworkInterfaceType
struct  NetworkInterfaceType_t616418749 
{
public:
	// System.Int32 System.Net.NetworkInformation.NetworkInterfaceType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(NetworkInterfaceType_t616418749, ___value___2)); }
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
#endif // NETWORKINTERFACETYPE_T616418749_H
#ifndef OPERATIONALSTATUS_T2709089529_H
#define OPERATIONALSTATUS_T2709089529_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.OperationalStatus
struct  OperationalStatus_t2709089529 
{
public:
	// System.Int32 System.Net.NetworkInformation.OperationalStatus::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(OperationalStatus_t2709089529, ___value___2)); }
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
#endif // OPERATIONALSTATUS_T2709089529_H
#ifndef UNIXIPGLOBALPROPERTIES_T1460024316_H
#define UNIXIPGLOBALPROPERTIES_T1460024316_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.UnixIPGlobalProperties
struct  UnixIPGlobalProperties_t1460024316  : public CommonUnixIPGlobalProperties_t1338606518
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNIXIPGLOBALPROPERTIES_T1460024316_H
#ifndef UNIXIPINTERFACEPROPERTIES_T1296234392_H
#define UNIXIPINTERFACEPROPERTIES_T1296234392_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.UnixIPInterfaceProperties
struct  UnixIPInterfaceProperties_t1296234392  : public IPInterfaceProperties_t3964383369
{
public:
	// System.Net.NetworkInformation.UnixNetworkInterface System.Net.NetworkInformation.UnixIPInterfaceProperties::iface
	UnixNetworkInterface_t2401762829 * ___iface_0;
	// System.Collections.Generic.List`1<System.Net.IPAddress> System.Net.NetworkInformation.UnixIPInterfaceProperties::addresses
	List_1_t1713852332 * ___addresses_1;
	// System.Net.NetworkInformation.IPAddressCollection System.Net.NetworkInformation.UnixIPInterfaceProperties::dns_servers
	IPAddressCollection_t2315030214 * ___dns_servers_2;
	// System.String System.Net.NetworkInformation.UnixIPInterfaceProperties::dns_suffix
	String_t* ___dns_suffix_5;
	// System.DateTime System.Net.NetworkInformation.UnixIPInterfaceProperties::last_parse
	DateTime_t3738529785  ___last_parse_6;

public:
	inline static int32_t get_offset_of_iface_0() { return static_cast<int32_t>(offsetof(UnixIPInterfaceProperties_t1296234392, ___iface_0)); }
	inline UnixNetworkInterface_t2401762829 * get_iface_0() const { return ___iface_0; }
	inline UnixNetworkInterface_t2401762829 ** get_address_of_iface_0() { return &___iface_0; }
	inline void set_iface_0(UnixNetworkInterface_t2401762829 * value)
	{
		___iface_0 = value;
		Il2CppCodeGenWriteBarrier((&___iface_0), value);
	}

	inline static int32_t get_offset_of_addresses_1() { return static_cast<int32_t>(offsetof(UnixIPInterfaceProperties_t1296234392, ___addresses_1)); }
	inline List_1_t1713852332 * get_addresses_1() const { return ___addresses_1; }
	inline List_1_t1713852332 ** get_address_of_addresses_1() { return &___addresses_1; }
	inline void set_addresses_1(List_1_t1713852332 * value)
	{
		___addresses_1 = value;
		Il2CppCodeGenWriteBarrier((&___addresses_1), value);
	}

	inline static int32_t get_offset_of_dns_servers_2() { return static_cast<int32_t>(offsetof(UnixIPInterfaceProperties_t1296234392, ___dns_servers_2)); }
	inline IPAddressCollection_t2315030214 * get_dns_servers_2() const { return ___dns_servers_2; }
	inline IPAddressCollection_t2315030214 ** get_address_of_dns_servers_2() { return &___dns_servers_2; }
	inline void set_dns_servers_2(IPAddressCollection_t2315030214 * value)
	{
		___dns_servers_2 = value;
		Il2CppCodeGenWriteBarrier((&___dns_servers_2), value);
	}

	inline static int32_t get_offset_of_dns_suffix_5() { return static_cast<int32_t>(offsetof(UnixIPInterfaceProperties_t1296234392, ___dns_suffix_5)); }
	inline String_t* get_dns_suffix_5() const { return ___dns_suffix_5; }
	inline String_t** get_address_of_dns_suffix_5() { return &___dns_suffix_5; }
	inline void set_dns_suffix_5(String_t* value)
	{
		___dns_suffix_5 = value;
		Il2CppCodeGenWriteBarrier((&___dns_suffix_5), value);
	}

	inline static int32_t get_offset_of_last_parse_6() { return static_cast<int32_t>(offsetof(UnixIPInterfaceProperties_t1296234392, ___last_parse_6)); }
	inline DateTime_t3738529785  get_last_parse_6() const { return ___last_parse_6; }
	inline DateTime_t3738529785 * get_address_of_last_parse_6() { return &___last_parse_6; }
	inline void set_last_parse_6(DateTime_t3738529785  value)
	{
		___last_parse_6 = value;
	}
};

struct UnixIPInterfaceProperties_t1296234392_StaticFields
{
public:
	// System.Text.RegularExpressions.Regex System.Net.NetworkInformation.UnixIPInterfaceProperties::ns
	Regex_t3657309853 * ___ns_3;
	// System.Text.RegularExpressions.Regex System.Net.NetworkInformation.UnixIPInterfaceProperties::search
	Regex_t3657309853 * ___search_4;

public:
	inline static int32_t get_offset_of_ns_3() { return static_cast<int32_t>(offsetof(UnixIPInterfaceProperties_t1296234392_StaticFields, ___ns_3)); }
	inline Regex_t3657309853 * get_ns_3() const { return ___ns_3; }
	inline Regex_t3657309853 ** get_address_of_ns_3() { return &___ns_3; }
	inline void set_ns_3(Regex_t3657309853 * value)
	{
		___ns_3 = value;
		Il2CppCodeGenWriteBarrier((&___ns_3), value);
	}

	inline static int32_t get_offset_of_search_4() { return static_cast<int32_t>(offsetof(UnixIPInterfaceProperties_t1296234392_StaticFields, ___search_4)); }
	inline Regex_t3657309853 * get_search_4() const { return ___search_4; }
	inline Regex_t3657309853 ** get_address_of_search_4() { return &___search_4; }
	inline void set_search_4(Regex_t3657309853 * value)
	{
		___search_4 = value;
		Il2CppCodeGenWriteBarrier((&___search_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNIXIPINTERFACEPROPERTIES_T1296234392_H
#ifndef WIN32_IP_ADDR_STRING_T1213417184_H
#define WIN32_IP_ADDR_STRING_T1213417184_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.Win32_IP_ADDR_STRING
struct  Win32_IP_ADDR_STRING_t1213417184 
{
public:
	// System.IntPtr System.Net.NetworkInformation.Win32_IP_ADDR_STRING::Next
	intptr_t ___Next_0;
	// System.String System.Net.NetworkInformation.Win32_IP_ADDR_STRING::IpAddress
	String_t* ___IpAddress_1;
	// System.String System.Net.NetworkInformation.Win32_IP_ADDR_STRING::IpMask
	String_t* ___IpMask_2;
	// System.UInt32 System.Net.NetworkInformation.Win32_IP_ADDR_STRING::Context
	uint32_t ___Context_3;

public:
	inline static int32_t get_offset_of_Next_0() { return static_cast<int32_t>(offsetof(Win32_IP_ADDR_STRING_t1213417184, ___Next_0)); }
	inline intptr_t get_Next_0() const { return ___Next_0; }
	inline intptr_t* get_address_of_Next_0() { return &___Next_0; }
	inline void set_Next_0(intptr_t value)
	{
		___Next_0 = value;
	}

	inline static int32_t get_offset_of_IpAddress_1() { return static_cast<int32_t>(offsetof(Win32_IP_ADDR_STRING_t1213417184, ___IpAddress_1)); }
	inline String_t* get_IpAddress_1() const { return ___IpAddress_1; }
	inline String_t** get_address_of_IpAddress_1() { return &___IpAddress_1; }
	inline void set_IpAddress_1(String_t* value)
	{
		___IpAddress_1 = value;
		Il2CppCodeGenWriteBarrier((&___IpAddress_1), value);
	}

	inline static int32_t get_offset_of_IpMask_2() { return static_cast<int32_t>(offsetof(Win32_IP_ADDR_STRING_t1213417184, ___IpMask_2)); }
	inline String_t* get_IpMask_2() const { return ___IpMask_2; }
	inline String_t** get_address_of_IpMask_2() { return &___IpMask_2; }
	inline void set_IpMask_2(String_t* value)
	{
		___IpMask_2 = value;
		Il2CppCodeGenWriteBarrier((&___IpMask_2), value);
	}

	inline static int32_t get_offset_of_Context_3() { return static_cast<int32_t>(offsetof(Win32_IP_ADDR_STRING_t1213417184, ___Context_3)); }
	inline uint32_t get_Context_3() const { return ___Context_3; }
	inline uint32_t* get_address_of_Context_3() { return &___Context_3; }
	inline void set_Context_3(uint32_t value)
	{
		___Context_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Net.NetworkInformation.Win32_IP_ADDR_STRING
struct Win32_IP_ADDR_STRING_t1213417184_marshaled_pinvoke
{
	intptr_t ___Next_0;
	char ___IpAddress_1[16];
	char ___IpMask_2[16];
	uint32_t ___Context_3;
};
// Native definition for COM marshalling of System.Net.NetworkInformation.Win32_IP_ADDR_STRING
struct Win32_IP_ADDR_STRING_t1213417184_marshaled_com
{
	intptr_t ___Next_0;
	char ___IpAddress_1[16];
	char ___IpMask_2[16];
	uint32_t ___Context_3;
};
#endif // WIN32_IP_ADDR_STRING_T1213417184_H
#ifndef IFA_IFU_T1794893192_H
#define IFA_IFU_T1794893192_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.ifa_ifu
struct  ifa_ifu_t1794893192 
{
public:
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.IntPtr System.Net.NetworkInformation.ifa_ifu::ifu_broadaddr
			intptr_t ___ifu_broadaddr_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			intptr_t ___ifu_broadaddr_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.IntPtr System.Net.NetworkInformation.ifa_ifu::ifu_dstaddr
			intptr_t ___ifu_dstaddr_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			intptr_t ___ifu_dstaddr_1_forAlignmentOnly;
		};
	};

public:
	inline static int32_t get_offset_of_ifu_broadaddr_0() { return static_cast<int32_t>(offsetof(ifa_ifu_t1794893192, ___ifu_broadaddr_0)); }
	inline intptr_t get_ifu_broadaddr_0() const { return ___ifu_broadaddr_0; }
	inline intptr_t* get_address_of_ifu_broadaddr_0() { return &___ifu_broadaddr_0; }
	inline void set_ifu_broadaddr_0(intptr_t value)
	{
		___ifu_broadaddr_0 = value;
	}

	inline static int32_t get_offset_of_ifu_dstaddr_1() { return static_cast<int32_t>(offsetof(ifa_ifu_t1794893192, ___ifu_dstaddr_1)); }
	inline intptr_t get_ifu_dstaddr_1() const { return ___ifu_dstaddr_1; }
	inline intptr_t* get_address_of_ifu_dstaddr_1() { return &___ifu_dstaddr_1; }
	inline void set_ifu_dstaddr_1(intptr_t value)
	{
		___ifu_dstaddr_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // IFA_IFU_T1794893192_H
#ifndef IN6_ADDR_T3611791508_H
#define IN6_ADDR_T3611791508_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.in6_addr
struct  in6_addr_t3611791508 
{
public:
	// System.Byte[] System.Net.NetworkInformation.in6_addr::u6_addr8
	ByteU5BU5D_t4116647657* ___u6_addr8_0;

public:
	inline static int32_t get_offset_of_u6_addr8_0() { return static_cast<int32_t>(offsetof(in6_addr_t3611791508, ___u6_addr8_0)); }
	inline ByteU5BU5D_t4116647657* get_u6_addr8_0() const { return ___u6_addr8_0; }
	inline ByteU5BU5D_t4116647657** get_address_of_u6_addr8_0() { return &___u6_addr8_0; }
	inline void set_u6_addr8_0(ByteU5BU5D_t4116647657* value)
	{
		___u6_addr8_0 = value;
		Il2CppCodeGenWriteBarrier((&___u6_addr8_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Net.NetworkInformation.in6_addr
struct in6_addr_t3611791508_marshaled_pinvoke
{
	uint8_t ___u6_addr8_0[16];
};
// Native definition for COM marshalling of System.Net.NetworkInformation.in6_addr
struct in6_addr_t3611791508_marshaled_com
{
	uint8_t ___u6_addr8_0[16];
};
#endif // IN6_ADDR_T3611791508_H
#ifndef SOCKADDR_LL_T3978606313_H
#define SOCKADDR_LL_T3978606313_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.sockaddr_ll
struct  sockaddr_ll_t3978606313 
{
public:
	// System.UInt16 System.Net.NetworkInformation.sockaddr_ll::sll_family
	uint16_t ___sll_family_0;
	// System.UInt16 System.Net.NetworkInformation.sockaddr_ll::sll_protocol
	uint16_t ___sll_protocol_1;
	// System.Int32 System.Net.NetworkInformation.sockaddr_ll::sll_ifindex
	int32_t ___sll_ifindex_2;
	// System.UInt16 System.Net.NetworkInformation.sockaddr_ll::sll_hatype
	uint16_t ___sll_hatype_3;
	// System.Byte System.Net.NetworkInformation.sockaddr_ll::sll_pkttype
	uint8_t ___sll_pkttype_4;
	// System.Byte System.Net.NetworkInformation.sockaddr_ll::sll_halen
	uint8_t ___sll_halen_5;
	// System.Byte[] System.Net.NetworkInformation.sockaddr_ll::sll_addr
	ByteU5BU5D_t4116647657* ___sll_addr_6;

public:
	inline static int32_t get_offset_of_sll_family_0() { return static_cast<int32_t>(offsetof(sockaddr_ll_t3978606313, ___sll_family_0)); }
	inline uint16_t get_sll_family_0() const { return ___sll_family_0; }
	inline uint16_t* get_address_of_sll_family_0() { return &___sll_family_0; }
	inline void set_sll_family_0(uint16_t value)
	{
		___sll_family_0 = value;
	}

	inline static int32_t get_offset_of_sll_protocol_1() { return static_cast<int32_t>(offsetof(sockaddr_ll_t3978606313, ___sll_protocol_1)); }
	inline uint16_t get_sll_protocol_1() const { return ___sll_protocol_1; }
	inline uint16_t* get_address_of_sll_protocol_1() { return &___sll_protocol_1; }
	inline void set_sll_protocol_1(uint16_t value)
	{
		___sll_protocol_1 = value;
	}

	inline static int32_t get_offset_of_sll_ifindex_2() { return static_cast<int32_t>(offsetof(sockaddr_ll_t3978606313, ___sll_ifindex_2)); }
	inline int32_t get_sll_ifindex_2() const { return ___sll_ifindex_2; }
	inline int32_t* get_address_of_sll_ifindex_2() { return &___sll_ifindex_2; }
	inline void set_sll_ifindex_2(int32_t value)
	{
		___sll_ifindex_2 = value;
	}

	inline static int32_t get_offset_of_sll_hatype_3() { return static_cast<int32_t>(offsetof(sockaddr_ll_t3978606313, ___sll_hatype_3)); }
	inline uint16_t get_sll_hatype_3() const { return ___sll_hatype_3; }
	inline uint16_t* get_address_of_sll_hatype_3() { return &___sll_hatype_3; }
	inline void set_sll_hatype_3(uint16_t value)
	{
		___sll_hatype_3 = value;
	}

	inline static int32_t get_offset_of_sll_pkttype_4() { return static_cast<int32_t>(offsetof(sockaddr_ll_t3978606313, ___sll_pkttype_4)); }
	inline uint8_t get_sll_pkttype_4() const { return ___sll_pkttype_4; }
	inline uint8_t* get_address_of_sll_pkttype_4() { return &___sll_pkttype_4; }
	inline void set_sll_pkttype_4(uint8_t value)
	{
		___sll_pkttype_4 = value;
	}

	inline static int32_t get_offset_of_sll_halen_5() { return static_cast<int32_t>(offsetof(sockaddr_ll_t3978606313, ___sll_halen_5)); }
	inline uint8_t get_sll_halen_5() const { return ___sll_halen_5; }
	inline uint8_t* get_address_of_sll_halen_5() { return &___sll_halen_5; }
	inline void set_sll_halen_5(uint8_t value)
	{
		___sll_halen_5 = value;
	}

	inline static int32_t get_offset_of_sll_addr_6() { return static_cast<int32_t>(offsetof(sockaddr_ll_t3978606313, ___sll_addr_6)); }
	inline ByteU5BU5D_t4116647657* get_sll_addr_6() const { return ___sll_addr_6; }
	inline ByteU5BU5D_t4116647657** get_address_of_sll_addr_6() { return &___sll_addr_6; }
	inline void set_sll_addr_6(ByteU5BU5D_t4116647657* value)
	{
		___sll_addr_6 = value;
		Il2CppCodeGenWriteBarrier((&___sll_addr_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Net.NetworkInformation.sockaddr_ll
struct sockaddr_ll_t3978606313_marshaled_pinvoke
{
	uint16_t ___sll_family_0;
	uint16_t ___sll_protocol_1;
	int32_t ___sll_ifindex_2;
	uint16_t ___sll_hatype_3;
	uint8_t ___sll_pkttype_4;
	uint8_t ___sll_halen_5;
	uint8_t ___sll_addr_6[8];
};
// Native definition for COM marshalling of System.Net.NetworkInformation.sockaddr_ll
struct sockaddr_ll_t3978606313_marshaled_com
{
	uint16_t ___sll_family_0;
	uint16_t ___sll_protocol_1;
	int32_t ___sll_ifindex_2;
	uint16_t ___sll_hatype_3;
	uint8_t ___sll_pkttype_4;
	uint8_t ___sll_halen_5;
	uint8_t ___sll_addr_6[8];
};
#endif // SOCKADDR_LL_T3978606313_H
#ifndef READSTATE_T245281014_H
#define READSTATE_T245281014_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.ReadState
struct  ReadState_t245281014 
{
public:
	// System.Int32 System.Net.ReadState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ReadState_t245281014, ___value___2)); }
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
#endif // READSTATE_T245281014_H
#ifndef AUTHENTICATEDSTREAM_T3415418016_H
#define AUTHENTICATEDSTREAM_T3415418016_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Security.AuthenticatedStream
struct  AuthenticatedStream_t3415418016  : public Stream_t1273022909
{
public:
	// System.IO.Stream System.Net.Security.AuthenticatedStream::_InnerStream
	Stream_t1273022909 * ____InnerStream_4;
	// System.Boolean System.Net.Security.AuthenticatedStream::_LeaveStreamOpen
	bool ____LeaveStreamOpen_5;

public:
	inline static int32_t get_offset_of__InnerStream_4() { return static_cast<int32_t>(offsetof(AuthenticatedStream_t3415418016, ____InnerStream_4)); }
	inline Stream_t1273022909 * get__InnerStream_4() const { return ____InnerStream_4; }
	inline Stream_t1273022909 ** get_address_of__InnerStream_4() { return &____InnerStream_4; }
	inline void set__InnerStream_4(Stream_t1273022909 * value)
	{
		____InnerStream_4 = value;
		Il2CppCodeGenWriteBarrier((&____InnerStream_4), value);
	}

	inline static int32_t get_offset_of__LeaveStreamOpen_5() { return static_cast<int32_t>(offsetof(AuthenticatedStream_t3415418016, ____LeaveStreamOpen_5)); }
	inline bool get__LeaveStreamOpen_5() const { return ____LeaveStreamOpen_5; }
	inline bool* get_address_of__LeaveStreamOpen_5() { return &____LeaveStreamOpen_5; }
	inline void set__LeaveStreamOpen_5(bool value)
	{
		____LeaveStreamOpen_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AUTHENTICATEDSTREAM_T3415418016_H
#ifndef AUTHENTICATIONLEVEL_T1236753641_H
#define AUTHENTICATIONLEVEL_T1236753641_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Security.AuthenticationLevel
struct  AuthenticationLevel_t1236753641 
{
public:
	// System.Int32 System.Net.Security.AuthenticationLevel::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AuthenticationLevel_t1236753641, ___value___2)); }
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
#endif // AUTHENTICATIONLEVEL_T1236753641_H
#ifndef SSLPOLICYERRORS_T2205227823_H
#define SSLPOLICYERRORS_T2205227823_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Security.SslPolicyErrors
struct  SslPolicyErrors_t2205227823 
{
public:
	// System.Int32 System.Net.Security.SslPolicyErrors::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SslPolicyErrors_t2205227823, ___value___2)); }
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
#endif // SSLPOLICYERRORS_T2205227823_H
#ifndef SECURITYPROTOCOLTYPE_T2721465497_H
#define SECURITYPROTOCOLTYPE_T2721465497_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.SecurityProtocolType
struct  SecurityProtocolType_t2721465497 
{
public:
	// System.Int32 System.Net.SecurityProtocolType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SecurityProtocolType_t2721465497, ___value___2)); }
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
#endif // SECURITYPROTOCOLTYPE_T2721465497_H
#ifndef SERVICEPOINT_T2786966844_H
#define SERVICEPOINT_T2786966844_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.ServicePoint
struct  ServicePoint_t2786966844  : public RuntimeObject
{
public:
	// System.Uri System.Net.ServicePoint::uri
	Uri_t100236324 * ___uri_0;
	// System.Int32 System.Net.ServicePoint::connectionLimit
	int32_t ___connectionLimit_1;
	// System.Int32 System.Net.ServicePoint::maxIdleTime
	int32_t ___maxIdleTime_2;
	// System.Int32 System.Net.ServicePoint::currentConnections
	int32_t ___currentConnections_3;
	// System.DateTime System.Net.ServicePoint::idleSince
	DateTime_t3738529785  ___idleSince_4;
	// System.DateTime System.Net.ServicePoint::lastDnsResolve
	DateTime_t3738529785  ___lastDnsResolve_5;
	// System.Version System.Net.ServicePoint::protocolVersion
	Version_t3456873960 * ___protocolVersion_6;
	// System.Net.IPHostEntry System.Net.ServicePoint::host
	IPHostEntry_t263743900 * ___host_7;
	// System.Boolean System.Net.ServicePoint::usesProxy
	bool ___usesProxy_8;
	// System.Collections.Generic.Dictionary`2<System.String,System.Net.WebConnectionGroup> System.Net.ServicePoint::groups
	Dictionary_2_t1497636287 * ___groups_9;
	// System.Boolean System.Net.ServicePoint::sendContinue
	bool ___sendContinue_10;
	// System.Boolean System.Net.ServicePoint::useConnect
	bool ___useConnect_11;
	// System.Object System.Net.ServicePoint::hostE
	RuntimeObject * ___hostE_12;
	// System.Boolean System.Net.ServicePoint::useNagle
	bool ___useNagle_13;
	// System.Net.BindIPEndPoint System.Net.ServicePoint::endPointCallback
	BindIPEndPoint_t1029027275 * ___endPointCallback_14;
	// System.Boolean System.Net.ServicePoint::tcp_keepalive
	bool ___tcp_keepalive_15;
	// System.Int32 System.Net.ServicePoint::tcp_keepalive_time
	int32_t ___tcp_keepalive_time_16;
	// System.Int32 System.Net.ServicePoint::tcp_keepalive_interval
	int32_t ___tcp_keepalive_interval_17;
	// System.Threading.Timer System.Net.ServicePoint::idleTimer
	Timer_t716671026 * ___idleTimer_18;
	// System.Object System.Net.ServicePoint::m_ServerCertificateOrBytes
	RuntimeObject * ___m_ServerCertificateOrBytes_19;
	// System.Object System.Net.ServicePoint::m_ClientCertificateOrBytes
	RuntimeObject * ___m_ClientCertificateOrBytes_20;

public:
	inline static int32_t get_offset_of_uri_0() { return static_cast<int32_t>(offsetof(ServicePoint_t2786966844, ___uri_0)); }
	inline Uri_t100236324 * get_uri_0() const { return ___uri_0; }
	inline Uri_t100236324 ** get_address_of_uri_0() { return &___uri_0; }
	inline void set_uri_0(Uri_t100236324 * value)
	{
		___uri_0 = value;
		Il2CppCodeGenWriteBarrier((&___uri_0), value);
	}

	inline static int32_t get_offset_of_connectionLimit_1() { return static_cast<int32_t>(offsetof(ServicePoint_t2786966844, ___connectionLimit_1)); }
	inline int32_t get_connectionLimit_1() const { return ___connectionLimit_1; }
	inline int32_t* get_address_of_connectionLimit_1() { return &___connectionLimit_1; }
	inline void set_connectionLimit_1(int32_t value)
	{
		___connectionLimit_1 = value;
	}

	inline static int32_t get_offset_of_maxIdleTime_2() { return static_cast<int32_t>(offsetof(ServicePoint_t2786966844, ___maxIdleTime_2)); }
	inline int32_t get_maxIdleTime_2() const { return ___maxIdleTime_2; }
	inline int32_t* get_address_of_maxIdleTime_2() { return &___maxIdleTime_2; }
	inline void set_maxIdleTime_2(int32_t value)
	{
		___maxIdleTime_2 = value;
	}

	inline static int32_t get_offset_of_currentConnections_3() { return static_cast<int32_t>(offsetof(ServicePoint_t2786966844, ___currentConnections_3)); }
	inline int32_t get_currentConnections_3() const { return ___currentConnections_3; }
	inline int32_t* get_address_of_currentConnections_3() { return &___currentConnections_3; }
	inline void set_currentConnections_3(int32_t value)
	{
		___currentConnections_3 = value;
	}

	inline static int32_t get_offset_of_idleSince_4() { return static_cast<int32_t>(offsetof(ServicePoint_t2786966844, ___idleSince_4)); }
	inline DateTime_t3738529785  get_idleSince_4() const { return ___idleSince_4; }
	inline DateTime_t3738529785 * get_address_of_idleSince_4() { return &___idleSince_4; }
	inline void set_idleSince_4(DateTime_t3738529785  value)
	{
		___idleSince_4 = value;
	}

	inline static int32_t get_offset_of_lastDnsResolve_5() { return static_cast<int32_t>(offsetof(ServicePoint_t2786966844, ___lastDnsResolve_5)); }
	inline DateTime_t3738529785  get_lastDnsResolve_5() const { return ___lastDnsResolve_5; }
	inline DateTime_t3738529785 * get_address_of_lastDnsResolve_5() { return &___lastDnsResolve_5; }
	inline void set_lastDnsResolve_5(DateTime_t3738529785  value)
	{
		___lastDnsResolve_5 = value;
	}

	inline static int32_t get_offset_of_protocolVersion_6() { return static_cast<int32_t>(offsetof(ServicePoint_t2786966844, ___protocolVersion_6)); }
	inline Version_t3456873960 * get_protocolVersion_6() const { return ___protocolVersion_6; }
	inline Version_t3456873960 ** get_address_of_protocolVersion_6() { return &___protocolVersion_6; }
	inline void set_protocolVersion_6(Version_t3456873960 * value)
	{
		___protocolVersion_6 = value;
		Il2CppCodeGenWriteBarrier((&___protocolVersion_6), value);
	}

	inline static int32_t get_offset_of_host_7() { return static_cast<int32_t>(offsetof(ServicePoint_t2786966844, ___host_7)); }
	inline IPHostEntry_t263743900 * get_host_7() const { return ___host_7; }
	inline IPHostEntry_t263743900 ** get_address_of_host_7() { return &___host_7; }
	inline void set_host_7(IPHostEntry_t263743900 * value)
	{
		___host_7 = value;
		Il2CppCodeGenWriteBarrier((&___host_7), value);
	}

	inline static int32_t get_offset_of_usesProxy_8() { return static_cast<int32_t>(offsetof(ServicePoint_t2786966844, ___usesProxy_8)); }
	inline bool get_usesProxy_8() const { return ___usesProxy_8; }
	inline bool* get_address_of_usesProxy_8() { return &___usesProxy_8; }
	inline void set_usesProxy_8(bool value)
	{
		___usesProxy_8 = value;
	}

	inline static int32_t get_offset_of_groups_9() { return static_cast<int32_t>(offsetof(ServicePoint_t2786966844, ___groups_9)); }
	inline Dictionary_2_t1497636287 * get_groups_9() const { return ___groups_9; }
	inline Dictionary_2_t1497636287 ** get_address_of_groups_9() { return &___groups_9; }
	inline void set_groups_9(Dictionary_2_t1497636287 * value)
	{
		___groups_9 = value;
		Il2CppCodeGenWriteBarrier((&___groups_9), value);
	}

	inline static int32_t get_offset_of_sendContinue_10() { return static_cast<int32_t>(offsetof(ServicePoint_t2786966844, ___sendContinue_10)); }
	inline bool get_sendContinue_10() const { return ___sendContinue_10; }
	inline bool* get_address_of_sendContinue_10() { return &___sendContinue_10; }
	inline void set_sendContinue_10(bool value)
	{
		___sendContinue_10 = value;
	}

	inline static int32_t get_offset_of_useConnect_11() { return static_cast<int32_t>(offsetof(ServicePoint_t2786966844, ___useConnect_11)); }
	inline bool get_useConnect_11() const { return ___useConnect_11; }
	inline bool* get_address_of_useConnect_11() { return &___useConnect_11; }
	inline void set_useConnect_11(bool value)
	{
		___useConnect_11 = value;
	}

	inline static int32_t get_offset_of_hostE_12() { return static_cast<int32_t>(offsetof(ServicePoint_t2786966844, ___hostE_12)); }
	inline RuntimeObject * get_hostE_12() const { return ___hostE_12; }
	inline RuntimeObject ** get_address_of_hostE_12() { return &___hostE_12; }
	inline void set_hostE_12(RuntimeObject * value)
	{
		___hostE_12 = value;
		Il2CppCodeGenWriteBarrier((&___hostE_12), value);
	}

	inline static int32_t get_offset_of_useNagle_13() { return static_cast<int32_t>(offsetof(ServicePoint_t2786966844, ___useNagle_13)); }
	inline bool get_useNagle_13() const { return ___useNagle_13; }
	inline bool* get_address_of_useNagle_13() { return &___useNagle_13; }
	inline void set_useNagle_13(bool value)
	{
		___useNagle_13 = value;
	}

	inline static int32_t get_offset_of_endPointCallback_14() { return static_cast<int32_t>(offsetof(ServicePoint_t2786966844, ___endPointCallback_14)); }
	inline BindIPEndPoint_t1029027275 * get_endPointCallback_14() const { return ___endPointCallback_14; }
	inline BindIPEndPoint_t1029027275 ** get_address_of_endPointCallback_14() { return &___endPointCallback_14; }
	inline void set_endPointCallback_14(BindIPEndPoint_t1029027275 * value)
	{
		___endPointCallback_14 = value;
		Il2CppCodeGenWriteBarrier((&___endPointCallback_14), value);
	}

	inline static int32_t get_offset_of_tcp_keepalive_15() { return static_cast<int32_t>(offsetof(ServicePoint_t2786966844, ___tcp_keepalive_15)); }
	inline bool get_tcp_keepalive_15() const { return ___tcp_keepalive_15; }
	inline bool* get_address_of_tcp_keepalive_15() { return &___tcp_keepalive_15; }
	inline void set_tcp_keepalive_15(bool value)
	{
		___tcp_keepalive_15 = value;
	}

	inline static int32_t get_offset_of_tcp_keepalive_time_16() { return static_cast<int32_t>(offsetof(ServicePoint_t2786966844, ___tcp_keepalive_time_16)); }
	inline int32_t get_tcp_keepalive_time_16() const { return ___tcp_keepalive_time_16; }
	inline int32_t* get_address_of_tcp_keepalive_time_16() { return &___tcp_keepalive_time_16; }
	inline void set_tcp_keepalive_time_16(int32_t value)
	{
		___tcp_keepalive_time_16 = value;
	}

	inline static int32_t get_offset_of_tcp_keepalive_interval_17() { return static_cast<int32_t>(offsetof(ServicePoint_t2786966844, ___tcp_keepalive_interval_17)); }
	inline int32_t get_tcp_keepalive_interval_17() const { return ___tcp_keepalive_interval_17; }
	inline int32_t* get_address_of_tcp_keepalive_interval_17() { return &___tcp_keepalive_interval_17; }
	inline void set_tcp_keepalive_interval_17(int32_t value)
	{
		___tcp_keepalive_interval_17 = value;
	}

	inline static int32_t get_offset_of_idleTimer_18() { return static_cast<int32_t>(offsetof(ServicePoint_t2786966844, ___idleTimer_18)); }
	inline Timer_t716671026 * get_idleTimer_18() const { return ___idleTimer_18; }
	inline Timer_t716671026 ** get_address_of_idleTimer_18() { return &___idleTimer_18; }
	inline void set_idleTimer_18(Timer_t716671026 * value)
	{
		___idleTimer_18 = value;
		Il2CppCodeGenWriteBarrier((&___idleTimer_18), value);
	}

	inline static int32_t get_offset_of_m_ServerCertificateOrBytes_19() { return static_cast<int32_t>(offsetof(ServicePoint_t2786966844, ___m_ServerCertificateOrBytes_19)); }
	inline RuntimeObject * get_m_ServerCertificateOrBytes_19() const { return ___m_ServerCertificateOrBytes_19; }
	inline RuntimeObject ** get_address_of_m_ServerCertificateOrBytes_19() { return &___m_ServerCertificateOrBytes_19; }
	inline void set_m_ServerCertificateOrBytes_19(RuntimeObject * value)
	{
		___m_ServerCertificateOrBytes_19 = value;
		Il2CppCodeGenWriteBarrier((&___m_ServerCertificateOrBytes_19), value);
	}

	inline static int32_t get_offset_of_m_ClientCertificateOrBytes_20() { return static_cast<int32_t>(offsetof(ServicePoint_t2786966844, ___m_ClientCertificateOrBytes_20)); }
	inline RuntimeObject * get_m_ClientCertificateOrBytes_20() const { return ___m_ClientCertificateOrBytes_20; }
	inline RuntimeObject ** get_address_of_m_ClientCertificateOrBytes_20() { return &___m_ClientCertificateOrBytes_20; }
	inline void set_m_ClientCertificateOrBytes_20(RuntimeObject * value)
	{
		___m_ClientCertificateOrBytes_20 = value;
		Il2CppCodeGenWriteBarrier((&___m_ClientCertificateOrBytes_20), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SERVICEPOINT_T2786966844_H
#ifndef SIMPLEASYNCRESULT_T3946017618_H
#define SIMPLEASYNCRESULT_T3946017618_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.SimpleAsyncResult
struct  SimpleAsyncResult_t3946017618  : public RuntimeObject
{
public:
	// System.Threading.ManualResetEvent System.Net.SimpleAsyncResult::handle
	ManualResetEvent_t451242010 * ___handle_0;
	// System.Boolean System.Net.SimpleAsyncResult::synch
	bool ___synch_1;
	// System.Boolean System.Net.SimpleAsyncResult::isCompleted
	bool ___isCompleted_2;
	// System.Net.SimpleAsyncCallback System.Net.SimpleAsyncResult::cb
	SimpleAsyncCallback_t2966023072 * ___cb_3;
	// System.Object System.Net.SimpleAsyncResult::state
	RuntimeObject * ___state_4;
	// System.Boolean System.Net.SimpleAsyncResult::callbackDone
	bool ___callbackDone_5;
	// System.Exception System.Net.SimpleAsyncResult::exc
	Exception_t * ___exc_6;
	// System.Object System.Net.SimpleAsyncResult::locker
	RuntimeObject * ___locker_7;
	// System.Nullable`1<System.Boolean> System.Net.SimpleAsyncResult::user_read_synch
	Nullable_1_t1819850047  ___user_read_synch_8;

public:
	inline static int32_t get_offset_of_handle_0() { return static_cast<int32_t>(offsetof(SimpleAsyncResult_t3946017618, ___handle_0)); }
	inline ManualResetEvent_t451242010 * get_handle_0() const { return ___handle_0; }
	inline ManualResetEvent_t451242010 ** get_address_of_handle_0() { return &___handle_0; }
	inline void set_handle_0(ManualResetEvent_t451242010 * value)
	{
		___handle_0 = value;
		Il2CppCodeGenWriteBarrier((&___handle_0), value);
	}

	inline static int32_t get_offset_of_synch_1() { return static_cast<int32_t>(offsetof(SimpleAsyncResult_t3946017618, ___synch_1)); }
	inline bool get_synch_1() const { return ___synch_1; }
	inline bool* get_address_of_synch_1() { return &___synch_1; }
	inline void set_synch_1(bool value)
	{
		___synch_1 = value;
	}

	inline static int32_t get_offset_of_isCompleted_2() { return static_cast<int32_t>(offsetof(SimpleAsyncResult_t3946017618, ___isCompleted_2)); }
	inline bool get_isCompleted_2() const { return ___isCompleted_2; }
	inline bool* get_address_of_isCompleted_2() { return &___isCompleted_2; }
	inline void set_isCompleted_2(bool value)
	{
		___isCompleted_2 = value;
	}

	inline static int32_t get_offset_of_cb_3() { return static_cast<int32_t>(offsetof(SimpleAsyncResult_t3946017618, ___cb_3)); }
	inline SimpleAsyncCallback_t2966023072 * get_cb_3() const { return ___cb_3; }
	inline SimpleAsyncCallback_t2966023072 ** get_address_of_cb_3() { return &___cb_3; }
	inline void set_cb_3(SimpleAsyncCallback_t2966023072 * value)
	{
		___cb_3 = value;
		Il2CppCodeGenWriteBarrier((&___cb_3), value);
	}

	inline static int32_t get_offset_of_state_4() { return static_cast<int32_t>(offsetof(SimpleAsyncResult_t3946017618, ___state_4)); }
	inline RuntimeObject * get_state_4() const { return ___state_4; }
	inline RuntimeObject ** get_address_of_state_4() { return &___state_4; }
	inline void set_state_4(RuntimeObject * value)
	{
		___state_4 = value;
		Il2CppCodeGenWriteBarrier((&___state_4), value);
	}

	inline static int32_t get_offset_of_callbackDone_5() { return static_cast<int32_t>(offsetof(SimpleAsyncResult_t3946017618, ___callbackDone_5)); }
	inline bool get_callbackDone_5() const { return ___callbackDone_5; }
	inline bool* get_address_of_callbackDone_5() { return &___callbackDone_5; }
	inline void set_callbackDone_5(bool value)
	{
		___callbackDone_5 = value;
	}

	inline static int32_t get_offset_of_exc_6() { return static_cast<int32_t>(offsetof(SimpleAsyncResult_t3946017618, ___exc_6)); }
	inline Exception_t * get_exc_6() const { return ___exc_6; }
	inline Exception_t ** get_address_of_exc_6() { return &___exc_6; }
	inline void set_exc_6(Exception_t * value)
	{
		___exc_6 = value;
		Il2CppCodeGenWriteBarrier((&___exc_6), value);
	}

	inline static int32_t get_offset_of_locker_7() { return static_cast<int32_t>(offsetof(SimpleAsyncResult_t3946017618, ___locker_7)); }
	inline RuntimeObject * get_locker_7() const { return ___locker_7; }
	inline RuntimeObject ** get_address_of_locker_7() { return &___locker_7; }
	inline void set_locker_7(RuntimeObject * value)
	{
		___locker_7 = value;
		Il2CppCodeGenWriteBarrier((&___locker_7), value);
	}

	inline static int32_t get_offset_of_user_read_synch_8() { return static_cast<int32_t>(offsetof(SimpleAsyncResult_t3946017618, ___user_read_synch_8)); }
	inline Nullable_1_t1819850047  get_user_read_synch_8() const { return ___user_read_synch_8; }
	inline Nullable_1_t1819850047 * get_address_of_user_read_synch_8() { return &___user_read_synch_8; }
	inline void set_user_read_synch_8(Nullable_1_t1819850047  value)
	{
		___user_read_synch_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SIMPLEASYNCRESULT_T3946017618_H
#ifndef ADDRESSFAMILY_T2612549059_H
#define ADDRESSFAMILY_T2612549059_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Sockets.AddressFamily
struct  AddressFamily_t2612549059 
{
public:
	// System.Int32 System.Net.Sockets.AddressFamily::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AddressFamily_t2612549059, ___value___2)); }
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
#endif // ADDRESSFAMILY_T2612549059_H
#ifndef IOCONTROLCODE_T4252950740_H
#define IOCONTROLCODE_T4252950740_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Sockets.IOControlCode
struct  IOControlCode_t4252950740 
{
public:
	// System.Int64 System.Net.Sockets.IOControlCode::value__
	int64_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(IOControlCode_t4252950740, ___value___2)); }
	inline int64_t get_value___2() const { return ___value___2; }
	inline int64_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int64_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // IOCONTROLCODE_T4252950740_H
#ifndef IPPROTECTIONLEVEL_T4099140720_H
#define IPPROTECTIONLEVEL_T4099140720_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Sockets.IPProtectionLevel
struct  IPProtectionLevel_t4099140720 
{
public:
	// System.Int32 System.Net.Sockets.IPProtectionLevel::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(IPProtectionLevel_t4099140720, ___value___2)); }
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
#endif // IPPROTECTIONLEVEL_T4099140720_H
#ifndef NETWORKSTREAM_T4071955934_H
#define NETWORKSTREAM_T4071955934_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Sockets.NetworkStream
struct  NetworkStream_t4071955934  : public Stream_t1273022909
{
public:
	// System.Net.Sockets.Socket System.Net.Sockets.NetworkStream::m_StreamSocket
	Socket_t1119025450 * ___m_StreamSocket_4;
	// System.Boolean System.Net.Sockets.NetworkStream::m_Readable
	bool ___m_Readable_5;
	// System.Boolean System.Net.Sockets.NetworkStream::m_Writeable
	bool ___m_Writeable_6;
	// System.Boolean System.Net.Sockets.NetworkStream::m_OwnsSocket
	bool ___m_OwnsSocket_7;
	// System.Int32 System.Net.Sockets.NetworkStream::m_CloseTimeout
	int32_t ___m_CloseTimeout_8;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Net.Sockets.NetworkStream::m_CleanedUp
	bool ___m_CleanedUp_9;
	// System.Int32 System.Net.Sockets.NetworkStream::m_CurrentReadTimeout
	int32_t ___m_CurrentReadTimeout_10;
	// System.Int32 System.Net.Sockets.NetworkStream::m_CurrentWriteTimeout
	int32_t ___m_CurrentWriteTimeout_11;

public:
	inline static int32_t get_offset_of_m_StreamSocket_4() { return static_cast<int32_t>(offsetof(NetworkStream_t4071955934, ___m_StreamSocket_4)); }
	inline Socket_t1119025450 * get_m_StreamSocket_4() const { return ___m_StreamSocket_4; }
	inline Socket_t1119025450 ** get_address_of_m_StreamSocket_4() { return &___m_StreamSocket_4; }
	inline void set_m_StreamSocket_4(Socket_t1119025450 * value)
	{
		___m_StreamSocket_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_StreamSocket_4), value);
	}

	inline static int32_t get_offset_of_m_Readable_5() { return static_cast<int32_t>(offsetof(NetworkStream_t4071955934, ___m_Readable_5)); }
	inline bool get_m_Readable_5() const { return ___m_Readable_5; }
	inline bool* get_address_of_m_Readable_5() { return &___m_Readable_5; }
	inline void set_m_Readable_5(bool value)
	{
		___m_Readable_5 = value;
	}

	inline static int32_t get_offset_of_m_Writeable_6() { return static_cast<int32_t>(offsetof(NetworkStream_t4071955934, ___m_Writeable_6)); }
	inline bool get_m_Writeable_6() const { return ___m_Writeable_6; }
	inline bool* get_address_of_m_Writeable_6() { return &___m_Writeable_6; }
	inline void set_m_Writeable_6(bool value)
	{
		___m_Writeable_6 = value;
	}

	inline static int32_t get_offset_of_m_OwnsSocket_7() { return static_cast<int32_t>(offsetof(NetworkStream_t4071955934, ___m_OwnsSocket_7)); }
	inline bool get_m_OwnsSocket_7() const { return ___m_OwnsSocket_7; }
	inline bool* get_address_of_m_OwnsSocket_7() { return &___m_OwnsSocket_7; }
	inline void set_m_OwnsSocket_7(bool value)
	{
		___m_OwnsSocket_7 = value;
	}

	inline static int32_t get_offset_of_m_CloseTimeout_8() { return static_cast<int32_t>(offsetof(NetworkStream_t4071955934, ___m_CloseTimeout_8)); }
	inline int32_t get_m_CloseTimeout_8() const { return ___m_CloseTimeout_8; }
	inline int32_t* get_address_of_m_CloseTimeout_8() { return &___m_CloseTimeout_8; }
	inline void set_m_CloseTimeout_8(int32_t value)
	{
		___m_CloseTimeout_8 = value;
	}

	inline static int32_t get_offset_of_m_CleanedUp_9() { return static_cast<int32_t>(offsetof(NetworkStream_t4071955934, ___m_CleanedUp_9)); }
	inline bool get_m_CleanedUp_9() const { return ___m_CleanedUp_9; }
	inline bool* get_address_of_m_CleanedUp_9() { return &___m_CleanedUp_9; }
	inline void set_m_CleanedUp_9(bool value)
	{
		___m_CleanedUp_9 = value;
	}

	inline static int32_t get_offset_of_m_CurrentReadTimeout_10() { return static_cast<int32_t>(offsetof(NetworkStream_t4071955934, ___m_CurrentReadTimeout_10)); }
	inline int32_t get_m_CurrentReadTimeout_10() const { return ___m_CurrentReadTimeout_10; }
	inline int32_t* get_address_of_m_CurrentReadTimeout_10() { return &___m_CurrentReadTimeout_10; }
	inline void set_m_CurrentReadTimeout_10(int32_t value)
	{
		___m_CurrentReadTimeout_10 = value;
	}

	inline static int32_t get_offset_of_m_CurrentWriteTimeout_11() { return static_cast<int32_t>(offsetof(NetworkStream_t4071955934, ___m_CurrentWriteTimeout_11)); }
	inline int32_t get_m_CurrentWriteTimeout_11() const { return ___m_CurrentWriteTimeout_11; }
	inline int32_t* get_address_of_m_CurrentWriteTimeout_11() { return &___m_CurrentWriteTimeout_11; }
	inline void set_m_CurrentWriteTimeout_11(int32_t value)
	{
		___m_CurrentWriteTimeout_11 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NETWORKSTREAM_T4071955934_H
#ifndef PROTOCOLTYPE_T303635025_H
#define PROTOCOLTYPE_T303635025_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Sockets.ProtocolType
struct  ProtocolType_t303635025 
{
public:
	// System.Int32 System.Net.Sockets.ProtocolType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ProtocolType_t303635025, ___value___2)); }
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
#endif // PROTOCOLTYPE_T303635025_H
#ifndef SELECTMODE_T1123767949_H
#define SELECTMODE_T1123767949_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Sockets.SelectMode
struct  SelectMode_t1123767949 
{
public:
	// System.Int32 System.Net.Sockets.SelectMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SelectMode_t1123767949, ___value___2)); }
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
#endif // SELECTMODE_T1123767949_H
#ifndef U3CU3EC__DISPLAYCLASS298_0_T616190186_H
#define U3CU3EC__DISPLAYCLASS298_0_T616190186_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Sockets.Socket/<>c__DisplayClass298_0
struct  U3CU3Ec__DisplayClass298_0_t616190186  : public RuntimeObject
{
public:
	// System.Net.Sockets.Socket System.Net.Sockets.Socket/<>c__DisplayClass298_0::<>4__this
	Socket_t1119025450 * ___U3CU3E4__this_0;
	// System.IOSelectorJob System.Net.Sockets.Socket/<>c__DisplayClass298_0::job
	IOSelectorJob_t2199748873 * ___job_1;
	// System.IntPtr System.Net.Sockets.Socket/<>c__DisplayClass298_0::handle
	intptr_t ___handle_2;

public:
	inline static int32_t get_offset_of_U3CU3E4__this_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass298_0_t616190186, ___U3CU3E4__this_0)); }
	inline Socket_t1119025450 * get_U3CU3E4__this_0() const { return ___U3CU3E4__this_0; }
	inline Socket_t1119025450 ** get_address_of_U3CU3E4__this_0() { return &___U3CU3E4__this_0; }
	inline void set_U3CU3E4__this_0(Socket_t1119025450 * value)
	{
		___U3CU3E4__this_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3E4__this_0), value);
	}

	inline static int32_t get_offset_of_job_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass298_0_t616190186, ___job_1)); }
	inline IOSelectorJob_t2199748873 * get_job_1() const { return ___job_1; }
	inline IOSelectorJob_t2199748873 ** get_address_of_job_1() { return &___job_1; }
	inline void set_job_1(IOSelectorJob_t2199748873 * value)
	{
		___job_1 = value;
		Il2CppCodeGenWriteBarrier((&___job_1), value);
	}

	inline static int32_t get_offset_of_handle_2() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass298_0_t616190186, ___handle_2)); }
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
#endif // U3CU3EC__DISPLAYCLASS298_0_T616190186_H
#ifndef WSABUF_T1998059390_H
#define WSABUF_T1998059390_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Sockets.Socket/WSABUF
struct  WSABUF_t1998059390 
{
public:
	// System.Int32 System.Net.Sockets.Socket/WSABUF::len
	int32_t ___len_0;
	// System.IntPtr System.Net.Sockets.Socket/WSABUF::buf
	intptr_t ___buf_1;

public:
	inline static int32_t get_offset_of_len_0() { return static_cast<int32_t>(offsetof(WSABUF_t1998059390, ___len_0)); }
	inline int32_t get_len_0() const { return ___len_0; }
	inline int32_t* get_address_of_len_0() { return &___len_0; }
	inline void set_len_0(int32_t value)
	{
		___len_0 = value;
	}

	inline static int32_t get_offset_of_buf_1() { return static_cast<int32_t>(offsetof(WSABUF_t1998059390, ___buf_1)); }
	inline intptr_t get_buf_1() const { return ___buf_1; }
	inline intptr_t* get_address_of_buf_1() { return &___buf_1; }
	inline void set_buf_1(intptr_t value)
	{
		___buf_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WSABUF_T1998059390_H
#ifndef SOCKETERROR_T3760144386_H
#define SOCKETERROR_T3760144386_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Sockets.SocketError
struct  SocketError_t3760144386 
{
public:
	// System.Int32 System.Net.Sockets.SocketError::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SocketError_t3760144386, ___value___2)); }
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
#endif // SOCKETERROR_T3760144386_H
#ifndef SOCKETFLAGS_T2969870452_H
#define SOCKETFLAGS_T2969870452_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Sockets.SocketFlags
struct  SocketFlags_t2969870452 
{
public:
	// System.Int32 System.Net.Sockets.SocketFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SocketFlags_t2969870452, ___value___2)); }
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
#endif // SOCKETFLAGS_T2969870452_H
#ifndef SOCKETOPERATION_T2303010090_H
#define SOCKETOPERATION_T2303010090_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Sockets.SocketOperation
struct  SocketOperation_t2303010090 
{
public:
	// System.Int32 System.Net.Sockets.SocketOperation::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SocketOperation_t2303010090, ___value___2)); }
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
#endif // SOCKETOPERATION_T2303010090_H
#ifndef SOCKETOPTIONLEVEL_T201167901_H
#define SOCKETOPTIONLEVEL_T201167901_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Sockets.SocketOptionLevel
struct  SocketOptionLevel_t201167901 
{
public:
	// System.Int32 System.Net.Sockets.SocketOptionLevel::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SocketOptionLevel_t201167901, ___value___2)); }
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
#endif // SOCKETOPTIONLEVEL_T201167901_H
#ifndef SOCKETOPTIONNAME_T403346465_H
#define SOCKETOPTIONNAME_T403346465_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Sockets.SocketOptionName
struct  SocketOptionName_t403346465 
{
public:
	// System.Int32 System.Net.Sockets.SocketOptionName::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SocketOptionName_t403346465, ___value___2)); }
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
#endif // SOCKETOPTIONNAME_T403346465_H
#ifndef SOCKETSHUTDOWN_T2687738148_H
#define SOCKETSHUTDOWN_T2687738148_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Sockets.SocketShutdown
struct  SocketShutdown_t2687738148 
{
public:
	// System.Int32 System.Net.Sockets.SocketShutdown::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SocketShutdown_t2687738148, ___value___2)); }
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
#endif // SOCKETSHUTDOWN_T2687738148_H
#ifndef SOCKETTYPE_T2175930299_H
#define SOCKETTYPE_T2175930299_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Sockets.SocketType
struct  SocketType_t2175930299 
{
public:
	// System.Int32 System.Net.Sockets.SocketType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SocketType_t2175930299, ___value___2)); }
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
#endif // SOCKETTYPE_T2175930299_H
#ifndef NTLMAUTHSTATE_T2130360192_H
#define NTLMAUTHSTATE_T2130360192_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.WebConnection/NtlmAuthState
struct  NtlmAuthState_t2130360192 
{
public:
	// System.Int32 System.Net.WebConnection/NtlmAuthState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(NtlmAuthState_t2130360192, ___value___2)); }
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
#endif // NTLMAUTHSTATE_T2130360192_H
#ifndef CONNECTIONSTATE_T1651576813_H
#define CONNECTIONSTATE_T1651576813_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.WebConnectionGroup/ConnectionState
struct  ConnectionState_t1651576813  : public RuntimeObject
{
public:
	// System.Net.WebConnection System.Net.WebConnectionGroup/ConnectionState::<Connection>k__BackingField
	WebConnection_t3982808322 * ___U3CConnectionU3Ek__BackingField_0;
	// System.Net.WebConnectionGroup System.Net.WebConnectionGroup/ConnectionState::<Group>k__BackingField
	WebConnectionGroup_t1712379988 * ___U3CGroupU3Ek__BackingField_1;
	// System.Boolean System.Net.WebConnectionGroup/ConnectionState::busy
	bool ___busy_2;
	// System.DateTime System.Net.WebConnectionGroup/ConnectionState::idleSince
	DateTime_t3738529785  ___idleSince_3;

public:
	inline static int32_t get_offset_of_U3CConnectionU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(ConnectionState_t1651576813, ___U3CConnectionU3Ek__BackingField_0)); }
	inline WebConnection_t3982808322 * get_U3CConnectionU3Ek__BackingField_0() const { return ___U3CConnectionU3Ek__BackingField_0; }
	inline WebConnection_t3982808322 ** get_address_of_U3CConnectionU3Ek__BackingField_0() { return &___U3CConnectionU3Ek__BackingField_0; }
	inline void set_U3CConnectionU3Ek__BackingField_0(WebConnection_t3982808322 * value)
	{
		___U3CConnectionU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CConnectionU3Ek__BackingField_0), value);
	}

	inline static int32_t get_offset_of_U3CGroupU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(ConnectionState_t1651576813, ___U3CGroupU3Ek__BackingField_1)); }
	inline WebConnectionGroup_t1712379988 * get_U3CGroupU3Ek__BackingField_1() const { return ___U3CGroupU3Ek__BackingField_1; }
	inline WebConnectionGroup_t1712379988 ** get_address_of_U3CGroupU3Ek__BackingField_1() { return &___U3CGroupU3Ek__BackingField_1; }
	inline void set_U3CGroupU3Ek__BackingField_1(WebConnectionGroup_t1712379988 * value)
	{
		___U3CGroupU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CGroupU3Ek__BackingField_1), value);
	}

	inline static int32_t get_offset_of_busy_2() { return static_cast<int32_t>(offsetof(ConnectionState_t1651576813, ___busy_2)); }
	inline bool get_busy_2() const { return ___busy_2; }
	inline bool* get_address_of_busy_2() { return &___busy_2; }
	inline void set_busy_2(bool value)
	{
		___busy_2 = value;
	}

	inline static int32_t get_offset_of_idleSince_3() { return static_cast<int32_t>(offsetof(ConnectionState_t1651576813, ___idleSince_3)); }
	inline DateTime_t3738529785  get_idleSince_3() const { return ___idleSince_3; }
	inline DateTime_t3738529785 * get_address_of_idleSince_3() { return &___idleSince_3; }
	inline void set_idleSince_3(DateTime_t3738529785  value)
	{
		___idleSince_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONNECTIONSTATE_T1651576813_H
#ifndef WEBCONNECTIONSTREAM_T2170064850_H
#define WEBCONNECTIONSTREAM_T2170064850_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.WebConnectionStream
struct  WebConnectionStream_t2170064850  : public Stream_t1273022909
{
public:
	// System.Boolean System.Net.WebConnectionStream::isRead
	bool ___isRead_5;
	// System.Net.WebConnection System.Net.WebConnectionStream::cnc
	WebConnection_t3982808322 * ___cnc_6;
	// System.Net.HttpWebRequest System.Net.WebConnectionStream::request
	HttpWebRequest_t1669436515 * ___request_7;
	// System.Byte[] System.Net.WebConnectionStream::readBuffer
	ByteU5BU5D_t4116647657* ___readBuffer_8;
	// System.Int32 System.Net.WebConnectionStream::readBufferOffset
	int32_t ___readBufferOffset_9;
	// System.Int32 System.Net.WebConnectionStream::readBufferSize
	int32_t ___readBufferSize_10;
	// System.Int32 System.Net.WebConnectionStream::stream_length
	int32_t ___stream_length_11;
	// System.Int64 System.Net.WebConnectionStream::contentLength
	int64_t ___contentLength_12;
	// System.Int64 System.Net.WebConnectionStream::totalRead
	int64_t ___totalRead_13;
	// System.Int64 System.Net.WebConnectionStream::totalWritten
	int64_t ___totalWritten_14;
	// System.Boolean System.Net.WebConnectionStream::nextReadCalled
	bool ___nextReadCalled_15;
	// System.Int32 System.Net.WebConnectionStream::pendingReads
	int32_t ___pendingReads_16;
	// System.Int32 System.Net.WebConnectionStream::pendingWrites
	int32_t ___pendingWrites_17;
	// System.Threading.ManualResetEvent System.Net.WebConnectionStream::pending
	ManualResetEvent_t451242010 * ___pending_18;
	// System.Boolean System.Net.WebConnectionStream::allowBuffering
	bool ___allowBuffering_19;
	// System.Boolean System.Net.WebConnectionStream::sendChunked
	bool ___sendChunked_20;
	// System.IO.MemoryStream System.Net.WebConnectionStream::writeBuffer
	MemoryStream_t94973147 * ___writeBuffer_21;
	// System.Boolean System.Net.WebConnectionStream::requestWritten
	bool ___requestWritten_22;
	// System.Byte[] System.Net.WebConnectionStream::headers
	ByteU5BU5D_t4116647657* ___headers_23;
	// System.Boolean System.Net.WebConnectionStream::disposed
	bool ___disposed_24;
	// System.Boolean System.Net.WebConnectionStream::headersSent
	bool ___headersSent_25;
	// System.Object System.Net.WebConnectionStream::locker
	RuntimeObject * ___locker_26;
	// System.Boolean System.Net.WebConnectionStream::initRead
	bool ___initRead_27;
	// System.Boolean System.Net.WebConnectionStream::read_eof
	bool ___read_eof_28;
	// System.Boolean System.Net.WebConnectionStream::complete_request_written
	bool ___complete_request_written_29;
	// System.Int32 System.Net.WebConnectionStream::read_timeout
	int32_t ___read_timeout_30;
	// System.Int32 System.Net.WebConnectionStream::write_timeout
	int32_t ___write_timeout_31;
	// System.AsyncCallback System.Net.WebConnectionStream::cb_wrapper
	AsyncCallback_t3962456242 * ___cb_wrapper_32;
	// System.Boolean System.Net.WebConnectionStream::IgnoreIOErrors
	bool ___IgnoreIOErrors_33;
	// System.Boolean System.Net.WebConnectionStream::<GetResponseOnClose>k__BackingField
	bool ___U3CGetResponseOnCloseU3Ek__BackingField_34;

public:
	inline static int32_t get_offset_of_isRead_5() { return static_cast<int32_t>(offsetof(WebConnectionStream_t2170064850, ___isRead_5)); }
	inline bool get_isRead_5() const { return ___isRead_5; }
	inline bool* get_address_of_isRead_5() { return &___isRead_5; }
	inline void set_isRead_5(bool value)
	{
		___isRead_5 = value;
	}

	inline static int32_t get_offset_of_cnc_6() { return static_cast<int32_t>(offsetof(WebConnectionStream_t2170064850, ___cnc_6)); }
	inline WebConnection_t3982808322 * get_cnc_6() const { return ___cnc_6; }
	inline WebConnection_t3982808322 ** get_address_of_cnc_6() { return &___cnc_6; }
	inline void set_cnc_6(WebConnection_t3982808322 * value)
	{
		___cnc_6 = value;
		Il2CppCodeGenWriteBarrier((&___cnc_6), value);
	}

	inline static int32_t get_offset_of_request_7() { return static_cast<int32_t>(offsetof(WebConnectionStream_t2170064850, ___request_7)); }
	inline HttpWebRequest_t1669436515 * get_request_7() const { return ___request_7; }
	inline HttpWebRequest_t1669436515 ** get_address_of_request_7() { return &___request_7; }
	inline void set_request_7(HttpWebRequest_t1669436515 * value)
	{
		___request_7 = value;
		Il2CppCodeGenWriteBarrier((&___request_7), value);
	}

	inline static int32_t get_offset_of_readBuffer_8() { return static_cast<int32_t>(offsetof(WebConnectionStream_t2170064850, ___readBuffer_8)); }
	inline ByteU5BU5D_t4116647657* get_readBuffer_8() const { return ___readBuffer_8; }
	inline ByteU5BU5D_t4116647657** get_address_of_readBuffer_8() { return &___readBuffer_8; }
	inline void set_readBuffer_8(ByteU5BU5D_t4116647657* value)
	{
		___readBuffer_8 = value;
		Il2CppCodeGenWriteBarrier((&___readBuffer_8), value);
	}

	inline static int32_t get_offset_of_readBufferOffset_9() { return static_cast<int32_t>(offsetof(WebConnectionStream_t2170064850, ___readBufferOffset_9)); }
	inline int32_t get_readBufferOffset_9() const { return ___readBufferOffset_9; }
	inline int32_t* get_address_of_readBufferOffset_9() { return &___readBufferOffset_9; }
	inline void set_readBufferOffset_9(int32_t value)
	{
		___readBufferOffset_9 = value;
	}

	inline static int32_t get_offset_of_readBufferSize_10() { return static_cast<int32_t>(offsetof(WebConnectionStream_t2170064850, ___readBufferSize_10)); }
	inline int32_t get_readBufferSize_10() const { return ___readBufferSize_10; }
	inline int32_t* get_address_of_readBufferSize_10() { return &___readBufferSize_10; }
	inline void set_readBufferSize_10(int32_t value)
	{
		___readBufferSize_10 = value;
	}

	inline static int32_t get_offset_of_stream_length_11() { return static_cast<int32_t>(offsetof(WebConnectionStream_t2170064850, ___stream_length_11)); }
	inline int32_t get_stream_length_11() const { return ___stream_length_11; }
	inline int32_t* get_address_of_stream_length_11() { return &___stream_length_11; }
	inline void set_stream_length_11(int32_t value)
	{
		___stream_length_11 = value;
	}

	inline static int32_t get_offset_of_contentLength_12() { return static_cast<int32_t>(offsetof(WebConnectionStream_t2170064850, ___contentLength_12)); }
	inline int64_t get_contentLength_12() const { return ___contentLength_12; }
	inline int64_t* get_address_of_contentLength_12() { return &___contentLength_12; }
	inline void set_contentLength_12(int64_t value)
	{
		___contentLength_12 = value;
	}

	inline static int32_t get_offset_of_totalRead_13() { return static_cast<int32_t>(offsetof(WebConnectionStream_t2170064850, ___totalRead_13)); }
	inline int64_t get_totalRead_13() const { return ___totalRead_13; }
	inline int64_t* get_address_of_totalRead_13() { return &___totalRead_13; }
	inline void set_totalRead_13(int64_t value)
	{
		___totalRead_13 = value;
	}

	inline static int32_t get_offset_of_totalWritten_14() { return static_cast<int32_t>(offsetof(WebConnectionStream_t2170064850, ___totalWritten_14)); }
	inline int64_t get_totalWritten_14() const { return ___totalWritten_14; }
	inline int64_t* get_address_of_totalWritten_14() { return &___totalWritten_14; }
	inline void set_totalWritten_14(int64_t value)
	{
		___totalWritten_14 = value;
	}

	inline static int32_t get_offset_of_nextReadCalled_15() { return static_cast<int32_t>(offsetof(WebConnectionStream_t2170064850, ___nextReadCalled_15)); }
	inline bool get_nextReadCalled_15() const { return ___nextReadCalled_15; }
	inline bool* get_address_of_nextReadCalled_15() { return &___nextReadCalled_15; }
	inline void set_nextReadCalled_15(bool value)
	{
		___nextReadCalled_15 = value;
	}

	inline static int32_t get_offset_of_pendingReads_16() { return static_cast<int32_t>(offsetof(WebConnectionStream_t2170064850, ___pendingReads_16)); }
	inline int32_t get_pendingReads_16() const { return ___pendingReads_16; }
	inline int32_t* get_address_of_pendingReads_16() { return &___pendingReads_16; }
	inline void set_pendingReads_16(int32_t value)
	{
		___pendingReads_16 = value;
	}

	inline static int32_t get_offset_of_pendingWrites_17() { return static_cast<int32_t>(offsetof(WebConnectionStream_t2170064850, ___pendingWrites_17)); }
	inline int32_t get_pendingWrites_17() const { return ___pendingWrites_17; }
	inline int32_t* get_address_of_pendingWrites_17() { return &___pendingWrites_17; }
	inline void set_pendingWrites_17(int32_t value)
	{
		___pendingWrites_17 = value;
	}

	inline static int32_t get_offset_of_pending_18() { return static_cast<int32_t>(offsetof(WebConnectionStream_t2170064850, ___pending_18)); }
	inline ManualResetEvent_t451242010 * get_pending_18() const { return ___pending_18; }
	inline ManualResetEvent_t451242010 ** get_address_of_pending_18() { return &___pending_18; }
	inline void set_pending_18(ManualResetEvent_t451242010 * value)
	{
		___pending_18 = value;
		Il2CppCodeGenWriteBarrier((&___pending_18), value);
	}

	inline static int32_t get_offset_of_allowBuffering_19() { return static_cast<int32_t>(offsetof(WebConnectionStream_t2170064850, ___allowBuffering_19)); }
	inline bool get_allowBuffering_19() const { return ___allowBuffering_19; }
	inline bool* get_address_of_allowBuffering_19() { return &___allowBuffering_19; }
	inline void set_allowBuffering_19(bool value)
	{
		___allowBuffering_19 = value;
	}

	inline static int32_t get_offset_of_sendChunked_20() { return static_cast<int32_t>(offsetof(WebConnectionStream_t2170064850, ___sendChunked_20)); }
	inline bool get_sendChunked_20() const { return ___sendChunked_20; }
	inline bool* get_address_of_sendChunked_20() { return &___sendChunked_20; }
	inline void set_sendChunked_20(bool value)
	{
		___sendChunked_20 = value;
	}

	inline static int32_t get_offset_of_writeBuffer_21() { return static_cast<int32_t>(offsetof(WebConnectionStream_t2170064850, ___writeBuffer_21)); }
	inline MemoryStream_t94973147 * get_writeBuffer_21() const { return ___writeBuffer_21; }
	inline MemoryStream_t94973147 ** get_address_of_writeBuffer_21() { return &___writeBuffer_21; }
	inline void set_writeBuffer_21(MemoryStream_t94973147 * value)
	{
		___writeBuffer_21 = value;
		Il2CppCodeGenWriteBarrier((&___writeBuffer_21), value);
	}

	inline static int32_t get_offset_of_requestWritten_22() { return static_cast<int32_t>(offsetof(WebConnectionStream_t2170064850, ___requestWritten_22)); }
	inline bool get_requestWritten_22() const { return ___requestWritten_22; }
	inline bool* get_address_of_requestWritten_22() { return &___requestWritten_22; }
	inline void set_requestWritten_22(bool value)
	{
		___requestWritten_22 = value;
	}

	inline static int32_t get_offset_of_headers_23() { return static_cast<int32_t>(offsetof(WebConnectionStream_t2170064850, ___headers_23)); }
	inline ByteU5BU5D_t4116647657* get_headers_23() const { return ___headers_23; }
	inline ByteU5BU5D_t4116647657** get_address_of_headers_23() { return &___headers_23; }
	inline void set_headers_23(ByteU5BU5D_t4116647657* value)
	{
		___headers_23 = value;
		Il2CppCodeGenWriteBarrier((&___headers_23), value);
	}

	inline static int32_t get_offset_of_disposed_24() { return static_cast<int32_t>(offsetof(WebConnectionStream_t2170064850, ___disposed_24)); }
	inline bool get_disposed_24() const { return ___disposed_24; }
	inline bool* get_address_of_disposed_24() { return &___disposed_24; }
	inline void set_disposed_24(bool value)
	{
		___disposed_24 = value;
	}

	inline static int32_t get_offset_of_headersSent_25() { return static_cast<int32_t>(offsetof(WebConnectionStream_t2170064850, ___headersSent_25)); }
	inline bool get_headersSent_25() const { return ___headersSent_25; }
	inline bool* get_address_of_headersSent_25() { return &___headersSent_25; }
	inline void set_headersSent_25(bool value)
	{
		___headersSent_25 = value;
	}

	inline static int32_t get_offset_of_locker_26() { return static_cast<int32_t>(offsetof(WebConnectionStream_t2170064850, ___locker_26)); }
	inline RuntimeObject * get_locker_26() const { return ___locker_26; }
	inline RuntimeObject ** get_address_of_locker_26() { return &___locker_26; }
	inline void set_locker_26(RuntimeObject * value)
	{
		___locker_26 = value;
		Il2CppCodeGenWriteBarrier((&___locker_26), value);
	}

	inline static int32_t get_offset_of_initRead_27() { return static_cast<int32_t>(offsetof(WebConnectionStream_t2170064850, ___initRead_27)); }
	inline bool get_initRead_27() const { return ___initRead_27; }
	inline bool* get_address_of_initRead_27() { return &___initRead_27; }
	inline void set_initRead_27(bool value)
	{
		___initRead_27 = value;
	}

	inline static int32_t get_offset_of_read_eof_28() { return static_cast<int32_t>(offsetof(WebConnectionStream_t2170064850, ___read_eof_28)); }
	inline bool get_read_eof_28() const { return ___read_eof_28; }
	inline bool* get_address_of_read_eof_28() { return &___read_eof_28; }
	inline void set_read_eof_28(bool value)
	{
		___read_eof_28 = value;
	}

	inline static int32_t get_offset_of_complete_request_written_29() { return static_cast<int32_t>(offsetof(WebConnectionStream_t2170064850, ___complete_request_written_29)); }
	inline bool get_complete_request_written_29() const { return ___complete_request_written_29; }
	inline bool* get_address_of_complete_request_written_29() { return &___complete_request_written_29; }
	inline void set_complete_request_written_29(bool value)
	{
		___complete_request_written_29 = value;
	}

	inline static int32_t get_offset_of_read_timeout_30() { return static_cast<int32_t>(offsetof(WebConnectionStream_t2170064850, ___read_timeout_30)); }
	inline int32_t get_read_timeout_30() const { return ___read_timeout_30; }
	inline int32_t* get_address_of_read_timeout_30() { return &___read_timeout_30; }
	inline void set_read_timeout_30(int32_t value)
	{
		___read_timeout_30 = value;
	}

	inline static int32_t get_offset_of_write_timeout_31() { return static_cast<int32_t>(offsetof(WebConnectionStream_t2170064850, ___write_timeout_31)); }
	inline int32_t get_write_timeout_31() const { return ___write_timeout_31; }
	inline int32_t* get_address_of_write_timeout_31() { return &___write_timeout_31; }
	inline void set_write_timeout_31(int32_t value)
	{
		___write_timeout_31 = value;
	}

	inline static int32_t get_offset_of_cb_wrapper_32() { return static_cast<int32_t>(offsetof(WebConnectionStream_t2170064850, ___cb_wrapper_32)); }
	inline AsyncCallback_t3962456242 * get_cb_wrapper_32() const { return ___cb_wrapper_32; }
	inline AsyncCallback_t3962456242 ** get_address_of_cb_wrapper_32() { return &___cb_wrapper_32; }
	inline void set_cb_wrapper_32(AsyncCallback_t3962456242 * value)
	{
		___cb_wrapper_32 = value;
		Il2CppCodeGenWriteBarrier((&___cb_wrapper_32), value);
	}

	inline static int32_t get_offset_of_IgnoreIOErrors_33() { return static_cast<int32_t>(offsetof(WebConnectionStream_t2170064850, ___IgnoreIOErrors_33)); }
	inline bool get_IgnoreIOErrors_33() const { return ___IgnoreIOErrors_33; }
	inline bool* get_address_of_IgnoreIOErrors_33() { return &___IgnoreIOErrors_33; }
	inline void set_IgnoreIOErrors_33(bool value)
	{
		___IgnoreIOErrors_33 = value;
	}

	inline static int32_t get_offset_of_U3CGetResponseOnCloseU3Ek__BackingField_34() { return static_cast<int32_t>(offsetof(WebConnectionStream_t2170064850, ___U3CGetResponseOnCloseU3Ek__BackingField_34)); }
	inline bool get_U3CGetResponseOnCloseU3Ek__BackingField_34() const { return ___U3CGetResponseOnCloseU3Ek__BackingField_34; }
	inline bool* get_address_of_U3CGetResponseOnCloseU3Ek__BackingField_34() { return &___U3CGetResponseOnCloseU3Ek__BackingField_34; }
	inline void set_U3CGetResponseOnCloseU3Ek__BackingField_34(bool value)
	{
		___U3CGetResponseOnCloseU3Ek__BackingField_34 = value;
	}
};

struct WebConnectionStream_t2170064850_StaticFields
{
public:
	// System.Byte[] System.Net.WebConnectionStream::crlf
	ByteU5BU5D_t4116647657* ___crlf_4;

public:
	inline static int32_t get_offset_of_crlf_4() { return static_cast<int32_t>(offsetof(WebConnectionStream_t2170064850_StaticFields, ___crlf_4)); }
	inline ByteU5BU5D_t4116647657* get_crlf_4() const { return ___crlf_4; }
	inline ByteU5BU5D_t4116647657** get_address_of_crlf_4() { return &___crlf_4; }
	inline void set_crlf_4(ByteU5BU5D_t4116647657* value)
	{
		___crlf_4 = value;
		Il2CppCodeGenWriteBarrier((&___crlf_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WEBCONNECTIONSTREAM_T2170064850_H
#ifndef WEBEXCEPTIONSTATUS_T1731416715_H
#define WEBEXCEPTIONSTATUS_T1731416715_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.WebExceptionStatus
struct  WebExceptionStatus_t1731416715 
{
public:
	// System.Int32 System.Net.WebExceptionStatus::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(WebExceptionStatus_t1731416715, ___value___2)); }
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
#endif // WEBEXCEPTIONSTATUS_T1731416715_H
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
#ifndef SAFEHANDLE_T3273388951_H
#define SAFEHANDLE_T3273388951_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.SafeHandle
struct  SafeHandle_t3273388951  : public CriticalFinalizerObject_t701527852
{
public:
	// System.IntPtr System.Runtime.InteropServices.SafeHandle::handle
	intptr_t ___handle_0;
	// System.Int32 System.Runtime.InteropServices.SafeHandle::_state
	int32_t ____state_1;
	// System.Boolean System.Runtime.InteropServices.SafeHandle::_ownsHandle
	bool ____ownsHandle_2;
	// System.Boolean System.Runtime.InteropServices.SafeHandle::_fullyInitialized
	bool ____fullyInitialized_3;

public:
	inline static int32_t get_offset_of_handle_0() { return static_cast<int32_t>(offsetof(SafeHandle_t3273388951, ___handle_0)); }
	inline intptr_t get_handle_0() const { return ___handle_0; }
	inline intptr_t* get_address_of_handle_0() { return &___handle_0; }
	inline void set_handle_0(intptr_t value)
	{
		___handle_0 = value;
	}

	inline static int32_t get_offset_of__state_1() { return static_cast<int32_t>(offsetof(SafeHandle_t3273388951, ____state_1)); }
	inline int32_t get__state_1() const { return ____state_1; }
	inline int32_t* get_address_of__state_1() { return &____state_1; }
	inline void set__state_1(int32_t value)
	{
		____state_1 = value;
	}

	inline static int32_t get_offset_of__ownsHandle_2() { return static_cast<int32_t>(offsetof(SafeHandle_t3273388951, ____ownsHandle_2)); }
	inline bool get__ownsHandle_2() const { return ____ownsHandle_2; }
	inline bool* get_address_of__ownsHandle_2() { return &____ownsHandle_2; }
	inline void set__ownsHandle_2(bool value)
	{
		____ownsHandle_2 = value;
	}

	inline static int32_t get_offset_of__fullyInitialized_3() { return static_cast<int32_t>(offsetof(SafeHandle_t3273388951, ____fullyInitialized_3)); }
	inline bool get__fullyInitialized_3() const { return ____fullyInitialized_3; }
	inline bool* get_address_of__fullyInitialized_3() { return &____fullyInitialized_3; }
	inline void set__fullyInitialized_3(bool value)
	{
		____fullyInitialized_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SAFEHANDLE_T3273388951_H
#ifndef SAFEHANDLEZEROORMINUSONEISINVALID_T1182193648_H
#define SAFEHANDLEZEROORMINUSONEISINVALID_T1182193648_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.Win32.SafeHandles.SafeHandleZeroOrMinusOneIsInvalid
struct  SafeHandleZeroOrMinusOneIsInvalid_t1182193648  : public SafeHandle_t3273388951
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SAFEHANDLEZEROORMINUSONEISINVALID_T1182193648_H
#ifndef WIN32EXCEPTION_T3234146298_H
#define WIN32EXCEPTION_T3234146298_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.Win32Exception
struct  Win32Exception_t3234146298  : public ExternalException_t3544951457
{
public:
	// System.Int32 System.ComponentModel.Win32Exception::nativeErrorCode
	int32_t ___nativeErrorCode_17;

public:
	inline static int32_t get_offset_of_nativeErrorCode_17() { return static_cast<int32_t>(offsetof(Win32Exception_t3234146298, ___nativeErrorCode_17)); }
	inline int32_t get_nativeErrorCode_17() const { return ___nativeErrorCode_17; }
	inline int32_t* get_address_of_nativeErrorCode_17() { return &___nativeErrorCode_17; }
	inline void set_nativeErrorCode_17(int32_t value)
	{
		___nativeErrorCode_17 = value;
	}
};

struct Win32Exception_t3234146298_StaticFields
{
public:
	// System.Boolean System.ComponentModel.Win32Exception::s_ErrorMessagesInitialized
	bool ___s_ErrorMessagesInitialized_18;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.String> System.ComponentModel.Win32Exception::s_ErrorMessage
	Dictionary_2_t736164020 * ___s_ErrorMessage_19;

public:
	inline static int32_t get_offset_of_s_ErrorMessagesInitialized_18() { return static_cast<int32_t>(offsetof(Win32Exception_t3234146298_StaticFields, ___s_ErrorMessagesInitialized_18)); }
	inline bool get_s_ErrorMessagesInitialized_18() const { return ___s_ErrorMessagesInitialized_18; }
	inline bool* get_address_of_s_ErrorMessagesInitialized_18() { return &___s_ErrorMessagesInitialized_18; }
	inline void set_s_ErrorMessagesInitialized_18(bool value)
	{
		___s_ErrorMessagesInitialized_18 = value;
	}

	inline static int32_t get_offset_of_s_ErrorMessage_19() { return static_cast<int32_t>(offsetof(Win32Exception_t3234146298_StaticFields, ___s_ErrorMessage_19)); }
	inline Dictionary_2_t736164020 * get_s_ErrorMessage_19() const { return ___s_ErrorMessage_19; }
	inline Dictionary_2_t736164020 ** get_address_of_s_ErrorMessage_19() { return &___s_ErrorMessage_19; }
	inline void set_s_ErrorMessage_19(Dictionary_2_t736164020 * value)
	{
		___s_ErrorMessage_19 = value;
		Il2CppCodeGenWriteBarrier((&___s_ErrorMessage_19), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WIN32EXCEPTION_T3234146298_H
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
#ifndef AUTHORIZATIONSTATE_T3141350760_H
#define AUTHORIZATIONSTATE_T3141350760_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.HttpWebRequest/AuthorizationState
struct  AuthorizationState_t3141350760 
{
public:
	// System.Net.HttpWebRequest System.Net.HttpWebRequest/AuthorizationState::request
	HttpWebRequest_t1669436515 * ___request_0;
	// System.Boolean System.Net.HttpWebRequest/AuthorizationState::isProxy
	bool ___isProxy_1;
	// System.Boolean System.Net.HttpWebRequest/AuthorizationState::isCompleted
	bool ___isCompleted_2;
	// System.Net.HttpWebRequest/NtlmAuthState System.Net.HttpWebRequest/AuthorizationState::ntlm_auth_state
	int32_t ___ntlm_auth_state_3;

public:
	inline static int32_t get_offset_of_request_0() { return static_cast<int32_t>(offsetof(AuthorizationState_t3141350760, ___request_0)); }
	inline HttpWebRequest_t1669436515 * get_request_0() const { return ___request_0; }
	inline HttpWebRequest_t1669436515 ** get_address_of_request_0() { return &___request_0; }
	inline void set_request_0(HttpWebRequest_t1669436515 * value)
	{
		___request_0 = value;
		Il2CppCodeGenWriteBarrier((&___request_0), value);
	}

	inline static int32_t get_offset_of_isProxy_1() { return static_cast<int32_t>(offsetof(AuthorizationState_t3141350760, ___isProxy_1)); }
	inline bool get_isProxy_1() const { return ___isProxy_1; }
	inline bool* get_address_of_isProxy_1() { return &___isProxy_1; }
	inline void set_isProxy_1(bool value)
	{
		___isProxy_1 = value;
	}

	inline static int32_t get_offset_of_isCompleted_2() { return static_cast<int32_t>(offsetof(AuthorizationState_t3141350760, ___isCompleted_2)); }
	inline bool get_isCompleted_2() const { return ___isCompleted_2; }
	inline bool* get_address_of_isCompleted_2() { return &___isCompleted_2; }
	inline void set_isCompleted_2(bool value)
	{
		___isCompleted_2 = value;
	}

	inline static int32_t get_offset_of_ntlm_auth_state_3() { return static_cast<int32_t>(offsetof(AuthorizationState_t3141350760, ___ntlm_auth_state_3)); }
	inline int32_t get_ntlm_auth_state_3() const { return ___ntlm_auth_state_3; }
	inline int32_t* get_address_of_ntlm_auth_state_3() { return &___ntlm_auth_state_3; }
	inline void set_ntlm_auth_state_3(int32_t value)
	{
		___ntlm_auth_state_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Net.HttpWebRequest/AuthorizationState
struct AuthorizationState_t3141350760_marshaled_pinvoke
{
	HttpWebRequest_t1669436515 * ___request_0;
	int32_t ___isProxy_1;
	int32_t ___isCompleted_2;
	int32_t ___ntlm_auth_state_3;
};
// Native definition for COM marshalling of System.Net.HttpWebRequest/AuthorizationState
struct AuthorizationState_t3141350760_marshaled_com
{
	HttpWebRequest_t1669436515 * ___request_0;
	int32_t ___isProxy_1;
	int32_t ___isCompleted_2;
	int32_t ___ntlm_auth_state_3;
};
#endif // AUTHORIZATIONSTATE_T3141350760_H
#ifndef HTTPWEBRESPONSE_T3286585418_H
#define HTTPWEBRESPONSE_T3286585418_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.HttpWebResponse
struct  HttpWebResponse_t3286585418  : public WebResponse_t229922639
{
public:
	// System.Uri System.Net.HttpWebResponse::uri
	Uri_t100236324 * ___uri_1;
	// System.Net.WebHeaderCollection System.Net.HttpWebResponse::webHeaders
	WebHeaderCollection_t1942268960 * ___webHeaders_2;
	// System.Net.CookieCollection System.Net.HttpWebResponse::cookieCollection
	CookieCollection_t3881042616 * ___cookieCollection_3;
	// System.String System.Net.HttpWebResponse::method
	String_t* ___method_4;
	// System.Version System.Net.HttpWebResponse::version
	Version_t3456873960 * ___version_5;
	// System.Net.HttpStatusCode System.Net.HttpWebResponse::statusCode
	int32_t ___statusCode_6;
	// System.String System.Net.HttpWebResponse::statusDescription
	String_t* ___statusDescription_7;
	// System.Int64 System.Net.HttpWebResponse::contentLength
	int64_t ___contentLength_8;
	// System.String System.Net.HttpWebResponse::contentType
	String_t* ___contentType_9;
	// System.Net.CookieContainer System.Net.HttpWebResponse::cookie_container
	CookieContainer_t2331592909 * ___cookie_container_10;
	// System.Boolean System.Net.HttpWebResponse::disposed
	bool ___disposed_11;
	// System.IO.Stream System.Net.HttpWebResponse::stream
	Stream_t1273022909 * ___stream_12;

public:
	inline static int32_t get_offset_of_uri_1() { return static_cast<int32_t>(offsetof(HttpWebResponse_t3286585418, ___uri_1)); }
	inline Uri_t100236324 * get_uri_1() const { return ___uri_1; }
	inline Uri_t100236324 ** get_address_of_uri_1() { return &___uri_1; }
	inline void set_uri_1(Uri_t100236324 * value)
	{
		___uri_1 = value;
		Il2CppCodeGenWriteBarrier((&___uri_1), value);
	}

	inline static int32_t get_offset_of_webHeaders_2() { return static_cast<int32_t>(offsetof(HttpWebResponse_t3286585418, ___webHeaders_2)); }
	inline WebHeaderCollection_t1942268960 * get_webHeaders_2() const { return ___webHeaders_2; }
	inline WebHeaderCollection_t1942268960 ** get_address_of_webHeaders_2() { return &___webHeaders_2; }
	inline void set_webHeaders_2(WebHeaderCollection_t1942268960 * value)
	{
		___webHeaders_2 = value;
		Il2CppCodeGenWriteBarrier((&___webHeaders_2), value);
	}

	inline static int32_t get_offset_of_cookieCollection_3() { return static_cast<int32_t>(offsetof(HttpWebResponse_t3286585418, ___cookieCollection_3)); }
	inline CookieCollection_t3881042616 * get_cookieCollection_3() const { return ___cookieCollection_3; }
	inline CookieCollection_t3881042616 ** get_address_of_cookieCollection_3() { return &___cookieCollection_3; }
	inline void set_cookieCollection_3(CookieCollection_t3881042616 * value)
	{
		___cookieCollection_3 = value;
		Il2CppCodeGenWriteBarrier((&___cookieCollection_3), value);
	}

	inline static int32_t get_offset_of_method_4() { return static_cast<int32_t>(offsetof(HttpWebResponse_t3286585418, ___method_4)); }
	inline String_t* get_method_4() const { return ___method_4; }
	inline String_t** get_address_of_method_4() { return &___method_4; }
	inline void set_method_4(String_t* value)
	{
		___method_4 = value;
		Il2CppCodeGenWriteBarrier((&___method_4), value);
	}

	inline static int32_t get_offset_of_version_5() { return static_cast<int32_t>(offsetof(HttpWebResponse_t3286585418, ___version_5)); }
	inline Version_t3456873960 * get_version_5() const { return ___version_5; }
	inline Version_t3456873960 ** get_address_of_version_5() { return &___version_5; }
	inline void set_version_5(Version_t3456873960 * value)
	{
		___version_5 = value;
		Il2CppCodeGenWriteBarrier((&___version_5), value);
	}

	inline static int32_t get_offset_of_statusCode_6() { return static_cast<int32_t>(offsetof(HttpWebResponse_t3286585418, ___statusCode_6)); }
	inline int32_t get_statusCode_6() const { return ___statusCode_6; }
	inline int32_t* get_address_of_statusCode_6() { return &___statusCode_6; }
	inline void set_statusCode_6(int32_t value)
	{
		___statusCode_6 = value;
	}

	inline static int32_t get_offset_of_statusDescription_7() { return static_cast<int32_t>(offsetof(HttpWebResponse_t3286585418, ___statusDescription_7)); }
	inline String_t* get_statusDescription_7() const { return ___statusDescription_7; }
	inline String_t** get_address_of_statusDescription_7() { return &___statusDescription_7; }
	inline void set_statusDescription_7(String_t* value)
	{
		___statusDescription_7 = value;
		Il2CppCodeGenWriteBarrier((&___statusDescription_7), value);
	}

	inline static int32_t get_offset_of_contentLength_8() { return static_cast<int32_t>(offsetof(HttpWebResponse_t3286585418, ___contentLength_8)); }
	inline int64_t get_contentLength_8() const { return ___contentLength_8; }
	inline int64_t* get_address_of_contentLength_8() { return &___contentLength_8; }
	inline void set_contentLength_8(int64_t value)
	{
		___contentLength_8 = value;
	}

	inline static int32_t get_offset_of_contentType_9() { return static_cast<int32_t>(offsetof(HttpWebResponse_t3286585418, ___contentType_9)); }
	inline String_t* get_contentType_9() const { return ___contentType_9; }
	inline String_t** get_address_of_contentType_9() { return &___contentType_9; }
	inline void set_contentType_9(String_t* value)
	{
		___contentType_9 = value;
		Il2CppCodeGenWriteBarrier((&___contentType_9), value);
	}

	inline static int32_t get_offset_of_cookie_container_10() { return static_cast<int32_t>(offsetof(HttpWebResponse_t3286585418, ___cookie_container_10)); }
	inline CookieContainer_t2331592909 * get_cookie_container_10() const { return ___cookie_container_10; }
	inline CookieContainer_t2331592909 ** get_address_of_cookie_container_10() { return &___cookie_container_10; }
	inline void set_cookie_container_10(CookieContainer_t2331592909 * value)
	{
		___cookie_container_10 = value;
		Il2CppCodeGenWriteBarrier((&___cookie_container_10), value);
	}

	inline static int32_t get_offset_of_disposed_11() { return static_cast<int32_t>(offsetof(HttpWebResponse_t3286585418, ___disposed_11)); }
	inline bool get_disposed_11() const { return ___disposed_11; }
	inline bool* get_address_of_disposed_11() { return &___disposed_11; }
	inline void set_disposed_11(bool value)
	{
		___disposed_11 = value;
	}

	inline static int32_t get_offset_of_stream_12() { return static_cast<int32_t>(offsetof(HttpWebResponse_t3286585418, ___stream_12)); }
	inline Stream_t1273022909 * get_stream_12() const { return ___stream_12; }
	inline Stream_t1273022909 ** get_address_of_stream_12() { return &___stream_12; }
	inline void set_stream_12(Stream_t1273022909 * value)
	{
		___stream_12 = value;
		Il2CppCodeGenWriteBarrier((&___stream_12), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HTTPWEBRESPONSE_T3286585418_H
#ifndef MONOCHUNKSTREAM_T2034754733_H
#define MONOCHUNKSTREAM_T2034754733_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.MonoChunkStream
struct  MonoChunkStream_t2034754733  : public RuntimeObject
{
public:
	// System.Net.WebHeaderCollection System.Net.MonoChunkStream::headers
	WebHeaderCollection_t1942268960 * ___headers_0;
	// System.Int32 System.Net.MonoChunkStream::chunkSize
	int32_t ___chunkSize_1;
	// System.Int32 System.Net.MonoChunkStream::chunkRead
	int32_t ___chunkRead_2;
	// System.Int32 System.Net.MonoChunkStream::totalWritten
	int32_t ___totalWritten_3;
	// System.Net.MonoChunkStream/State System.Net.MonoChunkStream::state
	int32_t ___state_4;
	// System.Text.StringBuilder System.Net.MonoChunkStream::saved
	StringBuilder_t * ___saved_5;
	// System.Boolean System.Net.MonoChunkStream::sawCR
	bool ___sawCR_6;
	// System.Boolean System.Net.MonoChunkStream::gotit
	bool ___gotit_7;
	// System.Int32 System.Net.MonoChunkStream::trailerState
	int32_t ___trailerState_8;
	// System.Collections.ArrayList System.Net.MonoChunkStream::chunks
	ArrayList_t2718874744 * ___chunks_9;

public:
	inline static int32_t get_offset_of_headers_0() { return static_cast<int32_t>(offsetof(MonoChunkStream_t2034754733, ___headers_0)); }
	inline WebHeaderCollection_t1942268960 * get_headers_0() const { return ___headers_0; }
	inline WebHeaderCollection_t1942268960 ** get_address_of_headers_0() { return &___headers_0; }
	inline void set_headers_0(WebHeaderCollection_t1942268960 * value)
	{
		___headers_0 = value;
		Il2CppCodeGenWriteBarrier((&___headers_0), value);
	}

	inline static int32_t get_offset_of_chunkSize_1() { return static_cast<int32_t>(offsetof(MonoChunkStream_t2034754733, ___chunkSize_1)); }
	inline int32_t get_chunkSize_1() const { return ___chunkSize_1; }
	inline int32_t* get_address_of_chunkSize_1() { return &___chunkSize_1; }
	inline void set_chunkSize_1(int32_t value)
	{
		___chunkSize_1 = value;
	}

	inline static int32_t get_offset_of_chunkRead_2() { return static_cast<int32_t>(offsetof(MonoChunkStream_t2034754733, ___chunkRead_2)); }
	inline int32_t get_chunkRead_2() const { return ___chunkRead_2; }
	inline int32_t* get_address_of_chunkRead_2() { return &___chunkRead_2; }
	inline void set_chunkRead_2(int32_t value)
	{
		___chunkRead_2 = value;
	}

	inline static int32_t get_offset_of_totalWritten_3() { return static_cast<int32_t>(offsetof(MonoChunkStream_t2034754733, ___totalWritten_3)); }
	inline int32_t get_totalWritten_3() const { return ___totalWritten_3; }
	inline int32_t* get_address_of_totalWritten_3() { return &___totalWritten_3; }
	inline void set_totalWritten_3(int32_t value)
	{
		___totalWritten_3 = value;
	}

	inline static int32_t get_offset_of_state_4() { return static_cast<int32_t>(offsetof(MonoChunkStream_t2034754733, ___state_4)); }
	inline int32_t get_state_4() const { return ___state_4; }
	inline int32_t* get_address_of_state_4() { return &___state_4; }
	inline void set_state_4(int32_t value)
	{
		___state_4 = value;
	}

	inline static int32_t get_offset_of_saved_5() { return static_cast<int32_t>(offsetof(MonoChunkStream_t2034754733, ___saved_5)); }
	inline StringBuilder_t * get_saved_5() const { return ___saved_5; }
	inline StringBuilder_t ** get_address_of_saved_5() { return &___saved_5; }
	inline void set_saved_5(StringBuilder_t * value)
	{
		___saved_5 = value;
		Il2CppCodeGenWriteBarrier((&___saved_5), value);
	}

	inline static int32_t get_offset_of_sawCR_6() { return static_cast<int32_t>(offsetof(MonoChunkStream_t2034754733, ___sawCR_6)); }
	inline bool get_sawCR_6() const { return ___sawCR_6; }
	inline bool* get_address_of_sawCR_6() { return &___sawCR_6; }
	inline void set_sawCR_6(bool value)
	{
		___sawCR_6 = value;
	}

	inline static int32_t get_offset_of_gotit_7() { return static_cast<int32_t>(offsetof(MonoChunkStream_t2034754733, ___gotit_7)); }
	inline bool get_gotit_7() const { return ___gotit_7; }
	inline bool* get_address_of_gotit_7() { return &___gotit_7; }
	inline void set_gotit_7(bool value)
	{
		___gotit_7 = value;
	}

	inline static int32_t get_offset_of_trailerState_8() { return static_cast<int32_t>(offsetof(MonoChunkStream_t2034754733, ___trailerState_8)); }
	inline int32_t get_trailerState_8() const { return ___trailerState_8; }
	inline int32_t* get_address_of_trailerState_8() { return &___trailerState_8; }
	inline void set_trailerState_8(int32_t value)
	{
		___trailerState_8 = value;
	}

	inline static int32_t get_offset_of_chunks_9() { return static_cast<int32_t>(offsetof(MonoChunkStream_t2034754733, ___chunks_9)); }
	inline ArrayList_t2718874744 * get_chunks_9() const { return ___chunks_9; }
	inline ArrayList_t2718874744 ** get_address_of_chunks_9() { return &___chunks_9; }
	inline void set_chunks_9(ArrayList_t2718874744 * value)
	{
		___chunks_9 = value;
		Il2CppCodeGenWriteBarrier((&___chunks_9), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOCHUNKSTREAM_T2034754733_H
#ifndef LINUXIPINTERFACEPROPERTIES_T458874081_H
#define LINUXIPINTERFACEPROPERTIES_T458874081_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.LinuxIPInterfaceProperties
struct  LinuxIPInterfaceProperties_t458874081  : public UnixIPInterfaceProperties_t1296234392
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LINUXIPINTERFACEPROPERTIES_T458874081_H
#ifndef MACOSIPINTERFACEPROPERTIES_T1282553291_H
#define MACOSIPINTERFACEPROPERTIES_T1282553291_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.MacOsIPInterfaceProperties
struct  MacOsIPInterfaceProperties_t1282553291  : public UnixIPInterfaceProperties_t1296234392
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MACOSIPINTERFACEPROPERTIES_T1282553291_H
#ifndef MIBIPGLOBALPROPERTIES_T3015477361_H
#define MIBIPGLOBALPROPERTIES_T3015477361_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.MibIPGlobalProperties
struct  MibIPGlobalProperties_t3015477361  : public UnixIPGlobalProperties_t1460024316
{
public:
	// System.String System.Net.NetworkInformation.MibIPGlobalProperties::StatisticsFile
	String_t* ___StatisticsFile_0;
	// System.String System.Net.NetworkInformation.MibIPGlobalProperties::StatisticsFileIPv6
	String_t* ___StatisticsFileIPv6_1;
	// System.String System.Net.NetworkInformation.MibIPGlobalProperties::TcpFile
	String_t* ___TcpFile_2;
	// System.String System.Net.NetworkInformation.MibIPGlobalProperties::Tcp6File
	String_t* ___Tcp6File_3;
	// System.String System.Net.NetworkInformation.MibIPGlobalProperties::UdpFile
	String_t* ___UdpFile_4;
	// System.String System.Net.NetworkInformation.MibIPGlobalProperties::Udp6File
	String_t* ___Udp6File_5;

public:
	inline static int32_t get_offset_of_StatisticsFile_0() { return static_cast<int32_t>(offsetof(MibIPGlobalProperties_t3015477361, ___StatisticsFile_0)); }
	inline String_t* get_StatisticsFile_0() const { return ___StatisticsFile_0; }
	inline String_t** get_address_of_StatisticsFile_0() { return &___StatisticsFile_0; }
	inline void set_StatisticsFile_0(String_t* value)
	{
		___StatisticsFile_0 = value;
		Il2CppCodeGenWriteBarrier((&___StatisticsFile_0), value);
	}

	inline static int32_t get_offset_of_StatisticsFileIPv6_1() { return static_cast<int32_t>(offsetof(MibIPGlobalProperties_t3015477361, ___StatisticsFileIPv6_1)); }
	inline String_t* get_StatisticsFileIPv6_1() const { return ___StatisticsFileIPv6_1; }
	inline String_t** get_address_of_StatisticsFileIPv6_1() { return &___StatisticsFileIPv6_1; }
	inline void set_StatisticsFileIPv6_1(String_t* value)
	{
		___StatisticsFileIPv6_1 = value;
		Il2CppCodeGenWriteBarrier((&___StatisticsFileIPv6_1), value);
	}

	inline static int32_t get_offset_of_TcpFile_2() { return static_cast<int32_t>(offsetof(MibIPGlobalProperties_t3015477361, ___TcpFile_2)); }
	inline String_t* get_TcpFile_2() const { return ___TcpFile_2; }
	inline String_t** get_address_of_TcpFile_2() { return &___TcpFile_2; }
	inline void set_TcpFile_2(String_t* value)
	{
		___TcpFile_2 = value;
		Il2CppCodeGenWriteBarrier((&___TcpFile_2), value);
	}

	inline static int32_t get_offset_of_Tcp6File_3() { return static_cast<int32_t>(offsetof(MibIPGlobalProperties_t3015477361, ___Tcp6File_3)); }
	inline String_t* get_Tcp6File_3() const { return ___Tcp6File_3; }
	inline String_t** get_address_of_Tcp6File_3() { return &___Tcp6File_3; }
	inline void set_Tcp6File_3(String_t* value)
	{
		___Tcp6File_3 = value;
		Il2CppCodeGenWriteBarrier((&___Tcp6File_3), value);
	}

	inline static int32_t get_offset_of_UdpFile_4() { return static_cast<int32_t>(offsetof(MibIPGlobalProperties_t3015477361, ___UdpFile_4)); }
	inline String_t* get_UdpFile_4() const { return ___UdpFile_4; }
	inline String_t** get_address_of_UdpFile_4() { return &___UdpFile_4; }
	inline void set_UdpFile_4(String_t* value)
	{
		___UdpFile_4 = value;
		Il2CppCodeGenWriteBarrier((&___UdpFile_4), value);
	}

	inline static int32_t get_offset_of_Udp6File_5() { return static_cast<int32_t>(offsetof(MibIPGlobalProperties_t3015477361, ___Udp6File_5)); }
	inline String_t* get_Udp6File_5() const { return ___Udp6File_5; }
	inline String_t** get_address_of_Udp6File_5() { return &___Udp6File_5; }
	inline void set_Udp6File_5(String_t* value)
	{
		___Udp6File_5 = value;
		Il2CppCodeGenWriteBarrier((&___Udp6File_5), value);
	}
};

struct MibIPGlobalProperties_t3015477361_StaticFields
{
public:
	// System.Char[] System.Net.NetworkInformation.MibIPGlobalProperties::wsChars
	CharU5BU5D_t3528271667* ___wsChars_6;

public:
	inline static int32_t get_offset_of_wsChars_6() { return static_cast<int32_t>(offsetof(MibIPGlobalProperties_t3015477361_StaticFields, ___wsChars_6)); }
	inline CharU5BU5D_t3528271667* get_wsChars_6() const { return ___wsChars_6; }
	inline CharU5BU5D_t3528271667** get_address_of_wsChars_6() { return &___wsChars_6; }
	inline void set_wsChars_6(CharU5BU5D_t3528271667* value)
	{
		___wsChars_6 = value;
		Il2CppCodeGenWriteBarrier((&___wsChars_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MIBIPGLOBALPROPERTIES_T3015477361_H
#ifndef UNIXNETWORKINTERFACE_T2401762829_H
#define UNIXNETWORKINTERFACE_T2401762829_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.UnixNetworkInterface
struct  UnixNetworkInterface_t2401762829  : public NetworkInterface_t271883373
{
public:
	// System.Net.NetworkInformation.IPInterfaceProperties System.Net.NetworkInformation.UnixNetworkInterface::ipproperties
	IPInterfaceProperties_t3964383369 * ___ipproperties_0;
	// System.String System.Net.NetworkInformation.UnixNetworkInterface::name
	String_t* ___name_1;
	// System.Collections.Generic.List`1<System.Net.IPAddress> System.Net.NetworkInformation.UnixNetworkInterface::addresses
	List_1_t1713852332 * ___addresses_2;
	// System.Byte[] System.Net.NetworkInformation.UnixNetworkInterface::macAddress
	ByteU5BU5D_t4116647657* ___macAddress_3;
	// System.Net.NetworkInformation.NetworkInterfaceType System.Net.NetworkInformation.UnixNetworkInterface::type
	int32_t ___type_4;

public:
	inline static int32_t get_offset_of_ipproperties_0() { return static_cast<int32_t>(offsetof(UnixNetworkInterface_t2401762829, ___ipproperties_0)); }
	inline IPInterfaceProperties_t3964383369 * get_ipproperties_0() const { return ___ipproperties_0; }
	inline IPInterfaceProperties_t3964383369 ** get_address_of_ipproperties_0() { return &___ipproperties_0; }
	inline void set_ipproperties_0(IPInterfaceProperties_t3964383369 * value)
	{
		___ipproperties_0 = value;
		Il2CppCodeGenWriteBarrier((&___ipproperties_0), value);
	}

	inline static int32_t get_offset_of_name_1() { return static_cast<int32_t>(offsetof(UnixNetworkInterface_t2401762829, ___name_1)); }
	inline String_t* get_name_1() const { return ___name_1; }
	inline String_t** get_address_of_name_1() { return &___name_1; }
	inline void set_name_1(String_t* value)
	{
		___name_1 = value;
		Il2CppCodeGenWriteBarrier((&___name_1), value);
	}

	inline static int32_t get_offset_of_addresses_2() { return static_cast<int32_t>(offsetof(UnixNetworkInterface_t2401762829, ___addresses_2)); }
	inline List_1_t1713852332 * get_addresses_2() const { return ___addresses_2; }
	inline List_1_t1713852332 ** get_address_of_addresses_2() { return &___addresses_2; }
	inline void set_addresses_2(List_1_t1713852332 * value)
	{
		___addresses_2 = value;
		Il2CppCodeGenWriteBarrier((&___addresses_2), value);
	}

	inline static int32_t get_offset_of_macAddress_3() { return static_cast<int32_t>(offsetof(UnixNetworkInterface_t2401762829, ___macAddress_3)); }
	inline ByteU5BU5D_t4116647657* get_macAddress_3() const { return ___macAddress_3; }
	inline ByteU5BU5D_t4116647657** get_address_of_macAddress_3() { return &___macAddress_3; }
	inline void set_macAddress_3(ByteU5BU5D_t4116647657* value)
	{
		___macAddress_3 = value;
		Il2CppCodeGenWriteBarrier((&___macAddress_3), value);
	}

	inline static int32_t get_offset_of_type_4() { return static_cast<int32_t>(offsetof(UnixNetworkInterface_t2401762829, ___type_4)); }
	inline int32_t get_type_4() const { return ___type_4; }
	inline int32_t* get_address_of_type_4() { return &___type_4; }
	inline void set_type_4(int32_t value)
	{
		___type_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNIXNETWORKINTERFACE_T2401762829_H
#ifndef WIN32_FIXED_INFO_T1299345856_H
#define WIN32_FIXED_INFO_T1299345856_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.Win32_FIXED_INFO
struct  Win32_FIXED_INFO_t1299345856 
{
public:
	// System.String System.Net.NetworkInformation.Win32_FIXED_INFO::HostName
	String_t* ___HostName_0;
	// System.String System.Net.NetworkInformation.Win32_FIXED_INFO::DomainName
	String_t* ___DomainName_1;
	// System.IntPtr System.Net.NetworkInformation.Win32_FIXED_INFO::CurrentDnsServer
	intptr_t ___CurrentDnsServer_2;
	// System.Net.NetworkInformation.Win32_IP_ADDR_STRING System.Net.NetworkInformation.Win32_FIXED_INFO::DnsServerList
	Win32_IP_ADDR_STRING_t1213417184  ___DnsServerList_3;
	// System.Net.NetworkInformation.NetBiosNodeType System.Net.NetworkInformation.Win32_FIXED_INFO::NodeType
	int32_t ___NodeType_4;
	// System.String System.Net.NetworkInformation.Win32_FIXED_INFO::ScopeId
	String_t* ___ScopeId_5;
	// System.UInt32 System.Net.NetworkInformation.Win32_FIXED_INFO::EnableRouting
	uint32_t ___EnableRouting_6;
	// System.UInt32 System.Net.NetworkInformation.Win32_FIXED_INFO::EnableProxy
	uint32_t ___EnableProxy_7;
	// System.UInt32 System.Net.NetworkInformation.Win32_FIXED_INFO::EnableDns
	uint32_t ___EnableDns_8;

public:
	inline static int32_t get_offset_of_HostName_0() { return static_cast<int32_t>(offsetof(Win32_FIXED_INFO_t1299345856, ___HostName_0)); }
	inline String_t* get_HostName_0() const { return ___HostName_0; }
	inline String_t** get_address_of_HostName_0() { return &___HostName_0; }
	inline void set_HostName_0(String_t* value)
	{
		___HostName_0 = value;
		Il2CppCodeGenWriteBarrier((&___HostName_0), value);
	}

	inline static int32_t get_offset_of_DomainName_1() { return static_cast<int32_t>(offsetof(Win32_FIXED_INFO_t1299345856, ___DomainName_1)); }
	inline String_t* get_DomainName_1() const { return ___DomainName_1; }
	inline String_t** get_address_of_DomainName_1() { return &___DomainName_1; }
	inline void set_DomainName_1(String_t* value)
	{
		___DomainName_1 = value;
		Il2CppCodeGenWriteBarrier((&___DomainName_1), value);
	}

	inline static int32_t get_offset_of_CurrentDnsServer_2() { return static_cast<int32_t>(offsetof(Win32_FIXED_INFO_t1299345856, ___CurrentDnsServer_2)); }
	inline intptr_t get_CurrentDnsServer_2() const { return ___CurrentDnsServer_2; }
	inline intptr_t* get_address_of_CurrentDnsServer_2() { return &___CurrentDnsServer_2; }
	inline void set_CurrentDnsServer_2(intptr_t value)
	{
		___CurrentDnsServer_2 = value;
	}

	inline static int32_t get_offset_of_DnsServerList_3() { return static_cast<int32_t>(offsetof(Win32_FIXED_INFO_t1299345856, ___DnsServerList_3)); }
	inline Win32_IP_ADDR_STRING_t1213417184  get_DnsServerList_3() const { return ___DnsServerList_3; }
	inline Win32_IP_ADDR_STRING_t1213417184 * get_address_of_DnsServerList_3() { return &___DnsServerList_3; }
	inline void set_DnsServerList_3(Win32_IP_ADDR_STRING_t1213417184  value)
	{
		___DnsServerList_3 = value;
	}

	inline static int32_t get_offset_of_NodeType_4() { return static_cast<int32_t>(offsetof(Win32_FIXED_INFO_t1299345856, ___NodeType_4)); }
	inline int32_t get_NodeType_4() const { return ___NodeType_4; }
	inline int32_t* get_address_of_NodeType_4() { return &___NodeType_4; }
	inline void set_NodeType_4(int32_t value)
	{
		___NodeType_4 = value;
	}

	inline static int32_t get_offset_of_ScopeId_5() { return static_cast<int32_t>(offsetof(Win32_FIXED_INFO_t1299345856, ___ScopeId_5)); }
	inline String_t* get_ScopeId_5() const { return ___ScopeId_5; }
	inline String_t** get_address_of_ScopeId_5() { return &___ScopeId_5; }
	inline void set_ScopeId_5(String_t* value)
	{
		___ScopeId_5 = value;
		Il2CppCodeGenWriteBarrier((&___ScopeId_5), value);
	}

	inline static int32_t get_offset_of_EnableRouting_6() { return static_cast<int32_t>(offsetof(Win32_FIXED_INFO_t1299345856, ___EnableRouting_6)); }
	inline uint32_t get_EnableRouting_6() const { return ___EnableRouting_6; }
	inline uint32_t* get_address_of_EnableRouting_6() { return &___EnableRouting_6; }
	inline void set_EnableRouting_6(uint32_t value)
	{
		___EnableRouting_6 = value;
	}

	inline static int32_t get_offset_of_EnableProxy_7() { return static_cast<int32_t>(offsetof(Win32_FIXED_INFO_t1299345856, ___EnableProxy_7)); }
	inline uint32_t get_EnableProxy_7() const { return ___EnableProxy_7; }
	inline uint32_t* get_address_of_EnableProxy_7() { return &___EnableProxy_7; }
	inline void set_EnableProxy_7(uint32_t value)
	{
		___EnableProxy_7 = value;
	}

	inline static int32_t get_offset_of_EnableDns_8() { return static_cast<int32_t>(offsetof(Win32_FIXED_INFO_t1299345856, ___EnableDns_8)); }
	inline uint32_t get_EnableDns_8() const { return ___EnableDns_8; }
	inline uint32_t* get_address_of_EnableDns_8() { return &___EnableDns_8; }
	inline void set_EnableDns_8(uint32_t value)
	{
		___EnableDns_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Net.NetworkInformation.Win32_FIXED_INFO
struct Win32_FIXED_INFO_t1299345856_marshaled_pinvoke
{
	char ___HostName_0[132];
	char ___DomainName_1[132];
	intptr_t ___CurrentDnsServer_2;
	Win32_IP_ADDR_STRING_t1213417184_marshaled_pinvoke ___DnsServerList_3;
	int32_t ___NodeType_4;
	char ___ScopeId_5[260];
	uint32_t ___EnableRouting_6;
	uint32_t ___EnableProxy_7;
	uint32_t ___EnableDns_8;
};
// Native definition for COM marshalling of System.Net.NetworkInformation.Win32_FIXED_INFO
struct Win32_FIXED_INFO_t1299345856_marshaled_com
{
	char ___HostName_0[132];
	char ___DomainName_1[132];
	intptr_t ___CurrentDnsServer_2;
	Win32_IP_ADDR_STRING_t1213417184_marshaled_com ___DnsServerList_3;
	int32_t ___NodeType_4;
	char ___ScopeId_5[260];
	uint32_t ___EnableRouting_6;
	uint32_t ___EnableProxy_7;
	uint32_t ___EnableDns_8;
};
#endif // WIN32_FIXED_INFO_T1299345856_H
#ifndef WIN32_IP_ADAPTER_ADDRESSES_T3463526328_H
#define WIN32_IP_ADAPTER_ADDRESSES_T3463526328_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.Win32_IP_ADAPTER_ADDRESSES
struct  Win32_IP_ADAPTER_ADDRESSES_t3463526328 
{
public:
	// System.Net.NetworkInformation.AlignmentUnion System.Net.NetworkInformation.Win32_IP_ADAPTER_ADDRESSES::Alignment
	AlignmentUnion_t208902285  ___Alignment_0;
	// System.IntPtr System.Net.NetworkInformation.Win32_IP_ADAPTER_ADDRESSES::Next
	intptr_t ___Next_1;
	// System.String System.Net.NetworkInformation.Win32_IP_ADAPTER_ADDRESSES::AdapterName
	String_t* ___AdapterName_2;
	// System.IntPtr System.Net.NetworkInformation.Win32_IP_ADAPTER_ADDRESSES::FirstUnicastAddress
	intptr_t ___FirstUnicastAddress_3;
	// System.IntPtr System.Net.NetworkInformation.Win32_IP_ADAPTER_ADDRESSES::FirstAnycastAddress
	intptr_t ___FirstAnycastAddress_4;
	// System.IntPtr System.Net.NetworkInformation.Win32_IP_ADAPTER_ADDRESSES::FirstMulticastAddress
	intptr_t ___FirstMulticastAddress_5;
	// System.IntPtr System.Net.NetworkInformation.Win32_IP_ADAPTER_ADDRESSES::FirstDnsServerAddress
	intptr_t ___FirstDnsServerAddress_6;
	// System.String System.Net.NetworkInformation.Win32_IP_ADAPTER_ADDRESSES::DnsSuffix
	String_t* ___DnsSuffix_7;
	// System.String System.Net.NetworkInformation.Win32_IP_ADAPTER_ADDRESSES::Description
	String_t* ___Description_8;
	// System.String System.Net.NetworkInformation.Win32_IP_ADAPTER_ADDRESSES::FriendlyName
	String_t* ___FriendlyName_9;
	// System.Byte[] System.Net.NetworkInformation.Win32_IP_ADAPTER_ADDRESSES::PhysicalAddress
	ByteU5BU5D_t4116647657* ___PhysicalAddress_10;
	// System.UInt32 System.Net.NetworkInformation.Win32_IP_ADAPTER_ADDRESSES::PhysicalAddressLength
	uint32_t ___PhysicalAddressLength_11;
	// System.UInt32 System.Net.NetworkInformation.Win32_IP_ADAPTER_ADDRESSES::Flags
	uint32_t ___Flags_12;
	// System.UInt32 System.Net.NetworkInformation.Win32_IP_ADAPTER_ADDRESSES::Mtu
	uint32_t ___Mtu_13;
	// System.Net.NetworkInformation.NetworkInterfaceType System.Net.NetworkInformation.Win32_IP_ADAPTER_ADDRESSES::IfType
	int32_t ___IfType_14;
	// System.Net.NetworkInformation.OperationalStatus System.Net.NetworkInformation.Win32_IP_ADAPTER_ADDRESSES::OperStatus
	int32_t ___OperStatus_15;
	// System.Int32 System.Net.NetworkInformation.Win32_IP_ADAPTER_ADDRESSES::Ipv6IfIndex
	int32_t ___Ipv6IfIndex_16;
	// System.UInt32[] System.Net.NetworkInformation.Win32_IP_ADAPTER_ADDRESSES::ZoneIndices
	UInt32U5BU5D_t2770800703* ___ZoneIndices_17;

public:
	inline static int32_t get_offset_of_Alignment_0() { return static_cast<int32_t>(offsetof(Win32_IP_ADAPTER_ADDRESSES_t3463526328, ___Alignment_0)); }
	inline AlignmentUnion_t208902285  get_Alignment_0() const { return ___Alignment_0; }
	inline AlignmentUnion_t208902285 * get_address_of_Alignment_0() { return &___Alignment_0; }
	inline void set_Alignment_0(AlignmentUnion_t208902285  value)
	{
		___Alignment_0 = value;
	}

	inline static int32_t get_offset_of_Next_1() { return static_cast<int32_t>(offsetof(Win32_IP_ADAPTER_ADDRESSES_t3463526328, ___Next_1)); }
	inline intptr_t get_Next_1() const { return ___Next_1; }
	inline intptr_t* get_address_of_Next_1() { return &___Next_1; }
	inline void set_Next_1(intptr_t value)
	{
		___Next_1 = value;
	}

	inline static int32_t get_offset_of_AdapterName_2() { return static_cast<int32_t>(offsetof(Win32_IP_ADAPTER_ADDRESSES_t3463526328, ___AdapterName_2)); }
	inline String_t* get_AdapterName_2() const { return ___AdapterName_2; }
	inline String_t** get_address_of_AdapterName_2() { return &___AdapterName_2; }
	inline void set_AdapterName_2(String_t* value)
	{
		___AdapterName_2 = value;
		Il2CppCodeGenWriteBarrier((&___AdapterName_2), value);
	}

	inline static int32_t get_offset_of_FirstUnicastAddress_3() { return static_cast<int32_t>(offsetof(Win32_IP_ADAPTER_ADDRESSES_t3463526328, ___FirstUnicastAddress_3)); }
	inline intptr_t get_FirstUnicastAddress_3() const { return ___FirstUnicastAddress_3; }
	inline intptr_t* get_address_of_FirstUnicastAddress_3() { return &___FirstUnicastAddress_3; }
	inline void set_FirstUnicastAddress_3(intptr_t value)
	{
		___FirstUnicastAddress_3 = value;
	}

	inline static int32_t get_offset_of_FirstAnycastAddress_4() { return static_cast<int32_t>(offsetof(Win32_IP_ADAPTER_ADDRESSES_t3463526328, ___FirstAnycastAddress_4)); }
	inline intptr_t get_FirstAnycastAddress_4() const { return ___FirstAnycastAddress_4; }
	inline intptr_t* get_address_of_FirstAnycastAddress_4() { return &___FirstAnycastAddress_4; }
	inline void set_FirstAnycastAddress_4(intptr_t value)
	{
		___FirstAnycastAddress_4 = value;
	}

	inline static int32_t get_offset_of_FirstMulticastAddress_5() { return static_cast<int32_t>(offsetof(Win32_IP_ADAPTER_ADDRESSES_t3463526328, ___FirstMulticastAddress_5)); }
	inline intptr_t get_FirstMulticastAddress_5() const { return ___FirstMulticastAddress_5; }
	inline intptr_t* get_address_of_FirstMulticastAddress_5() { return &___FirstMulticastAddress_5; }
	inline void set_FirstMulticastAddress_5(intptr_t value)
	{
		___FirstMulticastAddress_5 = value;
	}

	inline static int32_t get_offset_of_FirstDnsServerAddress_6() { return static_cast<int32_t>(offsetof(Win32_IP_ADAPTER_ADDRESSES_t3463526328, ___FirstDnsServerAddress_6)); }
	inline intptr_t get_FirstDnsServerAddress_6() const { return ___FirstDnsServerAddress_6; }
	inline intptr_t* get_address_of_FirstDnsServerAddress_6() { return &___FirstDnsServerAddress_6; }
	inline void set_FirstDnsServerAddress_6(intptr_t value)
	{
		___FirstDnsServerAddress_6 = value;
	}

	inline static int32_t get_offset_of_DnsSuffix_7() { return static_cast<int32_t>(offsetof(Win32_IP_ADAPTER_ADDRESSES_t3463526328, ___DnsSuffix_7)); }
	inline String_t* get_DnsSuffix_7() const { return ___DnsSuffix_7; }
	inline String_t** get_address_of_DnsSuffix_7() { return &___DnsSuffix_7; }
	inline void set_DnsSuffix_7(String_t* value)
	{
		___DnsSuffix_7 = value;
		Il2CppCodeGenWriteBarrier((&___DnsSuffix_7), value);
	}

	inline static int32_t get_offset_of_Description_8() { return static_cast<int32_t>(offsetof(Win32_IP_ADAPTER_ADDRESSES_t3463526328, ___Description_8)); }
	inline String_t* get_Description_8() const { return ___Description_8; }
	inline String_t** get_address_of_Description_8() { return &___Description_8; }
	inline void set_Description_8(String_t* value)
	{
		___Description_8 = value;
		Il2CppCodeGenWriteBarrier((&___Description_8), value);
	}

	inline static int32_t get_offset_of_FriendlyName_9() { return static_cast<int32_t>(offsetof(Win32_IP_ADAPTER_ADDRESSES_t3463526328, ___FriendlyName_9)); }
	inline String_t* get_FriendlyName_9() const { return ___FriendlyName_9; }
	inline String_t** get_address_of_FriendlyName_9() { return &___FriendlyName_9; }
	inline void set_FriendlyName_9(String_t* value)
	{
		___FriendlyName_9 = value;
		Il2CppCodeGenWriteBarrier((&___FriendlyName_9), value);
	}

	inline static int32_t get_offset_of_PhysicalAddress_10() { return static_cast<int32_t>(offsetof(Win32_IP_ADAPTER_ADDRESSES_t3463526328, ___PhysicalAddress_10)); }
	inline ByteU5BU5D_t4116647657* get_PhysicalAddress_10() const { return ___PhysicalAddress_10; }
	inline ByteU5BU5D_t4116647657** get_address_of_PhysicalAddress_10() { return &___PhysicalAddress_10; }
	inline void set_PhysicalAddress_10(ByteU5BU5D_t4116647657* value)
	{
		___PhysicalAddress_10 = value;
		Il2CppCodeGenWriteBarrier((&___PhysicalAddress_10), value);
	}

	inline static int32_t get_offset_of_PhysicalAddressLength_11() { return static_cast<int32_t>(offsetof(Win32_IP_ADAPTER_ADDRESSES_t3463526328, ___PhysicalAddressLength_11)); }
	inline uint32_t get_PhysicalAddressLength_11() const { return ___PhysicalAddressLength_11; }
	inline uint32_t* get_address_of_PhysicalAddressLength_11() { return &___PhysicalAddressLength_11; }
	inline void set_PhysicalAddressLength_11(uint32_t value)
	{
		___PhysicalAddressLength_11 = value;
	}

	inline static int32_t get_offset_of_Flags_12() { return static_cast<int32_t>(offsetof(Win32_IP_ADAPTER_ADDRESSES_t3463526328, ___Flags_12)); }
	inline uint32_t get_Flags_12() const { return ___Flags_12; }
	inline uint32_t* get_address_of_Flags_12() { return &___Flags_12; }
	inline void set_Flags_12(uint32_t value)
	{
		___Flags_12 = value;
	}

	inline static int32_t get_offset_of_Mtu_13() { return static_cast<int32_t>(offsetof(Win32_IP_ADAPTER_ADDRESSES_t3463526328, ___Mtu_13)); }
	inline uint32_t get_Mtu_13() const { return ___Mtu_13; }
	inline uint32_t* get_address_of_Mtu_13() { return &___Mtu_13; }
	inline void set_Mtu_13(uint32_t value)
	{
		___Mtu_13 = value;
	}

	inline static int32_t get_offset_of_IfType_14() { return static_cast<int32_t>(offsetof(Win32_IP_ADAPTER_ADDRESSES_t3463526328, ___IfType_14)); }
	inline int32_t get_IfType_14() const { return ___IfType_14; }
	inline int32_t* get_address_of_IfType_14() { return &___IfType_14; }
	inline void set_IfType_14(int32_t value)
	{
		___IfType_14 = value;
	}

	inline static int32_t get_offset_of_OperStatus_15() { return static_cast<int32_t>(offsetof(Win32_IP_ADAPTER_ADDRESSES_t3463526328, ___OperStatus_15)); }
	inline int32_t get_OperStatus_15() const { return ___OperStatus_15; }
	inline int32_t* get_address_of_OperStatus_15() { return &___OperStatus_15; }
	inline void set_OperStatus_15(int32_t value)
	{
		___OperStatus_15 = value;
	}

	inline static int32_t get_offset_of_Ipv6IfIndex_16() { return static_cast<int32_t>(offsetof(Win32_IP_ADAPTER_ADDRESSES_t3463526328, ___Ipv6IfIndex_16)); }
	inline int32_t get_Ipv6IfIndex_16() const { return ___Ipv6IfIndex_16; }
	inline int32_t* get_address_of_Ipv6IfIndex_16() { return &___Ipv6IfIndex_16; }
	inline void set_Ipv6IfIndex_16(int32_t value)
	{
		___Ipv6IfIndex_16 = value;
	}

	inline static int32_t get_offset_of_ZoneIndices_17() { return static_cast<int32_t>(offsetof(Win32_IP_ADAPTER_ADDRESSES_t3463526328, ___ZoneIndices_17)); }
	inline UInt32U5BU5D_t2770800703* get_ZoneIndices_17() const { return ___ZoneIndices_17; }
	inline UInt32U5BU5D_t2770800703** get_address_of_ZoneIndices_17() { return &___ZoneIndices_17; }
	inline void set_ZoneIndices_17(UInt32U5BU5D_t2770800703* value)
	{
		___ZoneIndices_17 = value;
		Il2CppCodeGenWriteBarrier((&___ZoneIndices_17), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Net.NetworkInformation.Win32_IP_ADAPTER_ADDRESSES
struct Win32_IP_ADAPTER_ADDRESSES_t3463526328_marshaled_pinvoke
{
	AlignmentUnion_t208902285  ___Alignment_0;
	intptr_t ___Next_1;
	char* ___AdapterName_2;
	intptr_t ___FirstUnicastAddress_3;
	intptr_t ___FirstAnycastAddress_4;
	intptr_t ___FirstMulticastAddress_5;
	intptr_t ___FirstDnsServerAddress_6;
	Il2CppChar* ___DnsSuffix_7;
	Il2CppChar* ___Description_8;
	Il2CppChar* ___FriendlyName_9;
	uint8_t ___PhysicalAddress_10[8];
	uint32_t ___PhysicalAddressLength_11;
	uint32_t ___Flags_12;
	uint32_t ___Mtu_13;
	int32_t ___IfType_14;
	int32_t ___OperStatus_15;
	int32_t ___Ipv6IfIndex_16;
	uint32_t ___ZoneIndices_17[64];
};
// Native definition for COM marshalling of System.Net.NetworkInformation.Win32_IP_ADAPTER_ADDRESSES
struct Win32_IP_ADAPTER_ADDRESSES_t3463526328_marshaled_com
{
	AlignmentUnion_t208902285  ___Alignment_0;
	intptr_t ___Next_1;
	char* ___AdapterName_2;
	intptr_t ___FirstUnicastAddress_3;
	intptr_t ___FirstAnycastAddress_4;
	intptr_t ___FirstMulticastAddress_5;
	intptr_t ___FirstDnsServerAddress_6;
	Il2CppChar* ___DnsSuffix_7;
	Il2CppChar* ___Description_8;
	Il2CppChar* ___FriendlyName_9;
	uint8_t ___PhysicalAddress_10[8];
	uint32_t ___PhysicalAddressLength_11;
	uint32_t ___Flags_12;
	uint32_t ___Mtu_13;
	int32_t ___IfType_14;
	int32_t ___OperStatus_15;
	int32_t ___Ipv6IfIndex_16;
	uint32_t ___ZoneIndices_17[64];
};
#endif // WIN32_IP_ADAPTER_ADDRESSES_T3463526328_H
#ifndef WIN32_MIB_IFROW_T851471770_H
#define WIN32_MIB_IFROW_T851471770_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.Win32_MIB_IFROW
struct  Win32_MIB_IFROW_t851471770 
{
public:
	// System.Char[] System.Net.NetworkInformation.Win32_MIB_IFROW::Name
	CharU5BU5D_t3528271667* ___Name_0;
	// System.Int32 System.Net.NetworkInformation.Win32_MIB_IFROW::Index
	int32_t ___Index_1;
	// System.Net.NetworkInformation.NetworkInterfaceType System.Net.NetworkInformation.Win32_MIB_IFROW::Type
	int32_t ___Type_2;
	// System.Int32 System.Net.NetworkInformation.Win32_MIB_IFROW::Mtu
	int32_t ___Mtu_3;
	// System.UInt32 System.Net.NetworkInformation.Win32_MIB_IFROW::Speed
	uint32_t ___Speed_4;
	// System.Int32 System.Net.NetworkInformation.Win32_MIB_IFROW::PhysAddrLen
	int32_t ___PhysAddrLen_5;
	// System.Byte[] System.Net.NetworkInformation.Win32_MIB_IFROW::PhysAddr
	ByteU5BU5D_t4116647657* ___PhysAddr_6;
	// System.UInt32 System.Net.NetworkInformation.Win32_MIB_IFROW::AdminStatus
	uint32_t ___AdminStatus_7;
	// System.UInt32 System.Net.NetworkInformation.Win32_MIB_IFROW::OperStatus
	uint32_t ___OperStatus_8;
	// System.UInt32 System.Net.NetworkInformation.Win32_MIB_IFROW::LastChange
	uint32_t ___LastChange_9;
	// System.Int32 System.Net.NetworkInformation.Win32_MIB_IFROW::InOctets
	int32_t ___InOctets_10;
	// System.Int32 System.Net.NetworkInformation.Win32_MIB_IFROW::InUcastPkts
	int32_t ___InUcastPkts_11;
	// System.Int32 System.Net.NetworkInformation.Win32_MIB_IFROW::InNUcastPkts
	int32_t ___InNUcastPkts_12;
	// System.Int32 System.Net.NetworkInformation.Win32_MIB_IFROW::InDiscards
	int32_t ___InDiscards_13;
	// System.Int32 System.Net.NetworkInformation.Win32_MIB_IFROW::InErrors
	int32_t ___InErrors_14;
	// System.Int32 System.Net.NetworkInformation.Win32_MIB_IFROW::InUnknownProtos
	int32_t ___InUnknownProtos_15;
	// System.Int32 System.Net.NetworkInformation.Win32_MIB_IFROW::OutOctets
	int32_t ___OutOctets_16;
	// System.Int32 System.Net.NetworkInformation.Win32_MIB_IFROW::OutUcastPkts
	int32_t ___OutUcastPkts_17;
	// System.Int32 System.Net.NetworkInformation.Win32_MIB_IFROW::OutNUcastPkts
	int32_t ___OutNUcastPkts_18;
	// System.Int32 System.Net.NetworkInformation.Win32_MIB_IFROW::OutDiscards
	int32_t ___OutDiscards_19;
	// System.Int32 System.Net.NetworkInformation.Win32_MIB_IFROW::OutErrors
	int32_t ___OutErrors_20;
	// System.Int32 System.Net.NetworkInformation.Win32_MIB_IFROW::OutQLen
	int32_t ___OutQLen_21;
	// System.Int32 System.Net.NetworkInformation.Win32_MIB_IFROW::DescrLen
	int32_t ___DescrLen_22;
	// System.Byte[] System.Net.NetworkInformation.Win32_MIB_IFROW::Descr
	ByteU5BU5D_t4116647657* ___Descr_23;

public:
	inline static int32_t get_offset_of_Name_0() { return static_cast<int32_t>(offsetof(Win32_MIB_IFROW_t851471770, ___Name_0)); }
	inline CharU5BU5D_t3528271667* get_Name_0() const { return ___Name_0; }
	inline CharU5BU5D_t3528271667** get_address_of_Name_0() { return &___Name_0; }
	inline void set_Name_0(CharU5BU5D_t3528271667* value)
	{
		___Name_0 = value;
		Il2CppCodeGenWriteBarrier((&___Name_0), value);
	}

	inline static int32_t get_offset_of_Index_1() { return static_cast<int32_t>(offsetof(Win32_MIB_IFROW_t851471770, ___Index_1)); }
	inline int32_t get_Index_1() const { return ___Index_1; }
	inline int32_t* get_address_of_Index_1() { return &___Index_1; }
	inline void set_Index_1(int32_t value)
	{
		___Index_1 = value;
	}

	inline static int32_t get_offset_of_Type_2() { return static_cast<int32_t>(offsetof(Win32_MIB_IFROW_t851471770, ___Type_2)); }
	inline int32_t get_Type_2() const { return ___Type_2; }
	inline int32_t* get_address_of_Type_2() { return &___Type_2; }
	inline void set_Type_2(int32_t value)
	{
		___Type_2 = value;
	}

	inline static int32_t get_offset_of_Mtu_3() { return static_cast<int32_t>(offsetof(Win32_MIB_IFROW_t851471770, ___Mtu_3)); }
	inline int32_t get_Mtu_3() const { return ___Mtu_3; }
	inline int32_t* get_address_of_Mtu_3() { return &___Mtu_3; }
	inline void set_Mtu_3(int32_t value)
	{
		___Mtu_3 = value;
	}

	inline static int32_t get_offset_of_Speed_4() { return static_cast<int32_t>(offsetof(Win32_MIB_IFROW_t851471770, ___Speed_4)); }
	inline uint32_t get_Speed_4() const { return ___Speed_4; }
	inline uint32_t* get_address_of_Speed_4() { return &___Speed_4; }
	inline void set_Speed_4(uint32_t value)
	{
		___Speed_4 = value;
	}

	inline static int32_t get_offset_of_PhysAddrLen_5() { return static_cast<int32_t>(offsetof(Win32_MIB_IFROW_t851471770, ___PhysAddrLen_5)); }
	inline int32_t get_PhysAddrLen_5() const { return ___PhysAddrLen_5; }
	inline int32_t* get_address_of_PhysAddrLen_5() { return &___PhysAddrLen_5; }
	inline void set_PhysAddrLen_5(int32_t value)
	{
		___PhysAddrLen_5 = value;
	}

	inline static int32_t get_offset_of_PhysAddr_6() { return static_cast<int32_t>(offsetof(Win32_MIB_IFROW_t851471770, ___PhysAddr_6)); }
	inline ByteU5BU5D_t4116647657* get_PhysAddr_6() const { return ___PhysAddr_6; }
	inline ByteU5BU5D_t4116647657** get_address_of_PhysAddr_6() { return &___PhysAddr_6; }
	inline void set_PhysAddr_6(ByteU5BU5D_t4116647657* value)
	{
		___PhysAddr_6 = value;
		Il2CppCodeGenWriteBarrier((&___PhysAddr_6), value);
	}

	inline static int32_t get_offset_of_AdminStatus_7() { return static_cast<int32_t>(offsetof(Win32_MIB_IFROW_t851471770, ___AdminStatus_7)); }
	inline uint32_t get_AdminStatus_7() const { return ___AdminStatus_7; }
	inline uint32_t* get_address_of_AdminStatus_7() { return &___AdminStatus_7; }
	inline void set_AdminStatus_7(uint32_t value)
	{
		___AdminStatus_7 = value;
	}

	inline static int32_t get_offset_of_OperStatus_8() { return static_cast<int32_t>(offsetof(Win32_MIB_IFROW_t851471770, ___OperStatus_8)); }
	inline uint32_t get_OperStatus_8() const { return ___OperStatus_8; }
	inline uint32_t* get_address_of_OperStatus_8() { return &___OperStatus_8; }
	inline void set_OperStatus_8(uint32_t value)
	{
		___OperStatus_8 = value;
	}

	inline static int32_t get_offset_of_LastChange_9() { return static_cast<int32_t>(offsetof(Win32_MIB_IFROW_t851471770, ___LastChange_9)); }
	inline uint32_t get_LastChange_9() const { return ___LastChange_9; }
	inline uint32_t* get_address_of_LastChange_9() { return &___LastChange_9; }
	inline void set_LastChange_9(uint32_t value)
	{
		___LastChange_9 = value;
	}

	inline static int32_t get_offset_of_InOctets_10() { return static_cast<int32_t>(offsetof(Win32_MIB_IFROW_t851471770, ___InOctets_10)); }
	inline int32_t get_InOctets_10() const { return ___InOctets_10; }
	inline int32_t* get_address_of_InOctets_10() { return &___InOctets_10; }
	inline void set_InOctets_10(int32_t value)
	{
		___InOctets_10 = value;
	}

	inline static int32_t get_offset_of_InUcastPkts_11() { return static_cast<int32_t>(offsetof(Win32_MIB_IFROW_t851471770, ___InUcastPkts_11)); }
	inline int32_t get_InUcastPkts_11() const { return ___InUcastPkts_11; }
	inline int32_t* get_address_of_InUcastPkts_11() { return &___InUcastPkts_11; }
	inline void set_InUcastPkts_11(int32_t value)
	{
		___InUcastPkts_11 = value;
	}

	inline static int32_t get_offset_of_InNUcastPkts_12() { return static_cast<int32_t>(offsetof(Win32_MIB_IFROW_t851471770, ___InNUcastPkts_12)); }
	inline int32_t get_InNUcastPkts_12() const { return ___InNUcastPkts_12; }
	inline int32_t* get_address_of_InNUcastPkts_12() { return &___InNUcastPkts_12; }
	inline void set_InNUcastPkts_12(int32_t value)
	{
		___InNUcastPkts_12 = value;
	}

	inline static int32_t get_offset_of_InDiscards_13() { return static_cast<int32_t>(offsetof(Win32_MIB_IFROW_t851471770, ___InDiscards_13)); }
	inline int32_t get_InDiscards_13() const { return ___InDiscards_13; }
	inline int32_t* get_address_of_InDiscards_13() { return &___InDiscards_13; }
	inline void set_InDiscards_13(int32_t value)
	{
		___InDiscards_13 = value;
	}

	inline static int32_t get_offset_of_InErrors_14() { return static_cast<int32_t>(offsetof(Win32_MIB_IFROW_t851471770, ___InErrors_14)); }
	inline int32_t get_InErrors_14() const { return ___InErrors_14; }
	inline int32_t* get_address_of_InErrors_14() { return &___InErrors_14; }
	inline void set_InErrors_14(int32_t value)
	{
		___InErrors_14 = value;
	}

	inline static int32_t get_offset_of_InUnknownProtos_15() { return static_cast<int32_t>(offsetof(Win32_MIB_IFROW_t851471770, ___InUnknownProtos_15)); }
	inline int32_t get_InUnknownProtos_15() const { return ___InUnknownProtos_15; }
	inline int32_t* get_address_of_InUnknownProtos_15() { return &___InUnknownProtos_15; }
	inline void set_InUnknownProtos_15(int32_t value)
	{
		___InUnknownProtos_15 = value;
	}

	inline static int32_t get_offset_of_OutOctets_16() { return static_cast<int32_t>(offsetof(Win32_MIB_IFROW_t851471770, ___OutOctets_16)); }
	inline int32_t get_OutOctets_16() const { return ___OutOctets_16; }
	inline int32_t* get_address_of_OutOctets_16() { return &___OutOctets_16; }
	inline void set_OutOctets_16(int32_t value)
	{
		___OutOctets_16 = value;
	}

	inline static int32_t get_offset_of_OutUcastPkts_17() { return static_cast<int32_t>(offsetof(Win32_MIB_IFROW_t851471770, ___OutUcastPkts_17)); }
	inline int32_t get_OutUcastPkts_17() const { return ___OutUcastPkts_17; }
	inline int32_t* get_address_of_OutUcastPkts_17() { return &___OutUcastPkts_17; }
	inline void set_OutUcastPkts_17(int32_t value)
	{
		___OutUcastPkts_17 = value;
	}

	inline static int32_t get_offset_of_OutNUcastPkts_18() { return static_cast<int32_t>(offsetof(Win32_MIB_IFROW_t851471770, ___OutNUcastPkts_18)); }
	inline int32_t get_OutNUcastPkts_18() const { return ___OutNUcastPkts_18; }
	inline int32_t* get_address_of_OutNUcastPkts_18() { return &___OutNUcastPkts_18; }
	inline void set_OutNUcastPkts_18(int32_t value)
	{
		___OutNUcastPkts_18 = value;
	}

	inline static int32_t get_offset_of_OutDiscards_19() { return static_cast<int32_t>(offsetof(Win32_MIB_IFROW_t851471770, ___OutDiscards_19)); }
	inline int32_t get_OutDiscards_19() const { return ___OutDiscards_19; }
	inline int32_t* get_address_of_OutDiscards_19() { return &___OutDiscards_19; }
	inline void set_OutDiscards_19(int32_t value)
	{
		___OutDiscards_19 = value;
	}

	inline static int32_t get_offset_of_OutErrors_20() { return static_cast<int32_t>(offsetof(Win32_MIB_IFROW_t851471770, ___OutErrors_20)); }
	inline int32_t get_OutErrors_20() const { return ___OutErrors_20; }
	inline int32_t* get_address_of_OutErrors_20() { return &___OutErrors_20; }
	inline void set_OutErrors_20(int32_t value)
	{
		___OutErrors_20 = value;
	}

	inline static int32_t get_offset_of_OutQLen_21() { return static_cast<int32_t>(offsetof(Win32_MIB_IFROW_t851471770, ___OutQLen_21)); }
	inline int32_t get_OutQLen_21() const { return ___OutQLen_21; }
	inline int32_t* get_address_of_OutQLen_21() { return &___OutQLen_21; }
	inline void set_OutQLen_21(int32_t value)
	{
		___OutQLen_21 = value;
	}

	inline static int32_t get_offset_of_DescrLen_22() { return static_cast<int32_t>(offsetof(Win32_MIB_IFROW_t851471770, ___DescrLen_22)); }
	inline int32_t get_DescrLen_22() const { return ___DescrLen_22; }
	inline int32_t* get_address_of_DescrLen_22() { return &___DescrLen_22; }
	inline void set_DescrLen_22(int32_t value)
	{
		___DescrLen_22 = value;
	}

	inline static int32_t get_offset_of_Descr_23() { return static_cast<int32_t>(offsetof(Win32_MIB_IFROW_t851471770, ___Descr_23)); }
	inline ByteU5BU5D_t4116647657* get_Descr_23() const { return ___Descr_23; }
	inline ByteU5BU5D_t4116647657** get_address_of_Descr_23() { return &___Descr_23; }
	inline void set_Descr_23(ByteU5BU5D_t4116647657* value)
	{
		___Descr_23 = value;
		Il2CppCodeGenWriteBarrier((&___Descr_23), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Net.NetworkInformation.Win32_MIB_IFROW
struct Win32_MIB_IFROW_t851471770_marshaled_pinvoke
{
	uint8_t ___Name_0[512];
	int32_t ___Index_1;
	int32_t ___Type_2;
	int32_t ___Mtu_3;
	uint32_t ___Speed_4;
	int32_t ___PhysAddrLen_5;
	uint8_t ___PhysAddr_6[8];
	uint32_t ___AdminStatus_7;
	uint32_t ___OperStatus_8;
	uint32_t ___LastChange_9;
	int32_t ___InOctets_10;
	int32_t ___InUcastPkts_11;
	int32_t ___InNUcastPkts_12;
	int32_t ___InDiscards_13;
	int32_t ___InErrors_14;
	int32_t ___InUnknownProtos_15;
	int32_t ___OutOctets_16;
	int32_t ___OutUcastPkts_17;
	int32_t ___OutNUcastPkts_18;
	int32_t ___OutDiscards_19;
	int32_t ___OutErrors_20;
	int32_t ___OutQLen_21;
	int32_t ___DescrLen_22;
	uint8_t ___Descr_23[256];
};
// Native definition for COM marshalling of System.Net.NetworkInformation.Win32_MIB_IFROW
struct Win32_MIB_IFROW_t851471770_marshaled_com
{
	uint8_t ___Name_0[512];
	int32_t ___Index_1;
	int32_t ___Type_2;
	int32_t ___Mtu_3;
	uint32_t ___Speed_4;
	int32_t ___PhysAddrLen_5;
	uint8_t ___PhysAddr_6[8];
	uint32_t ___AdminStatus_7;
	uint32_t ___OperStatus_8;
	uint32_t ___LastChange_9;
	int32_t ___InOctets_10;
	int32_t ___InUcastPkts_11;
	int32_t ___InNUcastPkts_12;
	int32_t ___InDiscards_13;
	int32_t ___InErrors_14;
	int32_t ___InUnknownProtos_15;
	int32_t ___OutOctets_16;
	int32_t ___OutUcastPkts_17;
	int32_t ___OutNUcastPkts_18;
	int32_t ___OutDiscards_19;
	int32_t ___OutErrors_20;
	int32_t ___OutQLen_21;
	int32_t ___DescrLen_22;
	uint8_t ___Descr_23[256];
};
#endif // WIN32_MIB_IFROW_T851471770_H
#ifndef IFADDRS_T271199369_H
#define IFADDRS_T271199369_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.ifaddrs
struct  ifaddrs_t271199369 
{
public:
	// System.IntPtr System.Net.NetworkInformation.ifaddrs::ifa_next
	intptr_t ___ifa_next_0;
	// System.String System.Net.NetworkInformation.ifaddrs::ifa_name
	String_t* ___ifa_name_1;
	// System.UInt32 System.Net.NetworkInformation.ifaddrs::ifa_flags
	uint32_t ___ifa_flags_2;
	// System.IntPtr System.Net.NetworkInformation.ifaddrs::ifa_addr
	intptr_t ___ifa_addr_3;
	// System.IntPtr System.Net.NetworkInformation.ifaddrs::ifa_netmask
	intptr_t ___ifa_netmask_4;
	// System.Net.NetworkInformation.ifa_ifu System.Net.NetworkInformation.ifaddrs::ifa_ifu
	ifa_ifu_t1794893192  ___ifa_ifu_5;
	// System.IntPtr System.Net.NetworkInformation.ifaddrs::ifa_data
	intptr_t ___ifa_data_6;

public:
	inline static int32_t get_offset_of_ifa_next_0() { return static_cast<int32_t>(offsetof(ifaddrs_t271199369, ___ifa_next_0)); }
	inline intptr_t get_ifa_next_0() const { return ___ifa_next_0; }
	inline intptr_t* get_address_of_ifa_next_0() { return &___ifa_next_0; }
	inline void set_ifa_next_0(intptr_t value)
	{
		___ifa_next_0 = value;
	}

	inline static int32_t get_offset_of_ifa_name_1() { return static_cast<int32_t>(offsetof(ifaddrs_t271199369, ___ifa_name_1)); }
	inline String_t* get_ifa_name_1() const { return ___ifa_name_1; }
	inline String_t** get_address_of_ifa_name_1() { return &___ifa_name_1; }
	inline void set_ifa_name_1(String_t* value)
	{
		___ifa_name_1 = value;
		Il2CppCodeGenWriteBarrier((&___ifa_name_1), value);
	}

	inline static int32_t get_offset_of_ifa_flags_2() { return static_cast<int32_t>(offsetof(ifaddrs_t271199369, ___ifa_flags_2)); }
	inline uint32_t get_ifa_flags_2() const { return ___ifa_flags_2; }
	inline uint32_t* get_address_of_ifa_flags_2() { return &___ifa_flags_2; }
	inline void set_ifa_flags_2(uint32_t value)
	{
		___ifa_flags_2 = value;
	}

	inline static int32_t get_offset_of_ifa_addr_3() { return static_cast<int32_t>(offsetof(ifaddrs_t271199369, ___ifa_addr_3)); }
	inline intptr_t get_ifa_addr_3() const { return ___ifa_addr_3; }
	inline intptr_t* get_address_of_ifa_addr_3() { return &___ifa_addr_3; }
	inline void set_ifa_addr_3(intptr_t value)
	{
		___ifa_addr_3 = value;
	}

	inline static int32_t get_offset_of_ifa_netmask_4() { return static_cast<int32_t>(offsetof(ifaddrs_t271199369, ___ifa_netmask_4)); }
	inline intptr_t get_ifa_netmask_4() const { return ___ifa_netmask_4; }
	inline intptr_t* get_address_of_ifa_netmask_4() { return &___ifa_netmask_4; }
	inline void set_ifa_netmask_4(intptr_t value)
	{
		___ifa_netmask_4 = value;
	}

	inline static int32_t get_offset_of_ifa_ifu_5() { return static_cast<int32_t>(offsetof(ifaddrs_t271199369, ___ifa_ifu_5)); }
	inline ifa_ifu_t1794893192  get_ifa_ifu_5() const { return ___ifa_ifu_5; }
	inline ifa_ifu_t1794893192 * get_address_of_ifa_ifu_5() { return &___ifa_ifu_5; }
	inline void set_ifa_ifu_5(ifa_ifu_t1794893192  value)
	{
		___ifa_ifu_5 = value;
	}

	inline static int32_t get_offset_of_ifa_data_6() { return static_cast<int32_t>(offsetof(ifaddrs_t271199369, ___ifa_data_6)); }
	inline intptr_t get_ifa_data_6() const { return ___ifa_data_6; }
	inline intptr_t* get_address_of_ifa_data_6() { return &___ifa_data_6; }
	inline void set_ifa_data_6(intptr_t value)
	{
		___ifa_data_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Net.NetworkInformation.ifaddrs
struct ifaddrs_t271199369_marshaled_pinvoke
{
	intptr_t ___ifa_next_0;
	char* ___ifa_name_1;
	uint32_t ___ifa_flags_2;
	intptr_t ___ifa_addr_3;
	intptr_t ___ifa_netmask_4;
	ifa_ifu_t1794893192  ___ifa_ifu_5;
	intptr_t ___ifa_data_6;
};
// Native definition for COM marshalling of System.Net.NetworkInformation.ifaddrs
struct ifaddrs_t271199369_marshaled_com
{
	intptr_t ___ifa_next_0;
	Il2CppChar* ___ifa_name_1;
	uint32_t ___ifa_flags_2;
	intptr_t ___ifa_addr_3;
	intptr_t ___ifa_netmask_4;
	ifa_ifu_t1794893192  ___ifa_ifu_5;
	intptr_t ___ifa_data_6;
};
#endif // IFADDRS_T271199369_H
#ifndef SOCKADDR_IN6_T2790242023_H
#define SOCKADDR_IN6_T2790242023_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.sockaddr_in6
struct  sockaddr_in6_t2790242023 
{
public:
	// System.UInt16 System.Net.NetworkInformation.sockaddr_in6::sin6_family
	uint16_t ___sin6_family_0;
	// System.UInt16 System.Net.NetworkInformation.sockaddr_in6::sin6_port
	uint16_t ___sin6_port_1;
	// System.UInt32 System.Net.NetworkInformation.sockaddr_in6::sin6_flowinfo
	uint32_t ___sin6_flowinfo_2;
	// System.Net.NetworkInformation.in6_addr System.Net.NetworkInformation.sockaddr_in6::sin6_addr
	in6_addr_t3611791508  ___sin6_addr_3;
	// System.UInt32 System.Net.NetworkInformation.sockaddr_in6::sin6_scope_id
	uint32_t ___sin6_scope_id_4;

public:
	inline static int32_t get_offset_of_sin6_family_0() { return static_cast<int32_t>(offsetof(sockaddr_in6_t2790242023, ___sin6_family_0)); }
	inline uint16_t get_sin6_family_0() const { return ___sin6_family_0; }
	inline uint16_t* get_address_of_sin6_family_0() { return &___sin6_family_0; }
	inline void set_sin6_family_0(uint16_t value)
	{
		___sin6_family_0 = value;
	}

	inline static int32_t get_offset_of_sin6_port_1() { return static_cast<int32_t>(offsetof(sockaddr_in6_t2790242023, ___sin6_port_1)); }
	inline uint16_t get_sin6_port_1() const { return ___sin6_port_1; }
	inline uint16_t* get_address_of_sin6_port_1() { return &___sin6_port_1; }
	inline void set_sin6_port_1(uint16_t value)
	{
		___sin6_port_1 = value;
	}

	inline static int32_t get_offset_of_sin6_flowinfo_2() { return static_cast<int32_t>(offsetof(sockaddr_in6_t2790242023, ___sin6_flowinfo_2)); }
	inline uint32_t get_sin6_flowinfo_2() const { return ___sin6_flowinfo_2; }
	inline uint32_t* get_address_of_sin6_flowinfo_2() { return &___sin6_flowinfo_2; }
	inline void set_sin6_flowinfo_2(uint32_t value)
	{
		___sin6_flowinfo_2 = value;
	}

	inline static int32_t get_offset_of_sin6_addr_3() { return static_cast<int32_t>(offsetof(sockaddr_in6_t2790242023, ___sin6_addr_3)); }
	inline in6_addr_t3611791508  get_sin6_addr_3() const { return ___sin6_addr_3; }
	inline in6_addr_t3611791508 * get_address_of_sin6_addr_3() { return &___sin6_addr_3; }
	inline void set_sin6_addr_3(in6_addr_t3611791508  value)
	{
		___sin6_addr_3 = value;
	}

	inline static int32_t get_offset_of_sin6_scope_id_4() { return static_cast<int32_t>(offsetof(sockaddr_in6_t2790242023, ___sin6_scope_id_4)); }
	inline uint32_t get_sin6_scope_id_4() const { return ___sin6_scope_id_4; }
	inline uint32_t* get_address_of_sin6_scope_id_4() { return &___sin6_scope_id_4; }
	inline void set_sin6_scope_id_4(uint32_t value)
	{
		___sin6_scope_id_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Net.NetworkInformation.sockaddr_in6
struct sockaddr_in6_t2790242023_marshaled_pinvoke
{
	uint16_t ___sin6_family_0;
	uint16_t ___sin6_port_1;
	uint32_t ___sin6_flowinfo_2;
	in6_addr_t3611791508_marshaled_pinvoke ___sin6_addr_3;
	uint32_t ___sin6_scope_id_4;
};
// Native definition for COM marshalling of System.Net.NetworkInformation.sockaddr_in6
struct sockaddr_in6_t2790242023_marshaled_com
{
	uint16_t ___sin6_family_0;
	uint16_t ___sin6_port_1;
	uint32_t ___sin6_flowinfo_2;
	in6_addr_t3611791508_marshaled_com ___sin6_addr_3;
	uint32_t ___sin6_scope_id_4;
};
#endif // SOCKADDR_IN6_T2790242023_H
#ifndef SSLSTREAM_T2700741536_H
#define SSLSTREAM_T2700741536_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Security.SslStream
struct  SslStream_t2700741536  : public AuthenticatedStream_t3415418016
{
public:
	// Mono.Security.Interface.MonoTlsProvider System.Net.Security.SslStream::provider
	MonoTlsProvider_t3152003291 * ___provider_6;
	// Mono.Security.Interface.IMonoSslStream System.Net.Security.SslStream::impl
	RuntimeObject* ___impl_7;

public:
	inline static int32_t get_offset_of_provider_6() { return static_cast<int32_t>(offsetof(SslStream_t2700741536, ___provider_6)); }
	inline MonoTlsProvider_t3152003291 * get_provider_6() const { return ___provider_6; }
	inline MonoTlsProvider_t3152003291 ** get_address_of_provider_6() { return &___provider_6; }
	inline void set_provider_6(MonoTlsProvider_t3152003291 * value)
	{
		___provider_6 = value;
		Il2CppCodeGenWriteBarrier((&___provider_6), value);
	}

	inline static int32_t get_offset_of_impl_7() { return static_cast<int32_t>(offsetof(SslStream_t2700741536, ___impl_7)); }
	inline RuntimeObject* get_impl_7() const { return ___impl_7; }
	inline RuntimeObject** get_address_of_impl_7() { return &___impl_7; }
	inline void set_impl_7(RuntimeObject* value)
	{
		___impl_7 = value;
		Il2CppCodeGenWriteBarrier((&___impl_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SSLSTREAM_T2700741536_H
#ifndef SERVICEPOINTMANAGER_T170559685_H
#define SERVICEPOINTMANAGER_T170559685_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.ServicePointManager
struct  ServicePointManager_t170559685  : public RuntimeObject
{
public:

public:
};

struct ServicePointManager_t170559685_StaticFields
{
public:
	// System.Collections.Specialized.HybridDictionary System.Net.ServicePointManager::servicePoints
	HybridDictionary_t4070033136 * ___servicePoints_0;
	// System.Net.ICertificatePolicy System.Net.ServicePointManager::policy
	RuntimeObject* ___policy_1;
	// System.Int32 System.Net.ServicePointManager::defaultConnectionLimit
	int32_t ___defaultConnectionLimit_2;
	// System.Int32 System.Net.ServicePointManager::maxServicePointIdleTime
	int32_t ___maxServicePointIdleTime_3;
	// System.Int32 System.Net.ServicePointManager::maxServicePoints
	int32_t ___maxServicePoints_4;
	// System.Int32 System.Net.ServicePointManager::dnsRefreshTimeout
	int32_t ___dnsRefreshTimeout_5;
	// System.Boolean System.Net.ServicePointManager::_checkCRL
	bool ____checkCRL_6;
	// System.Net.SecurityProtocolType System.Net.ServicePointManager::_securityProtocol
	int32_t ____securityProtocol_7;
	// System.Boolean System.Net.ServicePointManager::expectContinue
	bool ___expectContinue_8;
	// System.Boolean System.Net.ServicePointManager::useNagle
	bool ___useNagle_9;
	// System.Net.ServerCertValidationCallback System.Net.ServicePointManager::server_cert_cb
	ServerCertValidationCallback_t1488468298 * ___server_cert_cb_10;
	// System.Boolean System.Net.ServicePointManager::tcp_keepalive
	bool ___tcp_keepalive_11;
	// System.Int32 System.Net.ServicePointManager::tcp_keepalive_time
	int32_t ___tcp_keepalive_time_12;
	// System.Int32 System.Net.ServicePointManager::tcp_keepalive_interval
	int32_t ___tcp_keepalive_interval_13;
	// System.Net.Configuration.ConnectionManagementData System.Net.ServicePointManager::manager
	ConnectionManagementData_t2003128658 * ___manager_14;

public:
	inline static int32_t get_offset_of_servicePoints_0() { return static_cast<int32_t>(offsetof(ServicePointManager_t170559685_StaticFields, ___servicePoints_0)); }
	inline HybridDictionary_t4070033136 * get_servicePoints_0() const { return ___servicePoints_0; }
	inline HybridDictionary_t4070033136 ** get_address_of_servicePoints_0() { return &___servicePoints_0; }
	inline void set_servicePoints_0(HybridDictionary_t4070033136 * value)
	{
		___servicePoints_0 = value;
		Il2CppCodeGenWriteBarrier((&___servicePoints_0), value);
	}

	inline static int32_t get_offset_of_policy_1() { return static_cast<int32_t>(offsetof(ServicePointManager_t170559685_StaticFields, ___policy_1)); }
	inline RuntimeObject* get_policy_1() const { return ___policy_1; }
	inline RuntimeObject** get_address_of_policy_1() { return &___policy_1; }
	inline void set_policy_1(RuntimeObject* value)
	{
		___policy_1 = value;
		Il2CppCodeGenWriteBarrier((&___policy_1), value);
	}

	inline static int32_t get_offset_of_defaultConnectionLimit_2() { return static_cast<int32_t>(offsetof(ServicePointManager_t170559685_StaticFields, ___defaultConnectionLimit_2)); }
	inline int32_t get_defaultConnectionLimit_2() const { return ___defaultConnectionLimit_2; }
	inline int32_t* get_address_of_defaultConnectionLimit_2() { return &___defaultConnectionLimit_2; }
	inline void set_defaultConnectionLimit_2(int32_t value)
	{
		___defaultConnectionLimit_2 = value;
	}

	inline static int32_t get_offset_of_maxServicePointIdleTime_3() { return static_cast<int32_t>(offsetof(ServicePointManager_t170559685_StaticFields, ___maxServicePointIdleTime_3)); }
	inline int32_t get_maxServicePointIdleTime_3() const { return ___maxServicePointIdleTime_3; }
	inline int32_t* get_address_of_maxServicePointIdleTime_3() { return &___maxServicePointIdleTime_3; }
	inline void set_maxServicePointIdleTime_3(int32_t value)
	{
		___maxServicePointIdleTime_3 = value;
	}

	inline static int32_t get_offset_of_maxServicePoints_4() { return static_cast<int32_t>(offsetof(ServicePointManager_t170559685_StaticFields, ___maxServicePoints_4)); }
	inline int32_t get_maxServicePoints_4() const { return ___maxServicePoints_4; }
	inline int32_t* get_address_of_maxServicePoints_4() { return &___maxServicePoints_4; }
	inline void set_maxServicePoints_4(int32_t value)
	{
		___maxServicePoints_4 = value;
	}

	inline static int32_t get_offset_of_dnsRefreshTimeout_5() { return static_cast<int32_t>(offsetof(ServicePointManager_t170559685_StaticFields, ___dnsRefreshTimeout_5)); }
	inline int32_t get_dnsRefreshTimeout_5() const { return ___dnsRefreshTimeout_5; }
	inline int32_t* get_address_of_dnsRefreshTimeout_5() { return &___dnsRefreshTimeout_5; }
	inline void set_dnsRefreshTimeout_5(int32_t value)
	{
		___dnsRefreshTimeout_5 = value;
	}

	inline static int32_t get_offset_of__checkCRL_6() { return static_cast<int32_t>(offsetof(ServicePointManager_t170559685_StaticFields, ____checkCRL_6)); }
	inline bool get__checkCRL_6() const { return ____checkCRL_6; }
	inline bool* get_address_of__checkCRL_6() { return &____checkCRL_6; }
	inline void set__checkCRL_6(bool value)
	{
		____checkCRL_6 = value;
	}

	inline static int32_t get_offset_of__securityProtocol_7() { return static_cast<int32_t>(offsetof(ServicePointManager_t170559685_StaticFields, ____securityProtocol_7)); }
	inline int32_t get__securityProtocol_7() const { return ____securityProtocol_7; }
	inline int32_t* get_address_of__securityProtocol_7() { return &____securityProtocol_7; }
	inline void set__securityProtocol_7(int32_t value)
	{
		____securityProtocol_7 = value;
	}

	inline static int32_t get_offset_of_expectContinue_8() { return static_cast<int32_t>(offsetof(ServicePointManager_t170559685_StaticFields, ___expectContinue_8)); }
	inline bool get_expectContinue_8() const { return ___expectContinue_8; }
	inline bool* get_address_of_expectContinue_8() { return &___expectContinue_8; }
	inline void set_expectContinue_8(bool value)
	{
		___expectContinue_8 = value;
	}

	inline static int32_t get_offset_of_useNagle_9() { return static_cast<int32_t>(offsetof(ServicePointManager_t170559685_StaticFields, ___useNagle_9)); }
	inline bool get_useNagle_9() const { return ___useNagle_9; }
	inline bool* get_address_of_useNagle_9() { return &___useNagle_9; }
	inline void set_useNagle_9(bool value)
	{
		___useNagle_9 = value;
	}

	inline static int32_t get_offset_of_server_cert_cb_10() { return static_cast<int32_t>(offsetof(ServicePointManager_t170559685_StaticFields, ___server_cert_cb_10)); }
	inline ServerCertValidationCallback_t1488468298 * get_server_cert_cb_10() const { return ___server_cert_cb_10; }
	inline ServerCertValidationCallback_t1488468298 ** get_address_of_server_cert_cb_10() { return &___server_cert_cb_10; }
	inline void set_server_cert_cb_10(ServerCertValidationCallback_t1488468298 * value)
	{
		___server_cert_cb_10 = value;
		Il2CppCodeGenWriteBarrier((&___server_cert_cb_10), value);
	}

	inline static int32_t get_offset_of_tcp_keepalive_11() { return static_cast<int32_t>(offsetof(ServicePointManager_t170559685_StaticFields, ___tcp_keepalive_11)); }
	inline bool get_tcp_keepalive_11() const { return ___tcp_keepalive_11; }
	inline bool* get_address_of_tcp_keepalive_11() { return &___tcp_keepalive_11; }
	inline void set_tcp_keepalive_11(bool value)
	{
		___tcp_keepalive_11 = value;
	}

	inline static int32_t get_offset_of_tcp_keepalive_time_12() { return static_cast<int32_t>(offsetof(ServicePointManager_t170559685_StaticFields, ___tcp_keepalive_time_12)); }
	inline int32_t get_tcp_keepalive_time_12() const { return ___tcp_keepalive_time_12; }
	inline int32_t* get_address_of_tcp_keepalive_time_12() { return &___tcp_keepalive_time_12; }
	inline void set_tcp_keepalive_time_12(int32_t value)
	{
		___tcp_keepalive_time_12 = value;
	}

	inline static int32_t get_offset_of_tcp_keepalive_interval_13() { return static_cast<int32_t>(offsetof(ServicePointManager_t170559685_StaticFields, ___tcp_keepalive_interval_13)); }
	inline int32_t get_tcp_keepalive_interval_13() const { return ___tcp_keepalive_interval_13; }
	inline int32_t* get_address_of_tcp_keepalive_interval_13() { return &___tcp_keepalive_interval_13; }
	inline void set_tcp_keepalive_interval_13(int32_t value)
	{
		___tcp_keepalive_interval_13 = value;
	}

	inline static int32_t get_offset_of_manager_14() { return static_cast<int32_t>(offsetof(ServicePointManager_t170559685_StaticFields, ___manager_14)); }
	inline ConnectionManagementData_t2003128658 * get_manager_14() const { return ___manager_14; }
	inline ConnectionManagementData_t2003128658 ** get_address_of_manager_14() { return &___manager_14; }
	inline void set_manager_14(ConnectionManagementData_t2003128658 * value)
	{
		___manager_14 = value;
		Il2CppCodeGenWriteBarrier((&___manager_14), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SERVICEPOINTMANAGER_T170559685_H
#ifndef SOCKET_T1119025450_H
#define SOCKET_T1119025450_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Sockets.Socket
struct  Socket_t1119025450  : public RuntimeObject
{
public:
	// System.Boolean System.Net.Sockets.Socket::is_closed
	bool ___is_closed_6;
	// System.Boolean System.Net.Sockets.Socket::is_listening
	bool ___is_listening_7;
	// System.Boolean System.Net.Sockets.Socket::useOverlappedIO
	bool ___useOverlappedIO_8;
	// System.Int32 System.Net.Sockets.Socket::linger_timeout
	int32_t ___linger_timeout_9;
	// System.Net.Sockets.AddressFamily System.Net.Sockets.Socket::addressFamily
	int32_t ___addressFamily_10;
	// System.Net.Sockets.SocketType System.Net.Sockets.Socket::socketType
	int32_t ___socketType_11;
	// System.Net.Sockets.ProtocolType System.Net.Sockets.Socket::protocolType
	int32_t ___protocolType_12;
	// System.Net.Sockets.SafeSocketHandle System.Net.Sockets.Socket::m_Handle
	SafeSocketHandle_t610293888 * ___m_Handle_13;
	// System.Net.EndPoint System.Net.Sockets.Socket::seed_endpoint
	EndPoint_t982345378 * ___seed_endpoint_14;
	// System.Threading.SemaphoreSlim System.Net.Sockets.Socket::ReadSem
	SemaphoreSlim_t2974092902 * ___ReadSem_15;
	// System.Threading.SemaphoreSlim System.Net.Sockets.Socket::WriteSem
	SemaphoreSlim_t2974092902 * ___WriteSem_16;
	// System.Boolean System.Net.Sockets.Socket::is_blocking
	bool ___is_blocking_17;
	// System.Boolean System.Net.Sockets.Socket::is_bound
	bool ___is_bound_18;
	// System.Boolean System.Net.Sockets.Socket::is_connected
	bool ___is_connected_19;
	// System.Int32 System.Net.Sockets.Socket::m_IntCleanedUp
	int32_t ___m_IntCleanedUp_20;
	// System.Boolean System.Net.Sockets.Socket::connect_in_progress
	bool ___connect_in_progress_21;

public:
	inline static int32_t get_offset_of_is_closed_6() { return static_cast<int32_t>(offsetof(Socket_t1119025450, ___is_closed_6)); }
	inline bool get_is_closed_6() const { return ___is_closed_6; }
	inline bool* get_address_of_is_closed_6() { return &___is_closed_6; }
	inline void set_is_closed_6(bool value)
	{
		___is_closed_6 = value;
	}

	inline static int32_t get_offset_of_is_listening_7() { return static_cast<int32_t>(offsetof(Socket_t1119025450, ___is_listening_7)); }
	inline bool get_is_listening_7() const { return ___is_listening_7; }
	inline bool* get_address_of_is_listening_7() { return &___is_listening_7; }
	inline void set_is_listening_7(bool value)
	{
		___is_listening_7 = value;
	}

	inline static int32_t get_offset_of_useOverlappedIO_8() { return static_cast<int32_t>(offsetof(Socket_t1119025450, ___useOverlappedIO_8)); }
	inline bool get_useOverlappedIO_8() const { return ___useOverlappedIO_8; }
	inline bool* get_address_of_useOverlappedIO_8() { return &___useOverlappedIO_8; }
	inline void set_useOverlappedIO_8(bool value)
	{
		___useOverlappedIO_8 = value;
	}

	inline static int32_t get_offset_of_linger_timeout_9() { return static_cast<int32_t>(offsetof(Socket_t1119025450, ___linger_timeout_9)); }
	inline int32_t get_linger_timeout_9() const { return ___linger_timeout_9; }
	inline int32_t* get_address_of_linger_timeout_9() { return &___linger_timeout_9; }
	inline void set_linger_timeout_9(int32_t value)
	{
		___linger_timeout_9 = value;
	}

	inline static int32_t get_offset_of_addressFamily_10() { return static_cast<int32_t>(offsetof(Socket_t1119025450, ___addressFamily_10)); }
	inline int32_t get_addressFamily_10() const { return ___addressFamily_10; }
	inline int32_t* get_address_of_addressFamily_10() { return &___addressFamily_10; }
	inline void set_addressFamily_10(int32_t value)
	{
		___addressFamily_10 = value;
	}

	inline static int32_t get_offset_of_socketType_11() { return static_cast<int32_t>(offsetof(Socket_t1119025450, ___socketType_11)); }
	inline int32_t get_socketType_11() const { return ___socketType_11; }
	inline int32_t* get_address_of_socketType_11() { return &___socketType_11; }
	inline void set_socketType_11(int32_t value)
	{
		___socketType_11 = value;
	}

	inline static int32_t get_offset_of_protocolType_12() { return static_cast<int32_t>(offsetof(Socket_t1119025450, ___protocolType_12)); }
	inline int32_t get_protocolType_12() const { return ___protocolType_12; }
	inline int32_t* get_address_of_protocolType_12() { return &___protocolType_12; }
	inline void set_protocolType_12(int32_t value)
	{
		___protocolType_12 = value;
	}

	inline static int32_t get_offset_of_m_Handle_13() { return static_cast<int32_t>(offsetof(Socket_t1119025450, ___m_Handle_13)); }
	inline SafeSocketHandle_t610293888 * get_m_Handle_13() const { return ___m_Handle_13; }
	inline SafeSocketHandle_t610293888 ** get_address_of_m_Handle_13() { return &___m_Handle_13; }
	inline void set_m_Handle_13(SafeSocketHandle_t610293888 * value)
	{
		___m_Handle_13 = value;
		Il2CppCodeGenWriteBarrier((&___m_Handle_13), value);
	}

	inline static int32_t get_offset_of_seed_endpoint_14() { return static_cast<int32_t>(offsetof(Socket_t1119025450, ___seed_endpoint_14)); }
	inline EndPoint_t982345378 * get_seed_endpoint_14() const { return ___seed_endpoint_14; }
	inline EndPoint_t982345378 ** get_address_of_seed_endpoint_14() { return &___seed_endpoint_14; }
	inline void set_seed_endpoint_14(EndPoint_t982345378 * value)
	{
		___seed_endpoint_14 = value;
		Il2CppCodeGenWriteBarrier((&___seed_endpoint_14), value);
	}

	inline static int32_t get_offset_of_ReadSem_15() { return static_cast<int32_t>(offsetof(Socket_t1119025450, ___ReadSem_15)); }
	inline SemaphoreSlim_t2974092902 * get_ReadSem_15() const { return ___ReadSem_15; }
	inline SemaphoreSlim_t2974092902 ** get_address_of_ReadSem_15() { return &___ReadSem_15; }
	inline void set_ReadSem_15(SemaphoreSlim_t2974092902 * value)
	{
		___ReadSem_15 = value;
		Il2CppCodeGenWriteBarrier((&___ReadSem_15), value);
	}

	inline static int32_t get_offset_of_WriteSem_16() { return static_cast<int32_t>(offsetof(Socket_t1119025450, ___WriteSem_16)); }
	inline SemaphoreSlim_t2974092902 * get_WriteSem_16() const { return ___WriteSem_16; }
	inline SemaphoreSlim_t2974092902 ** get_address_of_WriteSem_16() { return &___WriteSem_16; }
	inline void set_WriteSem_16(SemaphoreSlim_t2974092902 * value)
	{
		___WriteSem_16 = value;
		Il2CppCodeGenWriteBarrier((&___WriteSem_16), value);
	}

	inline static int32_t get_offset_of_is_blocking_17() { return static_cast<int32_t>(offsetof(Socket_t1119025450, ___is_blocking_17)); }
	inline bool get_is_blocking_17() const { return ___is_blocking_17; }
	inline bool* get_address_of_is_blocking_17() { return &___is_blocking_17; }
	inline void set_is_blocking_17(bool value)
	{
		___is_blocking_17 = value;
	}

	inline static int32_t get_offset_of_is_bound_18() { return static_cast<int32_t>(offsetof(Socket_t1119025450, ___is_bound_18)); }
	inline bool get_is_bound_18() const { return ___is_bound_18; }
	inline bool* get_address_of_is_bound_18() { return &___is_bound_18; }
	inline void set_is_bound_18(bool value)
	{
		___is_bound_18 = value;
	}

	inline static int32_t get_offset_of_is_connected_19() { return static_cast<int32_t>(offsetof(Socket_t1119025450, ___is_connected_19)); }
	inline bool get_is_connected_19() const { return ___is_connected_19; }
	inline bool* get_address_of_is_connected_19() { return &___is_connected_19; }
	inline void set_is_connected_19(bool value)
	{
		___is_connected_19 = value;
	}

	inline static int32_t get_offset_of_m_IntCleanedUp_20() { return static_cast<int32_t>(offsetof(Socket_t1119025450, ___m_IntCleanedUp_20)); }
	inline int32_t get_m_IntCleanedUp_20() const { return ___m_IntCleanedUp_20; }
	inline int32_t* get_address_of_m_IntCleanedUp_20() { return &___m_IntCleanedUp_20; }
	inline void set_m_IntCleanedUp_20(int32_t value)
	{
		___m_IntCleanedUp_20 = value;
	}

	inline static int32_t get_offset_of_connect_in_progress_21() { return static_cast<int32_t>(offsetof(Socket_t1119025450, ___connect_in_progress_21)); }
	inline bool get_connect_in_progress_21() const { return ___connect_in_progress_21; }
	inline bool* get_address_of_connect_in_progress_21() { return &___connect_in_progress_21; }
	inline void set_connect_in_progress_21(bool value)
	{
		___connect_in_progress_21 = value;
	}
};

struct Socket_t1119025450_StaticFields
{
public:
	// System.Object System.Net.Sockets.Socket::s_InternalSyncObject
	RuntimeObject * ___s_InternalSyncObject_0;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Net.Sockets.Socket::s_SupportsIPv4
	bool ___s_SupportsIPv4_1;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Net.Sockets.Socket::s_SupportsIPv6
	bool ___s_SupportsIPv6_2;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Net.Sockets.Socket::s_OSSupportsIPv6
	bool ___s_OSSupportsIPv6_3;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Net.Sockets.Socket::s_Initialized
	bool ___s_Initialized_4;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Net.Sockets.Socket::s_LoggingEnabled
	bool ___s_LoggingEnabled_5;
	// System.AsyncCallback System.Net.Sockets.Socket::AcceptAsyncCallback
	AsyncCallback_t3962456242 * ___AcceptAsyncCallback_22;
	// System.IOAsyncCallback System.Net.Sockets.Socket::BeginAcceptCallback
	IOAsyncCallback_t705871752 * ___BeginAcceptCallback_23;
	// System.IOAsyncCallback System.Net.Sockets.Socket::BeginAcceptReceiveCallback
	IOAsyncCallback_t705871752 * ___BeginAcceptReceiveCallback_24;
	// System.AsyncCallback System.Net.Sockets.Socket::ConnectAsyncCallback
	AsyncCallback_t3962456242 * ___ConnectAsyncCallback_25;
	// System.IOAsyncCallback System.Net.Sockets.Socket::BeginConnectCallback
	IOAsyncCallback_t705871752 * ___BeginConnectCallback_26;
	// System.AsyncCallback System.Net.Sockets.Socket::DisconnectAsyncCallback
	AsyncCallback_t3962456242 * ___DisconnectAsyncCallback_27;
	// System.IOAsyncCallback System.Net.Sockets.Socket::BeginDisconnectCallback
	IOAsyncCallback_t705871752 * ___BeginDisconnectCallback_28;
	// System.AsyncCallback System.Net.Sockets.Socket::ReceiveAsyncCallback
	AsyncCallback_t3962456242 * ___ReceiveAsyncCallback_29;
	// System.IOAsyncCallback System.Net.Sockets.Socket::BeginReceiveCallback
	IOAsyncCallback_t705871752 * ___BeginReceiveCallback_30;
	// System.IOAsyncCallback System.Net.Sockets.Socket::BeginReceiveGenericCallback
	IOAsyncCallback_t705871752 * ___BeginReceiveGenericCallback_31;
	// System.AsyncCallback System.Net.Sockets.Socket::ReceiveFromAsyncCallback
	AsyncCallback_t3962456242 * ___ReceiveFromAsyncCallback_32;
	// System.IOAsyncCallback System.Net.Sockets.Socket::BeginReceiveFromCallback
	IOAsyncCallback_t705871752 * ___BeginReceiveFromCallback_33;
	// System.AsyncCallback System.Net.Sockets.Socket::SendAsyncCallback
	AsyncCallback_t3962456242 * ___SendAsyncCallback_34;
	// System.IOAsyncCallback System.Net.Sockets.Socket::BeginSendGenericCallback
	IOAsyncCallback_t705871752 * ___BeginSendGenericCallback_35;
	// System.AsyncCallback System.Net.Sockets.Socket::SendToAsyncCallback
	AsyncCallback_t3962456242 * ___SendToAsyncCallback_36;

public:
	inline static int32_t get_offset_of_s_InternalSyncObject_0() { return static_cast<int32_t>(offsetof(Socket_t1119025450_StaticFields, ___s_InternalSyncObject_0)); }
	inline RuntimeObject * get_s_InternalSyncObject_0() const { return ___s_InternalSyncObject_0; }
	inline RuntimeObject ** get_address_of_s_InternalSyncObject_0() { return &___s_InternalSyncObject_0; }
	inline void set_s_InternalSyncObject_0(RuntimeObject * value)
	{
		___s_InternalSyncObject_0 = value;
		Il2CppCodeGenWriteBarrier((&___s_InternalSyncObject_0), value);
	}

	inline static int32_t get_offset_of_s_SupportsIPv4_1() { return static_cast<int32_t>(offsetof(Socket_t1119025450_StaticFields, ___s_SupportsIPv4_1)); }
	inline bool get_s_SupportsIPv4_1() const { return ___s_SupportsIPv4_1; }
	inline bool* get_address_of_s_SupportsIPv4_1() { return &___s_SupportsIPv4_1; }
	inline void set_s_SupportsIPv4_1(bool value)
	{
		___s_SupportsIPv4_1 = value;
	}

	inline static int32_t get_offset_of_s_SupportsIPv6_2() { return static_cast<int32_t>(offsetof(Socket_t1119025450_StaticFields, ___s_SupportsIPv6_2)); }
	inline bool get_s_SupportsIPv6_2() const { return ___s_SupportsIPv6_2; }
	inline bool* get_address_of_s_SupportsIPv6_2() { return &___s_SupportsIPv6_2; }
	inline void set_s_SupportsIPv6_2(bool value)
	{
		___s_SupportsIPv6_2 = value;
	}

	inline static int32_t get_offset_of_s_OSSupportsIPv6_3() { return static_cast<int32_t>(offsetof(Socket_t1119025450_StaticFields, ___s_OSSupportsIPv6_3)); }
	inline bool get_s_OSSupportsIPv6_3() const { return ___s_OSSupportsIPv6_3; }
	inline bool* get_address_of_s_OSSupportsIPv6_3() { return &___s_OSSupportsIPv6_3; }
	inline void set_s_OSSupportsIPv6_3(bool value)
	{
		___s_OSSupportsIPv6_3 = value;
	}

	inline static int32_t get_offset_of_s_Initialized_4() { return static_cast<int32_t>(offsetof(Socket_t1119025450_StaticFields, ___s_Initialized_4)); }
	inline bool get_s_Initialized_4() const { return ___s_Initialized_4; }
	inline bool* get_address_of_s_Initialized_4() { return &___s_Initialized_4; }
	inline void set_s_Initialized_4(bool value)
	{
		___s_Initialized_4 = value;
	}

	inline static int32_t get_offset_of_s_LoggingEnabled_5() { return static_cast<int32_t>(offsetof(Socket_t1119025450_StaticFields, ___s_LoggingEnabled_5)); }
	inline bool get_s_LoggingEnabled_5() const { return ___s_LoggingEnabled_5; }
	inline bool* get_address_of_s_LoggingEnabled_5() { return &___s_LoggingEnabled_5; }
	inline void set_s_LoggingEnabled_5(bool value)
	{
		___s_LoggingEnabled_5 = value;
	}

	inline static int32_t get_offset_of_AcceptAsyncCallback_22() { return static_cast<int32_t>(offsetof(Socket_t1119025450_StaticFields, ___AcceptAsyncCallback_22)); }
	inline AsyncCallback_t3962456242 * get_AcceptAsyncCallback_22() const { return ___AcceptAsyncCallback_22; }
	inline AsyncCallback_t3962456242 ** get_address_of_AcceptAsyncCallback_22() { return &___AcceptAsyncCallback_22; }
	inline void set_AcceptAsyncCallback_22(AsyncCallback_t3962456242 * value)
	{
		___AcceptAsyncCallback_22 = value;
		Il2CppCodeGenWriteBarrier((&___AcceptAsyncCallback_22), value);
	}

	inline static int32_t get_offset_of_BeginAcceptCallback_23() { return static_cast<int32_t>(offsetof(Socket_t1119025450_StaticFields, ___BeginAcceptCallback_23)); }
	inline IOAsyncCallback_t705871752 * get_BeginAcceptCallback_23() const { return ___BeginAcceptCallback_23; }
	inline IOAsyncCallback_t705871752 ** get_address_of_BeginAcceptCallback_23() { return &___BeginAcceptCallback_23; }
	inline void set_BeginAcceptCallback_23(IOAsyncCallback_t705871752 * value)
	{
		___BeginAcceptCallback_23 = value;
		Il2CppCodeGenWriteBarrier((&___BeginAcceptCallback_23), value);
	}

	inline static int32_t get_offset_of_BeginAcceptReceiveCallback_24() { return static_cast<int32_t>(offsetof(Socket_t1119025450_StaticFields, ___BeginAcceptReceiveCallback_24)); }
	inline IOAsyncCallback_t705871752 * get_BeginAcceptReceiveCallback_24() const { return ___BeginAcceptReceiveCallback_24; }
	inline IOAsyncCallback_t705871752 ** get_address_of_BeginAcceptReceiveCallback_24() { return &___BeginAcceptReceiveCallback_24; }
	inline void set_BeginAcceptReceiveCallback_24(IOAsyncCallback_t705871752 * value)
	{
		___BeginAcceptReceiveCallback_24 = value;
		Il2CppCodeGenWriteBarrier((&___BeginAcceptReceiveCallback_24), value);
	}

	inline static int32_t get_offset_of_ConnectAsyncCallback_25() { return static_cast<int32_t>(offsetof(Socket_t1119025450_StaticFields, ___ConnectAsyncCallback_25)); }
	inline AsyncCallback_t3962456242 * get_ConnectAsyncCallback_25() const { return ___ConnectAsyncCallback_25; }
	inline AsyncCallback_t3962456242 ** get_address_of_ConnectAsyncCallback_25() { return &___ConnectAsyncCallback_25; }
	inline void set_ConnectAsyncCallback_25(AsyncCallback_t3962456242 * value)
	{
		___ConnectAsyncCallback_25 = value;
		Il2CppCodeGenWriteBarrier((&___ConnectAsyncCallback_25), value);
	}

	inline static int32_t get_offset_of_BeginConnectCallback_26() { return static_cast<int32_t>(offsetof(Socket_t1119025450_StaticFields, ___BeginConnectCallback_26)); }
	inline IOAsyncCallback_t705871752 * get_BeginConnectCallback_26() const { return ___BeginConnectCallback_26; }
	inline IOAsyncCallback_t705871752 ** get_address_of_BeginConnectCallback_26() { return &___BeginConnectCallback_26; }
	inline void set_BeginConnectCallback_26(IOAsyncCallback_t705871752 * value)
	{
		___BeginConnectCallback_26 = value;
		Il2CppCodeGenWriteBarrier((&___BeginConnectCallback_26), value);
	}

	inline static int32_t get_offset_of_DisconnectAsyncCallback_27() { return static_cast<int32_t>(offsetof(Socket_t1119025450_StaticFields, ___DisconnectAsyncCallback_27)); }
	inline AsyncCallback_t3962456242 * get_DisconnectAsyncCallback_27() const { return ___DisconnectAsyncCallback_27; }
	inline AsyncCallback_t3962456242 ** get_address_of_DisconnectAsyncCallback_27() { return &___DisconnectAsyncCallback_27; }
	inline void set_DisconnectAsyncCallback_27(AsyncCallback_t3962456242 * value)
	{
		___DisconnectAsyncCallback_27 = value;
		Il2CppCodeGenWriteBarrier((&___DisconnectAsyncCallback_27), value);
	}

	inline static int32_t get_offset_of_BeginDisconnectCallback_28() { return static_cast<int32_t>(offsetof(Socket_t1119025450_StaticFields, ___BeginDisconnectCallback_28)); }
	inline IOAsyncCallback_t705871752 * get_BeginDisconnectCallback_28() const { return ___BeginDisconnectCallback_28; }
	inline IOAsyncCallback_t705871752 ** get_address_of_BeginDisconnectCallback_28() { return &___BeginDisconnectCallback_28; }
	inline void set_BeginDisconnectCallback_28(IOAsyncCallback_t705871752 * value)
	{
		___BeginDisconnectCallback_28 = value;
		Il2CppCodeGenWriteBarrier((&___BeginDisconnectCallback_28), value);
	}

	inline static int32_t get_offset_of_ReceiveAsyncCallback_29() { return static_cast<int32_t>(offsetof(Socket_t1119025450_StaticFields, ___ReceiveAsyncCallback_29)); }
	inline AsyncCallback_t3962456242 * get_ReceiveAsyncCallback_29() const { return ___ReceiveAsyncCallback_29; }
	inline AsyncCallback_t3962456242 ** get_address_of_ReceiveAsyncCallback_29() { return &___ReceiveAsyncCallback_29; }
	inline void set_ReceiveAsyncCallback_29(AsyncCallback_t3962456242 * value)
	{
		___ReceiveAsyncCallback_29 = value;
		Il2CppCodeGenWriteBarrier((&___ReceiveAsyncCallback_29), value);
	}

	inline static int32_t get_offset_of_BeginReceiveCallback_30() { return static_cast<int32_t>(offsetof(Socket_t1119025450_StaticFields, ___BeginReceiveCallback_30)); }
	inline IOAsyncCallback_t705871752 * get_BeginReceiveCallback_30() const { return ___BeginReceiveCallback_30; }
	inline IOAsyncCallback_t705871752 ** get_address_of_BeginReceiveCallback_30() { return &___BeginReceiveCallback_30; }
	inline void set_BeginReceiveCallback_30(IOAsyncCallback_t705871752 * value)
	{
		___BeginReceiveCallback_30 = value;
		Il2CppCodeGenWriteBarrier((&___BeginReceiveCallback_30), value);
	}

	inline static int32_t get_offset_of_BeginReceiveGenericCallback_31() { return static_cast<int32_t>(offsetof(Socket_t1119025450_StaticFields, ___BeginReceiveGenericCallback_31)); }
	inline IOAsyncCallback_t705871752 * get_BeginReceiveGenericCallback_31() const { return ___BeginReceiveGenericCallback_31; }
	inline IOAsyncCallback_t705871752 ** get_address_of_BeginReceiveGenericCallback_31() { return &___BeginReceiveGenericCallback_31; }
	inline void set_BeginReceiveGenericCallback_31(IOAsyncCallback_t705871752 * value)
	{
		___BeginReceiveGenericCallback_31 = value;
		Il2CppCodeGenWriteBarrier((&___BeginReceiveGenericCallback_31), value);
	}

	inline static int32_t get_offset_of_ReceiveFromAsyncCallback_32() { return static_cast<int32_t>(offsetof(Socket_t1119025450_StaticFields, ___ReceiveFromAsyncCallback_32)); }
	inline AsyncCallback_t3962456242 * get_ReceiveFromAsyncCallback_32() const { return ___ReceiveFromAsyncCallback_32; }
	inline AsyncCallback_t3962456242 ** get_address_of_ReceiveFromAsyncCallback_32() { return &___ReceiveFromAsyncCallback_32; }
	inline void set_ReceiveFromAsyncCallback_32(AsyncCallback_t3962456242 * value)
	{
		___ReceiveFromAsyncCallback_32 = value;
		Il2CppCodeGenWriteBarrier((&___ReceiveFromAsyncCallback_32), value);
	}

	inline static int32_t get_offset_of_BeginReceiveFromCallback_33() { return static_cast<int32_t>(offsetof(Socket_t1119025450_StaticFields, ___BeginReceiveFromCallback_33)); }
	inline IOAsyncCallback_t705871752 * get_BeginReceiveFromCallback_33() const { return ___BeginReceiveFromCallback_33; }
	inline IOAsyncCallback_t705871752 ** get_address_of_BeginReceiveFromCallback_33() { return &___BeginReceiveFromCallback_33; }
	inline void set_BeginReceiveFromCallback_33(IOAsyncCallback_t705871752 * value)
	{
		___BeginReceiveFromCallback_33 = value;
		Il2CppCodeGenWriteBarrier((&___BeginReceiveFromCallback_33), value);
	}

	inline static int32_t get_offset_of_SendAsyncCallback_34() { return static_cast<int32_t>(offsetof(Socket_t1119025450_StaticFields, ___SendAsyncCallback_34)); }
	inline AsyncCallback_t3962456242 * get_SendAsyncCallback_34() const { return ___SendAsyncCallback_34; }
	inline AsyncCallback_t3962456242 ** get_address_of_SendAsyncCallback_34() { return &___SendAsyncCallback_34; }
	inline void set_SendAsyncCallback_34(AsyncCallback_t3962456242 * value)
	{
		___SendAsyncCallback_34 = value;
		Il2CppCodeGenWriteBarrier((&___SendAsyncCallback_34), value);
	}

	inline static int32_t get_offset_of_BeginSendGenericCallback_35() { return static_cast<int32_t>(offsetof(Socket_t1119025450_StaticFields, ___BeginSendGenericCallback_35)); }
	inline IOAsyncCallback_t705871752 * get_BeginSendGenericCallback_35() const { return ___BeginSendGenericCallback_35; }
	inline IOAsyncCallback_t705871752 ** get_address_of_BeginSendGenericCallback_35() { return &___BeginSendGenericCallback_35; }
	inline void set_BeginSendGenericCallback_35(IOAsyncCallback_t705871752 * value)
	{
		___BeginSendGenericCallback_35 = value;
		Il2CppCodeGenWriteBarrier((&___BeginSendGenericCallback_35), value);
	}

	inline static int32_t get_offset_of_SendToAsyncCallback_36() { return static_cast<int32_t>(offsetof(Socket_t1119025450_StaticFields, ___SendToAsyncCallback_36)); }
	inline AsyncCallback_t3962456242 * get_SendToAsyncCallback_36() const { return ___SendToAsyncCallback_36; }
	inline AsyncCallback_t3962456242 ** get_address_of_SendToAsyncCallback_36() { return &___SendToAsyncCallback_36; }
	inline void set_SendToAsyncCallback_36(AsyncCallback_t3962456242 * value)
	{
		___SendToAsyncCallback_36 = value;
		Il2CppCodeGenWriteBarrier((&___SendToAsyncCallback_36), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SOCKET_T1119025450_H
#ifndef SOCKETASYNCEVENTARGS_T4146203020_H
#define SOCKETASYNCEVENTARGS_T4146203020_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Sockets.SocketAsyncEventArgs
struct  SocketAsyncEventArgs_t4146203020  : public EventArgs_t3591816995
{
public:
	// System.Boolean System.Net.Sockets.SocketAsyncEventArgs::disposed
	bool ___disposed_1;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Net.Sockets.SocketAsyncEventArgs::in_progress
	int32_t ___in_progress_2;
	// System.Net.EndPoint System.Net.Sockets.SocketAsyncEventArgs::remote_ep
	EndPoint_t982345378 * ___remote_ep_3;
	// System.Net.Sockets.Socket System.Net.Sockets.SocketAsyncEventArgs::current_socket
	Socket_t1119025450 * ___current_socket_4;
	// System.Net.Sockets.Socket System.Net.Sockets.SocketAsyncEventArgs::<AcceptSocket>k__BackingField
	Socket_t1119025450 * ___U3CAcceptSocketU3Ek__BackingField_5;
	// System.Int32 System.Net.Sockets.SocketAsyncEventArgs::<BytesTransferred>k__BackingField
	int32_t ___U3CBytesTransferredU3Ek__BackingField_6;
	// System.Net.Sockets.SocketError System.Net.Sockets.SocketAsyncEventArgs::<SocketError>k__BackingField
	int32_t ___U3CSocketErrorU3Ek__BackingField_7;
	// System.EventHandler`1<System.Net.Sockets.SocketAsyncEventArgs> System.Net.Sockets.SocketAsyncEventArgs::Completed
	EventHandler_1_t2070362453 * ___Completed_8;

public:
	inline static int32_t get_offset_of_disposed_1() { return static_cast<int32_t>(offsetof(SocketAsyncEventArgs_t4146203020, ___disposed_1)); }
	inline bool get_disposed_1() const { return ___disposed_1; }
	inline bool* get_address_of_disposed_1() { return &___disposed_1; }
	inline void set_disposed_1(bool value)
	{
		___disposed_1 = value;
	}

	inline static int32_t get_offset_of_in_progress_2() { return static_cast<int32_t>(offsetof(SocketAsyncEventArgs_t4146203020, ___in_progress_2)); }
	inline int32_t get_in_progress_2() const { return ___in_progress_2; }
	inline int32_t* get_address_of_in_progress_2() { return &___in_progress_2; }
	inline void set_in_progress_2(int32_t value)
	{
		___in_progress_2 = value;
	}

	inline static int32_t get_offset_of_remote_ep_3() { return static_cast<int32_t>(offsetof(SocketAsyncEventArgs_t4146203020, ___remote_ep_3)); }
	inline EndPoint_t982345378 * get_remote_ep_3() const { return ___remote_ep_3; }
	inline EndPoint_t982345378 ** get_address_of_remote_ep_3() { return &___remote_ep_3; }
	inline void set_remote_ep_3(EndPoint_t982345378 * value)
	{
		___remote_ep_3 = value;
		Il2CppCodeGenWriteBarrier((&___remote_ep_3), value);
	}

	inline static int32_t get_offset_of_current_socket_4() { return static_cast<int32_t>(offsetof(SocketAsyncEventArgs_t4146203020, ___current_socket_4)); }
	inline Socket_t1119025450 * get_current_socket_4() const { return ___current_socket_4; }
	inline Socket_t1119025450 ** get_address_of_current_socket_4() { return &___current_socket_4; }
	inline void set_current_socket_4(Socket_t1119025450 * value)
	{
		___current_socket_4 = value;
		Il2CppCodeGenWriteBarrier((&___current_socket_4), value);
	}

	inline static int32_t get_offset_of_U3CAcceptSocketU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(SocketAsyncEventArgs_t4146203020, ___U3CAcceptSocketU3Ek__BackingField_5)); }
	inline Socket_t1119025450 * get_U3CAcceptSocketU3Ek__BackingField_5() const { return ___U3CAcceptSocketU3Ek__BackingField_5; }
	inline Socket_t1119025450 ** get_address_of_U3CAcceptSocketU3Ek__BackingField_5() { return &___U3CAcceptSocketU3Ek__BackingField_5; }
	inline void set_U3CAcceptSocketU3Ek__BackingField_5(Socket_t1119025450 * value)
	{
		___U3CAcceptSocketU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((&___U3CAcceptSocketU3Ek__BackingField_5), value);
	}

	inline static int32_t get_offset_of_U3CBytesTransferredU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(SocketAsyncEventArgs_t4146203020, ___U3CBytesTransferredU3Ek__BackingField_6)); }
	inline int32_t get_U3CBytesTransferredU3Ek__BackingField_6() const { return ___U3CBytesTransferredU3Ek__BackingField_6; }
	inline int32_t* get_address_of_U3CBytesTransferredU3Ek__BackingField_6() { return &___U3CBytesTransferredU3Ek__BackingField_6; }
	inline void set_U3CBytesTransferredU3Ek__BackingField_6(int32_t value)
	{
		___U3CBytesTransferredU3Ek__BackingField_6 = value;
	}

	inline static int32_t get_offset_of_U3CSocketErrorU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(SocketAsyncEventArgs_t4146203020, ___U3CSocketErrorU3Ek__BackingField_7)); }
	inline int32_t get_U3CSocketErrorU3Ek__BackingField_7() const { return ___U3CSocketErrorU3Ek__BackingField_7; }
	inline int32_t* get_address_of_U3CSocketErrorU3Ek__BackingField_7() { return &___U3CSocketErrorU3Ek__BackingField_7; }
	inline void set_U3CSocketErrorU3Ek__BackingField_7(int32_t value)
	{
		___U3CSocketErrorU3Ek__BackingField_7 = value;
	}

	inline static int32_t get_offset_of_Completed_8() { return static_cast<int32_t>(offsetof(SocketAsyncEventArgs_t4146203020, ___Completed_8)); }
	inline EventHandler_1_t2070362453 * get_Completed_8() const { return ___Completed_8; }
	inline EventHandler_1_t2070362453 ** get_address_of_Completed_8() { return &___Completed_8; }
	inline void set_Completed_8(EventHandler_1_t2070362453 * value)
	{
		___Completed_8 = value;
		Il2CppCodeGenWriteBarrier((&___Completed_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SOCKETASYNCEVENTARGS_T4146203020_H
#ifndef SOCKETASYNCRESULT_T3523156467_H
#define SOCKETASYNCRESULT_T3523156467_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Sockets.SocketAsyncResult
struct  SocketAsyncResult_t3523156467  : public IOAsyncResult_t3640145766
{
public:
	// System.Net.Sockets.Socket System.Net.Sockets.SocketAsyncResult::socket
	Socket_t1119025450 * ___socket_5;
	// System.Net.Sockets.SocketOperation System.Net.Sockets.SocketAsyncResult::operation
	int32_t ___operation_6;
	// System.Exception System.Net.Sockets.SocketAsyncResult::DelayedException
	Exception_t * ___DelayedException_7;
	// System.Net.EndPoint System.Net.Sockets.SocketAsyncResult::EndPoint
	EndPoint_t982345378 * ___EndPoint_8;
	// System.Byte[] System.Net.Sockets.SocketAsyncResult::Buffer
	ByteU5BU5D_t4116647657* ___Buffer_9;
	// System.Int32 System.Net.Sockets.SocketAsyncResult::Offset
	int32_t ___Offset_10;
	// System.Int32 System.Net.Sockets.SocketAsyncResult::Size
	int32_t ___Size_11;
	// System.Net.Sockets.SocketFlags System.Net.Sockets.SocketAsyncResult::SockFlags
	int32_t ___SockFlags_12;
	// System.Net.Sockets.Socket System.Net.Sockets.SocketAsyncResult::AcceptSocket
	Socket_t1119025450 * ___AcceptSocket_13;
	// System.Net.IPAddress[] System.Net.Sockets.SocketAsyncResult::Addresses
	IPAddressU5BU5D_t596328627* ___Addresses_14;
	// System.Int32 System.Net.Sockets.SocketAsyncResult::Port
	int32_t ___Port_15;
	// System.Collections.Generic.IList`1<System.ArraySegment`1<System.Byte>> System.Net.Sockets.SocketAsyncResult::Buffers
	RuntimeObject* ___Buffers_16;
	// System.Boolean System.Net.Sockets.SocketAsyncResult::ReuseSocket
	bool ___ReuseSocket_17;
	// System.Int32 System.Net.Sockets.SocketAsyncResult::CurrentAddress
	int32_t ___CurrentAddress_18;
	// System.Net.Sockets.Socket System.Net.Sockets.SocketAsyncResult::AcceptedSocket
	Socket_t1119025450 * ___AcceptedSocket_19;
	// System.Int32 System.Net.Sockets.SocketAsyncResult::Total
	int32_t ___Total_20;
	// System.Int32 System.Net.Sockets.SocketAsyncResult::error
	int32_t ___error_21;
	// System.Int32 System.Net.Sockets.SocketAsyncResult::EndCalled
	int32_t ___EndCalled_22;

public:
	inline static int32_t get_offset_of_socket_5() { return static_cast<int32_t>(offsetof(SocketAsyncResult_t3523156467, ___socket_5)); }
	inline Socket_t1119025450 * get_socket_5() const { return ___socket_5; }
	inline Socket_t1119025450 ** get_address_of_socket_5() { return &___socket_5; }
	inline void set_socket_5(Socket_t1119025450 * value)
	{
		___socket_5 = value;
		Il2CppCodeGenWriteBarrier((&___socket_5), value);
	}

	inline static int32_t get_offset_of_operation_6() { return static_cast<int32_t>(offsetof(SocketAsyncResult_t3523156467, ___operation_6)); }
	inline int32_t get_operation_6() const { return ___operation_6; }
	inline int32_t* get_address_of_operation_6() { return &___operation_6; }
	inline void set_operation_6(int32_t value)
	{
		___operation_6 = value;
	}

	inline static int32_t get_offset_of_DelayedException_7() { return static_cast<int32_t>(offsetof(SocketAsyncResult_t3523156467, ___DelayedException_7)); }
	inline Exception_t * get_DelayedException_7() const { return ___DelayedException_7; }
	inline Exception_t ** get_address_of_DelayedException_7() { return &___DelayedException_7; }
	inline void set_DelayedException_7(Exception_t * value)
	{
		___DelayedException_7 = value;
		Il2CppCodeGenWriteBarrier((&___DelayedException_7), value);
	}

	inline static int32_t get_offset_of_EndPoint_8() { return static_cast<int32_t>(offsetof(SocketAsyncResult_t3523156467, ___EndPoint_8)); }
	inline EndPoint_t982345378 * get_EndPoint_8() const { return ___EndPoint_8; }
	inline EndPoint_t982345378 ** get_address_of_EndPoint_8() { return &___EndPoint_8; }
	inline void set_EndPoint_8(EndPoint_t982345378 * value)
	{
		___EndPoint_8 = value;
		Il2CppCodeGenWriteBarrier((&___EndPoint_8), value);
	}

	inline static int32_t get_offset_of_Buffer_9() { return static_cast<int32_t>(offsetof(SocketAsyncResult_t3523156467, ___Buffer_9)); }
	inline ByteU5BU5D_t4116647657* get_Buffer_9() const { return ___Buffer_9; }
	inline ByteU5BU5D_t4116647657** get_address_of_Buffer_9() { return &___Buffer_9; }
	inline void set_Buffer_9(ByteU5BU5D_t4116647657* value)
	{
		___Buffer_9 = value;
		Il2CppCodeGenWriteBarrier((&___Buffer_9), value);
	}

	inline static int32_t get_offset_of_Offset_10() { return static_cast<int32_t>(offsetof(SocketAsyncResult_t3523156467, ___Offset_10)); }
	inline int32_t get_Offset_10() const { return ___Offset_10; }
	inline int32_t* get_address_of_Offset_10() { return &___Offset_10; }
	inline void set_Offset_10(int32_t value)
	{
		___Offset_10 = value;
	}

	inline static int32_t get_offset_of_Size_11() { return static_cast<int32_t>(offsetof(SocketAsyncResult_t3523156467, ___Size_11)); }
	inline int32_t get_Size_11() const { return ___Size_11; }
	inline int32_t* get_address_of_Size_11() { return &___Size_11; }
	inline void set_Size_11(int32_t value)
	{
		___Size_11 = value;
	}

	inline static int32_t get_offset_of_SockFlags_12() { return static_cast<int32_t>(offsetof(SocketAsyncResult_t3523156467, ___SockFlags_12)); }
	inline int32_t get_SockFlags_12() const { return ___SockFlags_12; }
	inline int32_t* get_address_of_SockFlags_12() { return &___SockFlags_12; }
	inline void set_SockFlags_12(int32_t value)
	{
		___SockFlags_12 = value;
	}

	inline static int32_t get_offset_of_AcceptSocket_13() { return static_cast<int32_t>(offsetof(SocketAsyncResult_t3523156467, ___AcceptSocket_13)); }
	inline Socket_t1119025450 * get_AcceptSocket_13() const { return ___AcceptSocket_13; }
	inline Socket_t1119025450 ** get_address_of_AcceptSocket_13() { return &___AcceptSocket_13; }
	inline void set_AcceptSocket_13(Socket_t1119025450 * value)
	{
		___AcceptSocket_13 = value;
		Il2CppCodeGenWriteBarrier((&___AcceptSocket_13), value);
	}

	inline static int32_t get_offset_of_Addresses_14() { return static_cast<int32_t>(offsetof(SocketAsyncResult_t3523156467, ___Addresses_14)); }
	inline IPAddressU5BU5D_t596328627* get_Addresses_14() const { return ___Addresses_14; }
	inline IPAddressU5BU5D_t596328627** get_address_of_Addresses_14() { return &___Addresses_14; }
	inline void set_Addresses_14(IPAddressU5BU5D_t596328627* value)
	{
		___Addresses_14 = value;
		Il2CppCodeGenWriteBarrier((&___Addresses_14), value);
	}

	inline static int32_t get_offset_of_Port_15() { return static_cast<int32_t>(offsetof(SocketAsyncResult_t3523156467, ___Port_15)); }
	inline int32_t get_Port_15() const { return ___Port_15; }
	inline int32_t* get_address_of_Port_15() { return &___Port_15; }
	inline void set_Port_15(int32_t value)
	{
		___Port_15 = value;
	}

	inline static int32_t get_offset_of_Buffers_16() { return static_cast<int32_t>(offsetof(SocketAsyncResult_t3523156467, ___Buffers_16)); }
	inline RuntimeObject* get_Buffers_16() const { return ___Buffers_16; }
	inline RuntimeObject** get_address_of_Buffers_16() { return &___Buffers_16; }
	inline void set_Buffers_16(RuntimeObject* value)
	{
		___Buffers_16 = value;
		Il2CppCodeGenWriteBarrier((&___Buffers_16), value);
	}

	inline static int32_t get_offset_of_ReuseSocket_17() { return static_cast<int32_t>(offsetof(SocketAsyncResult_t3523156467, ___ReuseSocket_17)); }
	inline bool get_ReuseSocket_17() const { return ___ReuseSocket_17; }
	inline bool* get_address_of_ReuseSocket_17() { return &___ReuseSocket_17; }
	inline void set_ReuseSocket_17(bool value)
	{
		___ReuseSocket_17 = value;
	}

	inline static int32_t get_offset_of_CurrentAddress_18() { return static_cast<int32_t>(offsetof(SocketAsyncResult_t3523156467, ___CurrentAddress_18)); }
	inline int32_t get_CurrentAddress_18() const { return ___CurrentAddress_18; }
	inline int32_t* get_address_of_CurrentAddress_18() { return &___CurrentAddress_18; }
	inline void set_CurrentAddress_18(int32_t value)
	{
		___CurrentAddress_18 = value;
	}

	inline static int32_t get_offset_of_AcceptedSocket_19() { return static_cast<int32_t>(offsetof(SocketAsyncResult_t3523156467, ___AcceptedSocket_19)); }
	inline Socket_t1119025450 * get_AcceptedSocket_19() const { return ___AcceptedSocket_19; }
	inline Socket_t1119025450 ** get_address_of_AcceptedSocket_19() { return &___AcceptedSocket_19; }
	inline void set_AcceptedSocket_19(Socket_t1119025450 * value)
	{
		___AcceptedSocket_19 = value;
		Il2CppCodeGenWriteBarrier((&___AcceptedSocket_19), value);
	}

	inline static int32_t get_offset_of_Total_20() { return static_cast<int32_t>(offsetof(SocketAsyncResult_t3523156467, ___Total_20)); }
	inline int32_t get_Total_20() const { return ___Total_20; }
	inline int32_t* get_address_of_Total_20() { return &___Total_20; }
	inline void set_Total_20(int32_t value)
	{
		___Total_20 = value;
	}

	inline static int32_t get_offset_of_error_21() { return static_cast<int32_t>(offsetof(SocketAsyncResult_t3523156467, ___error_21)); }
	inline int32_t get_error_21() const { return ___error_21; }
	inline int32_t* get_address_of_error_21() { return &___error_21; }
	inline void set_error_21(int32_t value)
	{
		___error_21 = value;
	}

	inline static int32_t get_offset_of_EndCalled_22() { return static_cast<int32_t>(offsetof(SocketAsyncResult_t3523156467, ___EndCalled_22)); }
	inline int32_t get_EndCalled_22() const { return ___EndCalled_22; }
	inline int32_t* get_address_of_EndCalled_22() { return &___EndCalled_22; }
	inline void set_EndCalled_22(int32_t value)
	{
		___EndCalled_22 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Net.Sockets.SocketAsyncResult
struct SocketAsyncResult_t3523156467_marshaled_pinvoke : public IOAsyncResult_t3640145766_marshaled_pinvoke
{
	Socket_t1119025450 * ___socket_5;
	int32_t ___operation_6;
	Exception_t_marshaled_pinvoke* ___DelayedException_7;
	EndPoint_t982345378 * ___EndPoint_8;
	uint8_t* ___Buffer_9;
	int32_t ___Offset_10;
	int32_t ___Size_11;
	int32_t ___SockFlags_12;
	Socket_t1119025450 * ___AcceptSocket_13;
	IPAddressU5BU5D_t596328627* ___Addresses_14;
	int32_t ___Port_15;
	RuntimeObject* ___Buffers_16;
	int32_t ___ReuseSocket_17;
	int32_t ___CurrentAddress_18;
	Socket_t1119025450 * ___AcceptedSocket_19;
	int32_t ___Total_20;
	int32_t ___error_21;
	int32_t ___EndCalled_22;
};
// Native definition for COM marshalling of System.Net.Sockets.SocketAsyncResult
struct SocketAsyncResult_t3523156467_marshaled_com : public IOAsyncResult_t3640145766_marshaled_com
{
	Socket_t1119025450 * ___socket_5;
	int32_t ___operation_6;
	Exception_t_marshaled_com* ___DelayedException_7;
	EndPoint_t982345378 * ___EndPoint_8;
	uint8_t* ___Buffer_9;
	int32_t ___Offset_10;
	int32_t ___Size_11;
	int32_t ___SockFlags_12;
	Socket_t1119025450 * ___AcceptSocket_13;
	IPAddressU5BU5D_t596328627* ___Addresses_14;
	int32_t ___Port_15;
	RuntimeObject* ___Buffers_16;
	int32_t ___ReuseSocket_17;
	int32_t ___CurrentAddress_18;
	Socket_t1119025450 * ___AcceptedSocket_19;
	int32_t ___Total_20;
	int32_t ___error_21;
	int32_t ___EndCalled_22;
};
#endif // SOCKETASYNCRESULT_T3523156467_H
#ifndef WEBASYNCRESULT_T3421962937_H
#define WEBASYNCRESULT_T3421962937_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.WebAsyncResult
struct  WebAsyncResult_t3421962937  : public SimpleAsyncResult_t3946017618
{
public:
	// System.Int32 System.Net.WebAsyncResult::nbytes
	int32_t ___nbytes_9;
	// System.IAsyncResult System.Net.WebAsyncResult::innerAsyncResult
	RuntimeObject* ___innerAsyncResult_10;
	// System.Net.HttpWebResponse System.Net.WebAsyncResult::response
	HttpWebResponse_t3286585418 * ___response_11;
	// System.IO.Stream System.Net.WebAsyncResult::writeStream
	Stream_t1273022909 * ___writeStream_12;
	// System.Byte[] System.Net.WebAsyncResult::buffer
	ByteU5BU5D_t4116647657* ___buffer_13;
	// System.Int32 System.Net.WebAsyncResult::offset
	int32_t ___offset_14;
	// System.Int32 System.Net.WebAsyncResult::size
	int32_t ___size_15;
	// System.Boolean System.Net.WebAsyncResult::EndCalled
	bool ___EndCalled_16;
	// System.Boolean System.Net.WebAsyncResult::AsyncWriteAll
	bool ___AsyncWriteAll_17;
	// System.Net.HttpWebRequest System.Net.WebAsyncResult::AsyncObject
	HttpWebRequest_t1669436515 * ___AsyncObject_18;

public:
	inline static int32_t get_offset_of_nbytes_9() { return static_cast<int32_t>(offsetof(WebAsyncResult_t3421962937, ___nbytes_9)); }
	inline int32_t get_nbytes_9() const { return ___nbytes_9; }
	inline int32_t* get_address_of_nbytes_9() { return &___nbytes_9; }
	inline void set_nbytes_9(int32_t value)
	{
		___nbytes_9 = value;
	}

	inline static int32_t get_offset_of_innerAsyncResult_10() { return static_cast<int32_t>(offsetof(WebAsyncResult_t3421962937, ___innerAsyncResult_10)); }
	inline RuntimeObject* get_innerAsyncResult_10() const { return ___innerAsyncResult_10; }
	inline RuntimeObject** get_address_of_innerAsyncResult_10() { return &___innerAsyncResult_10; }
	inline void set_innerAsyncResult_10(RuntimeObject* value)
	{
		___innerAsyncResult_10 = value;
		Il2CppCodeGenWriteBarrier((&___innerAsyncResult_10), value);
	}

	inline static int32_t get_offset_of_response_11() { return static_cast<int32_t>(offsetof(WebAsyncResult_t3421962937, ___response_11)); }
	inline HttpWebResponse_t3286585418 * get_response_11() const { return ___response_11; }
	inline HttpWebResponse_t3286585418 ** get_address_of_response_11() { return &___response_11; }
	inline void set_response_11(HttpWebResponse_t3286585418 * value)
	{
		___response_11 = value;
		Il2CppCodeGenWriteBarrier((&___response_11), value);
	}

	inline static int32_t get_offset_of_writeStream_12() { return static_cast<int32_t>(offsetof(WebAsyncResult_t3421962937, ___writeStream_12)); }
	inline Stream_t1273022909 * get_writeStream_12() const { return ___writeStream_12; }
	inline Stream_t1273022909 ** get_address_of_writeStream_12() { return &___writeStream_12; }
	inline void set_writeStream_12(Stream_t1273022909 * value)
	{
		___writeStream_12 = value;
		Il2CppCodeGenWriteBarrier((&___writeStream_12), value);
	}

	inline static int32_t get_offset_of_buffer_13() { return static_cast<int32_t>(offsetof(WebAsyncResult_t3421962937, ___buffer_13)); }
	inline ByteU5BU5D_t4116647657* get_buffer_13() const { return ___buffer_13; }
	inline ByteU5BU5D_t4116647657** get_address_of_buffer_13() { return &___buffer_13; }
	inline void set_buffer_13(ByteU5BU5D_t4116647657* value)
	{
		___buffer_13 = value;
		Il2CppCodeGenWriteBarrier((&___buffer_13), value);
	}

	inline static int32_t get_offset_of_offset_14() { return static_cast<int32_t>(offsetof(WebAsyncResult_t3421962937, ___offset_14)); }
	inline int32_t get_offset_14() const { return ___offset_14; }
	inline int32_t* get_address_of_offset_14() { return &___offset_14; }
	inline void set_offset_14(int32_t value)
	{
		___offset_14 = value;
	}

	inline static int32_t get_offset_of_size_15() { return static_cast<int32_t>(offsetof(WebAsyncResult_t3421962937, ___size_15)); }
	inline int32_t get_size_15() const { return ___size_15; }
	inline int32_t* get_address_of_size_15() { return &___size_15; }
	inline void set_size_15(int32_t value)
	{
		___size_15 = value;
	}

	inline static int32_t get_offset_of_EndCalled_16() { return static_cast<int32_t>(offsetof(WebAsyncResult_t3421962937, ___EndCalled_16)); }
	inline bool get_EndCalled_16() const { return ___EndCalled_16; }
	inline bool* get_address_of_EndCalled_16() { return &___EndCalled_16; }
	inline void set_EndCalled_16(bool value)
	{
		___EndCalled_16 = value;
	}

	inline static int32_t get_offset_of_AsyncWriteAll_17() { return static_cast<int32_t>(offsetof(WebAsyncResult_t3421962937, ___AsyncWriteAll_17)); }
	inline bool get_AsyncWriteAll_17() const { return ___AsyncWriteAll_17; }
	inline bool* get_address_of_AsyncWriteAll_17() { return &___AsyncWriteAll_17; }
	inline void set_AsyncWriteAll_17(bool value)
	{
		___AsyncWriteAll_17 = value;
	}

	inline static int32_t get_offset_of_AsyncObject_18() { return static_cast<int32_t>(offsetof(WebAsyncResult_t3421962937, ___AsyncObject_18)); }
	inline HttpWebRequest_t1669436515 * get_AsyncObject_18() const { return ___AsyncObject_18; }
	inline HttpWebRequest_t1669436515 ** get_address_of_AsyncObject_18() { return &___AsyncObject_18; }
	inline void set_AsyncObject_18(HttpWebRequest_t1669436515 * value)
	{
		___AsyncObject_18 = value;
		Il2CppCodeGenWriteBarrier((&___AsyncObject_18), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WEBASYNCRESULT_T3421962937_H
#ifndef WEBCONNECTION_T3982808322_H
#define WEBCONNECTION_T3982808322_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.WebConnection
struct  WebConnection_t3982808322  : public RuntimeObject
{
public:
	// System.Net.ServicePoint System.Net.WebConnection::sPoint
	ServicePoint_t2786966844 * ___sPoint_0;
	// System.IO.Stream System.Net.WebConnection::nstream
	Stream_t1273022909 * ___nstream_1;
	// System.Net.Sockets.Socket System.Net.WebConnection::socket
	Socket_t1119025450 * ___socket_2;
	// System.Object System.Net.WebConnection::socketLock
	RuntimeObject * ___socketLock_3;
	// System.Net.IWebConnectionState System.Net.WebConnection::state
	RuntimeObject* ___state_4;
	// System.Net.WebExceptionStatus System.Net.WebConnection::status
	int32_t ___status_5;
	// System.Boolean System.Net.WebConnection::keepAlive
	bool ___keepAlive_6;
	// System.Byte[] System.Net.WebConnection::buffer
	ByteU5BU5D_t4116647657* ___buffer_7;
	// System.EventHandler System.Net.WebConnection::abortHandler
	EventHandler_t1348719766 * ___abortHandler_8;
	// System.Net.WebConnection/AbortHelper System.Net.WebConnection::abortHelper
	AbortHelper_t1490877826 * ___abortHelper_9;
	// System.Net.WebConnectionData System.Net.WebConnection::Data
	WebConnectionData_t3835660455 * ___Data_10;
	// System.Boolean System.Net.WebConnection::chunkedRead
	bool ___chunkedRead_11;
	// System.Net.MonoChunkStream System.Net.WebConnection::chunkStream
	MonoChunkStream_t2034754733 * ___chunkStream_12;
	// System.Collections.Queue System.Net.WebConnection::queue
	Queue_t3637523393 * ___queue_13;
	// System.Boolean System.Net.WebConnection::reused
	bool ___reused_14;
	// System.Int32 System.Net.WebConnection::position
	int32_t ___position_15;
	// System.Net.HttpWebRequest System.Net.WebConnection::priority_request
	HttpWebRequest_t1669436515 * ___priority_request_16;
	// System.Net.NetworkCredential System.Net.WebConnection::ntlm_credentials
	NetworkCredential_t3282608323 * ___ntlm_credentials_17;
	// System.Boolean System.Net.WebConnection::ntlm_authenticated
	bool ___ntlm_authenticated_18;
	// System.Boolean System.Net.WebConnection::unsafe_sharing
	bool ___unsafe_sharing_19;
	// System.Net.WebConnection/NtlmAuthState System.Net.WebConnection::connect_ntlm_auth_state
	int32_t ___connect_ntlm_auth_state_20;
	// System.Net.HttpWebRequest System.Net.WebConnection::connect_request
	HttpWebRequest_t1669436515 * ___connect_request_21;
	// System.Exception System.Net.WebConnection::connect_exception
	Exception_t * ___connect_exception_22;
	// Mono.Net.Security.MonoTlsStream System.Net.WebConnection::tlsStream
	MonoTlsStream_t1980138907 * ___tlsStream_23;

public:
	inline static int32_t get_offset_of_sPoint_0() { return static_cast<int32_t>(offsetof(WebConnection_t3982808322, ___sPoint_0)); }
	inline ServicePoint_t2786966844 * get_sPoint_0() const { return ___sPoint_0; }
	inline ServicePoint_t2786966844 ** get_address_of_sPoint_0() { return &___sPoint_0; }
	inline void set_sPoint_0(ServicePoint_t2786966844 * value)
	{
		___sPoint_0 = value;
		Il2CppCodeGenWriteBarrier((&___sPoint_0), value);
	}

	inline static int32_t get_offset_of_nstream_1() { return static_cast<int32_t>(offsetof(WebConnection_t3982808322, ___nstream_1)); }
	inline Stream_t1273022909 * get_nstream_1() const { return ___nstream_1; }
	inline Stream_t1273022909 ** get_address_of_nstream_1() { return &___nstream_1; }
	inline void set_nstream_1(Stream_t1273022909 * value)
	{
		___nstream_1 = value;
		Il2CppCodeGenWriteBarrier((&___nstream_1), value);
	}

	inline static int32_t get_offset_of_socket_2() { return static_cast<int32_t>(offsetof(WebConnection_t3982808322, ___socket_2)); }
	inline Socket_t1119025450 * get_socket_2() const { return ___socket_2; }
	inline Socket_t1119025450 ** get_address_of_socket_2() { return &___socket_2; }
	inline void set_socket_2(Socket_t1119025450 * value)
	{
		___socket_2 = value;
		Il2CppCodeGenWriteBarrier((&___socket_2), value);
	}

	inline static int32_t get_offset_of_socketLock_3() { return static_cast<int32_t>(offsetof(WebConnection_t3982808322, ___socketLock_3)); }
	inline RuntimeObject * get_socketLock_3() const { return ___socketLock_3; }
	inline RuntimeObject ** get_address_of_socketLock_3() { return &___socketLock_3; }
	inline void set_socketLock_3(RuntimeObject * value)
	{
		___socketLock_3 = value;
		Il2CppCodeGenWriteBarrier((&___socketLock_3), value);
	}

	inline static int32_t get_offset_of_state_4() { return static_cast<int32_t>(offsetof(WebConnection_t3982808322, ___state_4)); }
	inline RuntimeObject* get_state_4() const { return ___state_4; }
	inline RuntimeObject** get_address_of_state_4() { return &___state_4; }
	inline void set_state_4(RuntimeObject* value)
	{
		___state_4 = value;
		Il2CppCodeGenWriteBarrier((&___state_4), value);
	}

	inline static int32_t get_offset_of_status_5() { return static_cast<int32_t>(offsetof(WebConnection_t3982808322, ___status_5)); }
	inline int32_t get_status_5() const { return ___status_5; }
	inline int32_t* get_address_of_status_5() { return &___status_5; }
	inline void set_status_5(int32_t value)
	{
		___status_5 = value;
	}

	inline static int32_t get_offset_of_keepAlive_6() { return static_cast<int32_t>(offsetof(WebConnection_t3982808322, ___keepAlive_6)); }
	inline bool get_keepAlive_6() const { return ___keepAlive_6; }
	inline bool* get_address_of_keepAlive_6() { return &___keepAlive_6; }
	inline void set_keepAlive_6(bool value)
	{
		___keepAlive_6 = value;
	}

	inline static int32_t get_offset_of_buffer_7() { return static_cast<int32_t>(offsetof(WebConnection_t3982808322, ___buffer_7)); }
	inline ByteU5BU5D_t4116647657* get_buffer_7() const { return ___buffer_7; }
	inline ByteU5BU5D_t4116647657** get_address_of_buffer_7() { return &___buffer_7; }
	inline void set_buffer_7(ByteU5BU5D_t4116647657* value)
	{
		___buffer_7 = value;
		Il2CppCodeGenWriteBarrier((&___buffer_7), value);
	}

	inline static int32_t get_offset_of_abortHandler_8() { return static_cast<int32_t>(offsetof(WebConnection_t3982808322, ___abortHandler_8)); }
	inline EventHandler_t1348719766 * get_abortHandler_8() const { return ___abortHandler_8; }
	inline EventHandler_t1348719766 ** get_address_of_abortHandler_8() { return &___abortHandler_8; }
	inline void set_abortHandler_8(EventHandler_t1348719766 * value)
	{
		___abortHandler_8 = value;
		Il2CppCodeGenWriteBarrier((&___abortHandler_8), value);
	}

	inline static int32_t get_offset_of_abortHelper_9() { return static_cast<int32_t>(offsetof(WebConnection_t3982808322, ___abortHelper_9)); }
	inline AbortHelper_t1490877826 * get_abortHelper_9() const { return ___abortHelper_9; }
	inline AbortHelper_t1490877826 ** get_address_of_abortHelper_9() { return &___abortHelper_9; }
	inline void set_abortHelper_9(AbortHelper_t1490877826 * value)
	{
		___abortHelper_9 = value;
		Il2CppCodeGenWriteBarrier((&___abortHelper_9), value);
	}

	inline static int32_t get_offset_of_Data_10() { return static_cast<int32_t>(offsetof(WebConnection_t3982808322, ___Data_10)); }
	inline WebConnectionData_t3835660455 * get_Data_10() const { return ___Data_10; }
	inline WebConnectionData_t3835660455 ** get_address_of_Data_10() { return &___Data_10; }
	inline void set_Data_10(WebConnectionData_t3835660455 * value)
	{
		___Data_10 = value;
		Il2CppCodeGenWriteBarrier((&___Data_10), value);
	}

	inline static int32_t get_offset_of_chunkedRead_11() { return static_cast<int32_t>(offsetof(WebConnection_t3982808322, ___chunkedRead_11)); }
	inline bool get_chunkedRead_11() const { return ___chunkedRead_11; }
	inline bool* get_address_of_chunkedRead_11() { return &___chunkedRead_11; }
	inline void set_chunkedRead_11(bool value)
	{
		___chunkedRead_11 = value;
	}

	inline static int32_t get_offset_of_chunkStream_12() { return static_cast<int32_t>(offsetof(WebConnection_t3982808322, ___chunkStream_12)); }
	inline MonoChunkStream_t2034754733 * get_chunkStream_12() const { return ___chunkStream_12; }
	inline MonoChunkStream_t2034754733 ** get_address_of_chunkStream_12() { return &___chunkStream_12; }
	inline void set_chunkStream_12(MonoChunkStream_t2034754733 * value)
	{
		___chunkStream_12 = value;
		Il2CppCodeGenWriteBarrier((&___chunkStream_12), value);
	}

	inline static int32_t get_offset_of_queue_13() { return static_cast<int32_t>(offsetof(WebConnection_t3982808322, ___queue_13)); }
	inline Queue_t3637523393 * get_queue_13() const { return ___queue_13; }
	inline Queue_t3637523393 ** get_address_of_queue_13() { return &___queue_13; }
	inline void set_queue_13(Queue_t3637523393 * value)
	{
		___queue_13 = value;
		Il2CppCodeGenWriteBarrier((&___queue_13), value);
	}

	inline static int32_t get_offset_of_reused_14() { return static_cast<int32_t>(offsetof(WebConnection_t3982808322, ___reused_14)); }
	inline bool get_reused_14() const { return ___reused_14; }
	inline bool* get_address_of_reused_14() { return &___reused_14; }
	inline void set_reused_14(bool value)
	{
		___reused_14 = value;
	}

	inline static int32_t get_offset_of_position_15() { return static_cast<int32_t>(offsetof(WebConnection_t3982808322, ___position_15)); }
	inline int32_t get_position_15() const { return ___position_15; }
	inline int32_t* get_address_of_position_15() { return &___position_15; }
	inline void set_position_15(int32_t value)
	{
		___position_15 = value;
	}

	inline static int32_t get_offset_of_priority_request_16() { return static_cast<int32_t>(offsetof(WebConnection_t3982808322, ___priority_request_16)); }
	inline HttpWebRequest_t1669436515 * get_priority_request_16() const { return ___priority_request_16; }
	inline HttpWebRequest_t1669436515 ** get_address_of_priority_request_16() { return &___priority_request_16; }
	inline void set_priority_request_16(HttpWebRequest_t1669436515 * value)
	{
		___priority_request_16 = value;
		Il2CppCodeGenWriteBarrier((&___priority_request_16), value);
	}

	inline static int32_t get_offset_of_ntlm_credentials_17() { return static_cast<int32_t>(offsetof(WebConnection_t3982808322, ___ntlm_credentials_17)); }
	inline NetworkCredential_t3282608323 * get_ntlm_credentials_17() const { return ___ntlm_credentials_17; }
	inline NetworkCredential_t3282608323 ** get_address_of_ntlm_credentials_17() { return &___ntlm_credentials_17; }
	inline void set_ntlm_credentials_17(NetworkCredential_t3282608323 * value)
	{
		___ntlm_credentials_17 = value;
		Il2CppCodeGenWriteBarrier((&___ntlm_credentials_17), value);
	}

	inline static int32_t get_offset_of_ntlm_authenticated_18() { return static_cast<int32_t>(offsetof(WebConnection_t3982808322, ___ntlm_authenticated_18)); }
	inline bool get_ntlm_authenticated_18() const { return ___ntlm_authenticated_18; }
	inline bool* get_address_of_ntlm_authenticated_18() { return &___ntlm_authenticated_18; }
	inline void set_ntlm_authenticated_18(bool value)
	{
		___ntlm_authenticated_18 = value;
	}

	inline static int32_t get_offset_of_unsafe_sharing_19() { return static_cast<int32_t>(offsetof(WebConnection_t3982808322, ___unsafe_sharing_19)); }
	inline bool get_unsafe_sharing_19() const { return ___unsafe_sharing_19; }
	inline bool* get_address_of_unsafe_sharing_19() { return &___unsafe_sharing_19; }
	inline void set_unsafe_sharing_19(bool value)
	{
		___unsafe_sharing_19 = value;
	}

	inline static int32_t get_offset_of_connect_ntlm_auth_state_20() { return static_cast<int32_t>(offsetof(WebConnection_t3982808322, ___connect_ntlm_auth_state_20)); }
	inline int32_t get_connect_ntlm_auth_state_20() const { return ___connect_ntlm_auth_state_20; }
	inline int32_t* get_address_of_connect_ntlm_auth_state_20() { return &___connect_ntlm_auth_state_20; }
	inline void set_connect_ntlm_auth_state_20(int32_t value)
	{
		___connect_ntlm_auth_state_20 = value;
	}

	inline static int32_t get_offset_of_connect_request_21() { return static_cast<int32_t>(offsetof(WebConnection_t3982808322, ___connect_request_21)); }
	inline HttpWebRequest_t1669436515 * get_connect_request_21() const { return ___connect_request_21; }
	inline HttpWebRequest_t1669436515 ** get_address_of_connect_request_21() { return &___connect_request_21; }
	inline void set_connect_request_21(HttpWebRequest_t1669436515 * value)
	{
		___connect_request_21 = value;
		Il2CppCodeGenWriteBarrier((&___connect_request_21), value);
	}

	inline static int32_t get_offset_of_connect_exception_22() { return static_cast<int32_t>(offsetof(WebConnection_t3982808322, ___connect_exception_22)); }
	inline Exception_t * get_connect_exception_22() const { return ___connect_exception_22; }
	inline Exception_t ** get_address_of_connect_exception_22() { return &___connect_exception_22; }
	inline void set_connect_exception_22(Exception_t * value)
	{
		___connect_exception_22 = value;
		Il2CppCodeGenWriteBarrier((&___connect_exception_22), value);
	}

	inline static int32_t get_offset_of_tlsStream_23() { return static_cast<int32_t>(offsetof(WebConnection_t3982808322, ___tlsStream_23)); }
	inline MonoTlsStream_t1980138907 * get_tlsStream_23() const { return ___tlsStream_23; }
	inline MonoTlsStream_t1980138907 ** get_address_of_tlsStream_23() { return &___tlsStream_23; }
	inline void set_tlsStream_23(MonoTlsStream_t1980138907 * value)
	{
		___tlsStream_23 = value;
		Il2CppCodeGenWriteBarrier((&___tlsStream_23), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WEBCONNECTION_T3982808322_H
#ifndef WEBCONNECTIONDATA_T3835660455_H
#define WEBCONNECTIONDATA_T3835660455_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.WebConnectionData
struct  WebConnectionData_t3835660455  : public RuntimeObject
{
public:
	// System.Net.HttpWebRequest System.Net.WebConnectionData::_request
	HttpWebRequest_t1669436515 * ____request_0;
	// System.Int32 System.Net.WebConnectionData::StatusCode
	int32_t ___StatusCode_1;
	// System.String System.Net.WebConnectionData::StatusDescription
	String_t* ___StatusDescription_2;
	// System.Net.WebHeaderCollection System.Net.WebConnectionData::Headers
	WebHeaderCollection_t1942268960 * ___Headers_3;
	// System.Version System.Net.WebConnectionData::Version
	Version_t3456873960 * ___Version_4;
	// System.Version System.Net.WebConnectionData::ProxyVersion
	Version_t3456873960 * ___ProxyVersion_5;
	// System.IO.Stream System.Net.WebConnectionData::stream
	Stream_t1273022909 * ___stream_6;
	// System.String[] System.Net.WebConnectionData::Challenge
	StringU5BU5D_t1281789340* ___Challenge_7;
	// System.Net.ReadState System.Net.WebConnectionData::_readState
	int32_t ____readState_8;

public:
	inline static int32_t get_offset_of__request_0() { return static_cast<int32_t>(offsetof(WebConnectionData_t3835660455, ____request_0)); }
	inline HttpWebRequest_t1669436515 * get__request_0() const { return ____request_0; }
	inline HttpWebRequest_t1669436515 ** get_address_of__request_0() { return &____request_0; }
	inline void set__request_0(HttpWebRequest_t1669436515 * value)
	{
		____request_0 = value;
		Il2CppCodeGenWriteBarrier((&____request_0), value);
	}

	inline static int32_t get_offset_of_StatusCode_1() { return static_cast<int32_t>(offsetof(WebConnectionData_t3835660455, ___StatusCode_1)); }
	inline int32_t get_StatusCode_1() const { return ___StatusCode_1; }
	inline int32_t* get_address_of_StatusCode_1() { return &___StatusCode_1; }
	inline void set_StatusCode_1(int32_t value)
	{
		___StatusCode_1 = value;
	}

	inline static int32_t get_offset_of_StatusDescription_2() { return static_cast<int32_t>(offsetof(WebConnectionData_t3835660455, ___StatusDescription_2)); }
	inline String_t* get_StatusDescription_2() const { return ___StatusDescription_2; }
	inline String_t** get_address_of_StatusDescription_2() { return &___StatusDescription_2; }
	inline void set_StatusDescription_2(String_t* value)
	{
		___StatusDescription_2 = value;
		Il2CppCodeGenWriteBarrier((&___StatusDescription_2), value);
	}

	inline static int32_t get_offset_of_Headers_3() { return static_cast<int32_t>(offsetof(WebConnectionData_t3835660455, ___Headers_3)); }
	inline WebHeaderCollection_t1942268960 * get_Headers_3() const { return ___Headers_3; }
	inline WebHeaderCollection_t1942268960 ** get_address_of_Headers_3() { return &___Headers_3; }
	inline void set_Headers_3(WebHeaderCollection_t1942268960 * value)
	{
		___Headers_3 = value;
		Il2CppCodeGenWriteBarrier((&___Headers_3), value);
	}

	inline static int32_t get_offset_of_Version_4() { return static_cast<int32_t>(offsetof(WebConnectionData_t3835660455, ___Version_4)); }
	inline Version_t3456873960 * get_Version_4() const { return ___Version_4; }
	inline Version_t3456873960 ** get_address_of_Version_4() { return &___Version_4; }
	inline void set_Version_4(Version_t3456873960 * value)
	{
		___Version_4 = value;
		Il2CppCodeGenWriteBarrier((&___Version_4), value);
	}

	inline static int32_t get_offset_of_ProxyVersion_5() { return static_cast<int32_t>(offsetof(WebConnectionData_t3835660455, ___ProxyVersion_5)); }
	inline Version_t3456873960 * get_ProxyVersion_5() const { return ___ProxyVersion_5; }
	inline Version_t3456873960 ** get_address_of_ProxyVersion_5() { return &___ProxyVersion_5; }
	inline void set_ProxyVersion_5(Version_t3456873960 * value)
	{
		___ProxyVersion_5 = value;
		Il2CppCodeGenWriteBarrier((&___ProxyVersion_5), value);
	}

	inline static int32_t get_offset_of_stream_6() { return static_cast<int32_t>(offsetof(WebConnectionData_t3835660455, ___stream_6)); }
	inline Stream_t1273022909 * get_stream_6() const { return ___stream_6; }
	inline Stream_t1273022909 ** get_address_of_stream_6() { return &___stream_6; }
	inline void set_stream_6(Stream_t1273022909 * value)
	{
		___stream_6 = value;
		Il2CppCodeGenWriteBarrier((&___stream_6), value);
	}

	inline static int32_t get_offset_of_Challenge_7() { return static_cast<int32_t>(offsetof(WebConnectionData_t3835660455, ___Challenge_7)); }
	inline StringU5BU5D_t1281789340* get_Challenge_7() const { return ___Challenge_7; }
	inline StringU5BU5D_t1281789340** get_address_of_Challenge_7() { return &___Challenge_7; }
	inline void set_Challenge_7(StringU5BU5D_t1281789340* value)
	{
		___Challenge_7 = value;
		Il2CppCodeGenWriteBarrier((&___Challenge_7), value);
	}

	inline static int32_t get_offset_of__readState_8() { return static_cast<int32_t>(offsetof(WebConnectionData_t3835660455, ____readState_8)); }
	inline int32_t get__readState_8() const { return ____readState_8; }
	inline int32_t* get_address_of__readState_8() { return &____readState_8; }
	inline void set__readState_8(int32_t value)
	{
		____readState_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WEBCONNECTIONDATA_T3835660455_H
#ifndef LINUXNETWORKINTERFACE_T4095034716_H
#define LINUXNETWORKINTERFACE_T4095034716_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.LinuxNetworkInterface
struct  LinuxNetworkInterface_t4095034716  : public UnixNetworkInterface_t2401762829
{
public:
	// System.String System.Net.NetworkInformation.LinuxNetworkInterface::iface_path
	String_t* ___iface_path_5;
	// System.String System.Net.NetworkInformation.LinuxNetworkInterface::iface_operstate_path
	String_t* ___iface_operstate_path_6;
	// System.String System.Net.NetworkInformation.LinuxNetworkInterface::iface_flags_path
	String_t* ___iface_flags_path_7;

public:
	inline static int32_t get_offset_of_iface_path_5() { return static_cast<int32_t>(offsetof(LinuxNetworkInterface_t4095034716, ___iface_path_5)); }
	inline String_t* get_iface_path_5() const { return ___iface_path_5; }
	inline String_t** get_address_of_iface_path_5() { return &___iface_path_5; }
	inline void set_iface_path_5(String_t* value)
	{
		___iface_path_5 = value;
		Il2CppCodeGenWriteBarrier((&___iface_path_5), value);
	}

	inline static int32_t get_offset_of_iface_operstate_path_6() { return static_cast<int32_t>(offsetof(LinuxNetworkInterface_t4095034716, ___iface_operstate_path_6)); }
	inline String_t* get_iface_operstate_path_6() const { return ___iface_operstate_path_6; }
	inline String_t** get_address_of_iface_operstate_path_6() { return &___iface_operstate_path_6; }
	inline void set_iface_operstate_path_6(String_t* value)
	{
		___iface_operstate_path_6 = value;
		Il2CppCodeGenWriteBarrier((&___iface_operstate_path_6), value);
	}

	inline static int32_t get_offset_of_iface_flags_path_7() { return static_cast<int32_t>(offsetof(LinuxNetworkInterface_t4095034716, ___iface_flags_path_7)); }
	inline String_t* get_iface_flags_path_7() const { return ___iface_flags_path_7; }
	inline String_t** get_address_of_iface_flags_path_7() { return &___iface_flags_path_7; }
	inline void set_iface_flags_path_7(String_t* value)
	{
		___iface_flags_path_7 = value;
		Il2CppCodeGenWriteBarrier((&___iface_flags_path_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LINUXNETWORKINTERFACE_T4095034716_H
#ifndef MACOSNETWORKINTERFACE_T3969281182_H
#define MACOSNETWORKINTERFACE_T3969281182_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.MacOsNetworkInterface
struct  MacOsNetworkInterface_t3969281182  : public UnixNetworkInterface_t2401762829
{
public:
	// System.UInt32 System.Net.NetworkInformation.MacOsNetworkInterface::_ifa_flags
	uint32_t ____ifa_flags_5;

public:
	inline static int32_t get_offset_of__ifa_flags_5() { return static_cast<int32_t>(offsetof(MacOsNetworkInterface_t3969281182, ____ifa_flags_5)); }
	inline uint32_t get__ifa_flags_5() const { return ____ifa_flags_5; }
	inline uint32_t* get_address_of__ifa_flags_5() { return &____ifa_flags_5; }
	inline void set__ifa_flags_5(uint32_t value)
	{
		____ifa_flags_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MACOSNETWORKINTERFACE_T3969281182_H
#ifndef NETWORKINFORMATIONEXCEPTION_T2303982063_H
#define NETWORKINFORMATIONEXCEPTION_T2303982063_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.NetworkInformationException
struct  NetworkInformationException_t2303982063  : public Win32Exception_t3234146298
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NETWORKINFORMATIONEXCEPTION_T2303982063_H
#ifndef WIN32IPINTERFACEPROPERTIES2_T4152818631_H
#define WIN32IPINTERFACEPROPERTIES2_T4152818631_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.Win32IPInterfaceProperties2
struct  Win32IPInterfaceProperties2_t4152818631  : public IPInterfaceProperties_t3964383369
{
public:
	// System.Net.NetworkInformation.Win32_IP_ADAPTER_ADDRESSES System.Net.NetworkInformation.Win32IPInterfaceProperties2::addr
	Win32_IP_ADAPTER_ADDRESSES_t3463526328  ___addr_0;
	// System.Net.NetworkInformation.Win32_MIB_IFROW System.Net.NetworkInformation.Win32IPInterfaceProperties2::mib4
	Win32_MIB_IFROW_t851471770  ___mib4_1;
	// System.Net.NetworkInformation.Win32_MIB_IFROW System.Net.NetworkInformation.Win32IPInterfaceProperties2::mib6
	Win32_MIB_IFROW_t851471770  ___mib6_2;

public:
	inline static int32_t get_offset_of_addr_0() { return static_cast<int32_t>(offsetof(Win32IPInterfaceProperties2_t4152818631, ___addr_0)); }
	inline Win32_IP_ADAPTER_ADDRESSES_t3463526328  get_addr_0() const { return ___addr_0; }
	inline Win32_IP_ADAPTER_ADDRESSES_t3463526328 * get_address_of_addr_0() { return &___addr_0; }
	inline void set_addr_0(Win32_IP_ADAPTER_ADDRESSES_t3463526328  value)
	{
		___addr_0 = value;
	}

	inline static int32_t get_offset_of_mib4_1() { return static_cast<int32_t>(offsetof(Win32IPInterfaceProperties2_t4152818631, ___mib4_1)); }
	inline Win32_MIB_IFROW_t851471770  get_mib4_1() const { return ___mib4_1; }
	inline Win32_MIB_IFROW_t851471770 * get_address_of_mib4_1() { return &___mib4_1; }
	inline void set_mib4_1(Win32_MIB_IFROW_t851471770  value)
	{
		___mib4_1 = value;
	}

	inline static int32_t get_offset_of_mib6_2() { return static_cast<int32_t>(offsetof(Win32IPInterfaceProperties2_t4152818631, ___mib6_2)); }
	inline Win32_MIB_IFROW_t851471770  get_mib6_2() const { return ___mib6_2; }
	inline Win32_MIB_IFROW_t851471770 * get_address_of_mib6_2() { return &___mib6_2; }
	inline void set_mib6_2(Win32_MIB_IFROW_t851471770  value)
	{
		___mib6_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WIN32IPINTERFACEPROPERTIES2_T4152818631_H
#ifndef WIN32IPV4INTERFACESTATISTICS_T3096671123_H
#define WIN32IPV4INTERFACESTATISTICS_T3096671123_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.Win32IPv4InterfaceStatistics
struct  Win32IPv4InterfaceStatistics_t3096671123  : public IPv4InterfaceStatistics_t3249312820
{
public:
	// System.Net.NetworkInformation.Win32_MIB_IFROW System.Net.NetworkInformation.Win32IPv4InterfaceStatistics::info
	Win32_MIB_IFROW_t851471770  ___info_0;

public:
	inline static int32_t get_offset_of_info_0() { return static_cast<int32_t>(offsetof(Win32IPv4InterfaceStatistics_t3096671123, ___info_0)); }
	inline Win32_MIB_IFROW_t851471770  get_info_0() const { return ___info_0; }
	inline Win32_MIB_IFROW_t851471770 * get_address_of_info_0() { return &___info_0; }
	inline void set_info_0(Win32_MIB_IFROW_t851471770  value)
	{
		___info_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WIN32IPV4INTERFACESTATISTICS_T3096671123_H
#ifndef WIN32NETWORKINTERFACE_T3922465985_H
#define WIN32NETWORKINTERFACE_T3922465985_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.Win32NetworkInterface
struct  Win32NetworkInterface_t3922465985  : public RuntimeObject
{
public:

public:
};

struct Win32NetworkInterface_t3922465985_StaticFields
{
public:
	// System.Net.NetworkInformation.Win32_FIXED_INFO System.Net.NetworkInformation.Win32NetworkInterface::fixedInfo
	Win32_FIXED_INFO_t1299345856  ___fixedInfo_0;
	// System.Boolean System.Net.NetworkInformation.Win32NetworkInterface::initialized
	bool ___initialized_1;

public:
	inline static int32_t get_offset_of_fixedInfo_0() { return static_cast<int32_t>(offsetof(Win32NetworkInterface_t3922465985_StaticFields, ___fixedInfo_0)); }
	inline Win32_FIXED_INFO_t1299345856  get_fixedInfo_0() const { return ___fixedInfo_0; }
	inline Win32_FIXED_INFO_t1299345856 * get_address_of_fixedInfo_0() { return &___fixedInfo_0; }
	inline void set_fixedInfo_0(Win32_FIXED_INFO_t1299345856  value)
	{
		___fixedInfo_0 = value;
	}

	inline static int32_t get_offset_of_initialized_1() { return static_cast<int32_t>(offsetof(Win32NetworkInterface_t3922465985_StaticFields, ___initialized_1)); }
	inline bool get_initialized_1() const { return ___initialized_1; }
	inline bool* get_address_of_initialized_1() { return &___initialized_1; }
	inline void set_initialized_1(bool value)
	{
		___initialized_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WIN32NETWORKINTERFACE_T3922465985_H
#ifndef WIN32NETWORKINTERFACE2_T2303857857_H
#define WIN32NETWORKINTERFACE2_T2303857857_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkInformation.Win32NetworkInterface2
struct  Win32NetworkInterface2_t2303857857  : public NetworkInterface_t271883373
{
public:
	// System.Net.NetworkInformation.Win32_IP_ADAPTER_ADDRESSES System.Net.NetworkInformation.Win32NetworkInterface2::addr
	Win32_IP_ADAPTER_ADDRESSES_t3463526328  ___addr_0;
	// System.Net.NetworkInformation.Win32_MIB_IFROW System.Net.NetworkInformation.Win32NetworkInterface2::mib4
	Win32_MIB_IFROW_t851471770  ___mib4_1;
	// System.Net.NetworkInformation.Win32_MIB_IFROW System.Net.NetworkInformation.Win32NetworkInterface2::mib6
	Win32_MIB_IFROW_t851471770  ___mib6_2;
	// System.Net.NetworkInformation.Win32IPv4InterfaceStatistics System.Net.NetworkInformation.Win32NetworkInterface2::ip4stats
	Win32IPv4InterfaceStatistics_t3096671123 * ___ip4stats_3;
	// System.Net.NetworkInformation.IPInterfaceProperties System.Net.NetworkInformation.Win32NetworkInterface2::ip_if_props
	IPInterfaceProperties_t3964383369 * ___ip_if_props_4;

public:
	inline static int32_t get_offset_of_addr_0() { return static_cast<int32_t>(offsetof(Win32NetworkInterface2_t2303857857, ___addr_0)); }
	inline Win32_IP_ADAPTER_ADDRESSES_t3463526328  get_addr_0() const { return ___addr_0; }
	inline Win32_IP_ADAPTER_ADDRESSES_t3463526328 * get_address_of_addr_0() { return &___addr_0; }
	inline void set_addr_0(Win32_IP_ADAPTER_ADDRESSES_t3463526328  value)
	{
		___addr_0 = value;
	}

	inline static int32_t get_offset_of_mib4_1() { return static_cast<int32_t>(offsetof(Win32NetworkInterface2_t2303857857, ___mib4_1)); }
	inline Win32_MIB_IFROW_t851471770  get_mib4_1() const { return ___mib4_1; }
	inline Win32_MIB_IFROW_t851471770 * get_address_of_mib4_1() { return &___mib4_1; }
	inline void set_mib4_1(Win32_MIB_IFROW_t851471770  value)
	{
		___mib4_1 = value;
	}

	inline static int32_t get_offset_of_mib6_2() { return static_cast<int32_t>(offsetof(Win32NetworkInterface2_t2303857857, ___mib6_2)); }
	inline Win32_MIB_IFROW_t851471770  get_mib6_2() const { return ___mib6_2; }
	inline Win32_MIB_IFROW_t851471770 * get_address_of_mib6_2() { return &___mib6_2; }
	inline void set_mib6_2(Win32_MIB_IFROW_t851471770  value)
	{
		___mib6_2 = value;
	}

	inline static int32_t get_offset_of_ip4stats_3() { return static_cast<int32_t>(offsetof(Win32NetworkInterface2_t2303857857, ___ip4stats_3)); }
	inline Win32IPv4InterfaceStatistics_t3096671123 * get_ip4stats_3() const { return ___ip4stats_3; }
	inline Win32IPv4InterfaceStatistics_t3096671123 ** get_address_of_ip4stats_3() { return &___ip4stats_3; }
	inline void set_ip4stats_3(Win32IPv4InterfaceStatistics_t3096671123 * value)
	{
		___ip4stats_3 = value;
		Il2CppCodeGenWriteBarrier((&___ip4stats_3), value);
	}

	inline static int32_t get_offset_of_ip_if_props_4() { return static_cast<int32_t>(offsetof(Win32NetworkInterface2_t2303857857, ___ip_if_props_4)); }
	inline IPInterfaceProperties_t3964383369 * get_ip_if_props_4() const { return ___ip_if_props_4; }
	inline IPInterfaceProperties_t3964383369 ** get_address_of_ip_if_props_4() { return &___ip_if_props_4; }
	inline void set_ip_if_props_4(IPInterfaceProperties_t3964383369 * value)
	{
		___ip_if_props_4 = value;
		Il2CppCodeGenWriteBarrier((&___ip_if_props_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WIN32NETWORKINTERFACE2_T2303857857_H
#ifndef LOCALCERTSELECTIONCALLBACK_T1988113036_H
#define LOCALCERTSELECTIONCALLBACK_T1988113036_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Security.LocalCertSelectionCallback
struct  LocalCertSelectionCallback_t1988113036  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LOCALCERTSELECTIONCALLBACK_T1988113036_H
#ifndef REMOTECERTIFICATEVALIDATIONCALLBACK_T3014364904_H
#define REMOTECERTIFICATEVALIDATIONCALLBACK_T3014364904_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Security.RemoteCertificateValidationCallback
struct  RemoteCertificateValidationCallback_t3014364904  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REMOTECERTIFICATEVALIDATIONCALLBACK_T3014364904_H
#ifndef SIMPLEASYNCCALLBACK_T2966023072_H
#define SIMPLEASYNCCALLBACK_T2966023072_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.SimpleAsyncCallback
struct  SimpleAsyncCallback_t2966023072  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SIMPLEASYNCCALLBACK_T2966023072_H
#ifndef SAFESOCKETHANDLE_T610293888_H
#define SAFESOCKETHANDLE_T610293888_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Sockets.SafeSocketHandle
struct  SafeSocketHandle_t610293888  : public SafeHandleZeroOrMinusOneIsInvalid_t1182193648
{
public:
	// System.Collections.Generic.List`1<System.Threading.Thread> System.Net.Sockets.SafeSocketHandle::blocking_threads
	List_1_t3772910811 * ___blocking_threads_6;
	// System.Collections.Generic.Dictionary`2<System.Threading.Thread,System.Diagnostics.StackTrace> System.Net.Sockets.SafeSocketHandle::threads_stacktraces
	Dictionary_2_t922677896 * ___threads_stacktraces_7;
	// System.Boolean System.Net.Sockets.SafeSocketHandle::in_cleanup
	bool ___in_cleanup_8;

public:
	inline static int32_t get_offset_of_blocking_threads_6() { return static_cast<int32_t>(offsetof(SafeSocketHandle_t610293888, ___blocking_threads_6)); }
	inline List_1_t3772910811 * get_blocking_threads_6() const { return ___blocking_threads_6; }
	inline List_1_t3772910811 ** get_address_of_blocking_threads_6() { return &___blocking_threads_6; }
	inline void set_blocking_threads_6(List_1_t3772910811 * value)
	{
		___blocking_threads_6 = value;
		Il2CppCodeGenWriteBarrier((&___blocking_threads_6), value);
	}

	inline static int32_t get_offset_of_threads_stacktraces_7() { return static_cast<int32_t>(offsetof(SafeSocketHandle_t610293888, ___threads_stacktraces_7)); }
	inline Dictionary_2_t922677896 * get_threads_stacktraces_7() const { return ___threads_stacktraces_7; }
	inline Dictionary_2_t922677896 ** get_address_of_threads_stacktraces_7() { return &___threads_stacktraces_7; }
	inline void set_threads_stacktraces_7(Dictionary_2_t922677896 * value)
	{
		___threads_stacktraces_7 = value;
		Il2CppCodeGenWriteBarrier((&___threads_stacktraces_7), value);
	}

	inline static int32_t get_offset_of_in_cleanup_8() { return static_cast<int32_t>(offsetof(SafeSocketHandle_t610293888, ___in_cleanup_8)); }
	inline bool get_in_cleanup_8() const { return ___in_cleanup_8; }
	inline bool* get_address_of_in_cleanup_8() { return &___in_cleanup_8; }
	inline void set_in_cleanup_8(bool value)
	{
		___in_cleanup_8 = value;
	}
};

struct SafeSocketHandle_t610293888_StaticFields
{
public:
	// System.Boolean System.Net.Sockets.SafeSocketHandle::THROW_ON_ABORT_RETRIES
	bool ___THROW_ON_ABORT_RETRIES_9;

public:
	inline static int32_t get_offset_of_THROW_ON_ABORT_RETRIES_9() { return static_cast<int32_t>(offsetof(SafeSocketHandle_t610293888_StaticFields, ___THROW_ON_ABORT_RETRIES_9)); }
	inline bool get_THROW_ON_ABORT_RETRIES_9() const { return ___THROW_ON_ABORT_RETRIES_9; }
	inline bool* get_address_of_THROW_ON_ABORT_RETRIES_9() { return &___THROW_ON_ABORT_RETRIES_9; }
	inline void set_THROW_ON_ABORT_RETRIES_9(bool value)
	{
		___THROW_ON_ABORT_RETRIES_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SAFESOCKETHANDLE_T610293888_H
#ifndef SOCKETEXCEPTION_T3852068672_H
#define SOCKETEXCEPTION_T3852068672_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Sockets.SocketException
struct  SocketException_t3852068672  : public Win32Exception_t3234146298
{
public:
	// System.Net.EndPoint System.Net.Sockets.SocketException::m_EndPoint
	EndPoint_t982345378 * ___m_EndPoint_20;

public:
	inline static int32_t get_offset_of_m_EndPoint_20() { return static_cast<int32_t>(offsetof(SocketException_t3852068672, ___m_EndPoint_20)); }
	inline EndPoint_t982345378 * get_m_EndPoint_20() const { return ___m_EndPoint_20; }
	inline EndPoint_t982345378 ** get_address_of_m_EndPoint_20() { return &___m_EndPoint_20; }
	inline void set_m_EndPoint_20(EndPoint_t982345378 * value)
	{
		___m_EndPoint_20 = value;
		Il2CppCodeGenWriteBarrier((&___m_EndPoint_20), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SOCKETEXCEPTION_T3852068672_H





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2700 = { sizeof (NtlmAuthState_t1717421993)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2700[4] = 
{
	NtlmAuthState_t1717421993::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2701 = { sizeof (AuthorizationState_t3141350760)+ sizeof (RuntimeObject), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2701[4] = 
{
	AuthorizationState_t3141350760::get_offset_of_request_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	AuthorizationState_t3141350760::get_offset_of_isProxy_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	AuthorizationState_t3141350760::get_offset_of_isCompleted_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	AuthorizationState_t3141350760::get_offset_of_ntlm_auth_state_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2702 = { sizeof (U3CU3Ec__DisplayClass241_0_t955934074), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2702[2] = 
{
	U3CU3Ec__DisplayClass241_0_t955934074::get_offset_of_aread_0(),
	U3CU3Ec__DisplayClass241_0_t955934074::get_offset_of_U3CU3E4__this_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2703 = { sizeof (HttpWebResponse_t3286585418), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2703[12] = 
{
	HttpWebResponse_t3286585418::get_offset_of_uri_1(),
	HttpWebResponse_t3286585418::get_offset_of_webHeaders_2(),
	HttpWebResponse_t3286585418::get_offset_of_cookieCollection_3(),
	HttpWebResponse_t3286585418::get_offset_of_method_4(),
	HttpWebResponse_t3286585418::get_offset_of_version_5(),
	HttpWebResponse_t3286585418::get_offset_of_statusCode_6(),
	HttpWebResponse_t3286585418::get_offset_of_statusDescription_7(),
	HttpWebResponse_t3286585418::get_offset_of_contentLength_8(),
	HttpWebResponse_t3286585418::get_offset_of_contentType_9(),
	HttpWebResponse_t3286585418::get_offset_of_cookie_container_10(),
	HttpWebResponse_t3286585418::get_offset_of_disposed_11(),
	HttpWebResponse_t3286585418::get_offset_of_stream_12(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2704 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2705 = { sizeof (IPv6AddressFormatter_t878312391)+ sizeof (RuntimeObject), sizeof(IPv6AddressFormatter_t878312391_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable2705[2] = 
{
	IPv6AddressFormatter_t878312391::get_offset_of_address_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	IPv6AddressFormatter_t878312391::get_offset_of_scopeId_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2706 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2707 = { sizeof (MonoChunkStream_t2034754733), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2707[10] = 
{
	MonoChunkStream_t2034754733::get_offset_of_headers_0(),
	MonoChunkStream_t2034754733::get_offset_of_chunkSize_1(),
	MonoChunkStream_t2034754733::get_offset_of_chunkRead_2(),
	MonoChunkStream_t2034754733::get_offset_of_totalWritten_3(),
	MonoChunkStream_t2034754733::get_offset_of_state_4(),
	MonoChunkStream_t2034754733::get_offset_of_saved_5(),
	MonoChunkStream_t2034754733::get_offset_of_sawCR_6(),
	MonoChunkStream_t2034754733::get_offset_of_gotit_7(),
	MonoChunkStream_t2034754733::get_offset_of_trailerState_8(),
	MonoChunkStream_t2034754733::get_offset_of_chunks_9(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2708 = { sizeof (State_t1512905777)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2708[6] = 
{
	State_t1512905777::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2709 = { sizeof (Chunk_t275858543), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2709[2] = 
{
	Chunk_t275858543::get_offset_of_Bytes_0(),
	Chunk_t275858543::get_offset_of_Offset_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2710 = { sizeof (NetConfig_t2828594564), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2710[1] = 
{
	NetConfig_t2828594564::get_offset_of_MaxResponseHeadersLength_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2711 = { sizeof (ServicePoint_t2786966844), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2711[21] = 
{
	ServicePoint_t2786966844::get_offset_of_uri_0(),
	ServicePoint_t2786966844::get_offset_of_connectionLimit_1(),
	ServicePoint_t2786966844::get_offset_of_maxIdleTime_2(),
	ServicePoint_t2786966844::get_offset_of_currentConnections_3(),
	ServicePoint_t2786966844::get_offset_of_idleSince_4(),
	ServicePoint_t2786966844::get_offset_of_lastDnsResolve_5(),
	ServicePoint_t2786966844::get_offset_of_protocolVersion_6(),
	ServicePoint_t2786966844::get_offset_of_host_7(),
	ServicePoint_t2786966844::get_offset_of_usesProxy_8(),
	ServicePoint_t2786966844::get_offset_of_groups_9(),
	ServicePoint_t2786966844::get_offset_of_sendContinue_10(),
	ServicePoint_t2786966844::get_offset_of_useConnect_11(),
	ServicePoint_t2786966844::get_offset_of_hostE_12(),
	ServicePoint_t2786966844::get_offset_of_useNagle_13(),
	ServicePoint_t2786966844::get_offset_of_endPointCallback_14(),
	ServicePoint_t2786966844::get_offset_of_tcp_keepalive_15(),
	ServicePoint_t2786966844::get_offset_of_tcp_keepalive_time_16(),
	ServicePoint_t2786966844::get_offset_of_tcp_keepalive_interval_17(),
	ServicePoint_t2786966844::get_offset_of_idleTimer_18(),
	ServicePoint_t2786966844::get_offset_of_m_ServerCertificateOrBytes_19(),
	ServicePoint_t2786966844::get_offset_of_m_ClientCertificateOrBytes_20(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2712 = { sizeof (ServicePointManager_t170559685), -1, sizeof(ServicePointManager_t170559685_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2712[15] = 
{
	ServicePointManager_t170559685_StaticFields::get_offset_of_servicePoints_0(),
	ServicePointManager_t170559685_StaticFields::get_offset_of_policy_1(),
	ServicePointManager_t170559685_StaticFields::get_offset_of_defaultConnectionLimit_2(),
	ServicePointManager_t170559685_StaticFields::get_offset_of_maxServicePointIdleTime_3(),
	ServicePointManager_t170559685_StaticFields::get_offset_of_maxServicePoints_4(),
	ServicePointManager_t170559685_StaticFields::get_offset_of_dnsRefreshTimeout_5(),
	ServicePointManager_t170559685_StaticFields::get_offset_of__checkCRL_6(),
	ServicePointManager_t170559685_StaticFields::get_offset_of__securityProtocol_7(),
	ServicePointManager_t170559685_StaticFields::get_offset_of_expectContinue_8(),
	ServicePointManager_t170559685_StaticFields::get_offset_of_useNagle_9(),
	ServicePointManager_t170559685_StaticFields::get_offset_of_server_cert_cb_10(),
	ServicePointManager_t170559685_StaticFields::get_offset_of_tcp_keepalive_11(),
	ServicePointManager_t170559685_StaticFields::get_offset_of_tcp_keepalive_time_12(),
	ServicePointManager_t170559685_StaticFields::get_offset_of_tcp_keepalive_interval_13(),
	ServicePointManager_t170559685_StaticFields::get_offset_of_manager_14(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2713 = { sizeof (SPKey_t3654231119), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2713[3] = 
{
	SPKey_t3654231119::get_offset_of_uri_0(),
	SPKey_t3654231119::get_offset_of_proxy_1(),
	SPKey_t3654231119::get_offset_of_use_connect_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2714 = { sizeof (SimpleAsyncCallback_t2966023072), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2715 = { sizeof (SimpleAsyncResult_t3946017618), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2715[9] = 
{
	SimpleAsyncResult_t3946017618::get_offset_of_handle_0(),
	SimpleAsyncResult_t3946017618::get_offset_of_synch_1(),
	SimpleAsyncResult_t3946017618::get_offset_of_isCompleted_2(),
	SimpleAsyncResult_t3946017618::get_offset_of_cb_3(),
	SimpleAsyncResult_t3946017618::get_offset_of_state_4(),
	SimpleAsyncResult_t3946017618::get_offset_of_callbackDone_5(),
	SimpleAsyncResult_t3946017618::get_offset_of_exc_6(),
	SimpleAsyncResult_t3946017618::get_offset_of_locker_7(),
	SimpleAsyncResult_t3946017618::get_offset_of_user_read_synch_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2716 = { sizeof (U3CU3Ec__DisplayClass9_0_t2879543744), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2716[2] = 
{
	U3CU3Ec__DisplayClass9_0_t2879543744::get_offset_of_cb_0(),
	U3CU3Ec__DisplayClass9_0_t2879543744::get_offset_of_U3CU3E4__this_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2717 = { sizeof (U3CU3Ec__DisplayClass11_0_t377749183), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2717[3] = 
{
	U3CU3Ec__DisplayClass11_0_t377749183::get_offset_of_func_0(),
	U3CU3Ec__DisplayClass11_0_t377749183::get_offset_of_locker_1(),
	U3CU3Ec__DisplayClass11_0_t377749183::get_offset_of_callback_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2718 = { sizeof (WebAsyncResult_t3421962937), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2718[10] = 
{
	WebAsyncResult_t3421962937::get_offset_of_nbytes_9(),
	WebAsyncResult_t3421962937::get_offset_of_innerAsyncResult_10(),
	WebAsyncResult_t3421962937::get_offset_of_response_11(),
	WebAsyncResult_t3421962937::get_offset_of_writeStream_12(),
	WebAsyncResult_t3421962937::get_offset_of_buffer_13(),
	WebAsyncResult_t3421962937::get_offset_of_offset_14(),
	WebAsyncResult_t3421962937::get_offset_of_size_15(),
	WebAsyncResult_t3421962937::get_offset_of_EndCalled_16(),
	WebAsyncResult_t3421962937::get_offset_of_AsyncWriteAll_17(),
	WebAsyncResult_t3421962937::get_offset_of_AsyncObject_18(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2719 = { sizeof (ReadState_t245281014)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2719[6] = 
{
	ReadState_t245281014::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2720 = { sizeof (WebConnection_t3982808322), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2720[24] = 
{
	WebConnection_t3982808322::get_offset_of_sPoint_0(),
	WebConnection_t3982808322::get_offset_of_nstream_1(),
	WebConnection_t3982808322::get_offset_of_socket_2(),
	WebConnection_t3982808322::get_offset_of_socketLock_3(),
	WebConnection_t3982808322::get_offset_of_state_4(),
	WebConnection_t3982808322::get_offset_of_status_5(),
	WebConnection_t3982808322::get_offset_of_keepAlive_6(),
	WebConnection_t3982808322::get_offset_of_buffer_7(),
	WebConnection_t3982808322::get_offset_of_abortHandler_8(),
	WebConnection_t3982808322::get_offset_of_abortHelper_9(),
	WebConnection_t3982808322::get_offset_of_Data_10(),
	WebConnection_t3982808322::get_offset_of_chunkedRead_11(),
	WebConnection_t3982808322::get_offset_of_chunkStream_12(),
	WebConnection_t3982808322::get_offset_of_queue_13(),
	WebConnection_t3982808322::get_offset_of_reused_14(),
	WebConnection_t3982808322::get_offset_of_position_15(),
	WebConnection_t3982808322::get_offset_of_priority_request_16(),
	WebConnection_t3982808322::get_offset_of_ntlm_credentials_17(),
	WebConnection_t3982808322::get_offset_of_ntlm_authenticated_18(),
	WebConnection_t3982808322::get_offset_of_unsafe_sharing_19(),
	WebConnection_t3982808322::get_offset_of_connect_ntlm_auth_state_20(),
	WebConnection_t3982808322::get_offset_of_connect_request_21(),
	WebConnection_t3982808322::get_offset_of_connect_exception_22(),
	WebConnection_t3982808322::get_offset_of_tlsStream_23(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2721 = { sizeof (NtlmAuthState_t2130360192)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2721[4] = 
{
	NtlmAuthState_t2130360192::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2722 = { sizeof (AbortHelper_t1490877826), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2722[1] = 
{
	AbortHelper_t1490877826::get_offset_of_Connection_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2723 = { sizeof (WebConnectionData_t3835660455), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2723[9] = 
{
	WebConnectionData_t3835660455::get_offset_of__request_0(),
	WebConnectionData_t3835660455::get_offset_of_StatusCode_1(),
	WebConnectionData_t3835660455::get_offset_of_StatusDescription_2(),
	WebConnectionData_t3835660455::get_offset_of_Headers_3(),
	WebConnectionData_t3835660455::get_offset_of_Version_4(),
	WebConnectionData_t3835660455::get_offset_of_ProxyVersion_5(),
	WebConnectionData_t3835660455::get_offset_of_stream_6(),
	WebConnectionData_t3835660455::get_offset_of_Challenge_7(),
	WebConnectionData_t3835660455::get_offset_of__readState_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2724 = { sizeof (WebConnectionGroup_t1712379988), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2724[6] = 
{
	WebConnectionGroup_t1712379988::get_offset_of_sPoint_0(),
	WebConnectionGroup_t1712379988::get_offset_of_name_1(),
	WebConnectionGroup_t1712379988::get_offset_of_connections_2(),
	WebConnectionGroup_t1712379988::get_offset_of_queue_3(),
	WebConnectionGroup_t1712379988::get_offset_of_closing_4(),
	WebConnectionGroup_t1712379988::get_offset_of_ConnectionClosed_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2725 = { sizeof (ConnectionState_t1651576813), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2725[4] = 
{
	ConnectionState_t1651576813::get_offset_of_U3CConnectionU3Ek__BackingField_0(),
	ConnectionState_t1651576813::get_offset_of_U3CGroupU3Ek__BackingField_1(),
	ConnectionState_t1651576813::get_offset_of_busy_2(),
	ConnectionState_t1651576813::get_offset_of_idleSince_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2726 = { sizeof (WebConnectionStream_t2170064850), -1, sizeof(WebConnectionStream_t2170064850_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2726[31] = 
{
	WebConnectionStream_t2170064850_StaticFields::get_offset_of_crlf_4(),
	WebConnectionStream_t2170064850::get_offset_of_isRead_5(),
	WebConnectionStream_t2170064850::get_offset_of_cnc_6(),
	WebConnectionStream_t2170064850::get_offset_of_request_7(),
	WebConnectionStream_t2170064850::get_offset_of_readBuffer_8(),
	WebConnectionStream_t2170064850::get_offset_of_readBufferOffset_9(),
	WebConnectionStream_t2170064850::get_offset_of_readBufferSize_10(),
	WebConnectionStream_t2170064850::get_offset_of_stream_length_11(),
	WebConnectionStream_t2170064850::get_offset_of_contentLength_12(),
	WebConnectionStream_t2170064850::get_offset_of_totalRead_13(),
	WebConnectionStream_t2170064850::get_offset_of_totalWritten_14(),
	WebConnectionStream_t2170064850::get_offset_of_nextReadCalled_15(),
	WebConnectionStream_t2170064850::get_offset_of_pendingReads_16(),
	WebConnectionStream_t2170064850::get_offset_of_pendingWrites_17(),
	WebConnectionStream_t2170064850::get_offset_of_pending_18(),
	WebConnectionStream_t2170064850::get_offset_of_allowBuffering_19(),
	WebConnectionStream_t2170064850::get_offset_of_sendChunked_20(),
	WebConnectionStream_t2170064850::get_offset_of_writeBuffer_21(),
	WebConnectionStream_t2170064850::get_offset_of_requestWritten_22(),
	WebConnectionStream_t2170064850::get_offset_of_headers_23(),
	WebConnectionStream_t2170064850::get_offset_of_disposed_24(),
	WebConnectionStream_t2170064850::get_offset_of_headersSent_25(),
	WebConnectionStream_t2170064850::get_offset_of_locker_26(),
	WebConnectionStream_t2170064850::get_offset_of_initRead_27(),
	WebConnectionStream_t2170064850::get_offset_of_read_eof_28(),
	WebConnectionStream_t2170064850::get_offset_of_complete_request_written_29(),
	WebConnectionStream_t2170064850::get_offset_of_read_timeout_30(),
	WebConnectionStream_t2170064850::get_offset_of_write_timeout_31(),
	WebConnectionStream_t2170064850::get_offset_of_cb_wrapper_32(),
	WebConnectionStream_t2170064850::get_offset_of_IgnoreIOErrors_33(),
	WebConnectionStream_t2170064850::get_offset_of_U3CGetResponseOnCloseU3Ek__BackingField_34(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2727 = { sizeof (U3CU3Ec__DisplayClass75_0_t2717095993), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2727[2] = 
{
	U3CU3Ec__DisplayClass75_0_t2717095993::get_offset_of_U3CU3E4__this_0(),
	U3CU3Ec__DisplayClass75_0_t2717095993::get_offset_of_setInternalLength_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2728 = { sizeof (U3CU3Ec__DisplayClass76_0_t2716899385), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2728[2] = 
{
	U3CU3Ec__DisplayClass76_0_t2716899385::get_offset_of_U3CU3E4__this_0(),
	U3CU3Ec__DisplayClass76_0_t2716899385::get_offset_of_result_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2729 = { sizeof (U3CU3Ec__DisplayClass80_0_t2716768316), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2729[5] = 
{
	U3CU3Ec__DisplayClass80_0_t2716768316::get_offset_of_result_0(),
	U3CU3Ec__DisplayClass80_0_t2716768316::get_offset_of_U3CU3E4__this_1(),
	U3CU3Ec__DisplayClass80_0_t2716768316::get_offset_of_length_2(),
	U3CU3Ec__DisplayClass80_0_t2716768316::get_offset_of_bytes_3(),
	U3CU3Ec__DisplayClass80_0_t2716768316::get_offset_of_U3CU3E9__1_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2730 = { sizeof (SocketException_t3852068672), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2730[1] = 
{
	SocketException_t3852068672::get_offset_of_m_EndPoint_20(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2731 = { sizeof (AddressFamily_t2612549059)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2731[32] = 
{
	AddressFamily_t2612549059::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2732 = { sizeof (IOControlCode_t4252950740)+ sizeof (RuntimeObject), sizeof(int64_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2732[35] = 
{
	IOControlCode_t4252950740::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2733 = { sizeof (IPProtectionLevel_t4099140720)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2733[5] = 
{
	IPProtectionLevel_t4099140720::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2734 = { sizeof (LingerOption_t2688985448), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2734[2] = 
{
	LingerOption_t2688985448::get_offset_of_enabled_0(),
	LingerOption_t2688985448::get_offset_of_lingerTime_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2735 = { sizeof (MulticastOption_t3861143239), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2736 = { sizeof (NetworkStream_t4071955934), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2736[8] = 
{
	NetworkStream_t4071955934::get_offset_of_m_StreamSocket_4(),
	NetworkStream_t4071955934::get_offset_of_m_Readable_5(),
	NetworkStream_t4071955934::get_offset_of_m_Writeable_6(),
	NetworkStream_t4071955934::get_offset_of_m_OwnsSocket_7(),
	NetworkStream_t4071955934::get_offset_of_m_CloseTimeout_8(),
	NetworkStream_t4071955934::get_offset_of_m_CleanedUp_9(),
	NetworkStream_t4071955934::get_offset_of_m_CurrentReadTimeout_10(),
	NetworkStream_t4071955934::get_offset_of_m_CurrentWriteTimeout_11(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2737 = { sizeof (ProtocolType_t303635025)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2737[26] = 
{
	ProtocolType_t303635025::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2738 = { sizeof (SelectMode_t1123767949)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2738[4] = 
{
	SelectMode_t1123767949::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2739 = { sizeof (Socket_t1119025450), -1, sizeof(Socket_t1119025450_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2739[37] = 
{
	Socket_t1119025450_StaticFields::get_offset_of_s_InternalSyncObject_0(),
	Socket_t1119025450_StaticFields::get_offset_of_s_SupportsIPv4_1(),
	Socket_t1119025450_StaticFields::get_offset_of_s_SupportsIPv6_2(),
	Socket_t1119025450_StaticFields::get_offset_of_s_OSSupportsIPv6_3(),
	Socket_t1119025450_StaticFields::get_offset_of_s_Initialized_4(),
	Socket_t1119025450_StaticFields::get_offset_of_s_LoggingEnabled_5(),
	Socket_t1119025450::get_offset_of_is_closed_6(),
	Socket_t1119025450::get_offset_of_is_listening_7(),
	Socket_t1119025450::get_offset_of_useOverlappedIO_8(),
	Socket_t1119025450::get_offset_of_linger_timeout_9(),
	Socket_t1119025450::get_offset_of_addressFamily_10(),
	Socket_t1119025450::get_offset_of_socketType_11(),
	Socket_t1119025450::get_offset_of_protocolType_12(),
	Socket_t1119025450::get_offset_of_m_Handle_13(),
	Socket_t1119025450::get_offset_of_seed_endpoint_14(),
	Socket_t1119025450::get_offset_of_ReadSem_15(),
	Socket_t1119025450::get_offset_of_WriteSem_16(),
	Socket_t1119025450::get_offset_of_is_blocking_17(),
	Socket_t1119025450::get_offset_of_is_bound_18(),
	Socket_t1119025450::get_offset_of_is_connected_19(),
	Socket_t1119025450::get_offset_of_m_IntCleanedUp_20(),
	Socket_t1119025450::get_offset_of_connect_in_progress_21(),
	Socket_t1119025450_StaticFields::get_offset_of_AcceptAsyncCallback_22(),
	Socket_t1119025450_StaticFields::get_offset_of_BeginAcceptCallback_23(),
	Socket_t1119025450_StaticFields::get_offset_of_BeginAcceptReceiveCallback_24(),
	Socket_t1119025450_StaticFields::get_offset_of_ConnectAsyncCallback_25(),
	Socket_t1119025450_StaticFields::get_offset_of_BeginConnectCallback_26(),
	Socket_t1119025450_StaticFields::get_offset_of_DisconnectAsyncCallback_27(),
	Socket_t1119025450_StaticFields::get_offset_of_BeginDisconnectCallback_28(),
	Socket_t1119025450_StaticFields::get_offset_of_ReceiveAsyncCallback_29(),
	Socket_t1119025450_StaticFields::get_offset_of_BeginReceiveCallback_30(),
	Socket_t1119025450_StaticFields::get_offset_of_BeginReceiveGenericCallback_31(),
	Socket_t1119025450_StaticFields::get_offset_of_ReceiveFromAsyncCallback_32(),
	Socket_t1119025450_StaticFields::get_offset_of_BeginReceiveFromCallback_33(),
	Socket_t1119025450_StaticFields::get_offset_of_SendAsyncCallback_34(),
	Socket_t1119025450_StaticFields::get_offset_of_BeginSendGenericCallback_35(),
	Socket_t1119025450_StaticFields::get_offset_of_SendToAsyncCallback_36(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2740 = { sizeof (WSABUF_t1998059390)+ sizeof (RuntimeObject), sizeof(WSABUF_t1998059390 ), 0, 0 };
extern const int32_t g_FieldOffsetTable2740[2] = 
{
	WSABUF_t1998059390::get_offset_of_len_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	WSABUF_t1998059390::get_offset_of_buf_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2741 = { sizeof (U3CU3Ec_t240325972), -1, sizeof(U3CU3Ec_t240325972_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2741[2] = 
{
	U3CU3Ec_t240325972_StaticFields::get_offset_of_U3CU3E9_0(),
	U3CU3Ec_t240325972_StaticFields::get_offset_of_U3CU3E9__241_0_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2742 = { sizeof (U3CU3Ec__DisplayClass242_0_t616583391), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2742[1] = 
{
	U3CU3Ec__DisplayClass242_0_t616583391::get_offset_of_sent_so_far_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2743 = { sizeof (U3CU3Ec__DisplayClass298_0_t616190186), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2743[3] = 
{
	U3CU3Ec__DisplayClass298_0_t616190186::get_offset_of_U3CU3E4__this_0(),
	U3CU3Ec__DisplayClass298_0_t616190186::get_offset_of_job_1(),
	U3CU3Ec__DisplayClass298_0_t616190186::get_offset_of_handle_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2744 = { sizeof (SocketError_t3760144386)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2744[48] = 
{
	SocketError_t3760144386::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2745 = { sizeof (SocketFlags_t2969870452)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2745[11] = 
{
	SocketFlags_t2969870452::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2746 = { sizeof (SocketOptionLevel_t201167901)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2746[6] = 
{
	SocketOptionLevel_t201167901::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2747 = { sizeof (SocketOptionName_t403346465)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2747[47] = 
{
	SocketOptionName_t403346465::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2748 = { sizeof (SocketShutdown_t2687738148)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2748[4] = 
{
	SocketShutdown_t2687738148::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2749 = { sizeof (SocketType_t2175930299)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2749[7] = 
{
	SocketType_t2175930299::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2750 = { sizeof (SafeSocketHandle_t610293888), sizeof(void*), sizeof(SafeSocketHandle_t610293888_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2750[4] = 
{
	SafeSocketHandle_t610293888::get_offset_of_blocking_threads_6(),
	SafeSocketHandle_t610293888::get_offset_of_threads_stacktraces_7(),
	SafeSocketHandle_t610293888::get_offset_of_in_cleanup_8(),
	SafeSocketHandle_t610293888_StaticFields::get_offset_of_THROW_ON_ABORT_RETRIES_9(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2751 = { sizeof (SocketAsyncEventArgs_t4146203020), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2751[8] = 
{
	SocketAsyncEventArgs_t4146203020::get_offset_of_disposed_1(),
	SocketAsyncEventArgs_t4146203020::get_offset_of_in_progress_2(),
	SocketAsyncEventArgs_t4146203020::get_offset_of_remote_ep_3(),
	SocketAsyncEventArgs_t4146203020::get_offset_of_current_socket_4(),
	SocketAsyncEventArgs_t4146203020::get_offset_of_U3CAcceptSocketU3Ek__BackingField_5(),
	SocketAsyncEventArgs_t4146203020::get_offset_of_U3CBytesTransferredU3Ek__BackingField_6(),
	SocketAsyncEventArgs_t4146203020::get_offset_of_U3CSocketErrorU3Ek__BackingField_7(),
	SocketAsyncEventArgs_t4146203020::get_offset_of_Completed_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2752 = { sizeof (SocketAsyncResult_t3523156467), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2752[18] = 
{
	SocketAsyncResult_t3523156467::get_offset_of_socket_5(),
	SocketAsyncResult_t3523156467::get_offset_of_operation_6(),
	SocketAsyncResult_t3523156467::get_offset_of_DelayedException_7(),
	SocketAsyncResult_t3523156467::get_offset_of_EndPoint_8(),
	SocketAsyncResult_t3523156467::get_offset_of_Buffer_9(),
	SocketAsyncResult_t3523156467::get_offset_of_Offset_10(),
	SocketAsyncResult_t3523156467::get_offset_of_Size_11(),
	SocketAsyncResult_t3523156467::get_offset_of_SockFlags_12(),
	SocketAsyncResult_t3523156467::get_offset_of_AcceptSocket_13(),
	SocketAsyncResult_t3523156467::get_offset_of_Addresses_14(),
	SocketAsyncResult_t3523156467::get_offset_of_Port_15(),
	SocketAsyncResult_t3523156467::get_offset_of_Buffers_16(),
	SocketAsyncResult_t3523156467::get_offset_of_ReuseSocket_17(),
	SocketAsyncResult_t3523156467::get_offset_of_CurrentAddress_18(),
	SocketAsyncResult_t3523156467::get_offset_of_AcceptedSocket_19(),
	SocketAsyncResult_t3523156467::get_offset_of_Total_20(),
	SocketAsyncResult_t3523156467::get_offset_of_error_21(),
	SocketAsyncResult_t3523156467::get_offset_of_EndCalled_22(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2753 = { sizeof (U3CU3Ec_t3573335103), -1, sizeof(U3CU3Ec_t3573335103_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2753[2] = 
{
	U3CU3Ec_t3573335103_StaticFields::get_offset_of_U3CU3E9_0(),
	U3CU3Ec_t3573335103_StaticFields::get_offset_of_U3CU3E9__27_0_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2754 = { sizeof (SocketOperation_t2303010090)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2754[13] = 
{
	SocketOperation_t2303010090::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2755 = { sizeof (AuthenticatedStream_t3415418016), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2755[2] = 
{
	AuthenticatedStream_t3415418016::get_offset_of__InnerStream_4(),
	AuthenticatedStream_t3415418016::get_offset_of__LeaveStreamOpen_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2756 = { sizeof (AuthenticationLevel_t1236753641)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2756[4] = 
{
	AuthenticationLevel_t1236753641::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2757 = { sizeof (RemoteCertificateValidationCallback_t3014364904), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2758 = { sizeof (SslPolicyErrors_t2205227823)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2758[5] = 
{
	SslPolicyErrors_t2205227823::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2759 = { sizeof (LocalCertSelectionCallback_t1988113036), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2760 = { sizeof (SslStream_t2700741536), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2760[2] = 
{
	SslStream_t2700741536::get_offset_of_provider_6(),
	SslStream_t2700741536::get_offset_of_impl_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2761 = { sizeof (IPAddressCollection_t2315030214), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2761[1] = 
{
	IPAddressCollection_t2315030214::get_offset_of_addresses_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2762 = { sizeof (IPGlobalProperties_t3113415935), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2763 = { sizeof (IPInterfaceProperties_t3964383369), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2764 = { sizeof (IPv4InterfaceStatistics_t3249312820), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2765 = { sizeof (NetworkInformationException_t2303982063), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2766 = { sizeof (NetworkInterface_t271883373), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2767 = { sizeof (NetworkInterfaceComponent_t1400510776)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2767[3] = 
{
	NetworkInterfaceComponent_t1400510776::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2768 = { sizeof (OperationalStatus_t2709089529)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2768[8] = 
{
	OperationalStatus_t2709089529::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2769 = { sizeof (NetworkInterfaceType_t616418749)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2769[29] = 
{
	NetworkInterfaceType_t616418749::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2770 = { sizeof (NetBiosNodeType_t3568904212)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2770[6] = 
{
	NetBiosNodeType_t3568904212::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2771 = { sizeof (Win32IPAddressCollection_t1156671415), -1, sizeof(Win32IPAddressCollection_t1156671415_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2771[1] = 
{
	Win32IPAddressCollection_t1156671415_StaticFields::get_offset_of_Empty_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2772 = { sizeof (CommonUnixIPGlobalProperties_t1338606518), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2773 = { sizeof (UnixIPGlobalProperties_t1460024316), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2774 = { sizeof (MibIPGlobalProperties_t3015477361), -1, sizeof(MibIPGlobalProperties_t3015477361_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2774[7] = 
{
	MibIPGlobalProperties_t3015477361::get_offset_of_StatisticsFile_0(),
	MibIPGlobalProperties_t3015477361::get_offset_of_StatisticsFileIPv6_1(),
	MibIPGlobalProperties_t3015477361::get_offset_of_TcpFile_2(),
	MibIPGlobalProperties_t3015477361::get_offset_of_Tcp6File_3(),
	MibIPGlobalProperties_t3015477361::get_offset_of_UdpFile_4(),
	MibIPGlobalProperties_t3015477361::get_offset_of_Udp6File_5(),
	MibIPGlobalProperties_t3015477361_StaticFields::get_offset_of_wsChars_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2775 = { sizeof (Win32IPGlobalProperties_t3375126358), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2776 = { sizeof (UnixIPInterfaceProperties_t1296234392), -1, sizeof(UnixIPInterfaceProperties_t1296234392_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2776[7] = 
{
	UnixIPInterfaceProperties_t1296234392::get_offset_of_iface_0(),
	UnixIPInterfaceProperties_t1296234392::get_offset_of_addresses_1(),
	UnixIPInterfaceProperties_t1296234392::get_offset_of_dns_servers_2(),
	UnixIPInterfaceProperties_t1296234392_StaticFields::get_offset_of_ns_3(),
	UnixIPInterfaceProperties_t1296234392_StaticFields::get_offset_of_search_4(),
	UnixIPInterfaceProperties_t1296234392::get_offset_of_dns_suffix_5(),
	UnixIPInterfaceProperties_t1296234392::get_offset_of_last_parse_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2777 = { sizeof (LinuxIPInterfaceProperties_t458874081), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2778 = { sizeof (MacOsIPInterfaceProperties_t1282553291), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2779 = { sizeof (Win32IPInterfaceProperties2_t4152818631), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2779[3] = 
{
	Win32IPInterfaceProperties2_t4152818631::get_offset_of_addr_0(),
	Win32IPInterfaceProperties2_t4152818631::get_offset_of_mib4_1(),
	Win32IPInterfaceProperties2_t4152818631::get_offset_of_mib6_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2780 = { sizeof (Win32IPv4InterfaceStatistics_t3096671123), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2780[1] = 
{
	Win32IPv4InterfaceStatistics_t3096671123::get_offset_of_info_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2781 = { sizeof (ifa_ifu_t1794893192)+ sizeof (RuntimeObject), sizeof(ifa_ifu_t1794893192 ), 0, 0 };
extern const int32_t g_FieldOffsetTable2781[2] = 
{
	ifa_ifu_t1794893192::get_offset_of_ifu_broadaddr_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ifa_ifu_t1794893192::get_offset_of_ifu_dstaddr_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2782 = { sizeof (ifaddrs_t271199369)+ sizeof (RuntimeObject), sizeof(ifaddrs_t271199369_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable2782[7] = 
{
	ifaddrs_t271199369::get_offset_of_ifa_next_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ifaddrs_t271199369::get_offset_of_ifa_name_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ifaddrs_t271199369::get_offset_of_ifa_flags_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ifaddrs_t271199369::get_offset_of_ifa_addr_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ifaddrs_t271199369::get_offset_of_ifa_netmask_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ifaddrs_t271199369::get_offset_of_ifa_ifu_5() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ifaddrs_t271199369::get_offset_of_ifa_data_6() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2783 = { sizeof (sockaddr_in_t2786965223)+ sizeof (RuntimeObject), sizeof(sockaddr_in_t2786965223 ), 0, 0 };
extern const int32_t g_FieldOffsetTable2783[3] = 
{
	sockaddr_in_t2786965223::get_offset_of_sin_family_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	sockaddr_in_t2786965223::get_offset_of_sin_port_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	sockaddr_in_t2786965223::get_offset_of_sin_addr_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2784 = { sizeof (sockaddr_in6_t2790242023)+ sizeof (RuntimeObject), sizeof(sockaddr_in6_t2790242023_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable2784[5] = 
{
	sockaddr_in6_t2790242023::get_offset_of_sin6_family_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	sockaddr_in6_t2790242023::get_offset_of_sin6_port_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	sockaddr_in6_t2790242023::get_offset_of_sin6_flowinfo_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	sockaddr_in6_t2790242023::get_offset_of_sin6_addr_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	sockaddr_in6_t2790242023::get_offset_of_sin6_scope_id_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2785 = { sizeof (in6_addr_t3611791508)+ sizeof (RuntimeObject), sizeof(in6_addr_t3611791508_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable2785[1] = 
{
	in6_addr_t3611791508::get_offset_of_u6_addr8_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2786 = { sizeof (sockaddr_ll_t3978606313)+ sizeof (RuntimeObject), sizeof(sockaddr_ll_t3978606313_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable2786[7] = 
{
	sockaddr_ll_t3978606313::get_offset_of_sll_family_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	sockaddr_ll_t3978606313::get_offset_of_sll_protocol_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	sockaddr_ll_t3978606313::get_offset_of_sll_ifindex_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	sockaddr_ll_t3978606313::get_offset_of_sll_hatype_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	sockaddr_ll_t3978606313::get_offset_of_sll_pkttype_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
	sockaddr_ll_t3978606313::get_offset_of_sll_halen_5() + static_cast<int32_t>(sizeof(RuntimeObject)),
	sockaddr_ll_t3978606313::get_offset_of_sll_addr_6() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2787 = { sizeof (LinuxArpHardware_t827080684)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2787[18] = 
{
	LinuxArpHardware_t827080684::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2788 = { sizeof (MacOsArpHardware_t4198534184)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2788[7] = 
{
	MacOsArpHardware_t4198534184::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2789 = { sizeof (SystemNetworkInterface_t699244148), -1, sizeof(SystemNetworkInterface_t699244148_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2789[1] = 
{
	SystemNetworkInterface_t699244148_StaticFields::get_offset_of_nif_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2790 = { sizeof (NetworkInterfaceFactory_t1756522298), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2791 = { sizeof (UnixNetworkInterfaceAPI_t1061423219), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2792 = { sizeof (MacOsNetworkInterfaceAPI_t1249733612), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2793 = { sizeof (LinuxNetworkInterfaceAPI_t1157390748), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2794 = { sizeof (Win32NetworkInterfaceAPI_t912414909), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2795 = { sizeof (UnixNetworkInterface_t2401762829), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2795[5] = 
{
	UnixNetworkInterface_t2401762829::get_offset_of_ipproperties_0(),
	UnixNetworkInterface_t2401762829::get_offset_of_name_1(),
	UnixNetworkInterface_t2401762829::get_offset_of_addresses_2(),
	UnixNetworkInterface_t2401762829::get_offset_of_macAddress_3(),
	UnixNetworkInterface_t2401762829::get_offset_of_type_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2796 = { sizeof (LinuxNetworkInterface_t4095034716), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2796[3] = 
{
	LinuxNetworkInterface_t4095034716::get_offset_of_iface_path_5(),
	LinuxNetworkInterface_t4095034716::get_offset_of_iface_operstate_path_6(),
	LinuxNetworkInterface_t4095034716::get_offset_of_iface_flags_path_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2797 = { sizeof (MacOsNetworkInterface_t3969281182), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2797[1] = 
{
	MacOsNetworkInterface_t3969281182::get_offset_of__ifa_flags_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2798 = { sizeof (Win32NetworkInterface2_t2303857857), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2798[5] = 
{
	Win32NetworkInterface2_t2303857857::get_offset_of_addr_0(),
	Win32NetworkInterface2_t2303857857::get_offset_of_mib4_1(),
	Win32NetworkInterface2_t2303857857::get_offset_of_mib6_2(),
	Win32NetworkInterface2_t2303857857::get_offset_of_ip4stats_3(),
	Win32NetworkInterface2_t2303857857::get_offset_of_ip_if_props_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2799 = { sizeof (Win32NetworkInterface_t3922465985), -1, sizeof(Win32NetworkInterface_t3922465985_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2799[2] = 
{
	Win32NetworkInterface_t3922465985_StaticFields::get_offset_of_fixedInfo_0(),
	Win32NetworkInterface_t3922465985_StaticFields::get_offset_of_initialized_1(),
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // Modified by PostBuild.cs
