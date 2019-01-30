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
struct Action_t591D2A86165F896B4B800BB5C25CE18672A55579;
// System.Action`1<UnityEngine.Vector3>
struct Action_1_tE2F19E30ECDF39669C80D0E7DA21064D10C1EE2F;
// System.Action`1<Vuforia.TrackableBehaviour/Status>
struct Action_1_tB2D157B76595F25A0403EA2A0C32F01CE30B4F98;
// System.Action`2<Vuforia.TrackableBehaviour/Status,Vuforia.TrackableBehaviour/StatusInfo>
struct Action_2_t936B0D5682B789A67828A9CF1951CB8FF29DEF13;
// System.Byte[]
struct ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821;
// System.Char[]
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2;
// System.Collections.Generic.Dictionary`2<Vuforia.Image/PIXEL_FORMAT,Vuforia.Image>
struct Dictionary_2_t49253736D56E3666B7CCAAE565D303EDEC7C3EF2;
// System.Collections.Generic.List`1<Vuforia.ICloudRecoEventHandler>
struct List_1_tE36C58ACF764AC79C451D361AF5DC5017516DE23;
// System.Collections.Generic.List`1<Vuforia.ITrackableEventHandler>
struct List_1_tE4338C7F7D33C78CB75B44EB5CCCA0152E97497B;
// System.Collections.Generic.List`1<Vuforia.Image/PIXEL_FORMAT>
struct List_1_tCEBB35CD33D4B0F0D274B18B37FF981021B62739;
// System.Collections.IDictionary
struct IDictionary_t1BD5C1546718A374EA8122FBD6C6EE45331E8CE7;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196;
// System.Func`2<System.String,System.Boolean>
struct Func_2_t3AD4B0F443BFD399C4AC2D6EE99FFE3BC0970017;
// System.Func`3<System.String,System.Int32,System.String>
struct Func_3_t9C9BE7F16D3C7AEBACE6A589ACA52C45553AB417;
// System.IntPtr[]
struct IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770;
// System.Single[]
struct SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5;
// System.String
struct String_t;
// System.Void
struct Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017;
// UnityEngine.Camera
struct Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34;
// UnityEngine.GameObject
struct GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F;
// UnityEngine.Mesh
struct Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C;
// UnityEngine.Texture2D
struct Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C;
// UnityEngine.Transform
struct Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA;
// Vuforia.BackgroundPlaneBehaviour
struct BackgroundPlaneBehaviour_t2615248F9F83AF94A06C6585EBB6C1D3BCF64338;
// Vuforia.DataSet
struct DataSet_t9E9CB4ECE4C6C5C7B2FD9597B83FBAB7C55A4644;
// Vuforia.DigitalEyewearARController
struct DigitalEyewearARController_t973FDCC2DBCE328656150191FBC1A0E49189D9E4;
// Vuforia.EyewearCalibrationProfileManager
struct EyewearCalibrationProfileManager_tDC16C656B1E63F9F7FA7A165262CF001CFBF672A;
// Vuforia.EyewearDevice
struct EyewearDevice_t083CA7719B929A57A532B386322C61658849AA1E;
// Vuforia.EyewearUserCalibrator
struct EyewearUserCalibrator_tFA27D2BE8A64087E551C93ADE2489D69A0A79A49;
// Vuforia.HideExcessAreaUtility
struct HideExcessAreaUtility_t4DEC8A8570DC0458B45E1B21A6ABB435D6C63B32;
// Vuforia.IExcessAreaClipping
struct IExcessAreaClipping_tF1AC8D3AA54E05C0B255C8DCF00FEB3D57440662;
// Vuforia.IProjectMatrixProvider
struct IProjectMatrixProvider_tA598C4CFDC0F0AE0F5FFAC9FEF949B238C470172;
// Vuforia.ITargetSize
struct ITargetSize_t93FE85335C3D5B63DDB1C5EE2CE85A928F405898;
// Vuforia.IUnityPlayer
struct IUnityPlayer_tB373DDE470A7D5552B82CAA28A15D08B03CB7E23;
// Vuforia.IViewerParameters
struct IViewerParameters_t8D2684183E6888988F59D4E3ED3786853AFB6324;
// Vuforia.IWebCam
struct IWebCam_t81470898840D05D51B7FF454CD0074AF95A3E1EA;
// Vuforia.Image
struct Image_tDD7214A3062A11DF9F86760338EBB9F105AA4352;
// Vuforia.InstanceIdImpl
struct InstanceIdImpl_tB528D9E690D089FBF42027CEF1983B298A9C9371;
// Vuforia.ObjectTarget
struct ObjectTarget_tCD5EB5216840E640BC3726496EC3ABECB4C063CC;
// Vuforia.ObjectTracker
struct ObjectTracker_tC5DE67DCDB38A86F77C3462ECB63C4453A1D8B3E;
// Vuforia.StereoProjMatrixStore
struct StereoProjMatrixStore_t666C738477A3F36E8FDD7E872AC154108291348A;
// Vuforia.TargetFinder
struct TargetFinder_t2AFA3E4A66C461FA522FE35048DB093003A7B1AC;
// Vuforia.Trackable
struct Trackable_t2A23C572321E7D4FEAC9A1019DFA0AA144FC9B8F;
// Vuforia.TrackerData/TrackableResultData[]
struct TrackableResultDataU5BU5D_t9F14AA7BB2B4B86B497397AA4ABC42C964D0477D;
// Vuforia.TrackerData/VuMarkTargetResultData[]
struct VuMarkTargetResultDataU5BU5D_t0AAD90D01B7B61C91A7B4DE994F065D01013FF9A;
// Vuforia.VRDeviceController
struct VRDeviceController_tDFB2A6DE022256FD695E024050B1F3A07B97D044;
// Vuforia.VideoBackgroundBehaviour
struct VideoBackgroundBehaviour_t5FE09B8C02AFCA301B6D915668BE3C050CE37C00;
// Vuforia.VideoBackgroundConfigValidator
struct VideoBackgroundConfigValidator_tC6D2432439D8AAAF1E72C8124FC620504DC11EB0;
// Vuforia.VideoBackgroundManager
struct VideoBackgroundManager_tDCE9A898A17B3C5ED63C8BDE29A4455C4074BD50;
// Vuforia.VuMarkTemplate
struct VuMarkTemplate_t77A35C669991A2CC63075E8FCF018DA013A799DD;
// Vuforia.VuMarkTemplateImpl
struct VuMarkTemplateImpl_t70BFD60A41858A19817826C4468AA5EE736E4ED8;
// Vuforia.VuforiaARController
struct VuforiaARController_t7732FFB77105A2F5BBEA40E3CECC5C15DA624876;
// Vuforia.VuforiaBehaviour
struct VuforiaBehaviour_t9E688F16A822A56C5BB1910EF9B91448A9165BC2;
// Vuforia.VuforiaConfiguration/DeviceTrackerConfiguration
struct DeviceTrackerConfiguration_tC11D2DA49200D3693731D6AFF3F793E4315D1E3F;

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
#ifndef ATTRIBUTE_TF048C13FB3C8CFCC53F82290E4A3F621089F9A74_H
#define ATTRIBUTE_TF048C13FB3C8CFCC53F82290E4A3F621089F9A74_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Attribute
struct  Attribute_tF048C13FB3C8CFCC53F82290E4A3F621089F9A74  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ATTRIBUTE_TF048C13FB3C8CFCC53F82290E4A3F621089F9A74_H
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
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* ___native_trace_ips_15;

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
	inline SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((&____safeSerializationManager_13), value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((&___captured_traces_14), value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* value)
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
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
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
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	intptr_t* ___native_trace_ips_15;
};
#endif // EXCEPTION_T_H
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
#ifndef DELEGATEHELPER_T027CD1F95062C9C98103DBB523743A9BD59F91DF_H
#define DELEGATEHELPER_T027CD1F95062C9C98103DBB523743A9BD59F91DF_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.DelegateHelper
struct  DelegateHelper_t027CD1F95062C9C98103DBB523743A9BD59F91DF  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DELEGATEHELPER_T027CD1F95062C9C98103DBB523743A9BD59F91DF_H
#ifndef DEVICE_T19A8D91DE8CD359592F4BFF8F0F025C06AE1B175_H
#define DEVICE_T19A8D91DE8CD359592F4BFF8F0F025C06AE1B175_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.Device
struct  Device_t19A8D91DE8CD359592F4BFF8F0F025C06AE1B175  : public RuntimeObject
{
public:

public:
};

struct Device_t19A8D91DE8CD359592F4BFF8F0F025C06AE1B175_StaticFields
{
public:
	// Vuforia.Device Vuforia.Device::mInstance
	Device_t19A8D91DE8CD359592F4BFF8F0F025C06AE1B175 * ___mInstance_0;

public:
	inline static int32_t get_offset_of_mInstance_0() { return static_cast<int32_t>(offsetof(Device_t19A8D91DE8CD359592F4BFF8F0F025C06AE1B175_StaticFields, ___mInstance_0)); }
	inline Device_t19A8D91DE8CD359592F4BFF8F0F025C06AE1B175 * get_mInstance_0() const { return ___mInstance_0; }
	inline Device_t19A8D91DE8CD359592F4BFF8F0F025C06AE1B175 ** get_address_of_mInstance_0() { return &___mInstance_0; }
	inline void set_mInstance_0(Device_t19A8D91DE8CD359592F4BFF8F0F025C06AE1B175 * value)
	{
		___mInstance_0 = value;
		Il2CppCodeGenWriteBarrier((&___mInstance_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEVICE_T19A8D91DE8CD359592F4BFF8F0F025C06AE1B175_H
#ifndef EYEWEARCALIBRATIONPROFILEMANAGER_TDC16C656B1E63F9F7FA7A165262CF001CFBF672A_H
#define EYEWEARCALIBRATIONPROFILEMANAGER_TDC16C656B1E63F9F7FA7A165262CF001CFBF672A_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.EyewearCalibrationProfileManager
struct  EyewearCalibrationProfileManager_tDC16C656B1E63F9F7FA7A165262CF001CFBF672A  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EYEWEARCALIBRATIONPROFILEMANAGER_TDC16C656B1E63F9F7FA7A165262CF001CFBF672A_H
#ifndef EYEWEARUSERCALIBRATOR_TFA27D2BE8A64087E551C93ADE2489D69A0A79A49_H
#define EYEWEARUSERCALIBRATOR_TFA27D2BE8A64087E551C93ADE2489D69A0A79A49_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.EyewearUserCalibrator
struct  EyewearUserCalibrator_tFA27D2BE8A64087E551C93ADE2489D69A0A79A49  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EYEWEARUSERCALIBRATOR_TFA27D2BE8A64087E551C93ADE2489D69A0A79A49_H
#ifndef GAMEOBJECTEXTENSIONMETHODS_T21E60806C628015C7E912D4DD17070FE4A660EF3_H
#define GAMEOBJECTEXTENSIONMETHODS_T21E60806C628015C7E912D4DD17070FE4A660EF3_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.GameObjectExtensionMethods
struct  GameObjectExtensionMethods_t21E60806C628015C7E912D4DD17070FE4A660EF3  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GAMEOBJECTEXTENSIONMETHODS_T21E60806C628015C7E912D4DD17070FE4A660EF3_H
#ifndef GLOBALSTRINGS_TC811FADB0AF129E6CE431CE71C8148DE5E5EC2E9_H
#define GLOBALSTRINGS_TC811FADB0AF129E6CE431CE71C8148DE5E5EC2E9_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.GlobalStrings
struct  GlobalStrings_tC811FADB0AF129E6CE431CE71C8148DE5E5EC2E9  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GLOBALSTRINGS_TC811FADB0AF129E6CE431CE71C8148DE5E5EC2E9_H
#ifndef IENUMERABLEEXTENSIONMETHODS_T1C224FF0D4BE50ABEFC3BA491E7DE9595D314E74_H
#define IENUMERABLEEXTENSIONMETHODS_T1C224FF0D4BE50ABEFC3BA491E7DE9595D314E74_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.IEnumerableExtensionMethods
struct  IEnumerableExtensionMethods_t1C224FF0D4BE50ABEFC3BA491E7DE9595D314E74  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // IENUMERABLEEXTENSIONMETHODS_T1C224FF0D4BE50ABEFC3BA491E7DE9595D314E74_H
#ifndef IOSCAMRECOVERINGHELPER_T7A7C026364DA1E76B1A9E06359ADC542D9B04C65_H
#define IOSCAMRECOVERINGHELPER_T7A7C026364DA1E76B1A9E06359ADC542D9B04C65_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.IOSCamRecoveringHelper
struct  IOSCamRecoveringHelper_t7A7C026364DA1E76B1A9E06359ADC542D9B04C65  : public RuntimeObject
{
public:

public:
};

struct IOSCamRecoveringHelper_t7A7C026364DA1E76B1A9E06359ADC542D9B04C65_StaticFields
{
public:
	// System.Boolean Vuforia.IOSCamRecoveringHelper::sHasJustResumed
	bool ___sHasJustResumed_3;
	// System.Boolean Vuforia.IOSCamRecoveringHelper::sCheckFailedFrameAfterResume
	bool ___sCheckFailedFrameAfterResume_4;
	// System.Int32 Vuforia.IOSCamRecoveringHelper::sCheckedFailedFrameCounter
	int32_t ___sCheckedFailedFrameCounter_5;
	// System.Boolean Vuforia.IOSCamRecoveringHelper::sWaitToRecoverCameraRestart
	bool ___sWaitToRecoverCameraRestart_6;
	// System.Int32 Vuforia.IOSCamRecoveringHelper::sWaitedFrameRecoverCounter
	int32_t ___sWaitedFrameRecoverCounter_7;
	// System.Int32 Vuforia.IOSCamRecoveringHelper::sRecoveryAttemptCounter
	int32_t ___sRecoveryAttemptCounter_8;

public:
	inline static int32_t get_offset_of_sHasJustResumed_3() { return static_cast<int32_t>(offsetof(IOSCamRecoveringHelper_t7A7C026364DA1E76B1A9E06359ADC542D9B04C65_StaticFields, ___sHasJustResumed_3)); }
	inline bool get_sHasJustResumed_3() const { return ___sHasJustResumed_3; }
	inline bool* get_address_of_sHasJustResumed_3() { return &___sHasJustResumed_3; }
	inline void set_sHasJustResumed_3(bool value)
	{
		___sHasJustResumed_3 = value;
	}

	inline static int32_t get_offset_of_sCheckFailedFrameAfterResume_4() { return static_cast<int32_t>(offsetof(IOSCamRecoveringHelper_t7A7C026364DA1E76B1A9E06359ADC542D9B04C65_StaticFields, ___sCheckFailedFrameAfterResume_4)); }
	inline bool get_sCheckFailedFrameAfterResume_4() const { return ___sCheckFailedFrameAfterResume_4; }
	inline bool* get_address_of_sCheckFailedFrameAfterResume_4() { return &___sCheckFailedFrameAfterResume_4; }
	inline void set_sCheckFailedFrameAfterResume_4(bool value)
	{
		___sCheckFailedFrameAfterResume_4 = value;
	}

	inline static int32_t get_offset_of_sCheckedFailedFrameCounter_5() { return static_cast<int32_t>(offsetof(IOSCamRecoveringHelper_t7A7C026364DA1E76B1A9E06359ADC542D9B04C65_StaticFields, ___sCheckedFailedFrameCounter_5)); }
	inline int32_t get_sCheckedFailedFrameCounter_5() const { return ___sCheckedFailedFrameCounter_5; }
	inline int32_t* get_address_of_sCheckedFailedFrameCounter_5() { return &___sCheckedFailedFrameCounter_5; }
	inline void set_sCheckedFailedFrameCounter_5(int32_t value)
	{
		___sCheckedFailedFrameCounter_5 = value;
	}

	inline static int32_t get_offset_of_sWaitToRecoverCameraRestart_6() { return static_cast<int32_t>(offsetof(IOSCamRecoveringHelper_t7A7C026364DA1E76B1A9E06359ADC542D9B04C65_StaticFields, ___sWaitToRecoverCameraRestart_6)); }
	inline bool get_sWaitToRecoverCameraRestart_6() const { return ___sWaitToRecoverCameraRestart_6; }
	inline bool* get_address_of_sWaitToRecoverCameraRestart_6() { return &___sWaitToRecoverCameraRestart_6; }
	inline void set_sWaitToRecoverCameraRestart_6(bool value)
	{
		___sWaitToRecoverCameraRestart_6 = value;
	}

	inline static int32_t get_offset_of_sWaitedFrameRecoverCounter_7() { return static_cast<int32_t>(offsetof(IOSCamRecoveringHelper_t7A7C026364DA1E76B1A9E06359ADC542D9B04C65_StaticFields, ___sWaitedFrameRecoverCounter_7)); }
	inline int32_t get_sWaitedFrameRecoverCounter_7() const { return ___sWaitedFrameRecoverCounter_7; }
	inline int32_t* get_address_of_sWaitedFrameRecoverCounter_7() { return &___sWaitedFrameRecoverCounter_7; }
	inline void set_sWaitedFrameRecoverCounter_7(int32_t value)
	{
		___sWaitedFrameRecoverCounter_7 = value;
	}

	inline static int32_t get_offset_of_sRecoveryAttemptCounter_8() { return static_cast<int32_t>(offsetof(IOSCamRecoveringHelper_t7A7C026364DA1E76B1A9E06359ADC542D9B04C65_StaticFields, ___sRecoveryAttemptCounter_8)); }
	inline int32_t get_sRecoveryAttemptCounter_8() const { return ___sRecoveryAttemptCounter_8; }
	inline int32_t* get_address_of_sRecoveryAttemptCounter_8() { return &___sRecoveryAttemptCounter_8; }
	inline void set_sRecoveryAttemptCounter_8(int32_t value)
	{
		___sRecoveryAttemptCounter_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // IOSCAMRECOVERINGHELPER_T7A7C026364DA1E76B1A9E06359ADC542D9B04C65_H
#ifndef LOG_T756EBB0C1966A943DB86F4F19BDE6E443D1B3E2F_H
#define LOG_T756EBB0C1966A943DB86F4F19BDE6E443D1B3E2F_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.Log
struct  Log_t756EBB0C1966A943DB86F4F19BDE6E443D1B3E2F  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LOG_T756EBB0C1966A943DB86F4F19BDE6E443D1B3E2F_H
#ifndef MESHUTILS_T26F4506C8820A227AABFFEDDBFABE8855C58B2ED_H
#define MESHUTILS_T26F4506C8820A227AABFFEDDBFABE8855C58B2ED_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.MeshUtils
struct  MeshUtils_t26F4506C8820A227AABFFEDDBFABE8855C58B2ED  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MESHUTILS_T26F4506C8820A227AABFFEDDBFABE8855C58B2ED_H
#ifndef NULLHIDEEXCESSAREACLIPPING_T7E3109442BEB57AE1BCA98D2192F2EDEE820255F_H
#define NULLHIDEEXCESSAREACLIPPING_T7E3109442BEB57AE1BCA98D2192F2EDEE820255F_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.NullHideExcessAreaClipping
struct  NullHideExcessAreaClipping_t7E3109442BEB57AE1BCA98D2192F2EDEE820255F  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NULLHIDEEXCESSAREACLIPPING_T7E3109442BEB57AE1BCA98D2192F2EDEE820255F_H
#ifndef NULLHOLOLENSAPIABSTRACTION_TA2A1D3CFDA4B08ADA1A6C72DCE50CBE9C148DEAD_H
#define NULLHOLOLENSAPIABSTRACTION_TA2A1D3CFDA4B08ADA1A6C72DCE50CBE9C148DEAD_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.NullHoloLensApiAbstraction
struct  NullHoloLensApiAbstraction_tA2A1D3CFDA4B08ADA1A6C72DCE50CBE9C148DEAD  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NULLHOLOLENSAPIABSTRACTION_TA2A1D3CFDA4B08ADA1A6C72DCE50CBE9C148DEAD_H
#ifndef NULLUNITYPLAYER_T86841446B1CBBFDF0332C70114BF3CBA67162117_H
#define NULLUNITYPLAYER_T86841446B1CBBFDF0332C70114BF3CBA67162117_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.NullUnityPlayer
struct  NullUnityPlayer_t86841446B1CBBFDF0332C70114BF3CBA67162117  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NULLUNITYPLAYER_T86841446B1CBBFDF0332C70114BF3CBA67162117_H
#ifndef U3CU3EC__DISPLAYCLASS29_0_T409774273F602E27B578D7F5EB161A47FC3B0980_H
#define U3CU3EC__DISPLAYCLASS29_0_T409774273F602E27B578D7F5EB161A47FC3B0980_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.PlaneFinderBehaviour/<>c__DisplayClass29_0
struct  U3CU3Ec__DisplayClass29_0_t409774273F602E27B578D7F5EB161A47FC3B0980  : public RuntimeObject
{
public:
	// System.Boolean Vuforia.PlaneFinderBehaviour/<>c__DisplayClass29_0::isVisible
	bool ___isVisible_0;

public:
	inline static int32_t get_offset_of_isVisible_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass29_0_t409774273F602E27B578D7F5EB161A47FC3B0980, ___isVisible_0)); }
	inline bool get_isVisible_0() const { return ___isVisible_0; }
	inline bool* get_address_of_isVisible_0() { return &___isVisible_0; }
	inline void set_isVisible_0(bool value)
	{
		___isVisible_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CU3EC__DISPLAYCLASS29_0_T409774273F602E27B578D7F5EB161A47FC3B0980_H
#ifndef POSIXPATH_T9069DEE3D274146EF8CC598726BA464AD4D378CB_H
#define POSIXPATH_T9069DEE3D274146EF8CC598726BA464AD4D378CB_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.PosixPath
struct  PosixPath_t9069DEE3D274146EF8CC598726BA464AD4D378CB  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // POSIXPATH_T9069DEE3D274146EF8CC598726BA464AD4D378CB_H
#ifndef U3CU3EC_TB435526A5CF5263ED816F1A1E6F72ED3E7168DB8_H
#define U3CU3EC_TB435526A5CF5263ED816F1A1E6F72ED3E7168DB8_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.PosixPath/<>c
struct  U3CU3Ec_tB435526A5CF5263ED816F1A1E6F72ED3E7168DB8  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_tB435526A5CF5263ED816F1A1E6F72ED3E7168DB8_StaticFields
{
public:
	// Vuforia.PosixPath/<>c Vuforia.PosixPath/<>c::<>9
	U3CU3Ec_tB435526A5CF5263ED816F1A1E6F72ED3E7168DB8 * ___U3CU3E9_0;
	// System.Func`2<System.String,System.Boolean> Vuforia.PosixPath/<>c::<>9__1_0
	Func_2_t3AD4B0F443BFD399C4AC2D6EE99FFE3BC0970017 * ___U3CU3E9__1_0_1;
	// System.Func`3<System.String,System.Int32,System.String> Vuforia.PosixPath/<>c::<>9__1_1
	Func_3_t9C9BE7F16D3C7AEBACE6A589ACA52C45553AB417 * ___U3CU3E9__1_1_2;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_tB435526A5CF5263ED816F1A1E6F72ED3E7168DB8_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_tB435526A5CF5263ED816F1A1E6F72ED3E7168DB8 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_tB435526A5CF5263ED816F1A1E6F72ED3E7168DB8 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_tB435526A5CF5263ED816F1A1E6F72ED3E7168DB8 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3E9_0), value);
	}

	inline static int32_t get_offset_of_U3CU3E9__1_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_tB435526A5CF5263ED816F1A1E6F72ED3E7168DB8_StaticFields, ___U3CU3E9__1_0_1)); }
	inline Func_2_t3AD4B0F443BFD399C4AC2D6EE99FFE3BC0970017 * get_U3CU3E9__1_0_1() const { return ___U3CU3E9__1_0_1; }
	inline Func_2_t3AD4B0F443BFD399C4AC2D6EE99FFE3BC0970017 ** get_address_of_U3CU3E9__1_0_1() { return &___U3CU3E9__1_0_1; }
	inline void set_U3CU3E9__1_0_1(Func_2_t3AD4B0F443BFD399C4AC2D6EE99FFE3BC0970017 * value)
	{
		___U3CU3E9__1_0_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3E9__1_0_1), value);
	}

	inline static int32_t get_offset_of_U3CU3E9__1_1_2() { return static_cast<int32_t>(offsetof(U3CU3Ec_tB435526A5CF5263ED816F1A1E6F72ED3E7168DB8_StaticFields, ___U3CU3E9__1_1_2)); }
	inline Func_3_t9C9BE7F16D3C7AEBACE6A589ACA52C45553AB417 * get_U3CU3E9__1_1_2() const { return ___U3CU3E9__1_1_2; }
	inline Func_3_t9C9BE7F16D3C7AEBACE6A589ACA52C45553AB417 ** get_address_of_U3CU3E9__1_1_2() { return &___U3CU3E9__1_1_2; }
	inline void set_U3CU3E9__1_1_2(Func_3_t9C9BE7F16D3C7AEBACE6A589ACA52C45553AB417 * value)
	{
		___U3CU3E9__1_1_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3E9__1_1_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CU3EC_TB435526A5CF5263ED816F1A1E6F72ED3E7168DB8_H
#ifndef TRACKABLEIMPL_T97E7D175DE38822AF55FC03FCA26FB62B7E290A2_H
#define TRACKABLEIMPL_T97E7D175DE38822AF55FC03FCA26FB62B7E290A2_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.TrackableImpl
struct  TrackableImpl_t97E7D175DE38822AF55FC03FCA26FB62B7E290A2  : public RuntimeObject
{
public:
	// System.String Vuforia.TrackableImpl::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_0;
	// System.Int32 Vuforia.TrackableImpl::<ID>k__BackingField
	int32_t ___U3CIDU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CNameU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(TrackableImpl_t97E7D175DE38822AF55FC03FCA26FB62B7E290A2, ___U3CNameU3Ek__BackingField_0)); }
	inline String_t* get_U3CNameU3Ek__BackingField_0() const { return ___U3CNameU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CNameU3Ek__BackingField_0() { return &___U3CNameU3Ek__BackingField_0; }
	inline void set_U3CNameU3Ek__BackingField_0(String_t* value)
	{
		___U3CNameU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CNameU3Ek__BackingField_0), value);
	}

	inline static int32_t get_offset_of_U3CIDU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(TrackableImpl_t97E7D175DE38822AF55FC03FCA26FB62B7E290A2, ___U3CIDU3Ek__BackingField_1)); }
	inline int32_t get_U3CIDU3Ek__BackingField_1() const { return ___U3CIDU3Ek__BackingField_1; }
	inline int32_t* get_address_of_U3CIDU3Ek__BackingField_1() { return &___U3CIDU3Ek__BackingField_1; }
	inline void set_U3CIDU3Ek__BackingField_1(int32_t value)
	{
		___U3CIDU3Ek__BackingField_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRACKABLEIMPL_T97E7D175DE38822AF55FC03FCA26FB62B7E290A2_H
#ifndef TRACKER_T11C8E7B84615512E8125186CDC5DF90D9D7B58F1_H
#define TRACKER_T11C8E7B84615512E8125186CDC5DF90D9D7B58F1_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.Tracker
struct  Tracker_t11C8E7B84615512E8125186CDC5DF90D9D7B58F1  : public RuntimeObject
{
public:
	// System.Boolean Vuforia.Tracker::<IsActive>k__BackingField
	bool ___U3CIsActiveU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CIsActiveU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(Tracker_t11C8E7B84615512E8125186CDC5DF90D9D7B58F1, ___U3CIsActiveU3Ek__BackingField_0)); }
	inline bool get_U3CIsActiveU3Ek__BackingField_0() const { return ___U3CIsActiveU3Ek__BackingField_0; }
	inline bool* get_address_of_U3CIsActiveU3Ek__BackingField_0() { return &___U3CIsActiveU3Ek__BackingField_0; }
	inline void set_U3CIsActiveU3Ek__BackingField_0(bool value)
	{
		___U3CIsActiveU3Ek__BackingField_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRACKER_T11C8E7B84615512E8125186CDC5DF90D9D7B58F1_H
#ifndef TRACKERDATA_TE9DAA69F73C99DF652AAA629FFB9418FC62EBDE1_H
#define TRACKERDATA_TE9DAA69F73C99DF652AAA629FFB9418FC62EBDE1_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.TrackerData
struct  TrackerData_tE9DAA69F73C99DF652AAA629FFB9418FC62EBDE1  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRACKERDATA_TE9DAA69F73C99DF652AAA629FFB9418FC62EBDE1_H
#ifndef UNITYCAMERAEXTENSIONS_T60A05A4BABEE71AF3856BA965F63D43AC64EFA99_H
#define UNITYCAMERAEXTENSIONS_T60A05A4BABEE71AF3856BA965F63D43AC64EFA99_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.UnityCameraExtensions
struct  UnityCameraExtensions_t60A05A4BABEE71AF3856BA965F63D43AC64EFA99  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYCAMERAEXTENSIONS_T60A05A4BABEE71AF3856BA965F63D43AC64EFA99_H
#ifndef UNITYPLAYER_TD346044371C77B60251DABD9293C1F0204311C1F_H
#define UNITYPLAYER_TD346044371C77B60251DABD9293C1F0204311C1F_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.UnityPlayer
struct  UnityPlayer_tD346044371C77B60251DABD9293C1F0204311C1F  : public RuntimeObject
{
public:

public:
};

struct UnityPlayer_tD346044371C77B60251DABD9293C1F0204311C1F_StaticFields
{
public:
	// Vuforia.IUnityPlayer Vuforia.UnityPlayer::sPlayer
	RuntimeObject* ___sPlayer_0;

public:
	inline static int32_t get_offset_of_sPlayer_0() { return static_cast<int32_t>(offsetof(UnityPlayer_tD346044371C77B60251DABD9293C1F0204311C1F_StaticFields, ___sPlayer_0)); }
	inline RuntimeObject* get_sPlayer_0() const { return ___sPlayer_0; }
	inline RuntimeObject** get_address_of_sPlayer_0() { return &___sPlayer_0; }
	inline void set_sPlayer_0(RuntimeObject* value)
	{
		___sPlayer_0 = value;
		Il2CppCodeGenWriteBarrier((&___sPlayer_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYPLAYER_TD346044371C77B60251DABD9293C1F0204311C1F_H
#ifndef VUFORIAEXTENDEDTRACKINGMANAGER_TAACFA22C32AEA72AA454280FB0E854CE8FF6D383_H
#define VUFORIAEXTENDEDTRACKINGMANAGER_TAACFA22C32AEA72AA454280FB0E854CE8FF6D383_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.VuforiaExtendedTrackingManager
struct  VuforiaExtendedTrackingManager_tAACFA22C32AEA72AA454280FB0E854CE8FF6D383  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VUFORIAEXTENDEDTRACKINGMANAGER_TAACFA22C32AEA72AA454280FB0E854CE8FF6D383_H
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
#ifndef MATRIX4X4_T6BF60F70C9169DF14C9D2577672A44224B236ECA_H
#define MATRIX4X4_T6BF60F70C9169DF14C9D2577672A44224B236ECA_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Matrix4x4
struct  Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA 
{
public:
	// System.Single UnityEngine.Matrix4x4::m00
	float ___m00_0;
	// System.Single UnityEngine.Matrix4x4::m10
	float ___m10_1;
	// System.Single UnityEngine.Matrix4x4::m20
	float ___m20_2;
	// System.Single UnityEngine.Matrix4x4::m30
	float ___m30_3;
	// System.Single UnityEngine.Matrix4x4::m01
	float ___m01_4;
	// System.Single UnityEngine.Matrix4x4::m11
	float ___m11_5;
	// System.Single UnityEngine.Matrix4x4::m21
	float ___m21_6;
	// System.Single UnityEngine.Matrix4x4::m31
	float ___m31_7;
	// System.Single UnityEngine.Matrix4x4::m02
	float ___m02_8;
	// System.Single UnityEngine.Matrix4x4::m12
	float ___m12_9;
	// System.Single UnityEngine.Matrix4x4::m22
	float ___m22_10;
	// System.Single UnityEngine.Matrix4x4::m32
	float ___m32_11;
	// System.Single UnityEngine.Matrix4x4::m03
	float ___m03_12;
	// System.Single UnityEngine.Matrix4x4::m13
	float ___m13_13;
	// System.Single UnityEngine.Matrix4x4::m23
	float ___m23_14;
	// System.Single UnityEngine.Matrix4x4::m33
	float ___m33_15;

public:
	inline static int32_t get_offset_of_m00_0() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m00_0)); }
	inline float get_m00_0() const { return ___m00_0; }
	inline float* get_address_of_m00_0() { return &___m00_0; }
	inline void set_m00_0(float value)
	{
		___m00_0 = value;
	}

	inline static int32_t get_offset_of_m10_1() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m10_1)); }
	inline float get_m10_1() const { return ___m10_1; }
	inline float* get_address_of_m10_1() { return &___m10_1; }
	inline void set_m10_1(float value)
	{
		___m10_1 = value;
	}

	inline static int32_t get_offset_of_m20_2() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m20_2)); }
	inline float get_m20_2() const { return ___m20_2; }
	inline float* get_address_of_m20_2() { return &___m20_2; }
	inline void set_m20_2(float value)
	{
		___m20_2 = value;
	}

	inline static int32_t get_offset_of_m30_3() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m30_3)); }
	inline float get_m30_3() const { return ___m30_3; }
	inline float* get_address_of_m30_3() { return &___m30_3; }
	inline void set_m30_3(float value)
	{
		___m30_3 = value;
	}

	inline static int32_t get_offset_of_m01_4() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m01_4)); }
	inline float get_m01_4() const { return ___m01_4; }
	inline float* get_address_of_m01_4() { return &___m01_4; }
	inline void set_m01_4(float value)
	{
		___m01_4 = value;
	}

	inline static int32_t get_offset_of_m11_5() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m11_5)); }
	inline float get_m11_5() const { return ___m11_5; }
	inline float* get_address_of_m11_5() { return &___m11_5; }
	inline void set_m11_5(float value)
	{
		___m11_5 = value;
	}

	inline static int32_t get_offset_of_m21_6() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m21_6)); }
	inline float get_m21_6() const { return ___m21_6; }
	inline float* get_address_of_m21_6() { return &___m21_6; }
	inline void set_m21_6(float value)
	{
		___m21_6 = value;
	}

	inline static int32_t get_offset_of_m31_7() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m31_7)); }
	inline float get_m31_7() const { return ___m31_7; }
	inline float* get_address_of_m31_7() { return &___m31_7; }
	inline void set_m31_7(float value)
	{
		___m31_7 = value;
	}

	inline static int32_t get_offset_of_m02_8() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m02_8)); }
	inline float get_m02_8() const { return ___m02_8; }
	inline float* get_address_of_m02_8() { return &___m02_8; }
	inline void set_m02_8(float value)
	{
		___m02_8 = value;
	}

	inline static int32_t get_offset_of_m12_9() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m12_9)); }
	inline float get_m12_9() const { return ___m12_9; }
	inline float* get_address_of_m12_9() { return &___m12_9; }
	inline void set_m12_9(float value)
	{
		___m12_9 = value;
	}

	inline static int32_t get_offset_of_m22_10() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m22_10)); }
	inline float get_m22_10() const { return ___m22_10; }
	inline float* get_address_of_m22_10() { return &___m22_10; }
	inline void set_m22_10(float value)
	{
		___m22_10 = value;
	}

	inline static int32_t get_offset_of_m32_11() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m32_11)); }
	inline float get_m32_11() const { return ___m32_11; }
	inline float* get_address_of_m32_11() { return &___m32_11; }
	inline void set_m32_11(float value)
	{
		___m32_11 = value;
	}

	inline static int32_t get_offset_of_m03_12() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m03_12)); }
	inline float get_m03_12() const { return ___m03_12; }
	inline float* get_address_of_m03_12() { return &___m03_12; }
	inline void set_m03_12(float value)
	{
		___m03_12 = value;
	}

	inline static int32_t get_offset_of_m13_13() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m13_13)); }
	inline float get_m13_13() const { return ___m13_13; }
	inline float* get_address_of_m13_13() { return &___m13_13; }
	inline void set_m13_13(float value)
	{
		___m13_13 = value;
	}

	inline static int32_t get_offset_of_m23_14() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m23_14)); }
	inline float get_m23_14() const { return ___m23_14; }
	inline float* get_address_of_m23_14() { return &___m23_14; }
	inline void set_m23_14(float value)
	{
		___m23_14 = value;
	}

	inline static int32_t get_offset_of_m33_15() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m33_15)); }
	inline float get_m33_15() const { return ___m33_15; }
	inline float* get_address_of_m33_15() { return &___m33_15; }
	inline void set_m33_15(float value)
	{
		___m33_15 = value;
	}
};

struct Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA_StaticFields
{
public:
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::zeroMatrix
	Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  ___zeroMatrix_16;
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::identityMatrix
	Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  ___identityMatrix_17;

public:
	inline static int32_t get_offset_of_zeroMatrix_16() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA_StaticFields, ___zeroMatrix_16)); }
	inline Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  get_zeroMatrix_16() const { return ___zeroMatrix_16; }
	inline Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA * get_address_of_zeroMatrix_16() { return &___zeroMatrix_16; }
	inline void set_zeroMatrix_16(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  value)
	{
		___zeroMatrix_16 = value;
	}

	inline static int32_t get_offset_of_identityMatrix_17() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA_StaticFields, ___identityMatrix_17)); }
	inline Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  get_identityMatrix_17() const { return ___identityMatrix_17; }
	inline Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA * get_address_of_identityMatrix_17() { return &___identityMatrix_17; }
	inline void set_identityMatrix_17(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  value)
	{
		___identityMatrix_17 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MATRIX4X4_T6BF60F70C9169DF14C9D2577672A44224B236ECA_H
#ifndef QUATERNION_T319F3319A7D43FFA5D819AD6C0A98851F0095357_H
#define QUATERNION_T319F3319A7D43FFA5D819AD6C0A98851F0095357_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Quaternion
struct  Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 
{
public:
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  value)
	{
		___identityQuaternion_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // QUATERNION_T319F3319A7D43FFA5D819AD6C0A98851F0095357_H
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
#ifndef VECTOR2_TA85D2DD88578276CA8A8796756458277E72D073D_H
#define VECTOR2_TA85D2DD88578276CA8A8796756458277E72D073D_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector2
struct  Vector2_tA85D2DD88578276CA8A8796756458277E72D073D 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___zeroVector_2)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___oneVector_3)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___upVector_4)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___downVector_5)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___leftVector_6)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___rightVector_7)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___negativeInfinityVector_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR2_TA85D2DD88578276CA8A8796756458277E72D073D_H
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
#ifndef VECTOR4_TD148D6428C3F8FF6CD998F82090113C2B490B76E_H
#define VECTOR4_TD148D6428C3F8FF6CD998F82090113C2B490B76E_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector4
struct  Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E 
{
public:
	// System.Single UnityEngine.Vector4::x
	float ___x_0;
	// System.Single UnityEngine.Vector4::y
	float ___y_1;
	// System.Single UnityEngine.Vector4::z
	float ___z_2;
	// System.Single UnityEngine.Vector4::w
	float ___w_3;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E_StaticFields
{
public:
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___zeroVector_4;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___oneVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___positiveInfinityVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___negativeInfinityVector_7;

public:
	inline static int32_t get_offset_of_zeroVector_4() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E_StaticFields, ___zeroVector_4)); }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  get_zeroVector_4() const { return ___zeroVector_4; }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * get_address_of_zeroVector_4() { return &___zeroVector_4; }
	inline void set_zeroVector_4(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  value)
	{
		___zeroVector_4 = value;
	}

	inline static int32_t get_offset_of_oneVector_5() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E_StaticFields, ___oneVector_5)); }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  get_oneVector_5() const { return ___oneVector_5; }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * get_address_of_oneVector_5() { return &___oneVector_5; }
	inline void set_oneVector_5(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  value)
	{
		___oneVector_5 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_6() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E_StaticFields, ___positiveInfinityVector_6)); }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  get_positiveInfinityVector_6() const { return ___positiveInfinityVector_6; }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * get_address_of_positiveInfinityVector_6() { return &___positiveInfinityVector_6; }
	inline void set_positiveInfinityVector_6(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  value)
	{
		___positiveInfinityVector_6 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_7() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E_StaticFields, ___negativeInfinityVector_7)); }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  get_negativeInfinityVector_7() const { return ___negativeInfinityVector_7; }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * get_address_of_negativeInfinityVector_7() { return &___negativeInfinityVector_7; }
	inline void set_negativeInfinityVector_7(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  value)
	{
		___negativeInfinityVector_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR4_TD148D6428C3F8FF6CD998F82090113C2B490B76E_H
#ifndef CAMERAFIELDDATA_TD6607A30C643B1AC246B137837DBAF6A94100E00_H
#define CAMERAFIELDDATA_TD6607A30C643B1AC246B137837DBAF6A94100E00_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.CameraDevice/CameraFieldData
struct  CameraFieldData_tD6607A30C643B1AC246B137837DBAF6A94100E00 
{
public:
	// System.String Vuforia.CameraDevice/CameraFieldData::KeyValue
	String_t* ___KeyValue_0;
	// System.Int32 Vuforia.CameraDevice/CameraFieldData::DataType
	int32_t ___DataType_1;
	// System.Int32 Vuforia.CameraDevice/CameraFieldData::Unused
	int32_t ___Unused_2;

public:
	inline static int32_t get_offset_of_KeyValue_0() { return static_cast<int32_t>(offsetof(CameraFieldData_tD6607A30C643B1AC246B137837DBAF6A94100E00, ___KeyValue_0)); }
	inline String_t* get_KeyValue_0() const { return ___KeyValue_0; }
	inline String_t** get_address_of_KeyValue_0() { return &___KeyValue_0; }
	inline void set_KeyValue_0(String_t* value)
	{
		___KeyValue_0 = value;
		Il2CppCodeGenWriteBarrier((&___KeyValue_0), value);
	}

	inline static int32_t get_offset_of_DataType_1() { return static_cast<int32_t>(offsetof(CameraFieldData_tD6607A30C643B1AC246B137837DBAF6A94100E00, ___DataType_1)); }
	inline int32_t get_DataType_1() const { return ___DataType_1; }
	inline int32_t* get_address_of_DataType_1() { return &___DataType_1; }
	inline void set_DataType_1(int32_t value)
	{
		___DataType_1 = value;
	}

	inline static int32_t get_offset_of_Unused_2() { return static_cast<int32_t>(offsetof(CameraFieldData_tD6607A30C643B1AC246B137837DBAF6A94100E00, ___Unused_2)); }
	inline int32_t get_Unused_2() const { return ___Unused_2; }
	inline int32_t* get_address_of_Unused_2() { return &___Unused_2; }
	inline void set_Unused_2(int32_t value)
	{
		___Unused_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of Vuforia.CameraDevice/CameraFieldData
#pragma pack(push, tp, 1)
struct CameraFieldData_tD6607A30C643B1AC246B137837DBAF6A94100E00_marshaled_pinvoke
{
	char* ___KeyValue_0;
	int32_t ___DataType_1;
	int32_t ___Unused_2;
};
#pragma pack(pop, tp)
// Native definition for COM marshalling of Vuforia.CameraDevice/CameraFieldData
#pragma pack(push, tp, 1)
struct CameraFieldData_tD6607A30C643B1AC246B137837DBAF6A94100E00_marshaled_com
{
	Il2CppChar* ___KeyValue_0;
	int32_t ___DataType_1;
	int32_t ___Unused_2;
};
#pragma pack(pop, tp)
#endif // CAMERAFIELDDATA_TD6607A30C643B1AC246B137837DBAF6A94100E00_H
#ifndef INT64RANGE_T89729DA7D2A180C3305C2C3A24E458775795ADA6_H
#define INT64RANGE_T89729DA7D2A180C3305C2C3A24E458775795ADA6_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.CameraDevice/Int64Range
struct  Int64Range_t89729DA7D2A180C3305C2C3A24E458775795ADA6 
{
public:
	// System.Int64 Vuforia.CameraDevice/Int64Range::fromInt
	int64_t ___fromInt_0;
	// System.Int64 Vuforia.CameraDevice/Int64Range::toInt
	int64_t ___toInt_1;

public:
	inline static int32_t get_offset_of_fromInt_0() { return static_cast<int32_t>(offsetof(Int64Range_t89729DA7D2A180C3305C2C3A24E458775795ADA6, ___fromInt_0)); }
	inline int64_t get_fromInt_0() const { return ___fromInt_0; }
	inline int64_t* get_address_of_fromInt_0() { return &___fromInt_0; }
	inline void set_fromInt_0(int64_t value)
	{
		___fromInt_0 = value;
	}

	inline static int32_t get_offset_of_toInt_1() { return static_cast<int32_t>(offsetof(Int64Range_t89729DA7D2A180C3305C2C3A24E458775795ADA6, ___toInt_1)); }
	inline int64_t get_toInt_1() const { return ___toInt_1; }
	inline int64_t* get_address_of_toInt_1() { return &___toInt_1; }
	inline void set_toInt_1(int64_t value)
	{
		___toInt_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT64RANGE_T89729DA7D2A180C3305C2C3A24E458775795ADA6_H
#ifndef VIDEOMODEDATA_T7BC59F654FEA6A276ACE52D08AA89A8438698C3D_H
#define VIDEOMODEDATA_T7BC59F654FEA6A276ACE52D08AA89A8438698C3D_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.CameraDevice/VideoModeData
#pragma pack(push, tp, 1)
struct  VideoModeData_t7BC59F654FEA6A276ACE52D08AA89A8438698C3D 
{
public:
	// System.Int32 Vuforia.CameraDevice/VideoModeData::width
	int32_t ___width_0;
	// System.Int32 Vuforia.CameraDevice/VideoModeData::height
	int32_t ___height_1;
	// System.Single Vuforia.CameraDevice/VideoModeData::frameRate
	float ___frameRate_2;
	// System.Int32 Vuforia.CameraDevice/VideoModeData::unused
	int32_t ___unused_3;

public:
	inline static int32_t get_offset_of_width_0() { return static_cast<int32_t>(offsetof(VideoModeData_t7BC59F654FEA6A276ACE52D08AA89A8438698C3D, ___width_0)); }
	inline int32_t get_width_0() const { return ___width_0; }
	inline int32_t* get_address_of_width_0() { return &___width_0; }
	inline void set_width_0(int32_t value)
	{
		___width_0 = value;
	}

	inline static int32_t get_offset_of_height_1() { return static_cast<int32_t>(offsetof(VideoModeData_t7BC59F654FEA6A276ACE52D08AA89A8438698C3D, ___height_1)); }
	inline int32_t get_height_1() const { return ___height_1; }
	inline int32_t* get_address_of_height_1() { return &___height_1; }
	inline void set_height_1(int32_t value)
	{
		___height_1 = value;
	}

	inline static int32_t get_offset_of_frameRate_2() { return static_cast<int32_t>(offsetof(VideoModeData_t7BC59F654FEA6A276ACE52D08AA89A8438698C3D, ___frameRate_2)); }
	inline float get_frameRate_2() const { return ___frameRate_2; }
	inline float* get_address_of_frameRate_2() { return &___frameRate_2; }
	inline void set_frameRate_2(float value)
	{
		___frameRate_2 = value;
	}

	inline static int32_t get_offset_of_unused_3() { return static_cast<int32_t>(offsetof(VideoModeData_t7BC59F654FEA6A276ACE52D08AA89A8438698C3D, ___unused_3)); }
	inline int32_t get_unused_3() const { return ___unused_3; }
	inline int32_t* get_address_of_unused_3() { return &___unused_3; }
	inline void set_unused_3(int32_t value)
	{
		___unused_3 = value;
	}
};
#pragma pack(pop, tp)

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VIDEOMODEDATA_T7BC59F654FEA6A276ACE52D08AA89A8438698C3D_H
#ifndef DEVICETRACKER_TD6E28B77342C2CBE99C14112AFA51C0798EC3086_H
#define DEVICETRACKER_TD6E28B77342C2CBE99C14112AFA51C0798EC3086_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.DeviceTracker
struct  DeviceTracker_tD6E28B77342C2CBE99C14112AFA51C0798EC3086  : public Tracker_t11C8E7B84615512E8125186CDC5DF90D9D7B58F1
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEVICETRACKER_TD6E28B77342C2CBE99C14112AFA51C0798EC3086_H
#ifndef EYEWEARCALIBRATIONPROFILEMANAGERIMPL_TC0ADEEC68259AEB2D421E9031431C6B35832E39C_H
#define EYEWEARCALIBRATIONPROFILEMANAGERIMPL_TC0ADEEC68259AEB2D421E9031431C6B35832E39C_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.EyewearCalibrationProfileManagerImpl
struct  EyewearCalibrationProfileManagerImpl_tC0ADEEC68259AEB2D421E9031431C6B35832E39C  : public EyewearCalibrationProfileManager_tDC16C656B1E63F9F7FA7A165262CF001CFBF672A
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EYEWEARCALIBRATIONPROFILEMANAGERIMPL_TC0ADEEC68259AEB2D421E9031431C6B35832E39C_H
#ifndef EYEWEARDEVICE_T083CA7719B929A57A532B386322C61658849AA1E_H
#define EYEWEARDEVICE_T083CA7719B929A57A532B386322C61658849AA1E_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.EyewearDevice
struct  EyewearDevice_t083CA7719B929A57A532B386322C61658849AA1E  : public Device_t19A8D91DE8CD359592F4BFF8F0F025C06AE1B175
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EYEWEARDEVICE_T083CA7719B929A57A532B386322C61658849AA1E_H
#ifndef EYEWEARUSERCALIBRATORIMPL_T2FE95EA95FD1A73AFA1B2226F35D96EC38904E57_H
#define EYEWEARUSERCALIBRATORIMPL_T2FE95EA95FD1A73AFA1B2226F35D96EC38904E57_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.EyewearUserCalibratorImpl
struct  EyewearUserCalibratorImpl_t2FE95EA95FD1A73AFA1B2226F35D96EC38904E57  : public EyewearUserCalibrator_tFA27D2BE8A64087E551C93ADE2489D69A0A79A49
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EYEWEARUSERCALIBRATORIMPL_T2FE95EA95FD1A73AFA1B2226F35D96EC38904E57_H
#ifndef EYEWEARCALIBRATIONREADINGDATA_TDF46015B9C9367454D4D0FA812AFFA6B1CA737F2_H
#define EYEWEARCALIBRATIONREADINGDATA_TDF46015B9C9367454D4D0FA812AFFA6B1CA737F2_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.EyewearUserCalibratorImpl/EyewearCalibrationReadingData
struct  EyewearCalibrationReadingData_tDF46015B9C9367454D4D0FA812AFFA6B1CA737F2 
{
public:
	// System.Single[] Vuforia.EyewearUserCalibratorImpl/EyewearCalibrationReadingData::pose
	SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* ___pose_0;
	// System.Single Vuforia.EyewearUserCalibratorImpl/EyewearCalibrationReadingData::scale
	float ___scale_1;
	// System.Single Vuforia.EyewearUserCalibratorImpl/EyewearCalibrationReadingData::centerX
	float ___centerX_2;
	// System.Single Vuforia.EyewearUserCalibratorImpl/EyewearCalibrationReadingData::centerY
	float ___centerY_3;
	// System.Int32 Vuforia.EyewearUserCalibratorImpl/EyewearCalibrationReadingData::type
	int32_t ___type_4;

public:
	inline static int32_t get_offset_of_pose_0() { return static_cast<int32_t>(offsetof(EyewearCalibrationReadingData_tDF46015B9C9367454D4D0FA812AFFA6B1CA737F2, ___pose_0)); }
	inline SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* get_pose_0() const { return ___pose_0; }
	inline SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5** get_address_of_pose_0() { return &___pose_0; }
	inline void set_pose_0(SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* value)
	{
		___pose_0 = value;
		Il2CppCodeGenWriteBarrier((&___pose_0), value);
	}

	inline static int32_t get_offset_of_scale_1() { return static_cast<int32_t>(offsetof(EyewearCalibrationReadingData_tDF46015B9C9367454D4D0FA812AFFA6B1CA737F2, ___scale_1)); }
	inline float get_scale_1() const { return ___scale_1; }
	inline float* get_address_of_scale_1() { return &___scale_1; }
	inline void set_scale_1(float value)
	{
		___scale_1 = value;
	}

	inline static int32_t get_offset_of_centerX_2() { return static_cast<int32_t>(offsetof(EyewearCalibrationReadingData_tDF46015B9C9367454D4D0FA812AFFA6B1CA737F2, ___centerX_2)); }
	inline float get_centerX_2() const { return ___centerX_2; }
	inline float* get_address_of_centerX_2() { return &___centerX_2; }
	inline void set_centerX_2(float value)
	{
		___centerX_2 = value;
	}

	inline static int32_t get_offset_of_centerY_3() { return static_cast<int32_t>(offsetof(EyewearCalibrationReadingData_tDF46015B9C9367454D4D0FA812AFFA6B1CA737F2, ___centerY_3)); }
	inline float get_centerY_3() const { return ___centerY_3; }
	inline float* get_address_of_centerY_3() { return &___centerY_3; }
	inline void set_centerY_3(float value)
	{
		___centerY_3 = value;
	}

	inline static int32_t get_offset_of_type_4() { return static_cast<int32_t>(offsetof(EyewearCalibrationReadingData_tDF46015B9C9367454D4D0FA812AFFA6B1CA737F2, ___type_4)); }
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
// Native definition for P/Invoke marshalling of Vuforia.EyewearUserCalibratorImpl/EyewearCalibrationReadingData
#pragma pack(push, tp, 1)
struct EyewearCalibrationReadingData_tDF46015B9C9367454D4D0FA812AFFA6B1CA737F2_marshaled_pinvoke
{
	float* ___pose_0;
	float ___scale_1;
	float ___centerX_2;
	float ___centerY_3;
	int32_t ___type_4;
};
#pragma pack(pop, tp)
// Native definition for COM marshalling of Vuforia.EyewearUserCalibratorImpl/EyewearCalibrationReadingData
#pragma pack(push, tp, 1)
struct EyewearCalibrationReadingData_tDF46015B9C9367454D4D0FA812AFFA6B1CA737F2_marshaled_com
{
	float* ___pose_0;
	float ___scale_1;
	float ___centerX_2;
	float ___centerY_3;
	int32_t ___type_4;
};
#pragma pack(pop, tp)
#endif // EYEWEARCALIBRATIONREADINGDATA_TDF46015B9C9367454D4D0FA812AFFA6B1CA737F2_H
#ifndef FACTORYSETTER_T3BADB081A5868E10EE58A1DB08B7758C9FF6932C_H
#define FACTORYSETTER_T3BADB081A5868E10EE58A1DB08B7758C9FF6932C_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.FactorySetter
struct  FactorySetter_t3BADB081A5868E10EE58A1DB08B7758C9FF6932C  : public Attribute_tF048C13FB3C8CFCC53F82290E4A3F621089F9A74
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FACTORYSETTER_T3BADB081A5868E10EE58A1DB08B7758C9FF6932C_H
#ifndef OBJECTTARGETIMPL_TEDDDACB8EF83100B0896957801DF1F85DB6A126A_H
#define OBJECTTARGETIMPL_TEDDDACB8EF83100B0896957801DF1F85DB6A126A_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.ObjectTargetImpl
struct  ObjectTargetImpl_tEDDDACB8EF83100B0896957801DF1F85DB6A126A  : public TrackableImpl_t97E7D175DE38822AF55FC03FCA26FB62B7E290A2
{
public:
	// Vuforia.ITargetSize Vuforia.ObjectTargetImpl::mTargetSizeImpl
	RuntimeObject* ___mTargetSizeImpl_2;

public:
	inline static int32_t get_offset_of_mTargetSizeImpl_2() { return static_cast<int32_t>(offsetof(ObjectTargetImpl_tEDDDACB8EF83100B0896957801DF1F85DB6A126A, ___mTargetSizeImpl_2)); }
	inline RuntimeObject* get_mTargetSizeImpl_2() const { return ___mTargetSizeImpl_2; }
	inline RuntimeObject** get_address_of_mTargetSizeImpl_2() { return &___mTargetSizeImpl_2; }
	inline void set_mTargetSizeImpl_2(RuntimeObject* value)
	{
		___mTargetSizeImpl_2 = value;
		Il2CppCodeGenWriteBarrier((&___mTargetSizeImpl_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OBJECTTARGETIMPL_TEDDDACB8EF83100B0896957801DF1F85DB6A126A_H
#ifndef PLAYMODEEYEWEARCALIBRATIONPROFILEMANAGERIMPL_T982E245F4C6F44D2AA20EC4B5325719410E6CE82_H
#define PLAYMODEEYEWEARCALIBRATIONPROFILEMANAGERIMPL_T982E245F4C6F44D2AA20EC4B5325719410E6CE82_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.PlayModeEyewearCalibrationProfileManagerImpl
struct  PlayModeEyewearCalibrationProfileManagerImpl_t982E245F4C6F44D2AA20EC4B5325719410E6CE82  : public EyewearCalibrationProfileManager_tDC16C656B1E63F9F7FA7A165262CF001CFBF672A
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYMODEEYEWEARCALIBRATIONPROFILEMANAGERIMPL_T982E245F4C6F44D2AA20EC4B5325719410E6CE82_H
#ifndef PLAYMODEEYEWEARUSERCALIBRATORIMPL_TE8DA3526A523F1403B3124C890FE30ED6F54B3D1_H
#define PLAYMODEEYEWEARUSERCALIBRATORIMPL_TE8DA3526A523F1403B3124C890FE30ED6F54B3D1_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.PlayModeEyewearUserCalibratorImpl
struct  PlayModeEyewearUserCalibratorImpl_tE8DA3526A523F1403B3124C890FE30ED6F54B3D1  : public EyewearUserCalibrator_tFA27D2BE8A64087E551C93ADE2489D69A0A79A49
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYMODEEYEWEARUSERCALIBRATORIMPL_TE8DA3526A523F1403B3124C890FE30ED6F54B3D1_H
#ifndef INVALIDPATHEXCEPTION_T5B3E98CFCD9EBD7DDD33CEA489522902C9193D3F_H
#define INVALIDPATHEXCEPTION_T5B3E98CFCD9EBD7DDD33CEA489522902C9193D3F_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.PosixPath/InvalidPathException
struct  InvalidPathException_t5B3E98CFCD9EBD7DDD33CEA489522902C9193D3F  : public Exception_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INVALIDPATHEXCEPTION_T5B3E98CFCD9EBD7DDD33CEA489522902C9193D3F_H
#ifndef SMARTTERRAIN_T09E2ED8DC63BA7169F0DCDCC1BA4419BDB878E47_H
#define SMARTTERRAIN_T09E2ED8DC63BA7169F0DCDCC1BA4419BDB878E47_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.SmartTerrain
struct  SmartTerrain_t09E2ED8DC63BA7169F0DCDCC1BA4419BDB878E47  : public Tracker_t11C8E7B84615512E8125186CDC5DF90D9D7B58F1
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SMARTTERRAIN_T09E2ED8DC63BA7169F0DCDCC1BA4419BDB878E47_H
#ifndef ILLUMINATIONDATA_TD92AC3353F4A03A75AC592B597C88238195BF12C_H
#define ILLUMINATIONDATA_TD92AC3353F4A03A75AC592B597C88238195BF12C_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.TrackerData/IlluminationData
#pragma pack(push, tp, 1)
struct  IlluminationData_tD92AC3353F4A03A75AC592B597C88238195BF12C 
{
public:
	// System.Single Vuforia.TrackerData/IlluminationData::ambientIntensity
	float ___ambientIntensity_0;
	// System.Single Vuforia.TrackerData/IlluminationData::ambientColorTemperature
	float ___ambientColorTemperature_1;

public:
	inline static int32_t get_offset_of_ambientIntensity_0() { return static_cast<int32_t>(offsetof(IlluminationData_tD92AC3353F4A03A75AC592B597C88238195BF12C, ___ambientIntensity_0)); }
	inline float get_ambientIntensity_0() const { return ___ambientIntensity_0; }
	inline float* get_address_of_ambientIntensity_0() { return &___ambientIntensity_0; }
	inline void set_ambientIntensity_0(float value)
	{
		___ambientIntensity_0 = value;
	}

	inline static int32_t get_offset_of_ambientColorTemperature_1() { return static_cast<int32_t>(offsetof(IlluminationData_tD92AC3353F4A03A75AC592B597C88238195BF12C, ___ambientColorTemperature_1)); }
	inline float get_ambientColorTemperature_1() const { return ___ambientColorTemperature_1; }
	inline float* get_address_of_ambientColorTemperature_1() { return &___ambientColorTemperature_1; }
	inline void set_ambientColorTemperature_1(float value)
	{
		___ambientColorTemperature_1 = value;
	}
};
#pragma pack(pop, tp)

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ILLUMINATIONDATA_TD92AC3353F4A03A75AC592B597C88238195BF12C_H
#ifndef VIRTUALBUTTONDATA_TF16C663C156A49F65553E38299D185C298EFB1BF_H
#define VIRTUALBUTTONDATA_TF16C663C156A49F65553E38299D185C298EFB1BF_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.TrackerData/VirtualButtonData
#pragma pack(push, tp, 1)
struct  VirtualButtonData_tF16C663C156A49F65553E38299D185C298EFB1BF 
{
public:
	// System.Int32 Vuforia.TrackerData/VirtualButtonData::id
	int32_t ___id_0;
	// System.Int32 Vuforia.TrackerData/VirtualButtonData::isPressed
	int32_t ___isPressed_1;

public:
	inline static int32_t get_offset_of_id_0() { return static_cast<int32_t>(offsetof(VirtualButtonData_tF16C663C156A49F65553E38299D185C298EFB1BF, ___id_0)); }
	inline int32_t get_id_0() const { return ___id_0; }
	inline int32_t* get_address_of_id_0() { return &___id_0; }
	inline void set_id_0(int32_t value)
	{
		___id_0 = value;
	}

	inline static int32_t get_offset_of_isPressed_1() { return static_cast<int32_t>(offsetof(VirtualButtonData_tF16C663C156A49F65553E38299D185C298EFB1BF, ___isPressed_1)); }
	inline int32_t get_isPressed_1() const { return ___isPressed_1; }
	inline int32_t* get_address_of_isPressed_1() { return &___isPressed_1; }
	inline void set_isPressed_1(int32_t value)
	{
		___isPressed_1 = value;
	}
};
#pragma pack(pop, tp)

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VIRTUALBUTTONDATA_TF16C663C156A49F65553E38299D185C298EFB1BF_H
#ifndef TRACKABLEIDPAIR_T0ED43F39A2E02ABE4CC16B7E1EAB75CA03F3443F_H
#define TRACKABLEIDPAIR_T0ED43F39A2E02ABE4CC16B7E1EAB75CA03F3443F_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.VuforiaManager/TrackableIdPair
struct  TrackableIdPair_t0ED43F39A2E02ABE4CC16B7E1EAB75CA03F3443F 
{
public:
	// System.Int32 Vuforia.VuforiaManager/TrackableIdPair::TrackableId
	int32_t ___TrackableId_0;
	// System.Int32 Vuforia.VuforiaManager/TrackableIdPair::ResultId
	int32_t ___ResultId_1;

public:
	inline static int32_t get_offset_of_TrackableId_0() { return static_cast<int32_t>(offsetof(TrackableIdPair_t0ED43F39A2E02ABE4CC16B7E1EAB75CA03F3443F, ___TrackableId_0)); }
	inline int32_t get_TrackableId_0() const { return ___TrackableId_0; }
	inline int32_t* get_address_of_TrackableId_0() { return &___TrackableId_0; }
	inline void set_TrackableId_0(int32_t value)
	{
		___TrackableId_0 = value;
	}

	inline static int32_t get_offset_of_ResultId_1() { return static_cast<int32_t>(offsetof(TrackableIdPair_t0ED43F39A2E02ABE4CC16B7E1EAB75CA03F3443F, ___ResultId_1)); }
	inline int32_t get_ResultId_1() const { return ___ResultId_1; }
	inline int32_t* get_address_of_ResultId_1() { return &___ResultId_1; }
	inline void set_ResultId_1(int32_t value)
	{
		___ResultId_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRACKABLEIDPAIR_T0ED43F39A2E02ABE4CC16B7E1EAB75CA03F3443F_H
#ifndef VEC2I_T42F341F398E3117176C37CAAAF2D29943EA9FCF5_H
#define VEC2I_T42F341F398E3117176C37CAAAF2D29943EA9FCF5_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.VuforiaRenderer/Vec2I
#pragma pack(push, tp, 1)
struct  Vec2I_t42F341F398E3117176C37CAAAF2D29943EA9FCF5 
{
public:
	// System.Int32 Vuforia.VuforiaRenderer/Vec2I::x
	int32_t ___x_0;
	// System.Int32 Vuforia.VuforiaRenderer/Vec2I::y
	int32_t ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vec2I_t42F341F398E3117176C37CAAAF2D29943EA9FCF5, ___x_0)); }
	inline int32_t get_x_0() const { return ___x_0; }
	inline int32_t* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(int32_t value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vec2I_t42F341F398E3117176C37CAAAF2D29943EA9FCF5, ___y_1)); }
	inline int32_t get_y_1() const { return ___y_1; }
	inline int32_t* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(int32_t value)
	{
		___y_1 = value;
	}
};
#pragma pack(pop, tp)

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VEC2I_T42F341F398E3117176C37CAAAF2D29943EA9FCF5_H
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
#ifndef SCREENORIENTATION_T4AB8E2E02033B0EAEA0260B05B1D88DA8058BB51_H
#define SCREENORIENTATION_T4AB8E2E02033B0EAEA0260B05B1D88DA8058BB51_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.ScreenOrientation
struct  ScreenOrientation_t4AB8E2E02033B0EAEA0260B05B1D88DA8058BB51 
{
public:
	// System.Int32 UnityEngine.ScreenOrientation::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ScreenOrientation_t4AB8E2E02033B0EAEA0260B05B1D88DA8058BB51, ___value___2)); }
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
#endif // SCREENORIENTATION_T4AB8E2E02033B0EAEA0260B05B1D88DA8058BB51_H
#ifndef PROJECTIONMATRIXDATA_T68F1EB028D7C3DDEE47E84B50FC93F6495CCD018_H
#define PROJECTIONMATRIXDATA_T68F1EB028D7C3DDEE47E84B50FC93F6495CCD018_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.BackgroundPlaneBehaviour/ProjectionMatrixData
struct  ProjectionMatrixData_t68F1EB028D7C3DDEE47E84B50FC93F6495CCD018 
{
public:
	// UnityEngine.Matrix4x4 Vuforia.BackgroundPlaneBehaviour/ProjectionMatrixData::ProjectionMatrix
	Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  ___ProjectionMatrix_0;
	// UnityEngine.Matrix4x4 Vuforia.BackgroundPlaneBehaviour/ProjectionMatrixData::InverseMatrix
	Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  ___InverseMatrix_1;
	// System.Single Vuforia.BackgroundPlaneBehaviour/ProjectionMatrixData::HorizontalFoV
	float ___HorizontalFoV_2;
	// System.Single Vuforia.BackgroundPlaneBehaviour/ProjectionMatrixData::VerticalFoV
	float ___VerticalFoV_3;
	// UnityEngine.Vector3 Vuforia.BackgroundPlaneBehaviour/ProjectionMatrixData::CenterEyeRayFrom
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___CenterEyeRayFrom_4;
	// UnityEngine.Vector3 Vuforia.BackgroundPlaneBehaviour/ProjectionMatrixData::CenterEyeRayTo
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___CenterEyeRayTo_5;
	// System.Single Vuforia.BackgroundPlaneBehaviour/ProjectionMatrixData::MaxDepth
	float ___MaxDepth_6;

public:
	inline static int32_t get_offset_of_ProjectionMatrix_0() { return static_cast<int32_t>(offsetof(ProjectionMatrixData_t68F1EB028D7C3DDEE47E84B50FC93F6495CCD018, ___ProjectionMatrix_0)); }
	inline Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  get_ProjectionMatrix_0() const { return ___ProjectionMatrix_0; }
	inline Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA * get_address_of_ProjectionMatrix_0() { return &___ProjectionMatrix_0; }
	inline void set_ProjectionMatrix_0(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  value)
	{
		___ProjectionMatrix_0 = value;
	}

	inline static int32_t get_offset_of_InverseMatrix_1() { return static_cast<int32_t>(offsetof(ProjectionMatrixData_t68F1EB028D7C3DDEE47E84B50FC93F6495CCD018, ___InverseMatrix_1)); }
	inline Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  get_InverseMatrix_1() const { return ___InverseMatrix_1; }
	inline Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA * get_address_of_InverseMatrix_1() { return &___InverseMatrix_1; }
	inline void set_InverseMatrix_1(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  value)
	{
		___InverseMatrix_1 = value;
	}

	inline static int32_t get_offset_of_HorizontalFoV_2() { return static_cast<int32_t>(offsetof(ProjectionMatrixData_t68F1EB028D7C3DDEE47E84B50FC93F6495CCD018, ___HorizontalFoV_2)); }
	inline float get_HorizontalFoV_2() const { return ___HorizontalFoV_2; }
	inline float* get_address_of_HorizontalFoV_2() { return &___HorizontalFoV_2; }
	inline void set_HorizontalFoV_2(float value)
	{
		___HorizontalFoV_2 = value;
	}

	inline static int32_t get_offset_of_VerticalFoV_3() { return static_cast<int32_t>(offsetof(ProjectionMatrixData_t68F1EB028D7C3DDEE47E84B50FC93F6495CCD018, ___VerticalFoV_3)); }
	inline float get_VerticalFoV_3() const { return ___VerticalFoV_3; }
	inline float* get_address_of_VerticalFoV_3() { return &___VerticalFoV_3; }
	inline void set_VerticalFoV_3(float value)
	{
		___VerticalFoV_3 = value;
	}

	inline static int32_t get_offset_of_CenterEyeRayFrom_4() { return static_cast<int32_t>(offsetof(ProjectionMatrixData_t68F1EB028D7C3DDEE47E84B50FC93F6495CCD018, ___CenterEyeRayFrom_4)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_CenterEyeRayFrom_4() const { return ___CenterEyeRayFrom_4; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_CenterEyeRayFrom_4() { return &___CenterEyeRayFrom_4; }
	inline void set_CenterEyeRayFrom_4(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___CenterEyeRayFrom_4 = value;
	}

	inline static int32_t get_offset_of_CenterEyeRayTo_5() { return static_cast<int32_t>(offsetof(ProjectionMatrixData_t68F1EB028D7C3DDEE47E84B50FC93F6495CCD018, ___CenterEyeRayTo_5)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_CenterEyeRayTo_5() const { return ___CenterEyeRayTo_5; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_CenterEyeRayTo_5() { return &___CenterEyeRayTo_5; }
	inline void set_CenterEyeRayTo_5(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___CenterEyeRayTo_5 = value;
	}

	inline static int32_t get_offset_of_MaxDepth_6() { return static_cast<int32_t>(offsetof(ProjectionMatrixData_t68F1EB028D7C3DDEE47E84B50FC93F6495CCD018, ___MaxDepth_6)); }
	inline float get_MaxDepth_6() const { return ___MaxDepth_6; }
	inline float* get_address_of_MaxDepth_6() { return &___MaxDepth_6; }
	inline void set_MaxDepth_6(float value)
	{
		___MaxDepth_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PROJECTIONMATRIXDATA_T68F1EB028D7C3DDEE47E84B50FC93F6495CCD018_H
#ifndef CAMERACONFIGURATIONUTILITY_TFDDDF578E2D5422A9997F43A0658E6AB085EAA44_H
#define CAMERACONFIGURATIONUTILITY_TFDDDF578E2D5422A9997F43A0658E6AB085EAA44_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.CameraConfigurationUtility
struct  CameraConfigurationUtility_tFDDDF578E2D5422A9997F43A0658E6AB085EAA44  : public RuntimeObject
{
public:

public:
};

struct CameraConfigurationUtility_tFDDDF578E2D5422A9997F43A0658E6AB085EAA44_StaticFields
{
public:
	// UnityEngine.Vector4 Vuforia.CameraConfigurationUtility::MIN_CENTER
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___MIN_CENTER_0;
	// UnityEngine.Vector4 Vuforia.CameraConfigurationUtility::MAX_CENTER
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___MAX_CENTER_1;
	// UnityEngine.Vector4 Vuforia.CameraConfigurationUtility::MIN_BOTTOM
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___MIN_BOTTOM_2;
	// UnityEngine.Vector4 Vuforia.CameraConfigurationUtility::MIN_TOP
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___MIN_TOP_3;
	// UnityEngine.Vector4 Vuforia.CameraConfigurationUtility::MIN_LEFT
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___MIN_LEFT_4;
	// UnityEngine.Vector4 Vuforia.CameraConfigurationUtility::MIN_RIGHT
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___MIN_RIGHT_5;
	// UnityEngine.Vector4 Vuforia.CameraConfigurationUtility::MAX_BOTTOM
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___MAX_BOTTOM_6;
	// UnityEngine.Vector4 Vuforia.CameraConfigurationUtility::MAX_TOP
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___MAX_TOP_7;
	// UnityEngine.Vector4 Vuforia.CameraConfigurationUtility::MAX_LEFT
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___MAX_LEFT_8;
	// UnityEngine.Vector4 Vuforia.CameraConfigurationUtility::MAX_RIGHT
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___MAX_RIGHT_9;

public:
	inline static int32_t get_offset_of_MIN_CENTER_0() { return static_cast<int32_t>(offsetof(CameraConfigurationUtility_tFDDDF578E2D5422A9997F43A0658E6AB085EAA44_StaticFields, ___MIN_CENTER_0)); }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  get_MIN_CENTER_0() const { return ___MIN_CENTER_0; }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * get_address_of_MIN_CENTER_0() { return &___MIN_CENTER_0; }
	inline void set_MIN_CENTER_0(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  value)
	{
		___MIN_CENTER_0 = value;
	}

	inline static int32_t get_offset_of_MAX_CENTER_1() { return static_cast<int32_t>(offsetof(CameraConfigurationUtility_tFDDDF578E2D5422A9997F43A0658E6AB085EAA44_StaticFields, ___MAX_CENTER_1)); }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  get_MAX_CENTER_1() const { return ___MAX_CENTER_1; }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * get_address_of_MAX_CENTER_1() { return &___MAX_CENTER_1; }
	inline void set_MAX_CENTER_1(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  value)
	{
		___MAX_CENTER_1 = value;
	}

	inline static int32_t get_offset_of_MIN_BOTTOM_2() { return static_cast<int32_t>(offsetof(CameraConfigurationUtility_tFDDDF578E2D5422A9997F43A0658E6AB085EAA44_StaticFields, ___MIN_BOTTOM_2)); }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  get_MIN_BOTTOM_2() const { return ___MIN_BOTTOM_2; }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * get_address_of_MIN_BOTTOM_2() { return &___MIN_BOTTOM_2; }
	inline void set_MIN_BOTTOM_2(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  value)
	{
		___MIN_BOTTOM_2 = value;
	}

	inline static int32_t get_offset_of_MIN_TOP_3() { return static_cast<int32_t>(offsetof(CameraConfigurationUtility_tFDDDF578E2D5422A9997F43A0658E6AB085EAA44_StaticFields, ___MIN_TOP_3)); }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  get_MIN_TOP_3() const { return ___MIN_TOP_3; }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * get_address_of_MIN_TOP_3() { return &___MIN_TOP_3; }
	inline void set_MIN_TOP_3(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  value)
	{
		___MIN_TOP_3 = value;
	}

	inline static int32_t get_offset_of_MIN_LEFT_4() { return static_cast<int32_t>(offsetof(CameraConfigurationUtility_tFDDDF578E2D5422A9997F43A0658E6AB085EAA44_StaticFields, ___MIN_LEFT_4)); }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  get_MIN_LEFT_4() const { return ___MIN_LEFT_4; }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * get_address_of_MIN_LEFT_4() { return &___MIN_LEFT_4; }
	inline void set_MIN_LEFT_4(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  value)
	{
		___MIN_LEFT_4 = value;
	}

	inline static int32_t get_offset_of_MIN_RIGHT_5() { return static_cast<int32_t>(offsetof(CameraConfigurationUtility_tFDDDF578E2D5422A9997F43A0658E6AB085EAA44_StaticFields, ___MIN_RIGHT_5)); }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  get_MIN_RIGHT_5() const { return ___MIN_RIGHT_5; }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * get_address_of_MIN_RIGHT_5() { return &___MIN_RIGHT_5; }
	inline void set_MIN_RIGHT_5(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  value)
	{
		___MIN_RIGHT_5 = value;
	}

	inline static int32_t get_offset_of_MAX_BOTTOM_6() { return static_cast<int32_t>(offsetof(CameraConfigurationUtility_tFDDDF578E2D5422A9997F43A0658E6AB085EAA44_StaticFields, ___MAX_BOTTOM_6)); }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  get_MAX_BOTTOM_6() const { return ___MAX_BOTTOM_6; }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * get_address_of_MAX_BOTTOM_6() { return &___MAX_BOTTOM_6; }
	inline void set_MAX_BOTTOM_6(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  value)
	{
		___MAX_BOTTOM_6 = value;
	}

	inline static int32_t get_offset_of_MAX_TOP_7() { return static_cast<int32_t>(offsetof(CameraConfigurationUtility_tFDDDF578E2D5422A9997F43A0658E6AB085EAA44_StaticFields, ___MAX_TOP_7)); }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  get_MAX_TOP_7() const { return ___MAX_TOP_7; }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * get_address_of_MAX_TOP_7() { return &___MAX_TOP_7; }
	inline void set_MAX_TOP_7(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  value)
	{
		___MAX_TOP_7 = value;
	}

	inline static int32_t get_offset_of_MAX_LEFT_8() { return static_cast<int32_t>(offsetof(CameraConfigurationUtility_tFDDDF578E2D5422A9997F43A0658E6AB085EAA44_StaticFields, ___MAX_LEFT_8)); }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  get_MAX_LEFT_8() const { return ___MAX_LEFT_8; }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * get_address_of_MAX_LEFT_8() { return &___MAX_LEFT_8; }
	inline void set_MAX_LEFT_8(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  value)
	{
		___MAX_LEFT_8 = value;
	}

	inline static int32_t get_offset_of_MAX_RIGHT_9() { return static_cast<int32_t>(offsetof(CameraConfigurationUtility_tFDDDF578E2D5422A9997F43A0658E6AB085EAA44_StaticFields, ___MAX_RIGHT_9)); }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  get_MAX_RIGHT_9() const { return ___MAX_RIGHT_9; }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * get_address_of_MAX_RIGHT_9() { return &___MAX_RIGHT_9; }
	inline void set_MAX_RIGHT_9(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  value)
	{
		___MAX_RIGHT_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CAMERACONFIGURATIONUTILITY_TFDDDF578E2D5422A9997F43A0658E6AB085EAA44_H
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
#ifndef DATATYPE_TEDADE5E338501A7568E6F61544B9A772E9D8AD9B_H
#define DATATYPE_TEDADE5E338501A7568E6F61544B9A772E9D8AD9B_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.CameraDevice/CameraField/DataType
struct  DataType_tEDADE5E338501A7568E6F61544B9A772E9D8AD9B 
{
public:
	// System.Int32 Vuforia.CameraDevice/CameraField/DataType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DataType_tEDADE5E338501A7568E6F61544B9A772E9D8AD9B, ___value___2)); }
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
#endif // DATATYPE_TEDADE5E338501A7568E6F61544B9A772E9D8AD9B_H
#ifndef FOCUSMODE_T649DA432637F3552AFF51C0E9D5F7BFB478CA84E_H
#define FOCUSMODE_T649DA432637F3552AFF51C0E9D5F7BFB478CA84E_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.CameraDevice/FocusMode
struct  FocusMode_t649DA432637F3552AFF51C0E9D5F7BFB478CA84E 
{
public:
	// System.Int32 Vuforia.CameraDevice/FocusMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FocusMode_t649DA432637F3552AFF51C0E9D5F7BFB478CA84E, ___value___2)); }
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
#endif // FOCUSMODE_T649DA432637F3552AFF51C0E9D5F7BFB478CA84E_H
#ifndef DATASETOBJECTTARGETIMPL_TC2D896B84A1FDE730F7E2F20045D12CBC6F30C98_H
#define DATASETOBJECTTARGETIMPL_TC2D896B84A1FDE730F7E2F20045D12CBC6F30C98_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.DataSetObjectTargetImpl
struct  DataSetObjectTargetImpl_tC2D896B84A1FDE730F7E2F20045D12CBC6F30C98  : public ObjectTargetImpl_tEDDDACB8EF83100B0896957801DF1F85DB6A126A
{
public:
	// Vuforia.DataSet Vuforia.DataSetObjectTargetImpl::mDataSet
	DataSet_t9E9CB4ECE4C6C5C7B2FD9597B83FBAB7C55A4644 * ___mDataSet_3;

public:
	inline static int32_t get_offset_of_mDataSet_3() { return static_cast<int32_t>(offsetof(DataSetObjectTargetImpl_tC2D896B84A1FDE730F7E2F20045D12CBC6F30C98, ___mDataSet_3)); }
	inline DataSet_t9E9CB4ECE4C6C5C7B2FD9597B83FBAB7C55A4644 * get_mDataSet_3() const { return ___mDataSet_3; }
	inline DataSet_t9E9CB4ECE4C6C5C7B2FD9597B83FBAB7C55A4644 ** get_address_of_mDataSet_3() { return &___mDataSet_3; }
	inline void set_mDataSet_3(DataSet_t9E9CB4ECE4C6C5C7B2FD9597B83FBAB7C55A4644 * value)
	{
		___mDataSet_3 = value;
		Il2CppCodeGenWriteBarrier((&___mDataSet_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATASETOBJECTTARGETIMPL_TC2D896B84A1FDE730F7E2F20045D12CBC6F30C98_H
#ifndef DATASETTARGETSIZE_T8B732BB6F36DEB1B2232D34B1E1425BD3FFAE517_H
#define DATASETTARGETSIZE_T8B732BB6F36DEB1B2232D34B1E1425BD3FFAE517_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.DataSetTargetSize
struct  DataSetTargetSize_t8B732BB6F36DEB1B2232D34B1E1425BD3FFAE517  : public RuntimeObject
{
public:
	// UnityEngine.Vector3 Vuforia.DataSetTargetSize::mSize
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___mSize_0;
	// System.String Vuforia.DataSetTargetSize::mName
	String_t* ___mName_1;
	// Vuforia.DataSet Vuforia.DataSetTargetSize::mDataSet
	DataSet_t9E9CB4ECE4C6C5C7B2FD9597B83FBAB7C55A4644 * ___mDataSet_2;

public:
	inline static int32_t get_offset_of_mSize_0() { return static_cast<int32_t>(offsetof(DataSetTargetSize_t8B732BB6F36DEB1B2232D34B1E1425BD3FFAE517, ___mSize_0)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_mSize_0() const { return ___mSize_0; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_mSize_0() { return &___mSize_0; }
	inline void set_mSize_0(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___mSize_0 = value;
	}

	inline static int32_t get_offset_of_mName_1() { return static_cast<int32_t>(offsetof(DataSetTargetSize_t8B732BB6F36DEB1B2232D34B1E1425BD3FFAE517, ___mName_1)); }
	inline String_t* get_mName_1() const { return ___mName_1; }
	inline String_t** get_address_of_mName_1() { return &___mName_1; }
	inline void set_mName_1(String_t* value)
	{
		___mName_1 = value;
		Il2CppCodeGenWriteBarrier((&___mName_1), value);
	}

	inline static int32_t get_offset_of_mDataSet_2() { return static_cast<int32_t>(offsetof(DataSetTargetSize_t8B732BB6F36DEB1B2232D34B1E1425BD3FFAE517, ___mDataSet_2)); }
	inline DataSet_t9E9CB4ECE4C6C5C7B2FD9597B83FBAB7C55A4644 * get_mDataSet_2() const { return ___mDataSet_2; }
	inline DataSet_t9E9CB4ECE4C6C5C7B2FD9597B83FBAB7C55A4644 ** get_address_of_mDataSet_2() { return &___mDataSet_2; }
	inline void set_mDataSet_2(DataSet_t9E9CB4ECE4C6C5C7B2FD9597B83FBAB7C55A4644 * value)
	{
		___mDataSet_2 = value;
		Il2CppCodeGenWriteBarrier((&___mDataSet_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATASETTARGETSIZE_T8B732BB6F36DEB1B2232D34B1E1425BD3FFAE517_H
#ifndef EYEDATA_T8CBA619508D949CB8004F2594FB4F1B327554899_H
#define EYEDATA_T8CBA619508D949CB8004F2594FB4F1B327554899_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.DedicatedEyewearCameraConfiguration/EyeData
struct  EyeData_t8CBA619508D949CB8004F2594FB4F1B327554899 
{
public:
	// UnityEngine.Vector3 Vuforia.DedicatedEyewearCameraConfiguration/EyeData::OffsetPosition
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___OffsetPosition_0;
	// UnityEngine.Quaternion Vuforia.DedicatedEyewearCameraConfiguration/EyeData::OffsetRotation
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___OffsetRotation_1;
	// UnityEngine.Matrix4x4 Vuforia.DedicatedEyewearCameraConfiguration/EyeData::ProjectionMatrix
	Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  ___ProjectionMatrix_2;

public:
	inline static int32_t get_offset_of_OffsetPosition_0() { return static_cast<int32_t>(offsetof(EyeData_t8CBA619508D949CB8004F2594FB4F1B327554899, ___OffsetPosition_0)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_OffsetPosition_0() const { return ___OffsetPosition_0; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_OffsetPosition_0() { return &___OffsetPosition_0; }
	inline void set_OffsetPosition_0(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___OffsetPosition_0 = value;
	}

	inline static int32_t get_offset_of_OffsetRotation_1() { return static_cast<int32_t>(offsetof(EyeData_t8CBA619508D949CB8004F2594FB4F1B327554899, ___OffsetRotation_1)); }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  get_OffsetRotation_1() const { return ___OffsetRotation_1; }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * get_address_of_OffsetRotation_1() { return &___OffsetRotation_1; }
	inline void set_OffsetRotation_1(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  value)
	{
		___OffsetRotation_1 = value;
	}

	inline static int32_t get_offset_of_ProjectionMatrix_2() { return static_cast<int32_t>(offsetof(EyeData_t8CBA619508D949CB8004F2594FB4F1B327554899, ___ProjectionMatrix_2)); }
	inline Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  get_ProjectionMatrix_2() const { return ___ProjectionMatrix_2; }
	inline Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA * get_address_of_ProjectionMatrix_2() { return &___ProjectionMatrix_2; }
	inline void set_ProjectionMatrix_2(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  value)
	{
		___ProjectionMatrix_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EYEDATA_T8CBA619508D949CB8004F2594FB4F1B327554899_H
#ifndef DEDICATEDEYEWEARDEVICE_T636A2A6A914BA544F7C74C9E1C34565A0838B400_H
#define DEDICATEDEYEWEARDEVICE_T636A2A6A914BA544F7C74C9E1C34565A0838B400_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.DedicatedEyewearDevice
struct  DedicatedEyewearDevice_t636A2A6A914BA544F7C74C9E1C34565A0838B400  : public EyewearDevice_t083CA7719B929A57A532B386322C61658849AA1E
{
public:
	// Vuforia.EyewearCalibrationProfileManager Vuforia.DedicatedEyewearDevice::mProfileManager
	EyewearCalibrationProfileManager_tDC16C656B1E63F9F7FA7A165262CF001CFBF672A * ___mProfileManager_1;
	// Vuforia.EyewearUserCalibrator Vuforia.DedicatedEyewearDevice::mCalibrator
	EyewearUserCalibrator_tFA27D2BE8A64087E551C93ADE2489D69A0A79A49 * ___mCalibrator_2;

public:
	inline static int32_t get_offset_of_mProfileManager_1() { return static_cast<int32_t>(offsetof(DedicatedEyewearDevice_t636A2A6A914BA544F7C74C9E1C34565A0838B400, ___mProfileManager_1)); }
	inline EyewearCalibrationProfileManager_tDC16C656B1E63F9F7FA7A165262CF001CFBF672A * get_mProfileManager_1() const { return ___mProfileManager_1; }
	inline EyewearCalibrationProfileManager_tDC16C656B1E63F9F7FA7A165262CF001CFBF672A ** get_address_of_mProfileManager_1() { return &___mProfileManager_1; }
	inline void set_mProfileManager_1(EyewearCalibrationProfileManager_tDC16C656B1E63F9F7FA7A165262CF001CFBF672A * value)
	{
		___mProfileManager_1 = value;
		Il2CppCodeGenWriteBarrier((&___mProfileManager_1), value);
	}

	inline static int32_t get_offset_of_mCalibrator_2() { return static_cast<int32_t>(offsetof(DedicatedEyewearDevice_t636A2A6A914BA544F7C74C9E1C34565A0838B400, ___mCalibrator_2)); }
	inline EyewearUserCalibrator_tFA27D2BE8A64087E551C93ADE2489D69A0A79A49 * get_mCalibrator_2() const { return ___mCalibrator_2; }
	inline EyewearUserCalibrator_tFA27D2BE8A64087E551C93ADE2489D69A0A79A49 ** get_address_of_mCalibrator_2() { return &___mCalibrator_2; }
	inline void set_mCalibrator_2(EyewearUserCalibrator_tFA27D2BE8A64087E551C93ADE2489D69A0A79A49 * value)
	{
		___mCalibrator_2 = value;
		Il2CppCodeGenWriteBarrier((&___mCalibrator_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEDICATEDEYEWEARDEVICE_T636A2A6A914BA544F7C74C9E1C34565A0838B400_H
#ifndef MODE_T3D19562359F8BBFACBD891530120B7C58676F96C_H
#define MODE_T3D19562359F8BBFACBD891530120B7C58676F96C_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.Device/Mode
struct  Mode_t3D19562359F8BBFACBD891530120B7C58676F96C 
{
public:
	// System.Int32 Vuforia.Device/Mode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Mode_t3D19562359F8BBFACBD891530120B7C58676F96C, ___value___2)); }
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
#endif // MODE_T3D19562359F8BBFACBD891530120B7C58676F96C_H
#ifndef TRACKING_MODE_T2ABEC66C8561190920E2F2637F28B37437D2E5E0_H
#define TRACKING_MODE_T2ABEC66C8561190920E2F2637F28B37437D2E5E0_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.DeviceTracker/TRACKING_MODE
struct  TRACKING_MODE_t2ABEC66C8561190920E2F2637F28B37437D2E5E0 
{
public:
	// System.Int32 Vuforia.DeviceTracker/TRACKING_MODE::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TRACKING_MODE_t2ABEC66C8561190920E2F2637F28B37437D2E5E0, ___value___2)); }
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
#endif // TRACKING_MODE_T2ABEC66C8561190920E2F2637F28B37437D2E5E0_H
#ifndef STEREOFRAMEWORK_T95A56F9A03F0EBAFFC34ABBE8309C936859E13BA_H
#define STEREOFRAMEWORK_T95A56F9A03F0EBAFFC34ABBE8309C936859E13BA_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.DigitalEyewearARController/StereoFramework
struct  StereoFramework_t95A56F9A03F0EBAFFC34ABBE8309C936859E13BA 
{
public:
	// System.Int32 Vuforia.DigitalEyewearARController/StereoFramework::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(StereoFramework_t95A56F9A03F0EBAFFC34ABBE8309C936859E13BA, ___value___2)); }
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
#endif // STEREOFRAMEWORK_T95A56F9A03F0EBAFFC34ABBE8309C936859E13BA_H
#ifndef DISABLEDSETTARGETSIZE_TED3AEC3CD7D4DA45A1D88625566B3D8E9141B0DA_H
#define DISABLEDSETTARGETSIZE_TED3AEC3CD7D4DA45A1D88625566B3D8E9141B0DA_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.DisabledSetTargetSize
struct  DisabledSetTargetSize_tED3AEC3CD7D4DA45A1D88625566B3D8E9141B0DA  : public RuntimeObject
{
public:
	// UnityEngine.Vector3 Vuforia.DisabledSetTargetSize::mSize
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___mSize_0;

public:
	inline static int32_t get_offset_of_mSize_0() { return static_cast<int32_t>(offsetof(DisabledSetTargetSize_tED3AEC3CD7D4DA45A1D88625566B3D8E9141B0DA, ___mSize_0)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_mSize_0() const { return ___mSize_0; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_mSize_0() { return &___mSize_0; }
	inline void set_mSize_0(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___mSize_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DISABLEDSETTARGETSIZE_TED3AEC3CD7D4DA45A1D88625566B3D8E9141B0DA_H
#ifndef FUSIONPROVIDERTYPE_T0FD88A0D7F1544448DAEF1A9EAB5FBB591A495C2_H
#define FUSIONPROVIDERTYPE_T0FD88A0D7F1544448DAEF1A9EAB5FBB591A495C2_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.FusionProviderType
struct  FusionProviderType_t0FD88A0D7F1544448DAEF1A9EAB5FBB591A495C2 
{
public:
	// System.Int32 Vuforia.FusionProviderType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FusionProviderType_t0FD88A0D7F1544448DAEF1A9EAB5FBB591A495C2, ___value___2)); }
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
#endif // FUSIONPROVIDERTYPE_T0FD88A0D7F1544448DAEF1A9EAB5FBB591A495C2_H
#ifndef CLIPPING_MODE_T74517F84F38E21AC75F4DB3A1D76698EA0D2580D_H
#define CLIPPING_MODE_T74517F84F38E21AC75F4DB3A1D76698EA0D2580D_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.HideExcessAreaUtility/CLIPPING_MODE
struct  CLIPPING_MODE_t74517F84F38E21AC75F4DB3A1D76698EA0D2580D 
{
public:
	// System.Int32 Vuforia.HideExcessAreaUtility/CLIPPING_MODE::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CLIPPING_MODE_t74517F84F38E21AC75F4DB3A1D76698EA0D2580D, ___value___2)); }
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
#endif // CLIPPING_MODE_T74517F84F38E21AC75F4DB3A1D76698EA0D2580D_H
#ifndef INSTANCEIDTYPE_T2B8C4E1066D9FFD1C8BAA369E303860476BABF0D_H
#define INSTANCEIDTYPE_T2B8C4E1066D9FFD1C8BAA369E303860476BABF0D_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.InstanceIdType
struct  InstanceIdType_t2B8C4E1066D9FFD1C8BAA369E303860476BABF0D 
{
public:
	// System.Int32 Vuforia.InstanceIdType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(InstanceIdType_t2B8C4E1066D9FFD1C8BAA369E303860476BABF0D, ___value___2)); }
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
#endif // INSTANCEIDTYPE_T2B8C4E1066D9FFD1C8BAA369E303860476BABF0D_H
#ifndef LATELATCHINGMANAGER_T989F0737102DC3958150786EDFBA8BBE6C63663C_H
#define LATELATCHINGMANAGER_T989F0737102DC3958150786EDFBA8BBE6C63663C_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.LateLatchingManager
struct  LateLatchingManager_t989F0737102DC3958150786EDFBA8BBE6C63663C  : public RuntimeObject
{
public:
	// System.Boolean Vuforia.LateLatchingManager::mInitialized
	bool ___mInitialized_0;
	// System.Boolean Vuforia.LateLatchingManager::mEnabled
	bool ___mEnabled_1;
	// System.Boolean Vuforia.LateLatchingManager::mUpdated
	bool ___mUpdated_2;
	// UnityEngine.Vector3 Vuforia.LateLatchingManager::mCachedPositionalOffset
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___mCachedPositionalOffset_3;
	// UnityEngine.Quaternion Vuforia.LateLatchingManager::mCachedRotationalOffset
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___mCachedRotationalOffset_4;
	// Vuforia.TrackerData/TrackableResultData[] Vuforia.LateLatchingManager::mCachedTrackableResultDataArray
	TrackableResultDataU5BU5D_t9F14AA7BB2B4B86B497397AA4ABC42C964D0477D* ___mCachedTrackableResultDataArray_5;
	// Vuforia.TrackerData/VuMarkTargetResultData[] Vuforia.LateLatchingManager::mCachedVuMarkResultDataArray
	VuMarkTargetResultDataU5BU5D_t0AAD90D01B7B61C91A7B4DE994F065D01013FF9A* ___mCachedVuMarkResultDataArray_6;
	// Vuforia.VuforiaManager/TrackableIdPair Vuforia.LateLatchingManager::mCachedOriginTrackableID
	TrackableIdPair_t0ED43F39A2E02ABE4CC16B7E1EAB75CA03F3443F  ___mCachedOriginTrackableID_7;
	// System.Int32 Vuforia.LateLatchingManager::mCachedFrameIndex
	int32_t ___mCachedFrameIndex_8;

public:
	inline static int32_t get_offset_of_mInitialized_0() { return static_cast<int32_t>(offsetof(LateLatchingManager_t989F0737102DC3958150786EDFBA8BBE6C63663C, ___mInitialized_0)); }
	inline bool get_mInitialized_0() const { return ___mInitialized_0; }
	inline bool* get_address_of_mInitialized_0() { return &___mInitialized_0; }
	inline void set_mInitialized_0(bool value)
	{
		___mInitialized_0 = value;
	}

	inline static int32_t get_offset_of_mEnabled_1() { return static_cast<int32_t>(offsetof(LateLatchingManager_t989F0737102DC3958150786EDFBA8BBE6C63663C, ___mEnabled_1)); }
	inline bool get_mEnabled_1() const { return ___mEnabled_1; }
	inline bool* get_address_of_mEnabled_1() { return &___mEnabled_1; }
	inline void set_mEnabled_1(bool value)
	{
		___mEnabled_1 = value;
	}

	inline static int32_t get_offset_of_mUpdated_2() { return static_cast<int32_t>(offsetof(LateLatchingManager_t989F0737102DC3958150786EDFBA8BBE6C63663C, ___mUpdated_2)); }
	inline bool get_mUpdated_2() const { return ___mUpdated_2; }
	inline bool* get_address_of_mUpdated_2() { return &___mUpdated_2; }
	inline void set_mUpdated_2(bool value)
	{
		___mUpdated_2 = value;
	}

	inline static int32_t get_offset_of_mCachedPositionalOffset_3() { return static_cast<int32_t>(offsetof(LateLatchingManager_t989F0737102DC3958150786EDFBA8BBE6C63663C, ___mCachedPositionalOffset_3)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_mCachedPositionalOffset_3() const { return ___mCachedPositionalOffset_3; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_mCachedPositionalOffset_3() { return &___mCachedPositionalOffset_3; }
	inline void set_mCachedPositionalOffset_3(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___mCachedPositionalOffset_3 = value;
	}

	inline static int32_t get_offset_of_mCachedRotationalOffset_4() { return static_cast<int32_t>(offsetof(LateLatchingManager_t989F0737102DC3958150786EDFBA8BBE6C63663C, ___mCachedRotationalOffset_4)); }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  get_mCachedRotationalOffset_4() const { return ___mCachedRotationalOffset_4; }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * get_address_of_mCachedRotationalOffset_4() { return &___mCachedRotationalOffset_4; }
	inline void set_mCachedRotationalOffset_4(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  value)
	{
		___mCachedRotationalOffset_4 = value;
	}

	inline static int32_t get_offset_of_mCachedTrackableResultDataArray_5() { return static_cast<int32_t>(offsetof(LateLatchingManager_t989F0737102DC3958150786EDFBA8BBE6C63663C, ___mCachedTrackableResultDataArray_5)); }
	inline TrackableResultDataU5BU5D_t9F14AA7BB2B4B86B497397AA4ABC42C964D0477D* get_mCachedTrackableResultDataArray_5() const { return ___mCachedTrackableResultDataArray_5; }
	inline TrackableResultDataU5BU5D_t9F14AA7BB2B4B86B497397AA4ABC42C964D0477D** get_address_of_mCachedTrackableResultDataArray_5() { return &___mCachedTrackableResultDataArray_5; }
	inline void set_mCachedTrackableResultDataArray_5(TrackableResultDataU5BU5D_t9F14AA7BB2B4B86B497397AA4ABC42C964D0477D* value)
	{
		___mCachedTrackableResultDataArray_5 = value;
		Il2CppCodeGenWriteBarrier((&___mCachedTrackableResultDataArray_5), value);
	}

	inline static int32_t get_offset_of_mCachedVuMarkResultDataArray_6() { return static_cast<int32_t>(offsetof(LateLatchingManager_t989F0737102DC3958150786EDFBA8BBE6C63663C, ___mCachedVuMarkResultDataArray_6)); }
	inline VuMarkTargetResultDataU5BU5D_t0AAD90D01B7B61C91A7B4DE994F065D01013FF9A* get_mCachedVuMarkResultDataArray_6() const { return ___mCachedVuMarkResultDataArray_6; }
	inline VuMarkTargetResultDataU5BU5D_t0AAD90D01B7B61C91A7B4DE994F065D01013FF9A** get_address_of_mCachedVuMarkResultDataArray_6() { return &___mCachedVuMarkResultDataArray_6; }
	inline void set_mCachedVuMarkResultDataArray_6(VuMarkTargetResultDataU5BU5D_t0AAD90D01B7B61C91A7B4DE994F065D01013FF9A* value)
	{
		___mCachedVuMarkResultDataArray_6 = value;
		Il2CppCodeGenWriteBarrier((&___mCachedVuMarkResultDataArray_6), value);
	}

	inline static int32_t get_offset_of_mCachedOriginTrackableID_7() { return static_cast<int32_t>(offsetof(LateLatchingManager_t989F0737102DC3958150786EDFBA8BBE6C63663C, ___mCachedOriginTrackableID_7)); }
	inline TrackableIdPair_t0ED43F39A2E02ABE4CC16B7E1EAB75CA03F3443F  get_mCachedOriginTrackableID_7() const { return ___mCachedOriginTrackableID_7; }
	inline TrackableIdPair_t0ED43F39A2E02ABE4CC16B7E1EAB75CA03F3443F * get_address_of_mCachedOriginTrackableID_7() { return &___mCachedOriginTrackableID_7; }
	inline void set_mCachedOriginTrackableID_7(TrackableIdPair_t0ED43F39A2E02ABE4CC16B7E1EAB75CA03F3443F  value)
	{
		___mCachedOriginTrackableID_7 = value;
	}

	inline static int32_t get_offset_of_mCachedFrameIndex_8() { return static_cast<int32_t>(offsetof(LateLatchingManager_t989F0737102DC3958150786EDFBA8BBE6C63663C, ___mCachedFrameIndex_8)); }
	inline int32_t get_mCachedFrameIndex_8() const { return ___mCachedFrameIndex_8; }
	inline int32_t* get_address_of_mCachedFrameIndex_8() { return &___mCachedFrameIndex_8; }
	inline void set_mCachedFrameIndex_8(int32_t value)
	{
		___mCachedFrameIndex_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LATELATCHINGMANAGER_T989F0737102DC3958150786EDFBA8BBE6C63663C_H
#ifndef MODE_T85FA3C2ABF84A0D6BB7742A375C9DA35140008AB_H
#define MODE_T85FA3C2ABF84A0D6BB7742A375C9DA35140008AB_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.MixedRealityController/Mode
struct  Mode_t85FA3C2ABF84A0D6BB7742A375C9DA35140008AB 
{
public:
	// System.Int32 Vuforia.MixedRealityController/Mode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Mode_t85FA3C2ABF84A0D6BB7742A375C9DA35140008AB, ___value___2)); }
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
#endif // MODE_T85FA3C2ABF84A0D6BB7742A375C9DA35140008AB_H
#ifndef PLAYMODEEYEWEARDEVICE_T23F975E41EB03A9E26FD9408058C481B8550950F_H
#define PLAYMODEEYEWEARDEVICE_T23F975E41EB03A9E26FD9408058C481B8550950F_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.PlayModeEyewearDevice
struct  PlayModeEyewearDevice_t23F975E41EB03A9E26FD9408058C481B8550950F  : public EyewearDevice_t083CA7719B929A57A532B386322C61658849AA1E
{
public:
	// Vuforia.EyewearCalibrationProfileManager Vuforia.PlayModeEyewearDevice::mProfileManager
	EyewearCalibrationProfileManager_tDC16C656B1E63F9F7FA7A165262CF001CFBF672A * ___mProfileManager_1;
	// Vuforia.EyewearUserCalibrator Vuforia.PlayModeEyewearDevice::mCalibrator
	EyewearUserCalibrator_tFA27D2BE8A64087E551C93ADE2489D69A0A79A49 * ___mCalibrator_2;
	// System.Boolean Vuforia.PlayModeEyewearDevice::mDummyPredictiveTracking
	bool ___mDummyPredictiveTracking_3;

public:
	inline static int32_t get_offset_of_mProfileManager_1() { return static_cast<int32_t>(offsetof(PlayModeEyewearDevice_t23F975E41EB03A9E26FD9408058C481B8550950F, ___mProfileManager_1)); }
	inline EyewearCalibrationProfileManager_tDC16C656B1E63F9F7FA7A165262CF001CFBF672A * get_mProfileManager_1() const { return ___mProfileManager_1; }
	inline EyewearCalibrationProfileManager_tDC16C656B1E63F9F7FA7A165262CF001CFBF672A ** get_address_of_mProfileManager_1() { return &___mProfileManager_1; }
	inline void set_mProfileManager_1(EyewearCalibrationProfileManager_tDC16C656B1E63F9F7FA7A165262CF001CFBF672A * value)
	{
		___mProfileManager_1 = value;
		Il2CppCodeGenWriteBarrier((&___mProfileManager_1), value);
	}

	inline static int32_t get_offset_of_mCalibrator_2() { return static_cast<int32_t>(offsetof(PlayModeEyewearDevice_t23F975E41EB03A9E26FD9408058C481B8550950F, ___mCalibrator_2)); }
	inline EyewearUserCalibrator_tFA27D2BE8A64087E551C93ADE2489D69A0A79A49 * get_mCalibrator_2() const { return ___mCalibrator_2; }
	inline EyewearUserCalibrator_tFA27D2BE8A64087E551C93ADE2489D69A0A79A49 ** get_address_of_mCalibrator_2() { return &___mCalibrator_2; }
	inline void set_mCalibrator_2(EyewearUserCalibrator_tFA27D2BE8A64087E551C93ADE2489D69A0A79A49 * value)
	{
		___mCalibrator_2 = value;
		Il2CppCodeGenWriteBarrier((&___mCalibrator_2), value);
	}

	inline static int32_t get_offset_of_mDummyPredictiveTracking_3() { return static_cast<int32_t>(offsetof(PlayModeEyewearDevice_t23F975E41EB03A9E26FD9408058C481B8550950F, ___mDummyPredictiveTracking_3)); }
	inline bool get_mDummyPredictiveTracking_3() const { return ___mDummyPredictiveTracking_3; }
	inline bool* get_address_of_mDummyPredictiveTracking_3() { return &___mDummyPredictiveTracking_3; }
	inline void set_mDummyPredictiveTracking_3(bool value)
	{
		___mDummyPredictiveTracking_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYMODEEYEWEARDEVICE_T23F975E41EB03A9E26FD9408058C481B8550950F_H
#ifndef ROTATIONALDEVICETRACKER_TFDD94B013A18CCDE7AED9F6A13C8147742E66DEA_H
#define ROTATIONALDEVICETRACKER_TFDD94B013A18CCDE7AED9F6A13C8147742E66DEA_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.RotationalDeviceTracker
struct  RotationalDeviceTracker_tFDD94B013A18CCDE7AED9F6A13C8147742E66DEA  : public DeviceTracker_tD6E28B77342C2CBE99C14112AFA51C0798EC3086
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ROTATIONALDEVICETRACKER_TFDD94B013A18CCDE7AED9F6A13C8147742E66DEA_H
#ifndef MODEL_CORRECTION_MODE_TA628D33CBBD6F312044315FED05B471AD6AEA17E_H
#define MODEL_CORRECTION_MODE_TA628D33CBBD6F312044315FED05B471AD6AEA17E_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.RotationalDeviceTracker/MODEL_CORRECTION_MODE
struct  MODEL_CORRECTION_MODE_tA628D33CBBD6F312044315FED05B471AD6AEA17E 
{
public:
	// System.Int32 Vuforia.RotationalDeviceTracker/MODEL_CORRECTION_MODE::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(MODEL_CORRECTION_MODE_tA628D33CBBD6F312044315FED05B471AD6AEA17E, ___value___2)); }
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
#endif // MODEL_CORRECTION_MODE_TA628D33CBBD6F312044315FED05B471AD6AEA17E_H
#ifndef SMARTTERRAINIMPL_TF475FBE8773C95101B5CB6A85B1F31D982402340_H
#define SMARTTERRAINIMPL_TF475FBE8773C95101B5CB6A85B1F31D982402340_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.SmartTerrainImpl
struct  SmartTerrainImpl_tF475FBE8773C95101B5CB6A85B1F31D982402340  : public SmartTerrain_t09E2ED8DC63BA7169F0DCDCC1BA4419BDB878E47
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SMARTTERRAINIMPL_TF475FBE8773C95101B5CB6A85B1F31D982402340_H
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
#ifndef STATUSINFO_T5507FB8CC09640E7771385EBE27221431A2FEB4E_H
#define STATUSINFO_T5507FB8CC09640E7771385EBE27221431A2FEB4E_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.TrackableBehaviour/StatusInfo
struct  StatusInfo_t5507FB8CC09640E7771385EBE27221431A2FEB4E 
{
public:
	// System.Int32 Vuforia.TrackableBehaviour/StatusInfo::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(StatusInfo_t5507FB8CC09640E7771385EBE27221431A2FEB4E, ___value___2)); }
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
#endif // STATUSINFO_T5507FB8CC09640E7771385EBE27221431A2FEB4E_H
#ifndef FRAMESTATE_T40C5EF3D259514DAB23DEDCD72218A934C5645E0_H
#define FRAMESTATE_T40C5EF3D259514DAB23DEDCD72218A934C5645E0_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.TrackerData/FrameState
#pragma pack(push, tp, 1)
struct  FrameState_t40C5EF3D259514DAB23DEDCD72218A934C5645E0 
{
public:
	// System.IntPtr Vuforia.TrackerData/FrameState::trackableDataArray
	intptr_t ___trackableDataArray_0;
	// System.IntPtr Vuforia.TrackerData/FrameState::vbDataArray
	intptr_t ___vbDataArray_1;
	// System.IntPtr Vuforia.TrackerData/FrameState::vuMarkResultArray
	intptr_t ___vuMarkResultArray_2;
	// System.IntPtr Vuforia.TrackerData/FrameState::newVuMarkDataArray
	intptr_t ___newVuMarkDataArray_3;
	// System.IntPtr Vuforia.TrackerData/FrameState::illuminationData
	intptr_t ___illuminationData_4;
	// System.Int32 Vuforia.TrackerData/FrameState::numTrackableResults
	int32_t ___numTrackableResults_5;
	// System.Int32 Vuforia.TrackerData/FrameState::numVirtualButtonResults
	int32_t ___numVirtualButtonResults_6;
	// System.Int32 Vuforia.TrackerData/FrameState::frameIndex
	int32_t ___frameIndex_7;
	// System.Int32 Vuforia.TrackerData/FrameState::numVuMarkResults
	int32_t ___numVuMarkResults_8;
	// System.Int32 Vuforia.TrackerData/FrameState::numNewVuMarks
	int32_t ___numNewVuMarks_9;
	// System.Int32 Vuforia.TrackerData/FrameState::deviceTrackableId
	int32_t ___deviceTrackableId_10;
	// System.Int32 Vuforia.TrackerData/FrameState::deviceTrackableStatusInfo
	int32_t ___deviceTrackableStatusInfo_11;
	// UnityEngine.Vector4 Vuforia.TrackerData/FrameState::minCameraCalibration
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___minCameraCalibration_12;

public:
	inline static int32_t get_offset_of_trackableDataArray_0() { return static_cast<int32_t>(offsetof(FrameState_t40C5EF3D259514DAB23DEDCD72218A934C5645E0, ___trackableDataArray_0)); }
	inline intptr_t get_trackableDataArray_0() const { return ___trackableDataArray_0; }
	inline intptr_t* get_address_of_trackableDataArray_0() { return &___trackableDataArray_0; }
	inline void set_trackableDataArray_0(intptr_t value)
	{
		___trackableDataArray_0 = value;
	}

	inline static int32_t get_offset_of_vbDataArray_1() { return static_cast<int32_t>(offsetof(FrameState_t40C5EF3D259514DAB23DEDCD72218A934C5645E0, ___vbDataArray_1)); }
	inline intptr_t get_vbDataArray_1() const { return ___vbDataArray_1; }
	inline intptr_t* get_address_of_vbDataArray_1() { return &___vbDataArray_1; }
	inline void set_vbDataArray_1(intptr_t value)
	{
		___vbDataArray_1 = value;
	}

	inline static int32_t get_offset_of_vuMarkResultArray_2() { return static_cast<int32_t>(offsetof(FrameState_t40C5EF3D259514DAB23DEDCD72218A934C5645E0, ___vuMarkResultArray_2)); }
	inline intptr_t get_vuMarkResultArray_2() const { return ___vuMarkResultArray_2; }
	inline intptr_t* get_address_of_vuMarkResultArray_2() { return &___vuMarkResultArray_2; }
	inline void set_vuMarkResultArray_2(intptr_t value)
	{
		___vuMarkResultArray_2 = value;
	}

	inline static int32_t get_offset_of_newVuMarkDataArray_3() { return static_cast<int32_t>(offsetof(FrameState_t40C5EF3D259514DAB23DEDCD72218A934C5645E0, ___newVuMarkDataArray_3)); }
	inline intptr_t get_newVuMarkDataArray_3() const { return ___newVuMarkDataArray_3; }
	inline intptr_t* get_address_of_newVuMarkDataArray_3() { return &___newVuMarkDataArray_3; }
	inline void set_newVuMarkDataArray_3(intptr_t value)
	{
		___newVuMarkDataArray_3 = value;
	}

	inline static int32_t get_offset_of_illuminationData_4() { return static_cast<int32_t>(offsetof(FrameState_t40C5EF3D259514DAB23DEDCD72218A934C5645E0, ___illuminationData_4)); }
	inline intptr_t get_illuminationData_4() const { return ___illuminationData_4; }
	inline intptr_t* get_address_of_illuminationData_4() { return &___illuminationData_4; }
	inline void set_illuminationData_4(intptr_t value)
	{
		___illuminationData_4 = value;
	}

	inline static int32_t get_offset_of_numTrackableResults_5() { return static_cast<int32_t>(offsetof(FrameState_t40C5EF3D259514DAB23DEDCD72218A934C5645E0, ___numTrackableResults_5)); }
	inline int32_t get_numTrackableResults_5() const { return ___numTrackableResults_5; }
	inline int32_t* get_address_of_numTrackableResults_5() { return &___numTrackableResults_5; }
	inline void set_numTrackableResults_5(int32_t value)
	{
		___numTrackableResults_5 = value;
	}

	inline static int32_t get_offset_of_numVirtualButtonResults_6() { return static_cast<int32_t>(offsetof(FrameState_t40C5EF3D259514DAB23DEDCD72218A934C5645E0, ___numVirtualButtonResults_6)); }
	inline int32_t get_numVirtualButtonResults_6() const { return ___numVirtualButtonResults_6; }
	inline int32_t* get_address_of_numVirtualButtonResults_6() { return &___numVirtualButtonResults_6; }
	inline void set_numVirtualButtonResults_6(int32_t value)
	{
		___numVirtualButtonResults_6 = value;
	}

	inline static int32_t get_offset_of_frameIndex_7() { return static_cast<int32_t>(offsetof(FrameState_t40C5EF3D259514DAB23DEDCD72218A934C5645E0, ___frameIndex_7)); }
	inline int32_t get_frameIndex_7() const { return ___frameIndex_7; }
	inline int32_t* get_address_of_frameIndex_7() { return &___frameIndex_7; }
	inline void set_frameIndex_7(int32_t value)
	{
		___frameIndex_7 = value;
	}

	inline static int32_t get_offset_of_numVuMarkResults_8() { return static_cast<int32_t>(offsetof(FrameState_t40C5EF3D259514DAB23DEDCD72218A934C5645E0, ___numVuMarkResults_8)); }
	inline int32_t get_numVuMarkResults_8() const { return ___numVuMarkResults_8; }
	inline int32_t* get_address_of_numVuMarkResults_8() { return &___numVuMarkResults_8; }
	inline void set_numVuMarkResults_8(int32_t value)
	{
		___numVuMarkResults_8 = value;
	}

	inline static int32_t get_offset_of_numNewVuMarks_9() { return static_cast<int32_t>(offsetof(FrameState_t40C5EF3D259514DAB23DEDCD72218A934C5645E0, ___numNewVuMarks_9)); }
	inline int32_t get_numNewVuMarks_9() const { return ___numNewVuMarks_9; }
	inline int32_t* get_address_of_numNewVuMarks_9() { return &___numNewVuMarks_9; }
	inline void set_numNewVuMarks_9(int32_t value)
	{
		___numNewVuMarks_9 = value;
	}

	inline static int32_t get_offset_of_deviceTrackableId_10() { return static_cast<int32_t>(offsetof(FrameState_t40C5EF3D259514DAB23DEDCD72218A934C5645E0, ___deviceTrackableId_10)); }
	inline int32_t get_deviceTrackableId_10() const { return ___deviceTrackableId_10; }
	inline int32_t* get_address_of_deviceTrackableId_10() { return &___deviceTrackableId_10; }
	inline void set_deviceTrackableId_10(int32_t value)
	{
		___deviceTrackableId_10 = value;
	}

	inline static int32_t get_offset_of_deviceTrackableStatusInfo_11() { return static_cast<int32_t>(offsetof(FrameState_t40C5EF3D259514DAB23DEDCD72218A934C5645E0, ___deviceTrackableStatusInfo_11)); }
	inline int32_t get_deviceTrackableStatusInfo_11() const { return ___deviceTrackableStatusInfo_11; }
	inline int32_t* get_address_of_deviceTrackableStatusInfo_11() { return &___deviceTrackableStatusInfo_11; }
	inline void set_deviceTrackableStatusInfo_11(int32_t value)
	{
		___deviceTrackableStatusInfo_11 = value;
	}

	inline static int32_t get_offset_of_minCameraCalibration_12() { return static_cast<int32_t>(offsetof(FrameState_t40C5EF3D259514DAB23DEDCD72218A934C5645E0, ___minCameraCalibration_12)); }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  get_minCameraCalibration_12() const { return ___minCameraCalibration_12; }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * get_address_of_minCameraCalibration_12() { return &___minCameraCalibration_12; }
	inline void set_minCameraCalibration_12(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  value)
	{
		___minCameraCalibration_12 = value;
	}
};
#pragma pack(pop, tp)

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FRAMESTATE_T40C5EF3D259514DAB23DEDCD72218A934C5645E0_H
#ifndef IMAGEHEADERDATA_TFC0673E37281D53EB3031F0A59652D09EEE08121_H
#define IMAGEHEADERDATA_TFC0673E37281D53EB3031F0A59652D09EEE08121_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.TrackerData/ImageHeaderData
#pragma pack(push, tp, 1)
struct  ImageHeaderData_tFC0673E37281D53EB3031F0A59652D09EEE08121 
{
public:
	// System.IntPtr Vuforia.TrackerData/ImageHeaderData::data
	intptr_t ___data_0;
	// System.Int32 Vuforia.TrackerData/ImageHeaderData::width
	int32_t ___width_1;
	// System.Int32 Vuforia.TrackerData/ImageHeaderData::height
	int32_t ___height_2;
	// System.Int32 Vuforia.TrackerData/ImageHeaderData::stride
	int32_t ___stride_3;
	// System.Int32 Vuforia.TrackerData/ImageHeaderData::bufferWidth
	int32_t ___bufferWidth_4;
	// System.Int32 Vuforia.TrackerData/ImageHeaderData::bufferHeight
	int32_t ___bufferHeight_5;
	// System.Int32 Vuforia.TrackerData/ImageHeaderData::format
	int32_t ___format_6;
	// System.Int32 Vuforia.TrackerData/ImageHeaderData::reallocate
	int32_t ___reallocate_7;
	// System.Int32 Vuforia.TrackerData/ImageHeaderData::updated
	int32_t ___updated_8;

public:
	inline static int32_t get_offset_of_data_0() { return static_cast<int32_t>(offsetof(ImageHeaderData_tFC0673E37281D53EB3031F0A59652D09EEE08121, ___data_0)); }
	inline intptr_t get_data_0() const { return ___data_0; }
	inline intptr_t* get_address_of_data_0() { return &___data_0; }
	inline void set_data_0(intptr_t value)
	{
		___data_0 = value;
	}

	inline static int32_t get_offset_of_width_1() { return static_cast<int32_t>(offsetof(ImageHeaderData_tFC0673E37281D53EB3031F0A59652D09EEE08121, ___width_1)); }
	inline int32_t get_width_1() const { return ___width_1; }
	inline int32_t* get_address_of_width_1() { return &___width_1; }
	inline void set_width_1(int32_t value)
	{
		___width_1 = value;
	}

	inline static int32_t get_offset_of_height_2() { return static_cast<int32_t>(offsetof(ImageHeaderData_tFC0673E37281D53EB3031F0A59652D09EEE08121, ___height_2)); }
	inline int32_t get_height_2() const { return ___height_2; }
	inline int32_t* get_address_of_height_2() { return &___height_2; }
	inline void set_height_2(int32_t value)
	{
		___height_2 = value;
	}

	inline static int32_t get_offset_of_stride_3() { return static_cast<int32_t>(offsetof(ImageHeaderData_tFC0673E37281D53EB3031F0A59652D09EEE08121, ___stride_3)); }
	inline int32_t get_stride_3() const { return ___stride_3; }
	inline int32_t* get_address_of_stride_3() { return &___stride_3; }
	inline void set_stride_3(int32_t value)
	{
		___stride_3 = value;
	}

	inline static int32_t get_offset_of_bufferWidth_4() { return static_cast<int32_t>(offsetof(ImageHeaderData_tFC0673E37281D53EB3031F0A59652D09EEE08121, ___bufferWidth_4)); }
	inline int32_t get_bufferWidth_4() const { return ___bufferWidth_4; }
	inline int32_t* get_address_of_bufferWidth_4() { return &___bufferWidth_4; }
	inline void set_bufferWidth_4(int32_t value)
	{
		___bufferWidth_4 = value;
	}

	inline static int32_t get_offset_of_bufferHeight_5() { return static_cast<int32_t>(offsetof(ImageHeaderData_tFC0673E37281D53EB3031F0A59652D09EEE08121, ___bufferHeight_5)); }
	inline int32_t get_bufferHeight_5() const { return ___bufferHeight_5; }
	inline int32_t* get_address_of_bufferHeight_5() { return &___bufferHeight_5; }
	inline void set_bufferHeight_5(int32_t value)
	{
		___bufferHeight_5 = value;
	}

	inline static int32_t get_offset_of_format_6() { return static_cast<int32_t>(offsetof(ImageHeaderData_tFC0673E37281D53EB3031F0A59652D09EEE08121, ___format_6)); }
	inline int32_t get_format_6() const { return ___format_6; }
	inline int32_t* get_address_of_format_6() { return &___format_6; }
	inline void set_format_6(int32_t value)
	{
		___format_6 = value;
	}

	inline static int32_t get_offset_of_reallocate_7() { return static_cast<int32_t>(offsetof(ImageHeaderData_tFC0673E37281D53EB3031F0A59652D09EEE08121, ___reallocate_7)); }
	inline int32_t get_reallocate_7() const { return ___reallocate_7; }
	inline int32_t* get_address_of_reallocate_7() { return &___reallocate_7; }
	inline void set_reallocate_7(int32_t value)
	{
		___reallocate_7 = value;
	}

	inline static int32_t get_offset_of_updated_8() { return static_cast<int32_t>(offsetof(ImageHeaderData_tFC0673E37281D53EB3031F0A59652D09EEE08121, ___updated_8)); }
	inline int32_t get_updated_8() const { return ___updated_8; }
	inline int32_t* get_address_of_updated_8() { return &___updated_8; }
	inline void set_updated_8(int32_t value)
	{
		___updated_8 = value;
	}
};
#pragma pack(pop, tp)

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // IMAGEHEADERDATA_TFC0673E37281D53EB3031F0A59652D09EEE08121_H
#ifndef INSTANCEIDDATA_TA9961D073D40B8F890FC58FACDB0E3BC89E2CBA2_H
#define INSTANCEIDDATA_TA9961D073D40B8F890FC58FACDB0E3BC89E2CBA2_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.TrackerData/InstanceIdData
#pragma pack(push, tp, 1)
struct  InstanceIdData_tA9961D073D40B8F890FC58FACDB0E3BC89E2CBA2 
{
public:
	// System.UInt64 Vuforia.TrackerData/InstanceIdData::numericValue
	uint64_t ___numericValue_0;
	// System.IntPtr Vuforia.TrackerData/InstanceIdData::buffer
	intptr_t ___buffer_1;
	// System.IntPtr Vuforia.TrackerData/InstanceIdData::reserved
	intptr_t ___reserved_2;
	// System.UInt32 Vuforia.TrackerData/InstanceIdData::dataLength
	uint32_t ___dataLength_3;
	// System.Int32 Vuforia.TrackerData/InstanceIdData::dataType
	int32_t ___dataType_4;

public:
	inline static int32_t get_offset_of_numericValue_0() { return static_cast<int32_t>(offsetof(InstanceIdData_tA9961D073D40B8F890FC58FACDB0E3BC89E2CBA2, ___numericValue_0)); }
	inline uint64_t get_numericValue_0() const { return ___numericValue_0; }
	inline uint64_t* get_address_of_numericValue_0() { return &___numericValue_0; }
	inline void set_numericValue_0(uint64_t value)
	{
		___numericValue_0 = value;
	}

	inline static int32_t get_offset_of_buffer_1() { return static_cast<int32_t>(offsetof(InstanceIdData_tA9961D073D40B8F890FC58FACDB0E3BC89E2CBA2, ___buffer_1)); }
	inline intptr_t get_buffer_1() const { return ___buffer_1; }
	inline intptr_t* get_address_of_buffer_1() { return &___buffer_1; }
	inline void set_buffer_1(intptr_t value)
	{
		___buffer_1 = value;
	}

	inline static int32_t get_offset_of_reserved_2() { return static_cast<int32_t>(offsetof(InstanceIdData_tA9961D073D40B8F890FC58FACDB0E3BC89E2CBA2, ___reserved_2)); }
	inline intptr_t get_reserved_2() const { return ___reserved_2; }
	inline intptr_t* get_address_of_reserved_2() { return &___reserved_2; }
	inline void set_reserved_2(intptr_t value)
	{
		___reserved_2 = value;
	}

	inline static int32_t get_offset_of_dataLength_3() { return static_cast<int32_t>(offsetof(InstanceIdData_tA9961D073D40B8F890FC58FACDB0E3BC89E2CBA2, ___dataLength_3)); }
	inline uint32_t get_dataLength_3() const { return ___dataLength_3; }
	inline uint32_t* get_address_of_dataLength_3() { return &___dataLength_3; }
	inline void set_dataLength_3(uint32_t value)
	{
		___dataLength_3 = value;
	}

	inline static int32_t get_offset_of_dataType_4() { return static_cast<int32_t>(offsetof(InstanceIdData_tA9961D073D40B8F890FC58FACDB0E3BC89E2CBA2, ___dataType_4)); }
	inline int32_t get_dataType_4() const { return ___dataType_4; }
	inline int32_t* get_address_of_dataType_4() { return &___dataType_4; }
	inline void set_dataType_4(int32_t value)
	{
		___dataType_4 = value;
	}
};
#pragma pack(pop, tp)

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INSTANCEIDDATA_TA9961D073D40B8F890FC58FACDB0E3BC89E2CBA2_H
#ifndef MESHDATA_T78B0ED4EFB6DC4A9001D565ADE5E51B4223704D9_H
#define MESHDATA_T78B0ED4EFB6DC4A9001D565ADE5E51B4223704D9_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.TrackerData/MeshData
#pragma pack(push, tp, 1)
struct  MeshData_t78B0ED4EFB6DC4A9001D565ADE5E51B4223704D9 
{
public:
	// System.IntPtr Vuforia.TrackerData/MeshData::positionsArray
	intptr_t ___positionsArray_0;
	// System.IntPtr Vuforia.TrackerData/MeshData::normalsArray
	intptr_t ___normalsArray_1;
	// System.IntPtr Vuforia.TrackerData/MeshData::texCoordsArray
	intptr_t ___texCoordsArray_2;
	// System.IntPtr Vuforia.TrackerData/MeshData::triangleIdxArray
	intptr_t ___triangleIdxArray_3;
	// System.Int32 Vuforia.TrackerData/MeshData::numVertexValues
	int32_t ___numVertexValues_4;
	// System.Int32 Vuforia.TrackerData/MeshData::hasNormals
	int32_t ___hasNormals_5;
	// System.Int32 Vuforia.TrackerData/MeshData::hasTexCoords
	int32_t ___hasTexCoords_6;
	// System.Int32 Vuforia.TrackerData/MeshData::numTriangleIndices
	int32_t ___numTriangleIndices_7;

public:
	inline static int32_t get_offset_of_positionsArray_0() { return static_cast<int32_t>(offsetof(MeshData_t78B0ED4EFB6DC4A9001D565ADE5E51B4223704D9, ___positionsArray_0)); }
	inline intptr_t get_positionsArray_0() const { return ___positionsArray_0; }
	inline intptr_t* get_address_of_positionsArray_0() { return &___positionsArray_0; }
	inline void set_positionsArray_0(intptr_t value)
	{
		___positionsArray_0 = value;
	}

	inline static int32_t get_offset_of_normalsArray_1() { return static_cast<int32_t>(offsetof(MeshData_t78B0ED4EFB6DC4A9001D565ADE5E51B4223704D9, ___normalsArray_1)); }
	inline intptr_t get_normalsArray_1() const { return ___normalsArray_1; }
	inline intptr_t* get_address_of_normalsArray_1() { return &___normalsArray_1; }
	inline void set_normalsArray_1(intptr_t value)
	{
		___normalsArray_1 = value;
	}

	inline static int32_t get_offset_of_texCoordsArray_2() { return static_cast<int32_t>(offsetof(MeshData_t78B0ED4EFB6DC4A9001D565ADE5E51B4223704D9, ___texCoordsArray_2)); }
	inline intptr_t get_texCoordsArray_2() const { return ___texCoordsArray_2; }
	inline intptr_t* get_address_of_texCoordsArray_2() { return &___texCoordsArray_2; }
	inline void set_texCoordsArray_2(intptr_t value)
	{
		___texCoordsArray_2 = value;
	}

	inline static int32_t get_offset_of_triangleIdxArray_3() { return static_cast<int32_t>(offsetof(MeshData_t78B0ED4EFB6DC4A9001D565ADE5E51B4223704D9, ___triangleIdxArray_3)); }
	inline intptr_t get_triangleIdxArray_3() const { return ___triangleIdxArray_3; }
	inline intptr_t* get_address_of_triangleIdxArray_3() { return &___triangleIdxArray_3; }
	inline void set_triangleIdxArray_3(intptr_t value)
	{
		___triangleIdxArray_3 = value;
	}

	inline static int32_t get_offset_of_numVertexValues_4() { return static_cast<int32_t>(offsetof(MeshData_t78B0ED4EFB6DC4A9001D565ADE5E51B4223704D9, ___numVertexValues_4)); }
	inline int32_t get_numVertexValues_4() const { return ___numVertexValues_4; }
	inline int32_t* get_address_of_numVertexValues_4() { return &___numVertexValues_4; }
	inline void set_numVertexValues_4(int32_t value)
	{
		___numVertexValues_4 = value;
	}

	inline static int32_t get_offset_of_hasNormals_5() { return static_cast<int32_t>(offsetof(MeshData_t78B0ED4EFB6DC4A9001D565ADE5E51B4223704D9, ___hasNormals_5)); }
	inline int32_t get_hasNormals_5() const { return ___hasNormals_5; }
	inline int32_t* get_address_of_hasNormals_5() { return &___hasNormals_5; }
	inline void set_hasNormals_5(int32_t value)
	{
		___hasNormals_5 = value;
	}

	inline static int32_t get_offset_of_hasTexCoords_6() { return static_cast<int32_t>(offsetof(MeshData_t78B0ED4EFB6DC4A9001D565ADE5E51B4223704D9, ___hasTexCoords_6)); }
	inline int32_t get_hasTexCoords_6() const { return ___hasTexCoords_6; }
	inline int32_t* get_address_of_hasTexCoords_6() { return &___hasTexCoords_6; }
	inline void set_hasTexCoords_6(int32_t value)
	{
		___hasTexCoords_6 = value;
	}

	inline static int32_t get_offset_of_numTriangleIndices_7() { return static_cast<int32_t>(offsetof(MeshData_t78B0ED4EFB6DC4A9001D565ADE5E51B4223704D9, ___numTriangleIndices_7)); }
	inline int32_t get_numTriangleIndices_7() const { return ___numTriangleIndices_7; }
	inline int32_t* get_address_of_numTriangleIndices_7() { return &___numTriangleIndices_7; }
	inline void set_numTriangleIndices_7(int32_t value)
	{
		___numTriangleIndices_7 = value;
	}
};
#pragma pack(pop, tp)

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MESHDATA_T78B0ED4EFB6DC4A9001D565ADE5E51B4223704D9_H
#ifndef OBB2D_T5DBF14F745E67E8227C713A12D409AD5D6F71A46_H
#define OBB2D_T5DBF14F745E67E8227C713A12D409AD5D6F71A46_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.TrackerData/Obb2D
#pragma pack(push, tp, 1)
struct  Obb2D_t5DBF14F745E67E8227C713A12D409AD5D6F71A46 
{
public:
	// UnityEngine.Vector2 Vuforia.TrackerData/Obb2D::center
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___center_0;
	// UnityEngine.Vector2 Vuforia.TrackerData/Obb2D::halfExtents
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___halfExtents_1;
	// System.Single Vuforia.TrackerData/Obb2D::rotation
	float ___rotation_2;
	// System.Int32 Vuforia.TrackerData/Obb2D::unused
	int32_t ___unused_3;

public:
	inline static int32_t get_offset_of_center_0() { return static_cast<int32_t>(offsetof(Obb2D_t5DBF14F745E67E8227C713A12D409AD5D6F71A46, ___center_0)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_center_0() const { return ___center_0; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_center_0() { return &___center_0; }
	inline void set_center_0(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___center_0 = value;
	}

	inline static int32_t get_offset_of_halfExtents_1() { return static_cast<int32_t>(offsetof(Obb2D_t5DBF14F745E67E8227C713A12D409AD5D6F71A46, ___halfExtents_1)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_halfExtents_1() const { return ___halfExtents_1; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_halfExtents_1() { return &___halfExtents_1; }
	inline void set_halfExtents_1(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___halfExtents_1 = value;
	}

	inline static int32_t get_offset_of_rotation_2() { return static_cast<int32_t>(offsetof(Obb2D_t5DBF14F745E67E8227C713A12D409AD5D6F71A46, ___rotation_2)); }
	inline float get_rotation_2() const { return ___rotation_2; }
	inline float* get_address_of_rotation_2() { return &___rotation_2; }
	inline void set_rotation_2(float value)
	{
		___rotation_2 = value;
	}

	inline static int32_t get_offset_of_unused_3() { return static_cast<int32_t>(offsetof(Obb2D_t5DBF14F745E67E8227C713A12D409AD5D6F71A46, ___unused_3)); }
	inline int32_t get_unused_3() const { return ___unused_3; }
	inline int32_t* get_address_of_unused_3() { return &___unused_3; }
	inline void set_unused_3(int32_t value)
	{
		___unused_3 = value;
	}
};
#pragma pack(pop, tp)

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OBB2D_T5DBF14F745E67E8227C713A12D409AD5D6F71A46_H
#ifndef OBB3D_TD38E3A21156F3FCD524DC40956CF4384A81222CF_H
#define OBB3D_TD38E3A21156F3FCD524DC40956CF4384A81222CF_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.TrackerData/Obb3D
#pragma pack(push, tp, 1)
struct  Obb3D_tD38E3A21156F3FCD524DC40956CF4384A81222CF 
{
public:
	// UnityEngine.Vector3 Vuforia.TrackerData/Obb3D::center
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___center_0;
	// UnityEngine.Vector3 Vuforia.TrackerData/Obb3D::halfExtents
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___halfExtents_1;
	// System.Single Vuforia.TrackerData/Obb3D::rotationZ
	float ___rotationZ_2;
	// System.Int32 Vuforia.TrackerData/Obb3D::unused
	int32_t ___unused_3;

public:
	inline static int32_t get_offset_of_center_0() { return static_cast<int32_t>(offsetof(Obb3D_tD38E3A21156F3FCD524DC40956CF4384A81222CF, ___center_0)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_center_0() const { return ___center_0; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_center_0() { return &___center_0; }
	inline void set_center_0(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___center_0 = value;
	}

	inline static int32_t get_offset_of_halfExtents_1() { return static_cast<int32_t>(offsetof(Obb3D_tD38E3A21156F3FCD524DC40956CF4384A81222CF, ___halfExtents_1)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_halfExtents_1() const { return ___halfExtents_1; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_halfExtents_1() { return &___halfExtents_1; }
	inline void set_halfExtents_1(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___halfExtents_1 = value;
	}

	inline static int32_t get_offset_of_rotationZ_2() { return static_cast<int32_t>(offsetof(Obb3D_tD38E3A21156F3FCD524DC40956CF4384A81222CF, ___rotationZ_2)); }
	inline float get_rotationZ_2() const { return ___rotationZ_2; }
	inline float* get_address_of_rotationZ_2() { return &___rotationZ_2; }
	inline void set_rotationZ_2(float value)
	{
		___rotationZ_2 = value;
	}

	inline static int32_t get_offset_of_unused_3() { return static_cast<int32_t>(offsetof(Obb3D_tD38E3A21156F3FCD524DC40956CF4384A81222CF, ___unused_3)); }
	inline int32_t get_unused_3() const { return ___unused_3; }
	inline int32_t* get_address_of_unused_3() { return &___unused_3; }
	inline void set_unused_3(int32_t value)
	{
		___unused_3 = value;
	}
};
#pragma pack(pop, tp)

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OBB3D_TD38E3A21156F3FCD524DC40956CF4384A81222CF_H
#ifndef POSEDATA_TBEB2E3213824EA43B0606A888A09A32D6433881B_H
#define POSEDATA_TBEB2E3213824EA43B0606A888A09A32D6433881B_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.TrackerData/PoseData
#pragma pack(push, tp, 1)
struct  PoseData_tBEB2E3213824EA43B0606A888A09A32D6433881B 
{
public:
	// UnityEngine.Vector3 Vuforia.TrackerData/PoseData::position
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___position_0;
	// UnityEngine.Quaternion Vuforia.TrackerData/PoseData::orientation
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___orientation_1;
	// System.Int32 Vuforia.TrackerData/PoseData::unused
	int32_t ___unused_2;

public:
	inline static int32_t get_offset_of_position_0() { return static_cast<int32_t>(offsetof(PoseData_tBEB2E3213824EA43B0606A888A09A32D6433881B, ___position_0)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_position_0() const { return ___position_0; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_position_0() { return &___position_0; }
	inline void set_position_0(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___position_0 = value;
	}

	inline static int32_t get_offset_of_orientation_1() { return static_cast<int32_t>(offsetof(PoseData_tBEB2E3213824EA43B0606A888A09A32D6433881B, ___orientation_1)); }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  get_orientation_1() const { return ___orientation_1; }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * get_address_of_orientation_1() { return &___orientation_1; }
	inline void set_orientation_1(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  value)
	{
		___orientation_1 = value;
	}

	inline static int32_t get_offset_of_unused_2() { return static_cast<int32_t>(offsetof(PoseData_tBEB2E3213824EA43B0606A888A09A32D6433881B, ___unused_2)); }
	inline int32_t get_unused_2() const { return ___unused_2; }
	inline int32_t* get_address_of_unused_2() { return &___unused_2; }
	inline void set_unused_2(int32_t value)
	{
		___unused_2 = value;
	}
};
#pragma pack(pop, tp)

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // POSEDATA_TBEB2E3213824EA43B0606A888A09A32D6433881B_H
#ifndef STRUCTLIST_T838B13CFE20420E6A031EF2069821BF66948F28F_H
#define STRUCTLIST_T838B13CFE20420E6A031EF2069821BF66948F28F_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.TrackerData/StructList
#pragma pack(push, tp, 1)
struct  StructList_t838B13CFE20420E6A031EF2069821BF66948F28F 
{
public:
	// System.IntPtr Vuforia.TrackerData/StructList::arrayPtr
	intptr_t ___arrayPtr_0;
	// System.Int32 Vuforia.TrackerData/StructList::numResults
	int32_t ___numResults_1;
	// System.Int32 Vuforia.TrackerData/StructList::unused
	int32_t ___unused_2;

public:
	inline static int32_t get_offset_of_arrayPtr_0() { return static_cast<int32_t>(offsetof(StructList_t838B13CFE20420E6A031EF2069821BF66948F28F, ___arrayPtr_0)); }
	inline intptr_t get_arrayPtr_0() const { return ___arrayPtr_0; }
	inline intptr_t* get_address_of_arrayPtr_0() { return &___arrayPtr_0; }
	inline void set_arrayPtr_0(intptr_t value)
	{
		___arrayPtr_0 = value;
	}

	inline static int32_t get_offset_of_numResults_1() { return static_cast<int32_t>(offsetof(StructList_t838B13CFE20420E6A031EF2069821BF66948F28F, ___numResults_1)); }
	inline int32_t get_numResults_1() const { return ___numResults_1; }
	inline int32_t* get_address_of_numResults_1() { return &___numResults_1; }
	inline void set_numResults_1(int32_t value)
	{
		___numResults_1 = value;
	}

	inline static int32_t get_offset_of_unused_2() { return static_cast<int32_t>(offsetof(StructList_t838B13CFE20420E6A031EF2069821BF66948F28F, ___unused_2)); }
	inline int32_t get_unused_2() const { return ___unused_2; }
	inline int32_t* get_address_of_unused_2() { return &___unused_2; }
	inline void set_unused_2(int32_t value)
	{
		___unused_2 = value;
	}
};
#pragma pack(pop, tp)

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRUCTLIST_T838B13CFE20420E6A031EF2069821BF66948F28F_H
#ifndef VIEW_T9C4005B40449F629C9F40B2B276D4E72E2044682_H
#define VIEW_T9C4005B40449F629C9F40B2B276D4E72E2044682_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.View
struct  View_t9C4005B40449F629C9F40B2B276D4E72E2044682 
{
public:
	// System.Int32 Vuforia.View::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(View_t9C4005B40449F629C9F40B2B276D4E72E2044682, ___value___2)); }
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
#endif // VIEW_T9C4005B40449F629C9F40B2B276D4E72E2044682_H
#ifndef VIEWERBUTTONTYPE_TD40BFED34EDFA6EF946FC9E75CC0BAEC0FE4C1ED_H
#define VIEWERBUTTONTYPE_TD40BFED34EDFA6EF946FC9E75CC0BAEC0FE4C1ED_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.ViewerButtonType
struct  ViewerButtonType_tD40BFED34EDFA6EF946FC9E75CC0BAEC0FE4C1ED 
{
public:
	// System.Int32 Vuforia.ViewerButtonType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ViewerButtonType_tD40BFED34EDFA6EF946FC9E75CC0BAEC0FE4C1ED, ___value___2)); }
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
#endif // VIEWERBUTTONTYPE_TD40BFED34EDFA6EF946FC9E75CC0BAEC0FE4C1ED_H
#ifndef VIEWERPARAMETERS_T382177593203E057F8920BAB05625FCDF7FEE3A7_H
#define VIEWERPARAMETERS_T382177593203E057F8920BAB05625FCDF7FEE3A7_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.ViewerParameters
struct  ViewerParameters_t382177593203E057F8920BAB05625FCDF7FEE3A7  : public RuntimeObject
{
public:
	// System.IntPtr Vuforia.ViewerParameters::mNativeVP
	intptr_t ___mNativeVP_0;

public:
	inline static int32_t get_offset_of_mNativeVP_0() { return static_cast<int32_t>(offsetof(ViewerParameters_t382177593203E057F8920BAB05625FCDF7FEE3A7, ___mNativeVP_0)); }
	inline intptr_t get_mNativeVP_0() const { return ___mNativeVP_0; }
	inline intptr_t* get_address_of_mNativeVP_0() { return &___mNativeVP_0; }
	inline void set_mNativeVP_0(intptr_t value)
	{
		___mNativeVP_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VIEWERPARAMETERS_T382177593203E057F8920BAB05625FCDF7FEE3A7_H
#ifndef VIEWERPARAMETERSLIST_T72A045CA8E4C523190402E0E51B367945F4E31D8_H
#define VIEWERPARAMETERSLIST_T72A045CA8E4C523190402E0E51B367945F4E31D8_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.ViewerParametersList
struct  ViewerParametersList_t72A045CA8E4C523190402E0E51B367945F4E31D8  : public RuntimeObject
{
public:
	// System.IntPtr Vuforia.ViewerParametersList::mNativeVPL
	intptr_t ___mNativeVPL_0;

public:
	inline static int32_t get_offset_of_mNativeVPL_0() { return static_cast<int32_t>(offsetof(ViewerParametersList_t72A045CA8E4C523190402E0E51B367945F4E31D8, ___mNativeVPL_0)); }
	inline intptr_t get_mNativeVPL_0() const { return ___mNativeVPL_0; }
	inline intptr_t* get_address_of_mNativeVPL_0() { return &___mNativeVPL_0; }
	inline void set_mNativeVPL_0(intptr_t value)
	{
		___mNativeVPL_0 = value;
	}
};

struct ViewerParametersList_t72A045CA8E4C523190402E0E51B367945F4E31D8_StaticFields
{
public:
	// Vuforia.ViewerParametersList Vuforia.ViewerParametersList::mListForAuthoringTools
	ViewerParametersList_t72A045CA8E4C523190402E0E51B367945F4E31D8 * ___mListForAuthoringTools_1;

public:
	inline static int32_t get_offset_of_mListForAuthoringTools_1() { return static_cast<int32_t>(offsetof(ViewerParametersList_t72A045CA8E4C523190402E0E51B367945F4E31D8_StaticFields, ___mListForAuthoringTools_1)); }
	inline ViewerParametersList_t72A045CA8E4C523190402E0E51B367945F4E31D8 * get_mListForAuthoringTools_1() const { return ___mListForAuthoringTools_1; }
	inline ViewerParametersList_t72A045CA8E4C523190402E0E51B367945F4E31D8 ** get_address_of_mListForAuthoringTools_1() { return &___mListForAuthoringTools_1; }
	inline void set_mListForAuthoringTools_1(ViewerParametersList_t72A045CA8E4C523190402E0E51B367945F4E31D8 * value)
	{
		___mListForAuthoringTools_1 = value;
		Il2CppCodeGenWriteBarrier((&___mListForAuthoringTools_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VIEWERPARAMETERSLIST_T72A045CA8E4C523190402E0E51B367945F4E31D8_H
#ifndef VIEWERTRAYALIGNMENT_T5528CE704439AEADBE3566805CF4E7441A11A444_H
#define VIEWERTRAYALIGNMENT_T5528CE704439AEADBE3566805CF4E7441A11A444_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.ViewerTrayAlignment
struct  ViewerTrayAlignment_t5528CE704439AEADBE3566805CF4E7441A11A444 
{
public:
	// System.Int32 Vuforia.ViewerTrayAlignment::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ViewerTrayAlignment_t5528CE704439AEADBE3566805CF4E7441A11A444, ___value___2)); }
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
#endif // VIEWERTRAYALIGNMENT_T5528CE704439AEADBE3566805CF4E7441A11A444_H
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
#ifndef VIDEOTEXTUREINFO_TE91303BB8B6C3E4C49CB1A717AE3ECEB2175D36D_H
#define VIDEOTEXTUREINFO_TE91303BB8B6C3E4C49CB1A717AE3ECEB2175D36D_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.VuforiaRenderer/VideoTextureInfo
#pragma pack(push, tp, 1)
struct  VideoTextureInfo_tE91303BB8B6C3E4C49CB1A717AE3ECEB2175D36D 
{
public:
	// Vuforia.VuforiaRenderer/Vec2I Vuforia.VuforiaRenderer/VideoTextureInfo::textureSize
	Vec2I_t42F341F398E3117176C37CAAAF2D29943EA9FCF5  ___textureSize_0;
	// Vuforia.VuforiaRenderer/Vec2I Vuforia.VuforiaRenderer/VideoTextureInfo::imageSize
	Vec2I_t42F341F398E3117176C37CAAAF2D29943EA9FCF5  ___imageSize_1;

public:
	inline static int32_t get_offset_of_textureSize_0() { return static_cast<int32_t>(offsetof(VideoTextureInfo_tE91303BB8B6C3E4C49CB1A717AE3ECEB2175D36D, ___textureSize_0)); }
	inline Vec2I_t42F341F398E3117176C37CAAAF2D29943EA9FCF5  get_textureSize_0() const { return ___textureSize_0; }
	inline Vec2I_t42F341F398E3117176C37CAAAF2D29943EA9FCF5 * get_address_of_textureSize_0() { return &___textureSize_0; }
	inline void set_textureSize_0(Vec2I_t42F341F398E3117176C37CAAAF2D29943EA9FCF5  value)
	{
		___textureSize_0 = value;
	}

	inline static int32_t get_offset_of_imageSize_1() { return static_cast<int32_t>(offsetof(VideoTextureInfo_tE91303BB8B6C3E4C49CB1A717AE3ECEB2175D36D, ___imageSize_1)); }
	inline Vec2I_t42F341F398E3117176C37CAAAF2D29943EA9FCF5  get_imageSize_1() const { return ___imageSize_1; }
	inline Vec2I_t42F341F398E3117176C37CAAAF2D29943EA9FCF5 * get_address_of_imageSize_1() { return &___imageSize_1; }
	inline void set_imageSize_1(Vec2I_t42F341F398E3117176C37CAAAF2D29943EA9FCF5  value)
	{
		___imageSize_1 = value;
	}
};
#pragma pack(pop, tp)

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VIDEOTEXTUREINFO_TE91303BB8B6C3E4C49CB1A717AE3ECEB2175D36D_H
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
#ifndef BASECAMERACONFIGURATION_TF625F5FF38D44D6E2D1D929C1F29DA533F97642A_H
#define BASECAMERACONFIGURATION_TF625F5FF38D44D6E2D1D929C1F29DA533F97642A_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.BaseCameraConfiguration
struct  BaseCameraConfiguration_tF625F5FF38D44D6E2D1D929C1F29DA533F97642A  : public RuntimeObject
{
public:
	// Vuforia.CameraDevice/CameraDeviceMode Vuforia.BaseCameraConfiguration::mCameraDeviceMode
	int32_t ___mCameraDeviceMode_0;
	// Vuforia.VuforiaRenderer/VideoBackgroundReflection Vuforia.BaseCameraConfiguration::mLastVideoBackGroundMirroredFromSDK
	int32_t ___mLastVideoBackGroundMirroredFromSDK_1;
	// System.Action Vuforia.BaseCameraConfiguration::mOnVideoBackgroundConfigChanged
	Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * ___mOnVideoBackgroundConfigChanged_2;
	// Vuforia.VideoBackgroundBehaviour Vuforia.BaseCameraConfiguration::mVideoBackgroundBehaviour
	VideoBackgroundBehaviour_t5FE09B8C02AFCA301B6D915668BE3C050CE37C00 * ___mVideoBackgroundBehaviour_3;
	// UnityEngine.Rect Vuforia.BaseCameraConfiguration::mVideoBackgroundViewportRect
	Rect_t35B976DE901B5423C11705E156938EA27AB402CE  ___mVideoBackgroundViewportRect_4;
	// System.Boolean Vuforia.BaseCameraConfiguration::mRenderVideoBackground
	bool ___mRenderVideoBackground_5;
	// UnityEngine.ScreenOrientation Vuforia.BaseCameraConfiguration::mProjectionOrientation
	int32_t ___mProjectionOrientation_6;
	// Vuforia.VuforiaRenderer/VideoBackgroundReflection Vuforia.BaseCameraConfiguration::mInitialReflection
	int32_t ___mInitialReflection_7;
	// Vuforia.BackgroundPlaneBehaviour Vuforia.BaseCameraConfiguration::mBackgroundPlaneBehaviour
	BackgroundPlaneBehaviour_t2615248F9F83AF94A06C6585EBB6C1D3BCF64338 * ___mBackgroundPlaneBehaviour_8;
	// System.Boolean Vuforia.BaseCameraConfiguration::mDeviceModeChanged
	bool ___mDeviceModeChanged_9;
	// System.Boolean Vuforia.BaseCameraConfiguration::mProjectionParamsChanged
	bool ___mProjectionParamsChanged_10;

public:
	inline static int32_t get_offset_of_mCameraDeviceMode_0() { return static_cast<int32_t>(offsetof(BaseCameraConfiguration_tF625F5FF38D44D6E2D1D929C1F29DA533F97642A, ___mCameraDeviceMode_0)); }
	inline int32_t get_mCameraDeviceMode_0() const { return ___mCameraDeviceMode_0; }
	inline int32_t* get_address_of_mCameraDeviceMode_0() { return &___mCameraDeviceMode_0; }
	inline void set_mCameraDeviceMode_0(int32_t value)
	{
		___mCameraDeviceMode_0 = value;
	}

	inline static int32_t get_offset_of_mLastVideoBackGroundMirroredFromSDK_1() { return static_cast<int32_t>(offsetof(BaseCameraConfiguration_tF625F5FF38D44D6E2D1D929C1F29DA533F97642A, ___mLastVideoBackGroundMirroredFromSDK_1)); }
	inline int32_t get_mLastVideoBackGroundMirroredFromSDK_1() const { return ___mLastVideoBackGroundMirroredFromSDK_1; }
	inline int32_t* get_address_of_mLastVideoBackGroundMirroredFromSDK_1() { return &___mLastVideoBackGroundMirroredFromSDK_1; }
	inline void set_mLastVideoBackGroundMirroredFromSDK_1(int32_t value)
	{
		___mLastVideoBackGroundMirroredFromSDK_1 = value;
	}

	inline static int32_t get_offset_of_mOnVideoBackgroundConfigChanged_2() { return static_cast<int32_t>(offsetof(BaseCameraConfiguration_tF625F5FF38D44D6E2D1D929C1F29DA533F97642A, ___mOnVideoBackgroundConfigChanged_2)); }
	inline Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * get_mOnVideoBackgroundConfigChanged_2() const { return ___mOnVideoBackgroundConfigChanged_2; }
	inline Action_t591D2A86165F896B4B800BB5C25CE18672A55579 ** get_address_of_mOnVideoBackgroundConfigChanged_2() { return &___mOnVideoBackgroundConfigChanged_2; }
	inline void set_mOnVideoBackgroundConfigChanged_2(Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * value)
	{
		___mOnVideoBackgroundConfigChanged_2 = value;
		Il2CppCodeGenWriteBarrier((&___mOnVideoBackgroundConfigChanged_2), value);
	}

	inline static int32_t get_offset_of_mVideoBackgroundBehaviour_3() { return static_cast<int32_t>(offsetof(BaseCameraConfiguration_tF625F5FF38D44D6E2D1D929C1F29DA533F97642A, ___mVideoBackgroundBehaviour_3)); }
	inline VideoBackgroundBehaviour_t5FE09B8C02AFCA301B6D915668BE3C050CE37C00 * get_mVideoBackgroundBehaviour_3() const { return ___mVideoBackgroundBehaviour_3; }
	inline VideoBackgroundBehaviour_t5FE09B8C02AFCA301B6D915668BE3C050CE37C00 ** get_address_of_mVideoBackgroundBehaviour_3() { return &___mVideoBackgroundBehaviour_3; }
	inline void set_mVideoBackgroundBehaviour_3(VideoBackgroundBehaviour_t5FE09B8C02AFCA301B6D915668BE3C050CE37C00 * value)
	{
		___mVideoBackgroundBehaviour_3 = value;
		Il2CppCodeGenWriteBarrier((&___mVideoBackgroundBehaviour_3), value);
	}

	inline static int32_t get_offset_of_mVideoBackgroundViewportRect_4() { return static_cast<int32_t>(offsetof(BaseCameraConfiguration_tF625F5FF38D44D6E2D1D929C1F29DA533F97642A, ___mVideoBackgroundViewportRect_4)); }
	inline Rect_t35B976DE901B5423C11705E156938EA27AB402CE  get_mVideoBackgroundViewportRect_4() const { return ___mVideoBackgroundViewportRect_4; }
	inline Rect_t35B976DE901B5423C11705E156938EA27AB402CE * get_address_of_mVideoBackgroundViewportRect_4() { return &___mVideoBackgroundViewportRect_4; }
	inline void set_mVideoBackgroundViewportRect_4(Rect_t35B976DE901B5423C11705E156938EA27AB402CE  value)
	{
		___mVideoBackgroundViewportRect_4 = value;
	}

	inline static int32_t get_offset_of_mRenderVideoBackground_5() { return static_cast<int32_t>(offsetof(BaseCameraConfiguration_tF625F5FF38D44D6E2D1D929C1F29DA533F97642A, ___mRenderVideoBackground_5)); }
	inline bool get_mRenderVideoBackground_5() const { return ___mRenderVideoBackground_5; }
	inline bool* get_address_of_mRenderVideoBackground_5() { return &___mRenderVideoBackground_5; }
	inline void set_mRenderVideoBackground_5(bool value)
	{
		___mRenderVideoBackground_5 = value;
	}

	inline static int32_t get_offset_of_mProjectionOrientation_6() { return static_cast<int32_t>(offsetof(BaseCameraConfiguration_tF625F5FF38D44D6E2D1D929C1F29DA533F97642A, ___mProjectionOrientation_6)); }
	inline int32_t get_mProjectionOrientation_6() const { return ___mProjectionOrientation_6; }
	inline int32_t* get_address_of_mProjectionOrientation_6() { return &___mProjectionOrientation_6; }
	inline void set_mProjectionOrientation_6(int32_t value)
	{
		___mProjectionOrientation_6 = value;
	}

	inline static int32_t get_offset_of_mInitialReflection_7() { return static_cast<int32_t>(offsetof(BaseCameraConfiguration_tF625F5FF38D44D6E2D1D929C1F29DA533F97642A, ___mInitialReflection_7)); }
	inline int32_t get_mInitialReflection_7() const { return ___mInitialReflection_7; }
	inline int32_t* get_address_of_mInitialReflection_7() { return &___mInitialReflection_7; }
	inline void set_mInitialReflection_7(int32_t value)
	{
		___mInitialReflection_7 = value;
	}

	inline static int32_t get_offset_of_mBackgroundPlaneBehaviour_8() { return static_cast<int32_t>(offsetof(BaseCameraConfiguration_tF625F5FF38D44D6E2D1D929C1F29DA533F97642A, ___mBackgroundPlaneBehaviour_8)); }
	inline BackgroundPlaneBehaviour_t2615248F9F83AF94A06C6585EBB6C1D3BCF64338 * get_mBackgroundPlaneBehaviour_8() const { return ___mBackgroundPlaneBehaviour_8; }
	inline BackgroundPlaneBehaviour_t2615248F9F83AF94A06C6585EBB6C1D3BCF64338 ** get_address_of_mBackgroundPlaneBehaviour_8() { return &___mBackgroundPlaneBehaviour_8; }
	inline void set_mBackgroundPlaneBehaviour_8(BackgroundPlaneBehaviour_t2615248F9F83AF94A06C6585EBB6C1D3BCF64338 * value)
	{
		___mBackgroundPlaneBehaviour_8 = value;
		Il2CppCodeGenWriteBarrier((&___mBackgroundPlaneBehaviour_8), value);
	}

	inline static int32_t get_offset_of_mDeviceModeChanged_9() { return static_cast<int32_t>(offsetof(BaseCameraConfiguration_tF625F5FF38D44D6E2D1D929C1F29DA533F97642A, ___mDeviceModeChanged_9)); }
	inline bool get_mDeviceModeChanged_9() const { return ___mDeviceModeChanged_9; }
	inline bool* get_address_of_mDeviceModeChanged_9() { return &___mDeviceModeChanged_9; }
	inline void set_mDeviceModeChanged_9(bool value)
	{
		___mDeviceModeChanged_9 = value;
	}

	inline static int32_t get_offset_of_mProjectionParamsChanged_10() { return static_cast<int32_t>(offsetof(BaseCameraConfiguration_tF625F5FF38D44D6E2D1D929C1F29DA533F97642A, ___mProjectionParamsChanged_10)); }
	inline bool get_mProjectionParamsChanged_10() const { return ___mProjectionParamsChanged_10; }
	inline bool* get_address_of_mProjectionParamsChanged_10() { return &___mProjectionParamsChanged_10; }
	inline void set_mProjectionParamsChanged_10(bool value)
	{
		___mProjectionParamsChanged_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BASECAMERACONFIGURATION_TF625F5FF38D44D6E2D1D929C1F29DA533F97642A_H
#ifndef CAMERADEVICE_TC7DA626A5FCE15B0C92C7FBD4E289F4F73B4BF3B_H
#define CAMERADEVICE_TC7DA626A5FCE15B0C92C7FBD4E289F4F73B4BF3B_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.CameraDevice
struct  CameraDevice_tC7DA626A5FCE15B0C92C7FBD4E289F4F73B4BF3B  : public RuntimeObject
{
public:
	// System.Collections.Generic.Dictionary`2<Vuforia.Image/PIXEL_FORMAT,Vuforia.Image> Vuforia.CameraDevice::mCameraImages
	Dictionary_2_t49253736D56E3666B7CCAAE565D303EDEC7C3EF2 * ___mCameraImages_1;
	// System.Collections.Generic.List`1<Vuforia.Image/PIXEL_FORMAT> Vuforia.CameraDevice::mForcedCameraFormats
	List_1_tCEBB35CD33D4B0F0D274B18B37FF981021B62739 * ___mForcedCameraFormats_2;
	// System.Boolean Vuforia.CameraDevice::mCameraReady
	bool ___mCameraReady_4;
	// System.Boolean Vuforia.CameraDevice::mIsDirty
	bool ___mIsDirty_5;
	// Vuforia.CameraDevice/CameraDirection Vuforia.CameraDevice::mActualCameraDirection
	int32_t ___mActualCameraDirection_6;
	// Vuforia.CameraDevice/CameraDirection Vuforia.CameraDevice::mSelectedCameraDirection
	int32_t ___mSelectedCameraDirection_7;
	// Vuforia.CameraDevice/CameraDeviceMode Vuforia.CameraDevice::mCameraDeviceMode
	int32_t ___mCameraDeviceMode_8;
	// Vuforia.CameraDevice/VideoModeData Vuforia.CameraDevice::mVideoModeData
	VideoModeData_t7BC59F654FEA6A276ACE52D08AA89A8438698C3D  ___mVideoModeData_9;
	// System.Boolean Vuforia.CameraDevice::mVideoModeDataNeedsUpdate
	bool ___mVideoModeDataNeedsUpdate_10;
	// System.Boolean Vuforia.CameraDevice::mHasCameraDeviceModeBeenSet
	bool ___mHasCameraDeviceModeBeenSet_11;
	// System.Boolean Vuforia.CameraDevice::mCameraActive
	bool ___mCameraActive_12;
	// System.Boolean Vuforia.CameraDevice::mIsCameraMocked
	bool ___mIsCameraMocked_13;

public:
	inline static int32_t get_offset_of_mCameraImages_1() { return static_cast<int32_t>(offsetof(CameraDevice_tC7DA626A5FCE15B0C92C7FBD4E289F4F73B4BF3B, ___mCameraImages_1)); }
	inline Dictionary_2_t49253736D56E3666B7CCAAE565D303EDEC7C3EF2 * get_mCameraImages_1() const { return ___mCameraImages_1; }
	inline Dictionary_2_t49253736D56E3666B7CCAAE565D303EDEC7C3EF2 ** get_address_of_mCameraImages_1() { return &___mCameraImages_1; }
	inline void set_mCameraImages_1(Dictionary_2_t49253736D56E3666B7CCAAE565D303EDEC7C3EF2 * value)
	{
		___mCameraImages_1 = value;
		Il2CppCodeGenWriteBarrier((&___mCameraImages_1), value);
	}

	inline static int32_t get_offset_of_mForcedCameraFormats_2() { return static_cast<int32_t>(offsetof(CameraDevice_tC7DA626A5FCE15B0C92C7FBD4E289F4F73B4BF3B, ___mForcedCameraFormats_2)); }
	inline List_1_tCEBB35CD33D4B0F0D274B18B37FF981021B62739 * get_mForcedCameraFormats_2() const { return ___mForcedCameraFormats_2; }
	inline List_1_tCEBB35CD33D4B0F0D274B18B37FF981021B62739 ** get_address_of_mForcedCameraFormats_2() { return &___mForcedCameraFormats_2; }
	inline void set_mForcedCameraFormats_2(List_1_tCEBB35CD33D4B0F0D274B18B37FF981021B62739 * value)
	{
		___mForcedCameraFormats_2 = value;
		Il2CppCodeGenWriteBarrier((&___mForcedCameraFormats_2), value);
	}

	inline static int32_t get_offset_of_mCameraReady_4() { return static_cast<int32_t>(offsetof(CameraDevice_tC7DA626A5FCE15B0C92C7FBD4E289F4F73B4BF3B, ___mCameraReady_4)); }
	inline bool get_mCameraReady_4() const { return ___mCameraReady_4; }
	inline bool* get_address_of_mCameraReady_4() { return &___mCameraReady_4; }
	inline void set_mCameraReady_4(bool value)
	{
		___mCameraReady_4 = value;
	}

	inline static int32_t get_offset_of_mIsDirty_5() { return static_cast<int32_t>(offsetof(CameraDevice_tC7DA626A5FCE15B0C92C7FBD4E289F4F73B4BF3B, ___mIsDirty_5)); }
	inline bool get_mIsDirty_5() const { return ___mIsDirty_5; }
	inline bool* get_address_of_mIsDirty_5() { return &___mIsDirty_5; }
	inline void set_mIsDirty_5(bool value)
	{
		___mIsDirty_5 = value;
	}

	inline static int32_t get_offset_of_mActualCameraDirection_6() { return static_cast<int32_t>(offsetof(CameraDevice_tC7DA626A5FCE15B0C92C7FBD4E289F4F73B4BF3B, ___mActualCameraDirection_6)); }
	inline int32_t get_mActualCameraDirection_6() const { return ___mActualCameraDirection_6; }
	inline int32_t* get_address_of_mActualCameraDirection_6() { return &___mActualCameraDirection_6; }
	inline void set_mActualCameraDirection_6(int32_t value)
	{
		___mActualCameraDirection_6 = value;
	}

	inline static int32_t get_offset_of_mSelectedCameraDirection_7() { return static_cast<int32_t>(offsetof(CameraDevice_tC7DA626A5FCE15B0C92C7FBD4E289F4F73B4BF3B, ___mSelectedCameraDirection_7)); }
	inline int32_t get_mSelectedCameraDirection_7() const { return ___mSelectedCameraDirection_7; }
	inline int32_t* get_address_of_mSelectedCameraDirection_7() { return &___mSelectedCameraDirection_7; }
	inline void set_mSelectedCameraDirection_7(int32_t value)
	{
		___mSelectedCameraDirection_7 = value;
	}

	inline static int32_t get_offset_of_mCameraDeviceMode_8() { return static_cast<int32_t>(offsetof(CameraDevice_tC7DA626A5FCE15B0C92C7FBD4E289F4F73B4BF3B, ___mCameraDeviceMode_8)); }
	inline int32_t get_mCameraDeviceMode_8() const { return ___mCameraDeviceMode_8; }
	inline int32_t* get_address_of_mCameraDeviceMode_8() { return &___mCameraDeviceMode_8; }
	inline void set_mCameraDeviceMode_8(int32_t value)
	{
		___mCameraDeviceMode_8 = value;
	}

	inline static int32_t get_offset_of_mVideoModeData_9() { return static_cast<int32_t>(offsetof(CameraDevice_tC7DA626A5FCE15B0C92C7FBD4E289F4F73B4BF3B, ___mVideoModeData_9)); }
	inline VideoModeData_t7BC59F654FEA6A276ACE52D08AA89A8438698C3D  get_mVideoModeData_9() const { return ___mVideoModeData_9; }
	inline VideoModeData_t7BC59F654FEA6A276ACE52D08AA89A8438698C3D * get_address_of_mVideoModeData_9() { return &___mVideoModeData_9; }
	inline void set_mVideoModeData_9(VideoModeData_t7BC59F654FEA6A276ACE52D08AA89A8438698C3D  value)
	{
		___mVideoModeData_9 = value;
	}

	inline static int32_t get_offset_of_mVideoModeDataNeedsUpdate_10() { return static_cast<int32_t>(offsetof(CameraDevice_tC7DA626A5FCE15B0C92C7FBD4E289F4F73B4BF3B, ___mVideoModeDataNeedsUpdate_10)); }
	inline bool get_mVideoModeDataNeedsUpdate_10() const { return ___mVideoModeDataNeedsUpdate_10; }
	inline bool* get_address_of_mVideoModeDataNeedsUpdate_10() { return &___mVideoModeDataNeedsUpdate_10; }
	inline void set_mVideoModeDataNeedsUpdate_10(bool value)
	{
		___mVideoModeDataNeedsUpdate_10 = value;
	}

	inline static int32_t get_offset_of_mHasCameraDeviceModeBeenSet_11() { return static_cast<int32_t>(offsetof(CameraDevice_tC7DA626A5FCE15B0C92C7FBD4E289F4F73B4BF3B, ___mHasCameraDeviceModeBeenSet_11)); }
	inline bool get_mHasCameraDeviceModeBeenSet_11() const { return ___mHasCameraDeviceModeBeenSet_11; }
	inline bool* get_address_of_mHasCameraDeviceModeBeenSet_11() { return &___mHasCameraDeviceModeBeenSet_11; }
	inline void set_mHasCameraDeviceModeBeenSet_11(bool value)
	{
		___mHasCameraDeviceModeBeenSet_11 = value;
	}

	inline static int32_t get_offset_of_mCameraActive_12() { return static_cast<int32_t>(offsetof(CameraDevice_tC7DA626A5FCE15B0C92C7FBD4E289F4F73B4BF3B, ___mCameraActive_12)); }
	inline bool get_mCameraActive_12() const { return ___mCameraActive_12; }
	inline bool* get_address_of_mCameraActive_12() { return &___mCameraActive_12; }
	inline void set_mCameraActive_12(bool value)
	{
		___mCameraActive_12 = value;
	}

	inline static int32_t get_offset_of_mIsCameraMocked_13() { return static_cast<int32_t>(offsetof(CameraDevice_tC7DA626A5FCE15B0C92C7FBD4E289F4F73B4BF3B, ___mIsCameraMocked_13)); }
	inline bool get_mIsCameraMocked_13() const { return ___mIsCameraMocked_13; }
	inline bool* get_address_of_mIsCameraMocked_13() { return &___mIsCameraMocked_13; }
	inline void set_mIsCameraMocked_13(bool value)
	{
		___mIsCameraMocked_13 = value;
	}
};

struct CameraDevice_tC7DA626A5FCE15B0C92C7FBD4E289F4F73B4BF3B_StaticFields
{
public:
	// Vuforia.CameraDevice Vuforia.CameraDevice::mInstance
	CameraDevice_tC7DA626A5FCE15B0C92C7FBD4E289F4F73B4BF3B * ___mInstance_0;
	// Vuforia.IWebCam Vuforia.CameraDevice::mWebCam
	RuntimeObject* ___mWebCam_3;

public:
	inline static int32_t get_offset_of_mInstance_0() { return static_cast<int32_t>(offsetof(CameraDevice_tC7DA626A5FCE15B0C92C7FBD4E289F4F73B4BF3B_StaticFields, ___mInstance_0)); }
	inline CameraDevice_tC7DA626A5FCE15B0C92C7FBD4E289F4F73B4BF3B * get_mInstance_0() const { return ___mInstance_0; }
	inline CameraDevice_tC7DA626A5FCE15B0C92C7FBD4E289F4F73B4BF3B ** get_address_of_mInstance_0() { return &___mInstance_0; }
	inline void set_mInstance_0(CameraDevice_tC7DA626A5FCE15B0C92C7FBD4E289F4F73B4BF3B * value)
	{
		___mInstance_0 = value;
		Il2CppCodeGenWriteBarrier((&___mInstance_0), value);
	}

	inline static int32_t get_offset_of_mWebCam_3() { return static_cast<int32_t>(offsetof(CameraDevice_tC7DA626A5FCE15B0C92C7FBD4E289F4F73B4BF3B_StaticFields, ___mWebCam_3)); }
	inline RuntimeObject* get_mWebCam_3() const { return ___mWebCam_3; }
	inline RuntimeObject** get_address_of_mWebCam_3() { return &___mWebCam_3; }
	inline void set_mWebCam_3(RuntimeObject* value)
	{
		___mWebCam_3 = value;
		Il2CppCodeGenWriteBarrier((&___mWebCam_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CAMERADEVICE_TC7DA626A5FCE15B0C92C7FBD4E289F4F73B4BF3B_H
#ifndef CAMERAFIELD_TA76F51B38BD621368B9D9440DB131E5015ED70B4_H
#define CAMERAFIELD_TA76F51B38BD621368B9D9440DB131E5015ED70B4_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.CameraDevice/CameraField
struct  CameraField_tA76F51B38BD621368B9D9440DB131E5015ED70B4 
{
public:
	// Vuforia.CameraDevice/CameraField/DataType Vuforia.CameraDevice/CameraField::Type
	int32_t ___Type_0;
	// System.String Vuforia.CameraDevice/CameraField::Key
	String_t* ___Key_1;

public:
	inline static int32_t get_offset_of_Type_0() { return static_cast<int32_t>(offsetof(CameraField_tA76F51B38BD621368B9D9440DB131E5015ED70B4, ___Type_0)); }
	inline int32_t get_Type_0() const { return ___Type_0; }
	inline int32_t* get_address_of_Type_0() { return &___Type_0; }
	inline void set_Type_0(int32_t value)
	{
		___Type_0 = value;
	}

	inline static int32_t get_offset_of_Key_1() { return static_cast<int32_t>(offsetof(CameraField_tA76F51B38BD621368B9D9440DB131E5015ED70B4, ___Key_1)); }
	inline String_t* get_Key_1() const { return ___Key_1; }
	inline String_t** get_address_of_Key_1() { return &___Key_1; }
	inline void set_Key_1(String_t* value)
	{
		___Key_1 = value;
		Il2CppCodeGenWriteBarrier((&___Key_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of Vuforia.CameraDevice/CameraField
struct CameraField_tA76F51B38BD621368B9D9440DB131E5015ED70B4_marshaled_pinvoke
{
	int32_t ___Type_0;
	char* ___Key_1;
};
// Native definition for COM marshalling of Vuforia.CameraDevice/CameraField
struct CameraField_tA76F51B38BD621368B9D9440DB131E5015ED70B4_marshaled_com
{
	int32_t ___Type_0;
	Il2CppChar* ___Key_1;
};
#endif // CAMERAFIELD_TA76F51B38BD621368B9D9440DB131E5015ED70B4_H
#ifndef CUSTOMDATASETTARGETSIZE_T2BD3BD33FBB280F4FA853FB9E9D00ED16BCBF031_H
#define CUSTOMDATASETTARGETSIZE_T2BD3BD33FBB280F4FA853FB9E9D00ED16BCBF031_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.CustomDataSetTargetSize
struct  CustomDataSetTargetSize_t2BD3BD33FBB280F4FA853FB9E9D00ED16BCBF031  : public DataSetTargetSize_t8B732BB6F36DEB1B2232D34B1E1425BD3FFAE517
{
public:
	// System.Boolean Vuforia.CustomDataSetTargetSize::mInvokeBeforeNativeCall
	bool ___mInvokeBeforeNativeCall_3;
	// System.Action`1<UnityEngine.Vector3> Vuforia.CustomDataSetTargetSize::mSetSizeAction
	Action_1_tE2F19E30ECDF39669C80D0E7DA21064D10C1EE2F * ___mSetSizeAction_4;

public:
	inline static int32_t get_offset_of_mInvokeBeforeNativeCall_3() { return static_cast<int32_t>(offsetof(CustomDataSetTargetSize_t2BD3BD33FBB280F4FA853FB9E9D00ED16BCBF031, ___mInvokeBeforeNativeCall_3)); }
	inline bool get_mInvokeBeforeNativeCall_3() const { return ___mInvokeBeforeNativeCall_3; }
	inline bool* get_address_of_mInvokeBeforeNativeCall_3() { return &___mInvokeBeforeNativeCall_3; }
	inline void set_mInvokeBeforeNativeCall_3(bool value)
	{
		___mInvokeBeforeNativeCall_3 = value;
	}

	inline static int32_t get_offset_of_mSetSizeAction_4() { return static_cast<int32_t>(offsetof(CustomDataSetTargetSize_t2BD3BD33FBB280F4FA853FB9E9D00ED16BCBF031, ___mSetSizeAction_4)); }
	inline Action_1_tE2F19E30ECDF39669C80D0E7DA21064D10C1EE2F * get_mSetSizeAction_4() const { return ___mSetSizeAction_4; }
	inline Action_1_tE2F19E30ECDF39669C80D0E7DA21064D10C1EE2F ** get_address_of_mSetSizeAction_4() { return &___mSetSizeAction_4; }
	inline void set_mSetSizeAction_4(Action_1_tE2F19E30ECDF39669C80D0E7DA21064D10C1EE2F * value)
	{
		___mSetSizeAction_4 = value;
		Il2CppCodeGenWriteBarrier((&___mSetSizeAction_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CUSTOMDATASETTARGETSIZE_T2BD3BD33FBB280F4FA853FB9E9D00ED16BCBF031_H
#ifndef CUSTOMVIEWERPARAMETERS_T5F3D3A911D28E3D98760A6BCA1F2E984542E2075_H
#define CUSTOMVIEWERPARAMETERS_T5F3D3A911D28E3D98760A6BCA1F2E984542E2075_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.CustomViewerParameters
struct  CustomViewerParameters_t5F3D3A911D28E3D98760A6BCA1F2E984542E2075  : public ViewerParameters_t382177593203E057F8920BAB05625FCDF7FEE3A7
{
public:
	// System.Single Vuforia.CustomViewerParameters::mVersion
	float ___mVersion_1;
	// System.String Vuforia.CustomViewerParameters::mName
	String_t* ___mName_2;
	// System.String Vuforia.CustomViewerParameters::mManufacturer
	String_t* ___mManufacturer_3;
	// Vuforia.ViewerButtonType Vuforia.CustomViewerParameters::mButtonType
	int32_t ___mButtonType_4;
	// System.Single Vuforia.CustomViewerParameters::mScreenToLensDistance
	float ___mScreenToLensDistance_5;
	// Vuforia.ViewerTrayAlignment Vuforia.CustomViewerParameters::mTrayAlignment
	int32_t ___mTrayAlignment_6;
	// System.Boolean Vuforia.CustomViewerParameters::mMagnet
	bool ___mMagnet_7;

public:
	inline static int32_t get_offset_of_mVersion_1() { return static_cast<int32_t>(offsetof(CustomViewerParameters_t5F3D3A911D28E3D98760A6BCA1F2E984542E2075, ___mVersion_1)); }
	inline float get_mVersion_1() const { return ___mVersion_1; }
	inline float* get_address_of_mVersion_1() { return &___mVersion_1; }
	inline void set_mVersion_1(float value)
	{
		___mVersion_1 = value;
	}

	inline static int32_t get_offset_of_mName_2() { return static_cast<int32_t>(offsetof(CustomViewerParameters_t5F3D3A911D28E3D98760A6BCA1F2E984542E2075, ___mName_2)); }
	inline String_t* get_mName_2() const { return ___mName_2; }
	inline String_t** get_address_of_mName_2() { return &___mName_2; }
	inline void set_mName_2(String_t* value)
	{
		___mName_2 = value;
		Il2CppCodeGenWriteBarrier((&___mName_2), value);
	}

	inline static int32_t get_offset_of_mManufacturer_3() { return static_cast<int32_t>(offsetof(CustomViewerParameters_t5F3D3A911D28E3D98760A6BCA1F2E984542E2075, ___mManufacturer_3)); }
	inline String_t* get_mManufacturer_3() const { return ___mManufacturer_3; }
	inline String_t** get_address_of_mManufacturer_3() { return &___mManufacturer_3; }
	inline void set_mManufacturer_3(String_t* value)
	{
		___mManufacturer_3 = value;
		Il2CppCodeGenWriteBarrier((&___mManufacturer_3), value);
	}

	inline static int32_t get_offset_of_mButtonType_4() { return static_cast<int32_t>(offsetof(CustomViewerParameters_t5F3D3A911D28E3D98760A6BCA1F2E984542E2075, ___mButtonType_4)); }
	inline int32_t get_mButtonType_4() const { return ___mButtonType_4; }
	inline int32_t* get_address_of_mButtonType_4() { return &___mButtonType_4; }
	inline void set_mButtonType_4(int32_t value)
	{
		___mButtonType_4 = value;
	}

	inline static int32_t get_offset_of_mScreenToLensDistance_5() { return static_cast<int32_t>(offsetof(CustomViewerParameters_t5F3D3A911D28E3D98760A6BCA1F2E984542E2075, ___mScreenToLensDistance_5)); }
	inline float get_mScreenToLensDistance_5() const { return ___mScreenToLensDistance_5; }
	inline float* get_address_of_mScreenToLensDistance_5() { return &___mScreenToLensDistance_5; }
	inline void set_mScreenToLensDistance_5(float value)
	{
		___mScreenToLensDistance_5 = value;
	}

	inline static int32_t get_offset_of_mTrayAlignment_6() { return static_cast<int32_t>(offsetof(CustomViewerParameters_t5F3D3A911D28E3D98760A6BCA1F2E984542E2075, ___mTrayAlignment_6)); }
	inline int32_t get_mTrayAlignment_6() const { return ___mTrayAlignment_6; }
	inline int32_t* get_address_of_mTrayAlignment_6() { return &___mTrayAlignment_6; }
	inline void set_mTrayAlignment_6(int32_t value)
	{
		___mTrayAlignment_6 = value;
	}

	inline static int32_t get_offset_of_mMagnet_7() { return static_cast<int32_t>(offsetof(CustomViewerParameters_t5F3D3A911D28E3D98760A6BCA1F2E984542E2075, ___mMagnet_7)); }
	inline bool get_mMagnet_7() const { return ___mMagnet_7; }
	inline bool* get_address_of_mMagnet_7() { return &___mMagnet_7; }
	inline void set_mMagnet_7(bool value)
	{
		___mMagnet_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CUSTOMVIEWERPARAMETERS_T5F3D3A911D28E3D98760A6BCA1F2E984542E2075_H
#ifndef DEVICETRACKERARCONTROLLER_T144EF27DF432AA01FA50AA677B1EBFC37116BBC6_H
#define DEVICETRACKERARCONTROLLER_T144EF27DF432AA01FA50AA677B1EBFC37116BBC6_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.DeviceTrackerARController
struct  DeviceTrackerARController_t144EF27DF432AA01FA50AA677B1EBFC37116BBC6  : public ARController_tBCF5CBE22AE2AD3FF6DCAC88E78FF7C929D91293
{
public:
	// Vuforia.DeviceTracker/TRACKING_MODE Vuforia.DeviceTrackerARController::mTrackingMode
	int32_t ___mTrackingMode_3;
	// System.Boolean Vuforia.DeviceTrackerARController::mAutoInitTracker
	bool ___mAutoInitTracker_4;
	// System.Boolean Vuforia.DeviceTrackerARController::mAutoStartTracker
	bool ___mAutoStartTracker_5;
	// System.Boolean Vuforia.DeviceTrackerARController::mPosePrediction
	bool ___mPosePrediction_6;
	// Vuforia.RotationalDeviceTracker/MODEL_CORRECTION_MODE Vuforia.DeviceTrackerARController::mModelCorrectionMode
	int32_t ___mModelCorrectionMode_7;
	// System.Boolean Vuforia.DeviceTrackerARController::mModelTransformEnabled
	bool ___mModelTransformEnabled_8;
	// UnityEngine.Vector3 Vuforia.DeviceTrackerARController::mModelTransform
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___mModelTransform_9;
	// Vuforia.FusionProviderType Vuforia.DeviceTrackerARController::mFusionProviderType
	int32_t ___mFusionProviderType_10;
	// System.Action Vuforia.DeviceTrackerARController::mTrackerStarted
	Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * ___mTrackerStarted_11;
	// System.Boolean Vuforia.DeviceTrackerARController::mTrackerWasActiveBeforePause
	bool ___mTrackerWasActiveBeforePause_12;
	// System.Boolean Vuforia.DeviceTrackerARController::mTrackerWasActiveBeforeDisabling
	bool ___mTrackerWasActiveBeforeDisabling_13;
	// System.Single Vuforia.DeviceTrackerARController::mEmulatorPositionVelocity
	float ___mEmulatorPositionVelocity_14;
	// Vuforia.VuforiaConfiguration/DeviceTrackerConfiguration Vuforia.DeviceTrackerARController::mDeviceTrackerConfiguration
	DeviceTrackerConfiguration_tC11D2DA49200D3693731D6AFF3F793E4315D1E3F * ___mDeviceTrackerConfiguration_15;

public:
	inline static int32_t get_offset_of_mTrackingMode_3() { return static_cast<int32_t>(offsetof(DeviceTrackerARController_t144EF27DF432AA01FA50AA677B1EBFC37116BBC6, ___mTrackingMode_3)); }
	inline int32_t get_mTrackingMode_3() const { return ___mTrackingMode_3; }
	inline int32_t* get_address_of_mTrackingMode_3() { return &___mTrackingMode_3; }
	inline void set_mTrackingMode_3(int32_t value)
	{
		___mTrackingMode_3 = value;
	}

	inline static int32_t get_offset_of_mAutoInitTracker_4() { return static_cast<int32_t>(offsetof(DeviceTrackerARController_t144EF27DF432AA01FA50AA677B1EBFC37116BBC6, ___mAutoInitTracker_4)); }
	inline bool get_mAutoInitTracker_4() const { return ___mAutoInitTracker_4; }
	inline bool* get_address_of_mAutoInitTracker_4() { return &___mAutoInitTracker_4; }
	inline void set_mAutoInitTracker_4(bool value)
	{
		___mAutoInitTracker_4 = value;
	}

	inline static int32_t get_offset_of_mAutoStartTracker_5() { return static_cast<int32_t>(offsetof(DeviceTrackerARController_t144EF27DF432AA01FA50AA677B1EBFC37116BBC6, ___mAutoStartTracker_5)); }
	inline bool get_mAutoStartTracker_5() const { return ___mAutoStartTracker_5; }
	inline bool* get_address_of_mAutoStartTracker_5() { return &___mAutoStartTracker_5; }
	inline void set_mAutoStartTracker_5(bool value)
	{
		___mAutoStartTracker_5 = value;
	}

	inline static int32_t get_offset_of_mPosePrediction_6() { return static_cast<int32_t>(offsetof(DeviceTrackerARController_t144EF27DF432AA01FA50AA677B1EBFC37116BBC6, ___mPosePrediction_6)); }
	inline bool get_mPosePrediction_6() const { return ___mPosePrediction_6; }
	inline bool* get_address_of_mPosePrediction_6() { return &___mPosePrediction_6; }
	inline void set_mPosePrediction_6(bool value)
	{
		___mPosePrediction_6 = value;
	}

	inline static int32_t get_offset_of_mModelCorrectionMode_7() { return static_cast<int32_t>(offsetof(DeviceTrackerARController_t144EF27DF432AA01FA50AA677B1EBFC37116BBC6, ___mModelCorrectionMode_7)); }
	inline int32_t get_mModelCorrectionMode_7() const { return ___mModelCorrectionMode_7; }
	inline int32_t* get_address_of_mModelCorrectionMode_7() { return &___mModelCorrectionMode_7; }
	inline void set_mModelCorrectionMode_7(int32_t value)
	{
		___mModelCorrectionMode_7 = value;
	}

	inline static int32_t get_offset_of_mModelTransformEnabled_8() { return static_cast<int32_t>(offsetof(DeviceTrackerARController_t144EF27DF432AA01FA50AA677B1EBFC37116BBC6, ___mModelTransformEnabled_8)); }
	inline bool get_mModelTransformEnabled_8() const { return ___mModelTransformEnabled_8; }
	inline bool* get_address_of_mModelTransformEnabled_8() { return &___mModelTransformEnabled_8; }
	inline void set_mModelTransformEnabled_8(bool value)
	{
		___mModelTransformEnabled_8 = value;
	}

	inline static int32_t get_offset_of_mModelTransform_9() { return static_cast<int32_t>(offsetof(DeviceTrackerARController_t144EF27DF432AA01FA50AA677B1EBFC37116BBC6, ___mModelTransform_9)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_mModelTransform_9() const { return ___mModelTransform_9; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_mModelTransform_9() { return &___mModelTransform_9; }
	inline void set_mModelTransform_9(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___mModelTransform_9 = value;
	}

	inline static int32_t get_offset_of_mFusionProviderType_10() { return static_cast<int32_t>(offsetof(DeviceTrackerARController_t144EF27DF432AA01FA50AA677B1EBFC37116BBC6, ___mFusionProviderType_10)); }
	inline int32_t get_mFusionProviderType_10() const { return ___mFusionProviderType_10; }
	inline int32_t* get_address_of_mFusionProviderType_10() { return &___mFusionProviderType_10; }
	inline void set_mFusionProviderType_10(int32_t value)
	{
		___mFusionProviderType_10 = value;
	}

	inline static int32_t get_offset_of_mTrackerStarted_11() { return static_cast<int32_t>(offsetof(DeviceTrackerARController_t144EF27DF432AA01FA50AA677B1EBFC37116BBC6, ___mTrackerStarted_11)); }
	inline Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * get_mTrackerStarted_11() const { return ___mTrackerStarted_11; }
	inline Action_t591D2A86165F896B4B800BB5C25CE18672A55579 ** get_address_of_mTrackerStarted_11() { return &___mTrackerStarted_11; }
	inline void set_mTrackerStarted_11(Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * value)
	{
		___mTrackerStarted_11 = value;
		Il2CppCodeGenWriteBarrier((&___mTrackerStarted_11), value);
	}

	inline static int32_t get_offset_of_mTrackerWasActiveBeforePause_12() { return static_cast<int32_t>(offsetof(DeviceTrackerARController_t144EF27DF432AA01FA50AA677B1EBFC37116BBC6, ___mTrackerWasActiveBeforePause_12)); }
	inline bool get_mTrackerWasActiveBeforePause_12() const { return ___mTrackerWasActiveBeforePause_12; }
	inline bool* get_address_of_mTrackerWasActiveBeforePause_12() { return &___mTrackerWasActiveBeforePause_12; }
	inline void set_mTrackerWasActiveBeforePause_12(bool value)
	{
		___mTrackerWasActiveBeforePause_12 = value;
	}

	inline static int32_t get_offset_of_mTrackerWasActiveBeforeDisabling_13() { return static_cast<int32_t>(offsetof(DeviceTrackerARController_t144EF27DF432AA01FA50AA677B1EBFC37116BBC6, ___mTrackerWasActiveBeforeDisabling_13)); }
	inline bool get_mTrackerWasActiveBeforeDisabling_13() const { return ___mTrackerWasActiveBeforeDisabling_13; }
	inline bool* get_address_of_mTrackerWasActiveBeforeDisabling_13() { return &___mTrackerWasActiveBeforeDisabling_13; }
	inline void set_mTrackerWasActiveBeforeDisabling_13(bool value)
	{
		___mTrackerWasActiveBeforeDisabling_13 = value;
	}

	inline static int32_t get_offset_of_mEmulatorPositionVelocity_14() { return static_cast<int32_t>(offsetof(DeviceTrackerARController_t144EF27DF432AA01FA50AA677B1EBFC37116BBC6, ___mEmulatorPositionVelocity_14)); }
	inline float get_mEmulatorPositionVelocity_14() const { return ___mEmulatorPositionVelocity_14; }
	inline float* get_address_of_mEmulatorPositionVelocity_14() { return &___mEmulatorPositionVelocity_14; }
	inline void set_mEmulatorPositionVelocity_14(float value)
	{
		___mEmulatorPositionVelocity_14 = value;
	}

	inline static int32_t get_offset_of_mDeviceTrackerConfiguration_15() { return static_cast<int32_t>(offsetof(DeviceTrackerARController_t144EF27DF432AA01FA50AA677B1EBFC37116BBC6, ___mDeviceTrackerConfiguration_15)); }
	inline DeviceTrackerConfiguration_tC11D2DA49200D3693731D6AFF3F793E4315D1E3F * get_mDeviceTrackerConfiguration_15() const { return ___mDeviceTrackerConfiguration_15; }
	inline DeviceTrackerConfiguration_tC11D2DA49200D3693731D6AFF3F793E4315D1E3F ** get_address_of_mDeviceTrackerConfiguration_15() { return &___mDeviceTrackerConfiguration_15; }
	inline void set_mDeviceTrackerConfiguration_15(DeviceTrackerConfiguration_tC11D2DA49200D3693731D6AFF3F793E4315D1E3F * value)
	{
		___mDeviceTrackerConfiguration_15 = value;
		Il2CppCodeGenWriteBarrier((&___mDeviceTrackerConfiguration_15), value);
	}
};

struct DeviceTrackerARController_t144EF27DF432AA01FA50AA677B1EBFC37116BBC6_StaticFields
{
public:
	// UnityEngine.Vector3 Vuforia.DeviceTrackerARController::DEFAULT_HEAD_PIVOT
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___DEFAULT_HEAD_PIVOT_1;
	// UnityEngine.Vector3 Vuforia.DeviceTrackerARController::DEFAULT_HANDHELD_PIVOT
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___DEFAULT_HANDHELD_PIVOT_2;
	// Vuforia.DeviceTrackerARController Vuforia.DeviceTrackerARController::mInstance
	DeviceTrackerARController_t144EF27DF432AA01FA50AA677B1EBFC37116BBC6 * ___mInstance_16;
	// System.Object Vuforia.DeviceTrackerARController::mPadlock
	RuntimeObject * ___mPadlock_17;

public:
	inline static int32_t get_offset_of_DEFAULT_HEAD_PIVOT_1() { return static_cast<int32_t>(offsetof(DeviceTrackerARController_t144EF27DF432AA01FA50AA677B1EBFC37116BBC6_StaticFields, ___DEFAULT_HEAD_PIVOT_1)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_DEFAULT_HEAD_PIVOT_1() const { return ___DEFAULT_HEAD_PIVOT_1; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_DEFAULT_HEAD_PIVOT_1() { return &___DEFAULT_HEAD_PIVOT_1; }
	inline void set_DEFAULT_HEAD_PIVOT_1(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___DEFAULT_HEAD_PIVOT_1 = value;
	}

	inline static int32_t get_offset_of_DEFAULT_HANDHELD_PIVOT_2() { return static_cast<int32_t>(offsetof(DeviceTrackerARController_t144EF27DF432AA01FA50AA677B1EBFC37116BBC6_StaticFields, ___DEFAULT_HANDHELD_PIVOT_2)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_DEFAULT_HANDHELD_PIVOT_2() const { return ___DEFAULT_HANDHELD_PIVOT_2; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_DEFAULT_HANDHELD_PIVOT_2() { return &___DEFAULT_HANDHELD_PIVOT_2; }
	inline void set_DEFAULT_HANDHELD_PIVOT_2(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___DEFAULT_HANDHELD_PIVOT_2 = value;
	}

	inline static int32_t get_offset_of_mInstance_16() { return static_cast<int32_t>(offsetof(DeviceTrackerARController_t144EF27DF432AA01FA50AA677B1EBFC37116BBC6_StaticFields, ___mInstance_16)); }
	inline DeviceTrackerARController_t144EF27DF432AA01FA50AA677B1EBFC37116BBC6 * get_mInstance_16() const { return ___mInstance_16; }
	inline DeviceTrackerARController_t144EF27DF432AA01FA50AA677B1EBFC37116BBC6 ** get_address_of_mInstance_16() { return &___mInstance_16; }
	inline void set_mInstance_16(DeviceTrackerARController_t144EF27DF432AA01FA50AA677B1EBFC37116BBC6 * value)
	{
		___mInstance_16 = value;
		Il2CppCodeGenWriteBarrier((&___mInstance_16), value);
	}

	inline static int32_t get_offset_of_mPadlock_17() { return static_cast<int32_t>(offsetof(DeviceTrackerARController_t144EF27DF432AA01FA50AA677B1EBFC37116BBC6_StaticFields, ___mPadlock_17)); }
	inline RuntimeObject * get_mPadlock_17() const { return ___mPadlock_17; }
	inline RuntimeObject ** get_address_of_mPadlock_17() { return &___mPadlock_17; }
	inline void set_mPadlock_17(RuntimeObject * value)
	{
		___mPadlock_17 = value;
		Il2CppCodeGenWriteBarrier((&___mPadlock_17), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEVICETRACKERARCONTROLLER_T144EF27DF432AA01FA50AA677B1EBFC37116BBC6_H
#ifndef DEVICETRACKINGMANAGER_T1D264AEA989AA45ED5A85F7FB142F38DB3EE482A_H
#define DEVICETRACKINGMANAGER_T1D264AEA989AA45ED5A85F7FB142F38DB3EE482A_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.DeviceTrackingManager
struct  DeviceTrackingManager_t1D264AEA989AA45ED5A85F7FB142F38DB3EE482A  : public RuntimeObject
{
public:
	// UnityEngine.Vector3 Vuforia.DeviceTrackingManager::mDeviceTrackerPositonOffset
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___mDeviceTrackerPositonOffset_0;
	// UnityEngine.Quaternion Vuforia.DeviceTrackingManager::mDeviceTrackerRotationOffset
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___mDeviceTrackerRotationOffset_1;
	// System.Action Vuforia.DeviceTrackingManager::mBeforeDevicePoseUpdated
	Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * ___mBeforeDevicePoseUpdated_2;
	// System.Action Vuforia.DeviceTrackingManager::mAfterDevicePoseUpdated
	Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * ___mAfterDevicePoseUpdated_3;
	// System.Action`1<Vuforia.TrackableBehaviour/Status> Vuforia.DeviceTrackingManager::mStatusChanged
	Action_1_tB2D157B76595F25A0403EA2A0C32F01CE30B4F98 * ___mStatusChanged_4;
	// System.Action`2<Vuforia.TrackableBehaviour/Status,Vuforia.TrackableBehaviour/StatusInfo> Vuforia.DeviceTrackingManager::mStatusOrInfoChanged
	Action_2_t936B0D5682B789A67828A9CF1951CB8FF29DEF13 * ___mStatusOrInfoChanged_5;
	// Vuforia.TrackableBehaviour/Status Vuforia.DeviceTrackingManager::mCurrentTrackableStatus
	int32_t ___mCurrentTrackableStatus_6;
	// Vuforia.TrackableBehaviour/StatusInfo Vuforia.DeviceTrackingManager::mCurrentTrackableStatusInfo
	int32_t ___mCurrentTrackableStatusInfo_7;

public:
	inline static int32_t get_offset_of_mDeviceTrackerPositonOffset_0() { return static_cast<int32_t>(offsetof(DeviceTrackingManager_t1D264AEA989AA45ED5A85F7FB142F38DB3EE482A, ___mDeviceTrackerPositonOffset_0)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_mDeviceTrackerPositonOffset_0() const { return ___mDeviceTrackerPositonOffset_0; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_mDeviceTrackerPositonOffset_0() { return &___mDeviceTrackerPositonOffset_0; }
	inline void set_mDeviceTrackerPositonOffset_0(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___mDeviceTrackerPositonOffset_0 = value;
	}

	inline static int32_t get_offset_of_mDeviceTrackerRotationOffset_1() { return static_cast<int32_t>(offsetof(DeviceTrackingManager_t1D264AEA989AA45ED5A85F7FB142F38DB3EE482A, ___mDeviceTrackerRotationOffset_1)); }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  get_mDeviceTrackerRotationOffset_1() const { return ___mDeviceTrackerRotationOffset_1; }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * get_address_of_mDeviceTrackerRotationOffset_1() { return &___mDeviceTrackerRotationOffset_1; }
	inline void set_mDeviceTrackerRotationOffset_1(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  value)
	{
		___mDeviceTrackerRotationOffset_1 = value;
	}

	inline static int32_t get_offset_of_mBeforeDevicePoseUpdated_2() { return static_cast<int32_t>(offsetof(DeviceTrackingManager_t1D264AEA989AA45ED5A85F7FB142F38DB3EE482A, ___mBeforeDevicePoseUpdated_2)); }
	inline Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * get_mBeforeDevicePoseUpdated_2() const { return ___mBeforeDevicePoseUpdated_2; }
	inline Action_t591D2A86165F896B4B800BB5C25CE18672A55579 ** get_address_of_mBeforeDevicePoseUpdated_2() { return &___mBeforeDevicePoseUpdated_2; }
	inline void set_mBeforeDevicePoseUpdated_2(Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * value)
	{
		___mBeforeDevicePoseUpdated_2 = value;
		Il2CppCodeGenWriteBarrier((&___mBeforeDevicePoseUpdated_2), value);
	}

	inline static int32_t get_offset_of_mAfterDevicePoseUpdated_3() { return static_cast<int32_t>(offsetof(DeviceTrackingManager_t1D264AEA989AA45ED5A85F7FB142F38DB3EE482A, ___mAfterDevicePoseUpdated_3)); }
	inline Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * get_mAfterDevicePoseUpdated_3() const { return ___mAfterDevicePoseUpdated_3; }
	inline Action_t591D2A86165F896B4B800BB5C25CE18672A55579 ** get_address_of_mAfterDevicePoseUpdated_3() { return &___mAfterDevicePoseUpdated_3; }
	inline void set_mAfterDevicePoseUpdated_3(Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * value)
	{
		___mAfterDevicePoseUpdated_3 = value;
		Il2CppCodeGenWriteBarrier((&___mAfterDevicePoseUpdated_3), value);
	}

	inline static int32_t get_offset_of_mStatusChanged_4() { return static_cast<int32_t>(offsetof(DeviceTrackingManager_t1D264AEA989AA45ED5A85F7FB142F38DB3EE482A, ___mStatusChanged_4)); }
	inline Action_1_tB2D157B76595F25A0403EA2A0C32F01CE30B4F98 * get_mStatusChanged_4() const { return ___mStatusChanged_4; }
	inline Action_1_tB2D157B76595F25A0403EA2A0C32F01CE30B4F98 ** get_address_of_mStatusChanged_4() { return &___mStatusChanged_4; }
	inline void set_mStatusChanged_4(Action_1_tB2D157B76595F25A0403EA2A0C32F01CE30B4F98 * value)
	{
		___mStatusChanged_4 = value;
		Il2CppCodeGenWriteBarrier((&___mStatusChanged_4), value);
	}

	inline static int32_t get_offset_of_mStatusOrInfoChanged_5() { return static_cast<int32_t>(offsetof(DeviceTrackingManager_t1D264AEA989AA45ED5A85F7FB142F38DB3EE482A, ___mStatusOrInfoChanged_5)); }
	inline Action_2_t936B0D5682B789A67828A9CF1951CB8FF29DEF13 * get_mStatusOrInfoChanged_5() const { return ___mStatusOrInfoChanged_5; }
	inline Action_2_t936B0D5682B789A67828A9CF1951CB8FF29DEF13 ** get_address_of_mStatusOrInfoChanged_5() { return &___mStatusOrInfoChanged_5; }
	inline void set_mStatusOrInfoChanged_5(Action_2_t936B0D5682B789A67828A9CF1951CB8FF29DEF13 * value)
	{
		___mStatusOrInfoChanged_5 = value;
		Il2CppCodeGenWriteBarrier((&___mStatusOrInfoChanged_5), value);
	}

	inline static int32_t get_offset_of_mCurrentTrackableStatus_6() { return static_cast<int32_t>(offsetof(DeviceTrackingManager_t1D264AEA989AA45ED5A85F7FB142F38DB3EE482A, ___mCurrentTrackableStatus_6)); }
	inline int32_t get_mCurrentTrackableStatus_6() const { return ___mCurrentTrackableStatus_6; }
	inline int32_t* get_address_of_mCurrentTrackableStatus_6() { return &___mCurrentTrackableStatus_6; }
	inline void set_mCurrentTrackableStatus_6(int32_t value)
	{
		___mCurrentTrackableStatus_6 = value;
	}

	inline static int32_t get_offset_of_mCurrentTrackableStatusInfo_7() { return static_cast<int32_t>(offsetof(DeviceTrackingManager_t1D264AEA989AA45ED5A85F7FB142F38DB3EE482A, ___mCurrentTrackableStatusInfo_7)); }
	inline int32_t get_mCurrentTrackableStatusInfo_7() const { return ___mCurrentTrackableStatusInfo_7; }
	inline int32_t* get_address_of_mCurrentTrackableStatusInfo_7() { return &___mCurrentTrackableStatusInfo_7; }
	inline void set_mCurrentTrackableStatusInfo_7(int32_t value)
	{
		___mCurrentTrackableStatusInfo_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEVICETRACKINGMANAGER_T1D264AEA989AA45ED5A85F7FB142F38DB3EE482A_H
#ifndef HIDEEXCESSAREAUTILITY_T4DEC8A8570DC0458B45E1B21A6ABB435D6C63B32_H
#define HIDEEXCESSAREAUTILITY_T4DEC8A8570DC0458B45E1B21A6ABB435D6C63B32_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.HideExcessAreaUtility
struct  HideExcessAreaUtility_t4DEC8A8570DC0458B45E1B21A6ABB435D6C63B32  : public RuntimeObject
{
public:
	// Vuforia.IExcessAreaClipping Vuforia.HideExcessAreaUtility::mClippingImpl
	RuntimeObject* ___mClippingImpl_0;
	// Vuforia.HideExcessAreaUtility/CLIPPING_MODE Vuforia.HideExcessAreaUtility::mClippingMode
	int32_t ___mClippingMode_1;
	// Vuforia.VideoBackgroundManager Vuforia.HideExcessAreaUtility::mVideoBgMgr
	VideoBackgroundManager_tDCE9A898A17B3C5ED63C8BDE29A4455C4074BD50 * ___mVideoBgMgr_2;
	// System.Boolean Vuforia.HideExcessAreaUtility::mSceneScaledDown
	bool ___mSceneScaledDown_3;
	// System.Boolean Vuforia.HideExcessAreaUtility::mStarted
	bool ___mStarted_4;
	// System.Boolean Vuforia.HideExcessAreaUtility::mEnabled
	bool ___mEnabled_5;
	// UnityEngine.GameObject Vuforia.HideExcessAreaUtility::mParentGameObject
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___mParentGameObject_6;

public:
	inline static int32_t get_offset_of_mClippingImpl_0() { return static_cast<int32_t>(offsetof(HideExcessAreaUtility_t4DEC8A8570DC0458B45E1B21A6ABB435D6C63B32, ___mClippingImpl_0)); }
	inline RuntimeObject* get_mClippingImpl_0() const { return ___mClippingImpl_0; }
	inline RuntimeObject** get_address_of_mClippingImpl_0() { return &___mClippingImpl_0; }
	inline void set_mClippingImpl_0(RuntimeObject* value)
	{
		___mClippingImpl_0 = value;
		Il2CppCodeGenWriteBarrier((&___mClippingImpl_0), value);
	}

	inline static int32_t get_offset_of_mClippingMode_1() { return static_cast<int32_t>(offsetof(HideExcessAreaUtility_t4DEC8A8570DC0458B45E1B21A6ABB435D6C63B32, ___mClippingMode_1)); }
	inline int32_t get_mClippingMode_1() const { return ___mClippingMode_1; }
	inline int32_t* get_address_of_mClippingMode_1() { return &___mClippingMode_1; }
	inline void set_mClippingMode_1(int32_t value)
	{
		___mClippingMode_1 = value;
	}

	inline static int32_t get_offset_of_mVideoBgMgr_2() { return static_cast<int32_t>(offsetof(HideExcessAreaUtility_t4DEC8A8570DC0458B45E1B21A6ABB435D6C63B32, ___mVideoBgMgr_2)); }
	inline VideoBackgroundManager_tDCE9A898A17B3C5ED63C8BDE29A4455C4074BD50 * get_mVideoBgMgr_2() const { return ___mVideoBgMgr_2; }
	inline VideoBackgroundManager_tDCE9A898A17B3C5ED63C8BDE29A4455C4074BD50 ** get_address_of_mVideoBgMgr_2() { return &___mVideoBgMgr_2; }
	inline void set_mVideoBgMgr_2(VideoBackgroundManager_tDCE9A898A17B3C5ED63C8BDE29A4455C4074BD50 * value)
	{
		___mVideoBgMgr_2 = value;
		Il2CppCodeGenWriteBarrier((&___mVideoBgMgr_2), value);
	}

	inline static int32_t get_offset_of_mSceneScaledDown_3() { return static_cast<int32_t>(offsetof(HideExcessAreaUtility_t4DEC8A8570DC0458B45E1B21A6ABB435D6C63B32, ___mSceneScaledDown_3)); }
	inline bool get_mSceneScaledDown_3() const { return ___mSceneScaledDown_3; }
	inline bool* get_address_of_mSceneScaledDown_3() { return &___mSceneScaledDown_3; }
	inline void set_mSceneScaledDown_3(bool value)
	{
		___mSceneScaledDown_3 = value;
	}

	inline static int32_t get_offset_of_mStarted_4() { return static_cast<int32_t>(offsetof(HideExcessAreaUtility_t4DEC8A8570DC0458B45E1B21A6ABB435D6C63B32, ___mStarted_4)); }
	inline bool get_mStarted_4() const { return ___mStarted_4; }
	inline bool* get_address_of_mStarted_4() { return &___mStarted_4; }
	inline void set_mStarted_4(bool value)
	{
		___mStarted_4 = value;
	}

	inline static int32_t get_offset_of_mEnabled_5() { return static_cast<int32_t>(offsetof(HideExcessAreaUtility_t4DEC8A8570DC0458B45E1B21A6ABB435D6C63B32, ___mEnabled_5)); }
	inline bool get_mEnabled_5() const { return ___mEnabled_5; }
	inline bool* get_address_of_mEnabled_5() { return &___mEnabled_5; }
	inline void set_mEnabled_5(bool value)
	{
		___mEnabled_5 = value;
	}

	inline static int32_t get_offset_of_mParentGameObject_6() { return static_cast<int32_t>(offsetof(HideExcessAreaUtility_t4DEC8A8570DC0458B45E1B21A6ABB435D6C63B32, ___mParentGameObject_6)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_mParentGameObject_6() const { return ___mParentGameObject_6; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_mParentGameObject_6() { return &___mParentGameObject_6; }
	inline void set_mParentGameObject_6(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___mParentGameObject_6 = value;
		Il2CppCodeGenWriteBarrier((&___mParentGameObject_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HIDEEXCESSAREAUTILITY_T4DEC8A8570DC0458B45E1B21A6ABB435D6C63B32_H
#ifndef INSTANCEIDIMPL_TB528D9E690D089FBF42027CEF1983B298A9C9371_H
#define INSTANCEIDIMPL_TB528D9E690D089FBF42027CEF1983B298A9C9371_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.InstanceIdImpl
struct  InstanceIdImpl_tB528D9E690D089FBF42027CEF1983B298A9C9371  : public RuntimeObject
{
public:
	// Vuforia.InstanceIdType Vuforia.InstanceIdImpl::mDataType
	int32_t ___mDataType_0;
	// System.Byte[] Vuforia.InstanceIdImpl::mBuffer
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___mBuffer_1;
	// System.UInt64 Vuforia.InstanceIdImpl::mNumericValue
	uint64_t ___mNumericValue_2;
	// System.UInt32 Vuforia.InstanceIdImpl::mDataLength
	uint32_t ___mDataLength_3;
	// System.String Vuforia.InstanceIdImpl::mCachedStringValue
	String_t* ___mCachedStringValue_4;

public:
	inline static int32_t get_offset_of_mDataType_0() { return static_cast<int32_t>(offsetof(InstanceIdImpl_tB528D9E690D089FBF42027CEF1983B298A9C9371, ___mDataType_0)); }
	inline int32_t get_mDataType_0() const { return ___mDataType_0; }
	inline int32_t* get_address_of_mDataType_0() { return &___mDataType_0; }
	inline void set_mDataType_0(int32_t value)
	{
		___mDataType_0 = value;
	}

	inline static int32_t get_offset_of_mBuffer_1() { return static_cast<int32_t>(offsetof(InstanceIdImpl_tB528D9E690D089FBF42027CEF1983B298A9C9371, ___mBuffer_1)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_mBuffer_1() const { return ___mBuffer_1; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_mBuffer_1() { return &___mBuffer_1; }
	inline void set_mBuffer_1(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___mBuffer_1 = value;
		Il2CppCodeGenWriteBarrier((&___mBuffer_1), value);
	}

	inline static int32_t get_offset_of_mNumericValue_2() { return static_cast<int32_t>(offsetof(InstanceIdImpl_tB528D9E690D089FBF42027CEF1983B298A9C9371, ___mNumericValue_2)); }
	inline uint64_t get_mNumericValue_2() const { return ___mNumericValue_2; }
	inline uint64_t* get_address_of_mNumericValue_2() { return &___mNumericValue_2; }
	inline void set_mNumericValue_2(uint64_t value)
	{
		___mNumericValue_2 = value;
	}

	inline static int32_t get_offset_of_mDataLength_3() { return static_cast<int32_t>(offsetof(InstanceIdImpl_tB528D9E690D089FBF42027CEF1983B298A9C9371, ___mDataLength_3)); }
	inline uint32_t get_mDataLength_3() const { return ___mDataLength_3; }
	inline uint32_t* get_address_of_mDataLength_3() { return &___mDataLength_3; }
	inline void set_mDataLength_3(uint32_t value)
	{
		___mDataLength_3 = value;
	}

	inline static int32_t get_offset_of_mCachedStringValue_4() { return static_cast<int32_t>(offsetof(InstanceIdImpl_tB528D9E690D089FBF42027CEF1983B298A9C9371, ___mCachedStringValue_4)); }
	inline String_t* get_mCachedStringValue_4() const { return ___mCachedStringValue_4; }
	inline String_t** get_address_of_mCachedStringValue_4() { return &___mCachedStringValue_4; }
	inline void set_mCachedStringValue_4(String_t* value)
	{
		___mCachedStringValue_4 = value;
		Il2CppCodeGenWriteBarrier((&___mCachedStringValue_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INSTANCEIDIMPL_TB528D9E690D089FBF42027CEF1983B298A9C9371_H
#ifndef MIXEDREALITYCONTROLLER_T140A79CE6381E61D93A6C265DCC7A50522A901BE_H
#define MIXEDREALITYCONTROLLER_T140A79CE6381E61D93A6C265DCC7A50522A901BE_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.MixedRealityController
struct  MixedRealityController_t140A79CE6381E61D93A6C265DCC7A50522A901BE  : public RuntimeObject
{
public:
	// Vuforia.VuforiaARController Vuforia.MixedRealityController::mVuforiaBehaviour
	VuforiaARController_t7732FFB77105A2F5BBEA40E3CECC5C15DA624876 * ___mVuforiaBehaviour_2;
	// Vuforia.DigitalEyewearARController Vuforia.MixedRealityController::mDigitalEyewearBehaviour
	DigitalEyewearARController_t973FDCC2DBCE328656150191FBC1A0E49189D9E4 * ___mDigitalEyewearBehaviour_3;
	// Vuforia.VideoBackgroundManager Vuforia.MixedRealityController::mVideoBackgroundManager
	VideoBackgroundManager_tDCE9A898A17B3C5ED63C8BDE29A4455C4074BD50 * ___mVideoBackgroundManager_4;
	// System.Boolean Vuforia.MixedRealityController::mViewerHasBeenSetExternally
	bool ___mViewerHasBeenSetExternally_5;
	// Vuforia.IViewerParameters Vuforia.MixedRealityController::mViewerParameters
	RuntimeObject* ___mViewerParameters_6;
	// System.Boolean Vuforia.MixedRealityController::mFrameWorkHasBeenSetExternally
	bool ___mFrameWorkHasBeenSetExternally_7;
	// Vuforia.DigitalEyewearARController/StereoFramework Vuforia.MixedRealityController::mStereoFramework
	int32_t ___mStereoFramework_8;
	// System.Boolean Vuforia.MixedRealityController::mObjectTrackerStopped
	bool ___mObjectTrackerStopped_9;
	// System.Boolean Vuforia.MixedRealityController::mAutoStopCameraIfNotRequired
	bool ___mAutoStopCameraIfNotRequired_10;

public:
	inline static int32_t get_offset_of_mVuforiaBehaviour_2() { return static_cast<int32_t>(offsetof(MixedRealityController_t140A79CE6381E61D93A6C265DCC7A50522A901BE, ___mVuforiaBehaviour_2)); }
	inline VuforiaARController_t7732FFB77105A2F5BBEA40E3CECC5C15DA624876 * get_mVuforiaBehaviour_2() const { return ___mVuforiaBehaviour_2; }
	inline VuforiaARController_t7732FFB77105A2F5BBEA40E3CECC5C15DA624876 ** get_address_of_mVuforiaBehaviour_2() { return &___mVuforiaBehaviour_2; }
	inline void set_mVuforiaBehaviour_2(VuforiaARController_t7732FFB77105A2F5BBEA40E3CECC5C15DA624876 * value)
	{
		___mVuforiaBehaviour_2 = value;
		Il2CppCodeGenWriteBarrier((&___mVuforiaBehaviour_2), value);
	}

	inline static int32_t get_offset_of_mDigitalEyewearBehaviour_3() { return static_cast<int32_t>(offsetof(MixedRealityController_t140A79CE6381E61D93A6C265DCC7A50522A901BE, ___mDigitalEyewearBehaviour_3)); }
	inline DigitalEyewearARController_t973FDCC2DBCE328656150191FBC1A0E49189D9E4 * get_mDigitalEyewearBehaviour_3() const { return ___mDigitalEyewearBehaviour_3; }
	inline DigitalEyewearARController_t973FDCC2DBCE328656150191FBC1A0E49189D9E4 ** get_address_of_mDigitalEyewearBehaviour_3() { return &___mDigitalEyewearBehaviour_3; }
	inline void set_mDigitalEyewearBehaviour_3(DigitalEyewearARController_t973FDCC2DBCE328656150191FBC1A0E49189D9E4 * value)
	{
		___mDigitalEyewearBehaviour_3 = value;
		Il2CppCodeGenWriteBarrier((&___mDigitalEyewearBehaviour_3), value);
	}

	inline static int32_t get_offset_of_mVideoBackgroundManager_4() { return static_cast<int32_t>(offsetof(MixedRealityController_t140A79CE6381E61D93A6C265DCC7A50522A901BE, ___mVideoBackgroundManager_4)); }
	inline VideoBackgroundManager_tDCE9A898A17B3C5ED63C8BDE29A4455C4074BD50 * get_mVideoBackgroundManager_4() const { return ___mVideoBackgroundManager_4; }
	inline VideoBackgroundManager_tDCE9A898A17B3C5ED63C8BDE29A4455C4074BD50 ** get_address_of_mVideoBackgroundManager_4() { return &___mVideoBackgroundManager_4; }
	inline void set_mVideoBackgroundManager_4(VideoBackgroundManager_tDCE9A898A17B3C5ED63C8BDE29A4455C4074BD50 * value)
	{
		___mVideoBackgroundManager_4 = value;
		Il2CppCodeGenWriteBarrier((&___mVideoBackgroundManager_4), value);
	}

	inline static int32_t get_offset_of_mViewerHasBeenSetExternally_5() { return static_cast<int32_t>(offsetof(MixedRealityController_t140A79CE6381E61D93A6C265DCC7A50522A901BE, ___mViewerHasBeenSetExternally_5)); }
	inline bool get_mViewerHasBeenSetExternally_5() const { return ___mViewerHasBeenSetExternally_5; }
	inline bool* get_address_of_mViewerHasBeenSetExternally_5() { return &___mViewerHasBeenSetExternally_5; }
	inline void set_mViewerHasBeenSetExternally_5(bool value)
	{
		___mViewerHasBeenSetExternally_5 = value;
	}

	inline static int32_t get_offset_of_mViewerParameters_6() { return static_cast<int32_t>(offsetof(MixedRealityController_t140A79CE6381E61D93A6C265DCC7A50522A901BE, ___mViewerParameters_6)); }
	inline RuntimeObject* get_mViewerParameters_6() const { return ___mViewerParameters_6; }
	inline RuntimeObject** get_address_of_mViewerParameters_6() { return &___mViewerParameters_6; }
	inline void set_mViewerParameters_6(RuntimeObject* value)
	{
		___mViewerParameters_6 = value;
		Il2CppCodeGenWriteBarrier((&___mViewerParameters_6), value);
	}

	inline static int32_t get_offset_of_mFrameWorkHasBeenSetExternally_7() { return static_cast<int32_t>(offsetof(MixedRealityController_t140A79CE6381E61D93A6C265DCC7A50522A901BE, ___mFrameWorkHasBeenSetExternally_7)); }
	inline bool get_mFrameWorkHasBeenSetExternally_7() const { return ___mFrameWorkHasBeenSetExternally_7; }
	inline bool* get_address_of_mFrameWorkHasBeenSetExternally_7() { return &___mFrameWorkHasBeenSetExternally_7; }
	inline void set_mFrameWorkHasBeenSetExternally_7(bool value)
	{
		___mFrameWorkHasBeenSetExternally_7 = value;
	}

	inline static int32_t get_offset_of_mStereoFramework_8() { return static_cast<int32_t>(offsetof(MixedRealityController_t140A79CE6381E61D93A6C265DCC7A50522A901BE, ___mStereoFramework_8)); }
	inline int32_t get_mStereoFramework_8() const { return ___mStereoFramework_8; }
	inline int32_t* get_address_of_mStereoFramework_8() { return &___mStereoFramework_8; }
	inline void set_mStereoFramework_8(int32_t value)
	{
		___mStereoFramework_8 = value;
	}

	inline static int32_t get_offset_of_mObjectTrackerStopped_9() { return static_cast<int32_t>(offsetof(MixedRealityController_t140A79CE6381E61D93A6C265DCC7A50522A901BE, ___mObjectTrackerStopped_9)); }
	inline bool get_mObjectTrackerStopped_9() const { return ___mObjectTrackerStopped_9; }
	inline bool* get_address_of_mObjectTrackerStopped_9() { return &___mObjectTrackerStopped_9; }
	inline void set_mObjectTrackerStopped_9(bool value)
	{
		___mObjectTrackerStopped_9 = value;
	}

	inline static int32_t get_offset_of_mAutoStopCameraIfNotRequired_10() { return static_cast<int32_t>(offsetof(MixedRealityController_t140A79CE6381E61D93A6C265DCC7A50522A901BE, ___mAutoStopCameraIfNotRequired_10)); }
	inline bool get_mAutoStopCameraIfNotRequired_10() const { return ___mAutoStopCameraIfNotRequired_10; }
	inline bool* get_address_of_mAutoStopCameraIfNotRequired_10() { return &___mAutoStopCameraIfNotRequired_10; }
	inline void set_mAutoStopCameraIfNotRequired_10(bool value)
	{
		___mAutoStopCameraIfNotRequired_10 = value;
	}
};

struct MixedRealityController_t140A79CE6381E61D93A6C265DCC7A50522A901BE_StaticFields
{
public:
	// Vuforia.MixedRealityController Vuforia.MixedRealityController::mInstance
	MixedRealityController_t140A79CE6381E61D93A6C265DCC7A50522A901BE * ___mInstance_1;

public:
	inline static int32_t get_offset_of_mInstance_1() { return static_cast<int32_t>(offsetof(MixedRealityController_t140A79CE6381E61D93A6C265DCC7A50522A901BE_StaticFields, ___mInstance_1)); }
	inline MixedRealityController_t140A79CE6381E61D93A6C265DCC7A50522A901BE * get_mInstance_1() const { return ___mInstance_1; }
	inline MixedRealityController_t140A79CE6381E61D93A6C265DCC7A50522A901BE ** get_address_of_mInstance_1() { return &___mInstance_1; }
	inline void set_mInstance_1(MixedRealityController_t140A79CE6381E61D93A6C265DCC7A50522A901BE * value)
	{
		___mInstance_1 = value;
		Il2CppCodeGenWriteBarrier((&___mInstance_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MIXEDREALITYCONTROLLER_T140A79CE6381E61D93A6C265DCC7A50522A901BE_H
#ifndef NULLCAMERACONFIGURATION_T3E134CB69EF1E83C98521291D9157325E2114A14_H
#define NULLCAMERACONFIGURATION_T3E134CB69EF1E83C98521291D9157325E2114A14_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.NullCameraConfiguration
struct  NullCameraConfiguration_t3E134CB69EF1E83C98521291D9157325E2114A14  : public RuntimeObject
{
public:
	// UnityEngine.ScreenOrientation Vuforia.NullCameraConfiguration::mProjectionOrientation
	int32_t ___mProjectionOrientation_0;

public:
	inline static int32_t get_offset_of_mProjectionOrientation_0() { return static_cast<int32_t>(offsetof(NullCameraConfiguration_t3E134CB69EF1E83C98521291D9157325E2114A14, ___mProjectionOrientation_0)); }
	inline int32_t get_mProjectionOrientation_0() const { return ___mProjectionOrientation_0; }
	inline int32_t* get_address_of_mProjectionOrientation_0() { return &___mProjectionOrientation_0; }
	inline void set_mProjectionOrientation_0(int32_t value)
	{
		___mProjectionOrientation_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NULLCAMERACONFIGURATION_T3E134CB69EF1E83C98521291D9157325E2114A14_H
#ifndef ROTATIONALDEVICETRACKERIMPL_T73A4F1EC898C9EEE6829C1E6B440EF037A05B379_H
#define ROTATIONALDEVICETRACKERIMPL_T73A4F1EC898C9EEE6829C1E6B440EF037A05B379_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.RotationalDeviceTrackerImpl
struct  RotationalDeviceTrackerImpl_t73A4F1EC898C9EEE6829C1E6B440EF037A05B379  : public RotationalDeviceTracker_tFDD94B013A18CCDE7AED9F6A13C8147742E66DEA
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ROTATIONALDEVICETRACKERIMPL_T73A4F1EC898C9EEE6829C1E6B440EF037A05B379_H
#ifndef ROTATIONALPLAYMODEDEVICETRACKERIMPL_T8D65C4594D7497AA7FE1E56C27B568433A0E55E7_H
#define ROTATIONALPLAYMODEDEVICETRACKERIMPL_T8D65C4594D7497AA7FE1E56C27B568433A0E55E7_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.RotationalPlayModeDeviceTrackerImpl
struct  RotationalPlayModeDeviceTrackerImpl_t8D65C4594D7497AA7FE1E56C27B568433A0E55E7  : public RotationalDeviceTracker_tFDD94B013A18CCDE7AED9F6A13C8147742E66DEA
{
public:
	// UnityEngine.Vector3 Vuforia.RotationalPlayModeDeviceTrackerImpl::mVectorZero
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___mVectorZero_1;
	// UnityEngine.Vector3 Vuforia.RotationalPlayModeDeviceTrackerImpl::mModelCorrectionTransform
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___mModelCorrectionTransform_2;
	// Vuforia.RotationalDeviceTracker/MODEL_CORRECTION_MODE Vuforia.RotationalPlayModeDeviceTrackerImpl::mModelCorrection
	int32_t ___mModelCorrection_3;
	// UnityEngine.Vector3 Vuforia.RotationalPlayModeDeviceTrackerImpl::<Rotation>k__BackingField
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___U3CRotationU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_mVectorZero_1() { return static_cast<int32_t>(offsetof(RotationalPlayModeDeviceTrackerImpl_t8D65C4594D7497AA7FE1E56C27B568433A0E55E7, ___mVectorZero_1)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_mVectorZero_1() const { return ___mVectorZero_1; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_mVectorZero_1() { return &___mVectorZero_1; }
	inline void set_mVectorZero_1(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___mVectorZero_1 = value;
	}

	inline static int32_t get_offset_of_mModelCorrectionTransform_2() { return static_cast<int32_t>(offsetof(RotationalPlayModeDeviceTrackerImpl_t8D65C4594D7497AA7FE1E56C27B568433A0E55E7, ___mModelCorrectionTransform_2)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_mModelCorrectionTransform_2() const { return ___mModelCorrectionTransform_2; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_mModelCorrectionTransform_2() { return &___mModelCorrectionTransform_2; }
	inline void set_mModelCorrectionTransform_2(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___mModelCorrectionTransform_2 = value;
	}

	inline static int32_t get_offset_of_mModelCorrection_3() { return static_cast<int32_t>(offsetof(RotationalPlayModeDeviceTrackerImpl_t8D65C4594D7497AA7FE1E56C27B568433A0E55E7, ___mModelCorrection_3)); }
	inline int32_t get_mModelCorrection_3() const { return ___mModelCorrection_3; }
	inline int32_t* get_address_of_mModelCorrection_3() { return &___mModelCorrection_3; }
	inline void set_mModelCorrection_3(int32_t value)
	{
		___mModelCorrection_3 = value;
	}

	inline static int32_t get_offset_of_U3CRotationU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(RotationalPlayModeDeviceTrackerImpl_t8D65C4594D7497AA7FE1E56C27B568433A0E55E7, ___U3CRotationU3Ek__BackingField_4)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_U3CRotationU3Ek__BackingField_4() const { return ___U3CRotationU3Ek__BackingField_4; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_U3CRotationU3Ek__BackingField_4() { return &___U3CRotationU3Ek__BackingField_4; }
	inline void set_U3CRotationU3Ek__BackingField_4(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___U3CRotationU3Ek__BackingField_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ROTATIONALPLAYMODEDEVICETRACKERIMPL_T8D65C4594D7497AA7FE1E56C27B568433A0E55E7_H
#ifndef TRACKABLERESULTDATA_T8F9DBC763DE9DD5D9C7EB55F00ADABC5B2C1FBFA_H
#define TRACKABLERESULTDATA_T8F9DBC763DE9DD5D9C7EB55F00ADABC5B2C1FBFA_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.TrackerData/TrackableResultData
#pragma pack(push, tp, 1)
struct  TrackableResultData_t8F9DBC763DE9DD5D9C7EB55F00ADABC5B2C1FBFA 
{
public:
	// Vuforia.TrackerData/PoseData Vuforia.TrackerData/TrackableResultData::pose
	PoseData_tBEB2E3213824EA43B0606A888A09A32D6433881B  ___pose_0;
	// System.Double Vuforia.TrackerData/TrackableResultData::timeStamp
	double ___timeStamp_1;
	// System.Int32 Vuforia.TrackerData/TrackableResultData::statusInteger
	int32_t ___statusInteger_2;
	// System.Int32 Vuforia.TrackerData/TrackableResultData::id
	int32_t ___id_3;

public:
	inline static int32_t get_offset_of_pose_0() { return static_cast<int32_t>(offsetof(TrackableResultData_t8F9DBC763DE9DD5D9C7EB55F00ADABC5B2C1FBFA, ___pose_0)); }
	inline PoseData_tBEB2E3213824EA43B0606A888A09A32D6433881B  get_pose_0() const { return ___pose_0; }
	inline PoseData_tBEB2E3213824EA43B0606A888A09A32D6433881B * get_address_of_pose_0() { return &___pose_0; }
	inline void set_pose_0(PoseData_tBEB2E3213824EA43B0606A888A09A32D6433881B  value)
	{
		___pose_0 = value;
	}

	inline static int32_t get_offset_of_timeStamp_1() { return static_cast<int32_t>(offsetof(TrackableResultData_t8F9DBC763DE9DD5D9C7EB55F00ADABC5B2C1FBFA, ___timeStamp_1)); }
	inline double get_timeStamp_1() const { return ___timeStamp_1; }
	inline double* get_address_of_timeStamp_1() { return &___timeStamp_1; }
	inline void set_timeStamp_1(double value)
	{
		___timeStamp_1 = value;
	}

	inline static int32_t get_offset_of_statusInteger_2() { return static_cast<int32_t>(offsetof(TrackableResultData_t8F9DBC763DE9DD5D9C7EB55F00ADABC5B2C1FBFA, ___statusInteger_2)); }
	inline int32_t get_statusInteger_2() const { return ___statusInteger_2; }
	inline int32_t* get_address_of_statusInteger_2() { return &___statusInteger_2; }
	inline void set_statusInteger_2(int32_t value)
	{
		___statusInteger_2 = value;
	}

	inline static int32_t get_offset_of_id_3() { return static_cast<int32_t>(offsetof(TrackableResultData_t8F9DBC763DE9DD5D9C7EB55F00ADABC5B2C1FBFA, ___id_3)); }
	inline int32_t get_id_3() const { return ___id_3; }
	inline int32_t* get_address_of_id_3() { return &___id_3; }
	inline void set_id_3(int32_t value)
	{
		___id_3 = value;
	}
};
#pragma pack(pop, tp)

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRACKABLERESULTDATA_T8F9DBC763DE9DD5D9C7EB55F00ADABC5B2C1FBFA_H
#ifndef VUMARKTARGETDATA_T634A3794662DF21263248A3F7E1A1E77E3085F81_H
#define VUMARKTARGETDATA_T634A3794662DF21263248A3F7E1A1E77E3085F81_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.TrackerData/VuMarkTargetData
#pragma pack(push, tp, 1)
struct  VuMarkTargetData_t634A3794662DF21263248A3F7E1A1E77E3085F81 
{
public:
	// Vuforia.TrackerData/InstanceIdData Vuforia.TrackerData/VuMarkTargetData::instanceId
	InstanceIdData_tA9961D073D40B8F890FC58FACDB0E3BC89E2CBA2  ___instanceId_0;
	// System.Int32 Vuforia.TrackerData/VuMarkTargetData::id
	int32_t ___id_1;
	// System.Int32 Vuforia.TrackerData/VuMarkTargetData::templateId
	int32_t ___templateId_2;
	// UnityEngine.Vector3 Vuforia.TrackerData/VuMarkTargetData::size
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___size_3;
	// System.Int32 Vuforia.TrackerData/VuMarkTargetData::unused
	int32_t ___unused_4;

public:
	inline static int32_t get_offset_of_instanceId_0() { return static_cast<int32_t>(offsetof(VuMarkTargetData_t634A3794662DF21263248A3F7E1A1E77E3085F81, ___instanceId_0)); }
	inline InstanceIdData_tA9961D073D40B8F890FC58FACDB0E3BC89E2CBA2  get_instanceId_0() const { return ___instanceId_0; }
	inline InstanceIdData_tA9961D073D40B8F890FC58FACDB0E3BC89E2CBA2 * get_address_of_instanceId_0() { return &___instanceId_0; }
	inline void set_instanceId_0(InstanceIdData_tA9961D073D40B8F890FC58FACDB0E3BC89E2CBA2  value)
	{
		___instanceId_0 = value;
	}

	inline static int32_t get_offset_of_id_1() { return static_cast<int32_t>(offsetof(VuMarkTargetData_t634A3794662DF21263248A3F7E1A1E77E3085F81, ___id_1)); }
	inline int32_t get_id_1() const { return ___id_1; }
	inline int32_t* get_address_of_id_1() { return &___id_1; }
	inline void set_id_1(int32_t value)
	{
		___id_1 = value;
	}

	inline static int32_t get_offset_of_templateId_2() { return static_cast<int32_t>(offsetof(VuMarkTargetData_t634A3794662DF21263248A3F7E1A1E77E3085F81, ___templateId_2)); }
	inline int32_t get_templateId_2() const { return ___templateId_2; }
	inline int32_t* get_address_of_templateId_2() { return &___templateId_2; }
	inline void set_templateId_2(int32_t value)
	{
		___templateId_2 = value;
	}

	inline static int32_t get_offset_of_size_3() { return static_cast<int32_t>(offsetof(VuMarkTargetData_t634A3794662DF21263248A3F7E1A1E77E3085F81, ___size_3)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_size_3() const { return ___size_3; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_size_3() { return &___size_3; }
	inline void set_size_3(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___size_3 = value;
	}

	inline static int32_t get_offset_of_unused_4() { return static_cast<int32_t>(offsetof(VuMarkTargetData_t634A3794662DF21263248A3F7E1A1E77E3085F81, ___unused_4)); }
	inline int32_t get_unused_4() const { return ___unused_4; }
	inline int32_t* get_address_of_unused_4() { return &___unused_4; }
	inline void set_unused_4(int32_t value)
	{
		___unused_4 = value;
	}
};
#pragma pack(pop, tp)

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VUMARKTARGETDATA_T634A3794662DF21263248A3F7E1A1E77E3085F81_H
#ifndef VUMARKTARGETRESULTDATA_TD7EC910F62A1C9C07A914277BA322562E242B8FE_H
#define VUMARKTARGETRESULTDATA_TD7EC910F62A1C9C07A914277BA322562E242B8FE_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.TrackerData/VuMarkTargetResultData
#pragma pack(push, tp, 1)
struct  VuMarkTargetResultData_tD7EC910F62A1C9C07A914277BA322562E242B8FE 
{
public:
	// Vuforia.TrackerData/PoseData Vuforia.TrackerData/VuMarkTargetResultData::pose
	PoseData_tBEB2E3213824EA43B0606A888A09A32D6433881B  ___pose_0;
	// System.Double Vuforia.TrackerData/VuMarkTargetResultData::timeStamp
	double ___timeStamp_1;
	// System.Int32 Vuforia.TrackerData/VuMarkTargetResultData::statusInteger
	int32_t ___statusInteger_2;
	// System.Int32 Vuforia.TrackerData/VuMarkTargetResultData::targetID
	int32_t ___targetID_3;
	// System.Int32 Vuforia.TrackerData/VuMarkTargetResultData::resultID
	int32_t ___resultID_4;
	// System.Int32 Vuforia.TrackerData/VuMarkTargetResultData::unused
	int32_t ___unused_5;

public:
	inline static int32_t get_offset_of_pose_0() { return static_cast<int32_t>(offsetof(VuMarkTargetResultData_tD7EC910F62A1C9C07A914277BA322562E242B8FE, ___pose_0)); }
	inline PoseData_tBEB2E3213824EA43B0606A888A09A32D6433881B  get_pose_0() const { return ___pose_0; }
	inline PoseData_tBEB2E3213824EA43B0606A888A09A32D6433881B * get_address_of_pose_0() { return &___pose_0; }
	inline void set_pose_0(PoseData_tBEB2E3213824EA43B0606A888A09A32D6433881B  value)
	{
		___pose_0 = value;
	}

	inline static int32_t get_offset_of_timeStamp_1() { return static_cast<int32_t>(offsetof(VuMarkTargetResultData_tD7EC910F62A1C9C07A914277BA322562E242B8FE, ___timeStamp_1)); }
	inline double get_timeStamp_1() const { return ___timeStamp_1; }
	inline double* get_address_of_timeStamp_1() { return &___timeStamp_1; }
	inline void set_timeStamp_1(double value)
	{
		___timeStamp_1 = value;
	}

	inline static int32_t get_offset_of_statusInteger_2() { return static_cast<int32_t>(offsetof(VuMarkTargetResultData_tD7EC910F62A1C9C07A914277BA322562E242B8FE, ___statusInteger_2)); }
	inline int32_t get_statusInteger_2() const { return ___statusInteger_2; }
	inline int32_t* get_address_of_statusInteger_2() { return &___statusInteger_2; }
	inline void set_statusInteger_2(int32_t value)
	{
		___statusInteger_2 = value;
	}

	inline static int32_t get_offset_of_targetID_3() { return static_cast<int32_t>(offsetof(VuMarkTargetResultData_tD7EC910F62A1C9C07A914277BA322562E242B8FE, ___targetID_3)); }
	inline int32_t get_targetID_3() const { return ___targetID_3; }
	inline int32_t* get_address_of_targetID_3() { return &___targetID_3; }
	inline void set_targetID_3(int32_t value)
	{
		___targetID_3 = value;
	}

	inline static int32_t get_offset_of_resultID_4() { return static_cast<int32_t>(offsetof(VuMarkTargetResultData_tD7EC910F62A1C9C07A914277BA322562E242B8FE, ___resultID_4)); }
	inline int32_t get_resultID_4() const { return ___resultID_4; }
	inline int32_t* get_address_of_resultID_4() { return &___resultID_4; }
	inline void set_resultID_4(int32_t value)
	{
		___resultID_4 = value;
	}

	inline static int32_t get_offset_of_unused_5() { return static_cast<int32_t>(offsetof(VuMarkTargetResultData_tD7EC910F62A1C9C07A914277BA322562E242B8FE, ___unused_5)); }
	inline int32_t get_unused_5() const { return ___unused_5; }
	inline int32_t* get_address_of_unused_5() { return &___unused_5; }
	inline void set_unused_5(int32_t value)
	{
		___unused_5 = value;
	}
};
#pragma pack(pop, tp)

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VUMARKTARGETRESULTDATA_TD7EC910F62A1C9C07A914277BA322562E242B8FE_H
#ifndef VUMARKTARGETIMPL_T6455B455669A18BE0FCA10863C50CB61F7043A91_H
#define VUMARKTARGETIMPL_T6455B455669A18BE0FCA10863C50CB61F7043A91_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.VuMarkTargetImpl
struct  VuMarkTargetImpl_t6455B455669A18BE0FCA10863C50CB61F7043A91  : public ObjectTargetImpl_tEDDDACB8EF83100B0896957801DF1F85DB6A126A
{
public:
	// Vuforia.VuMarkTemplateImpl Vuforia.VuMarkTargetImpl::mVuMarkTemplate
	VuMarkTemplateImpl_t70BFD60A41858A19817826C4468AA5EE736E4ED8 * ___mVuMarkTemplate_3;
	// Vuforia.InstanceIdImpl Vuforia.VuMarkTargetImpl::mInstanceId
	InstanceIdImpl_tB528D9E690D089FBF42027CEF1983B298A9C9371 * ___mInstanceId_4;
	// Vuforia.Image Vuforia.VuMarkTargetImpl::mInstanceImage
	Image_tDD7214A3062A11DF9F86760338EBB9F105AA4352 * ___mInstanceImage_5;
	// Vuforia.TrackerData/ImageHeaderData Vuforia.VuMarkTargetImpl::mInstanceImageHeader
	ImageHeaderData_tFC0673E37281D53EB3031F0A59652D09EEE08121  ___mInstanceImageHeader_6;

public:
	inline static int32_t get_offset_of_mVuMarkTemplate_3() { return static_cast<int32_t>(offsetof(VuMarkTargetImpl_t6455B455669A18BE0FCA10863C50CB61F7043A91, ___mVuMarkTemplate_3)); }
	inline VuMarkTemplateImpl_t70BFD60A41858A19817826C4468AA5EE736E4ED8 * get_mVuMarkTemplate_3() const { return ___mVuMarkTemplate_3; }
	inline VuMarkTemplateImpl_t70BFD60A41858A19817826C4468AA5EE736E4ED8 ** get_address_of_mVuMarkTemplate_3() { return &___mVuMarkTemplate_3; }
	inline void set_mVuMarkTemplate_3(VuMarkTemplateImpl_t70BFD60A41858A19817826C4468AA5EE736E4ED8 * value)
	{
		___mVuMarkTemplate_3 = value;
		Il2CppCodeGenWriteBarrier((&___mVuMarkTemplate_3), value);
	}

	inline static int32_t get_offset_of_mInstanceId_4() { return static_cast<int32_t>(offsetof(VuMarkTargetImpl_t6455B455669A18BE0FCA10863C50CB61F7043A91, ___mInstanceId_4)); }
	inline InstanceIdImpl_tB528D9E690D089FBF42027CEF1983B298A9C9371 * get_mInstanceId_4() const { return ___mInstanceId_4; }
	inline InstanceIdImpl_tB528D9E690D089FBF42027CEF1983B298A9C9371 ** get_address_of_mInstanceId_4() { return &___mInstanceId_4; }
	inline void set_mInstanceId_4(InstanceIdImpl_tB528D9E690D089FBF42027CEF1983B298A9C9371 * value)
	{
		___mInstanceId_4 = value;
		Il2CppCodeGenWriteBarrier((&___mInstanceId_4), value);
	}

	inline static int32_t get_offset_of_mInstanceImage_5() { return static_cast<int32_t>(offsetof(VuMarkTargetImpl_t6455B455669A18BE0FCA10863C50CB61F7043A91, ___mInstanceImage_5)); }
	inline Image_tDD7214A3062A11DF9F86760338EBB9F105AA4352 * get_mInstanceImage_5() const { return ___mInstanceImage_5; }
	inline Image_tDD7214A3062A11DF9F86760338EBB9F105AA4352 ** get_address_of_mInstanceImage_5() { return &___mInstanceImage_5; }
	inline void set_mInstanceImage_5(Image_tDD7214A3062A11DF9F86760338EBB9F105AA4352 * value)
	{
		___mInstanceImage_5 = value;
		Il2CppCodeGenWriteBarrier((&___mInstanceImage_5), value);
	}

	inline static int32_t get_offset_of_mInstanceImageHeader_6() { return static_cast<int32_t>(offsetof(VuMarkTargetImpl_t6455B455669A18BE0FCA10863C50CB61F7043A91, ___mInstanceImageHeader_6)); }
	inline ImageHeaderData_tFC0673E37281D53EB3031F0A59652D09EEE08121  get_mInstanceImageHeader_6() const { return ___mInstanceImageHeader_6; }
	inline ImageHeaderData_tFC0673E37281D53EB3031F0A59652D09EEE08121 * get_address_of_mInstanceImageHeader_6() { return &___mInstanceImageHeader_6; }
	inline void set_mInstanceImageHeader_6(ImageHeaderData_tFC0673E37281D53EB3031F0A59652D09EEE08121  value)
	{
		___mInstanceImageHeader_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VUMARKTARGETIMPL_T6455B455669A18BE0FCA10863C50CB61F7043A91_H
#ifndef VUMARKSETTARGETSIZE_TA607278FCA4215B58CB8D03F1698A1A75B52E321_H
#define VUMARKSETTARGETSIZE_TA607278FCA4215B58CB8D03F1698A1A75B52E321_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.VuMarkTargetImpl/VuMarkSetTargetSize
struct  VuMarkSetTargetSize_tA607278FCA4215B58CB8D03F1698A1A75B52E321  : public DisabledSetTargetSize_tED3AEC3CD7D4DA45A1D88625566B3D8E9141B0DA
{
public:
	// Vuforia.VuMarkTemplate Vuforia.VuMarkTargetImpl/VuMarkSetTargetSize::mTemplate
	RuntimeObject* ___mTemplate_1;

public:
	inline static int32_t get_offset_of_mTemplate_1() { return static_cast<int32_t>(offsetof(VuMarkSetTargetSize_tA607278FCA4215B58CB8D03F1698A1A75B52E321, ___mTemplate_1)); }
	inline RuntimeObject* get_mTemplate_1() const { return ___mTemplate_1; }
	inline RuntimeObject** get_address_of_mTemplate_1() { return &___mTemplate_1; }
	inline void set_mTemplate_1(RuntimeObject* value)
	{
		___mTemplate_1 = value;
		Il2CppCodeGenWriteBarrier((&___mTemplate_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VUMARKSETTARGETSIZE_TA607278FCA4215B58CB8D03F1698A1A75B52E321_H
#ifndef VUMARKTEMPLATEIMPL_T70BFD60A41858A19817826C4468AA5EE736E4ED8_H
#define VUMARKTEMPLATEIMPL_T70BFD60A41858A19817826C4468AA5EE736E4ED8_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.VuMarkTemplateImpl
struct  VuMarkTemplateImpl_t70BFD60A41858A19817826C4468AA5EE736E4ED8  : public DataSetObjectTargetImpl_tC2D896B84A1FDE730F7E2F20045D12CBC6F30C98
{
public:
	// System.String Vuforia.VuMarkTemplateImpl::mUserData
	String_t* ___mUserData_4;
	// UnityEngine.Vector2 Vuforia.VuMarkTemplateImpl::mOrigin
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___mOrigin_5;
	// System.Boolean Vuforia.VuMarkTemplateImpl::mTrackingFromRuntimeAppearance
	bool ___mTrackingFromRuntimeAppearance_6;

public:
	inline static int32_t get_offset_of_mUserData_4() { return static_cast<int32_t>(offsetof(VuMarkTemplateImpl_t70BFD60A41858A19817826C4468AA5EE736E4ED8, ___mUserData_4)); }
	inline String_t* get_mUserData_4() const { return ___mUserData_4; }
	inline String_t** get_address_of_mUserData_4() { return &___mUserData_4; }
	inline void set_mUserData_4(String_t* value)
	{
		___mUserData_4 = value;
		Il2CppCodeGenWriteBarrier((&___mUserData_4), value);
	}

	inline static int32_t get_offset_of_mOrigin_5() { return static_cast<int32_t>(offsetof(VuMarkTemplateImpl_t70BFD60A41858A19817826C4468AA5EE736E4ED8, ___mOrigin_5)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_mOrigin_5() const { return ___mOrigin_5; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_mOrigin_5() { return &___mOrigin_5; }
	inline void set_mOrigin_5(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___mOrigin_5 = value;
	}

	inline static int32_t get_offset_of_mTrackingFromRuntimeAppearance_6() { return static_cast<int32_t>(offsetof(VuMarkTemplateImpl_t70BFD60A41858A19817826C4468AA5EE736E4ED8, ___mTrackingFromRuntimeAppearance_6)); }
	inline bool get_mTrackingFromRuntimeAppearance_6() const { return ___mTrackingFromRuntimeAppearance_6; }
	inline bool* get_address_of_mTrackingFromRuntimeAppearance_6() { return &___mTrackingFromRuntimeAppearance_6; }
	inline void set_mTrackingFromRuntimeAppearance_6(bool value)
	{
		___mTrackingFromRuntimeAppearance_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VUMARKTEMPLATEIMPL_T70BFD60A41858A19817826C4468AA5EE736E4ED8_H
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
#ifndef DEDICATEDEYEWEARCAMERACONFIGURATION_TA25088B1E2C7C7E0CF817A9A98D1AB977D20F892_H
#define DEDICATEDEYEWEARCAMERACONFIGURATION_TA25088B1E2C7C7E0CF817A9A98D1AB977D20F892_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.DedicatedEyewearCameraConfiguration
struct  DedicatedEyewearCameraConfiguration_tA25088B1E2C7C7E0CF817A9A98D1AB977D20F892  : public BaseCameraConfiguration_tF625F5FF38D44D6E2D1D929C1F29DA533F97642A
{
public:
	// UnityEngine.Camera Vuforia.DedicatedEyewearCameraConfiguration::mCamera
	Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * ___mCamera_14;
	// System.Int32 Vuforia.DedicatedEyewearCameraConfiguration::mScreenWidth
	int32_t ___mScreenWidth_15;
	// System.Int32 Vuforia.DedicatedEyewearCameraConfiguration::mScreenHeight
	int32_t ___mScreenHeight_16;
	// System.Boolean Vuforia.DedicatedEyewearCameraConfiguration::mNeedToCheckStereo
	bool ___mNeedToCheckStereo_17;
	// System.Single Vuforia.DedicatedEyewearCameraConfiguration::mLastAppliedNearClipPlane
	float ___mLastAppliedNearClipPlane_18;
	// System.Single Vuforia.DedicatedEyewearCameraConfiguration::mLastAppliedFarClipPlane
	float ___mLastAppliedFarClipPlane_19;
	// UnityEngine.Matrix4x4 Vuforia.DedicatedEyewearCameraConfiguration::mLeftProjectionMatrix
	Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  ___mLeftProjectionMatrix_20;
	// System.Int32 Vuforia.DedicatedEyewearCameraConfiguration::mPlayModeEyeTextureWidth
	int32_t ___mPlayModeEyeTextureWidth_21;
	// System.Int32 Vuforia.DedicatedEyewearCameraConfiguration::mPlayModeEyeTextureHeight
	int32_t ___mPlayModeEyeTextureHeight_22;
	// Vuforia.EyewearDevice Vuforia.DedicatedEyewearCameraConfiguration::mEyewearDevice
	EyewearDevice_t083CA7719B929A57A532B386322C61658849AA1E * ___mEyewearDevice_23;
	// Vuforia.StereoProjMatrixStore Vuforia.DedicatedEyewearCameraConfiguration::mMatrixStore
	StereoProjMatrixStore_t666C738477A3F36E8FDD7E872AC154108291348A * ___mMatrixStore_24;
	// Vuforia.VRDeviceController Vuforia.DedicatedEyewearCameraConfiguration::mVrDeviceController
	VRDeviceController_tDFB2A6DE022256FD695E024050B1F3A07B97D044 * ___mVrDeviceController_25;

public:
	inline static int32_t get_offset_of_mCamera_14() { return static_cast<int32_t>(offsetof(DedicatedEyewearCameraConfiguration_tA25088B1E2C7C7E0CF817A9A98D1AB977D20F892, ___mCamera_14)); }
	inline Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * get_mCamera_14() const { return ___mCamera_14; }
	inline Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 ** get_address_of_mCamera_14() { return &___mCamera_14; }
	inline void set_mCamera_14(Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * value)
	{
		___mCamera_14 = value;
		Il2CppCodeGenWriteBarrier((&___mCamera_14), value);
	}

	inline static int32_t get_offset_of_mScreenWidth_15() { return static_cast<int32_t>(offsetof(DedicatedEyewearCameraConfiguration_tA25088B1E2C7C7E0CF817A9A98D1AB977D20F892, ___mScreenWidth_15)); }
	inline int32_t get_mScreenWidth_15() const { return ___mScreenWidth_15; }
	inline int32_t* get_address_of_mScreenWidth_15() { return &___mScreenWidth_15; }
	inline void set_mScreenWidth_15(int32_t value)
	{
		___mScreenWidth_15 = value;
	}

	inline static int32_t get_offset_of_mScreenHeight_16() { return static_cast<int32_t>(offsetof(DedicatedEyewearCameraConfiguration_tA25088B1E2C7C7E0CF817A9A98D1AB977D20F892, ___mScreenHeight_16)); }
	inline int32_t get_mScreenHeight_16() const { return ___mScreenHeight_16; }
	inline int32_t* get_address_of_mScreenHeight_16() { return &___mScreenHeight_16; }
	inline void set_mScreenHeight_16(int32_t value)
	{
		___mScreenHeight_16 = value;
	}

	inline static int32_t get_offset_of_mNeedToCheckStereo_17() { return static_cast<int32_t>(offsetof(DedicatedEyewearCameraConfiguration_tA25088B1E2C7C7E0CF817A9A98D1AB977D20F892, ___mNeedToCheckStereo_17)); }
	inline bool get_mNeedToCheckStereo_17() const { return ___mNeedToCheckStereo_17; }
	inline bool* get_address_of_mNeedToCheckStereo_17() { return &___mNeedToCheckStereo_17; }
	inline void set_mNeedToCheckStereo_17(bool value)
	{
		___mNeedToCheckStereo_17 = value;
	}

	inline static int32_t get_offset_of_mLastAppliedNearClipPlane_18() { return static_cast<int32_t>(offsetof(DedicatedEyewearCameraConfiguration_tA25088B1E2C7C7E0CF817A9A98D1AB977D20F892, ___mLastAppliedNearClipPlane_18)); }
	inline float get_mLastAppliedNearClipPlane_18() const { return ___mLastAppliedNearClipPlane_18; }
	inline float* get_address_of_mLastAppliedNearClipPlane_18() { return &___mLastAppliedNearClipPlane_18; }
	inline void set_mLastAppliedNearClipPlane_18(float value)
	{
		___mLastAppliedNearClipPlane_18 = value;
	}

	inline static int32_t get_offset_of_mLastAppliedFarClipPlane_19() { return static_cast<int32_t>(offsetof(DedicatedEyewearCameraConfiguration_tA25088B1E2C7C7E0CF817A9A98D1AB977D20F892, ___mLastAppliedFarClipPlane_19)); }
	inline float get_mLastAppliedFarClipPlane_19() const { return ___mLastAppliedFarClipPlane_19; }
	inline float* get_address_of_mLastAppliedFarClipPlane_19() { return &___mLastAppliedFarClipPlane_19; }
	inline void set_mLastAppliedFarClipPlane_19(float value)
	{
		___mLastAppliedFarClipPlane_19 = value;
	}

	inline static int32_t get_offset_of_mLeftProjectionMatrix_20() { return static_cast<int32_t>(offsetof(DedicatedEyewearCameraConfiguration_tA25088B1E2C7C7E0CF817A9A98D1AB977D20F892, ___mLeftProjectionMatrix_20)); }
	inline Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  get_mLeftProjectionMatrix_20() const { return ___mLeftProjectionMatrix_20; }
	inline Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA * get_address_of_mLeftProjectionMatrix_20() { return &___mLeftProjectionMatrix_20; }
	inline void set_mLeftProjectionMatrix_20(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  value)
	{
		___mLeftProjectionMatrix_20 = value;
	}

	inline static int32_t get_offset_of_mPlayModeEyeTextureWidth_21() { return static_cast<int32_t>(offsetof(DedicatedEyewearCameraConfiguration_tA25088B1E2C7C7E0CF817A9A98D1AB977D20F892, ___mPlayModeEyeTextureWidth_21)); }
	inline int32_t get_mPlayModeEyeTextureWidth_21() const { return ___mPlayModeEyeTextureWidth_21; }
	inline int32_t* get_address_of_mPlayModeEyeTextureWidth_21() { return &___mPlayModeEyeTextureWidth_21; }
	inline void set_mPlayModeEyeTextureWidth_21(int32_t value)
	{
		___mPlayModeEyeTextureWidth_21 = value;
	}

	inline static int32_t get_offset_of_mPlayModeEyeTextureHeight_22() { return static_cast<int32_t>(offsetof(DedicatedEyewearCameraConfiguration_tA25088B1E2C7C7E0CF817A9A98D1AB977D20F892, ___mPlayModeEyeTextureHeight_22)); }
	inline int32_t get_mPlayModeEyeTextureHeight_22() const { return ___mPlayModeEyeTextureHeight_22; }
	inline int32_t* get_address_of_mPlayModeEyeTextureHeight_22() { return &___mPlayModeEyeTextureHeight_22; }
	inline void set_mPlayModeEyeTextureHeight_22(int32_t value)
	{
		___mPlayModeEyeTextureHeight_22 = value;
	}

	inline static int32_t get_offset_of_mEyewearDevice_23() { return static_cast<int32_t>(offsetof(DedicatedEyewearCameraConfiguration_tA25088B1E2C7C7E0CF817A9A98D1AB977D20F892, ___mEyewearDevice_23)); }
	inline EyewearDevice_t083CA7719B929A57A532B386322C61658849AA1E * get_mEyewearDevice_23() const { return ___mEyewearDevice_23; }
	inline EyewearDevice_t083CA7719B929A57A532B386322C61658849AA1E ** get_address_of_mEyewearDevice_23() { return &___mEyewearDevice_23; }
	inline void set_mEyewearDevice_23(EyewearDevice_t083CA7719B929A57A532B386322C61658849AA1E * value)
	{
		___mEyewearDevice_23 = value;
		Il2CppCodeGenWriteBarrier((&___mEyewearDevice_23), value);
	}

	inline static int32_t get_offset_of_mMatrixStore_24() { return static_cast<int32_t>(offsetof(DedicatedEyewearCameraConfiguration_tA25088B1E2C7C7E0CF817A9A98D1AB977D20F892, ___mMatrixStore_24)); }
	inline StereoProjMatrixStore_t666C738477A3F36E8FDD7E872AC154108291348A * get_mMatrixStore_24() const { return ___mMatrixStore_24; }
	inline StereoProjMatrixStore_t666C738477A3F36E8FDD7E872AC154108291348A ** get_address_of_mMatrixStore_24() { return &___mMatrixStore_24; }
	inline void set_mMatrixStore_24(StereoProjMatrixStore_t666C738477A3F36E8FDD7E872AC154108291348A * value)
	{
		___mMatrixStore_24 = value;
		Il2CppCodeGenWriteBarrier((&___mMatrixStore_24), value);
	}

	inline static int32_t get_offset_of_mVrDeviceController_25() { return static_cast<int32_t>(offsetof(DedicatedEyewearCameraConfiguration_tA25088B1E2C7C7E0CF817A9A98D1AB977D20F892, ___mVrDeviceController_25)); }
	inline VRDeviceController_tDFB2A6DE022256FD695E024050B1F3A07B97D044 * get_mVrDeviceController_25() const { return ___mVrDeviceController_25; }
	inline VRDeviceController_tDFB2A6DE022256FD695E024050B1F3A07B97D044 ** get_address_of_mVrDeviceController_25() { return &___mVrDeviceController_25; }
	inline void set_mVrDeviceController_25(VRDeviceController_tDFB2A6DE022256FD695E024050B1F3A07B97D044 * value)
	{
		___mVrDeviceController_25 = value;
		Il2CppCodeGenWriteBarrier((&___mVrDeviceController_25), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEDICATEDEYEWEARCAMERACONFIGURATION_TA25088B1E2C7C7E0CF817A9A98D1AB977D20F892_H
#ifndef MONOCAMERACONFIGURATION_TB9325693A0F3CE6C160E46126E94BB072BD79016_H
#define MONOCAMERACONFIGURATION_TB9325693A0F3CE6C160E46126E94BB072BD79016_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.MonoCameraConfiguration
struct  MonoCameraConfiguration_tB9325693A0F3CE6C160E46126E94BB072BD79016  : public BaseCameraConfiguration_tF625F5FF38D44D6E2D1D929C1F29DA533F97642A
{
public:
	// UnityEngine.Camera Vuforia.MonoCameraConfiguration::mPrimaryCamera
	Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * ___mPrimaryCamera_12;
	// System.Int32 Vuforia.MonoCameraConfiguration::mCameraViewPortWidth
	int32_t ___mCameraViewPortWidth_13;
	// System.Int32 Vuforia.MonoCameraConfiguration::mCameraViewPortHeight
	int32_t ___mCameraViewPortHeight_14;
	// System.Single Vuforia.MonoCameraConfiguration::mLastAppliedNearClipPlane
	float ___mLastAppliedNearClipPlane_15;
	// System.Single Vuforia.MonoCameraConfiguration::mLastAppliedFarClipPlane
	float ___mLastAppliedFarClipPlane_16;
	// System.Single Vuforia.MonoCameraConfiguration::mLastAppliedFoV
	float ___mLastAppliedFoV_17;
	// Vuforia.VRDeviceController Vuforia.MonoCameraConfiguration::mVrDeviceController
	VRDeviceController_tDFB2A6DE022256FD695E024050B1F3A07B97D044 * ___mVrDeviceController_18;

public:
	inline static int32_t get_offset_of_mPrimaryCamera_12() { return static_cast<int32_t>(offsetof(MonoCameraConfiguration_tB9325693A0F3CE6C160E46126E94BB072BD79016, ___mPrimaryCamera_12)); }
	inline Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * get_mPrimaryCamera_12() const { return ___mPrimaryCamera_12; }
	inline Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 ** get_address_of_mPrimaryCamera_12() { return &___mPrimaryCamera_12; }
	inline void set_mPrimaryCamera_12(Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * value)
	{
		___mPrimaryCamera_12 = value;
		Il2CppCodeGenWriteBarrier((&___mPrimaryCamera_12), value);
	}

	inline static int32_t get_offset_of_mCameraViewPortWidth_13() { return static_cast<int32_t>(offsetof(MonoCameraConfiguration_tB9325693A0F3CE6C160E46126E94BB072BD79016, ___mCameraViewPortWidth_13)); }
	inline int32_t get_mCameraViewPortWidth_13() const { return ___mCameraViewPortWidth_13; }
	inline int32_t* get_address_of_mCameraViewPortWidth_13() { return &___mCameraViewPortWidth_13; }
	inline void set_mCameraViewPortWidth_13(int32_t value)
	{
		___mCameraViewPortWidth_13 = value;
	}

	inline static int32_t get_offset_of_mCameraViewPortHeight_14() { return static_cast<int32_t>(offsetof(MonoCameraConfiguration_tB9325693A0F3CE6C160E46126E94BB072BD79016, ___mCameraViewPortHeight_14)); }
	inline int32_t get_mCameraViewPortHeight_14() const { return ___mCameraViewPortHeight_14; }
	inline int32_t* get_address_of_mCameraViewPortHeight_14() { return &___mCameraViewPortHeight_14; }
	inline void set_mCameraViewPortHeight_14(int32_t value)
	{
		___mCameraViewPortHeight_14 = value;
	}

	inline static int32_t get_offset_of_mLastAppliedNearClipPlane_15() { return static_cast<int32_t>(offsetof(MonoCameraConfiguration_tB9325693A0F3CE6C160E46126E94BB072BD79016, ___mLastAppliedNearClipPlane_15)); }
	inline float get_mLastAppliedNearClipPlane_15() const { return ___mLastAppliedNearClipPlane_15; }
	inline float* get_address_of_mLastAppliedNearClipPlane_15() { return &___mLastAppliedNearClipPlane_15; }
	inline void set_mLastAppliedNearClipPlane_15(float value)
	{
		___mLastAppliedNearClipPlane_15 = value;
	}

	inline static int32_t get_offset_of_mLastAppliedFarClipPlane_16() { return static_cast<int32_t>(offsetof(MonoCameraConfiguration_tB9325693A0F3CE6C160E46126E94BB072BD79016, ___mLastAppliedFarClipPlane_16)); }
	inline float get_mLastAppliedFarClipPlane_16() const { return ___mLastAppliedFarClipPlane_16; }
	inline float* get_address_of_mLastAppliedFarClipPlane_16() { return &___mLastAppliedFarClipPlane_16; }
	inline void set_mLastAppliedFarClipPlane_16(float value)
	{
		___mLastAppliedFarClipPlane_16 = value;
	}

	inline static int32_t get_offset_of_mLastAppliedFoV_17() { return static_cast<int32_t>(offsetof(MonoCameraConfiguration_tB9325693A0F3CE6C160E46126E94BB072BD79016, ___mLastAppliedFoV_17)); }
	inline float get_mLastAppliedFoV_17() const { return ___mLastAppliedFoV_17; }
	inline float* get_address_of_mLastAppliedFoV_17() { return &___mLastAppliedFoV_17; }
	inline void set_mLastAppliedFoV_17(float value)
	{
		___mLastAppliedFoV_17 = value;
	}

	inline static int32_t get_offset_of_mVrDeviceController_18() { return static_cast<int32_t>(offsetof(MonoCameraConfiguration_tB9325693A0F3CE6C160E46126E94BB072BD79016, ___mVrDeviceController_18)); }
	inline VRDeviceController_tDFB2A6DE022256FD695E024050B1F3A07B97D044 * get_mVrDeviceController_18() const { return ___mVrDeviceController_18; }
	inline VRDeviceController_tDFB2A6DE022256FD695E024050B1F3A07B97D044 ** get_address_of_mVrDeviceController_18() { return &___mVrDeviceController_18; }
	inline void set_mVrDeviceController_18(VRDeviceController_tDFB2A6DE022256FD695E024050B1F3A07B97D044 * value)
	{
		___mVrDeviceController_18 = value;
		Il2CppCodeGenWriteBarrier((&___mVrDeviceController_18), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOCAMERACONFIGURATION_TB9325693A0F3CE6C160E46126E94BB072BD79016_H
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
#ifndef BACKGROUNDPLANEBEHAVIOUR_T2615248F9F83AF94A06C6585EBB6C1D3BCF64338_H
#define BACKGROUNDPLANEBEHAVIOUR_T2615248F9F83AF94A06C6585EBB6C1D3BCF64338_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.BackgroundPlaneBehaviour
struct  BackgroundPlaneBehaviour_t2615248F9F83AF94A06C6585EBB6C1D3BCF64338  : public VuforiaMonoBehaviour_t806C61E721B78928AF6266F3AF838FA2CB56AB5D
{
public:
	// Vuforia.VuforiaRenderer/VideoTextureInfo Vuforia.BackgroundPlaneBehaviour::mTextureInfo
	VideoTextureInfo_tE91303BB8B6C3E4C49CB1A717AE3ECEB2175D36D  ___mTextureInfo_4;
	// System.Int32 Vuforia.BackgroundPlaneBehaviour::mNumFramesToUpdateVideoBg
	int32_t ___mNumFramesToUpdateVideoBg_5;
	// UnityEngine.Transform Vuforia.BackgroundPlaneBehaviour::mCameraTransform
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___mCameraTransform_6;
	// UnityEngine.Mesh Vuforia.BackgroundPlaneBehaviour::mMesh
	Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * ___mMesh_8;
	// System.Single Vuforia.BackgroundPlaneBehaviour::mStereoDepth
	float ___mStereoDepth_9;
	// System.Boolean Vuforia.BackgroundPlaneBehaviour::mProjectionMatrixSetExternally
	bool ___mProjectionMatrixSetExternally_10;
	// UnityEngine.Vector3 Vuforia.BackgroundPlaneBehaviour::mBackgroundOffset
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___mBackgroundOffset_11;
	// Vuforia.VuforiaARController Vuforia.BackgroundPlaneBehaviour::mVuforiaBehaviour
	VuforiaARController_t7732FFB77105A2F5BBEA40E3CECC5C15DA624876 * ___mVuforiaBehaviour_12;
	// System.Action Vuforia.BackgroundPlaneBehaviour::mBackgroundPlacedCallback
	Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * ___mBackgroundPlacedCallback_13;
	// Vuforia.VideoBackgroundConfigValidator Vuforia.BackgroundPlaneBehaviour::mValidator
	VideoBackgroundConfigValidator_tC6D2432439D8AAAF1E72C8124FC620504DC11EB0 * ___mValidator_14;
	// Vuforia.IProjectMatrixProvider Vuforia.BackgroundPlaneBehaviour::mProjectMatrixProvider
	RuntimeObject* ___mProjectMatrixProvider_15;
	// Vuforia.BackgroundPlaneBehaviour/ProjectionMatrixData Vuforia.BackgroundPlaneBehaviour::mLastUsedProjectioMatrix
	ProjectionMatrixData_t68F1EB028D7C3DDEE47E84B50FC93F6495CCD018  ___mLastUsedProjectioMatrix_16;
	// System.Int32 Vuforia.BackgroundPlaneBehaviour::mNumDivisions
	int32_t ___mNumDivisions_17;
	// Vuforia.HideExcessAreaUtility Vuforia.BackgroundPlaneBehaviour::mHideExcessAreaUtility
	HideExcessAreaUtility_t4DEC8A8570DC0458B45E1B21A6ABB435D6C63B32 * ___mHideExcessAreaUtility_18;

public:
	inline static int32_t get_offset_of_mTextureInfo_4() { return static_cast<int32_t>(offsetof(BackgroundPlaneBehaviour_t2615248F9F83AF94A06C6585EBB6C1D3BCF64338, ___mTextureInfo_4)); }
	inline VideoTextureInfo_tE91303BB8B6C3E4C49CB1A717AE3ECEB2175D36D  get_mTextureInfo_4() const { return ___mTextureInfo_4; }
	inline VideoTextureInfo_tE91303BB8B6C3E4C49CB1A717AE3ECEB2175D36D * get_address_of_mTextureInfo_4() { return &___mTextureInfo_4; }
	inline void set_mTextureInfo_4(VideoTextureInfo_tE91303BB8B6C3E4C49CB1A717AE3ECEB2175D36D  value)
	{
		___mTextureInfo_4 = value;
	}

	inline static int32_t get_offset_of_mNumFramesToUpdateVideoBg_5() { return static_cast<int32_t>(offsetof(BackgroundPlaneBehaviour_t2615248F9F83AF94A06C6585EBB6C1D3BCF64338, ___mNumFramesToUpdateVideoBg_5)); }
	inline int32_t get_mNumFramesToUpdateVideoBg_5() const { return ___mNumFramesToUpdateVideoBg_5; }
	inline int32_t* get_address_of_mNumFramesToUpdateVideoBg_5() { return &___mNumFramesToUpdateVideoBg_5; }
	inline void set_mNumFramesToUpdateVideoBg_5(int32_t value)
	{
		___mNumFramesToUpdateVideoBg_5 = value;
	}

	inline static int32_t get_offset_of_mCameraTransform_6() { return static_cast<int32_t>(offsetof(BackgroundPlaneBehaviour_t2615248F9F83AF94A06C6585EBB6C1D3BCF64338, ___mCameraTransform_6)); }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * get_mCameraTransform_6() const { return ___mCameraTransform_6; }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA ** get_address_of_mCameraTransform_6() { return &___mCameraTransform_6; }
	inline void set_mCameraTransform_6(Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * value)
	{
		___mCameraTransform_6 = value;
		Il2CppCodeGenWriteBarrier((&___mCameraTransform_6), value);
	}

	inline static int32_t get_offset_of_mMesh_8() { return static_cast<int32_t>(offsetof(BackgroundPlaneBehaviour_t2615248F9F83AF94A06C6585EBB6C1D3BCF64338, ___mMesh_8)); }
	inline Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * get_mMesh_8() const { return ___mMesh_8; }
	inline Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C ** get_address_of_mMesh_8() { return &___mMesh_8; }
	inline void set_mMesh_8(Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * value)
	{
		___mMesh_8 = value;
		Il2CppCodeGenWriteBarrier((&___mMesh_8), value);
	}

	inline static int32_t get_offset_of_mStereoDepth_9() { return static_cast<int32_t>(offsetof(BackgroundPlaneBehaviour_t2615248F9F83AF94A06C6585EBB6C1D3BCF64338, ___mStereoDepth_9)); }
	inline float get_mStereoDepth_9() const { return ___mStereoDepth_9; }
	inline float* get_address_of_mStereoDepth_9() { return &___mStereoDepth_9; }
	inline void set_mStereoDepth_9(float value)
	{
		___mStereoDepth_9 = value;
	}

	inline static int32_t get_offset_of_mProjectionMatrixSetExternally_10() { return static_cast<int32_t>(offsetof(BackgroundPlaneBehaviour_t2615248F9F83AF94A06C6585EBB6C1D3BCF64338, ___mProjectionMatrixSetExternally_10)); }
	inline bool get_mProjectionMatrixSetExternally_10() const { return ___mProjectionMatrixSetExternally_10; }
	inline bool* get_address_of_mProjectionMatrixSetExternally_10() { return &___mProjectionMatrixSetExternally_10; }
	inline void set_mProjectionMatrixSetExternally_10(bool value)
	{
		___mProjectionMatrixSetExternally_10 = value;
	}

	inline static int32_t get_offset_of_mBackgroundOffset_11() { return static_cast<int32_t>(offsetof(BackgroundPlaneBehaviour_t2615248F9F83AF94A06C6585EBB6C1D3BCF64338, ___mBackgroundOffset_11)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_mBackgroundOffset_11() const { return ___mBackgroundOffset_11; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_mBackgroundOffset_11() { return &___mBackgroundOffset_11; }
	inline void set_mBackgroundOffset_11(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___mBackgroundOffset_11 = value;
	}

	inline static int32_t get_offset_of_mVuforiaBehaviour_12() { return static_cast<int32_t>(offsetof(BackgroundPlaneBehaviour_t2615248F9F83AF94A06C6585EBB6C1D3BCF64338, ___mVuforiaBehaviour_12)); }
	inline VuforiaARController_t7732FFB77105A2F5BBEA40E3CECC5C15DA624876 * get_mVuforiaBehaviour_12() const { return ___mVuforiaBehaviour_12; }
	inline VuforiaARController_t7732FFB77105A2F5BBEA40E3CECC5C15DA624876 ** get_address_of_mVuforiaBehaviour_12() { return &___mVuforiaBehaviour_12; }
	inline void set_mVuforiaBehaviour_12(VuforiaARController_t7732FFB77105A2F5BBEA40E3CECC5C15DA624876 * value)
	{
		___mVuforiaBehaviour_12 = value;
		Il2CppCodeGenWriteBarrier((&___mVuforiaBehaviour_12), value);
	}

	inline static int32_t get_offset_of_mBackgroundPlacedCallback_13() { return static_cast<int32_t>(offsetof(BackgroundPlaneBehaviour_t2615248F9F83AF94A06C6585EBB6C1D3BCF64338, ___mBackgroundPlacedCallback_13)); }
	inline Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * get_mBackgroundPlacedCallback_13() const { return ___mBackgroundPlacedCallback_13; }
	inline Action_t591D2A86165F896B4B800BB5C25CE18672A55579 ** get_address_of_mBackgroundPlacedCallback_13() { return &___mBackgroundPlacedCallback_13; }
	inline void set_mBackgroundPlacedCallback_13(Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * value)
	{
		___mBackgroundPlacedCallback_13 = value;
		Il2CppCodeGenWriteBarrier((&___mBackgroundPlacedCallback_13), value);
	}

	inline static int32_t get_offset_of_mValidator_14() { return static_cast<int32_t>(offsetof(BackgroundPlaneBehaviour_t2615248F9F83AF94A06C6585EBB6C1D3BCF64338, ___mValidator_14)); }
	inline VideoBackgroundConfigValidator_tC6D2432439D8AAAF1E72C8124FC620504DC11EB0 * get_mValidator_14() const { return ___mValidator_14; }
	inline VideoBackgroundConfigValidator_tC6D2432439D8AAAF1E72C8124FC620504DC11EB0 ** get_address_of_mValidator_14() { return &___mValidator_14; }
	inline void set_mValidator_14(VideoBackgroundConfigValidator_tC6D2432439D8AAAF1E72C8124FC620504DC11EB0 * value)
	{
		___mValidator_14 = value;
		Il2CppCodeGenWriteBarrier((&___mValidator_14), value);
	}

	inline static int32_t get_offset_of_mProjectMatrixProvider_15() { return static_cast<int32_t>(offsetof(BackgroundPlaneBehaviour_t2615248F9F83AF94A06C6585EBB6C1D3BCF64338, ___mProjectMatrixProvider_15)); }
	inline RuntimeObject* get_mProjectMatrixProvider_15() const { return ___mProjectMatrixProvider_15; }
	inline RuntimeObject** get_address_of_mProjectMatrixProvider_15() { return &___mProjectMatrixProvider_15; }
	inline void set_mProjectMatrixProvider_15(RuntimeObject* value)
	{
		___mProjectMatrixProvider_15 = value;
		Il2CppCodeGenWriteBarrier((&___mProjectMatrixProvider_15), value);
	}

	inline static int32_t get_offset_of_mLastUsedProjectioMatrix_16() { return static_cast<int32_t>(offsetof(BackgroundPlaneBehaviour_t2615248F9F83AF94A06C6585EBB6C1D3BCF64338, ___mLastUsedProjectioMatrix_16)); }
	inline ProjectionMatrixData_t68F1EB028D7C3DDEE47E84B50FC93F6495CCD018  get_mLastUsedProjectioMatrix_16() const { return ___mLastUsedProjectioMatrix_16; }
	inline ProjectionMatrixData_t68F1EB028D7C3DDEE47E84B50FC93F6495CCD018 * get_address_of_mLastUsedProjectioMatrix_16() { return &___mLastUsedProjectioMatrix_16; }
	inline void set_mLastUsedProjectioMatrix_16(ProjectionMatrixData_t68F1EB028D7C3DDEE47E84B50FC93F6495CCD018  value)
	{
		___mLastUsedProjectioMatrix_16 = value;
	}

	inline static int32_t get_offset_of_mNumDivisions_17() { return static_cast<int32_t>(offsetof(BackgroundPlaneBehaviour_t2615248F9F83AF94A06C6585EBB6C1D3BCF64338, ___mNumDivisions_17)); }
	inline int32_t get_mNumDivisions_17() const { return ___mNumDivisions_17; }
	inline int32_t* get_address_of_mNumDivisions_17() { return &___mNumDivisions_17; }
	inline void set_mNumDivisions_17(int32_t value)
	{
		___mNumDivisions_17 = value;
	}

	inline static int32_t get_offset_of_mHideExcessAreaUtility_18() { return static_cast<int32_t>(offsetof(BackgroundPlaneBehaviour_t2615248F9F83AF94A06C6585EBB6C1D3BCF64338, ___mHideExcessAreaUtility_18)); }
	inline HideExcessAreaUtility_t4DEC8A8570DC0458B45E1B21A6ABB435D6C63B32 * get_mHideExcessAreaUtility_18() const { return ___mHideExcessAreaUtility_18; }
	inline HideExcessAreaUtility_t4DEC8A8570DC0458B45E1B21A6ABB435D6C63B32 ** get_address_of_mHideExcessAreaUtility_18() { return &___mHideExcessAreaUtility_18; }
	inline void set_mHideExcessAreaUtility_18(HideExcessAreaUtility_t4DEC8A8570DC0458B45E1B21A6ABB435D6C63B32 * value)
	{
		___mHideExcessAreaUtility_18 = value;
		Il2CppCodeGenWriteBarrier((&___mHideExcessAreaUtility_18), value);
	}
};

struct BackgroundPlaneBehaviour_t2615248F9F83AF94A06C6585EBB6C1D3BCF64338_StaticFields
{
public:
	// System.Single Vuforia.BackgroundPlaneBehaviour::maxDisplacement
	float ___maxDisplacement_7;

public:
	inline static int32_t get_offset_of_maxDisplacement_7() { return static_cast<int32_t>(offsetof(BackgroundPlaneBehaviour_t2615248F9F83AF94A06C6585EBB6C1D3BCF64338_StaticFields, ___maxDisplacement_7)); }
	inline float get_maxDisplacement_7() const { return ___maxDisplacement_7; }
	inline float* get_address_of_maxDisplacement_7() { return &___maxDisplacement_7; }
	inline void set_maxDisplacement_7(float value)
	{
		___maxDisplacement_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BACKGROUNDPLANEBEHAVIOUR_T2615248F9F83AF94A06C6585EBB6C1D3BCF64338_H
#ifndef OBJECTRECOBEHAVIOUR_TB0D779F2222B6AA203C3E40B0D170F0225F5986D_H
#define OBJECTRECOBEHAVIOUR_TB0D779F2222B6AA203C3E40B0D170F0225F5986D_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.ObjectRecoBehaviour
struct  ObjectRecoBehaviour_tB0D779F2222B6AA203C3E40B0D170F0225F5986D  : public VuforiaMonoBehaviour_t806C61E721B78928AF6266F3AF838FA2CB56AB5D
{
public:
	// Vuforia.ObjectTracker Vuforia.ObjectRecoBehaviour::mObjectTracker
	ObjectTracker_tC5DE67DCDB38A86F77C3462ECB63C4453A1D8B3E * ___mObjectTracker_4;
	// Vuforia.TargetFinder Vuforia.ObjectRecoBehaviour::mTargetFinder
	TargetFinder_t2AFA3E4A66C461FA522FE35048DB093003A7B1AC * ___mTargetFinder_5;
	// System.Boolean Vuforia.ObjectRecoBehaviour::mCurrentlyInitializing
	bool ___mCurrentlyInitializing_6;
	// System.Boolean Vuforia.ObjectRecoBehaviour::mInitSuccess
	bool ___mInitSuccess_7;
	// System.Boolean Vuforia.ObjectRecoBehaviour::mRecoStarted
	bool ___mRecoStarted_8;
	// System.Boolean Vuforia.ObjectRecoBehaviour::mOnInitializedCalled
	bool ___mOnInitializedCalled_9;
	// System.Collections.Generic.List`1<Vuforia.ICloudRecoEventHandler> Vuforia.ObjectRecoBehaviour::mHandlers
	List_1_tE36C58ACF764AC79C451D361AF5DC5017516DE23 * ___mHandlers_10;
	// System.Boolean Vuforia.ObjectRecoBehaviour::mTargetFinderStartedBeforeDisable
	bool ___mTargetFinderStartedBeforeDisable_11;

public:
	inline static int32_t get_offset_of_mObjectTracker_4() { return static_cast<int32_t>(offsetof(ObjectRecoBehaviour_tB0D779F2222B6AA203C3E40B0D170F0225F5986D, ___mObjectTracker_4)); }
	inline ObjectTracker_tC5DE67DCDB38A86F77C3462ECB63C4453A1D8B3E * get_mObjectTracker_4() const { return ___mObjectTracker_4; }
	inline ObjectTracker_tC5DE67DCDB38A86F77C3462ECB63C4453A1D8B3E ** get_address_of_mObjectTracker_4() { return &___mObjectTracker_4; }
	inline void set_mObjectTracker_4(ObjectTracker_tC5DE67DCDB38A86F77C3462ECB63C4453A1D8B3E * value)
	{
		___mObjectTracker_4 = value;
		Il2CppCodeGenWriteBarrier((&___mObjectTracker_4), value);
	}

	inline static int32_t get_offset_of_mTargetFinder_5() { return static_cast<int32_t>(offsetof(ObjectRecoBehaviour_tB0D779F2222B6AA203C3E40B0D170F0225F5986D, ___mTargetFinder_5)); }
	inline TargetFinder_t2AFA3E4A66C461FA522FE35048DB093003A7B1AC * get_mTargetFinder_5() const { return ___mTargetFinder_5; }
	inline TargetFinder_t2AFA3E4A66C461FA522FE35048DB093003A7B1AC ** get_address_of_mTargetFinder_5() { return &___mTargetFinder_5; }
	inline void set_mTargetFinder_5(TargetFinder_t2AFA3E4A66C461FA522FE35048DB093003A7B1AC * value)
	{
		___mTargetFinder_5 = value;
		Il2CppCodeGenWriteBarrier((&___mTargetFinder_5), value);
	}

	inline static int32_t get_offset_of_mCurrentlyInitializing_6() { return static_cast<int32_t>(offsetof(ObjectRecoBehaviour_tB0D779F2222B6AA203C3E40B0D170F0225F5986D, ___mCurrentlyInitializing_6)); }
	inline bool get_mCurrentlyInitializing_6() const { return ___mCurrentlyInitializing_6; }
	inline bool* get_address_of_mCurrentlyInitializing_6() { return &___mCurrentlyInitializing_6; }
	inline void set_mCurrentlyInitializing_6(bool value)
	{
		___mCurrentlyInitializing_6 = value;
	}

	inline static int32_t get_offset_of_mInitSuccess_7() { return static_cast<int32_t>(offsetof(ObjectRecoBehaviour_tB0D779F2222B6AA203C3E40B0D170F0225F5986D, ___mInitSuccess_7)); }
	inline bool get_mInitSuccess_7() const { return ___mInitSuccess_7; }
	inline bool* get_address_of_mInitSuccess_7() { return &___mInitSuccess_7; }
	inline void set_mInitSuccess_7(bool value)
	{
		___mInitSuccess_7 = value;
	}

	inline static int32_t get_offset_of_mRecoStarted_8() { return static_cast<int32_t>(offsetof(ObjectRecoBehaviour_tB0D779F2222B6AA203C3E40B0D170F0225F5986D, ___mRecoStarted_8)); }
	inline bool get_mRecoStarted_8() const { return ___mRecoStarted_8; }
	inline bool* get_address_of_mRecoStarted_8() { return &___mRecoStarted_8; }
	inline void set_mRecoStarted_8(bool value)
	{
		___mRecoStarted_8 = value;
	}

	inline static int32_t get_offset_of_mOnInitializedCalled_9() { return static_cast<int32_t>(offsetof(ObjectRecoBehaviour_tB0D779F2222B6AA203C3E40B0D170F0225F5986D, ___mOnInitializedCalled_9)); }
	inline bool get_mOnInitializedCalled_9() const { return ___mOnInitializedCalled_9; }
	inline bool* get_address_of_mOnInitializedCalled_9() { return &___mOnInitializedCalled_9; }
	inline void set_mOnInitializedCalled_9(bool value)
	{
		___mOnInitializedCalled_9 = value;
	}

	inline static int32_t get_offset_of_mHandlers_10() { return static_cast<int32_t>(offsetof(ObjectRecoBehaviour_tB0D779F2222B6AA203C3E40B0D170F0225F5986D, ___mHandlers_10)); }
	inline List_1_tE36C58ACF764AC79C451D361AF5DC5017516DE23 * get_mHandlers_10() const { return ___mHandlers_10; }
	inline List_1_tE36C58ACF764AC79C451D361AF5DC5017516DE23 ** get_address_of_mHandlers_10() { return &___mHandlers_10; }
	inline void set_mHandlers_10(List_1_tE36C58ACF764AC79C451D361AF5DC5017516DE23 * value)
	{
		___mHandlers_10 = value;
		Il2CppCodeGenWriteBarrier((&___mHandlers_10), value);
	}

	inline static int32_t get_offset_of_mTargetFinderStartedBeforeDisable_11() { return static_cast<int32_t>(offsetof(ObjectRecoBehaviour_tB0D779F2222B6AA203C3E40B0D170F0225F5986D, ___mTargetFinderStartedBeforeDisable_11)); }
	inline bool get_mTargetFinderStartedBeforeDisable_11() const { return ___mTargetFinderStartedBeforeDisable_11; }
	inline bool* get_address_of_mTargetFinderStartedBeforeDisable_11() { return &___mTargetFinderStartedBeforeDisable_11; }
	inline void set_mTargetFinderStartedBeforeDisable_11(bool value)
	{
		___mTargetFinderStartedBeforeDisable_11 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OBJECTRECOBEHAVIOUR_TB0D779F2222B6AA203C3E40B0D170F0225F5986D_H
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
#ifndef TURNOFFBEHAVIOUR_T086F35AFC9757F6CB78FB7F1387D531C419C4703_H
#define TURNOFFBEHAVIOUR_T086F35AFC9757F6CB78FB7F1387D531C419C4703_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.TurnOffBehaviour
struct  TurnOffBehaviour_t086F35AFC9757F6CB78FB7F1387D531C419C4703  : public VuforiaMonoBehaviour_t806C61E721B78928AF6266F3AF838FA2CB56AB5D
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TURNOFFBEHAVIOUR_T086F35AFC9757F6CB78FB7F1387D531C419C4703_H
#ifndef CLOUDRECOBEHAVIOUR_T263AD9404F564649C1696DE75F433E1F5F56B870_H
#define CLOUDRECOBEHAVIOUR_T263AD9404F564649C1696DE75F433E1F5F56B870_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.CloudRecoBehaviour
struct  CloudRecoBehaviour_t263AD9404F564649C1696DE75F433E1F5F56B870  : public ObjectRecoBehaviour_tB0D779F2222B6AA203C3E40B0D170F0225F5986D
{
public:
	// System.String Vuforia.CloudRecoBehaviour::AccessKey
	String_t* ___AccessKey_12;
	// System.String Vuforia.CloudRecoBehaviour::SecretKey
	String_t* ___SecretKey_13;

public:
	inline static int32_t get_offset_of_AccessKey_12() { return static_cast<int32_t>(offsetof(CloudRecoBehaviour_t263AD9404F564649C1696DE75F433E1F5F56B870, ___AccessKey_12)); }
	inline String_t* get_AccessKey_12() const { return ___AccessKey_12; }
	inline String_t** get_address_of_AccessKey_12() { return &___AccessKey_12; }
	inline void set_AccessKey_12(String_t* value)
	{
		___AccessKey_12 = value;
		Il2CppCodeGenWriteBarrier((&___AccessKey_12), value);
	}

	inline static int32_t get_offset_of_SecretKey_13() { return static_cast<int32_t>(offsetof(CloudRecoBehaviour_t263AD9404F564649C1696DE75F433E1F5F56B870, ___SecretKey_13)); }
	inline String_t* get_SecretKey_13() const { return ___SecretKey_13; }
	inline String_t** get_address_of_SecretKey_13() { return &___SecretKey_13; }
	inline void set_SecretKey_13(String_t* value)
	{
		___SecretKey_13 = value;
		Il2CppCodeGenWriteBarrier((&___SecretKey_13), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CLOUDRECOBEHAVIOUR_T263AD9404F564649C1696DE75F433E1F5F56B870_H
#ifndef DATASETTRACKABLEBEHAVIOUR_T84B7BB3C959046F38CC73E423800BD2F8859E706_H
#define DATASETTRACKABLEBEHAVIOUR_T84B7BB3C959046F38CC73E423800BD2F8859E706_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.DataSetTrackableBehaviour
struct  DataSetTrackableBehaviour_t84B7BB3C959046F38CC73E423800BD2F8859E706  : public TrackableBehaviour_t579D75AAFEF7B2D69F4B68931D5A58074E80A7E4
{
public:
	// System.String Vuforia.DataSetTrackableBehaviour::mDataSetPath
	String_t* ___mDataSetPath_12;

public:
	inline static int32_t get_offset_of_mDataSetPath_12() { return static_cast<int32_t>(offsetof(DataSetTrackableBehaviour_t84B7BB3C959046F38CC73E423800BD2F8859E706, ___mDataSetPath_12)); }
	inline String_t* get_mDataSetPath_12() const { return ___mDataSetPath_12; }
	inline String_t** get_address_of_mDataSetPath_12() { return &___mDataSetPath_12; }
	inline void set_mDataSetPath_12(String_t* value)
	{
		___mDataSetPath_12 = value;
		Il2CppCodeGenWriteBarrier((&___mDataSetPath_12), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATASETTRACKABLEBEHAVIOUR_T84B7BB3C959046F38CC73E423800BD2F8859E706_H
#ifndef OBJECTTARGETBEHAVIOUR_T7EB3FFC5339B1B13EE15CA2506D6D8600947C8F3_H
#define OBJECTTARGETBEHAVIOUR_T7EB3FFC5339B1B13EE15CA2506D6D8600947C8F3_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.ObjectTargetBehaviour
struct  ObjectTargetBehaviour_t7EB3FFC5339B1B13EE15CA2506D6D8600947C8F3  : public DataSetTrackableBehaviour_t84B7BB3C959046F38CC73E423800BD2F8859E706
{
public:
	// Vuforia.ObjectTarget Vuforia.ObjectTargetBehaviour::mObjectTarget
	RuntimeObject* ___mObjectTarget_13;
	// System.Single Vuforia.ObjectTargetBehaviour::mAspectRatioXY
	float ___mAspectRatioXY_14;
	// System.Single Vuforia.ObjectTargetBehaviour::mAspectRatioXZ
	float ___mAspectRatioXZ_15;
	// System.Boolean Vuforia.ObjectTargetBehaviour::mShowBoundingBox
	bool ___mShowBoundingBox_16;
	// UnityEngine.Vector3 Vuforia.ObjectTargetBehaviour::mBBoxMin
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___mBBoxMin_17;
	// UnityEngine.Vector3 Vuforia.ObjectTargetBehaviour::mBBoxMax
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___mBBoxMax_18;
	// UnityEngine.Texture2D Vuforia.ObjectTargetBehaviour::mPreviewImage
	Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * ___mPreviewImage_19;
	// System.Single Vuforia.ObjectTargetBehaviour::mLength
	float ___mLength_20;
	// System.Single Vuforia.ObjectTargetBehaviour::mWidth
	float ___mWidth_21;
	// System.Single Vuforia.ObjectTargetBehaviour::mHeight
	float ___mHeight_22;
	// System.Single Vuforia.ObjectTargetBehaviour::mLastTransformScale
	float ___mLastTransformScale_23;
	// UnityEngine.Vector3 Vuforia.ObjectTargetBehaviour::mLastSize
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___mLastSize_24;

public:
	inline static int32_t get_offset_of_mObjectTarget_13() { return static_cast<int32_t>(offsetof(ObjectTargetBehaviour_t7EB3FFC5339B1B13EE15CA2506D6D8600947C8F3, ___mObjectTarget_13)); }
	inline RuntimeObject* get_mObjectTarget_13() const { return ___mObjectTarget_13; }
	inline RuntimeObject** get_address_of_mObjectTarget_13() { return &___mObjectTarget_13; }
	inline void set_mObjectTarget_13(RuntimeObject* value)
	{
		___mObjectTarget_13 = value;
		Il2CppCodeGenWriteBarrier((&___mObjectTarget_13), value);
	}

	inline static int32_t get_offset_of_mAspectRatioXY_14() { return static_cast<int32_t>(offsetof(ObjectTargetBehaviour_t7EB3FFC5339B1B13EE15CA2506D6D8600947C8F3, ___mAspectRatioXY_14)); }
	inline float get_mAspectRatioXY_14() const { return ___mAspectRatioXY_14; }
	inline float* get_address_of_mAspectRatioXY_14() { return &___mAspectRatioXY_14; }
	inline void set_mAspectRatioXY_14(float value)
	{
		___mAspectRatioXY_14 = value;
	}

	inline static int32_t get_offset_of_mAspectRatioXZ_15() { return static_cast<int32_t>(offsetof(ObjectTargetBehaviour_t7EB3FFC5339B1B13EE15CA2506D6D8600947C8F3, ___mAspectRatioXZ_15)); }
	inline float get_mAspectRatioXZ_15() const { return ___mAspectRatioXZ_15; }
	inline float* get_address_of_mAspectRatioXZ_15() { return &___mAspectRatioXZ_15; }
	inline void set_mAspectRatioXZ_15(float value)
	{
		___mAspectRatioXZ_15 = value;
	}

	inline static int32_t get_offset_of_mShowBoundingBox_16() { return static_cast<int32_t>(offsetof(ObjectTargetBehaviour_t7EB3FFC5339B1B13EE15CA2506D6D8600947C8F3, ___mShowBoundingBox_16)); }
	inline bool get_mShowBoundingBox_16() const { return ___mShowBoundingBox_16; }
	inline bool* get_address_of_mShowBoundingBox_16() { return &___mShowBoundingBox_16; }
	inline void set_mShowBoundingBox_16(bool value)
	{
		___mShowBoundingBox_16 = value;
	}

	inline static int32_t get_offset_of_mBBoxMin_17() { return static_cast<int32_t>(offsetof(ObjectTargetBehaviour_t7EB3FFC5339B1B13EE15CA2506D6D8600947C8F3, ___mBBoxMin_17)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_mBBoxMin_17() const { return ___mBBoxMin_17; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_mBBoxMin_17() { return &___mBBoxMin_17; }
	inline void set_mBBoxMin_17(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___mBBoxMin_17 = value;
	}

	inline static int32_t get_offset_of_mBBoxMax_18() { return static_cast<int32_t>(offsetof(ObjectTargetBehaviour_t7EB3FFC5339B1B13EE15CA2506D6D8600947C8F3, ___mBBoxMax_18)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_mBBoxMax_18() const { return ___mBBoxMax_18; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_mBBoxMax_18() { return &___mBBoxMax_18; }
	inline void set_mBBoxMax_18(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___mBBoxMax_18 = value;
	}

	inline static int32_t get_offset_of_mPreviewImage_19() { return static_cast<int32_t>(offsetof(ObjectTargetBehaviour_t7EB3FFC5339B1B13EE15CA2506D6D8600947C8F3, ___mPreviewImage_19)); }
	inline Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * get_mPreviewImage_19() const { return ___mPreviewImage_19; }
	inline Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C ** get_address_of_mPreviewImage_19() { return &___mPreviewImage_19; }
	inline void set_mPreviewImage_19(Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * value)
	{
		___mPreviewImage_19 = value;
		Il2CppCodeGenWriteBarrier((&___mPreviewImage_19), value);
	}

	inline static int32_t get_offset_of_mLength_20() { return static_cast<int32_t>(offsetof(ObjectTargetBehaviour_t7EB3FFC5339B1B13EE15CA2506D6D8600947C8F3, ___mLength_20)); }
	inline float get_mLength_20() const { return ___mLength_20; }
	inline float* get_address_of_mLength_20() { return &___mLength_20; }
	inline void set_mLength_20(float value)
	{
		___mLength_20 = value;
	}

	inline static int32_t get_offset_of_mWidth_21() { return static_cast<int32_t>(offsetof(ObjectTargetBehaviour_t7EB3FFC5339B1B13EE15CA2506D6D8600947C8F3, ___mWidth_21)); }
	inline float get_mWidth_21() const { return ___mWidth_21; }
	inline float* get_address_of_mWidth_21() { return &___mWidth_21; }
	inline void set_mWidth_21(float value)
	{
		___mWidth_21 = value;
	}

	inline static int32_t get_offset_of_mHeight_22() { return static_cast<int32_t>(offsetof(ObjectTargetBehaviour_t7EB3FFC5339B1B13EE15CA2506D6D8600947C8F3, ___mHeight_22)); }
	inline float get_mHeight_22() const { return ___mHeight_22; }
	inline float* get_address_of_mHeight_22() { return &___mHeight_22; }
	inline void set_mHeight_22(float value)
	{
		___mHeight_22 = value;
	}

	inline static int32_t get_offset_of_mLastTransformScale_23() { return static_cast<int32_t>(offsetof(ObjectTargetBehaviour_t7EB3FFC5339B1B13EE15CA2506D6D8600947C8F3, ___mLastTransformScale_23)); }
	inline float get_mLastTransformScale_23() const { return ___mLastTransformScale_23; }
	inline float* get_address_of_mLastTransformScale_23() { return &___mLastTransformScale_23; }
	inline void set_mLastTransformScale_23(float value)
	{
		___mLastTransformScale_23 = value;
	}

	inline static int32_t get_offset_of_mLastSize_24() { return static_cast<int32_t>(offsetof(ObjectTargetBehaviour_t7EB3FFC5339B1B13EE15CA2506D6D8600947C8F3, ___mLastSize_24)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_mLastSize_24() const { return ___mLastSize_24; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_mLastSize_24() { return &___mLastSize_24; }
	inline void set_mLastSize_24(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___mLastSize_24 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OBJECTTARGETBEHAVIOUR_T7EB3FFC5339B1B13EE15CA2506D6D8600947C8F3_H





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2600 = { sizeof (U3CU3Ec__DisplayClass29_0_t409774273F602E27B578D7F5EB161A47FC3B0980), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2600[1] = 
{
	U3CU3Ec__DisplayClass29_0_t409774273F602E27B578D7F5EB161A47FC3B0980::get_offset_of_isVisible_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2601 = { sizeof (SmartTerrainImpl_tF475FBE8773C95101B5CB6A85B1F31D982402340), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2602 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2603 = { sizeof (NullHoloLensApiAbstraction_tA2A1D3CFDA4B08ADA1A6C72DCE50CBE9C148DEAD), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2604 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2605 = { sizeof (DeviceTracker_tD6E28B77342C2CBE99C14112AFA51C0798EC3086), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2606 = { sizeof (TRACKING_MODE_t2ABEC66C8561190920E2F2637F28B37437D2E5E0)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2606[3] = 
{
	TRACKING_MODE_t2ABEC66C8561190920E2F2637F28B37437D2E5E0::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2607 = { sizeof (DeviceTrackerARController_t144EF27DF432AA01FA50AA677B1EBFC37116BBC6), -1, sizeof(DeviceTrackerARController_t144EF27DF432AA01FA50AA677B1EBFC37116BBC6_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2607[17] = 
{
	DeviceTrackerARController_t144EF27DF432AA01FA50AA677B1EBFC37116BBC6_StaticFields::get_offset_of_DEFAULT_HEAD_PIVOT_1(),
	DeviceTrackerARController_t144EF27DF432AA01FA50AA677B1EBFC37116BBC6_StaticFields::get_offset_of_DEFAULT_HANDHELD_PIVOT_2(),
	DeviceTrackerARController_t144EF27DF432AA01FA50AA677B1EBFC37116BBC6::get_offset_of_mTrackingMode_3(),
	DeviceTrackerARController_t144EF27DF432AA01FA50AA677B1EBFC37116BBC6::get_offset_of_mAutoInitTracker_4(),
	DeviceTrackerARController_t144EF27DF432AA01FA50AA677B1EBFC37116BBC6::get_offset_of_mAutoStartTracker_5(),
	DeviceTrackerARController_t144EF27DF432AA01FA50AA677B1EBFC37116BBC6::get_offset_of_mPosePrediction_6(),
	DeviceTrackerARController_t144EF27DF432AA01FA50AA677B1EBFC37116BBC6::get_offset_of_mModelCorrectionMode_7(),
	DeviceTrackerARController_t144EF27DF432AA01FA50AA677B1EBFC37116BBC6::get_offset_of_mModelTransformEnabled_8(),
	DeviceTrackerARController_t144EF27DF432AA01FA50AA677B1EBFC37116BBC6::get_offset_of_mModelTransform_9(),
	DeviceTrackerARController_t144EF27DF432AA01FA50AA677B1EBFC37116BBC6::get_offset_of_mFusionProviderType_10(),
	DeviceTrackerARController_t144EF27DF432AA01FA50AA677B1EBFC37116BBC6::get_offset_of_mTrackerStarted_11(),
	DeviceTrackerARController_t144EF27DF432AA01FA50AA677B1EBFC37116BBC6::get_offset_of_mTrackerWasActiveBeforePause_12(),
	DeviceTrackerARController_t144EF27DF432AA01FA50AA677B1EBFC37116BBC6::get_offset_of_mTrackerWasActiveBeforeDisabling_13(),
	DeviceTrackerARController_t144EF27DF432AA01FA50AA677B1EBFC37116BBC6::get_offset_of_mEmulatorPositionVelocity_14(),
	DeviceTrackerARController_t144EF27DF432AA01FA50AA677B1EBFC37116BBC6::get_offset_of_mDeviceTrackerConfiguration_15(),
	DeviceTrackerARController_t144EF27DF432AA01FA50AA677B1EBFC37116BBC6_StaticFields::get_offset_of_mInstance_16(),
	DeviceTrackerARController_t144EF27DF432AA01FA50AA677B1EBFC37116BBC6_StaticFields::get_offset_of_mPadlock_17(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2608 = { sizeof (ObjectTargetImpl_tEDDDACB8EF83100B0896957801DF1F85DB6A126A), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2608[1] = 
{
	ObjectTargetImpl_tEDDDACB8EF83100B0896957801DF1F85DB6A126A::get_offset_of_mTargetSizeImpl_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2609 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2610 = { sizeof (DataSetTargetSize_t8B732BB6F36DEB1B2232D34B1E1425BD3FFAE517), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2610[3] = 
{
	DataSetTargetSize_t8B732BB6F36DEB1B2232D34B1E1425BD3FFAE517::get_offset_of_mSize_0(),
	DataSetTargetSize_t8B732BB6F36DEB1B2232D34B1E1425BD3FFAE517::get_offset_of_mName_1(),
	DataSetTargetSize_t8B732BB6F36DEB1B2232D34B1E1425BD3FFAE517::get_offset_of_mDataSet_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2611 = { sizeof (CustomDataSetTargetSize_t2BD3BD33FBB280F4FA853FB9E9D00ED16BCBF031), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2611[2] = 
{
	CustomDataSetTargetSize_t2BD3BD33FBB280F4FA853FB9E9D00ED16BCBF031::get_offset_of_mInvokeBeforeNativeCall_3(),
	CustomDataSetTargetSize_t2BD3BD33FBB280F4FA853FB9E9D00ED16BCBF031::get_offset_of_mSetSizeAction_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2612 = { sizeof (DisabledSetTargetSize_tED3AEC3CD7D4DA45A1D88625566B3D8E9141B0DA), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2612[1] = 
{
	DisabledSetTargetSize_tED3AEC3CD7D4DA45A1D88625566B3D8E9141B0DA::get_offset_of_mSize_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2613 = { sizeof (TurnOffBehaviour_t086F35AFC9757F6CB78FB7F1387D531C419C4703), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2614 = { sizeof (FusionProviderType_t0FD88A0D7F1544448DAEF1A9EAB5FBB591A495C2)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2614[8] = 
{
	FusionProviderType_t0FD88A0D7F1544448DAEF1A9EAB5FBB591A495C2::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2615 = { sizeof (GameObjectExtensionMethods_t21E60806C628015C7E912D4DD17070FE4A660EF3), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2616 = { sizeof (IEnumerableExtensionMethods_t1C224FF0D4BE50ABEFC3BA491E7DE9595D314E74), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2617 = { sizeof (DelegateHelper_t027CD1F95062C9C98103DBB523743A9BD59F91DF), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2618 = { sizeof (PlayModeEyewearUserCalibratorImpl_tE8DA3526A523F1403B3124C890FE30ED6F54B3D1), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2619 = { sizeof (PlayModeEyewearCalibrationProfileManagerImpl_t982E245F4C6F44D2AA20EC4B5325719410E6CE82), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2620 = { sizeof (PlayModeEyewearDevice_t23F975E41EB03A9E26FD9408058C481B8550950F), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2620[3] = 
{
	PlayModeEyewearDevice_t23F975E41EB03A9E26FD9408058C481B8550950F::get_offset_of_mProfileManager_1(),
	PlayModeEyewearDevice_t23F975E41EB03A9E26FD9408058C481B8550950F::get_offset_of_mCalibrator_2(),
	PlayModeEyewearDevice_t23F975E41EB03A9E26FD9408058C481B8550950F::get_offset_of_mDummyPredictiveTracking_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2621 = { sizeof (DedicatedEyewearDevice_t636A2A6A914BA544F7C74C9E1C34565A0838B400), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2621[2] = 
{
	DedicatedEyewearDevice_t636A2A6A914BA544F7C74C9E1C34565A0838B400::get_offset_of_mProfileManager_1(),
	DedicatedEyewearDevice_t636A2A6A914BA544F7C74C9E1C34565A0838B400::get_offset_of_mCalibrator_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2622 = { sizeof (CameraConfigurationUtility_tFDDDF578E2D5422A9997F43A0658E6AB085EAA44), -1, sizeof(CameraConfigurationUtility_tFDDDF578E2D5422A9997F43A0658E6AB085EAA44_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2622[12] = 
{
	CameraConfigurationUtility_tFDDDF578E2D5422A9997F43A0658E6AB085EAA44_StaticFields::get_offset_of_MIN_CENTER_0(),
	CameraConfigurationUtility_tFDDDF578E2D5422A9997F43A0658E6AB085EAA44_StaticFields::get_offset_of_MAX_CENTER_1(),
	CameraConfigurationUtility_tFDDDF578E2D5422A9997F43A0658E6AB085EAA44_StaticFields::get_offset_of_MIN_BOTTOM_2(),
	CameraConfigurationUtility_tFDDDF578E2D5422A9997F43A0658E6AB085EAA44_StaticFields::get_offset_of_MIN_TOP_3(),
	CameraConfigurationUtility_tFDDDF578E2D5422A9997F43A0658E6AB085EAA44_StaticFields::get_offset_of_MIN_LEFT_4(),
	CameraConfigurationUtility_tFDDDF578E2D5422A9997F43A0658E6AB085EAA44_StaticFields::get_offset_of_MIN_RIGHT_5(),
	CameraConfigurationUtility_tFDDDF578E2D5422A9997F43A0658E6AB085EAA44_StaticFields::get_offset_of_MAX_BOTTOM_6(),
	CameraConfigurationUtility_tFDDDF578E2D5422A9997F43A0658E6AB085EAA44_StaticFields::get_offset_of_MAX_TOP_7(),
	CameraConfigurationUtility_tFDDDF578E2D5422A9997F43A0658E6AB085EAA44_StaticFields::get_offset_of_MAX_LEFT_8(),
	CameraConfigurationUtility_tFDDDF578E2D5422A9997F43A0658E6AB085EAA44_StaticFields::get_offset_of_MAX_RIGHT_9(),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2623 = { sizeof (BaseCameraConfiguration_tF625F5FF38D44D6E2D1D929C1F29DA533F97642A), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2623[11] = 
{
	BaseCameraConfiguration_tF625F5FF38D44D6E2D1D929C1F29DA533F97642A::get_offset_of_mCameraDeviceMode_0(),
	BaseCameraConfiguration_tF625F5FF38D44D6E2D1D929C1F29DA533F97642A::get_offset_of_mLastVideoBackGroundMirroredFromSDK_1(),
	BaseCameraConfiguration_tF625F5FF38D44D6E2D1D929C1F29DA533F97642A::get_offset_of_mOnVideoBackgroundConfigChanged_2(),
	BaseCameraConfiguration_tF625F5FF38D44D6E2D1D929C1F29DA533F97642A::get_offset_of_mVideoBackgroundBehaviour_3(),
	BaseCameraConfiguration_tF625F5FF38D44D6E2D1D929C1F29DA533F97642A::get_offset_of_mVideoBackgroundViewportRect_4(),
	BaseCameraConfiguration_tF625F5FF38D44D6E2D1D929C1F29DA533F97642A::get_offset_of_mRenderVideoBackground_5(),
	BaseCameraConfiguration_tF625F5FF38D44D6E2D1D929C1F29DA533F97642A::get_offset_of_mProjectionOrientation_6(),
	BaseCameraConfiguration_tF625F5FF38D44D6E2D1D929C1F29DA533F97642A::get_offset_of_mInitialReflection_7(),
	BaseCameraConfiguration_tF625F5FF38D44D6E2D1D929C1F29DA533F97642A::get_offset_of_mBackgroundPlaneBehaviour_8(),
	BaseCameraConfiguration_tF625F5FF38D44D6E2D1D929C1F29DA533F97642A::get_offset_of_mDeviceModeChanged_9(),
	BaseCameraConfiguration_tF625F5FF38D44D6E2D1D929C1F29DA533F97642A::get_offset_of_mProjectionParamsChanged_10(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2624 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2625 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2626 = { sizeof (VuforiaExtendedTrackingManager_tAACFA22C32AEA72AA454280FB0E854CE8FF6D383), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2627 = { sizeof (Log_t756EBB0C1966A943DB86F4F19BDE6E443D1B3E2F), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2628 = { sizeof (GlobalStrings_tC811FADB0AF129E6CE431CE71C8148DE5E5EC2E9), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2628[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2629 = { sizeof (TrackerData_tE9DAA69F73C99DF652AAA629FFB9418FC62EBDE1), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2630 = { sizeof (PoseData_tBEB2E3213824EA43B0606A888A09A32D6433881B)+ sizeof (RuntimeObject), sizeof(PoseData_tBEB2E3213824EA43B0606A888A09A32D6433881B ), 0, 0 };
extern const int32_t g_FieldOffsetTable2630[3] = 
{
	PoseData_tBEB2E3213824EA43B0606A888A09A32D6433881B::get_offset_of_position_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	PoseData_tBEB2E3213824EA43B0606A888A09A32D6433881B::get_offset_of_orientation_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	PoseData_tBEB2E3213824EA43B0606A888A09A32D6433881B::get_offset_of_unused_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2631 = { sizeof (TrackableResultData_t8F9DBC763DE9DD5D9C7EB55F00ADABC5B2C1FBFA)+ sizeof (RuntimeObject), sizeof(TrackableResultData_t8F9DBC763DE9DD5D9C7EB55F00ADABC5B2C1FBFA ), 0, 0 };
extern const int32_t g_FieldOffsetTable2631[4] = 
{
	TrackableResultData_t8F9DBC763DE9DD5D9C7EB55F00ADABC5B2C1FBFA::get_offset_of_pose_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	TrackableResultData_t8F9DBC763DE9DD5D9C7EB55F00ADABC5B2C1FBFA::get_offset_of_timeStamp_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	TrackableResultData_t8F9DBC763DE9DD5D9C7EB55F00ADABC5B2C1FBFA::get_offset_of_statusInteger_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	TrackableResultData_t8F9DBC763DE9DD5D9C7EB55F00ADABC5B2C1FBFA::get_offset_of_id_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2632 = { sizeof (VirtualButtonData_tF16C663C156A49F65553E38299D185C298EFB1BF)+ sizeof (RuntimeObject), sizeof(VirtualButtonData_tF16C663C156A49F65553E38299D185C298EFB1BF ), 0, 0 };
extern const int32_t g_FieldOffsetTable2632[2] = 
{
	VirtualButtonData_tF16C663C156A49F65553E38299D185C298EFB1BF::get_offset_of_id_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	VirtualButtonData_tF16C663C156A49F65553E38299D185C298EFB1BF::get_offset_of_isPressed_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2633 = { sizeof (Obb2D_t5DBF14F745E67E8227C713A12D409AD5D6F71A46)+ sizeof (RuntimeObject), sizeof(Obb2D_t5DBF14F745E67E8227C713A12D409AD5D6F71A46 ), 0, 0 };
extern const int32_t g_FieldOffsetTable2633[4] = 
{
	Obb2D_t5DBF14F745E67E8227C713A12D409AD5D6F71A46::get_offset_of_center_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Obb2D_t5DBF14F745E67E8227C713A12D409AD5D6F71A46::get_offset_of_halfExtents_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Obb2D_t5DBF14F745E67E8227C713A12D409AD5D6F71A46::get_offset_of_rotation_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Obb2D_t5DBF14F745E67E8227C713A12D409AD5D6F71A46::get_offset_of_unused_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2634 = { sizeof (Obb3D_tD38E3A21156F3FCD524DC40956CF4384A81222CF)+ sizeof (RuntimeObject), sizeof(Obb3D_tD38E3A21156F3FCD524DC40956CF4384A81222CF ), 0, 0 };
extern const int32_t g_FieldOffsetTable2634[4] = 
{
	Obb3D_tD38E3A21156F3FCD524DC40956CF4384A81222CF::get_offset_of_center_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Obb3D_tD38E3A21156F3FCD524DC40956CF4384A81222CF::get_offset_of_halfExtents_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Obb3D_tD38E3A21156F3FCD524DC40956CF4384A81222CF::get_offset_of_rotationZ_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Obb3D_tD38E3A21156F3FCD524DC40956CF4384A81222CF::get_offset_of_unused_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2635 = { sizeof (ImageHeaderData_tFC0673E37281D53EB3031F0A59652D09EEE08121)+ sizeof (RuntimeObject), sizeof(ImageHeaderData_tFC0673E37281D53EB3031F0A59652D09EEE08121 ), 0, 0 };
extern const int32_t g_FieldOffsetTable2635[9] = 
{
	ImageHeaderData_tFC0673E37281D53EB3031F0A59652D09EEE08121::get_offset_of_data_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ImageHeaderData_tFC0673E37281D53EB3031F0A59652D09EEE08121::get_offset_of_width_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ImageHeaderData_tFC0673E37281D53EB3031F0A59652D09EEE08121::get_offset_of_height_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ImageHeaderData_tFC0673E37281D53EB3031F0A59652D09EEE08121::get_offset_of_stride_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ImageHeaderData_tFC0673E37281D53EB3031F0A59652D09EEE08121::get_offset_of_bufferWidth_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ImageHeaderData_tFC0673E37281D53EB3031F0A59652D09EEE08121::get_offset_of_bufferHeight_5() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ImageHeaderData_tFC0673E37281D53EB3031F0A59652D09EEE08121::get_offset_of_format_6() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ImageHeaderData_tFC0673E37281D53EB3031F0A59652D09EEE08121::get_offset_of_reallocate_7() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ImageHeaderData_tFC0673E37281D53EB3031F0A59652D09EEE08121::get_offset_of_updated_8() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2636 = { sizeof (MeshData_t78B0ED4EFB6DC4A9001D565ADE5E51B4223704D9)+ sizeof (RuntimeObject), sizeof(MeshData_t78B0ED4EFB6DC4A9001D565ADE5E51B4223704D9 ), 0, 0 };
extern const int32_t g_FieldOffsetTable2636[8] = 
{
	MeshData_t78B0ED4EFB6DC4A9001D565ADE5E51B4223704D9::get_offset_of_positionsArray_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	MeshData_t78B0ED4EFB6DC4A9001D565ADE5E51B4223704D9::get_offset_of_normalsArray_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	MeshData_t78B0ED4EFB6DC4A9001D565ADE5E51B4223704D9::get_offset_of_texCoordsArray_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	MeshData_t78B0ED4EFB6DC4A9001D565ADE5E51B4223704D9::get_offset_of_triangleIdxArray_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	MeshData_t78B0ED4EFB6DC4A9001D565ADE5E51B4223704D9::get_offset_of_numVertexValues_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
	MeshData_t78B0ED4EFB6DC4A9001D565ADE5E51B4223704D9::get_offset_of_hasNormals_5() + static_cast<int32_t>(sizeof(RuntimeObject)),
	MeshData_t78B0ED4EFB6DC4A9001D565ADE5E51B4223704D9::get_offset_of_hasTexCoords_6() + static_cast<int32_t>(sizeof(RuntimeObject)),
	MeshData_t78B0ED4EFB6DC4A9001D565ADE5E51B4223704D9::get_offset_of_numTriangleIndices_7() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2637 = { sizeof (InstanceIdData_tA9961D073D40B8F890FC58FACDB0E3BC89E2CBA2)+ sizeof (RuntimeObject), sizeof(InstanceIdData_tA9961D073D40B8F890FC58FACDB0E3BC89E2CBA2 ), 0, 0 };
extern const int32_t g_FieldOffsetTable2637[5] = 
{
	InstanceIdData_tA9961D073D40B8F890FC58FACDB0E3BC89E2CBA2::get_offset_of_numericValue_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	InstanceIdData_tA9961D073D40B8F890FC58FACDB0E3BC89E2CBA2::get_offset_of_buffer_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	InstanceIdData_tA9961D073D40B8F890FC58FACDB0E3BC89E2CBA2::get_offset_of_reserved_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	InstanceIdData_tA9961D073D40B8F890FC58FACDB0E3BC89E2CBA2::get_offset_of_dataLength_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	InstanceIdData_tA9961D073D40B8F890FC58FACDB0E3BC89E2CBA2::get_offset_of_dataType_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2638 = { sizeof (VuMarkTargetData_t634A3794662DF21263248A3F7E1A1E77E3085F81)+ sizeof (RuntimeObject), sizeof(VuMarkTargetData_t634A3794662DF21263248A3F7E1A1E77E3085F81 ), 0, 0 };
extern const int32_t g_FieldOffsetTable2638[5] = 
{
	VuMarkTargetData_t634A3794662DF21263248A3F7E1A1E77E3085F81::get_offset_of_instanceId_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	VuMarkTargetData_t634A3794662DF21263248A3F7E1A1E77E3085F81::get_offset_of_id_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	VuMarkTargetData_t634A3794662DF21263248A3F7E1A1E77E3085F81::get_offset_of_templateId_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	VuMarkTargetData_t634A3794662DF21263248A3F7E1A1E77E3085F81::get_offset_of_size_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	VuMarkTargetData_t634A3794662DF21263248A3F7E1A1E77E3085F81::get_offset_of_unused_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2639 = { sizeof (VuMarkTargetResultData_tD7EC910F62A1C9C07A914277BA322562E242B8FE)+ sizeof (RuntimeObject), sizeof(VuMarkTargetResultData_tD7EC910F62A1C9C07A914277BA322562E242B8FE ), 0, 0 };
extern const int32_t g_FieldOffsetTable2639[6] = 
{
	VuMarkTargetResultData_tD7EC910F62A1C9C07A914277BA322562E242B8FE::get_offset_of_pose_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	VuMarkTargetResultData_tD7EC910F62A1C9C07A914277BA322562E242B8FE::get_offset_of_timeStamp_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	VuMarkTargetResultData_tD7EC910F62A1C9C07A914277BA322562E242B8FE::get_offset_of_statusInteger_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	VuMarkTargetResultData_tD7EC910F62A1C9C07A914277BA322562E242B8FE::get_offset_of_targetID_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	VuMarkTargetResultData_tD7EC910F62A1C9C07A914277BA322562E242B8FE::get_offset_of_resultID_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
	VuMarkTargetResultData_tD7EC910F62A1C9C07A914277BA322562E242B8FE::get_offset_of_unused_5() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2640 = { sizeof (IlluminationData_tD92AC3353F4A03A75AC592B597C88238195BF12C)+ sizeof (RuntimeObject), sizeof(IlluminationData_tD92AC3353F4A03A75AC592B597C88238195BF12C ), 0, 0 };
extern const int32_t g_FieldOffsetTable2640[2] = 
{
	IlluminationData_tD92AC3353F4A03A75AC592B597C88238195BF12C::get_offset_of_ambientIntensity_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	IlluminationData_tD92AC3353F4A03A75AC592B597C88238195BF12C::get_offset_of_ambientColorTemperature_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2641 = { sizeof (FrameState_t40C5EF3D259514DAB23DEDCD72218A934C5645E0)+ sizeof (RuntimeObject), sizeof(FrameState_t40C5EF3D259514DAB23DEDCD72218A934C5645E0 ), 0, 0 };
extern const int32_t g_FieldOffsetTable2641[13] = 
{
	FrameState_t40C5EF3D259514DAB23DEDCD72218A934C5645E0::get_offset_of_trackableDataArray_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	FrameState_t40C5EF3D259514DAB23DEDCD72218A934C5645E0::get_offset_of_vbDataArray_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	FrameState_t40C5EF3D259514DAB23DEDCD72218A934C5645E0::get_offset_of_vuMarkResultArray_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	FrameState_t40C5EF3D259514DAB23DEDCD72218A934C5645E0::get_offset_of_newVuMarkDataArray_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	FrameState_t40C5EF3D259514DAB23DEDCD72218A934C5645E0::get_offset_of_illuminationData_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
	FrameState_t40C5EF3D259514DAB23DEDCD72218A934C5645E0::get_offset_of_numTrackableResults_5() + static_cast<int32_t>(sizeof(RuntimeObject)),
	FrameState_t40C5EF3D259514DAB23DEDCD72218A934C5645E0::get_offset_of_numVirtualButtonResults_6() + static_cast<int32_t>(sizeof(RuntimeObject)),
	FrameState_t40C5EF3D259514DAB23DEDCD72218A934C5645E0::get_offset_of_frameIndex_7() + static_cast<int32_t>(sizeof(RuntimeObject)),
	FrameState_t40C5EF3D259514DAB23DEDCD72218A934C5645E0::get_offset_of_numVuMarkResults_8() + static_cast<int32_t>(sizeof(RuntimeObject)),
	FrameState_t40C5EF3D259514DAB23DEDCD72218A934C5645E0::get_offset_of_numNewVuMarks_9() + static_cast<int32_t>(sizeof(RuntimeObject)),
	FrameState_t40C5EF3D259514DAB23DEDCD72218A934C5645E0::get_offset_of_deviceTrackableId_10() + static_cast<int32_t>(sizeof(RuntimeObject)),
	FrameState_t40C5EF3D259514DAB23DEDCD72218A934C5645E0::get_offset_of_deviceTrackableStatusInfo_11() + static_cast<int32_t>(sizeof(RuntimeObject)),
	FrameState_t40C5EF3D259514DAB23DEDCD72218A934C5645E0::get_offset_of_minCameraCalibration_12() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2642 = { sizeof (StructList_t838B13CFE20420E6A031EF2069821BF66948F28F)+ sizeof (RuntimeObject), sizeof(StructList_t838B13CFE20420E6A031EF2069821BF66948F28F ), 0, 0 };
extern const int32_t g_FieldOffsetTable2642[3] = 
{
	StructList_t838B13CFE20420E6A031EF2069821BF66948F28F::get_offset_of_arrayPtr_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	StructList_t838B13CFE20420E6A031EF2069821BF66948F28F::get_offset_of_numResults_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	StructList_t838B13CFE20420E6A031EF2069821BF66948F28F::get_offset_of_unused_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2643 = { sizeof (InstanceIdImpl_tB528D9E690D089FBF42027CEF1983B298A9C9371), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2643[5] = 
{
	InstanceIdImpl_tB528D9E690D089FBF42027CEF1983B298A9C9371::get_offset_of_mDataType_0(),
	InstanceIdImpl_tB528D9E690D089FBF42027CEF1983B298A9C9371::get_offset_of_mBuffer_1(),
	InstanceIdImpl_tB528D9E690D089FBF42027CEF1983B298A9C9371::get_offset_of_mNumericValue_2(),
	InstanceIdImpl_tB528D9E690D089FBF42027CEF1983B298A9C9371::get_offset_of_mDataLength_3(),
	InstanceIdImpl_tB528D9E690D089FBF42027CEF1983B298A9C9371::get_offset_of_mCachedStringValue_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2644 = { sizeof (VuMarkTargetImpl_t6455B455669A18BE0FCA10863C50CB61F7043A91), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2644[4] = 
{
	VuMarkTargetImpl_t6455B455669A18BE0FCA10863C50CB61F7043A91::get_offset_of_mVuMarkTemplate_3(),
	VuMarkTargetImpl_t6455B455669A18BE0FCA10863C50CB61F7043A91::get_offset_of_mInstanceId_4(),
	VuMarkTargetImpl_t6455B455669A18BE0FCA10863C50CB61F7043A91::get_offset_of_mInstanceImage_5(),
	VuMarkTargetImpl_t6455B455669A18BE0FCA10863C50CB61F7043A91::get_offset_of_mInstanceImageHeader_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2645 = { sizeof (VuMarkSetTargetSize_tA607278FCA4215B58CB8D03F1698A1A75B52E321), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2645[1] = 
{
	VuMarkSetTargetSize_tA607278FCA4215B58CB8D03F1698A1A75B52E321::get_offset_of_mTemplate_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2646 = { sizeof (VuMarkTemplateImpl_t70BFD60A41858A19817826C4468AA5EE736E4ED8), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2646[3] = 
{
	VuMarkTemplateImpl_t70BFD60A41858A19817826C4468AA5EE736E4ED8::get_offset_of_mUserData_4(),
	VuMarkTemplateImpl_t70BFD60A41858A19817826C4468AA5EE736E4ED8::get_offset_of_mOrigin_5(),
	VuMarkTemplateImpl_t70BFD60A41858A19817826C4468AA5EE736E4ED8::get_offset_of_mTrackingFromRuntimeAppearance_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2647 = { sizeof (MixedRealityController_t140A79CE6381E61D93A6C265DCC7A50522A901BE), -1, sizeof(MixedRealityController_t140A79CE6381E61D93A6C265DCC7A50522A901BE_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2647[11] = 
{
	0,
	MixedRealityController_t140A79CE6381E61D93A6C265DCC7A50522A901BE_StaticFields::get_offset_of_mInstance_1(),
	MixedRealityController_t140A79CE6381E61D93A6C265DCC7A50522A901BE::get_offset_of_mVuforiaBehaviour_2(),
	MixedRealityController_t140A79CE6381E61D93A6C265DCC7A50522A901BE::get_offset_of_mDigitalEyewearBehaviour_3(),
	MixedRealityController_t140A79CE6381E61D93A6C265DCC7A50522A901BE::get_offset_of_mVideoBackgroundManager_4(),
	MixedRealityController_t140A79CE6381E61D93A6C265DCC7A50522A901BE::get_offset_of_mViewerHasBeenSetExternally_5(),
	MixedRealityController_t140A79CE6381E61D93A6C265DCC7A50522A901BE::get_offset_of_mViewerParameters_6(),
	MixedRealityController_t140A79CE6381E61D93A6C265DCC7A50522A901BE::get_offset_of_mFrameWorkHasBeenSetExternally_7(),
	MixedRealityController_t140A79CE6381E61D93A6C265DCC7A50522A901BE::get_offset_of_mStereoFramework_8(),
	MixedRealityController_t140A79CE6381E61D93A6C265DCC7A50522A901BE::get_offset_of_mObjectTrackerStopped_9(),
	MixedRealityController_t140A79CE6381E61D93A6C265DCC7A50522A901BE::get_offset_of_mAutoStopCameraIfNotRequired_10(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2648 = { sizeof (Mode_t85FA3C2ABF84A0D6BB7742A375C9DA35140008AB)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2648[9] = 
{
	Mode_t85FA3C2ABF84A0D6BB7742A375C9DA35140008AB::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2649 = { sizeof (RotationalDeviceTracker_tFDD94B013A18CCDE7AED9F6A13C8147742E66DEA), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2650 = { sizeof (MODEL_CORRECTION_MODE_tA628D33CBBD6F312044315FED05B471AD6AEA17E)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2650[4] = 
{
	MODEL_CORRECTION_MODE_tA628D33CBBD6F312044315FED05B471AD6AEA17E::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2651 = { sizeof (CustomViewerParameters_t5F3D3A911D28E3D98760A6BCA1F2E984542E2075), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2651[7] = 
{
	CustomViewerParameters_t5F3D3A911D28E3D98760A6BCA1F2E984542E2075::get_offset_of_mVersion_1(),
	CustomViewerParameters_t5F3D3A911D28E3D98760A6BCA1F2E984542E2075::get_offset_of_mName_2(),
	CustomViewerParameters_t5F3D3A911D28E3D98760A6BCA1F2E984542E2075::get_offset_of_mManufacturer_3(),
	CustomViewerParameters_t5F3D3A911D28E3D98760A6BCA1F2E984542E2075::get_offset_of_mButtonType_4(),
	CustomViewerParameters_t5F3D3A911D28E3D98760A6BCA1F2E984542E2075::get_offset_of_mScreenToLensDistance_5(),
	CustomViewerParameters_t5F3D3A911D28E3D98760A6BCA1F2E984542E2075::get_offset_of_mTrayAlignment_6(),
	CustomViewerParameters_t5F3D3A911D28E3D98760A6BCA1F2E984542E2075::get_offset_of_mMagnet_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2652 = { sizeof (DeviceTrackingManager_t1D264AEA989AA45ED5A85F7FB142F38DB3EE482A), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2652[8] = 
{
	DeviceTrackingManager_t1D264AEA989AA45ED5A85F7FB142F38DB3EE482A::get_offset_of_mDeviceTrackerPositonOffset_0(),
	DeviceTrackingManager_t1D264AEA989AA45ED5A85F7FB142F38DB3EE482A::get_offset_of_mDeviceTrackerRotationOffset_1(),
	DeviceTrackingManager_t1D264AEA989AA45ED5A85F7FB142F38DB3EE482A::get_offset_of_mBeforeDevicePoseUpdated_2(),
	DeviceTrackingManager_t1D264AEA989AA45ED5A85F7FB142F38DB3EE482A::get_offset_of_mAfterDevicePoseUpdated_3(),
	DeviceTrackingManager_t1D264AEA989AA45ED5A85F7FB142F38DB3EE482A::get_offset_of_mStatusChanged_4(),
	DeviceTrackingManager_t1D264AEA989AA45ED5A85F7FB142F38DB3EE482A::get_offset_of_mStatusOrInfoChanged_5(),
	DeviceTrackingManager_t1D264AEA989AA45ED5A85F7FB142F38DB3EE482A::get_offset_of_mCurrentTrackableStatus_6(),
	DeviceTrackingManager_t1D264AEA989AA45ED5A85F7FB142F38DB3EE482A::get_offset_of_mCurrentTrackableStatusInfo_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2653 = { sizeof (FactorySetter_t3BADB081A5868E10EE58A1DB08B7758C9FF6932C), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2654 = { sizeof (EyewearCalibrationProfileManagerImpl_tC0ADEEC68259AEB2D421E9031431C6B35832E39C), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2655 = { sizeof (BackgroundPlaneBehaviour_t2615248F9F83AF94A06C6585EBB6C1D3BCF64338), -1, sizeof(BackgroundPlaneBehaviour_t2615248F9F83AF94A06C6585EBB6C1D3BCF64338_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2655[15] = 
{
	BackgroundPlaneBehaviour_t2615248F9F83AF94A06C6585EBB6C1D3BCF64338::get_offset_of_mTextureInfo_4(),
	BackgroundPlaneBehaviour_t2615248F9F83AF94A06C6585EBB6C1D3BCF64338::get_offset_of_mNumFramesToUpdateVideoBg_5(),
	BackgroundPlaneBehaviour_t2615248F9F83AF94A06C6585EBB6C1D3BCF64338::get_offset_of_mCameraTransform_6(),
	BackgroundPlaneBehaviour_t2615248F9F83AF94A06C6585EBB6C1D3BCF64338_StaticFields::get_offset_of_maxDisplacement_7(),
	BackgroundPlaneBehaviour_t2615248F9F83AF94A06C6585EBB6C1D3BCF64338::get_offset_of_mMesh_8(),
	BackgroundPlaneBehaviour_t2615248F9F83AF94A06C6585EBB6C1D3BCF64338::get_offset_of_mStereoDepth_9(),
	BackgroundPlaneBehaviour_t2615248F9F83AF94A06C6585EBB6C1D3BCF64338::get_offset_of_mProjectionMatrixSetExternally_10(),
	BackgroundPlaneBehaviour_t2615248F9F83AF94A06C6585EBB6C1D3BCF64338::get_offset_of_mBackgroundOffset_11(),
	BackgroundPlaneBehaviour_t2615248F9F83AF94A06C6585EBB6C1D3BCF64338::get_offset_of_mVuforiaBehaviour_12(),
	BackgroundPlaneBehaviour_t2615248F9F83AF94A06C6585EBB6C1D3BCF64338::get_offset_of_mBackgroundPlacedCallback_13(),
	BackgroundPlaneBehaviour_t2615248F9F83AF94A06C6585EBB6C1D3BCF64338::get_offset_of_mValidator_14(),
	BackgroundPlaneBehaviour_t2615248F9F83AF94A06C6585EBB6C1D3BCF64338::get_offset_of_mProjectMatrixProvider_15(),
	BackgroundPlaneBehaviour_t2615248F9F83AF94A06C6585EBB6C1D3BCF64338::get_offset_of_mLastUsedProjectioMatrix_16(),
	BackgroundPlaneBehaviour_t2615248F9F83AF94A06C6585EBB6C1D3BCF64338::get_offset_of_mNumDivisions_17(),
	BackgroundPlaneBehaviour_t2615248F9F83AF94A06C6585EBB6C1D3BCF64338::get_offset_of_mHideExcessAreaUtility_18(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2656 = { sizeof (ProjectionMatrixData_t68F1EB028D7C3DDEE47E84B50FC93F6495CCD018)+ sizeof (RuntimeObject), sizeof(ProjectionMatrixData_t68F1EB028D7C3DDEE47E84B50FC93F6495CCD018 ), 0, 0 };
extern const int32_t g_FieldOffsetTable2656[7] = 
{
	ProjectionMatrixData_t68F1EB028D7C3DDEE47E84B50FC93F6495CCD018::get_offset_of_ProjectionMatrix_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ProjectionMatrixData_t68F1EB028D7C3DDEE47E84B50FC93F6495CCD018::get_offset_of_InverseMatrix_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ProjectionMatrixData_t68F1EB028D7C3DDEE47E84B50FC93F6495CCD018::get_offset_of_HorizontalFoV_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ProjectionMatrixData_t68F1EB028D7C3DDEE47E84B50FC93F6495CCD018::get_offset_of_VerticalFoV_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ProjectionMatrixData_t68F1EB028D7C3DDEE47E84B50FC93F6495CCD018::get_offset_of_CenterEyeRayFrom_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ProjectionMatrixData_t68F1EB028D7C3DDEE47E84B50FC93F6495CCD018::get_offset_of_CenterEyeRayTo_5() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ProjectionMatrixData_t68F1EB028D7C3DDEE47E84B50FC93F6495CCD018::get_offset_of_MaxDepth_6() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2657 = { sizeof (EyewearUserCalibratorImpl_t2FE95EA95FD1A73AFA1B2226F35D96EC38904E57), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2658 = { sizeof (EyewearCalibrationReadingData_tDF46015B9C9367454D4D0FA812AFFA6B1CA737F2)+ sizeof (RuntimeObject), sizeof(EyewearCalibrationReadingData_tDF46015B9C9367454D4D0FA812AFFA6B1CA737F2_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable2658[5] = 
{
	EyewearCalibrationReadingData_tDF46015B9C9367454D4D0FA812AFFA6B1CA737F2::get_offset_of_pose_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	EyewearCalibrationReadingData_tDF46015B9C9367454D4D0FA812AFFA6B1CA737F2::get_offset_of_scale_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	EyewearCalibrationReadingData_tDF46015B9C9367454D4D0FA812AFFA6B1CA737F2::get_offset_of_centerX_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	EyewearCalibrationReadingData_tDF46015B9C9367454D4D0FA812AFFA6B1CA737F2::get_offset_of_centerY_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	EyewearCalibrationReadingData_tDF46015B9C9367454D4D0FA812AFFA6B1CA737F2::get_offset_of_type_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2659 = { sizeof (RotationalPlayModeDeviceTrackerImpl_t8D65C4594D7497AA7FE1E56C27B568433A0E55E7), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2659[4] = 
{
	RotationalPlayModeDeviceTrackerImpl_t8D65C4594D7497AA7FE1E56C27B568433A0E55E7::get_offset_of_mVectorZero_1(),
	RotationalPlayModeDeviceTrackerImpl_t8D65C4594D7497AA7FE1E56C27B568433A0E55E7::get_offset_of_mModelCorrectionTransform_2(),
	RotationalPlayModeDeviceTrackerImpl_t8D65C4594D7497AA7FE1E56C27B568433A0E55E7::get_offset_of_mModelCorrection_3(),
	RotationalPlayModeDeviceTrackerImpl_t8D65C4594D7497AA7FE1E56C27B568433A0E55E7::get_offset_of_U3CRotationU3Ek__BackingField_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2660 = { sizeof (RotationalDeviceTrackerImpl_t73A4F1EC898C9EEE6829C1E6B440EF037A05B379), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2661 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2662 = { sizeof (IOSCamRecoveringHelper_t7A7C026364DA1E76B1A9E06359ADC542D9B04C65), -1, sizeof(IOSCamRecoveringHelper_t7A7C026364DA1E76B1A9E06359ADC542D9B04C65_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2662[9] = 
{
	0,
	0,
	0,
	IOSCamRecoveringHelper_t7A7C026364DA1E76B1A9E06359ADC542D9B04C65_StaticFields::get_offset_of_sHasJustResumed_3(),
	IOSCamRecoveringHelper_t7A7C026364DA1E76B1A9E06359ADC542D9B04C65_StaticFields::get_offset_of_sCheckFailedFrameAfterResume_4(),
	IOSCamRecoveringHelper_t7A7C026364DA1E76B1A9E06359ADC542D9B04C65_StaticFields::get_offset_of_sCheckedFailedFrameCounter_5(),
	IOSCamRecoveringHelper_t7A7C026364DA1E76B1A9E06359ADC542D9B04C65_StaticFields::get_offset_of_sWaitToRecoverCameraRestart_6(),
	IOSCamRecoveringHelper_t7A7C026364DA1E76B1A9E06359ADC542D9B04C65_StaticFields::get_offset_of_sWaitedFrameRecoverCounter_7(),
	IOSCamRecoveringHelper_t7A7C026364DA1E76B1A9E06359ADC542D9B04C65_StaticFields::get_offset_of_sRecoveryAttemptCounter_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2663 = { sizeof (MeshUtils_t26F4506C8820A227AABFFEDDBFABE8855C58B2ED), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2664 = { sizeof (NullHideExcessAreaClipping_t7E3109442BEB57AE1BCA98D2192F2EDEE820255F), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2665 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2666 = { sizeof (DedicatedEyewearCameraConfiguration_tA25088B1E2C7C7E0CF817A9A98D1AB977D20F892), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2666[15] = 
{
	0,
	0,
	0,
	DedicatedEyewearCameraConfiguration_tA25088B1E2C7C7E0CF817A9A98D1AB977D20F892::get_offset_of_mCamera_14(),
	DedicatedEyewearCameraConfiguration_tA25088B1E2C7C7E0CF817A9A98D1AB977D20F892::get_offset_of_mScreenWidth_15(),
	DedicatedEyewearCameraConfiguration_tA25088B1E2C7C7E0CF817A9A98D1AB977D20F892::get_offset_of_mScreenHeight_16(),
	DedicatedEyewearCameraConfiguration_tA25088B1E2C7C7E0CF817A9A98D1AB977D20F892::get_offset_of_mNeedToCheckStereo_17(),
	DedicatedEyewearCameraConfiguration_tA25088B1E2C7C7E0CF817A9A98D1AB977D20F892::get_offset_of_mLastAppliedNearClipPlane_18(),
	DedicatedEyewearCameraConfiguration_tA25088B1E2C7C7E0CF817A9A98D1AB977D20F892::get_offset_of_mLastAppliedFarClipPlane_19(),
	DedicatedEyewearCameraConfiguration_tA25088B1E2C7C7E0CF817A9A98D1AB977D20F892::get_offset_of_mLeftProjectionMatrix_20(),
	DedicatedEyewearCameraConfiguration_tA25088B1E2C7C7E0CF817A9A98D1AB977D20F892::get_offset_of_mPlayModeEyeTextureWidth_21(),
	DedicatedEyewearCameraConfiguration_tA25088B1E2C7C7E0CF817A9A98D1AB977D20F892::get_offset_of_mPlayModeEyeTextureHeight_22(),
	DedicatedEyewearCameraConfiguration_tA25088B1E2C7C7E0CF817A9A98D1AB977D20F892::get_offset_of_mEyewearDevice_23(),
	DedicatedEyewearCameraConfiguration_tA25088B1E2C7C7E0CF817A9A98D1AB977D20F892::get_offset_of_mMatrixStore_24(),
	DedicatedEyewearCameraConfiguration_tA25088B1E2C7C7E0CF817A9A98D1AB977D20F892::get_offset_of_mVrDeviceController_25(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2667 = { sizeof (EyeData_t8CBA619508D949CB8004F2594FB4F1B327554899)+ sizeof (RuntimeObject), sizeof(EyeData_t8CBA619508D949CB8004F2594FB4F1B327554899 ), 0, 0 };
extern const int32_t g_FieldOffsetTable2667[3] = 
{
	EyeData_t8CBA619508D949CB8004F2594FB4F1B327554899::get_offset_of_OffsetPosition_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	EyeData_t8CBA619508D949CB8004F2594FB4F1B327554899::get_offset_of_OffsetRotation_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	EyeData_t8CBA619508D949CB8004F2594FB4F1B327554899::get_offset_of_ProjectionMatrix_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2668 = { sizeof (NullCameraConfiguration_t3E134CB69EF1E83C98521291D9157325E2114A14), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2668[1] = 
{
	NullCameraConfiguration_t3E134CB69EF1E83C98521291D9157325E2114A14::get_offset_of_mProjectionOrientation_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2669 = { sizeof (MonoCameraConfiguration_tB9325693A0F3CE6C160E46126E94BB072BD79016), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2669[8] = 
{
	0,
	MonoCameraConfiguration_tB9325693A0F3CE6C160E46126E94BB072BD79016::get_offset_of_mPrimaryCamera_12(),
	MonoCameraConfiguration_tB9325693A0F3CE6C160E46126E94BB072BD79016::get_offset_of_mCameraViewPortWidth_13(),
	MonoCameraConfiguration_tB9325693A0F3CE6C160E46126E94BB072BD79016::get_offset_of_mCameraViewPortHeight_14(),
	MonoCameraConfiguration_tB9325693A0F3CE6C160E46126E94BB072BD79016::get_offset_of_mLastAppliedNearClipPlane_15(),
	MonoCameraConfiguration_tB9325693A0F3CE6C160E46126E94BB072BD79016::get_offset_of_mLastAppliedFarClipPlane_16(),
	MonoCameraConfiguration_tB9325693A0F3CE6C160E46126E94BB072BD79016::get_offset_of_mLastAppliedFoV_17(),
	MonoCameraConfiguration_tB9325693A0F3CE6C160E46126E94BB072BD79016::get_offset_of_mVrDeviceController_18(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2670 = { sizeof (UnityCameraExtensions_t60A05A4BABEE71AF3856BA965F63D43AC64EFA99), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2671 = { sizeof (View_t9C4005B40449F629C9F40B2B276D4E72E2044682)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2671[6] = 
{
	View_t9C4005B40449F629C9F40B2B276D4E72E2044682::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2672 = { sizeof (ViewerParameters_t382177593203E057F8920BAB05625FCDF7FEE3A7), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2672[1] = 
{
	ViewerParameters_t382177593203E057F8920BAB05625FCDF7FEE3A7::get_offset_of_mNativeVP_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2673 = { sizeof (ViewerParametersList_t72A045CA8E4C523190402E0E51B367945F4E31D8), -1, sizeof(ViewerParametersList_t72A045CA8E4C523190402E0E51B367945F4E31D8_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2673[2] = 
{
	ViewerParametersList_t72A045CA8E4C523190402E0E51B367945F4E31D8::get_offset_of_mNativeVPL_0(),
	ViewerParametersList_t72A045CA8E4C523190402E0E51B367945F4E31D8_StaticFields::get_offset_of_mListForAuthoringTools_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2674 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2675 = { sizeof (ObjectTargetBehaviour_t7EB3FFC5339B1B13EE15CA2506D6D8600947C8F3), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2675[12] = 
{
	ObjectTargetBehaviour_t7EB3FFC5339B1B13EE15CA2506D6D8600947C8F3::get_offset_of_mObjectTarget_13(),
	ObjectTargetBehaviour_t7EB3FFC5339B1B13EE15CA2506D6D8600947C8F3::get_offset_of_mAspectRatioXY_14(),
	ObjectTargetBehaviour_t7EB3FFC5339B1B13EE15CA2506D6D8600947C8F3::get_offset_of_mAspectRatioXZ_15(),
	ObjectTargetBehaviour_t7EB3FFC5339B1B13EE15CA2506D6D8600947C8F3::get_offset_of_mShowBoundingBox_16(),
	ObjectTargetBehaviour_t7EB3FFC5339B1B13EE15CA2506D6D8600947C8F3::get_offset_of_mBBoxMin_17(),
	ObjectTargetBehaviour_t7EB3FFC5339B1B13EE15CA2506D6D8600947C8F3::get_offset_of_mBBoxMax_18(),
	ObjectTargetBehaviour_t7EB3FFC5339B1B13EE15CA2506D6D8600947C8F3::get_offset_of_mPreviewImage_19(),
	ObjectTargetBehaviour_t7EB3FFC5339B1B13EE15CA2506D6D8600947C8F3::get_offset_of_mLength_20(),
	ObjectTargetBehaviour_t7EB3FFC5339B1B13EE15CA2506D6D8600947C8F3::get_offset_of_mWidth_21(),
	ObjectTargetBehaviour_t7EB3FFC5339B1B13EE15CA2506D6D8600947C8F3::get_offset_of_mHeight_22(),
	ObjectTargetBehaviour_t7EB3FFC5339B1B13EE15CA2506D6D8600947C8F3::get_offset_of_mLastTransformScale_23(),
	ObjectTargetBehaviour_t7EB3FFC5339B1B13EE15CA2506D6D8600947C8F3::get_offset_of_mLastSize_24(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2676 = { sizeof (CameraDevice_tC7DA626A5FCE15B0C92C7FBD4E289F4F73B4BF3B), -1, sizeof(CameraDevice_tC7DA626A5FCE15B0C92C7FBD4E289F4F73B4BF3B_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2676[14] = 
{
	CameraDevice_tC7DA626A5FCE15B0C92C7FBD4E289F4F73B4BF3B_StaticFields::get_offset_of_mInstance_0(),
	CameraDevice_tC7DA626A5FCE15B0C92C7FBD4E289F4F73B4BF3B::get_offset_of_mCameraImages_1(),
	CameraDevice_tC7DA626A5FCE15B0C92C7FBD4E289F4F73B4BF3B::get_offset_of_mForcedCameraFormats_2(),
	CameraDevice_tC7DA626A5FCE15B0C92C7FBD4E289F4F73B4BF3B_StaticFields::get_offset_of_mWebCam_3(),
	CameraDevice_tC7DA626A5FCE15B0C92C7FBD4E289F4F73B4BF3B::get_offset_of_mCameraReady_4(),
	CameraDevice_tC7DA626A5FCE15B0C92C7FBD4E289F4F73B4BF3B::get_offset_of_mIsDirty_5(),
	CameraDevice_tC7DA626A5FCE15B0C92C7FBD4E289F4F73B4BF3B::get_offset_of_mActualCameraDirection_6(),
	CameraDevice_tC7DA626A5FCE15B0C92C7FBD4E289F4F73B4BF3B::get_offset_of_mSelectedCameraDirection_7(),
	CameraDevice_tC7DA626A5FCE15B0C92C7FBD4E289F4F73B4BF3B::get_offset_of_mCameraDeviceMode_8(),
	CameraDevice_tC7DA626A5FCE15B0C92C7FBD4E289F4F73B4BF3B::get_offset_of_mVideoModeData_9(),
	CameraDevice_tC7DA626A5FCE15B0C92C7FBD4E289F4F73B4BF3B::get_offset_of_mVideoModeDataNeedsUpdate_10(),
	CameraDevice_tC7DA626A5FCE15B0C92C7FBD4E289F4F73B4BF3B::get_offset_of_mHasCameraDeviceModeBeenSet_11(),
	CameraDevice_tC7DA626A5FCE15B0C92C7FBD4E289F4F73B4BF3B::get_offset_of_mCameraActive_12(),
	CameraDevice_tC7DA626A5FCE15B0C92C7FBD4E289F4F73B4BF3B::get_offset_of_mIsCameraMocked_13(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2677 = { sizeof (CameraDeviceMode_t31CE15C1D60CED5FC63DF3962D53D5DAADD40589)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2677[4] = 
{
	CameraDeviceMode_t31CE15C1D60CED5FC63DF3962D53D5DAADD40589::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2678 = { sizeof (FocusMode_t649DA432637F3552AFF51C0E9D5F7BFB478CA84E)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2678[6] = 
{
	FocusMode_t649DA432637F3552AFF51C0E9D5F7BFB478CA84E::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2679 = { sizeof (CameraDirection_t99A7DDFDD0655039A53CB7B65650BF9C584F427C)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2679[4] = 
{
	CameraDirection_t99A7DDFDD0655039A53CB7B65650BF9C584F427C::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2680 = { sizeof (VideoModeData_t7BC59F654FEA6A276ACE52D08AA89A8438698C3D)+ sizeof (RuntimeObject), sizeof(VideoModeData_t7BC59F654FEA6A276ACE52D08AA89A8438698C3D ), 0, 0 };
extern const int32_t g_FieldOffsetTable2680[4] = 
{
	VideoModeData_t7BC59F654FEA6A276ACE52D08AA89A8438698C3D::get_offset_of_width_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	VideoModeData_t7BC59F654FEA6A276ACE52D08AA89A8438698C3D::get_offset_of_height_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	VideoModeData_t7BC59F654FEA6A276ACE52D08AA89A8438698C3D::get_offset_of_frameRate_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	VideoModeData_t7BC59F654FEA6A276ACE52D08AA89A8438698C3D::get_offset_of_unused_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2681 = { sizeof (CameraField_tA76F51B38BD621368B9D9440DB131E5015ED70B4)+ sizeof (RuntimeObject), sizeof(CameraField_tA76F51B38BD621368B9D9440DB131E5015ED70B4_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable2681[2] = 
{
	CameraField_tA76F51B38BD621368B9D9440DB131E5015ED70B4::get_offset_of_Type_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	CameraField_tA76F51B38BD621368B9D9440DB131E5015ED70B4::get_offset_of_Key_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2682 = { sizeof (DataType_tEDADE5E338501A7568E6F61544B9A772E9D8AD9B)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2682[7] = 
{
	DataType_tEDADE5E338501A7568E6F61544B9A772E9D8AD9B::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2683 = { sizeof (Int64Range_t89729DA7D2A180C3305C2C3A24E458775795ADA6)+ sizeof (RuntimeObject), sizeof(Int64Range_t89729DA7D2A180C3305C2C3A24E458775795ADA6 ), 0, 0 };
extern const int32_t g_FieldOffsetTable2683[2] = 
{
	Int64Range_t89729DA7D2A180C3305C2C3A24E458775795ADA6::get_offset_of_fromInt_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Int64Range_t89729DA7D2A180C3305C2C3A24E458775795ADA6::get_offset_of_toInt_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2684 = { sizeof (CameraFieldData_tD6607A30C643B1AC246B137837DBAF6A94100E00)+ sizeof (RuntimeObject), sizeof(CameraFieldData_tD6607A30C643B1AC246B137837DBAF6A94100E00_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable2684[3] = 
{
	CameraFieldData_tD6607A30C643B1AC246B137837DBAF6A94100E00::get_offset_of_KeyValue_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	CameraFieldData_tD6607A30C643B1AC246B137837DBAF6A94100E00::get_offset_of_DataType_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	CameraFieldData_tD6607A30C643B1AC246B137837DBAF6A94100E00::get_offset_of_Unused_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2685 = { sizeof (CloudRecoBehaviour_t263AD9404F564649C1696DE75F433E1F5F56B870), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2685[2] = 
{
	CloudRecoBehaviour_t263AD9404F564649C1696DE75F433E1F5F56B870::get_offset_of_AccessKey_12(),
	CloudRecoBehaviour_t263AD9404F564649C1696DE75F433E1F5F56B870::get_offset_of_SecretKey_13(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2686 = { sizeof (HideExcessAreaUtility_t4DEC8A8570DC0458B45E1B21A6ABB435D6C63B32), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2686[7] = 
{
	HideExcessAreaUtility_t4DEC8A8570DC0458B45E1B21A6ABB435D6C63B32::get_offset_of_mClippingImpl_0(),
	HideExcessAreaUtility_t4DEC8A8570DC0458B45E1B21A6ABB435D6C63B32::get_offset_of_mClippingMode_1(),
	HideExcessAreaUtility_t4DEC8A8570DC0458B45E1B21A6ABB435D6C63B32::get_offset_of_mVideoBgMgr_2(),
	HideExcessAreaUtility_t4DEC8A8570DC0458B45E1B21A6ABB435D6C63B32::get_offset_of_mSceneScaledDown_3(),
	HideExcessAreaUtility_t4DEC8A8570DC0458B45E1B21A6ABB435D6C63B32::get_offset_of_mStarted_4(),
	HideExcessAreaUtility_t4DEC8A8570DC0458B45E1B21A6ABB435D6C63B32::get_offset_of_mEnabled_5(),
	HideExcessAreaUtility_t4DEC8A8570DC0458B45E1B21A6ABB435D6C63B32::get_offset_of_mParentGameObject_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2687 = { sizeof (CLIPPING_MODE_t74517F84F38E21AC75F4DB3A1D76698EA0D2580D)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2687[3] = 
{
	CLIPPING_MODE_t74517F84F38E21AC75F4DB3A1D76698EA0D2580D::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2688 = { sizeof (DataSetObjectTargetImpl_tC2D896B84A1FDE730F7E2F20045D12CBC6F30C98), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2688[1] = 
{
	DataSetObjectTargetImpl_tC2D896B84A1FDE730F7E2F20045D12CBC6F30C98::get_offset_of_mDataSet_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2689 = { sizeof (UnityPlayer_tD346044371C77B60251DABD9293C1F0204311C1F), -1, sizeof(UnityPlayer_tD346044371C77B60251DABD9293C1F0204311C1F_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2689[1] = 
{
	UnityPlayer_tD346044371C77B60251DABD9293C1F0204311C1F_StaticFields::get_offset_of_sPlayer_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2690 = { sizeof (NullUnityPlayer_t86841446B1CBBFDF0332C70114BF3CBA67162117), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2691 = { sizeof (Device_t19A8D91DE8CD359592F4BFF8F0F025C06AE1B175), -1, sizeof(Device_t19A8D91DE8CD359592F4BFF8F0F025C06AE1B175_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2691[1] = 
{
	Device_t19A8D91DE8CD359592F4BFF8F0F025C06AE1B175_StaticFields::get_offset_of_mInstance_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2692 = { sizeof (Mode_t3D19562359F8BBFACBD891530120B7C58676F96C)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2692[3] = 
{
	Mode_t3D19562359F8BBFACBD891530120B7C58676F96C::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2693 = { sizeof (ViewerButtonType_tD40BFED34EDFA6EF946FC9E75CC0BAEC0FE4C1ED)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2693[5] = 
{
	ViewerButtonType_tD40BFED34EDFA6EF946FC9E75CC0BAEC0FE4C1ED::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2694 = { sizeof (ViewerTrayAlignment_t5528CE704439AEADBE3566805CF4E7441A11A444)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2694[4] = 
{
	ViewerTrayAlignment_t5528CE704439AEADBE3566805CF4E7441A11A444::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2695 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2696 = { sizeof (PosixPath_t9069DEE3D274146EF8CC598726BA464AD4D378CB), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2697 = { sizeof (InvalidPathException_t5B3E98CFCD9EBD7DDD33CEA489522902C9193D3F), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2698 = { sizeof (U3CU3Ec_tB435526A5CF5263ED816F1A1E6F72ED3E7168DB8), -1, sizeof(U3CU3Ec_tB435526A5CF5263ED816F1A1E6F72ED3E7168DB8_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2698[3] = 
{
	U3CU3Ec_tB435526A5CF5263ED816F1A1E6F72ED3E7168DB8_StaticFields::get_offset_of_U3CU3E9_0(),
	U3CU3Ec_tB435526A5CF5263ED816F1A1E6F72ED3E7168DB8_StaticFields::get_offset_of_U3CU3E9__1_0_1(),
	U3CU3Ec_tB435526A5CF5263ED816F1A1E6F72ED3E7168DB8_StaticFields::get_offset_of_U3CU3E9__1_1_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2699 = { sizeof (LateLatchingManager_t989F0737102DC3958150786EDFBA8BBE6C63663C), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2699[9] = 
{
	LateLatchingManager_t989F0737102DC3958150786EDFBA8BBE6C63663C::get_offset_of_mInitialized_0(),
	LateLatchingManager_t989F0737102DC3958150786EDFBA8BBE6C63663C::get_offset_of_mEnabled_1(),
	LateLatchingManager_t989F0737102DC3958150786EDFBA8BBE6C63663C::get_offset_of_mUpdated_2(),
	LateLatchingManager_t989F0737102DC3958150786EDFBA8BBE6C63663C::get_offset_of_mCachedPositionalOffset_3(),
	LateLatchingManager_t989F0737102DC3958150786EDFBA8BBE6C63663C::get_offset_of_mCachedRotationalOffset_4(),
	LateLatchingManager_t989F0737102DC3958150786EDFBA8BBE6C63663C::get_offset_of_mCachedTrackableResultDataArray_5(),
	LateLatchingManager_t989F0737102DC3958150786EDFBA8BBE6C63663C::get_offset_of_mCachedVuMarkResultDataArray_6(),
	LateLatchingManager_t989F0737102DC3958150786EDFBA8BBE6C63663C::get_offset_of_mCachedOriginTrackableID_7(),
	LateLatchingManager_t989F0737102DC3958150786EDFBA8BBE6C63663C::get_offset_of_mCachedFrameIndex_8(),
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // Modified by PostBuild.cs
