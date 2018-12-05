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
// System.Action`1<System.Boolean>
struct Action_1_t269755560;
// System.Action`1<Vuforia.TrackableBehaviour/Status>
struct Action_1_t1273373409;
// System.Action`1<Vuforia.VuMarkBehaviour>
struct Action_1_t1350698054;
// System.Action`1<Vuforia.VuMarkTarget>
struct Action_1_t1302041398;
// System.Action`1<Vuforia.VuforiaBehaviour>
struct Action_1_t2324316135;
// System.Action`1<Vuforia.VuforiaUnity/InitError>
struct Action_1_t3593217305;
// System.Action`2<Vuforia.TrackableBehaviour/Status,Vuforia.TrackableBehaviour/StatusInfo>
struct Action_2_t3478825536;
// System.Byte[]
struct ByteU5BU5D_t4116647657;
// System.Char[]
struct CharU5BU5D_t3528271667;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<Vuforia.VuMarkBehaviour>>
struct Dictionary_2_t1539018532;
// System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.Trackable>
struct Dictionary_2_t1340713322;
// System.Collections.Generic.Dictionary`2<Vuforia.Image/PIXEL_FORMAT,Vuforia.Image>
struct Dictionary_2_t3630620928;
// System.Collections.Generic.HashSet`1<System.String>
struct HashSet_1_t412400163;
// System.Collections.Generic.List`1<System.String>
struct List_1_t3319525431;
// System.Collections.Generic.List`1<Vuforia.ICloudRecoEventHandler>
struct List_1_t1049732891;
// System.Collections.Generic.List`1<Vuforia.ITrackableEventHandler>
struct List_1_t2968050330;
// System.Collections.Generic.List`1<Vuforia.Image/PIXEL_FORMAT>
struct List_1_t386988881;
// System.Collections.Generic.List`1<Vuforia.VuMarkBehaviour>
struct List_1_t2650305201;
// System.Collections.Generic.List`1<Vuforia.VuMarkTarget>
struct List_1_t2601648545;
// System.Collections.IDictionary
struct IDictionary_t1363984059;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t1169129676;
// System.Func`2<System.String,System.Boolean>
struct Func_2_t2197129486;
// System.Func`3<System.String,System.Int32,System.String>
struct Func_3_t1487439646;
// System.IntPtr[]
struct IntPtrU5BU5D_t4013366056;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_t2481557153;
// System.Single[]
struct SingleU5BU5D_t1444911251;
// System.String
struct String_t;
// System.Void
struct Void_t1185182177;
// UnityEngine.Camera
struct Camera_t4157153871;
// UnityEngine.GameObject
struct GameObject_t1113636619;
// UnityEngine.Mesh
struct Mesh_t3648964284;
// UnityEngine.Shader
struct Shader_t4151988712;
// UnityEngine.Texture2D
struct Texture2D_t3840446185;
// UnityEngine.Transform
struct Transform_t3600365921;
// Vuforia.BackgroundPlaneBehaviour
struct BackgroundPlaneBehaviour_t3333547397;
// Vuforia.CylinderTarget
struct CylinderTarget_t4265049602;
// Vuforia.DataSet
struct DataSet_t3286034874;
// Vuforia.DigitalEyewearARController
struct DigitalEyewearARController_t1054226036;
// Vuforia.DigitalEyewearARController/SerializableViewerParameters
struct SerializableViewerParameters_t2043332680;
// Vuforia.EyewearDevice
struct EyewearDevice_t3223385723;
// Vuforia.HideExcessAreaUtility
struct HideExcessAreaUtility_t3142786924;
// Vuforia.IExcessAreaClipping
struct IExcessAreaClipping_t3629265436;
// Vuforia.IProjectMatrixProvider
struct IProjectMatrixProvider_t1782912365;
// Vuforia.ITargetSize
struct ITargetSize_t197627644;
// Vuforia.IUnityPlayer
struct IUnityPlayer_t3870301646;
// Vuforia.IViewerParameters
struct IViewerParameters_t2017581997;
// Vuforia.IWebCam
struct IWebCam_t3734514901;
// Vuforia.Image
struct Image_t745056343;
// Vuforia.InstanceIdImpl
struct InstanceIdImpl_t2824054591;
// Vuforia.ObjectTarget
struct ObjectTarget_t3212252422;
// Vuforia.ObjectTracker
struct ObjectTracker_t4177997237;
// Vuforia.StereoProjMatrixStore
struct StereoProjMatrixStore_t888524276;
// Vuforia.TargetFinder
struct TargetFinder_t2439332195;
// Vuforia.Trackable
struct Trackable_t2451999991;
// Vuforia.TrackableBehaviour
struct TrackableBehaviour_t1113559212;
// Vuforia.TrackerData/TrackableResultData[]
struct TrackableResultDataU5BU5D_t4273811049;
// Vuforia.TrackerData/VuMarkTargetResultData[]
struct VuMarkTargetResultDataU5BU5D_t2157423781;
// Vuforia.VRDeviceController
struct VRDeviceController_t3863472269;
// Vuforia.VideoBackgroundBehaviour
struct VideoBackgroundBehaviour_t1552899074;
// Vuforia.VideoBackgroundConfigValidator
struct VideoBackgroundConfigValidator_t1958892045;
// Vuforia.VideoBackgroundManager
struct VideoBackgroundManager_t2198727358;
// Vuforia.VuMarkTarget
struct VuMarkTarget_t1129573803;
// Vuforia.VuMarkTemplate
struct VuMarkTemplate_t3623118391;
// Vuforia.VuMarkTemplateImpl
struct VuMarkTemplateImpl_t667343433;
// Vuforia.VuforiaARController
struct VuforiaARController_t1876945237;
// Vuforia.VuforiaBehaviour
struct VuforiaBehaviour_t2151848540;
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
#ifndef DEVICE_T64880687_H
#define DEVICE_T64880687_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.Device
struct  Device_t64880687  : public RuntimeObject
{
public:

public:
};

struct Device_t64880687_StaticFields
{
public:
	// Vuforia.Device Vuforia.Device::mInstance
	Device_t64880687 * ___mInstance_0;

public:
	inline static int32_t get_offset_of_mInstance_0() { return static_cast<int32_t>(offsetof(Device_t64880687_StaticFields, ___mInstance_0)); }
	inline Device_t64880687 * get_mInstance_0() const { return ___mInstance_0; }
	inline Device_t64880687 ** get_address_of_mInstance_0() { return &___mInstance_0; }
	inline void set_mInstance_0(Device_t64880687 * value)
	{
		___mInstance_0 = value;
		Il2CppCodeGenWriteBarrier((&___mInstance_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEVICE_T64880687_H
#ifndef EYEWEARCALIBRATIONPROFILEMANAGER_T947793426_H
#define EYEWEARCALIBRATIONPROFILEMANAGER_T947793426_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.EyewearCalibrationProfileManager
struct  EyewearCalibrationProfileManager_t947793426  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EYEWEARCALIBRATIONPROFILEMANAGER_T947793426_H
#ifndef EYEWEARUSERCALIBRATOR_T2926839199_H
#define EYEWEARUSERCALIBRATOR_T2926839199_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.EyewearUserCalibrator
struct  EyewearUserCalibrator_t2926839199  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EYEWEARUSERCALIBRATOR_T2926839199_H
#ifndef GLOBALSTRINGS_T3287193005_H
#define GLOBALSTRINGS_T3287193005_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.GlobalStrings
struct  GlobalStrings_t3287193005  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GLOBALSTRINGS_T3287193005_H
#ifndef IOSCAMRECOVERINGHELPER_T4035151671_H
#define IOSCAMRECOVERINGHELPER_T4035151671_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.IOSCamRecoveringHelper
struct  IOSCamRecoveringHelper_t4035151671  : public RuntimeObject
{
public:

public:
};

struct IOSCamRecoveringHelper_t4035151671_StaticFields
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
	inline static int32_t get_offset_of_sHasJustResumed_3() { return static_cast<int32_t>(offsetof(IOSCamRecoveringHelper_t4035151671_StaticFields, ___sHasJustResumed_3)); }
	inline bool get_sHasJustResumed_3() const { return ___sHasJustResumed_3; }
	inline bool* get_address_of_sHasJustResumed_3() { return &___sHasJustResumed_3; }
	inline void set_sHasJustResumed_3(bool value)
	{
		___sHasJustResumed_3 = value;
	}

	inline static int32_t get_offset_of_sCheckFailedFrameAfterResume_4() { return static_cast<int32_t>(offsetof(IOSCamRecoveringHelper_t4035151671_StaticFields, ___sCheckFailedFrameAfterResume_4)); }
	inline bool get_sCheckFailedFrameAfterResume_4() const { return ___sCheckFailedFrameAfterResume_4; }
	inline bool* get_address_of_sCheckFailedFrameAfterResume_4() { return &___sCheckFailedFrameAfterResume_4; }
	inline void set_sCheckFailedFrameAfterResume_4(bool value)
	{
		___sCheckFailedFrameAfterResume_4 = value;
	}

	inline static int32_t get_offset_of_sCheckedFailedFrameCounter_5() { return static_cast<int32_t>(offsetof(IOSCamRecoveringHelper_t4035151671_StaticFields, ___sCheckedFailedFrameCounter_5)); }
	inline int32_t get_sCheckedFailedFrameCounter_5() const { return ___sCheckedFailedFrameCounter_5; }
	inline int32_t* get_address_of_sCheckedFailedFrameCounter_5() { return &___sCheckedFailedFrameCounter_5; }
	inline void set_sCheckedFailedFrameCounter_5(int32_t value)
	{
		___sCheckedFailedFrameCounter_5 = value;
	}

	inline static int32_t get_offset_of_sWaitToRecoverCameraRestart_6() { return static_cast<int32_t>(offsetof(IOSCamRecoveringHelper_t4035151671_StaticFields, ___sWaitToRecoverCameraRestart_6)); }
	inline bool get_sWaitToRecoverCameraRestart_6() const { return ___sWaitToRecoverCameraRestart_6; }
	inline bool* get_address_of_sWaitToRecoverCameraRestart_6() { return &___sWaitToRecoverCameraRestart_6; }
	inline void set_sWaitToRecoverCameraRestart_6(bool value)
	{
		___sWaitToRecoverCameraRestart_6 = value;
	}

	inline static int32_t get_offset_of_sWaitedFrameRecoverCounter_7() { return static_cast<int32_t>(offsetof(IOSCamRecoveringHelper_t4035151671_StaticFields, ___sWaitedFrameRecoverCounter_7)); }
	inline int32_t get_sWaitedFrameRecoverCounter_7() const { return ___sWaitedFrameRecoverCounter_7; }
	inline int32_t* get_address_of_sWaitedFrameRecoverCounter_7() { return &___sWaitedFrameRecoverCounter_7; }
	inline void set_sWaitedFrameRecoverCounter_7(int32_t value)
	{
		___sWaitedFrameRecoverCounter_7 = value;
	}

	inline static int32_t get_offset_of_sRecoveryAttemptCounter_8() { return static_cast<int32_t>(offsetof(IOSCamRecoveringHelper_t4035151671_StaticFields, ___sRecoveryAttemptCounter_8)); }
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
#endif // IOSCAMRECOVERINGHELPER_T4035151671_H
#ifndef MESHUTILS_T922322213_H
#define MESHUTILS_T922322213_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.MeshUtils
struct  MeshUtils_t922322213  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MESHUTILS_T922322213_H
#ifndef NULLHIDEEXCESSAREACLIPPING_T465635818_H
#define NULLHIDEEXCESSAREACLIPPING_T465635818_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.NullHideExcessAreaClipping
struct  NullHideExcessAreaClipping_t465635818  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NULLHIDEEXCESSAREACLIPPING_T465635818_H
#ifndef NULLUNITYPLAYER_T2922069181_H
#define NULLUNITYPLAYER_T2922069181_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.NullUnityPlayer
struct  NullUnityPlayer_t2922069181  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NULLUNITYPLAYER_T2922069181_H
#ifndef POSIXPATH_T2439177930_H
#define POSIXPATH_T2439177930_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.PosixPath
struct  PosixPath_t2439177930  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // POSIXPATH_T2439177930_H
#ifndef U3CU3EC_T2832990594_H
#define U3CU3EC_T2832990594_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.PosixPath/<>c
struct  U3CU3Ec_t2832990594  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t2832990594_StaticFields
{
public:
	// Vuforia.PosixPath/<>c Vuforia.PosixPath/<>c::<>9
	U3CU3Ec_t2832990594 * ___U3CU3E9_0;
	// System.Func`2<System.String,System.Boolean> Vuforia.PosixPath/<>c::<>9__1_0
	Func_2_t2197129486 * ___U3CU3E9__1_0_1;
	// System.Func`3<System.String,System.Int32,System.String> Vuforia.PosixPath/<>c::<>9__1_1
	Func_3_t1487439646 * ___U3CU3E9__1_1_2;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t2832990594_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t2832990594 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t2832990594 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t2832990594 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3E9_0), value);
	}

	inline static int32_t get_offset_of_U3CU3E9__1_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_t2832990594_StaticFields, ___U3CU3E9__1_0_1)); }
	inline Func_2_t2197129486 * get_U3CU3E9__1_0_1() const { return ___U3CU3E9__1_0_1; }
	inline Func_2_t2197129486 ** get_address_of_U3CU3E9__1_0_1() { return &___U3CU3E9__1_0_1; }
	inline void set_U3CU3E9__1_0_1(Func_2_t2197129486 * value)
	{
		___U3CU3E9__1_0_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3E9__1_0_1), value);
	}

	inline static int32_t get_offset_of_U3CU3E9__1_1_2() { return static_cast<int32_t>(offsetof(U3CU3Ec_t2832990594_StaticFields, ___U3CU3E9__1_1_2)); }
	inline Func_3_t1487439646 * get_U3CU3E9__1_1_2() const { return ___U3CU3E9__1_1_2; }
	inline Func_3_t1487439646 ** get_address_of_U3CU3E9__1_1_2() { return &___U3CU3E9__1_1_2; }
	inline void set_U3CU3E9__1_1_2(Func_3_t1487439646 * value)
	{
		___U3CU3E9__1_1_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3E9__1_1_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CU3EC_T2832990594_H
#ifndef TRACKABLEIMPL_T3595316917_H
#define TRACKABLEIMPL_T3595316917_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.TrackableImpl
struct  TrackableImpl_t3595316917  : public RuntimeObject
{
public:
	// System.String Vuforia.TrackableImpl::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_0;
	// System.Int32 Vuforia.TrackableImpl::<ID>k__BackingField
	int32_t ___U3CIDU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CNameU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(TrackableImpl_t3595316917, ___U3CNameU3Ek__BackingField_0)); }
	inline String_t* get_U3CNameU3Ek__BackingField_0() const { return ___U3CNameU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CNameU3Ek__BackingField_0() { return &___U3CNameU3Ek__BackingField_0; }
	inline void set_U3CNameU3Ek__BackingField_0(String_t* value)
	{
		___U3CNameU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CNameU3Ek__BackingField_0), value);
	}

	inline static int32_t get_offset_of_U3CIDU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(TrackableImpl_t3595316917, ___U3CIDU3Ek__BackingField_1)); }
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
#endif // TRACKABLEIMPL_T3595316917_H
#ifndef TRACKER_T2709586299_H
#define TRACKER_T2709586299_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.Tracker
struct  Tracker_t2709586299  : public RuntimeObject
{
public:
	// System.Boolean Vuforia.Tracker::<IsActive>k__BackingField
	bool ___U3CIsActiveU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CIsActiveU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(Tracker_t2709586299, ___U3CIsActiveU3Ek__BackingField_0)); }
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
#endif // TRACKER_T2709586299_H
#ifndef TRACKERDATA_T881746187_H
#define TRACKERDATA_T881746187_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.TrackerData
struct  TrackerData_t881746187  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRACKERDATA_T881746187_H
#ifndef UNITYCAMERAEXTENSIONS_T3394190193_H
#define UNITYCAMERAEXTENSIONS_T3394190193_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.UnityCameraExtensions
struct  UnityCameraExtensions_t3394190193  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYCAMERAEXTENSIONS_T3394190193_H
#ifndef UNITYPLAYER_T3127875071_H
#define UNITYPLAYER_T3127875071_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.UnityPlayer
struct  UnityPlayer_t3127875071  : public RuntimeObject
{
public:

public:
};

struct UnityPlayer_t3127875071_StaticFields
{
public:
	// Vuforia.IUnityPlayer Vuforia.UnityPlayer::sPlayer
	RuntimeObject* ___sPlayer_0;

public:
	inline static int32_t get_offset_of_sPlayer_0() { return static_cast<int32_t>(offsetof(UnityPlayer_t3127875071_StaticFields, ___sPlayer_0)); }
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
#endif // UNITYPLAYER_T3127875071_H
#ifndef VRDEVICECONTROLLER_T3863472269_H
#define VRDEVICECONTROLLER_T3863472269_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.VRDeviceController
struct  VRDeviceController_t3863472269  : public RuntimeObject
{
public:
	// System.Collections.Generic.HashSet`1<System.String> Vuforia.VRDeviceController::mHeadPoseDisablingClasses
	HashSet_1_t412400163 * ___mHeadPoseDisablingClasses_0;
	// System.Boolean Vuforia.VRDeviceController::mHeadPosesEnabledOnce
	bool ___mHeadPosesEnabledOnce_1;

public:
	inline static int32_t get_offset_of_mHeadPoseDisablingClasses_0() { return static_cast<int32_t>(offsetof(VRDeviceController_t3863472269, ___mHeadPoseDisablingClasses_0)); }
	inline HashSet_1_t412400163 * get_mHeadPoseDisablingClasses_0() const { return ___mHeadPoseDisablingClasses_0; }
	inline HashSet_1_t412400163 ** get_address_of_mHeadPoseDisablingClasses_0() { return &___mHeadPoseDisablingClasses_0; }
	inline void set_mHeadPoseDisablingClasses_0(HashSet_1_t412400163 * value)
	{
		___mHeadPoseDisablingClasses_0 = value;
		Il2CppCodeGenWriteBarrier((&___mHeadPoseDisablingClasses_0), value);
	}

	inline static int32_t get_offset_of_mHeadPosesEnabledOnce_1() { return static_cast<int32_t>(offsetof(VRDeviceController_t3863472269, ___mHeadPosesEnabledOnce_1)); }
	inline bool get_mHeadPosesEnabledOnce_1() const { return ___mHeadPosesEnabledOnce_1; }
	inline bool* get_address_of_mHeadPosesEnabledOnce_1() { return &___mHeadPosesEnabledOnce_1; }
	inline void set_mHeadPosesEnabledOnce_1(bool value)
	{
		___mHeadPosesEnabledOnce_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VRDEVICECONTROLLER_T3863472269_H
#ifndef VUMARKMANAGER_T2982459596_H
#define VUMARKMANAGER_T2982459596_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.VuMarkManager
struct  VuMarkManager_t2982459596  : public RuntimeObject
{
public:
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<Vuforia.VuMarkBehaviour>> Vuforia.VuMarkManager::mBehaviours
	Dictionary_2_t1539018532 * ___mBehaviours_0;
	// System.Collections.Generic.List`1<Vuforia.VuMarkTarget> Vuforia.VuMarkManager::mActiveVuMarkTargets
	List_1_t2601648545 * ___mActiveVuMarkTargets_1;
	// System.Collections.Generic.List`1<Vuforia.VuMarkBehaviour> Vuforia.VuMarkManager::mDestroyedBehaviours
	List_1_t2650305201 * ___mDestroyedBehaviours_2;
	// System.Action`1<Vuforia.VuMarkTarget> Vuforia.VuMarkManager::mOnVuMarkDetected
	Action_1_t1302041398 * ___mOnVuMarkDetected_3;
	// System.Action`1<Vuforia.VuMarkTarget> Vuforia.VuMarkManager::mOnVuMarkLost
	Action_1_t1302041398 * ___mOnVuMarkLost_4;
	// System.Action`1<Vuforia.VuMarkBehaviour> Vuforia.VuMarkManager::mOnVuMarkBehaviourDetected
	Action_1_t1350698054 * ___mOnVuMarkBehaviourDetected_5;

public:
	inline static int32_t get_offset_of_mBehaviours_0() { return static_cast<int32_t>(offsetof(VuMarkManager_t2982459596, ___mBehaviours_0)); }
	inline Dictionary_2_t1539018532 * get_mBehaviours_0() const { return ___mBehaviours_0; }
	inline Dictionary_2_t1539018532 ** get_address_of_mBehaviours_0() { return &___mBehaviours_0; }
	inline void set_mBehaviours_0(Dictionary_2_t1539018532 * value)
	{
		___mBehaviours_0 = value;
		Il2CppCodeGenWriteBarrier((&___mBehaviours_0), value);
	}

	inline static int32_t get_offset_of_mActiveVuMarkTargets_1() { return static_cast<int32_t>(offsetof(VuMarkManager_t2982459596, ___mActiveVuMarkTargets_1)); }
	inline List_1_t2601648545 * get_mActiveVuMarkTargets_1() const { return ___mActiveVuMarkTargets_1; }
	inline List_1_t2601648545 ** get_address_of_mActiveVuMarkTargets_1() { return &___mActiveVuMarkTargets_1; }
	inline void set_mActiveVuMarkTargets_1(List_1_t2601648545 * value)
	{
		___mActiveVuMarkTargets_1 = value;
		Il2CppCodeGenWriteBarrier((&___mActiveVuMarkTargets_1), value);
	}

	inline static int32_t get_offset_of_mDestroyedBehaviours_2() { return static_cast<int32_t>(offsetof(VuMarkManager_t2982459596, ___mDestroyedBehaviours_2)); }
	inline List_1_t2650305201 * get_mDestroyedBehaviours_2() const { return ___mDestroyedBehaviours_2; }
	inline List_1_t2650305201 ** get_address_of_mDestroyedBehaviours_2() { return &___mDestroyedBehaviours_2; }
	inline void set_mDestroyedBehaviours_2(List_1_t2650305201 * value)
	{
		___mDestroyedBehaviours_2 = value;
		Il2CppCodeGenWriteBarrier((&___mDestroyedBehaviours_2), value);
	}

	inline static int32_t get_offset_of_mOnVuMarkDetected_3() { return static_cast<int32_t>(offsetof(VuMarkManager_t2982459596, ___mOnVuMarkDetected_3)); }
	inline Action_1_t1302041398 * get_mOnVuMarkDetected_3() const { return ___mOnVuMarkDetected_3; }
	inline Action_1_t1302041398 ** get_address_of_mOnVuMarkDetected_3() { return &___mOnVuMarkDetected_3; }
	inline void set_mOnVuMarkDetected_3(Action_1_t1302041398 * value)
	{
		___mOnVuMarkDetected_3 = value;
		Il2CppCodeGenWriteBarrier((&___mOnVuMarkDetected_3), value);
	}

	inline static int32_t get_offset_of_mOnVuMarkLost_4() { return static_cast<int32_t>(offsetof(VuMarkManager_t2982459596, ___mOnVuMarkLost_4)); }
	inline Action_1_t1302041398 * get_mOnVuMarkLost_4() const { return ___mOnVuMarkLost_4; }
	inline Action_1_t1302041398 ** get_address_of_mOnVuMarkLost_4() { return &___mOnVuMarkLost_4; }
	inline void set_mOnVuMarkLost_4(Action_1_t1302041398 * value)
	{
		___mOnVuMarkLost_4 = value;
		Il2CppCodeGenWriteBarrier((&___mOnVuMarkLost_4), value);
	}

	inline static int32_t get_offset_of_mOnVuMarkBehaviourDetected_5() { return static_cast<int32_t>(offsetof(VuMarkManager_t2982459596, ___mOnVuMarkBehaviourDetected_5)); }
	inline Action_1_t1350698054 * get_mOnVuMarkBehaviourDetected_5() const { return ___mOnVuMarkBehaviourDetected_5; }
	inline Action_1_t1350698054 ** get_address_of_mOnVuMarkBehaviourDetected_5() { return &___mOnVuMarkBehaviourDetected_5; }
	inline void set_mOnVuMarkBehaviourDetected_5(Action_1_t1350698054 * value)
	{
		___mOnVuMarkBehaviourDetected_5 = value;
		Il2CppCodeGenWriteBarrier((&___mOnVuMarkBehaviourDetected_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VUMARKMANAGER_T2982459596_H
#ifndef TRACKERCONFIGURATION_T3072429111_H
#define TRACKERCONFIGURATION_T3072429111_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.VuforiaConfiguration/TrackerConfiguration
struct  TrackerConfiguration_t3072429111  : public RuntimeObject
{
public:
	// System.Boolean Vuforia.VuforiaConfiguration/TrackerConfiguration::autoInitTracker
	bool ___autoInitTracker_0;
	// System.Boolean Vuforia.VuforiaConfiguration/TrackerConfiguration::autoStartTracker
	bool ___autoStartTracker_1;

public:
	inline static int32_t get_offset_of_autoInitTracker_0() { return static_cast<int32_t>(offsetof(TrackerConfiguration_t3072429111, ___autoInitTracker_0)); }
	inline bool get_autoInitTracker_0() const { return ___autoInitTracker_0; }
	inline bool* get_address_of_autoInitTracker_0() { return &___autoInitTracker_0; }
	inline void set_autoInitTracker_0(bool value)
	{
		___autoInitTracker_0 = value;
	}

	inline static int32_t get_offset_of_autoStartTracker_1() { return static_cast<int32_t>(offsetof(TrackerConfiguration_t3072429111, ___autoStartTracker_1)); }
	inline bool get_autoStartTracker_1() const { return ___autoStartTracker_1; }
	inline bool* get_address_of_autoStartTracker_1() { return &___autoStartTracker_1; }
	inline void set_autoStartTracker_1(bool value)
	{
		___autoStartTracker_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRACKERCONFIGURATION_T3072429111_H
#ifndef WEBCAMCONFIGURATION_T1101614731_H
#define WEBCAMCONFIGURATION_T1101614731_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.VuforiaConfiguration/WebCamConfiguration
struct  WebCamConfiguration_t1101614731  : public RuntimeObject
{
public:
	// System.String Vuforia.VuforiaConfiguration/WebCamConfiguration::deviceNameSetInEditor
	String_t* ___deviceNameSetInEditor_0;
	// System.Boolean Vuforia.VuforiaConfiguration/WebCamConfiguration::flipHorizontally
	bool ___flipHorizontally_1;
	// System.Boolean Vuforia.VuforiaConfiguration/WebCamConfiguration::turnOffWebCam
	bool ___turnOffWebCam_2;
	// System.Int32 Vuforia.VuforiaConfiguration/WebCamConfiguration::renderTextureLayer
	int32_t ___renderTextureLayer_3;

public:
	inline static int32_t get_offset_of_deviceNameSetInEditor_0() { return static_cast<int32_t>(offsetof(WebCamConfiguration_t1101614731, ___deviceNameSetInEditor_0)); }
	inline String_t* get_deviceNameSetInEditor_0() const { return ___deviceNameSetInEditor_0; }
	inline String_t** get_address_of_deviceNameSetInEditor_0() { return &___deviceNameSetInEditor_0; }
	inline void set_deviceNameSetInEditor_0(String_t* value)
	{
		___deviceNameSetInEditor_0 = value;
		Il2CppCodeGenWriteBarrier((&___deviceNameSetInEditor_0), value);
	}

	inline static int32_t get_offset_of_flipHorizontally_1() { return static_cast<int32_t>(offsetof(WebCamConfiguration_t1101614731, ___flipHorizontally_1)); }
	inline bool get_flipHorizontally_1() const { return ___flipHorizontally_1; }
	inline bool* get_address_of_flipHorizontally_1() { return &___flipHorizontally_1; }
	inline void set_flipHorizontally_1(bool value)
	{
		___flipHorizontally_1 = value;
	}

	inline static int32_t get_offset_of_turnOffWebCam_2() { return static_cast<int32_t>(offsetof(WebCamConfiguration_t1101614731, ___turnOffWebCam_2)); }
	inline bool get_turnOffWebCam_2() const { return ___turnOffWebCam_2; }
	inline bool* get_address_of_turnOffWebCam_2() { return &___turnOffWebCam_2; }
	inline void set_turnOffWebCam_2(bool value)
	{
		___turnOffWebCam_2 = value;
	}

	inline static int32_t get_offset_of_renderTextureLayer_3() { return static_cast<int32_t>(offsetof(WebCamConfiguration_t1101614731, ___renderTextureLayer_3)); }
	inline int32_t get_renderTextureLayer_3() const { return ___renderTextureLayer_3; }
	inline int32_t* get_address_of_renderTextureLayer_3() { return &___renderTextureLayer_3; }
	inline void set_renderTextureLayer_3(int32_t value)
	{
		___renderTextureLayer_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WEBCAMCONFIGURATION_T1101614731_H
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
#ifndef MATRIX4X4_T1817901843_H
#define MATRIX4X4_T1817901843_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Matrix4x4
struct  Matrix4x4_t1817901843 
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
	inline static int32_t get_offset_of_m00_0() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m00_0)); }
	inline float get_m00_0() const { return ___m00_0; }
	inline float* get_address_of_m00_0() { return &___m00_0; }
	inline void set_m00_0(float value)
	{
		___m00_0 = value;
	}

	inline static int32_t get_offset_of_m10_1() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m10_1)); }
	inline float get_m10_1() const { return ___m10_1; }
	inline float* get_address_of_m10_1() { return &___m10_1; }
	inline void set_m10_1(float value)
	{
		___m10_1 = value;
	}

	inline static int32_t get_offset_of_m20_2() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m20_2)); }
	inline float get_m20_2() const { return ___m20_2; }
	inline float* get_address_of_m20_2() { return &___m20_2; }
	inline void set_m20_2(float value)
	{
		___m20_2 = value;
	}

	inline static int32_t get_offset_of_m30_3() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m30_3)); }
	inline float get_m30_3() const { return ___m30_3; }
	inline float* get_address_of_m30_3() { return &___m30_3; }
	inline void set_m30_3(float value)
	{
		___m30_3 = value;
	}

	inline static int32_t get_offset_of_m01_4() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m01_4)); }
	inline float get_m01_4() const { return ___m01_4; }
	inline float* get_address_of_m01_4() { return &___m01_4; }
	inline void set_m01_4(float value)
	{
		___m01_4 = value;
	}

	inline static int32_t get_offset_of_m11_5() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m11_5)); }
	inline float get_m11_5() const { return ___m11_5; }
	inline float* get_address_of_m11_5() { return &___m11_5; }
	inline void set_m11_5(float value)
	{
		___m11_5 = value;
	}

	inline static int32_t get_offset_of_m21_6() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m21_6)); }
	inline float get_m21_6() const { return ___m21_6; }
	inline float* get_address_of_m21_6() { return &___m21_6; }
	inline void set_m21_6(float value)
	{
		___m21_6 = value;
	}

	inline static int32_t get_offset_of_m31_7() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m31_7)); }
	inline float get_m31_7() const { return ___m31_7; }
	inline float* get_address_of_m31_7() { return &___m31_7; }
	inline void set_m31_7(float value)
	{
		___m31_7 = value;
	}

	inline static int32_t get_offset_of_m02_8() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m02_8)); }
	inline float get_m02_8() const { return ___m02_8; }
	inline float* get_address_of_m02_8() { return &___m02_8; }
	inline void set_m02_8(float value)
	{
		___m02_8 = value;
	}

	inline static int32_t get_offset_of_m12_9() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m12_9)); }
	inline float get_m12_9() const { return ___m12_9; }
	inline float* get_address_of_m12_9() { return &___m12_9; }
	inline void set_m12_9(float value)
	{
		___m12_9 = value;
	}

	inline static int32_t get_offset_of_m22_10() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m22_10)); }
	inline float get_m22_10() const { return ___m22_10; }
	inline float* get_address_of_m22_10() { return &___m22_10; }
	inline void set_m22_10(float value)
	{
		___m22_10 = value;
	}

	inline static int32_t get_offset_of_m32_11() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m32_11)); }
	inline float get_m32_11() const { return ___m32_11; }
	inline float* get_address_of_m32_11() { return &___m32_11; }
	inline void set_m32_11(float value)
	{
		___m32_11 = value;
	}

	inline static int32_t get_offset_of_m03_12() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m03_12)); }
	inline float get_m03_12() const { return ___m03_12; }
	inline float* get_address_of_m03_12() { return &___m03_12; }
	inline void set_m03_12(float value)
	{
		___m03_12 = value;
	}

	inline static int32_t get_offset_of_m13_13() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m13_13)); }
	inline float get_m13_13() const { return ___m13_13; }
	inline float* get_address_of_m13_13() { return &___m13_13; }
	inline void set_m13_13(float value)
	{
		___m13_13 = value;
	}

	inline static int32_t get_offset_of_m23_14() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m23_14)); }
	inline float get_m23_14() const { return ___m23_14; }
	inline float* get_address_of_m23_14() { return &___m23_14; }
	inline void set_m23_14(float value)
	{
		___m23_14 = value;
	}

	inline static int32_t get_offset_of_m33_15() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m33_15)); }
	inline float get_m33_15() const { return ___m33_15; }
	inline float* get_address_of_m33_15() { return &___m33_15; }
	inline void set_m33_15(float value)
	{
		___m33_15 = value;
	}
};

struct Matrix4x4_t1817901843_StaticFields
{
public:
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::zeroMatrix
	Matrix4x4_t1817901843  ___zeroMatrix_16;
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::identityMatrix
	Matrix4x4_t1817901843  ___identityMatrix_17;

public:
	inline static int32_t get_offset_of_zeroMatrix_16() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843_StaticFields, ___zeroMatrix_16)); }
	inline Matrix4x4_t1817901843  get_zeroMatrix_16() const { return ___zeroMatrix_16; }
	inline Matrix4x4_t1817901843 * get_address_of_zeroMatrix_16() { return &___zeroMatrix_16; }
	inline void set_zeroMatrix_16(Matrix4x4_t1817901843  value)
	{
		___zeroMatrix_16 = value;
	}

	inline static int32_t get_offset_of_identityMatrix_17() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843_StaticFields, ___identityMatrix_17)); }
	inline Matrix4x4_t1817901843  get_identityMatrix_17() const { return ___identityMatrix_17; }
	inline Matrix4x4_t1817901843 * get_address_of_identityMatrix_17() { return &___identityMatrix_17; }
	inline void set_identityMatrix_17(Matrix4x4_t1817901843  value)
	{
		___identityMatrix_17 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MATRIX4X4_T1817901843_H
#ifndef QUATERNION_T2301928331_H
#define QUATERNION_T2301928331_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Quaternion
struct  Quaternion_t2301928331 
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
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t2301928331_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t2301928331  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t2301928331  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t2301928331 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t2301928331  value)
	{
		___identityQuaternion_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // QUATERNION_T2301928331_H
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
#ifndef VECTOR2_T2156229523_H
#define VECTOR2_T2156229523_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector2
struct  Vector2_t2156229523 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_t2156229523, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_t2156229523, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_t2156229523_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t2156229523  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t2156229523  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t2156229523  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t2156229523  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t2156229523  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t2156229523  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t2156229523  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t2156229523  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___zeroVector_2)); }
	inline Vector2_t2156229523  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_t2156229523 * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_t2156229523  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___oneVector_3)); }
	inline Vector2_t2156229523  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_t2156229523 * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_t2156229523  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___upVector_4)); }
	inline Vector2_t2156229523  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_t2156229523 * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_t2156229523  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___downVector_5)); }
	inline Vector2_t2156229523  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_t2156229523 * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_t2156229523  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___leftVector_6)); }
	inline Vector2_t2156229523  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_t2156229523 * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_t2156229523  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___rightVector_7)); }
	inline Vector2_t2156229523  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_t2156229523 * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_t2156229523  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_t2156229523  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_t2156229523 * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_t2156229523  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_t2156229523  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_t2156229523 * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_t2156229523  value)
	{
		___negativeInfinityVector_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR2_T2156229523_H
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
#ifndef VECTOR4_T3319028937_H
#define VECTOR4_T3319028937_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector4
struct  Vector4_t3319028937 
{
public:
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector4_t3319028937, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector4_t3319028937, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector4_t3319028937, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}

	inline static int32_t get_offset_of_w_4() { return static_cast<int32_t>(offsetof(Vector4_t3319028937, ___w_4)); }
	inline float get_w_4() const { return ___w_4; }
	inline float* get_address_of_w_4() { return &___w_4; }
	inline void set_w_4(float value)
	{
		___w_4 = value;
	}
};

struct Vector4_t3319028937_StaticFields
{
public:
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_t3319028937  ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_t3319028937  ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_t3319028937  ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_t3319028937  ___negativeInfinityVector_8;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector4_t3319028937_StaticFields, ___zeroVector_5)); }
	inline Vector4_t3319028937  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector4_t3319028937 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector4_t3319028937  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector4_t3319028937_StaticFields, ___oneVector_6)); }
	inline Vector4_t3319028937  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector4_t3319028937 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector4_t3319028937  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_7() { return static_cast<int32_t>(offsetof(Vector4_t3319028937_StaticFields, ___positiveInfinityVector_7)); }
	inline Vector4_t3319028937  get_positiveInfinityVector_7() const { return ___positiveInfinityVector_7; }
	inline Vector4_t3319028937 * get_address_of_positiveInfinityVector_7() { return &___positiveInfinityVector_7; }
	inline void set_positiveInfinityVector_7(Vector4_t3319028937  value)
	{
		___positiveInfinityVector_7 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector4_t3319028937_StaticFields, ___negativeInfinityVector_8)); }
	inline Vector4_t3319028937  get_negativeInfinityVector_8() const { return ___negativeInfinityVector_8; }
	inline Vector4_t3319028937 * get_address_of_negativeInfinityVector_8() { return &___negativeInfinityVector_8; }
	inline void set_negativeInfinityVector_8(Vector4_t3319028937  value)
	{
		___negativeInfinityVector_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR4_T3319028937_H
#ifndef CAMERAFIELDDATA_T4012589513_H
#define CAMERAFIELDDATA_T4012589513_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.CameraDevice/CameraFieldData
struct  CameraFieldData_t4012589513 
{
public:
	// System.String Vuforia.CameraDevice/CameraFieldData::KeyValue
	String_t* ___KeyValue_0;
	// System.Int32 Vuforia.CameraDevice/CameraFieldData::DataType
	int32_t ___DataType_1;
	// System.Int32 Vuforia.CameraDevice/CameraFieldData::Unused
	int32_t ___Unused_2;

public:
	inline static int32_t get_offset_of_KeyValue_0() { return static_cast<int32_t>(offsetof(CameraFieldData_t4012589513, ___KeyValue_0)); }
	inline String_t* get_KeyValue_0() const { return ___KeyValue_0; }
	inline String_t** get_address_of_KeyValue_0() { return &___KeyValue_0; }
	inline void set_KeyValue_0(String_t* value)
	{
		___KeyValue_0 = value;
		Il2CppCodeGenWriteBarrier((&___KeyValue_0), value);
	}

	inline static int32_t get_offset_of_DataType_1() { return static_cast<int32_t>(offsetof(CameraFieldData_t4012589513, ___DataType_1)); }
	inline int32_t get_DataType_1() const { return ___DataType_1; }
	inline int32_t* get_address_of_DataType_1() { return &___DataType_1; }
	inline void set_DataType_1(int32_t value)
	{
		___DataType_1 = value;
	}

	inline static int32_t get_offset_of_Unused_2() { return static_cast<int32_t>(offsetof(CameraFieldData_t4012589513, ___Unused_2)); }
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
struct CameraFieldData_t4012589513_marshaled_pinvoke
{
	char* ___KeyValue_0;
	int32_t ___DataType_1;
	int32_t ___Unused_2;
};
#pragma pack(pop, tp)
// Native definition for COM marshalling of Vuforia.CameraDevice/CameraFieldData
#pragma pack(push, tp, 1)
struct CameraFieldData_t4012589513_marshaled_com
{
	Il2CppChar* ___KeyValue_0;
	int32_t ___DataType_1;
	int32_t ___Unused_2;
};
#pragma pack(pop, tp)
#endif // CAMERAFIELDDATA_T4012589513_H
#ifndef INT64RANGE_T3875541155_H
#define INT64RANGE_T3875541155_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.CameraDevice/Int64Range
struct  Int64Range_t3875541155 
{
public:
	// System.Int64 Vuforia.CameraDevice/Int64Range::fromInt
	int64_t ___fromInt_0;
	// System.Int64 Vuforia.CameraDevice/Int64Range::toInt
	int64_t ___toInt_1;

public:
	inline static int32_t get_offset_of_fromInt_0() { return static_cast<int32_t>(offsetof(Int64Range_t3875541155, ___fromInt_0)); }
	inline int64_t get_fromInt_0() const { return ___fromInt_0; }
	inline int64_t* get_address_of_fromInt_0() { return &___fromInt_0; }
	inline void set_fromInt_0(int64_t value)
	{
		___fromInt_0 = value;
	}

	inline static int32_t get_offset_of_toInt_1() { return static_cast<int32_t>(offsetof(Int64Range_t3875541155, ___toInt_1)); }
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
#endif // INT64RANGE_T3875541155_H
#ifndef VIDEOMODEDATA_T2066817255_H
#define VIDEOMODEDATA_T2066817255_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.CameraDevice/VideoModeData
#pragma pack(push, tp, 1)
struct  VideoModeData_t2066817255 
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
	inline static int32_t get_offset_of_width_0() { return static_cast<int32_t>(offsetof(VideoModeData_t2066817255, ___width_0)); }
	inline int32_t get_width_0() const { return ___width_0; }
	inline int32_t* get_address_of_width_0() { return &___width_0; }
	inline void set_width_0(int32_t value)
	{
		___width_0 = value;
	}

	inline static int32_t get_offset_of_height_1() { return static_cast<int32_t>(offsetof(VideoModeData_t2066817255, ___height_1)); }
	inline int32_t get_height_1() const { return ___height_1; }
	inline int32_t* get_address_of_height_1() { return &___height_1; }
	inline void set_height_1(int32_t value)
	{
		___height_1 = value;
	}

	inline static int32_t get_offset_of_frameRate_2() { return static_cast<int32_t>(offsetof(VideoModeData_t2066817255, ___frameRate_2)); }
	inline float get_frameRate_2() const { return ___frameRate_2; }
	inline float* get_address_of_frameRate_2() { return &___frameRate_2; }
	inline void set_frameRate_2(float value)
	{
		___frameRate_2 = value;
	}

	inline static int32_t get_offset_of_unused_3() { return static_cast<int32_t>(offsetof(VideoModeData_t2066817255, ___unused_3)); }
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
#endif // VIDEOMODEDATA_T2066817255_H
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
#ifndef DEVICETRACKER_T2315692373_H
#define DEVICETRACKER_T2315692373_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.DeviceTracker
struct  DeviceTracker_t2315692373  : public Tracker_t2709586299
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEVICETRACKER_T2315692373_H
#ifndef EYEWEARCALIBRATIONPROFILEMANAGERIMPL_T3765540215_H
#define EYEWEARCALIBRATIONPROFILEMANAGERIMPL_T3765540215_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.EyewearCalibrationProfileManagerImpl
struct  EyewearCalibrationProfileManagerImpl_t3765540215  : public EyewearCalibrationProfileManager_t947793426
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EYEWEARCALIBRATIONPROFILEMANAGERIMPL_T3765540215_H
#ifndef EYEWEARUSERCALIBRATORIMPL_T3089732268_H
#define EYEWEARUSERCALIBRATORIMPL_T3089732268_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.EyewearUserCalibratorImpl
struct  EyewearUserCalibratorImpl_t3089732268  : public EyewearUserCalibrator_t2926839199
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EYEWEARUSERCALIBRATORIMPL_T3089732268_H
#ifndef EYEWEARCALIBRATIONREADINGDATA_T937256773_H
#define EYEWEARCALIBRATIONREADINGDATA_T937256773_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.EyewearUserCalibratorImpl/EyewearCalibrationReadingData
struct  EyewearCalibrationReadingData_t937256773 
{
public:
	// System.Single[] Vuforia.EyewearUserCalibratorImpl/EyewearCalibrationReadingData::pose
	SingleU5BU5D_t1444911251* ___pose_0;
	// System.Single Vuforia.EyewearUserCalibratorImpl/EyewearCalibrationReadingData::scale
	float ___scale_1;
	// System.Single Vuforia.EyewearUserCalibratorImpl/EyewearCalibrationReadingData::centerX
	float ___centerX_2;
	// System.Single Vuforia.EyewearUserCalibratorImpl/EyewearCalibrationReadingData::centerY
	float ___centerY_3;
	// System.Int32 Vuforia.EyewearUserCalibratorImpl/EyewearCalibrationReadingData::type
	int32_t ___type_4;

public:
	inline static int32_t get_offset_of_pose_0() { return static_cast<int32_t>(offsetof(EyewearCalibrationReadingData_t937256773, ___pose_0)); }
	inline SingleU5BU5D_t1444911251* get_pose_0() const { return ___pose_0; }
	inline SingleU5BU5D_t1444911251** get_address_of_pose_0() { return &___pose_0; }
	inline void set_pose_0(SingleU5BU5D_t1444911251* value)
	{
		___pose_0 = value;
		Il2CppCodeGenWriteBarrier((&___pose_0), value);
	}

	inline static int32_t get_offset_of_scale_1() { return static_cast<int32_t>(offsetof(EyewearCalibrationReadingData_t937256773, ___scale_1)); }
	inline float get_scale_1() const { return ___scale_1; }
	inline float* get_address_of_scale_1() { return &___scale_1; }
	inline void set_scale_1(float value)
	{
		___scale_1 = value;
	}

	inline static int32_t get_offset_of_centerX_2() { return static_cast<int32_t>(offsetof(EyewearCalibrationReadingData_t937256773, ___centerX_2)); }
	inline float get_centerX_2() const { return ___centerX_2; }
	inline float* get_address_of_centerX_2() { return &___centerX_2; }
	inline void set_centerX_2(float value)
	{
		___centerX_2 = value;
	}

	inline static int32_t get_offset_of_centerY_3() { return static_cast<int32_t>(offsetof(EyewearCalibrationReadingData_t937256773, ___centerY_3)); }
	inline float get_centerY_3() const { return ___centerY_3; }
	inline float* get_address_of_centerY_3() { return &___centerY_3; }
	inline void set_centerY_3(float value)
	{
		___centerY_3 = value;
	}

	inline static int32_t get_offset_of_type_4() { return static_cast<int32_t>(offsetof(EyewearCalibrationReadingData_t937256773, ___type_4)); }
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
struct EyewearCalibrationReadingData_t937256773_marshaled_pinvoke
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
struct EyewearCalibrationReadingData_t937256773_marshaled_com
{
	float* ___pose_0;
	float ___scale_1;
	float ___centerX_2;
	float ___centerY_3;
	int32_t ___type_4;
};
#pragma pack(pop, tp)
#endif // EYEWEARCALIBRATIONREADINGDATA_T937256773_H
#ifndef FACTORYSETTER_T2184571743_H
#define FACTORYSETTER_T2184571743_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.FactorySetter
struct  FactorySetter_t2184571743  : public Attribute_t861562559
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FACTORYSETTER_T2184571743_H
#ifndef OBJECTTARGETIMPL_T3614635090_H
#define OBJECTTARGETIMPL_T3614635090_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.ObjectTargetImpl
struct  ObjectTargetImpl_t3614635090  : public TrackableImpl_t3595316917
{
public:
	// Vuforia.ITargetSize Vuforia.ObjectTargetImpl::mTargetSizeImpl
	RuntimeObject* ___mTargetSizeImpl_2;

public:
	inline static int32_t get_offset_of_mTargetSizeImpl_2() { return static_cast<int32_t>(offsetof(ObjectTargetImpl_t3614635090, ___mTargetSizeImpl_2)); }
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
#endif // OBJECTTARGETIMPL_T3614635090_H
#ifndef INVALIDPATHEXCEPTION_T1887997809_H
#define INVALIDPATHEXCEPTION_T1887997809_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.PosixPath/InvalidPathException
struct  InvalidPathException_t1887997809  : public Exception_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INVALIDPATHEXCEPTION_T1887997809_H
#ifndef RECTANGLEDATA_T1039179782_H
#define RECTANGLEDATA_T1039179782_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.RectangleData
#pragma pack(push, tp, 1)
struct  RectangleData_t1039179782 
{
public:
	// System.Single Vuforia.RectangleData::leftTopX
	float ___leftTopX_0;
	// System.Single Vuforia.RectangleData::leftTopY
	float ___leftTopY_1;
	// System.Single Vuforia.RectangleData::rightBottomX
	float ___rightBottomX_2;
	// System.Single Vuforia.RectangleData::rightBottomY
	float ___rightBottomY_3;

public:
	inline static int32_t get_offset_of_leftTopX_0() { return static_cast<int32_t>(offsetof(RectangleData_t1039179782, ___leftTopX_0)); }
	inline float get_leftTopX_0() const { return ___leftTopX_0; }
	inline float* get_address_of_leftTopX_0() { return &___leftTopX_0; }
	inline void set_leftTopX_0(float value)
	{
		___leftTopX_0 = value;
	}

	inline static int32_t get_offset_of_leftTopY_1() { return static_cast<int32_t>(offsetof(RectangleData_t1039179782, ___leftTopY_1)); }
	inline float get_leftTopY_1() const { return ___leftTopY_1; }
	inline float* get_address_of_leftTopY_1() { return &___leftTopY_1; }
	inline void set_leftTopY_1(float value)
	{
		___leftTopY_1 = value;
	}

	inline static int32_t get_offset_of_rightBottomX_2() { return static_cast<int32_t>(offsetof(RectangleData_t1039179782, ___rightBottomX_2)); }
	inline float get_rightBottomX_2() const { return ___rightBottomX_2; }
	inline float* get_address_of_rightBottomX_2() { return &___rightBottomX_2; }
	inline void set_rightBottomX_2(float value)
	{
		___rightBottomX_2 = value;
	}

	inline static int32_t get_offset_of_rightBottomY_3() { return static_cast<int32_t>(offsetof(RectangleData_t1039179782, ___rightBottomY_3)); }
	inline float get_rightBottomY_3() const { return ___rightBottomY_3; }
	inline float* get_address_of_rightBottomY_3() { return &___rightBottomY_3; }
	inline void set_rightBottomY_3(float value)
	{
		___rightBottomY_3 = value;
	}
};
#pragma pack(pop, tp)

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RECTANGLEDATA_T1039179782_H
#ifndef ILLUMINATIONDATA_T3332404395_H
#define ILLUMINATIONDATA_T3332404395_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.TrackerData/IlluminationData
#pragma pack(push, tp, 1)
struct  IlluminationData_t3332404395 
{
public:
	// System.Single Vuforia.TrackerData/IlluminationData::ambientIntensity
	float ___ambientIntensity_0;
	// System.Single Vuforia.TrackerData/IlluminationData::ambientColorTemperature
	float ___ambientColorTemperature_1;

public:
	inline static int32_t get_offset_of_ambientIntensity_0() { return static_cast<int32_t>(offsetof(IlluminationData_t3332404395, ___ambientIntensity_0)); }
	inline float get_ambientIntensity_0() const { return ___ambientIntensity_0; }
	inline float* get_address_of_ambientIntensity_0() { return &___ambientIntensity_0; }
	inline void set_ambientIntensity_0(float value)
	{
		___ambientIntensity_0 = value;
	}

	inline static int32_t get_offset_of_ambientColorTemperature_1() { return static_cast<int32_t>(offsetof(IlluminationData_t3332404395, ___ambientColorTemperature_1)); }
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
#endif // ILLUMINATIONDATA_T3332404395_H
#ifndef VIRTUALBUTTONDATA_T1117953748_H
#define VIRTUALBUTTONDATA_T1117953748_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.TrackerData/VirtualButtonData
#pragma pack(push, tp, 1)
struct  VirtualButtonData_t1117953748 
{
public:
	// System.Int32 Vuforia.TrackerData/VirtualButtonData::id
	int32_t ___id_0;
	// System.Int32 Vuforia.TrackerData/VirtualButtonData::isPressed
	int32_t ___isPressed_1;

public:
	inline static int32_t get_offset_of_id_0() { return static_cast<int32_t>(offsetof(VirtualButtonData_t1117953748, ___id_0)); }
	inline int32_t get_id_0() const { return ___id_0; }
	inline int32_t* get_address_of_id_0() { return &___id_0; }
	inline void set_id_0(int32_t value)
	{
		___id_0 = value;
	}

	inline static int32_t get_offset_of_isPressed_1() { return static_cast<int32_t>(offsetof(VirtualButtonData_t1117953748, ___isPressed_1)); }
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
#endif // VIRTUALBUTTONDATA_T1117953748_H
#ifndef SMARTTERRAINCONFIGURATION_T1514074484_H
#define SMARTTERRAINCONFIGURATION_T1514074484_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.VuforiaConfiguration/SmartTerrainConfiguration
struct  SmartTerrainConfiguration_t1514074484  : public TrackerConfiguration_t3072429111
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SMARTTERRAINCONFIGURATION_T1514074484_H
#ifndef TRACKABLEIDPAIR_T4227350457_H
#define TRACKABLEIDPAIR_T4227350457_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.VuforiaManager/TrackableIdPair
struct  TrackableIdPair_t4227350457 
{
public:
	// System.Int32 Vuforia.VuforiaManager/TrackableIdPair::TrackableId
	int32_t ___TrackableId_0;
	// System.Int32 Vuforia.VuforiaManager/TrackableIdPair::ResultId
	int32_t ___ResultId_1;

public:
	inline static int32_t get_offset_of_TrackableId_0() { return static_cast<int32_t>(offsetof(TrackableIdPair_t4227350457, ___TrackableId_0)); }
	inline int32_t get_TrackableId_0() const { return ___TrackableId_0; }
	inline int32_t* get_address_of_TrackableId_0() { return &___TrackableId_0; }
	inline void set_TrackableId_0(int32_t value)
	{
		___TrackableId_0 = value;
	}

	inline static int32_t get_offset_of_ResultId_1() { return static_cast<int32_t>(offsetof(TrackableIdPair_t4227350457, ___ResultId_1)); }
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
#endif // TRACKABLEIDPAIR_T4227350457_H
#ifndef VEC2I_T3527036565_H
#define VEC2I_T3527036565_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.VuforiaRenderer/Vec2I
#pragma pack(push, tp, 1)
struct  Vec2I_t3527036565 
{
public:
	// System.Int32 Vuforia.VuforiaRenderer/Vec2I::x
	int32_t ___x_0;
	// System.Int32 Vuforia.VuforiaRenderer/Vec2I::y
	int32_t ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vec2I_t3527036565, ___x_0)); }
	inline int32_t get_x_0() const { return ___x_0; }
	inline int32_t* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(int32_t value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vec2I_t3527036565, ___y_1)); }
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
#endif // VEC2I_T3527036565_H
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
#ifndef SCREENORIENTATION_T1705519499_H
#define SCREENORIENTATION_T1705519499_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.ScreenOrientation
struct  ScreenOrientation_t1705519499 
{
public:
	// System.Int32 UnityEngine.ScreenOrientation::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ScreenOrientation_t1705519499, ___value___2)); }
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
#endif // SCREENORIENTATION_T1705519499_H
#ifndef PROJECTIONMATRIXDATA_T3894131367_H
#define PROJECTIONMATRIXDATA_T3894131367_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.BackgroundPlaneBehaviour/ProjectionMatrixData
struct  ProjectionMatrixData_t3894131367 
{
public:
	// UnityEngine.Matrix4x4 Vuforia.BackgroundPlaneBehaviour/ProjectionMatrixData::ProjectionMatrix
	Matrix4x4_t1817901843  ___ProjectionMatrix_0;
	// UnityEngine.Matrix4x4 Vuforia.BackgroundPlaneBehaviour/ProjectionMatrixData::InverseMatrix
	Matrix4x4_t1817901843  ___InverseMatrix_1;
	// System.Single Vuforia.BackgroundPlaneBehaviour/ProjectionMatrixData::HorizontalFoV
	float ___HorizontalFoV_2;
	// System.Single Vuforia.BackgroundPlaneBehaviour/ProjectionMatrixData::VerticalFoV
	float ___VerticalFoV_3;
	// UnityEngine.Vector3 Vuforia.BackgroundPlaneBehaviour/ProjectionMatrixData::CenterEyeRayFrom
	Vector3_t3722313464  ___CenterEyeRayFrom_4;
	// UnityEngine.Vector3 Vuforia.BackgroundPlaneBehaviour/ProjectionMatrixData::CenterEyeRayTo
	Vector3_t3722313464  ___CenterEyeRayTo_5;
	// System.Single Vuforia.BackgroundPlaneBehaviour/ProjectionMatrixData::MaxDepth
	float ___MaxDepth_6;

public:
	inline static int32_t get_offset_of_ProjectionMatrix_0() { return static_cast<int32_t>(offsetof(ProjectionMatrixData_t3894131367, ___ProjectionMatrix_0)); }
	inline Matrix4x4_t1817901843  get_ProjectionMatrix_0() const { return ___ProjectionMatrix_0; }
	inline Matrix4x4_t1817901843 * get_address_of_ProjectionMatrix_0() { return &___ProjectionMatrix_0; }
	inline void set_ProjectionMatrix_0(Matrix4x4_t1817901843  value)
	{
		___ProjectionMatrix_0 = value;
	}

	inline static int32_t get_offset_of_InverseMatrix_1() { return static_cast<int32_t>(offsetof(ProjectionMatrixData_t3894131367, ___InverseMatrix_1)); }
	inline Matrix4x4_t1817901843  get_InverseMatrix_1() const { return ___InverseMatrix_1; }
	inline Matrix4x4_t1817901843 * get_address_of_InverseMatrix_1() { return &___InverseMatrix_1; }
	inline void set_InverseMatrix_1(Matrix4x4_t1817901843  value)
	{
		___InverseMatrix_1 = value;
	}

	inline static int32_t get_offset_of_HorizontalFoV_2() { return static_cast<int32_t>(offsetof(ProjectionMatrixData_t3894131367, ___HorizontalFoV_2)); }
	inline float get_HorizontalFoV_2() const { return ___HorizontalFoV_2; }
	inline float* get_address_of_HorizontalFoV_2() { return &___HorizontalFoV_2; }
	inline void set_HorizontalFoV_2(float value)
	{
		___HorizontalFoV_2 = value;
	}

	inline static int32_t get_offset_of_VerticalFoV_3() { return static_cast<int32_t>(offsetof(ProjectionMatrixData_t3894131367, ___VerticalFoV_3)); }
	inline float get_VerticalFoV_3() const { return ___VerticalFoV_3; }
	inline float* get_address_of_VerticalFoV_3() { return &___VerticalFoV_3; }
	inline void set_VerticalFoV_3(float value)
	{
		___VerticalFoV_3 = value;
	}

	inline static int32_t get_offset_of_CenterEyeRayFrom_4() { return static_cast<int32_t>(offsetof(ProjectionMatrixData_t3894131367, ___CenterEyeRayFrom_4)); }
	inline Vector3_t3722313464  get_CenterEyeRayFrom_4() const { return ___CenterEyeRayFrom_4; }
	inline Vector3_t3722313464 * get_address_of_CenterEyeRayFrom_4() { return &___CenterEyeRayFrom_4; }
	inline void set_CenterEyeRayFrom_4(Vector3_t3722313464  value)
	{
		___CenterEyeRayFrom_4 = value;
	}

	inline static int32_t get_offset_of_CenterEyeRayTo_5() { return static_cast<int32_t>(offsetof(ProjectionMatrixData_t3894131367, ___CenterEyeRayTo_5)); }
	inline Vector3_t3722313464  get_CenterEyeRayTo_5() const { return ___CenterEyeRayTo_5; }
	inline Vector3_t3722313464 * get_address_of_CenterEyeRayTo_5() { return &___CenterEyeRayTo_5; }
	inline void set_CenterEyeRayTo_5(Vector3_t3722313464  value)
	{
		___CenterEyeRayTo_5 = value;
	}

	inline static int32_t get_offset_of_MaxDepth_6() { return static_cast<int32_t>(offsetof(ProjectionMatrixData_t3894131367, ___MaxDepth_6)); }
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
#endif // PROJECTIONMATRIXDATA_T3894131367_H
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
#ifndef DATATYPE_T1354848506_H
#define DATATYPE_T1354848506_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.CameraDevice/CameraField/DataType
struct  DataType_t1354848506 
{
public:
	// System.Int32 Vuforia.CameraDevice/CameraField/DataType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DataType_t1354848506, ___value___2)); }
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
#endif // DATATYPE_T1354848506_H
#ifndef FOCUSMODE_T3379290461_H
#define FOCUSMODE_T3379290461_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.CameraDevice/FocusMode
struct  FocusMode_t3379290461 
{
public:
	// System.Int32 Vuforia.CameraDevice/FocusMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FocusMode_t3379290461, ___value___2)); }
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
#endif // FOCUSMODE_T3379290461_H
#ifndef STORAGETYPE_T3460620509_H
#define STORAGETYPE_T3460620509_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.DataSet/StorageType
struct  StorageType_t3460620509 
{
public:
	// System.Int32 Vuforia.DataSet/StorageType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(StorageType_t3460620509, ___value___2)); }
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
#endif // STORAGETYPE_T3460620509_H
#ifndef DATASETOBJECTTARGETIMPL_T2835536742_H
#define DATASETOBJECTTARGETIMPL_T2835536742_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.DataSetObjectTargetImpl
struct  DataSetObjectTargetImpl_t2835536742  : public ObjectTargetImpl_t3614635090
{
public:
	// Vuforia.DataSet Vuforia.DataSetObjectTargetImpl::mDataSet
	DataSet_t3286034874 * ___mDataSet_3;

public:
	inline static int32_t get_offset_of_mDataSet_3() { return static_cast<int32_t>(offsetof(DataSetObjectTargetImpl_t2835536742, ___mDataSet_3)); }
	inline DataSet_t3286034874 * get_mDataSet_3() const { return ___mDataSet_3; }
	inline DataSet_t3286034874 ** get_address_of_mDataSet_3() { return &___mDataSet_3; }
	inline void set_mDataSet_3(DataSet_t3286034874 * value)
	{
		___mDataSet_3 = value;
		Il2CppCodeGenWriteBarrier((&___mDataSet_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATASETOBJECTTARGETIMPL_T2835536742_H
#ifndef EYEDATA_T2079809150_H
#define EYEDATA_T2079809150_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.DedicatedEyewearCameraConfiguration/EyeData
struct  EyeData_t2079809150 
{
public:
	// UnityEngine.Vector3 Vuforia.DedicatedEyewearCameraConfiguration/EyeData::OffsetPosition
	Vector3_t3722313464  ___OffsetPosition_0;
	// UnityEngine.Quaternion Vuforia.DedicatedEyewearCameraConfiguration/EyeData::OffsetRotation
	Quaternion_t2301928331  ___OffsetRotation_1;
	// UnityEngine.Matrix4x4 Vuforia.DedicatedEyewearCameraConfiguration/EyeData::ProjectionMatrix
	Matrix4x4_t1817901843  ___ProjectionMatrix_2;

public:
	inline static int32_t get_offset_of_OffsetPosition_0() { return static_cast<int32_t>(offsetof(EyeData_t2079809150, ___OffsetPosition_0)); }
	inline Vector3_t3722313464  get_OffsetPosition_0() const { return ___OffsetPosition_0; }
	inline Vector3_t3722313464 * get_address_of_OffsetPosition_0() { return &___OffsetPosition_0; }
	inline void set_OffsetPosition_0(Vector3_t3722313464  value)
	{
		___OffsetPosition_0 = value;
	}

	inline static int32_t get_offset_of_OffsetRotation_1() { return static_cast<int32_t>(offsetof(EyeData_t2079809150, ___OffsetRotation_1)); }
	inline Quaternion_t2301928331  get_OffsetRotation_1() const { return ___OffsetRotation_1; }
	inline Quaternion_t2301928331 * get_address_of_OffsetRotation_1() { return &___OffsetRotation_1; }
	inline void set_OffsetRotation_1(Quaternion_t2301928331  value)
	{
		___OffsetRotation_1 = value;
	}

	inline static int32_t get_offset_of_ProjectionMatrix_2() { return static_cast<int32_t>(offsetof(EyeData_t2079809150, ___ProjectionMatrix_2)); }
	inline Matrix4x4_t1817901843  get_ProjectionMatrix_2() const { return ___ProjectionMatrix_2; }
	inline Matrix4x4_t1817901843 * get_address_of_ProjectionMatrix_2() { return &___ProjectionMatrix_2; }
	inline void set_ProjectionMatrix_2(Matrix4x4_t1817901843  value)
	{
		___ProjectionMatrix_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EYEDATA_T2079809150_H
#ifndef MODE_T3830573374_H
#define MODE_T3830573374_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.Device/Mode
struct  Mode_t3830573374 
{
public:
	// System.Int32 Vuforia.Device/Mode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Mode_t3830573374, ___value___2)); }
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
#endif // MODE_T3830573374_H
#ifndef TRACKING_MODE_T4048578679_H
#define TRACKING_MODE_T4048578679_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.DeviceTracker/TRACKING_MODE
struct  TRACKING_MODE_t4048578679 
{
public:
	// System.Int32 Vuforia.DeviceTracker/TRACKING_MODE::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TRACKING_MODE_t4048578679, ___value___2)); }
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
#endif // TRACKING_MODE_T4048578679_H
#ifndef EYEWEARTYPE_T2277580470_H
#define EYEWEARTYPE_T2277580470_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.DigitalEyewearARController/EyewearType
struct  EyewearType_t2277580470 
{
public:
	// System.Int32 Vuforia.DigitalEyewearARController/EyewearType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(EyewearType_t2277580470, ___value___2)); }
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
#endif // EYEWEARTYPE_T2277580470_H
#ifndef SEETHROUGHCONFIGURATION_T568665021_H
#define SEETHROUGHCONFIGURATION_T568665021_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.DigitalEyewearARController/SeeThroughConfiguration
struct  SeeThroughConfiguration_t568665021 
{
public:
	// System.Int32 Vuforia.DigitalEyewearARController/SeeThroughConfiguration::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SeeThroughConfiguration_t568665021, ___value___2)); }
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
#endif // SEETHROUGHCONFIGURATION_T568665021_H
#ifndef STEREOFRAMEWORK_T3144873991_H
#define STEREOFRAMEWORK_T3144873991_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.DigitalEyewearARController/StereoFramework
struct  StereoFramework_t3144873991 
{
public:
	// System.Int32 Vuforia.DigitalEyewearARController/StereoFramework::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(StereoFramework_t3144873991, ___value___2)); }
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
#endif // STEREOFRAMEWORK_T3144873991_H
#ifndef DISABLEDSETTARGETSIZE_T3520378128_H
#define DISABLEDSETTARGETSIZE_T3520378128_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.DisabledSetTargetSize
struct  DisabledSetTargetSize_t3520378128  : public RuntimeObject
{
public:
	// UnityEngine.Vector3 Vuforia.DisabledSetTargetSize::mSize
	Vector3_t3722313464  ___mSize_0;

public:
	inline static int32_t get_offset_of_mSize_0() { return static_cast<int32_t>(offsetof(DisabledSetTargetSize_t3520378128, ___mSize_0)); }
	inline Vector3_t3722313464  get_mSize_0() const { return ___mSize_0; }
	inline Vector3_t3722313464 * get_address_of_mSize_0() { return &___mSize_0; }
	inline void set_mSize_0(Vector3_t3722313464  value)
	{
		___mSize_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DISABLEDSETTARGETSIZE_T3520378128_H
#ifndef FUSIONPROVIDERTYPE_T4010899297_H
#define FUSIONPROVIDERTYPE_T4010899297_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.FusionProviderType
struct  FusionProviderType_t4010899297 
{
public:
	// System.Int32 Vuforia.FusionProviderType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FusionProviderType_t4010899297, ___value___2)); }
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
#endif // FUSIONPROVIDERTYPE_T4010899297_H
#ifndef CLIPPING_MODE_T2655398006_H
#define CLIPPING_MODE_T2655398006_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.HideExcessAreaUtility/CLIPPING_MODE
struct  CLIPPING_MODE_t2655398006 
{
public:
	// System.Int32 Vuforia.HideExcessAreaUtility/CLIPPING_MODE::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CLIPPING_MODE_t2655398006, ___value___2)); }
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
#endif // CLIPPING_MODE_T2655398006_H
#ifndef INSTANCEIDTYPE_T420283664_H
#define INSTANCEIDTYPE_T420283664_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.InstanceIdType
struct  InstanceIdType_t420283664 
{
public:
	// System.Int32 Vuforia.InstanceIdType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(InstanceIdType_t420283664, ___value___2)); }
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
#endif // INSTANCEIDTYPE_T420283664_H
#ifndef LATELATCHINGMANAGER_T3198550161_H
#define LATELATCHINGMANAGER_T3198550161_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.LateLatchingManager
struct  LateLatchingManager_t3198550161  : public RuntimeObject
{
public:
	// System.Boolean Vuforia.LateLatchingManager::mInitialized
	bool ___mInitialized_0;
	// System.Boolean Vuforia.LateLatchingManager::mEnabled
	bool ___mEnabled_1;
	// System.Boolean Vuforia.LateLatchingManager::mUpdated
	bool ___mUpdated_2;
	// UnityEngine.Vector3 Vuforia.LateLatchingManager::mCachedPositionalOffset
	Vector3_t3722313464  ___mCachedPositionalOffset_3;
	// UnityEngine.Quaternion Vuforia.LateLatchingManager::mCachedRotationalOffset
	Quaternion_t2301928331  ___mCachedRotationalOffset_4;
	// Vuforia.TrackerData/TrackableResultData[] Vuforia.LateLatchingManager::mCachedTrackableResultDataArray
	TrackableResultDataU5BU5D_t4273811049* ___mCachedTrackableResultDataArray_5;
	// Vuforia.TrackerData/VuMarkTargetResultData[] Vuforia.LateLatchingManager::mCachedVuMarkResultDataArray
	VuMarkTargetResultDataU5BU5D_t2157423781* ___mCachedVuMarkResultDataArray_6;
	// Vuforia.VuforiaManager/TrackableIdPair Vuforia.LateLatchingManager::mCachedOriginTrackableID
	TrackableIdPair_t4227350457  ___mCachedOriginTrackableID_7;
	// System.Int32 Vuforia.LateLatchingManager::mCachedFrameIndex
	int32_t ___mCachedFrameIndex_8;

public:
	inline static int32_t get_offset_of_mInitialized_0() { return static_cast<int32_t>(offsetof(LateLatchingManager_t3198550161, ___mInitialized_0)); }
	inline bool get_mInitialized_0() const { return ___mInitialized_0; }
	inline bool* get_address_of_mInitialized_0() { return &___mInitialized_0; }
	inline void set_mInitialized_0(bool value)
	{
		___mInitialized_0 = value;
	}

	inline static int32_t get_offset_of_mEnabled_1() { return static_cast<int32_t>(offsetof(LateLatchingManager_t3198550161, ___mEnabled_1)); }
	inline bool get_mEnabled_1() const { return ___mEnabled_1; }
	inline bool* get_address_of_mEnabled_1() { return &___mEnabled_1; }
	inline void set_mEnabled_1(bool value)
	{
		___mEnabled_1 = value;
	}

	inline static int32_t get_offset_of_mUpdated_2() { return static_cast<int32_t>(offsetof(LateLatchingManager_t3198550161, ___mUpdated_2)); }
	inline bool get_mUpdated_2() const { return ___mUpdated_2; }
	inline bool* get_address_of_mUpdated_2() { return &___mUpdated_2; }
	inline void set_mUpdated_2(bool value)
	{
		___mUpdated_2 = value;
	}

	inline static int32_t get_offset_of_mCachedPositionalOffset_3() { return static_cast<int32_t>(offsetof(LateLatchingManager_t3198550161, ___mCachedPositionalOffset_3)); }
	inline Vector3_t3722313464  get_mCachedPositionalOffset_3() const { return ___mCachedPositionalOffset_3; }
	inline Vector3_t3722313464 * get_address_of_mCachedPositionalOffset_3() { return &___mCachedPositionalOffset_3; }
	inline void set_mCachedPositionalOffset_3(Vector3_t3722313464  value)
	{
		___mCachedPositionalOffset_3 = value;
	}

	inline static int32_t get_offset_of_mCachedRotationalOffset_4() { return static_cast<int32_t>(offsetof(LateLatchingManager_t3198550161, ___mCachedRotationalOffset_4)); }
	inline Quaternion_t2301928331  get_mCachedRotationalOffset_4() const { return ___mCachedRotationalOffset_4; }
	inline Quaternion_t2301928331 * get_address_of_mCachedRotationalOffset_4() { return &___mCachedRotationalOffset_4; }
	inline void set_mCachedRotationalOffset_4(Quaternion_t2301928331  value)
	{
		___mCachedRotationalOffset_4 = value;
	}

	inline static int32_t get_offset_of_mCachedTrackableResultDataArray_5() { return static_cast<int32_t>(offsetof(LateLatchingManager_t3198550161, ___mCachedTrackableResultDataArray_5)); }
	inline TrackableResultDataU5BU5D_t4273811049* get_mCachedTrackableResultDataArray_5() const { return ___mCachedTrackableResultDataArray_5; }
	inline TrackableResultDataU5BU5D_t4273811049** get_address_of_mCachedTrackableResultDataArray_5() { return &___mCachedTrackableResultDataArray_5; }
	inline void set_mCachedTrackableResultDataArray_5(TrackableResultDataU5BU5D_t4273811049* value)
	{
		___mCachedTrackableResultDataArray_5 = value;
		Il2CppCodeGenWriteBarrier((&___mCachedTrackableResultDataArray_5), value);
	}

	inline static int32_t get_offset_of_mCachedVuMarkResultDataArray_6() { return static_cast<int32_t>(offsetof(LateLatchingManager_t3198550161, ___mCachedVuMarkResultDataArray_6)); }
	inline VuMarkTargetResultDataU5BU5D_t2157423781* get_mCachedVuMarkResultDataArray_6() const { return ___mCachedVuMarkResultDataArray_6; }
	inline VuMarkTargetResultDataU5BU5D_t2157423781** get_address_of_mCachedVuMarkResultDataArray_6() { return &___mCachedVuMarkResultDataArray_6; }
	inline void set_mCachedVuMarkResultDataArray_6(VuMarkTargetResultDataU5BU5D_t2157423781* value)
	{
		___mCachedVuMarkResultDataArray_6 = value;
		Il2CppCodeGenWriteBarrier((&___mCachedVuMarkResultDataArray_6), value);
	}

	inline static int32_t get_offset_of_mCachedOriginTrackableID_7() { return static_cast<int32_t>(offsetof(LateLatchingManager_t3198550161, ___mCachedOriginTrackableID_7)); }
	inline TrackableIdPair_t4227350457  get_mCachedOriginTrackableID_7() const { return ___mCachedOriginTrackableID_7; }
	inline TrackableIdPair_t4227350457 * get_address_of_mCachedOriginTrackableID_7() { return &___mCachedOriginTrackableID_7; }
	inline void set_mCachedOriginTrackableID_7(TrackableIdPair_t4227350457  value)
	{
		___mCachedOriginTrackableID_7 = value;
	}

	inline static int32_t get_offset_of_mCachedFrameIndex_8() { return static_cast<int32_t>(offsetof(LateLatchingManager_t3198550161, ___mCachedFrameIndex_8)); }
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
#endif // LATELATCHINGMANAGER_T3198550161_H
#ifndef MODE_T2694983447_H
#define MODE_T2694983447_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.MixedRealityController/Mode
struct  Mode_t2694983447 
{
public:
	// System.Int32 Vuforia.MixedRealityController/Mode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Mode_t2694983447, ___value___2)); }
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
#endif // MODE_T2694983447_H
#ifndef OBJECTTARGETDATA_T1243619827_H
#define OBJECTTARGETDATA_T1243619827_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.ObjectTargetData
#pragma pack(push, tp, 1)
struct  ObjectTargetData_t1243619827 
{
public:
	// System.Int32 Vuforia.ObjectTargetData::id
	int32_t ___id_0;
	// UnityEngine.Vector3 Vuforia.ObjectTargetData::size
	Vector3_t3722313464  ___size_1;

public:
	inline static int32_t get_offset_of_id_0() { return static_cast<int32_t>(offsetof(ObjectTargetData_t1243619827, ___id_0)); }
	inline int32_t get_id_0() const { return ___id_0; }
	inline int32_t* get_address_of_id_0() { return &___id_0; }
	inline void set_id_0(int32_t value)
	{
		___id_0 = value;
	}

	inline static int32_t get_offset_of_size_1() { return static_cast<int32_t>(offsetof(ObjectTargetData_t1243619827, ___size_1)); }
	inline Vector3_t3722313464  get_size_1() const { return ___size_1; }
	inline Vector3_t3722313464 * get_address_of_size_1() { return &___size_1; }
	inline void set_size_1(Vector3_t3722313464  value)
	{
		___size_1 = value;
	}
};
#pragma pack(pop, tp)

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OBJECTTARGETDATA_T1243619827_H
#ifndef ROTATIONALDEVICETRACKER_T2847210804_H
#define ROTATIONALDEVICETRACKER_T2847210804_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.RotationalDeviceTracker
struct  RotationalDeviceTracker_t2847210804  : public DeviceTracker_t2315692373
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ROTATIONALDEVICETRACKER_T2847210804_H
#ifndef MODEL_CORRECTION_MODE_T1953038946_H
#define MODEL_CORRECTION_MODE_T1953038946_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.RotationalDeviceTracker/MODEL_CORRECTION_MODE
struct  MODEL_CORRECTION_MODE_t1953038946 
{
public:
	// System.Int32 Vuforia.RotationalDeviceTracker/MODEL_CORRECTION_MODE::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(MODEL_CORRECTION_MODE_t1953038946, ___value___2)); }
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
#endif // MODEL_CORRECTION_MODE_T1953038946_H
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
#ifndef STATUSINFO_T1633251416_H
#define STATUSINFO_T1633251416_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.TrackableBehaviour/StatusInfo
struct  StatusInfo_t1633251416 
{
public:
	// System.Int32 Vuforia.TrackableBehaviour/StatusInfo::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(StatusInfo_t1633251416, ___value___2)); }
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
#endif // STATUSINFO_T1633251416_H
#ifndef FRAMESTATE_T2717258284_H
#define FRAMESTATE_T2717258284_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.TrackerData/FrameState
#pragma pack(push, tp, 1)
struct  FrameState_t2717258284 
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
	Vector4_t3319028937  ___minCameraCalibration_12;

public:
	inline static int32_t get_offset_of_trackableDataArray_0() { return static_cast<int32_t>(offsetof(FrameState_t2717258284, ___trackableDataArray_0)); }
	inline intptr_t get_trackableDataArray_0() const { return ___trackableDataArray_0; }
	inline intptr_t* get_address_of_trackableDataArray_0() { return &___trackableDataArray_0; }
	inline void set_trackableDataArray_0(intptr_t value)
	{
		___trackableDataArray_0 = value;
	}

	inline static int32_t get_offset_of_vbDataArray_1() { return static_cast<int32_t>(offsetof(FrameState_t2717258284, ___vbDataArray_1)); }
	inline intptr_t get_vbDataArray_1() const { return ___vbDataArray_1; }
	inline intptr_t* get_address_of_vbDataArray_1() { return &___vbDataArray_1; }
	inline void set_vbDataArray_1(intptr_t value)
	{
		___vbDataArray_1 = value;
	}

	inline static int32_t get_offset_of_vuMarkResultArray_2() { return static_cast<int32_t>(offsetof(FrameState_t2717258284, ___vuMarkResultArray_2)); }
	inline intptr_t get_vuMarkResultArray_2() const { return ___vuMarkResultArray_2; }
	inline intptr_t* get_address_of_vuMarkResultArray_2() { return &___vuMarkResultArray_2; }
	inline void set_vuMarkResultArray_2(intptr_t value)
	{
		___vuMarkResultArray_2 = value;
	}

	inline static int32_t get_offset_of_newVuMarkDataArray_3() { return static_cast<int32_t>(offsetof(FrameState_t2717258284, ___newVuMarkDataArray_3)); }
	inline intptr_t get_newVuMarkDataArray_3() const { return ___newVuMarkDataArray_3; }
	inline intptr_t* get_address_of_newVuMarkDataArray_3() { return &___newVuMarkDataArray_3; }
	inline void set_newVuMarkDataArray_3(intptr_t value)
	{
		___newVuMarkDataArray_3 = value;
	}

	inline static int32_t get_offset_of_illuminationData_4() { return static_cast<int32_t>(offsetof(FrameState_t2717258284, ___illuminationData_4)); }
	inline intptr_t get_illuminationData_4() const { return ___illuminationData_4; }
	inline intptr_t* get_address_of_illuminationData_4() { return &___illuminationData_4; }
	inline void set_illuminationData_4(intptr_t value)
	{
		___illuminationData_4 = value;
	}

	inline static int32_t get_offset_of_numTrackableResults_5() { return static_cast<int32_t>(offsetof(FrameState_t2717258284, ___numTrackableResults_5)); }
	inline int32_t get_numTrackableResults_5() const { return ___numTrackableResults_5; }
	inline int32_t* get_address_of_numTrackableResults_5() { return &___numTrackableResults_5; }
	inline void set_numTrackableResults_5(int32_t value)
	{
		___numTrackableResults_5 = value;
	}

	inline static int32_t get_offset_of_numVirtualButtonResults_6() { return static_cast<int32_t>(offsetof(FrameState_t2717258284, ___numVirtualButtonResults_6)); }
	inline int32_t get_numVirtualButtonResults_6() const { return ___numVirtualButtonResults_6; }
	inline int32_t* get_address_of_numVirtualButtonResults_6() { return &___numVirtualButtonResults_6; }
	inline void set_numVirtualButtonResults_6(int32_t value)
	{
		___numVirtualButtonResults_6 = value;
	}

	inline static int32_t get_offset_of_frameIndex_7() { return static_cast<int32_t>(offsetof(FrameState_t2717258284, ___frameIndex_7)); }
	inline int32_t get_frameIndex_7() const { return ___frameIndex_7; }
	inline int32_t* get_address_of_frameIndex_7() { return &___frameIndex_7; }
	inline void set_frameIndex_7(int32_t value)
	{
		___frameIndex_7 = value;
	}

	inline static int32_t get_offset_of_numVuMarkResults_8() { return static_cast<int32_t>(offsetof(FrameState_t2717258284, ___numVuMarkResults_8)); }
	inline int32_t get_numVuMarkResults_8() const { return ___numVuMarkResults_8; }
	inline int32_t* get_address_of_numVuMarkResults_8() { return &___numVuMarkResults_8; }
	inline void set_numVuMarkResults_8(int32_t value)
	{
		___numVuMarkResults_8 = value;
	}

	inline static int32_t get_offset_of_numNewVuMarks_9() { return static_cast<int32_t>(offsetof(FrameState_t2717258284, ___numNewVuMarks_9)); }
	inline int32_t get_numNewVuMarks_9() const { return ___numNewVuMarks_9; }
	inline int32_t* get_address_of_numNewVuMarks_9() { return &___numNewVuMarks_9; }
	inline void set_numNewVuMarks_9(int32_t value)
	{
		___numNewVuMarks_9 = value;
	}

	inline static int32_t get_offset_of_deviceTrackableId_10() { return static_cast<int32_t>(offsetof(FrameState_t2717258284, ___deviceTrackableId_10)); }
	inline int32_t get_deviceTrackableId_10() const { return ___deviceTrackableId_10; }
	inline int32_t* get_address_of_deviceTrackableId_10() { return &___deviceTrackableId_10; }
	inline void set_deviceTrackableId_10(int32_t value)
	{
		___deviceTrackableId_10 = value;
	}

	inline static int32_t get_offset_of_deviceTrackableStatusInfo_11() { return static_cast<int32_t>(offsetof(FrameState_t2717258284, ___deviceTrackableStatusInfo_11)); }
	inline int32_t get_deviceTrackableStatusInfo_11() const { return ___deviceTrackableStatusInfo_11; }
	inline int32_t* get_address_of_deviceTrackableStatusInfo_11() { return &___deviceTrackableStatusInfo_11; }
	inline void set_deviceTrackableStatusInfo_11(int32_t value)
	{
		___deviceTrackableStatusInfo_11 = value;
	}

	inline static int32_t get_offset_of_minCameraCalibration_12() { return static_cast<int32_t>(offsetof(FrameState_t2717258284, ___minCameraCalibration_12)); }
	inline Vector4_t3319028937  get_minCameraCalibration_12() const { return ___minCameraCalibration_12; }
	inline Vector4_t3319028937 * get_address_of_minCameraCalibration_12() { return &___minCameraCalibration_12; }
	inline void set_minCameraCalibration_12(Vector4_t3319028937  value)
	{
		___minCameraCalibration_12 = value;
	}
};
#pragma pack(pop, tp)

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FRAMESTATE_T2717258284_H
#ifndef IMAGEHEADERDATA_T3550119865_H
#define IMAGEHEADERDATA_T3550119865_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.TrackerData/ImageHeaderData
#pragma pack(push, tp, 1)
struct  ImageHeaderData_t3550119865 
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
	inline static int32_t get_offset_of_data_0() { return static_cast<int32_t>(offsetof(ImageHeaderData_t3550119865, ___data_0)); }
	inline intptr_t get_data_0() const { return ___data_0; }
	inline intptr_t* get_address_of_data_0() { return &___data_0; }
	inline void set_data_0(intptr_t value)
	{
		___data_0 = value;
	}

	inline static int32_t get_offset_of_width_1() { return static_cast<int32_t>(offsetof(ImageHeaderData_t3550119865, ___width_1)); }
	inline int32_t get_width_1() const { return ___width_1; }
	inline int32_t* get_address_of_width_1() { return &___width_1; }
	inline void set_width_1(int32_t value)
	{
		___width_1 = value;
	}

	inline static int32_t get_offset_of_height_2() { return static_cast<int32_t>(offsetof(ImageHeaderData_t3550119865, ___height_2)); }
	inline int32_t get_height_2() const { return ___height_2; }
	inline int32_t* get_address_of_height_2() { return &___height_2; }
	inline void set_height_2(int32_t value)
	{
		___height_2 = value;
	}

	inline static int32_t get_offset_of_stride_3() { return static_cast<int32_t>(offsetof(ImageHeaderData_t3550119865, ___stride_3)); }
	inline int32_t get_stride_3() const { return ___stride_3; }
	inline int32_t* get_address_of_stride_3() { return &___stride_3; }
	inline void set_stride_3(int32_t value)
	{
		___stride_3 = value;
	}

	inline static int32_t get_offset_of_bufferWidth_4() { return static_cast<int32_t>(offsetof(ImageHeaderData_t3550119865, ___bufferWidth_4)); }
	inline int32_t get_bufferWidth_4() const { return ___bufferWidth_4; }
	inline int32_t* get_address_of_bufferWidth_4() { return &___bufferWidth_4; }
	inline void set_bufferWidth_4(int32_t value)
	{
		___bufferWidth_4 = value;
	}

	inline static int32_t get_offset_of_bufferHeight_5() { return static_cast<int32_t>(offsetof(ImageHeaderData_t3550119865, ___bufferHeight_5)); }
	inline int32_t get_bufferHeight_5() const { return ___bufferHeight_5; }
	inline int32_t* get_address_of_bufferHeight_5() { return &___bufferHeight_5; }
	inline void set_bufferHeight_5(int32_t value)
	{
		___bufferHeight_5 = value;
	}

	inline static int32_t get_offset_of_format_6() { return static_cast<int32_t>(offsetof(ImageHeaderData_t3550119865, ___format_6)); }
	inline int32_t get_format_6() const { return ___format_6; }
	inline int32_t* get_address_of_format_6() { return &___format_6; }
	inline void set_format_6(int32_t value)
	{
		___format_6 = value;
	}

	inline static int32_t get_offset_of_reallocate_7() { return static_cast<int32_t>(offsetof(ImageHeaderData_t3550119865, ___reallocate_7)); }
	inline int32_t get_reallocate_7() const { return ___reallocate_7; }
	inline int32_t* get_address_of_reallocate_7() { return &___reallocate_7; }
	inline void set_reallocate_7(int32_t value)
	{
		___reallocate_7 = value;
	}

	inline static int32_t get_offset_of_updated_8() { return static_cast<int32_t>(offsetof(ImageHeaderData_t3550119865, ___updated_8)); }
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
#endif // IMAGEHEADERDATA_T3550119865_H
#ifndef INSTANCEIDDATA_T3520832738_H
#define INSTANCEIDDATA_T3520832738_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.TrackerData/InstanceIdData
#pragma pack(push, tp, 1)
struct  InstanceIdData_t3520832738 
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
	inline static int32_t get_offset_of_numericValue_0() { return static_cast<int32_t>(offsetof(InstanceIdData_t3520832738, ___numericValue_0)); }
	inline uint64_t get_numericValue_0() const { return ___numericValue_0; }
	inline uint64_t* get_address_of_numericValue_0() { return &___numericValue_0; }
	inline void set_numericValue_0(uint64_t value)
	{
		___numericValue_0 = value;
	}

	inline static int32_t get_offset_of_buffer_1() { return static_cast<int32_t>(offsetof(InstanceIdData_t3520832738, ___buffer_1)); }
	inline intptr_t get_buffer_1() const { return ___buffer_1; }
	inline intptr_t* get_address_of_buffer_1() { return &___buffer_1; }
	inline void set_buffer_1(intptr_t value)
	{
		___buffer_1 = value;
	}

	inline static int32_t get_offset_of_reserved_2() { return static_cast<int32_t>(offsetof(InstanceIdData_t3520832738, ___reserved_2)); }
	inline intptr_t get_reserved_2() const { return ___reserved_2; }
	inline intptr_t* get_address_of_reserved_2() { return &___reserved_2; }
	inline void set_reserved_2(intptr_t value)
	{
		___reserved_2 = value;
	}

	inline static int32_t get_offset_of_dataLength_3() { return static_cast<int32_t>(offsetof(InstanceIdData_t3520832738, ___dataLength_3)); }
	inline uint32_t get_dataLength_3() const { return ___dataLength_3; }
	inline uint32_t* get_address_of_dataLength_3() { return &___dataLength_3; }
	inline void set_dataLength_3(uint32_t value)
	{
		___dataLength_3 = value;
	}

	inline static int32_t get_offset_of_dataType_4() { return static_cast<int32_t>(offsetof(InstanceIdData_t3520832738, ___dataType_4)); }
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
#endif // INSTANCEIDDATA_T3520832738_H
#ifndef MESHDATA_T3397756459_H
#define MESHDATA_T3397756459_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.TrackerData/MeshData
#pragma pack(push, tp, 1)
struct  MeshData_t3397756459 
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
	inline static int32_t get_offset_of_positionsArray_0() { return static_cast<int32_t>(offsetof(MeshData_t3397756459, ___positionsArray_0)); }
	inline intptr_t get_positionsArray_0() const { return ___positionsArray_0; }
	inline intptr_t* get_address_of_positionsArray_0() { return &___positionsArray_0; }
	inline void set_positionsArray_0(intptr_t value)
	{
		___positionsArray_0 = value;
	}

	inline static int32_t get_offset_of_normalsArray_1() { return static_cast<int32_t>(offsetof(MeshData_t3397756459, ___normalsArray_1)); }
	inline intptr_t get_normalsArray_1() const { return ___normalsArray_1; }
	inline intptr_t* get_address_of_normalsArray_1() { return &___normalsArray_1; }
	inline void set_normalsArray_1(intptr_t value)
	{
		___normalsArray_1 = value;
	}

	inline static int32_t get_offset_of_texCoordsArray_2() { return static_cast<int32_t>(offsetof(MeshData_t3397756459, ___texCoordsArray_2)); }
	inline intptr_t get_texCoordsArray_2() const { return ___texCoordsArray_2; }
	inline intptr_t* get_address_of_texCoordsArray_2() { return &___texCoordsArray_2; }
	inline void set_texCoordsArray_2(intptr_t value)
	{
		___texCoordsArray_2 = value;
	}

	inline static int32_t get_offset_of_triangleIdxArray_3() { return static_cast<int32_t>(offsetof(MeshData_t3397756459, ___triangleIdxArray_3)); }
	inline intptr_t get_triangleIdxArray_3() const { return ___triangleIdxArray_3; }
	inline intptr_t* get_address_of_triangleIdxArray_3() { return &___triangleIdxArray_3; }
	inline void set_triangleIdxArray_3(intptr_t value)
	{
		___triangleIdxArray_3 = value;
	}

	inline static int32_t get_offset_of_numVertexValues_4() { return static_cast<int32_t>(offsetof(MeshData_t3397756459, ___numVertexValues_4)); }
	inline int32_t get_numVertexValues_4() const { return ___numVertexValues_4; }
	inline int32_t* get_address_of_numVertexValues_4() { return &___numVertexValues_4; }
	inline void set_numVertexValues_4(int32_t value)
	{
		___numVertexValues_4 = value;
	}

	inline static int32_t get_offset_of_hasNormals_5() { return static_cast<int32_t>(offsetof(MeshData_t3397756459, ___hasNormals_5)); }
	inline int32_t get_hasNormals_5() const { return ___hasNormals_5; }
	inline int32_t* get_address_of_hasNormals_5() { return &___hasNormals_5; }
	inline void set_hasNormals_5(int32_t value)
	{
		___hasNormals_5 = value;
	}

	inline static int32_t get_offset_of_hasTexCoords_6() { return static_cast<int32_t>(offsetof(MeshData_t3397756459, ___hasTexCoords_6)); }
	inline int32_t get_hasTexCoords_6() const { return ___hasTexCoords_6; }
	inline int32_t* get_address_of_hasTexCoords_6() { return &___hasTexCoords_6; }
	inline void set_hasTexCoords_6(int32_t value)
	{
		___hasTexCoords_6 = value;
	}

	inline static int32_t get_offset_of_numTriangleIndices_7() { return static_cast<int32_t>(offsetof(MeshData_t3397756459, ___numTriangleIndices_7)); }
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
#endif // MESHDATA_T3397756459_H
#ifndef OBB2D_T1491623550_H
#define OBB2D_T1491623550_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.TrackerData/Obb2D
#pragma pack(push, tp, 1)
struct  Obb2D_t1491623550 
{
public:
	// UnityEngine.Vector2 Vuforia.TrackerData/Obb2D::center
	Vector2_t2156229523  ___center_0;
	// UnityEngine.Vector2 Vuforia.TrackerData/Obb2D::halfExtents
	Vector2_t2156229523  ___halfExtents_1;
	// System.Single Vuforia.TrackerData/Obb2D::rotation
	float ___rotation_2;
	// System.Int32 Vuforia.TrackerData/Obb2D::unused
	int32_t ___unused_3;

public:
	inline static int32_t get_offset_of_center_0() { return static_cast<int32_t>(offsetof(Obb2D_t1491623550, ___center_0)); }
	inline Vector2_t2156229523  get_center_0() const { return ___center_0; }
	inline Vector2_t2156229523 * get_address_of_center_0() { return &___center_0; }
	inline void set_center_0(Vector2_t2156229523  value)
	{
		___center_0 = value;
	}

	inline static int32_t get_offset_of_halfExtents_1() { return static_cast<int32_t>(offsetof(Obb2D_t1491623550, ___halfExtents_1)); }
	inline Vector2_t2156229523  get_halfExtents_1() const { return ___halfExtents_1; }
	inline Vector2_t2156229523 * get_address_of_halfExtents_1() { return &___halfExtents_1; }
	inline void set_halfExtents_1(Vector2_t2156229523  value)
	{
		___halfExtents_1 = value;
	}

	inline static int32_t get_offset_of_rotation_2() { return static_cast<int32_t>(offsetof(Obb2D_t1491623550, ___rotation_2)); }
	inline float get_rotation_2() const { return ___rotation_2; }
	inline float* get_address_of_rotation_2() { return &___rotation_2; }
	inline void set_rotation_2(float value)
	{
		___rotation_2 = value;
	}

	inline static int32_t get_offset_of_unused_3() { return static_cast<int32_t>(offsetof(Obb2D_t1491623550, ___unused_3)); }
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
#endif // OBB2D_T1491623550_H
#ifndef OBB3D_T3447938686_H
#define OBB3D_T3447938686_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.TrackerData/Obb3D
#pragma pack(push, tp, 1)
struct  Obb3D_t3447938686 
{
public:
	// UnityEngine.Vector3 Vuforia.TrackerData/Obb3D::center
	Vector3_t3722313464  ___center_0;
	// UnityEngine.Vector3 Vuforia.TrackerData/Obb3D::halfExtents
	Vector3_t3722313464  ___halfExtents_1;
	// System.Single Vuforia.TrackerData/Obb3D::rotationZ
	float ___rotationZ_2;
	// System.Int32 Vuforia.TrackerData/Obb3D::unused
	int32_t ___unused_3;

public:
	inline static int32_t get_offset_of_center_0() { return static_cast<int32_t>(offsetof(Obb3D_t3447938686, ___center_0)); }
	inline Vector3_t3722313464  get_center_0() const { return ___center_0; }
	inline Vector3_t3722313464 * get_address_of_center_0() { return &___center_0; }
	inline void set_center_0(Vector3_t3722313464  value)
	{
		___center_0 = value;
	}

	inline static int32_t get_offset_of_halfExtents_1() { return static_cast<int32_t>(offsetof(Obb3D_t3447938686, ___halfExtents_1)); }
	inline Vector3_t3722313464  get_halfExtents_1() const { return ___halfExtents_1; }
	inline Vector3_t3722313464 * get_address_of_halfExtents_1() { return &___halfExtents_1; }
	inline void set_halfExtents_1(Vector3_t3722313464  value)
	{
		___halfExtents_1 = value;
	}

	inline static int32_t get_offset_of_rotationZ_2() { return static_cast<int32_t>(offsetof(Obb3D_t3447938686, ___rotationZ_2)); }
	inline float get_rotationZ_2() const { return ___rotationZ_2; }
	inline float* get_address_of_rotationZ_2() { return &___rotationZ_2; }
	inline void set_rotationZ_2(float value)
	{
		___rotationZ_2 = value;
	}

	inline static int32_t get_offset_of_unused_3() { return static_cast<int32_t>(offsetof(Obb3D_t3447938686, ___unused_3)); }
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
#endif // OBB3D_T3447938686_H
#ifndef POSEDATA_T3794839648_H
#define POSEDATA_T3794839648_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.TrackerData/PoseData
#pragma pack(push, tp, 1)
struct  PoseData_t3794839648 
{
public:
	// UnityEngine.Vector3 Vuforia.TrackerData/PoseData::position
	Vector3_t3722313464  ___position_0;
	// UnityEngine.Quaternion Vuforia.TrackerData/PoseData::orientation
	Quaternion_t2301928331  ___orientation_1;
	// System.Int32 Vuforia.TrackerData/PoseData::unused
	int32_t ___unused_2;

public:
	inline static int32_t get_offset_of_position_0() { return static_cast<int32_t>(offsetof(PoseData_t3794839648, ___position_0)); }
	inline Vector3_t3722313464  get_position_0() const { return ___position_0; }
	inline Vector3_t3722313464 * get_address_of_position_0() { return &___position_0; }
	inline void set_position_0(Vector3_t3722313464  value)
	{
		___position_0 = value;
	}

	inline static int32_t get_offset_of_orientation_1() { return static_cast<int32_t>(offsetof(PoseData_t3794839648, ___orientation_1)); }
	inline Quaternion_t2301928331  get_orientation_1() const { return ___orientation_1; }
	inline Quaternion_t2301928331 * get_address_of_orientation_1() { return &___orientation_1; }
	inline void set_orientation_1(Quaternion_t2301928331  value)
	{
		___orientation_1 = value;
	}

	inline static int32_t get_offset_of_unused_2() { return static_cast<int32_t>(offsetof(PoseData_t3794839648, ___unused_2)); }
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
#endif // POSEDATA_T3794839648_H
#ifndef STRUCTLIST_T2334955711_H
#define STRUCTLIST_T2334955711_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.TrackerData/StructList
#pragma pack(push, tp, 1)
struct  StructList_t2334955711 
{
public:
	// System.IntPtr Vuforia.TrackerData/StructList::arrayPtr
	intptr_t ___arrayPtr_0;
	// System.Int32 Vuforia.TrackerData/StructList::numResults
	int32_t ___numResults_1;
	// System.Int32 Vuforia.TrackerData/StructList::unused
	int32_t ___unused_2;

public:
	inline static int32_t get_offset_of_arrayPtr_0() { return static_cast<int32_t>(offsetof(StructList_t2334955711, ___arrayPtr_0)); }
	inline intptr_t get_arrayPtr_0() const { return ___arrayPtr_0; }
	inline intptr_t* get_address_of_arrayPtr_0() { return &___arrayPtr_0; }
	inline void set_arrayPtr_0(intptr_t value)
	{
		___arrayPtr_0 = value;
	}

	inline static int32_t get_offset_of_numResults_1() { return static_cast<int32_t>(offsetof(StructList_t2334955711, ___numResults_1)); }
	inline int32_t get_numResults_1() const { return ___numResults_1; }
	inline int32_t* get_address_of_numResults_1() { return &___numResults_1; }
	inline void set_numResults_1(int32_t value)
	{
		___numResults_1 = value;
	}

	inline static int32_t get_offset_of_unused_2() { return static_cast<int32_t>(offsetof(StructList_t2334955711, ___unused_2)); }
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
#endif // STRUCTLIST_T2334955711_H
#ifndef VIEW_T3879626884_H
#define VIEW_T3879626884_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.View
struct  View_t3879626884 
{
public:
	// System.Int32 Vuforia.View::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(View_t3879626884, ___value___2)); }
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
#endif // VIEW_T3879626884_H
#ifndef VIEWERBUTTONTYPE_T3221680132_H
#define VIEWERBUTTONTYPE_T3221680132_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.ViewerButtonType
struct  ViewerButtonType_t3221680132 
{
public:
	// System.Int32 Vuforia.ViewerButtonType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ViewerButtonType_t3221680132, ___value___2)); }
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
#endif // VIEWERBUTTONTYPE_T3221680132_H
#ifndef VIEWERPARAMETERS_T3396315024_H
#define VIEWERPARAMETERS_T3396315024_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.ViewerParameters
struct  ViewerParameters_t3396315024  : public RuntimeObject
{
public:
	// System.IntPtr Vuforia.ViewerParameters::mNativeVP
	intptr_t ___mNativeVP_0;

public:
	inline static int32_t get_offset_of_mNativeVP_0() { return static_cast<int32_t>(offsetof(ViewerParameters_t3396315024, ___mNativeVP_0)); }
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
#endif // VIEWERPARAMETERS_T3396315024_H
#ifndef VIEWERPARAMETERSLIST_T3991990123_H
#define VIEWERPARAMETERSLIST_T3991990123_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.ViewerParametersList
struct  ViewerParametersList_t3991990123  : public RuntimeObject
{
public:
	// System.IntPtr Vuforia.ViewerParametersList::mNativeVPL
	intptr_t ___mNativeVPL_0;

public:
	inline static int32_t get_offset_of_mNativeVPL_0() { return static_cast<int32_t>(offsetof(ViewerParametersList_t3991990123, ___mNativeVPL_0)); }
	inline intptr_t get_mNativeVPL_0() const { return ___mNativeVPL_0; }
	inline intptr_t* get_address_of_mNativeVPL_0() { return &___mNativeVPL_0; }
	inline void set_mNativeVPL_0(intptr_t value)
	{
		___mNativeVPL_0 = value;
	}
};

struct ViewerParametersList_t3991990123_StaticFields
{
public:
	// Vuforia.ViewerParametersList Vuforia.ViewerParametersList::mListForAuthoringTools
	ViewerParametersList_t3991990123 * ___mListForAuthoringTools_1;

public:
	inline static int32_t get_offset_of_mListForAuthoringTools_1() { return static_cast<int32_t>(offsetof(ViewerParametersList_t3991990123_StaticFields, ___mListForAuthoringTools_1)); }
	inline ViewerParametersList_t3991990123 * get_mListForAuthoringTools_1() const { return ___mListForAuthoringTools_1; }
	inline ViewerParametersList_t3991990123 ** get_address_of_mListForAuthoringTools_1() { return &___mListForAuthoringTools_1; }
	inline void set_mListForAuthoringTools_1(ViewerParametersList_t3991990123 * value)
	{
		___mListForAuthoringTools_1 = value;
		Il2CppCodeGenWriteBarrier((&___mListForAuthoringTools_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VIEWERPARAMETERSLIST_T3991990123_H
#ifndef VIEWERTRAYALIGNMENT_T2810797062_H
#define VIEWERTRAYALIGNMENT_T2810797062_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.ViewerTrayAlignment
struct  ViewerTrayAlignment_t2810797062 
{
public:
	// System.Int32 Vuforia.ViewerTrayAlignment::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ViewerTrayAlignment_t2810797062, ___value___2)); }
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
#endif // VIEWERTRAYALIGNMENT_T2810797062_H
#ifndef WORLDCENTERMODE_T3672819471_H
#define WORLDCENTERMODE_T3672819471_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.VuforiaARController/WorldCenterMode
struct  WorldCenterMode_t3672819471 
{
public:
	// System.Int32 Vuforia.VuforiaARController/WorldCenterMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(WorldCenterMode_t3672819471, ___value___2)); }
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
#endif // WORLDCENTERMODE_T3672819471_H
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
#ifndef VIDEOTEXTUREINFO_T1805965052_H
#define VIDEOTEXTUREINFO_T1805965052_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.VuforiaRenderer/VideoTextureInfo
#pragma pack(push, tp, 1)
struct  VideoTextureInfo_t1805965052 
{
public:
	// Vuforia.VuforiaRenderer/Vec2I Vuforia.VuforiaRenderer/VideoTextureInfo::textureSize
	Vec2I_t3527036565  ___textureSize_0;
	// Vuforia.VuforiaRenderer/Vec2I Vuforia.VuforiaRenderer/VideoTextureInfo::imageSize
	Vec2I_t3527036565  ___imageSize_1;

public:
	inline static int32_t get_offset_of_textureSize_0() { return static_cast<int32_t>(offsetof(VideoTextureInfo_t1805965052, ___textureSize_0)); }
	inline Vec2I_t3527036565  get_textureSize_0() const { return ___textureSize_0; }
	inline Vec2I_t3527036565 * get_address_of_textureSize_0() { return &___textureSize_0; }
	inline void set_textureSize_0(Vec2I_t3527036565  value)
	{
		___textureSize_0 = value;
	}

	inline static int32_t get_offset_of_imageSize_1() { return static_cast<int32_t>(offsetof(VideoTextureInfo_t1805965052, ___imageSize_1)); }
	inline Vec2I_t3527036565  get_imageSize_1() const { return ___imageSize_1; }
	inline Vec2I_t3527036565 * get_address_of_imageSize_1() { return &___imageSize_1; }
	inline void set_imageSize_1(Vec2I_t3527036565  value)
	{
		___imageSize_1 = value;
	}
};
#pragma pack(pop, tp)

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VIDEOTEXTUREINFO_T1805965052_H
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
#ifndef STORAGETYPE_T857810839_H
#define STORAGETYPE_T857810839_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.VuforiaUnity/StorageType
struct  StorageType_t857810839 
{
public:
	// System.Int32 Vuforia.VuforiaUnity/StorageType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(StorageType_t857810839, ___value___2)); }
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
#endif // STORAGETYPE_T857810839_H
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
#ifndef BASECAMERACONFIGURATION_T3118151474_H
#define BASECAMERACONFIGURATION_T3118151474_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.BaseCameraConfiguration
struct  BaseCameraConfiguration_t3118151474  : public RuntimeObject
{
public:
	// Vuforia.CameraDevice/CameraDeviceMode Vuforia.BaseCameraConfiguration::mCameraDeviceMode
	int32_t ___mCameraDeviceMode_0;
	// Vuforia.VuforiaRenderer/VideoBackgroundReflection Vuforia.BaseCameraConfiguration::mLastVideoBackGroundMirroredFromSDK
	int32_t ___mLastVideoBackGroundMirroredFromSDK_1;
	// System.Action Vuforia.BaseCameraConfiguration::mOnVideoBackgroundConfigChanged
	Action_t1264377477 * ___mOnVideoBackgroundConfigChanged_2;
	// Vuforia.VideoBackgroundBehaviour Vuforia.BaseCameraConfiguration::mVideoBackgroundBehaviour
	VideoBackgroundBehaviour_t1552899074 * ___mVideoBackgroundBehaviour_3;
	// UnityEngine.Rect Vuforia.BaseCameraConfiguration::mVideoBackgroundViewportRect
	Rect_t2360479859  ___mVideoBackgroundViewportRect_4;
	// System.Boolean Vuforia.BaseCameraConfiguration::mRenderVideoBackground
	bool ___mRenderVideoBackground_5;
	// UnityEngine.ScreenOrientation Vuforia.BaseCameraConfiguration::mProjectionOrientation
	int32_t ___mProjectionOrientation_6;
	// Vuforia.VuforiaRenderer/VideoBackgroundReflection Vuforia.BaseCameraConfiguration::mInitialReflection
	int32_t ___mInitialReflection_7;
	// Vuforia.BackgroundPlaneBehaviour Vuforia.BaseCameraConfiguration::mBackgroundPlaneBehaviour
	BackgroundPlaneBehaviour_t3333547397 * ___mBackgroundPlaneBehaviour_8;
	// System.Boolean Vuforia.BaseCameraConfiguration::mDeviceModeChanged
	bool ___mDeviceModeChanged_9;
	// System.Boolean Vuforia.BaseCameraConfiguration::mProjectionParamsChanged
	bool ___mProjectionParamsChanged_10;

public:
	inline static int32_t get_offset_of_mCameraDeviceMode_0() { return static_cast<int32_t>(offsetof(BaseCameraConfiguration_t3118151474, ___mCameraDeviceMode_0)); }
	inline int32_t get_mCameraDeviceMode_0() const { return ___mCameraDeviceMode_0; }
	inline int32_t* get_address_of_mCameraDeviceMode_0() { return &___mCameraDeviceMode_0; }
	inline void set_mCameraDeviceMode_0(int32_t value)
	{
		___mCameraDeviceMode_0 = value;
	}

	inline static int32_t get_offset_of_mLastVideoBackGroundMirroredFromSDK_1() { return static_cast<int32_t>(offsetof(BaseCameraConfiguration_t3118151474, ___mLastVideoBackGroundMirroredFromSDK_1)); }
	inline int32_t get_mLastVideoBackGroundMirroredFromSDK_1() const { return ___mLastVideoBackGroundMirroredFromSDK_1; }
	inline int32_t* get_address_of_mLastVideoBackGroundMirroredFromSDK_1() { return &___mLastVideoBackGroundMirroredFromSDK_1; }
	inline void set_mLastVideoBackGroundMirroredFromSDK_1(int32_t value)
	{
		___mLastVideoBackGroundMirroredFromSDK_1 = value;
	}

	inline static int32_t get_offset_of_mOnVideoBackgroundConfigChanged_2() { return static_cast<int32_t>(offsetof(BaseCameraConfiguration_t3118151474, ___mOnVideoBackgroundConfigChanged_2)); }
	inline Action_t1264377477 * get_mOnVideoBackgroundConfigChanged_2() const { return ___mOnVideoBackgroundConfigChanged_2; }
	inline Action_t1264377477 ** get_address_of_mOnVideoBackgroundConfigChanged_2() { return &___mOnVideoBackgroundConfigChanged_2; }
	inline void set_mOnVideoBackgroundConfigChanged_2(Action_t1264377477 * value)
	{
		___mOnVideoBackgroundConfigChanged_2 = value;
		Il2CppCodeGenWriteBarrier((&___mOnVideoBackgroundConfigChanged_2), value);
	}

	inline static int32_t get_offset_of_mVideoBackgroundBehaviour_3() { return static_cast<int32_t>(offsetof(BaseCameraConfiguration_t3118151474, ___mVideoBackgroundBehaviour_3)); }
	inline VideoBackgroundBehaviour_t1552899074 * get_mVideoBackgroundBehaviour_3() const { return ___mVideoBackgroundBehaviour_3; }
	inline VideoBackgroundBehaviour_t1552899074 ** get_address_of_mVideoBackgroundBehaviour_3() { return &___mVideoBackgroundBehaviour_3; }
	inline void set_mVideoBackgroundBehaviour_3(VideoBackgroundBehaviour_t1552899074 * value)
	{
		___mVideoBackgroundBehaviour_3 = value;
		Il2CppCodeGenWriteBarrier((&___mVideoBackgroundBehaviour_3), value);
	}

	inline static int32_t get_offset_of_mVideoBackgroundViewportRect_4() { return static_cast<int32_t>(offsetof(BaseCameraConfiguration_t3118151474, ___mVideoBackgroundViewportRect_4)); }
	inline Rect_t2360479859  get_mVideoBackgroundViewportRect_4() const { return ___mVideoBackgroundViewportRect_4; }
	inline Rect_t2360479859 * get_address_of_mVideoBackgroundViewportRect_4() { return &___mVideoBackgroundViewportRect_4; }
	inline void set_mVideoBackgroundViewportRect_4(Rect_t2360479859  value)
	{
		___mVideoBackgroundViewportRect_4 = value;
	}

	inline static int32_t get_offset_of_mRenderVideoBackground_5() { return static_cast<int32_t>(offsetof(BaseCameraConfiguration_t3118151474, ___mRenderVideoBackground_5)); }
	inline bool get_mRenderVideoBackground_5() const { return ___mRenderVideoBackground_5; }
	inline bool* get_address_of_mRenderVideoBackground_5() { return &___mRenderVideoBackground_5; }
	inline void set_mRenderVideoBackground_5(bool value)
	{
		___mRenderVideoBackground_5 = value;
	}

	inline static int32_t get_offset_of_mProjectionOrientation_6() { return static_cast<int32_t>(offsetof(BaseCameraConfiguration_t3118151474, ___mProjectionOrientation_6)); }
	inline int32_t get_mProjectionOrientation_6() const { return ___mProjectionOrientation_6; }
	inline int32_t* get_address_of_mProjectionOrientation_6() { return &___mProjectionOrientation_6; }
	inline void set_mProjectionOrientation_6(int32_t value)
	{
		___mProjectionOrientation_6 = value;
	}

	inline static int32_t get_offset_of_mInitialReflection_7() { return static_cast<int32_t>(offsetof(BaseCameraConfiguration_t3118151474, ___mInitialReflection_7)); }
	inline int32_t get_mInitialReflection_7() const { return ___mInitialReflection_7; }
	inline int32_t* get_address_of_mInitialReflection_7() { return &___mInitialReflection_7; }
	inline void set_mInitialReflection_7(int32_t value)
	{
		___mInitialReflection_7 = value;
	}

	inline static int32_t get_offset_of_mBackgroundPlaneBehaviour_8() { return static_cast<int32_t>(offsetof(BaseCameraConfiguration_t3118151474, ___mBackgroundPlaneBehaviour_8)); }
	inline BackgroundPlaneBehaviour_t3333547397 * get_mBackgroundPlaneBehaviour_8() const { return ___mBackgroundPlaneBehaviour_8; }
	inline BackgroundPlaneBehaviour_t3333547397 ** get_address_of_mBackgroundPlaneBehaviour_8() { return &___mBackgroundPlaneBehaviour_8; }
	inline void set_mBackgroundPlaneBehaviour_8(BackgroundPlaneBehaviour_t3333547397 * value)
	{
		___mBackgroundPlaneBehaviour_8 = value;
		Il2CppCodeGenWriteBarrier((&___mBackgroundPlaneBehaviour_8), value);
	}

	inline static int32_t get_offset_of_mDeviceModeChanged_9() { return static_cast<int32_t>(offsetof(BaseCameraConfiguration_t3118151474, ___mDeviceModeChanged_9)); }
	inline bool get_mDeviceModeChanged_9() const { return ___mDeviceModeChanged_9; }
	inline bool* get_address_of_mDeviceModeChanged_9() { return &___mDeviceModeChanged_9; }
	inline void set_mDeviceModeChanged_9(bool value)
	{
		___mDeviceModeChanged_9 = value;
	}

	inline static int32_t get_offset_of_mProjectionParamsChanged_10() { return static_cast<int32_t>(offsetof(BaseCameraConfiguration_t3118151474, ___mProjectionParamsChanged_10)); }
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
#endif // BASECAMERACONFIGURATION_T3118151474_H
#ifndef CAMERADEVICE_T960297568_H
#define CAMERADEVICE_T960297568_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.CameraDevice
struct  CameraDevice_t960297568  : public RuntimeObject
{
public:
	// System.Collections.Generic.Dictionary`2<Vuforia.Image/PIXEL_FORMAT,Vuforia.Image> Vuforia.CameraDevice::mCameraImages
	Dictionary_2_t3630620928 * ___mCameraImages_1;
	// System.Collections.Generic.List`1<Vuforia.Image/PIXEL_FORMAT> Vuforia.CameraDevice::mForcedCameraFormats
	List_1_t386988881 * ___mForcedCameraFormats_2;
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
	VideoModeData_t2066817255  ___mVideoModeData_9;
	// System.Boolean Vuforia.CameraDevice::mVideoModeDataNeedsUpdate
	bool ___mVideoModeDataNeedsUpdate_10;
	// System.Boolean Vuforia.CameraDevice::mHasCameraDeviceModeBeenSet
	bool ___mHasCameraDeviceModeBeenSet_11;
	// System.Boolean Vuforia.CameraDevice::mCameraActive
	bool ___mCameraActive_12;
	// System.Boolean Vuforia.CameraDevice::mIsCameraMocked
	bool ___mIsCameraMocked_13;

public:
	inline static int32_t get_offset_of_mCameraImages_1() { return static_cast<int32_t>(offsetof(CameraDevice_t960297568, ___mCameraImages_1)); }
	inline Dictionary_2_t3630620928 * get_mCameraImages_1() const { return ___mCameraImages_1; }
	inline Dictionary_2_t3630620928 ** get_address_of_mCameraImages_1() { return &___mCameraImages_1; }
	inline void set_mCameraImages_1(Dictionary_2_t3630620928 * value)
	{
		___mCameraImages_1 = value;
		Il2CppCodeGenWriteBarrier((&___mCameraImages_1), value);
	}

	inline static int32_t get_offset_of_mForcedCameraFormats_2() { return static_cast<int32_t>(offsetof(CameraDevice_t960297568, ___mForcedCameraFormats_2)); }
	inline List_1_t386988881 * get_mForcedCameraFormats_2() const { return ___mForcedCameraFormats_2; }
	inline List_1_t386988881 ** get_address_of_mForcedCameraFormats_2() { return &___mForcedCameraFormats_2; }
	inline void set_mForcedCameraFormats_2(List_1_t386988881 * value)
	{
		___mForcedCameraFormats_2 = value;
		Il2CppCodeGenWriteBarrier((&___mForcedCameraFormats_2), value);
	}

	inline static int32_t get_offset_of_mCameraReady_4() { return static_cast<int32_t>(offsetof(CameraDevice_t960297568, ___mCameraReady_4)); }
	inline bool get_mCameraReady_4() const { return ___mCameraReady_4; }
	inline bool* get_address_of_mCameraReady_4() { return &___mCameraReady_4; }
	inline void set_mCameraReady_4(bool value)
	{
		___mCameraReady_4 = value;
	}

	inline static int32_t get_offset_of_mIsDirty_5() { return static_cast<int32_t>(offsetof(CameraDevice_t960297568, ___mIsDirty_5)); }
	inline bool get_mIsDirty_5() const { return ___mIsDirty_5; }
	inline bool* get_address_of_mIsDirty_5() { return &___mIsDirty_5; }
	inline void set_mIsDirty_5(bool value)
	{
		___mIsDirty_5 = value;
	}

	inline static int32_t get_offset_of_mActualCameraDirection_6() { return static_cast<int32_t>(offsetof(CameraDevice_t960297568, ___mActualCameraDirection_6)); }
	inline int32_t get_mActualCameraDirection_6() const { return ___mActualCameraDirection_6; }
	inline int32_t* get_address_of_mActualCameraDirection_6() { return &___mActualCameraDirection_6; }
	inline void set_mActualCameraDirection_6(int32_t value)
	{
		___mActualCameraDirection_6 = value;
	}

	inline static int32_t get_offset_of_mSelectedCameraDirection_7() { return static_cast<int32_t>(offsetof(CameraDevice_t960297568, ___mSelectedCameraDirection_7)); }
	inline int32_t get_mSelectedCameraDirection_7() const { return ___mSelectedCameraDirection_7; }
	inline int32_t* get_address_of_mSelectedCameraDirection_7() { return &___mSelectedCameraDirection_7; }
	inline void set_mSelectedCameraDirection_7(int32_t value)
	{
		___mSelectedCameraDirection_7 = value;
	}

	inline static int32_t get_offset_of_mCameraDeviceMode_8() { return static_cast<int32_t>(offsetof(CameraDevice_t960297568, ___mCameraDeviceMode_8)); }
	inline int32_t get_mCameraDeviceMode_8() const { return ___mCameraDeviceMode_8; }
	inline int32_t* get_address_of_mCameraDeviceMode_8() { return &___mCameraDeviceMode_8; }
	inline void set_mCameraDeviceMode_8(int32_t value)
	{
		___mCameraDeviceMode_8 = value;
	}

	inline static int32_t get_offset_of_mVideoModeData_9() { return static_cast<int32_t>(offsetof(CameraDevice_t960297568, ___mVideoModeData_9)); }
	inline VideoModeData_t2066817255  get_mVideoModeData_9() const { return ___mVideoModeData_9; }
	inline VideoModeData_t2066817255 * get_address_of_mVideoModeData_9() { return &___mVideoModeData_9; }
	inline void set_mVideoModeData_9(VideoModeData_t2066817255  value)
	{
		___mVideoModeData_9 = value;
	}

	inline static int32_t get_offset_of_mVideoModeDataNeedsUpdate_10() { return static_cast<int32_t>(offsetof(CameraDevice_t960297568, ___mVideoModeDataNeedsUpdate_10)); }
	inline bool get_mVideoModeDataNeedsUpdate_10() const { return ___mVideoModeDataNeedsUpdate_10; }
	inline bool* get_address_of_mVideoModeDataNeedsUpdate_10() { return &___mVideoModeDataNeedsUpdate_10; }
	inline void set_mVideoModeDataNeedsUpdate_10(bool value)
	{
		___mVideoModeDataNeedsUpdate_10 = value;
	}

	inline static int32_t get_offset_of_mHasCameraDeviceModeBeenSet_11() { return static_cast<int32_t>(offsetof(CameraDevice_t960297568, ___mHasCameraDeviceModeBeenSet_11)); }
	inline bool get_mHasCameraDeviceModeBeenSet_11() const { return ___mHasCameraDeviceModeBeenSet_11; }
	inline bool* get_address_of_mHasCameraDeviceModeBeenSet_11() { return &___mHasCameraDeviceModeBeenSet_11; }
	inline void set_mHasCameraDeviceModeBeenSet_11(bool value)
	{
		___mHasCameraDeviceModeBeenSet_11 = value;
	}

	inline static int32_t get_offset_of_mCameraActive_12() { return static_cast<int32_t>(offsetof(CameraDevice_t960297568, ___mCameraActive_12)); }
	inline bool get_mCameraActive_12() const { return ___mCameraActive_12; }
	inline bool* get_address_of_mCameraActive_12() { return &___mCameraActive_12; }
	inline void set_mCameraActive_12(bool value)
	{
		___mCameraActive_12 = value;
	}

	inline static int32_t get_offset_of_mIsCameraMocked_13() { return static_cast<int32_t>(offsetof(CameraDevice_t960297568, ___mIsCameraMocked_13)); }
	inline bool get_mIsCameraMocked_13() const { return ___mIsCameraMocked_13; }
	inline bool* get_address_of_mIsCameraMocked_13() { return &___mIsCameraMocked_13; }
	inline void set_mIsCameraMocked_13(bool value)
	{
		___mIsCameraMocked_13 = value;
	}
};

struct CameraDevice_t960297568_StaticFields
{
public:
	// Vuforia.CameraDevice Vuforia.CameraDevice::mInstance
	CameraDevice_t960297568 * ___mInstance_0;
	// Vuforia.IWebCam Vuforia.CameraDevice::mWebCam
	RuntimeObject* ___mWebCam_3;

public:
	inline static int32_t get_offset_of_mInstance_0() { return static_cast<int32_t>(offsetof(CameraDevice_t960297568_StaticFields, ___mInstance_0)); }
	inline CameraDevice_t960297568 * get_mInstance_0() const { return ___mInstance_0; }
	inline CameraDevice_t960297568 ** get_address_of_mInstance_0() { return &___mInstance_0; }
	inline void set_mInstance_0(CameraDevice_t960297568 * value)
	{
		___mInstance_0 = value;
		Il2CppCodeGenWriteBarrier((&___mInstance_0), value);
	}

	inline static int32_t get_offset_of_mWebCam_3() { return static_cast<int32_t>(offsetof(CameraDevice_t960297568_StaticFields, ___mWebCam_3)); }
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
#endif // CAMERADEVICE_T960297568_H
#ifndef CAMERAFIELD_T1483002240_H
#define CAMERAFIELD_T1483002240_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.CameraDevice/CameraField
struct  CameraField_t1483002240 
{
public:
	// Vuforia.CameraDevice/CameraField/DataType Vuforia.CameraDevice/CameraField::Type
	int32_t ___Type_0;
	// System.String Vuforia.CameraDevice/CameraField::Key
	String_t* ___Key_1;

public:
	inline static int32_t get_offset_of_Type_0() { return static_cast<int32_t>(offsetof(CameraField_t1483002240, ___Type_0)); }
	inline int32_t get_Type_0() const { return ___Type_0; }
	inline int32_t* get_address_of_Type_0() { return &___Type_0; }
	inline void set_Type_0(int32_t value)
	{
		___Type_0 = value;
	}

	inline static int32_t get_offset_of_Key_1() { return static_cast<int32_t>(offsetof(CameraField_t1483002240, ___Key_1)); }
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
struct CameraField_t1483002240_marshaled_pinvoke
{
	int32_t ___Type_0;
	char* ___Key_1;
};
// Native definition for COM marshalling of Vuforia.CameraDevice/CameraField
struct CameraField_t1483002240_marshaled_com
{
	int32_t ___Type_0;
	Il2CppChar* ___Key_1;
};
#endif // CAMERAFIELD_T1483002240_H
#ifndef CUSTOMVIEWERPARAMETERS_T463762113_H
#define CUSTOMVIEWERPARAMETERS_T463762113_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.CustomViewerParameters
struct  CustomViewerParameters_t463762113  : public ViewerParameters_t3396315024
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
	inline static int32_t get_offset_of_mVersion_1() { return static_cast<int32_t>(offsetof(CustomViewerParameters_t463762113, ___mVersion_1)); }
	inline float get_mVersion_1() const { return ___mVersion_1; }
	inline float* get_address_of_mVersion_1() { return &___mVersion_1; }
	inline void set_mVersion_1(float value)
	{
		___mVersion_1 = value;
	}

	inline static int32_t get_offset_of_mName_2() { return static_cast<int32_t>(offsetof(CustomViewerParameters_t463762113, ___mName_2)); }
	inline String_t* get_mName_2() const { return ___mName_2; }
	inline String_t** get_address_of_mName_2() { return &___mName_2; }
	inline void set_mName_2(String_t* value)
	{
		___mName_2 = value;
		Il2CppCodeGenWriteBarrier((&___mName_2), value);
	}

	inline static int32_t get_offset_of_mManufacturer_3() { return static_cast<int32_t>(offsetof(CustomViewerParameters_t463762113, ___mManufacturer_3)); }
	inline String_t* get_mManufacturer_3() const { return ___mManufacturer_3; }
	inline String_t** get_address_of_mManufacturer_3() { return &___mManufacturer_3; }
	inline void set_mManufacturer_3(String_t* value)
	{
		___mManufacturer_3 = value;
		Il2CppCodeGenWriteBarrier((&___mManufacturer_3), value);
	}

	inline static int32_t get_offset_of_mButtonType_4() { return static_cast<int32_t>(offsetof(CustomViewerParameters_t463762113, ___mButtonType_4)); }
	inline int32_t get_mButtonType_4() const { return ___mButtonType_4; }
	inline int32_t* get_address_of_mButtonType_4() { return &___mButtonType_4; }
	inline void set_mButtonType_4(int32_t value)
	{
		___mButtonType_4 = value;
	}

	inline static int32_t get_offset_of_mScreenToLensDistance_5() { return static_cast<int32_t>(offsetof(CustomViewerParameters_t463762113, ___mScreenToLensDistance_5)); }
	inline float get_mScreenToLensDistance_5() const { return ___mScreenToLensDistance_5; }
	inline float* get_address_of_mScreenToLensDistance_5() { return &___mScreenToLensDistance_5; }
	inline void set_mScreenToLensDistance_5(float value)
	{
		___mScreenToLensDistance_5 = value;
	}

	inline static int32_t get_offset_of_mTrayAlignment_6() { return static_cast<int32_t>(offsetof(CustomViewerParameters_t463762113, ___mTrayAlignment_6)); }
	inline int32_t get_mTrayAlignment_6() const { return ___mTrayAlignment_6; }
	inline int32_t* get_address_of_mTrayAlignment_6() { return &___mTrayAlignment_6; }
	inline void set_mTrayAlignment_6(int32_t value)
	{
		___mTrayAlignment_6 = value;
	}

	inline static int32_t get_offset_of_mMagnet_7() { return static_cast<int32_t>(offsetof(CustomViewerParameters_t463762113, ___mMagnet_7)); }
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
#endif // CUSTOMVIEWERPARAMETERS_T463762113_H
#ifndef DATASET_T3286034874_H
#define DATASET_T3286034874_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.DataSet
struct  DataSet_t3286034874  : public RuntimeObject
{
public:
	// System.IntPtr Vuforia.DataSet::mDataSetPtr
	intptr_t ___mDataSetPtr_0;
	// System.String Vuforia.DataSet::mPath
	String_t* ___mPath_1;
	// Vuforia.VuforiaUnity/StorageType Vuforia.DataSet::mStorageType
	int32_t ___mStorageType_2;
	// System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.Trackable> Vuforia.DataSet::mTrackablesDict
	Dictionary_2_t1340713322 * ___mTrackablesDict_3;

public:
	inline static int32_t get_offset_of_mDataSetPtr_0() { return static_cast<int32_t>(offsetof(DataSet_t3286034874, ___mDataSetPtr_0)); }
	inline intptr_t get_mDataSetPtr_0() const { return ___mDataSetPtr_0; }
	inline intptr_t* get_address_of_mDataSetPtr_0() { return &___mDataSetPtr_0; }
	inline void set_mDataSetPtr_0(intptr_t value)
	{
		___mDataSetPtr_0 = value;
	}

	inline static int32_t get_offset_of_mPath_1() { return static_cast<int32_t>(offsetof(DataSet_t3286034874, ___mPath_1)); }
	inline String_t* get_mPath_1() const { return ___mPath_1; }
	inline String_t** get_address_of_mPath_1() { return &___mPath_1; }
	inline void set_mPath_1(String_t* value)
	{
		___mPath_1 = value;
		Il2CppCodeGenWriteBarrier((&___mPath_1), value);
	}

	inline static int32_t get_offset_of_mStorageType_2() { return static_cast<int32_t>(offsetof(DataSet_t3286034874, ___mStorageType_2)); }
	inline int32_t get_mStorageType_2() const { return ___mStorageType_2; }
	inline int32_t* get_address_of_mStorageType_2() { return &___mStorageType_2; }
	inline void set_mStorageType_2(int32_t value)
	{
		___mStorageType_2 = value;
	}

	inline static int32_t get_offset_of_mTrackablesDict_3() { return static_cast<int32_t>(offsetof(DataSet_t3286034874, ___mTrackablesDict_3)); }
	inline Dictionary_2_t1340713322 * get_mTrackablesDict_3() const { return ___mTrackablesDict_3; }
	inline Dictionary_2_t1340713322 ** get_address_of_mTrackablesDict_3() { return &___mTrackablesDict_3; }
	inline void set_mTrackablesDict_3(Dictionary_2_t1340713322 * value)
	{
		___mTrackablesDict_3 = value;
		Il2CppCodeGenWriteBarrier((&___mTrackablesDict_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATASET_T3286034874_H
#ifndef DEVICETRACKINGMANAGER_T3849131975_H
#define DEVICETRACKINGMANAGER_T3849131975_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.DeviceTrackingManager
struct  DeviceTrackingManager_t3849131975  : public RuntimeObject
{
public:
	// UnityEngine.Vector3 Vuforia.DeviceTrackingManager::mDeviceTrackerPositonOffset
	Vector3_t3722313464  ___mDeviceTrackerPositonOffset_0;
	// UnityEngine.Quaternion Vuforia.DeviceTrackingManager::mDeviceTrackerRotationOffset
	Quaternion_t2301928331  ___mDeviceTrackerRotationOffset_1;
	// System.Action Vuforia.DeviceTrackingManager::mBeforeDevicePoseUpdated
	Action_t1264377477 * ___mBeforeDevicePoseUpdated_2;
	// System.Action Vuforia.DeviceTrackingManager::mAfterDevicePoseUpdated
	Action_t1264377477 * ___mAfterDevicePoseUpdated_3;
	// System.Action`1<Vuforia.TrackableBehaviour/Status> Vuforia.DeviceTrackingManager::mStatusChanged
	Action_1_t1273373409 * ___mStatusChanged_4;
	// System.Action`2<Vuforia.TrackableBehaviour/Status,Vuforia.TrackableBehaviour/StatusInfo> Vuforia.DeviceTrackingManager::mStatusOrInfoChanged
	Action_2_t3478825536 * ___mStatusOrInfoChanged_5;
	// Vuforia.TrackableBehaviour/Status Vuforia.DeviceTrackingManager::mCurrentTrackableStatus
	int32_t ___mCurrentTrackableStatus_6;
	// Vuforia.TrackableBehaviour/StatusInfo Vuforia.DeviceTrackingManager::mCurrentTrackableStatusInfo
	int32_t ___mCurrentTrackableStatusInfo_7;

public:
	inline static int32_t get_offset_of_mDeviceTrackerPositonOffset_0() { return static_cast<int32_t>(offsetof(DeviceTrackingManager_t3849131975, ___mDeviceTrackerPositonOffset_0)); }
	inline Vector3_t3722313464  get_mDeviceTrackerPositonOffset_0() const { return ___mDeviceTrackerPositonOffset_0; }
	inline Vector3_t3722313464 * get_address_of_mDeviceTrackerPositonOffset_0() { return &___mDeviceTrackerPositonOffset_0; }
	inline void set_mDeviceTrackerPositonOffset_0(Vector3_t3722313464  value)
	{
		___mDeviceTrackerPositonOffset_0 = value;
	}

	inline static int32_t get_offset_of_mDeviceTrackerRotationOffset_1() { return static_cast<int32_t>(offsetof(DeviceTrackingManager_t3849131975, ___mDeviceTrackerRotationOffset_1)); }
	inline Quaternion_t2301928331  get_mDeviceTrackerRotationOffset_1() const { return ___mDeviceTrackerRotationOffset_1; }
	inline Quaternion_t2301928331 * get_address_of_mDeviceTrackerRotationOffset_1() { return &___mDeviceTrackerRotationOffset_1; }
	inline void set_mDeviceTrackerRotationOffset_1(Quaternion_t2301928331  value)
	{
		___mDeviceTrackerRotationOffset_1 = value;
	}

	inline static int32_t get_offset_of_mBeforeDevicePoseUpdated_2() { return static_cast<int32_t>(offsetof(DeviceTrackingManager_t3849131975, ___mBeforeDevicePoseUpdated_2)); }
	inline Action_t1264377477 * get_mBeforeDevicePoseUpdated_2() const { return ___mBeforeDevicePoseUpdated_2; }
	inline Action_t1264377477 ** get_address_of_mBeforeDevicePoseUpdated_2() { return &___mBeforeDevicePoseUpdated_2; }
	inline void set_mBeforeDevicePoseUpdated_2(Action_t1264377477 * value)
	{
		___mBeforeDevicePoseUpdated_2 = value;
		Il2CppCodeGenWriteBarrier((&___mBeforeDevicePoseUpdated_2), value);
	}

	inline static int32_t get_offset_of_mAfterDevicePoseUpdated_3() { return static_cast<int32_t>(offsetof(DeviceTrackingManager_t3849131975, ___mAfterDevicePoseUpdated_3)); }
	inline Action_t1264377477 * get_mAfterDevicePoseUpdated_3() const { return ___mAfterDevicePoseUpdated_3; }
	inline Action_t1264377477 ** get_address_of_mAfterDevicePoseUpdated_3() { return &___mAfterDevicePoseUpdated_3; }
	inline void set_mAfterDevicePoseUpdated_3(Action_t1264377477 * value)
	{
		___mAfterDevicePoseUpdated_3 = value;
		Il2CppCodeGenWriteBarrier((&___mAfterDevicePoseUpdated_3), value);
	}

	inline static int32_t get_offset_of_mStatusChanged_4() { return static_cast<int32_t>(offsetof(DeviceTrackingManager_t3849131975, ___mStatusChanged_4)); }
	inline Action_1_t1273373409 * get_mStatusChanged_4() const { return ___mStatusChanged_4; }
	inline Action_1_t1273373409 ** get_address_of_mStatusChanged_4() { return &___mStatusChanged_4; }
	inline void set_mStatusChanged_4(Action_1_t1273373409 * value)
	{
		___mStatusChanged_4 = value;
		Il2CppCodeGenWriteBarrier((&___mStatusChanged_4), value);
	}

	inline static int32_t get_offset_of_mStatusOrInfoChanged_5() { return static_cast<int32_t>(offsetof(DeviceTrackingManager_t3849131975, ___mStatusOrInfoChanged_5)); }
	inline Action_2_t3478825536 * get_mStatusOrInfoChanged_5() const { return ___mStatusOrInfoChanged_5; }
	inline Action_2_t3478825536 ** get_address_of_mStatusOrInfoChanged_5() { return &___mStatusOrInfoChanged_5; }
	inline void set_mStatusOrInfoChanged_5(Action_2_t3478825536 * value)
	{
		___mStatusOrInfoChanged_5 = value;
		Il2CppCodeGenWriteBarrier((&___mStatusOrInfoChanged_5), value);
	}

	inline static int32_t get_offset_of_mCurrentTrackableStatus_6() { return static_cast<int32_t>(offsetof(DeviceTrackingManager_t3849131975, ___mCurrentTrackableStatus_6)); }
	inline int32_t get_mCurrentTrackableStatus_6() const { return ___mCurrentTrackableStatus_6; }
	inline int32_t* get_address_of_mCurrentTrackableStatus_6() { return &___mCurrentTrackableStatus_6; }
	inline void set_mCurrentTrackableStatus_6(int32_t value)
	{
		___mCurrentTrackableStatus_6 = value;
	}

	inline static int32_t get_offset_of_mCurrentTrackableStatusInfo_7() { return static_cast<int32_t>(offsetof(DeviceTrackingManager_t3849131975, ___mCurrentTrackableStatusInfo_7)); }
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
#endif // DEVICETRACKINGMANAGER_T3849131975_H
#ifndef HIDEEXCESSAREAUTILITY_T3142786924_H
#define HIDEEXCESSAREAUTILITY_T3142786924_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.HideExcessAreaUtility
struct  HideExcessAreaUtility_t3142786924  : public RuntimeObject
{
public:
	// Vuforia.IExcessAreaClipping Vuforia.HideExcessAreaUtility::mClippingImpl
	RuntimeObject* ___mClippingImpl_0;
	// Vuforia.HideExcessAreaUtility/CLIPPING_MODE Vuforia.HideExcessAreaUtility::mClippingMode
	int32_t ___mClippingMode_1;
	// Vuforia.VideoBackgroundManager Vuforia.HideExcessAreaUtility::mVideoBgMgr
	VideoBackgroundManager_t2198727358 * ___mVideoBgMgr_2;
	// System.Boolean Vuforia.HideExcessAreaUtility::mSceneScaledDown
	bool ___mSceneScaledDown_3;
	// System.Boolean Vuforia.HideExcessAreaUtility::mStarted
	bool ___mStarted_4;
	// System.Boolean Vuforia.HideExcessAreaUtility::mEnabled
	bool ___mEnabled_5;
	// UnityEngine.GameObject Vuforia.HideExcessAreaUtility::mParentGameObject
	GameObject_t1113636619 * ___mParentGameObject_6;

public:
	inline static int32_t get_offset_of_mClippingImpl_0() { return static_cast<int32_t>(offsetof(HideExcessAreaUtility_t3142786924, ___mClippingImpl_0)); }
	inline RuntimeObject* get_mClippingImpl_0() const { return ___mClippingImpl_0; }
	inline RuntimeObject** get_address_of_mClippingImpl_0() { return &___mClippingImpl_0; }
	inline void set_mClippingImpl_0(RuntimeObject* value)
	{
		___mClippingImpl_0 = value;
		Il2CppCodeGenWriteBarrier((&___mClippingImpl_0), value);
	}

	inline static int32_t get_offset_of_mClippingMode_1() { return static_cast<int32_t>(offsetof(HideExcessAreaUtility_t3142786924, ___mClippingMode_1)); }
	inline int32_t get_mClippingMode_1() const { return ___mClippingMode_1; }
	inline int32_t* get_address_of_mClippingMode_1() { return &___mClippingMode_1; }
	inline void set_mClippingMode_1(int32_t value)
	{
		___mClippingMode_1 = value;
	}

	inline static int32_t get_offset_of_mVideoBgMgr_2() { return static_cast<int32_t>(offsetof(HideExcessAreaUtility_t3142786924, ___mVideoBgMgr_2)); }
	inline VideoBackgroundManager_t2198727358 * get_mVideoBgMgr_2() const { return ___mVideoBgMgr_2; }
	inline VideoBackgroundManager_t2198727358 ** get_address_of_mVideoBgMgr_2() { return &___mVideoBgMgr_2; }
	inline void set_mVideoBgMgr_2(VideoBackgroundManager_t2198727358 * value)
	{
		___mVideoBgMgr_2 = value;
		Il2CppCodeGenWriteBarrier((&___mVideoBgMgr_2), value);
	}

	inline static int32_t get_offset_of_mSceneScaledDown_3() { return static_cast<int32_t>(offsetof(HideExcessAreaUtility_t3142786924, ___mSceneScaledDown_3)); }
	inline bool get_mSceneScaledDown_3() const { return ___mSceneScaledDown_3; }
	inline bool* get_address_of_mSceneScaledDown_3() { return &___mSceneScaledDown_3; }
	inline void set_mSceneScaledDown_3(bool value)
	{
		___mSceneScaledDown_3 = value;
	}

	inline static int32_t get_offset_of_mStarted_4() { return static_cast<int32_t>(offsetof(HideExcessAreaUtility_t3142786924, ___mStarted_4)); }
	inline bool get_mStarted_4() const { return ___mStarted_4; }
	inline bool* get_address_of_mStarted_4() { return &___mStarted_4; }
	inline void set_mStarted_4(bool value)
	{
		___mStarted_4 = value;
	}

	inline static int32_t get_offset_of_mEnabled_5() { return static_cast<int32_t>(offsetof(HideExcessAreaUtility_t3142786924, ___mEnabled_5)); }
	inline bool get_mEnabled_5() const { return ___mEnabled_5; }
	inline bool* get_address_of_mEnabled_5() { return &___mEnabled_5; }
	inline void set_mEnabled_5(bool value)
	{
		___mEnabled_5 = value;
	}

	inline static int32_t get_offset_of_mParentGameObject_6() { return static_cast<int32_t>(offsetof(HideExcessAreaUtility_t3142786924, ___mParentGameObject_6)); }
	inline GameObject_t1113636619 * get_mParentGameObject_6() const { return ___mParentGameObject_6; }
	inline GameObject_t1113636619 ** get_address_of_mParentGameObject_6() { return &___mParentGameObject_6; }
	inline void set_mParentGameObject_6(GameObject_t1113636619 * value)
	{
		___mParentGameObject_6 = value;
		Il2CppCodeGenWriteBarrier((&___mParentGameObject_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HIDEEXCESSAREAUTILITY_T3142786924_H
#ifndef INSTANCEIDIMPL_T2824054591_H
#define INSTANCEIDIMPL_T2824054591_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.InstanceIdImpl
struct  InstanceIdImpl_t2824054591  : public RuntimeObject
{
public:
	// Vuforia.InstanceIdType Vuforia.InstanceIdImpl::mDataType
	int32_t ___mDataType_0;
	// System.Byte[] Vuforia.InstanceIdImpl::mBuffer
	ByteU5BU5D_t4116647657* ___mBuffer_1;
	// System.UInt64 Vuforia.InstanceIdImpl::mNumericValue
	uint64_t ___mNumericValue_2;
	// System.UInt32 Vuforia.InstanceIdImpl::mDataLength
	uint32_t ___mDataLength_3;
	// System.String Vuforia.InstanceIdImpl::mCachedStringValue
	String_t* ___mCachedStringValue_4;

public:
	inline static int32_t get_offset_of_mDataType_0() { return static_cast<int32_t>(offsetof(InstanceIdImpl_t2824054591, ___mDataType_0)); }
	inline int32_t get_mDataType_0() const { return ___mDataType_0; }
	inline int32_t* get_address_of_mDataType_0() { return &___mDataType_0; }
	inline void set_mDataType_0(int32_t value)
	{
		___mDataType_0 = value;
	}

	inline static int32_t get_offset_of_mBuffer_1() { return static_cast<int32_t>(offsetof(InstanceIdImpl_t2824054591, ___mBuffer_1)); }
	inline ByteU5BU5D_t4116647657* get_mBuffer_1() const { return ___mBuffer_1; }
	inline ByteU5BU5D_t4116647657** get_address_of_mBuffer_1() { return &___mBuffer_1; }
	inline void set_mBuffer_1(ByteU5BU5D_t4116647657* value)
	{
		___mBuffer_1 = value;
		Il2CppCodeGenWriteBarrier((&___mBuffer_1), value);
	}

	inline static int32_t get_offset_of_mNumericValue_2() { return static_cast<int32_t>(offsetof(InstanceIdImpl_t2824054591, ___mNumericValue_2)); }
	inline uint64_t get_mNumericValue_2() const { return ___mNumericValue_2; }
	inline uint64_t* get_address_of_mNumericValue_2() { return &___mNumericValue_2; }
	inline void set_mNumericValue_2(uint64_t value)
	{
		___mNumericValue_2 = value;
	}

	inline static int32_t get_offset_of_mDataLength_3() { return static_cast<int32_t>(offsetof(InstanceIdImpl_t2824054591, ___mDataLength_3)); }
	inline uint32_t get_mDataLength_3() const { return ___mDataLength_3; }
	inline uint32_t* get_address_of_mDataLength_3() { return &___mDataLength_3; }
	inline void set_mDataLength_3(uint32_t value)
	{
		___mDataLength_3 = value;
	}

	inline static int32_t get_offset_of_mCachedStringValue_4() { return static_cast<int32_t>(offsetof(InstanceIdImpl_t2824054591, ___mCachedStringValue_4)); }
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
#endif // INSTANCEIDIMPL_T2824054591_H
#ifndef MIXEDREALITYCONTROLLER_T13217384_H
#define MIXEDREALITYCONTROLLER_T13217384_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.MixedRealityController
struct  MixedRealityController_t13217384  : public RuntimeObject
{
public:
	// Vuforia.VuforiaARController Vuforia.MixedRealityController::mVuforiaBehaviour
	VuforiaARController_t1876945237 * ___mVuforiaBehaviour_2;
	// Vuforia.DigitalEyewearARController Vuforia.MixedRealityController::mDigitalEyewearBehaviour
	DigitalEyewearARController_t1054226036 * ___mDigitalEyewearBehaviour_3;
	// Vuforia.VideoBackgroundManager Vuforia.MixedRealityController::mVideoBackgroundManager
	VideoBackgroundManager_t2198727358 * ___mVideoBackgroundManager_4;
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
	inline static int32_t get_offset_of_mVuforiaBehaviour_2() { return static_cast<int32_t>(offsetof(MixedRealityController_t13217384, ___mVuforiaBehaviour_2)); }
	inline VuforiaARController_t1876945237 * get_mVuforiaBehaviour_2() const { return ___mVuforiaBehaviour_2; }
	inline VuforiaARController_t1876945237 ** get_address_of_mVuforiaBehaviour_2() { return &___mVuforiaBehaviour_2; }
	inline void set_mVuforiaBehaviour_2(VuforiaARController_t1876945237 * value)
	{
		___mVuforiaBehaviour_2 = value;
		Il2CppCodeGenWriteBarrier((&___mVuforiaBehaviour_2), value);
	}

	inline static int32_t get_offset_of_mDigitalEyewearBehaviour_3() { return static_cast<int32_t>(offsetof(MixedRealityController_t13217384, ___mDigitalEyewearBehaviour_3)); }
	inline DigitalEyewearARController_t1054226036 * get_mDigitalEyewearBehaviour_3() const { return ___mDigitalEyewearBehaviour_3; }
	inline DigitalEyewearARController_t1054226036 ** get_address_of_mDigitalEyewearBehaviour_3() { return &___mDigitalEyewearBehaviour_3; }
	inline void set_mDigitalEyewearBehaviour_3(DigitalEyewearARController_t1054226036 * value)
	{
		___mDigitalEyewearBehaviour_3 = value;
		Il2CppCodeGenWriteBarrier((&___mDigitalEyewearBehaviour_3), value);
	}

	inline static int32_t get_offset_of_mVideoBackgroundManager_4() { return static_cast<int32_t>(offsetof(MixedRealityController_t13217384, ___mVideoBackgroundManager_4)); }
	inline VideoBackgroundManager_t2198727358 * get_mVideoBackgroundManager_4() const { return ___mVideoBackgroundManager_4; }
	inline VideoBackgroundManager_t2198727358 ** get_address_of_mVideoBackgroundManager_4() { return &___mVideoBackgroundManager_4; }
	inline void set_mVideoBackgroundManager_4(VideoBackgroundManager_t2198727358 * value)
	{
		___mVideoBackgroundManager_4 = value;
		Il2CppCodeGenWriteBarrier((&___mVideoBackgroundManager_4), value);
	}

	inline static int32_t get_offset_of_mViewerHasBeenSetExternally_5() { return static_cast<int32_t>(offsetof(MixedRealityController_t13217384, ___mViewerHasBeenSetExternally_5)); }
	inline bool get_mViewerHasBeenSetExternally_5() const { return ___mViewerHasBeenSetExternally_5; }
	inline bool* get_address_of_mViewerHasBeenSetExternally_5() { return &___mViewerHasBeenSetExternally_5; }
	inline void set_mViewerHasBeenSetExternally_5(bool value)
	{
		___mViewerHasBeenSetExternally_5 = value;
	}

	inline static int32_t get_offset_of_mViewerParameters_6() { return static_cast<int32_t>(offsetof(MixedRealityController_t13217384, ___mViewerParameters_6)); }
	inline RuntimeObject* get_mViewerParameters_6() const { return ___mViewerParameters_6; }
	inline RuntimeObject** get_address_of_mViewerParameters_6() { return &___mViewerParameters_6; }
	inline void set_mViewerParameters_6(RuntimeObject* value)
	{
		___mViewerParameters_6 = value;
		Il2CppCodeGenWriteBarrier((&___mViewerParameters_6), value);
	}

	inline static int32_t get_offset_of_mFrameWorkHasBeenSetExternally_7() { return static_cast<int32_t>(offsetof(MixedRealityController_t13217384, ___mFrameWorkHasBeenSetExternally_7)); }
	inline bool get_mFrameWorkHasBeenSetExternally_7() const { return ___mFrameWorkHasBeenSetExternally_7; }
	inline bool* get_address_of_mFrameWorkHasBeenSetExternally_7() { return &___mFrameWorkHasBeenSetExternally_7; }
	inline void set_mFrameWorkHasBeenSetExternally_7(bool value)
	{
		___mFrameWorkHasBeenSetExternally_7 = value;
	}

	inline static int32_t get_offset_of_mStereoFramework_8() { return static_cast<int32_t>(offsetof(MixedRealityController_t13217384, ___mStereoFramework_8)); }
	inline int32_t get_mStereoFramework_8() const { return ___mStereoFramework_8; }
	inline int32_t* get_address_of_mStereoFramework_8() { return &___mStereoFramework_8; }
	inline void set_mStereoFramework_8(int32_t value)
	{
		___mStereoFramework_8 = value;
	}

	inline static int32_t get_offset_of_mObjectTrackerStopped_9() { return static_cast<int32_t>(offsetof(MixedRealityController_t13217384, ___mObjectTrackerStopped_9)); }
	inline bool get_mObjectTrackerStopped_9() const { return ___mObjectTrackerStopped_9; }
	inline bool* get_address_of_mObjectTrackerStopped_9() { return &___mObjectTrackerStopped_9; }
	inline void set_mObjectTrackerStopped_9(bool value)
	{
		___mObjectTrackerStopped_9 = value;
	}

	inline static int32_t get_offset_of_mAutoStopCameraIfNotRequired_10() { return static_cast<int32_t>(offsetof(MixedRealityController_t13217384, ___mAutoStopCameraIfNotRequired_10)); }
	inline bool get_mAutoStopCameraIfNotRequired_10() const { return ___mAutoStopCameraIfNotRequired_10; }
	inline bool* get_address_of_mAutoStopCameraIfNotRequired_10() { return &___mAutoStopCameraIfNotRequired_10; }
	inline void set_mAutoStopCameraIfNotRequired_10(bool value)
	{
		___mAutoStopCameraIfNotRequired_10 = value;
	}
};

struct MixedRealityController_t13217384_StaticFields
{
public:
	// Vuforia.MixedRealityController Vuforia.MixedRealityController::mInstance
	MixedRealityController_t13217384 * ___mInstance_1;

public:
	inline static int32_t get_offset_of_mInstance_1() { return static_cast<int32_t>(offsetof(MixedRealityController_t13217384_StaticFields, ___mInstance_1)); }
	inline MixedRealityController_t13217384 * get_mInstance_1() const { return ___mInstance_1; }
	inline MixedRealityController_t13217384 ** get_address_of_mInstance_1() { return &___mInstance_1; }
	inline void set_mInstance_1(MixedRealityController_t13217384 * value)
	{
		___mInstance_1 = value;
		Il2CppCodeGenWriteBarrier((&___mInstance_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MIXEDREALITYCONTROLLER_T13217384_H
#ifndef NULLCAMERACONFIGURATION_T2773452281_H
#define NULLCAMERACONFIGURATION_T2773452281_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.NullCameraConfiguration
struct  NullCameraConfiguration_t2773452281  : public RuntimeObject
{
public:
	// UnityEngine.ScreenOrientation Vuforia.NullCameraConfiguration::mProjectionOrientation
	int32_t ___mProjectionOrientation_0;

public:
	inline static int32_t get_offset_of_mProjectionOrientation_0() { return static_cast<int32_t>(offsetof(NullCameraConfiguration_t2773452281, ___mProjectionOrientation_0)); }
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
#endif // NULLCAMERACONFIGURATION_T2773452281_H
#ifndef ROTATIONALDEVICETRACKERIMPL_T1573407597_H
#define ROTATIONALDEVICETRACKERIMPL_T1573407597_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.RotationalDeviceTrackerImpl
struct  RotationalDeviceTrackerImpl_t1573407597  : public RotationalDeviceTracker_t2847210804
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ROTATIONALDEVICETRACKERIMPL_T1573407597_H
#ifndef ROTATIONALPLAYMODEDEVICETRACKERIMPL_T4048275232_H
#define ROTATIONALPLAYMODEDEVICETRACKERIMPL_T4048275232_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.RotationalPlayModeDeviceTrackerImpl
struct  RotationalPlayModeDeviceTrackerImpl_t4048275232  : public RotationalDeviceTracker_t2847210804
{
public:
	// UnityEngine.Vector3 Vuforia.RotationalPlayModeDeviceTrackerImpl::mVectorZero
	Vector3_t3722313464  ___mVectorZero_1;
	// UnityEngine.Vector3 Vuforia.RotationalPlayModeDeviceTrackerImpl::mModelCorrectionTransform
	Vector3_t3722313464  ___mModelCorrectionTransform_2;
	// Vuforia.RotationalDeviceTracker/MODEL_CORRECTION_MODE Vuforia.RotationalPlayModeDeviceTrackerImpl::mModelCorrection
	int32_t ___mModelCorrection_3;
	// UnityEngine.Vector3 Vuforia.RotationalPlayModeDeviceTrackerImpl::<Rotation>k__BackingField
	Vector3_t3722313464  ___U3CRotationU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_mVectorZero_1() { return static_cast<int32_t>(offsetof(RotationalPlayModeDeviceTrackerImpl_t4048275232, ___mVectorZero_1)); }
	inline Vector3_t3722313464  get_mVectorZero_1() const { return ___mVectorZero_1; }
	inline Vector3_t3722313464 * get_address_of_mVectorZero_1() { return &___mVectorZero_1; }
	inline void set_mVectorZero_1(Vector3_t3722313464  value)
	{
		___mVectorZero_1 = value;
	}

	inline static int32_t get_offset_of_mModelCorrectionTransform_2() { return static_cast<int32_t>(offsetof(RotationalPlayModeDeviceTrackerImpl_t4048275232, ___mModelCorrectionTransform_2)); }
	inline Vector3_t3722313464  get_mModelCorrectionTransform_2() const { return ___mModelCorrectionTransform_2; }
	inline Vector3_t3722313464 * get_address_of_mModelCorrectionTransform_2() { return &___mModelCorrectionTransform_2; }
	inline void set_mModelCorrectionTransform_2(Vector3_t3722313464  value)
	{
		___mModelCorrectionTransform_2 = value;
	}

	inline static int32_t get_offset_of_mModelCorrection_3() { return static_cast<int32_t>(offsetof(RotationalPlayModeDeviceTrackerImpl_t4048275232, ___mModelCorrection_3)); }
	inline int32_t get_mModelCorrection_3() const { return ___mModelCorrection_3; }
	inline int32_t* get_address_of_mModelCorrection_3() { return &___mModelCorrection_3; }
	inline void set_mModelCorrection_3(int32_t value)
	{
		___mModelCorrection_3 = value;
	}

	inline static int32_t get_offset_of_U3CRotationU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(RotationalPlayModeDeviceTrackerImpl_t4048275232, ___U3CRotationU3Ek__BackingField_4)); }
	inline Vector3_t3722313464  get_U3CRotationU3Ek__BackingField_4() const { return ___U3CRotationU3Ek__BackingField_4; }
	inline Vector3_t3722313464 * get_address_of_U3CRotationU3Ek__BackingField_4() { return &___U3CRotationU3Ek__BackingField_4; }
	inline void set_U3CRotationU3Ek__BackingField_4(Vector3_t3722313464  value)
	{
		___U3CRotationU3Ek__BackingField_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ROTATIONALPLAYMODEDEVICETRACKERIMPL_T4048275232_H
#ifndef TRACKABLERESULTDATA_T452703160_H
#define TRACKABLERESULTDATA_T452703160_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.TrackerData/TrackableResultData
#pragma pack(push, tp, 1)
struct  TrackableResultData_t452703160 
{
public:
	// Vuforia.TrackerData/PoseData Vuforia.TrackerData/TrackableResultData::pose
	PoseData_t3794839648  ___pose_0;
	// System.Double Vuforia.TrackerData/TrackableResultData::timeStamp
	double ___timeStamp_1;
	// System.Int32 Vuforia.TrackerData/TrackableResultData::statusInteger
	int32_t ___statusInteger_2;
	// System.Int32 Vuforia.TrackerData/TrackableResultData::id
	int32_t ___id_3;

public:
	inline static int32_t get_offset_of_pose_0() { return static_cast<int32_t>(offsetof(TrackableResultData_t452703160, ___pose_0)); }
	inline PoseData_t3794839648  get_pose_0() const { return ___pose_0; }
	inline PoseData_t3794839648 * get_address_of_pose_0() { return &___pose_0; }
	inline void set_pose_0(PoseData_t3794839648  value)
	{
		___pose_0 = value;
	}

	inline static int32_t get_offset_of_timeStamp_1() { return static_cast<int32_t>(offsetof(TrackableResultData_t452703160, ___timeStamp_1)); }
	inline double get_timeStamp_1() const { return ___timeStamp_1; }
	inline double* get_address_of_timeStamp_1() { return &___timeStamp_1; }
	inline void set_timeStamp_1(double value)
	{
		___timeStamp_1 = value;
	}

	inline static int32_t get_offset_of_statusInteger_2() { return static_cast<int32_t>(offsetof(TrackableResultData_t452703160, ___statusInteger_2)); }
	inline int32_t get_statusInteger_2() const { return ___statusInteger_2; }
	inline int32_t* get_address_of_statusInteger_2() { return &___statusInteger_2; }
	inline void set_statusInteger_2(int32_t value)
	{
		___statusInteger_2 = value;
	}

	inline static int32_t get_offset_of_id_3() { return static_cast<int32_t>(offsetof(TrackableResultData_t452703160, ___id_3)); }
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
#endif // TRACKABLERESULTDATA_T452703160_H
#ifndef VUMARKTARGETDATA_T3266143771_H
#define VUMARKTARGETDATA_T3266143771_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.TrackerData/VuMarkTargetData
#pragma pack(push, tp, 1)
struct  VuMarkTargetData_t3266143771 
{
public:
	// Vuforia.TrackerData/InstanceIdData Vuforia.TrackerData/VuMarkTargetData::instanceId
	InstanceIdData_t3520832738  ___instanceId_0;
	// System.Int32 Vuforia.TrackerData/VuMarkTargetData::id
	int32_t ___id_1;
	// System.Int32 Vuforia.TrackerData/VuMarkTargetData::templateId
	int32_t ___templateId_2;
	// UnityEngine.Vector3 Vuforia.TrackerData/VuMarkTargetData::size
	Vector3_t3722313464  ___size_3;
	// System.Int32 Vuforia.TrackerData/VuMarkTargetData::unused
	int32_t ___unused_4;

public:
	inline static int32_t get_offset_of_instanceId_0() { return static_cast<int32_t>(offsetof(VuMarkTargetData_t3266143771, ___instanceId_0)); }
	inline InstanceIdData_t3520832738  get_instanceId_0() const { return ___instanceId_0; }
	inline InstanceIdData_t3520832738 * get_address_of_instanceId_0() { return &___instanceId_0; }
	inline void set_instanceId_0(InstanceIdData_t3520832738  value)
	{
		___instanceId_0 = value;
	}

	inline static int32_t get_offset_of_id_1() { return static_cast<int32_t>(offsetof(VuMarkTargetData_t3266143771, ___id_1)); }
	inline int32_t get_id_1() const { return ___id_1; }
	inline int32_t* get_address_of_id_1() { return &___id_1; }
	inline void set_id_1(int32_t value)
	{
		___id_1 = value;
	}

	inline static int32_t get_offset_of_templateId_2() { return static_cast<int32_t>(offsetof(VuMarkTargetData_t3266143771, ___templateId_2)); }
	inline int32_t get_templateId_2() const { return ___templateId_2; }
	inline int32_t* get_address_of_templateId_2() { return &___templateId_2; }
	inline void set_templateId_2(int32_t value)
	{
		___templateId_2 = value;
	}

	inline static int32_t get_offset_of_size_3() { return static_cast<int32_t>(offsetof(VuMarkTargetData_t3266143771, ___size_3)); }
	inline Vector3_t3722313464  get_size_3() const { return ___size_3; }
	inline Vector3_t3722313464 * get_address_of_size_3() { return &___size_3; }
	inline void set_size_3(Vector3_t3722313464  value)
	{
		___size_3 = value;
	}

	inline static int32_t get_offset_of_unused_4() { return static_cast<int32_t>(offsetof(VuMarkTargetData_t3266143771, ___unused_4)); }
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
#endif // VUMARKTARGETDATA_T3266143771_H
#ifndef VUMARKTARGETRESULTDATA_T2153299244_H
#define VUMARKTARGETRESULTDATA_T2153299244_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.TrackerData/VuMarkTargetResultData
#pragma pack(push, tp, 1)
struct  VuMarkTargetResultData_t2153299244 
{
public:
	// Vuforia.TrackerData/PoseData Vuforia.TrackerData/VuMarkTargetResultData::pose
	PoseData_t3794839648  ___pose_0;
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
	inline static int32_t get_offset_of_pose_0() { return static_cast<int32_t>(offsetof(VuMarkTargetResultData_t2153299244, ___pose_0)); }
	inline PoseData_t3794839648  get_pose_0() const { return ___pose_0; }
	inline PoseData_t3794839648 * get_address_of_pose_0() { return &___pose_0; }
	inline void set_pose_0(PoseData_t3794839648  value)
	{
		___pose_0 = value;
	}

	inline static int32_t get_offset_of_timeStamp_1() { return static_cast<int32_t>(offsetof(VuMarkTargetResultData_t2153299244, ___timeStamp_1)); }
	inline double get_timeStamp_1() const { return ___timeStamp_1; }
	inline double* get_address_of_timeStamp_1() { return &___timeStamp_1; }
	inline void set_timeStamp_1(double value)
	{
		___timeStamp_1 = value;
	}

	inline static int32_t get_offset_of_statusInteger_2() { return static_cast<int32_t>(offsetof(VuMarkTargetResultData_t2153299244, ___statusInteger_2)); }
	inline int32_t get_statusInteger_2() const { return ___statusInteger_2; }
	inline int32_t* get_address_of_statusInteger_2() { return &___statusInteger_2; }
	inline void set_statusInteger_2(int32_t value)
	{
		___statusInteger_2 = value;
	}

	inline static int32_t get_offset_of_targetID_3() { return static_cast<int32_t>(offsetof(VuMarkTargetResultData_t2153299244, ___targetID_3)); }
	inline int32_t get_targetID_3() const { return ___targetID_3; }
	inline int32_t* get_address_of_targetID_3() { return &___targetID_3; }
	inline void set_targetID_3(int32_t value)
	{
		___targetID_3 = value;
	}

	inline static int32_t get_offset_of_resultID_4() { return static_cast<int32_t>(offsetof(VuMarkTargetResultData_t2153299244, ___resultID_4)); }
	inline int32_t get_resultID_4() const { return ___resultID_4; }
	inline int32_t* get_address_of_resultID_4() { return &___resultID_4; }
	inline void set_resultID_4(int32_t value)
	{
		___resultID_4 = value;
	}

	inline static int32_t get_offset_of_unused_5() { return static_cast<int32_t>(offsetof(VuMarkTargetResultData_t2153299244, ___unused_5)); }
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
#endif // VUMARKTARGETRESULTDATA_T2153299244_H
#ifndef VUMARKTARGETIMPL_T1052843922_H
#define VUMARKTARGETIMPL_T1052843922_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.VuMarkTargetImpl
struct  VuMarkTargetImpl_t1052843922  : public ObjectTargetImpl_t3614635090
{
public:
	// Vuforia.VuMarkTemplateImpl Vuforia.VuMarkTargetImpl::mVuMarkTemplate
	VuMarkTemplateImpl_t667343433 * ___mVuMarkTemplate_3;
	// Vuforia.InstanceIdImpl Vuforia.VuMarkTargetImpl::mInstanceId
	InstanceIdImpl_t2824054591 * ___mInstanceId_4;
	// Vuforia.Image Vuforia.VuMarkTargetImpl::mInstanceImage
	Image_t745056343 * ___mInstanceImage_5;
	// Vuforia.TrackerData/ImageHeaderData Vuforia.VuMarkTargetImpl::mInstanceImageHeader
	ImageHeaderData_t3550119865  ___mInstanceImageHeader_6;

public:
	inline static int32_t get_offset_of_mVuMarkTemplate_3() { return static_cast<int32_t>(offsetof(VuMarkTargetImpl_t1052843922, ___mVuMarkTemplate_3)); }
	inline VuMarkTemplateImpl_t667343433 * get_mVuMarkTemplate_3() const { return ___mVuMarkTemplate_3; }
	inline VuMarkTemplateImpl_t667343433 ** get_address_of_mVuMarkTemplate_3() { return &___mVuMarkTemplate_3; }
	inline void set_mVuMarkTemplate_3(VuMarkTemplateImpl_t667343433 * value)
	{
		___mVuMarkTemplate_3 = value;
		Il2CppCodeGenWriteBarrier((&___mVuMarkTemplate_3), value);
	}

	inline static int32_t get_offset_of_mInstanceId_4() { return static_cast<int32_t>(offsetof(VuMarkTargetImpl_t1052843922, ___mInstanceId_4)); }
	inline InstanceIdImpl_t2824054591 * get_mInstanceId_4() const { return ___mInstanceId_4; }
	inline InstanceIdImpl_t2824054591 ** get_address_of_mInstanceId_4() { return &___mInstanceId_4; }
	inline void set_mInstanceId_4(InstanceIdImpl_t2824054591 * value)
	{
		___mInstanceId_4 = value;
		Il2CppCodeGenWriteBarrier((&___mInstanceId_4), value);
	}

	inline static int32_t get_offset_of_mInstanceImage_5() { return static_cast<int32_t>(offsetof(VuMarkTargetImpl_t1052843922, ___mInstanceImage_5)); }
	inline Image_t745056343 * get_mInstanceImage_5() const { return ___mInstanceImage_5; }
	inline Image_t745056343 ** get_address_of_mInstanceImage_5() { return &___mInstanceImage_5; }
	inline void set_mInstanceImage_5(Image_t745056343 * value)
	{
		___mInstanceImage_5 = value;
		Il2CppCodeGenWriteBarrier((&___mInstanceImage_5), value);
	}

	inline static int32_t get_offset_of_mInstanceImageHeader_6() { return static_cast<int32_t>(offsetof(VuMarkTargetImpl_t1052843922, ___mInstanceImageHeader_6)); }
	inline ImageHeaderData_t3550119865  get_mInstanceImageHeader_6() const { return ___mInstanceImageHeader_6; }
	inline ImageHeaderData_t3550119865 * get_address_of_mInstanceImageHeader_6() { return &___mInstanceImageHeader_6; }
	inline void set_mInstanceImageHeader_6(ImageHeaderData_t3550119865  value)
	{
		___mInstanceImageHeader_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VUMARKTARGETIMPL_T1052843922_H
#ifndef VUMARKSETTARGETSIZE_T4198822840_H
#define VUMARKSETTARGETSIZE_T4198822840_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.VuMarkTargetImpl/VuMarkSetTargetSize
struct  VuMarkSetTargetSize_t4198822840  : public DisabledSetTargetSize_t3520378128
{
public:
	// Vuforia.VuMarkTemplate Vuforia.VuMarkTargetImpl/VuMarkSetTargetSize::mTemplate
	RuntimeObject* ___mTemplate_1;

public:
	inline static int32_t get_offset_of_mTemplate_1() { return static_cast<int32_t>(offsetof(VuMarkSetTargetSize_t4198822840, ___mTemplate_1)); }
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
#endif // VUMARKSETTARGETSIZE_T4198822840_H
#ifndef VUMARKTEMPLATEIMPL_T667343433_H
#define VUMARKTEMPLATEIMPL_T667343433_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.VuMarkTemplateImpl
struct  VuMarkTemplateImpl_t667343433  : public DataSetObjectTargetImpl_t2835536742
{
public:
	// System.String Vuforia.VuMarkTemplateImpl::mUserData
	String_t* ___mUserData_4;
	// UnityEngine.Vector2 Vuforia.VuMarkTemplateImpl::mOrigin
	Vector2_t2156229523  ___mOrigin_5;
	// System.Boolean Vuforia.VuMarkTemplateImpl::mTrackingFromRuntimeAppearance
	bool ___mTrackingFromRuntimeAppearance_6;

public:
	inline static int32_t get_offset_of_mUserData_4() { return static_cast<int32_t>(offsetof(VuMarkTemplateImpl_t667343433, ___mUserData_4)); }
	inline String_t* get_mUserData_4() const { return ___mUserData_4; }
	inline String_t** get_address_of_mUserData_4() { return &___mUserData_4; }
	inline void set_mUserData_4(String_t* value)
	{
		___mUserData_4 = value;
		Il2CppCodeGenWriteBarrier((&___mUserData_4), value);
	}

	inline static int32_t get_offset_of_mOrigin_5() { return static_cast<int32_t>(offsetof(VuMarkTemplateImpl_t667343433, ___mOrigin_5)); }
	inline Vector2_t2156229523  get_mOrigin_5() const { return ___mOrigin_5; }
	inline Vector2_t2156229523 * get_address_of_mOrigin_5() { return &___mOrigin_5; }
	inline void set_mOrigin_5(Vector2_t2156229523  value)
	{
		___mOrigin_5 = value;
	}

	inline static int32_t get_offset_of_mTrackingFromRuntimeAppearance_6() { return static_cast<int32_t>(offsetof(VuMarkTemplateImpl_t667343433, ___mTrackingFromRuntimeAppearance_6)); }
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
#endif // VUMARKTEMPLATEIMPL_T667343433_H
#ifndef DEVICETRACKERCONFIGURATION_T721467671_H
#define DEVICETRACKERCONFIGURATION_T721467671_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.VuforiaConfiguration/DeviceTrackerConfiguration
struct  DeviceTrackerConfiguration_t721467671  : public TrackerConfiguration_t3072429111
{
public:
	// Vuforia.DeviceTracker/TRACKING_MODE Vuforia.VuforiaConfiguration/DeviceTrackerConfiguration::trackingMode
	int32_t ___trackingMode_2;
	// System.Boolean Vuforia.VuforiaConfiguration/DeviceTrackerConfiguration::posePrediction
	bool ___posePrediction_3;
	// Vuforia.RotationalDeviceTracker/MODEL_CORRECTION_MODE Vuforia.VuforiaConfiguration/DeviceTrackerConfiguration::modelCorrectionMode
	int32_t ___modelCorrectionMode_4;
	// System.Boolean Vuforia.VuforiaConfiguration/DeviceTrackerConfiguration::modelTransformEnabled
	bool ___modelTransformEnabled_5;
	// UnityEngine.Vector3 Vuforia.VuforiaConfiguration/DeviceTrackerConfiguration::modelTransform
	Vector3_t3722313464  ___modelTransform_6;
	// Vuforia.FusionProviderType Vuforia.VuforiaConfiguration/DeviceTrackerConfiguration::fusionMode
	int32_t ___fusionMode_7;

public:
	inline static int32_t get_offset_of_trackingMode_2() { return static_cast<int32_t>(offsetof(DeviceTrackerConfiguration_t721467671, ___trackingMode_2)); }
	inline int32_t get_trackingMode_2() const { return ___trackingMode_2; }
	inline int32_t* get_address_of_trackingMode_2() { return &___trackingMode_2; }
	inline void set_trackingMode_2(int32_t value)
	{
		___trackingMode_2 = value;
	}

	inline static int32_t get_offset_of_posePrediction_3() { return static_cast<int32_t>(offsetof(DeviceTrackerConfiguration_t721467671, ___posePrediction_3)); }
	inline bool get_posePrediction_3() const { return ___posePrediction_3; }
	inline bool* get_address_of_posePrediction_3() { return &___posePrediction_3; }
	inline void set_posePrediction_3(bool value)
	{
		___posePrediction_3 = value;
	}

	inline static int32_t get_offset_of_modelCorrectionMode_4() { return static_cast<int32_t>(offsetof(DeviceTrackerConfiguration_t721467671, ___modelCorrectionMode_4)); }
	inline int32_t get_modelCorrectionMode_4() const { return ___modelCorrectionMode_4; }
	inline int32_t* get_address_of_modelCorrectionMode_4() { return &___modelCorrectionMode_4; }
	inline void set_modelCorrectionMode_4(int32_t value)
	{
		___modelCorrectionMode_4 = value;
	}

	inline static int32_t get_offset_of_modelTransformEnabled_5() { return static_cast<int32_t>(offsetof(DeviceTrackerConfiguration_t721467671, ___modelTransformEnabled_5)); }
	inline bool get_modelTransformEnabled_5() const { return ___modelTransformEnabled_5; }
	inline bool* get_address_of_modelTransformEnabled_5() { return &___modelTransformEnabled_5; }
	inline void set_modelTransformEnabled_5(bool value)
	{
		___modelTransformEnabled_5 = value;
	}

	inline static int32_t get_offset_of_modelTransform_6() { return static_cast<int32_t>(offsetof(DeviceTrackerConfiguration_t721467671, ___modelTransform_6)); }
	inline Vector3_t3722313464  get_modelTransform_6() const { return ___modelTransform_6; }
	inline Vector3_t3722313464 * get_address_of_modelTransform_6() { return &___modelTransform_6; }
	inline void set_modelTransform_6(Vector3_t3722313464  value)
	{
		___modelTransform_6 = value;
	}

	inline static int32_t get_offset_of_fusionMode_7() { return static_cast<int32_t>(offsetof(DeviceTrackerConfiguration_t721467671, ___fusionMode_7)); }
	inline int32_t get_fusionMode_7() const { return ___fusionMode_7; }
	inline int32_t* get_address_of_fusionMode_7() { return &___fusionMode_7; }
	inline void set_fusionMode_7(int32_t value)
	{
		___fusionMode_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEVICETRACKERCONFIGURATION_T721467671_H
#ifndef DIGITALEYEWEARCONFIGURATION_T546560202_H
#define DIGITALEYEWEARCONFIGURATION_T546560202_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.VuforiaConfiguration/DigitalEyewearConfiguration
struct  DigitalEyewearConfiguration_t546560202  : public RuntimeObject
{
public:
	// System.Single Vuforia.VuforiaConfiguration/DigitalEyewearConfiguration::cameraOffset
	float ___cameraOffset_0;
	// System.Int32 Vuforia.VuforiaConfiguration/DigitalEyewearConfiguration::distortionRenderingLayer
	int32_t ___distortionRenderingLayer_1;
	// Vuforia.DigitalEyewearARController/EyewearType Vuforia.VuforiaConfiguration/DigitalEyewearConfiguration::eyewearType
	int32_t ___eyewearType_2;
	// Vuforia.DigitalEyewearARController/StereoFramework Vuforia.VuforiaConfiguration/DigitalEyewearConfiguration::stereoFramework
	int32_t ___stereoFramework_3;
	// Vuforia.DigitalEyewearARController/SeeThroughConfiguration Vuforia.VuforiaConfiguration/DigitalEyewearConfiguration::seeThroughConfiguration
	int32_t ___seeThroughConfiguration_4;
	// System.String Vuforia.VuforiaConfiguration/DigitalEyewearConfiguration::viewerName
	String_t* ___viewerName_5;
	// System.String Vuforia.VuforiaConfiguration/DigitalEyewearConfiguration::viewerManufacturer
	String_t* ___viewerManufacturer_6;
	// System.Boolean Vuforia.VuforiaConfiguration/DigitalEyewearConfiguration::useCustomViewer
	bool ___useCustomViewer_7;
	// Vuforia.DigitalEyewearARController/SerializableViewerParameters Vuforia.VuforiaConfiguration/DigitalEyewearConfiguration::customViewer
	SerializableViewerParameters_t2043332680 * ___customViewer_8;

public:
	inline static int32_t get_offset_of_cameraOffset_0() { return static_cast<int32_t>(offsetof(DigitalEyewearConfiguration_t546560202, ___cameraOffset_0)); }
	inline float get_cameraOffset_0() const { return ___cameraOffset_0; }
	inline float* get_address_of_cameraOffset_0() { return &___cameraOffset_0; }
	inline void set_cameraOffset_0(float value)
	{
		___cameraOffset_0 = value;
	}

	inline static int32_t get_offset_of_distortionRenderingLayer_1() { return static_cast<int32_t>(offsetof(DigitalEyewearConfiguration_t546560202, ___distortionRenderingLayer_1)); }
	inline int32_t get_distortionRenderingLayer_1() const { return ___distortionRenderingLayer_1; }
	inline int32_t* get_address_of_distortionRenderingLayer_1() { return &___distortionRenderingLayer_1; }
	inline void set_distortionRenderingLayer_1(int32_t value)
	{
		___distortionRenderingLayer_1 = value;
	}

	inline static int32_t get_offset_of_eyewearType_2() { return static_cast<int32_t>(offsetof(DigitalEyewearConfiguration_t546560202, ___eyewearType_2)); }
	inline int32_t get_eyewearType_2() const { return ___eyewearType_2; }
	inline int32_t* get_address_of_eyewearType_2() { return &___eyewearType_2; }
	inline void set_eyewearType_2(int32_t value)
	{
		___eyewearType_2 = value;
	}

	inline static int32_t get_offset_of_stereoFramework_3() { return static_cast<int32_t>(offsetof(DigitalEyewearConfiguration_t546560202, ___stereoFramework_3)); }
	inline int32_t get_stereoFramework_3() const { return ___stereoFramework_3; }
	inline int32_t* get_address_of_stereoFramework_3() { return &___stereoFramework_3; }
	inline void set_stereoFramework_3(int32_t value)
	{
		___stereoFramework_3 = value;
	}

	inline static int32_t get_offset_of_seeThroughConfiguration_4() { return static_cast<int32_t>(offsetof(DigitalEyewearConfiguration_t546560202, ___seeThroughConfiguration_4)); }
	inline int32_t get_seeThroughConfiguration_4() const { return ___seeThroughConfiguration_4; }
	inline int32_t* get_address_of_seeThroughConfiguration_4() { return &___seeThroughConfiguration_4; }
	inline void set_seeThroughConfiguration_4(int32_t value)
	{
		___seeThroughConfiguration_4 = value;
	}

	inline static int32_t get_offset_of_viewerName_5() { return static_cast<int32_t>(offsetof(DigitalEyewearConfiguration_t546560202, ___viewerName_5)); }
	inline String_t* get_viewerName_5() const { return ___viewerName_5; }
	inline String_t** get_address_of_viewerName_5() { return &___viewerName_5; }
	inline void set_viewerName_5(String_t* value)
	{
		___viewerName_5 = value;
		Il2CppCodeGenWriteBarrier((&___viewerName_5), value);
	}

	inline static int32_t get_offset_of_viewerManufacturer_6() { return static_cast<int32_t>(offsetof(DigitalEyewearConfiguration_t546560202, ___viewerManufacturer_6)); }
	inline String_t* get_viewerManufacturer_6() const { return ___viewerManufacturer_6; }
	inline String_t** get_address_of_viewerManufacturer_6() { return &___viewerManufacturer_6; }
	inline void set_viewerManufacturer_6(String_t* value)
	{
		___viewerManufacturer_6 = value;
		Il2CppCodeGenWriteBarrier((&___viewerManufacturer_6), value);
	}

	inline static int32_t get_offset_of_useCustomViewer_7() { return static_cast<int32_t>(offsetof(DigitalEyewearConfiguration_t546560202, ___useCustomViewer_7)); }
	inline bool get_useCustomViewer_7() const { return ___useCustomViewer_7; }
	inline bool* get_address_of_useCustomViewer_7() { return &___useCustomViewer_7; }
	inline void set_useCustomViewer_7(bool value)
	{
		___useCustomViewer_7 = value;
	}

	inline static int32_t get_offset_of_customViewer_8() { return static_cast<int32_t>(offsetof(DigitalEyewearConfiguration_t546560202, ___customViewer_8)); }
	inline SerializableViewerParameters_t2043332680 * get_customViewer_8() const { return ___customViewer_8; }
	inline SerializableViewerParameters_t2043332680 ** get_address_of_customViewer_8() { return &___customViewer_8; }
	inline void set_customViewer_8(SerializableViewerParameters_t2043332680 * value)
	{
		___customViewer_8 = value;
		Il2CppCodeGenWriteBarrier((&___customViewer_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DIGITALEYEWEARCONFIGURATION_T546560202_H
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
#ifndef VIDEOBACKGROUNDCONFIGURATION_T3392414655_H
#define VIDEOBACKGROUNDCONFIGURATION_T3392414655_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.VuforiaConfiguration/VideoBackgroundConfiguration
struct  VideoBackgroundConfiguration_t3392414655  : public RuntimeObject
{
public:
	// Vuforia.HideExcessAreaUtility/CLIPPING_MODE Vuforia.VuforiaConfiguration/VideoBackgroundConfiguration::clippingMode
	int32_t ___clippingMode_0;
	// System.Int32 Vuforia.VuforiaConfiguration/VideoBackgroundConfiguration::numDivisions
	int32_t ___numDivisions_1;
	// UnityEngine.Shader Vuforia.VuforiaConfiguration/VideoBackgroundConfiguration::videoBackgroundShader
	Shader_t4151988712 * ___videoBackgroundShader_2;
	// UnityEngine.Shader Vuforia.VuforiaConfiguration/VideoBackgroundConfiguration::matteShader
	Shader_t4151988712 * ___matteShader_3;
	// System.Boolean Vuforia.VuforiaConfiguration/VideoBackgroundConfiguration::videoBackgroundEnabled
	bool ___videoBackgroundEnabled_4;

public:
	inline static int32_t get_offset_of_clippingMode_0() { return static_cast<int32_t>(offsetof(VideoBackgroundConfiguration_t3392414655, ___clippingMode_0)); }
	inline int32_t get_clippingMode_0() const { return ___clippingMode_0; }
	inline int32_t* get_address_of_clippingMode_0() { return &___clippingMode_0; }
	inline void set_clippingMode_0(int32_t value)
	{
		___clippingMode_0 = value;
	}

	inline static int32_t get_offset_of_numDivisions_1() { return static_cast<int32_t>(offsetof(VideoBackgroundConfiguration_t3392414655, ___numDivisions_1)); }
	inline int32_t get_numDivisions_1() const { return ___numDivisions_1; }
	inline int32_t* get_address_of_numDivisions_1() { return &___numDivisions_1; }
	inline void set_numDivisions_1(int32_t value)
	{
		___numDivisions_1 = value;
	}

	inline static int32_t get_offset_of_videoBackgroundShader_2() { return static_cast<int32_t>(offsetof(VideoBackgroundConfiguration_t3392414655, ___videoBackgroundShader_2)); }
	inline Shader_t4151988712 * get_videoBackgroundShader_2() const { return ___videoBackgroundShader_2; }
	inline Shader_t4151988712 ** get_address_of_videoBackgroundShader_2() { return &___videoBackgroundShader_2; }
	inline void set_videoBackgroundShader_2(Shader_t4151988712 * value)
	{
		___videoBackgroundShader_2 = value;
		Il2CppCodeGenWriteBarrier((&___videoBackgroundShader_2), value);
	}

	inline static int32_t get_offset_of_matteShader_3() { return static_cast<int32_t>(offsetof(VideoBackgroundConfiguration_t3392414655, ___matteShader_3)); }
	inline Shader_t4151988712 * get_matteShader_3() const { return ___matteShader_3; }
	inline Shader_t4151988712 ** get_address_of_matteShader_3() { return &___matteShader_3; }
	inline void set_matteShader_3(Shader_t4151988712 * value)
	{
		___matteShader_3 = value;
		Il2CppCodeGenWriteBarrier((&___matteShader_3), value);
	}

	inline static int32_t get_offset_of_videoBackgroundEnabled_4() { return static_cast<int32_t>(offsetof(VideoBackgroundConfiguration_t3392414655, ___videoBackgroundEnabled_4)); }
	inline bool get_videoBackgroundEnabled_4() const { return ___videoBackgroundEnabled_4; }
	inline bool* get_address_of_videoBackgroundEnabled_4() { return &___videoBackgroundEnabled_4; }
	inline void set_videoBackgroundEnabled_4(bool value)
	{
		___videoBackgroundEnabled_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VIDEOBACKGROUNDCONFIGURATION_T3392414655_H
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
#ifndef DEDICATEDEYEWEARCAMERACONFIGURATION_T2854098828_H
#define DEDICATEDEYEWEARCAMERACONFIGURATION_T2854098828_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.DedicatedEyewearCameraConfiguration
struct  DedicatedEyewearCameraConfiguration_t2854098828  : public BaseCameraConfiguration_t3118151474
{
public:
	// UnityEngine.Camera Vuforia.DedicatedEyewearCameraConfiguration::mCamera
	Camera_t4157153871 * ___mCamera_14;
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
	Matrix4x4_t1817901843  ___mLeftProjectionMatrix_20;
	// System.Int32 Vuforia.DedicatedEyewearCameraConfiguration::mPlayModeEyeTextureWidth
	int32_t ___mPlayModeEyeTextureWidth_21;
	// System.Int32 Vuforia.DedicatedEyewearCameraConfiguration::mPlayModeEyeTextureHeight
	int32_t ___mPlayModeEyeTextureHeight_22;
	// Vuforia.EyewearDevice Vuforia.DedicatedEyewearCameraConfiguration::mEyewearDevice
	EyewearDevice_t3223385723 * ___mEyewearDevice_23;
	// Vuforia.StereoProjMatrixStore Vuforia.DedicatedEyewearCameraConfiguration::mMatrixStore
	StereoProjMatrixStore_t888524276 * ___mMatrixStore_24;
	// Vuforia.VRDeviceController Vuforia.DedicatedEyewearCameraConfiguration::mVrDeviceController
	VRDeviceController_t3863472269 * ___mVrDeviceController_25;

public:
	inline static int32_t get_offset_of_mCamera_14() { return static_cast<int32_t>(offsetof(DedicatedEyewearCameraConfiguration_t2854098828, ___mCamera_14)); }
	inline Camera_t4157153871 * get_mCamera_14() const { return ___mCamera_14; }
	inline Camera_t4157153871 ** get_address_of_mCamera_14() { return &___mCamera_14; }
	inline void set_mCamera_14(Camera_t4157153871 * value)
	{
		___mCamera_14 = value;
		Il2CppCodeGenWriteBarrier((&___mCamera_14), value);
	}

	inline static int32_t get_offset_of_mScreenWidth_15() { return static_cast<int32_t>(offsetof(DedicatedEyewearCameraConfiguration_t2854098828, ___mScreenWidth_15)); }
	inline int32_t get_mScreenWidth_15() const { return ___mScreenWidth_15; }
	inline int32_t* get_address_of_mScreenWidth_15() { return &___mScreenWidth_15; }
	inline void set_mScreenWidth_15(int32_t value)
	{
		___mScreenWidth_15 = value;
	}

	inline static int32_t get_offset_of_mScreenHeight_16() { return static_cast<int32_t>(offsetof(DedicatedEyewearCameraConfiguration_t2854098828, ___mScreenHeight_16)); }
	inline int32_t get_mScreenHeight_16() const { return ___mScreenHeight_16; }
	inline int32_t* get_address_of_mScreenHeight_16() { return &___mScreenHeight_16; }
	inline void set_mScreenHeight_16(int32_t value)
	{
		___mScreenHeight_16 = value;
	}

	inline static int32_t get_offset_of_mNeedToCheckStereo_17() { return static_cast<int32_t>(offsetof(DedicatedEyewearCameraConfiguration_t2854098828, ___mNeedToCheckStereo_17)); }
	inline bool get_mNeedToCheckStereo_17() const { return ___mNeedToCheckStereo_17; }
	inline bool* get_address_of_mNeedToCheckStereo_17() { return &___mNeedToCheckStereo_17; }
	inline void set_mNeedToCheckStereo_17(bool value)
	{
		___mNeedToCheckStereo_17 = value;
	}

	inline static int32_t get_offset_of_mLastAppliedNearClipPlane_18() { return static_cast<int32_t>(offsetof(DedicatedEyewearCameraConfiguration_t2854098828, ___mLastAppliedNearClipPlane_18)); }
	inline float get_mLastAppliedNearClipPlane_18() const { return ___mLastAppliedNearClipPlane_18; }
	inline float* get_address_of_mLastAppliedNearClipPlane_18() { return &___mLastAppliedNearClipPlane_18; }
	inline void set_mLastAppliedNearClipPlane_18(float value)
	{
		___mLastAppliedNearClipPlane_18 = value;
	}

	inline static int32_t get_offset_of_mLastAppliedFarClipPlane_19() { return static_cast<int32_t>(offsetof(DedicatedEyewearCameraConfiguration_t2854098828, ___mLastAppliedFarClipPlane_19)); }
	inline float get_mLastAppliedFarClipPlane_19() const { return ___mLastAppliedFarClipPlane_19; }
	inline float* get_address_of_mLastAppliedFarClipPlane_19() { return &___mLastAppliedFarClipPlane_19; }
	inline void set_mLastAppliedFarClipPlane_19(float value)
	{
		___mLastAppliedFarClipPlane_19 = value;
	}

	inline static int32_t get_offset_of_mLeftProjectionMatrix_20() { return static_cast<int32_t>(offsetof(DedicatedEyewearCameraConfiguration_t2854098828, ___mLeftProjectionMatrix_20)); }
	inline Matrix4x4_t1817901843  get_mLeftProjectionMatrix_20() const { return ___mLeftProjectionMatrix_20; }
	inline Matrix4x4_t1817901843 * get_address_of_mLeftProjectionMatrix_20() { return &___mLeftProjectionMatrix_20; }
	inline void set_mLeftProjectionMatrix_20(Matrix4x4_t1817901843  value)
	{
		___mLeftProjectionMatrix_20 = value;
	}

	inline static int32_t get_offset_of_mPlayModeEyeTextureWidth_21() { return static_cast<int32_t>(offsetof(DedicatedEyewearCameraConfiguration_t2854098828, ___mPlayModeEyeTextureWidth_21)); }
	inline int32_t get_mPlayModeEyeTextureWidth_21() const { return ___mPlayModeEyeTextureWidth_21; }
	inline int32_t* get_address_of_mPlayModeEyeTextureWidth_21() { return &___mPlayModeEyeTextureWidth_21; }
	inline void set_mPlayModeEyeTextureWidth_21(int32_t value)
	{
		___mPlayModeEyeTextureWidth_21 = value;
	}

	inline static int32_t get_offset_of_mPlayModeEyeTextureHeight_22() { return static_cast<int32_t>(offsetof(DedicatedEyewearCameraConfiguration_t2854098828, ___mPlayModeEyeTextureHeight_22)); }
	inline int32_t get_mPlayModeEyeTextureHeight_22() const { return ___mPlayModeEyeTextureHeight_22; }
	inline int32_t* get_address_of_mPlayModeEyeTextureHeight_22() { return &___mPlayModeEyeTextureHeight_22; }
	inline void set_mPlayModeEyeTextureHeight_22(int32_t value)
	{
		___mPlayModeEyeTextureHeight_22 = value;
	}

	inline static int32_t get_offset_of_mEyewearDevice_23() { return static_cast<int32_t>(offsetof(DedicatedEyewearCameraConfiguration_t2854098828, ___mEyewearDevice_23)); }
	inline EyewearDevice_t3223385723 * get_mEyewearDevice_23() const { return ___mEyewearDevice_23; }
	inline EyewearDevice_t3223385723 ** get_address_of_mEyewearDevice_23() { return &___mEyewearDevice_23; }
	inline void set_mEyewearDevice_23(EyewearDevice_t3223385723 * value)
	{
		___mEyewearDevice_23 = value;
		Il2CppCodeGenWriteBarrier((&___mEyewearDevice_23), value);
	}

	inline static int32_t get_offset_of_mMatrixStore_24() { return static_cast<int32_t>(offsetof(DedicatedEyewearCameraConfiguration_t2854098828, ___mMatrixStore_24)); }
	inline StereoProjMatrixStore_t888524276 * get_mMatrixStore_24() const { return ___mMatrixStore_24; }
	inline StereoProjMatrixStore_t888524276 ** get_address_of_mMatrixStore_24() { return &___mMatrixStore_24; }
	inline void set_mMatrixStore_24(StereoProjMatrixStore_t888524276 * value)
	{
		___mMatrixStore_24 = value;
		Il2CppCodeGenWriteBarrier((&___mMatrixStore_24), value);
	}

	inline static int32_t get_offset_of_mVrDeviceController_25() { return static_cast<int32_t>(offsetof(DedicatedEyewearCameraConfiguration_t2854098828, ___mVrDeviceController_25)); }
	inline VRDeviceController_t3863472269 * get_mVrDeviceController_25() const { return ___mVrDeviceController_25; }
	inline VRDeviceController_t3863472269 ** get_address_of_mVrDeviceController_25() { return &___mVrDeviceController_25; }
	inline void set_mVrDeviceController_25(VRDeviceController_t3863472269 * value)
	{
		___mVrDeviceController_25 = value;
		Il2CppCodeGenWriteBarrier((&___mVrDeviceController_25), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEDICATEDEYEWEARCAMERACONFIGURATION_T2854098828_H
#ifndef MONOCAMERACONFIGURATION_T112386736_H
#define MONOCAMERACONFIGURATION_T112386736_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.MonoCameraConfiguration
struct  MonoCameraConfiguration_t112386736  : public BaseCameraConfiguration_t3118151474
{
public:
	// UnityEngine.Camera Vuforia.MonoCameraConfiguration::mPrimaryCamera
	Camera_t4157153871 * ___mPrimaryCamera_12;
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
	VRDeviceController_t3863472269 * ___mVrDeviceController_18;

public:
	inline static int32_t get_offset_of_mPrimaryCamera_12() { return static_cast<int32_t>(offsetof(MonoCameraConfiguration_t112386736, ___mPrimaryCamera_12)); }
	inline Camera_t4157153871 * get_mPrimaryCamera_12() const { return ___mPrimaryCamera_12; }
	inline Camera_t4157153871 ** get_address_of_mPrimaryCamera_12() { return &___mPrimaryCamera_12; }
	inline void set_mPrimaryCamera_12(Camera_t4157153871 * value)
	{
		___mPrimaryCamera_12 = value;
		Il2CppCodeGenWriteBarrier((&___mPrimaryCamera_12), value);
	}

	inline static int32_t get_offset_of_mCameraViewPortWidth_13() { return static_cast<int32_t>(offsetof(MonoCameraConfiguration_t112386736, ___mCameraViewPortWidth_13)); }
	inline int32_t get_mCameraViewPortWidth_13() const { return ___mCameraViewPortWidth_13; }
	inline int32_t* get_address_of_mCameraViewPortWidth_13() { return &___mCameraViewPortWidth_13; }
	inline void set_mCameraViewPortWidth_13(int32_t value)
	{
		___mCameraViewPortWidth_13 = value;
	}

	inline static int32_t get_offset_of_mCameraViewPortHeight_14() { return static_cast<int32_t>(offsetof(MonoCameraConfiguration_t112386736, ___mCameraViewPortHeight_14)); }
	inline int32_t get_mCameraViewPortHeight_14() const { return ___mCameraViewPortHeight_14; }
	inline int32_t* get_address_of_mCameraViewPortHeight_14() { return &___mCameraViewPortHeight_14; }
	inline void set_mCameraViewPortHeight_14(int32_t value)
	{
		___mCameraViewPortHeight_14 = value;
	}

	inline static int32_t get_offset_of_mLastAppliedNearClipPlane_15() { return static_cast<int32_t>(offsetof(MonoCameraConfiguration_t112386736, ___mLastAppliedNearClipPlane_15)); }
	inline float get_mLastAppliedNearClipPlane_15() const { return ___mLastAppliedNearClipPlane_15; }
	inline float* get_address_of_mLastAppliedNearClipPlane_15() { return &___mLastAppliedNearClipPlane_15; }
	inline void set_mLastAppliedNearClipPlane_15(float value)
	{
		___mLastAppliedNearClipPlane_15 = value;
	}

	inline static int32_t get_offset_of_mLastAppliedFarClipPlane_16() { return static_cast<int32_t>(offsetof(MonoCameraConfiguration_t112386736, ___mLastAppliedFarClipPlane_16)); }
	inline float get_mLastAppliedFarClipPlane_16() const { return ___mLastAppliedFarClipPlane_16; }
	inline float* get_address_of_mLastAppliedFarClipPlane_16() { return &___mLastAppliedFarClipPlane_16; }
	inline void set_mLastAppliedFarClipPlane_16(float value)
	{
		___mLastAppliedFarClipPlane_16 = value;
	}

	inline static int32_t get_offset_of_mLastAppliedFoV_17() { return static_cast<int32_t>(offsetof(MonoCameraConfiguration_t112386736, ___mLastAppliedFoV_17)); }
	inline float get_mLastAppliedFoV_17() const { return ___mLastAppliedFoV_17; }
	inline float* get_address_of_mLastAppliedFoV_17() { return &___mLastAppliedFoV_17; }
	inline void set_mLastAppliedFoV_17(float value)
	{
		___mLastAppliedFoV_17 = value;
	}

	inline static int32_t get_offset_of_mVrDeviceController_18() { return static_cast<int32_t>(offsetof(MonoCameraConfiguration_t112386736, ___mVrDeviceController_18)); }
	inline VRDeviceController_t3863472269 * get_mVrDeviceController_18() const { return ___mVrDeviceController_18; }
	inline VRDeviceController_t3863472269 ** get_address_of_mVrDeviceController_18() { return &___mVrDeviceController_18; }
	inline void set_mVrDeviceController_18(VRDeviceController_t3863472269 * value)
	{
		___mVrDeviceController_18 = value;
		Il2CppCodeGenWriteBarrier((&___mVrDeviceController_18), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOCAMERACONFIGURATION_T112386736_H
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
#ifndef BACKGROUNDPLANEBEHAVIOUR_T3333547397_H
#define BACKGROUNDPLANEBEHAVIOUR_T3333547397_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.BackgroundPlaneBehaviour
struct  BackgroundPlaneBehaviour_t3333547397  : public VuforiaMonoBehaviour_t1150221792
{
public:
	// Vuforia.VuforiaRenderer/VideoTextureInfo Vuforia.BackgroundPlaneBehaviour::mTextureInfo
	VideoTextureInfo_t1805965052  ___mTextureInfo_4;
	// System.Int32 Vuforia.BackgroundPlaneBehaviour::mNumFramesToUpdateVideoBg
	int32_t ___mNumFramesToUpdateVideoBg_5;
	// UnityEngine.Transform Vuforia.BackgroundPlaneBehaviour::mCameraTransform
	Transform_t3600365921 * ___mCameraTransform_6;
	// UnityEngine.Mesh Vuforia.BackgroundPlaneBehaviour::mMesh
	Mesh_t3648964284 * ___mMesh_8;
	// System.Single Vuforia.BackgroundPlaneBehaviour::mStereoDepth
	float ___mStereoDepth_9;
	// System.Boolean Vuforia.BackgroundPlaneBehaviour::mProjectionMatrixSetExternally
	bool ___mProjectionMatrixSetExternally_10;
	// UnityEngine.Vector3 Vuforia.BackgroundPlaneBehaviour::mBackgroundOffset
	Vector3_t3722313464  ___mBackgroundOffset_11;
	// Vuforia.VuforiaARController Vuforia.BackgroundPlaneBehaviour::mVuforiaBehaviour
	VuforiaARController_t1876945237 * ___mVuforiaBehaviour_12;
	// System.Action Vuforia.BackgroundPlaneBehaviour::mBackgroundPlacedCallback
	Action_t1264377477 * ___mBackgroundPlacedCallback_13;
	// Vuforia.VideoBackgroundConfigValidator Vuforia.BackgroundPlaneBehaviour::mValidator
	VideoBackgroundConfigValidator_t1958892045 * ___mValidator_14;
	// Vuforia.IProjectMatrixProvider Vuforia.BackgroundPlaneBehaviour::mProjectMatrixProvider
	RuntimeObject* ___mProjectMatrixProvider_15;
	// Vuforia.BackgroundPlaneBehaviour/ProjectionMatrixData Vuforia.BackgroundPlaneBehaviour::mLastUsedProjectioMatrix
	ProjectionMatrixData_t3894131367  ___mLastUsedProjectioMatrix_16;
	// System.Int32 Vuforia.BackgroundPlaneBehaviour::mNumDivisions
	int32_t ___mNumDivisions_17;
	// Vuforia.HideExcessAreaUtility Vuforia.BackgroundPlaneBehaviour::mHideExcessAreaUtility
	HideExcessAreaUtility_t3142786924 * ___mHideExcessAreaUtility_18;

public:
	inline static int32_t get_offset_of_mTextureInfo_4() { return static_cast<int32_t>(offsetof(BackgroundPlaneBehaviour_t3333547397, ___mTextureInfo_4)); }
	inline VideoTextureInfo_t1805965052  get_mTextureInfo_4() const { return ___mTextureInfo_4; }
	inline VideoTextureInfo_t1805965052 * get_address_of_mTextureInfo_4() { return &___mTextureInfo_4; }
	inline void set_mTextureInfo_4(VideoTextureInfo_t1805965052  value)
	{
		___mTextureInfo_4 = value;
	}

	inline static int32_t get_offset_of_mNumFramesToUpdateVideoBg_5() { return static_cast<int32_t>(offsetof(BackgroundPlaneBehaviour_t3333547397, ___mNumFramesToUpdateVideoBg_5)); }
	inline int32_t get_mNumFramesToUpdateVideoBg_5() const { return ___mNumFramesToUpdateVideoBg_5; }
	inline int32_t* get_address_of_mNumFramesToUpdateVideoBg_5() { return &___mNumFramesToUpdateVideoBg_5; }
	inline void set_mNumFramesToUpdateVideoBg_5(int32_t value)
	{
		___mNumFramesToUpdateVideoBg_5 = value;
	}

	inline static int32_t get_offset_of_mCameraTransform_6() { return static_cast<int32_t>(offsetof(BackgroundPlaneBehaviour_t3333547397, ___mCameraTransform_6)); }
	inline Transform_t3600365921 * get_mCameraTransform_6() const { return ___mCameraTransform_6; }
	inline Transform_t3600365921 ** get_address_of_mCameraTransform_6() { return &___mCameraTransform_6; }
	inline void set_mCameraTransform_6(Transform_t3600365921 * value)
	{
		___mCameraTransform_6 = value;
		Il2CppCodeGenWriteBarrier((&___mCameraTransform_6), value);
	}

	inline static int32_t get_offset_of_mMesh_8() { return static_cast<int32_t>(offsetof(BackgroundPlaneBehaviour_t3333547397, ___mMesh_8)); }
	inline Mesh_t3648964284 * get_mMesh_8() const { return ___mMesh_8; }
	inline Mesh_t3648964284 ** get_address_of_mMesh_8() { return &___mMesh_8; }
	inline void set_mMesh_8(Mesh_t3648964284 * value)
	{
		___mMesh_8 = value;
		Il2CppCodeGenWriteBarrier((&___mMesh_8), value);
	}

	inline static int32_t get_offset_of_mStereoDepth_9() { return static_cast<int32_t>(offsetof(BackgroundPlaneBehaviour_t3333547397, ___mStereoDepth_9)); }
	inline float get_mStereoDepth_9() const { return ___mStereoDepth_9; }
	inline float* get_address_of_mStereoDepth_9() { return &___mStereoDepth_9; }
	inline void set_mStereoDepth_9(float value)
	{
		___mStereoDepth_9 = value;
	}

	inline static int32_t get_offset_of_mProjectionMatrixSetExternally_10() { return static_cast<int32_t>(offsetof(BackgroundPlaneBehaviour_t3333547397, ___mProjectionMatrixSetExternally_10)); }
	inline bool get_mProjectionMatrixSetExternally_10() const { return ___mProjectionMatrixSetExternally_10; }
	inline bool* get_address_of_mProjectionMatrixSetExternally_10() { return &___mProjectionMatrixSetExternally_10; }
	inline void set_mProjectionMatrixSetExternally_10(bool value)
	{
		___mProjectionMatrixSetExternally_10 = value;
	}

	inline static int32_t get_offset_of_mBackgroundOffset_11() { return static_cast<int32_t>(offsetof(BackgroundPlaneBehaviour_t3333547397, ___mBackgroundOffset_11)); }
	inline Vector3_t3722313464  get_mBackgroundOffset_11() const { return ___mBackgroundOffset_11; }
	inline Vector3_t3722313464 * get_address_of_mBackgroundOffset_11() { return &___mBackgroundOffset_11; }
	inline void set_mBackgroundOffset_11(Vector3_t3722313464  value)
	{
		___mBackgroundOffset_11 = value;
	}

	inline static int32_t get_offset_of_mVuforiaBehaviour_12() { return static_cast<int32_t>(offsetof(BackgroundPlaneBehaviour_t3333547397, ___mVuforiaBehaviour_12)); }
	inline VuforiaARController_t1876945237 * get_mVuforiaBehaviour_12() const { return ___mVuforiaBehaviour_12; }
	inline VuforiaARController_t1876945237 ** get_address_of_mVuforiaBehaviour_12() { return &___mVuforiaBehaviour_12; }
	inline void set_mVuforiaBehaviour_12(VuforiaARController_t1876945237 * value)
	{
		___mVuforiaBehaviour_12 = value;
		Il2CppCodeGenWriteBarrier((&___mVuforiaBehaviour_12), value);
	}

	inline static int32_t get_offset_of_mBackgroundPlacedCallback_13() { return static_cast<int32_t>(offsetof(BackgroundPlaneBehaviour_t3333547397, ___mBackgroundPlacedCallback_13)); }
	inline Action_t1264377477 * get_mBackgroundPlacedCallback_13() const { return ___mBackgroundPlacedCallback_13; }
	inline Action_t1264377477 ** get_address_of_mBackgroundPlacedCallback_13() { return &___mBackgroundPlacedCallback_13; }
	inline void set_mBackgroundPlacedCallback_13(Action_t1264377477 * value)
	{
		___mBackgroundPlacedCallback_13 = value;
		Il2CppCodeGenWriteBarrier((&___mBackgroundPlacedCallback_13), value);
	}

	inline static int32_t get_offset_of_mValidator_14() { return static_cast<int32_t>(offsetof(BackgroundPlaneBehaviour_t3333547397, ___mValidator_14)); }
	inline VideoBackgroundConfigValidator_t1958892045 * get_mValidator_14() const { return ___mValidator_14; }
	inline VideoBackgroundConfigValidator_t1958892045 ** get_address_of_mValidator_14() { return &___mValidator_14; }
	inline void set_mValidator_14(VideoBackgroundConfigValidator_t1958892045 * value)
	{
		___mValidator_14 = value;
		Il2CppCodeGenWriteBarrier((&___mValidator_14), value);
	}

	inline static int32_t get_offset_of_mProjectMatrixProvider_15() { return static_cast<int32_t>(offsetof(BackgroundPlaneBehaviour_t3333547397, ___mProjectMatrixProvider_15)); }
	inline RuntimeObject* get_mProjectMatrixProvider_15() const { return ___mProjectMatrixProvider_15; }
	inline RuntimeObject** get_address_of_mProjectMatrixProvider_15() { return &___mProjectMatrixProvider_15; }
	inline void set_mProjectMatrixProvider_15(RuntimeObject* value)
	{
		___mProjectMatrixProvider_15 = value;
		Il2CppCodeGenWriteBarrier((&___mProjectMatrixProvider_15), value);
	}

	inline static int32_t get_offset_of_mLastUsedProjectioMatrix_16() { return static_cast<int32_t>(offsetof(BackgroundPlaneBehaviour_t3333547397, ___mLastUsedProjectioMatrix_16)); }
	inline ProjectionMatrixData_t3894131367  get_mLastUsedProjectioMatrix_16() const { return ___mLastUsedProjectioMatrix_16; }
	inline ProjectionMatrixData_t3894131367 * get_address_of_mLastUsedProjectioMatrix_16() { return &___mLastUsedProjectioMatrix_16; }
	inline void set_mLastUsedProjectioMatrix_16(ProjectionMatrixData_t3894131367  value)
	{
		___mLastUsedProjectioMatrix_16 = value;
	}

	inline static int32_t get_offset_of_mNumDivisions_17() { return static_cast<int32_t>(offsetof(BackgroundPlaneBehaviour_t3333547397, ___mNumDivisions_17)); }
	inline int32_t get_mNumDivisions_17() const { return ___mNumDivisions_17; }
	inline int32_t* get_address_of_mNumDivisions_17() { return &___mNumDivisions_17; }
	inline void set_mNumDivisions_17(int32_t value)
	{
		___mNumDivisions_17 = value;
	}

	inline static int32_t get_offset_of_mHideExcessAreaUtility_18() { return static_cast<int32_t>(offsetof(BackgroundPlaneBehaviour_t3333547397, ___mHideExcessAreaUtility_18)); }
	inline HideExcessAreaUtility_t3142786924 * get_mHideExcessAreaUtility_18() const { return ___mHideExcessAreaUtility_18; }
	inline HideExcessAreaUtility_t3142786924 ** get_address_of_mHideExcessAreaUtility_18() { return &___mHideExcessAreaUtility_18; }
	inline void set_mHideExcessAreaUtility_18(HideExcessAreaUtility_t3142786924 * value)
	{
		___mHideExcessAreaUtility_18 = value;
		Il2CppCodeGenWriteBarrier((&___mHideExcessAreaUtility_18), value);
	}
};

struct BackgroundPlaneBehaviour_t3333547397_StaticFields
{
public:
	// System.Single Vuforia.BackgroundPlaneBehaviour::maxDisplacement
	float ___maxDisplacement_7;

public:
	inline static int32_t get_offset_of_maxDisplacement_7() { return static_cast<int32_t>(offsetof(BackgroundPlaneBehaviour_t3333547397_StaticFields, ___maxDisplacement_7)); }
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
#endif // BACKGROUNDPLANEBEHAVIOUR_T3333547397_H
#ifndef OBJECTRECOBEHAVIOUR_T2762250941_H
#define OBJECTRECOBEHAVIOUR_T2762250941_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.ObjectRecoBehaviour
struct  ObjectRecoBehaviour_t2762250941  : public VuforiaMonoBehaviour_t1150221792
{
public:
	// Vuforia.ObjectTracker Vuforia.ObjectRecoBehaviour::mObjectTracker
	ObjectTracker_t4177997237 * ___mObjectTracker_4;
	// Vuforia.TargetFinder Vuforia.ObjectRecoBehaviour::mTargetFinder
	TargetFinder_t2439332195 * ___mTargetFinder_5;
	// System.Boolean Vuforia.ObjectRecoBehaviour::mCurrentlyInitializing
	bool ___mCurrentlyInitializing_6;
	// System.Boolean Vuforia.ObjectRecoBehaviour::mInitSuccess
	bool ___mInitSuccess_7;
	// System.Boolean Vuforia.ObjectRecoBehaviour::mRecoStarted
	bool ___mRecoStarted_8;
	// System.Boolean Vuforia.ObjectRecoBehaviour::mOnInitializedCalled
	bool ___mOnInitializedCalled_9;
	// System.Collections.Generic.List`1<Vuforia.ICloudRecoEventHandler> Vuforia.ObjectRecoBehaviour::mHandlers
	List_1_t1049732891 * ___mHandlers_10;
	// System.Boolean Vuforia.ObjectRecoBehaviour::mTargetFinderStartedBeforeDisable
	bool ___mTargetFinderStartedBeforeDisable_11;

public:
	inline static int32_t get_offset_of_mObjectTracker_4() { return static_cast<int32_t>(offsetof(ObjectRecoBehaviour_t2762250941, ___mObjectTracker_4)); }
	inline ObjectTracker_t4177997237 * get_mObjectTracker_4() const { return ___mObjectTracker_4; }
	inline ObjectTracker_t4177997237 ** get_address_of_mObjectTracker_4() { return &___mObjectTracker_4; }
	inline void set_mObjectTracker_4(ObjectTracker_t4177997237 * value)
	{
		___mObjectTracker_4 = value;
		Il2CppCodeGenWriteBarrier((&___mObjectTracker_4), value);
	}

	inline static int32_t get_offset_of_mTargetFinder_5() { return static_cast<int32_t>(offsetof(ObjectRecoBehaviour_t2762250941, ___mTargetFinder_5)); }
	inline TargetFinder_t2439332195 * get_mTargetFinder_5() const { return ___mTargetFinder_5; }
	inline TargetFinder_t2439332195 ** get_address_of_mTargetFinder_5() { return &___mTargetFinder_5; }
	inline void set_mTargetFinder_5(TargetFinder_t2439332195 * value)
	{
		___mTargetFinder_5 = value;
		Il2CppCodeGenWriteBarrier((&___mTargetFinder_5), value);
	}

	inline static int32_t get_offset_of_mCurrentlyInitializing_6() { return static_cast<int32_t>(offsetof(ObjectRecoBehaviour_t2762250941, ___mCurrentlyInitializing_6)); }
	inline bool get_mCurrentlyInitializing_6() const { return ___mCurrentlyInitializing_6; }
	inline bool* get_address_of_mCurrentlyInitializing_6() { return &___mCurrentlyInitializing_6; }
	inline void set_mCurrentlyInitializing_6(bool value)
	{
		___mCurrentlyInitializing_6 = value;
	}

	inline static int32_t get_offset_of_mInitSuccess_7() { return static_cast<int32_t>(offsetof(ObjectRecoBehaviour_t2762250941, ___mInitSuccess_7)); }
	inline bool get_mInitSuccess_7() const { return ___mInitSuccess_7; }
	inline bool* get_address_of_mInitSuccess_7() { return &___mInitSuccess_7; }
	inline void set_mInitSuccess_7(bool value)
	{
		___mInitSuccess_7 = value;
	}

	inline static int32_t get_offset_of_mRecoStarted_8() { return static_cast<int32_t>(offsetof(ObjectRecoBehaviour_t2762250941, ___mRecoStarted_8)); }
	inline bool get_mRecoStarted_8() const { return ___mRecoStarted_8; }
	inline bool* get_address_of_mRecoStarted_8() { return &___mRecoStarted_8; }
	inline void set_mRecoStarted_8(bool value)
	{
		___mRecoStarted_8 = value;
	}

	inline static int32_t get_offset_of_mOnInitializedCalled_9() { return static_cast<int32_t>(offsetof(ObjectRecoBehaviour_t2762250941, ___mOnInitializedCalled_9)); }
	inline bool get_mOnInitializedCalled_9() const { return ___mOnInitializedCalled_9; }
	inline bool* get_address_of_mOnInitializedCalled_9() { return &___mOnInitializedCalled_9; }
	inline void set_mOnInitializedCalled_9(bool value)
	{
		___mOnInitializedCalled_9 = value;
	}

	inline static int32_t get_offset_of_mHandlers_10() { return static_cast<int32_t>(offsetof(ObjectRecoBehaviour_t2762250941, ___mHandlers_10)); }
	inline List_1_t1049732891 * get_mHandlers_10() const { return ___mHandlers_10; }
	inline List_1_t1049732891 ** get_address_of_mHandlers_10() { return &___mHandlers_10; }
	inline void set_mHandlers_10(List_1_t1049732891 * value)
	{
		___mHandlers_10 = value;
		Il2CppCodeGenWriteBarrier((&___mHandlers_10), value);
	}

	inline static int32_t get_offset_of_mTargetFinderStartedBeforeDisable_11() { return static_cast<int32_t>(offsetof(ObjectRecoBehaviour_t2762250941, ___mTargetFinderStartedBeforeDisable_11)); }
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
#endif // OBJECTRECOBEHAVIOUR_T2762250941_H
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
#ifndef VUFORIABEHAVIOUR_T2151848540_H
#define VUFORIABEHAVIOUR_T2151848540_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.VuforiaBehaviour
struct  VuforiaBehaviour_t2151848540  : public VuforiaMonoBehaviour_t1150221792
{
public:
	// Vuforia.VuforiaARController/WorldCenterMode Vuforia.VuforiaBehaviour::mWorldCenterMode
	int32_t ___mWorldCenterMode_5;
	// Vuforia.TrackableBehaviour Vuforia.VuforiaBehaviour::mWorldCenter
	TrackableBehaviour_t1113559212 * ___mWorldCenter_6;
	// System.Boolean Vuforia.VuforiaBehaviour::mAppIsQuitting
	bool ___mAppIsQuitting_7;
	// System.Action Vuforia.VuforiaBehaviour::AwakeEvent
	Action_t1264377477 * ___AwakeEvent_10;
	// System.Action Vuforia.VuforiaBehaviour::OnEnableEvent
	Action_t1264377477 * ___OnEnableEvent_11;
	// System.Action Vuforia.VuforiaBehaviour::StartEvent
	Action_t1264377477 * ___StartEvent_12;
	// System.Action Vuforia.VuforiaBehaviour::UpdateEvent
	Action_t1264377477 * ___UpdateEvent_13;
	// System.Action Vuforia.VuforiaBehaviour::OnLevelWasLoadedEvent
	Action_t1264377477 * ___OnLevelWasLoadedEvent_14;
	// System.Action`1<System.Boolean> Vuforia.VuforiaBehaviour::OnApplicationPauseEvent
	Action_1_t269755560 * ___OnApplicationPauseEvent_15;
	// System.Action Vuforia.VuforiaBehaviour::OnDisableEvent
	Action_t1264377477 * ___OnDisableEvent_16;
	// System.Action Vuforia.VuforiaBehaviour::OnDestroyEvent
	Action_t1264377477 * ___OnDestroyEvent_17;

public:
	inline static int32_t get_offset_of_mWorldCenterMode_5() { return static_cast<int32_t>(offsetof(VuforiaBehaviour_t2151848540, ___mWorldCenterMode_5)); }
	inline int32_t get_mWorldCenterMode_5() const { return ___mWorldCenterMode_5; }
	inline int32_t* get_address_of_mWorldCenterMode_5() { return &___mWorldCenterMode_5; }
	inline void set_mWorldCenterMode_5(int32_t value)
	{
		___mWorldCenterMode_5 = value;
	}

	inline static int32_t get_offset_of_mWorldCenter_6() { return static_cast<int32_t>(offsetof(VuforiaBehaviour_t2151848540, ___mWorldCenter_6)); }
	inline TrackableBehaviour_t1113559212 * get_mWorldCenter_6() const { return ___mWorldCenter_6; }
	inline TrackableBehaviour_t1113559212 ** get_address_of_mWorldCenter_6() { return &___mWorldCenter_6; }
	inline void set_mWorldCenter_6(TrackableBehaviour_t1113559212 * value)
	{
		___mWorldCenter_6 = value;
		Il2CppCodeGenWriteBarrier((&___mWorldCenter_6), value);
	}

	inline static int32_t get_offset_of_mAppIsQuitting_7() { return static_cast<int32_t>(offsetof(VuforiaBehaviour_t2151848540, ___mAppIsQuitting_7)); }
	inline bool get_mAppIsQuitting_7() const { return ___mAppIsQuitting_7; }
	inline bool* get_address_of_mAppIsQuitting_7() { return &___mAppIsQuitting_7; }
	inline void set_mAppIsQuitting_7(bool value)
	{
		___mAppIsQuitting_7 = value;
	}

	inline static int32_t get_offset_of_AwakeEvent_10() { return static_cast<int32_t>(offsetof(VuforiaBehaviour_t2151848540, ___AwakeEvent_10)); }
	inline Action_t1264377477 * get_AwakeEvent_10() const { return ___AwakeEvent_10; }
	inline Action_t1264377477 ** get_address_of_AwakeEvent_10() { return &___AwakeEvent_10; }
	inline void set_AwakeEvent_10(Action_t1264377477 * value)
	{
		___AwakeEvent_10 = value;
		Il2CppCodeGenWriteBarrier((&___AwakeEvent_10), value);
	}

	inline static int32_t get_offset_of_OnEnableEvent_11() { return static_cast<int32_t>(offsetof(VuforiaBehaviour_t2151848540, ___OnEnableEvent_11)); }
	inline Action_t1264377477 * get_OnEnableEvent_11() const { return ___OnEnableEvent_11; }
	inline Action_t1264377477 ** get_address_of_OnEnableEvent_11() { return &___OnEnableEvent_11; }
	inline void set_OnEnableEvent_11(Action_t1264377477 * value)
	{
		___OnEnableEvent_11 = value;
		Il2CppCodeGenWriteBarrier((&___OnEnableEvent_11), value);
	}

	inline static int32_t get_offset_of_StartEvent_12() { return static_cast<int32_t>(offsetof(VuforiaBehaviour_t2151848540, ___StartEvent_12)); }
	inline Action_t1264377477 * get_StartEvent_12() const { return ___StartEvent_12; }
	inline Action_t1264377477 ** get_address_of_StartEvent_12() { return &___StartEvent_12; }
	inline void set_StartEvent_12(Action_t1264377477 * value)
	{
		___StartEvent_12 = value;
		Il2CppCodeGenWriteBarrier((&___StartEvent_12), value);
	}

	inline static int32_t get_offset_of_UpdateEvent_13() { return static_cast<int32_t>(offsetof(VuforiaBehaviour_t2151848540, ___UpdateEvent_13)); }
	inline Action_t1264377477 * get_UpdateEvent_13() const { return ___UpdateEvent_13; }
	inline Action_t1264377477 ** get_address_of_UpdateEvent_13() { return &___UpdateEvent_13; }
	inline void set_UpdateEvent_13(Action_t1264377477 * value)
	{
		___UpdateEvent_13 = value;
		Il2CppCodeGenWriteBarrier((&___UpdateEvent_13), value);
	}

	inline static int32_t get_offset_of_OnLevelWasLoadedEvent_14() { return static_cast<int32_t>(offsetof(VuforiaBehaviour_t2151848540, ___OnLevelWasLoadedEvent_14)); }
	inline Action_t1264377477 * get_OnLevelWasLoadedEvent_14() const { return ___OnLevelWasLoadedEvent_14; }
	inline Action_t1264377477 ** get_address_of_OnLevelWasLoadedEvent_14() { return &___OnLevelWasLoadedEvent_14; }
	inline void set_OnLevelWasLoadedEvent_14(Action_t1264377477 * value)
	{
		___OnLevelWasLoadedEvent_14 = value;
		Il2CppCodeGenWriteBarrier((&___OnLevelWasLoadedEvent_14), value);
	}

	inline static int32_t get_offset_of_OnApplicationPauseEvent_15() { return static_cast<int32_t>(offsetof(VuforiaBehaviour_t2151848540, ___OnApplicationPauseEvent_15)); }
	inline Action_1_t269755560 * get_OnApplicationPauseEvent_15() const { return ___OnApplicationPauseEvent_15; }
	inline Action_1_t269755560 ** get_address_of_OnApplicationPauseEvent_15() { return &___OnApplicationPauseEvent_15; }
	inline void set_OnApplicationPauseEvent_15(Action_1_t269755560 * value)
	{
		___OnApplicationPauseEvent_15 = value;
		Il2CppCodeGenWriteBarrier((&___OnApplicationPauseEvent_15), value);
	}

	inline static int32_t get_offset_of_OnDisableEvent_16() { return static_cast<int32_t>(offsetof(VuforiaBehaviour_t2151848540, ___OnDisableEvent_16)); }
	inline Action_t1264377477 * get_OnDisableEvent_16() const { return ___OnDisableEvent_16; }
	inline Action_t1264377477 ** get_address_of_OnDisableEvent_16() { return &___OnDisableEvent_16; }
	inline void set_OnDisableEvent_16(Action_t1264377477 * value)
	{
		___OnDisableEvent_16 = value;
		Il2CppCodeGenWriteBarrier((&___OnDisableEvent_16), value);
	}

	inline static int32_t get_offset_of_OnDestroyEvent_17() { return static_cast<int32_t>(offsetof(VuforiaBehaviour_t2151848540, ___OnDestroyEvent_17)); }
	inline Action_t1264377477 * get_OnDestroyEvent_17() const { return ___OnDestroyEvent_17; }
	inline Action_t1264377477 ** get_address_of_OnDestroyEvent_17() { return &___OnDestroyEvent_17; }
	inline void set_OnDestroyEvent_17(Action_t1264377477 * value)
	{
		___OnDestroyEvent_17 = value;
		Il2CppCodeGenWriteBarrier((&___OnDestroyEvent_17), value);
	}
};

struct VuforiaBehaviour_t2151848540_StaticFields
{
public:
	// Vuforia.VuforiaBehaviour Vuforia.VuforiaBehaviour::mVuforiaBehaviour
	VuforiaBehaviour_t2151848540 * ___mVuforiaBehaviour_4;
	// System.Action`1<Vuforia.VuforiaBehaviour> Vuforia.VuforiaBehaviour::BehaviourCreated
	Action_1_t2324316135 * ___BehaviourCreated_8;
	// System.Action`1<Vuforia.VuforiaBehaviour> Vuforia.VuforiaBehaviour::BehaviourDestroyed
	Action_1_t2324316135 * ___BehaviourDestroyed_9;

public:
	inline static int32_t get_offset_of_mVuforiaBehaviour_4() { return static_cast<int32_t>(offsetof(VuforiaBehaviour_t2151848540_StaticFields, ___mVuforiaBehaviour_4)); }
	inline VuforiaBehaviour_t2151848540 * get_mVuforiaBehaviour_4() const { return ___mVuforiaBehaviour_4; }
	inline VuforiaBehaviour_t2151848540 ** get_address_of_mVuforiaBehaviour_4() { return &___mVuforiaBehaviour_4; }
	inline void set_mVuforiaBehaviour_4(VuforiaBehaviour_t2151848540 * value)
	{
		___mVuforiaBehaviour_4 = value;
		Il2CppCodeGenWriteBarrier((&___mVuforiaBehaviour_4), value);
	}

	inline static int32_t get_offset_of_BehaviourCreated_8() { return static_cast<int32_t>(offsetof(VuforiaBehaviour_t2151848540_StaticFields, ___BehaviourCreated_8)); }
	inline Action_1_t2324316135 * get_BehaviourCreated_8() const { return ___BehaviourCreated_8; }
	inline Action_1_t2324316135 ** get_address_of_BehaviourCreated_8() { return &___BehaviourCreated_8; }
	inline void set_BehaviourCreated_8(Action_1_t2324316135 * value)
	{
		___BehaviourCreated_8 = value;
		Il2CppCodeGenWriteBarrier((&___BehaviourCreated_8), value);
	}

	inline static int32_t get_offset_of_BehaviourDestroyed_9() { return static_cast<int32_t>(offsetof(VuforiaBehaviour_t2151848540_StaticFields, ___BehaviourDestroyed_9)); }
	inline Action_1_t2324316135 * get_BehaviourDestroyed_9() const { return ___BehaviourDestroyed_9; }
	inline Action_1_t2324316135 ** get_address_of_BehaviourDestroyed_9() { return &___BehaviourDestroyed_9; }
	inline void set_BehaviourDestroyed_9(Action_1_t2324316135 * value)
	{
		___BehaviourDestroyed_9 = value;
		Il2CppCodeGenWriteBarrier((&___BehaviourDestroyed_9), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VUFORIABEHAVIOUR_T2151848540_H
#ifndef CLOUDRECOBEHAVIOUR_T431762792_H
#define CLOUDRECOBEHAVIOUR_T431762792_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.CloudRecoBehaviour
struct  CloudRecoBehaviour_t431762792  : public ObjectRecoBehaviour_t2762250941
{
public:
	// System.String Vuforia.CloudRecoBehaviour::AccessKey
	String_t* ___AccessKey_12;
	// System.String Vuforia.CloudRecoBehaviour::SecretKey
	String_t* ___SecretKey_13;

public:
	inline static int32_t get_offset_of_AccessKey_12() { return static_cast<int32_t>(offsetof(CloudRecoBehaviour_t431762792, ___AccessKey_12)); }
	inline String_t* get_AccessKey_12() const { return ___AccessKey_12; }
	inline String_t** get_address_of_AccessKey_12() { return &___AccessKey_12; }
	inline void set_AccessKey_12(String_t* value)
	{
		___AccessKey_12 = value;
		Il2CppCodeGenWriteBarrier((&___AccessKey_12), value);
	}

	inline static int32_t get_offset_of_SecretKey_13() { return static_cast<int32_t>(offsetof(CloudRecoBehaviour_t431762792, ___SecretKey_13)); }
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
#endif // CLOUDRECOBEHAVIOUR_T431762792_H
#ifndef DATASETTRACKABLEBEHAVIOUR_T3430730379_H
#define DATASETTRACKABLEBEHAVIOUR_T3430730379_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.DataSetTrackableBehaviour
struct  DataSetTrackableBehaviour_t3430730379  : public TrackableBehaviour_t1113559212
{
public:
	// System.String Vuforia.DataSetTrackableBehaviour::mDataSetPath
	String_t* ___mDataSetPath_12;

public:
	inline static int32_t get_offset_of_mDataSetPath_12() { return static_cast<int32_t>(offsetof(DataSetTrackableBehaviour_t3430730379, ___mDataSetPath_12)); }
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
#endif // DATASETTRACKABLEBEHAVIOUR_T3430730379_H
#ifndef CYLINDERTARGETBEHAVIOUR_T822809409_H
#define CYLINDERTARGETBEHAVIOUR_T822809409_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.CylinderTargetBehaviour
struct  CylinderTargetBehaviour_t822809409  : public DataSetTrackableBehaviour_t3430730379
{
public:
	// Vuforia.CylinderTarget Vuforia.CylinderTargetBehaviour::mCylinderTarget
	RuntimeObject* ___mCylinderTarget_13;
	// System.Single Vuforia.CylinderTargetBehaviour::mTopDiameterRatio
	float ___mTopDiameterRatio_14;
	// System.Single Vuforia.CylinderTargetBehaviour::mBottomDiameterRatio
	float ___mBottomDiameterRatio_15;
	// System.Single Vuforia.CylinderTargetBehaviour::mSideLength
	float ___mSideLength_16;
	// System.Single Vuforia.CylinderTargetBehaviour::mTopDiameter
	float ___mTopDiameter_17;
	// System.Single Vuforia.CylinderTargetBehaviour::mBottomDiameter
	float ___mBottomDiameter_18;
	// System.Int32 Vuforia.CylinderTargetBehaviour::mFrameIndex
	int32_t ___mFrameIndex_19;
	// System.Int32 Vuforia.CylinderTargetBehaviour::mUpdateFrameIndex
	int32_t ___mUpdateFrameIndex_20;
	// System.Single Vuforia.CylinderTargetBehaviour::mFutureScale
	float ___mFutureScale_21;
	// System.Single Vuforia.CylinderTargetBehaviour::mLastTransformScale
	float ___mLastTransformScale_22;

public:
	inline static int32_t get_offset_of_mCylinderTarget_13() { return static_cast<int32_t>(offsetof(CylinderTargetBehaviour_t822809409, ___mCylinderTarget_13)); }
	inline RuntimeObject* get_mCylinderTarget_13() const { return ___mCylinderTarget_13; }
	inline RuntimeObject** get_address_of_mCylinderTarget_13() { return &___mCylinderTarget_13; }
	inline void set_mCylinderTarget_13(RuntimeObject* value)
	{
		___mCylinderTarget_13 = value;
		Il2CppCodeGenWriteBarrier((&___mCylinderTarget_13), value);
	}

	inline static int32_t get_offset_of_mTopDiameterRatio_14() { return static_cast<int32_t>(offsetof(CylinderTargetBehaviour_t822809409, ___mTopDiameterRatio_14)); }
	inline float get_mTopDiameterRatio_14() const { return ___mTopDiameterRatio_14; }
	inline float* get_address_of_mTopDiameterRatio_14() { return &___mTopDiameterRatio_14; }
	inline void set_mTopDiameterRatio_14(float value)
	{
		___mTopDiameterRatio_14 = value;
	}

	inline static int32_t get_offset_of_mBottomDiameterRatio_15() { return static_cast<int32_t>(offsetof(CylinderTargetBehaviour_t822809409, ___mBottomDiameterRatio_15)); }
	inline float get_mBottomDiameterRatio_15() const { return ___mBottomDiameterRatio_15; }
	inline float* get_address_of_mBottomDiameterRatio_15() { return &___mBottomDiameterRatio_15; }
	inline void set_mBottomDiameterRatio_15(float value)
	{
		___mBottomDiameterRatio_15 = value;
	}

	inline static int32_t get_offset_of_mSideLength_16() { return static_cast<int32_t>(offsetof(CylinderTargetBehaviour_t822809409, ___mSideLength_16)); }
	inline float get_mSideLength_16() const { return ___mSideLength_16; }
	inline float* get_address_of_mSideLength_16() { return &___mSideLength_16; }
	inline void set_mSideLength_16(float value)
	{
		___mSideLength_16 = value;
	}

	inline static int32_t get_offset_of_mTopDiameter_17() { return static_cast<int32_t>(offsetof(CylinderTargetBehaviour_t822809409, ___mTopDiameter_17)); }
	inline float get_mTopDiameter_17() const { return ___mTopDiameter_17; }
	inline float* get_address_of_mTopDiameter_17() { return &___mTopDiameter_17; }
	inline void set_mTopDiameter_17(float value)
	{
		___mTopDiameter_17 = value;
	}

	inline static int32_t get_offset_of_mBottomDiameter_18() { return static_cast<int32_t>(offsetof(CylinderTargetBehaviour_t822809409, ___mBottomDiameter_18)); }
	inline float get_mBottomDiameter_18() const { return ___mBottomDiameter_18; }
	inline float* get_address_of_mBottomDiameter_18() { return &___mBottomDiameter_18; }
	inline void set_mBottomDiameter_18(float value)
	{
		___mBottomDiameter_18 = value;
	}

	inline static int32_t get_offset_of_mFrameIndex_19() { return static_cast<int32_t>(offsetof(CylinderTargetBehaviour_t822809409, ___mFrameIndex_19)); }
	inline int32_t get_mFrameIndex_19() const { return ___mFrameIndex_19; }
	inline int32_t* get_address_of_mFrameIndex_19() { return &___mFrameIndex_19; }
	inline void set_mFrameIndex_19(int32_t value)
	{
		___mFrameIndex_19 = value;
	}

	inline static int32_t get_offset_of_mUpdateFrameIndex_20() { return static_cast<int32_t>(offsetof(CylinderTargetBehaviour_t822809409, ___mUpdateFrameIndex_20)); }
	inline int32_t get_mUpdateFrameIndex_20() const { return ___mUpdateFrameIndex_20; }
	inline int32_t* get_address_of_mUpdateFrameIndex_20() { return &___mUpdateFrameIndex_20; }
	inline void set_mUpdateFrameIndex_20(int32_t value)
	{
		___mUpdateFrameIndex_20 = value;
	}

	inline static int32_t get_offset_of_mFutureScale_21() { return static_cast<int32_t>(offsetof(CylinderTargetBehaviour_t822809409, ___mFutureScale_21)); }
	inline float get_mFutureScale_21() const { return ___mFutureScale_21; }
	inline float* get_address_of_mFutureScale_21() { return &___mFutureScale_21; }
	inline void set_mFutureScale_21(float value)
	{
		___mFutureScale_21 = value;
	}

	inline static int32_t get_offset_of_mLastTransformScale_22() { return static_cast<int32_t>(offsetof(CylinderTargetBehaviour_t822809409, ___mLastTransformScale_22)); }
	inline float get_mLastTransformScale_22() const { return ___mLastTransformScale_22; }
	inline float* get_address_of_mLastTransformScale_22() { return &___mLastTransformScale_22; }
	inline void set_mLastTransformScale_22(float value)
	{
		___mLastTransformScale_22 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CYLINDERTARGETBEHAVIOUR_T822809409_H
#ifndef OBJECTTARGETBEHAVIOUR_T728125005_H
#define OBJECTTARGETBEHAVIOUR_T728125005_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.ObjectTargetBehaviour
struct  ObjectTargetBehaviour_t728125005  : public DataSetTrackableBehaviour_t3430730379
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
	Vector3_t3722313464  ___mBBoxMin_17;
	// UnityEngine.Vector3 Vuforia.ObjectTargetBehaviour::mBBoxMax
	Vector3_t3722313464  ___mBBoxMax_18;
	// UnityEngine.Texture2D Vuforia.ObjectTargetBehaviour::mPreviewImage
	Texture2D_t3840446185 * ___mPreviewImage_19;
	// System.Single Vuforia.ObjectTargetBehaviour::mLength
	float ___mLength_20;
	// System.Single Vuforia.ObjectTargetBehaviour::mWidth
	float ___mWidth_21;
	// System.Single Vuforia.ObjectTargetBehaviour::mHeight
	float ___mHeight_22;
	// System.Single Vuforia.ObjectTargetBehaviour::mLastTransformScale
	float ___mLastTransformScale_23;
	// UnityEngine.Vector3 Vuforia.ObjectTargetBehaviour::mLastSize
	Vector3_t3722313464  ___mLastSize_24;

public:
	inline static int32_t get_offset_of_mObjectTarget_13() { return static_cast<int32_t>(offsetof(ObjectTargetBehaviour_t728125005, ___mObjectTarget_13)); }
	inline RuntimeObject* get_mObjectTarget_13() const { return ___mObjectTarget_13; }
	inline RuntimeObject** get_address_of_mObjectTarget_13() { return &___mObjectTarget_13; }
	inline void set_mObjectTarget_13(RuntimeObject* value)
	{
		___mObjectTarget_13 = value;
		Il2CppCodeGenWriteBarrier((&___mObjectTarget_13), value);
	}

	inline static int32_t get_offset_of_mAspectRatioXY_14() { return static_cast<int32_t>(offsetof(ObjectTargetBehaviour_t728125005, ___mAspectRatioXY_14)); }
	inline float get_mAspectRatioXY_14() const { return ___mAspectRatioXY_14; }
	inline float* get_address_of_mAspectRatioXY_14() { return &___mAspectRatioXY_14; }
	inline void set_mAspectRatioXY_14(float value)
	{
		___mAspectRatioXY_14 = value;
	}

	inline static int32_t get_offset_of_mAspectRatioXZ_15() { return static_cast<int32_t>(offsetof(ObjectTargetBehaviour_t728125005, ___mAspectRatioXZ_15)); }
	inline float get_mAspectRatioXZ_15() const { return ___mAspectRatioXZ_15; }
	inline float* get_address_of_mAspectRatioXZ_15() { return &___mAspectRatioXZ_15; }
	inline void set_mAspectRatioXZ_15(float value)
	{
		___mAspectRatioXZ_15 = value;
	}

	inline static int32_t get_offset_of_mShowBoundingBox_16() { return static_cast<int32_t>(offsetof(ObjectTargetBehaviour_t728125005, ___mShowBoundingBox_16)); }
	inline bool get_mShowBoundingBox_16() const { return ___mShowBoundingBox_16; }
	inline bool* get_address_of_mShowBoundingBox_16() { return &___mShowBoundingBox_16; }
	inline void set_mShowBoundingBox_16(bool value)
	{
		___mShowBoundingBox_16 = value;
	}

	inline static int32_t get_offset_of_mBBoxMin_17() { return static_cast<int32_t>(offsetof(ObjectTargetBehaviour_t728125005, ___mBBoxMin_17)); }
	inline Vector3_t3722313464  get_mBBoxMin_17() const { return ___mBBoxMin_17; }
	inline Vector3_t3722313464 * get_address_of_mBBoxMin_17() { return &___mBBoxMin_17; }
	inline void set_mBBoxMin_17(Vector3_t3722313464  value)
	{
		___mBBoxMin_17 = value;
	}

	inline static int32_t get_offset_of_mBBoxMax_18() { return static_cast<int32_t>(offsetof(ObjectTargetBehaviour_t728125005, ___mBBoxMax_18)); }
	inline Vector3_t3722313464  get_mBBoxMax_18() const { return ___mBBoxMax_18; }
	inline Vector3_t3722313464 * get_address_of_mBBoxMax_18() { return &___mBBoxMax_18; }
	inline void set_mBBoxMax_18(Vector3_t3722313464  value)
	{
		___mBBoxMax_18 = value;
	}

	inline static int32_t get_offset_of_mPreviewImage_19() { return static_cast<int32_t>(offsetof(ObjectTargetBehaviour_t728125005, ___mPreviewImage_19)); }
	inline Texture2D_t3840446185 * get_mPreviewImage_19() const { return ___mPreviewImage_19; }
	inline Texture2D_t3840446185 ** get_address_of_mPreviewImage_19() { return &___mPreviewImage_19; }
	inline void set_mPreviewImage_19(Texture2D_t3840446185 * value)
	{
		___mPreviewImage_19 = value;
		Il2CppCodeGenWriteBarrier((&___mPreviewImage_19), value);
	}

	inline static int32_t get_offset_of_mLength_20() { return static_cast<int32_t>(offsetof(ObjectTargetBehaviour_t728125005, ___mLength_20)); }
	inline float get_mLength_20() const { return ___mLength_20; }
	inline float* get_address_of_mLength_20() { return &___mLength_20; }
	inline void set_mLength_20(float value)
	{
		___mLength_20 = value;
	}

	inline static int32_t get_offset_of_mWidth_21() { return static_cast<int32_t>(offsetof(ObjectTargetBehaviour_t728125005, ___mWidth_21)); }
	inline float get_mWidth_21() const { return ___mWidth_21; }
	inline float* get_address_of_mWidth_21() { return &___mWidth_21; }
	inline void set_mWidth_21(float value)
	{
		___mWidth_21 = value;
	}

	inline static int32_t get_offset_of_mHeight_22() { return static_cast<int32_t>(offsetof(ObjectTargetBehaviour_t728125005, ___mHeight_22)); }
	inline float get_mHeight_22() const { return ___mHeight_22; }
	inline float* get_address_of_mHeight_22() { return &___mHeight_22; }
	inline void set_mHeight_22(float value)
	{
		___mHeight_22 = value;
	}

	inline static int32_t get_offset_of_mLastTransformScale_23() { return static_cast<int32_t>(offsetof(ObjectTargetBehaviour_t728125005, ___mLastTransformScale_23)); }
	inline float get_mLastTransformScale_23() const { return ___mLastTransformScale_23; }
	inline float* get_address_of_mLastTransformScale_23() { return &___mLastTransformScale_23; }
	inline void set_mLastTransformScale_23(float value)
	{
		___mLastTransformScale_23 = value;
	}

	inline static int32_t get_offset_of_mLastSize_24() { return static_cast<int32_t>(offsetof(ObjectTargetBehaviour_t728125005, ___mLastSize_24)); }
	inline Vector3_t3722313464  get_mLastSize_24() const { return ___mLastSize_24; }
	inline Vector3_t3722313464 * get_address_of_mLastSize_24() { return &___mLastSize_24; }
	inline void set_mLastSize_24(Vector3_t3722313464  value)
	{
		___mLastSize_24 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OBJECTTARGETBEHAVIOUR_T728125005_H
#ifndef VUMARKBEHAVIOUR_T1178230459_H
#define VUMARKBEHAVIOUR_T1178230459_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.VuMarkBehaviour
struct  VuMarkBehaviour_t1178230459  : public DataSetTrackableBehaviour_t3430730379
{
public:
	// System.Single Vuforia.VuMarkBehaviour::mAspectRatio
	float ___mAspectRatio_13;
	// System.Single Vuforia.VuMarkBehaviour::mWidth
	float ___mWidth_14;
	// System.Single Vuforia.VuMarkBehaviour::mHeight
	float ___mHeight_15;
	// System.String Vuforia.VuMarkBehaviour::mPreviewImage
	String_t* ___mPreviewImage_16;
	// Vuforia.InstanceIdType Vuforia.VuMarkBehaviour::mIdType
	int32_t ___mIdType_17;
	// System.Int32 Vuforia.VuMarkBehaviour::mIdLength
	int32_t ___mIdLength_18;
	// UnityEngine.Rect Vuforia.VuMarkBehaviour::mBoundingBox
	Rect_t2360479859  ___mBoundingBox_19;
	// UnityEngine.Vector2 Vuforia.VuMarkBehaviour::mOrigin
	Vector2_t2156229523  ___mOrigin_20;
	// System.Boolean Vuforia.VuMarkBehaviour::mTrackingFromRuntimeAppearance
	bool ___mTrackingFromRuntimeAppearance_21;
	// Vuforia.VuMarkTemplate Vuforia.VuMarkBehaviour::mVuMarkTemplate
	RuntimeObject* ___mVuMarkTemplate_22;
	// Vuforia.VuMarkTarget Vuforia.VuMarkBehaviour::mVuMarkTarget
	RuntimeObject* ___mVuMarkTarget_23;
	// System.Int32 Vuforia.VuMarkBehaviour::mVuMarkResultId
	int32_t ___mVuMarkResultId_24;
	// System.Action Vuforia.VuMarkBehaviour::mOnTargetAssigned
	Action_t1264377477 * ___mOnTargetAssigned_25;
	// System.Action Vuforia.VuMarkBehaviour::mOnTargetLost
	Action_t1264377477 * ___mOnTargetLost_26;
	// System.Single Vuforia.VuMarkBehaviour::mLastTransformScale
	float ___mLastTransformScale_27;
	// UnityEngine.Vector2 Vuforia.VuMarkBehaviour::mLastSize
	Vector2_t2156229523  ___mLastSize_28;

public:
	inline static int32_t get_offset_of_mAspectRatio_13() { return static_cast<int32_t>(offsetof(VuMarkBehaviour_t1178230459, ___mAspectRatio_13)); }
	inline float get_mAspectRatio_13() const { return ___mAspectRatio_13; }
	inline float* get_address_of_mAspectRatio_13() { return &___mAspectRatio_13; }
	inline void set_mAspectRatio_13(float value)
	{
		___mAspectRatio_13 = value;
	}

	inline static int32_t get_offset_of_mWidth_14() { return static_cast<int32_t>(offsetof(VuMarkBehaviour_t1178230459, ___mWidth_14)); }
	inline float get_mWidth_14() const { return ___mWidth_14; }
	inline float* get_address_of_mWidth_14() { return &___mWidth_14; }
	inline void set_mWidth_14(float value)
	{
		___mWidth_14 = value;
	}

	inline static int32_t get_offset_of_mHeight_15() { return static_cast<int32_t>(offsetof(VuMarkBehaviour_t1178230459, ___mHeight_15)); }
	inline float get_mHeight_15() const { return ___mHeight_15; }
	inline float* get_address_of_mHeight_15() { return &___mHeight_15; }
	inline void set_mHeight_15(float value)
	{
		___mHeight_15 = value;
	}

	inline static int32_t get_offset_of_mPreviewImage_16() { return static_cast<int32_t>(offsetof(VuMarkBehaviour_t1178230459, ___mPreviewImage_16)); }
	inline String_t* get_mPreviewImage_16() const { return ___mPreviewImage_16; }
	inline String_t** get_address_of_mPreviewImage_16() { return &___mPreviewImage_16; }
	inline void set_mPreviewImage_16(String_t* value)
	{
		___mPreviewImage_16 = value;
		Il2CppCodeGenWriteBarrier((&___mPreviewImage_16), value);
	}

	inline static int32_t get_offset_of_mIdType_17() { return static_cast<int32_t>(offsetof(VuMarkBehaviour_t1178230459, ___mIdType_17)); }
	inline int32_t get_mIdType_17() const { return ___mIdType_17; }
	inline int32_t* get_address_of_mIdType_17() { return &___mIdType_17; }
	inline void set_mIdType_17(int32_t value)
	{
		___mIdType_17 = value;
	}

	inline static int32_t get_offset_of_mIdLength_18() { return static_cast<int32_t>(offsetof(VuMarkBehaviour_t1178230459, ___mIdLength_18)); }
	inline int32_t get_mIdLength_18() const { return ___mIdLength_18; }
	inline int32_t* get_address_of_mIdLength_18() { return &___mIdLength_18; }
	inline void set_mIdLength_18(int32_t value)
	{
		___mIdLength_18 = value;
	}

	inline static int32_t get_offset_of_mBoundingBox_19() { return static_cast<int32_t>(offsetof(VuMarkBehaviour_t1178230459, ___mBoundingBox_19)); }
	inline Rect_t2360479859  get_mBoundingBox_19() const { return ___mBoundingBox_19; }
	inline Rect_t2360479859 * get_address_of_mBoundingBox_19() { return &___mBoundingBox_19; }
	inline void set_mBoundingBox_19(Rect_t2360479859  value)
	{
		___mBoundingBox_19 = value;
	}

	inline static int32_t get_offset_of_mOrigin_20() { return static_cast<int32_t>(offsetof(VuMarkBehaviour_t1178230459, ___mOrigin_20)); }
	inline Vector2_t2156229523  get_mOrigin_20() const { return ___mOrigin_20; }
	inline Vector2_t2156229523 * get_address_of_mOrigin_20() { return &___mOrigin_20; }
	inline void set_mOrigin_20(Vector2_t2156229523  value)
	{
		___mOrigin_20 = value;
	}

	inline static int32_t get_offset_of_mTrackingFromRuntimeAppearance_21() { return static_cast<int32_t>(offsetof(VuMarkBehaviour_t1178230459, ___mTrackingFromRuntimeAppearance_21)); }
	inline bool get_mTrackingFromRuntimeAppearance_21() const { return ___mTrackingFromRuntimeAppearance_21; }
	inline bool* get_address_of_mTrackingFromRuntimeAppearance_21() { return &___mTrackingFromRuntimeAppearance_21; }
	inline void set_mTrackingFromRuntimeAppearance_21(bool value)
	{
		___mTrackingFromRuntimeAppearance_21 = value;
	}

	inline static int32_t get_offset_of_mVuMarkTemplate_22() { return static_cast<int32_t>(offsetof(VuMarkBehaviour_t1178230459, ___mVuMarkTemplate_22)); }
	inline RuntimeObject* get_mVuMarkTemplate_22() const { return ___mVuMarkTemplate_22; }
	inline RuntimeObject** get_address_of_mVuMarkTemplate_22() { return &___mVuMarkTemplate_22; }
	inline void set_mVuMarkTemplate_22(RuntimeObject* value)
	{
		___mVuMarkTemplate_22 = value;
		Il2CppCodeGenWriteBarrier((&___mVuMarkTemplate_22), value);
	}

	inline static int32_t get_offset_of_mVuMarkTarget_23() { return static_cast<int32_t>(offsetof(VuMarkBehaviour_t1178230459, ___mVuMarkTarget_23)); }
	inline RuntimeObject* get_mVuMarkTarget_23() const { return ___mVuMarkTarget_23; }
	inline RuntimeObject** get_address_of_mVuMarkTarget_23() { return &___mVuMarkTarget_23; }
	inline void set_mVuMarkTarget_23(RuntimeObject* value)
	{
		___mVuMarkTarget_23 = value;
		Il2CppCodeGenWriteBarrier((&___mVuMarkTarget_23), value);
	}

	inline static int32_t get_offset_of_mVuMarkResultId_24() { return static_cast<int32_t>(offsetof(VuMarkBehaviour_t1178230459, ___mVuMarkResultId_24)); }
	inline int32_t get_mVuMarkResultId_24() const { return ___mVuMarkResultId_24; }
	inline int32_t* get_address_of_mVuMarkResultId_24() { return &___mVuMarkResultId_24; }
	inline void set_mVuMarkResultId_24(int32_t value)
	{
		___mVuMarkResultId_24 = value;
	}

	inline static int32_t get_offset_of_mOnTargetAssigned_25() { return static_cast<int32_t>(offsetof(VuMarkBehaviour_t1178230459, ___mOnTargetAssigned_25)); }
	inline Action_t1264377477 * get_mOnTargetAssigned_25() const { return ___mOnTargetAssigned_25; }
	inline Action_t1264377477 ** get_address_of_mOnTargetAssigned_25() { return &___mOnTargetAssigned_25; }
	inline void set_mOnTargetAssigned_25(Action_t1264377477 * value)
	{
		___mOnTargetAssigned_25 = value;
		Il2CppCodeGenWriteBarrier((&___mOnTargetAssigned_25), value);
	}

	inline static int32_t get_offset_of_mOnTargetLost_26() { return static_cast<int32_t>(offsetof(VuMarkBehaviour_t1178230459, ___mOnTargetLost_26)); }
	inline Action_t1264377477 * get_mOnTargetLost_26() const { return ___mOnTargetLost_26; }
	inline Action_t1264377477 ** get_address_of_mOnTargetLost_26() { return &___mOnTargetLost_26; }
	inline void set_mOnTargetLost_26(Action_t1264377477 * value)
	{
		___mOnTargetLost_26 = value;
		Il2CppCodeGenWriteBarrier((&___mOnTargetLost_26), value);
	}

	inline static int32_t get_offset_of_mLastTransformScale_27() { return static_cast<int32_t>(offsetof(VuMarkBehaviour_t1178230459, ___mLastTransformScale_27)); }
	inline float get_mLastTransformScale_27() const { return ___mLastTransformScale_27; }
	inline float* get_address_of_mLastTransformScale_27() { return &___mLastTransformScale_27; }
	inline void set_mLastTransformScale_27(float value)
	{
		___mLastTransformScale_27 = value;
	}

	inline static int32_t get_offset_of_mLastSize_28() { return static_cast<int32_t>(offsetof(VuMarkBehaviour_t1178230459, ___mLastSize_28)); }
	inline Vector2_t2156229523  get_mLastSize_28() const { return ___mLastSize_28; }
	inline Vector2_t2156229523 * get_address_of_mLastSize_28() { return &___mLastSize_28; }
	inline void set_mLastSize_28(Vector2_t2156229523  value)
	{
		___mLastSize_28 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VUMARKBEHAVIOUR_T1178230459_H





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3900 = { sizeof (GlobalStrings_t3287193005), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3900[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3901 = { sizeof (TrackerData_t881746187), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3902 = { sizeof (PoseData_t3794839648)+ sizeof (RuntimeObject), sizeof(PoseData_t3794839648 ), 0, 0 };
extern const int32_t g_FieldOffsetTable3902[3] = 
{
	PoseData_t3794839648::get_offset_of_position_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	PoseData_t3794839648::get_offset_of_orientation_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	PoseData_t3794839648::get_offset_of_unused_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3903 = { sizeof (TrackableResultData_t452703160)+ sizeof (RuntimeObject), sizeof(TrackableResultData_t452703160 ), 0, 0 };
extern const int32_t g_FieldOffsetTable3903[4] = 
{
	TrackableResultData_t452703160::get_offset_of_pose_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	TrackableResultData_t452703160::get_offset_of_timeStamp_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	TrackableResultData_t452703160::get_offset_of_statusInteger_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	TrackableResultData_t452703160::get_offset_of_id_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3904 = { sizeof (VirtualButtonData_t1117953748)+ sizeof (RuntimeObject), sizeof(VirtualButtonData_t1117953748 ), 0, 0 };
extern const int32_t g_FieldOffsetTable3904[2] = 
{
	VirtualButtonData_t1117953748::get_offset_of_id_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	VirtualButtonData_t1117953748::get_offset_of_isPressed_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3905 = { sizeof (Obb2D_t1491623550)+ sizeof (RuntimeObject), sizeof(Obb2D_t1491623550 ), 0, 0 };
extern const int32_t g_FieldOffsetTable3905[4] = 
{
	Obb2D_t1491623550::get_offset_of_center_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Obb2D_t1491623550::get_offset_of_halfExtents_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Obb2D_t1491623550::get_offset_of_rotation_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Obb2D_t1491623550::get_offset_of_unused_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3906 = { sizeof (Obb3D_t3447938686)+ sizeof (RuntimeObject), sizeof(Obb3D_t3447938686 ), 0, 0 };
extern const int32_t g_FieldOffsetTable3906[4] = 
{
	Obb3D_t3447938686::get_offset_of_center_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Obb3D_t3447938686::get_offset_of_halfExtents_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Obb3D_t3447938686::get_offset_of_rotationZ_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Obb3D_t3447938686::get_offset_of_unused_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3907 = { sizeof (ImageHeaderData_t3550119865)+ sizeof (RuntimeObject), sizeof(ImageHeaderData_t3550119865 ), 0, 0 };
extern const int32_t g_FieldOffsetTable3907[9] = 
{
	ImageHeaderData_t3550119865::get_offset_of_data_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ImageHeaderData_t3550119865::get_offset_of_width_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ImageHeaderData_t3550119865::get_offset_of_height_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ImageHeaderData_t3550119865::get_offset_of_stride_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ImageHeaderData_t3550119865::get_offset_of_bufferWidth_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ImageHeaderData_t3550119865::get_offset_of_bufferHeight_5() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ImageHeaderData_t3550119865::get_offset_of_format_6() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ImageHeaderData_t3550119865::get_offset_of_reallocate_7() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ImageHeaderData_t3550119865::get_offset_of_updated_8() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3908 = { sizeof (MeshData_t3397756459)+ sizeof (RuntimeObject), sizeof(MeshData_t3397756459 ), 0, 0 };
extern const int32_t g_FieldOffsetTable3908[8] = 
{
	MeshData_t3397756459::get_offset_of_positionsArray_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	MeshData_t3397756459::get_offset_of_normalsArray_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	MeshData_t3397756459::get_offset_of_texCoordsArray_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	MeshData_t3397756459::get_offset_of_triangleIdxArray_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	MeshData_t3397756459::get_offset_of_numVertexValues_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
	MeshData_t3397756459::get_offset_of_hasNormals_5() + static_cast<int32_t>(sizeof(RuntimeObject)),
	MeshData_t3397756459::get_offset_of_hasTexCoords_6() + static_cast<int32_t>(sizeof(RuntimeObject)),
	MeshData_t3397756459::get_offset_of_numTriangleIndices_7() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3909 = { sizeof (InstanceIdData_t3520832738)+ sizeof (RuntimeObject), sizeof(InstanceIdData_t3520832738 ), 0, 0 };
extern const int32_t g_FieldOffsetTable3909[5] = 
{
	InstanceIdData_t3520832738::get_offset_of_numericValue_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	InstanceIdData_t3520832738::get_offset_of_buffer_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	InstanceIdData_t3520832738::get_offset_of_reserved_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	InstanceIdData_t3520832738::get_offset_of_dataLength_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	InstanceIdData_t3520832738::get_offset_of_dataType_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3910 = { sizeof (VuMarkTargetData_t3266143771)+ sizeof (RuntimeObject), sizeof(VuMarkTargetData_t3266143771 ), 0, 0 };
extern const int32_t g_FieldOffsetTable3910[5] = 
{
	VuMarkTargetData_t3266143771::get_offset_of_instanceId_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	VuMarkTargetData_t3266143771::get_offset_of_id_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	VuMarkTargetData_t3266143771::get_offset_of_templateId_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	VuMarkTargetData_t3266143771::get_offset_of_size_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	VuMarkTargetData_t3266143771::get_offset_of_unused_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3911 = { sizeof (VuMarkTargetResultData_t2153299244)+ sizeof (RuntimeObject), sizeof(VuMarkTargetResultData_t2153299244 ), 0, 0 };
extern const int32_t g_FieldOffsetTable3911[6] = 
{
	VuMarkTargetResultData_t2153299244::get_offset_of_pose_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	VuMarkTargetResultData_t2153299244::get_offset_of_timeStamp_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	VuMarkTargetResultData_t2153299244::get_offset_of_statusInteger_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	VuMarkTargetResultData_t2153299244::get_offset_of_targetID_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	VuMarkTargetResultData_t2153299244::get_offset_of_resultID_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
	VuMarkTargetResultData_t2153299244::get_offset_of_unused_5() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3912 = { sizeof (IlluminationData_t3332404395)+ sizeof (RuntimeObject), sizeof(IlluminationData_t3332404395 ), 0, 0 };
extern const int32_t g_FieldOffsetTable3912[2] = 
{
	IlluminationData_t3332404395::get_offset_of_ambientIntensity_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	IlluminationData_t3332404395::get_offset_of_ambientColorTemperature_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3913 = { sizeof (FrameState_t2717258284)+ sizeof (RuntimeObject), sizeof(FrameState_t2717258284 ), 0, 0 };
extern const int32_t g_FieldOffsetTable3913[13] = 
{
	FrameState_t2717258284::get_offset_of_trackableDataArray_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	FrameState_t2717258284::get_offset_of_vbDataArray_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	FrameState_t2717258284::get_offset_of_vuMarkResultArray_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	FrameState_t2717258284::get_offset_of_newVuMarkDataArray_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	FrameState_t2717258284::get_offset_of_illuminationData_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
	FrameState_t2717258284::get_offset_of_numTrackableResults_5() + static_cast<int32_t>(sizeof(RuntimeObject)),
	FrameState_t2717258284::get_offset_of_numVirtualButtonResults_6() + static_cast<int32_t>(sizeof(RuntimeObject)),
	FrameState_t2717258284::get_offset_of_frameIndex_7() + static_cast<int32_t>(sizeof(RuntimeObject)),
	FrameState_t2717258284::get_offset_of_numVuMarkResults_8() + static_cast<int32_t>(sizeof(RuntimeObject)),
	FrameState_t2717258284::get_offset_of_numNewVuMarks_9() + static_cast<int32_t>(sizeof(RuntimeObject)),
	FrameState_t2717258284::get_offset_of_deviceTrackableId_10() + static_cast<int32_t>(sizeof(RuntimeObject)),
	FrameState_t2717258284::get_offset_of_deviceTrackableStatusInfo_11() + static_cast<int32_t>(sizeof(RuntimeObject)),
	FrameState_t2717258284::get_offset_of_minCameraCalibration_12() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3914 = { sizeof (StructList_t2334955711)+ sizeof (RuntimeObject), sizeof(StructList_t2334955711 ), 0, 0 };
extern const int32_t g_FieldOffsetTable3914[3] = 
{
	StructList_t2334955711::get_offset_of_arrayPtr_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	StructList_t2334955711::get_offset_of_numResults_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	StructList_t2334955711::get_offset_of_unused_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3915 = { sizeof (InstanceIdImpl_t2824054591), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3915[5] = 
{
	InstanceIdImpl_t2824054591::get_offset_of_mDataType_0(),
	InstanceIdImpl_t2824054591::get_offset_of_mBuffer_1(),
	InstanceIdImpl_t2824054591::get_offset_of_mNumericValue_2(),
	InstanceIdImpl_t2824054591::get_offset_of_mDataLength_3(),
	InstanceIdImpl_t2824054591::get_offset_of_mCachedStringValue_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3916 = { sizeof (VuMarkTargetImpl_t1052843922), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3916[4] = 
{
	VuMarkTargetImpl_t1052843922::get_offset_of_mVuMarkTemplate_3(),
	VuMarkTargetImpl_t1052843922::get_offset_of_mInstanceId_4(),
	VuMarkTargetImpl_t1052843922::get_offset_of_mInstanceImage_5(),
	VuMarkTargetImpl_t1052843922::get_offset_of_mInstanceImageHeader_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3917 = { sizeof (VuMarkSetTargetSize_t4198822840), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3917[1] = 
{
	VuMarkSetTargetSize_t4198822840::get_offset_of_mTemplate_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3918 = { sizeof (VuMarkTemplateImpl_t667343433), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3918[3] = 
{
	VuMarkTemplateImpl_t667343433::get_offset_of_mUserData_4(),
	VuMarkTemplateImpl_t667343433::get_offset_of_mOrigin_5(),
	VuMarkTemplateImpl_t667343433::get_offset_of_mTrackingFromRuntimeAppearance_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3919 = { sizeof (MixedRealityController_t13217384), -1, sizeof(MixedRealityController_t13217384_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable3919[11] = 
{
	0,
	MixedRealityController_t13217384_StaticFields::get_offset_of_mInstance_1(),
	MixedRealityController_t13217384::get_offset_of_mVuforiaBehaviour_2(),
	MixedRealityController_t13217384::get_offset_of_mDigitalEyewearBehaviour_3(),
	MixedRealityController_t13217384::get_offset_of_mVideoBackgroundManager_4(),
	MixedRealityController_t13217384::get_offset_of_mViewerHasBeenSetExternally_5(),
	MixedRealityController_t13217384::get_offset_of_mViewerParameters_6(),
	MixedRealityController_t13217384::get_offset_of_mFrameWorkHasBeenSetExternally_7(),
	MixedRealityController_t13217384::get_offset_of_mStereoFramework_8(),
	MixedRealityController_t13217384::get_offset_of_mObjectTrackerStopped_9(),
	MixedRealityController_t13217384::get_offset_of_mAutoStopCameraIfNotRequired_10(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3920 = { sizeof (Mode_t2694983447)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable3920[9] = 
{
	Mode_t2694983447::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3921 = { sizeof (RotationalDeviceTracker_t2847210804), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3922 = { sizeof (MODEL_CORRECTION_MODE_t1953038946)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable3922[4] = 
{
	MODEL_CORRECTION_MODE_t1953038946::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3923 = { sizeof (CustomViewerParameters_t463762113), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3923[7] = 
{
	CustomViewerParameters_t463762113::get_offset_of_mVersion_1(),
	CustomViewerParameters_t463762113::get_offset_of_mName_2(),
	CustomViewerParameters_t463762113::get_offset_of_mManufacturer_3(),
	CustomViewerParameters_t463762113::get_offset_of_mButtonType_4(),
	CustomViewerParameters_t463762113::get_offset_of_mScreenToLensDistance_5(),
	CustomViewerParameters_t463762113::get_offset_of_mTrayAlignment_6(),
	CustomViewerParameters_t463762113::get_offset_of_mMagnet_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3924 = { sizeof (DeviceTrackingManager_t3849131975), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3924[8] = 
{
	DeviceTrackingManager_t3849131975::get_offset_of_mDeviceTrackerPositonOffset_0(),
	DeviceTrackingManager_t3849131975::get_offset_of_mDeviceTrackerRotationOffset_1(),
	DeviceTrackingManager_t3849131975::get_offset_of_mBeforeDevicePoseUpdated_2(),
	DeviceTrackingManager_t3849131975::get_offset_of_mAfterDevicePoseUpdated_3(),
	DeviceTrackingManager_t3849131975::get_offset_of_mStatusChanged_4(),
	DeviceTrackingManager_t3849131975::get_offset_of_mStatusOrInfoChanged_5(),
	DeviceTrackingManager_t3849131975::get_offset_of_mCurrentTrackableStatus_6(),
	DeviceTrackingManager_t3849131975::get_offset_of_mCurrentTrackableStatusInfo_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3925 = { sizeof (FactorySetter_t2184571743), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3926 = { sizeof (EyewearCalibrationProfileManagerImpl_t3765540215), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3927 = { sizeof (BackgroundPlaneBehaviour_t3333547397), -1, sizeof(BackgroundPlaneBehaviour_t3333547397_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable3927[15] = 
{
	BackgroundPlaneBehaviour_t3333547397::get_offset_of_mTextureInfo_4(),
	BackgroundPlaneBehaviour_t3333547397::get_offset_of_mNumFramesToUpdateVideoBg_5(),
	BackgroundPlaneBehaviour_t3333547397::get_offset_of_mCameraTransform_6(),
	BackgroundPlaneBehaviour_t3333547397_StaticFields::get_offset_of_maxDisplacement_7(),
	BackgroundPlaneBehaviour_t3333547397::get_offset_of_mMesh_8(),
	BackgroundPlaneBehaviour_t3333547397::get_offset_of_mStereoDepth_9(),
	BackgroundPlaneBehaviour_t3333547397::get_offset_of_mProjectionMatrixSetExternally_10(),
	BackgroundPlaneBehaviour_t3333547397::get_offset_of_mBackgroundOffset_11(),
	BackgroundPlaneBehaviour_t3333547397::get_offset_of_mVuforiaBehaviour_12(),
	BackgroundPlaneBehaviour_t3333547397::get_offset_of_mBackgroundPlacedCallback_13(),
	BackgroundPlaneBehaviour_t3333547397::get_offset_of_mValidator_14(),
	BackgroundPlaneBehaviour_t3333547397::get_offset_of_mProjectMatrixProvider_15(),
	BackgroundPlaneBehaviour_t3333547397::get_offset_of_mLastUsedProjectioMatrix_16(),
	BackgroundPlaneBehaviour_t3333547397::get_offset_of_mNumDivisions_17(),
	BackgroundPlaneBehaviour_t3333547397::get_offset_of_mHideExcessAreaUtility_18(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3928 = { sizeof (ProjectionMatrixData_t3894131367)+ sizeof (RuntimeObject), sizeof(ProjectionMatrixData_t3894131367 ), 0, 0 };
extern const int32_t g_FieldOffsetTable3928[7] = 
{
	ProjectionMatrixData_t3894131367::get_offset_of_ProjectionMatrix_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ProjectionMatrixData_t3894131367::get_offset_of_InverseMatrix_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ProjectionMatrixData_t3894131367::get_offset_of_HorizontalFoV_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ProjectionMatrixData_t3894131367::get_offset_of_VerticalFoV_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ProjectionMatrixData_t3894131367::get_offset_of_CenterEyeRayFrom_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ProjectionMatrixData_t3894131367::get_offset_of_CenterEyeRayTo_5() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ProjectionMatrixData_t3894131367::get_offset_of_MaxDepth_6() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3929 = { sizeof (EyewearUserCalibratorImpl_t3089732268), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3930 = { sizeof (EyewearCalibrationReadingData_t937256773)+ sizeof (RuntimeObject), sizeof(EyewearCalibrationReadingData_t937256773_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable3930[5] = 
{
	EyewearCalibrationReadingData_t937256773::get_offset_of_pose_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	EyewearCalibrationReadingData_t937256773::get_offset_of_scale_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	EyewearCalibrationReadingData_t937256773::get_offset_of_centerX_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	EyewearCalibrationReadingData_t937256773::get_offset_of_centerY_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	EyewearCalibrationReadingData_t937256773::get_offset_of_type_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3931 = { sizeof (RotationalPlayModeDeviceTrackerImpl_t4048275232), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3931[4] = 
{
	RotationalPlayModeDeviceTrackerImpl_t4048275232::get_offset_of_mVectorZero_1(),
	RotationalPlayModeDeviceTrackerImpl_t4048275232::get_offset_of_mModelCorrectionTransform_2(),
	RotationalPlayModeDeviceTrackerImpl_t4048275232::get_offset_of_mModelCorrection_3(),
	RotationalPlayModeDeviceTrackerImpl_t4048275232::get_offset_of_U3CRotationU3Ek__BackingField_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3932 = { sizeof (RotationalDeviceTrackerImpl_t1573407597), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3933 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3934 = { sizeof (IOSCamRecoveringHelper_t4035151671), -1, sizeof(IOSCamRecoveringHelper_t4035151671_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable3934[9] = 
{
	0,
	0,
	0,
	IOSCamRecoveringHelper_t4035151671_StaticFields::get_offset_of_sHasJustResumed_3(),
	IOSCamRecoveringHelper_t4035151671_StaticFields::get_offset_of_sCheckFailedFrameAfterResume_4(),
	IOSCamRecoveringHelper_t4035151671_StaticFields::get_offset_of_sCheckedFailedFrameCounter_5(),
	IOSCamRecoveringHelper_t4035151671_StaticFields::get_offset_of_sWaitToRecoverCameraRestart_6(),
	IOSCamRecoveringHelper_t4035151671_StaticFields::get_offset_of_sWaitedFrameRecoverCounter_7(),
	IOSCamRecoveringHelper_t4035151671_StaticFields::get_offset_of_sRecoveryAttemptCounter_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3935 = { sizeof (MeshUtils_t922322213), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3936 = { sizeof (NullHideExcessAreaClipping_t465635818), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3937 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3938 = { sizeof (DedicatedEyewearCameraConfiguration_t2854098828), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3938[15] = 
{
	0,
	0,
	0,
	DedicatedEyewearCameraConfiguration_t2854098828::get_offset_of_mCamera_14(),
	DedicatedEyewearCameraConfiguration_t2854098828::get_offset_of_mScreenWidth_15(),
	DedicatedEyewearCameraConfiguration_t2854098828::get_offset_of_mScreenHeight_16(),
	DedicatedEyewearCameraConfiguration_t2854098828::get_offset_of_mNeedToCheckStereo_17(),
	DedicatedEyewearCameraConfiguration_t2854098828::get_offset_of_mLastAppliedNearClipPlane_18(),
	DedicatedEyewearCameraConfiguration_t2854098828::get_offset_of_mLastAppliedFarClipPlane_19(),
	DedicatedEyewearCameraConfiguration_t2854098828::get_offset_of_mLeftProjectionMatrix_20(),
	DedicatedEyewearCameraConfiguration_t2854098828::get_offset_of_mPlayModeEyeTextureWidth_21(),
	DedicatedEyewearCameraConfiguration_t2854098828::get_offset_of_mPlayModeEyeTextureHeight_22(),
	DedicatedEyewearCameraConfiguration_t2854098828::get_offset_of_mEyewearDevice_23(),
	DedicatedEyewearCameraConfiguration_t2854098828::get_offset_of_mMatrixStore_24(),
	DedicatedEyewearCameraConfiguration_t2854098828::get_offset_of_mVrDeviceController_25(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3939 = { sizeof (EyeData_t2079809150)+ sizeof (RuntimeObject), sizeof(EyeData_t2079809150 ), 0, 0 };
extern const int32_t g_FieldOffsetTable3939[3] = 
{
	EyeData_t2079809150::get_offset_of_OffsetPosition_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	EyeData_t2079809150::get_offset_of_OffsetRotation_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	EyeData_t2079809150::get_offset_of_ProjectionMatrix_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3940 = { sizeof (NullCameraConfiguration_t2773452281), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3940[1] = 
{
	NullCameraConfiguration_t2773452281::get_offset_of_mProjectionOrientation_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3941 = { sizeof (MonoCameraConfiguration_t112386736), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3941[8] = 
{
	0,
	MonoCameraConfiguration_t112386736::get_offset_of_mPrimaryCamera_12(),
	MonoCameraConfiguration_t112386736::get_offset_of_mCameraViewPortWidth_13(),
	MonoCameraConfiguration_t112386736::get_offset_of_mCameraViewPortHeight_14(),
	MonoCameraConfiguration_t112386736::get_offset_of_mLastAppliedNearClipPlane_15(),
	MonoCameraConfiguration_t112386736::get_offset_of_mLastAppliedFarClipPlane_16(),
	MonoCameraConfiguration_t112386736::get_offset_of_mLastAppliedFoV_17(),
	MonoCameraConfiguration_t112386736::get_offset_of_mVrDeviceController_18(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3942 = { sizeof (UnityCameraExtensions_t3394190193), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3943 = { sizeof (View_t3879626884)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable3943[6] = 
{
	View_t3879626884::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3944 = { sizeof (ViewerParameters_t3396315024), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3944[1] = 
{
	ViewerParameters_t3396315024::get_offset_of_mNativeVP_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3945 = { sizeof (ViewerParametersList_t3991990123), -1, sizeof(ViewerParametersList_t3991990123_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable3945[2] = 
{
	ViewerParametersList_t3991990123::get_offset_of_mNativeVPL_0(),
	ViewerParametersList_t3991990123_StaticFields::get_offset_of_mListForAuthoringTools_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3946 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3947 = { sizeof (ObjectTargetBehaviour_t728125005), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3947[12] = 
{
	ObjectTargetBehaviour_t728125005::get_offset_of_mObjectTarget_13(),
	ObjectTargetBehaviour_t728125005::get_offset_of_mAspectRatioXY_14(),
	ObjectTargetBehaviour_t728125005::get_offset_of_mAspectRatioXZ_15(),
	ObjectTargetBehaviour_t728125005::get_offset_of_mShowBoundingBox_16(),
	ObjectTargetBehaviour_t728125005::get_offset_of_mBBoxMin_17(),
	ObjectTargetBehaviour_t728125005::get_offset_of_mBBoxMax_18(),
	ObjectTargetBehaviour_t728125005::get_offset_of_mPreviewImage_19(),
	ObjectTargetBehaviour_t728125005::get_offset_of_mLength_20(),
	ObjectTargetBehaviour_t728125005::get_offset_of_mWidth_21(),
	ObjectTargetBehaviour_t728125005::get_offset_of_mHeight_22(),
	ObjectTargetBehaviour_t728125005::get_offset_of_mLastTransformScale_23(),
	ObjectTargetBehaviour_t728125005::get_offset_of_mLastSize_24(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3948 = { sizeof (CameraDevice_t960297568), -1, sizeof(CameraDevice_t960297568_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable3948[14] = 
{
	CameraDevice_t960297568_StaticFields::get_offset_of_mInstance_0(),
	CameraDevice_t960297568::get_offset_of_mCameraImages_1(),
	CameraDevice_t960297568::get_offset_of_mForcedCameraFormats_2(),
	CameraDevice_t960297568_StaticFields::get_offset_of_mWebCam_3(),
	CameraDevice_t960297568::get_offset_of_mCameraReady_4(),
	CameraDevice_t960297568::get_offset_of_mIsDirty_5(),
	CameraDevice_t960297568::get_offset_of_mActualCameraDirection_6(),
	CameraDevice_t960297568::get_offset_of_mSelectedCameraDirection_7(),
	CameraDevice_t960297568::get_offset_of_mCameraDeviceMode_8(),
	CameraDevice_t960297568::get_offset_of_mVideoModeData_9(),
	CameraDevice_t960297568::get_offset_of_mVideoModeDataNeedsUpdate_10(),
	CameraDevice_t960297568::get_offset_of_mHasCameraDeviceModeBeenSet_11(),
	CameraDevice_t960297568::get_offset_of_mCameraActive_12(),
	CameraDevice_t960297568::get_offset_of_mIsCameraMocked_13(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3949 = { sizeof (CameraDeviceMode_t2478715656)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable3949[4] = 
{
	CameraDeviceMode_t2478715656::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3950 = { sizeof (FocusMode_t3379290461)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable3950[6] = 
{
	FocusMode_t3379290461::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3951 = { sizeof (CameraDirection_t637748435)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable3951[4] = 
{
	CameraDirection_t637748435::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3952 = { sizeof (VideoModeData_t2066817255)+ sizeof (RuntimeObject), sizeof(VideoModeData_t2066817255 ), 0, 0 };
extern const int32_t g_FieldOffsetTable3952[4] = 
{
	VideoModeData_t2066817255::get_offset_of_width_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	VideoModeData_t2066817255::get_offset_of_height_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	VideoModeData_t2066817255::get_offset_of_frameRate_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	VideoModeData_t2066817255::get_offset_of_unused_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3953 = { sizeof (CameraField_t1483002240)+ sizeof (RuntimeObject), sizeof(CameraField_t1483002240_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable3953[2] = 
{
	CameraField_t1483002240::get_offset_of_Type_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	CameraField_t1483002240::get_offset_of_Key_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3954 = { sizeof (DataType_t1354848506)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable3954[7] = 
{
	DataType_t1354848506::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3955 = { sizeof (Int64Range_t3875541155)+ sizeof (RuntimeObject), sizeof(Int64Range_t3875541155 ), 0, 0 };
extern const int32_t g_FieldOffsetTable3955[2] = 
{
	Int64Range_t3875541155::get_offset_of_fromInt_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Int64Range_t3875541155::get_offset_of_toInt_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3956 = { sizeof (CameraFieldData_t4012589513)+ sizeof (RuntimeObject), sizeof(CameraFieldData_t4012589513_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable3956[3] = 
{
	CameraFieldData_t4012589513::get_offset_of_KeyValue_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	CameraFieldData_t4012589513::get_offset_of_DataType_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	CameraFieldData_t4012589513::get_offset_of_Unused_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3957 = { sizeof (CloudRecoBehaviour_t431762792), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3957[2] = 
{
	CloudRecoBehaviour_t431762792::get_offset_of_AccessKey_12(),
	CloudRecoBehaviour_t431762792::get_offset_of_SecretKey_13(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3958 = { sizeof (HideExcessAreaUtility_t3142786924), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3958[7] = 
{
	HideExcessAreaUtility_t3142786924::get_offset_of_mClippingImpl_0(),
	HideExcessAreaUtility_t3142786924::get_offset_of_mClippingMode_1(),
	HideExcessAreaUtility_t3142786924::get_offset_of_mVideoBgMgr_2(),
	HideExcessAreaUtility_t3142786924::get_offset_of_mSceneScaledDown_3(),
	HideExcessAreaUtility_t3142786924::get_offset_of_mStarted_4(),
	HideExcessAreaUtility_t3142786924::get_offset_of_mEnabled_5(),
	HideExcessAreaUtility_t3142786924::get_offset_of_mParentGameObject_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3959 = { sizeof (CLIPPING_MODE_t2655398006)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable3959[3] = 
{
	CLIPPING_MODE_t2655398006::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3960 = { sizeof (DataSetObjectTargetImpl_t2835536742), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3960[1] = 
{
	DataSetObjectTargetImpl_t2835536742::get_offset_of_mDataSet_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3961 = { sizeof (UnityPlayer_t3127875071), -1, sizeof(UnityPlayer_t3127875071_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable3961[1] = 
{
	UnityPlayer_t3127875071_StaticFields::get_offset_of_sPlayer_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3962 = { sizeof (NullUnityPlayer_t2922069181), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3963 = { sizeof (Device_t64880687), -1, sizeof(Device_t64880687_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable3963[1] = 
{
	Device_t64880687_StaticFields::get_offset_of_mInstance_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3964 = { sizeof (Mode_t3830573374)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable3964[3] = 
{
	Mode_t3830573374::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3965 = { sizeof (ViewerButtonType_t3221680132)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable3965[5] = 
{
	ViewerButtonType_t3221680132::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3966 = { sizeof (ViewerTrayAlignment_t2810797062)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable3966[4] = 
{
	ViewerTrayAlignment_t2810797062::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3967 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3968 = { sizeof (PosixPath_t2439177930), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3969 = { sizeof (InvalidPathException_t1887997809), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3970 = { sizeof (U3CU3Ec_t2832990594), -1, sizeof(U3CU3Ec_t2832990594_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable3970[3] = 
{
	U3CU3Ec_t2832990594_StaticFields::get_offset_of_U3CU3E9_0(),
	U3CU3Ec_t2832990594_StaticFields::get_offset_of_U3CU3E9__1_0_1(),
	U3CU3Ec_t2832990594_StaticFields::get_offset_of_U3CU3E9__1_1_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3971 = { sizeof (LateLatchingManager_t3198550161), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3971[9] = 
{
	LateLatchingManager_t3198550161::get_offset_of_mInitialized_0(),
	LateLatchingManager_t3198550161::get_offset_of_mEnabled_1(),
	LateLatchingManager_t3198550161::get_offset_of_mUpdated_2(),
	LateLatchingManager_t3198550161::get_offset_of_mCachedPositionalOffset_3(),
	LateLatchingManager_t3198550161::get_offset_of_mCachedRotationalOffset_4(),
	LateLatchingManager_t3198550161::get_offset_of_mCachedTrackableResultDataArray_5(),
	LateLatchingManager_t3198550161::get_offset_of_mCachedVuMarkResultDataArray_6(),
	LateLatchingManager_t3198550161::get_offset_of_mCachedOriginTrackableID_7(),
	LateLatchingManager_t3198550161::get_offset_of_mCachedFrameIndex_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3972 = { sizeof (VRDeviceController_t3863472269), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3972[2] = 
{
	VRDeviceController_t3863472269::get_offset_of_mHeadPoseDisablingClasses_0(),
	VRDeviceController_t3863472269::get_offset_of_mHeadPosesEnabledOnce_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3973 = { sizeof (VuforiaBehaviour_t2151848540), -1, sizeof(VuforiaBehaviour_t2151848540_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable3973[14] = 
{
	VuforiaBehaviour_t2151848540_StaticFields::get_offset_of_mVuforiaBehaviour_4(),
	VuforiaBehaviour_t2151848540::get_offset_of_mWorldCenterMode_5(),
	VuforiaBehaviour_t2151848540::get_offset_of_mWorldCenter_6(),
	VuforiaBehaviour_t2151848540::get_offset_of_mAppIsQuitting_7(),
	VuforiaBehaviour_t2151848540_StaticFields::get_offset_of_BehaviourCreated_8(),
	VuforiaBehaviour_t2151848540_StaticFields::get_offset_of_BehaviourDestroyed_9(),
	VuforiaBehaviour_t2151848540::get_offset_of_AwakeEvent_10(),
	VuforiaBehaviour_t2151848540::get_offset_of_OnEnableEvent_11(),
	VuforiaBehaviour_t2151848540::get_offset_of_StartEvent_12(),
	VuforiaBehaviour_t2151848540::get_offset_of_UpdateEvent_13(),
	VuforiaBehaviour_t2151848540::get_offset_of_OnLevelWasLoadedEvent_14(),
	VuforiaBehaviour_t2151848540::get_offset_of_OnApplicationPauseEvent_15(),
	VuforiaBehaviour_t2151848540::get_offset_of_OnDisableEvent_16(),
	VuforiaBehaviour_t2151848540::get_offset_of_OnDestroyEvent_17(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3974 = { sizeof (VuforiaConfiguration_t1763229349), -1, sizeof(VuforiaConfiguration_t1763229349_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable3974[8] = 
{
	VuforiaConfiguration_t1763229349_StaticFields::get_offset_of_mInstance_4(),
	VuforiaConfiguration_t1763229349_StaticFields::get_offset_of_mPadlock_5(),
	VuforiaConfiguration_t1763229349::get_offset_of_vuforia_6(),
	VuforiaConfiguration_t1763229349::get_offset_of_digitalEyewear_7(),
	VuforiaConfiguration_t1763229349::get_offset_of_videoBackground_8(),
	VuforiaConfiguration_t1763229349::get_offset_of_deviceTracker_9(),
	VuforiaConfiguration_t1763229349::get_offset_of_smartTerrain_10(),
	VuforiaConfiguration_t1763229349::get_offset_of_webcam_11(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3975 = { sizeof (GenericVuforiaConfiguration_t3697830469), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3975[12] = 
{
	0,
	GenericVuforiaConfiguration_t3697830469::get_offset_of_vuforiaLicenseKey_1(),
	GenericVuforiaConfiguration_t3697830469::get_offset_of_ufoLicenseKey_2(),
	GenericVuforiaConfiguration_t3697830469::get_offset_of_delayedInitialization_3(),
	GenericVuforiaConfiguration_t3697830469::get_offset_of_cameraDeviceModeSetting_4(),
	GenericVuforiaConfiguration_t3697830469::get_offset_of_maxSimultaneousImageTargets_5(),
	GenericVuforiaConfiguration_t3697830469::get_offset_of_maxSimultaneousObjectTargets_6(),
	GenericVuforiaConfiguration_t3697830469::get_offset_of_useDelayedLoadingObjectTargets_7(),
	GenericVuforiaConfiguration_t3697830469::get_offset_of_cameraDirection_8(),
	GenericVuforiaConfiguration_t3697830469::get_offset_of_mirrorVideoBackground_9(),
	GenericVuforiaConfiguration_t3697830469::get_offset_of_version_10(),
	GenericVuforiaConfiguration_t3697830469::get_offset_of_eulaAcceptedVersions_11(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3976 = { sizeof (DigitalEyewearConfiguration_t546560202), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3976[9] = 
{
	DigitalEyewearConfiguration_t546560202::get_offset_of_cameraOffset_0(),
	DigitalEyewearConfiguration_t546560202::get_offset_of_distortionRenderingLayer_1(),
	DigitalEyewearConfiguration_t546560202::get_offset_of_eyewearType_2(),
	DigitalEyewearConfiguration_t546560202::get_offset_of_stereoFramework_3(),
	DigitalEyewearConfiguration_t546560202::get_offset_of_seeThroughConfiguration_4(),
	DigitalEyewearConfiguration_t546560202::get_offset_of_viewerName_5(),
	DigitalEyewearConfiguration_t546560202::get_offset_of_viewerManufacturer_6(),
	DigitalEyewearConfiguration_t546560202::get_offset_of_useCustomViewer_7(),
	DigitalEyewearConfiguration_t546560202::get_offset_of_customViewer_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3977 = { sizeof (VideoBackgroundConfiguration_t3392414655), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3977[5] = 
{
	VideoBackgroundConfiguration_t3392414655::get_offset_of_clippingMode_0(),
	VideoBackgroundConfiguration_t3392414655::get_offset_of_numDivisions_1(),
	VideoBackgroundConfiguration_t3392414655::get_offset_of_videoBackgroundShader_2(),
	VideoBackgroundConfiguration_t3392414655::get_offset_of_matteShader_3(),
	VideoBackgroundConfiguration_t3392414655::get_offset_of_videoBackgroundEnabled_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3978 = { sizeof (TrackerConfiguration_t3072429111), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3978[2] = 
{
	TrackerConfiguration_t3072429111::get_offset_of_autoInitTracker_0(),
	TrackerConfiguration_t3072429111::get_offset_of_autoStartTracker_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3979 = { sizeof (DeviceTrackerConfiguration_t721467671), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3979[6] = 
{
	DeviceTrackerConfiguration_t721467671::get_offset_of_trackingMode_2(),
	DeviceTrackerConfiguration_t721467671::get_offset_of_posePrediction_3(),
	DeviceTrackerConfiguration_t721467671::get_offset_of_modelCorrectionMode_4(),
	DeviceTrackerConfiguration_t721467671::get_offset_of_modelTransformEnabled_5(),
	DeviceTrackerConfiguration_t721467671::get_offset_of_modelTransform_6(),
	DeviceTrackerConfiguration_t721467671::get_offset_of_fusionMode_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3980 = { sizeof (SmartTerrainConfiguration_t1514074484), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3981 = { sizeof (WebCamConfiguration_t1101614731), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3981[4] = 
{
	WebCamConfiguration_t1101614731::get_offset_of_deviceNameSetInEditor_0(),
	WebCamConfiguration_t1101614731::get_offset_of_flipHorizontally_1(),
	WebCamConfiguration_t1101614731::get_offset_of_turnOffWebCam_2(),
	WebCamConfiguration_t1101614731::get_offset_of_renderTextureLayer_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3982 = { sizeof (VuforiaRuntime_t1949122020), -1, sizeof(VuforiaRuntime_t1949122020_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable3982[10] = 
{
	0,
	VuforiaRuntime_t1949122020::get_offset_of_mOnVuforiaInitError_1(),
	VuforiaRuntime_t1949122020::get_offset_of_mFailedToInitialize_2(),
	VuforiaRuntime_t1949122020::get_offset_of_mInitError_3(),
	VuforiaRuntime_t1949122020::get_offset_of_mInitState_4(),
	VuforiaRuntime_t1949122020::get_offset_of_mInitThreadReturned_5(),
	VuforiaRuntime_t1949122020::get_offset_of_mReturnedError_6(),
	VuforiaRuntime_t1949122020_StaticFields::get_offset_of_mInstance_7(),
	VuforiaRuntime_t1949122020_StaticFields::get_offset_of_mPadlock_8(),
	VuforiaRuntime_t1949122020::get_offset_of_mAppIsQuitting_9(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3983 = { sizeof (InitState_t3374939742)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable3983[4] = 
{
	InitState_t3374939742::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3984 = { sizeof (VuMarkBehaviour_t1178230459), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3984[16] = 
{
	VuMarkBehaviour_t1178230459::get_offset_of_mAspectRatio_13(),
	VuMarkBehaviour_t1178230459::get_offset_of_mWidth_14(),
	VuMarkBehaviour_t1178230459::get_offset_of_mHeight_15(),
	VuMarkBehaviour_t1178230459::get_offset_of_mPreviewImage_16(),
	VuMarkBehaviour_t1178230459::get_offset_of_mIdType_17(),
	VuMarkBehaviour_t1178230459::get_offset_of_mIdLength_18(),
	VuMarkBehaviour_t1178230459::get_offset_of_mBoundingBox_19(),
	VuMarkBehaviour_t1178230459::get_offset_of_mOrigin_20(),
	VuMarkBehaviour_t1178230459::get_offset_of_mTrackingFromRuntimeAppearance_21(),
	VuMarkBehaviour_t1178230459::get_offset_of_mVuMarkTemplate_22(),
	VuMarkBehaviour_t1178230459::get_offset_of_mVuMarkTarget_23(),
	VuMarkBehaviour_t1178230459::get_offset_of_mVuMarkResultId_24(),
	VuMarkBehaviour_t1178230459::get_offset_of_mOnTargetAssigned_25(),
	VuMarkBehaviour_t1178230459::get_offset_of_mOnTargetLost_26(),
	VuMarkBehaviour_t1178230459::get_offset_of_mLastTransformScale_27(),
	VuMarkBehaviour_t1178230459::get_offset_of_mLastSize_28(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3985 = { sizeof (VuMarkManager_t2982459596), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3985[6] = 
{
	VuMarkManager_t2982459596::get_offset_of_mBehaviours_0(),
	VuMarkManager_t2982459596::get_offset_of_mActiveVuMarkTargets_1(),
	VuMarkManager_t2982459596::get_offset_of_mDestroyedBehaviours_2(),
	VuMarkManager_t2982459596::get_offset_of_mOnVuMarkDetected_3(),
	VuMarkManager_t2982459596::get_offset_of_mOnVuMarkLost_4(),
	VuMarkManager_t2982459596::get_offset_of_mOnVuMarkBehaviourDetected_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3986 = { sizeof (InstanceIdType_t420283664)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable3986[4] = 
{
	InstanceIdType_t420283664::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3987 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3988 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3989 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3990 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3991 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3992 = { sizeof (CylinderTargetBehaviour_t822809409), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3992[10] = 
{
	CylinderTargetBehaviour_t822809409::get_offset_of_mCylinderTarget_13(),
	CylinderTargetBehaviour_t822809409::get_offset_of_mTopDiameterRatio_14(),
	CylinderTargetBehaviour_t822809409::get_offset_of_mBottomDiameterRatio_15(),
	CylinderTargetBehaviour_t822809409::get_offset_of_mSideLength_16(),
	CylinderTargetBehaviour_t822809409::get_offset_of_mTopDiameter_17(),
	CylinderTargetBehaviour_t822809409::get_offset_of_mBottomDiameter_18(),
	CylinderTargetBehaviour_t822809409::get_offset_of_mFrameIndex_19(),
	CylinderTargetBehaviour_t822809409::get_offset_of_mUpdateFrameIndex_20(),
	CylinderTargetBehaviour_t822809409::get_offset_of_mFutureScale_21(),
	CylinderTargetBehaviour_t822809409::get_offset_of_mLastTransformScale_22(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3993 = { sizeof (DataSet_t3286034874), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3993[5] = 
{
	DataSet_t3286034874::get_offset_of_mDataSetPtr_0(),
	DataSet_t3286034874::get_offset_of_mPath_1(),
	DataSet_t3286034874::get_offset_of_mStorageType_2(),
	DataSet_t3286034874::get_offset_of_mTrackablesDict_3(),
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3994 = { sizeof (StorageType_t3460620509)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable3994[4] = 
{
	StorageType_t3460620509::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3995 = { sizeof (DatabaseLoadARController_t1526318335), -1, sizeof(DatabaseLoadARController_t1526318335_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable3995[6] = 
{
	DatabaseLoadARController_t1526318335::get_offset_of_mDatasetsLoaded_1(),
	DatabaseLoadARController_t1526318335::get_offset_of_mExternalDatasetRoots_2(),
	DatabaseLoadARController_t1526318335::get_offset_of_mDataSetsToLoad_3(),
	DatabaseLoadARController_t1526318335::get_offset_of_mDataSetsToActivate_4(),
	DatabaseLoadARController_t1526318335_StaticFields::get_offset_of_mInstance_5(),
	DatabaseLoadARController_t1526318335_StaticFields::get_offset_of_mPadlock_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3996 = { sizeof (DataSetTrackableBehaviour_t3430730379), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3996[1] = 
{
	DataSetTrackableBehaviour_t3430730379::get_offset_of_mDataSetPath_12(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3997 = { sizeof (ObjectTargetData_t1243619827)+ sizeof (RuntimeObject), sizeof(ObjectTargetData_t1243619827 ), 0, 0 };
extern const int32_t g_FieldOffsetTable3997[2] = 
{
	ObjectTargetData_t1243619827::get_offset_of_id_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ObjectTargetData_t1243619827::get_offset_of_size_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3998 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3999 = { sizeof (RectangleData_t1039179782)+ sizeof (RuntimeObject), sizeof(RectangleData_t1039179782 ), 0, 0 };
extern const int32_t g_FieldOffsetTable3999[4] = 
{
	RectangleData_t1039179782::get_offset_of_leftTopX_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	RectangleData_t1039179782::get_offset_of_leftTopY_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	RectangleData_t1039179782::get_offset_of_rightBottomX_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	RectangleData_t1039179782::get_offset_of_rightBottomY_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // Modified by PostBuild.cs
