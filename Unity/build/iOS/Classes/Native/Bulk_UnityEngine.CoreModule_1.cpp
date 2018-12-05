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

template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8>
struct VirtFuncInvoker8
{
	typedef R (*Func)(void*, T1, T2, T3, T4, T5, T6, T7, T8, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5, T6 p6, T7 p7, T8 p8)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, p6, p7, p8, invokeData.method);
	}
};
template <typename R>
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct VirtFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct VirtActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1>
struct VirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct GenericVirtActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1>
struct GenericVirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1, typename T2>
struct InterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1, typename T2>
struct GenericInterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1>
struct GenericInterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};

// Microsoft.Win32.SafeHandles.SafeWaitHandle
struct SafeWaitHandle_t1972936122;
// System.Action`1<System.Object>
struct Action_1_t3252573759;
// System.Action`1<UnityEngine.AsyncOperation>
struct Action_1_t1617499438;
// System.Action`1<UnityEngine.U2D.SpriteAtlas>
struct Action_1_t819399007;
// System.ActivationContext
struct ActivationContext_t976916018;
// System.AppDomain
struct AppDomain_t1571427825;
// System.AppDomainManager
struct AppDomainManager_t1420869192;
// System.ApplicationIdentity
struct ApplicationIdentity_t1917735356;
// System.ArgumentException
struct ArgumentException_t132251570;
// System.AssemblyLoadEventHandler
struct AssemblyLoadEventHandler_t107971893;
// System.AsyncCallback
struct AsyncCallback_t3962456242;
// System.Attribute
struct Attribute_t861562559;
// System.Boolean[]
struct BooleanU5BU5D_t2897418192;
// System.Byte[]
struct ByteU5BU5D_t4116647657;
// System.Char[]
struct CharU5BU5D_t3528271667;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Globalization.CultureInfo>
struct Dictionary_2_t3046556399;
// System.Collections.Generic.Dictionary`2<System.String,System.Globalization.CultureInfo>
struct Dictionary_2_t3943099367;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t2736202052;
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_t2865362463;
// System.Collections.Generic.List`1<System.String>
struct List_1_t3319525431;
// System.Collections.Generic.Queue`1<UnityEngine.UnitySynchronizationContext/WorkRequest>
struct Queue_1_t1200778106;
// System.Collections.Hashtable
struct Hashtable_t1853889766;
// System.Collections.IDictionary
struct IDictionary_t1363984059;
// System.Collections.IEnumerator
struct IEnumerator_t1853284238;
// System.Collections.Stack
struct Stack_t2329662280;
// System.Delegate
struct Delegate_t1188392813;
// System.DelegateData
struct DelegateData_t1677132599;
// System.Delegate[]
struct DelegateU5BU5D_t1703627840;
// System.Diagnostics.StackFrame[]
struct StackFrameU5BU5D_t1997726418;
// System.Diagnostics.StackTrace
struct StackTrace_t1598645457;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t1169129676;
// System.EventHandler
struct EventHandler_t1348719766;
// System.EventHandler`1<System.Runtime.ExceptionServices.FirstChanceExceptionEventArgs>
struct EventHandler_1_t3529417624;
// System.Exception
struct Exception_t;
// System.Globalization.Calendar
struct Calendar_t1661121569;
// System.Globalization.CodePageDataItem
struct CodePageDataItem_t2285235057;
// System.Globalization.CompareInfo
struct CompareInfo_t1092934962;
// System.Globalization.CultureData
struct CultureData_t1899656083;
// System.Globalization.CultureInfo
struct CultureInfo_t4157843068;
// System.Globalization.DateTimeFormatInfo
struct DateTimeFormatInfo_t2405853701;
// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_t435877138;
// System.Globalization.TextInfo
struct TextInfo_t3810425522;
// System.IAsyncResult
struct IAsyncResult_t767004451;
// System.IFormatProvider
struct IFormatProvider_t2518567562;
// System.IO.TextWriter
struct TextWriter_t3478189236;
// System.IndexOutOfRangeException
struct IndexOutOfRangeException_t1578797820;
// System.Int32[]
struct Int32U5BU5D_t385246372;
// System.IntPtr[]
struct IntPtrU5BU5D_t4013366056;
// System.LocalDataStoreHolder
struct LocalDataStoreHolder_t2567786569;
// System.LocalDataStoreMgr
struct LocalDataStoreMgr_t1707895399;
// System.MulticastDelegate
struct MulticastDelegate_t;
// System.NotImplementedException
struct NotImplementedException_t3489357830;
// System.Object[]
struct ObjectU5BU5D_t2843939325;
// System.Reflection.Binder
struct Binder_t2999457153;
// System.Reflection.MemberFilter
struct MemberFilter_t426314064;
// System.Reflection.MemberInfo
struct MemberInfo_t;
// System.Reflection.MethodBase
struct MethodBase_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Reflection.ParameterInfo
struct ParameterInfo_t1861056598;
// System.ResolveEventHandler
struct ResolveEventHandler_t2775508208;
// System.Runtime.InteropServices.MarshalAsAttribute
struct MarshalAsAttribute_t3522571978;
// System.Runtime.Remoting.ServerIdentity
struct ServerIdentity_t2342208608;
// System.Runtime.Serialization.IFormatterConverter
struct IFormatterConverter_t2171992254;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_t2481557153;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t950877179;
// System.Security.PermissionSet
struct PermissionSet_t223948603;
// System.Security.Policy.Evidence
struct Evidence_t2008144148;
// System.Security.Principal.IPrincipal
struct IPrincipal_t2343618843;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t1281789340;
// System.Text.DecoderFallback
struct DecoderFallback_t3123823036;
// System.Text.EncoderFallback
struct EncoderFallback_t1188251036;
// System.Text.Encoding
struct Encoding_t1523322056;
// System.Text.StringBuilder
struct StringBuilder_t;
// System.Threading.AsyncLocal`1<System.Globalization.CultureInfo>
struct AsyncLocal_1_t2427220165;
// System.Threading.EventWaitHandle
struct EventWaitHandle_t777845177;
// System.Threading.ExecutionContext
struct ExecutionContext_t1748372627;
// System.Threading.InternalThread
struct InternalThread_t95296544;
// System.Threading.ManualResetEvent
struct ManualResetEvent_t451242010;
// System.Threading.SendOrPostCallback
struct SendOrPostCallback_t2750080073;
// System.Threading.SynchronizationContext
struct SynchronizationContext_t2326897723;
// System.Threading.Thread
struct Thread_t2300836069;
// System.Type
struct Type_t;
// System.Type[]
struct TypeU5BU5D_t3940880105;
// System.UnhandledExceptionEventArgs
struct UnhandledExceptionEventArgs_t2886101344;
// System.UnhandledExceptionEventHandler
struct UnhandledExceptionEventHandler_t3101989324;
// System.Void
struct Void_t1185182177;
// UnityEngine.AsyncOperation
struct AsyncOperation_t1445031843;
// UnityEngine.Camera
struct Camera_t4157153871;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t190067161;
// UnityEngine.Camera[]
struct CameraU5BU5D_t1709987734;
// UnityEngine.Color32[]
struct Color32U5BU5D_t3850468773;
// UnityEngine.Color[]
struct ColorU5BU5D_t941916413;
// UnityEngine.Component
struct Component_t1923634451;
// UnityEngine.CustomYieldInstruction
struct CustomYieldInstruction_t1895667560;
// UnityEngine.Display
struct Display_t1387065949;
// UnityEngine.Display/DisplaysUpdatedDelegate
struct DisplaysUpdatedDelegate_t51287044;
// UnityEngine.Display[]
struct DisplayU5BU5D_t103034768;
// UnityEngine.Events.UnityAction`1<UnityEngine.SceneManagement.Scene>
struct UnityAction_1_t2933211702;
// UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.LoadSceneMode>
struct UnityAction_2_t2165061829;
// UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.Scene>
struct UnityAction_2_t1262235195;
// UnityEngine.GUIElement
struct GUIElement_t3567083079;
// UnityEngine.GUILayer
struct GUILayer_t2783472903;
// UnityEngine.GameObject
struct GameObject_t1113636619;
// UnityEngine.Object
struct Object_t631007953;
// UnityEngine.PropertyAttribute
struct PropertyAttribute_t3677895545;
// UnityEngine.RectTransform/ReapplyDrivenProperties
struct ReapplyDrivenProperties_t1258266594;
// UnityEngine.RenderTexture
struct RenderTexture_t2108887433;
// UnityEngine.RequireComponent
struct RequireComponent_t3490506609;
// UnityEngine.RuntimeInitializeOnLoadMethodAttribute
struct RuntimeInitializeOnLoadMethodAttribute_t3192313494;
// UnityEngine.ScriptableObject
struct ScriptableObject_t2528358522;
// UnityEngine.Scripting.PreserveAttribute
struct PreserveAttribute_t1583619344;
// UnityEngine.SelectionBaseAttribute
struct SelectionBaseAttribute_t3493465804;
// UnityEngine.SendMouseEvents/HitInfo[]
struct HitInfoU5BU5D_t1685002053;
// UnityEngine.Serialization.FormerlySerializedAsAttribute
struct FormerlySerializedAsAttribute_t2859083114;
// UnityEngine.SerializeField
struct SerializeField_t3286833614;
// UnityEngine.Shader
struct Shader_t4151988712;
// UnityEngine.SpaceAttribute
struct SpaceAttribute_t3956583069;
// UnityEngine.Sprite
struct Sprite_t280657092;
// UnityEngine.TextAreaAttribute
struct TextAreaAttribute_t3326046611;
// UnityEngine.Texture
struct Texture_t3661962703;
// UnityEngine.Texture2D
struct Texture2D_t3840446185;
// UnityEngine.Texture2DArray
struct Texture2DArray_t4044506685;
// UnityEngine.Texture3D
struct Texture3D_t1884131049;
// UnityEngine.TooltipAttribute
struct TooltipAttribute_t3957072629;
// UnityEngine.TouchScreenKeyboard
struct TouchScreenKeyboard_t731888065;
// UnityEngine.TrackedReference
struct TrackedReference_t1199777556;
// UnityEngine.Transform
struct Transform_t3600365921;
// UnityEngine.Transform/Enumerator
struct Enumerator_t3442430665;
// UnityEngine.U2D.SpriteAtlas
struct SpriteAtlas_t646931412;
// UnityEngine.U2D.SpriteAtlasManager/RequestAtlasCallback
struct RequestAtlasCallback_t3100554279;
// UnityEngine.UnityAPICompatibilityVersionAttribute
struct UnityAPICompatibilityVersionAttribute_t3842027601;
// UnityEngine.UnityException
struct UnityException_t3598173660;
// UnityEngine.UnityLogWriter
struct UnityLogWriter_t1374348020;
// UnityEngine.UnitySynchronizationContext
struct UnitySynchronizationContext_t1887453786;
// UnityEngine.UnitySynchronizationContext/WorkRequest[]
struct WorkRequestU5BU5D_t3723878365;
// UnityEngine.WaitForEndOfFrame
struct WaitForEndOfFrame_t1314943911;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_t1699091251;
// UnityEngine.WaitForSecondsRealtime
struct WaitForSecondsRealtime_t189548121;
// UnityEngine.YieldInstruction
struct YieldInstruction_t403091072;
// UnityEngine.iOS.LocalNotification
struct LocalNotification_t1697500732;
// UnityEngine.iOS.RemoteNotification
struct RemoteNotification_t818046696;
// UnityEngineInternal.GenericStack
struct GenericStack_t1310059385;
// UnityEngineInternal.TypeInferenceRuleAttribute
struct TypeInferenceRuleAttribute_t254868554;

extern RuntimeClass* Action_1_t819399007_il2cpp_TypeInfo_var;
extern RuntimeClass* ArgumentException_t132251570_il2cpp_TypeInfo_var;
extern RuntimeClass* CameraU5BU5D_t1709987734_il2cpp_TypeInfo_var;
extern RuntimeClass* CharU5BU5D_t3528271667_il2cpp_TypeInfo_var;
extern RuntimeClass* Console_t3208230065_il2cpp_TypeInfo_var;
extern RuntimeClass* Convert_t2465617642_il2cpp_TypeInfo_var;
extern RuntimeClass* Debug_t3317548046_il2cpp_TypeInfo_var;
extern RuntimeClass* Display_t1387065949_il2cpp_TypeInfo_var;
extern RuntimeClass* Enumerator_t3442430665_il2cpp_TypeInfo_var;
extern RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
extern RuntimeClass* GC_t959872083_il2cpp_TypeInfo_var;
extern RuntimeClass* GraphicsFormat_t3787950389_il2cpp_TypeInfo_var;
extern RuntimeClass* HitInfoU5BU5D_t1685002053_il2cpp_TypeInfo_var;
extern RuntimeClass* IDisposable_t3640265483_il2cpp_TypeInfo_var;
extern RuntimeClass* IEnumerator_t1853284238_il2cpp_TypeInfo_var;
extern RuntimeClass* IndexOutOfRangeException_t1578797820_il2cpp_TypeInfo_var;
extern RuntimeClass* Input_t1431474628_il2cpp_TypeInfo_var;
extern RuntimeClass* IntPtr_t_il2cpp_TypeInfo_var;
extern RuntimeClass* LocalNotification_t1697500732_il2cpp_TypeInfo_var;
extern RuntimeClass* ManualResetEvent_t451242010_il2cpp_TypeInfo_var;
extern RuntimeClass* MathfInternal_t624072491_il2cpp_TypeInfo_var;
extern RuntimeClass* Mathf_t3464937446_il2cpp_TypeInfo_var;
extern RuntimeClass* NotImplementedException_t3489357830_il2cpp_TypeInfo_var;
extern RuntimeClass* ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var;
extern RuntimeClass* Object_t631007953_il2cpp_TypeInfo_var;
extern RuntimeClass* Quaternion_t2301928331_il2cpp_TypeInfo_var;
extern RuntimeClass* Queue_1_t1200778106_il2cpp_TypeInfo_var;
extern RuntimeClass* RectTransform_t3704657025_il2cpp_TypeInfo_var;
extern RuntimeClass* SceneManager_t2787271929_il2cpp_TypeInfo_var;
extern RuntimeClass* Scene_t2348375561_il2cpp_TypeInfo_var;
extern RuntimeClass* SendMouseEvents_t3273302915_il2cpp_TypeInfo_var;
extern RuntimeClass* Single_t1397266774_il2cpp_TypeInfo_var;
extern RuntimeClass* SpriteAtlasManager_t3158462485_il2cpp_TypeInfo_var;
extern RuntimeClass* StackTraceUtility_t3465565809_il2cpp_TypeInfo_var;
extern RuntimeClass* StackTrace_t1598645457_il2cpp_TypeInfo_var;
extern RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
extern RuntimeClass* String_t_il2cpp_TypeInfo_var;
extern RuntimeClass* TextWriter_t3478189236_il2cpp_TypeInfo_var;
extern RuntimeClass* Texture2D_t3840446185_il2cpp_TypeInfo_var;
extern RuntimeClass* TouchScreenKeyboardType_t1530597702_il2cpp_TypeInfo_var;
extern RuntimeClass* TouchScreenKeyboard_t731888065_il2cpp_TypeInfo_var;
extern RuntimeClass* TrackedReference_t1199777556_il2cpp_TypeInfo_var;
extern RuntimeClass* TypeInferenceRules_t96689094_il2cpp_TypeInfo_var;
extern RuntimeClass* UnhandledExceptionEventHandler_t3101989324_il2cpp_TypeInfo_var;
extern RuntimeClass* UnhandledExceptionHandler_t1162846485_il2cpp_TypeInfo_var;
extern RuntimeClass* UnityAction_2_t2165061829_il2cpp_TypeInfo_var;
extern RuntimeClass* UnityException_t3598173660_il2cpp_TypeInfo_var;
extern RuntimeClass* UnityLogWriter_t1374348020_il2cpp_TypeInfo_var;
extern RuntimeClass* UnitySynchronizationContext_t1887453786_il2cpp_TypeInfo_var;
extern RuntimeClass* Vector2_t2156229523_il2cpp_TypeInfo_var;
extern RuntimeClass* Vector3_t3722313464_il2cpp_TypeInfo_var;
extern RuntimeClass* Vector4_t3319028937_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral1126063082;
extern String_t* _stringLiteral1147544838;
extern String_t* _stringLiteral1173817491;
extern String_t* _stringLiteral1200226066;
extern String_t* _stringLiteral122510266;
extern String_t* _stringLiteral1311358384;
extern String_t* _stringLiteral1461556331;
extern String_t* _stringLiteral1464230170;
extern String_t* _stringLiteral1552523976;
extern String_t* _stringLiteral1625510709;
extern String_t* _stringLiteral1641435443;
extern String_t* _stringLiteral1670073234;
extern String_t* _stringLiteral1698478619;
extern String_t* _stringLiteral1749271569;
extern String_t* _stringLiteral1974486273;
extern String_t* _stringLiteral2104486960;
extern String_t* _stringLiteral2111035250;
extern String_t* _stringLiteral2119111978;
extern String_t* _stringLiteral2164275215;
extern String_t* _stringLiteral2177867675;
extern String_t* _stringLiteral2227937992;
extern String_t* _stringLiteral2231172943;
extern String_t* _stringLiteral2662230418;
extern String_t* _stringLiteral2664163362;
extern String_t* _stringLiteral2678398999;
extern String_t* _stringLiteral2738543532;
extern String_t* _stringLiteral2882627593;
extern String_t* _stringLiteral291496430;
extern String_t* _stringLiteral3155606;
extern String_t* _stringLiteral3234850613;
extern String_t* _stringLiteral3264019870;
extern String_t* _stringLiteral3269353644;
extern String_t* _stringLiteral3402824819;
extern String_t* _stringLiteral3450517380;
extern String_t* _stringLiteral3450517398;
extern String_t* _stringLiteral3452614529;
extern String_t* _stringLiteral3452614530;
extern String_t* _stringLiteral3452614535;
extern String_t* _stringLiteral3452614536;
extern String_t* _stringLiteral3452614550;
extern String_t* _stringLiteral3452614566;
extern String_t* _stringLiteral3452614643;
extern String_t* _stringLiteral3452614644;
extern String_t* _stringLiteral3452614645;
extern String_t* _stringLiteral3481154761;
extern String_t* _stringLiteral3487100581;
extern String_t* _stringLiteral3595826494;
extern String_t* _stringLiteral3620714913;
extern String_t* _stringLiteral3629554952;
extern String_t* _stringLiteral3651359435;
extern String_t* _stringLiteral3791036681;
extern String_t* _stringLiteral3960313174;
extern String_t* _stringLiteral3966192333;
extern String_t* _stringLiteral4015530243;
extern String_t* _stringLiteral4054394430;
extern String_t* _stringLiteral4144164017;
extern String_t* _stringLiteral4163537911;
extern String_t* _stringLiteral4187617987;
extern String_t* _stringLiteral461147025;
extern String_t* _stringLiteral521935984;
extern String_t* _stringLiteral547166083;
extern String_t* _stringLiteral61343007;
extern String_t* _stringLiteral6580196;
extern String_t* _stringLiteral681811338;
extern String_t* _stringLiteral696106652;
extern String_t* _stringLiteral757602046;
extern String_t* _stringLiteral821992081;
extern const RuntimeMethod* Action_1_Invoke_m3071717786_RuntimeMethod_var;
extern const RuntimeMethod* Action_1__ctor_m3325790595_RuntimeMethod_var;
extern const RuntimeMethod* Component_GetComponent_TisGUILayer_t2783472903_m4244438908_RuntimeMethod_var;
extern const RuntimeMethod* Queue_1_Dequeue_m979967976_RuntimeMethod_var;
extern const RuntimeMethod* Queue_1_Enqueue_m1592503047_RuntimeMethod_var;
extern const RuntimeMethod* Queue_1__ctor_m1971992302_RuntimeMethod_var;
extern const RuntimeMethod* Queue_1_get_Count_m3368911732_RuntimeMethod_var;
extern const RuntimeMethod* SetupCoroutine_InvokeMoveNext_m3199342729_RuntimeMethod_var;
extern const RuntimeMethod* SpriteAtlasManager_Register_m2413332465_RuntimeMethod_var;
extern const RuntimeMethod* StackTraceUtility_ExtractStringFromExceptionInternal_m2686726792_RuntimeMethod_var;
extern const RuntimeMethod* Texture2DArray_Internal_Create_m2217927355_RuntimeMethod_var;
extern const RuntimeMethod* Texture2D_Apply_m2470606565_RuntimeMethod_var;
extern const RuntimeMethod* Texture2D_CreateExternalTexture_m2529687473_RuntimeMethod_var;
extern const RuntimeMethod* Texture2D_GetPixelBilinear_m1950540195_RuntimeMethod_var;
extern const RuntimeMethod* Texture2D_Internal_Create_m3592711635_RuntimeMethod_var;
extern const RuntimeMethod* Texture2D_LoadRawTextureData_m1232009149_RuntimeMethod_var;
extern const RuntimeMethod* Texture2D_ReadPixels_m1510783487_RuntimeMethod_var;
extern const RuntimeMethod* Texture2D_Resize_m2702227255_RuntimeMethod_var;
extern const RuntimeMethod* Texture2D_SetPixel_m2984741184_RuntimeMethod_var;
extern const RuntimeMethod* Texture2D_SetPixels_m639021706_RuntimeMethod_var;
extern const RuntimeMethod* Texture3D_Internal_Create_m4250388922_RuntimeMethod_var;
extern const RuntimeMethod* Texture_set_height_m589028641_RuntimeMethod_var;
extern const RuntimeMethod* Texture_set_width_m1057761909_RuntimeMethod_var;
extern const RuntimeMethod* UnhandledExceptionHandler_HandleUnhandledException_m2430609357_RuntimeMethod_var;
extern const RuntimeMethod* UnityAction_1_Invoke_m3649732398_RuntimeMethod_var;
extern const RuntimeMethod* UnityAction_2_Invoke_m1541286357_RuntimeMethod_var;
extern const RuntimeMethod* UnityAction_2_Invoke_m944492567_RuntimeMethod_var;
extern const RuntimeMethod* Vector2_get_Item_m3559215723_RuntimeMethod_var;
extern const RuntimeMethod* Vector2_set_Item_m3557490725_RuntimeMethod_var;
extern const RuntimeMethod* Vector3_get_Item_m668685504_RuntimeMethod_var;
extern const RuntimeMethod* Vector3_set_Item_m1772472431_RuntimeMethod_var;
extern const RuntimeMethod* Vector4_get_Item_m2380866393_RuntimeMethod_var;
extern const RuntimeMethod* Vector4_set_Item_m1183742235_RuntimeMethod_var;
extern const uint32_t HitInfo_Compare_m2336739674_MetadataUsageId;
extern const uint32_t HitInfo_op_Implicit_m665224877_MetadataUsageId;
extern const uint32_t LocalNotification__cctor_m2450334404_MetadataUsageId;
extern const uint32_t MathfInternal__cctor_m2622893686_MetadataUsageId;
extern const uint32_t SceneManager_Internal_ActiveSceneChanged_m3676176255_MetadataUsageId;
extern const uint32_t SceneManager_Internal_SceneLoaded_m2694652025_MetadataUsageId;
extern const uint32_t SceneManager_Internal_SceneUnloaded_m3247148570_MetadataUsageId;
extern const uint32_t SceneManager_add_sceneLoaded_m3678832055_MetadataUsageId;
extern const uint32_t SceneManager_remove_sceneLoaded_m2345981904_MetadataUsageId;
extern const uint32_t Scene_Equals_m581999093_MetadataUsageId;
extern const uint32_t Screen_set_orientation_m3561207030_MetadataUsageId;
extern const uint32_t ScriptableObject__ctor_m1310743131_MetadataUsageId;
extern const uint32_t SendMouseEvents_DoSendMouseEvents_m2140870850_MetadataUsageId;
extern const uint32_t SendMouseEvents_HitTestLegacyGUI_m579942228_MetadataUsageId;
extern const uint32_t SendMouseEvents_SendEvents_m1956471769_MetadataUsageId;
extern const uint32_t SendMouseEvents_SetMouseMoved_m2822596724_MetadataUsageId;
extern const uint32_t SendMouseEvents__cctor_m2378365934_MetadataUsageId;
extern const uint32_t SetupCoroutine_InvokeMember_m2661944898_MetadataUsageId;
extern const uint32_t SetupCoroutine_InvokeMoveNext_m3199342729_MetadataUsageId;
extern const uint32_t Shader__ctor_m837260462_MetadataUsageId;
extern const uint32_t SpriteAtlasManager_PostRegisteredAtlas_m3806600148_MetadataUsageId;
extern const uint32_t SpriteAtlasManager_RequestAtlas_m455709951_MetadataUsageId;
extern const uint32_t SpriteAtlasManager__cctor_m3642741753_MetadataUsageId;
extern const uint32_t SpriteAtlasManager_add_atlasRegistered_m2226734943_MetadataUsageId;
extern const uint32_t SpriteAtlasManager_remove_atlasRegistered_m1470818068_MetadataUsageId;
extern const uint32_t Sprite__ctor_m332781120_MetadataUsageId;
extern const uint32_t StackTraceUtility_ExtractFormattedStackTrace_m1281750362_MetadataUsageId;
extern const uint32_t StackTraceUtility_ExtractStackTrace_m3279197967_MetadataUsageId;
extern const uint32_t StackTraceUtility_ExtractStringFromExceptionInternal_m2686726792_MetadataUsageId;
extern const uint32_t StackTraceUtility_IsSystemStacktraceType_m299828041_MetadataUsageId;
extern const uint32_t StackTraceUtility_PostprocessStacktrace_m1043256299_MetadataUsageId;
extern const uint32_t StackTraceUtility_SetProjectFolder_m830524047_MetadataUsageId;
extern const uint32_t StackTraceUtility__cctor_m1981266436_MetadataUsageId;
extern const uint32_t Texture2DArray_Internal_Create_m2217927355_MetadataUsageId;
extern const uint32_t Texture2D_Apply_m2470606565_MetadataUsageId;
extern const uint32_t Texture2D_CreateExternalTexture_m2529687473_MetadataUsageId;
extern const uint32_t Texture2D_GetPixelBilinear_m1950540195_MetadataUsageId;
extern const uint32_t Texture2D_Internal_Create_m3592711635_MetadataUsageId;
extern const uint32_t Texture2D_LoadRawTextureData_m1232009149_MetadataUsageId;
extern const uint32_t Texture2D_ReadPixels_m1510783487_MetadataUsageId;
extern const uint32_t Texture2D_Resize_m2702227255_MetadataUsageId;
extern const uint32_t Texture2D_SetPixel_m2984741184_MetadataUsageId;
extern const uint32_t Texture2D_SetPixels_m639021706_MetadataUsageId;
extern const uint32_t Texture2D__ctor_m1269666504_MetadataUsageId;
extern const uint32_t Texture2D__ctor_m2862217990_MetadataUsageId;
extern const uint32_t Texture2D__ctor_m373113269_MetadataUsageId;
extern const uint32_t Texture3D_Internal_Create_m4250388922_MetadataUsageId;
extern const uint32_t Texture_CreateNonReadableException_m1462630389_MetadataUsageId;
extern const uint32_t Texture_ValidateFormat_m3925257631_MetadataUsageId;
extern const uint32_t Texture__ctor_m3554519797_MetadataUsageId;
extern const uint32_t Texture_set_height_m589028641_MetadataUsageId;
extern const uint32_t Texture_set_width_m1057761909_MetadataUsageId;
extern const uint32_t TouchScreenKeyboard_Destroy_m267768093_MetadataUsageId;
extern const uint32_t TouchScreenKeyboard_Open_m3609399077_MetadataUsageId;
extern const uint32_t TouchScreenKeyboard__ctor_m2995022054_MetadataUsageId;
extern const uint32_t TouchScreenKeyboard_set_hideInput_m1428661361_MetadataUsageId;
extern const uint32_t TrackedReference_Equals_m1342350606_MetadataUsageId;
extern const uint32_t TrackedReference_op_Equality_m3702354772_MetadataUsageId;
extern const uint32_t Transform_GetEnumerator_m2717073726_MetadataUsageId;
extern const uint32_t Transform_get_forward_m747522392_MetadataUsageId;
extern const uint32_t Transform_set_parent_m786917804_MetadataUsageId;
extern const uint32_t TypeInferenceRuleAttribute__ctor_m3137488504_MetadataUsageId;
extern const uint32_t UnhandledExceptionHandler_HandleUnhandledException_m2430609357_MetadataUsageId;
extern const uint32_t UnhandledExceptionHandler_PrintException_m385608237_MetadataUsageId;
extern const uint32_t UnhandledExceptionHandler_RegisterUECatcher_m1350255469_MetadataUsageId;
extern const uint32_t UnityException__ctor_m1456865679_MetadataUsageId;
extern const uint32_t UnityException__ctor_m170038890_MetadataUsageId;
extern const uint32_t UnityException__ctor_m872329880_MetadataUsageId;
extern const uint32_t UnityLogWriter_Init_m3866572946_MetadataUsageId;
extern const uint32_t UnityLogWriter__ctor_m1834616883_MetadataUsageId;
extern const uint32_t UnitySynchronizationContext_Exec_m3359802660_MetadataUsageId;
extern const uint32_t UnitySynchronizationContext_ExecuteTasks_m1310741010_MetadataUsageId;
extern const uint32_t UnitySynchronizationContext_InitializeSynchronizationContext_m3217591031_MetadataUsageId;
extern const uint32_t UnitySynchronizationContext_Post_m3076014349_MetadataUsageId;
extern const uint32_t UnitySynchronizationContext_Send_m1576085179_MetadataUsageId;
extern const uint32_t UnitySynchronizationContext__ctor_m1707488257_MetadataUsageId;
extern const uint32_t Vector2_Equals_m832062989_MetadataUsageId;
extern const uint32_t Vector2_ToString_m1205609053_MetadataUsageId;
extern const uint32_t Vector2__cctor_m2108982652_MetadataUsageId;
extern const uint32_t Vector2_get_Item_m3559215723_MetadataUsageId;
extern const uint32_t Vector2_get_magnitude_m2752892833_MetadataUsageId;
extern const uint32_t Vector2_get_one_m738793577_MetadataUsageId;
extern const uint32_t Vector2_get_right_m1027081661_MetadataUsageId;
extern const uint32_t Vector2_get_up_m2647420593_MetadataUsageId;
extern const uint32_t Vector2_get_zero_m540426400_MetadataUsageId;
extern const uint32_t Vector2_op_Equality_m2303255133_MetadataUsageId;
extern const uint32_t Vector2_op_Inequality_m3858779880_MetadataUsageId;
extern const uint32_t Vector2_set_Item_m3557490725_MetadataUsageId;
extern const uint32_t Vector3_Angle_m3731191531_MetadataUsageId;
extern const uint32_t Vector3_Distance_m886789632_MetadataUsageId;
extern const uint32_t Vector3_Equals_m1753054704_MetadataUsageId;
extern const uint32_t Vector3_Lerp_m407887542_MetadataUsageId;
extern const uint32_t Vector3_Magnitude_m3447562852_MetadataUsageId;
extern const uint32_t Vector3_Max_m3304052994_MetadataUsageId;
extern const uint32_t Vector3_Min_m1803158933_MetadataUsageId;
extern const uint32_t Vector3_Normalize_m2941713846_MetadataUsageId;
extern const uint32_t Vector3_ToString_m759076600_MetadataUsageId;
extern const uint32_t Vector3__cctor_m2599650684_MetadataUsageId;
extern const uint32_t Vector3_get_Item_m668685504_MetadataUsageId;
extern const uint32_t Vector3_get_back_m4077847766_MetadataUsageId;
extern const uint32_t Vector3_get_down_m3781355428_MetadataUsageId;
extern const uint32_t Vector3_get_forward_m3100859705_MetadataUsageId;
extern const uint32_t Vector3_get_left_m2428419009_MetadataUsageId;
extern const uint32_t Vector3_get_magnitude_m27958459_MetadataUsageId;
extern const uint32_t Vector3_get_normalized_m2454957984_MetadataUsageId;
extern const uint32_t Vector3_get_one_m1629952498_MetadataUsageId;
extern const uint32_t Vector3_get_right_m1913784872_MetadataUsageId;
extern const uint32_t Vector3_get_up_m3584168373_MetadataUsageId;
extern const uint32_t Vector3_get_zero_m1409827619_MetadataUsageId;
extern const uint32_t Vector3_op_Equality_m4231250055_MetadataUsageId;
extern const uint32_t Vector3_op_Inequality_m315980366_MetadataUsageId;
extern const uint32_t Vector3_set_Item_m1772472431_MetadataUsageId;
extern const uint32_t Vector4_Equals_m1779210055_MetadataUsageId;
extern const uint32_t Vector4_SqrMagnitude_m1488236336_MetadataUsageId;
extern const uint32_t Vector4_ToString_m1596036856_MetadataUsageId;
extern const uint32_t Vector4__cctor_m2519631228_MetadataUsageId;
extern const uint32_t Vector4_get_Item_m2380866393_MetadataUsageId;
extern const uint32_t Vector4_get_sqrMagnitude_m3767723558_MetadataUsageId;
extern const uint32_t Vector4_get_zero_m1422399515_MetadataUsageId;
extern const uint32_t Vector4_op_Equality_m2403588337_MetadataUsageId;
extern const uint32_t Vector4_set_Item_m1183742235_MetadataUsageId;
struct CultureData_t1899656083_marshaled_com;
struct CultureData_t1899656083_marshaled_pinvoke;
struct CultureInfo_t4157843068_marshaled_com;
struct CultureInfo_t4157843068_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ByteU5BU5D_t4116647657;
struct CharU5BU5D_t3528271667;
struct DelegateU5BU5D_t1703627840;
struct ObjectU5BU5D_t2843939325;
struct ParameterInfoU5BU5D_t390618515;
struct ParameterModifierU5BU5D_t2943407543;
struct StringU5BU5D_t1281789340;
struct CameraU5BU5D_t1709987734;
struct Color32U5BU5D_t3850468773;
struct ColorU5BU5D_t941916413;
struct DisplayU5BU5D_t103034768;
struct HitInfoU5BU5D_t1685002053;


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
#ifndef QUEUE_1_T1200778106_H
#define QUEUE_1_T1200778106_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Queue`1<UnityEngine.UnitySynchronizationContext/WorkRequest>
struct  Queue_1_t1200778106  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.Queue`1::_array
	WorkRequestU5BU5D_t3723878365* ____array_0;
	// System.Int32 System.Collections.Generic.Queue`1::_head
	int32_t ____head_1;
	// System.Int32 System.Collections.Generic.Queue`1::_tail
	int32_t ____tail_2;
	// System.Int32 System.Collections.Generic.Queue`1::_size
	int32_t ____size_3;
	// System.Int32 System.Collections.Generic.Queue`1::_version
	int32_t ____version_4;
	// System.Object System.Collections.Generic.Queue`1::_syncRoot
	RuntimeObject * ____syncRoot_5;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(Queue_1_t1200778106, ____array_0)); }
	inline WorkRequestU5BU5D_t3723878365* get__array_0() const { return ____array_0; }
	inline WorkRequestU5BU5D_t3723878365** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(WorkRequestU5BU5D_t3723878365* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((&____array_0), value);
	}

	inline static int32_t get_offset_of__head_1() { return static_cast<int32_t>(offsetof(Queue_1_t1200778106, ____head_1)); }
	inline int32_t get__head_1() const { return ____head_1; }
	inline int32_t* get_address_of__head_1() { return &____head_1; }
	inline void set__head_1(int32_t value)
	{
		____head_1 = value;
	}

	inline static int32_t get_offset_of__tail_2() { return static_cast<int32_t>(offsetof(Queue_1_t1200778106, ____tail_2)); }
	inline int32_t get__tail_2() const { return ____tail_2; }
	inline int32_t* get_address_of__tail_2() { return &____tail_2; }
	inline void set__tail_2(int32_t value)
	{
		____tail_2 = value;
	}

	inline static int32_t get_offset_of__size_3() { return static_cast<int32_t>(offsetof(Queue_1_t1200778106, ____size_3)); }
	inline int32_t get__size_3() const { return ____size_3; }
	inline int32_t* get_address_of__size_3() { return &____size_3; }
	inline void set__size_3(int32_t value)
	{
		____size_3 = value;
	}

	inline static int32_t get_offset_of__version_4() { return static_cast<int32_t>(offsetof(Queue_1_t1200778106, ____version_4)); }
	inline int32_t get__version_4() const { return ____version_4; }
	inline int32_t* get_address_of__version_4() { return &____version_4; }
	inline void set__version_4(int32_t value)
	{
		____version_4 = value;
	}

	inline static int32_t get_offset_of__syncRoot_5() { return static_cast<int32_t>(offsetof(Queue_1_t1200778106, ____syncRoot_5)); }
	inline RuntimeObject * get__syncRoot_5() const { return ____syncRoot_5; }
	inline RuntimeObject ** get_address_of__syncRoot_5() { return &____syncRoot_5; }
	inline void set__syncRoot_5(RuntimeObject * value)
	{
		____syncRoot_5 = value;
		Il2CppCodeGenWriteBarrier((&____syncRoot_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // QUEUE_1_T1200778106_H
#ifndef STACK_T2329662280_H
#define STACK_T2329662280_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Stack
struct  Stack_t2329662280  : public RuntimeObject
{
public:
	// System.Object[] System.Collections.Stack::_array
	ObjectU5BU5D_t2843939325* ____array_0;
	// System.Int32 System.Collections.Stack::_size
	int32_t ____size_1;
	// System.Int32 System.Collections.Stack::_version
	int32_t ____version_2;
	// System.Object System.Collections.Stack::_syncRoot
	RuntimeObject * ____syncRoot_3;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(Stack_t2329662280, ____array_0)); }
	inline ObjectU5BU5D_t2843939325* get__array_0() const { return ____array_0; }
	inline ObjectU5BU5D_t2843939325** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(ObjectU5BU5D_t2843939325* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((&____array_0), value);
	}

	inline static int32_t get_offset_of__size_1() { return static_cast<int32_t>(offsetof(Stack_t2329662280, ____size_1)); }
	inline int32_t get__size_1() const { return ____size_1; }
	inline int32_t* get_address_of__size_1() { return &____size_1; }
	inline void set__size_1(int32_t value)
	{
		____size_1 = value;
	}

	inline static int32_t get_offset_of__version_2() { return static_cast<int32_t>(offsetof(Stack_t2329662280, ____version_2)); }
	inline int32_t get__version_2() const { return ____version_2; }
	inline int32_t* get_address_of__version_2() { return &____version_2; }
	inline void set__version_2(int32_t value)
	{
		____version_2 = value;
	}

	inline static int32_t get_offset_of__syncRoot_3() { return static_cast<int32_t>(offsetof(Stack_t2329662280, ____syncRoot_3)); }
	inline RuntimeObject * get__syncRoot_3() const { return ____syncRoot_3; }
	inline RuntimeObject ** get_address_of__syncRoot_3() { return &____syncRoot_3; }
	inline void set__syncRoot_3(RuntimeObject * value)
	{
		____syncRoot_3 = value;
		Il2CppCodeGenWriteBarrier((&____syncRoot_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STACK_T2329662280_H
#ifndef STACKFRAME_T3217253059_H
#define STACKFRAME_T3217253059_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.StackFrame
struct  StackFrame_t3217253059  : public RuntimeObject
{
public:
	// System.Int32 System.Diagnostics.StackFrame::ilOffset
	int32_t ___ilOffset_1;
	// System.Int32 System.Diagnostics.StackFrame::nativeOffset
	int32_t ___nativeOffset_2;
	// System.Int64 System.Diagnostics.StackFrame::methodAddress
	int64_t ___methodAddress_3;
	// System.UInt32 System.Diagnostics.StackFrame::methodIndex
	uint32_t ___methodIndex_4;
	// System.Reflection.MethodBase System.Diagnostics.StackFrame::methodBase
	MethodBase_t * ___methodBase_5;
	// System.String System.Diagnostics.StackFrame::fileName
	String_t* ___fileName_6;
	// System.Int32 System.Diagnostics.StackFrame::lineNumber
	int32_t ___lineNumber_7;
	// System.Int32 System.Diagnostics.StackFrame::columnNumber
	int32_t ___columnNumber_8;
	// System.String System.Diagnostics.StackFrame::internalMethodName
	String_t* ___internalMethodName_9;

public:
	inline static int32_t get_offset_of_ilOffset_1() { return static_cast<int32_t>(offsetof(StackFrame_t3217253059, ___ilOffset_1)); }
	inline int32_t get_ilOffset_1() const { return ___ilOffset_1; }
	inline int32_t* get_address_of_ilOffset_1() { return &___ilOffset_1; }
	inline void set_ilOffset_1(int32_t value)
	{
		___ilOffset_1 = value;
	}

	inline static int32_t get_offset_of_nativeOffset_2() { return static_cast<int32_t>(offsetof(StackFrame_t3217253059, ___nativeOffset_2)); }
	inline int32_t get_nativeOffset_2() const { return ___nativeOffset_2; }
	inline int32_t* get_address_of_nativeOffset_2() { return &___nativeOffset_2; }
	inline void set_nativeOffset_2(int32_t value)
	{
		___nativeOffset_2 = value;
	}

	inline static int32_t get_offset_of_methodAddress_3() { return static_cast<int32_t>(offsetof(StackFrame_t3217253059, ___methodAddress_3)); }
	inline int64_t get_methodAddress_3() const { return ___methodAddress_3; }
	inline int64_t* get_address_of_methodAddress_3() { return &___methodAddress_3; }
	inline void set_methodAddress_3(int64_t value)
	{
		___methodAddress_3 = value;
	}

	inline static int32_t get_offset_of_methodIndex_4() { return static_cast<int32_t>(offsetof(StackFrame_t3217253059, ___methodIndex_4)); }
	inline uint32_t get_methodIndex_4() const { return ___methodIndex_4; }
	inline uint32_t* get_address_of_methodIndex_4() { return &___methodIndex_4; }
	inline void set_methodIndex_4(uint32_t value)
	{
		___methodIndex_4 = value;
	}

	inline static int32_t get_offset_of_methodBase_5() { return static_cast<int32_t>(offsetof(StackFrame_t3217253059, ___methodBase_5)); }
	inline MethodBase_t * get_methodBase_5() const { return ___methodBase_5; }
	inline MethodBase_t ** get_address_of_methodBase_5() { return &___methodBase_5; }
	inline void set_methodBase_5(MethodBase_t * value)
	{
		___methodBase_5 = value;
		Il2CppCodeGenWriteBarrier((&___methodBase_5), value);
	}

	inline static int32_t get_offset_of_fileName_6() { return static_cast<int32_t>(offsetof(StackFrame_t3217253059, ___fileName_6)); }
	inline String_t* get_fileName_6() const { return ___fileName_6; }
	inline String_t** get_address_of_fileName_6() { return &___fileName_6; }
	inline void set_fileName_6(String_t* value)
	{
		___fileName_6 = value;
		Il2CppCodeGenWriteBarrier((&___fileName_6), value);
	}

	inline static int32_t get_offset_of_lineNumber_7() { return static_cast<int32_t>(offsetof(StackFrame_t3217253059, ___lineNumber_7)); }
	inline int32_t get_lineNumber_7() const { return ___lineNumber_7; }
	inline int32_t* get_address_of_lineNumber_7() { return &___lineNumber_7; }
	inline void set_lineNumber_7(int32_t value)
	{
		___lineNumber_7 = value;
	}

	inline static int32_t get_offset_of_columnNumber_8() { return static_cast<int32_t>(offsetof(StackFrame_t3217253059, ___columnNumber_8)); }
	inline int32_t get_columnNumber_8() const { return ___columnNumber_8; }
	inline int32_t* get_address_of_columnNumber_8() { return &___columnNumber_8; }
	inline void set_columnNumber_8(int32_t value)
	{
		___columnNumber_8 = value;
	}

	inline static int32_t get_offset_of_internalMethodName_9() { return static_cast<int32_t>(offsetof(StackFrame_t3217253059, ___internalMethodName_9)); }
	inline String_t* get_internalMethodName_9() const { return ___internalMethodName_9; }
	inline String_t** get_address_of_internalMethodName_9() { return &___internalMethodName_9; }
	inline void set_internalMethodName_9(String_t* value)
	{
		___internalMethodName_9 = value;
		Il2CppCodeGenWriteBarrier((&___internalMethodName_9), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Diagnostics.StackFrame
struct StackFrame_t3217253059_marshaled_pinvoke
{
	int32_t ___ilOffset_1;
	int32_t ___nativeOffset_2;
	int64_t ___methodAddress_3;
	uint32_t ___methodIndex_4;
	MethodBase_t * ___methodBase_5;
	char* ___fileName_6;
	int32_t ___lineNumber_7;
	int32_t ___columnNumber_8;
	char* ___internalMethodName_9;
};
// Native definition for COM marshalling of System.Diagnostics.StackFrame
struct StackFrame_t3217253059_marshaled_com
{
	int32_t ___ilOffset_1;
	int32_t ___nativeOffset_2;
	int64_t ___methodAddress_3;
	uint32_t ___methodIndex_4;
	MethodBase_t * ___methodBase_5;
	Il2CppChar* ___fileName_6;
	int32_t ___lineNumber_7;
	int32_t ___columnNumber_8;
	Il2CppChar* ___internalMethodName_9;
};
#endif // STACKFRAME_T3217253059_H
#ifndef STACKTRACE_T1598645457_H
#define STACKTRACE_T1598645457_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.StackTrace
struct  StackTrace_t1598645457  : public RuntimeObject
{
public:
	// System.Diagnostics.StackFrame[] System.Diagnostics.StackTrace::frames
	StackFrameU5BU5D_t1997726418* ___frames_1;
	// System.Diagnostics.StackTrace[] System.Diagnostics.StackTrace::captured_traces
	StackTraceU5BU5D_t1169129676* ___captured_traces_2;
	// System.Boolean System.Diagnostics.StackTrace::debug_info
	bool ___debug_info_3;

public:
	inline static int32_t get_offset_of_frames_1() { return static_cast<int32_t>(offsetof(StackTrace_t1598645457, ___frames_1)); }
	inline StackFrameU5BU5D_t1997726418* get_frames_1() const { return ___frames_1; }
	inline StackFrameU5BU5D_t1997726418** get_address_of_frames_1() { return &___frames_1; }
	inline void set_frames_1(StackFrameU5BU5D_t1997726418* value)
	{
		___frames_1 = value;
		Il2CppCodeGenWriteBarrier((&___frames_1), value);
	}

	inline static int32_t get_offset_of_captured_traces_2() { return static_cast<int32_t>(offsetof(StackTrace_t1598645457, ___captured_traces_2)); }
	inline StackTraceU5BU5D_t1169129676* get_captured_traces_2() const { return ___captured_traces_2; }
	inline StackTraceU5BU5D_t1169129676** get_address_of_captured_traces_2() { return &___captured_traces_2; }
	inline void set_captured_traces_2(StackTraceU5BU5D_t1169129676* value)
	{
		___captured_traces_2 = value;
		Il2CppCodeGenWriteBarrier((&___captured_traces_2), value);
	}

	inline static int32_t get_offset_of_debug_info_3() { return static_cast<int32_t>(offsetof(StackTrace_t1598645457, ___debug_info_3)); }
	inline bool get_debug_info_3() const { return ___debug_info_3; }
	inline bool* get_address_of_debug_info_3() { return &___debug_info_3; }
	inline void set_debug_info_3(bool value)
	{
		___debug_info_3 = value;
	}
};

struct StackTrace_t1598645457_StaticFields
{
public:
	// System.Boolean System.Diagnostics.StackTrace::isAotidSet
	bool ___isAotidSet_4;
	// System.String System.Diagnostics.StackTrace::aotid
	String_t* ___aotid_5;

public:
	inline static int32_t get_offset_of_isAotidSet_4() { return static_cast<int32_t>(offsetof(StackTrace_t1598645457_StaticFields, ___isAotidSet_4)); }
	inline bool get_isAotidSet_4() const { return ___isAotidSet_4; }
	inline bool* get_address_of_isAotidSet_4() { return &___isAotidSet_4; }
	inline void set_isAotidSet_4(bool value)
	{
		___isAotidSet_4 = value;
	}

	inline static int32_t get_offset_of_aotid_5() { return static_cast<int32_t>(offsetof(StackTrace_t1598645457_StaticFields, ___aotid_5)); }
	inline String_t* get_aotid_5() const { return ___aotid_5; }
	inline String_t** get_address_of_aotid_5() { return &___aotid_5; }
	inline void set_aotid_5(String_t* value)
	{
		___aotid_5 = value;
		Il2CppCodeGenWriteBarrier((&___aotid_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STACKTRACE_T1598645457_H
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
#ifndef CULTUREINFO_T4157843068_H
#define CULTUREINFO_T4157843068_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Globalization.CultureInfo
struct  CultureInfo_t4157843068  : public RuntimeObject
{
public:
	// System.Boolean System.Globalization.CultureInfo::m_isReadOnly
	bool ___m_isReadOnly_3;
	// System.Int32 System.Globalization.CultureInfo::cultureID
	int32_t ___cultureID_4;
	// System.Int32 System.Globalization.CultureInfo::parent_lcid
	int32_t ___parent_lcid_5;
	// System.Int32 System.Globalization.CultureInfo::datetime_index
	int32_t ___datetime_index_6;
	// System.Int32 System.Globalization.CultureInfo::number_index
	int32_t ___number_index_7;
	// System.Int32 System.Globalization.CultureInfo::default_calendar_type
	int32_t ___default_calendar_type_8;
	// System.Boolean System.Globalization.CultureInfo::m_useUserOverride
	bool ___m_useUserOverride_9;
	// System.Globalization.NumberFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::numInfo
	NumberFormatInfo_t435877138 * ___numInfo_10;
	// System.Globalization.DateTimeFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::dateTimeInfo
	DateTimeFormatInfo_t2405853701 * ___dateTimeInfo_11;
	// System.Globalization.TextInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::textInfo
	TextInfo_t3810425522 * ___textInfo_12;
	// System.String System.Globalization.CultureInfo::m_name
	String_t* ___m_name_13;
	// System.String System.Globalization.CultureInfo::englishname
	String_t* ___englishname_14;
	// System.String System.Globalization.CultureInfo::nativename
	String_t* ___nativename_15;
	// System.String System.Globalization.CultureInfo::iso3lang
	String_t* ___iso3lang_16;
	// System.String System.Globalization.CultureInfo::iso2lang
	String_t* ___iso2lang_17;
	// System.String System.Globalization.CultureInfo::win3lang
	String_t* ___win3lang_18;
	// System.String System.Globalization.CultureInfo::territory
	String_t* ___territory_19;
	// System.String[] System.Globalization.CultureInfo::native_calendar_names
	StringU5BU5D_t1281789340* ___native_calendar_names_20;
	// System.Globalization.CompareInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::compareInfo
	CompareInfo_t1092934962 * ___compareInfo_21;
	// System.Void* System.Globalization.CultureInfo::textinfo_data
	void* ___textinfo_data_22;
	// System.Int32 System.Globalization.CultureInfo::m_dataItem
	int32_t ___m_dataItem_23;
	// System.Globalization.Calendar System.Globalization.CultureInfo::calendar
	Calendar_t1661121569 * ___calendar_24;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::parent_culture
	CultureInfo_t4157843068 * ___parent_culture_25;
	// System.Boolean System.Globalization.CultureInfo::constructed
	bool ___constructed_26;
	// System.Byte[] System.Globalization.CultureInfo::cached_serialized_form
	ByteU5BU5D_t4116647657* ___cached_serialized_form_27;
	// System.Globalization.CultureData System.Globalization.CultureInfo::m_cultureData
	CultureData_t1899656083 * ___m_cultureData_28;
	// System.Boolean System.Globalization.CultureInfo::m_isInherited
	bool ___m_isInherited_29;

public:
	inline static int32_t get_offset_of_m_isReadOnly_3() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___m_isReadOnly_3)); }
	inline bool get_m_isReadOnly_3() const { return ___m_isReadOnly_3; }
	inline bool* get_address_of_m_isReadOnly_3() { return &___m_isReadOnly_3; }
	inline void set_m_isReadOnly_3(bool value)
	{
		___m_isReadOnly_3 = value;
	}

	inline static int32_t get_offset_of_cultureID_4() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___cultureID_4)); }
	inline int32_t get_cultureID_4() const { return ___cultureID_4; }
	inline int32_t* get_address_of_cultureID_4() { return &___cultureID_4; }
	inline void set_cultureID_4(int32_t value)
	{
		___cultureID_4 = value;
	}

	inline static int32_t get_offset_of_parent_lcid_5() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___parent_lcid_5)); }
	inline int32_t get_parent_lcid_5() const { return ___parent_lcid_5; }
	inline int32_t* get_address_of_parent_lcid_5() { return &___parent_lcid_5; }
	inline void set_parent_lcid_5(int32_t value)
	{
		___parent_lcid_5 = value;
	}

	inline static int32_t get_offset_of_datetime_index_6() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___datetime_index_6)); }
	inline int32_t get_datetime_index_6() const { return ___datetime_index_6; }
	inline int32_t* get_address_of_datetime_index_6() { return &___datetime_index_6; }
	inline void set_datetime_index_6(int32_t value)
	{
		___datetime_index_6 = value;
	}

	inline static int32_t get_offset_of_number_index_7() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___number_index_7)); }
	inline int32_t get_number_index_7() const { return ___number_index_7; }
	inline int32_t* get_address_of_number_index_7() { return &___number_index_7; }
	inline void set_number_index_7(int32_t value)
	{
		___number_index_7 = value;
	}

	inline static int32_t get_offset_of_default_calendar_type_8() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___default_calendar_type_8)); }
	inline int32_t get_default_calendar_type_8() const { return ___default_calendar_type_8; }
	inline int32_t* get_address_of_default_calendar_type_8() { return &___default_calendar_type_8; }
	inline void set_default_calendar_type_8(int32_t value)
	{
		___default_calendar_type_8 = value;
	}

	inline static int32_t get_offset_of_m_useUserOverride_9() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___m_useUserOverride_9)); }
	inline bool get_m_useUserOverride_9() const { return ___m_useUserOverride_9; }
	inline bool* get_address_of_m_useUserOverride_9() { return &___m_useUserOverride_9; }
	inline void set_m_useUserOverride_9(bool value)
	{
		___m_useUserOverride_9 = value;
	}

	inline static int32_t get_offset_of_numInfo_10() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___numInfo_10)); }
	inline NumberFormatInfo_t435877138 * get_numInfo_10() const { return ___numInfo_10; }
	inline NumberFormatInfo_t435877138 ** get_address_of_numInfo_10() { return &___numInfo_10; }
	inline void set_numInfo_10(NumberFormatInfo_t435877138 * value)
	{
		___numInfo_10 = value;
		Il2CppCodeGenWriteBarrier((&___numInfo_10), value);
	}

	inline static int32_t get_offset_of_dateTimeInfo_11() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___dateTimeInfo_11)); }
	inline DateTimeFormatInfo_t2405853701 * get_dateTimeInfo_11() const { return ___dateTimeInfo_11; }
	inline DateTimeFormatInfo_t2405853701 ** get_address_of_dateTimeInfo_11() { return &___dateTimeInfo_11; }
	inline void set_dateTimeInfo_11(DateTimeFormatInfo_t2405853701 * value)
	{
		___dateTimeInfo_11 = value;
		Il2CppCodeGenWriteBarrier((&___dateTimeInfo_11), value);
	}

	inline static int32_t get_offset_of_textInfo_12() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___textInfo_12)); }
	inline TextInfo_t3810425522 * get_textInfo_12() const { return ___textInfo_12; }
	inline TextInfo_t3810425522 ** get_address_of_textInfo_12() { return &___textInfo_12; }
	inline void set_textInfo_12(TextInfo_t3810425522 * value)
	{
		___textInfo_12 = value;
		Il2CppCodeGenWriteBarrier((&___textInfo_12), value);
	}

	inline static int32_t get_offset_of_m_name_13() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___m_name_13)); }
	inline String_t* get_m_name_13() const { return ___m_name_13; }
	inline String_t** get_address_of_m_name_13() { return &___m_name_13; }
	inline void set_m_name_13(String_t* value)
	{
		___m_name_13 = value;
		Il2CppCodeGenWriteBarrier((&___m_name_13), value);
	}

	inline static int32_t get_offset_of_englishname_14() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___englishname_14)); }
	inline String_t* get_englishname_14() const { return ___englishname_14; }
	inline String_t** get_address_of_englishname_14() { return &___englishname_14; }
	inline void set_englishname_14(String_t* value)
	{
		___englishname_14 = value;
		Il2CppCodeGenWriteBarrier((&___englishname_14), value);
	}

	inline static int32_t get_offset_of_nativename_15() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___nativename_15)); }
	inline String_t* get_nativename_15() const { return ___nativename_15; }
	inline String_t** get_address_of_nativename_15() { return &___nativename_15; }
	inline void set_nativename_15(String_t* value)
	{
		___nativename_15 = value;
		Il2CppCodeGenWriteBarrier((&___nativename_15), value);
	}

	inline static int32_t get_offset_of_iso3lang_16() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___iso3lang_16)); }
	inline String_t* get_iso3lang_16() const { return ___iso3lang_16; }
	inline String_t** get_address_of_iso3lang_16() { return &___iso3lang_16; }
	inline void set_iso3lang_16(String_t* value)
	{
		___iso3lang_16 = value;
		Il2CppCodeGenWriteBarrier((&___iso3lang_16), value);
	}

	inline static int32_t get_offset_of_iso2lang_17() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___iso2lang_17)); }
	inline String_t* get_iso2lang_17() const { return ___iso2lang_17; }
	inline String_t** get_address_of_iso2lang_17() { return &___iso2lang_17; }
	inline void set_iso2lang_17(String_t* value)
	{
		___iso2lang_17 = value;
		Il2CppCodeGenWriteBarrier((&___iso2lang_17), value);
	}

	inline static int32_t get_offset_of_win3lang_18() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___win3lang_18)); }
	inline String_t* get_win3lang_18() const { return ___win3lang_18; }
	inline String_t** get_address_of_win3lang_18() { return &___win3lang_18; }
	inline void set_win3lang_18(String_t* value)
	{
		___win3lang_18 = value;
		Il2CppCodeGenWriteBarrier((&___win3lang_18), value);
	}

	inline static int32_t get_offset_of_territory_19() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___territory_19)); }
	inline String_t* get_territory_19() const { return ___territory_19; }
	inline String_t** get_address_of_territory_19() { return &___territory_19; }
	inline void set_territory_19(String_t* value)
	{
		___territory_19 = value;
		Il2CppCodeGenWriteBarrier((&___territory_19), value);
	}

	inline static int32_t get_offset_of_native_calendar_names_20() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___native_calendar_names_20)); }
	inline StringU5BU5D_t1281789340* get_native_calendar_names_20() const { return ___native_calendar_names_20; }
	inline StringU5BU5D_t1281789340** get_address_of_native_calendar_names_20() { return &___native_calendar_names_20; }
	inline void set_native_calendar_names_20(StringU5BU5D_t1281789340* value)
	{
		___native_calendar_names_20 = value;
		Il2CppCodeGenWriteBarrier((&___native_calendar_names_20), value);
	}

	inline static int32_t get_offset_of_compareInfo_21() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___compareInfo_21)); }
	inline CompareInfo_t1092934962 * get_compareInfo_21() const { return ___compareInfo_21; }
	inline CompareInfo_t1092934962 ** get_address_of_compareInfo_21() { return &___compareInfo_21; }
	inline void set_compareInfo_21(CompareInfo_t1092934962 * value)
	{
		___compareInfo_21 = value;
		Il2CppCodeGenWriteBarrier((&___compareInfo_21), value);
	}

	inline static int32_t get_offset_of_textinfo_data_22() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___textinfo_data_22)); }
	inline void* get_textinfo_data_22() const { return ___textinfo_data_22; }
	inline void** get_address_of_textinfo_data_22() { return &___textinfo_data_22; }
	inline void set_textinfo_data_22(void* value)
	{
		___textinfo_data_22 = value;
	}

	inline static int32_t get_offset_of_m_dataItem_23() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___m_dataItem_23)); }
	inline int32_t get_m_dataItem_23() const { return ___m_dataItem_23; }
	inline int32_t* get_address_of_m_dataItem_23() { return &___m_dataItem_23; }
	inline void set_m_dataItem_23(int32_t value)
	{
		___m_dataItem_23 = value;
	}

	inline static int32_t get_offset_of_calendar_24() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___calendar_24)); }
	inline Calendar_t1661121569 * get_calendar_24() const { return ___calendar_24; }
	inline Calendar_t1661121569 ** get_address_of_calendar_24() { return &___calendar_24; }
	inline void set_calendar_24(Calendar_t1661121569 * value)
	{
		___calendar_24 = value;
		Il2CppCodeGenWriteBarrier((&___calendar_24), value);
	}

	inline static int32_t get_offset_of_parent_culture_25() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___parent_culture_25)); }
	inline CultureInfo_t4157843068 * get_parent_culture_25() const { return ___parent_culture_25; }
	inline CultureInfo_t4157843068 ** get_address_of_parent_culture_25() { return &___parent_culture_25; }
	inline void set_parent_culture_25(CultureInfo_t4157843068 * value)
	{
		___parent_culture_25 = value;
		Il2CppCodeGenWriteBarrier((&___parent_culture_25), value);
	}

	inline static int32_t get_offset_of_constructed_26() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___constructed_26)); }
	inline bool get_constructed_26() const { return ___constructed_26; }
	inline bool* get_address_of_constructed_26() { return &___constructed_26; }
	inline void set_constructed_26(bool value)
	{
		___constructed_26 = value;
	}

	inline static int32_t get_offset_of_cached_serialized_form_27() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___cached_serialized_form_27)); }
	inline ByteU5BU5D_t4116647657* get_cached_serialized_form_27() const { return ___cached_serialized_form_27; }
	inline ByteU5BU5D_t4116647657** get_address_of_cached_serialized_form_27() { return &___cached_serialized_form_27; }
	inline void set_cached_serialized_form_27(ByteU5BU5D_t4116647657* value)
	{
		___cached_serialized_form_27 = value;
		Il2CppCodeGenWriteBarrier((&___cached_serialized_form_27), value);
	}

	inline static int32_t get_offset_of_m_cultureData_28() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___m_cultureData_28)); }
	inline CultureData_t1899656083 * get_m_cultureData_28() const { return ___m_cultureData_28; }
	inline CultureData_t1899656083 ** get_address_of_m_cultureData_28() { return &___m_cultureData_28; }
	inline void set_m_cultureData_28(CultureData_t1899656083 * value)
	{
		___m_cultureData_28 = value;
		Il2CppCodeGenWriteBarrier((&___m_cultureData_28), value);
	}

	inline static int32_t get_offset_of_m_isInherited_29() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___m_isInherited_29)); }
	inline bool get_m_isInherited_29() const { return ___m_isInherited_29; }
	inline bool* get_address_of_m_isInherited_29() { return &___m_isInherited_29; }
	inline void set_m_isInherited_29(bool value)
	{
		___m_isInherited_29 = value;
	}
};

struct CultureInfo_t4157843068_StaticFields
{
public:
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::invariant_culture_info
	CultureInfo_t4157843068 * ___invariant_culture_info_0;
	// System.Object System.Globalization.CultureInfo::shared_table_lock
	RuntimeObject * ___shared_table_lock_1;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::default_current_culture
	CultureInfo_t4157843068 * ___default_current_culture_2;
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::s_DefaultThreadCurrentUICulture
	CultureInfo_t4157843068 * ___s_DefaultThreadCurrentUICulture_33;
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::s_DefaultThreadCurrentCulture
	CultureInfo_t4157843068 * ___s_DefaultThreadCurrentCulture_34;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Globalization.CultureInfo> System.Globalization.CultureInfo::shared_by_number
	Dictionary_2_t3046556399 * ___shared_by_number_35;
	// System.Collections.Generic.Dictionary`2<System.String,System.Globalization.CultureInfo> System.Globalization.CultureInfo::shared_by_name
	Dictionary_2_t3943099367 * ___shared_by_name_36;
	// System.Boolean System.Globalization.CultureInfo::IsTaiwanSku
	bool ___IsTaiwanSku_37;

public:
	inline static int32_t get_offset_of_invariant_culture_info_0() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068_StaticFields, ___invariant_culture_info_0)); }
	inline CultureInfo_t4157843068 * get_invariant_culture_info_0() const { return ___invariant_culture_info_0; }
	inline CultureInfo_t4157843068 ** get_address_of_invariant_culture_info_0() { return &___invariant_culture_info_0; }
	inline void set_invariant_culture_info_0(CultureInfo_t4157843068 * value)
	{
		___invariant_culture_info_0 = value;
		Il2CppCodeGenWriteBarrier((&___invariant_culture_info_0), value);
	}

	inline static int32_t get_offset_of_shared_table_lock_1() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068_StaticFields, ___shared_table_lock_1)); }
	inline RuntimeObject * get_shared_table_lock_1() const { return ___shared_table_lock_1; }
	inline RuntimeObject ** get_address_of_shared_table_lock_1() { return &___shared_table_lock_1; }
	inline void set_shared_table_lock_1(RuntimeObject * value)
	{
		___shared_table_lock_1 = value;
		Il2CppCodeGenWriteBarrier((&___shared_table_lock_1), value);
	}

	inline static int32_t get_offset_of_default_current_culture_2() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068_StaticFields, ___default_current_culture_2)); }
	inline CultureInfo_t4157843068 * get_default_current_culture_2() const { return ___default_current_culture_2; }
	inline CultureInfo_t4157843068 ** get_address_of_default_current_culture_2() { return &___default_current_culture_2; }
	inline void set_default_current_culture_2(CultureInfo_t4157843068 * value)
	{
		___default_current_culture_2 = value;
		Il2CppCodeGenWriteBarrier((&___default_current_culture_2), value);
	}

	inline static int32_t get_offset_of_s_DefaultThreadCurrentUICulture_33() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068_StaticFields, ___s_DefaultThreadCurrentUICulture_33)); }
	inline CultureInfo_t4157843068 * get_s_DefaultThreadCurrentUICulture_33() const { return ___s_DefaultThreadCurrentUICulture_33; }
	inline CultureInfo_t4157843068 ** get_address_of_s_DefaultThreadCurrentUICulture_33() { return &___s_DefaultThreadCurrentUICulture_33; }
	inline void set_s_DefaultThreadCurrentUICulture_33(CultureInfo_t4157843068 * value)
	{
		___s_DefaultThreadCurrentUICulture_33 = value;
		Il2CppCodeGenWriteBarrier((&___s_DefaultThreadCurrentUICulture_33), value);
	}

	inline static int32_t get_offset_of_s_DefaultThreadCurrentCulture_34() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068_StaticFields, ___s_DefaultThreadCurrentCulture_34)); }
	inline CultureInfo_t4157843068 * get_s_DefaultThreadCurrentCulture_34() const { return ___s_DefaultThreadCurrentCulture_34; }
	inline CultureInfo_t4157843068 ** get_address_of_s_DefaultThreadCurrentCulture_34() { return &___s_DefaultThreadCurrentCulture_34; }
	inline void set_s_DefaultThreadCurrentCulture_34(CultureInfo_t4157843068 * value)
	{
		___s_DefaultThreadCurrentCulture_34 = value;
		Il2CppCodeGenWriteBarrier((&___s_DefaultThreadCurrentCulture_34), value);
	}

	inline static int32_t get_offset_of_shared_by_number_35() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068_StaticFields, ___shared_by_number_35)); }
	inline Dictionary_2_t3046556399 * get_shared_by_number_35() const { return ___shared_by_number_35; }
	inline Dictionary_2_t3046556399 ** get_address_of_shared_by_number_35() { return &___shared_by_number_35; }
	inline void set_shared_by_number_35(Dictionary_2_t3046556399 * value)
	{
		___shared_by_number_35 = value;
		Il2CppCodeGenWriteBarrier((&___shared_by_number_35), value);
	}

	inline static int32_t get_offset_of_shared_by_name_36() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068_StaticFields, ___shared_by_name_36)); }
	inline Dictionary_2_t3943099367 * get_shared_by_name_36() const { return ___shared_by_name_36; }
	inline Dictionary_2_t3943099367 ** get_address_of_shared_by_name_36() { return &___shared_by_name_36; }
	inline void set_shared_by_name_36(Dictionary_2_t3943099367 * value)
	{
		___shared_by_name_36 = value;
		Il2CppCodeGenWriteBarrier((&___shared_by_name_36), value);
	}

	inline static int32_t get_offset_of_IsTaiwanSku_37() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068_StaticFields, ___IsTaiwanSku_37)); }
	inline bool get_IsTaiwanSku_37() const { return ___IsTaiwanSku_37; }
	inline bool* get_address_of_IsTaiwanSku_37() { return &___IsTaiwanSku_37; }
	inline void set_IsTaiwanSku_37(bool value)
	{
		___IsTaiwanSku_37 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Globalization.CultureInfo
struct CultureInfo_t4157843068_marshaled_pinvoke
{
	int32_t ___m_isReadOnly_3;
	int32_t ___cultureID_4;
	int32_t ___parent_lcid_5;
	int32_t ___datetime_index_6;
	int32_t ___number_index_7;
	int32_t ___default_calendar_type_8;
	int32_t ___m_useUserOverride_9;
	NumberFormatInfo_t435877138 * ___numInfo_10;
	DateTimeFormatInfo_t2405853701 * ___dateTimeInfo_11;
	TextInfo_t3810425522 * ___textInfo_12;
	char* ___m_name_13;
	char* ___englishname_14;
	char* ___nativename_15;
	char* ___iso3lang_16;
	char* ___iso2lang_17;
	char* ___win3lang_18;
	char* ___territory_19;
	char** ___native_calendar_names_20;
	CompareInfo_t1092934962 * ___compareInfo_21;
	void* ___textinfo_data_22;
	int32_t ___m_dataItem_23;
	Calendar_t1661121569 * ___calendar_24;
	CultureInfo_t4157843068_marshaled_pinvoke* ___parent_culture_25;
	int32_t ___constructed_26;
	uint8_t* ___cached_serialized_form_27;
	CultureData_t1899656083_marshaled_pinvoke* ___m_cultureData_28;
	int32_t ___m_isInherited_29;
};
// Native definition for COM marshalling of System.Globalization.CultureInfo
struct CultureInfo_t4157843068_marshaled_com
{
	int32_t ___m_isReadOnly_3;
	int32_t ___cultureID_4;
	int32_t ___parent_lcid_5;
	int32_t ___datetime_index_6;
	int32_t ___number_index_7;
	int32_t ___default_calendar_type_8;
	int32_t ___m_useUserOverride_9;
	NumberFormatInfo_t435877138 * ___numInfo_10;
	DateTimeFormatInfo_t2405853701 * ___dateTimeInfo_11;
	TextInfo_t3810425522 * ___textInfo_12;
	Il2CppChar* ___m_name_13;
	Il2CppChar* ___englishname_14;
	Il2CppChar* ___nativename_15;
	Il2CppChar* ___iso3lang_16;
	Il2CppChar* ___iso2lang_17;
	Il2CppChar* ___win3lang_18;
	Il2CppChar* ___territory_19;
	Il2CppChar** ___native_calendar_names_20;
	CompareInfo_t1092934962 * ___compareInfo_21;
	void* ___textinfo_data_22;
	int32_t ___m_dataItem_23;
	Calendar_t1661121569 * ___calendar_24;
	CultureInfo_t4157843068_marshaled_com* ___parent_culture_25;
	int32_t ___constructed_26;
	uint8_t* ___cached_serialized_form_27;
	CultureData_t1899656083_marshaled_com* ___m_cultureData_28;
	int32_t ___m_isInherited_29;
};
#endif // CULTUREINFO_T4157843068_H
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
#ifndef SERIALIZATIONINFO_T950877179_H
#define SERIALIZATIONINFO_T950877179_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.SerializationInfo
struct  SerializationInfo_t950877179  : public RuntimeObject
{
public:
	// System.String[] System.Runtime.Serialization.SerializationInfo::m_members
	StringU5BU5D_t1281789340* ___m_members_3;
	// System.Object[] System.Runtime.Serialization.SerializationInfo::m_data
	ObjectU5BU5D_t2843939325* ___m_data_4;
	// System.Type[] System.Runtime.Serialization.SerializationInfo::m_types
	TypeU5BU5D_t3940880105* ___m_types_5;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Runtime.Serialization.SerializationInfo::m_nameToIndex
	Dictionary_2_t2736202052 * ___m_nameToIndex_6;
	// System.Int32 System.Runtime.Serialization.SerializationInfo::m_currMember
	int32_t ___m_currMember_7;
	// System.Runtime.Serialization.IFormatterConverter System.Runtime.Serialization.SerializationInfo::m_converter
	RuntimeObject* ___m_converter_8;
	// System.String System.Runtime.Serialization.SerializationInfo::m_fullTypeName
	String_t* ___m_fullTypeName_9;
	// System.String System.Runtime.Serialization.SerializationInfo::m_assemName
	String_t* ___m_assemName_10;
	// System.Type System.Runtime.Serialization.SerializationInfo::objectType
	Type_t * ___objectType_11;
	// System.Boolean System.Runtime.Serialization.SerializationInfo::isFullTypeNameSetExplicit
	bool ___isFullTypeNameSetExplicit_12;
	// System.Boolean System.Runtime.Serialization.SerializationInfo::isAssemblyNameSetExplicit
	bool ___isAssemblyNameSetExplicit_13;
	// System.Boolean System.Runtime.Serialization.SerializationInfo::requireSameTokenInPartialTrust
	bool ___requireSameTokenInPartialTrust_14;

public:
	inline static int32_t get_offset_of_m_members_3() { return static_cast<int32_t>(offsetof(SerializationInfo_t950877179, ___m_members_3)); }
	inline StringU5BU5D_t1281789340* get_m_members_3() const { return ___m_members_3; }
	inline StringU5BU5D_t1281789340** get_address_of_m_members_3() { return &___m_members_3; }
	inline void set_m_members_3(StringU5BU5D_t1281789340* value)
	{
		___m_members_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_members_3), value);
	}

	inline static int32_t get_offset_of_m_data_4() { return static_cast<int32_t>(offsetof(SerializationInfo_t950877179, ___m_data_4)); }
	inline ObjectU5BU5D_t2843939325* get_m_data_4() const { return ___m_data_4; }
	inline ObjectU5BU5D_t2843939325** get_address_of_m_data_4() { return &___m_data_4; }
	inline void set_m_data_4(ObjectU5BU5D_t2843939325* value)
	{
		___m_data_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_data_4), value);
	}

	inline static int32_t get_offset_of_m_types_5() { return static_cast<int32_t>(offsetof(SerializationInfo_t950877179, ___m_types_5)); }
	inline TypeU5BU5D_t3940880105* get_m_types_5() const { return ___m_types_5; }
	inline TypeU5BU5D_t3940880105** get_address_of_m_types_5() { return &___m_types_5; }
	inline void set_m_types_5(TypeU5BU5D_t3940880105* value)
	{
		___m_types_5 = value;
		Il2CppCodeGenWriteBarrier((&___m_types_5), value);
	}

	inline static int32_t get_offset_of_m_nameToIndex_6() { return static_cast<int32_t>(offsetof(SerializationInfo_t950877179, ___m_nameToIndex_6)); }
	inline Dictionary_2_t2736202052 * get_m_nameToIndex_6() const { return ___m_nameToIndex_6; }
	inline Dictionary_2_t2736202052 ** get_address_of_m_nameToIndex_6() { return &___m_nameToIndex_6; }
	inline void set_m_nameToIndex_6(Dictionary_2_t2736202052 * value)
	{
		___m_nameToIndex_6 = value;
		Il2CppCodeGenWriteBarrier((&___m_nameToIndex_6), value);
	}

	inline static int32_t get_offset_of_m_currMember_7() { return static_cast<int32_t>(offsetof(SerializationInfo_t950877179, ___m_currMember_7)); }
	inline int32_t get_m_currMember_7() const { return ___m_currMember_7; }
	inline int32_t* get_address_of_m_currMember_7() { return &___m_currMember_7; }
	inline void set_m_currMember_7(int32_t value)
	{
		___m_currMember_7 = value;
	}

	inline static int32_t get_offset_of_m_converter_8() { return static_cast<int32_t>(offsetof(SerializationInfo_t950877179, ___m_converter_8)); }
	inline RuntimeObject* get_m_converter_8() const { return ___m_converter_8; }
	inline RuntimeObject** get_address_of_m_converter_8() { return &___m_converter_8; }
	inline void set_m_converter_8(RuntimeObject* value)
	{
		___m_converter_8 = value;
		Il2CppCodeGenWriteBarrier((&___m_converter_8), value);
	}

	inline static int32_t get_offset_of_m_fullTypeName_9() { return static_cast<int32_t>(offsetof(SerializationInfo_t950877179, ___m_fullTypeName_9)); }
	inline String_t* get_m_fullTypeName_9() const { return ___m_fullTypeName_9; }
	inline String_t** get_address_of_m_fullTypeName_9() { return &___m_fullTypeName_9; }
	inline void set_m_fullTypeName_9(String_t* value)
	{
		___m_fullTypeName_9 = value;
		Il2CppCodeGenWriteBarrier((&___m_fullTypeName_9), value);
	}

	inline static int32_t get_offset_of_m_assemName_10() { return static_cast<int32_t>(offsetof(SerializationInfo_t950877179, ___m_assemName_10)); }
	inline String_t* get_m_assemName_10() const { return ___m_assemName_10; }
	inline String_t** get_address_of_m_assemName_10() { return &___m_assemName_10; }
	inline void set_m_assemName_10(String_t* value)
	{
		___m_assemName_10 = value;
		Il2CppCodeGenWriteBarrier((&___m_assemName_10), value);
	}

	inline static int32_t get_offset_of_objectType_11() { return static_cast<int32_t>(offsetof(SerializationInfo_t950877179, ___objectType_11)); }
	inline Type_t * get_objectType_11() const { return ___objectType_11; }
	inline Type_t ** get_address_of_objectType_11() { return &___objectType_11; }
	inline void set_objectType_11(Type_t * value)
	{
		___objectType_11 = value;
		Il2CppCodeGenWriteBarrier((&___objectType_11), value);
	}

	inline static int32_t get_offset_of_isFullTypeNameSetExplicit_12() { return static_cast<int32_t>(offsetof(SerializationInfo_t950877179, ___isFullTypeNameSetExplicit_12)); }
	inline bool get_isFullTypeNameSetExplicit_12() const { return ___isFullTypeNameSetExplicit_12; }
	inline bool* get_address_of_isFullTypeNameSetExplicit_12() { return &___isFullTypeNameSetExplicit_12; }
	inline void set_isFullTypeNameSetExplicit_12(bool value)
	{
		___isFullTypeNameSetExplicit_12 = value;
	}

	inline static int32_t get_offset_of_isAssemblyNameSetExplicit_13() { return static_cast<int32_t>(offsetof(SerializationInfo_t950877179, ___isAssemblyNameSetExplicit_13)); }
	inline bool get_isAssemblyNameSetExplicit_13() const { return ___isAssemblyNameSetExplicit_13; }
	inline bool* get_address_of_isAssemblyNameSetExplicit_13() { return &___isAssemblyNameSetExplicit_13; }
	inline void set_isAssemblyNameSetExplicit_13(bool value)
	{
		___isAssemblyNameSetExplicit_13 = value;
	}

	inline static int32_t get_offset_of_requireSameTokenInPartialTrust_14() { return static_cast<int32_t>(offsetof(SerializationInfo_t950877179, ___requireSameTokenInPartialTrust_14)); }
	inline bool get_requireSameTokenInPartialTrust_14() const { return ___requireSameTokenInPartialTrust_14; }
	inline bool* get_address_of_requireSameTokenInPartialTrust_14() { return &___requireSameTokenInPartialTrust_14; }
	inline void set_requireSameTokenInPartialTrust_14(bool value)
	{
		___requireSameTokenInPartialTrust_14 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SERIALIZATIONINFO_T950877179_H
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
#ifndef ENCODING_T1523322056_H
#define ENCODING_T1523322056_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.Encoding
struct  Encoding_t1523322056  : public RuntimeObject
{
public:
	// System.Int32 System.Text.Encoding::m_codePage
	int32_t ___m_codePage_9;
	// System.Globalization.CodePageDataItem System.Text.Encoding::dataItem
	CodePageDataItem_t2285235057 * ___dataItem_10;
	// System.Boolean System.Text.Encoding::m_deserializedFromEverett
	bool ___m_deserializedFromEverett_11;
	// System.Boolean System.Text.Encoding::m_isReadOnly
	bool ___m_isReadOnly_12;
	// System.Text.EncoderFallback System.Text.Encoding::encoderFallback
	EncoderFallback_t1188251036 * ___encoderFallback_13;
	// System.Text.DecoderFallback System.Text.Encoding::decoderFallback
	DecoderFallback_t3123823036 * ___decoderFallback_14;

public:
	inline static int32_t get_offset_of_m_codePage_9() { return static_cast<int32_t>(offsetof(Encoding_t1523322056, ___m_codePage_9)); }
	inline int32_t get_m_codePage_9() const { return ___m_codePage_9; }
	inline int32_t* get_address_of_m_codePage_9() { return &___m_codePage_9; }
	inline void set_m_codePage_9(int32_t value)
	{
		___m_codePage_9 = value;
	}

	inline static int32_t get_offset_of_dataItem_10() { return static_cast<int32_t>(offsetof(Encoding_t1523322056, ___dataItem_10)); }
	inline CodePageDataItem_t2285235057 * get_dataItem_10() const { return ___dataItem_10; }
	inline CodePageDataItem_t2285235057 ** get_address_of_dataItem_10() { return &___dataItem_10; }
	inline void set_dataItem_10(CodePageDataItem_t2285235057 * value)
	{
		___dataItem_10 = value;
		Il2CppCodeGenWriteBarrier((&___dataItem_10), value);
	}

	inline static int32_t get_offset_of_m_deserializedFromEverett_11() { return static_cast<int32_t>(offsetof(Encoding_t1523322056, ___m_deserializedFromEverett_11)); }
	inline bool get_m_deserializedFromEverett_11() const { return ___m_deserializedFromEverett_11; }
	inline bool* get_address_of_m_deserializedFromEverett_11() { return &___m_deserializedFromEverett_11; }
	inline void set_m_deserializedFromEverett_11(bool value)
	{
		___m_deserializedFromEverett_11 = value;
	}

	inline static int32_t get_offset_of_m_isReadOnly_12() { return static_cast<int32_t>(offsetof(Encoding_t1523322056, ___m_isReadOnly_12)); }
	inline bool get_m_isReadOnly_12() const { return ___m_isReadOnly_12; }
	inline bool* get_address_of_m_isReadOnly_12() { return &___m_isReadOnly_12; }
	inline void set_m_isReadOnly_12(bool value)
	{
		___m_isReadOnly_12 = value;
	}

	inline static int32_t get_offset_of_encoderFallback_13() { return static_cast<int32_t>(offsetof(Encoding_t1523322056, ___encoderFallback_13)); }
	inline EncoderFallback_t1188251036 * get_encoderFallback_13() const { return ___encoderFallback_13; }
	inline EncoderFallback_t1188251036 ** get_address_of_encoderFallback_13() { return &___encoderFallback_13; }
	inline void set_encoderFallback_13(EncoderFallback_t1188251036 * value)
	{
		___encoderFallback_13 = value;
		Il2CppCodeGenWriteBarrier((&___encoderFallback_13), value);
	}

	inline static int32_t get_offset_of_decoderFallback_14() { return static_cast<int32_t>(offsetof(Encoding_t1523322056, ___decoderFallback_14)); }
	inline DecoderFallback_t3123823036 * get_decoderFallback_14() const { return ___decoderFallback_14; }
	inline DecoderFallback_t3123823036 ** get_address_of_decoderFallback_14() { return &___decoderFallback_14; }
	inline void set_decoderFallback_14(DecoderFallback_t3123823036 * value)
	{
		___decoderFallback_14 = value;
		Il2CppCodeGenWriteBarrier((&___decoderFallback_14), value);
	}
};

struct Encoding_t1523322056_StaticFields
{
public:
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::defaultEncoding
	Encoding_t1523322056 * ___defaultEncoding_0;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::unicodeEncoding
	Encoding_t1523322056 * ___unicodeEncoding_1;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::bigEndianUnicode
	Encoding_t1523322056 * ___bigEndianUnicode_2;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf7Encoding
	Encoding_t1523322056 * ___utf7Encoding_3;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf8Encoding
	Encoding_t1523322056 * ___utf8Encoding_4;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf32Encoding
	Encoding_t1523322056 * ___utf32Encoding_5;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::asciiEncoding
	Encoding_t1523322056 * ___asciiEncoding_6;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::latin1Encoding
	Encoding_t1523322056 * ___latin1Encoding_7;
	// System.Collections.Hashtable modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::encodings
	Hashtable_t1853889766 * ___encodings_8;
	// System.Object System.Text.Encoding::s_InternalSyncObject
	RuntimeObject * ___s_InternalSyncObject_15;

public:
	inline static int32_t get_offset_of_defaultEncoding_0() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___defaultEncoding_0)); }
	inline Encoding_t1523322056 * get_defaultEncoding_0() const { return ___defaultEncoding_0; }
	inline Encoding_t1523322056 ** get_address_of_defaultEncoding_0() { return &___defaultEncoding_0; }
	inline void set_defaultEncoding_0(Encoding_t1523322056 * value)
	{
		___defaultEncoding_0 = value;
		Il2CppCodeGenWriteBarrier((&___defaultEncoding_0), value);
	}

	inline static int32_t get_offset_of_unicodeEncoding_1() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___unicodeEncoding_1)); }
	inline Encoding_t1523322056 * get_unicodeEncoding_1() const { return ___unicodeEncoding_1; }
	inline Encoding_t1523322056 ** get_address_of_unicodeEncoding_1() { return &___unicodeEncoding_1; }
	inline void set_unicodeEncoding_1(Encoding_t1523322056 * value)
	{
		___unicodeEncoding_1 = value;
		Il2CppCodeGenWriteBarrier((&___unicodeEncoding_1), value);
	}

	inline static int32_t get_offset_of_bigEndianUnicode_2() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___bigEndianUnicode_2)); }
	inline Encoding_t1523322056 * get_bigEndianUnicode_2() const { return ___bigEndianUnicode_2; }
	inline Encoding_t1523322056 ** get_address_of_bigEndianUnicode_2() { return &___bigEndianUnicode_2; }
	inline void set_bigEndianUnicode_2(Encoding_t1523322056 * value)
	{
		___bigEndianUnicode_2 = value;
		Il2CppCodeGenWriteBarrier((&___bigEndianUnicode_2), value);
	}

	inline static int32_t get_offset_of_utf7Encoding_3() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___utf7Encoding_3)); }
	inline Encoding_t1523322056 * get_utf7Encoding_3() const { return ___utf7Encoding_3; }
	inline Encoding_t1523322056 ** get_address_of_utf7Encoding_3() { return &___utf7Encoding_3; }
	inline void set_utf7Encoding_3(Encoding_t1523322056 * value)
	{
		___utf7Encoding_3 = value;
		Il2CppCodeGenWriteBarrier((&___utf7Encoding_3), value);
	}

	inline static int32_t get_offset_of_utf8Encoding_4() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___utf8Encoding_4)); }
	inline Encoding_t1523322056 * get_utf8Encoding_4() const { return ___utf8Encoding_4; }
	inline Encoding_t1523322056 ** get_address_of_utf8Encoding_4() { return &___utf8Encoding_4; }
	inline void set_utf8Encoding_4(Encoding_t1523322056 * value)
	{
		___utf8Encoding_4 = value;
		Il2CppCodeGenWriteBarrier((&___utf8Encoding_4), value);
	}

	inline static int32_t get_offset_of_utf32Encoding_5() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___utf32Encoding_5)); }
	inline Encoding_t1523322056 * get_utf32Encoding_5() const { return ___utf32Encoding_5; }
	inline Encoding_t1523322056 ** get_address_of_utf32Encoding_5() { return &___utf32Encoding_5; }
	inline void set_utf32Encoding_5(Encoding_t1523322056 * value)
	{
		___utf32Encoding_5 = value;
		Il2CppCodeGenWriteBarrier((&___utf32Encoding_5), value);
	}

	inline static int32_t get_offset_of_asciiEncoding_6() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___asciiEncoding_6)); }
	inline Encoding_t1523322056 * get_asciiEncoding_6() const { return ___asciiEncoding_6; }
	inline Encoding_t1523322056 ** get_address_of_asciiEncoding_6() { return &___asciiEncoding_6; }
	inline void set_asciiEncoding_6(Encoding_t1523322056 * value)
	{
		___asciiEncoding_6 = value;
		Il2CppCodeGenWriteBarrier((&___asciiEncoding_6), value);
	}

	inline static int32_t get_offset_of_latin1Encoding_7() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___latin1Encoding_7)); }
	inline Encoding_t1523322056 * get_latin1Encoding_7() const { return ___latin1Encoding_7; }
	inline Encoding_t1523322056 ** get_address_of_latin1Encoding_7() { return &___latin1Encoding_7; }
	inline void set_latin1Encoding_7(Encoding_t1523322056 * value)
	{
		___latin1Encoding_7 = value;
		Il2CppCodeGenWriteBarrier((&___latin1Encoding_7), value);
	}

	inline static int32_t get_offset_of_encodings_8() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___encodings_8)); }
	inline Hashtable_t1853889766 * get_encodings_8() const { return ___encodings_8; }
	inline Hashtable_t1853889766 ** get_address_of_encodings_8() { return &___encodings_8; }
	inline void set_encodings_8(Hashtable_t1853889766 * value)
	{
		___encodings_8 = value;
		Il2CppCodeGenWriteBarrier((&___encodings_8), value);
	}

	inline static int32_t get_offset_of_s_InternalSyncObject_15() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___s_InternalSyncObject_15)); }
	inline RuntimeObject * get_s_InternalSyncObject_15() const { return ___s_InternalSyncObject_15; }
	inline RuntimeObject ** get_address_of_s_InternalSyncObject_15() { return &___s_InternalSyncObject_15; }
	inline void set_s_InternalSyncObject_15(RuntimeObject * value)
	{
		___s_InternalSyncObject_15 = value;
		Il2CppCodeGenWriteBarrier((&___s_InternalSyncObject_15), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENCODING_T1523322056_H
#ifndef STRINGBUILDER_T_H
#define STRINGBUILDER_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.StringBuilder
struct  StringBuilder_t  : public RuntimeObject
{
public:
	// System.Char[] System.Text.StringBuilder::m_ChunkChars
	CharU5BU5D_t3528271667* ___m_ChunkChars_0;
	// System.Text.StringBuilder System.Text.StringBuilder::m_ChunkPrevious
	StringBuilder_t * ___m_ChunkPrevious_1;
	// System.Int32 System.Text.StringBuilder::m_ChunkLength
	int32_t ___m_ChunkLength_2;
	// System.Int32 System.Text.StringBuilder::m_ChunkOffset
	int32_t ___m_ChunkOffset_3;
	// System.Int32 System.Text.StringBuilder::m_MaxCapacity
	int32_t ___m_MaxCapacity_4;

public:
	inline static int32_t get_offset_of_m_ChunkChars_0() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkChars_0)); }
	inline CharU5BU5D_t3528271667* get_m_ChunkChars_0() const { return ___m_ChunkChars_0; }
	inline CharU5BU5D_t3528271667** get_address_of_m_ChunkChars_0() { return &___m_ChunkChars_0; }
	inline void set_m_ChunkChars_0(CharU5BU5D_t3528271667* value)
	{
		___m_ChunkChars_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_ChunkChars_0), value);
	}

	inline static int32_t get_offset_of_m_ChunkPrevious_1() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkPrevious_1)); }
	inline StringBuilder_t * get_m_ChunkPrevious_1() const { return ___m_ChunkPrevious_1; }
	inline StringBuilder_t ** get_address_of_m_ChunkPrevious_1() { return &___m_ChunkPrevious_1; }
	inline void set_m_ChunkPrevious_1(StringBuilder_t * value)
	{
		___m_ChunkPrevious_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_ChunkPrevious_1), value);
	}

	inline static int32_t get_offset_of_m_ChunkLength_2() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkLength_2)); }
	inline int32_t get_m_ChunkLength_2() const { return ___m_ChunkLength_2; }
	inline int32_t* get_address_of_m_ChunkLength_2() { return &___m_ChunkLength_2; }
	inline void set_m_ChunkLength_2(int32_t value)
	{
		___m_ChunkLength_2 = value;
	}

	inline static int32_t get_offset_of_m_ChunkOffset_3() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkOffset_3)); }
	inline int32_t get_m_ChunkOffset_3() const { return ___m_ChunkOffset_3; }
	inline int32_t* get_address_of_m_ChunkOffset_3() { return &___m_ChunkOffset_3; }
	inline void set_m_ChunkOffset_3(int32_t value)
	{
		___m_ChunkOffset_3 = value;
	}

	inline static int32_t get_offset_of_m_MaxCapacity_4() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_MaxCapacity_4)); }
	inline int32_t get_m_MaxCapacity_4() const { return ___m_MaxCapacity_4; }
	inline int32_t* get_address_of_m_MaxCapacity_4() { return &___m_MaxCapacity_4; }
	inline void set_m_MaxCapacity_4(int32_t value)
	{
		___m_MaxCapacity_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRINGBUILDER_T_H
#ifndef SYNCHRONIZATIONCONTEXT_T2326897723_H
#define SYNCHRONIZATIONCONTEXT_T2326897723_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.SynchronizationContext
struct  SynchronizationContext_t2326897723  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYNCHRONIZATIONCONTEXT_T2326897723_H
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
#ifndef CUSTOMYIELDINSTRUCTION_T1895667560_H
#define CUSTOMYIELDINSTRUCTION_T1895667560_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.CustomYieldInstruction
struct  CustomYieldInstruction_t1895667560  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CUSTOMYIELDINSTRUCTION_T1895667560_H
#ifndef RESOURCES_T2942265397_H
#define RESOURCES_T2942265397_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Resources
struct  Resources_t2942265397  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESOURCES_T2942265397_H
#ifndef SCENEMANAGER_T2787271929_H
#define SCENEMANAGER_T2787271929_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SceneManagement.SceneManager
struct  SceneManager_t2787271929  : public RuntimeObject
{
public:

public:
};

struct SceneManager_t2787271929_StaticFields
{
public:
	// UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.LoadSceneMode> UnityEngine.SceneManagement.SceneManager::sceneLoaded
	UnityAction_2_t2165061829 * ___sceneLoaded_0;
	// UnityEngine.Events.UnityAction`1<UnityEngine.SceneManagement.Scene> UnityEngine.SceneManagement.SceneManager::sceneUnloaded
	UnityAction_1_t2933211702 * ___sceneUnloaded_1;
	// UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.Scene> UnityEngine.SceneManagement.SceneManager::activeSceneChanged
	UnityAction_2_t1262235195 * ___activeSceneChanged_2;

public:
	inline static int32_t get_offset_of_sceneLoaded_0() { return static_cast<int32_t>(offsetof(SceneManager_t2787271929_StaticFields, ___sceneLoaded_0)); }
	inline UnityAction_2_t2165061829 * get_sceneLoaded_0() const { return ___sceneLoaded_0; }
	inline UnityAction_2_t2165061829 ** get_address_of_sceneLoaded_0() { return &___sceneLoaded_0; }
	inline void set_sceneLoaded_0(UnityAction_2_t2165061829 * value)
	{
		___sceneLoaded_0 = value;
		Il2CppCodeGenWriteBarrier((&___sceneLoaded_0), value);
	}

	inline static int32_t get_offset_of_sceneUnloaded_1() { return static_cast<int32_t>(offsetof(SceneManager_t2787271929_StaticFields, ___sceneUnloaded_1)); }
	inline UnityAction_1_t2933211702 * get_sceneUnloaded_1() const { return ___sceneUnloaded_1; }
	inline UnityAction_1_t2933211702 ** get_address_of_sceneUnloaded_1() { return &___sceneUnloaded_1; }
	inline void set_sceneUnloaded_1(UnityAction_1_t2933211702 * value)
	{
		___sceneUnloaded_1 = value;
		Il2CppCodeGenWriteBarrier((&___sceneUnloaded_1), value);
	}

	inline static int32_t get_offset_of_activeSceneChanged_2() { return static_cast<int32_t>(offsetof(SceneManager_t2787271929_StaticFields, ___activeSceneChanged_2)); }
	inline UnityAction_2_t1262235195 * get_activeSceneChanged_2() const { return ___activeSceneChanged_2; }
	inline UnityAction_2_t1262235195 ** get_address_of_activeSceneChanged_2() { return &___activeSceneChanged_2; }
	inline void set_activeSceneChanged_2(UnityAction_2_t1262235195 * value)
	{
		___activeSceneChanged_2 = value;
		Il2CppCodeGenWriteBarrier((&___activeSceneChanged_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SCENEMANAGER_T2787271929_H
#ifndef SCREEN_T3860757715_H
#define SCREEN_T3860757715_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Screen
struct  Screen_t3860757715  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SCREEN_T3860757715_H
#ifndef SENDMOUSEEVENTS_T3273302915_H
#define SENDMOUSEEVENTS_T3273302915_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SendMouseEvents
struct  SendMouseEvents_t3273302915  : public RuntimeObject
{
public:

public:
};

struct SendMouseEvents_t3273302915_StaticFields
{
public:
	// System.Boolean UnityEngine.SendMouseEvents::s_MouseUsed
	bool ___s_MouseUsed_0;
	// UnityEngine.SendMouseEvents/HitInfo[] UnityEngine.SendMouseEvents::m_LastHit
	HitInfoU5BU5D_t1685002053* ___m_LastHit_1;
	// UnityEngine.SendMouseEvents/HitInfo[] UnityEngine.SendMouseEvents::m_MouseDownHit
	HitInfoU5BU5D_t1685002053* ___m_MouseDownHit_2;
	// UnityEngine.SendMouseEvents/HitInfo[] UnityEngine.SendMouseEvents::m_CurrentHit
	HitInfoU5BU5D_t1685002053* ___m_CurrentHit_3;
	// UnityEngine.Camera[] UnityEngine.SendMouseEvents::m_Cameras
	CameraU5BU5D_t1709987734* ___m_Cameras_4;

public:
	inline static int32_t get_offset_of_s_MouseUsed_0() { return static_cast<int32_t>(offsetof(SendMouseEvents_t3273302915_StaticFields, ___s_MouseUsed_0)); }
	inline bool get_s_MouseUsed_0() const { return ___s_MouseUsed_0; }
	inline bool* get_address_of_s_MouseUsed_0() { return &___s_MouseUsed_0; }
	inline void set_s_MouseUsed_0(bool value)
	{
		___s_MouseUsed_0 = value;
	}

	inline static int32_t get_offset_of_m_LastHit_1() { return static_cast<int32_t>(offsetof(SendMouseEvents_t3273302915_StaticFields, ___m_LastHit_1)); }
	inline HitInfoU5BU5D_t1685002053* get_m_LastHit_1() const { return ___m_LastHit_1; }
	inline HitInfoU5BU5D_t1685002053** get_address_of_m_LastHit_1() { return &___m_LastHit_1; }
	inline void set_m_LastHit_1(HitInfoU5BU5D_t1685002053* value)
	{
		___m_LastHit_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_LastHit_1), value);
	}

	inline static int32_t get_offset_of_m_MouseDownHit_2() { return static_cast<int32_t>(offsetof(SendMouseEvents_t3273302915_StaticFields, ___m_MouseDownHit_2)); }
	inline HitInfoU5BU5D_t1685002053* get_m_MouseDownHit_2() const { return ___m_MouseDownHit_2; }
	inline HitInfoU5BU5D_t1685002053** get_address_of_m_MouseDownHit_2() { return &___m_MouseDownHit_2; }
	inline void set_m_MouseDownHit_2(HitInfoU5BU5D_t1685002053* value)
	{
		___m_MouseDownHit_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_MouseDownHit_2), value);
	}

	inline static int32_t get_offset_of_m_CurrentHit_3() { return static_cast<int32_t>(offsetof(SendMouseEvents_t3273302915_StaticFields, ___m_CurrentHit_3)); }
	inline HitInfoU5BU5D_t1685002053* get_m_CurrentHit_3() const { return ___m_CurrentHit_3; }
	inline HitInfoU5BU5D_t1685002053** get_address_of_m_CurrentHit_3() { return &___m_CurrentHit_3; }
	inline void set_m_CurrentHit_3(HitInfoU5BU5D_t1685002053* value)
	{
		___m_CurrentHit_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_CurrentHit_3), value);
	}

	inline static int32_t get_offset_of_m_Cameras_4() { return static_cast<int32_t>(offsetof(SendMouseEvents_t3273302915_StaticFields, ___m_Cameras_4)); }
	inline CameraU5BU5D_t1709987734* get_m_Cameras_4() const { return ___m_Cameras_4; }
	inline CameraU5BU5D_t1709987734** get_address_of_m_Cameras_4() { return &___m_Cameras_4; }
	inline void set_m_Cameras_4(CameraU5BU5D_t1709987734* value)
	{
		___m_Cameras_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_Cameras_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SENDMOUSEEVENTS_T3273302915_H
#ifndef SETUPCOROUTINE_T2062820429_H
#define SETUPCOROUTINE_T2062820429_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SetupCoroutine
struct  SetupCoroutine_t2062820429  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SETUPCOROUTINE_T2062820429_H
#ifndef DATAUTILITY_T2196215967_H
#define DATAUTILITY_T2196215967_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Sprites.DataUtility
struct  DataUtility_t2196215967  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATAUTILITY_T2196215967_H
#ifndef STACKTRACEUTILITY_T3465565809_H
#define STACKTRACEUTILITY_T3465565809_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.StackTraceUtility
struct  StackTraceUtility_t3465565809  : public RuntimeObject
{
public:

public:
};

struct StackTraceUtility_t3465565809_StaticFields
{
public:
	// System.String UnityEngine.StackTraceUtility::projectFolder
	String_t* ___projectFolder_0;

public:
	inline static int32_t get_offset_of_projectFolder_0() { return static_cast<int32_t>(offsetof(StackTraceUtility_t3465565809_StaticFields, ___projectFolder_0)); }
	inline String_t* get_projectFolder_0() const { return ___projectFolder_0; }
	inline String_t** get_address_of_projectFolder_0() { return &___projectFolder_0; }
	inline void set_projectFolder_0(String_t* value)
	{
		___projectFolder_0 = value;
		Il2CppCodeGenWriteBarrier((&___projectFolder_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STACKTRACEUTILITY_T3465565809_H
#ifndef SYSTEMINFO_T3561985952_H
#define SYSTEMINFO_T3561985952_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SystemInfo
struct  SystemInfo_t3561985952  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYSTEMINFO_T3561985952_H
#ifndef TIME_T2420636075_H
#define TIME_T2420636075_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Time
struct  Time_t2420636075  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TIME_T2420636075_H
#ifndef ENUMERATOR_T3442430665_H
#define ENUMERATOR_T3442430665_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Transform/Enumerator
struct  Enumerator_t3442430665  : public RuntimeObject
{
public:
	// UnityEngine.Transform UnityEngine.Transform/Enumerator::outer
	Transform_t3600365921 * ___outer_0;
	// System.Int32 UnityEngine.Transform/Enumerator::currentIndex
	int32_t ___currentIndex_1;

public:
	inline static int32_t get_offset_of_outer_0() { return static_cast<int32_t>(offsetof(Enumerator_t3442430665, ___outer_0)); }
	inline Transform_t3600365921 * get_outer_0() const { return ___outer_0; }
	inline Transform_t3600365921 ** get_address_of_outer_0() { return &___outer_0; }
	inline void set_outer_0(Transform_t3600365921 * value)
	{
		___outer_0 = value;
		Il2CppCodeGenWriteBarrier((&___outer_0), value);
	}

	inline static int32_t get_offset_of_currentIndex_1() { return static_cast<int32_t>(offsetof(Enumerator_t3442430665, ___currentIndex_1)); }
	inline int32_t get_currentIndex_1() const { return ___currentIndex_1; }
	inline int32_t* get_address_of_currentIndex_1() { return &___currentIndex_1; }
	inline void set_currentIndex_1(int32_t value)
	{
		___currentIndex_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_T3442430665_H
#ifndef SPRITEATLASMANAGER_T3158462485_H
#define SPRITEATLASMANAGER_T3158462485_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.U2D.SpriteAtlasManager
struct  SpriteAtlasManager_t3158462485  : public RuntimeObject
{
public:

public:
};

struct SpriteAtlasManager_t3158462485_StaticFields
{
public:
	// UnityEngine.U2D.SpriteAtlasManager/RequestAtlasCallback UnityEngine.U2D.SpriteAtlasManager::atlasRequested
	RequestAtlasCallback_t3100554279 * ___atlasRequested_0;
	// System.Action`1<UnityEngine.U2D.SpriteAtlas> UnityEngine.U2D.SpriteAtlasManager::atlasRegistered
	Action_1_t819399007 * ___atlasRegistered_1;
	// System.Action`1<UnityEngine.U2D.SpriteAtlas> UnityEngine.U2D.SpriteAtlasManager::<>f__mg$cache0
	Action_1_t819399007 * ___U3CU3Ef__mgU24cache0_2;

public:
	inline static int32_t get_offset_of_atlasRequested_0() { return static_cast<int32_t>(offsetof(SpriteAtlasManager_t3158462485_StaticFields, ___atlasRequested_0)); }
	inline RequestAtlasCallback_t3100554279 * get_atlasRequested_0() const { return ___atlasRequested_0; }
	inline RequestAtlasCallback_t3100554279 ** get_address_of_atlasRequested_0() { return &___atlasRequested_0; }
	inline void set_atlasRequested_0(RequestAtlasCallback_t3100554279 * value)
	{
		___atlasRequested_0 = value;
		Il2CppCodeGenWriteBarrier((&___atlasRequested_0), value);
	}

	inline static int32_t get_offset_of_atlasRegistered_1() { return static_cast<int32_t>(offsetof(SpriteAtlasManager_t3158462485_StaticFields, ___atlasRegistered_1)); }
	inline Action_1_t819399007 * get_atlasRegistered_1() const { return ___atlasRegistered_1; }
	inline Action_1_t819399007 ** get_address_of_atlasRegistered_1() { return &___atlasRegistered_1; }
	inline void set_atlasRegistered_1(Action_1_t819399007 * value)
	{
		___atlasRegistered_1 = value;
		Il2CppCodeGenWriteBarrier((&___atlasRegistered_1), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache0_2() { return static_cast<int32_t>(offsetof(SpriteAtlasManager_t3158462485_StaticFields, ___U3CU3Ef__mgU24cache0_2)); }
	inline Action_1_t819399007 * get_U3CU3Ef__mgU24cache0_2() const { return ___U3CU3Ef__mgU24cache0_2; }
	inline Action_1_t819399007 ** get_address_of_U3CU3Ef__mgU24cache0_2() { return &___U3CU3Ef__mgU24cache0_2; }
	inline void set_U3CU3Ef__mgU24cache0_2(Action_1_t819399007 * value)
	{
		___U3CU3Ef__mgU24cache0_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache0_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SPRITEATLASMANAGER_T3158462485_H
#ifndef UNHANDLEDEXCEPTIONHANDLER_T1162846485_H
#define UNHANDLEDEXCEPTIONHANDLER_T1162846485_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UnhandledExceptionHandler
struct  UnhandledExceptionHandler_t1162846485  : public RuntimeObject
{
public:

public:
};

struct UnhandledExceptionHandler_t1162846485_StaticFields
{
public:
	// System.UnhandledExceptionEventHandler UnityEngine.UnhandledExceptionHandler::<>f__mg$cache0
	UnhandledExceptionEventHandler_t3101989324 * ___U3CU3Ef__mgU24cache0_0;

public:
	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache0_0() { return static_cast<int32_t>(offsetof(UnhandledExceptionHandler_t1162846485_StaticFields, ___U3CU3Ef__mgU24cache0_0)); }
	inline UnhandledExceptionEventHandler_t3101989324 * get_U3CU3Ef__mgU24cache0_0() const { return ___U3CU3Ef__mgU24cache0_0; }
	inline UnhandledExceptionEventHandler_t3101989324 ** get_address_of_U3CU3Ef__mgU24cache0_0() { return &___U3CU3Ef__mgU24cache0_0; }
	inline void set_U3CU3Ef__mgU24cache0_0(UnhandledExceptionEventHandler_t3101989324 * value)
	{
		___U3CU3Ef__mgU24cache0_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache0_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNHANDLEDEXCEPTIONHANDLER_T1162846485_H
#ifndef YIELDINSTRUCTION_T403091072_H
#define YIELDINSTRUCTION_T403091072_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.YieldInstruction
struct  YieldInstruction_t403091072  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_t403091072_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_t403091072_marshaled_com
{
};
#endif // YIELDINSTRUCTION_T403091072_H
#ifndef NOTIFICATIONHELPER_T2061062509_H
#define NOTIFICATIONHELPER_T2061062509_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.iOS.NotificationHelper
struct  NotificationHelper_t2061062509  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NOTIFICATIONHELPER_T2061062509_H
#ifndef NETFXCOREEXTENSIONS_T4089902045_H
#define NETFXCOREEXTENSIONS_T4089902045_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngineInternal.NetFxCoreExtensions
struct  NetFxCoreExtensions_t4089902045  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NETFXCOREEXTENSIONS_T4089902045_H
#ifndef SCRIPTINGUTILS_T2624832893_H
#define SCRIPTINGUTILS_T2624832893_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngineInternal.ScriptingUtils
struct  ScriptingUtils_t2624832893  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SCRIPTINGUTILS_T2624832893_H
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
#ifndef TEXTWRITER_T3478189236_H
#define TEXTWRITER_T3478189236_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.TextWriter
struct  TextWriter_t3478189236  : public MarshalByRefObject_t2760389100
{
public:
	// System.Char[] System.IO.TextWriter::CoreNewLine
	CharU5BU5D_t3528271667* ___CoreNewLine_9;
	// System.IFormatProvider System.IO.TextWriter::InternalFormatProvider
	RuntimeObject* ___InternalFormatProvider_10;

public:
	inline static int32_t get_offset_of_CoreNewLine_9() { return static_cast<int32_t>(offsetof(TextWriter_t3478189236, ___CoreNewLine_9)); }
	inline CharU5BU5D_t3528271667* get_CoreNewLine_9() const { return ___CoreNewLine_9; }
	inline CharU5BU5D_t3528271667** get_address_of_CoreNewLine_9() { return &___CoreNewLine_9; }
	inline void set_CoreNewLine_9(CharU5BU5D_t3528271667* value)
	{
		___CoreNewLine_9 = value;
		Il2CppCodeGenWriteBarrier((&___CoreNewLine_9), value);
	}

	inline static int32_t get_offset_of_InternalFormatProvider_10() { return static_cast<int32_t>(offsetof(TextWriter_t3478189236, ___InternalFormatProvider_10)); }
	inline RuntimeObject* get_InternalFormatProvider_10() const { return ___InternalFormatProvider_10; }
	inline RuntimeObject** get_address_of_InternalFormatProvider_10() { return &___InternalFormatProvider_10; }
	inline void set_InternalFormatProvider_10(RuntimeObject* value)
	{
		___InternalFormatProvider_10 = value;
		Il2CppCodeGenWriteBarrier((&___InternalFormatProvider_10), value);
	}
};

struct TextWriter_t3478189236_StaticFields
{
public:
	// System.IO.TextWriter System.IO.TextWriter::Null
	TextWriter_t3478189236 * ___Null_1;
	// System.Action`1<System.Object> System.IO.TextWriter::_WriteCharDelegate
	Action_1_t3252573759 * ____WriteCharDelegate_2;
	// System.Action`1<System.Object> System.IO.TextWriter::_WriteStringDelegate
	Action_1_t3252573759 * ____WriteStringDelegate_3;
	// System.Action`1<System.Object> System.IO.TextWriter::_WriteCharArrayRangeDelegate
	Action_1_t3252573759 * ____WriteCharArrayRangeDelegate_4;
	// System.Action`1<System.Object> System.IO.TextWriter::_WriteLineCharDelegate
	Action_1_t3252573759 * ____WriteLineCharDelegate_5;
	// System.Action`1<System.Object> System.IO.TextWriter::_WriteLineStringDelegate
	Action_1_t3252573759 * ____WriteLineStringDelegate_6;
	// System.Action`1<System.Object> System.IO.TextWriter::_WriteLineCharArrayRangeDelegate
	Action_1_t3252573759 * ____WriteLineCharArrayRangeDelegate_7;
	// System.Action`1<System.Object> System.IO.TextWriter::_FlushDelegate
	Action_1_t3252573759 * ____FlushDelegate_8;

public:
	inline static int32_t get_offset_of_Null_1() { return static_cast<int32_t>(offsetof(TextWriter_t3478189236_StaticFields, ___Null_1)); }
	inline TextWriter_t3478189236 * get_Null_1() const { return ___Null_1; }
	inline TextWriter_t3478189236 ** get_address_of_Null_1() { return &___Null_1; }
	inline void set_Null_1(TextWriter_t3478189236 * value)
	{
		___Null_1 = value;
		Il2CppCodeGenWriteBarrier((&___Null_1), value);
	}

	inline static int32_t get_offset_of__WriteCharDelegate_2() { return static_cast<int32_t>(offsetof(TextWriter_t3478189236_StaticFields, ____WriteCharDelegate_2)); }
	inline Action_1_t3252573759 * get__WriteCharDelegate_2() const { return ____WriteCharDelegate_2; }
	inline Action_1_t3252573759 ** get_address_of__WriteCharDelegate_2() { return &____WriteCharDelegate_2; }
	inline void set__WriteCharDelegate_2(Action_1_t3252573759 * value)
	{
		____WriteCharDelegate_2 = value;
		Il2CppCodeGenWriteBarrier((&____WriteCharDelegate_2), value);
	}

	inline static int32_t get_offset_of__WriteStringDelegate_3() { return static_cast<int32_t>(offsetof(TextWriter_t3478189236_StaticFields, ____WriteStringDelegate_3)); }
	inline Action_1_t3252573759 * get__WriteStringDelegate_3() const { return ____WriteStringDelegate_3; }
	inline Action_1_t3252573759 ** get_address_of__WriteStringDelegate_3() { return &____WriteStringDelegate_3; }
	inline void set__WriteStringDelegate_3(Action_1_t3252573759 * value)
	{
		____WriteStringDelegate_3 = value;
		Il2CppCodeGenWriteBarrier((&____WriteStringDelegate_3), value);
	}

	inline static int32_t get_offset_of__WriteCharArrayRangeDelegate_4() { return static_cast<int32_t>(offsetof(TextWriter_t3478189236_StaticFields, ____WriteCharArrayRangeDelegate_4)); }
	inline Action_1_t3252573759 * get__WriteCharArrayRangeDelegate_4() const { return ____WriteCharArrayRangeDelegate_4; }
	inline Action_1_t3252573759 ** get_address_of__WriteCharArrayRangeDelegate_4() { return &____WriteCharArrayRangeDelegate_4; }
	inline void set__WriteCharArrayRangeDelegate_4(Action_1_t3252573759 * value)
	{
		____WriteCharArrayRangeDelegate_4 = value;
		Il2CppCodeGenWriteBarrier((&____WriteCharArrayRangeDelegate_4), value);
	}

	inline static int32_t get_offset_of__WriteLineCharDelegate_5() { return static_cast<int32_t>(offsetof(TextWriter_t3478189236_StaticFields, ____WriteLineCharDelegate_5)); }
	inline Action_1_t3252573759 * get__WriteLineCharDelegate_5() const { return ____WriteLineCharDelegate_5; }
	inline Action_1_t3252573759 ** get_address_of__WriteLineCharDelegate_5() { return &____WriteLineCharDelegate_5; }
	inline void set__WriteLineCharDelegate_5(Action_1_t3252573759 * value)
	{
		____WriteLineCharDelegate_5 = value;
		Il2CppCodeGenWriteBarrier((&____WriteLineCharDelegate_5), value);
	}

	inline static int32_t get_offset_of__WriteLineStringDelegate_6() { return static_cast<int32_t>(offsetof(TextWriter_t3478189236_StaticFields, ____WriteLineStringDelegate_6)); }
	inline Action_1_t3252573759 * get__WriteLineStringDelegate_6() const { return ____WriteLineStringDelegate_6; }
	inline Action_1_t3252573759 ** get_address_of__WriteLineStringDelegate_6() { return &____WriteLineStringDelegate_6; }
	inline void set__WriteLineStringDelegate_6(Action_1_t3252573759 * value)
	{
		____WriteLineStringDelegate_6 = value;
		Il2CppCodeGenWriteBarrier((&____WriteLineStringDelegate_6), value);
	}

	inline static int32_t get_offset_of__WriteLineCharArrayRangeDelegate_7() { return static_cast<int32_t>(offsetof(TextWriter_t3478189236_StaticFields, ____WriteLineCharArrayRangeDelegate_7)); }
	inline Action_1_t3252573759 * get__WriteLineCharArrayRangeDelegate_7() const { return ____WriteLineCharArrayRangeDelegate_7; }
	inline Action_1_t3252573759 ** get_address_of__WriteLineCharArrayRangeDelegate_7() { return &____WriteLineCharArrayRangeDelegate_7; }
	inline void set__WriteLineCharArrayRangeDelegate_7(Action_1_t3252573759 * value)
	{
		____WriteLineCharArrayRangeDelegate_7 = value;
		Il2CppCodeGenWriteBarrier((&____WriteLineCharArrayRangeDelegate_7), value);
	}

	inline static int32_t get_offset_of__FlushDelegate_8() { return static_cast<int32_t>(offsetof(TextWriter_t3478189236_StaticFields, ____FlushDelegate_8)); }
	inline Action_1_t3252573759 * get__FlushDelegate_8() const { return ____FlushDelegate_8; }
	inline Action_1_t3252573759 ** get_address_of__FlushDelegate_8() { return &____FlushDelegate_8; }
	inline void set__FlushDelegate_8(Action_1_t3252573759 * value)
	{
		____FlushDelegate_8 = value;
		Il2CppCodeGenWriteBarrier((&____FlushDelegate_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEXTWRITER_T3478189236_H
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
#ifndef THREAD_T2300836069_H
#define THREAD_T2300836069_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.Thread
struct  Thread_t2300836069  : public CriticalFinalizerObject_t701527852
{
public:
	// System.Threading.InternalThread System.Threading.Thread::internal_thread
	InternalThread_t95296544 * ___internal_thread_6;
	// System.Object System.Threading.Thread::m_ThreadStartArg
	RuntimeObject * ___m_ThreadStartArg_7;
	// System.Object System.Threading.Thread::pending_exception
	RuntimeObject * ___pending_exception_8;
	// System.Security.Principal.IPrincipal System.Threading.Thread::principal
	RuntimeObject* ___principal_9;
	// System.Int32 System.Threading.Thread::principal_version
	int32_t ___principal_version_10;
	// System.MulticastDelegate System.Threading.Thread::m_Delegate
	MulticastDelegate_t * ___m_Delegate_12;
	// System.Threading.ExecutionContext System.Threading.Thread::m_ExecutionContext
	ExecutionContext_t1748372627 * ___m_ExecutionContext_13;
	// System.Boolean System.Threading.Thread::m_ExecutionContextBelongsToOuterScope
	bool ___m_ExecutionContextBelongsToOuterScope_14;

public:
	inline static int32_t get_offset_of_internal_thread_6() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___internal_thread_6)); }
	inline InternalThread_t95296544 * get_internal_thread_6() const { return ___internal_thread_6; }
	inline InternalThread_t95296544 ** get_address_of_internal_thread_6() { return &___internal_thread_6; }
	inline void set_internal_thread_6(InternalThread_t95296544 * value)
	{
		___internal_thread_6 = value;
		Il2CppCodeGenWriteBarrier((&___internal_thread_6), value);
	}

	inline static int32_t get_offset_of_m_ThreadStartArg_7() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___m_ThreadStartArg_7)); }
	inline RuntimeObject * get_m_ThreadStartArg_7() const { return ___m_ThreadStartArg_7; }
	inline RuntimeObject ** get_address_of_m_ThreadStartArg_7() { return &___m_ThreadStartArg_7; }
	inline void set_m_ThreadStartArg_7(RuntimeObject * value)
	{
		___m_ThreadStartArg_7 = value;
		Il2CppCodeGenWriteBarrier((&___m_ThreadStartArg_7), value);
	}

	inline static int32_t get_offset_of_pending_exception_8() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___pending_exception_8)); }
	inline RuntimeObject * get_pending_exception_8() const { return ___pending_exception_8; }
	inline RuntimeObject ** get_address_of_pending_exception_8() { return &___pending_exception_8; }
	inline void set_pending_exception_8(RuntimeObject * value)
	{
		___pending_exception_8 = value;
		Il2CppCodeGenWriteBarrier((&___pending_exception_8), value);
	}

	inline static int32_t get_offset_of_principal_9() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___principal_9)); }
	inline RuntimeObject* get_principal_9() const { return ___principal_9; }
	inline RuntimeObject** get_address_of_principal_9() { return &___principal_9; }
	inline void set_principal_9(RuntimeObject* value)
	{
		___principal_9 = value;
		Il2CppCodeGenWriteBarrier((&___principal_9), value);
	}

	inline static int32_t get_offset_of_principal_version_10() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___principal_version_10)); }
	inline int32_t get_principal_version_10() const { return ___principal_version_10; }
	inline int32_t* get_address_of_principal_version_10() { return &___principal_version_10; }
	inline void set_principal_version_10(int32_t value)
	{
		___principal_version_10 = value;
	}

	inline static int32_t get_offset_of_m_Delegate_12() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___m_Delegate_12)); }
	inline MulticastDelegate_t * get_m_Delegate_12() const { return ___m_Delegate_12; }
	inline MulticastDelegate_t ** get_address_of_m_Delegate_12() { return &___m_Delegate_12; }
	inline void set_m_Delegate_12(MulticastDelegate_t * value)
	{
		___m_Delegate_12 = value;
		Il2CppCodeGenWriteBarrier((&___m_Delegate_12), value);
	}

	inline static int32_t get_offset_of_m_ExecutionContext_13() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___m_ExecutionContext_13)); }
	inline ExecutionContext_t1748372627 * get_m_ExecutionContext_13() const { return ___m_ExecutionContext_13; }
	inline ExecutionContext_t1748372627 ** get_address_of_m_ExecutionContext_13() { return &___m_ExecutionContext_13; }
	inline void set_m_ExecutionContext_13(ExecutionContext_t1748372627 * value)
	{
		___m_ExecutionContext_13 = value;
		Il2CppCodeGenWriteBarrier((&___m_ExecutionContext_13), value);
	}

	inline static int32_t get_offset_of_m_ExecutionContextBelongsToOuterScope_14() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___m_ExecutionContextBelongsToOuterScope_14)); }
	inline bool get_m_ExecutionContextBelongsToOuterScope_14() const { return ___m_ExecutionContextBelongsToOuterScope_14; }
	inline bool* get_address_of_m_ExecutionContextBelongsToOuterScope_14() { return &___m_ExecutionContextBelongsToOuterScope_14; }
	inline void set_m_ExecutionContextBelongsToOuterScope_14(bool value)
	{
		___m_ExecutionContextBelongsToOuterScope_14 = value;
	}
};

struct Thread_t2300836069_StaticFields
{
public:
	// System.LocalDataStoreMgr System.Threading.Thread::s_LocalDataStoreMgr
	LocalDataStoreMgr_t1707895399 * ___s_LocalDataStoreMgr_0;
	// System.Threading.AsyncLocal`1<System.Globalization.CultureInfo> System.Threading.Thread::s_asyncLocalCurrentCulture
	AsyncLocal_1_t2427220165 * ___s_asyncLocalCurrentCulture_4;
	// System.Threading.AsyncLocal`1<System.Globalization.CultureInfo> System.Threading.Thread::s_asyncLocalCurrentUICulture
	AsyncLocal_1_t2427220165 * ___s_asyncLocalCurrentUICulture_5;

public:
	inline static int32_t get_offset_of_s_LocalDataStoreMgr_0() { return static_cast<int32_t>(offsetof(Thread_t2300836069_StaticFields, ___s_LocalDataStoreMgr_0)); }
	inline LocalDataStoreMgr_t1707895399 * get_s_LocalDataStoreMgr_0() const { return ___s_LocalDataStoreMgr_0; }
	inline LocalDataStoreMgr_t1707895399 ** get_address_of_s_LocalDataStoreMgr_0() { return &___s_LocalDataStoreMgr_0; }
	inline void set_s_LocalDataStoreMgr_0(LocalDataStoreMgr_t1707895399 * value)
	{
		___s_LocalDataStoreMgr_0 = value;
		Il2CppCodeGenWriteBarrier((&___s_LocalDataStoreMgr_0), value);
	}

	inline static int32_t get_offset_of_s_asyncLocalCurrentCulture_4() { return static_cast<int32_t>(offsetof(Thread_t2300836069_StaticFields, ___s_asyncLocalCurrentCulture_4)); }
	inline AsyncLocal_1_t2427220165 * get_s_asyncLocalCurrentCulture_4() const { return ___s_asyncLocalCurrentCulture_4; }
	inline AsyncLocal_1_t2427220165 ** get_address_of_s_asyncLocalCurrentCulture_4() { return &___s_asyncLocalCurrentCulture_4; }
	inline void set_s_asyncLocalCurrentCulture_4(AsyncLocal_1_t2427220165 * value)
	{
		___s_asyncLocalCurrentCulture_4 = value;
		Il2CppCodeGenWriteBarrier((&___s_asyncLocalCurrentCulture_4), value);
	}

	inline static int32_t get_offset_of_s_asyncLocalCurrentUICulture_5() { return static_cast<int32_t>(offsetof(Thread_t2300836069_StaticFields, ___s_asyncLocalCurrentUICulture_5)); }
	inline AsyncLocal_1_t2427220165 * get_s_asyncLocalCurrentUICulture_5() const { return ___s_asyncLocalCurrentUICulture_5; }
	inline AsyncLocal_1_t2427220165 ** get_address_of_s_asyncLocalCurrentUICulture_5() { return &___s_asyncLocalCurrentUICulture_5; }
	inline void set_s_asyncLocalCurrentUICulture_5(AsyncLocal_1_t2427220165 * value)
	{
		___s_asyncLocalCurrentUICulture_5 = value;
		Il2CppCodeGenWriteBarrier((&___s_asyncLocalCurrentUICulture_5), value);
	}
};

struct Thread_t2300836069_ThreadStaticFields
{
public:
	// System.LocalDataStoreHolder System.Threading.Thread::s_LocalDataStore
	LocalDataStoreHolder_t2567786569 * ___s_LocalDataStore_1;
	// System.Globalization.CultureInfo System.Threading.Thread::m_CurrentCulture
	CultureInfo_t4157843068 * ___m_CurrentCulture_2;
	// System.Globalization.CultureInfo System.Threading.Thread::m_CurrentUICulture
	CultureInfo_t4157843068 * ___m_CurrentUICulture_3;
	// System.Threading.Thread System.Threading.Thread::current_thread
	Thread_t2300836069 * ___current_thread_11;

public:
	inline static int32_t get_offset_of_s_LocalDataStore_1() { return static_cast<int32_t>(offsetof(Thread_t2300836069_ThreadStaticFields, ___s_LocalDataStore_1)); }
	inline LocalDataStoreHolder_t2567786569 * get_s_LocalDataStore_1() const { return ___s_LocalDataStore_1; }
	inline LocalDataStoreHolder_t2567786569 ** get_address_of_s_LocalDataStore_1() { return &___s_LocalDataStore_1; }
	inline void set_s_LocalDataStore_1(LocalDataStoreHolder_t2567786569 * value)
	{
		___s_LocalDataStore_1 = value;
		Il2CppCodeGenWriteBarrier((&___s_LocalDataStore_1), value);
	}

	inline static int32_t get_offset_of_m_CurrentCulture_2() { return static_cast<int32_t>(offsetof(Thread_t2300836069_ThreadStaticFields, ___m_CurrentCulture_2)); }
	inline CultureInfo_t4157843068 * get_m_CurrentCulture_2() const { return ___m_CurrentCulture_2; }
	inline CultureInfo_t4157843068 ** get_address_of_m_CurrentCulture_2() { return &___m_CurrentCulture_2; }
	inline void set_m_CurrentCulture_2(CultureInfo_t4157843068 * value)
	{
		___m_CurrentCulture_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_CurrentCulture_2), value);
	}

	inline static int32_t get_offset_of_m_CurrentUICulture_3() { return static_cast<int32_t>(offsetof(Thread_t2300836069_ThreadStaticFields, ___m_CurrentUICulture_3)); }
	inline CultureInfo_t4157843068 * get_m_CurrentUICulture_3() const { return ___m_CurrentUICulture_3; }
	inline CultureInfo_t4157843068 ** get_address_of_m_CurrentUICulture_3() { return &___m_CurrentUICulture_3; }
	inline void set_m_CurrentUICulture_3(CultureInfo_t4157843068 * value)
	{
		___m_CurrentUICulture_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_CurrentUICulture_3), value);
	}

	inline static int32_t get_offset_of_current_thread_11() { return static_cast<int32_t>(offsetof(Thread_t2300836069_ThreadStaticFields, ___current_thread_11)); }
	inline Thread_t2300836069 * get_current_thread_11() const { return ___current_thread_11; }
	inline Thread_t2300836069 ** get_address_of_current_thread_11() { return &___current_thread_11; }
	inline void set_current_thread_11(Thread_t2300836069 * value)
	{
		___current_thread_11 = value;
		Il2CppCodeGenWriteBarrier((&___current_thread_11), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // THREAD_T2300836069_H
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
#ifndef UNHANDLEDEXCEPTIONEVENTARGS_T2886101344_H
#define UNHANDLEDEXCEPTIONEVENTARGS_T2886101344_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UnhandledExceptionEventArgs
struct  UnhandledExceptionEventArgs_t2886101344  : public EventArgs_t3591816995
{
public:
	// System.Object System.UnhandledExceptionEventArgs::_Exception
	RuntimeObject * ____Exception_1;
	// System.Boolean System.UnhandledExceptionEventArgs::_IsTerminating
	bool ____IsTerminating_2;

public:
	inline static int32_t get_offset_of__Exception_1() { return static_cast<int32_t>(offsetof(UnhandledExceptionEventArgs_t2886101344, ____Exception_1)); }
	inline RuntimeObject * get__Exception_1() const { return ____Exception_1; }
	inline RuntimeObject ** get_address_of__Exception_1() { return &____Exception_1; }
	inline void set__Exception_1(RuntimeObject * value)
	{
		____Exception_1 = value;
		Il2CppCodeGenWriteBarrier((&____Exception_1), value);
	}

	inline static int32_t get_offset_of__IsTerminating_2() { return static_cast<int32_t>(offsetof(UnhandledExceptionEventArgs_t2886101344, ____IsTerminating_2)); }
	inline bool get__IsTerminating_2() const { return ____IsTerminating_2; }
	inline bool* get_address_of__IsTerminating_2() { return &____IsTerminating_2; }
	inline void set__IsTerminating_2(bool value)
	{
		____IsTerminating_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNHANDLEDEXCEPTIONEVENTARGS_T2886101344_H
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
#ifndef COLOR_T2555686324_H
#define COLOR_T2555686324_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Color
struct  Color_t2555686324 
{
public:
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;

public:
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_t2555686324, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_t2555686324, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_t2555686324, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_t2555686324, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLOR_T2555686324_H
#ifndef COLOR32_T2600501292_H
#define COLOR32_T2600501292_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Color32
struct  Color32_t2600501292 
{
public:
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int32 UnityEngine.Color32::rgba
			int32_t ___rgba_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___rgba_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Byte UnityEngine.Color32::r
			uint8_t ___r_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___r_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___g_2_OffsetPadding[1];
			// System.Byte UnityEngine.Color32::g
			uint8_t ___g_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___g_2_OffsetPadding_forAlignmentOnly[1];
			uint8_t ___g_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___b_3_OffsetPadding[2];
			// System.Byte UnityEngine.Color32::b
			uint8_t ___b_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___b_3_OffsetPadding_forAlignmentOnly[2];
			uint8_t ___b_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___a_4_OffsetPadding[3];
			// System.Byte UnityEngine.Color32::a
			uint8_t ___a_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___a_4_OffsetPadding_forAlignmentOnly[3];
			uint8_t ___a_4_forAlignmentOnly;
		};
	};

public:
	inline static int32_t get_offset_of_rgba_0() { return static_cast<int32_t>(offsetof(Color32_t2600501292, ___rgba_0)); }
	inline int32_t get_rgba_0() const { return ___rgba_0; }
	inline int32_t* get_address_of_rgba_0() { return &___rgba_0; }
	inline void set_rgba_0(int32_t value)
	{
		___rgba_0 = value;
	}

	inline static int32_t get_offset_of_r_1() { return static_cast<int32_t>(offsetof(Color32_t2600501292, ___r_1)); }
	inline uint8_t get_r_1() const { return ___r_1; }
	inline uint8_t* get_address_of_r_1() { return &___r_1; }
	inline void set_r_1(uint8_t value)
	{
		___r_1 = value;
	}

	inline static int32_t get_offset_of_g_2() { return static_cast<int32_t>(offsetof(Color32_t2600501292, ___g_2)); }
	inline uint8_t get_g_2() const { return ___g_2; }
	inline uint8_t* get_address_of_g_2() { return &___g_2; }
	inline void set_g_2(uint8_t value)
	{
		___g_2 = value;
	}

	inline static int32_t get_offset_of_b_3() { return static_cast<int32_t>(offsetof(Color32_t2600501292, ___b_3)); }
	inline uint8_t get_b_3() const { return ___b_3; }
	inline uint8_t* get_address_of_b_3() { return &___b_3; }
	inline void set_b_3(uint8_t value)
	{
		___b_3 = value;
	}

	inline static int32_t get_offset_of_a_4() { return static_cast<int32_t>(offsetof(Color32_t2600501292, ___a_4)); }
	inline uint8_t get_a_4() const { return ___a_4; }
	inline uint8_t* get_address_of_a_4() { return &___a_4; }
	inline void set_a_4(uint8_t value)
	{
		___a_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLOR32_T2600501292_H
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
#ifndef PROPERTYATTRIBUTE_T3677895545_H
#define PROPERTYATTRIBUTE_T3677895545_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PropertyAttribute
struct  PropertyAttribute_t3677895545  : public Attribute_t861562559
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PROPERTYATTRIBUTE_T3677895545_H
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
#ifndef RANGEINT_T2094684618_H
#define RANGEINT_T2094684618_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.RangeInt
struct  RangeInt_t2094684618 
{
public:
	// System.Int32 UnityEngine.RangeInt::start
	int32_t ___start_0;
	// System.Int32 UnityEngine.RangeInt::length
	int32_t ___length_1;

public:
	inline static int32_t get_offset_of_start_0() { return static_cast<int32_t>(offsetof(RangeInt_t2094684618, ___start_0)); }
	inline int32_t get_start_0() const { return ___start_0; }
	inline int32_t* get_address_of_start_0() { return &___start_0; }
	inline void set_start_0(int32_t value)
	{
		___start_0 = value;
	}

	inline static int32_t get_offset_of_length_1() { return static_cast<int32_t>(offsetof(RangeInt_t2094684618, ___length_1)); }
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
#endif // RANGEINT_T2094684618_H
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
#ifndef REQUIRECOMPONENT_T3490506609_H
#define REQUIRECOMPONENT_T3490506609_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.RequireComponent
struct  RequireComponent_t3490506609  : public Attribute_t861562559
{
public:
	// System.Type UnityEngine.RequireComponent::m_Type0
	Type_t * ___m_Type0_0;
	// System.Type UnityEngine.RequireComponent::m_Type1
	Type_t * ___m_Type1_1;
	// System.Type UnityEngine.RequireComponent::m_Type2
	Type_t * ___m_Type2_2;

public:
	inline static int32_t get_offset_of_m_Type0_0() { return static_cast<int32_t>(offsetof(RequireComponent_t3490506609, ___m_Type0_0)); }
	inline Type_t * get_m_Type0_0() const { return ___m_Type0_0; }
	inline Type_t ** get_address_of_m_Type0_0() { return &___m_Type0_0; }
	inline void set_m_Type0_0(Type_t * value)
	{
		___m_Type0_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_Type0_0), value);
	}

	inline static int32_t get_offset_of_m_Type1_1() { return static_cast<int32_t>(offsetof(RequireComponent_t3490506609, ___m_Type1_1)); }
	inline Type_t * get_m_Type1_1() const { return ___m_Type1_1; }
	inline Type_t ** get_address_of_m_Type1_1() { return &___m_Type1_1; }
	inline void set_m_Type1_1(Type_t * value)
	{
		___m_Type1_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_Type1_1), value);
	}

	inline static int32_t get_offset_of_m_Type2_2() { return static_cast<int32_t>(offsetof(RequireComponent_t3490506609, ___m_Type2_2)); }
	inline Type_t * get_m_Type2_2() const { return ___m_Type2_2; }
	inline Type_t ** get_address_of_m_Type2_2() { return &___m_Type2_2; }
	inline void set_m_Type2_2(Type_t * value)
	{
		___m_Type2_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_Type2_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REQUIRECOMPONENT_T3490506609_H
#ifndef SCENE_T2348375561_H
#define SCENE_T2348375561_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SceneManagement.Scene
struct  Scene_t2348375561 
{
public:
	// System.Int32 UnityEngine.SceneManagement.Scene::m_Handle
	int32_t ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(Scene_t2348375561, ___m_Handle_0)); }
	inline int32_t get_m_Handle_0() const { return ___m_Handle_0; }
	inline int32_t* get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(int32_t value)
	{
		___m_Handle_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SCENE_T2348375561_H
#ifndef PRESERVEATTRIBUTE_T1583619344_H
#define PRESERVEATTRIBUTE_T1583619344_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Scripting.PreserveAttribute
struct  PreserveAttribute_t1583619344  : public Attribute_t861562559
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PRESERVEATTRIBUTE_T1583619344_H
#ifndef SELECTIONBASEATTRIBUTE_T3493465804_H
#define SELECTIONBASEATTRIBUTE_T3493465804_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SelectionBaseAttribute
struct  SelectionBaseAttribute_t3493465804  : public Attribute_t861562559
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SELECTIONBASEATTRIBUTE_T3493465804_H
#ifndef HITINFO_T3229609740_H
#define HITINFO_T3229609740_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SendMouseEvents/HitInfo
struct  HitInfo_t3229609740 
{
public:
	// UnityEngine.GameObject UnityEngine.SendMouseEvents/HitInfo::target
	GameObject_t1113636619 * ___target_0;
	// UnityEngine.Camera UnityEngine.SendMouseEvents/HitInfo::camera
	Camera_t4157153871 * ___camera_1;

public:
	inline static int32_t get_offset_of_target_0() { return static_cast<int32_t>(offsetof(HitInfo_t3229609740, ___target_0)); }
	inline GameObject_t1113636619 * get_target_0() const { return ___target_0; }
	inline GameObject_t1113636619 ** get_address_of_target_0() { return &___target_0; }
	inline void set_target_0(GameObject_t1113636619 * value)
	{
		___target_0 = value;
		Il2CppCodeGenWriteBarrier((&___target_0), value);
	}

	inline static int32_t get_offset_of_camera_1() { return static_cast<int32_t>(offsetof(HitInfo_t3229609740, ___camera_1)); }
	inline Camera_t4157153871 * get_camera_1() const { return ___camera_1; }
	inline Camera_t4157153871 ** get_address_of_camera_1() { return &___camera_1; }
	inline void set_camera_1(Camera_t4157153871 * value)
	{
		___camera_1 = value;
		Il2CppCodeGenWriteBarrier((&___camera_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.SendMouseEvents/HitInfo
struct HitInfo_t3229609740_marshaled_pinvoke
{
	GameObject_t1113636619 * ___target_0;
	Camera_t4157153871 * ___camera_1;
};
// Native definition for COM marshalling of UnityEngine.SendMouseEvents/HitInfo
struct HitInfo_t3229609740_marshaled_com
{
	GameObject_t1113636619 * ___target_0;
	Camera_t4157153871 * ___camera_1;
};
#endif // HITINFO_T3229609740_H
#ifndef FORMERLYSERIALIZEDASATTRIBUTE_T2859083114_H
#define FORMERLYSERIALIZEDASATTRIBUTE_T2859083114_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Serialization.FormerlySerializedAsAttribute
struct  FormerlySerializedAsAttribute_t2859083114  : public Attribute_t861562559
{
public:
	// System.String UnityEngine.Serialization.FormerlySerializedAsAttribute::m_oldName
	String_t* ___m_oldName_0;

public:
	inline static int32_t get_offset_of_m_oldName_0() { return static_cast<int32_t>(offsetof(FormerlySerializedAsAttribute_t2859083114, ___m_oldName_0)); }
	inline String_t* get_m_oldName_0() const { return ___m_oldName_0; }
	inline String_t** get_address_of_m_oldName_0() { return &___m_oldName_0; }
	inline void set_m_oldName_0(String_t* value)
	{
		___m_oldName_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_oldName_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FORMERLYSERIALIZEDASATTRIBUTE_T2859083114_H
#ifndef SERIALIZEFIELD_T3286833614_H
#define SERIALIZEFIELD_T3286833614_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SerializeField
struct  SerializeField_t3286833614  : public Attribute_t861562559
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SERIALIZEFIELD_T3286833614_H
#ifndef SERIALIZEPRIVATEVARIABLES_T3872960625_H
#define SERIALIZEPRIVATEVARIABLES_T3872960625_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SerializePrivateVariables
struct  SerializePrivateVariables_t3872960625  : public Attribute_t861562559
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SERIALIZEPRIVATEVARIABLES_T3872960625_H
#ifndef SORTINGLAYER_T2251519173_H
#define SORTINGLAYER_T2251519173_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SortingLayer
struct  SortingLayer_t2251519173 
{
public:
	// System.Int32 UnityEngine.SortingLayer::m_Id
	int32_t ___m_Id_0;

public:
	inline static int32_t get_offset_of_m_Id_0() { return static_cast<int32_t>(offsetof(SortingLayer_t2251519173, ___m_Id_0)); }
	inline int32_t get_m_Id_0() const { return ___m_Id_0; }
	inline int32_t* get_address_of_m_Id_0() { return &___m_Id_0; }
	inline void set_m_Id_0(int32_t value)
	{
		___m_Id_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SORTINGLAYER_T2251519173_H
#ifndef TOUCHSCREENKEYBOARD_INTERNALCONSTRUCTORHELPERARGUMENTS_T1462448236_H
#define TOUCHSCREENKEYBOARD_INTERNALCONSTRUCTORHELPERARGUMENTS_T1462448236_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.TouchScreenKeyboard_InternalConstructorHelperArguments
struct  TouchScreenKeyboard_InternalConstructorHelperArguments_t1462448236 
{
public:
	// System.UInt32 UnityEngine.TouchScreenKeyboard_InternalConstructorHelperArguments::keyboardType
	uint32_t ___keyboardType_0;
	// System.UInt32 UnityEngine.TouchScreenKeyboard_InternalConstructorHelperArguments::autocorrection
	uint32_t ___autocorrection_1;
	// System.UInt32 UnityEngine.TouchScreenKeyboard_InternalConstructorHelperArguments::multiline
	uint32_t ___multiline_2;
	// System.UInt32 UnityEngine.TouchScreenKeyboard_InternalConstructorHelperArguments::secure
	uint32_t ___secure_3;
	// System.UInt32 UnityEngine.TouchScreenKeyboard_InternalConstructorHelperArguments::alert
	uint32_t ___alert_4;
	// System.Int32 UnityEngine.TouchScreenKeyboard_InternalConstructorHelperArguments::characterLimit
	int32_t ___characterLimit_5;

public:
	inline static int32_t get_offset_of_keyboardType_0() { return static_cast<int32_t>(offsetof(TouchScreenKeyboard_InternalConstructorHelperArguments_t1462448236, ___keyboardType_0)); }
	inline uint32_t get_keyboardType_0() const { return ___keyboardType_0; }
	inline uint32_t* get_address_of_keyboardType_0() { return &___keyboardType_0; }
	inline void set_keyboardType_0(uint32_t value)
	{
		___keyboardType_0 = value;
	}

	inline static int32_t get_offset_of_autocorrection_1() { return static_cast<int32_t>(offsetof(TouchScreenKeyboard_InternalConstructorHelperArguments_t1462448236, ___autocorrection_1)); }
	inline uint32_t get_autocorrection_1() const { return ___autocorrection_1; }
	inline uint32_t* get_address_of_autocorrection_1() { return &___autocorrection_1; }
	inline void set_autocorrection_1(uint32_t value)
	{
		___autocorrection_1 = value;
	}

	inline static int32_t get_offset_of_multiline_2() { return static_cast<int32_t>(offsetof(TouchScreenKeyboard_InternalConstructorHelperArguments_t1462448236, ___multiline_2)); }
	inline uint32_t get_multiline_2() const { return ___multiline_2; }
	inline uint32_t* get_address_of_multiline_2() { return &___multiline_2; }
	inline void set_multiline_2(uint32_t value)
	{
		___multiline_2 = value;
	}

	inline static int32_t get_offset_of_secure_3() { return static_cast<int32_t>(offsetof(TouchScreenKeyboard_InternalConstructorHelperArguments_t1462448236, ___secure_3)); }
	inline uint32_t get_secure_3() const { return ___secure_3; }
	inline uint32_t* get_address_of_secure_3() { return &___secure_3; }
	inline void set_secure_3(uint32_t value)
	{
		___secure_3 = value;
	}

	inline static int32_t get_offset_of_alert_4() { return static_cast<int32_t>(offsetof(TouchScreenKeyboard_InternalConstructorHelperArguments_t1462448236, ___alert_4)); }
	inline uint32_t get_alert_4() const { return ___alert_4; }
	inline uint32_t* get_address_of_alert_4() { return &___alert_4; }
	inline void set_alert_4(uint32_t value)
	{
		___alert_4 = value;
	}

	inline static int32_t get_offset_of_characterLimit_5() { return static_cast<int32_t>(offsetof(TouchScreenKeyboard_InternalConstructorHelperArguments_t1462448236, ___characterLimit_5)); }
	inline int32_t get_characterLimit_5() const { return ___characterLimit_5; }
	inline int32_t* get_address_of_characterLimit_5() { return &___characterLimit_5; }
	inline void set_characterLimit_5(int32_t value)
	{
		___characterLimit_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TOUCHSCREENKEYBOARD_INTERNALCONSTRUCTORHELPERARGUMENTS_T1462448236_H
#ifndef UNITYAPICOMPATIBILITYVERSIONATTRIBUTE_T3842027601_H
#define UNITYAPICOMPATIBILITYVERSIONATTRIBUTE_T3842027601_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UnityAPICompatibilityVersionAttribute
struct  UnityAPICompatibilityVersionAttribute_t3842027601  : public Attribute_t861562559
{
public:
	// System.String UnityEngine.UnityAPICompatibilityVersionAttribute::_version
	String_t* ____version_0;

public:
	inline static int32_t get_offset_of__version_0() { return static_cast<int32_t>(offsetof(UnityAPICompatibilityVersionAttribute_t3842027601, ____version_0)); }
	inline String_t* get__version_0() const { return ____version_0; }
	inline String_t** get_address_of__version_0() { return &____version_0; }
	inline void set__version_0(String_t* value)
	{
		____version_0 = value;
		Il2CppCodeGenWriteBarrier((&____version_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYAPICOMPATIBILITYVERSIONATTRIBUTE_T3842027601_H
#ifndef UNITYEXCEPTION_T3598173660_H
#define UNITYEXCEPTION_T3598173660_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UnityException
struct  UnityException_t3598173660  : public Exception_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYEXCEPTION_T3598173660_H
#ifndef UNITYSYNCHRONIZATIONCONTEXT_T1887453786_H
#define UNITYSYNCHRONIZATIONCONTEXT_T1887453786_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UnitySynchronizationContext
struct  UnitySynchronizationContext_t1887453786  : public SynchronizationContext_t2326897723
{
public:
	// System.Collections.Generic.Queue`1<UnityEngine.UnitySynchronizationContext/WorkRequest> UnityEngine.UnitySynchronizationContext::m_AsyncWorkQueue
	Queue_1_t1200778106 * ___m_AsyncWorkQueue_0;
	// System.Int32 UnityEngine.UnitySynchronizationContext::m_MainThreadID
	int32_t ___m_MainThreadID_1;

public:
	inline static int32_t get_offset_of_m_AsyncWorkQueue_0() { return static_cast<int32_t>(offsetof(UnitySynchronizationContext_t1887453786, ___m_AsyncWorkQueue_0)); }
	inline Queue_1_t1200778106 * get_m_AsyncWorkQueue_0() const { return ___m_AsyncWorkQueue_0; }
	inline Queue_1_t1200778106 ** get_address_of_m_AsyncWorkQueue_0() { return &___m_AsyncWorkQueue_0; }
	inline void set_m_AsyncWorkQueue_0(Queue_1_t1200778106 * value)
	{
		___m_AsyncWorkQueue_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_AsyncWorkQueue_0), value);
	}

	inline static int32_t get_offset_of_m_MainThreadID_1() { return static_cast<int32_t>(offsetof(UnitySynchronizationContext_t1887453786, ___m_MainThreadID_1)); }
	inline int32_t get_m_MainThreadID_1() const { return ___m_MainThreadID_1; }
	inline int32_t* get_address_of_m_MainThreadID_1() { return &___m_MainThreadID_1; }
	inline void set_m_MainThreadID_1(int32_t value)
	{
		___m_MainThreadID_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYSYNCHRONIZATIONCONTEXT_T1887453786_H
#ifndef WORKREQUEST_T1354518612_H
#define WORKREQUEST_T1354518612_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UnitySynchronizationContext/WorkRequest
struct  WorkRequest_t1354518612 
{
public:
	// System.Threading.SendOrPostCallback UnityEngine.UnitySynchronizationContext/WorkRequest::m_DelagateCallback
	SendOrPostCallback_t2750080073 * ___m_DelagateCallback_0;
	// System.Object UnityEngine.UnitySynchronizationContext/WorkRequest::m_DelagateState
	RuntimeObject * ___m_DelagateState_1;
	// System.Threading.ManualResetEvent UnityEngine.UnitySynchronizationContext/WorkRequest::m_WaitHandle
	ManualResetEvent_t451242010 * ___m_WaitHandle_2;

public:
	inline static int32_t get_offset_of_m_DelagateCallback_0() { return static_cast<int32_t>(offsetof(WorkRequest_t1354518612, ___m_DelagateCallback_0)); }
	inline SendOrPostCallback_t2750080073 * get_m_DelagateCallback_0() const { return ___m_DelagateCallback_0; }
	inline SendOrPostCallback_t2750080073 ** get_address_of_m_DelagateCallback_0() { return &___m_DelagateCallback_0; }
	inline void set_m_DelagateCallback_0(SendOrPostCallback_t2750080073 * value)
	{
		___m_DelagateCallback_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_DelagateCallback_0), value);
	}

	inline static int32_t get_offset_of_m_DelagateState_1() { return static_cast<int32_t>(offsetof(WorkRequest_t1354518612, ___m_DelagateState_1)); }
	inline RuntimeObject * get_m_DelagateState_1() const { return ___m_DelagateState_1; }
	inline RuntimeObject ** get_address_of_m_DelagateState_1() { return &___m_DelagateState_1; }
	inline void set_m_DelagateState_1(RuntimeObject * value)
	{
		___m_DelagateState_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_DelagateState_1), value);
	}

	inline static int32_t get_offset_of_m_WaitHandle_2() { return static_cast<int32_t>(offsetof(WorkRequest_t1354518612, ___m_WaitHandle_2)); }
	inline ManualResetEvent_t451242010 * get_m_WaitHandle_2() const { return ___m_WaitHandle_2; }
	inline ManualResetEvent_t451242010 ** get_address_of_m_WaitHandle_2() { return &___m_WaitHandle_2; }
	inline void set_m_WaitHandle_2(ManualResetEvent_t451242010 * value)
	{
		___m_WaitHandle_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_WaitHandle_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.UnitySynchronizationContext/WorkRequest
struct WorkRequest_t1354518612_marshaled_pinvoke
{
	Il2CppMethodPointer ___m_DelagateCallback_0;
	Il2CppIUnknown* ___m_DelagateState_1;
	ManualResetEvent_t451242010 * ___m_WaitHandle_2;
};
// Native definition for COM marshalling of UnityEngine.UnitySynchronizationContext/WorkRequest
struct WorkRequest_t1354518612_marshaled_com
{
	Il2CppMethodPointer ___m_DelagateCallback_0;
	Il2CppIUnknown* ___m_DelagateState_1;
	ManualResetEvent_t451242010 * ___m_WaitHandle_2;
};
#endif // WORKREQUEST_T1354518612_H
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
#ifndef WAITFORENDOFFRAME_T1314943911_H
#define WAITFORENDOFFRAME_T1314943911_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.WaitForEndOfFrame
struct  WaitForEndOfFrame_t1314943911  : public YieldInstruction_t403091072
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WAITFORENDOFFRAME_T1314943911_H
#ifndef WAITFORFIXEDUPDATE_T1634918743_H
#define WAITFORFIXEDUPDATE_T1634918743_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.WaitForFixedUpdate
struct  WaitForFixedUpdate_t1634918743  : public YieldInstruction_t403091072
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WAITFORFIXEDUPDATE_T1634918743_H
#ifndef WAITFORSECONDS_T1699091251_H
#define WAITFORSECONDS_T1699091251_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.WaitForSeconds
struct  WaitForSeconds_t1699091251  : public YieldInstruction_t403091072
{
public:
	// System.Single UnityEngine.WaitForSeconds::m_Seconds
	float ___m_Seconds_0;

public:
	inline static int32_t get_offset_of_m_Seconds_0() { return static_cast<int32_t>(offsetof(WaitForSeconds_t1699091251, ___m_Seconds_0)); }
	inline float get_m_Seconds_0() const { return ___m_Seconds_0; }
	inline float* get_address_of_m_Seconds_0() { return &___m_Seconds_0; }
	inline void set_m_Seconds_0(float value)
	{
		___m_Seconds_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_t1699091251_marshaled_pinvoke : public YieldInstruction_t403091072_marshaled_pinvoke
{
	float ___m_Seconds_0;
};
// Native definition for COM marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_t1699091251_marshaled_com : public YieldInstruction_t403091072_marshaled_com
{
	float ___m_Seconds_0;
};
#endif // WAITFORSECONDS_T1699091251_H
#ifndef WAITFORSECONDSREALTIME_T189548121_H
#define WAITFORSECONDSREALTIME_T189548121_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.WaitForSecondsRealtime
struct  WaitForSecondsRealtime_t189548121  : public CustomYieldInstruction_t1895667560
{
public:
	// System.Single UnityEngine.WaitForSecondsRealtime::waitTime
	float ___waitTime_0;

public:
	inline static int32_t get_offset_of_waitTime_0() { return static_cast<int32_t>(offsetof(WaitForSecondsRealtime_t189548121, ___waitTime_0)); }
	inline float get_waitTime_0() const { return ___waitTime_0; }
	inline float* get_address_of_waitTime_0() { return &___waitTime_0; }
	inline void set_waitTime_0(float value)
	{
		___waitTime_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WAITFORSECONDSREALTIME_T189548121_H
#ifndef GENERICSTACK_T1310059385_H
#define GENERICSTACK_T1310059385_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngineInternal.GenericStack
struct  GenericStack_t1310059385  : public Stack_t2329662280
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GENERICSTACK_T1310059385_H
#ifndef TYPEINFERENCERULEATTRIBUTE_T254868554_H
#define TYPEINFERENCERULEATTRIBUTE_T254868554_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngineInternal.TypeInferenceRuleAttribute
struct  TypeInferenceRuleAttribute_t254868554  : public Attribute_t861562559
{
public:
	// System.String UnityEngineInternal.TypeInferenceRuleAttribute::_rule
	String_t* ____rule_0;

public:
	inline static int32_t get_offset_of__rule_0() { return static_cast<int32_t>(offsetof(TypeInferenceRuleAttribute_t254868554, ____rule_0)); }
	inline String_t* get__rule_0() const { return ____rule_0; }
	inline String_t** get_address_of__rule_0() { return &____rule_0; }
	inline void set__rule_0(String_t* value)
	{
		____rule_0 = value;
		Il2CppCodeGenWriteBarrier((&____rule_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPEINFERENCERULEATTRIBUTE_T254868554_H
#ifndef ARGUMENTEXCEPTION_T132251570_H
#define ARGUMENTEXCEPTION_T132251570_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ArgumentException
struct  ArgumentException_t132251570  : public SystemException_t176217640
{
public:
	// System.String System.ArgumentException::m_paramName
	String_t* ___m_paramName_17;

public:
	inline static int32_t get_offset_of_m_paramName_17() { return static_cast<int32_t>(offsetof(ArgumentException_t132251570, ___m_paramName_17)); }
	inline String_t* get_m_paramName_17() const { return ___m_paramName_17; }
	inline String_t** get_address_of_m_paramName_17() { return &___m_paramName_17; }
	inline void set_m_paramName_17(String_t* value)
	{
		___m_paramName_17 = value;
		Il2CppCodeGenWriteBarrier((&___m_paramName_17), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARGUMENTEXCEPTION_T132251570_H
#ifndef DATETIMEKIND_T3468814247_H
#define DATETIMEKIND_T3468814247_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.DateTimeKind
struct  DateTimeKind_t3468814247 
{
public:
	// System.Int32 System.DateTimeKind::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DateTimeKind_t3468814247, ___value___2)); }
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
#endif // DATETIMEKIND_T3468814247_H
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
#ifndef STREAMINGCONTEXTSTATES_T3580100459_H
#define STREAMINGCONTEXTSTATES_T3580100459_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.StreamingContextStates
struct  StreamingContextStates_t3580100459 
{
public:
	// System.Int32 System.Runtime.Serialization.StreamingContextStates::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(StreamingContextStates_t3580100459, ___value___2)); }
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
#endif // STREAMINGCONTEXTSTATES_T3580100459_H
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
#ifndef PRINCIPALPOLICY_T1761212333_H
#define PRINCIPALPOLICY_T1761212333_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Principal.PrincipalPolicy
struct  PrincipalPolicy_t1761212333 
{
public:
	// System.Int32 System.Security.Principal.PrincipalPolicy::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PrincipalPolicy_t1761212333, ___value___2)); }
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
#endif // PRINCIPALPOLICY_T1761212333_H
#ifndef WAITHANDLE_T1743403487_H
#define WAITHANDLE_T1743403487_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.WaitHandle
struct  WaitHandle_t1743403487  : public MarshalByRefObject_t2760389100
{
public:
	// System.IntPtr System.Threading.WaitHandle::waitHandle
	intptr_t ___waitHandle_3;
	// Microsoft.Win32.SafeHandles.SafeWaitHandle modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.WaitHandle::safeWaitHandle
	SafeWaitHandle_t1972936122 * ___safeWaitHandle_4;
	// System.Boolean System.Threading.WaitHandle::hasThreadAffinity
	bool ___hasThreadAffinity_5;

public:
	inline static int32_t get_offset_of_waitHandle_3() { return static_cast<int32_t>(offsetof(WaitHandle_t1743403487, ___waitHandle_3)); }
	inline intptr_t get_waitHandle_3() const { return ___waitHandle_3; }
	inline intptr_t* get_address_of_waitHandle_3() { return &___waitHandle_3; }
	inline void set_waitHandle_3(intptr_t value)
	{
		___waitHandle_3 = value;
	}

	inline static int32_t get_offset_of_safeWaitHandle_4() { return static_cast<int32_t>(offsetof(WaitHandle_t1743403487, ___safeWaitHandle_4)); }
	inline SafeWaitHandle_t1972936122 * get_safeWaitHandle_4() const { return ___safeWaitHandle_4; }
	inline SafeWaitHandle_t1972936122 ** get_address_of_safeWaitHandle_4() { return &___safeWaitHandle_4; }
	inline void set_safeWaitHandle_4(SafeWaitHandle_t1972936122 * value)
	{
		___safeWaitHandle_4 = value;
		Il2CppCodeGenWriteBarrier((&___safeWaitHandle_4), value);
	}

	inline static int32_t get_offset_of_hasThreadAffinity_5() { return static_cast<int32_t>(offsetof(WaitHandle_t1743403487, ___hasThreadAffinity_5)); }
	inline bool get_hasThreadAffinity_5() const { return ___hasThreadAffinity_5; }
	inline bool* get_address_of_hasThreadAffinity_5() { return &___hasThreadAffinity_5; }
	inline void set_hasThreadAffinity_5(bool value)
	{
		___hasThreadAffinity_5 = value;
	}
};

struct WaitHandle_t1743403487_StaticFields
{
public:
	// System.IntPtr System.Threading.WaitHandle::InvalidHandle
	intptr_t ___InvalidHandle_10;

public:
	inline static int32_t get_offset_of_InvalidHandle_10() { return static_cast<int32_t>(offsetof(WaitHandle_t1743403487_StaticFields, ___InvalidHandle_10)); }
	inline intptr_t get_InvalidHandle_10() const { return ___InvalidHandle_10; }
	inline intptr_t* get_address_of_InvalidHandle_10() { return &___InvalidHandle_10; }
	inline void set_InvalidHandle_10(intptr_t value)
	{
		___InvalidHandle_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Threading.WaitHandle
struct WaitHandle_t1743403487_marshaled_pinvoke : public MarshalByRefObject_t2760389100_marshaled_pinvoke
{
	intptr_t ___waitHandle_3;
	SafeWaitHandle_t1972936122 * ___safeWaitHandle_4;
	int32_t ___hasThreadAffinity_5;
};
// Native definition for COM marshalling of System.Threading.WaitHandle
struct WaitHandle_t1743403487_marshaled_com : public MarshalByRefObject_t2760389100_marshaled_com
{
	intptr_t ___waitHandle_3;
	SafeWaitHandle_t1972936122 * ___safeWaitHandle_4;
	int32_t ___hasThreadAffinity_5;
};
#endif // WAITHANDLE_T1743403487_H
#ifndef ASYNCOPERATION_T1445031843_H
#define ASYNCOPERATION_T1445031843_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AsyncOperation
struct  AsyncOperation_t1445031843  : public YieldInstruction_t403091072
{
public:
	// System.IntPtr UnityEngine.AsyncOperation::m_Ptr
	intptr_t ___m_Ptr_0;
	// System.Action`1<UnityEngine.AsyncOperation> UnityEngine.AsyncOperation::m_completeCallback
	Action_1_t1617499438 * ___m_completeCallback_1;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(AsyncOperation_t1445031843, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}

	inline static int32_t get_offset_of_m_completeCallback_1() { return static_cast<int32_t>(offsetof(AsyncOperation_t1445031843, ___m_completeCallback_1)); }
	inline Action_1_t1617499438 * get_m_completeCallback_1() const { return ___m_completeCallback_1; }
	inline Action_1_t1617499438 ** get_address_of_m_completeCallback_1() { return &___m_completeCallback_1; }
	inline void set_m_completeCallback_1(Action_1_t1617499438 * value)
	{
		___m_completeCallback_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_completeCallback_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.AsyncOperation
struct AsyncOperation_t1445031843_marshaled_pinvoke : public YieldInstruction_t403091072_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	Il2CppMethodPointer ___m_completeCallback_1;
};
// Native definition for COM marshalling of UnityEngine.AsyncOperation
struct AsyncOperation_t1445031843_marshaled_com : public YieldInstruction_t403091072_marshaled_com
{
	intptr_t ___m_Ptr_0;
	Il2CppMethodPointer ___m_completeCallback_1;
};
#endif // ASYNCOPERATION_T1445031843_H
#ifndef CAMERACLEARFLAGS_T2362496923_H
#define CAMERACLEARFLAGS_T2362496923_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.CameraClearFlags
struct  CameraClearFlags_t2362496923 
{
public:
	// System.Int32 UnityEngine.CameraClearFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CameraClearFlags_t2362496923, ___value___2)); }
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
#endif // CAMERACLEARFLAGS_T2362496923_H
#ifndef DISPLAY_T1387065949_H
#define DISPLAY_T1387065949_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Display
struct  Display_t1387065949  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Display::nativeDisplay
	intptr_t ___nativeDisplay_0;

public:
	inline static int32_t get_offset_of_nativeDisplay_0() { return static_cast<int32_t>(offsetof(Display_t1387065949, ___nativeDisplay_0)); }
	inline intptr_t get_nativeDisplay_0() const { return ___nativeDisplay_0; }
	inline intptr_t* get_address_of_nativeDisplay_0() { return &___nativeDisplay_0; }
	inline void set_nativeDisplay_0(intptr_t value)
	{
		___nativeDisplay_0 = value;
	}
};

struct Display_t1387065949_StaticFields
{
public:
	// UnityEngine.Display[] UnityEngine.Display::displays
	DisplayU5BU5D_t103034768* ___displays_1;
	// UnityEngine.Display UnityEngine.Display::_mainDisplay
	Display_t1387065949 * ____mainDisplay_2;
	// UnityEngine.Display/DisplaysUpdatedDelegate UnityEngine.Display::onDisplaysUpdated
	DisplaysUpdatedDelegate_t51287044 * ___onDisplaysUpdated_3;

public:
	inline static int32_t get_offset_of_displays_1() { return static_cast<int32_t>(offsetof(Display_t1387065949_StaticFields, ___displays_1)); }
	inline DisplayU5BU5D_t103034768* get_displays_1() const { return ___displays_1; }
	inline DisplayU5BU5D_t103034768** get_address_of_displays_1() { return &___displays_1; }
	inline void set_displays_1(DisplayU5BU5D_t103034768* value)
	{
		___displays_1 = value;
		Il2CppCodeGenWriteBarrier((&___displays_1), value);
	}

	inline static int32_t get_offset_of__mainDisplay_2() { return static_cast<int32_t>(offsetof(Display_t1387065949_StaticFields, ____mainDisplay_2)); }
	inline Display_t1387065949 * get__mainDisplay_2() const { return ____mainDisplay_2; }
	inline Display_t1387065949 ** get_address_of__mainDisplay_2() { return &____mainDisplay_2; }
	inline void set__mainDisplay_2(Display_t1387065949 * value)
	{
		____mainDisplay_2 = value;
		Il2CppCodeGenWriteBarrier((&____mainDisplay_2), value);
	}

	inline static int32_t get_offset_of_onDisplaysUpdated_3() { return static_cast<int32_t>(offsetof(Display_t1387065949_StaticFields, ___onDisplaysUpdated_3)); }
	inline DisplaysUpdatedDelegate_t51287044 * get_onDisplaysUpdated_3() const { return ___onDisplaysUpdated_3; }
	inline DisplaysUpdatedDelegate_t51287044 ** get_address_of_onDisplaysUpdated_3() { return &___onDisplaysUpdated_3; }
	inline void set_onDisplaysUpdated_3(DisplaysUpdatedDelegate_t51287044 * value)
	{
		___onDisplaysUpdated_3 = value;
		Il2CppCodeGenWriteBarrier((&___onDisplaysUpdated_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DISPLAY_T1387065949_H
#ifndef ENABLEDORIENTATION_T1917772005_H
#define ENABLEDORIENTATION_T1917772005_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.EnabledOrientation
struct  EnabledOrientation_t1917772005 
{
public:
	// System.Int32 UnityEngine.EnabledOrientation::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(EnabledOrientation_t1917772005, ___value___2)); }
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
#endif // ENABLEDORIENTATION_T1917772005_H
#ifndef FORMATUSAGE_T3480559675_H
#define FORMATUSAGE_T3480559675_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.Rendering.FormatUsage
struct  FormatUsage_t3480559675 
{
public:
	// System.Int32 UnityEngine.Experimental.Rendering.FormatUsage::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FormatUsage_t3480559675, ___value___2)); }
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
#endif // FORMATUSAGE_T3480559675_H
#ifndef GRAPHICSFORMAT_T3787950389_H
#define GRAPHICSFORMAT_T3787950389_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.Rendering.GraphicsFormat
struct  GraphicsFormat_t3787950389 
{
public:
	// System.Int32 UnityEngine.Experimental.Rendering.GraphicsFormat::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(GraphicsFormat_t3787950389, ___value___2)); }
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
#endif // GRAPHICSFORMAT_T3787950389_H
#ifndef TEXTURECREATIONFLAGS_T344152058_H
#define TEXTURECREATIONFLAGS_T344152058_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.Rendering.TextureCreationFlags
struct  TextureCreationFlags_t344152058 
{
public:
	// System.Int32 UnityEngine.Experimental.Rendering.TextureCreationFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TextureCreationFlags_t344152058, ___value___2)); }
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
#endif // TEXTURECREATIONFLAGS_T344152058_H
#ifndef FILTERMODE_T3761284007_H
#define FILTERMODE_T3761284007_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.FilterMode
struct  FilterMode_t3761284007 
{
public:
	// System.Int32 UnityEngine.FilterMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FilterMode_t3761284007, ___value___2)); }
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
#endif // FILTERMODE_T3761284007_H
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
#ifndef OPERATINGSYSTEMFAMILY_T1868066375_H
#define OPERATINGSYSTEMFAMILY_T1868066375_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.OperatingSystemFamily
struct  OperatingSystemFamily_t1868066375 
{
public:
	// System.Int32 UnityEngine.OperatingSystemFamily::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(OperatingSystemFamily_t1868066375, ___value___2)); }
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
#endif // OPERATINGSYSTEMFAMILY_T1868066375_H
#ifndef RAY_T3785851493_H
#define RAY_T3785851493_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Ray
struct  Ray_t3785851493 
{
public:
	// UnityEngine.Vector3 UnityEngine.Ray::m_Origin
	Vector3_t3722313464  ___m_Origin_0;
	// UnityEngine.Vector3 UnityEngine.Ray::m_Direction
	Vector3_t3722313464  ___m_Direction_1;

public:
	inline static int32_t get_offset_of_m_Origin_0() { return static_cast<int32_t>(offsetof(Ray_t3785851493, ___m_Origin_0)); }
	inline Vector3_t3722313464  get_m_Origin_0() const { return ___m_Origin_0; }
	inline Vector3_t3722313464 * get_address_of_m_Origin_0() { return &___m_Origin_0; }
	inline void set_m_Origin_0(Vector3_t3722313464  value)
	{
		___m_Origin_0 = value;
	}

	inline static int32_t get_offset_of_m_Direction_1() { return static_cast<int32_t>(offsetof(Ray_t3785851493, ___m_Direction_1)); }
	inline Vector3_t3722313464  get_m_Direction_1() const { return ___m_Direction_1; }
	inline Vector3_t3722313464 * get_address_of_m_Direction_1() { return &___m_Direction_1; }
	inline void set_m_Direction_1(Vector3_t3722313464  value)
	{
		___m_Direction_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RAY_T3785851493_H
#ifndef COLORWRITEMASK_T4282245599_H
#define COLORWRITEMASK_T4282245599_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Rendering.ColorWriteMask
struct  ColorWriteMask_t4282245599 
{
public:
	// System.Int32 UnityEngine.Rendering.ColorWriteMask::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ColorWriteMask_t4282245599, ___value___2)); }
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
#endif // COLORWRITEMASK_T4282245599_H
#ifndef COMPAREFUNCTION_T2171731108_H
#define COMPAREFUNCTION_T2171731108_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Rendering.CompareFunction
struct  CompareFunction_t2171731108 
{
public:
	// System.Int32 UnityEngine.Rendering.CompareFunction::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CompareFunction_t2171731108, ___value___2)); }
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
#endif // COMPAREFUNCTION_T2171731108_H
#ifndef SHADOWSAMPLINGMODE_T838715745_H
#define SHADOWSAMPLINGMODE_T838715745_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Rendering.ShadowSamplingMode
struct  ShadowSamplingMode_t838715745 
{
public:
	// System.Int32 UnityEngine.Rendering.ShadowSamplingMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ShadowSamplingMode_t838715745, ___value___2)); }
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
#endif // SHADOWSAMPLINGMODE_T838715745_H
#ifndef STENCILOP_T3446174106_H
#define STENCILOP_T3446174106_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Rendering.StencilOp
struct  StencilOp_t3446174106 
{
public:
	// System.Int32 UnityEngine.Rendering.StencilOp::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(StencilOp_t3446174106, ___value___2)); }
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
#endif // STENCILOP_T3446174106_H
#ifndef TEXTUREDIMENSION_T3933106086_H
#define TEXTUREDIMENSION_T3933106086_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Rendering.TextureDimension
struct  TextureDimension_t3933106086 
{
public:
	// System.Int32 UnityEngine.Rendering.TextureDimension::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TextureDimension_t3933106086, ___value___2)); }
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
#endif // TEXTUREDIMENSION_T3933106086_H
#ifndef RUNTIMEINITIALIZELOADTYPE_T378148151_H
#define RUNTIMEINITIALIZELOADTYPE_T378148151_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.RuntimeInitializeLoadType
struct  RuntimeInitializeLoadType_t378148151 
{
public:
	// System.Int32 UnityEngine.RuntimeInitializeLoadType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(RuntimeInitializeLoadType_t378148151, ___value___2)); }
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
#endif // RUNTIMEINITIALIZELOADTYPE_T378148151_H
#ifndef RUNTIMEPLATFORM_T4159857903_H
#define RUNTIMEPLATFORM_T4159857903_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.RuntimePlatform
struct  RuntimePlatform_t4159857903 
{
public:
	// System.Int32 UnityEngine.RuntimePlatform::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(RuntimePlatform_t4159857903, ___value___2)); }
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
#endif // RUNTIMEPLATFORM_T4159857903_H
#ifndef LOADSCENEMODE_T3251202195_H
#define LOADSCENEMODE_T3251202195_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SceneManagement.LoadSceneMode
struct  LoadSceneMode_t3251202195 
{
public:
	// System.Int32 UnityEngine.SceneManagement.LoadSceneMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(LoadSceneMode_t3251202195, ___value___2)); }
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
#endif // LOADSCENEMODE_T3251202195_H
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
#ifndef SENDMESSAGEOPTIONS_T3580193095_H
#define SENDMESSAGEOPTIONS_T3580193095_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SendMessageOptions
struct  SendMessageOptions_t3580193095 
{
public:
	// System.Int32 UnityEngine.SendMessageOptions::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SendMessageOptions_t3580193095, ___value___2)); }
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
#endif // SENDMESSAGEOPTIONS_T3580193095_H
#ifndef SPACEATTRIBUTE_T3956583069_H
#define SPACEATTRIBUTE_T3956583069_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SpaceAttribute
struct  SpaceAttribute_t3956583069  : public PropertyAttribute_t3677895545
{
public:
	// System.Single UnityEngine.SpaceAttribute::height
	float ___height_0;

public:
	inline static int32_t get_offset_of_height_0() { return static_cast<int32_t>(offsetof(SpaceAttribute_t3956583069, ___height_0)); }
	inline float get_height_0() const { return ___height_0; }
	inline float* get_address_of_height_0() { return &___height_0; }
	inline void set_height_0(float value)
	{
		___height_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SPACEATTRIBUTE_T3956583069_H
#ifndef SPRITEPACKINGMODE_T1341680400_H
#define SPRITEPACKINGMODE_T1341680400_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SpritePackingMode
struct  SpritePackingMode_t1341680400 
{
public:
	// System.Int32 UnityEngine.SpritePackingMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SpritePackingMode_t1341680400, ___value___2)); }
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
#endif // SPRITEPACKINGMODE_T1341680400_H
#ifndef TEXTAREAATTRIBUTE_T3326046611_H
#define TEXTAREAATTRIBUTE_T3326046611_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.TextAreaAttribute
struct  TextAreaAttribute_t3326046611  : public PropertyAttribute_t3677895545
{
public:
	// System.Int32 UnityEngine.TextAreaAttribute::minLines
	int32_t ___minLines_0;
	// System.Int32 UnityEngine.TextAreaAttribute::maxLines
	int32_t ___maxLines_1;

public:
	inline static int32_t get_offset_of_minLines_0() { return static_cast<int32_t>(offsetof(TextAreaAttribute_t3326046611, ___minLines_0)); }
	inline int32_t get_minLines_0() const { return ___minLines_0; }
	inline int32_t* get_address_of_minLines_0() { return &___minLines_0; }
	inline void set_minLines_0(int32_t value)
	{
		___minLines_0 = value;
	}

	inline static int32_t get_offset_of_maxLines_1() { return static_cast<int32_t>(offsetof(TextAreaAttribute_t3326046611, ___maxLines_1)); }
	inline int32_t get_maxLines_1() const { return ___maxLines_1; }
	inline int32_t* get_address_of_maxLines_1() { return &___maxLines_1; }
	inline void set_maxLines_1(int32_t value)
	{
		___maxLines_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEXTAREAATTRIBUTE_T3326046611_H
#ifndef TEXTUREFORMAT_T2701165832_H
#define TEXTUREFORMAT_T2701165832_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.TextureFormat
struct  TextureFormat_t2701165832 
{
public:
	// System.Int32 UnityEngine.TextureFormat::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TextureFormat_t2701165832, ___value___2)); }
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
#endif // TEXTUREFORMAT_T2701165832_H
#ifndef TEXTUREWRAPMODE_T584250749_H
#define TEXTUREWRAPMODE_T584250749_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.TextureWrapMode
struct  TextureWrapMode_t584250749 
{
public:
	// System.Int32 UnityEngine.TextureWrapMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TextureWrapMode_t584250749, ___value___2)); }
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
#endif // TEXTUREWRAPMODE_T584250749_H
#ifndef TOOLTIPATTRIBUTE_T3957072629_H
#define TOOLTIPATTRIBUTE_T3957072629_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.TooltipAttribute
struct  TooltipAttribute_t3957072629  : public PropertyAttribute_t3677895545
{
public:
	// System.String UnityEngine.TooltipAttribute::tooltip
	String_t* ___tooltip_0;

public:
	inline static int32_t get_offset_of_tooltip_0() { return static_cast<int32_t>(offsetof(TooltipAttribute_t3957072629, ___tooltip_0)); }
	inline String_t* get_tooltip_0() const { return ___tooltip_0; }
	inline String_t** get_address_of_tooltip_0() { return &___tooltip_0; }
	inline void set_tooltip_0(String_t* value)
	{
		___tooltip_0 = value;
		Il2CppCodeGenWriteBarrier((&___tooltip_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TOOLTIPATTRIBUTE_T3957072629_H
#ifndef TOUCHPHASE_T72348083_H
#define TOUCHPHASE_T72348083_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.TouchPhase
struct  TouchPhase_t72348083 
{
public:
	// System.Int32 UnityEngine.TouchPhase::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TouchPhase_t72348083, ___value___2)); }
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
#endif // TOUCHPHASE_T72348083_H
#ifndef STATUS_T785886969_H
#define STATUS_T785886969_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.TouchScreenKeyboard/Status
struct  Status_t785886969 
{
public:
	// System.Int32 UnityEngine.TouchScreenKeyboard/Status::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Status_t785886969, ___value___2)); }
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
#endif // STATUS_T785886969_H
#ifndef TOUCHSCREENKEYBOARDTYPE_T1530597702_H
#define TOUCHSCREENKEYBOARDTYPE_T1530597702_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.TouchScreenKeyboardType
struct  TouchScreenKeyboardType_t1530597702 
{
public:
	// System.Int32 UnityEngine.TouchScreenKeyboardType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TouchScreenKeyboardType_t1530597702, ___value___2)); }
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
#endif // TOUCHSCREENKEYBOARDTYPE_T1530597702_H
#ifndef TOUCHTYPE_T2034578258_H
#define TOUCHTYPE_T2034578258_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.TouchType
struct  TouchType_t2034578258 
{
public:
	// System.Int32 UnityEngine.TouchType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TouchType_t2034578258, ___value___2)); }
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
#endif // TOUCHTYPE_T2034578258_H
#ifndef TRACKEDREFERENCE_T1199777556_H
#define TRACKEDREFERENCE_T1199777556_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.TrackedReference
struct  TrackedReference_t1199777556  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.TrackedReference::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(TrackedReference_t1199777556, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.TrackedReference
struct TrackedReference_t1199777556_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.TrackedReference
struct TrackedReference_t1199777556_marshaled_com
{
	intptr_t ___m_Ptr_0;
};
#endif // TRACKEDREFERENCE_T1199777556_H
#ifndef UNITYLOGWRITER_T1374348020_H
#define UNITYLOGWRITER_T1374348020_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UnityLogWriter
struct  UnityLogWriter_t1374348020  : public TextWriter_t3478189236
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYLOGWRITER_T1374348020_H
#ifndef USERAUTHORIZATION_T2950000085_H
#define USERAUTHORIZATION_T2950000085_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UserAuthorization
struct  UserAuthorization_t2950000085 
{
public:
	// System.Int32 UnityEngine.UserAuthorization::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(UserAuthorization_t2950000085, ___value___2)); }
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
#endif // USERAUTHORIZATION_T2950000085_H
#ifndef VRTEXTUREUSAGE_T3142149582_H
#define VRTEXTUREUSAGE_T3142149582_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.VRTextureUsage
struct  VRTextureUsage_t3142149582 
{
public:
	// System.Int32 UnityEngine.VRTextureUsage::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(VRTextureUsage_t3142149582, ___value___2)); }
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
#endif // VRTEXTUREUSAGE_T3142149582_H
#ifndef LOCALNOTIFICATION_T1697500732_H
#define LOCALNOTIFICATION_T1697500732_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.iOS.LocalNotification
struct  LocalNotification_t1697500732  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.iOS.LocalNotification::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(LocalNotification_t1697500732, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

struct LocalNotification_t1697500732_StaticFields
{
public:
	// System.Int64 UnityEngine.iOS.LocalNotification::m_NSReferenceDateTicks
	int64_t ___m_NSReferenceDateTicks_1;

public:
	inline static int32_t get_offset_of_m_NSReferenceDateTicks_1() { return static_cast<int32_t>(offsetof(LocalNotification_t1697500732_StaticFields, ___m_NSReferenceDateTicks_1)); }
	inline int64_t get_m_NSReferenceDateTicks_1() const { return ___m_NSReferenceDateTicks_1; }
	inline int64_t* get_address_of_m_NSReferenceDateTicks_1() { return &___m_NSReferenceDateTicks_1; }
	inline void set_m_NSReferenceDateTicks_1(int64_t value)
	{
		___m_NSReferenceDateTicks_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LOCALNOTIFICATION_T1697500732_H
#ifndef REMOTENOTIFICATION_T818046696_H
#define REMOTENOTIFICATION_T818046696_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.iOS.RemoteNotification
struct  RemoteNotification_t818046696  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.iOS.RemoteNotification::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(RemoteNotification_t818046696, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REMOTENOTIFICATION_T818046696_H
#ifndef MATHFINTERNAL_T624072491_H
#define MATHFINTERNAL_T624072491_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngineInternal.MathfInternal
struct  MathfInternal_t624072491 
{
public:
	union
	{
		struct
		{
		};
		uint8_t MathfInternal_t624072491__padding[1];
	};

public:
};

struct MathfInternal_t624072491_StaticFields
{
public:
	// System.Single modreq(System.Runtime.CompilerServices.IsVolatile) UnityEngineInternal.MathfInternal::FloatMinNormal
	float ___FloatMinNormal_0;
	// System.Single modreq(System.Runtime.CompilerServices.IsVolatile) UnityEngineInternal.MathfInternal::FloatMinDenormal
	float ___FloatMinDenormal_1;
	// System.Boolean UnityEngineInternal.MathfInternal::IsFlushToZeroEnabled
	bool ___IsFlushToZeroEnabled_2;

public:
	inline static int32_t get_offset_of_FloatMinNormal_0() { return static_cast<int32_t>(offsetof(MathfInternal_t624072491_StaticFields, ___FloatMinNormal_0)); }
	inline float get_FloatMinNormal_0() const { return ___FloatMinNormal_0; }
	inline float* get_address_of_FloatMinNormal_0() { return &___FloatMinNormal_0; }
	inline void set_FloatMinNormal_0(float value)
	{
		___FloatMinNormal_0 = value;
	}

	inline static int32_t get_offset_of_FloatMinDenormal_1() { return static_cast<int32_t>(offsetof(MathfInternal_t624072491_StaticFields, ___FloatMinDenormal_1)); }
	inline float get_FloatMinDenormal_1() const { return ___FloatMinDenormal_1; }
	inline float* get_address_of_FloatMinDenormal_1() { return &___FloatMinDenormal_1; }
	inline void set_FloatMinDenormal_1(float value)
	{
		___FloatMinDenormal_1 = value;
	}

	inline static int32_t get_offset_of_IsFlushToZeroEnabled_2() { return static_cast<int32_t>(offsetof(MathfInternal_t624072491_StaticFields, ___IsFlushToZeroEnabled_2)); }
	inline bool get_IsFlushToZeroEnabled_2() const { return ___IsFlushToZeroEnabled_2; }
	inline bool* get_address_of_IsFlushToZeroEnabled_2() { return &___IsFlushToZeroEnabled_2; }
	inline void set_IsFlushToZeroEnabled_2(bool value)
	{
		___IsFlushToZeroEnabled_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MATHFINTERNAL_T624072491_H
#ifndef TYPEINFERENCERULES_T96689094_H
#define TYPEINFERENCERULES_T96689094_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngineInternal.TypeInferenceRules
struct  TypeInferenceRules_t96689094 
{
public:
	// System.Int32 UnityEngineInternal.TypeInferenceRules::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TypeInferenceRules_t96689094, ___value___2)); }
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
#endif // TYPEINFERENCERULES_T96689094_H
#ifndef APPDOMAIN_T1571427825_H
#define APPDOMAIN_T1571427825_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.AppDomain
struct  AppDomain_t1571427825  : public MarshalByRefObject_t2760389100
{
public:
	// System.IntPtr System.AppDomain::_mono_app_domain
	intptr_t ____mono_app_domain_1;
	// System.Security.Policy.Evidence System.AppDomain::_evidence
	Evidence_t2008144148 * ____evidence_6;
	// System.Security.PermissionSet System.AppDomain::_granted
	PermissionSet_t223948603 * ____granted_7;
	// System.Security.Principal.PrincipalPolicy System.AppDomain::_principalPolicy
	int32_t ____principalPolicy_8;
	// System.AssemblyLoadEventHandler System.AppDomain::AssemblyLoad
	AssemblyLoadEventHandler_t107971893 * ___AssemblyLoad_11;
	// System.ResolveEventHandler System.AppDomain::AssemblyResolve
	ResolveEventHandler_t2775508208 * ___AssemblyResolve_12;
	// System.EventHandler System.AppDomain::DomainUnload
	EventHandler_t1348719766 * ___DomainUnload_13;
	// System.EventHandler System.AppDomain::ProcessExit
	EventHandler_t1348719766 * ___ProcessExit_14;
	// System.ResolveEventHandler System.AppDomain::ResourceResolve
	ResolveEventHandler_t2775508208 * ___ResourceResolve_15;
	// System.ResolveEventHandler System.AppDomain::TypeResolve
	ResolveEventHandler_t2775508208 * ___TypeResolve_16;
	// System.UnhandledExceptionEventHandler System.AppDomain::UnhandledException
	UnhandledExceptionEventHandler_t3101989324 * ___UnhandledException_17;
	// System.EventHandler`1<System.Runtime.ExceptionServices.FirstChanceExceptionEventArgs> System.AppDomain::FirstChanceException
	EventHandler_1_t3529417624 * ___FirstChanceException_18;
	// System.AppDomainManager System.AppDomain::_domain_manager
	AppDomainManager_t1420869192 * ____domain_manager_19;
	// System.ResolveEventHandler System.AppDomain::ReflectionOnlyAssemblyResolve
	ResolveEventHandler_t2775508208 * ___ReflectionOnlyAssemblyResolve_20;
	// System.ActivationContext System.AppDomain::_activation
	ActivationContext_t976916018 * ____activation_21;
	// System.ApplicationIdentity System.AppDomain::_applicationIdentity
	ApplicationIdentity_t1917735356 * ____applicationIdentity_22;
	// System.Collections.Generic.List`1<System.String> System.AppDomain::compatibility_switch
	List_1_t3319525431 * ___compatibility_switch_23;

public:
	inline static int32_t get_offset_of__mono_app_domain_1() { return static_cast<int32_t>(offsetof(AppDomain_t1571427825, ____mono_app_domain_1)); }
	inline intptr_t get__mono_app_domain_1() const { return ____mono_app_domain_1; }
	inline intptr_t* get_address_of__mono_app_domain_1() { return &____mono_app_domain_1; }
	inline void set__mono_app_domain_1(intptr_t value)
	{
		____mono_app_domain_1 = value;
	}

	inline static int32_t get_offset_of__evidence_6() { return static_cast<int32_t>(offsetof(AppDomain_t1571427825, ____evidence_6)); }
	inline Evidence_t2008144148 * get__evidence_6() const { return ____evidence_6; }
	inline Evidence_t2008144148 ** get_address_of__evidence_6() { return &____evidence_6; }
	inline void set__evidence_6(Evidence_t2008144148 * value)
	{
		____evidence_6 = value;
		Il2CppCodeGenWriteBarrier((&____evidence_6), value);
	}

	inline static int32_t get_offset_of__granted_7() { return static_cast<int32_t>(offsetof(AppDomain_t1571427825, ____granted_7)); }
	inline PermissionSet_t223948603 * get__granted_7() const { return ____granted_7; }
	inline PermissionSet_t223948603 ** get_address_of__granted_7() { return &____granted_7; }
	inline void set__granted_7(PermissionSet_t223948603 * value)
	{
		____granted_7 = value;
		Il2CppCodeGenWriteBarrier((&____granted_7), value);
	}

	inline static int32_t get_offset_of__principalPolicy_8() { return static_cast<int32_t>(offsetof(AppDomain_t1571427825, ____principalPolicy_8)); }
	inline int32_t get__principalPolicy_8() const { return ____principalPolicy_8; }
	inline int32_t* get_address_of__principalPolicy_8() { return &____principalPolicy_8; }
	inline void set__principalPolicy_8(int32_t value)
	{
		____principalPolicy_8 = value;
	}

	inline static int32_t get_offset_of_AssemblyLoad_11() { return static_cast<int32_t>(offsetof(AppDomain_t1571427825, ___AssemblyLoad_11)); }
	inline AssemblyLoadEventHandler_t107971893 * get_AssemblyLoad_11() const { return ___AssemblyLoad_11; }
	inline AssemblyLoadEventHandler_t107971893 ** get_address_of_AssemblyLoad_11() { return &___AssemblyLoad_11; }
	inline void set_AssemblyLoad_11(AssemblyLoadEventHandler_t107971893 * value)
	{
		___AssemblyLoad_11 = value;
		Il2CppCodeGenWriteBarrier((&___AssemblyLoad_11), value);
	}

	inline static int32_t get_offset_of_AssemblyResolve_12() { return static_cast<int32_t>(offsetof(AppDomain_t1571427825, ___AssemblyResolve_12)); }
	inline ResolveEventHandler_t2775508208 * get_AssemblyResolve_12() const { return ___AssemblyResolve_12; }
	inline ResolveEventHandler_t2775508208 ** get_address_of_AssemblyResolve_12() { return &___AssemblyResolve_12; }
	inline void set_AssemblyResolve_12(ResolveEventHandler_t2775508208 * value)
	{
		___AssemblyResolve_12 = value;
		Il2CppCodeGenWriteBarrier((&___AssemblyResolve_12), value);
	}

	inline static int32_t get_offset_of_DomainUnload_13() { return static_cast<int32_t>(offsetof(AppDomain_t1571427825, ___DomainUnload_13)); }
	inline EventHandler_t1348719766 * get_DomainUnload_13() const { return ___DomainUnload_13; }
	inline EventHandler_t1348719766 ** get_address_of_DomainUnload_13() { return &___DomainUnload_13; }
	inline void set_DomainUnload_13(EventHandler_t1348719766 * value)
	{
		___DomainUnload_13 = value;
		Il2CppCodeGenWriteBarrier((&___DomainUnload_13), value);
	}

	inline static int32_t get_offset_of_ProcessExit_14() { return static_cast<int32_t>(offsetof(AppDomain_t1571427825, ___ProcessExit_14)); }
	inline EventHandler_t1348719766 * get_ProcessExit_14() const { return ___ProcessExit_14; }
	inline EventHandler_t1348719766 ** get_address_of_ProcessExit_14() { return &___ProcessExit_14; }
	inline void set_ProcessExit_14(EventHandler_t1348719766 * value)
	{
		___ProcessExit_14 = value;
		Il2CppCodeGenWriteBarrier((&___ProcessExit_14), value);
	}

	inline static int32_t get_offset_of_ResourceResolve_15() { return static_cast<int32_t>(offsetof(AppDomain_t1571427825, ___ResourceResolve_15)); }
	inline ResolveEventHandler_t2775508208 * get_ResourceResolve_15() const { return ___ResourceResolve_15; }
	inline ResolveEventHandler_t2775508208 ** get_address_of_ResourceResolve_15() { return &___ResourceResolve_15; }
	inline void set_ResourceResolve_15(ResolveEventHandler_t2775508208 * value)
	{
		___ResourceResolve_15 = value;
		Il2CppCodeGenWriteBarrier((&___ResourceResolve_15), value);
	}

	inline static int32_t get_offset_of_TypeResolve_16() { return static_cast<int32_t>(offsetof(AppDomain_t1571427825, ___TypeResolve_16)); }
	inline ResolveEventHandler_t2775508208 * get_TypeResolve_16() const { return ___TypeResolve_16; }
	inline ResolveEventHandler_t2775508208 ** get_address_of_TypeResolve_16() { return &___TypeResolve_16; }
	inline void set_TypeResolve_16(ResolveEventHandler_t2775508208 * value)
	{
		___TypeResolve_16 = value;
		Il2CppCodeGenWriteBarrier((&___TypeResolve_16), value);
	}

	inline static int32_t get_offset_of_UnhandledException_17() { return static_cast<int32_t>(offsetof(AppDomain_t1571427825, ___UnhandledException_17)); }
	inline UnhandledExceptionEventHandler_t3101989324 * get_UnhandledException_17() const { return ___UnhandledException_17; }
	inline UnhandledExceptionEventHandler_t3101989324 ** get_address_of_UnhandledException_17() { return &___UnhandledException_17; }
	inline void set_UnhandledException_17(UnhandledExceptionEventHandler_t3101989324 * value)
	{
		___UnhandledException_17 = value;
		Il2CppCodeGenWriteBarrier((&___UnhandledException_17), value);
	}

	inline static int32_t get_offset_of_FirstChanceException_18() { return static_cast<int32_t>(offsetof(AppDomain_t1571427825, ___FirstChanceException_18)); }
	inline EventHandler_1_t3529417624 * get_FirstChanceException_18() const { return ___FirstChanceException_18; }
	inline EventHandler_1_t3529417624 ** get_address_of_FirstChanceException_18() { return &___FirstChanceException_18; }
	inline void set_FirstChanceException_18(EventHandler_1_t3529417624 * value)
	{
		___FirstChanceException_18 = value;
		Il2CppCodeGenWriteBarrier((&___FirstChanceException_18), value);
	}

	inline static int32_t get_offset_of__domain_manager_19() { return static_cast<int32_t>(offsetof(AppDomain_t1571427825, ____domain_manager_19)); }
	inline AppDomainManager_t1420869192 * get__domain_manager_19() const { return ____domain_manager_19; }
	inline AppDomainManager_t1420869192 ** get_address_of__domain_manager_19() { return &____domain_manager_19; }
	inline void set__domain_manager_19(AppDomainManager_t1420869192 * value)
	{
		____domain_manager_19 = value;
		Il2CppCodeGenWriteBarrier((&____domain_manager_19), value);
	}

	inline static int32_t get_offset_of_ReflectionOnlyAssemblyResolve_20() { return static_cast<int32_t>(offsetof(AppDomain_t1571427825, ___ReflectionOnlyAssemblyResolve_20)); }
	inline ResolveEventHandler_t2775508208 * get_ReflectionOnlyAssemblyResolve_20() const { return ___ReflectionOnlyAssemblyResolve_20; }
	inline ResolveEventHandler_t2775508208 ** get_address_of_ReflectionOnlyAssemblyResolve_20() { return &___ReflectionOnlyAssemblyResolve_20; }
	inline void set_ReflectionOnlyAssemblyResolve_20(ResolveEventHandler_t2775508208 * value)
	{
		___ReflectionOnlyAssemblyResolve_20 = value;
		Il2CppCodeGenWriteBarrier((&___ReflectionOnlyAssemblyResolve_20), value);
	}

	inline static int32_t get_offset_of__activation_21() { return static_cast<int32_t>(offsetof(AppDomain_t1571427825, ____activation_21)); }
	inline ActivationContext_t976916018 * get__activation_21() const { return ____activation_21; }
	inline ActivationContext_t976916018 ** get_address_of__activation_21() { return &____activation_21; }
	inline void set__activation_21(ActivationContext_t976916018 * value)
	{
		____activation_21 = value;
		Il2CppCodeGenWriteBarrier((&____activation_21), value);
	}

	inline static int32_t get_offset_of__applicationIdentity_22() { return static_cast<int32_t>(offsetof(AppDomain_t1571427825, ____applicationIdentity_22)); }
	inline ApplicationIdentity_t1917735356 * get__applicationIdentity_22() const { return ____applicationIdentity_22; }
	inline ApplicationIdentity_t1917735356 ** get_address_of__applicationIdentity_22() { return &____applicationIdentity_22; }
	inline void set__applicationIdentity_22(ApplicationIdentity_t1917735356 * value)
	{
		____applicationIdentity_22 = value;
		Il2CppCodeGenWriteBarrier((&____applicationIdentity_22), value);
	}

	inline static int32_t get_offset_of_compatibility_switch_23() { return static_cast<int32_t>(offsetof(AppDomain_t1571427825, ___compatibility_switch_23)); }
	inline List_1_t3319525431 * get_compatibility_switch_23() const { return ___compatibility_switch_23; }
	inline List_1_t3319525431 ** get_address_of_compatibility_switch_23() { return &___compatibility_switch_23; }
	inline void set_compatibility_switch_23(List_1_t3319525431 * value)
	{
		___compatibility_switch_23 = value;
		Il2CppCodeGenWriteBarrier((&___compatibility_switch_23), value);
	}
};

struct AppDomain_t1571427825_StaticFields
{
public:
	// System.String System.AppDomain::_process_guid
	String_t* ____process_guid_2;
	// System.AppDomain System.AppDomain::default_domain
	AppDomain_t1571427825 * ___default_domain_10;

public:
	inline static int32_t get_offset_of__process_guid_2() { return static_cast<int32_t>(offsetof(AppDomain_t1571427825_StaticFields, ____process_guid_2)); }
	inline String_t* get__process_guid_2() const { return ____process_guid_2; }
	inline String_t** get_address_of__process_guid_2() { return &____process_guid_2; }
	inline void set__process_guid_2(String_t* value)
	{
		____process_guid_2 = value;
		Il2CppCodeGenWriteBarrier((&____process_guid_2), value);
	}

	inline static int32_t get_offset_of_default_domain_10() { return static_cast<int32_t>(offsetof(AppDomain_t1571427825_StaticFields, ___default_domain_10)); }
	inline AppDomain_t1571427825 * get_default_domain_10() const { return ___default_domain_10; }
	inline AppDomain_t1571427825 ** get_address_of_default_domain_10() { return &___default_domain_10; }
	inline void set_default_domain_10(AppDomain_t1571427825 * value)
	{
		___default_domain_10 = value;
		Il2CppCodeGenWriteBarrier((&___default_domain_10), value);
	}
};

struct AppDomain_t1571427825_ThreadStaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.Object> System.AppDomain::type_resolve_in_progress
	Dictionary_2_t2865362463 * ___type_resolve_in_progress_3;
	// System.Collections.Generic.Dictionary`2<System.String,System.Object> System.AppDomain::assembly_resolve_in_progress
	Dictionary_2_t2865362463 * ___assembly_resolve_in_progress_4;
	// System.Collections.Generic.Dictionary`2<System.String,System.Object> System.AppDomain::assembly_resolve_in_progress_refonly
	Dictionary_2_t2865362463 * ___assembly_resolve_in_progress_refonly_5;
	// System.Security.Principal.IPrincipal System.AppDomain::_principal
	RuntimeObject* ____principal_9;

public:
	inline static int32_t get_offset_of_type_resolve_in_progress_3() { return static_cast<int32_t>(offsetof(AppDomain_t1571427825_ThreadStaticFields, ___type_resolve_in_progress_3)); }
	inline Dictionary_2_t2865362463 * get_type_resolve_in_progress_3() const { return ___type_resolve_in_progress_3; }
	inline Dictionary_2_t2865362463 ** get_address_of_type_resolve_in_progress_3() { return &___type_resolve_in_progress_3; }
	inline void set_type_resolve_in_progress_3(Dictionary_2_t2865362463 * value)
	{
		___type_resolve_in_progress_3 = value;
		Il2CppCodeGenWriteBarrier((&___type_resolve_in_progress_3), value);
	}

	inline static int32_t get_offset_of_assembly_resolve_in_progress_4() { return static_cast<int32_t>(offsetof(AppDomain_t1571427825_ThreadStaticFields, ___assembly_resolve_in_progress_4)); }
	inline Dictionary_2_t2865362463 * get_assembly_resolve_in_progress_4() const { return ___assembly_resolve_in_progress_4; }
	inline Dictionary_2_t2865362463 ** get_address_of_assembly_resolve_in_progress_4() { return &___assembly_resolve_in_progress_4; }
	inline void set_assembly_resolve_in_progress_4(Dictionary_2_t2865362463 * value)
	{
		___assembly_resolve_in_progress_4 = value;
		Il2CppCodeGenWriteBarrier((&___assembly_resolve_in_progress_4), value);
	}

	inline static int32_t get_offset_of_assembly_resolve_in_progress_refonly_5() { return static_cast<int32_t>(offsetof(AppDomain_t1571427825_ThreadStaticFields, ___assembly_resolve_in_progress_refonly_5)); }
	inline Dictionary_2_t2865362463 * get_assembly_resolve_in_progress_refonly_5() const { return ___assembly_resolve_in_progress_refonly_5; }
	inline Dictionary_2_t2865362463 ** get_address_of_assembly_resolve_in_progress_refonly_5() { return &___assembly_resolve_in_progress_refonly_5; }
	inline void set_assembly_resolve_in_progress_refonly_5(Dictionary_2_t2865362463 * value)
	{
		___assembly_resolve_in_progress_refonly_5 = value;
		Il2CppCodeGenWriteBarrier((&___assembly_resolve_in_progress_refonly_5), value);
	}

	inline static int32_t get_offset_of__principal_9() { return static_cast<int32_t>(offsetof(AppDomain_t1571427825_ThreadStaticFields, ____principal_9)); }
	inline RuntimeObject* get__principal_9() const { return ____principal_9; }
	inline RuntimeObject** get_address_of__principal_9() { return &____principal_9; }
	inline void set__principal_9(RuntimeObject* value)
	{
		____principal_9 = value;
		Il2CppCodeGenWriteBarrier((&____principal_9), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.AppDomain
struct AppDomain_t1571427825_marshaled_pinvoke : public MarshalByRefObject_t2760389100_marshaled_pinvoke
{
	intptr_t ____mono_app_domain_1;
	Evidence_t2008144148 * ____evidence_6;
	PermissionSet_t223948603 * ____granted_7;
	int32_t ____principalPolicy_8;
	Il2CppMethodPointer ___AssemblyLoad_11;
	Il2CppMethodPointer ___AssemblyResolve_12;
	Il2CppMethodPointer ___DomainUnload_13;
	Il2CppMethodPointer ___ProcessExit_14;
	Il2CppMethodPointer ___ResourceResolve_15;
	Il2CppMethodPointer ___TypeResolve_16;
	Il2CppMethodPointer ___UnhandledException_17;
	Il2CppMethodPointer ___FirstChanceException_18;
	AppDomainManager_t1420869192 * ____domain_manager_19;
	Il2CppMethodPointer ___ReflectionOnlyAssemblyResolve_20;
	ActivationContext_t976916018 * ____activation_21;
	ApplicationIdentity_t1917735356 * ____applicationIdentity_22;
	List_1_t3319525431 * ___compatibility_switch_23;
};
// Native definition for COM marshalling of System.AppDomain
struct AppDomain_t1571427825_marshaled_com : public MarshalByRefObject_t2760389100_marshaled_com
{
	intptr_t ____mono_app_domain_1;
	Evidence_t2008144148 * ____evidence_6;
	PermissionSet_t223948603 * ____granted_7;
	int32_t ____principalPolicy_8;
	Il2CppMethodPointer ___AssemblyLoad_11;
	Il2CppMethodPointer ___AssemblyResolve_12;
	Il2CppMethodPointer ___DomainUnload_13;
	Il2CppMethodPointer ___ProcessExit_14;
	Il2CppMethodPointer ___ResourceResolve_15;
	Il2CppMethodPointer ___TypeResolve_16;
	Il2CppMethodPointer ___UnhandledException_17;
	Il2CppMethodPointer ___FirstChanceException_18;
	AppDomainManager_t1420869192 * ____domain_manager_19;
	Il2CppMethodPointer ___ReflectionOnlyAssemblyResolve_20;
	ActivationContext_t976916018 * ____activation_21;
	ApplicationIdentity_t1917735356 * ____applicationIdentity_22;
	List_1_t3319525431 * ___compatibility_switch_23;
};
#endif // APPDOMAIN_T1571427825_H
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
#ifndef STREAMINGCONTEXT_T3711869237_H
#define STREAMINGCONTEXT_T3711869237_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.StreamingContext
struct  StreamingContext_t3711869237 
{
public:
	// System.Object System.Runtime.Serialization.StreamingContext::m_additionalContext
	RuntimeObject * ___m_additionalContext_0;
	// System.Runtime.Serialization.StreamingContextStates System.Runtime.Serialization.StreamingContext::m_state
	int32_t ___m_state_1;

public:
	inline static int32_t get_offset_of_m_additionalContext_0() { return static_cast<int32_t>(offsetof(StreamingContext_t3711869237, ___m_additionalContext_0)); }
	inline RuntimeObject * get_m_additionalContext_0() const { return ___m_additionalContext_0; }
	inline RuntimeObject ** get_address_of_m_additionalContext_0() { return &___m_additionalContext_0; }
	inline void set_m_additionalContext_0(RuntimeObject * value)
	{
		___m_additionalContext_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_additionalContext_0), value);
	}

	inline static int32_t get_offset_of_m_state_1() { return static_cast<int32_t>(offsetof(StreamingContext_t3711869237, ___m_state_1)); }
	inline int32_t get_m_state_1() const { return ___m_state_1; }
	inline int32_t* get_address_of_m_state_1() { return &___m_state_1; }
	inline void set_m_state_1(int32_t value)
	{
		___m_state_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Runtime.Serialization.StreamingContext
struct StreamingContext_t3711869237_marshaled_pinvoke
{
	Il2CppIUnknown* ___m_additionalContext_0;
	int32_t ___m_state_1;
};
// Native definition for COM marshalling of System.Runtime.Serialization.StreamingContext
struct StreamingContext_t3711869237_marshaled_com
{
	Il2CppIUnknown* ___m_additionalContext_0;
	int32_t ___m_state_1;
};
#endif // STREAMINGCONTEXT_T3711869237_H
#ifndef EVENTWAITHANDLE_T777845177_H
#define EVENTWAITHANDLE_T777845177_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.EventWaitHandle
struct  EventWaitHandle_t777845177  : public WaitHandle_t1743403487
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EVENTWAITHANDLE_T777845177_H
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
#ifndef GAMEOBJECT_T1113636619_H
#define GAMEOBJECT_T1113636619_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.GameObject
struct  GameObject_t1113636619  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GAMEOBJECT_T1113636619_H
#ifndef RESOURCEREQUEST_T3109103591_H
#define RESOURCEREQUEST_T3109103591_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.ResourceRequest
struct  ResourceRequest_t3109103591  : public AsyncOperation_t1445031843
{
public:
	// System.String UnityEngine.ResourceRequest::m_Path
	String_t* ___m_Path_2;
	// System.Type UnityEngine.ResourceRequest::m_Type
	Type_t * ___m_Type_3;

public:
	inline static int32_t get_offset_of_m_Path_2() { return static_cast<int32_t>(offsetof(ResourceRequest_t3109103591, ___m_Path_2)); }
	inline String_t* get_m_Path_2() const { return ___m_Path_2; }
	inline String_t** get_address_of_m_Path_2() { return &___m_Path_2; }
	inline void set_m_Path_2(String_t* value)
	{
		___m_Path_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_Path_2), value);
	}

	inline static int32_t get_offset_of_m_Type_3() { return static_cast<int32_t>(offsetof(ResourceRequest_t3109103591, ___m_Type_3)); }
	inline Type_t * get_m_Type_3() const { return ___m_Type_3; }
	inline Type_t ** get_address_of_m_Type_3() { return &___m_Type_3; }
	inline void set_m_Type_3(Type_t * value)
	{
		___m_Type_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_Type_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.ResourceRequest
struct ResourceRequest_t3109103591_marshaled_pinvoke : public AsyncOperation_t1445031843_marshaled_pinvoke
{
	char* ___m_Path_2;
	Type_t * ___m_Type_3;
};
// Native definition for COM marshalling of UnityEngine.ResourceRequest
struct ResourceRequest_t3109103591_marshaled_com : public AsyncOperation_t1445031843_marshaled_com
{
	Il2CppChar* ___m_Path_2;
	Type_t * ___m_Type_3;
};
#endif // RESOURCEREQUEST_T3109103591_H
#ifndef RUNTIMEINITIALIZEONLOADMETHODATTRIBUTE_T3192313494_H
#define RUNTIMEINITIALIZEONLOADMETHODATTRIBUTE_T3192313494_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.RuntimeInitializeOnLoadMethodAttribute
struct  RuntimeInitializeOnLoadMethodAttribute_t3192313494  : public PreserveAttribute_t1583619344
{
public:
	// UnityEngine.RuntimeInitializeLoadType UnityEngine.RuntimeInitializeOnLoadMethodAttribute::<loadType>k__BackingField
	int32_t ___U3CloadTypeU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CloadTypeU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(RuntimeInitializeOnLoadMethodAttribute_t3192313494, ___U3CloadTypeU3Ek__BackingField_0)); }
	inline int32_t get_U3CloadTypeU3Ek__BackingField_0() const { return ___U3CloadTypeU3Ek__BackingField_0; }
	inline int32_t* get_address_of_U3CloadTypeU3Ek__BackingField_0() { return &___U3CloadTypeU3Ek__BackingField_0; }
	inline void set_U3CloadTypeU3Ek__BackingField_0(int32_t value)
	{
		___U3CloadTypeU3Ek__BackingField_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEINITIALIZEONLOADMETHODATTRIBUTE_T3192313494_H
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
#ifndef SHADER_T4151988712_H
#define SHADER_T4151988712_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Shader
struct  Shader_t4151988712  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SHADER_T4151988712_H
#ifndef SPRITE_T280657092_H
#define SPRITE_T280657092_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Sprite
struct  Sprite_t280657092  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SPRITE_T280657092_H
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
#ifndef TOUCH_T1921856868_H
#define TOUCH_T1921856868_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Touch
struct  Touch_t1921856868 
{
public:
	// System.Int32 UnityEngine.Touch::m_FingerId
	int32_t ___m_FingerId_0;
	// UnityEngine.Vector2 UnityEngine.Touch::m_Position
	Vector2_t2156229523  ___m_Position_1;
	// UnityEngine.Vector2 UnityEngine.Touch::m_RawPosition
	Vector2_t2156229523  ___m_RawPosition_2;
	// UnityEngine.Vector2 UnityEngine.Touch::m_PositionDelta
	Vector2_t2156229523  ___m_PositionDelta_3;
	// System.Single UnityEngine.Touch::m_TimeDelta
	float ___m_TimeDelta_4;
	// System.Int32 UnityEngine.Touch::m_TapCount
	int32_t ___m_TapCount_5;
	// UnityEngine.TouchPhase UnityEngine.Touch::m_Phase
	int32_t ___m_Phase_6;
	// UnityEngine.TouchType UnityEngine.Touch::m_Type
	int32_t ___m_Type_7;
	// System.Single UnityEngine.Touch::m_Pressure
	float ___m_Pressure_8;
	// System.Single UnityEngine.Touch::m_maximumPossiblePressure
	float ___m_maximumPossiblePressure_9;
	// System.Single UnityEngine.Touch::m_Radius
	float ___m_Radius_10;
	// System.Single UnityEngine.Touch::m_RadiusVariance
	float ___m_RadiusVariance_11;
	// System.Single UnityEngine.Touch::m_AltitudeAngle
	float ___m_AltitudeAngle_12;
	// System.Single UnityEngine.Touch::m_AzimuthAngle
	float ___m_AzimuthAngle_13;

public:
	inline static int32_t get_offset_of_m_FingerId_0() { return static_cast<int32_t>(offsetof(Touch_t1921856868, ___m_FingerId_0)); }
	inline int32_t get_m_FingerId_0() const { return ___m_FingerId_0; }
	inline int32_t* get_address_of_m_FingerId_0() { return &___m_FingerId_0; }
	inline void set_m_FingerId_0(int32_t value)
	{
		___m_FingerId_0 = value;
	}

	inline static int32_t get_offset_of_m_Position_1() { return static_cast<int32_t>(offsetof(Touch_t1921856868, ___m_Position_1)); }
	inline Vector2_t2156229523  get_m_Position_1() const { return ___m_Position_1; }
	inline Vector2_t2156229523 * get_address_of_m_Position_1() { return &___m_Position_1; }
	inline void set_m_Position_1(Vector2_t2156229523  value)
	{
		___m_Position_1 = value;
	}

	inline static int32_t get_offset_of_m_RawPosition_2() { return static_cast<int32_t>(offsetof(Touch_t1921856868, ___m_RawPosition_2)); }
	inline Vector2_t2156229523  get_m_RawPosition_2() const { return ___m_RawPosition_2; }
	inline Vector2_t2156229523 * get_address_of_m_RawPosition_2() { return &___m_RawPosition_2; }
	inline void set_m_RawPosition_2(Vector2_t2156229523  value)
	{
		___m_RawPosition_2 = value;
	}

	inline static int32_t get_offset_of_m_PositionDelta_3() { return static_cast<int32_t>(offsetof(Touch_t1921856868, ___m_PositionDelta_3)); }
	inline Vector2_t2156229523  get_m_PositionDelta_3() const { return ___m_PositionDelta_3; }
	inline Vector2_t2156229523 * get_address_of_m_PositionDelta_3() { return &___m_PositionDelta_3; }
	inline void set_m_PositionDelta_3(Vector2_t2156229523  value)
	{
		___m_PositionDelta_3 = value;
	}

	inline static int32_t get_offset_of_m_TimeDelta_4() { return static_cast<int32_t>(offsetof(Touch_t1921856868, ___m_TimeDelta_4)); }
	inline float get_m_TimeDelta_4() const { return ___m_TimeDelta_4; }
	inline float* get_address_of_m_TimeDelta_4() { return &___m_TimeDelta_4; }
	inline void set_m_TimeDelta_4(float value)
	{
		___m_TimeDelta_4 = value;
	}

	inline static int32_t get_offset_of_m_TapCount_5() { return static_cast<int32_t>(offsetof(Touch_t1921856868, ___m_TapCount_5)); }
	inline int32_t get_m_TapCount_5() const { return ___m_TapCount_5; }
	inline int32_t* get_address_of_m_TapCount_5() { return &___m_TapCount_5; }
	inline void set_m_TapCount_5(int32_t value)
	{
		___m_TapCount_5 = value;
	}

	inline static int32_t get_offset_of_m_Phase_6() { return static_cast<int32_t>(offsetof(Touch_t1921856868, ___m_Phase_6)); }
	inline int32_t get_m_Phase_6() const { return ___m_Phase_6; }
	inline int32_t* get_address_of_m_Phase_6() { return &___m_Phase_6; }
	inline void set_m_Phase_6(int32_t value)
	{
		___m_Phase_6 = value;
	}

	inline static int32_t get_offset_of_m_Type_7() { return static_cast<int32_t>(offsetof(Touch_t1921856868, ___m_Type_7)); }
	inline int32_t get_m_Type_7() const { return ___m_Type_7; }
	inline int32_t* get_address_of_m_Type_7() { return &___m_Type_7; }
	inline void set_m_Type_7(int32_t value)
	{
		___m_Type_7 = value;
	}

	inline static int32_t get_offset_of_m_Pressure_8() { return static_cast<int32_t>(offsetof(Touch_t1921856868, ___m_Pressure_8)); }
	inline float get_m_Pressure_8() const { return ___m_Pressure_8; }
	inline float* get_address_of_m_Pressure_8() { return &___m_Pressure_8; }
	inline void set_m_Pressure_8(float value)
	{
		___m_Pressure_8 = value;
	}

	inline static int32_t get_offset_of_m_maximumPossiblePressure_9() { return static_cast<int32_t>(offsetof(Touch_t1921856868, ___m_maximumPossiblePressure_9)); }
	inline float get_m_maximumPossiblePressure_9() const { return ___m_maximumPossiblePressure_9; }
	inline float* get_address_of_m_maximumPossiblePressure_9() { return &___m_maximumPossiblePressure_9; }
	inline void set_m_maximumPossiblePressure_9(float value)
	{
		___m_maximumPossiblePressure_9 = value;
	}

	inline static int32_t get_offset_of_m_Radius_10() { return static_cast<int32_t>(offsetof(Touch_t1921856868, ___m_Radius_10)); }
	inline float get_m_Radius_10() const { return ___m_Radius_10; }
	inline float* get_address_of_m_Radius_10() { return &___m_Radius_10; }
	inline void set_m_Radius_10(float value)
	{
		___m_Radius_10 = value;
	}

	inline static int32_t get_offset_of_m_RadiusVariance_11() { return static_cast<int32_t>(offsetof(Touch_t1921856868, ___m_RadiusVariance_11)); }
	inline float get_m_RadiusVariance_11() const { return ___m_RadiusVariance_11; }
	inline float* get_address_of_m_RadiusVariance_11() { return &___m_RadiusVariance_11; }
	inline void set_m_RadiusVariance_11(float value)
	{
		___m_RadiusVariance_11 = value;
	}

	inline static int32_t get_offset_of_m_AltitudeAngle_12() { return static_cast<int32_t>(offsetof(Touch_t1921856868, ___m_AltitudeAngle_12)); }
	inline float get_m_AltitudeAngle_12() const { return ___m_AltitudeAngle_12; }
	inline float* get_address_of_m_AltitudeAngle_12() { return &___m_AltitudeAngle_12; }
	inline void set_m_AltitudeAngle_12(float value)
	{
		___m_AltitudeAngle_12 = value;
	}

	inline static int32_t get_offset_of_m_AzimuthAngle_13() { return static_cast<int32_t>(offsetof(Touch_t1921856868, ___m_AzimuthAngle_13)); }
	inline float get_m_AzimuthAngle_13() const { return ___m_AzimuthAngle_13; }
	inline float* get_address_of_m_AzimuthAngle_13() { return &___m_AzimuthAngle_13; }
	inline void set_m_AzimuthAngle_13(float value)
	{
		___m_AzimuthAngle_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TOUCH_T1921856868_H
#ifndef TOUCHSCREENKEYBOARD_T731888065_H
#define TOUCHSCREENKEYBOARD_T731888065_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.TouchScreenKeyboard
struct  TouchScreenKeyboard_t731888065  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.TouchScreenKeyboard::m_Ptr
	intptr_t ___m_Ptr_0;
	// System.Boolean UnityEngine.TouchScreenKeyboard::<canGetSelection>k__BackingField
	bool ___U3CcanGetSelectionU3Ek__BackingField_2;
	// System.Boolean UnityEngine.TouchScreenKeyboard::<canSetSelection>k__BackingField
	bool ___U3CcanSetSelectionU3Ek__BackingField_3;
	// UnityEngine.TouchScreenKeyboardType UnityEngine.TouchScreenKeyboard::<type>k__BackingField
	int32_t ___U3CtypeU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(TouchScreenKeyboard_t731888065, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}

	inline static int32_t get_offset_of_U3CcanGetSelectionU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(TouchScreenKeyboard_t731888065, ___U3CcanGetSelectionU3Ek__BackingField_2)); }
	inline bool get_U3CcanGetSelectionU3Ek__BackingField_2() const { return ___U3CcanGetSelectionU3Ek__BackingField_2; }
	inline bool* get_address_of_U3CcanGetSelectionU3Ek__BackingField_2() { return &___U3CcanGetSelectionU3Ek__BackingField_2; }
	inline void set_U3CcanGetSelectionU3Ek__BackingField_2(bool value)
	{
		___U3CcanGetSelectionU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CcanSetSelectionU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(TouchScreenKeyboard_t731888065, ___U3CcanSetSelectionU3Ek__BackingField_3)); }
	inline bool get_U3CcanSetSelectionU3Ek__BackingField_3() const { return ___U3CcanSetSelectionU3Ek__BackingField_3; }
	inline bool* get_address_of_U3CcanSetSelectionU3Ek__BackingField_3() { return &___U3CcanSetSelectionU3Ek__BackingField_3; }
	inline void set_U3CcanSetSelectionU3Ek__BackingField_3(bool value)
	{
		___U3CcanSetSelectionU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_U3CtypeU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(TouchScreenKeyboard_t731888065, ___U3CtypeU3Ek__BackingField_4)); }
	inline int32_t get_U3CtypeU3Ek__BackingField_4() const { return ___U3CtypeU3Ek__BackingField_4; }
	inline int32_t* get_address_of_U3CtypeU3Ek__BackingField_4() { return &___U3CtypeU3Ek__BackingField_4; }
	inline void set_U3CtypeU3Ek__BackingField_4(int32_t value)
	{
		___U3CtypeU3Ek__BackingField_4 = value;
	}
};

struct TouchScreenKeyboard_t731888065_StaticFields
{
public:
	// System.Boolean UnityEngine.TouchScreenKeyboard::<hideInput>k__BackingField
	bool ___U3ChideInputU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3ChideInputU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(TouchScreenKeyboard_t731888065_StaticFields, ___U3ChideInputU3Ek__BackingField_1)); }
	inline bool get_U3ChideInputU3Ek__BackingField_1() const { return ___U3ChideInputU3Ek__BackingField_1; }
	inline bool* get_address_of_U3ChideInputU3Ek__BackingField_1() { return &___U3ChideInputU3Ek__BackingField_1; }
	inline void set_U3ChideInputU3Ek__BackingField_1(bool value)
	{
		___U3ChideInputU3Ek__BackingField_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TOUCHSCREENKEYBOARD_T731888065_H
#ifndef SPRITEATLAS_T646931412_H
#define SPRITEATLAS_T646931412_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.U2D.SpriteAtlas
struct  SpriteAtlas_t646931412  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SPRITEATLAS_T646931412_H
#ifndef ACTION_1_T1617499438_H
#define ACTION_1_T1617499438_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Action`1<UnityEngine.AsyncOperation>
struct  Action_1_t1617499438  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ACTION_1_T1617499438_H
#ifndef ACTION_1_T819399007_H
#define ACTION_1_T819399007_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Action`1<UnityEngine.U2D.SpriteAtlas>
struct  Action_1_t819399007  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ACTION_1_T819399007_H
#ifndef ASYNCCALLBACK_T3962456242_H
#define ASYNCCALLBACK_T3962456242_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.AsyncCallback
struct  AsyncCallback_t3962456242  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASYNCCALLBACK_T3962456242_H
#ifndef MANUALRESETEVENT_T451242010_H
#define MANUALRESETEVENT_T451242010_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.ManualResetEvent
struct  ManualResetEvent_t451242010  : public EventWaitHandle_t777845177
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MANUALRESETEVENT_T451242010_H
#ifndef SENDORPOSTCALLBACK_T2750080073_H
#define SENDORPOSTCALLBACK_T2750080073_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.SendOrPostCallback
struct  SendOrPostCallback_t2750080073  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SENDORPOSTCALLBACK_T2750080073_H
#ifndef UNHANDLEDEXCEPTIONEVENTHANDLER_T3101989324_H
#define UNHANDLEDEXCEPTIONEVENTHANDLER_T3101989324_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UnhandledExceptionEventHandler
struct  UnhandledExceptionEventHandler_t3101989324  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNHANDLEDEXCEPTIONEVENTHANDLER_T3101989324_H
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
#ifndef UNITYACTION_1_T2933211702_H
#define UNITYACTION_1_T2933211702_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.UnityAction`1<UnityEngine.SceneManagement.Scene>
struct  UnityAction_1_t2933211702  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYACTION_1_T2933211702_H
#ifndef UNITYACTION_2_T2165061829_H
#define UNITYACTION_2_T2165061829_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.LoadSceneMode>
struct  UnityAction_2_t2165061829  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYACTION_2_T2165061829_H
#ifndef UNITYACTION_2_T1262235195_H
#define UNITYACTION_2_T1262235195_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.Scene>
struct  UnityAction_2_t1262235195  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYACTION_2_T1262235195_H
#ifndef RENDERTEXTURE_T2108887433_H
#define RENDERTEXTURE_T2108887433_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.RenderTexture
struct  RenderTexture_t2108887433  : public Texture_t3661962703
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RENDERTEXTURE_T2108887433_H
#ifndef RENDERER_T2627027031_H
#define RENDERER_T2627027031_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Renderer
struct  Renderer_t2627027031  : public Component_t1923634451
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RENDERER_T2627027031_H
#ifndef TEXTURE2D_T3840446185_H
#define TEXTURE2D_T3840446185_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Texture2D
struct  Texture2D_t3840446185  : public Texture_t3661962703
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEXTURE2D_T3840446185_H
#ifndef TEXTURE2DARRAY_T4044506685_H
#define TEXTURE2DARRAY_T4044506685_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Texture2DArray
struct  Texture2DArray_t4044506685  : public Texture_t3661962703
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEXTURE2DARRAY_T4044506685_H
#ifndef TEXTURE3D_T1884131049_H
#define TEXTURE3D_T1884131049_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Texture3D
struct  Texture3D_t1884131049  : public Texture_t3661962703
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEXTURE3D_T1884131049_H
#ifndef TRANSFORM_T3600365921_H
#define TRANSFORM_T3600365921_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Transform
struct  Transform_t3600365921  : public Component_t1923634451
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSFORM_T3600365921_H
#ifndef REQUESTATLASCALLBACK_T3100554279_H
#define REQUESTATLASCALLBACK_T3100554279_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.U2D.SpriteAtlasManager/RequestAtlasCallback
struct  RequestAtlasCallback_t3100554279  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REQUESTATLASCALLBACK_T3100554279_H
#ifndef CAMERA_T4157153871_H
#define CAMERA_T4157153871_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Camera
struct  Camera_t4157153871  : public Behaviour_t1437897464
{
public:

public:
};

struct Camera_t4157153871_StaticFields
{
public:
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_t190067161 * ___onPreCull_4;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_t190067161 * ___onPreRender_5;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_t190067161 * ___onPostRender_6;

public:
	inline static int32_t get_offset_of_onPreCull_4() { return static_cast<int32_t>(offsetof(Camera_t4157153871_StaticFields, ___onPreCull_4)); }
	inline CameraCallback_t190067161 * get_onPreCull_4() const { return ___onPreCull_4; }
	inline CameraCallback_t190067161 ** get_address_of_onPreCull_4() { return &___onPreCull_4; }
	inline void set_onPreCull_4(CameraCallback_t190067161 * value)
	{
		___onPreCull_4 = value;
		Il2CppCodeGenWriteBarrier((&___onPreCull_4), value);
	}

	inline static int32_t get_offset_of_onPreRender_5() { return static_cast<int32_t>(offsetof(Camera_t4157153871_StaticFields, ___onPreRender_5)); }
	inline CameraCallback_t190067161 * get_onPreRender_5() const { return ___onPreRender_5; }
	inline CameraCallback_t190067161 ** get_address_of_onPreRender_5() { return &___onPreRender_5; }
	inline void set_onPreRender_5(CameraCallback_t190067161 * value)
	{
		___onPreRender_5 = value;
		Il2CppCodeGenWriteBarrier((&___onPreRender_5), value);
	}

	inline static int32_t get_offset_of_onPostRender_6() { return static_cast<int32_t>(offsetof(Camera_t4157153871_StaticFields, ___onPostRender_6)); }
	inline CameraCallback_t190067161 * get_onPostRender_6() const { return ___onPostRender_6; }
	inline CameraCallback_t190067161 ** get_address_of_onPostRender_6() { return &___onPostRender_6; }
	inline void set_onPostRender_6(CameraCallback_t190067161 * value)
	{
		___onPostRender_6 = value;
		Il2CppCodeGenWriteBarrier((&___onPostRender_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CAMERA_T4157153871_H
#ifndef GUIELEMENT_T3567083079_H
#define GUIELEMENT_T3567083079_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.GUIElement
struct  GUIElement_t3567083079  : public Behaviour_t1437897464
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GUIELEMENT_T3567083079_H
#ifndef GUILAYER_T2783472903_H
#define GUILAYER_T2783472903_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.GUILayer
struct  GUILayer_t2783472903  : public Behaviour_t1437897464
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GUILAYER_T2783472903_H
#ifndef RECTTRANSFORM_T3704657025_H
#define RECTTRANSFORM_T3704657025_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.RectTransform
struct  RectTransform_t3704657025  : public Transform_t3600365921
{
public:

public:
};

struct RectTransform_t3704657025_StaticFields
{
public:
	// UnityEngine.RectTransform/ReapplyDrivenProperties UnityEngine.RectTransform::reapplyDrivenProperties
	ReapplyDrivenProperties_t1258266594 * ___reapplyDrivenProperties_4;

public:
	inline static int32_t get_offset_of_reapplyDrivenProperties_4() { return static_cast<int32_t>(offsetof(RectTransform_t3704657025_StaticFields, ___reapplyDrivenProperties_4)); }
	inline ReapplyDrivenProperties_t1258266594 * get_reapplyDrivenProperties_4() const { return ___reapplyDrivenProperties_4; }
	inline ReapplyDrivenProperties_t1258266594 ** get_address_of_reapplyDrivenProperties_4() { return &___reapplyDrivenProperties_4; }
	inline void set_reapplyDrivenProperties_4(ReapplyDrivenProperties_t1258266594 * value)
	{
		___reapplyDrivenProperties_4 = value;
		Il2CppCodeGenWriteBarrier((&___reapplyDrivenProperties_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RECTTRANSFORM_T3704657025_H
#ifndef SPRITERENDERER_T3235626157_H
#define SPRITERENDERER_T3235626157_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SpriteRenderer
struct  SpriteRenderer_t3235626157  : public Renderer_t2627027031
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SPRITERENDERER_T3235626157_H
// UnityEngine.Camera[]
struct CameraU5BU5D_t1709987734  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Camera_t4157153871 * m_Items[1];

public:
	inline Camera_t4157153871 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Camera_t4157153871 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Camera_t4157153871 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline Camera_t4157153871 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Camera_t4157153871 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Camera_t4157153871 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// UnityEngine.SendMouseEvents/HitInfo[]
struct HitInfoU5BU5D_t1685002053  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) HitInfo_t3229609740  m_Items[1];

public:
	inline HitInfo_t3229609740  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline HitInfo_t3229609740 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, HitInfo_t3229609740  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline HitInfo_t3229609740  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline HitInfo_t3229609740 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, HitInfo_t3229609740  value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Display[]
struct DisplayU5BU5D_t103034768  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Display_t1387065949 * m_Items[1];

public:
	inline Display_t1387065949 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Display_t1387065949 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Display_t1387065949 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline Display_t1387065949 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Display_t1387065949 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Display_t1387065949 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// System.Object[]
struct ObjectU5BU5D_t2843939325  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject * m_Items[1];

public:
	inline RuntimeObject * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline RuntimeObject * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// System.Reflection.ParameterModifier[]
struct ParameterModifierU5BU5D_t2943407543  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) ParameterModifier_t1461694466  m_Items[1];

public:
	inline ParameterModifier_t1461694466  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ParameterModifier_t1461694466 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ParameterModifier_t1461694466  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline ParameterModifier_t1461694466  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ParameterModifier_t1461694466 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ParameterModifier_t1461694466  value)
	{
		m_Items[index] = value;
	}
};
// System.String[]
struct StringU5BU5D_t1281789340  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) String_t* m_Items[1];

public:
	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// System.Char[]
struct CharU5BU5D_t3528271667  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Il2CppChar m_Items[1];

public:
	inline Il2CppChar GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Il2CppChar value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Il2CppChar GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Il2CppChar value)
	{
		m_Items[index] = value;
	}
};
// System.Reflection.ParameterInfo[]
struct ParameterInfoU5BU5D_t390618515  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) ParameterInfo_t1861056598 * m_Items[1];

public:
	inline ParameterInfo_t1861056598 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ParameterInfo_t1861056598 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ParameterInfo_t1861056598 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline ParameterInfo_t1861056598 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ParameterInfo_t1861056598 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ParameterInfo_t1861056598 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// UnityEngine.Color32[]
struct Color32U5BU5D_t3850468773  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Color32_t2600501292  m_Items[1];

public:
	inline Color32_t2600501292  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Color32_t2600501292 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Color32_t2600501292  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Color32_t2600501292  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Color32_t2600501292 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Color32_t2600501292  value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Color[]
struct ColorU5BU5D_t941916413  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Color_t2555686324  m_Items[1];

public:
	inline Color_t2555686324  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Color_t2555686324 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Color_t2555686324  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Color_t2555686324  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Color_t2555686324 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Color_t2555686324  value)
	{
		m_Items[index] = value;
	}
};
// System.Byte[]
struct ByteU5BU5D_t4116647657  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) uint8_t m_Items[1];

public:
	inline uint8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint8_t value)
	{
		m_Items[index] = value;
	}
};
// System.Delegate[]
struct DelegateU5BU5D_t1703627840  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Delegate_t1188392813 * m_Items[1];

public:
	inline Delegate_t1188392813 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t1188392813 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t1188392813 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline Delegate_t1188392813 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t1188392813 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t1188392813 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};


// System.Void UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.LoadSceneMode>::Invoke(T0,T1)
extern "C" IL2CPP_METHOD_ATTR void UnityAction_2_Invoke_m1541286357_gshared (UnityAction_2_t2165061829 * __this, Scene_t2348375561  p0, int32_t p1, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.SceneManagement.Scene>::Invoke(T0)
extern "C" IL2CPP_METHOD_ATTR void UnityAction_1_Invoke_m3649732398_gshared (UnityAction_1_t2933211702 * __this, Scene_t2348375561  p0, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.Scene>::Invoke(T0,T1)
extern "C" IL2CPP_METHOD_ATTR void UnityAction_2_Invoke_m944492567_gshared (UnityAction_2_t1262235195 * __this, Scene_t2348375561  p0, Scene_t2348375561  p1, const RuntimeMethod* method);
// T UnityEngine.Component::GetComponent<System.Object>()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponent_TisRuntimeObject_m2906321015_gshared (Component_t1923634451 * __this, const RuntimeMethod* method);
// System.Void System.Action`1<System.Object>::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void Action_1__ctor_m118522912_gshared (Action_1_t3252573759 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method);
// System.Void System.Action`1<System.Object>::Invoke(!0)
extern "C" IL2CPP_METHOD_ATTR void Action_1_Invoke_m3161192644_gshared (Action_1_t3252573759 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Queue`1<UnityEngine.UnitySynchronizationContext/WorkRequest>::.ctor(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void Queue_1__ctor_m1971992302_gshared (Queue_1_t1200778106 * __this, int32_t p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Queue`1<UnityEngine.UnitySynchronizationContext/WorkRequest>::Enqueue(!0)
extern "C" IL2CPP_METHOD_ATTR void Queue_1_Enqueue_m1592503047_gshared (Queue_1_t1200778106 * __this, WorkRequest_t1354518612  p0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.Queue`1<UnityEngine.UnitySynchronizationContext/WorkRequest>::get_Count()
extern "C" IL2CPP_METHOD_ATTR int32_t Queue_1_get_Count_m3368911732_gshared (Queue_1_t1200778106 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.Queue`1<UnityEngine.UnitySynchronizationContext/WorkRequest>::Dequeue()
extern "C" IL2CPP_METHOD_ATTR WorkRequest_t1354518612  Queue_1_Dequeue_m979967976_gshared (Queue_1_t1200778106 * __this, const RuntimeMethod* method);

// System.Void System.Attribute::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Attribute__ctor_m1529526131 (Attribute_t861562559 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Scripting.PreserveAttribute::.ctor()
extern "C" IL2CPP_METHOD_ATTR void PreserveAttribute__ctor_m1123812627 (PreserveAttribute_t1583619344 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.RuntimeInitializeOnLoadMethodAttribute::set_loadType(UnityEngine.RuntimeInitializeLoadType)
extern "C" IL2CPP_METHOD_ATTR void RuntimeInitializeOnLoadMethodAttribute_set_loadType_m1884529061 (RuntimeInitializeOnLoadMethodAttribute_t3192313494 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Int32 UnityEngine.SceneManagement.Scene::get_handle()
extern "C" IL2CPP_METHOD_ATTR int32_t Scene_get_handle_m1544696971 (Scene_t2348375561 * __this, const RuntimeMethod* method);
// System.String UnityEngine.SceneManagement.Scene::GetNameInternal(System.Int32)
extern "C" IL2CPP_METHOD_ATTR String_t* Scene_GetNameInternal_m992487900 (RuntimeObject * __this /* static, unused */, int32_t ___sceneHandle0, const RuntimeMethod* method);
// System.String UnityEngine.SceneManagement.Scene::get_name()
extern "C" IL2CPP_METHOD_ATTR String_t* Scene_get_name_m622963475 (Scene_t2348375561 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.SceneManagement.Scene::GetHashCode()
extern "C" IL2CPP_METHOD_ATTR int32_t Scene_GetHashCode_m2998285532 (Scene_t2348375561 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.SceneManagement.Scene::Equals(System.Object)
extern "C" IL2CPP_METHOD_ATTR bool Scene_Equals_m581999093 (Scene_t2348375561 * __this, RuntimeObject * ___other0, const RuntimeMethod* method);
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
extern "C" IL2CPP_METHOD_ATTR Delegate_t1188392813 * Delegate_Combine_m1859655160 (RuntimeObject * __this /* static, unused */, Delegate_t1188392813 * p0, Delegate_t1188392813 * p1, const RuntimeMethod* method);
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
extern "C" IL2CPP_METHOD_ATTR Delegate_t1188392813 * Delegate_Remove_m334097152 (RuntimeObject * __this /* static, unused */, Delegate_t1188392813 * p0, Delegate_t1188392813 * p1, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.LoadSceneMode>::Invoke(T0,T1)
inline void UnityAction_2_Invoke_m1541286357 (UnityAction_2_t2165061829 * __this, Scene_t2348375561  p0, int32_t p1, const RuntimeMethod* method)
{
	((  void (*) (UnityAction_2_t2165061829 *, Scene_t2348375561 , int32_t, const RuntimeMethod*))UnityAction_2_Invoke_m1541286357_gshared)(__this, p0, p1, method);
}
// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.SceneManagement.Scene>::Invoke(T0)
inline void UnityAction_1_Invoke_m3649732398 (UnityAction_1_t2933211702 * __this, Scene_t2348375561  p0, const RuntimeMethod* method)
{
	((  void (*) (UnityAction_1_t2933211702 *, Scene_t2348375561 , const RuntimeMethod*))UnityAction_1_Invoke_m3649732398_gshared)(__this, p0, method);
}
// System.Void UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.Scene>::Invoke(T0,T1)
inline void UnityAction_2_Invoke_m944492567 (UnityAction_2_t1262235195 * __this, Scene_t2348375561  p0, Scene_t2348375561  p1, const RuntimeMethod* method)
{
	((  void (*) (UnityAction_2_t1262235195 *, Scene_t2348375561 , Scene_t2348375561 , const RuntimeMethod*))UnityAction_2_Invoke_m944492567_gshared)(__this, p0, p1, method);
}
// UnityEngine.ScreenOrientation UnityEngine.Screen::GetScreenOrientation()
extern "C" IL2CPP_METHOD_ATTR int32_t Screen_GetScreenOrientation_m3552071186 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::Log(System.Object)
extern "C" IL2CPP_METHOD_ATTR void Debug_Log_m4051431634 (RuntimeObject * __this /* static, unused */, RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Void UnityEngine.Screen::RequestOrientation(UnityEngine.ScreenOrientation)
extern "C" IL2CPP_METHOD_ATTR void Screen_RequestOrientation_m590940690 (RuntimeObject * __this /* static, unused */, int32_t ___orient0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Screen::IsOrientationEnabled(UnityEngine.EnabledOrientation)
extern "C" IL2CPP_METHOD_ATTR bool Screen_IsOrientationEnabled_m3167960387 (RuntimeObject * __this /* static, unused */, int32_t ___orient0, const RuntimeMethod* method);
// System.Void UnityEngine.Screen::SetOrientationEnabled(UnityEngine.EnabledOrientation,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void Screen_SetOrientationEnabled_m3998917148 (RuntimeObject * __this /* static, unused */, int32_t ___orient0, bool ___enabled1, const RuntimeMethod* method);
// System.Void UnityEngine.Object::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Object__ctor_m1087895580 (Object_t631007953 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.ScriptableObject::CreateScriptableObject(UnityEngine.ScriptableObject)
extern "C" IL2CPP_METHOD_ATTR void ScriptableObject_CreateScriptableObject_m3504774547 (RuntimeObject * __this /* static, unused */, ScriptableObject_t2528358522 * ___self0, const RuntimeMethod* method);
// UnityEngine.ScriptableObject UnityEngine.ScriptableObject::CreateScriptableObjectInstanceFromType(System.Type)
extern "C" IL2CPP_METHOD_ATTR ScriptableObject_t2528358522 * ScriptableObject_CreateScriptableObjectInstanceFromType_m2783367459 (RuntimeObject * __this /* static, unused */, Type_t * ___type0, const RuntimeMethod* method);
// T UnityEngine.Component::GetComponent<UnityEngine.GUILayer>()
inline GUILayer_t2783472903 * Component_GetComponent_TisGUILayer_t2783472903_m4244438908 (Component_t1923634451 * __this, const RuntimeMethod* method)
{
	return ((  GUILayer_t2783472903 * (*) (Component_t1923634451 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m2906321015_gshared)(__this, method);
}
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
extern "C" IL2CPP_METHOD_ATTR bool Object_op_Implicit_m3574996620 (RuntimeObject * __this /* static, unused */, Object_t631007953 * ___exists0, const RuntimeMethod* method);
// UnityEngine.GUIElement UnityEngine.GUILayer::HitTest(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR GUIElement_t3567083079 * GUILayer_HitTest_m512928460 (GUILayer_t2783472903 * __this, Vector3_t3722313464  ___screenPosition0, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
extern "C" IL2CPP_METHOD_ATTR GameObject_t1113636619 * Component_get_gameObject_m442555142 (Component_t1923634451 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Input::get_mousePosition()
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Input_get_mousePosition_m1616496925 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Int32 UnityEngine.Camera::get_allCamerasCount()
extern "C" IL2CPP_METHOD_ATTR int32_t Camera_get_allCamerasCount_m528453758 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Int32 UnityEngine.Camera::GetAllCameras(UnityEngine.Camera[])
extern "C" IL2CPP_METHOD_ATTR int32_t Camera_GetAllCameras_m668492922 (RuntimeObject * __this /* static, unused */, CameraU5BU5D_t1709987734* ___cameras0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
extern "C" IL2CPP_METHOD_ATTR bool Object_op_Equality_m1810815630 (RuntimeObject * __this /* static, unused */, Object_t631007953 * ___x0, Object_t631007953 * ___y1, const RuntimeMethod* method);
// UnityEngine.RenderTexture UnityEngine.Camera::get_targetTexture()
extern "C" IL2CPP_METHOD_ATTR RenderTexture_t2108887433 * Camera_get_targetTexture_m2278634983 (Camera_t4157153871 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
extern "C" IL2CPP_METHOD_ATTR bool Object_op_Inequality_m4071470834 (RuntimeObject * __this /* static, unused */, Object_t631007953 * ___x0, Object_t631007953 * ___y1, const RuntimeMethod* method);
// System.Int32 UnityEngine.Camera::get_targetDisplay()
extern "C" IL2CPP_METHOD_ATTR int32_t Camera_get_targetDisplay_m2285699927 (Camera_t4157153871 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Display::RelativeMouseAt(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Display_RelativeMouseAt_m1648644586 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  ___inputMouseCoordinates0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Vector3_get_zero_m1409827619 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Boolean UnityEngine.Vector3::op_Inequality(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR bool Vector3_op_Inequality_m315980366 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  ___lhs0, Vector3_t3722313464  ___rhs1, const RuntimeMethod* method);
// System.Int32 UnityEngine.Screen::get_width()
extern "C" IL2CPP_METHOD_ATTR int32_t Screen_get_width_m345039817 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Int32 UnityEngine.Screen::get_height()
extern "C" IL2CPP_METHOD_ATTR int32_t Screen_get_height_m1623532518 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Int32 UnityEngine.Display::get_systemWidth()
extern "C" IL2CPP_METHOD_ATTR int32_t Display_get_systemWidth_m2423595549 (Display_t1387065949 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.Display::get_systemHeight()
extern "C" IL2CPP_METHOD_ATTR int32_t Display_get_systemHeight_m730809466 (Display_t1387065949 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR void Vector2__ctor_m3970636864 (Vector2_t2156229523 * __this, float ___x0, float ___y1, const RuntimeMethod* method);
// UnityEngine.Rect UnityEngine.Camera::get_pixelRect()
extern "C" IL2CPP_METHOD_ATTR Rect_t2360479859  Camera_get_pixelRect_m2283183456 (Camera_t4157153871 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Rect::Contains(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR bool Rect_Contains_m1232228501 (Rect_t2360479859 * __this, Vector3_t3722313464  ___point0, const RuntimeMethod* method);
// System.Void UnityEngine.SendMouseEvents::HitTestLegacyGUI(UnityEngine.Camera,UnityEngine.Vector3,UnityEngine.SendMouseEvents/HitInfo&)
extern "C" IL2CPP_METHOD_ATTR void SendMouseEvents_HitTestLegacyGUI_m579942228 (RuntimeObject * __this /* static, unused */, Camera_t4157153871 * ___camera0, Vector3_t3722313464  ___mousePosition1, HitInfo_t3229609740 * ___hitInfo2, const RuntimeMethod* method);
// System.Int32 UnityEngine.Camera::get_eventMask()
extern "C" IL2CPP_METHOD_ATTR int32_t Camera_get_eventMask_m819189086 (Camera_t4157153871 * __this, const RuntimeMethod* method);
// UnityEngine.Ray UnityEngine.Camera::ScreenPointToRay(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR Ray_t3785851493  Camera_ScreenPointToRay_m3764635188 (Camera_t4157153871 * __this, Vector3_t3722313464  ___pos0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Ray::get_direction()
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Ray_get_direction_m761601601 (Ray_t3785851493 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Mathf::Approximately(System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR bool Mathf_Approximately_m245805902 (RuntimeObject * __this /* static, unused */, float ___a0, float ___b1, const RuntimeMethod* method);
// System.Single UnityEngine.Camera::get_farClipPlane()
extern "C" IL2CPP_METHOD_ATTR float Camera_get_farClipPlane_m538536689 (Camera_t4157153871 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Camera::get_nearClipPlane()
extern "C" IL2CPP_METHOD_ATTR float Camera_get_nearClipPlane_m837839537 (Camera_t4157153871 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.Camera::get_cullingMask()
extern "C" IL2CPP_METHOD_ATTR int32_t Camera_get_cullingMask_m679085748 (Camera_t4157153871 * __this, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.Camera::RaycastTry(UnityEngine.Ray,System.Single,System.Int32)
extern "C" IL2CPP_METHOD_ATTR GameObject_t1113636619 * Camera_RaycastTry_m3913529496 (Camera_t4157153871 * __this, Ray_t3785851493  ___ray0, float ___distance1, int32_t ___layerMask2, const RuntimeMethod* method);
// UnityEngine.CameraClearFlags UnityEngine.Camera::get_clearFlags()
extern "C" IL2CPP_METHOD_ATTR int32_t Camera_get_clearFlags_m992534691 (Camera_t4157153871 * __this, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.Camera::RaycastTry2D(UnityEngine.Ray,System.Single,System.Int32)
extern "C" IL2CPP_METHOD_ATTR GameObject_t1113636619 * Camera_RaycastTry2D_m2460696262 (Camera_t4157153871 * __this, Ray_t3785851493  ___ray0, float ___distance1, int32_t ___layerMask2, const RuntimeMethod* method);
// System.Void UnityEngine.SendMouseEvents::SendEvents(System.Int32,UnityEngine.SendMouseEvents/HitInfo)
extern "C" IL2CPP_METHOD_ATTR void SendMouseEvents_SendEvents_m1956471769 (RuntimeObject * __this /* static, unused */, int32_t ___i0, HitInfo_t3229609740  ___hit1, const RuntimeMethod* method);
// System.Boolean UnityEngine.Input::GetMouseButtonDown(System.Int32)
extern "C" IL2CPP_METHOD_ATTR bool Input_GetMouseButtonDown_m2081676745 (RuntimeObject * __this /* static, unused */, int32_t ___button0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Input::GetMouseButton(System.Int32)
extern "C" IL2CPP_METHOD_ATTR bool Input_GetMouseButton_m513753021 (RuntimeObject * __this /* static, unused */, int32_t ___button0, const RuntimeMethod* method);
// System.Boolean UnityEngine.SendMouseEvents/HitInfo::op_Implicit(UnityEngine.SendMouseEvents/HitInfo)
extern "C" IL2CPP_METHOD_ATTR bool HitInfo_op_Implicit_m665224877 (RuntimeObject * __this /* static, unused */, HitInfo_t3229609740  ___exists0, const RuntimeMethod* method);
// System.Void UnityEngine.SendMouseEvents/HitInfo::SendMessage(System.String)
extern "C" IL2CPP_METHOD_ATTR void HitInfo_SendMessage_m1343099429 (HitInfo_t3229609740 * __this, String_t* ___name0, const RuntimeMethod* method);
// System.Boolean UnityEngine.SendMouseEvents/HitInfo::Compare(UnityEngine.SendMouseEvents/HitInfo,UnityEngine.SendMouseEvents/HitInfo)
extern "C" IL2CPP_METHOD_ATTR bool HitInfo_Compare_m2336739674 (RuntimeObject * __this /* static, unused */, HitInfo_t3229609740  ___lhs0, HitInfo_t3229609740  ___rhs1, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::SendMessage(System.String,System.Object,UnityEngine.SendMessageOptions)
extern "C" IL2CPP_METHOD_ATTR void GameObject_SendMessage_m3720186693 (GameObject_t1113636619 * __this, String_t* ___methodName0, RuntimeObject * ___value1, int32_t ___options2, const RuntimeMethod* method);
// System.Boolean System.IntPtr::op_Equality(System.IntPtr,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR bool IntPtr_op_Equality_m408849716 (RuntimeObject * __this /* static, unused */, intptr_t p0, intptr_t p1, const RuntimeMethod* method);
// System.Void System.ArgumentException::.ctor(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR void ArgumentException__ctor_m1216717135 (ArgumentException_t132251570 * __this, String_t* p0, String_t* p1, const RuntimeMethod* method);
// System.Void* System.IntPtr::op_Explicit(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void* IntPtr_op_Explicit_m2520637223 (RuntimeObject * __this /* static, unused */, intptr_t p0, const RuntimeMethod* method);
// System.Type System.Object::GetType()
extern "C" IL2CPP_METHOD_ATTR Type_t * Object_GetType_m88164663 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void UnityEngine.PropertyAttribute::.ctor()
extern "C" IL2CPP_METHOD_ATTR void PropertyAttribute__ctor_m1017741868 (PropertyAttribute_t3677895545 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Sprite::GetTextureRect_Injected(UnityEngine.Rect&)
extern "C" IL2CPP_METHOD_ATTR void Sprite_GetTextureRect_Injected_m333481368 (Sprite_t280657092 * __this, Rect_t2360479859 * ___ret0, const RuntimeMethod* method);
// System.Void UnityEngine.Sprite::GetInnerUVs_Injected(UnityEngine.Vector4&)
extern "C" IL2CPP_METHOD_ATTR void Sprite_GetInnerUVs_Injected_m4035625128 (Sprite_t280657092 * __this, Vector4_t3319028937 * ___ret0, const RuntimeMethod* method);
// System.Void UnityEngine.Sprite::GetOuterUVs_Injected(UnityEngine.Vector4&)
extern "C" IL2CPP_METHOD_ATTR void Sprite_GetOuterUVs_Injected_m3481589121 (Sprite_t280657092 * __this, Vector4_t3319028937 * ___ret0, const RuntimeMethod* method);
// System.Void UnityEngine.Sprite::GetPadding_Injected(UnityEngine.Vector4&)
extern "C" IL2CPP_METHOD_ATTR void Sprite_GetPadding_Injected_m3549259178 (Sprite_t280657092 * __this, Vector4_t3319028937 * ___ret0, const RuntimeMethod* method);
// System.Void UnityEngine.Sprite::get_rect_Injected(UnityEngine.Rect&)
extern "C" IL2CPP_METHOD_ATTR void Sprite_get_rect_Injected_m2233741029 (Sprite_t280657092 * __this, Rect_t2360479859 * ___ret0, const RuntimeMethod* method);
// System.Void UnityEngine.Sprite::get_border_Injected(UnityEngine.Vector4&)
extern "C" IL2CPP_METHOD_ATTR void Sprite_get_border_Injected_m3046818791 (Sprite_t280657092 * __this, Vector4_t3319028937 * ___ret0, const RuntimeMethod* method);
// System.Int32 UnityEngine.Sprite::GetPacked()
extern "C" IL2CPP_METHOD_ATTR int32_t Sprite_GetPacked_m1492529401 (Sprite_t280657092 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.Sprite::GetPackingMode()
extern "C" IL2CPP_METHOD_ATTR int32_t Sprite_GetPackingMode_m3284640451 (Sprite_t280657092 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Sprite::get_packed()
extern "C" IL2CPP_METHOD_ATTR bool Sprite_get_packed_m1179604684 (Sprite_t280657092 * __this, const RuntimeMethod* method);
// UnityEngine.SpritePackingMode UnityEngine.Sprite::get_packingMode()
extern "C" IL2CPP_METHOD_ATTR int32_t Sprite_get_packingMode_m2493123120 (Sprite_t280657092 * __this, const RuntimeMethod* method);
// UnityEngine.Rect UnityEngine.Rect::get_zero()
extern "C" IL2CPP_METHOD_ATTR Rect_t2360479859  Rect_get_zero_m4034156123 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// UnityEngine.Rect UnityEngine.Sprite::GetTextureRect()
extern "C" IL2CPP_METHOD_ATTR Rect_t2360479859  Sprite_GetTextureRect_m3372967885 (Sprite_t280657092 * __this, const RuntimeMethod* method);
// UnityEngine.Vector4 UnityEngine.Sprite::GetInnerUVs()
extern "C" IL2CPP_METHOD_ATTR Vector4_t3319028937  Sprite_GetInnerUVs_m3161811504 (Sprite_t280657092 * __this, const RuntimeMethod* method);
// UnityEngine.Vector4 UnityEngine.Sprite::GetOuterUVs()
extern "C" IL2CPP_METHOD_ATTR Vector4_t3319028937  Sprite_GetOuterUVs_m716993212 (Sprite_t280657092 * __this, const RuntimeMethod* method);
// UnityEngine.Vector4 UnityEngine.Sprite::GetPadding()
extern "C" IL2CPP_METHOD_ATTR Vector4_t3319028937  Sprite_GetPadding_m3912085217 (Sprite_t280657092 * __this, const RuntimeMethod* method);
// UnityEngine.Vector4 UnityEngine.Sprite::get_border()
extern "C" IL2CPP_METHOD_ATTR Vector4_t3319028937  Sprite_get_border_m2985609076 (Sprite_t280657092 * __this, const RuntimeMethod* method);
// System.Boolean System.String::IsNullOrEmpty(System.String)
extern "C" IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_m2969720369 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method);
// System.String System.String::Replace(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Replace_m1273907647 (String_t* __this, String_t* p0, String_t* p1, const RuntimeMethod* method);
// System.Void System.Diagnostics.StackTrace::.ctor(System.Int32,System.Boolean)
extern "C" IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void StackTrace__ctor_m1685176557 (StackTrace_t1598645457 * __this, int32_t p0, bool p1, const RuntimeMethod* method);
// System.String UnityEngine.StackTraceUtility::ExtractFormattedStackTrace(System.Diagnostics.StackTrace)
extern "C" IL2CPP_METHOD_ATTR String_t* StackTraceUtility_ExtractFormattedStackTrace_m1281750362 (RuntimeObject * __this /* static, unused */, StackTrace_t1598645457 * ___stackTrace0, const RuntimeMethod* method);
// System.Boolean System.String::StartsWith(System.String)
extern "C" IL2CPP_METHOD_ATTR bool String_StartsWith_m1759067526 (String_t* __this, String_t* p0, const RuntimeMethod* method);
// System.Void System.ArgumentException::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void ArgumentException__ctor_m1312628991 (ArgumentException_t132251570 * __this, String_t* p0, const RuntimeMethod* method);
// System.Int32 System.String::get_Length()
extern "C" IL2CPP_METHOD_ATTR int32_t String_get_Length_m3847582255 (String_t* __this, const RuntimeMethod* method);
// System.Void System.Text.StringBuilder::.ctor(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void StringBuilder__ctor_m2367297767 (StringBuilder_t * __this, int32_t p0, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Concat_m3755062657 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, String_t* p2, const RuntimeMethod* method);
// System.Type System.Exception::GetType()
extern "C" IL2CPP_METHOD_ATTR Type_t * Exception_GetType_m2227967756 (Exception_t * __this, const RuntimeMethod* method);
// System.String System.String::Trim()
extern "C" IL2CPP_METHOD_ATTR String_t* String_Trim_m923598732 (String_t* __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Concat_m3937257545 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, const RuntimeMethod* method);
// System.Exception System.Exception::get_InnerException()
extern "C" IL2CPP_METHOD_ATTR Exception_t * Exception_get_InnerException_m3836775 (Exception_t * __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String,System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Concat_m2163913788 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, String_t* p2, String_t* p3, const RuntimeMethod* method);
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.String)
extern "C" IL2CPP_METHOD_ATTR StringBuilder_t * StringBuilder_Append_m1965104174 (StringBuilder_t * __this, String_t* p0, const RuntimeMethod* method);
// System.String[] System.String::Split(System.Char[])
extern "C" IL2CPP_METHOD_ATTR StringU5BU5D_t1281789340* String_Split_m3646115398 (String_t* __this, CharU5BU5D_t3528271667* p0, const RuntimeMethod* method);
// System.Char System.String::get_Chars(System.Int32)
extern "C" IL2CPP_METHOD_ATTR Il2CppChar String_get_Chars_m2986988803 (String_t* __this, int32_t p0, const RuntimeMethod* method);
// System.Boolean UnityEngine.StackTraceUtility::IsSystemStacktraceType(System.Object)
extern "C" IL2CPP_METHOD_ATTR bool StackTraceUtility_IsSystemStacktraceType_m299828041 (RuntimeObject * __this /* static, unused */, RuntimeObject * ___name0, const RuntimeMethod* method);
// System.Int32 System.String::IndexOf(System.String)
extern "C" IL2CPP_METHOD_ATTR int32_t String_IndexOf_m1977622757 (String_t* __this, String_t* p0, const RuntimeMethod* method);
// System.String System.String::Substring(System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Substring_m1610150815 (String_t* __this, int32_t p0, int32_t p1, const RuntimeMethod* method);
// System.Boolean System.String::EndsWith(System.String)
extern "C" IL2CPP_METHOD_ATTR bool String_EndsWith_m1901926500 (String_t* __this, String_t* p0, const RuntimeMethod* method);
// System.String System.String::Remove(System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Remove_m562998446 (String_t* __this, int32_t p0, int32_t p1, const RuntimeMethod* method);
// System.Int32 System.String::IndexOf(System.String,System.Int32)
extern "C" IL2CPP_METHOD_ATTR int32_t String_IndexOf_m3406607758 (String_t* __this, String_t* p0, int32_t p1, const RuntimeMethod* method);
// System.String System.String::Replace(System.Char,System.Char)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Replace_m3726209165 (String_t* __this, Il2CppChar p0, Il2CppChar p1, const RuntimeMethod* method);
// System.Int32 System.String::LastIndexOf(System.String)
extern "C" IL2CPP_METHOD_ATTR int32_t String_LastIndexOf_m2676535141 (String_t* __this, String_t* p0, const RuntimeMethod* method);
// System.String System.String::Insert(System.Int32,System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Insert_m3534971326 (String_t* __this, int32_t p0, String_t* p1, const RuntimeMethod* method);
// System.Boolean System.String::op_Equality(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR bool String_op_Equality_m920492651 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, const RuntimeMethod* method);
// System.String System.Int32::ToString()
extern "C" IL2CPP_METHOD_ATTR String_t* Int32_ToString_m141394615 (int32_t* __this, const RuntimeMethod* method);
// UnityEngine.OperatingSystemFamily UnityEngine.SystemInfo::GetOperatingSystemFamily()
extern "C" IL2CPP_METHOD_ATTR int32_t SystemInfo_GetOperatingSystemFamily_m1440411909 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Int32 UnityEngine.Texture::GetDataWidth()
extern "C" IL2CPP_METHOD_ATTR int32_t Texture_GetDataWidth_m2906817031 (Texture_t3661962703 * __this, const RuntimeMethod* method);
// System.Void System.NotImplementedException::.ctor()
extern "C" IL2CPP_METHOD_ATTR void NotImplementedException__ctor_m3058704252 (NotImplementedException_t3489357830 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.Texture::GetDataHeight()
extern "C" IL2CPP_METHOD_ATTR int32_t Texture_GetDataHeight_m100074750 (Texture_t3661962703 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Texture::get_texelSize_Injected(UnityEngine.Vector2&)
extern "C" IL2CPP_METHOD_ATTR void Texture_get_texelSize_Injected_m2677033317 (Texture_t3661962703 * __this, Vector2_t2156229523 * ___ret0, const RuntimeMethod* method);
// System.Boolean UnityEngine.SystemInfo::IsFormatSupported(UnityEngine.Experimental.Rendering.GraphicsFormat,UnityEngine.Experimental.Rendering.FormatUsage)
extern "C" IL2CPP_METHOD_ATTR bool SystemInfo_IsFormatSupported_m1855899386 (RuntimeObject * __this /* static, unused */, int32_t ___format0, int32_t ___usage1, const RuntimeMethod* method);
// System.String UnityEngine.Object::get_name()
extern "C" IL2CPP_METHOD_ATTR String_t* Object_get_name_m4211327027 (Object_t631007953 * __this, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object,System.Object)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Format_m2556382932 (RuntimeObject * __this /* static, unused */, String_t* p0, RuntimeObject * p1, RuntimeObject * p2, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogError(System.Object,UnityEngine.Object)
extern "C" IL2CPP_METHOD_ATTR void Debug_LogError_m1665621915 (RuntimeObject * __this /* static, unused */, RuntimeObject * ___message0, Object_t631007953 * ___context1, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Format_m2844511972 (RuntimeObject * __this /* static, unused */, String_t* p0, RuntimeObject * p1, const RuntimeMethod* method);
// System.Void UnityEngine.UnityException::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void UnityException__ctor_m872329880 (UnityException_t3598173660 * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Void UnityEngine.Texture::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Texture__ctor_m3554519797 (Texture_t3661962703 * __this, const RuntimeMethod* method);
// UnityEngine.Experimental.Rendering.GraphicsFormat UnityEngine.Experimental.Rendering.GraphicsFormatUtility::GetGraphicsFormat(UnityEngine.TextureFormat,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR int32_t GraphicsFormatUtility_GetGraphicsFormat_m3445248969 (RuntimeObject * __this /* static, unused */, int32_t ___format0, bool ___isSRGB1, const RuntimeMethod* method);
// System.Boolean UnityEngine.Experimental.Rendering.GraphicsFormatUtility::IsCrunchFormat(UnityEngine.TextureFormat)
extern "C" IL2CPP_METHOD_ATTR bool GraphicsFormatUtility_IsCrunchFormat_m1697721778 (RuntimeObject * __this /* static, unused */, int32_t ___format0, const RuntimeMethod* method);
// System.Void UnityEngine.Texture2D::Internal_Create(UnityEngine.Texture2D,System.Int32,System.Int32,UnityEngine.Experimental.Rendering.GraphicsFormat,UnityEngine.Experimental.Rendering.TextureCreationFlags,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void Texture2D_Internal_Create_m3592711635 (RuntimeObject * __this /* static, unused */, Texture2D_t3840446185 * ___mono0, int32_t ___w1, int32_t ___h2, int32_t ___format3, int32_t ___flags4, intptr_t ___nativeTex5, const RuntimeMethod* method);
// System.Void UnityEngine.Texture2D::.ctor(System.Int32,System.Int32,UnityEngine.TextureFormat,System.Boolean,System.Boolean,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void Texture2D__ctor_m3176621650 (Texture2D_t3840446185 * __this, int32_t ___width0, int32_t ___height1, int32_t ___textureFormat2, bool ___mipChain3, bool ___linear4, intptr_t ___nativeTex5, const RuntimeMethod* method);
// System.Void UnityEngine.Texture2D::SetPixels32(UnityEngine.Color32[],System.Int32)
extern "C" IL2CPP_METHOD_ATTR void Texture2D_SetPixels32_m2156254057 (Texture2D_t3840446185 * __this, Color32U5BU5D_t3850468773* ___colors0, int32_t ___miplevel1, const RuntimeMethod* method);
// System.Void UnityEngine.Texture2D::SetAllPixels32(UnityEngine.Color32[],System.Int32)
extern "C" IL2CPP_METHOD_ATTR void Texture2D_SetAllPixels32_m734711553 (Texture2D_t3840446185 * __this, Color32U5BU5D_t3850468773* ___colors0, int32_t ___miplevel1, const RuntimeMethod* method);
// UnityEngine.Color[] UnityEngine.Texture2D::GetPixels(System.Int32)
extern "C" IL2CPP_METHOD_ATTR ColorU5BU5D_t941916413* Texture2D_GetPixels_m2757678651 (Texture2D_t3840446185 * __this, int32_t ___miplevel0, const RuntimeMethod* method);
// UnityEngine.Color[] UnityEngine.Texture2D::GetPixels(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR ColorU5BU5D_t941916413* Texture2D_GetPixels_m4117143883 (Texture2D_t3840446185 * __this, int32_t ___x0, int32_t ___y1, int32_t ___blockWidth2, int32_t ___blockHeight3, int32_t ___miplevel4, const RuntimeMethod* method);
// UnityEngine.Color32[] UnityEngine.Texture2D::GetPixels32(System.Int32)
extern "C" IL2CPP_METHOD_ATTR Color32U5BU5D_t3850468773* Texture2D_GetPixels32_m1841405004 (Texture2D_t3840446185 * __this, int32_t ___miplevel0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Texture2D::Internal_CreateImpl(UnityEngine.Texture2D,System.Int32,System.Int32,UnityEngine.Experimental.Rendering.GraphicsFormat,UnityEngine.Experimental.Rendering.TextureCreationFlags,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR bool Texture2D_Internal_CreateImpl_m110138258 (RuntimeObject * __this /* static, unused */, Texture2D_t3840446185 * ___mono0, int32_t ___w1, int32_t ___h2, int32_t ___format3, int32_t ___flags4, intptr_t ___nativeTex5, const RuntimeMethod* method);
// System.Void UnityEngine.Texture2D::SetPixelImpl_Injected(System.Int32,System.Int32,System.Int32,UnityEngine.Color&)
extern "C" IL2CPP_METHOD_ATTR void Texture2D_SetPixelImpl_Injected_m3338020812 (Texture2D_t3840446185 * __this, int32_t ___image0, int32_t ___x1, int32_t ___y2, Color_t2555686324 * ___color3, const RuntimeMethod* method);
// System.Void UnityEngine.Texture2D::GetPixelBilinearImpl_Injected(System.Int32,System.Single,System.Single,UnityEngine.Color&)
extern "C" IL2CPP_METHOD_ATTR void Texture2D_GetPixelBilinearImpl_Injected_m511713733 (Texture2D_t3840446185 * __this, int32_t ___image0, float ___x1, float ___y2, Color_t2555686324 * ___ret3, const RuntimeMethod* method);
// System.Void UnityEngine.Texture2D::ReadPixelsImpl_Injected(UnityEngine.Rect&,System.Int32,System.Int32,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void Texture2D_ReadPixelsImpl_Injected_m2454631042 (Texture2D_t3840446185 * __this, Rect_t2360479859 * ___source0, int32_t ___destX1, int32_t ___destY2, bool ___recalculateMipMaps3, const RuntimeMethod* method);
// System.Boolean UnityEngine.Texture2D::IsReadable()
extern "C" IL2CPP_METHOD_ATTR bool Texture2D_IsReadable_m47074913 (Texture2D_t3840446185 * __this, const RuntimeMethod* method);
// UnityEngine.UnityException UnityEngine.Texture::CreateNonReadableException(UnityEngine.Texture)
extern "C" IL2CPP_METHOD_ATTR UnityException_t3598173660 * Texture_CreateNonReadableException_m1462630389 (Texture_t3661962703 * __this, Texture_t3661962703 * ___t0, const RuntimeMethod* method);
// System.Void UnityEngine.Texture2D::SetPixelImpl(System.Int32,System.Int32,System.Int32,UnityEngine.Color)
extern "C" IL2CPP_METHOD_ATTR void Texture2D_SetPixelImpl_m3515369686 (Texture2D_t3840446185 * __this, int32_t ___image0, int32_t ___x1, int32_t ___y2, Color_t2555686324  ___color3, const RuntimeMethod* method);
// System.Void UnityEngine.Texture2D::SetPixelsImpl(System.Int32,System.Int32,System.Int32,System.Int32,UnityEngine.Color[],System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void Texture2D_SetPixelsImpl_m1199623022 (Texture2D_t3840446185 * __this, int32_t ___x0, int32_t ___y1, int32_t ___w2, int32_t ___h3, ColorU5BU5D_t941916413* ___pixel4, int32_t ___miplevel5, int32_t ___frame6, const RuntimeMethod* method);
// System.Void UnityEngine.Texture2D::SetPixels(System.Int32,System.Int32,System.Int32,System.Int32,UnityEngine.Color[],System.Int32)
extern "C" IL2CPP_METHOD_ATTR void Texture2D_SetPixels_m639021706 (Texture2D_t3840446185 * __this, int32_t ___x0, int32_t ___y1, int32_t ___blockWidth2, int32_t ___blockHeight3, ColorU5BU5D_t941916413* ___colors4, int32_t ___miplevel5, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Texture2D::GetPixelBilinearImpl(System.Int32,System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR Color_t2555686324  Texture2D_GetPixelBilinearImpl_m3066735611 (Texture2D_t3840446185 * __this, int32_t ___image0, float ___x1, float ___y2, const RuntimeMethod* method);
// System.Boolean UnityEngine.Texture2D::LoadRawTextureDataImplArray(System.Byte[])
extern "C" IL2CPP_METHOD_ATTR bool Texture2D_LoadRawTextureDataImplArray_m2906611301 (Texture2D_t3840446185 * __this, ByteU5BU5D_t4116647657* ___data0, const RuntimeMethod* method);
// System.Void UnityEngine.Texture2D::ApplyImpl(System.Boolean,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void Texture2D_ApplyImpl_m2371374512 (Texture2D_t3840446185 * __this, bool ___updateMipmaps0, bool ___makeNoLongerReadable1, const RuntimeMethod* method);
// System.Void UnityEngine.Texture2D::Apply(System.Boolean,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void Texture2D_Apply_m2470606565 (Texture2D_t3840446185 * __this, bool ___updateMipmaps0, bool ___makeNoLongerReadable1, const RuntimeMethod* method);
// System.Boolean UnityEngine.Texture2D::ResizeWithFormatImpl(System.Int32,System.Int32,UnityEngine.TextureFormat,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR bool Texture2D_ResizeWithFormatImpl_m3601868344 (Texture2D_t3840446185 * __this, int32_t ___width0, int32_t ___height1, int32_t ___format2, bool ___hasMipMap3, const RuntimeMethod* method);
// System.Void UnityEngine.Texture2D::ReadPixelsImpl(UnityEngine.Rect,System.Int32,System.Int32,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void Texture2D_ReadPixelsImpl_m1282786589 (Texture2D_t3840446185 * __this, Rect_t2360479859  ___source0, int32_t ___destX1, int32_t ___destY2, bool ___recalculateMipMaps3, const RuntimeMethod* method);
// System.Boolean UnityEngine.Texture::ValidateFormat(UnityEngine.Experimental.Rendering.GraphicsFormat,UnityEngine.Experimental.Rendering.FormatUsage)
extern "C" IL2CPP_METHOD_ATTR bool Texture_ValidateFormat_m3925257631 (Texture_t3661962703 * __this, int32_t ___format0, int32_t ___usage1, const RuntimeMethod* method);
// System.Void UnityEngine.Texture2DArray::Internal_Create(UnityEngine.Texture2DArray,System.Int32,System.Int32,System.Int32,UnityEngine.Experimental.Rendering.GraphicsFormat,UnityEngine.Experimental.Rendering.TextureCreationFlags)
extern "C" IL2CPP_METHOD_ATTR void Texture2DArray_Internal_Create_m2217927355 (RuntimeObject * __this /* static, unused */, Texture2DArray_t4044506685 * ___mono0, int32_t ___w1, int32_t ___h2, int32_t ___d3, int32_t ___format4, int32_t ___flags5, const RuntimeMethod* method);
// System.Void UnityEngine.Texture2DArray::.ctor(System.Int32,System.Int32,System.Int32,UnityEngine.TextureFormat,System.Boolean,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void Texture2DArray__ctor_m2627654179 (Texture2DArray_t4044506685 * __this, int32_t ___width0, int32_t ___height1, int32_t ___depth2, int32_t ___textureFormat3, bool ___mipChain4, bool ___linear5, const RuntimeMethod* method);
// System.Boolean UnityEngine.Texture2DArray::Internal_CreateImpl(UnityEngine.Texture2DArray,System.Int32,System.Int32,System.Int32,UnityEngine.Experimental.Rendering.GraphicsFormat,UnityEngine.Experimental.Rendering.TextureCreationFlags)
extern "C" IL2CPP_METHOD_ATTR bool Texture2DArray_Internal_CreateImpl_m1122945648 (RuntimeObject * __this /* static, unused */, Texture2DArray_t4044506685 * ___mono0, int32_t ___w1, int32_t ___h2, int32_t ___d3, int32_t ___format4, int32_t ___flags5, const RuntimeMethod* method);
// System.Void UnityEngine.Texture3D::Internal_Create(UnityEngine.Texture3D,System.Int32,System.Int32,System.Int32,UnityEngine.Experimental.Rendering.GraphicsFormat,UnityEngine.Experimental.Rendering.TextureCreationFlags)
extern "C" IL2CPP_METHOD_ATTR void Texture3D_Internal_Create_m4250388922 (RuntimeObject * __this /* static, unused */, Texture3D_t1884131049 * ___mono0, int32_t ___w1, int32_t ___h2, int32_t ___d3, int32_t ___format4, int32_t ___flags5, const RuntimeMethod* method);
// System.Boolean UnityEngine.Texture3D::Internal_CreateImpl(UnityEngine.Texture3D,System.Int32,System.Int32,System.Int32,UnityEngine.Experimental.Rendering.GraphicsFormat,UnityEngine.Experimental.Rendering.TextureCreationFlags)
extern "C" IL2CPP_METHOD_ATTR bool Texture3D_Internal_CreateImpl_m1882516456 (RuntimeObject * __this /* static, unused */, Texture3D_t1884131049 * ___mono0, int32_t ___w1, int32_t ___h2, int32_t ___d3, int32_t ___format4, int32_t ___flags5, const RuntimeMethod* method);
// System.Int32 UnityEngine.Touch::get_fingerId()
extern "C" IL2CPP_METHOD_ATTR int32_t Touch_get_fingerId_m859576425 (Touch_t1921856868 * __this, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Touch::get_position()
extern "C" IL2CPP_METHOD_ATTR Vector2_t2156229523  Touch_get_position_m3109777936 (Touch_t1921856868 * __this, const RuntimeMethod* method);
// UnityEngine.TouchPhase UnityEngine.Touch::get_phase()
extern "C" IL2CPP_METHOD_ATTR int32_t Touch_get_phase_m214549210 (Touch_t1921856868 * __this, const RuntimeMethod* method);
// UnityEngine.TouchType UnityEngine.Touch::get_type()
extern "C" IL2CPP_METHOD_ATTR int32_t Touch_get_type_m960232264 (Touch_t1921856868 * __this, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Object__ctor_m297566312 (RuntimeObject * __this, const RuntimeMethod* method);
// System.UInt32 System.Convert::ToUInt32(System.Object)
extern "C" IL2CPP_METHOD_ATTR uint32_t Convert_ToUInt32_m668801151 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, const RuntimeMethod* method);
// System.UInt32 System.Convert::ToUInt32(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR uint32_t Convert_ToUInt32_m835119716 (RuntimeObject * __this /* static, unused */, bool p0, const RuntimeMethod* method);
// System.IntPtr UnityEngine.TouchScreenKeyboard::TouchScreenKeyboard_InternalConstructorHelper(UnityEngine.TouchScreenKeyboard_InternalConstructorHelperArguments&,System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR intptr_t TouchScreenKeyboard_TouchScreenKeyboard_InternalConstructorHelper_m3610109468 (RuntimeObject * __this /* static, unused */, TouchScreenKeyboard_InternalConstructorHelperArguments_t1462448236 * ___arguments0, String_t* ___text1, String_t* ___textPlaceholder2, const RuntimeMethod* method);
// System.Boolean System.IntPtr::op_Inequality(System.IntPtr,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR bool IntPtr_op_Inequality_m3063970704 (RuntimeObject * __this /* static, unused */, intptr_t p0, intptr_t p1, const RuntimeMethod* method);
// System.Void UnityEngine.TouchScreenKeyboard::Internal_Destroy(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void TouchScreenKeyboard_Internal_Destroy_m2069062265 (RuntimeObject * __this /* static, unused */, intptr_t ___ptr0, const RuntimeMethod* method);
// System.Void System.GC::SuppressFinalize(System.Object)
extern "C" IL2CPP_METHOD_ATTR void GC_SuppressFinalize_m1177400158 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, const RuntimeMethod* method);
// System.Void UnityEngine.TouchScreenKeyboard::Destroy()
extern "C" IL2CPP_METHOD_ATTR void TouchScreenKeyboard_Destroy_m267768093 (TouchScreenKeyboard_t731888065 * __this, const RuntimeMethod* method);
// System.Void System.Object::Finalize()
extern "C" IL2CPP_METHOD_ATTR void Object_Finalize_m3076187857 (RuntimeObject * __this, const RuntimeMethod* method);
// UnityEngine.RuntimePlatform UnityEngine.Application::get_platform()
extern "C" IL2CPP_METHOD_ATTR int32_t Application_get_platform_m2150679437 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Void UnityEngine.TouchScreenKeyboard::.ctor(System.String,UnityEngine.TouchScreenKeyboardType,System.Boolean,System.Boolean,System.Boolean,System.Boolean,System.String,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void TouchScreenKeyboard__ctor_m2995022054 (TouchScreenKeyboard_t731888065 * __this, String_t* ___text0, int32_t ___keyboardType1, bool ___autocorrection2, bool ___multiline3, bool ___secure4, bool ___alert5, String_t* ___textPlaceholder6, int32_t ___characterLimit7, const RuntimeMethod* method);
// System.Void UnityEngine.TouchScreenKeyboard::GetSelection(System.Int32&,System.Int32&)
extern "C" IL2CPP_METHOD_ATTR void TouchScreenKeyboard_GetSelection_m1887070583 (RuntimeObject * __this /* static, unused */, int32_t* ___start0, int32_t* ___length1, const RuntimeMethod* method);
// System.Void UnityEngine.TouchScreenKeyboard::SetSelection(System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void TouchScreenKeyboard_SetSelection_m1870835676 (RuntimeObject * __this /* static, unused */, int32_t ___start0, int32_t ___length1, const RuntimeMethod* method);
// System.Boolean UnityEngine.TrackedReference::op_Equality(UnityEngine.TrackedReference,UnityEngine.TrackedReference)
extern "C" IL2CPP_METHOD_ATTR bool TrackedReference_op_Equality_m3702354772 (RuntimeObject * __this /* static, unused */, TrackedReference_t1199777556 * ___x0, TrackedReference_t1199777556 * ___y1, const RuntimeMethod* method);
// System.Int32 System.IntPtr::op_Explicit(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR int32_t IntPtr_op_Explicit_m4220076518 (RuntimeObject * __this /* static, unused */, intptr_t p0, const RuntimeMethod* method);
// System.Void UnityEngine.Component::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Component__ctor_m1928064382 (Component_t1923634451 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::get_position_Injected(UnityEngine.Vector3&)
extern "C" IL2CPP_METHOD_ATTR void Transform_get_position_Injected_m2186524752 (Transform_t3600365921 * __this, Vector3_t3722313464 * ___ret0, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_position_Injected(UnityEngine.Vector3&)
extern "C" IL2CPP_METHOD_ATTR void Transform_set_position_Injected_m139451673 (Transform_t3600365921 * __this, Vector3_t3722313464 * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::get_localPosition_Injected(UnityEngine.Vector3&)
extern "C" IL2CPP_METHOD_ATTR void Transform_get_localPosition_Injected_m2544841678 (Transform_t3600365921 * __this, Vector3_t3722313464 * ___ret0, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_localPosition_Injected(UnityEngine.Vector3&)
extern "C" IL2CPP_METHOD_ATTR void Transform_set_localPosition_Injected_m2951700666 (Transform_t3600365921 * __this, Vector3_t3722313464 * ___value0, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
extern "C" IL2CPP_METHOD_ATTR Quaternion_t2301928331  Transform_get_rotation_m3502953881 (Transform_t3600365921 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_forward()
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Vector3_get_forward_m3100859705 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Quaternion_op_Multiply_m2607404835 (RuntimeObject * __this /* static, unused */, Quaternion_t2301928331  ___rotation0, Vector3_t3722313464  ___point1, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::get_rotation_Injected(UnityEngine.Quaternion&)
extern "C" IL2CPP_METHOD_ATTR void Transform_get_rotation_Injected_m3838128444 (Transform_t3600365921 * __this, Quaternion_t2301928331 * ___ret0, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_rotation_Injected(UnityEngine.Quaternion&)
extern "C" IL2CPP_METHOD_ATTR void Transform_set_rotation_Injected_m51774119 (Transform_t3600365921 * __this, Quaternion_t2301928331 * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::get_localRotation_Injected(UnityEngine.Quaternion&)
extern "C" IL2CPP_METHOD_ATTR void Transform_get_localRotation_Injected_m1196986957 (Transform_t3600365921 * __this, Quaternion_t2301928331 * ___ret0, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_localRotation_Injected(UnityEngine.Quaternion&)
extern "C" IL2CPP_METHOD_ATTR void Transform_set_localRotation_Injected_m2477643206 (Transform_t3600365921 * __this, Quaternion_t2301928331 * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::get_localScale_Injected(UnityEngine.Vector3&)
extern "C" IL2CPP_METHOD_ATTR void Transform_get_localScale_Injected_m4238330512 (Transform_t3600365921 * __this, Vector3_t3722313464 * ___ret0, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_localScale_Injected(UnityEngine.Vector3&)
extern "C" IL2CPP_METHOD_ATTR void Transform_set_localScale_Injected_m2631109374 (Transform_t3600365921 * __this, Vector3_t3722313464 * ___value0, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Transform::get_parentInternal()
extern "C" IL2CPP_METHOD_ATTR Transform_t3600365921 * Transform_get_parentInternal_m1494967989 (Transform_t3600365921 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogWarning(System.Object,UnityEngine.Object)
extern "C" IL2CPP_METHOD_ATTR void Debug_LogWarning_m831581295 (RuntimeObject * __this /* static, unused */, RuntimeObject * ___message0, Object_t631007953 * ___context1, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_parentInternal(UnityEngine.Transform)
extern "C" IL2CPP_METHOD_ATTR void Transform_set_parentInternal_m2066300701 (Transform_t3600365921 * __this, Transform_t3600365921 * ___value0, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Transform::GetParent()
extern "C" IL2CPP_METHOD_ATTR Transform_t3600365921 * Transform_GetParent_m1669681345 (Transform_t3600365921 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::SetParent(UnityEngine.Transform)
extern "C" IL2CPP_METHOD_ATTR void Transform_SetParent_m381167889 (Transform_t3600365921 * __this, Transform_t3600365921 * ___p0, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::SetParent(UnityEngine.Transform,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void Transform_SetParent_m273471670 (Transform_t3600365921 * __this, Transform_t3600365921 * ___parent0, bool ___worldPositionStays1, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::get_worldToLocalMatrix_Injected(UnityEngine.Matrix4x4&)
extern "C" IL2CPP_METHOD_ATTR void Transform_get_worldToLocalMatrix_Injected_m3487540861 (Transform_t3600365921 * __this, Matrix4x4_t1817901843 * ___ret0, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::get_localToWorldMatrix_Injected(UnityEngine.Matrix4x4&)
extern "C" IL2CPP_METHOD_ATTR void Transform_get_localToWorldMatrix_Injected_m1424530041 (Transform_t3600365921 * __this, Matrix4x4_t1817901843 * ___ret0, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::TransformPoint_Injected(UnityEngine.Vector3&,UnityEngine.Vector3&)
extern "C" IL2CPP_METHOD_ATTR void Transform_TransformPoint_Injected_m4136387841 (Transform_t3600365921 * __this, Vector3_t3722313464 * ___position0, Vector3_t3722313464 * ___ret1, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::InverseTransformPoint_Injected(UnityEngine.Vector3&,UnityEngine.Vector3&)
extern "C" IL2CPP_METHOD_ATTR void Transform_InverseTransformPoint_Injected_m1034693445 (Transform_t3600365921 * __this, Vector3_t3722313464 * ___position0, Vector3_t3722313464 * ___ret1, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Transform::GetRoot()
extern "C" IL2CPP_METHOD_ATTR Transform_t3600365921 * Transform_GetRoot_m3965506025 (Transform_t3600365921 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::get_lossyScale_Injected(UnityEngine.Vector3&)
extern "C" IL2CPP_METHOD_ATTR void Transform_get_lossyScale_Injected_m1764174024 (Transform_t3600365921 * __this, Vector3_t3722313464 * ___ret0, const RuntimeMethod* method);
// System.Void UnityEngine.Transform/Enumerator::.ctor(UnityEngine.Transform)
extern "C" IL2CPP_METHOD_ATTR void Enumerator__ctor_m1351041375 (Enumerator_t3442430665 * __this, Transform_t3600365921 * ___outer0, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Transform::GetChild(System.Int32)
extern "C" IL2CPP_METHOD_ATTR Transform_t3600365921 * Transform_GetChild_m1092972975 (Transform_t3600365921 * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Int32 UnityEngine.Transform::get_childCount()
extern "C" IL2CPP_METHOD_ATTR int32_t Transform_get_childCount_m3145433196 (Transform_t3600365921 * __this, const RuntimeMethod* method);
// System.Void System.Action`1<UnityEngine.U2D.SpriteAtlas>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m3325790595 (Action_1_t819399007 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t819399007 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_1__ctor_m118522912_gshared)(__this, p0, p1, method);
}
// System.Void UnityEngine.U2D.SpriteAtlasManager/RequestAtlasCallback::Invoke(System.String,System.Action`1<UnityEngine.U2D.SpriteAtlas>)
extern "C" IL2CPP_METHOD_ATTR void RequestAtlasCallback_Invoke_m378128467 (RequestAtlasCallback_t3100554279 * __this, String_t* ___tag0, Action_1_t819399007 * ___action1, const RuntimeMethod* method);
// System.Void System.Action`1<UnityEngine.U2D.SpriteAtlas>::Invoke(!0)
inline void Action_1_Invoke_m3071717786 (Action_1_t819399007 * __this, SpriteAtlas_t646931412 * p0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t819399007 *, SpriteAtlas_t646931412 *, const RuntimeMethod*))Action_1_Invoke_m3161192644_gshared)(__this, p0, method);
}
// System.AppDomain System.AppDomain::get_CurrentDomain()
extern "C" IL2CPP_METHOD_ATTR AppDomain_t1571427825 * AppDomain_get_CurrentDomain_m182766250 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Void System.UnhandledExceptionEventHandler::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void UnhandledExceptionEventHandler__ctor_m626016213 (UnhandledExceptionEventHandler_t3101989324 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method);
// System.Void System.AppDomain::add_UnhandledException(System.UnhandledExceptionEventHandler)
extern "C" IL2CPP_METHOD_ATTR void AppDomain_add_UnhandledException_m66698413 (AppDomain_t1571427825 * __this, UnhandledExceptionEventHandler_t3101989324 * p0, const RuntimeMethod* method);
// System.Object System.UnhandledExceptionEventArgs::get_ExceptionObject()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * UnhandledExceptionEventArgs_get_ExceptionObject_m862578480 (UnhandledExceptionEventArgs_t2886101344 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.UnhandledExceptionHandler::PrintException(System.String,System.Exception)
extern "C" IL2CPP_METHOD_ATTR void UnhandledExceptionHandler_PrintException_m385608237 (RuntimeObject * __this /* static, unused */, String_t* ___title0, Exception_t * ___e1, const RuntimeMethod* method);
// System.Void UnityEngine.UnhandledExceptionHandler::NativeUnhandledExceptionHandler(System.String,System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR void UnhandledExceptionHandler_NativeUnhandledExceptionHandler_m2534568686 (RuntimeObject * __this /* static, unused */, String_t* ___managedExceptionType0, String_t* ___managedExceptionMessage1, String_t* ___managedExceptionStack2, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogException(System.Exception)
extern "C" IL2CPP_METHOD_ATTR void Debug_LogException_m2207318968 (RuntimeObject * __this /* static, unused */, Exception_t * ___exception0, const RuntimeMethod* method);
// System.Void System.Exception::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void Exception__ctor_m1152696503 (Exception_t * __this, String_t* p0, const RuntimeMethod* method);
// System.Void System.Exception::set_HResult(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void Exception_set_HResult_m3489164646 (Exception_t * __this, int32_t p0, const RuntimeMethod* method);
// System.Void System.Exception::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" IL2CPP_METHOD_ATTR void Exception__ctor_m2499432361 (Exception_t * __this, SerializationInfo_t950877179 * p0, StreamingContext_t3711869237  p1, const RuntimeMethod* method);
// System.Void System.IO.TextWriter::.ctor()
extern "C" IL2CPP_METHOD_ATTR void TextWriter__ctor_m2859954372 (TextWriter_t3478189236 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.UnityLogWriter::WriteStringToUnityLogImpl(System.String)
extern "C" IL2CPP_METHOD_ATTR void UnityLogWriter_WriteStringToUnityLogImpl_m2026412198 (RuntimeObject * __this /* static, unused */, String_t* ___s0, const RuntimeMethod* method);
// System.Void UnityEngine.UnityLogWriter::.ctor()
extern "C" IL2CPP_METHOD_ATTR void UnityLogWriter__ctor_m1834616883 (UnityLogWriter_t1374348020 * __this, const RuntimeMethod* method);
// System.Void System.Console::SetOut(System.IO.TextWriter)
extern "C" IL2CPP_METHOD_ATTR void Console_SetOut_m286050082 (RuntimeObject * __this /* static, unused */, TextWriter_t3478189236 * p0, const RuntimeMethod* method);
// System.Text.Encoding System.Text.Encoding::get_UTF8()
extern "C" IL2CPP_METHOD_ATTR Encoding_t1523322056 * Encoding_get_UTF8_m1008486739 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.String System.Char::ToString()
extern "C" IL2CPP_METHOD_ATTR String_t* Char_ToString_m3588025615 (Il2CppChar* __this, const RuntimeMethod* method);
// System.Void UnityEngine.UnityLogWriter::WriteStringToUnityLog(System.String)
extern "C" IL2CPP_METHOD_ATTR void UnityLogWriter_WriteStringToUnityLog_m2695353836 (RuntimeObject * __this /* static, unused */, String_t* ___s0, const RuntimeMethod* method);
// System.String System.String::CreateString(System.Char[],System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR String_t* String_CreateString_m860434552 (String_t* __this, CharU5BU5D_t3528271667* ___val0, int32_t ___startIndex1, int32_t ___length2, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Queue`1<UnityEngine.UnitySynchronizationContext/WorkRequest>::.ctor(System.Int32)
inline void Queue_1__ctor_m1971992302 (Queue_1_t1200778106 * __this, int32_t p0, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_t1200778106 *, int32_t, const RuntimeMethod*))Queue_1__ctor_m1971992302_gshared)(__this, p0, method);
}
// System.Threading.Thread System.Threading.Thread::get_CurrentThread()
extern "C" IL2CPP_METHOD_ATTR Thread_t2300836069 * Thread_get_CurrentThread_m4142136012 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Int32 System.Threading.Thread::get_ManagedThreadId()
extern "C" IL2CPP_METHOD_ATTR int32_t Thread_get_ManagedThreadId_m1068113671 (Thread_t2300836069 * __this, const RuntimeMethod* method);
// System.Void System.Threading.SynchronizationContext::.ctor()
extern "C" IL2CPP_METHOD_ATTR void SynchronizationContext__ctor_m2514243817 (SynchronizationContext_t2326897723 * __this, const RuntimeMethod* method);
// System.Void System.Threading.SendOrPostCallback::Invoke(System.Object)
extern "C" IL2CPP_METHOD_ATTR void SendOrPostCallback_Invoke_m937799800 (SendOrPostCallback_t2750080073 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// System.Void System.Threading.ManualResetEvent::.ctor(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void ManualResetEvent__ctor_m4010886457 (ManualResetEvent_t451242010 * __this, bool p0, const RuntimeMethod* method);
// System.Void System.Threading.Monitor::Enter(System.Object)
extern "C" IL2CPP_METHOD_ATTR void Monitor_Enter_m2249409497 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, const RuntimeMethod* method);
// System.Void UnityEngine.UnitySynchronizationContext/WorkRequest::.ctor(System.Threading.SendOrPostCallback,System.Object,System.Threading.ManualResetEvent)
extern "C" IL2CPP_METHOD_ATTR void WorkRequest__ctor_m2665601953 (WorkRequest_t1354518612 * __this, SendOrPostCallback_t2750080073 * ___callback0, RuntimeObject * ___state1, ManualResetEvent_t451242010 * ___waitHandle2, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Queue`1<UnityEngine.UnitySynchronizationContext/WorkRequest>::Enqueue(!0)
inline void Queue_1_Enqueue_m1592503047 (Queue_1_t1200778106 * __this, WorkRequest_t1354518612  p0, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_t1200778106 *, WorkRequest_t1354518612 , const RuntimeMethod*))Queue_1_Enqueue_m1592503047_gshared)(__this, p0, method);
}
// System.Void System.Threading.Monitor::Exit(System.Object)
extern "C" IL2CPP_METHOD_ATTR void Monitor_Exit_m3585316909 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.Queue`1<UnityEngine.UnitySynchronizationContext/WorkRequest>::get_Count()
inline int32_t Queue_1_get_Count_m3368911732 (Queue_1_t1200778106 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Queue_1_t1200778106 *, const RuntimeMethod*))Queue_1_get_Count_m3368911732_gshared)(__this, method);
}
// !0 System.Collections.Generic.Queue`1<UnityEngine.UnitySynchronizationContext/WorkRequest>::Dequeue()
inline WorkRequest_t1354518612  Queue_1_Dequeue_m979967976 (Queue_1_t1200778106 * __this, const RuntimeMethod* method)
{
	return ((  WorkRequest_t1354518612  (*) (Queue_1_t1200778106 *, const RuntimeMethod*))Queue_1_Dequeue_m979967976_gshared)(__this, method);
}
// System.Void UnityEngine.UnitySynchronizationContext/WorkRequest::Invoke()
extern "C" IL2CPP_METHOD_ATTR void WorkRequest_Invoke_m3488164927 (WorkRequest_t1354518612 * __this, const RuntimeMethod* method);
// System.Threading.SynchronizationContext System.Threading.SynchronizationContext::get_Current()
extern "C" IL2CPP_METHOD_ATTR SynchronizationContext_t2326897723 * SynchronizationContext_get_Current_m3666546046 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Void UnityEngine.UnitySynchronizationContext::.ctor()
extern "C" IL2CPP_METHOD_ATTR void UnitySynchronizationContext__ctor_m1707488257 (UnitySynchronizationContext_t1887453786 * __this, const RuntimeMethod* method);
// System.Void System.Threading.SynchronizationContext::SetSynchronizationContext(System.Threading.SynchronizationContext)
extern "C" IL2CPP_METHOD_ATTR void SynchronizationContext_SetSynchronizationContext_m1249070039 (RuntimeObject * __this /* static, unused */, SynchronizationContext_t2326897723 * p0, const RuntimeMethod* method);
// System.Void UnityEngine.UnitySynchronizationContext::Exec()
extern "C" IL2CPP_METHOD_ATTR void UnitySynchronizationContext_Exec_m3359802660 (UnitySynchronizationContext_t1887453786 * __this, const RuntimeMethod* method);
// System.Boolean System.Threading.EventWaitHandle::Set()
extern "C" IL2CPP_METHOD_ATTR bool EventWaitHandle_Set_m2445193251 (EventWaitHandle_t777845177 * __this, const RuntimeMethod* method);
// System.Void System.IndexOutOfRangeException::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void IndexOutOfRangeException__ctor_m3408750441 (IndexOutOfRangeException_t1578797820 * __this, String_t* p0, const RuntimeMethod* method);
// System.Single UnityEngine.Vector2::get_Item(System.Int32)
extern "C" IL2CPP_METHOD_ATTR float Vector2_get_Item_m3559215723 (Vector2_t2156229523 * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Void UnityEngine.Vector2::set_Item(System.Int32,System.Single)
extern "C" IL2CPP_METHOD_ATTR void Vector2_set_Item_m3557490725 (Vector2_t2156229523 * __this, int32_t ___index0, float ___value1, const RuntimeMethod* method);
// System.String UnityEngine.UnityString::Format(System.String,System.Object[])
extern "C" IL2CPP_METHOD_ATTR String_t* UnityString_Format_m261690510 (RuntimeObject * __this /* static, unused */, String_t* p0, ObjectU5BU5D_t2843939325* p1, const RuntimeMethod* method);
// System.String UnityEngine.Vector2::ToString()
extern "C" IL2CPP_METHOD_ATTR String_t* Vector2_ToString_m1205609053 (Vector2_t2156229523 * __this, const RuntimeMethod* method);
// System.Int32 System.Single::GetHashCode()
extern "C" IL2CPP_METHOD_ATTR int32_t Single_GetHashCode_m1558506138 (float* __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.Vector2::GetHashCode()
extern "C" IL2CPP_METHOD_ATTR int32_t Vector2_GetHashCode_m3916089713 (Vector2_t2156229523 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Vector2::Equals(UnityEngine.Vector2)
extern "C" IL2CPP_METHOD_ATTR bool Vector2_Equals_m1313188271 (Vector2_t2156229523 * __this, Vector2_t2156229523  ___other0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Vector2::Equals(System.Object)
extern "C" IL2CPP_METHOD_ATTR bool Vector2_Equals_m832062989 (Vector2_t2156229523 * __this, RuntimeObject * ___other0, const RuntimeMethod* method);
// System.Boolean System.Single::Equals(System.Single)
extern "C" IL2CPP_METHOD_ATTR bool Single_Equals_m1601893879 (float* __this, float p0, const RuntimeMethod* method);
// System.Single UnityEngine.Vector2::get_magnitude()
extern "C" IL2CPP_METHOD_ATTR float Vector2_get_magnitude_m2752892833 (Vector2_t2156229523 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Vector2::get_sqrMagnitude()
extern "C" IL2CPP_METHOD_ATTR float Vector2_get_sqrMagnitude_m837837635 (Vector2_t2156229523 * __this, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::op_Subtraction(UnityEngine.Vector2,UnityEngine.Vector2)
extern "C" IL2CPP_METHOD_ATTR Vector2_t2156229523  Vector2_op_Subtraction_m73004381 (RuntimeObject * __this /* static, unused */, Vector2_t2156229523  ___a0, Vector2_t2156229523  ___b1, const RuntimeMethod* method);
// System.Boolean UnityEngine.Vector2::op_Equality(UnityEngine.Vector2,UnityEngine.Vector2)
extern "C" IL2CPP_METHOD_ATTR bool Vector2_op_Equality_m2303255133 (RuntimeObject * __this /* static, unused */, Vector2_t2156229523  ___lhs0, Vector2_t2156229523  ___rhs1, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR void Vector3__ctor_m3353183577 (Vector3_t3722313464 * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR void Vector3__ctor_m1719387948 (Vector3_t3722313464 * __this, float ___x0, float ___y1, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Clamp01(System.Single)
extern "C" IL2CPP_METHOD_ATTR float Mathf_Clamp01_m56433566 (RuntimeObject * __this /* static, unused */, float ___value0, const RuntimeMethod* method);
// System.Single UnityEngine.Vector3::get_Item(System.Int32)
extern "C" IL2CPP_METHOD_ATTR float Vector3_get_Item_m668685504 (Vector3_t3722313464 * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::set_Item(System.Int32,System.Single)
extern "C" IL2CPP_METHOD_ATTR void Vector3_set_Item_m1772472431 (Vector3_t3722313464 * __this, int32_t ___index0, float ___value1, const RuntimeMethod* method);
// System.Int32 UnityEngine.Vector3::GetHashCode()
extern "C" IL2CPP_METHOD_ATTR int32_t Vector3_GetHashCode_m2879461828 (Vector3_t3722313464 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Vector3::Equals(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR bool Vector3_Equals_m906392898 (Vector3_t3722313464 * __this, Vector3_t3722313464  ___other0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Vector3::Equals(System.Object)
extern "C" IL2CPP_METHOD_ATTR bool Vector3_Equals_m1753054704 (Vector3_t3722313464 * __this, RuntimeObject * ___other0, const RuntimeMethod* method);
// System.Single UnityEngine.Vector3::Magnitude(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR float Vector3_Magnitude_m3447562852 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  ___vector0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Division(UnityEngine.Vector3,System.Single)
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Vector3_op_Division_m510815599 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  ___a0, float ___d1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::Normalize(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Vector3_Normalize_m2941713846 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  ___value0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_normalized()
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Vector3_get_normalized_m2454957984 (Vector3_t3722313464 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Vector3::get_sqrMagnitude()
extern "C" IL2CPP_METHOD_ATTR float Vector3_get_sqrMagnitude_m1474274574 (Vector3_t3722313464 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Vector3::Dot(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR float Vector3_Dot_m606404487 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  ___lhs0, Vector3_t3722313464  ___rhs1, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Clamp(System.Single,System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR float Mathf_Clamp_m3350697880 (RuntimeObject * __this /* static, unused */, float ___value0, float ___min1, float ___max2, const RuntimeMethod* method);
// System.Single UnityEngine.Vector3::get_magnitude()
extern "C" IL2CPP_METHOD_ATTR float Vector3_get_magnitude_m27958459 (Vector3_t3722313464 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Min(System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR float Mathf_Min_m1073399594 (RuntimeObject * __this /* static, unused */, float ___a0, float ___b1, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Max(System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR float Mathf_Max_m3146388979 (RuntimeObject * __this /* static, unused */, float ___a0, float ___b1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Vector3_op_Subtraction_m3073674971 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  ___a0, Vector3_t3722313464  ___b1, const RuntimeMethod* method);
// System.Single UnityEngine.Vector3::SqrMagnitude(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR float Vector3_SqrMagnitude_m3025115945 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  ___vector0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Vector3::op_Equality(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR bool Vector3_op_Equality_m4231250055 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  ___lhs0, Vector3_t3722313464  ___rhs1, const RuntimeMethod* method);
// System.String UnityEngine.Vector3::ToString()
extern "C" IL2CPP_METHOD_ATTR String_t* Vector3_ToString_m759076600 (Vector3_t3722313464 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Vector4::.ctor(System.Single,System.Single,System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR void Vector4__ctor_m2498754347 (Vector4_t3319028937 * __this, float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method);
// System.Single UnityEngine.Vector4::get_Item(System.Int32)
extern "C" IL2CPP_METHOD_ATTR float Vector4_get_Item_m2380866393 (Vector4_t3319028937 * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Void UnityEngine.Vector4::set_Item(System.Int32,System.Single)
extern "C" IL2CPP_METHOD_ATTR void Vector4_set_Item_m1183742235 (Vector4_t3319028937 * __this, int32_t ___index0, float ___value1, const RuntimeMethod* method);
// System.Int32 UnityEngine.Vector4::GetHashCode()
extern "C" IL2CPP_METHOD_ATTR int32_t Vector4_GetHashCode_m536821243 (Vector4_t3319028937 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Vector4::Equals(UnityEngine.Vector4)
extern "C" IL2CPP_METHOD_ATTR bool Vector4_Equals_m342438869 (Vector4_t3319028937 * __this, Vector4_t3319028937  ___other0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Vector4::Equals(System.Object)
extern "C" IL2CPP_METHOD_ATTR bool Vector4_Equals_m1779210055 (Vector4_t3319028937 * __this, RuntimeObject * ___other0, const RuntimeMethod* method);
// System.Single UnityEngine.Vector4::Dot(UnityEngine.Vector4,UnityEngine.Vector4)
extern "C" IL2CPP_METHOD_ATTR float Vector4_Dot_m3492158352 (RuntimeObject * __this /* static, unused */, Vector4_t3319028937  ___a0, Vector4_t3319028937  ___b1, const RuntimeMethod* method);
// System.Single UnityEngine.Vector4::get_sqrMagnitude()
extern "C" IL2CPP_METHOD_ATTR float Vector4_get_sqrMagnitude_m3767723558 (Vector4_t3319028937 * __this, const RuntimeMethod* method);
// UnityEngine.Vector4 UnityEngine.Vector4::op_Subtraction(UnityEngine.Vector4,UnityEngine.Vector4)
extern "C" IL2CPP_METHOD_ATTR Vector4_t3319028937  Vector4_op_Subtraction_m1632208160 (RuntimeObject * __this /* static, unused */, Vector4_t3319028937  ___a0, Vector4_t3319028937  ___b1, const RuntimeMethod* method);
// System.Single UnityEngine.Vector4::SqrMagnitude(UnityEngine.Vector4)
extern "C" IL2CPP_METHOD_ATTR float Vector4_SqrMagnitude_m1488236336 (RuntimeObject * __this /* static, unused */, Vector4_t3319028937  ___a0, const RuntimeMethod* method);
// System.String UnityEngine.Vector4::ToString()
extern "C" IL2CPP_METHOD_ATTR String_t* Vector4_ToString_m1596036856 (Vector4_t3319028937 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.YieldInstruction::.ctor()
extern "C" IL2CPP_METHOD_ATTR void YieldInstruction__ctor_m1498450609 (YieldInstruction_t403091072 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.CustomYieldInstruction::.ctor()
extern "C" IL2CPP_METHOD_ATTR void CustomYieldInstruction__ctor_m3408208142 (CustomYieldInstruction_t1895667560 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_realtimeSinceStartup()
extern "C" IL2CPP_METHOD_ATTR float Time_get_realtimeSinceStartup_m3141794964 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Void UnityEngine.iOS.NotificationHelper::DestroyLocal(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void NotificationHelper_DestroyLocal_m2248823824 (RuntimeObject * __this /* static, unused */, intptr_t ___target0, const RuntimeMethod* method);
// System.Void System.DateTime::.ctor(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.DateTimeKind)
extern "C" IL2CPP_METHOD_ATTR void DateTime__ctor_m2956360140 (DateTime_t3738529785 * __this, int32_t p0, int32_t p1, int32_t p2, int32_t p3, int32_t p4, int32_t p5, int32_t p6, const RuntimeMethod* method);
// System.Int64 System.DateTime::get_Ticks()
extern "C" IL2CPP_METHOD_ATTR int64_t DateTime_get_Ticks_m1550640881 (DateTime_t3738529785 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.iOS.NotificationHelper::DestroyRemote(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void NotificationHelper_DestroyRemote_m3390574007 (RuntimeObject * __this /* static, unused */, intptr_t ___target0, const RuntimeMethod* method);
// System.Void System.Collections.Stack::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Stack__ctor_m2907601956 (Stack_t2329662280 * __this, const RuntimeMethod* method);
// System.Delegate System.Delegate::CreateDelegate(System.Type,System.Object,System.Reflection.MethodInfo)
extern "C" IL2CPP_METHOD_ATTR Delegate_t1188392813 * Delegate_CreateDelegate_m995503480 (RuntimeObject * __this /* static, unused */, Type_t * p0, RuntimeObject * p1, MethodInfo_t * p2, const RuntimeMethod* method);
// System.Reflection.MethodInfo System.Delegate::get_Method()
extern "C" IL2CPP_METHOD_ATTR MethodInfo_t * Delegate_get_Method_m3071622864 (Delegate_t1188392813 * __this, const RuntimeMethod* method);
// System.Delegate System.Delegate::CreateDelegate(System.Type,System.Reflection.MethodInfo)
extern "C" IL2CPP_METHOD_ATTR Delegate_t1188392813 * Delegate_CreateDelegate_m2396489936 (RuntimeObject * __this /* static, unused */, Type_t * p0, MethodInfo_t * p1, const RuntimeMethod* method);
// System.Void UnityEngineInternal.TypeInferenceRuleAttribute::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void TypeInferenceRuleAttribute__ctor_m2736695831 (TypeInferenceRuleAttribute_t254868554 * __this, String_t* ___rule0, const RuntimeMethod* method);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
// System.Void UnityEngine.RequireComponent::.ctor(System.Type)
extern "C" IL2CPP_METHOD_ATTR void RequireComponent__ctor_m886241599 (RequireComponent_t3490506609 * __this, Type_t * ___requiredComponent0, const RuntimeMethod* method)
{
	{
		Attribute__ctor_m1529526131(__this, /*hidden argument*/NULL);
		Type_t * L_0 = ___requiredComponent0;
		__this->set_m_Type0_0(L_0);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: UnityEngine.ResourceRequest
extern "C" void ResourceRequest_t3109103591_marshal_pinvoke(const ResourceRequest_t3109103591& unmarshaled, ResourceRequest_t3109103591_marshaled_pinvoke& marshaled)
{
	Exception_t* ___m_Type_3Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Type' of type 'ResourceRequest': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Type_3Exception, NULL, NULL);
}
extern "C" void ResourceRequest_t3109103591_marshal_pinvoke_back(const ResourceRequest_t3109103591_marshaled_pinvoke& marshaled, ResourceRequest_t3109103591& unmarshaled)
{
	Exception_t* ___m_Type_3Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Type' of type 'ResourceRequest': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Type_3Exception, NULL, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.ResourceRequest
extern "C" void ResourceRequest_t3109103591_marshal_pinvoke_cleanup(ResourceRequest_t3109103591_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.ResourceRequest
extern "C" void ResourceRequest_t3109103591_marshal_com(const ResourceRequest_t3109103591& unmarshaled, ResourceRequest_t3109103591_marshaled_com& marshaled)
{
	Exception_t* ___m_Type_3Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Type' of type 'ResourceRequest': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Type_3Exception, NULL, NULL);
}
extern "C" void ResourceRequest_t3109103591_marshal_com_back(const ResourceRequest_t3109103591_marshaled_com& marshaled, ResourceRequest_t3109103591& unmarshaled)
{
	Exception_t* ___m_Type_3Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Type' of type 'ResourceRequest': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Type_3Exception, NULL, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.ResourceRequest
extern "C" void ResourceRequest_t3109103591_marshal_com_cleanup(ResourceRequest_t3109103591_marshaled_com& marshaled)
{
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.Object UnityEngine.Resources::Load(System.String,System.Type)
extern "C" IL2CPP_METHOD_ATTR Object_t631007953 * Resources_Load_m3480190876 (RuntimeObject * __this /* static, unused */, String_t* ___path0, Type_t * ___systemTypeInstance1, const RuntimeMethod* method)
{
	typedef Object_t631007953 * (*Resources_Load_m3480190876_ftn) (String_t*, Type_t *);
	static Resources_Load_m3480190876_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Resources_Load_m3480190876_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Resources::Load(System.String,System.Type)");
	Object_t631007953 * retVal = _il2cpp_icall_func(___path0, ___systemTypeInstance1);
	return retVal;
}
// UnityEngine.Object UnityEngine.Resources::GetBuiltinResource(System.Type,System.String)
extern "C" IL2CPP_METHOD_ATTR Object_t631007953 * Resources_GetBuiltinResource_m3641967638 (RuntimeObject * __this /* static, unused */, Type_t * ___type0, String_t* ___path1, const RuntimeMethod* method)
{
	typedef Object_t631007953 * (*Resources_GetBuiltinResource_m3641967638_ftn) (Type_t *, String_t*);
	static Resources_GetBuiltinResource_m3641967638_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Resources_GetBuiltinResource_m3641967638_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Resources::GetBuiltinResource(System.Type,System.String)");
	Object_t631007953 * retVal = _il2cpp_icall_func(___type0, ___path1);
	return retVal;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
// System.Void UnityEngine.RuntimeInitializeOnLoadMethodAttribute::.ctor(UnityEngine.RuntimeInitializeLoadType)
extern "C" IL2CPP_METHOD_ATTR void RuntimeInitializeOnLoadMethodAttribute__ctor_m787294852 (RuntimeInitializeOnLoadMethodAttribute_t3192313494 * __this, int32_t ___loadType0, const RuntimeMethod* method)
{
	{
		PreserveAttribute__ctor_m1123812627(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___loadType0;
		RuntimeInitializeOnLoadMethodAttribute_set_loadType_m1884529061(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.RuntimeInitializeOnLoadMethodAttribute::set_loadType(UnityEngine.RuntimeInitializeLoadType)
extern "C" IL2CPP_METHOD_ATTR void RuntimeInitializeOnLoadMethodAttribute_set_loadType_m1884529061 (RuntimeInitializeOnLoadMethodAttribute_t3192313494 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CloadTypeU3Ek__BackingField_0(L_0);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.String UnityEngine.SceneManagement.Scene::GetNameInternal(System.Int32)
extern "C" IL2CPP_METHOD_ATTR String_t* Scene_GetNameInternal_m992487900 (RuntimeObject * __this /* static, unused */, int32_t ___sceneHandle0, const RuntimeMethod* method)
{
	typedef String_t* (*Scene_GetNameInternal_m992487900_ftn) (int32_t);
	static Scene_GetNameInternal_m992487900_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Scene_GetNameInternal_m992487900_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.SceneManagement.Scene::GetNameInternal(System.Int32)");
	String_t* retVal = _il2cpp_icall_func(___sceneHandle0);
	return retVal;
}
// System.Int32 UnityEngine.SceneManagement.Scene::get_handle()
extern "C" IL2CPP_METHOD_ATTR int32_t Scene_get_handle_m1544696971 (Scene_t2348375561 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_m_Handle_0();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
extern "C"  int32_t Scene_get_handle_m1544696971_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	Scene_t2348375561 * _thisAdjusted = reinterpret_cast<Scene_t2348375561 *>(__this + 1);
	return Scene_get_handle_m1544696971(_thisAdjusted, method);
}
// System.String UnityEngine.SceneManagement.Scene::get_name()
extern "C" IL2CPP_METHOD_ATTR String_t* Scene_get_name_m622963475 (Scene_t2348375561 * __this, const RuntimeMethod* method)
{
	String_t* V_0 = NULL;
	{
		int32_t L_0 = Scene_get_handle_m1544696971((Scene_t2348375561 *)__this, /*hidden argument*/NULL);
		String_t* L_1 = Scene_GetNameInternal_m992487900(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_0012;
	}

IL_0012:
	{
		String_t* L_2 = V_0;
		return L_2;
	}
}
extern "C"  String_t* Scene_get_name_m622963475_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	Scene_t2348375561 * _thisAdjusted = reinterpret_cast<Scene_t2348375561 *>(__this + 1);
	return Scene_get_name_m622963475(_thisAdjusted, method);
}
// System.Int32 UnityEngine.SceneManagement.Scene::GetHashCode()
extern "C" IL2CPP_METHOD_ATTR int32_t Scene_GetHashCode_m2998285532 (Scene_t2348375561 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_m_Handle_0();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
extern "C"  int32_t Scene_GetHashCode_m2998285532_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	Scene_t2348375561 * _thisAdjusted = reinterpret_cast<Scene_t2348375561 *>(__this + 1);
	return Scene_GetHashCode_m2998285532(_thisAdjusted, method);
}
// System.Boolean UnityEngine.SceneManagement.Scene::Equals(System.Object)
extern "C" IL2CPP_METHOD_ATTR bool Scene_Equals_m581999093 (Scene_t2348375561 * __this, RuntimeObject * ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Scene_Equals_m581999093_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Scene_t2348375561  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		RuntimeObject * L_0 = ___other0;
		if (((RuntimeObject *)IsInstSealed((RuntimeObject*)L_0, Scene_t2348375561_il2cpp_TypeInfo_var)))
		{
			goto IL_0013;
		}
	}
	{
		V_0 = (bool)0;
		goto IL_002f;
	}

IL_0013:
	{
		RuntimeObject * L_1 = ___other0;
		V_1 = ((*(Scene_t2348375561 *)((Scene_t2348375561 *)UnBox(L_1, Scene_t2348375561_il2cpp_TypeInfo_var))));
		int32_t L_2 = Scene_get_handle_m1544696971((Scene_t2348375561 *)__this, /*hidden argument*/NULL);
		int32_t L_3 = Scene_get_handle_m1544696971((Scene_t2348375561 *)(&V_1), /*hidden argument*/NULL);
		V_0 = (bool)((((int32_t)L_2) == ((int32_t)L_3))? 1 : 0);
		goto IL_002f;
	}

IL_002f:
	{
		bool L_4 = V_0;
		return L_4;
	}
}
extern "C"  bool Scene_Equals_m581999093_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___other0, const RuntimeMethod* method)
{
	Scene_t2348375561 * _thisAdjusted = reinterpret_cast<Scene_t2348375561 *>(__this + 1);
	return Scene_Equals_m581999093(_thisAdjusted, ___other0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.SceneManagement.SceneManager::add_sceneLoaded(UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.LoadSceneMode>)
extern "C" IL2CPP_METHOD_ATTR void SceneManager_add_sceneLoaded_m3678832055 (RuntimeObject * __this /* static, unused */, UnityAction_2_t2165061829 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SceneManager_add_sceneLoaded_m3678832055_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	UnityAction_2_t2165061829 * V_0 = NULL;
	UnityAction_2_t2165061829 * V_1 = NULL;
	{
		UnityAction_2_t2165061829 * L_0 = ((SceneManager_t2787271929_StaticFields*)il2cpp_codegen_static_fields_for(SceneManager_t2787271929_il2cpp_TypeInfo_var))->get_sceneLoaded_0();
		V_0 = L_0;
	}

IL_0006:
	{
		UnityAction_2_t2165061829 * L_1 = V_0;
		V_1 = L_1;
		UnityAction_2_t2165061829 * L_2 = V_1;
		UnityAction_2_t2165061829 * L_3 = ___value0;
		Delegate_t1188392813 * L_4 = Delegate_Combine_m1859655160(NULL /*static, unused*/, L_2, L_3, /*hidden argument*/NULL);
		UnityAction_2_t2165061829 * L_5 = V_0;
		UnityAction_2_t2165061829 * L_6 = InterlockedCompareExchangeImpl<UnityAction_2_t2165061829 *>((UnityAction_2_t2165061829 **)(((SceneManager_t2787271929_StaticFields*)il2cpp_codegen_static_fields_for(SceneManager_t2787271929_il2cpp_TypeInfo_var))->get_address_of_sceneLoaded_0()), ((UnityAction_2_t2165061829 *)CastclassSealed((RuntimeObject*)L_4, UnityAction_2_t2165061829_il2cpp_TypeInfo_var)), L_5);
		V_0 = L_6;
		UnityAction_2_t2165061829 * L_7 = V_0;
		UnityAction_2_t2165061829 * L_8 = V_1;
		if ((!(((RuntimeObject*)(UnityAction_2_t2165061829 *)L_7) == ((RuntimeObject*)(UnityAction_2_t2165061829 *)L_8))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.SceneManagement.SceneManager::remove_sceneLoaded(UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.LoadSceneMode>)
extern "C" IL2CPP_METHOD_ATTR void SceneManager_remove_sceneLoaded_m2345981904 (RuntimeObject * __this /* static, unused */, UnityAction_2_t2165061829 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SceneManager_remove_sceneLoaded_m2345981904_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	UnityAction_2_t2165061829 * V_0 = NULL;
	UnityAction_2_t2165061829 * V_1 = NULL;
	{
		UnityAction_2_t2165061829 * L_0 = ((SceneManager_t2787271929_StaticFields*)il2cpp_codegen_static_fields_for(SceneManager_t2787271929_il2cpp_TypeInfo_var))->get_sceneLoaded_0();
		V_0 = L_0;
	}

IL_0006:
	{
		UnityAction_2_t2165061829 * L_1 = V_0;
		V_1 = L_1;
		UnityAction_2_t2165061829 * L_2 = V_1;
		UnityAction_2_t2165061829 * L_3 = ___value0;
		Delegate_t1188392813 * L_4 = Delegate_Remove_m334097152(NULL /*static, unused*/, L_2, L_3, /*hidden argument*/NULL);
		UnityAction_2_t2165061829 * L_5 = V_0;
		UnityAction_2_t2165061829 * L_6 = InterlockedCompareExchangeImpl<UnityAction_2_t2165061829 *>((UnityAction_2_t2165061829 **)(((SceneManager_t2787271929_StaticFields*)il2cpp_codegen_static_fields_for(SceneManager_t2787271929_il2cpp_TypeInfo_var))->get_address_of_sceneLoaded_0()), ((UnityAction_2_t2165061829 *)CastclassSealed((RuntimeObject*)L_4, UnityAction_2_t2165061829_il2cpp_TypeInfo_var)), L_5);
		V_0 = L_6;
		UnityAction_2_t2165061829 * L_7 = V_0;
		UnityAction_2_t2165061829 * L_8 = V_1;
		if ((!(((RuntimeObject*)(UnityAction_2_t2165061829 *)L_7) == ((RuntimeObject*)(UnityAction_2_t2165061829 *)L_8))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.SceneManagement.SceneManager::Internal_SceneLoaded(UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.LoadSceneMode)
extern "C" IL2CPP_METHOD_ATTR void SceneManager_Internal_SceneLoaded_m2694652025 (RuntimeObject * __this /* static, unused */, Scene_t2348375561  ___scene0, int32_t ___mode1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SceneManager_Internal_SceneLoaded_m2694652025_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityAction_2_t2165061829 * L_0 = ((SceneManager_t2787271929_StaticFields*)il2cpp_codegen_static_fields_for(SceneManager_t2787271929_il2cpp_TypeInfo_var))->get_sceneLoaded_0();
		if (!L_0)
		{
			goto IL_0019;
		}
	}
	{
		UnityAction_2_t2165061829 * L_1 = ((SceneManager_t2787271929_StaticFields*)il2cpp_codegen_static_fields_for(SceneManager_t2787271929_il2cpp_TypeInfo_var))->get_sceneLoaded_0();
		Scene_t2348375561  L_2 = ___scene0;
		int32_t L_3 = ___mode1;
		NullCheck(L_1);
		UnityAction_2_Invoke_m1541286357(L_1, L_2, L_3, /*hidden argument*/UnityAction_2_Invoke_m1541286357_RuntimeMethod_var);
	}

IL_0019:
	{
		return;
	}
}
// System.Void UnityEngine.SceneManagement.SceneManager::Internal_SceneUnloaded(UnityEngine.SceneManagement.Scene)
extern "C" IL2CPP_METHOD_ATTR void SceneManager_Internal_SceneUnloaded_m3247148570 (RuntimeObject * __this /* static, unused */, Scene_t2348375561  ___scene0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SceneManager_Internal_SceneUnloaded_m3247148570_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityAction_1_t2933211702 * L_0 = ((SceneManager_t2787271929_StaticFields*)il2cpp_codegen_static_fields_for(SceneManager_t2787271929_il2cpp_TypeInfo_var))->get_sceneUnloaded_1();
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		UnityAction_1_t2933211702 * L_1 = ((SceneManager_t2787271929_StaticFields*)il2cpp_codegen_static_fields_for(SceneManager_t2787271929_il2cpp_TypeInfo_var))->get_sceneUnloaded_1();
		Scene_t2348375561  L_2 = ___scene0;
		NullCheck(L_1);
		UnityAction_1_Invoke_m3649732398(L_1, L_2, /*hidden argument*/UnityAction_1_Invoke_m3649732398_RuntimeMethod_var);
	}

IL_0018:
	{
		return;
	}
}
// System.Void UnityEngine.SceneManagement.SceneManager::Internal_ActiveSceneChanged(UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.Scene)
extern "C" IL2CPP_METHOD_ATTR void SceneManager_Internal_ActiveSceneChanged_m3676176255 (RuntimeObject * __this /* static, unused */, Scene_t2348375561  ___previousActiveScene0, Scene_t2348375561  ___newActiveScene1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SceneManager_Internal_ActiveSceneChanged_m3676176255_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityAction_2_t1262235195 * L_0 = ((SceneManager_t2787271929_StaticFields*)il2cpp_codegen_static_fields_for(SceneManager_t2787271929_il2cpp_TypeInfo_var))->get_activeSceneChanged_2();
		if (!L_0)
		{
			goto IL_0019;
		}
	}
	{
		UnityAction_2_t1262235195 * L_1 = ((SceneManager_t2787271929_StaticFields*)il2cpp_codegen_static_fields_for(SceneManager_t2787271929_il2cpp_TypeInfo_var))->get_activeSceneChanged_2();
		Scene_t2348375561  L_2 = ___previousActiveScene0;
		Scene_t2348375561  L_3 = ___newActiveScene1;
		NullCheck(L_1);
		UnityAction_2_Invoke_m944492567(L_1, L_2, L_3, /*hidden argument*/UnityAction_2_Invoke_m944492567_RuntimeMethod_var);
	}

IL_0019:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Int32 UnityEngine.Screen::get_width()
extern "C" IL2CPP_METHOD_ATTR int32_t Screen_get_width_m345039817 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	typedef int32_t (*Screen_get_width_m345039817_ftn) ();
	static Screen_get_width_m345039817_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Screen_get_width_m345039817_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Screen::get_width()");
	int32_t retVal = _il2cpp_icall_func();
	return retVal;
}
// System.Int32 UnityEngine.Screen::get_height()
extern "C" IL2CPP_METHOD_ATTR int32_t Screen_get_height_m1623532518 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	typedef int32_t (*Screen_get_height_m1623532518_ftn) ();
	static Screen_get_height_m1623532518_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Screen_get_height_m1623532518_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Screen::get_height()");
	int32_t retVal = _il2cpp_icall_func();
	return retVal;
}
// System.Single UnityEngine.Screen::get_dpi()
extern "C" IL2CPP_METHOD_ATTR float Screen_get_dpi_m495672463 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	typedef float (*Screen_get_dpi_m495672463_ftn) ();
	static Screen_get_dpi_m495672463_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Screen_get_dpi_m495672463_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Screen::get_dpi()");
	float retVal = _il2cpp_icall_func();
	return retVal;
}
// System.Void UnityEngine.Screen::RequestOrientation(UnityEngine.ScreenOrientation)
extern "C" IL2CPP_METHOD_ATTR void Screen_RequestOrientation_m590940690 (RuntimeObject * __this /* static, unused */, int32_t ___orient0, const RuntimeMethod* method)
{
	typedef void (*Screen_RequestOrientation_m590940690_ftn) (int32_t);
	static Screen_RequestOrientation_m590940690_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Screen_RequestOrientation_m590940690_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Screen::RequestOrientation(UnityEngine.ScreenOrientation)");
	_il2cpp_icall_func(___orient0);
}
// UnityEngine.ScreenOrientation UnityEngine.Screen::GetScreenOrientation()
extern "C" IL2CPP_METHOD_ATTR int32_t Screen_GetScreenOrientation_m3552071186 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	typedef int32_t (*Screen_GetScreenOrientation_m3552071186_ftn) ();
	static Screen_GetScreenOrientation_m3552071186_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Screen_GetScreenOrientation_m3552071186_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Screen::GetScreenOrientation()");
	int32_t retVal = _il2cpp_icall_func();
	return retVal;
}
// UnityEngine.ScreenOrientation UnityEngine.Screen::get_orientation()
extern "C" IL2CPP_METHOD_ATTR int32_t Screen_get_orientation_m3354122719 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = Screen_GetScreenOrientation_m3552071186(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Screen::set_orientation(UnityEngine.ScreenOrientation)
extern "C" IL2CPP_METHOD_ATTR void Screen_set_orientation_m3561207030 (RuntimeObject * __this /* static, unused */, int32_t ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Screen_set_orientation_m3561207030_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___value0;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, _stringLiteral1173817491, /*hidden argument*/NULL);
		___value0 = 5;
	}

IL_0016:
	{
		int32_t L_1 = ___value0;
		Screen_RequestOrientation_m590940690(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Screen::set_sleepTimeout(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void Screen_set_sleepTimeout_m2277210665 (RuntimeObject * __this /* static, unused */, int32_t ___value0, const RuntimeMethod* method)
{
	typedef void (*Screen_set_sleepTimeout_m2277210665_ftn) (int32_t);
	static Screen_set_sleepTimeout_m2277210665_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Screen_set_sleepTimeout_m2277210665_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Screen::set_sleepTimeout(System.Int32)");
	_il2cpp_icall_func(___value0);
}
// System.Boolean UnityEngine.Screen::IsOrientationEnabled(UnityEngine.EnabledOrientation)
extern "C" IL2CPP_METHOD_ATTR bool Screen_IsOrientationEnabled_m3167960387 (RuntimeObject * __this /* static, unused */, int32_t ___orient0, const RuntimeMethod* method)
{
	typedef bool (*Screen_IsOrientationEnabled_m3167960387_ftn) (int32_t);
	static Screen_IsOrientationEnabled_m3167960387_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Screen_IsOrientationEnabled_m3167960387_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Screen::IsOrientationEnabled(UnityEngine.EnabledOrientation)");
	bool retVal = _il2cpp_icall_func(___orient0);
	return retVal;
}
// System.Void UnityEngine.Screen::SetOrientationEnabled(UnityEngine.EnabledOrientation,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void Screen_SetOrientationEnabled_m3998917148 (RuntimeObject * __this /* static, unused */, int32_t ___orient0, bool ___enabled1, const RuntimeMethod* method)
{
	typedef void (*Screen_SetOrientationEnabled_m3998917148_ftn) (int32_t, bool);
	static Screen_SetOrientationEnabled_m3998917148_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Screen_SetOrientationEnabled_m3998917148_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Screen::SetOrientationEnabled(UnityEngine.EnabledOrientation,System.Boolean)");
	_il2cpp_icall_func(___orient0, ___enabled1);
}
// System.Boolean UnityEngine.Screen::get_autorotateToPortrait()
extern "C" IL2CPP_METHOD_ATTR bool Screen_get_autorotateToPortrait_m2182472293 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		bool L_0 = Screen_IsOrientationEnabled_m3167960387(NULL /*static, unused*/, 1, /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Screen::set_autorotateToPortrait(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void Screen_set_autorotateToPortrait_m1045763776 (RuntimeObject * __this /* static, unused */, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		Screen_SetOrientationEnabled_m3998917148(NULL /*static, unused*/, 1, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean UnityEngine.Screen::get_autorotateToPortraitUpsideDown()
extern "C" IL2CPP_METHOD_ATTR bool Screen_get_autorotateToPortraitUpsideDown_m572819985 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		bool L_0 = Screen_IsOrientationEnabled_m3167960387(NULL /*static, unused*/, 2, /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Screen::set_autorotateToPortraitUpsideDown(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void Screen_set_autorotateToPortraitUpsideDown_m3828817431 (RuntimeObject * __this /* static, unused */, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		Screen_SetOrientationEnabled_m3998917148(NULL /*static, unused*/, 2, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean UnityEngine.Screen::get_autorotateToLandscapeLeft()
extern "C" IL2CPP_METHOD_ATTR bool Screen_get_autorotateToLandscapeLeft_m3176956641 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		bool L_0 = Screen_IsOrientationEnabled_m3167960387(NULL /*static, unused*/, 4, /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Screen::set_autorotateToLandscapeLeft(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void Screen_set_autorotateToLandscapeLeft_m1704103534 (RuntimeObject * __this /* static, unused */, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		Screen_SetOrientationEnabled_m3998917148(NULL /*static, unused*/, 4, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean UnityEngine.Screen::get_autorotateToLandscapeRight()
extern "C" IL2CPP_METHOD_ATTR bool Screen_get_autorotateToLandscapeRight_m2189973210 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		bool L_0 = Screen_IsOrientationEnabled_m3167960387(NULL /*static, unused*/, 8, /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Screen::set_autorotateToLandscapeRight(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void Screen_set_autorotateToLandscapeRight_m1238286300 (RuntimeObject * __this /* static, unused */, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		Screen_SetOrientationEnabled_m3998917148(NULL /*static, unused*/, 8, L_0, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
// Conversion methods for marshalling of: UnityEngine.ScriptableObject
extern "C" void ScriptableObject_t2528358522_marshal_pinvoke(const ScriptableObject_t2528358522& unmarshaled, ScriptableObject_t2528358522_marshaled_pinvoke& marshaled)
{
	marshaled.___m_CachedPtr_0 = unmarshaled.get_m_CachedPtr_0();
}
extern "C" void ScriptableObject_t2528358522_marshal_pinvoke_back(const ScriptableObject_t2528358522_marshaled_pinvoke& marshaled, ScriptableObject_t2528358522& unmarshaled)
{
	intptr_t unmarshaled_m_CachedPtr_temp_0;
	memset(&unmarshaled_m_CachedPtr_temp_0, 0, sizeof(unmarshaled_m_CachedPtr_temp_0));
	unmarshaled_m_CachedPtr_temp_0 = marshaled.___m_CachedPtr_0;
	unmarshaled.set_m_CachedPtr_0(unmarshaled_m_CachedPtr_temp_0);
}
// Conversion method for clean up from marshalling of: UnityEngine.ScriptableObject
extern "C" void ScriptableObject_t2528358522_marshal_pinvoke_cleanup(ScriptableObject_t2528358522_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.ScriptableObject
extern "C" void ScriptableObject_t2528358522_marshal_com(const ScriptableObject_t2528358522& unmarshaled, ScriptableObject_t2528358522_marshaled_com& marshaled)
{
	marshaled.___m_CachedPtr_0 = unmarshaled.get_m_CachedPtr_0();
}
extern "C" void ScriptableObject_t2528358522_marshal_com_back(const ScriptableObject_t2528358522_marshaled_com& marshaled, ScriptableObject_t2528358522& unmarshaled)
{
	intptr_t unmarshaled_m_CachedPtr_temp_0;
	memset(&unmarshaled_m_CachedPtr_temp_0, 0, sizeof(unmarshaled_m_CachedPtr_temp_0));
	unmarshaled_m_CachedPtr_temp_0 = marshaled.___m_CachedPtr_0;
	unmarshaled.set_m_CachedPtr_0(unmarshaled_m_CachedPtr_temp_0);
}
// Conversion method for clean up from marshalling of: UnityEngine.ScriptableObject
extern "C" void ScriptableObject_t2528358522_marshal_com_cleanup(ScriptableObject_t2528358522_marshaled_com& marshaled)
{
}
// System.Void UnityEngine.ScriptableObject::.ctor()
extern "C" IL2CPP_METHOD_ATTR void ScriptableObject__ctor_m1310743131 (ScriptableObject_t2528358522 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ScriptableObject__ctor_m1310743131_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		Object__ctor_m1087895580(__this, /*hidden argument*/NULL);
		ScriptableObject_CreateScriptableObject_m3504774547(NULL /*static, unused*/, __this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.ScriptableObject UnityEngine.ScriptableObject::CreateInstance(System.Type)
extern "C" IL2CPP_METHOD_ATTR ScriptableObject_t2528358522 * ScriptableObject_CreateInstance_m2611081756 (RuntimeObject * __this /* static, unused */, Type_t * ___type0, const RuntimeMethod* method)
{
	ScriptableObject_t2528358522 * V_0 = NULL;
	{
		Type_t * L_0 = ___type0;
		ScriptableObject_t2528358522 * L_1 = ScriptableObject_CreateScriptableObjectInstanceFromType_m2783367459(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_000d;
	}

IL_000d:
	{
		ScriptableObject_t2528358522 * L_2 = V_0;
		return L_2;
	}
}
// System.Void UnityEngine.ScriptableObject::CreateScriptableObject(UnityEngine.ScriptableObject)
extern "C" IL2CPP_METHOD_ATTR void ScriptableObject_CreateScriptableObject_m3504774547 (RuntimeObject * __this /* static, unused */, ScriptableObject_t2528358522 * ___self0, const RuntimeMethod* method)
{
	typedef void (*ScriptableObject_CreateScriptableObject_m3504774547_ftn) (ScriptableObject_t2528358522 *);
	static ScriptableObject_CreateScriptableObject_m3504774547_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (ScriptableObject_CreateScriptableObject_m3504774547_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.ScriptableObject::CreateScriptableObject(UnityEngine.ScriptableObject)");
	_il2cpp_icall_func(___self0);
}
// UnityEngine.ScriptableObject UnityEngine.ScriptableObject::CreateScriptableObjectInstanceFromType(System.Type)
extern "C" IL2CPP_METHOD_ATTR ScriptableObject_t2528358522 * ScriptableObject_CreateScriptableObjectInstanceFromType_m2783367459 (RuntimeObject * __this /* static, unused */, Type_t * ___type0, const RuntimeMethod* method)
{
	typedef ScriptableObject_t2528358522 * (*ScriptableObject_CreateScriptableObjectInstanceFromType_m2783367459_ftn) (Type_t *);
	static ScriptableObject_CreateScriptableObjectInstanceFromType_m2783367459_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (ScriptableObject_CreateScriptableObjectInstanceFromType_m2783367459_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.ScriptableObject::CreateScriptableObjectInstanceFromType(System.Type)");
	ScriptableObject_t2528358522 * retVal = _il2cpp_icall_func(___type0);
	return retVal;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Scripting.PreserveAttribute::.ctor()
extern "C" IL2CPP_METHOD_ATTR void PreserveAttribute__ctor_m1123812627 (PreserveAttribute_t1583619344 * __this, const RuntimeMethod* method)
{
	{
		Attribute__ctor_m1529526131(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.SelectionBaseAttribute::.ctor()
extern "C" IL2CPP_METHOD_ATTR void SelectionBaseAttribute__ctor_m2749097321 (SelectionBaseAttribute_t3493465804 * __this, const RuntimeMethod* method)
{
	{
		Attribute__ctor_m1529526131(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
// System.Void UnityEngine.SendMouseEvents::SetMouseMoved()
extern "C" IL2CPP_METHOD_ATTR void SendMouseEvents_SetMouseMoved_m2822596724 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SendMouseEvents_SetMouseMoved_m2822596724_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(SendMouseEvents_t3273302915_il2cpp_TypeInfo_var);
		((SendMouseEvents_t3273302915_StaticFields*)il2cpp_codegen_static_fields_for(SendMouseEvents_t3273302915_il2cpp_TypeInfo_var))->set_s_MouseUsed_0((bool)1);
		return;
	}
}
// System.Void UnityEngine.SendMouseEvents::HitTestLegacyGUI(UnityEngine.Camera,UnityEngine.Vector3,UnityEngine.SendMouseEvents/HitInfo&)
extern "C" IL2CPP_METHOD_ATTR void SendMouseEvents_HitTestLegacyGUI_m579942228 (RuntimeObject * __this /* static, unused */, Camera_t4157153871 * ___camera0, Vector3_t3722313464  ___mousePosition1, HitInfo_t3229609740 * ___hitInfo2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SendMouseEvents_HitTestLegacyGUI_m579942228_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	GUILayer_t2783472903 * V_0 = NULL;
	GUIElement_t3567083079 * V_1 = NULL;
	{
		Camera_t4157153871 * L_0 = ___camera0;
		NullCheck(L_0);
		GUILayer_t2783472903 * L_1 = Component_GetComponent_TisGUILayer_t2783472903_m4244438908(L_0, /*hidden argument*/Component_GetComponent_TisGUILayer_t2783472903_m4244438908_RuntimeMethod_var);
		V_0 = L_1;
		GUILayer_t2783472903 * L_2 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_3 = Object_op_Implicit_m3574996620(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0052;
		}
	}
	{
		GUILayer_t2783472903 * L_4 = V_0;
		Vector3_t3722313464  L_5 = ___mousePosition1;
		NullCheck(L_4);
		GUIElement_t3567083079 * L_6 = GUILayer_HitTest_m512928460(L_4, L_5, /*hidden argument*/NULL);
		V_1 = L_6;
		GUIElement_t3567083079 * L_7 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_8 = Object_op_Implicit_m3574996620(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_0041;
		}
	}
	{
		HitInfo_t3229609740 * L_9 = ___hitInfo2;
		GUIElement_t3567083079 * L_10 = V_1;
		NullCheck(L_10);
		GameObject_t1113636619 * L_11 = Component_get_gameObject_m442555142(L_10, /*hidden argument*/NULL);
		L_9->set_target_0(L_11);
		HitInfo_t3229609740 * L_12 = ___hitInfo2;
		Camera_t4157153871 * L_13 = ___camera0;
		L_12->set_camera_1(L_13);
		goto IL_0051;
	}

IL_0041:
	{
		HitInfo_t3229609740 * L_14 = ___hitInfo2;
		L_14->set_target_0((GameObject_t1113636619 *)NULL);
		HitInfo_t3229609740 * L_15 = ___hitInfo2;
		L_15->set_camera_1((Camera_t4157153871 *)NULL);
	}

IL_0051:
	{
	}

IL_0052:
	{
		return;
	}
}
// System.Void UnityEngine.SendMouseEvents::DoSendMouseEvents(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void SendMouseEvents_DoSendMouseEvents_m2140870850 (RuntimeObject * __this /* static, unused */, int32_t ___skipRTCameras0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SendMouseEvents_DoSendMouseEvents_m2140870850_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t3722313464  V_0;
	memset(&V_0, 0, sizeof(V_0));
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	HitInfo_t3229609740  V_3;
	memset(&V_3, 0, sizeof(V_3));
	Camera_t4157153871 * V_4 = NULL;
	CameraU5BU5D_t1709987734* V_5 = NULL;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	Vector3_t3722313464  V_8;
	memset(&V_8, 0, sizeof(V_8));
	int32_t V_9 = 0;
	float V_10 = 0.0f;
	float V_11 = 0.0f;
	Vector2_t2156229523  V_12;
	memset(&V_12, 0, sizeof(V_12));
	Rect_t2360479859  V_13;
	memset(&V_13, 0, sizeof(V_13));
	Ray_t3785851493  V_14;
	memset(&V_14, 0, sizeof(V_14));
	float V_15 = 0.0f;
	Vector3_t3722313464  V_16;
	memset(&V_16, 0, sizeof(V_16));
	float V_17 = 0.0f;
	GameObject_t1113636619 * V_18 = NULL;
	GameObject_t1113636619 * V_19 = NULL;
	int32_t V_20 = 0;
	float G_B32_0 = 0.0f;
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1431474628_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_0 = Input_get_mousePosition_m1616496925(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_0;
		int32_t L_1 = Camera_get_allCamerasCount_m528453758(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_1 = L_1;
		IL2CPP_RUNTIME_CLASS_INIT(SendMouseEvents_t3273302915_il2cpp_TypeInfo_var);
		CameraU5BU5D_t1709987734* L_2 = ((SendMouseEvents_t3273302915_StaticFields*)il2cpp_codegen_static_fields_for(SendMouseEvents_t3273302915_il2cpp_TypeInfo_var))->get_m_Cameras_4();
		if (!L_2)
		{
			goto IL_0024;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(SendMouseEvents_t3273302915_il2cpp_TypeInfo_var);
		CameraU5BU5D_t1709987734* L_3 = ((SendMouseEvents_t3273302915_StaticFields*)il2cpp_codegen_static_fields_for(SendMouseEvents_t3273302915_il2cpp_TypeInfo_var))->get_m_Cameras_4();
		NullCheck(L_3);
		int32_t L_4 = V_1;
		if ((((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_3)->max_length))))) == ((int32_t)L_4)))
		{
			goto IL_002f;
		}
	}

IL_0024:
	{
		int32_t L_5 = V_1;
		CameraU5BU5D_t1709987734* L_6 = (CameraU5BU5D_t1709987734*)SZArrayNew(CameraU5BU5D_t1709987734_il2cpp_TypeInfo_var, (uint32_t)L_5);
		IL2CPP_RUNTIME_CLASS_INIT(SendMouseEvents_t3273302915_il2cpp_TypeInfo_var);
		((SendMouseEvents_t3273302915_StaticFields*)il2cpp_codegen_static_fields_for(SendMouseEvents_t3273302915_il2cpp_TypeInfo_var))->set_m_Cameras_4(L_6);
	}

IL_002f:
	{
		IL2CPP_RUNTIME_CLASS_INIT(SendMouseEvents_t3273302915_il2cpp_TypeInfo_var);
		CameraU5BU5D_t1709987734* L_7 = ((SendMouseEvents_t3273302915_StaticFields*)il2cpp_codegen_static_fields_for(SendMouseEvents_t3273302915_il2cpp_TypeInfo_var))->get_m_Cameras_4();
		Camera_GetAllCameras_m668492922(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
		V_2 = 0;
		goto IL_005e;
	}

IL_0041:
	{
		IL2CPP_RUNTIME_CLASS_INIT(SendMouseEvents_t3273302915_il2cpp_TypeInfo_var);
		HitInfoU5BU5D_t1685002053* L_8 = ((SendMouseEvents_t3273302915_StaticFields*)il2cpp_codegen_static_fields_for(SendMouseEvents_t3273302915_il2cpp_TypeInfo_var))->get_m_CurrentHit_3();
		int32_t L_9 = V_2;
		NullCheck(L_8);
		il2cpp_codegen_initobj((&V_3), sizeof(HitInfo_t3229609740 ));
		HitInfo_t3229609740  L_10 = V_3;
		*(HitInfo_t3229609740 *)((L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_9))) = L_10;
		int32_t L_11 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_11, (int32_t)1));
	}

IL_005e:
	{
		int32_t L_12 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(SendMouseEvents_t3273302915_il2cpp_TypeInfo_var);
		HitInfoU5BU5D_t1685002053* L_13 = ((SendMouseEvents_t3273302915_StaticFields*)il2cpp_codegen_static_fields_for(SendMouseEvents_t3273302915_il2cpp_TypeInfo_var))->get_m_CurrentHit_3();
		NullCheck(L_13);
		if ((((int32_t)L_12) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_13)->max_length)))))))
		{
			goto IL_0041;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(SendMouseEvents_t3273302915_il2cpp_TypeInfo_var);
		bool L_14 = ((SendMouseEvents_t3273302915_StaticFields*)il2cpp_codegen_static_fields_for(SendMouseEvents_t3273302915_il2cpp_TypeInfo_var))->get_s_MouseUsed_0();
		if (L_14)
		{
			goto IL_0373;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(SendMouseEvents_t3273302915_il2cpp_TypeInfo_var);
		CameraU5BU5D_t1709987734* L_15 = ((SendMouseEvents_t3273302915_StaticFields*)il2cpp_codegen_static_fields_for(SendMouseEvents_t3273302915_il2cpp_TypeInfo_var))->get_m_Cameras_4();
		V_5 = L_15;
		V_6 = 0;
		goto IL_0367;
	}

IL_0086:
	{
		CameraU5BU5D_t1709987734* L_16 = V_5;
		int32_t L_17 = V_6;
		NullCheck(L_16);
		int32_t L_18 = L_17;
		Camera_t4157153871 * L_19 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		V_4 = L_19;
		Camera_t4157153871 * L_20 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_21 = Object_op_Equality_m1810815630(NULL /*static, unused*/, L_20, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (L_21)
		{
			goto IL_00b3;
		}
	}
	{
		int32_t L_22 = ___skipRTCameras0;
		if (!L_22)
		{
			goto IL_00b8;
		}
	}
	{
		Camera_t4157153871 * L_23 = V_4;
		NullCheck(L_23);
		RenderTexture_t2108887433 * L_24 = Camera_get_targetTexture_m2278634983(L_23, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_25 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_24, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_25)
		{
			goto IL_00b8;
		}
	}

IL_00b3:
	{
		goto IL_0361;
	}

IL_00b8:
	{
		Camera_t4157153871 * L_26 = V_4;
		NullCheck(L_26);
		int32_t L_27 = Camera_get_targetDisplay_m2285699927(L_26, /*hidden argument*/NULL);
		V_7 = L_27;
		Vector3_t3722313464  L_28 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Display_t1387065949_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_29 = Display_RelativeMouseAt_m1648644586(NULL /*static, unused*/, L_28, /*hidden argument*/NULL);
		V_8 = L_29;
		Vector3_t3722313464  L_30 = V_8;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_31 = Vector3_get_zero_m1409827619(NULL /*static, unused*/, /*hidden argument*/NULL);
		bool L_32 = Vector3_op_Inequality_m315980366(NULL /*static, unused*/, L_30, L_31, /*hidden argument*/NULL);
		if (!L_32)
		{
			goto IL_01a5;
		}
	}
	{
		float L_33 = (&V_8)->get_z_4();
		V_9 = (((int32_t)((int32_t)L_33)));
		int32_t L_34 = V_9;
		int32_t L_35 = V_7;
		if ((((int32_t)L_34) == ((int32_t)L_35)))
		{
			goto IL_00f3;
		}
	}
	{
		goto IL_0361;
	}

IL_00f3:
	{
		int32_t L_36 = Screen_get_width_m345039817(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_10 = (((float)((float)L_36)));
		int32_t L_37 = Screen_get_height_m1623532518(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_11 = (((float)((float)L_37)));
		int32_t L_38 = V_7;
		if ((((int32_t)L_38) <= ((int32_t)0)))
		{
			goto IL_013b;
		}
	}
	{
		int32_t L_39 = V_7;
		IL2CPP_RUNTIME_CLASS_INIT(Display_t1387065949_il2cpp_TypeInfo_var);
		DisplayU5BU5D_t103034768* L_40 = ((Display_t1387065949_StaticFields*)il2cpp_codegen_static_fields_for(Display_t1387065949_il2cpp_TypeInfo_var))->get_displays_1();
		NullCheck(L_40);
		if ((((int32_t)L_39) >= ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_40)->max_length)))))))
		{
			goto IL_013b;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Display_t1387065949_il2cpp_TypeInfo_var);
		DisplayU5BU5D_t103034768* L_41 = ((Display_t1387065949_StaticFields*)il2cpp_codegen_static_fields_for(Display_t1387065949_il2cpp_TypeInfo_var))->get_displays_1();
		int32_t L_42 = V_7;
		NullCheck(L_41);
		int32_t L_43 = L_42;
		Display_t1387065949 * L_44 = (L_41)->GetAt(static_cast<il2cpp_array_size_t>(L_43));
		NullCheck(L_44);
		int32_t L_45 = Display_get_systemWidth_m2423595549(L_44, /*hidden argument*/NULL);
		V_10 = (((float)((float)L_45)));
		DisplayU5BU5D_t103034768* L_46 = ((Display_t1387065949_StaticFields*)il2cpp_codegen_static_fields_for(Display_t1387065949_il2cpp_TypeInfo_var))->get_displays_1();
		int32_t L_47 = V_7;
		NullCheck(L_46);
		int32_t L_48 = L_47;
		Display_t1387065949 * L_49 = (L_46)->GetAt(static_cast<il2cpp_array_size_t>(L_48));
		NullCheck(L_49);
		int32_t L_50 = Display_get_systemHeight_m730809466(L_49, /*hidden argument*/NULL);
		V_11 = (((float)((float)L_50)));
	}

IL_013b:
	{
		float L_51 = (&V_8)->get_x_2();
		float L_52 = V_10;
		float L_53 = (&V_8)->get_y_3();
		float L_54 = V_11;
		Vector2__ctor_m3970636864((Vector2_t2156229523 *)(&V_12), ((float)((float)L_51/(float)L_52)), ((float)((float)L_53/(float)L_54)), /*hidden argument*/NULL);
		float L_55 = (&V_12)->get_x_0();
		if ((((float)L_55) < ((float)(0.0f))))
		{
			goto IL_019a;
		}
	}
	{
		float L_56 = (&V_12)->get_x_0();
		if ((((float)L_56) > ((float)(1.0f))))
		{
			goto IL_019a;
		}
	}
	{
		float L_57 = (&V_12)->get_y_1();
		if ((((float)L_57) < ((float)(0.0f))))
		{
			goto IL_019a;
		}
	}
	{
		float L_58 = (&V_12)->get_y_1();
		if ((!(((float)L_58) > ((float)(1.0f)))))
		{
			goto IL_019f;
		}
	}

IL_019a:
	{
		goto IL_0361;
	}

IL_019f:
	{
		goto IL_01c6;
	}

IL_01a5:
	{
		Vector3_t3722313464  L_59 = V_0;
		V_8 = L_59;
		Camera_t4157153871 * L_60 = V_4;
		NullCheck(L_60);
		Rect_t2360479859  L_61 = Camera_get_pixelRect_m2283183456(L_60, /*hidden argument*/NULL);
		V_13 = L_61;
		Vector3_t3722313464  L_62 = V_8;
		bool L_63 = Rect_Contains_m1232228501((Rect_t2360479859 *)(&V_13), L_62, /*hidden argument*/NULL);
		if (L_63)
		{
			goto IL_01c5;
		}
	}
	{
		goto IL_0361;
	}

IL_01c5:
	{
	}

IL_01c6:
	{
		Camera_t4157153871 * L_64 = V_4;
		Vector3_t3722313464  L_65 = V_8;
		IL2CPP_RUNTIME_CLASS_INIT(SendMouseEvents_t3273302915_il2cpp_TypeInfo_var);
		HitInfoU5BU5D_t1685002053* L_66 = ((SendMouseEvents_t3273302915_StaticFields*)il2cpp_codegen_static_fields_for(SendMouseEvents_t3273302915_il2cpp_TypeInfo_var))->get_m_CurrentHit_3();
		NullCheck(L_66);
		SendMouseEvents_HitTestLegacyGUI_m579942228(NULL /*static, unused*/, L_64, L_65, (HitInfo_t3229609740 *)((L_66)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))), /*hidden argument*/NULL);
		Camera_t4157153871 * L_67 = V_4;
		NullCheck(L_67);
		int32_t L_68 = Camera_get_eventMask_m819189086(L_67, /*hidden argument*/NULL);
		if (L_68)
		{
			goto IL_01eb;
		}
	}
	{
		goto IL_0361;
	}

IL_01eb:
	{
		Camera_t4157153871 * L_69 = V_4;
		Vector3_t3722313464  L_70 = V_8;
		NullCheck(L_69);
		Ray_t3785851493  L_71 = Camera_ScreenPointToRay_m3764635188(L_69, L_70, /*hidden argument*/NULL);
		V_14 = L_71;
		Vector3_t3722313464  L_72 = Ray_get_direction_m761601601((Ray_t3785851493 *)(&V_14), /*hidden argument*/NULL);
		V_16 = L_72;
		float L_73 = (&V_16)->get_z_4();
		V_15 = L_73;
		float L_74 = V_15;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		bool L_75 = Mathf_Approximately_m245805902(NULL /*static, unused*/, (0.0f), L_74, /*hidden argument*/NULL);
		if (!L_75)
		{
			goto IL_0223;
		}
	}
	{
		G_B32_0 = (std::numeric_limits<float>::infinity());
		goto IL_023a;
	}

IL_0223:
	{
		Camera_t4157153871 * L_76 = V_4;
		NullCheck(L_76);
		float L_77 = Camera_get_farClipPlane_m538536689(L_76, /*hidden argument*/NULL);
		Camera_t4157153871 * L_78 = V_4;
		NullCheck(L_78);
		float L_79 = Camera_get_nearClipPlane_m837839537(L_78, /*hidden argument*/NULL);
		float L_80 = V_15;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		float L_81 = fabsf(((float)((float)((float)il2cpp_codegen_subtract((float)L_77, (float)L_79))/(float)L_80)));
		G_B32_0 = L_81;
	}

IL_023a:
	{
		V_17 = G_B32_0;
		Camera_t4157153871 * L_82 = V_4;
		Ray_t3785851493  L_83 = V_14;
		float L_84 = V_17;
		Camera_t4157153871 * L_85 = V_4;
		NullCheck(L_85);
		int32_t L_86 = Camera_get_cullingMask_m679085748(L_85, /*hidden argument*/NULL);
		Camera_t4157153871 * L_87 = V_4;
		NullCheck(L_87);
		int32_t L_88 = Camera_get_eventMask_m819189086(L_87, /*hidden argument*/NULL);
		NullCheck(L_82);
		GameObject_t1113636619 * L_89 = Camera_RaycastTry_m3913529496(L_82, L_83, L_84, ((int32_t)((int32_t)L_86&(int32_t)L_88)), /*hidden argument*/NULL);
		V_18 = L_89;
		GameObject_t1113636619 * L_90 = V_18;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_91 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_90, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_91)
		{
			goto IL_0290;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(SendMouseEvents_t3273302915_il2cpp_TypeInfo_var);
		HitInfoU5BU5D_t1685002053* L_92 = ((SendMouseEvents_t3273302915_StaticFields*)il2cpp_codegen_static_fields_for(SendMouseEvents_t3273302915_il2cpp_TypeInfo_var))->get_m_CurrentHit_3();
		NullCheck(L_92);
		GameObject_t1113636619 * L_93 = V_18;
		((L_92)->GetAddressAt(static_cast<il2cpp_array_size_t>(1)))->set_target_0(L_93);
		HitInfoU5BU5D_t1685002053* L_94 = ((SendMouseEvents_t3273302915_StaticFields*)il2cpp_codegen_static_fields_for(SendMouseEvents_t3273302915_il2cpp_TypeInfo_var))->get_m_CurrentHit_3();
		NullCheck(L_94);
		Camera_t4157153871 * L_95 = V_4;
		((L_94)->GetAddressAt(static_cast<il2cpp_array_size_t>(1)))->set_camera_1(L_95);
		goto IL_02ce;
	}

IL_0290:
	{
		Camera_t4157153871 * L_96 = V_4;
		NullCheck(L_96);
		int32_t L_97 = Camera_get_clearFlags_m992534691(L_96, /*hidden argument*/NULL);
		if ((((int32_t)L_97) == ((int32_t)1)))
		{
			goto IL_02aa;
		}
	}
	{
		Camera_t4157153871 * L_98 = V_4;
		NullCheck(L_98);
		int32_t L_99 = Camera_get_clearFlags_m992534691(L_98, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_99) == ((uint32_t)2))))
		{
			goto IL_02ce;
		}
	}

IL_02aa:
	{
		IL2CPP_RUNTIME_CLASS_INIT(SendMouseEvents_t3273302915_il2cpp_TypeInfo_var);
		HitInfoU5BU5D_t1685002053* L_100 = ((SendMouseEvents_t3273302915_StaticFields*)il2cpp_codegen_static_fields_for(SendMouseEvents_t3273302915_il2cpp_TypeInfo_var))->get_m_CurrentHit_3();
		NullCheck(L_100);
		((L_100)->GetAddressAt(static_cast<il2cpp_array_size_t>(1)))->set_target_0((GameObject_t1113636619 *)NULL);
		HitInfoU5BU5D_t1685002053* L_101 = ((SendMouseEvents_t3273302915_StaticFields*)il2cpp_codegen_static_fields_for(SendMouseEvents_t3273302915_il2cpp_TypeInfo_var))->get_m_CurrentHit_3();
		NullCheck(L_101);
		((L_101)->GetAddressAt(static_cast<il2cpp_array_size_t>(1)))->set_camera_1((Camera_t4157153871 *)NULL);
	}

IL_02ce:
	{
		Camera_t4157153871 * L_102 = V_4;
		Ray_t3785851493  L_103 = V_14;
		float L_104 = V_17;
		Camera_t4157153871 * L_105 = V_4;
		NullCheck(L_105);
		int32_t L_106 = Camera_get_cullingMask_m679085748(L_105, /*hidden argument*/NULL);
		Camera_t4157153871 * L_107 = V_4;
		NullCheck(L_107);
		int32_t L_108 = Camera_get_eventMask_m819189086(L_107, /*hidden argument*/NULL);
		NullCheck(L_102);
		GameObject_t1113636619 * L_109 = Camera_RaycastTry2D_m2460696262(L_102, L_103, L_104, ((int32_t)((int32_t)L_106&(int32_t)L_108)), /*hidden argument*/NULL);
		V_19 = L_109;
		GameObject_t1113636619 * L_110 = V_19;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_111 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_110, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_111)
		{
			goto IL_0322;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(SendMouseEvents_t3273302915_il2cpp_TypeInfo_var);
		HitInfoU5BU5D_t1685002053* L_112 = ((SendMouseEvents_t3273302915_StaticFields*)il2cpp_codegen_static_fields_for(SendMouseEvents_t3273302915_il2cpp_TypeInfo_var))->get_m_CurrentHit_3();
		NullCheck(L_112);
		GameObject_t1113636619 * L_113 = V_19;
		((L_112)->GetAddressAt(static_cast<il2cpp_array_size_t>(2)))->set_target_0(L_113);
		HitInfoU5BU5D_t1685002053* L_114 = ((SendMouseEvents_t3273302915_StaticFields*)il2cpp_codegen_static_fields_for(SendMouseEvents_t3273302915_il2cpp_TypeInfo_var))->get_m_CurrentHit_3();
		NullCheck(L_114);
		Camera_t4157153871 * L_115 = V_4;
		((L_114)->GetAddressAt(static_cast<il2cpp_array_size_t>(2)))->set_camera_1(L_115);
		goto IL_0360;
	}

IL_0322:
	{
		Camera_t4157153871 * L_116 = V_4;
		NullCheck(L_116);
		int32_t L_117 = Camera_get_clearFlags_m992534691(L_116, /*hidden argument*/NULL);
		if ((((int32_t)L_117) == ((int32_t)1)))
		{
			goto IL_033c;
		}
	}
	{
		Camera_t4157153871 * L_118 = V_4;
		NullCheck(L_118);
		int32_t L_119 = Camera_get_clearFlags_m992534691(L_118, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_119) == ((uint32_t)2))))
		{
			goto IL_0360;
		}
	}

IL_033c:
	{
		IL2CPP_RUNTIME_CLASS_INIT(SendMouseEvents_t3273302915_il2cpp_TypeInfo_var);
		HitInfoU5BU5D_t1685002053* L_120 = ((SendMouseEvents_t3273302915_StaticFields*)il2cpp_codegen_static_fields_for(SendMouseEvents_t3273302915_il2cpp_TypeInfo_var))->get_m_CurrentHit_3();
		NullCheck(L_120);
		((L_120)->GetAddressAt(static_cast<il2cpp_array_size_t>(2)))->set_target_0((GameObject_t1113636619 *)NULL);
		HitInfoU5BU5D_t1685002053* L_121 = ((SendMouseEvents_t3273302915_StaticFields*)il2cpp_codegen_static_fields_for(SendMouseEvents_t3273302915_il2cpp_TypeInfo_var))->get_m_CurrentHit_3();
		NullCheck(L_121);
		((L_121)->GetAddressAt(static_cast<il2cpp_array_size_t>(2)))->set_camera_1((Camera_t4157153871 *)NULL);
	}

IL_0360:
	{
	}

IL_0361:
	{
		int32_t L_122 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_122, (int32_t)1));
	}

IL_0367:
	{
		int32_t L_123 = V_6;
		CameraU5BU5D_t1709987734* L_124 = V_5;
		NullCheck(L_124);
		if ((((int32_t)L_123) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_124)->max_length)))))))
		{
			goto IL_0086;
		}
	}
	{
	}

IL_0373:
	{
		V_20 = 0;
		goto IL_0399;
	}

IL_037b:
	{
		int32_t L_125 = V_20;
		IL2CPP_RUNTIME_CLASS_INIT(SendMouseEvents_t3273302915_il2cpp_TypeInfo_var);
		HitInfoU5BU5D_t1685002053* L_126 = ((SendMouseEvents_t3273302915_StaticFields*)il2cpp_codegen_static_fields_for(SendMouseEvents_t3273302915_il2cpp_TypeInfo_var))->get_m_CurrentHit_3();
		int32_t L_127 = V_20;
		NullCheck(L_126);
		SendMouseEvents_SendEvents_m1956471769(NULL /*static, unused*/, L_125, (*(HitInfo_t3229609740 *)((L_126)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_127)))), /*hidden argument*/NULL);
		int32_t L_128 = V_20;
		V_20 = ((int32_t)il2cpp_codegen_add((int32_t)L_128, (int32_t)1));
	}

IL_0399:
	{
		int32_t L_129 = V_20;
		IL2CPP_RUNTIME_CLASS_INIT(SendMouseEvents_t3273302915_il2cpp_TypeInfo_var);
		HitInfoU5BU5D_t1685002053* L_130 = ((SendMouseEvents_t3273302915_StaticFields*)il2cpp_codegen_static_fields_for(SendMouseEvents_t3273302915_il2cpp_TypeInfo_var))->get_m_CurrentHit_3();
		NullCheck(L_130);
		if ((((int32_t)L_129) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_130)->max_length)))))))
		{
			goto IL_037b;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(SendMouseEvents_t3273302915_il2cpp_TypeInfo_var);
		((SendMouseEvents_t3273302915_StaticFields*)il2cpp_codegen_static_fields_for(SendMouseEvents_t3273302915_il2cpp_TypeInfo_var))->set_s_MouseUsed_0((bool)0);
		return;
	}
}
// System.Void UnityEngine.SendMouseEvents::SendEvents(System.Int32,UnityEngine.SendMouseEvents/HitInfo)
extern "C" IL2CPP_METHOD_ATTR void SendMouseEvents_SendEvents_m1956471769 (RuntimeObject * __this /* static, unused */, int32_t ___i0, HitInfo_t3229609740  ___hit1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SendMouseEvents_SendEvents_m1956471769_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	HitInfo_t3229609740  V_2;
	memset(&V_2, 0, sizeof(V_2));
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1431474628_il2cpp_TypeInfo_var);
		bool L_0 = Input_GetMouseButtonDown_m2081676745(NULL /*static, unused*/, 0, /*hidden argument*/NULL);
		V_0 = L_0;
		bool L_1 = Input_GetMouseButton_m513753021(NULL /*static, unused*/, 0, /*hidden argument*/NULL);
		V_1 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_004f;
		}
	}
	{
		HitInfo_t3229609740  L_3 = ___hit1;
		bool L_4 = HitInfo_op_Implicit_m665224877(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0049;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(SendMouseEvents_t3273302915_il2cpp_TypeInfo_var);
		HitInfoU5BU5D_t1685002053* L_5 = ((SendMouseEvents_t3273302915_StaticFields*)il2cpp_codegen_static_fields_for(SendMouseEvents_t3273302915_il2cpp_TypeInfo_var))->get_m_MouseDownHit_2();
		int32_t L_6 = ___i0;
		NullCheck(L_5);
		HitInfo_t3229609740  L_7 = ___hit1;
		*(HitInfo_t3229609740 *)((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6))) = L_7;
		HitInfoU5BU5D_t1685002053* L_8 = ((SendMouseEvents_t3273302915_StaticFields*)il2cpp_codegen_static_fields_for(SendMouseEvents_t3273302915_il2cpp_TypeInfo_var))->get_m_MouseDownHit_2();
		int32_t L_9 = ___i0;
		NullCheck(L_8);
		HitInfo_SendMessage_m1343099429((HitInfo_t3229609740 *)((L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_9))), _stringLiteral4015530243, /*hidden argument*/NULL);
	}

IL_0049:
	{
		goto IL_0107;
	}

IL_004f:
	{
		bool L_10 = V_1;
		if (L_10)
		{
			goto IL_00d6;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(SendMouseEvents_t3273302915_il2cpp_TypeInfo_var);
		HitInfoU5BU5D_t1685002053* L_11 = ((SendMouseEvents_t3273302915_StaticFields*)il2cpp_codegen_static_fields_for(SendMouseEvents_t3273302915_il2cpp_TypeInfo_var))->get_m_MouseDownHit_2();
		int32_t L_12 = ___i0;
		NullCheck(L_11);
		bool L_13 = HitInfo_op_Implicit_m665224877(NULL /*static, unused*/, (*(HitInfo_t3229609740 *)((L_11)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_12)))), /*hidden argument*/NULL);
		if (!L_13)
		{
			goto IL_00d0;
		}
	}
	{
		HitInfo_t3229609740  L_14 = ___hit1;
		IL2CPP_RUNTIME_CLASS_INIT(SendMouseEvents_t3273302915_il2cpp_TypeInfo_var);
		HitInfoU5BU5D_t1685002053* L_15 = ((SendMouseEvents_t3273302915_StaticFields*)il2cpp_codegen_static_fields_for(SendMouseEvents_t3273302915_il2cpp_TypeInfo_var))->get_m_MouseDownHit_2();
		int32_t L_16 = ___i0;
		NullCheck(L_15);
		bool L_17 = HitInfo_Compare_m2336739674(NULL /*static, unused*/, L_14, (*(HitInfo_t3229609740 *)((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)))), /*hidden argument*/NULL);
		if (!L_17)
		{
			goto IL_00a1;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(SendMouseEvents_t3273302915_il2cpp_TypeInfo_var);
		HitInfoU5BU5D_t1685002053* L_18 = ((SendMouseEvents_t3273302915_StaticFields*)il2cpp_codegen_static_fields_for(SendMouseEvents_t3273302915_il2cpp_TypeInfo_var))->get_m_MouseDownHit_2();
		int32_t L_19 = ___i0;
		NullCheck(L_18);
		HitInfo_SendMessage_m1343099429((HitInfo_t3229609740 *)((L_18)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_19))), _stringLiteral2111035250, /*hidden argument*/NULL);
	}

IL_00a1:
	{
		IL2CPP_RUNTIME_CLASS_INIT(SendMouseEvents_t3273302915_il2cpp_TypeInfo_var);
		HitInfoU5BU5D_t1685002053* L_20 = ((SendMouseEvents_t3273302915_StaticFields*)il2cpp_codegen_static_fields_for(SendMouseEvents_t3273302915_il2cpp_TypeInfo_var))->get_m_MouseDownHit_2();
		int32_t L_21 = ___i0;
		NullCheck(L_20);
		HitInfo_SendMessage_m1343099429((HitInfo_t3229609740 *)((L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_21))), _stringLiteral3620714913, /*hidden argument*/NULL);
		HitInfoU5BU5D_t1685002053* L_22 = ((SendMouseEvents_t3273302915_StaticFields*)il2cpp_codegen_static_fields_for(SendMouseEvents_t3273302915_il2cpp_TypeInfo_var))->get_m_MouseDownHit_2();
		int32_t L_23 = ___i0;
		NullCheck(L_22);
		il2cpp_codegen_initobj((&V_2), sizeof(HitInfo_t3229609740 ));
		HitInfo_t3229609740  L_24 = V_2;
		*(HitInfo_t3229609740 *)((L_22)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_23))) = L_24;
	}

IL_00d0:
	{
		goto IL_0107;
	}

IL_00d6:
	{
		IL2CPP_RUNTIME_CLASS_INIT(SendMouseEvents_t3273302915_il2cpp_TypeInfo_var);
		HitInfoU5BU5D_t1685002053* L_25 = ((SendMouseEvents_t3273302915_StaticFields*)il2cpp_codegen_static_fields_for(SendMouseEvents_t3273302915_il2cpp_TypeInfo_var))->get_m_MouseDownHit_2();
		int32_t L_26 = ___i0;
		NullCheck(L_25);
		bool L_27 = HitInfo_op_Implicit_m665224877(NULL /*static, unused*/, (*(HitInfo_t3229609740 *)((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))), /*hidden argument*/NULL);
		if (!L_27)
		{
			goto IL_0107;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(SendMouseEvents_t3273302915_il2cpp_TypeInfo_var);
		HitInfoU5BU5D_t1685002053* L_28 = ((SendMouseEvents_t3273302915_StaticFields*)il2cpp_codegen_static_fields_for(SendMouseEvents_t3273302915_il2cpp_TypeInfo_var))->get_m_MouseDownHit_2();
		int32_t L_29 = ___i0;
		NullCheck(L_28);
		HitInfo_SendMessage_m1343099429((HitInfo_t3229609740 *)((L_28)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_29))), _stringLiteral1641435443, /*hidden argument*/NULL);
	}

IL_0107:
	{
		HitInfo_t3229609740  L_30 = ___hit1;
		IL2CPP_RUNTIME_CLASS_INIT(SendMouseEvents_t3273302915_il2cpp_TypeInfo_var);
		HitInfoU5BU5D_t1685002053* L_31 = ((SendMouseEvents_t3273302915_StaticFields*)il2cpp_codegen_static_fields_for(SendMouseEvents_t3273302915_il2cpp_TypeInfo_var))->get_m_LastHit_1();
		int32_t L_32 = ___i0;
		NullCheck(L_31);
		bool L_33 = HitInfo_Compare_m2336739674(NULL /*static, unused*/, L_30, (*(HitInfo_t3229609740 *)((L_31)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_32)))), /*hidden argument*/NULL);
		if (!L_33)
		{
			goto IL_0140;
		}
	}
	{
		HitInfo_t3229609740  L_34 = ___hit1;
		bool L_35 = HitInfo_op_Implicit_m665224877(NULL /*static, unused*/, L_34, /*hidden argument*/NULL);
		if (!L_35)
		{
			goto IL_013a;
		}
	}
	{
		HitInfo_SendMessage_m1343099429((HitInfo_t3229609740 *)(&___hit1), _stringLiteral291496430, /*hidden argument*/NULL);
	}

IL_013a:
	{
		goto IL_0198;
	}

IL_0140:
	{
		IL2CPP_RUNTIME_CLASS_INIT(SendMouseEvents_t3273302915_il2cpp_TypeInfo_var);
		HitInfoU5BU5D_t1685002053* L_36 = ((SendMouseEvents_t3273302915_StaticFields*)il2cpp_codegen_static_fields_for(SendMouseEvents_t3273302915_il2cpp_TypeInfo_var))->get_m_LastHit_1();
		int32_t L_37 = ___i0;
		NullCheck(L_36);
		bool L_38 = HitInfo_op_Implicit_m665224877(NULL /*static, unused*/, (*(HitInfo_t3229609740 *)((L_36)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_37)))), /*hidden argument*/NULL);
		if (!L_38)
		{
			goto IL_0172;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(SendMouseEvents_t3273302915_il2cpp_TypeInfo_var);
		HitInfoU5BU5D_t1685002053* L_39 = ((SendMouseEvents_t3273302915_StaticFields*)il2cpp_codegen_static_fields_for(SendMouseEvents_t3273302915_il2cpp_TypeInfo_var))->get_m_LastHit_1();
		int32_t L_40 = ___i0;
		NullCheck(L_39);
		HitInfo_SendMessage_m1343099429((HitInfo_t3229609740 *)((L_39)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_40))), _stringLiteral4054394430, /*hidden argument*/NULL);
	}

IL_0172:
	{
		HitInfo_t3229609740  L_41 = ___hit1;
		bool L_42 = HitInfo_op_Implicit_m665224877(NULL /*static, unused*/, L_41, /*hidden argument*/NULL);
		if (!L_42)
		{
			goto IL_0197;
		}
	}
	{
		HitInfo_SendMessage_m1343099429((HitInfo_t3229609740 *)(&___hit1), _stringLiteral2882627593, /*hidden argument*/NULL);
		HitInfo_SendMessage_m1343099429((HitInfo_t3229609740 *)(&___hit1), _stringLiteral291496430, /*hidden argument*/NULL);
	}

IL_0197:
	{
	}

IL_0198:
	{
		IL2CPP_RUNTIME_CLASS_INIT(SendMouseEvents_t3273302915_il2cpp_TypeInfo_var);
		HitInfoU5BU5D_t1685002053* L_43 = ((SendMouseEvents_t3273302915_StaticFields*)il2cpp_codegen_static_fields_for(SendMouseEvents_t3273302915_il2cpp_TypeInfo_var))->get_m_LastHit_1();
		int32_t L_44 = ___i0;
		NullCheck(L_43);
		HitInfo_t3229609740  L_45 = ___hit1;
		*(HitInfo_t3229609740 *)((L_43)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_44))) = L_45;
		return;
	}
}
// System.Void UnityEngine.SendMouseEvents::.cctor()
extern "C" IL2CPP_METHOD_ATTR void SendMouseEvents__cctor_m2378365934 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SendMouseEvents__cctor_m2378365934_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	HitInfo_t3229609740  V_0;
	memset(&V_0, 0, sizeof(V_0));
	HitInfo_t3229609740  V_1;
	memset(&V_1, 0, sizeof(V_1));
	HitInfo_t3229609740  V_2;
	memset(&V_2, 0, sizeof(V_2));
	HitInfo_t3229609740  V_3;
	memset(&V_3, 0, sizeof(V_3));
	HitInfo_t3229609740  V_4;
	memset(&V_4, 0, sizeof(V_4));
	HitInfo_t3229609740  V_5;
	memset(&V_5, 0, sizeof(V_5));
	HitInfo_t3229609740  V_6;
	memset(&V_6, 0, sizeof(V_6));
	HitInfo_t3229609740  V_7;
	memset(&V_7, 0, sizeof(V_7));
	HitInfo_t3229609740  V_8;
	memset(&V_8, 0, sizeof(V_8));
	{
		((SendMouseEvents_t3273302915_StaticFields*)il2cpp_codegen_static_fields_for(SendMouseEvents_t3273302915_il2cpp_TypeInfo_var))->set_s_MouseUsed_0((bool)0);
		HitInfoU5BU5D_t1685002053* L_0 = (HitInfoU5BU5D_t1685002053*)SZArrayNew(HitInfoU5BU5D_t1685002053_il2cpp_TypeInfo_var, (uint32_t)3);
		HitInfoU5BU5D_t1685002053* L_1 = L_0;
		NullCheck(L_1);
		il2cpp_codegen_initobj((&V_0), sizeof(HitInfo_t3229609740 ));
		HitInfo_t3229609740  L_2 = V_0;
		*(HitInfo_t3229609740 *)((L_1)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))) = L_2;
		HitInfoU5BU5D_t1685002053* L_3 = L_1;
		NullCheck(L_3);
		il2cpp_codegen_initobj((&V_1), sizeof(HitInfo_t3229609740 ));
		HitInfo_t3229609740  L_4 = V_1;
		*(HitInfo_t3229609740 *)((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(1))) = L_4;
		HitInfoU5BU5D_t1685002053* L_5 = L_3;
		NullCheck(L_5);
		il2cpp_codegen_initobj((&V_2), sizeof(HitInfo_t3229609740 ));
		HitInfo_t3229609740  L_6 = V_2;
		*(HitInfo_t3229609740 *)((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(2))) = L_6;
		((SendMouseEvents_t3273302915_StaticFields*)il2cpp_codegen_static_fields_for(SendMouseEvents_t3273302915_il2cpp_TypeInfo_var))->set_m_LastHit_1(L_5);
		HitInfoU5BU5D_t1685002053* L_7 = (HitInfoU5BU5D_t1685002053*)SZArrayNew(HitInfoU5BU5D_t1685002053_il2cpp_TypeInfo_var, (uint32_t)3);
		HitInfoU5BU5D_t1685002053* L_8 = L_7;
		NullCheck(L_8);
		il2cpp_codegen_initobj((&V_3), sizeof(HitInfo_t3229609740 ));
		HitInfo_t3229609740  L_9 = V_3;
		*(HitInfo_t3229609740 *)((L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))) = L_9;
		HitInfoU5BU5D_t1685002053* L_10 = L_8;
		NullCheck(L_10);
		il2cpp_codegen_initobj((&V_4), sizeof(HitInfo_t3229609740 ));
		HitInfo_t3229609740  L_11 = V_4;
		*(HitInfo_t3229609740 *)((L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(1))) = L_11;
		HitInfoU5BU5D_t1685002053* L_12 = L_10;
		NullCheck(L_12);
		il2cpp_codegen_initobj((&V_5), sizeof(HitInfo_t3229609740 ));
		HitInfo_t3229609740  L_13 = V_5;
		*(HitInfo_t3229609740 *)((L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(2))) = L_13;
		((SendMouseEvents_t3273302915_StaticFields*)il2cpp_codegen_static_fields_for(SendMouseEvents_t3273302915_il2cpp_TypeInfo_var))->set_m_MouseDownHit_2(L_12);
		HitInfoU5BU5D_t1685002053* L_14 = (HitInfoU5BU5D_t1685002053*)SZArrayNew(HitInfoU5BU5D_t1685002053_il2cpp_TypeInfo_var, (uint32_t)3);
		HitInfoU5BU5D_t1685002053* L_15 = L_14;
		NullCheck(L_15);
		il2cpp_codegen_initobj((&V_6), sizeof(HitInfo_t3229609740 ));
		HitInfo_t3229609740  L_16 = V_6;
		*(HitInfo_t3229609740 *)((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))) = L_16;
		HitInfoU5BU5D_t1685002053* L_17 = L_15;
		NullCheck(L_17);
		il2cpp_codegen_initobj((&V_7), sizeof(HitInfo_t3229609740 ));
		HitInfo_t3229609740  L_18 = V_7;
		*(HitInfo_t3229609740 *)((L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(1))) = L_18;
		HitInfoU5BU5D_t1685002053* L_19 = L_17;
		NullCheck(L_19);
		il2cpp_codegen_initobj((&V_8), sizeof(HitInfo_t3229609740 ));
		HitInfo_t3229609740  L_20 = V_8;
		*(HitInfo_t3229609740 *)((L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(2))) = L_20;
		((SendMouseEvents_t3273302915_StaticFields*)il2cpp_codegen_static_fields_for(SendMouseEvents_t3273302915_il2cpp_TypeInfo_var))->set_m_CurrentHit_3(L_19);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: UnityEngine.SendMouseEvents/HitInfo
extern "C" void HitInfo_t3229609740_marshal_pinvoke(const HitInfo_t3229609740& unmarshaled, HitInfo_t3229609740_marshaled_pinvoke& marshaled)
{
	Exception_t* ___target_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'target' of type 'HitInfo': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___target_0Exception, NULL, NULL);
}
extern "C" void HitInfo_t3229609740_marshal_pinvoke_back(const HitInfo_t3229609740_marshaled_pinvoke& marshaled, HitInfo_t3229609740& unmarshaled)
{
	Exception_t* ___target_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'target' of type 'HitInfo': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___target_0Exception, NULL, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.SendMouseEvents/HitInfo
extern "C" void HitInfo_t3229609740_marshal_pinvoke_cleanup(HitInfo_t3229609740_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.SendMouseEvents/HitInfo
extern "C" void HitInfo_t3229609740_marshal_com(const HitInfo_t3229609740& unmarshaled, HitInfo_t3229609740_marshaled_com& marshaled)
{
	Exception_t* ___target_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'target' of type 'HitInfo': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___target_0Exception, NULL, NULL);
}
extern "C" void HitInfo_t3229609740_marshal_com_back(const HitInfo_t3229609740_marshaled_com& marshaled, HitInfo_t3229609740& unmarshaled)
{
	Exception_t* ___target_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'target' of type 'HitInfo': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___target_0Exception, NULL, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.SendMouseEvents/HitInfo
extern "C" void HitInfo_t3229609740_marshal_com_cleanup(HitInfo_t3229609740_marshaled_com& marshaled)
{
}
// System.Void UnityEngine.SendMouseEvents/HitInfo::SendMessage(System.String)
extern "C" IL2CPP_METHOD_ATTR void HitInfo_SendMessage_m1343099429 (HitInfo_t3229609740 * __this, String_t* ___name0, const RuntimeMethod* method)
{
	{
		GameObject_t1113636619 * L_0 = __this->get_target_0();
		String_t* L_1 = ___name0;
		NullCheck(L_0);
		GameObject_SendMessage_m3720186693(L_0, L_1, NULL, 1, /*hidden argument*/NULL);
		return;
	}
}
extern "C"  void HitInfo_SendMessage_m1343099429_AdjustorThunk (RuntimeObject * __this, String_t* ___name0, const RuntimeMethod* method)
{
	HitInfo_t3229609740 * _thisAdjusted = reinterpret_cast<HitInfo_t3229609740 *>(__this + 1);
	HitInfo_SendMessage_m1343099429(_thisAdjusted, ___name0, method);
}
// System.Boolean UnityEngine.SendMouseEvents/HitInfo::op_Implicit(UnityEngine.SendMouseEvents/HitInfo)
extern "C" IL2CPP_METHOD_ATTR bool HitInfo_op_Implicit_m665224877 (RuntimeObject * __this /* static, unused */, HitInfo_t3229609740  ___exists0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HitInfo_op_Implicit_m665224877_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		GameObject_t1113636619 * L_0 = (&___exists0)->get_target_0();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_0, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0022;
		}
	}
	{
		Camera_t4157153871 * L_2 = (&___exists0)->get_camera_1();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_3 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_2, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		G_B3_0 = ((int32_t)(L_3));
		goto IL_0023;
	}

IL_0022:
	{
		G_B3_0 = 0;
	}

IL_0023:
	{
		V_0 = (bool)G_B3_0;
		goto IL_0029;
	}

IL_0029:
	{
		bool L_4 = V_0;
		return L_4;
	}
}
// System.Boolean UnityEngine.SendMouseEvents/HitInfo::Compare(UnityEngine.SendMouseEvents/HitInfo,UnityEngine.SendMouseEvents/HitInfo)
extern "C" IL2CPP_METHOD_ATTR bool HitInfo_Compare_m2336739674 (RuntimeObject * __this /* static, unused */, HitInfo_t3229609740  ___lhs0, HitInfo_t3229609740  ___rhs1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HitInfo_Compare_m2336739674_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		GameObject_t1113636619 * L_0 = (&___lhs0)->get_target_0();
		GameObject_t1113636619 * L_1 = (&___rhs1)->get_target_0();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_2 = Object_op_Equality_m1810815630(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_002e;
		}
	}
	{
		Camera_t4157153871 * L_3 = (&___lhs0)->get_camera_1();
		Camera_t4157153871 * L_4 = (&___rhs1)->get_camera_1();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_5 = Object_op_Equality_m1810815630(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		G_B3_0 = ((int32_t)(L_5));
		goto IL_002f;
	}

IL_002e:
	{
		G_B3_0 = 0;
	}

IL_002f:
	{
		V_0 = (bool)G_B3_0;
		goto IL_0035;
	}

IL_0035:
	{
		bool L_6 = V_0;
		return L_6;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Serialization.FormerlySerializedAsAttribute::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void FormerlySerializedAsAttribute__ctor_m520861771 (FormerlySerializedAsAttribute_t2859083114 * __this, String_t* ___oldName0, const RuntimeMethod* method)
{
	{
		Attribute__ctor_m1529526131(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___oldName0;
		__this->set_m_oldName_0(L_0);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.SerializeField::.ctor()
extern "C" IL2CPP_METHOD_ATTR void SerializeField__ctor_m808862924 (SerializeField_t3286833614 * __this, const RuntimeMethod* method)
{
	{
		Attribute__ctor_m1529526131(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
// System.Void UnityEngine.SetupCoroutine::InvokeMoveNext(System.Collections.IEnumerator,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void SetupCoroutine_InvokeMoveNext_m3199342729 (RuntimeObject * __this /* static, unused */, RuntimeObject* ___enumerator0, intptr_t ___returnValueAddress1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SetupCoroutine_InvokeMoveNext_m3199342729_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		intptr_t L_0 = ___returnValueAddress1;
		bool L_1 = IntPtr_op_Equality_m408849716(NULL /*static, unused*/, (intptr_t)L_0, (intptr_t)(0), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0021;
		}
	}
	{
		ArgumentException_t132251570 * L_2 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1216717135(L_2, _stringLiteral2664163362, _stringLiteral696106652, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, NULL, SetupCoroutine_InvokeMoveNext_m3199342729_RuntimeMethod_var);
	}

IL_0021:
	{
		intptr_t L_3 = ___returnValueAddress1;
		void* L_4 = IntPtr_op_Explicit_m2520637223(NULL /*static, unused*/, (intptr_t)L_3, /*hidden argument*/NULL);
		RuntimeObject* L_5 = ___enumerator0;
		NullCheck(L_5);
		bool L_6 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, L_5);
		*((int8_t*)L_4) = (int8_t)L_6;
		return;
	}
}
// System.Object UnityEngine.SetupCoroutine::InvokeMember(System.Object,System.String,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * SetupCoroutine_InvokeMember_m2661944898 (RuntimeObject * __this /* static, unused */, RuntimeObject * ___behaviour0, String_t* ___name1, RuntimeObject * ___variable2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SetupCoroutine_InvokeMember_m2661944898_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ObjectU5BU5D_t2843939325* V_0 = NULL;
	RuntimeObject * V_1 = NULL;
	{
		V_0 = (ObjectU5BU5D_t2843939325*)NULL;
		RuntimeObject * L_0 = ___variable2;
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		ObjectU5BU5D_t2843939325* L_1 = (ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)1);
		V_0 = L_1;
		ObjectU5BU5D_t2843939325* L_2 = V_0;
		RuntimeObject * L_3 = ___variable2;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_3);
	}

IL_0016:
	{
		RuntimeObject * L_4 = ___behaviour0;
		NullCheck(L_4);
		Type_t * L_5 = Object_GetType_m88164663(L_4, /*hidden argument*/NULL);
		String_t* L_6 = ___name1;
		RuntimeObject * L_7 = ___behaviour0;
		ObjectU5BU5D_t2843939325* L_8 = V_0;
		NullCheck(L_5);
		RuntimeObject * L_9 = VirtFuncInvoker8< RuntimeObject *, String_t*, int32_t, Binder_t2999457153 *, RuntimeObject *, ObjectU5BU5D_t2843939325*, ParameterModifierU5BU5D_t2943407543*, CultureInfo_t4157843068 *, StringU5BU5D_t1281789340* >::Invoke(23 /* System.Object System.Type::InvokeMember(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Object,System.Object[],System.Reflection.ParameterModifier[],System.Globalization.CultureInfo,System.String[]) */, L_5, L_6, ((int32_t)308), (Binder_t2999457153 *)NULL, L_7, L_8, (ParameterModifierU5BU5D_t2943407543*)(ParameterModifierU5BU5D_t2943407543*)NULL, (CultureInfo_t4157843068 *)NULL, (StringU5BU5D_t1281789340*)(StringU5BU5D_t1281789340*)NULL);
		V_1 = L_9;
		goto IL_0033;
	}

IL_0033:
	{
		RuntimeObject * L_10 = V_1;
		return L_10;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Shader::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Shader__ctor_m837260462 (Shader_t4151988712 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Shader__ctor_m837260462_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		Object__ctor_m1087895580(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Shader UnityEngine.Shader::Find(System.String)
extern "C" IL2CPP_METHOD_ATTR Shader_t4151988712 * Shader_Find_m2092206247 (RuntimeObject * __this /* static, unused */, String_t* ___name0, const RuntimeMethod* method)
{
	typedef Shader_t4151988712 * (*Shader_Find_m2092206247_ftn) (String_t*);
	static Shader_Find_m2092206247_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Shader_Find_m2092206247_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Shader::Find(System.String)");
	Shader_t4151988712 * retVal = _il2cpp_icall_func(___name0);
	return retVal;
}
// System.Int32 UnityEngine.Shader::PropertyToID(System.String)
extern "C" IL2CPP_METHOD_ATTR int32_t Shader_PropertyToID_m1030499873 (RuntimeObject * __this /* static, unused */, String_t* ___name0, const RuntimeMethod* method)
{
	typedef int32_t (*Shader_PropertyToID_m1030499873_ftn) (String_t*);
	static Shader_PropertyToID_m1030499873_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Shader_PropertyToID_m1030499873_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Shader::PropertyToID(System.String)");
	int32_t retVal = _il2cpp_icall_func(___name0);
	return retVal;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Int32 UnityEngine.SortingLayer::GetLayerValueFromID(System.Int32)
extern "C" IL2CPP_METHOD_ATTR int32_t SortingLayer_GetLayerValueFromID_m1947934714 (RuntimeObject * __this /* static, unused */, int32_t ___id0, const RuntimeMethod* method)
{
	typedef int32_t (*SortingLayer_GetLayerValueFromID_m1947934714_ftn) (int32_t);
	static SortingLayer_GetLayerValueFromID_m1947934714_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (SortingLayer_GetLayerValueFromID_m1947934714_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.SortingLayer::GetLayerValueFromID(System.Int32)");
	int32_t retVal = _il2cpp_icall_func(___id0);
	return retVal;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.SpaceAttribute::.ctor()
extern "C" IL2CPP_METHOD_ATTR void SpaceAttribute__ctor_m3235906033 (SpaceAttribute_t3956583069 * __this, const RuntimeMethod* method)
{
	{
		PropertyAttribute__ctor_m1017741868(__this, /*hidden argument*/NULL);
		__this->set_height_0((8.0f));
		return;
	}
}
// System.Void UnityEngine.SpaceAttribute::.ctor(System.Single)
extern "C" IL2CPP_METHOD_ATTR void SpaceAttribute__ctor_m2972541600 (SpaceAttribute_t3956583069 * __this, float ___height0, const RuntimeMethod* method)
{
	{
		PropertyAttribute__ctor_m1017741868(__this, /*hidden argument*/NULL);
		float L_0 = ___height0;
		__this->set_height_0(L_0);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Sprite::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Sprite__ctor_m332781120 (Sprite_t280657092 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Sprite__ctor_m332781120_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		Object__ctor_m1087895580(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 UnityEngine.Sprite::GetPackingMode()
extern "C" IL2CPP_METHOD_ATTR int32_t Sprite_GetPackingMode_m3284640451 (Sprite_t280657092 * __this, const RuntimeMethod* method)
{
	typedef int32_t (*Sprite_GetPackingMode_m3284640451_ftn) (Sprite_t280657092 *);
	static Sprite_GetPackingMode_m3284640451_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Sprite_GetPackingMode_m3284640451_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Sprite::GetPackingMode()");
	int32_t retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Int32 UnityEngine.Sprite::GetPacked()
extern "C" IL2CPP_METHOD_ATTR int32_t Sprite_GetPacked_m1492529401 (Sprite_t280657092 * __this, const RuntimeMethod* method)
{
	typedef int32_t (*Sprite_GetPacked_m1492529401_ftn) (Sprite_t280657092 *);
	static Sprite_GetPacked_m1492529401_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Sprite_GetPacked_m1492529401_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Sprite::GetPacked()");
	int32_t retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// UnityEngine.Rect UnityEngine.Sprite::GetTextureRect()
extern "C" IL2CPP_METHOD_ATTR Rect_t2360479859  Sprite_GetTextureRect_m3372967885 (Sprite_t280657092 * __this, const RuntimeMethod* method)
{
	Rect_t2360479859  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		Sprite_GetTextureRect_Injected_m333481368(__this, (Rect_t2360479859 *)(&V_0), /*hidden argument*/NULL);
		Rect_t2360479859  L_0 = V_0;
		return L_0;
	}
}
// UnityEngine.Vector4 UnityEngine.Sprite::GetInnerUVs()
extern "C" IL2CPP_METHOD_ATTR Vector4_t3319028937  Sprite_GetInnerUVs_m3161811504 (Sprite_t280657092 * __this, const RuntimeMethod* method)
{
	Vector4_t3319028937  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		Sprite_GetInnerUVs_Injected_m4035625128(__this, (Vector4_t3319028937 *)(&V_0), /*hidden argument*/NULL);
		Vector4_t3319028937  L_0 = V_0;
		return L_0;
	}
}
// UnityEngine.Vector4 UnityEngine.Sprite::GetOuterUVs()
extern "C" IL2CPP_METHOD_ATTR Vector4_t3319028937  Sprite_GetOuterUVs_m716993212 (Sprite_t280657092 * __this, const RuntimeMethod* method)
{
	Vector4_t3319028937  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		Sprite_GetOuterUVs_Injected_m3481589121(__this, (Vector4_t3319028937 *)(&V_0), /*hidden argument*/NULL);
		Vector4_t3319028937  L_0 = V_0;
		return L_0;
	}
}
// UnityEngine.Vector4 UnityEngine.Sprite::GetPadding()
extern "C" IL2CPP_METHOD_ATTR Vector4_t3319028937  Sprite_GetPadding_m3912085217 (Sprite_t280657092 * __this, const RuntimeMethod* method)
{
	Vector4_t3319028937  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		Sprite_GetPadding_Injected_m3549259178(__this, (Vector4_t3319028937 *)(&V_0), /*hidden argument*/NULL);
		Vector4_t3319028937  L_0 = V_0;
		return L_0;
	}
}
// UnityEngine.Rect UnityEngine.Sprite::get_rect()
extern "C" IL2CPP_METHOD_ATTR Rect_t2360479859  Sprite_get_rect_m2575211689 (Sprite_t280657092 * __this, const RuntimeMethod* method)
{
	Rect_t2360479859  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		Sprite_get_rect_Injected_m2233741029(__this, (Rect_t2360479859 *)(&V_0), /*hidden argument*/NULL);
		Rect_t2360479859  L_0 = V_0;
		return L_0;
	}
}
// UnityEngine.Vector4 UnityEngine.Sprite::get_border()
extern "C" IL2CPP_METHOD_ATTR Vector4_t3319028937  Sprite_get_border_m2985609076 (Sprite_t280657092 * __this, const RuntimeMethod* method)
{
	Vector4_t3319028937  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		Sprite_get_border_Injected_m3046818791(__this, (Vector4_t3319028937 *)(&V_0), /*hidden argument*/NULL);
		Vector4_t3319028937  L_0 = V_0;
		return L_0;
	}
}
// UnityEngine.Texture2D UnityEngine.Sprite::get_texture()
extern "C" IL2CPP_METHOD_ATTR Texture2D_t3840446185 * Sprite_get_texture_m3976398399 (Sprite_t280657092 * __this, const RuntimeMethod* method)
{
	typedef Texture2D_t3840446185 * (*Sprite_get_texture_m3976398399_ftn) (Sprite_t280657092 *);
	static Sprite_get_texture_m3976398399_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Sprite_get_texture_m3976398399_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Sprite::get_texture()");
	Texture2D_t3840446185 * retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Single UnityEngine.Sprite::get_pixelsPerUnit()
extern "C" IL2CPP_METHOD_ATTR float Sprite_get_pixelsPerUnit_m524644775 (Sprite_t280657092 * __this, const RuntimeMethod* method)
{
	typedef float (*Sprite_get_pixelsPerUnit_m524644775_ftn) (Sprite_t280657092 *);
	static Sprite_get_pixelsPerUnit_m524644775_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Sprite_get_pixelsPerUnit_m524644775_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Sprite::get_pixelsPerUnit()");
	float retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// UnityEngine.Texture2D UnityEngine.Sprite::get_associatedAlphaSplitTexture()
extern "C" IL2CPP_METHOD_ATTR Texture2D_t3840446185 * Sprite_get_associatedAlphaSplitTexture_m1197622862 (Sprite_t280657092 * __this, const RuntimeMethod* method)
{
	typedef Texture2D_t3840446185 * (*Sprite_get_associatedAlphaSplitTexture_m1197622862_ftn) (Sprite_t280657092 *);
	static Sprite_get_associatedAlphaSplitTexture_m1197622862_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Sprite_get_associatedAlphaSplitTexture_m1197622862_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Sprite::get_associatedAlphaSplitTexture()");
	Texture2D_t3840446185 * retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Boolean UnityEngine.Sprite::get_packed()
extern "C" IL2CPP_METHOD_ATTR bool Sprite_get_packed_m1179604684 (Sprite_t280657092 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		int32_t L_0 = Sprite_GetPacked_m1492529401(__this, /*hidden argument*/NULL);
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)1))? 1 : 0);
		goto IL_0010;
	}

IL_0010:
	{
		bool L_1 = V_0;
		return L_1;
	}
}
// UnityEngine.SpritePackingMode UnityEngine.Sprite::get_packingMode()
extern "C" IL2CPP_METHOD_ATTR int32_t Sprite_get_packingMode_m2493123120 (Sprite_t280657092 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = Sprite_GetPackingMode_m3284640451(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
// UnityEngine.Rect UnityEngine.Sprite::get_textureRect()
extern "C" IL2CPP_METHOD_ATTR Rect_t2360479859  Sprite_get_textureRect_m3217515846 (Sprite_t280657092 * __this, const RuntimeMethod* method)
{
	Rect_t2360479859  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		bool L_0 = Sprite_get_packed_m1179604684(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0023;
		}
	}
	{
		int32_t L_1 = Sprite_get_packingMode_m2493123120(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0023;
		}
	}
	{
		Rect_t2360479859  L_2 = Rect_get_zero_m4034156123(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_2;
		goto IL_002f;
	}

IL_0023:
	{
		Rect_t2360479859  L_3 = Sprite_GetTextureRect_m3372967885(__this, /*hidden argument*/NULL);
		V_0 = L_3;
		goto IL_002f;
	}

IL_002f:
	{
		Rect_t2360479859  L_4 = V_0;
		return L_4;
	}
}
// System.Void UnityEngine.Sprite::GetTextureRect_Injected(UnityEngine.Rect&)
extern "C" IL2CPP_METHOD_ATTR void Sprite_GetTextureRect_Injected_m333481368 (Sprite_t280657092 * __this, Rect_t2360479859 * ___ret0, const RuntimeMethod* method)
{
	typedef void (*Sprite_GetTextureRect_Injected_m333481368_ftn) (Sprite_t280657092 *, Rect_t2360479859 *);
	static Sprite_GetTextureRect_Injected_m333481368_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Sprite_GetTextureRect_Injected_m333481368_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Sprite::GetTextureRect_Injected(UnityEngine.Rect&)");
	_il2cpp_icall_func(__this, ___ret0);
}
// System.Void UnityEngine.Sprite::GetInnerUVs_Injected(UnityEngine.Vector4&)
extern "C" IL2CPP_METHOD_ATTR void Sprite_GetInnerUVs_Injected_m4035625128 (Sprite_t280657092 * __this, Vector4_t3319028937 * ___ret0, const RuntimeMethod* method)
{
	typedef void (*Sprite_GetInnerUVs_Injected_m4035625128_ftn) (Sprite_t280657092 *, Vector4_t3319028937 *);
	static Sprite_GetInnerUVs_Injected_m4035625128_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Sprite_GetInnerUVs_Injected_m4035625128_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Sprite::GetInnerUVs_Injected(UnityEngine.Vector4&)");
	_il2cpp_icall_func(__this, ___ret0);
}
// System.Void UnityEngine.Sprite::GetOuterUVs_Injected(UnityEngine.Vector4&)
extern "C" IL2CPP_METHOD_ATTR void Sprite_GetOuterUVs_Injected_m3481589121 (Sprite_t280657092 * __this, Vector4_t3319028937 * ___ret0, const RuntimeMethod* method)
{
	typedef void (*Sprite_GetOuterUVs_Injected_m3481589121_ftn) (Sprite_t280657092 *, Vector4_t3319028937 *);
	static Sprite_GetOuterUVs_Injected_m3481589121_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Sprite_GetOuterUVs_Injected_m3481589121_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Sprite::GetOuterUVs_Injected(UnityEngine.Vector4&)");
	_il2cpp_icall_func(__this, ___ret0);
}
// System.Void UnityEngine.Sprite::GetPadding_Injected(UnityEngine.Vector4&)
extern "C" IL2CPP_METHOD_ATTR void Sprite_GetPadding_Injected_m3549259178 (Sprite_t280657092 * __this, Vector4_t3319028937 * ___ret0, const RuntimeMethod* method)
{
	typedef void (*Sprite_GetPadding_Injected_m3549259178_ftn) (Sprite_t280657092 *, Vector4_t3319028937 *);
	static Sprite_GetPadding_Injected_m3549259178_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Sprite_GetPadding_Injected_m3549259178_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Sprite::GetPadding_Injected(UnityEngine.Vector4&)");
	_il2cpp_icall_func(__this, ___ret0);
}
// System.Void UnityEngine.Sprite::get_rect_Injected(UnityEngine.Rect&)
extern "C" IL2CPP_METHOD_ATTR void Sprite_get_rect_Injected_m2233741029 (Sprite_t280657092 * __this, Rect_t2360479859 * ___ret0, const RuntimeMethod* method)
{
	typedef void (*Sprite_get_rect_Injected_m2233741029_ftn) (Sprite_t280657092 *, Rect_t2360479859 *);
	static Sprite_get_rect_Injected_m2233741029_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Sprite_get_rect_Injected_m2233741029_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Sprite::get_rect_Injected(UnityEngine.Rect&)");
	_il2cpp_icall_func(__this, ___ret0);
}
// System.Void UnityEngine.Sprite::get_border_Injected(UnityEngine.Vector4&)
extern "C" IL2CPP_METHOD_ATTR void Sprite_get_border_Injected_m3046818791 (Sprite_t280657092 * __this, Vector4_t3319028937 * ___ret0, const RuntimeMethod* method)
{
	typedef void (*Sprite_get_border_Injected_m3046818791_ftn) (Sprite_t280657092 *, Vector4_t3319028937 *);
	static Sprite_get_border_Injected_m3046818791_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Sprite_get_border_Injected_m3046818791_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Sprite::get_border_Injected(UnityEngine.Vector4&)");
	_il2cpp_icall_func(__this, ___ret0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.Vector4 UnityEngine.Sprites.DataUtility::GetInnerUV(UnityEngine.Sprite)
extern "C" IL2CPP_METHOD_ATTR Vector4_t3319028937  DataUtility_GetInnerUV_m2896140645 (RuntimeObject * __this /* static, unused */, Sprite_t280657092 * ___sprite0, const RuntimeMethod* method)
{
	Vector4_t3319028937  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		Sprite_t280657092 * L_0 = ___sprite0;
		NullCheck(L_0);
		Vector4_t3319028937  L_1 = Sprite_GetInnerUVs_m3161811504(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_000d;
	}

IL_000d:
	{
		Vector4_t3319028937  L_2 = V_0;
		return L_2;
	}
}
// UnityEngine.Vector4 UnityEngine.Sprites.DataUtility::GetOuterUV(UnityEngine.Sprite)
extern "C" IL2CPP_METHOD_ATTR Vector4_t3319028937  DataUtility_GetOuterUV_m2509686757 (RuntimeObject * __this /* static, unused */, Sprite_t280657092 * ___sprite0, const RuntimeMethod* method)
{
	Vector4_t3319028937  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		Sprite_t280657092 * L_0 = ___sprite0;
		NullCheck(L_0);
		Vector4_t3319028937  L_1 = Sprite_GetOuterUVs_m716993212(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_000d;
	}

IL_000d:
	{
		Vector4_t3319028937  L_2 = V_0;
		return L_2;
	}
}
// UnityEngine.Vector4 UnityEngine.Sprites.DataUtility::GetPadding(UnityEngine.Sprite)
extern "C" IL2CPP_METHOD_ATTR Vector4_t3319028937  DataUtility_GetPadding_m1385423541 (RuntimeObject * __this /* static, unused */, Sprite_t280657092 * ___sprite0, const RuntimeMethod* method)
{
	Vector4_t3319028937  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		Sprite_t280657092 * L_0 = ___sprite0;
		NullCheck(L_0);
		Vector4_t3319028937  L_1 = Sprite_GetPadding_m3912085217(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_000d;
	}

IL_000d:
	{
		Vector4_t3319028937  L_2 = V_0;
		return L_2;
	}
}
// UnityEngine.Vector2 UnityEngine.Sprites.DataUtility::GetMinSize(UnityEngine.Sprite)
extern "C" IL2CPP_METHOD_ATTR Vector2_t2156229523  DataUtility_GetMinSize_m843062179 (RuntimeObject * __this /* static, unused */, Sprite_t280657092 * ___sprite0, const RuntimeMethod* method)
{
	Vector2_t2156229523  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Vector4_t3319028937  V_1;
	memset(&V_1, 0, sizeof(V_1));
	Vector4_t3319028937  V_2;
	memset(&V_2, 0, sizeof(V_2));
	Vector4_t3319028937  V_3;
	memset(&V_3, 0, sizeof(V_3));
	Vector4_t3319028937  V_4;
	memset(&V_4, 0, sizeof(V_4));
	Vector2_t2156229523  V_5;
	memset(&V_5, 0, sizeof(V_5));
	{
		Sprite_t280657092 * L_0 = ___sprite0;
		NullCheck(L_0);
		Vector4_t3319028937  L_1 = Sprite_get_border_m2985609076(L_0, /*hidden argument*/NULL);
		V_1 = L_1;
		float L_2 = (&V_1)->get_x_1();
		Sprite_t280657092 * L_3 = ___sprite0;
		NullCheck(L_3);
		Vector4_t3319028937  L_4 = Sprite_get_border_m2985609076(L_3, /*hidden argument*/NULL);
		V_2 = L_4;
		float L_5 = (&V_2)->get_z_3();
		(&V_0)->set_x_0(((float)il2cpp_codegen_add((float)L_2, (float)L_5)));
		Sprite_t280657092 * L_6 = ___sprite0;
		NullCheck(L_6);
		Vector4_t3319028937  L_7 = Sprite_get_border_m2985609076(L_6, /*hidden argument*/NULL);
		V_3 = L_7;
		float L_8 = (&V_3)->get_y_2();
		Sprite_t280657092 * L_9 = ___sprite0;
		NullCheck(L_9);
		Vector4_t3319028937  L_10 = Sprite_get_border_m2985609076(L_9, /*hidden argument*/NULL);
		V_4 = L_10;
		float L_11 = (&V_4)->get_w_4();
		(&V_0)->set_y_1(((float)il2cpp_codegen_add((float)L_8, (float)L_11)));
		Vector2_t2156229523  L_12 = V_0;
		V_5 = L_12;
		goto IL_0052;
	}

IL_0052:
	{
		Vector2_t2156229523  L_13 = V_5;
		return L_13;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.StackTraceUtility::SetProjectFolder(System.String)
extern "C" IL2CPP_METHOD_ATTR void StackTraceUtility_SetProjectFolder_m830524047 (RuntimeObject * __this /* static, unused */, String_t* ___folder0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StackTraceUtility_SetProjectFolder_m830524047_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___folder0;
		IL2CPP_RUNTIME_CLASS_INIT(StackTraceUtility_t3465565809_il2cpp_TypeInfo_var);
		((StackTraceUtility_t3465565809_StaticFields*)il2cpp_codegen_static_fields_for(StackTraceUtility_t3465565809_il2cpp_TypeInfo_var))->set_projectFolder_0(L_0);
		String_t* L_1 = ((StackTraceUtility_t3465565809_StaticFields*)il2cpp_codegen_static_fields_for(StackTraceUtility_t3465565809_il2cpp_TypeInfo_var))->get_projectFolder_0();
		bool L_2 = String_IsNullOrEmpty_m2969720369(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_002f;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(StackTraceUtility_t3465565809_il2cpp_TypeInfo_var);
		String_t* L_3 = ((StackTraceUtility_t3465565809_StaticFields*)il2cpp_codegen_static_fields_for(StackTraceUtility_t3465565809_il2cpp_TypeInfo_var))->get_projectFolder_0();
		NullCheck(L_3);
		String_t* L_4 = String_Replace_m1273907647(L_3, _stringLiteral3452614644, _stringLiteral3452614529, /*hidden argument*/NULL);
		((StackTraceUtility_t3465565809_StaticFields*)il2cpp_codegen_static_fields_for(StackTraceUtility_t3465565809_il2cpp_TypeInfo_var))->set_projectFolder_0(L_4);
	}

IL_002f:
	{
		return;
	}
}
// System.String UnityEngine.StackTraceUtility::ExtractStackTrace()
extern "C" IL2CPP_METHOD_ATTR String_t* StackTraceUtility_ExtractStackTrace_m3279197967 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StackTraceUtility_ExtractStackTrace_m3279197967_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StackTrace_t1598645457 * V_0 = NULL;
	String_t* V_1 = NULL;
	String_t* V_2 = NULL;
	{
		StackTrace_t1598645457 * L_0 = (StackTrace_t1598645457 *)il2cpp_codegen_object_new(StackTrace_t1598645457_il2cpp_TypeInfo_var);
		StackTrace__ctor_m1685176557(L_0, 1, (bool)1, /*hidden argument*/NULL);
		V_0 = L_0;
		StackTrace_t1598645457 * L_1 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(StackTraceUtility_t3465565809_il2cpp_TypeInfo_var);
		String_t* L_2 = StackTraceUtility_ExtractFormattedStackTrace_m1281750362(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		String_t* L_3 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_2);
		V_1 = L_3;
		String_t* L_4 = V_1;
		V_2 = L_4;
		goto IL_001c;
	}

IL_001c:
	{
		String_t* L_5 = V_2;
		return L_5;
	}
}
// System.Boolean UnityEngine.StackTraceUtility::IsSystemStacktraceType(System.Object)
extern "C" IL2CPP_METHOD_ATTR bool StackTraceUtility_IsSystemStacktraceType_m299828041 (RuntimeObject * __this /* static, unused */, RuntimeObject * ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StackTraceUtility_IsSystemStacktraceType_m299828041_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	bool V_1 = false;
	int32_t G_B7_0 = 0;
	{
		RuntimeObject * L_0 = ___name0;
		V_0 = ((String_t*)CastclassSealed((RuntimeObject*)L_0, String_t_il2cpp_TypeInfo_var));
		String_t* L_1 = V_0;
		NullCheck(L_1);
		bool L_2 = String_StartsWith_m1759067526(L_1, _stringLiteral3155606, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_0065;
		}
	}
	{
		String_t* L_3 = V_0;
		NullCheck(L_3);
		bool L_4 = String_StartsWith_m1759067526(L_3, _stringLiteral2227937992, /*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_0065;
		}
	}
	{
		String_t* L_5 = V_0;
		NullCheck(L_5);
		bool L_6 = String_StartsWith_m1759067526(L_5, _stringLiteral547166083, /*hidden argument*/NULL);
		if (L_6)
		{
			goto IL_0065;
		}
	}
	{
		String_t* L_7 = V_0;
		NullCheck(L_7);
		bool L_8 = String_StartsWith_m1759067526(L_7, _stringLiteral3960313174, /*hidden argument*/NULL);
		if (L_8)
		{
			goto IL_0065;
		}
	}
	{
		String_t* L_9 = V_0;
		NullCheck(L_9);
		bool L_10 = String_StartsWith_m1759067526(L_9, _stringLiteral1464230170, /*hidden argument*/NULL);
		if (L_10)
		{
			goto IL_0065;
		}
	}
	{
		String_t* L_11 = V_0;
		NullCheck(L_11);
		bool L_12 = String_StartsWith_m1759067526(L_11, _stringLiteral1625510709, /*hidden argument*/NULL);
		G_B7_0 = ((int32_t)(L_12));
		goto IL_0066;
	}

IL_0065:
	{
		G_B7_0 = 1;
	}

IL_0066:
	{
		V_1 = (bool)G_B7_0;
		goto IL_006c;
	}

IL_006c:
	{
		bool L_13 = V_1;
		return L_13;
	}
}
// System.Void UnityEngine.StackTraceUtility::ExtractStringFromExceptionInternal(System.Object,System.String&,System.String&)
extern "C" IL2CPP_METHOD_ATTR void StackTraceUtility_ExtractStringFromExceptionInternal_m2686726792 (RuntimeObject * __this /* static, unused */, RuntimeObject * ___exceptiono0, String_t** ___message1, String_t** ___stackTrace2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StackTraceUtility_ExtractStringFromExceptionInternal_m2686726792_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t * V_0 = NULL;
	StringBuilder_t * V_1 = NULL;
	String_t* V_2 = NULL;
	String_t* V_3 = NULL;
	String_t* V_4 = NULL;
	StackTrace_t1598645457 * V_5 = NULL;
	int32_t G_B7_0 = 0;
	{
		RuntimeObject * L_0 = ___exceptiono0;
		if (L_0)
		{
			goto IL_0012;
		}
	}
	{
		ArgumentException_t132251570 * L_1 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1312628991(L_1, _stringLiteral1698478619, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, StackTraceUtility_ExtractStringFromExceptionInternal_m2686726792_RuntimeMethod_var);
	}

IL_0012:
	{
		RuntimeObject * L_2 = ___exceptiono0;
		V_0 = ((Exception_t *)IsInstClass((RuntimeObject*)L_2, Exception_t_il2cpp_TypeInfo_var));
		Exception_t * L_3 = V_0;
		if (L_3)
		{
			goto IL_002a;
		}
	}
	{
		ArgumentException_t132251570 * L_4 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1312628991(L_4, _stringLiteral2231172943, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, NULL, StackTraceUtility_ExtractStringFromExceptionInternal_m2686726792_RuntimeMethod_var);
	}

IL_002a:
	{
		Exception_t * L_5 = V_0;
		NullCheck(L_5);
		String_t* L_6 = VirtFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Exception::get_StackTrace() */, L_5);
		if (L_6)
		{
			goto IL_003f;
		}
	}
	{
		G_B7_0 = ((int32_t)512);
		goto IL_004c;
	}

IL_003f:
	{
		Exception_t * L_7 = V_0;
		NullCheck(L_7);
		String_t* L_8 = VirtFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Exception::get_StackTrace() */, L_7);
		NullCheck(L_8);
		int32_t L_9 = String_get_Length_m3847582255(L_8, /*hidden argument*/NULL);
		G_B7_0 = ((int32_t)il2cpp_codegen_multiply((int32_t)L_9, (int32_t)2));
	}

IL_004c:
	{
		StringBuilder_t * L_10 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m2367297767(L_10, G_B7_0, /*hidden argument*/NULL);
		V_1 = L_10;
		String_t** L_11 = ___message1;
		*((RuntimeObject **)L_11) = (RuntimeObject *)_stringLiteral757602046;
		Il2CppCodeGenWriteBarrier((RuntimeObject **)L_11, (RuntimeObject *)_stringLiteral757602046);
		V_2 = _stringLiteral757602046;
		goto IL_0106;
	}

IL_0064:
	{
		String_t* L_12 = V_2;
		NullCheck(L_12);
		int32_t L_13 = String_get_Length_m3847582255(L_12, /*hidden argument*/NULL);
		if (L_13)
		{
			goto IL_007c;
		}
	}
	{
		Exception_t * L_14 = V_0;
		NullCheck(L_14);
		String_t* L_15 = VirtFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Exception::get_StackTrace() */, L_14);
		V_2 = L_15;
		goto IL_008e;
	}

IL_007c:
	{
		Exception_t * L_16 = V_0;
		NullCheck(L_16);
		String_t* L_17 = VirtFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Exception::get_StackTrace() */, L_16);
		String_t* L_18 = V_2;
		String_t* L_19 = String_Concat_m3755062657(NULL /*static, unused*/, L_17, _stringLiteral3452614566, L_18, /*hidden argument*/NULL);
		V_2 = L_19;
	}

IL_008e:
	{
		Exception_t * L_20 = V_0;
		NullCheck(L_20);
		Type_t * L_21 = Exception_GetType_m2227967756(L_20, /*hidden argument*/NULL);
		NullCheck(L_21);
		String_t* L_22 = VirtFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, L_21);
		V_3 = L_22;
		V_4 = _stringLiteral757602046;
		Exception_t * L_23 = V_0;
		NullCheck(L_23);
		String_t* L_24 = VirtFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_23);
		if (!L_24)
		{
			goto IL_00b4;
		}
	}
	{
		Exception_t * L_25 = V_0;
		NullCheck(L_25);
		String_t* L_26 = VirtFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_25);
		V_4 = L_26;
	}

IL_00b4:
	{
		String_t* L_27 = V_4;
		NullCheck(L_27);
		String_t* L_28 = String_Trim_m923598732(L_27, /*hidden argument*/NULL);
		NullCheck(L_28);
		int32_t L_29 = String_get_Length_m3847582255(L_28, /*hidden argument*/NULL);
		if (!L_29)
		{
			goto IL_00dc;
		}
	}
	{
		String_t* L_30 = V_3;
		String_t* L_31 = String_Concat_m3937257545(NULL /*static, unused*/, L_30, _stringLiteral3450517398, /*hidden argument*/NULL);
		V_3 = L_31;
		String_t* L_32 = V_3;
		String_t* L_33 = V_4;
		String_t* L_34 = String_Concat_m3937257545(NULL /*static, unused*/, L_32, L_33, /*hidden argument*/NULL);
		V_3 = L_34;
	}

IL_00dc:
	{
		String_t** L_35 = ___message1;
		String_t* L_36 = V_3;
		*((RuntimeObject **)L_35) = (RuntimeObject *)L_36;
		Il2CppCodeGenWriteBarrier((RuntimeObject **)L_35, (RuntimeObject *)L_36);
		Exception_t * L_37 = V_0;
		NullCheck(L_37);
		Exception_t * L_38 = Exception_get_InnerException_m3836775(L_37, /*hidden argument*/NULL);
		if (!L_38)
		{
			goto IL_00fe;
		}
	}
	{
		String_t* L_39 = V_3;
		String_t* L_40 = V_2;
		String_t* L_41 = String_Concat_m2163913788(NULL /*static, unused*/, _stringLiteral3264019870, L_39, _stringLiteral3452614566, L_40, /*hidden argument*/NULL);
		V_2 = L_41;
	}

IL_00fe:
	{
		Exception_t * L_42 = V_0;
		NullCheck(L_42);
		Exception_t * L_43 = Exception_get_InnerException_m3836775(L_42, /*hidden argument*/NULL);
		V_0 = L_43;
	}

IL_0106:
	{
		Exception_t * L_44 = V_0;
		if (L_44)
		{
			goto IL_0064;
		}
	}
	{
		StringBuilder_t * L_45 = V_1;
		String_t* L_46 = V_2;
		String_t* L_47 = String_Concat_m3937257545(NULL /*static, unused*/, L_46, _stringLiteral3452614566, /*hidden argument*/NULL);
		NullCheck(L_45);
		StringBuilder_Append_m1965104174(L_45, L_47, /*hidden argument*/NULL);
		StackTrace_t1598645457 * L_48 = (StackTrace_t1598645457 *)il2cpp_codegen_object_new(StackTrace_t1598645457_il2cpp_TypeInfo_var);
		StackTrace__ctor_m1685176557(L_48, 1, (bool)1, /*hidden argument*/NULL);
		V_5 = L_48;
		StringBuilder_t * L_49 = V_1;
		StackTrace_t1598645457 * L_50 = V_5;
		IL2CPP_RUNTIME_CLASS_INIT(StackTraceUtility_t3465565809_il2cpp_TypeInfo_var);
		String_t* L_51 = StackTraceUtility_ExtractFormattedStackTrace_m1281750362(NULL /*static, unused*/, L_50, /*hidden argument*/NULL);
		NullCheck(L_49);
		StringBuilder_Append_m1965104174(L_49, L_51, /*hidden argument*/NULL);
		String_t** L_52 = ___stackTrace2;
		StringBuilder_t * L_53 = V_1;
		NullCheck(L_53);
		String_t* L_54 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_53);
		*((RuntimeObject **)L_52) = (RuntimeObject *)L_54;
		Il2CppCodeGenWriteBarrier((RuntimeObject **)L_52, (RuntimeObject *)L_54);
		return;
	}
}
// System.String UnityEngine.StackTraceUtility::PostprocessStacktrace(System.String,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR String_t* StackTraceUtility_PostprocessStacktrace_m1043256299 (RuntimeObject * __this /* static, unused */, String_t* ___oldString0, bool ___stripEngineInternalInformation1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StackTraceUtility_PostprocessStacktrace_m1043256299_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	StringU5BU5D_t1281789340* V_1 = NULL;
	StringBuilder_t * V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	String_t* V_5 = NULL;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	{
		String_t* L_0 = ___oldString0;
		if (L_0)
		{
			goto IL_0012;
		}
	}
	{
		String_t* L_1 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		V_0 = L_1;
		goto IL_02b3;
	}

IL_0012:
	{
		String_t* L_2 = ___oldString0;
		CharU5BU5D_t3528271667* L_3 = (CharU5BU5D_t3528271667*)SZArrayNew(CharU5BU5D_t3528271667_il2cpp_TypeInfo_var, (uint32_t)1);
		CharU5BU5D_t3528271667* L_4 = L_3;
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)((int32_t)10));
		NullCheck(L_2);
		StringU5BU5D_t1281789340* L_5 = String_Split_m3646115398(L_2, L_4, /*hidden argument*/NULL);
		V_1 = L_5;
		String_t* L_6 = ___oldString0;
		NullCheck(L_6);
		int32_t L_7 = String_get_Length_m3847582255(L_6, /*hidden argument*/NULL);
		StringBuilder_t * L_8 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m2367297767(L_8, L_7, /*hidden argument*/NULL);
		V_2 = L_8;
		V_3 = 0;
		goto IL_0046;
	}

IL_0037:
	{
		StringU5BU5D_t1281789340* L_9 = V_1;
		int32_t L_10 = V_3;
		StringU5BU5D_t1281789340* L_11 = V_1;
		int32_t L_12 = V_3;
		NullCheck(L_11);
		int32_t L_13 = L_12;
		String_t* L_14 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		NullCheck(L_14);
		String_t* L_15 = String_Trim_m923598732(L_14, /*hidden argument*/NULL);
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_15);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(L_10), (String_t*)L_15);
		int32_t L_16 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_16, (int32_t)1));
	}

IL_0046:
	{
		int32_t L_17 = V_3;
		StringU5BU5D_t1281789340* L_18 = V_1;
		NullCheck(L_18);
		if ((((int32_t)L_17) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_18)->max_length)))))))
		{
			goto IL_0037;
		}
	}
	{
		V_4 = 0;
		goto IL_029d;
	}

IL_0057:
	{
		StringU5BU5D_t1281789340* L_19 = V_1;
		int32_t L_20 = V_4;
		NullCheck(L_19);
		int32_t L_21 = L_20;
		String_t* L_22 = (L_19)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		V_5 = L_22;
		String_t* L_23 = V_5;
		NullCheck(L_23);
		int32_t L_24 = String_get_Length_m3847582255(L_23, /*hidden argument*/NULL);
		if (!L_24)
		{
			goto IL_0079;
		}
	}
	{
		String_t* L_25 = V_5;
		NullCheck(L_25);
		Il2CppChar L_26 = String_get_Chars_m2986988803(L_25, 0, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_26) == ((uint32_t)((int32_t)10)))))
		{
			goto IL_007e;
		}
	}

IL_0079:
	{
		goto IL_0297;
	}

IL_007e:
	{
		String_t* L_27 = V_5;
		NullCheck(L_27);
		bool L_28 = String_StartsWith_m1759067526(L_27, _stringLiteral1147544838, /*hidden argument*/NULL);
		if (!L_28)
		{
			goto IL_0094;
		}
	}
	{
		goto IL_0297;
	}

IL_0094:
	{
		bool L_29 = ___stripEngineInternalInformation1;
		if (!L_29)
		{
			goto IL_00b0;
		}
	}
	{
		String_t* L_30 = V_5;
		NullCheck(L_30);
		bool L_31 = String_StartsWith_m1759067526(L_30, _stringLiteral1974486273, /*hidden argument*/NULL);
		if (!L_31)
		{
			goto IL_00b0;
		}
	}
	{
		goto IL_02a7;
	}

IL_00b0:
	{
		bool L_32 = ___stripEngineInternalInformation1;
		if (!L_32)
		{
			goto IL_0107;
		}
	}
	{
		int32_t L_33 = V_4;
		StringU5BU5D_t1281789340* L_34 = V_1;
		NullCheck(L_34);
		if ((((int32_t)L_33) >= ((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_34)->max_length)))), (int32_t)1)))))
		{
			goto IL_0107;
		}
	}
	{
		String_t* L_35 = V_5;
		IL2CPP_RUNTIME_CLASS_INIT(StackTraceUtility_t3465565809_il2cpp_TypeInfo_var);
		bool L_36 = StackTraceUtility_IsSystemStacktraceType_m299828041(NULL /*static, unused*/, L_35, /*hidden argument*/NULL);
		if (!L_36)
		{
			goto IL_0107;
		}
	}
	{
		StringU5BU5D_t1281789340* L_37 = V_1;
		int32_t L_38 = V_4;
		NullCheck(L_37);
		int32_t L_39 = ((int32_t)il2cpp_codegen_add((int32_t)L_38, (int32_t)1));
		String_t* L_40 = (L_37)->GetAt(static_cast<il2cpp_array_size_t>(L_39));
		IL2CPP_RUNTIME_CLASS_INIT(StackTraceUtility_t3465565809_il2cpp_TypeInfo_var);
		bool L_41 = StackTraceUtility_IsSystemStacktraceType_m299828041(NULL /*static, unused*/, L_40, /*hidden argument*/NULL);
		if (!L_41)
		{
			goto IL_00e4;
		}
	}
	{
		goto IL_0297;
	}

IL_00e4:
	{
		String_t* L_42 = V_5;
		NullCheck(L_42);
		int32_t L_43 = String_IndexOf_m1977622757(L_42, _stringLiteral3487100581, /*hidden argument*/NULL);
		V_6 = L_43;
		int32_t L_44 = V_6;
		if ((((int32_t)L_44) == ((int32_t)(-1))))
		{
			goto IL_0106;
		}
	}
	{
		String_t* L_45 = V_5;
		int32_t L_46 = V_6;
		NullCheck(L_45);
		String_t* L_47 = String_Substring_m1610150815(L_45, 0, L_46, /*hidden argument*/NULL);
		V_5 = L_47;
	}

IL_0106:
	{
	}

IL_0107:
	{
		String_t* L_48 = V_5;
		NullCheck(L_48);
		int32_t L_49 = String_IndexOf_m1977622757(L_48, _stringLiteral4144164017, /*hidden argument*/NULL);
		if ((((int32_t)L_49) == ((int32_t)(-1))))
		{
			goto IL_011e;
		}
	}
	{
		goto IL_0297;
	}

IL_011e:
	{
		String_t* L_50 = V_5;
		NullCheck(L_50);
		int32_t L_51 = String_IndexOf_m1977622757(L_50, _stringLiteral3629554952, /*hidden argument*/NULL);
		if ((((int32_t)L_51) == ((int32_t)(-1))))
		{
			goto IL_0135;
		}
	}
	{
		goto IL_0297;
	}

IL_0135:
	{
		String_t* L_52 = V_5;
		NullCheck(L_52);
		int32_t L_53 = String_IndexOf_m1977622757(L_52, _stringLiteral461147025, /*hidden argument*/NULL);
		if ((((int32_t)L_53) == ((int32_t)(-1))))
		{
			goto IL_014c;
		}
	}
	{
		goto IL_0297;
	}

IL_014c:
	{
		bool L_54 = ___stripEngineInternalInformation1;
		if (!L_54)
		{
			goto IL_0179;
		}
	}
	{
		String_t* L_55 = V_5;
		NullCheck(L_55);
		bool L_56 = String_StartsWith_m1759067526(L_55, _stringLiteral3452614645, /*hidden argument*/NULL);
		if (!L_56)
		{
			goto IL_0179;
		}
	}
	{
		String_t* L_57 = V_5;
		NullCheck(L_57);
		bool L_58 = String_EndsWith_m1901926500(L_57, _stringLiteral3452614643, /*hidden argument*/NULL);
		if (!L_58)
		{
			goto IL_0179;
		}
	}
	{
		goto IL_0297;
	}

IL_0179:
	{
		String_t* L_59 = V_5;
		NullCheck(L_59);
		bool L_60 = String_StartsWith_m1759067526(L_59, _stringLiteral3791036681, /*hidden argument*/NULL);
		if (!L_60)
		{
			goto IL_0197;
		}
	}
	{
		String_t* L_61 = V_5;
		NullCheck(L_61);
		String_t* L_62 = String_Remove_m562998446(L_61, 0, 3, /*hidden argument*/NULL);
		V_5 = L_62;
	}

IL_0197:
	{
		String_t* L_63 = V_5;
		NullCheck(L_63);
		int32_t L_64 = String_IndexOf_m1977622757(L_63, _stringLiteral4163537911, /*hidden argument*/NULL);
		V_7 = L_64;
		V_8 = (-1);
		int32_t L_65 = V_7;
		if ((((int32_t)L_65) == ((int32_t)(-1))))
		{
			goto IL_01c0;
		}
	}
	{
		String_t* L_66 = V_5;
		int32_t L_67 = V_7;
		NullCheck(L_66);
		int32_t L_68 = String_IndexOf_m3406607758(L_66, _stringLiteral3452614643, L_67, /*hidden argument*/NULL);
		V_8 = L_68;
	}

IL_01c0:
	{
		int32_t L_69 = V_7;
		if ((((int32_t)L_69) == ((int32_t)(-1))))
		{
			goto IL_01e5;
		}
	}
	{
		int32_t L_70 = V_8;
		int32_t L_71 = V_7;
		if ((((int32_t)L_70) <= ((int32_t)L_71)))
		{
			goto IL_01e5;
		}
	}
	{
		String_t* L_72 = V_5;
		int32_t L_73 = V_7;
		int32_t L_74 = V_8;
		int32_t L_75 = V_7;
		NullCheck(L_72);
		String_t* L_76 = String_Remove_m562998446(L_72, L_73, ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_74, (int32_t)L_75)), (int32_t)1)), /*hidden argument*/NULL);
		V_5 = L_76;
	}

IL_01e5:
	{
		String_t* L_77 = V_5;
		NullCheck(L_77);
		String_t* L_78 = String_Replace_m1273907647(L_77, _stringLiteral1311358384, _stringLiteral757602046, /*hidden argument*/NULL);
		V_5 = L_78;
		String_t* L_79 = V_5;
		NullCheck(L_79);
		String_t* L_80 = String_Replace_m1273907647(L_79, _stringLiteral3452614644, _stringLiteral3452614529, /*hidden argument*/NULL);
		V_5 = L_80;
		IL2CPP_RUNTIME_CLASS_INIT(StackTraceUtility_t3465565809_il2cpp_TypeInfo_var);
		String_t* L_81 = ((StackTraceUtility_t3465565809_StaticFields*)il2cpp_codegen_static_fields_for(StackTraceUtility_t3465565809_il2cpp_TypeInfo_var))->get_projectFolder_0();
		bool L_82 = String_IsNullOrEmpty_m2969720369(NULL /*static, unused*/, L_81, /*hidden argument*/NULL);
		if (L_82)
		{
			goto IL_022d;
		}
	}
	{
		String_t* L_83 = V_5;
		IL2CPP_RUNTIME_CLASS_INIT(StackTraceUtility_t3465565809_il2cpp_TypeInfo_var);
		String_t* L_84 = ((StackTraceUtility_t3465565809_StaticFields*)il2cpp_codegen_static_fields_for(StackTraceUtility_t3465565809_il2cpp_TypeInfo_var))->get_projectFolder_0();
		NullCheck(L_83);
		String_t* L_85 = String_Replace_m1273907647(L_83, L_84, _stringLiteral757602046, /*hidden argument*/NULL);
		V_5 = L_85;
	}

IL_022d:
	{
		String_t* L_86 = V_5;
		NullCheck(L_86);
		String_t* L_87 = String_Replace_m3726209165(L_86, ((int32_t)92), ((int32_t)47), /*hidden argument*/NULL);
		V_5 = L_87;
		String_t* L_88 = V_5;
		NullCheck(L_88);
		int32_t L_89 = String_LastIndexOf_m2676535141(L_88, _stringLiteral4187617987, /*hidden argument*/NULL);
		V_9 = L_89;
		int32_t L_90 = V_9;
		if ((((int32_t)L_90) == ((int32_t)(-1))))
		{
			goto IL_0283;
		}
	}
	{
		String_t* L_91 = V_5;
		int32_t L_92 = V_9;
		NullCheck(L_91);
		String_t* L_93 = String_Remove_m562998446(L_91, L_92, 5, /*hidden argument*/NULL);
		V_5 = L_93;
		String_t* L_94 = V_5;
		int32_t L_95 = V_9;
		NullCheck(L_94);
		String_t* L_96 = String_Insert_m3534971326(L_94, L_95, _stringLiteral2177867675, /*hidden argument*/NULL);
		V_5 = L_96;
		String_t* L_97 = V_5;
		String_t* L_98 = V_5;
		NullCheck(L_98);
		int32_t L_99 = String_get_Length_m3847582255(L_98, /*hidden argument*/NULL);
		NullCheck(L_97);
		String_t* L_100 = String_Insert_m3534971326(L_97, L_99, _stringLiteral3452614535, /*hidden argument*/NULL);
		V_5 = L_100;
	}

IL_0283:
	{
		StringBuilder_t * L_101 = V_2;
		String_t* L_102 = V_5;
		String_t* L_103 = String_Concat_m3937257545(NULL /*static, unused*/, L_102, _stringLiteral3452614566, /*hidden argument*/NULL);
		NullCheck(L_101);
		StringBuilder_Append_m1965104174(L_101, L_103, /*hidden argument*/NULL);
	}

IL_0297:
	{
		int32_t L_104 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_104, (int32_t)1));
	}

IL_029d:
	{
		int32_t L_105 = V_4;
		StringU5BU5D_t1281789340* L_106 = V_1;
		NullCheck(L_106);
		if ((((int32_t)L_105) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_106)->max_length)))))))
		{
			goto IL_0057;
		}
	}

IL_02a7:
	{
		StringBuilder_t * L_107 = V_2;
		NullCheck(L_107);
		String_t* L_108 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_107);
		V_0 = L_108;
		goto IL_02b3;
	}

IL_02b3:
	{
		String_t* L_109 = V_0;
		return L_109;
	}
}
// System.String UnityEngine.StackTraceUtility::ExtractFormattedStackTrace(System.Diagnostics.StackTrace)
extern "C" IL2CPP_METHOD_ATTR String_t* StackTraceUtility_ExtractFormattedStackTrace_m1281750362 (RuntimeObject * __this /* static, unused */, StackTrace_t1598645457 * ___stackTrace0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StackTraceUtility_ExtractFormattedStackTrace_m1281750362_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t * V_0 = NULL;
	int32_t V_1 = 0;
	StackFrame_t3217253059 * V_2 = NULL;
	MethodBase_t * V_3 = NULL;
	Type_t * V_4 = NULL;
	String_t* V_5 = NULL;
	int32_t V_6 = 0;
	ParameterInfoU5BU5D_t390618515* V_7 = NULL;
	bool V_8 = false;
	String_t* V_9 = NULL;
	bool V_10 = false;
	int32_t V_11 = 0;
	String_t* V_12 = NULL;
	int32_t G_B27_0 = 0;
	int32_t G_B29_0 = 0;
	{
		StringBuilder_t * L_0 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m2367297767(L_0, ((int32_t)255), /*hidden argument*/NULL);
		V_0 = L_0;
		V_1 = 0;
		goto IL_02cb;
	}

IL_0013:
	{
		StackTrace_t1598645457 * L_1 = ___stackTrace0;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		StackFrame_t3217253059 * L_3 = VirtFuncInvoker1< StackFrame_t3217253059 *, int32_t >::Invoke(5 /* System.Diagnostics.StackFrame System.Diagnostics.StackTrace::GetFrame(System.Int32) */, L_1, L_2);
		V_2 = L_3;
		StackFrame_t3217253059 * L_4 = V_2;
		NullCheck(L_4);
		MethodBase_t * L_5 = VirtFuncInvoker0< MethodBase_t * >::Invoke(7 /* System.Reflection.MethodBase System.Diagnostics.StackFrame::GetMethod() */, L_4);
		V_3 = L_5;
		MethodBase_t * L_6 = V_3;
		if (L_6)
		{
			goto IL_002e;
		}
	}
	{
		goto IL_02c7;
	}

IL_002e:
	{
		MethodBase_t * L_7 = V_3;
		NullCheck(L_7);
		Type_t * L_8 = VirtFuncInvoker0< Type_t * >::Invoke(8 /* System.Type System.Reflection.MemberInfo::get_DeclaringType() */, L_7);
		V_4 = L_8;
		Type_t * L_9 = V_4;
		if (L_9)
		{
			goto IL_0042;
		}
	}
	{
		goto IL_02c7;
	}

IL_0042:
	{
		Type_t * L_10 = V_4;
		NullCheck(L_10);
		String_t* L_11 = VirtFuncInvoker0< String_t* >::Invoke(27 /* System.String System.Type::get_Namespace() */, L_10);
		V_5 = L_11;
		String_t* L_12 = V_5;
		if (!L_12)
		{
			goto IL_0075;
		}
	}
	{
		String_t* L_13 = V_5;
		NullCheck(L_13);
		int32_t L_14 = String_get_Length_m3847582255(L_13, /*hidden argument*/NULL);
		if (!L_14)
		{
			goto IL_0075;
		}
	}
	{
		StringBuilder_t * L_15 = V_0;
		String_t* L_16 = V_5;
		NullCheck(L_15);
		StringBuilder_Append_m1965104174(L_15, L_16, /*hidden argument*/NULL);
		StringBuilder_t * L_17 = V_0;
		NullCheck(L_17);
		StringBuilder_Append_m1965104174(L_17, _stringLiteral3452614530, /*hidden argument*/NULL);
	}

IL_0075:
	{
		StringBuilder_t * L_18 = V_0;
		Type_t * L_19 = V_4;
		NullCheck(L_19);
		String_t* L_20 = VirtFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, L_19);
		NullCheck(L_18);
		StringBuilder_Append_m1965104174(L_18, L_20, /*hidden argument*/NULL);
		StringBuilder_t * L_21 = V_0;
		NullCheck(L_21);
		StringBuilder_Append_m1965104174(L_21, _stringLiteral3452614550, /*hidden argument*/NULL);
		StringBuilder_t * L_22 = V_0;
		MethodBase_t * L_23 = V_3;
		NullCheck(L_23);
		String_t* L_24 = VirtFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, L_23);
		NullCheck(L_22);
		StringBuilder_Append_m1965104174(L_22, L_24, /*hidden argument*/NULL);
		StringBuilder_t * L_25 = V_0;
		NullCheck(L_25);
		StringBuilder_Append_m1965104174(L_25, _stringLiteral3452614536, /*hidden argument*/NULL);
		V_6 = 0;
		MethodBase_t * L_26 = V_3;
		NullCheck(L_26);
		ParameterInfoU5BU5D_t390618515* L_27 = VirtFuncInvoker0< ParameterInfoU5BU5D_t390618515* >::Invoke(17 /* System.Reflection.ParameterInfo[] System.Reflection.MethodBase::GetParameters() */, L_26);
		V_7 = L_27;
		V_8 = (bool)1;
		goto IL_00f4;
	}

IL_00bb:
	{
		bool L_28 = V_8;
		if (L_28)
		{
			goto IL_00d4;
		}
	}
	{
		StringBuilder_t * L_29 = V_0;
		NullCheck(L_29);
		StringBuilder_Append_m1965104174(L_29, _stringLiteral3450517380, /*hidden argument*/NULL);
		goto IL_00d7;
	}

IL_00d4:
	{
		V_8 = (bool)0;
	}

IL_00d7:
	{
		StringBuilder_t * L_30 = V_0;
		ParameterInfoU5BU5D_t390618515* L_31 = V_7;
		int32_t L_32 = V_6;
		NullCheck(L_31);
		int32_t L_33 = L_32;
		ParameterInfo_t1861056598 * L_34 = (L_31)->GetAt(static_cast<il2cpp_array_size_t>(L_33));
		NullCheck(L_34);
		Type_t * L_35 = VirtFuncInvoker0< Type_t * >::Invoke(7 /* System.Type System.Reflection.ParameterInfo::get_ParameterType() */, L_34);
		NullCheck(L_35);
		String_t* L_36 = VirtFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, L_35);
		NullCheck(L_30);
		StringBuilder_Append_m1965104174(L_30, L_36, /*hidden argument*/NULL);
		int32_t L_37 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_37, (int32_t)1));
	}

IL_00f4:
	{
		int32_t L_38 = V_6;
		ParameterInfoU5BU5D_t390618515* L_39 = V_7;
		NullCheck(L_39);
		if ((((int32_t)L_38) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_39)->max_length)))))))
		{
			goto IL_00bb;
		}
	}
	{
		StringBuilder_t * L_40 = V_0;
		NullCheck(L_40);
		StringBuilder_Append_m1965104174(L_40, _stringLiteral3452614535, /*hidden argument*/NULL);
		StackFrame_t3217253059 * L_41 = V_2;
		NullCheck(L_41);
		String_t* L_42 = VirtFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Diagnostics.StackFrame::GetFileName() */, L_41);
		V_9 = L_42;
		String_t* L_43 = V_9;
		if (!L_43)
		{
			goto IL_02ba;
		}
	}
	{
		Type_t * L_44 = V_4;
		NullCheck(L_44);
		String_t* L_45 = VirtFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, L_44);
		bool L_46 = String_op_Equality_m920492651(NULL /*static, unused*/, L_45, _stringLiteral2678398999, /*hidden argument*/NULL);
		if (!L_46)
		{
			goto IL_0147;
		}
	}
	{
		Type_t * L_47 = V_4;
		NullCheck(L_47);
		String_t* L_48 = VirtFuncInvoker0< String_t* >::Invoke(27 /* System.String System.Type::get_Namespace() */, L_47);
		bool L_49 = String_op_Equality_m920492651(NULL /*static, unused*/, L_48, _stringLiteral1552523976, /*hidden argument*/NULL);
		if (L_49)
		{
			goto IL_020c;
		}
	}

IL_0147:
	{
		Type_t * L_50 = V_4;
		NullCheck(L_50);
		String_t* L_51 = VirtFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, L_50);
		bool L_52 = String_op_Equality_m920492651(NULL /*static, unused*/, L_51, _stringLiteral6580196, /*hidden argument*/NULL);
		if (!L_52)
		{
			goto IL_0173;
		}
	}
	{
		Type_t * L_53 = V_4;
		NullCheck(L_53);
		String_t* L_54 = VirtFuncInvoker0< String_t* >::Invoke(27 /* System.String System.Type::get_Namespace() */, L_53);
		bool L_55 = String_op_Equality_m920492651(NULL /*static, unused*/, L_54, _stringLiteral1552523976, /*hidden argument*/NULL);
		if (L_55)
		{
			goto IL_020c;
		}
	}

IL_0173:
	{
		Type_t * L_56 = V_4;
		NullCheck(L_56);
		String_t* L_57 = VirtFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, L_56);
		bool L_58 = String_op_Equality_m920492651(NULL /*static, unused*/, L_57, _stringLiteral3402824819, /*hidden argument*/NULL);
		if (!L_58)
		{
			goto IL_019f;
		}
	}
	{
		Type_t * L_59 = V_4;
		NullCheck(L_59);
		String_t* L_60 = VirtFuncInvoker0< String_t* >::Invoke(27 /* System.String System.Type::get_Namespace() */, L_59);
		bool L_61 = String_op_Equality_m920492651(NULL /*static, unused*/, L_60, _stringLiteral1552523976, /*hidden argument*/NULL);
		if (L_61)
		{
			goto IL_020c;
		}
	}

IL_019f:
	{
		Type_t * L_62 = V_4;
		NullCheck(L_62);
		String_t* L_63 = VirtFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, L_62);
		bool L_64 = String_op_Equality_m920492651(NULL /*static, unused*/, L_63, _stringLiteral1670073234, /*hidden argument*/NULL);
		if (!L_64)
		{
			goto IL_01cb;
		}
	}
	{
		Type_t * L_65 = V_4;
		NullCheck(L_65);
		String_t* L_66 = VirtFuncInvoker0< String_t* >::Invoke(27 /* System.String System.Type::get_Namespace() */, L_65);
		bool L_67 = String_op_Equality_m920492651(NULL /*static, unused*/, L_66, _stringLiteral1200226066, /*hidden argument*/NULL);
		if (L_67)
		{
			goto IL_020c;
		}
	}

IL_01cb:
	{
		MethodBase_t * L_68 = V_3;
		NullCheck(L_68);
		String_t* L_69 = VirtFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, L_68);
		bool L_70 = String_op_Equality_m920492651(NULL /*static, unused*/, L_69, _stringLiteral61343007, /*hidden argument*/NULL);
		if (!L_70)
		{
			goto IL_0209;
		}
	}
	{
		Type_t * L_71 = V_4;
		NullCheck(L_71);
		String_t* L_72 = VirtFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, L_71);
		bool L_73 = String_op_Equality_m920492651(NULL /*static, unused*/, L_72, _stringLiteral681811338, /*hidden argument*/NULL);
		if (!L_73)
		{
			goto IL_0209;
		}
	}
	{
		Type_t * L_74 = V_4;
		NullCheck(L_74);
		String_t* L_75 = VirtFuncInvoker0< String_t* >::Invoke(27 /* System.String System.Type::get_Namespace() */, L_74);
		bool L_76 = String_op_Equality_m920492651(NULL /*static, unused*/, L_75, _stringLiteral1552523976, /*hidden argument*/NULL);
		G_B27_0 = ((int32_t)(L_76));
		goto IL_020a;
	}

IL_0209:
	{
		G_B27_0 = 0;
	}

IL_020a:
	{
		G_B29_0 = G_B27_0;
		goto IL_020d;
	}

IL_020c:
	{
		G_B29_0 = 1;
	}

IL_020d:
	{
		V_10 = (bool)G_B29_0;
		bool L_77 = V_10;
		if (L_77)
		{
			goto IL_02b9;
		}
	}
	{
		StringBuilder_t * L_78 = V_0;
		NullCheck(L_78);
		StringBuilder_Append_m1965104174(L_78, _stringLiteral2177867675, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(StackTraceUtility_t3465565809_il2cpp_TypeInfo_var);
		String_t* L_79 = ((StackTraceUtility_t3465565809_StaticFields*)il2cpp_codegen_static_fields_for(StackTraceUtility_t3465565809_il2cpp_TypeInfo_var))->get_projectFolder_0();
		bool L_80 = String_IsNullOrEmpty_m2969720369(NULL /*static, unused*/, L_79, /*hidden argument*/NULL);
		if (L_80)
		{
			goto IL_027b;
		}
	}
	{
		String_t* L_81 = V_9;
		NullCheck(L_81);
		String_t* L_82 = String_Replace_m1273907647(L_81, _stringLiteral3452614644, _stringLiteral3452614529, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(StackTraceUtility_t3465565809_il2cpp_TypeInfo_var);
		String_t* L_83 = ((StackTraceUtility_t3465565809_StaticFields*)il2cpp_codegen_static_fields_for(StackTraceUtility_t3465565809_il2cpp_TypeInfo_var))->get_projectFolder_0();
		NullCheck(L_82);
		bool L_84 = String_StartsWith_m1759067526(L_82, L_83, /*hidden argument*/NULL);
		if (!L_84)
		{
			goto IL_027a;
		}
	}
	{
		String_t* L_85 = V_9;
		IL2CPP_RUNTIME_CLASS_INIT(StackTraceUtility_t3465565809_il2cpp_TypeInfo_var);
		String_t* L_86 = ((StackTraceUtility_t3465565809_StaticFields*)il2cpp_codegen_static_fields_for(StackTraceUtility_t3465565809_il2cpp_TypeInfo_var))->get_projectFolder_0();
		NullCheck(L_86);
		int32_t L_87 = String_get_Length_m3847582255(L_86, /*hidden argument*/NULL);
		String_t* L_88 = V_9;
		NullCheck(L_88);
		int32_t L_89 = String_get_Length_m3847582255(L_88, /*hidden argument*/NULL);
		String_t* L_90 = ((StackTraceUtility_t3465565809_StaticFields*)il2cpp_codegen_static_fields_for(StackTraceUtility_t3465565809_il2cpp_TypeInfo_var))->get_projectFolder_0();
		NullCheck(L_90);
		int32_t L_91 = String_get_Length_m3847582255(L_90, /*hidden argument*/NULL);
		NullCheck(L_85);
		String_t* L_92 = String_Substring_m1610150815(L_85, L_87, ((int32_t)il2cpp_codegen_subtract((int32_t)L_89, (int32_t)L_91)), /*hidden argument*/NULL);
		V_9 = L_92;
	}

IL_027a:
	{
	}

IL_027b:
	{
		StringBuilder_t * L_93 = V_0;
		String_t* L_94 = V_9;
		NullCheck(L_93);
		StringBuilder_Append_m1965104174(L_93, L_94, /*hidden argument*/NULL);
		StringBuilder_t * L_95 = V_0;
		NullCheck(L_95);
		StringBuilder_Append_m1965104174(L_95, _stringLiteral3452614550, /*hidden argument*/NULL);
		StringBuilder_t * L_96 = V_0;
		StackFrame_t3217253059 * L_97 = V_2;
		NullCheck(L_97);
		int32_t L_98 = VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 System.Diagnostics.StackFrame::GetFileLineNumber() */, L_97);
		V_11 = L_98;
		String_t* L_99 = Int32_ToString_m141394615((int32_t*)(&V_11), /*hidden argument*/NULL);
		NullCheck(L_96);
		StringBuilder_Append_m1965104174(L_96, L_99, /*hidden argument*/NULL);
		StringBuilder_t * L_100 = V_0;
		NullCheck(L_100);
		StringBuilder_Append_m1965104174(L_100, _stringLiteral3452614535, /*hidden argument*/NULL);
	}

IL_02b9:
	{
	}

IL_02ba:
	{
		StringBuilder_t * L_101 = V_0;
		NullCheck(L_101);
		StringBuilder_Append_m1965104174(L_101, _stringLiteral3452614566, /*hidden argument*/NULL);
	}

IL_02c7:
	{
		int32_t L_102 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_102, (int32_t)1));
	}

IL_02cb:
	{
		int32_t L_103 = V_1;
		StackTrace_t1598645457 * L_104 = ___stackTrace0;
		NullCheck(L_104);
		int32_t L_105 = VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 System.Diagnostics.StackTrace::get_FrameCount() */, L_104);
		if ((((int32_t)L_103) < ((int32_t)L_105)))
		{
			goto IL_0013;
		}
	}
	{
		StringBuilder_t * L_106 = V_0;
		NullCheck(L_106);
		String_t* L_107 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_106);
		V_12 = L_107;
		goto IL_02e4;
	}

IL_02e4:
	{
		String_t* L_108 = V_12;
		return L_108;
	}
}
// System.Void UnityEngine.StackTraceUtility::.cctor()
extern "C" IL2CPP_METHOD_ATTR void StackTraceUtility__cctor_m1981266436 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StackTraceUtility__cctor_m1981266436_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		((StackTraceUtility_t3465565809_StaticFields*)il2cpp_codegen_static_fields_for(StackTraceUtility_t3465565809_il2cpp_TypeInfo_var))->set_projectFolder_0(_stringLiteral757602046);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.OperatingSystemFamily UnityEngine.SystemInfo::get_operatingSystemFamily()
extern "C" IL2CPP_METHOD_ATTR int32_t SystemInfo_get_operatingSystemFamily_m4256884728 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = SystemInfo_GetOperatingSystemFamily_m1440411909(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
// UnityEngine.OperatingSystemFamily UnityEngine.SystemInfo::GetOperatingSystemFamily()
extern "C" IL2CPP_METHOD_ATTR int32_t SystemInfo_GetOperatingSystemFamily_m1440411909 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	typedef int32_t (*SystemInfo_GetOperatingSystemFamily_m1440411909_ftn) ();
	static SystemInfo_GetOperatingSystemFamily_m1440411909_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (SystemInfo_GetOperatingSystemFamily_m1440411909_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.SystemInfo::GetOperatingSystemFamily()");
	int32_t retVal = _il2cpp_icall_func();
	return retVal;
}
// System.Boolean UnityEngine.SystemInfo::IsFormatSupported(UnityEngine.Experimental.Rendering.GraphicsFormat,UnityEngine.Experimental.Rendering.FormatUsage)
extern "C" IL2CPP_METHOD_ATTR bool SystemInfo_IsFormatSupported_m1855899386 (RuntimeObject * __this /* static, unused */, int32_t ___format0, int32_t ___usage1, const RuntimeMethod* method)
{
	typedef bool (*SystemInfo_IsFormatSupported_m1855899386_ftn) (int32_t, int32_t);
	static SystemInfo_IsFormatSupported_m1855899386_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (SystemInfo_IsFormatSupported_m1855899386_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.SystemInfo::IsFormatSupported(UnityEngine.Experimental.Rendering.GraphicsFormat,UnityEngine.Experimental.Rendering.FormatUsage)");
	bool retVal = _il2cpp_icall_func(___format0, ___usage1);
	return retVal;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.TextAreaAttribute::.ctor(System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void TextAreaAttribute__ctor_m2173231689 (TextAreaAttribute_t3326046611 * __this, int32_t ___minLines0, int32_t ___maxLines1, const RuntimeMethod* method)
{
	{
		PropertyAttribute__ctor_m1017741868(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___minLines0;
		__this->set_minLines_0(L_0);
		int32_t L_1 = ___maxLines1;
		__this->set_maxLines_1(L_1);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Texture::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Texture__ctor_m3554519797 (Texture_t3661962703 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Texture__ctor_m3554519797_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		Object__ctor_m1087895580(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 UnityEngine.Texture::GetDataWidth()
extern "C" IL2CPP_METHOD_ATTR int32_t Texture_GetDataWidth_m2906817031 (Texture_t3661962703 * __this, const RuntimeMethod* method)
{
	typedef int32_t (*Texture_GetDataWidth_m2906817031_ftn) (Texture_t3661962703 *);
	static Texture_GetDataWidth_m2906817031_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Texture_GetDataWidth_m2906817031_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Texture::GetDataWidth()");
	int32_t retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Int32 UnityEngine.Texture::GetDataHeight()
extern "C" IL2CPP_METHOD_ATTR int32_t Texture_GetDataHeight_m100074750 (Texture_t3661962703 * __this, const RuntimeMethod* method)
{
	typedef int32_t (*Texture_GetDataHeight_m100074750_ftn) (Texture_t3661962703 *);
	static Texture_GetDataHeight_m100074750_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Texture_GetDataHeight_m100074750_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Texture::GetDataHeight()");
	int32_t retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Int32 UnityEngine.Texture::get_width()
extern "C" IL2CPP_METHOD_ATTR int32_t Texture_get_width_m888163864 (Texture_t3661962703 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = Texture_GetDataWidth_m2906817031(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Texture::set_width(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void Texture_set_width_m1057761909 (Texture_t3661962703 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Texture_set_width_m1057761909_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotImplementedException_t3489357830 * L_0 = (NotImplementedException_t3489357830 *)il2cpp_codegen_object_new(NotImplementedException_t3489357830_il2cpp_TypeInfo_var);
		NotImplementedException__ctor_m3058704252(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, NULL, Texture_set_width_m1057761909_RuntimeMethod_var);
	}
}
// System.Int32 UnityEngine.Texture::get_height()
extern "C" IL2CPP_METHOD_ATTR int32_t Texture_get_height_m3786488511 (Texture_t3661962703 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = Texture_GetDataHeight_m100074750(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Texture::set_height(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void Texture_set_height_m589028641 (Texture_t3661962703 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Texture_set_height_m589028641_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotImplementedException_t3489357830 * L_0 = (NotImplementedException_t3489357830 *)il2cpp_codegen_object_new(NotImplementedException_t3489357830_il2cpp_TypeInfo_var);
		NotImplementedException__ctor_m3058704252(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, NULL, Texture_set_height_m589028641_RuntimeMethod_var);
	}
}
// UnityEngine.TextureWrapMode UnityEngine.Texture::get_wrapMode()
extern "C" IL2CPP_METHOD_ATTR int32_t Texture_get_wrapMode_m2187367613 (Texture_t3661962703 * __this, const RuntimeMethod* method)
{
	typedef int32_t (*Texture_get_wrapMode_m2187367613_ftn) (Texture_t3661962703 *);
	static Texture_get_wrapMode_m2187367613_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Texture_get_wrapMode_m2187367613_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Texture::get_wrapMode()");
	int32_t retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Void UnityEngine.Texture::set_wrapMode(UnityEngine.TextureWrapMode)
extern "C" IL2CPP_METHOD_ATTR void Texture_set_wrapMode_m587872754 (Texture_t3661962703 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	typedef void (*Texture_set_wrapMode_m587872754_ftn) (Texture_t3661962703 *, int32_t);
	static Texture_set_wrapMode_m587872754_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Texture_set_wrapMode_m587872754_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Texture::set_wrapMode(UnityEngine.TextureWrapMode)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Void UnityEngine.Texture::set_filterMode(UnityEngine.FilterMode)
extern "C" IL2CPP_METHOD_ATTR void Texture_set_filterMode_m3078068058 (Texture_t3661962703 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	typedef void (*Texture_set_filterMode_m3078068058_ftn) (Texture_t3661962703 *, int32_t);
	static Texture_set_filterMode_m3078068058_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Texture_set_filterMode_m3078068058_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Texture::set_filterMode(UnityEngine.FilterMode)");
	_il2cpp_icall_func(__this, ___value0);
}
// UnityEngine.Vector2 UnityEngine.Texture::get_texelSize()
extern "C" IL2CPP_METHOD_ATTR Vector2_t2156229523  Texture_get_texelSize_m2409716740 (Texture_t3661962703 * __this, const RuntimeMethod* method)
{
	Vector2_t2156229523  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		Texture_get_texelSize_Injected_m2677033317(__this, (Vector2_t2156229523 *)(&V_0), /*hidden argument*/NULL);
		Vector2_t2156229523  L_0 = V_0;
		return L_0;
	}
}
// System.IntPtr UnityEngine.Texture::GetNativeTexturePtr()
extern "C" IL2CPP_METHOD_ATTR intptr_t Texture_GetNativeTexturePtr_m4054748062 (Texture_t3661962703 * __this, const RuntimeMethod* method)
{
	typedef intptr_t (*Texture_GetNativeTexturePtr_m4054748062_ftn) (Texture_t3661962703 *);
	static Texture_GetNativeTexturePtr_m4054748062_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Texture_GetNativeTexturePtr_m4054748062_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Texture::GetNativeTexturePtr()");
	intptr_t retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Boolean UnityEngine.Texture::ValidateFormat(UnityEngine.Experimental.Rendering.GraphicsFormat,UnityEngine.Experimental.Rendering.FormatUsage)
extern "C" IL2CPP_METHOD_ATTR bool Texture_ValidateFormat_m3925257631 (Texture_t3661962703 * __this, int32_t ___format0, int32_t ___usage1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Texture_ValidateFormat_m3925257631_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		int32_t L_0 = ___format0;
		int32_t L_1 = ___usage1;
		bool L_2 = SystemInfo_IsFormatSupported_m1855899386(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0015;
		}
	}
	{
		V_0 = (bool)1;
		goto IL_0039;
	}

IL_0015:
	{
		String_t* L_3 = Object_get_name_m4211327027(__this, /*hidden argument*/NULL);
		int32_t L_4 = ___format0;
		int32_t L_5 = L_4;
		RuntimeObject * L_6 = Box(GraphicsFormat_t3787950389_il2cpp_TypeInfo_var, &L_5);
		String_t* L_7 = String_Format_m2556382932(NULL /*static, unused*/, _stringLiteral1126063082, L_3, L_6, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_LogError_m1665621915(NULL /*static, unused*/, L_7, __this, /*hidden argument*/NULL);
		V_0 = (bool)0;
		goto IL_0039;
	}

IL_0039:
	{
		bool L_8 = V_0;
		return L_8;
	}
}
// UnityEngine.UnityException UnityEngine.Texture::CreateNonReadableException(UnityEngine.Texture)
extern "C" IL2CPP_METHOD_ATTR UnityException_t3598173660 * Texture_CreateNonReadableException_m1462630389 (Texture_t3661962703 * __this, Texture_t3661962703 * ___t0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Texture_CreateNonReadableException_m1462630389_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	UnityException_t3598173660 * V_0 = NULL;
	{
		Texture_t3661962703 * L_0 = ___t0;
		NullCheck(L_0);
		String_t* L_1 = Object_get_name_m4211327027(L_0, /*hidden argument*/NULL);
		String_t* L_2 = String_Format_m2844511972(NULL /*static, unused*/, _stringLiteral3234850613, L_1, /*hidden argument*/NULL);
		UnityException_t3598173660 * L_3 = (UnityException_t3598173660 *)il2cpp_codegen_object_new(UnityException_t3598173660_il2cpp_TypeInfo_var);
		UnityException__ctor_m872329880(L_3, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		goto IL_001c;
	}

IL_001c:
	{
		UnityException_t3598173660 * L_4 = V_0;
		return L_4;
	}
}
// System.Void UnityEngine.Texture::get_texelSize_Injected(UnityEngine.Vector2&)
extern "C" IL2CPP_METHOD_ATTR void Texture_get_texelSize_Injected_m2677033317 (Texture_t3661962703 * __this, Vector2_t2156229523 * ___ret0, const RuntimeMethod* method)
{
	typedef void (*Texture_get_texelSize_Injected_m2677033317_ftn) (Texture_t3661962703 *, Vector2_t2156229523 *);
	static Texture_get_texelSize_Injected_m2677033317_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Texture_get_texelSize_Injected_m2677033317_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Texture::get_texelSize_Injected(UnityEngine.Vector2&)");
	_il2cpp_icall_func(__this, ___ret0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Texture2D::.ctor(System.Int32,System.Int32,UnityEngine.TextureFormat,System.Boolean,System.Boolean,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void Texture2D__ctor_m3176621650 (Texture2D_t3840446185 * __this, int32_t ___width0, int32_t ___height1, int32_t ___textureFormat2, bool ___mipChain3, bool ___linear4, intptr_t ___nativeTex5, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		Texture__ctor_m3554519797(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___textureFormat2;
		bool L_1 = ___linear4;
		int32_t L_2 = GraphicsFormatUtility_GetGraphicsFormat_m3445248969(NULL /*static, unused*/, L_0, (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0), /*hidden argument*/NULL);
		V_0 = L_2;
		V_1 = 0;
		bool L_3 = ___mipChain3;
		if (!L_3)
		{
			goto IL_0020;
		}
	}
	{
		int32_t L_4 = V_1;
		V_1 = ((int32_t)((int32_t)L_4|(int32_t)1));
	}

IL_0020:
	{
		int32_t L_5 = ___textureFormat2;
		bool L_6 = GraphicsFormatUtility_IsCrunchFormat_m1697721778(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0030;
		}
	}
	{
		int32_t L_7 = V_1;
		V_1 = ((int32_t)((int32_t)L_7|(int32_t)((int32_t)64)));
	}

IL_0030:
	{
		int32_t L_8 = ___width0;
		int32_t L_9 = ___height1;
		int32_t L_10 = V_0;
		int32_t L_11 = V_1;
		intptr_t L_12 = ___nativeTex5;
		Texture2D_Internal_Create_m3592711635(NULL /*static, unused*/, __this, L_8, L_9, L_10, L_11, (intptr_t)L_12, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Texture2D::.ctor(System.Int32,System.Int32,UnityEngine.TextureFormat,System.Boolean,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void Texture2D__ctor_m1269666504 (Texture2D_t3840446185 * __this, int32_t ___width0, int32_t ___height1, int32_t ___textureFormat2, bool ___mipChain3, bool ___linear4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Texture2D__ctor_m1269666504_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___width0;
		int32_t L_1 = ___height1;
		int32_t L_2 = ___textureFormat2;
		bool L_3 = ___mipChain3;
		bool L_4 = ___linear4;
		Texture2D__ctor_m3176621650(__this, L_0, L_1, L_2, L_3, L_4, (intptr_t)(0), /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Texture2D::.ctor(System.Int32,System.Int32,UnityEngine.TextureFormat,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void Texture2D__ctor_m2862217990 (Texture2D_t3840446185 * __this, int32_t ___width0, int32_t ___height1, int32_t ___textureFormat2, bool ___mipChain3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Texture2D__ctor_m2862217990_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___width0;
		int32_t L_1 = ___height1;
		int32_t L_2 = ___textureFormat2;
		bool L_3 = ___mipChain3;
		Texture2D__ctor_m3176621650(__this, L_0, L_1, L_2, L_3, (bool)0, (intptr_t)(0), /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Texture2D::.ctor(System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void Texture2D__ctor_m373113269 (Texture2D_t3840446185 * __this, int32_t ___width0, int32_t ___height1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Texture2D__ctor_m373113269_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___width0;
		int32_t L_1 = ___height1;
		Texture2D__ctor_m3176621650(__this, L_0, L_1, 4, (bool)1, (bool)0, (intptr_t)(0), /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Texture2D::SetAllPixels32(UnityEngine.Color32[],System.Int32)
extern "C" IL2CPP_METHOD_ATTR void Texture2D_SetAllPixels32_m734711553 (Texture2D_t3840446185 * __this, Color32U5BU5D_t3850468773* ___colors0, int32_t ___miplevel1, const RuntimeMethod* method)
{
	typedef void (*Texture2D_SetAllPixels32_m734711553_ftn) (Texture2D_t3840446185 *, Color32U5BU5D_t3850468773*, int32_t);
	static Texture2D_SetAllPixels32_m734711553_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Texture2D_SetAllPixels32_m734711553_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Texture2D::SetAllPixels32(UnityEngine.Color32[],System.Int32)");
	_il2cpp_icall_func(__this, ___colors0, ___miplevel1);
}
// System.Void UnityEngine.Texture2D::SetPixels32(UnityEngine.Color32[])
extern "C" IL2CPP_METHOD_ATTR void Texture2D_SetPixels32_m1141065075 (Texture2D_t3840446185 * __this, Color32U5BU5D_t3850468773* ___colors0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		V_0 = 0;
		Color32U5BU5D_t3850468773* L_0 = ___colors0;
		int32_t L_1 = V_0;
		Texture2D_SetPixels32_m2156254057(__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Texture2D::SetPixels32(UnityEngine.Color32[],System.Int32)
extern "C" IL2CPP_METHOD_ATTR void Texture2D_SetPixels32_m2156254057 (Texture2D_t3840446185 * __this, Color32U5BU5D_t3850468773* ___colors0, int32_t ___miplevel1, const RuntimeMethod* method)
{
	{
		Color32U5BU5D_t3850468773* L_0 = ___colors0;
		int32_t L_1 = ___miplevel1;
		Texture2D_SetAllPixels32_m734711553(__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Color[] UnityEngine.Texture2D::GetPixels()
extern "C" IL2CPP_METHOD_ATTR ColorU5BU5D_t941916413* Texture2D_GetPixels_m2081641574 (Texture2D_t3840446185 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	ColorU5BU5D_t941916413* V_1 = NULL;
	{
		V_0 = 0;
		int32_t L_0 = V_0;
		ColorU5BU5D_t941916413* L_1 = Texture2D_GetPixels_m2757678651(__this, L_0, /*hidden argument*/NULL);
		V_1 = L_1;
		goto IL_0010;
	}

IL_0010:
	{
		ColorU5BU5D_t941916413* L_2 = V_1;
		return L_2;
	}
}
// UnityEngine.Color[] UnityEngine.Texture2D::GetPixels(System.Int32)
extern "C" IL2CPP_METHOD_ATTR ColorU5BU5D_t941916413* Texture2D_GetPixels_m2757678651 (Texture2D_t3840446185 * __this, int32_t ___miplevel0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	ColorU5BU5D_t941916413* V_2 = NULL;
	{
		int32_t L_0 = VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, __this);
		int32_t L_1 = ___miplevel0;
		V_0 = ((int32_t)((int32_t)L_0>>(int32_t)((int32_t)((int32_t)L_1&(int32_t)((int32_t)31)))));
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) >= ((int32_t)1)))
		{
			goto IL_0016;
		}
	}
	{
		V_0 = 1;
	}

IL_0016:
	{
		int32_t L_3 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, __this);
		int32_t L_4 = ___miplevel0;
		V_1 = ((int32_t)((int32_t)L_3>>(int32_t)((int32_t)((int32_t)L_4&(int32_t)((int32_t)31)))));
		int32_t L_5 = V_1;
		if ((((int32_t)L_5) >= ((int32_t)1)))
		{
			goto IL_002b;
		}
	}
	{
		V_1 = 1;
	}

IL_002b:
	{
		int32_t L_6 = V_0;
		int32_t L_7 = V_1;
		int32_t L_8 = ___miplevel0;
		ColorU5BU5D_t941916413* L_9 = Texture2D_GetPixels_m4117143883(__this, 0, 0, L_6, L_7, L_8, /*hidden argument*/NULL);
		V_2 = L_9;
		goto IL_003c;
	}

IL_003c:
	{
		ColorU5BU5D_t941916413* L_10 = V_2;
		return L_10;
	}
}
// UnityEngine.Color[] UnityEngine.Texture2D::GetPixels(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR ColorU5BU5D_t941916413* Texture2D_GetPixels_m4117143883 (Texture2D_t3840446185 * __this, int32_t ___x0, int32_t ___y1, int32_t ___blockWidth2, int32_t ___blockHeight3, int32_t ___miplevel4, const RuntimeMethod* method)
{
	typedef ColorU5BU5D_t941916413* (*Texture2D_GetPixels_m4117143883_ftn) (Texture2D_t3840446185 *, int32_t, int32_t, int32_t, int32_t, int32_t);
	static Texture2D_GetPixels_m4117143883_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Texture2D_GetPixels_m4117143883_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Texture2D::GetPixels(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)");
	ColorU5BU5D_t941916413* retVal = _il2cpp_icall_func(__this, ___x0, ___y1, ___blockWidth2, ___blockHeight3, ___miplevel4);
	return retVal;
}
// UnityEngine.Color32[] UnityEngine.Texture2D::GetPixels32(System.Int32)
extern "C" IL2CPP_METHOD_ATTR Color32U5BU5D_t3850468773* Texture2D_GetPixels32_m1841405004 (Texture2D_t3840446185 * __this, int32_t ___miplevel0, const RuntimeMethod* method)
{
	typedef Color32U5BU5D_t3850468773* (*Texture2D_GetPixels32_m1841405004_ftn) (Texture2D_t3840446185 *, int32_t);
	static Texture2D_GetPixels32_m1841405004_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Texture2D_GetPixels32_m1841405004_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Texture2D::GetPixels32(System.Int32)");
	Color32U5BU5D_t3850468773* retVal = _il2cpp_icall_func(__this, ___miplevel0);
	return retVal;
}
// UnityEngine.Color32[] UnityEngine.Texture2D::GetPixels32()
extern "C" IL2CPP_METHOD_ATTR Color32U5BU5D_t3850468773* Texture2D_GetPixels32_m647746242 (Texture2D_t3840446185 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	Color32U5BU5D_t3850468773* V_1 = NULL;
	{
		V_0 = 0;
		int32_t L_0 = V_0;
		Color32U5BU5D_t3850468773* L_1 = Texture2D_GetPixels32_m1841405004(__this, L_0, /*hidden argument*/NULL);
		V_1 = L_1;
		goto IL_0010;
	}

IL_0010:
	{
		Color32U5BU5D_t3850468773* L_2 = V_1;
		return L_2;
	}
}
// UnityEngine.TextureFormat UnityEngine.Texture2D::get_format()
extern "C" IL2CPP_METHOD_ATTR int32_t Texture2D_get_format_m2371899271 (Texture2D_t3840446185 * __this, const RuntimeMethod* method)
{
	typedef int32_t (*Texture2D_get_format_m2371899271_ftn) (Texture2D_t3840446185 *);
	static Texture2D_get_format_m2371899271_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Texture2D_get_format_m2371899271_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Texture2D::get_format()");
	int32_t retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// UnityEngine.Texture2D UnityEngine.Texture2D::get_whiteTexture()
extern "C" IL2CPP_METHOD_ATTR Texture2D_t3840446185 * Texture2D_get_whiteTexture_m2176011403 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	typedef Texture2D_t3840446185 * (*Texture2D_get_whiteTexture_m2176011403_ftn) ();
	static Texture2D_get_whiteTexture_m2176011403_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Texture2D_get_whiteTexture_m2176011403_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Texture2D::get_whiteTexture()");
	Texture2D_t3840446185 * retVal = _il2cpp_icall_func();
	return retVal;
}
// System.Boolean UnityEngine.Texture2D::Internal_CreateImpl(UnityEngine.Texture2D,System.Int32,System.Int32,UnityEngine.Experimental.Rendering.GraphicsFormat,UnityEngine.Experimental.Rendering.TextureCreationFlags,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR bool Texture2D_Internal_CreateImpl_m110138258 (RuntimeObject * __this /* static, unused */, Texture2D_t3840446185 * ___mono0, int32_t ___w1, int32_t ___h2, int32_t ___format3, int32_t ___flags4, intptr_t ___nativeTex5, const RuntimeMethod* method)
{
	typedef bool (*Texture2D_Internal_CreateImpl_m110138258_ftn) (Texture2D_t3840446185 *, int32_t, int32_t, int32_t, int32_t, intptr_t);
	static Texture2D_Internal_CreateImpl_m110138258_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Texture2D_Internal_CreateImpl_m110138258_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Texture2D::Internal_CreateImpl(UnityEngine.Texture2D,System.Int32,System.Int32,UnityEngine.Experimental.Rendering.GraphicsFormat,UnityEngine.Experimental.Rendering.TextureCreationFlags,System.IntPtr)");
	bool retVal = _il2cpp_icall_func(___mono0, ___w1, ___h2, ___format3, ___flags4, ___nativeTex5);
	return retVal;
}
// System.Void UnityEngine.Texture2D::Internal_Create(UnityEngine.Texture2D,System.Int32,System.Int32,UnityEngine.Experimental.Rendering.GraphicsFormat,UnityEngine.Experimental.Rendering.TextureCreationFlags,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void Texture2D_Internal_Create_m3592711635 (RuntimeObject * __this /* static, unused */, Texture2D_t3840446185 * ___mono0, int32_t ___w1, int32_t ___h2, int32_t ___format3, int32_t ___flags4, intptr_t ___nativeTex5, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Texture2D_Internal_Create_m3592711635_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Texture2D_t3840446185 * L_0 = ___mono0;
		int32_t L_1 = ___w1;
		int32_t L_2 = ___h2;
		int32_t L_3 = ___format3;
		int32_t L_4 = ___flags4;
		intptr_t L_5 = ___nativeTex5;
		bool L_6 = Texture2D_Internal_CreateImpl_m110138258(NULL /*static, unused*/, L_0, L_1, L_2, L_3, L_4, (intptr_t)L_5, /*hidden argument*/NULL);
		if (L_6)
		{
			goto IL_001e;
		}
	}
	{
		UnityException_t3598173660 * L_7 = (UnityException_t3598173660 *)il2cpp_codegen_object_new(UnityException_t3598173660_il2cpp_TypeInfo_var);
		UnityException__ctor_m872329880(L_7, _stringLiteral3481154761, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, NULL, Texture2D_Internal_Create_m3592711635_RuntimeMethod_var);
	}

IL_001e:
	{
		return;
	}
}
// System.Boolean UnityEngine.Texture2D::IsReadable()
extern "C" IL2CPP_METHOD_ATTR bool Texture2D_IsReadable_m47074913 (Texture2D_t3840446185 * __this, const RuntimeMethod* method)
{
	typedef bool (*Texture2D_IsReadable_m47074913_ftn) (Texture2D_t3840446185 *);
	static Texture2D_IsReadable_m47074913_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Texture2D_IsReadable_m47074913_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Texture2D::IsReadable()");
	bool retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Void UnityEngine.Texture2D::ApplyImpl(System.Boolean,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void Texture2D_ApplyImpl_m2371374512 (Texture2D_t3840446185 * __this, bool ___updateMipmaps0, bool ___makeNoLongerReadable1, const RuntimeMethod* method)
{
	typedef void (*Texture2D_ApplyImpl_m2371374512_ftn) (Texture2D_t3840446185 *, bool, bool);
	static Texture2D_ApplyImpl_m2371374512_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Texture2D_ApplyImpl_m2371374512_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Texture2D::ApplyImpl(System.Boolean,System.Boolean)");
	_il2cpp_icall_func(__this, ___updateMipmaps0, ___makeNoLongerReadable1);
}
// System.Void UnityEngine.Texture2D::SetPixelImpl(System.Int32,System.Int32,System.Int32,UnityEngine.Color)
extern "C" IL2CPP_METHOD_ATTR void Texture2D_SetPixelImpl_m3515369686 (Texture2D_t3840446185 * __this, int32_t ___image0, int32_t ___x1, int32_t ___y2, Color_t2555686324  ___color3, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___image0;
		int32_t L_1 = ___x1;
		int32_t L_2 = ___y2;
		Texture2D_SetPixelImpl_Injected_m3338020812(__this, L_0, L_1, L_2, (Color_t2555686324 *)(&___color3), /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Color UnityEngine.Texture2D::GetPixelBilinearImpl(System.Int32,System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR Color_t2555686324  Texture2D_GetPixelBilinearImpl_m3066735611 (Texture2D_t3840446185 * __this, int32_t ___image0, float ___x1, float ___y2, const RuntimeMethod* method)
{
	Color_t2555686324  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		int32_t L_0 = ___image0;
		float L_1 = ___x1;
		float L_2 = ___y2;
		Texture2D_GetPixelBilinearImpl_Injected_m511713733(__this, L_0, L_1, L_2, (Color_t2555686324 *)(&V_0), /*hidden argument*/NULL);
		Color_t2555686324  L_3 = V_0;
		return L_3;
	}
}
// System.Boolean UnityEngine.Texture2D::ResizeWithFormatImpl(System.Int32,System.Int32,UnityEngine.TextureFormat,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR bool Texture2D_ResizeWithFormatImpl_m3601868344 (Texture2D_t3840446185 * __this, int32_t ___width0, int32_t ___height1, int32_t ___format2, bool ___hasMipMap3, const RuntimeMethod* method)
{
	typedef bool (*Texture2D_ResizeWithFormatImpl_m3601868344_ftn) (Texture2D_t3840446185 *, int32_t, int32_t, int32_t, bool);
	static Texture2D_ResizeWithFormatImpl_m3601868344_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Texture2D_ResizeWithFormatImpl_m3601868344_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Texture2D::ResizeWithFormatImpl(System.Int32,System.Int32,UnityEngine.TextureFormat,System.Boolean)");
	bool retVal = _il2cpp_icall_func(__this, ___width0, ___height1, ___format2, ___hasMipMap3);
	return retVal;
}
// System.Void UnityEngine.Texture2D::ReadPixelsImpl(UnityEngine.Rect,System.Int32,System.Int32,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void Texture2D_ReadPixelsImpl_m1282786589 (Texture2D_t3840446185 * __this, Rect_t2360479859  ___source0, int32_t ___destX1, int32_t ___destY2, bool ___recalculateMipMaps3, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___destX1;
		int32_t L_1 = ___destY2;
		bool L_2 = ___recalculateMipMaps3;
		Texture2D_ReadPixelsImpl_Injected_m2454631042(__this, (Rect_t2360479859 *)(&___source0), L_0, L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Texture2D::SetPixelsImpl(System.Int32,System.Int32,System.Int32,System.Int32,UnityEngine.Color[],System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void Texture2D_SetPixelsImpl_m1199623022 (Texture2D_t3840446185 * __this, int32_t ___x0, int32_t ___y1, int32_t ___w2, int32_t ___h3, ColorU5BU5D_t941916413* ___pixel4, int32_t ___miplevel5, int32_t ___frame6, const RuntimeMethod* method)
{
	typedef void (*Texture2D_SetPixelsImpl_m1199623022_ftn) (Texture2D_t3840446185 *, int32_t, int32_t, int32_t, int32_t, ColorU5BU5D_t941916413*, int32_t, int32_t);
	static Texture2D_SetPixelsImpl_m1199623022_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Texture2D_SetPixelsImpl_m1199623022_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Texture2D::SetPixelsImpl(System.Int32,System.Int32,System.Int32,System.Int32,UnityEngine.Color[],System.Int32,System.Int32)");
	_il2cpp_icall_func(__this, ___x0, ___y1, ___w2, ___h3, ___pixel4, ___miplevel5, ___frame6);
}
// System.Boolean UnityEngine.Texture2D::LoadRawTextureDataImplArray(System.Byte[])
extern "C" IL2CPP_METHOD_ATTR bool Texture2D_LoadRawTextureDataImplArray_m2906611301 (Texture2D_t3840446185 * __this, ByteU5BU5D_t4116647657* ___data0, const RuntimeMethod* method)
{
	typedef bool (*Texture2D_LoadRawTextureDataImplArray_m2906611301_ftn) (Texture2D_t3840446185 *, ByteU5BU5D_t4116647657*);
	static Texture2D_LoadRawTextureDataImplArray_m2906611301_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Texture2D_LoadRawTextureDataImplArray_m2906611301_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Texture2D::LoadRawTextureDataImplArray(System.Byte[])");
	bool retVal = _il2cpp_icall_func(__this, ___data0);
	return retVal;
}
// UnityEngine.Texture2D UnityEngine.Texture2D::CreateExternalTexture(System.Int32,System.Int32,UnityEngine.TextureFormat,System.Boolean,System.Boolean,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR Texture2D_t3840446185 * Texture2D_CreateExternalTexture_m2529687473 (RuntimeObject * __this /* static, unused */, int32_t ___width0, int32_t ___height1, int32_t ___format2, bool ___mipChain3, bool ___linear4, intptr_t ___nativeTex5, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Texture2D_CreateExternalTexture_m2529687473_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Texture2D_t3840446185 * V_0 = NULL;
	{
		intptr_t L_0 = ___nativeTex5;
		bool L_1 = IntPtr_op_Equality_m408849716(NULL /*static, unused*/, (intptr_t)L_0, (intptr_t)(0), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		ArgumentException_t132251570 * L_2 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1312628991(L_2, _stringLiteral1749271569, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, NULL, Texture2D_CreateExternalTexture_m2529687473_RuntimeMethod_var);
	}

IL_001d:
	{
		int32_t L_3 = ___width0;
		int32_t L_4 = ___height1;
		int32_t L_5 = ___format2;
		bool L_6 = ___mipChain3;
		bool L_7 = ___linear4;
		intptr_t L_8 = ___nativeTex5;
		Texture2D_t3840446185 * L_9 = (Texture2D_t3840446185 *)il2cpp_codegen_object_new(Texture2D_t3840446185_il2cpp_TypeInfo_var);
		Texture2D__ctor_m3176621650(L_9, L_3, L_4, L_5, L_6, L_7, (intptr_t)L_8, /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0030;
	}

IL_0030:
	{
		Texture2D_t3840446185 * L_10 = V_0;
		return L_10;
	}
}
// System.Void UnityEngine.Texture2D::SetPixel(System.Int32,System.Int32,UnityEngine.Color)
extern "C" IL2CPP_METHOD_ATTR void Texture2D_SetPixel_m2984741184 (Texture2D_t3840446185 * __this, int32_t ___x0, int32_t ___y1, Color_t2555686324  ___color2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Texture2D_SetPixel_m2984741184_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = Texture2D_IsReadable_m47074913(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		UnityException_t3598173660 * L_1 = Texture_CreateNonReadableException_m1462630389(__this, __this, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, Texture2D_SetPixel_m2984741184_RuntimeMethod_var);
	}

IL_0014:
	{
		int32_t L_2 = ___x0;
		int32_t L_3 = ___y1;
		Color_t2555686324  L_4 = ___color2;
		Texture2D_SetPixelImpl_m3515369686(__this, 0, L_2, L_3, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Texture2D::SetPixels(System.Int32,System.Int32,System.Int32,System.Int32,UnityEngine.Color[],System.Int32)
extern "C" IL2CPP_METHOD_ATTR void Texture2D_SetPixels_m639021706 (Texture2D_t3840446185 * __this, int32_t ___x0, int32_t ___y1, int32_t ___blockWidth2, int32_t ___blockHeight3, ColorU5BU5D_t941916413* ___colors4, int32_t ___miplevel5, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Texture2D_SetPixels_m639021706_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = Texture2D_IsReadable_m47074913(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		UnityException_t3598173660 * L_1 = Texture_CreateNonReadableException_m1462630389(__this, __this, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, Texture2D_SetPixels_m639021706_RuntimeMethod_var);
	}

IL_0014:
	{
		int32_t L_2 = ___x0;
		int32_t L_3 = ___y1;
		int32_t L_4 = ___blockWidth2;
		int32_t L_5 = ___blockHeight3;
		ColorU5BU5D_t941916413* L_6 = ___colors4;
		int32_t L_7 = ___miplevel5;
		Texture2D_SetPixelsImpl_m1199623022(__this, L_2, L_3, L_4, L_5, L_6, L_7, 0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Texture2D::SetPixels(UnityEngine.Color[])
extern "C" IL2CPP_METHOD_ATTR void Texture2D_SetPixels_m3008871897 (Texture2D_t3840446185 * __this, ColorU5BU5D_t941916413* ___colors0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, __this);
		int32_t L_1 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, __this);
		ColorU5BU5D_t941916413* L_2 = ___colors0;
		Texture2D_SetPixels_m639021706(__this, 0, 0, L_0, L_1, L_2, 0, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Color UnityEngine.Texture2D::GetPixelBilinear(System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR Color_t2555686324  Texture2D_GetPixelBilinear_m1950540195 (Texture2D_t3840446185 * __this, float ___x0, float ___y1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Texture2D_GetPixelBilinear_m1950540195_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Color_t2555686324  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		bool L_0 = Texture2D_IsReadable_m47074913(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		UnityException_t3598173660 * L_1 = Texture_CreateNonReadableException_m1462630389(__this, __this, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, Texture2D_GetPixelBilinear_m1950540195_RuntimeMethod_var);
	}

IL_0014:
	{
		float L_2 = ___x0;
		float L_3 = ___y1;
		Color_t2555686324  L_4 = Texture2D_GetPixelBilinearImpl_m3066735611(__this, 0, L_2, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_0023;
	}

IL_0023:
	{
		Color_t2555686324  L_5 = V_0;
		return L_5;
	}
}
// System.Void UnityEngine.Texture2D::LoadRawTextureData(System.Byte[])
extern "C" IL2CPP_METHOD_ATTR void Texture2D_LoadRawTextureData_m1232009149 (Texture2D_t3840446185 * __this, ByteU5BU5D_t4116647657* ___data0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Texture2D_LoadRawTextureData_m1232009149_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = Texture2D_IsReadable_m47074913(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		UnityException_t3598173660 * L_1 = Texture_CreateNonReadableException_m1462630389(__this, __this, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, Texture2D_LoadRawTextureData_m1232009149_RuntimeMethod_var);
	}

IL_0014:
	{
		ByteU5BU5D_t4116647657* L_2 = ___data0;
		if (!L_2)
		{
			goto IL_0022;
		}
	}
	{
		ByteU5BU5D_t4116647657* L_3 = ___data0;
		NullCheck(L_3);
		if ((((int32_t)((int32_t)(((RuntimeArray *)L_3)->max_length)))))
		{
			goto IL_0033;
		}
	}

IL_0022:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_LogError_m1665621915(NULL /*static, unused*/, _stringLiteral521935984, __this, /*hidden argument*/NULL);
		goto IL_004a;
	}

IL_0033:
	{
		ByteU5BU5D_t4116647657* L_4 = ___data0;
		bool L_5 = Texture2D_LoadRawTextureDataImplArray_m2906611301(__this, L_4, /*hidden argument*/NULL);
		if (L_5)
		{
			goto IL_004a;
		}
	}
	{
		UnityException_t3598173660 * L_6 = (UnityException_t3598173660 *)il2cpp_codegen_object_new(UnityException_t3598173660_il2cpp_TypeInfo_var);
		UnityException__ctor_m872329880(L_6, _stringLiteral2164275215, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, NULL, Texture2D_LoadRawTextureData_m1232009149_RuntimeMethod_var);
	}

IL_004a:
	{
		return;
	}
}
// System.Void UnityEngine.Texture2D::Apply(System.Boolean,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void Texture2D_Apply_m2470606565 (Texture2D_t3840446185 * __this, bool ___updateMipmaps0, bool ___makeNoLongerReadable1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Texture2D_Apply_m2470606565_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = Texture2D_IsReadable_m47074913(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		UnityException_t3598173660 * L_1 = Texture_CreateNonReadableException_m1462630389(__this, __this, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, Texture2D_Apply_m2470606565_RuntimeMethod_var);
	}

IL_0014:
	{
		bool L_2 = ___updateMipmaps0;
		bool L_3 = ___makeNoLongerReadable1;
		Texture2D_ApplyImpl_m2371374512(__this, L_2, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Texture2D::Apply()
extern "C" IL2CPP_METHOD_ATTR void Texture2D_Apply_m2271746283 (Texture2D_t3840446185 * __this, const RuntimeMethod* method)
{
	{
		Texture2D_Apply_m2470606565(__this, (bool)1, (bool)0, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean UnityEngine.Texture2D::Resize(System.Int32,System.Int32,UnityEngine.TextureFormat,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR bool Texture2D_Resize_m2702227255 (Texture2D_t3840446185 * __this, int32_t ___width0, int32_t ___height1, int32_t ___format2, bool ___hasMipMap3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Texture2D_Resize_m2702227255_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		bool L_0 = Texture2D_IsReadable_m47074913(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		UnityException_t3598173660 * L_1 = Texture_CreateNonReadableException_m1462630389(__this, __this, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, Texture2D_Resize_m2702227255_RuntimeMethod_var);
	}

IL_0014:
	{
		int32_t L_2 = ___width0;
		int32_t L_3 = ___height1;
		int32_t L_4 = ___format2;
		bool L_5 = ___hasMipMap3;
		bool L_6 = Texture2D_ResizeWithFormatImpl_m3601868344(__this, L_2, L_3, L_4, L_5, /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_0025;
	}

IL_0025:
	{
		bool L_7 = V_0;
		return L_7;
	}
}
// System.Void UnityEngine.Texture2D::ReadPixels(UnityEngine.Rect,System.Int32,System.Int32,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void Texture2D_ReadPixels_m1510783487 (Texture2D_t3840446185 * __this, Rect_t2360479859  ___source0, int32_t ___destX1, int32_t ___destY2, bool ___recalculateMipMaps3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Texture2D_ReadPixels_m1510783487_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = Texture2D_IsReadable_m47074913(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		UnityException_t3598173660 * L_1 = Texture_CreateNonReadableException_m1462630389(__this, __this, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, Texture2D_ReadPixels_m1510783487_RuntimeMethod_var);
	}

IL_0014:
	{
		Rect_t2360479859  L_2 = ___source0;
		int32_t L_3 = ___destX1;
		int32_t L_4 = ___destY2;
		bool L_5 = ___recalculateMipMaps3;
		Texture2D_ReadPixelsImpl_m1282786589(__this, L_2, L_3, L_4, L_5, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Texture2D::SetPixelImpl_Injected(System.Int32,System.Int32,System.Int32,UnityEngine.Color&)
extern "C" IL2CPP_METHOD_ATTR void Texture2D_SetPixelImpl_Injected_m3338020812 (Texture2D_t3840446185 * __this, int32_t ___image0, int32_t ___x1, int32_t ___y2, Color_t2555686324 * ___color3, const RuntimeMethod* method)
{
	typedef void (*Texture2D_SetPixelImpl_Injected_m3338020812_ftn) (Texture2D_t3840446185 *, int32_t, int32_t, int32_t, Color_t2555686324 *);
	static Texture2D_SetPixelImpl_Injected_m3338020812_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Texture2D_SetPixelImpl_Injected_m3338020812_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Texture2D::SetPixelImpl_Injected(System.Int32,System.Int32,System.Int32,UnityEngine.Color&)");
	_il2cpp_icall_func(__this, ___image0, ___x1, ___y2, ___color3);
}
// System.Void UnityEngine.Texture2D::GetPixelBilinearImpl_Injected(System.Int32,System.Single,System.Single,UnityEngine.Color&)
extern "C" IL2CPP_METHOD_ATTR void Texture2D_GetPixelBilinearImpl_Injected_m511713733 (Texture2D_t3840446185 * __this, int32_t ___image0, float ___x1, float ___y2, Color_t2555686324 * ___ret3, const RuntimeMethod* method)
{
	typedef void (*Texture2D_GetPixelBilinearImpl_Injected_m511713733_ftn) (Texture2D_t3840446185 *, int32_t, float, float, Color_t2555686324 *);
	static Texture2D_GetPixelBilinearImpl_Injected_m511713733_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Texture2D_GetPixelBilinearImpl_Injected_m511713733_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Texture2D::GetPixelBilinearImpl_Injected(System.Int32,System.Single,System.Single,UnityEngine.Color&)");
	_il2cpp_icall_func(__this, ___image0, ___x1, ___y2, ___ret3);
}
// System.Void UnityEngine.Texture2D::ReadPixelsImpl_Injected(UnityEngine.Rect&,System.Int32,System.Int32,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void Texture2D_ReadPixelsImpl_Injected_m2454631042 (Texture2D_t3840446185 * __this, Rect_t2360479859 * ___source0, int32_t ___destX1, int32_t ___destY2, bool ___recalculateMipMaps3, const RuntimeMethod* method)
{
	typedef void (*Texture2D_ReadPixelsImpl_Injected_m2454631042_ftn) (Texture2D_t3840446185 *, Rect_t2360479859 *, int32_t, int32_t, bool);
	static Texture2D_ReadPixelsImpl_Injected_m2454631042_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Texture2D_ReadPixelsImpl_Injected_m2454631042_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Texture2D::ReadPixelsImpl_Injected(UnityEngine.Rect&,System.Int32,System.Int32,System.Boolean)");
	_il2cpp_icall_func(__this, ___source0, ___destX1, ___destY2, ___recalculateMipMaps3);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Texture2DArray::.ctor(System.Int32,System.Int32,System.Int32,UnityEngine.Experimental.Rendering.GraphicsFormat,UnityEngine.Experimental.Rendering.TextureCreationFlags)
extern "C" IL2CPP_METHOD_ATTR void Texture2DArray__ctor_m1759046501 (Texture2DArray_t4044506685 * __this, int32_t ___width0, int32_t ___height1, int32_t ___depth2, int32_t ___format3, int32_t ___flags4, const RuntimeMethod* method)
{
	{
		Texture__ctor_m3554519797(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___format3;
		bool L_1 = Texture_ValidateFormat_m3925257631(__this, L_0, 0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0022;
		}
	}
	{
		int32_t L_2 = ___width0;
		int32_t L_3 = ___height1;
		int32_t L_4 = ___depth2;
		int32_t L_5 = ___format3;
		int32_t L_6 = ___flags4;
		Texture2DArray_Internal_Create_m2217927355(NULL /*static, unused*/, __this, L_2, L_3, L_4, L_5, L_6, /*hidden argument*/NULL);
	}

IL_0022:
	{
		return;
	}
}
// System.Void UnityEngine.Texture2DArray::.ctor(System.Int32,System.Int32,System.Int32,UnityEngine.TextureFormat,System.Boolean,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void Texture2DArray__ctor_m2627654179 (Texture2DArray_t4044506685 * __this, int32_t ___width0, int32_t ___height1, int32_t ___depth2, int32_t ___textureFormat3, bool ___mipChain4, bool ___linear5, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		Texture__ctor_m3554519797(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___textureFormat3;
		bool L_1 = ___linear5;
		int32_t L_2 = GraphicsFormatUtility_GetGraphicsFormat_m3445248969(NULL /*static, unused*/, L_0, (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0), /*hidden argument*/NULL);
		V_0 = L_2;
		V_1 = 0;
		bool L_3 = ___mipChain4;
		if (!L_3)
		{
			goto IL_0021;
		}
	}
	{
		int32_t L_4 = V_1;
		V_1 = ((int32_t)((int32_t)L_4|(int32_t)1));
	}

IL_0021:
	{
		int32_t L_5 = ___textureFormat3;
		bool L_6 = GraphicsFormatUtility_IsCrunchFormat_m1697721778(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0032;
		}
	}
	{
		int32_t L_7 = V_1;
		V_1 = ((int32_t)((int32_t)L_7|(int32_t)((int32_t)64)));
	}

IL_0032:
	{
		int32_t L_8 = ___width0;
		int32_t L_9 = ___height1;
		int32_t L_10 = ___depth2;
		int32_t L_11 = V_0;
		int32_t L_12 = V_1;
		Texture2DArray_Internal_Create_m2217927355(NULL /*static, unused*/, __this, L_8, L_9, L_10, L_11, L_12, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Texture2DArray::.ctor(System.Int32,System.Int32,System.Int32,UnityEngine.TextureFormat,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void Texture2DArray__ctor_m4056612996 (Texture2DArray_t4044506685 * __this, int32_t ___width0, int32_t ___height1, int32_t ___depth2, int32_t ___textureFormat3, bool ___mipChain4, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___width0;
		int32_t L_1 = ___height1;
		int32_t L_2 = ___depth2;
		int32_t L_3 = ___textureFormat3;
		bool L_4 = ___mipChain4;
		Texture2DArray__ctor_m2627654179(__this, L_0, L_1, L_2, L_3, L_4, (bool)0, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean UnityEngine.Texture2DArray::Internal_CreateImpl(UnityEngine.Texture2DArray,System.Int32,System.Int32,System.Int32,UnityEngine.Experimental.Rendering.GraphicsFormat,UnityEngine.Experimental.Rendering.TextureCreationFlags)
extern "C" IL2CPP_METHOD_ATTR bool Texture2DArray_Internal_CreateImpl_m1122945648 (RuntimeObject * __this /* static, unused */, Texture2DArray_t4044506685 * ___mono0, int32_t ___w1, int32_t ___h2, int32_t ___d3, int32_t ___format4, int32_t ___flags5, const RuntimeMethod* method)
{
	typedef bool (*Texture2DArray_Internal_CreateImpl_m1122945648_ftn) (Texture2DArray_t4044506685 *, int32_t, int32_t, int32_t, int32_t, int32_t);
	static Texture2DArray_Internal_CreateImpl_m1122945648_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Texture2DArray_Internal_CreateImpl_m1122945648_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Texture2DArray::Internal_CreateImpl(UnityEngine.Texture2DArray,System.Int32,System.Int32,System.Int32,UnityEngine.Experimental.Rendering.GraphicsFormat,UnityEngine.Experimental.Rendering.TextureCreationFlags)");
	bool retVal = _il2cpp_icall_func(___mono0, ___w1, ___h2, ___d3, ___format4, ___flags5);
	return retVal;
}
// System.Void UnityEngine.Texture2DArray::Internal_Create(UnityEngine.Texture2DArray,System.Int32,System.Int32,System.Int32,UnityEngine.Experimental.Rendering.GraphicsFormat,UnityEngine.Experimental.Rendering.TextureCreationFlags)
extern "C" IL2CPP_METHOD_ATTR void Texture2DArray_Internal_Create_m2217927355 (RuntimeObject * __this /* static, unused */, Texture2DArray_t4044506685 * ___mono0, int32_t ___w1, int32_t ___h2, int32_t ___d3, int32_t ___format4, int32_t ___flags5, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Texture2DArray_Internal_Create_m2217927355_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Texture2DArray_t4044506685 * L_0 = ___mono0;
		int32_t L_1 = ___w1;
		int32_t L_2 = ___h2;
		int32_t L_3 = ___d3;
		int32_t L_4 = ___format4;
		int32_t L_5 = ___flags5;
		bool L_6 = Texture2DArray_Internal_CreateImpl_m1122945648(NULL /*static, unused*/, L_0, L_1, L_2, L_3, L_4, L_5, /*hidden argument*/NULL);
		if (L_6)
		{
			goto IL_001e;
		}
	}
	{
		UnityException_t3598173660 * L_7 = (UnityException_t3598173660 *)il2cpp_codegen_object_new(UnityException_t3598173660_il2cpp_TypeInfo_var);
		UnityException__ctor_m872329880(L_7, _stringLiteral3269353644, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, NULL, Texture2DArray_Internal_Create_m2217927355_RuntimeMethod_var);
	}

IL_001e:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Texture3D::.ctor(System.Int32,System.Int32,System.Int32,UnityEngine.Experimental.Rendering.GraphicsFormat,UnityEngine.Experimental.Rendering.TextureCreationFlags)
extern "C" IL2CPP_METHOD_ATTR void Texture3D__ctor_m1599887784 (Texture3D_t1884131049 * __this, int32_t ___width0, int32_t ___height1, int32_t ___depth2, int32_t ___format3, int32_t ___flags4, const RuntimeMethod* method)
{
	{
		Texture__ctor_m3554519797(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___format3;
		bool L_1 = Texture_ValidateFormat_m3925257631(__this, L_0, 0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0022;
		}
	}
	{
		int32_t L_2 = ___width0;
		int32_t L_3 = ___height1;
		int32_t L_4 = ___depth2;
		int32_t L_5 = ___format3;
		int32_t L_6 = ___flags4;
		Texture3D_Internal_Create_m4250388922(NULL /*static, unused*/, __this, L_2, L_3, L_4, L_5, L_6, /*hidden argument*/NULL);
	}

IL_0022:
	{
		return;
	}
}
// System.Void UnityEngine.Texture3D::.ctor(System.Int32,System.Int32,System.Int32,UnityEngine.TextureFormat,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void Texture3D__ctor_m448815750 (Texture3D_t1884131049 * __this, int32_t ___width0, int32_t ___height1, int32_t ___depth2, int32_t ___textureFormat3, bool ___mipChain4, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		Texture__ctor_m3554519797(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___textureFormat3;
		int32_t L_1 = GraphicsFormatUtility_GetGraphicsFormat_m3445248969(NULL /*static, unused*/, L_0, (bool)0, /*hidden argument*/NULL);
		V_0 = L_1;
		V_1 = 0;
		bool L_2 = ___mipChain4;
		if (!L_2)
		{
			goto IL_001d;
		}
	}
	{
		int32_t L_3 = V_1;
		V_1 = ((int32_t)((int32_t)L_3|(int32_t)1));
	}

IL_001d:
	{
		int32_t L_4 = ___textureFormat3;
		bool L_5 = GraphicsFormatUtility_IsCrunchFormat_m1697721778(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_002e;
		}
	}
	{
		int32_t L_6 = V_1;
		V_1 = ((int32_t)((int32_t)L_6|(int32_t)((int32_t)64)));
	}

IL_002e:
	{
		int32_t L_7 = ___width0;
		int32_t L_8 = ___height1;
		int32_t L_9 = ___depth2;
		int32_t L_10 = V_0;
		int32_t L_11 = V_1;
		Texture3D_Internal_Create_m4250388922(NULL /*static, unused*/, __this, L_7, L_8, L_9, L_10, L_11, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean UnityEngine.Texture3D::Internal_CreateImpl(UnityEngine.Texture3D,System.Int32,System.Int32,System.Int32,UnityEngine.Experimental.Rendering.GraphicsFormat,UnityEngine.Experimental.Rendering.TextureCreationFlags)
extern "C" IL2CPP_METHOD_ATTR bool Texture3D_Internal_CreateImpl_m1882516456 (RuntimeObject * __this /* static, unused */, Texture3D_t1884131049 * ___mono0, int32_t ___w1, int32_t ___h2, int32_t ___d3, int32_t ___format4, int32_t ___flags5, const RuntimeMethod* method)
{
	typedef bool (*Texture3D_Internal_CreateImpl_m1882516456_ftn) (Texture3D_t1884131049 *, int32_t, int32_t, int32_t, int32_t, int32_t);
	static Texture3D_Internal_CreateImpl_m1882516456_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Texture3D_Internal_CreateImpl_m1882516456_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Texture3D::Internal_CreateImpl(UnityEngine.Texture3D,System.Int32,System.Int32,System.Int32,UnityEngine.Experimental.Rendering.GraphicsFormat,UnityEngine.Experimental.Rendering.TextureCreationFlags)");
	bool retVal = _il2cpp_icall_func(___mono0, ___w1, ___h2, ___d3, ___format4, ___flags5);
	return retVal;
}
// System.Void UnityEngine.Texture3D::Internal_Create(UnityEngine.Texture3D,System.Int32,System.Int32,System.Int32,UnityEngine.Experimental.Rendering.GraphicsFormat,UnityEngine.Experimental.Rendering.TextureCreationFlags)
extern "C" IL2CPP_METHOD_ATTR void Texture3D_Internal_Create_m4250388922 (RuntimeObject * __this /* static, unused */, Texture3D_t1884131049 * ___mono0, int32_t ___w1, int32_t ___h2, int32_t ___d3, int32_t ___format4, int32_t ___flags5, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Texture3D_Internal_Create_m4250388922_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Texture3D_t1884131049 * L_0 = ___mono0;
		int32_t L_1 = ___w1;
		int32_t L_2 = ___h2;
		int32_t L_3 = ___d3;
		int32_t L_4 = ___format4;
		int32_t L_5 = ___flags5;
		bool L_6 = Texture3D_Internal_CreateImpl_m1882516456(NULL /*static, unused*/, L_0, L_1, L_2, L_3, L_4, L_5, /*hidden argument*/NULL);
		if (L_6)
		{
			goto IL_001e;
		}
	}
	{
		UnityException_t3598173660 * L_7 = (UnityException_t3598173660 *)il2cpp_codegen_object_new(UnityException_t3598173660_il2cpp_TypeInfo_var);
		UnityException__ctor_m872329880(L_7, _stringLiteral3481154761, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, NULL, Texture3D_Internal_Create_m4250388922_RuntimeMethod_var);
	}

IL_001e:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Single UnityEngine.Time::get_deltaTime()
extern "C" IL2CPP_METHOD_ATTR float Time_get_deltaTime_m372706562 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	typedef float (*Time_get_deltaTime_m372706562_ftn) ();
	static Time_get_deltaTime_m372706562_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Time_get_deltaTime_m372706562_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Time::get_deltaTime()");
	float retVal = _il2cpp_icall_func();
	return retVal;
}
// System.Single UnityEngine.Time::get_unscaledTime()
extern "C" IL2CPP_METHOD_ATTR float Time_get_unscaledTime_m3457564332 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	typedef float (*Time_get_unscaledTime_m3457564332_ftn) ();
	static Time_get_unscaledTime_m3457564332_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Time_get_unscaledTime_m3457564332_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Time::get_unscaledTime()");
	float retVal = _il2cpp_icall_func();
	return retVal;
}
// System.Single UnityEngine.Time::get_unscaledDeltaTime()
extern "C" IL2CPP_METHOD_ATTR float Time_get_unscaledDeltaTime_m4270080131 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	typedef float (*Time_get_unscaledDeltaTime_m4270080131_ftn) ();
	static Time_get_unscaledDeltaTime_m4270080131_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Time_get_unscaledDeltaTime_m4270080131_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Time::get_unscaledDeltaTime()");
	float retVal = _il2cpp_icall_func();
	return retVal;
}
// System.Int32 UnityEngine.Time::get_frameCount()
extern "C" IL2CPP_METHOD_ATTR int32_t Time_get_frameCount_m1220035214 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	typedef int32_t (*Time_get_frameCount_m1220035214_ftn) ();
	static Time_get_frameCount_m1220035214_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Time_get_frameCount_m1220035214_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Time::get_frameCount()");
	int32_t retVal = _il2cpp_icall_func();
	return retVal;
}
// System.Single UnityEngine.Time::get_realtimeSinceStartup()
extern "C" IL2CPP_METHOD_ATTR float Time_get_realtimeSinceStartup_m3141794964 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	typedef float (*Time_get_realtimeSinceStartup_m3141794964_ftn) ();
	static Time_get_realtimeSinceStartup_m3141794964_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Time_get_realtimeSinceStartup_m3141794964_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Time::get_realtimeSinceStartup()");
	float retVal = _il2cpp_icall_func();
	return retVal;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.TooltipAttribute::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void TooltipAttribute__ctor_m534364555 (TooltipAttribute_t3957072629 * __this, String_t* ___tooltip0, const RuntimeMethod* method)
{
	{
		PropertyAttribute__ctor_m1017741868(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___tooltip0;
		__this->set_tooltip_0(L_0);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Int32 UnityEngine.Touch::get_fingerId()
extern "C" IL2CPP_METHOD_ATTR int32_t Touch_get_fingerId_m859576425 (Touch_t1921856868 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_m_FingerId_0();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
extern "C"  int32_t Touch_get_fingerId_m859576425_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	Touch_t1921856868 * _thisAdjusted = reinterpret_cast<Touch_t1921856868 *>(__this + 1);
	return Touch_get_fingerId_m859576425(_thisAdjusted, method);
}
// UnityEngine.Vector2 UnityEngine.Touch::get_position()
extern "C" IL2CPP_METHOD_ATTR Vector2_t2156229523  Touch_get_position_m3109777936 (Touch_t1921856868 * __this, const RuntimeMethod* method)
{
	Vector2_t2156229523  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		Vector2_t2156229523  L_0 = __this->get_m_Position_1();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		Vector2_t2156229523  L_1 = V_0;
		return L_1;
	}
}
extern "C"  Vector2_t2156229523  Touch_get_position_m3109777936_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	Touch_t1921856868 * _thisAdjusted = reinterpret_cast<Touch_t1921856868 *>(__this + 1);
	return Touch_get_position_m3109777936(_thisAdjusted, method);
}
// UnityEngine.TouchPhase UnityEngine.Touch::get_phase()
extern "C" IL2CPP_METHOD_ATTR int32_t Touch_get_phase_m214549210 (Touch_t1921856868 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_m_Phase_6();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
extern "C"  int32_t Touch_get_phase_m214549210_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	Touch_t1921856868 * _thisAdjusted = reinterpret_cast<Touch_t1921856868 *>(__this + 1);
	return Touch_get_phase_m214549210(_thisAdjusted, method);
}
// UnityEngine.TouchType UnityEngine.Touch::get_type()
extern "C" IL2CPP_METHOD_ATTR int32_t Touch_get_type_m960232264 (Touch_t1921856868 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_m_Type_7();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
extern "C"  int32_t Touch_get_type_m960232264_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	Touch_t1921856868 * _thisAdjusted = reinterpret_cast<Touch_t1921856868 *>(__this + 1);
	return Touch_get_type_m960232264(_thisAdjusted, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
// System.Void UnityEngine.TouchScreenKeyboard::.ctor(System.String,UnityEngine.TouchScreenKeyboardType,System.Boolean,System.Boolean,System.Boolean,System.Boolean,System.String,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void TouchScreenKeyboard__ctor_m2995022054 (TouchScreenKeyboard_t731888065 * __this, String_t* ___text0, int32_t ___keyboardType1, bool ___autocorrection2, bool ___multiline3, bool ___secure4, bool ___alert5, String_t* ___textPlaceholder6, int32_t ___characterLimit7, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TouchScreenKeyboard__ctor_m2995022054_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	TouchScreenKeyboard_InternalConstructorHelperArguments_t1462448236  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		il2cpp_codegen_initobj((&V_0), sizeof(TouchScreenKeyboard_InternalConstructorHelperArguments_t1462448236 ));
		int32_t L_0 = ___keyboardType1;
		int32_t L_1 = L_0;
		RuntimeObject * L_2 = Box(TouchScreenKeyboardType_t1530597702_il2cpp_TypeInfo_var, &L_1);
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t2465617642_il2cpp_TypeInfo_var);
		uint32_t L_3 = Convert_ToUInt32_m668801151(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		(&V_0)->set_keyboardType_0(L_3);
		bool L_4 = ___autocorrection2;
		uint32_t L_5 = Convert_ToUInt32_m835119716(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		(&V_0)->set_autocorrection_1(L_5);
		bool L_6 = ___multiline3;
		uint32_t L_7 = Convert_ToUInt32_m835119716(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
		(&V_0)->set_multiline_2(L_7);
		bool L_8 = ___secure4;
		uint32_t L_9 = Convert_ToUInt32_m835119716(NULL /*static, unused*/, L_8, /*hidden argument*/NULL);
		(&V_0)->set_secure_3(L_9);
		bool L_10 = ___alert5;
		uint32_t L_11 = Convert_ToUInt32_m835119716(NULL /*static, unused*/, L_10, /*hidden argument*/NULL);
		(&V_0)->set_alert_4(L_11);
		int32_t L_12 = ___characterLimit7;
		(&V_0)->set_characterLimit_5(L_12);
		String_t* L_13 = ___text0;
		String_t* L_14 = ___textPlaceholder6;
		intptr_t L_15 = TouchScreenKeyboard_TouchScreenKeyboard_InternalConstructorHelper_m3610109468(NULL /*static, unused*/, (TouchScreenKeyboard_InternalConstructorHelperArguments_t1462448236 *)(&V_0), L_13, L_14, /*hidden argument*/NULL);
		__this->set_m_Ptr_0((intptr_t)L_15);
		return;
	}
}
// System.Void UnityEngine.TouchScreenKeyboard::Internal_Destroy(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void TouchScreenKeyboard_Internal_Destroy_m2069062265 (RuntimeObject * __this /* static, unused */, intptr_t ___ptr0, const RuntimeMethod* method)
{
	typedef void (*TouchScreenKeyboard_Internal_Destroy_m2069062265_ftn) (intptr_t);
	static TouchScreenKeyboard_Internal_Destroy_m2069062265_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TouchScreenKeyboard_Internal_Destroy_m2069062265_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TouchScreenKeyboard::Internal_Destroy(System.IntPtr)");
	_il2cpp_icall_func(___ptr0);
}
// System.Void UnityEngine.TouchScreenKeyboard::Destroy()
extern "C" IL2CPP_METHOD_ATTR void TouchScreenKeyboard_Destroy_m267768093 (TouchScreenKeyboard_t731888065 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TouchScreenKeyboard_Destroy_m267768093_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		intptr_t L_0 = __this->get_m_Ptr_0();
		bool L_1 = IntPtr_op_Inequality_m3063970704(NULL /*static, unused*/, (intptr_t)L_0, (intptr_t)(0), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_002e;
		}
	}
	{
		intptr_t L_2 = __this->get_m_Ptr_0();
		TouchScreenKeyboard_Internal_Destroy_m2069062265(NULL /*static, unused*/, (intptr_t)L_2, /*hidden argument*/NULL);
		__this->set_m_Ptr_0((intptr_t)(0));
	}

IL_002e:
	{
		IL2CPP_RUNTIME_CLASS_INIT(GC_t959872083_il2cpp_TypeInfo_var);
		GC_SuppressFinalize_m1177400158(NULL /*static, unused*/, __this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.TouchScreenKeyboard::Finalize()
extern "C" IL2CPP_METHOD_ATTR void TouchScreenKeyboard_Finalize_m3415749170 (TouchScreenKeyboard_t731888065 * __this, const RuntimeMethod* method)
{
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
	}

IL_0001:
	try
	{ // begin try (depth: 1)
		TouchScreenKeyboard_Destroy_m267768093(__this, /*hidden argument*/NULL);
		IL2CPP_LEAVE(0x13, FINALLY_000c);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_000c;
	}

FINALLY_000c:
	{ // begin finally (depth: 1)
		Object_Finalize_m3076187857(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(12)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(12)
	{
		IL2CPP_JUMP_TBL(0x13, IL_0013)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0013:
	{
		return;
	}
}
// System.IntPtr UnityEngine.TouchScreenKeyboard::TouchScreenKeyboard_InternalConstructorHelper(UnityEngine.TouchScreenKeyboard_InternalConstructorHelperArguments&,System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR intptr_t TouchScreenKeyboard_TouchScreenKeyboard_InternalConstructorHelper_m3610109468 (RuntimeObject * __this /* static, unused */, TouchScreenKeyboard_InternalConstructorHelperArguments_t1462448236 * ___arguments0, String_t* ___text1, String_t* ___textPlaceholder2, const RuntimeMethod* method)
{
	typedef intptr_t (*TouchScreenKeyboard_TouchScreenKeyboard_InternalConstructorHelper_m3610109468_ftn) (TouchScreenKeyboard_InternalConstructorHelperArguments_t1462448236 *, String_t*, String_t*);
	static TouchScreenKeyboard_TouchScreenKeyboard_InternalConstructorHelper_m3610109468_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TouchScreenKeyboard_TouchScreenKeyboard_InternalConstructorHelper_m3610109468_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TouchScreenKeyboard::TouchScreenKeyboard_InternalConstructorHelper(UnityEngine.TouchScreenKeyboard_InternalConstructorHelperArguments&,System.String,System.String)");
	intptr_t retVal = _il2cpp_icall_func(___arguments0, ___text1, ___textPlaceholder2);
	return retVal;
}
// System.Boolean UnityEngine.TouchScreenKeyboard::get_isSupported()
extern "C" IL2CPP_METHOD_ATTR bool TouchScreenKeyboard_get_isSupported_m1062200762 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	bool V_1 = false;
	{
		int32_t L_0 = Application_get_platform_m2150679437(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_0;
		int32_t L_1 = V_0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_1, (int32_t)((int32_t)18))))
		{
			case 0:
			{
				goto IL_0050;
			}
			case 1:
			{
				goto IL_0050;
			}
			case 2:
			{
				goto IL_0050;
			}
		}
	}
	{
		int32_t L_2 = V_0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_2, (int32_t)8)))
		{
			case 0:
			{
				goto IL_0049;
			}
			case 1:
			{
				goto IL_0034;
			}
			case 2:
			{
				goto IL_0034;
			}
			case 3:
			{
				goto IL_0049;
			}
		}
	}

IL_0034:
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)((int32_t)31))))
		{
			goto IL_0049;
		}
	}
	{
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) == ((int32_t)((int32_t)32))))
		{
			goto IL_0049;
		}
	}
	{
		goto IL_0057;
	}

IL_0049:
	{
		V_1 = (bool)1;
		goto IL_005e;
	}

IL_0050:
	{
		V_1 = (bool)0;
		goto IL_005e;
	}

IL_0057:
	{
		V_1 = (bool)0;
		goto IL_005e;
	}

IL_005e:
	{
		bool L_5 = V_1;
		return L_5;
	}
}
// UnityEngine.TouchScreenKeyboard UnityEngine.TouchScreenKeyboard::Open(System.String,UnityEngine.TouchScreenKeyboardType,System.Boolean,System.Boolean,System.Boolean,System.Boolean,System.String,System.Int32)
extern "C" IL2CPP_METHOD_ATTR TouchScreenKeyboard_t731888065 * TouchScreenKeyboard_Open_m3609399077 (RuntimeObject * __this /* static, unused */, String_t* ___text0, int32_t ___keyboardType1, bool ___autocorrection2, bool ___multiline3, bool ___secure4, bool ___alert5, String_t* ___textPlaceholder6, int32_t ___characterLimit7, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TouchScreenKeyboard_Open_m3609399077_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	TouchScreenKeyboard_t731888065 * V_0 = NULL;
	{
		String_t* L_0 = ___text0;
		int32_t L_1 = ___keyboardType1;
		bool L_2 = ___autocorrection2;
		bool L_3 = ___multiline3;
		bool L_4 = ___secure4;
		bool L_5 = ___alert5;
		String_t* L_6 = ___textPlaceholder6;
		int32_t L_7 = ___characterLimit7;
		TouchScreenKeyboard_t731888065 * L_8 = (TouchScreenKeyboard_t731888065 *)il2cpp_codegen_object_new(TouchScreenKeyboard_t731888065_il2cpp_TypeInfo_var);
		TouchScreenKeyboard__ctor_m2995022054(L_8, L_0, L_1, L_2, L_3, L_4, L_5, L_6, L_7, /*hidden argument*/NULL);
		V_0 = L_8;
		goto IL_0018;
	}

IL_0018:
	{
		TouchScreenKeyboard_t731888065 * L_9 = V_0;
		return L_9;
	}
}
// System.String UnityEngine.TouchScreenKeyboard::get_text()
extern "C" IL2CPP_METHOD_ATTR String_t* TouchScreenKeyboard_get_text_m1797464608 (TouchScreenKeyboard_t731888065 * __this, const RuntimeMethod* method)
{
	typedef String_t* (*TouchScreenKeyboard_get_text_m1797464608_ftn) (TouchScreenKeyboard_t731888065 *);
	static TouchScreenKeyboard_get_text_m1797464608_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TouchScreenKeyboard_get_text_m1797464608_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TouchScreenKeyboard::get_text()");
	String_t* retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Void UnityEngine.TouchScreenKeyboard::set_text(System.String)
extern "C" IL2CPP_METHOD_ATTR void TouchScreenKeyboard_set_text_m107652927 (TouchScreenKeyboard_t731888065 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	typedef void (*TouchScreenKeyboard_set_text_m107652927_ftn) (TouchScreenKeyboard_t731888065 *, String_t*);
	static TouchScreenKeyboard_set_text_m107652927_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TouchScreenKeyboard_set_text_m107652927_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TouchScreenKeyboard::set_text(System.String)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Void UnityEngine.TouchScreenKeyboard::set_hideInput(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void TouchScreenKeyboard_set_hideInput_m1428661361 (RuntimeObject * __this /* static, unused */, bool ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TouchScreenKeyboard_set_hideInput_m1428661361_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = ___value0;
		((TouchScreenKeyboard_t731888065_StaticFields*)il2cpp_codegen_static_fields_for(TouchScreenKeyboard_t731888065_il2cpp_TypeInfo_var))->set_U3ChideInputU3Ek__BackingField_1(L_0);
		return;
	}
}
// System.Boolean UnityEngine.TouchScreenKeyboard::get_active()
extern "C" IL2CPP_METHOD_ATTR bool TouchScreenKeyboard_get_active_m4267591905 (TouchScreenKeyboard_t731888065 * __this, const RuntimeMethod* method)
{
	typedef bool (*TouchScreenKeyboard_get_active_m4267591905_ftn) (TouchScreenKeyboard_t731888065 *);
	static TouchScreenKeyboard_get_active_m4267591905_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TouchScreenKeyboard_get_active_m4267591905_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TouchScreenKeyboard::get_active()");
	bool retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Void UnityEngine.TouchScreenKeyboard::set_active(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void TouchScreenKeyboard_set_active_m1980731296 (TouchScreenKeyboard_t731888065 * __this, bool ___value0, const RuntimeMethod* method)
{
	typedef void (*TouchScreenKeyboard_set_active_m1980731296_ftn) (TouchScreenKeyboard_t731888065 *, bool);
	static TouchScreenKeyboard_set_active_m1980731296_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TouchScreenKeyboard_set_active_m1980731296_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TouchScreenKeyboard::set_active(System.Boolean)");
	_il2cpp_icall_func(__this, ___value0);
}
// UnityEngine.TouchScreenKeyboard/Status UnityEngine.TouchScreenKeyboard::get_status()
extern "C" IL2CPP_METHOD_ATTR int32_t TouchScreenKeyboard_get_status_m3936201565 (TouchScreenKeyboard_t731888065 * __this, const RuntimeMethod* method)
{
	typedef int32_t (*TouchScreenKeyboard_get_status_m3936201565_ftn) (TouchScreenKeyboard_t731888065 *);
	static TouchScreenKeyboard_get_status_m3936201565_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TouchScreenKeyboard_get_status_m3936201565_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TouchScreenKeyboard::get_status()");
	int32_t retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Void UnityEngine.TouchScreenKeyboard::set_characterLimit(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void TouchScreenKeyboard_set_characterLimit_m4210657862 (TouchScreenKeyboard_t731888065 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	typedef void (*TouchScreenKeyboard_set_characterLimit_m4210657862_ftn) (TouchScreenKeyboard_t731888065 *, int32_t);
	static TouchScreenKeyboard_set_characterLimit_m4210657862_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TouchScreenKeyboard_set_characterLimit_m4210657862_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TouchScreenKeyboard::set_characterLimit(System.Int32)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Boolean UnityEngine.TouchScreenKeyboard::get_canGetSelection()
extern "C" IL2CPP_METHOD_ATTR bool TouchScreenKeyboard_get_canGetSelection_m1476717240 (TouchScreenKeyboard_t731888065 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		bool L_0 = __this->get_U3CcanGetSelectionU3Ek__BackingField_2();
		V_0 = L_0;
		goto IL_000c;
	}

IL_000c:
	{
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Boolean UnityEngine.TouchScreenKeyboard::get_canSetSelection()
extern "C" IL2CPP_METHOD_ATTR bool TouchScreenKeyboard_get_canSetSelection_m3134736236 (TouchScreenKeyboard_t731888065 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		bool L_0 = __this->get_U3CcanSetSelectionU3Ek__BackingField_3();
		V_0 = L_0;
		goto IL_000c;
	}

IL_000c:
	{
		bool L_1 = V_0;
		return L_1;
	}
}
// UnityEngine.RangeInt UnityEngine.TouchScreenKeyboard::get_selection()
extern "C" IL2CPP_METHOD_ATTR RangeInt_t2094684618  TouchScreenKeyboard_get_selection_m3453176589 (TouchScreenKeyboard_t731888065 * __this, const RuntimeMethod* method)
{
	RangeInt_t2094684618  V_0;
	memset(&V_0, 0, sizeof(V_0));
	RangeInt_t2094684618  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		int32_t* L_0 = (&V_0)->get_address_of_start_0();
		int32_t* L_1 = (&V_0)->get_address_of_length_1();
		TouchScreenKeyboard_GetSelection_m1887070583(NULL /*static, unused*/, (int32_t*)L_0, (int32_t*)L_1, /*hidden argument*/NULL);
		RangeInt_t2094684618  L_2 = V_0;
		V_1 = L_2;
		goto IL_001b;
	}

IL_001b:
	{
		RangeInt_t2094684618  L_3 = V_1;
		return L_3;
	}
}
// System.Void UnityEngine.TouchScreenKeyboard::set_selection(UnityEngine.RangeInt)
extern "C" IL2CPP_METHOD_ATTR void TouchScreenKeyboard_set_selection_m1050694744 (TouchScreenKeyboard_t731888065 * __this, RangeInt_t2094684618  ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (&___value0)->get_start_0();
		int32_t L_1 = (&___value0)->get_length_1();
		TouchScreenKeyboard_SetSelection_m1870835676(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.TouchScreenKeyboard::GetSelection(System.Int32&,System.Int32&)
extern "C" IL2CPP_METHOD_ATTR void TouchScreenKeyboard_GetSelection_m1887070583 (RuntimeObject * __this /* static, unused */, int32_t* ___start0, int32_t* ___length1, const RuntimeMethod* method)
{
	typedef void (*TouchScreenKeyboard_GetSelection_m1887070583_ftn) (int32_t*, int32_t*);
	static TouchScreenKeyboard_GetSelection_m1887070583_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TouchScreenKeyboard_GetSelection_m1887070583_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TouchScreenKeyboard::GetSelection(System.Int32&,System.Int32&)");
	_il2cpp_icall_func(___start0, ___length1);
}
// System.Void UnityEngine.TouchScreenKeyboard::SetSelection(System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void TouchScreenKeyboard_SetSelection_m1870835676 (RuntimeObject * __this /* static, unused */, int32_t ___start0, int32_t ___length1, const RuntimeMethod* method)
{
	typedef void (*TouchScreenKeyboard_SetSelection_m1870835676_ftn) (int32_t, int32_t);
	static TouchScreenKeyboard_SetSelection_m1870835676_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TouchScreenKeyboard_SetSelection_m1870835676_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TouchScreenKeyboard::SetSelection(System.Int32,System.Int32)");
	_il2cpp_icall_func(___start0, ___length1);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: UnityEngine.TrackedReference
extern "C" void TrackedReference_t1199777556_marshal_pinvoke(const TrackedReference_t1199777556& unmarshaled, TrackedReference_t1199777556_marshaled_pinvoke& marshaled)
{
	marshaled.___m_Ptr_0 = unmarshaled.get_m_Ptr_0();
}
extern "C" void TrackedReference_t1199777556_marshal_pinvoke_back(const TrackedReference_t1199777556_marshaled_pinvoke& marshaled, TrackedReference_t1199777556& unmarshaled)
{
	intptr_t unmarshaled_m_Ptr_temp_0;
	memset(&unmarshaled_m_Ptr_temp_0, 0, sizeof(unmarshaled_m_Ptr_temp_0));
	unmarshaled_m_Ptr_temp_0 = marshaled.___m_Ptr_0;
	unmarshaled.set_m_Ptr_0(unmarshaled_m_Ptr_temp_0);
}
// Conversion method for clean up from marshalling of: UnityEngine.TrackedReference
extern "C" void TrackedReference_t1199777556_marshal_pinvoke_cleanup(TrackedReference_t1199777556_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.TrackedReference
extern "C" void TrackedReference_t1199777556_marshal_com(const TrackedReference_t1199777556& unmarshaled, TrackedReference_t1199777556_marshaled_com& marshaled)
{
	marshaled.___m_Ptr_0 = unmarshaled.get_m_Ptr_0();
}
extern "C" void TrackedReference_t1199777556_marshal_com_back(const TrackedReference_t1199777556_marshaled_com& marshaled, TrackedReference_t1199777556& unmarshaled)
{
	intptr_t unmarshaled_m_Ptr_temp_0;
	memset(&unmarshaled_m_Ptr_temp_0, 0, sizeof(unmarshaled_m_Ptr_temp_0));
	unmarshaled_m_Ptr_temp_0 = marshaled.___m_Ptr_0;
	unmarshaled.set_m_Ptr_0(unmarshaled_m_Ptr_temp_0);
}
// Conversion method for clean up from marshalling of: UnityEngine.TrackedReference
extern "C" void TrackedReference_t1199777556_marshal_com_cleanup(TrackedReference_t1199777556_marshaled_com& marshaled)
{
}
// System.Boolean UnityEngine.TrackedReference::op_Equality(UnityEngine.TrackedReference,UnityEngine.TrackedReference)
extern "C" IL2CPP_METHOD_ATTR bool TrackedReference_op_Equality_m3702354772 (RuntimeObject * __this /* static, unused */, TrackedReference_t1199777556 * ___x0, TrackedReference_t1199777556 * ___y1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TrackedReference_op_Equality_m3702354772_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	RuntimeObject * V_1 = NULL;
	bool V_2 = false;
	{
		TrackedReference_t1199777556 * L_0 = ___x0;
		V_0 = L_0;
		TrackedReference_t1199777556 * L_1 = ___y1;
		V_1 = L_1;
		RuntimeObject * L_2 = V_1;
		if (L_2)
		{
			goto IL_0018;
		}
	}
	{
		RuntimeObject * L_3 = V_0;
		if (L_3)
		{
			goto IL_0018;
		}
	}
	{
		V_2 = (bool)1;
		goto IL_0067;
	}

IL_0018:
	{
		RuntimeObject * L_4 = V_1;
		if (L_4)
		{
			goto IL_0034;
		}
	}
	{
		TrackedReference_t1199777556 * L_5 = ___x0;
		NullCheck(L_5);
		intptr_t L_6 = L_5->get_m_Ptr_0();
		bool L_7 = IntPtr_op_Equality_m408849716(NULL /*static, unused*/, (intptr_t)L_6, (intptr_t)(0), /*hidden argument*/NULL);
		V_2 = L_7;
		goto IL_0067;
	}

IL_0034:
	{
		RuntimeObject * L_8 = V_0;
		if (L_8)
		{
			goto IL_0050;
		}
	}
	{
		TrackedReference_t1199777556 * L_9 = ___y1;
		NullCheck(L_9);
		intptr_t L_10 = L_9->get_m_Ptr_0();
		bool L_11 = IntPtr_op_Equality_m408849716(NULL /*static, unused*/, (intptr_t)L_10, (intptr_t)(0), /*hidden argument*/NULL);
		V_2 = L_11;
		goto IL_0067;
	}

IL_0050:
	{
		TrackedReference_t1199777556 * L_12 = ___x0;
		NullCheck(L_12);
		intptr_t L_13 = L_12->get_m_Ptr_0();
		TrackedReference_t1199777556 * L_14 = ___y1;
		NullCheck(L_14);
		intptr_t L_15 = L_14->get_m_Ptr_0();
		bool L_16 = IntPtr_op_Equality_m408849716(NULL /*static, unused*/, (intptr_t)L_13, (intptr_t)L_15, /*hidden argument*/NULL);
		V_2 = L_16;
		goto IL_0067;
	}

IL_0067:
	{
		bool L_17 = V_2;
		return L_17;
	}
}
// System.Boolean UnityEngine.TrackedReference::Equals(System.Object)
extern "C" IL2CPP_METHOD_ATTR bool TrackedReference_Equals_m1342350606 (TrackedReference_t1199777556 * __this, RuntimeObject * ___o0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TrackedReference_Equals_m1342350606_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		RuntimeObject * L_0 = ___o0;
		bool L_1 = TrackedReference_op_Equality_m3702354772(NULL /*static, unused*/, ((TrackedReference_t1199777556 *)IsInstClass((RuntimeObject*)L_0, TrackedReference_t1199777556_il2cpp_TypeInfo_var)), __this, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_0013;
	}

IL_0013:
	{
		bool L_2 = V_0;
		return L_2;
	}
}
// System.Int32 UnityEngine.TrackedReference::GetHashCode()
extern "C" IL2CPP_METHOD_ATTR int32_t TrackedReference_GetHashCode_m3645519794 (TrackedReference_t1199777556 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		intptr_t L_0 = __this->get_m_Ptr_0();
		int32_t L_1 = IntPtr_op_Explicit_m4220076518(NULL /*static, unused*/, (intptr_t)L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_0012;
	}

IL_0012:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Transform::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Transform__ctor_m3470711880 (Transform_t3600365921 * __this, const RuntimeMethod* method)
{
	{
		Component__ctor_m1928064382(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Transform_get_position_m36019626 (Transform_t3600365921 * __this, const RuntimeMethod* method)
{
	Vector3_t3722313464  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		Transform_get_position_Injected_m2186524752(__this, (Vector3_t3722313464 *)(&V_0), /*hidden argument*/NULL);
		Vector3_t3722313464  L_0 = V_0;
		return L_0;
	}
}
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR void Transform_set_position_m3387557959 (Transform_t3600365921 * __this, Vector3_t3722313464  ___value0, const RuntimeMethod* method)
{
	{
		Transform_set_position_Injected_m139451673(__this, (Vector3_t3722313464 *)(&___value0), /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Vector3 UnityEngine.Transform::get_localPosition()
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Transform_get_localPosition_m4234289348 (Transform_t3600365921 * __this, const RuntimeMethod* method)
{
	Vector3_t3722313464  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		Transform_get_localPosition_Injected_m2544841678(__this, (Vector3_t3722313464 *)(&V_0), /*hidden argument*/NULL);
		Vector3_t3722313464  L_0 = V_0;
		return L_0;
	}
}
// System.Void UnityEngine.Transform::set_localPosition(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR void Transform_set_localPosition_m4128471975 (Transform_t3600365921 * __this, Vector3_t3722313464  ___value0, const RuntimeMethod* method)
{
	{
		Transform_set_localPosition_Injected_m2951700666(__this, (Vector3_t3722313464 *)(&___value0), /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Vector3 UnityEngine.Transform::get_forward()
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Transform_get_forward_m747522392 (Transform_t3600365921 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Transform_get_forward_m747522392_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t3722313464  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		Quaternion_t2301928331  L_0 = Transform_get_rotation_m3502953881(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_1 = Vector3_get_forward_m3100859705(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t2301928331_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_2 = Quaternion_op_Multiply_m2607404835(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		goto IL_0017;
	}

IL_0017:
	{
		Vector3_t3722313464  L_3 = V_0;
		return L_3;
	}
}
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
extern "C" IL2CPP_METHOD_ATTR Quaternion_t2301928331  Transform_get_rotation_m3502953881 (Transform_t3600365921 * __this, const RuntimeMethod* method)
{
	Quaternion_t2301928331  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		Transform_get_rotation_Injected_m3838128444(__this, (Quaternion_t2301928331 *)(&V_0), /*hidden argument*/NULL);
		Quaternion_t2301928331  L_0 = V_0;
		return L_0;
	}
}
// System.Void UnityEngine.Transform::set_rotation(UnityEngine.Quaternion)
extern "C" IL2CPP_METHOD_ATTR void Transform_set_rotation_m3524318132 (Transform_t3600365921 * __this, Quaternion_t2301928331  ___value0, const RuntimeMethod* method)
{
	{
		Transform_set_rotation_Injected_m51774119(__this, (Quaternion_t2301928331 *)(&___value0), /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Quaternion UnityEngine.Transform::get_localRotation()
extern "C" IL2CPP_METHOD_ATTR Quaternion_t2301928331  Transform_get_localRotation_m3487911431 (Transform_t3600365921 * __this, const RuntimeMethod* method)
{
	Quaternion_t2301928331  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		Transform_get_localRotation_Injected_m1196986957(__this, (Quaternion_t2301928331 *)(&V_0), /*hidden argument*/NULL);
		Quaternion_t2301928331  L_0 = V_0;
		return L_0;
	}
}
// System.Void UnityEngine.Transform::set_localRotation(UnityEngine.Quaternion)
extern "C" IL2CPP_METHOD_ATTR void Transform_set_localRotation_m19445462 (Transform_t3600365921 * __this, Quaternion_t2301928331  ___value0, const RuntimeMethod* method)
{
	{
		Transform_set_localRotation_Injected_m2477643206(__this, (Quaternion_t2301928331 *)(&___value0), /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Vector3 UnityEngine.Transform::get_localScale()
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Transform_get_localScale_m129152068 (Transform_t3600365921 * __this, const RuntimeMethod* method)
{
	Vector3_t3722313464  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		Transform_get_localScale_Injected_m4238330512(__this, (Vector3_t3722313464 *)(&V_0), /*hidden argument*/NULL);
		Vector3_t3722313464  L_0 = V_0;
		return L_0;
	}
}
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR void Transform_set_localScale_m3053443106 (Transform_t3600365921 * __this, Vector3_t3722313464  ___value0, const RuntimeMethod* method)
{
	{
		Transform_set_localScale_Injected_m2631109374(__this, (Vector3_t3722313464 *)(&___value0), /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Transform UnityEngine.Transform::get_parent()
extern "C" IL2CPP_METHOD_ATTR Transform_t3600365921 * Transform_get_parent_m835071599 (Transform_t3600365921 * __this, const RuntimeMethod* method)
{
	Transform_t3600365921 * V_0 = NULL;
	{
		Transform_t3600365921 * L_0 = Transform_get_parentInternal_m1494967989(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		Transform_t3600365921 * L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Transform::set_parent(UnityEngine.Transform)
extern "C" IL2CPP_METHOD_ATTR void Transform_set_parent_m786917804 (Transform_t3600365921 * __this, Transform_t3600365921 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Transform_set_parent_m786917804_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		if (!((RectTransform_t3704657025 *)IsInstSealed((RuntimeObject*)__this, RectTransform_t3704657025_il2cpp_TypeInfo_var)))
		{
			goto IL_0017;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_LogWarning_m831581295(NULL /*static, unused*/, _stringLiteral821992081, __this, /*hidden argument*/NULL);
	}

IL_0017:
	{
		Transform_t3600365921 * L_0 = ___value0;
		Transform_set_parentInternal_m2066300701(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Transform UnityEngine.Transform::get_parentInternal()
extern "C" IL2CPP_METHOD_ATTR Transform_t3600365921 * Transform_get_parentInternal_m1494967989 (Transform_t3600365921 * __this, const RuntimeMethod* method)
{
	Transform_t3600365921 * V_0 = NULL;
	{
		Transform_t3600365921 * L_0 = Transform_GetParent_m1669681345(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		Transform_t3600365921 * L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Transform::set_parentInternal(UnityEngine.Transform)
extern "C" IL2CPP_METHOD_ATTR void Transform_set_parentInternal_m2066300701 (Transform_t3600365921 * __this, Transform_t3600365921 * ___value0, const RuntimeMethod* method)
{
	{
		Transform_t3600365921 * L_0 = ___value0;
		Transform_SetParent_m381167889(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Transform UnityEngine.Transform::GetParent()
extern "C" IL2CPP_METHOD_ATTR Transform_t3600365921 * Transform_GetParent_m1669681345 (Transform_t3600365921 * __this, const RuntimeMethod* method)
{
	typedef Transform_t3600365921 * (*Transform_GetParent_m1669681345_ftn) (Transform_t3600365921 *);
	static Transform_GetParent_m1669681345_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_GetParent_m1669681345_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::GetParent()");
	Transform_t3600365921 * retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Void UnityEngine.Transform::SetParent(UnityEngine.Transform)
extern "C" IL2CPP_METHOD_ATTR void Transform_SetParent_m381167889 (Transform_t3600365921 * __this, Transform_t3600365921 * ___p0, const RuntimeMethod* method)
{
	{
		Transform_t3600365921 * L_0 = ___p0;
		Transform_SetParent_m273471670(__this, L_0, (bool)1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Transform::SetParent(UnityEngine.Transform,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void Transform_SetParent_m273471670 (Transform_t3600365921 * __this, Transform_t3600365921 * ___parent0, bool ___worldPositionStays1, const RuntimeMethod* method)
{
	typedef void (*Transform_SetParent_m273471670_ftn) (Transform_t3600365921 *, Transform_t3600365921 *, bool);
	static Transform_SetParent_m273471670_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_SetParent_m273471670_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::SetParent(UnityEngine.Transform,System.Boolean)");
	_il2cpp_icall_func(__this, ___parent0, ___worldPositionStays1);
}
// UnityEngine.Matrix4x4 UnityEngine.Transform::get_worldToLocalMatrix()
extern "C" IL2CPP_METHOD_ATTR Matrix4x4_t1817901843  Transform_get_worldToLocalMatrix_m399704877 (Transform_t3600365921 * __this, const RuntimeMethod* method)
{
	Matrix4x4_t1817901843  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		Transform_get_worldToLocalMatrix_Injected_m3487540861(__this, (Matrix4x4_t1817901843 *)(&V_0), /*hidden argument*/NULL);
		Matrix4x4_t1817901843  L_0 = V_0;
		return L_0;
	}
}
// UnityEngine.Matrix4x4 UnityEngine.Transform::get_localToWorldMatrix()
extern "C" IL2CPP_METHOD_ATTR Matrix4x4_t1817901843  Transform_get_localToWorldMatrix_m4155710351 (Transform_t3600365921 * __this, const RuntimeMethod* method)
{
	Matrix4x4_t1817901843  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		Transform_get_localToWorldMatrix_Injected_m1424530041(__this, (Matrix4x4_t1817901843 *)(&V_0), /*hidden argument*/NULL);
		Matrix4x4_t1817901843  L_0 = V_0;
		return L_0;
	}
}
// UnityEngine.Vector3 UnityEngine.Transform::TransformPoint(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Transform_TransformPoint_m226827784 (Transform_t3600365921 * __this, Vector3_t3722313464  ___position0, const RuntimeMethod* method)
{
	Vector3_t3722313464  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		Transform_TransformPoint_Injected_m4136387841(__this, (Vector3_t3722313464 *)(&___position0), (Vector3_t3722313464 *)(&V_0), /*hidden argument*/NULL);
		Vector3_t3722313464  L_0 = V_0;
		return L_0;
	}
}
// UnityEngine.Vector3 UnityEngine.Transform::InverseTransformPoint(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Transform_InverseTransformPoint_m1343916000 (Transform_t3600365921 * __this, Vector3_t3722313464  ___position0, const RuntimeMethod* method)
{
	Vector3_t3722313464  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		Transform_InverseTransformPoint_Injected_m1034693445(__this, (Vector3_t3722313464 *)(&___position0), (Vector3_t3722313464 *)(&V_0), /*hidden argument*/NULL);
		Vector3_t3722313464  L_0 = V_0;
		return L_0;
	}
}
// UnityEngine.Transform UnityEngine.Transform::get_root()
extern "C" IL2CPP_METHOD_ATTR Transform_t3600365921 * Transform_get_root_m2450402596 (Transform_t3600365921 * __this, const RuntimeMethod* method)
{
	Transform_t3600365921 * V_0 = NULL;
	{
		Transform_t3600365921 * L_0 = Transform_GetRoot_m3965506025(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		Transform_t3600365921 * L_1 = V_0;
		return L_1;
	}
}
// UnityEngine.Transform UnityEngine.Transform::GetRoot()
extern "C" IL2CPP_METHOD_ATTR Transform_t3600365921 * Transform_GetRoot_m3965506025 (Transform_t3600365921 * __this, const RuntimeMethod* method)
{
	typedef Transform_t3600365921 * (*Transform_GetRoot_m3965506025_ftn) (Transform_t3600365921 *);
	static Transform_GetRoot_m3965506025_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_GetRoot_m3965506025_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::GetRoot()");
	Transform_t3600365921 * retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Int32 UnityEngine.Transform::get_childCount()
extern "C" IL2CPP_METHOD_ATTR int32_t Transform_get_childCount_m3145433196 (Transform_t3600365921 * __this, const RuntimeMethod* method)
{
	typedef int32_t (*Transform_get_childCount_m3145433196_ftn) (Transform_t3600365921 *);
	static Transform_get_childCount_m3145433196_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_get_childCount_m3145433196_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::get_childCount()");
	int32_t retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Void UnityEngine.Transform::SetAsFirstSibling()
extern "C" IL2CPP_METHOD_ATTR void Transform_SetAsFirstSibling_m253439912 (Transform_t3600365921 * __this, const RuntimeMethod* method)
{
	typedef void (*Transform_SetAsFirstSibling_m253439912_ftn) (Transform_t3600365921 *);
	static Transform_SetAsFirstSibling_m253439912_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_SetAsFirstSibling_m253439912_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::SetAsFirstSibling()");
	_il2cpp_icall_func(__this);
}
// UnityEngine.Vector3 UnityEngine.Transform::get_lossyScale()
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Transform_get_lossyScale_m465496651 (Transform_t3600365921 * __this, const RuntimeMethod* method)
{
	Vector3_t3722313464  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		Transform_get_lossyScale_Injected_m1764174024(__this, (Vector3_t3722313464 *)(&V_0), /*hidden argument*/NULL);
		Vector3_t3722313464  L_0 = V_0;
		return L_0;
	}
}
// System.Boolean UnityEngine.Transform::IsChildOf(UnityEngine.Transform)
extern "C" IL2CPP_METHOD_ATTR bool Transform_IsChildOf_m224006092 (Transform_t3600365921 * __this, Transform_t3600365921 * ___parent0, const RuntimeMethod* method)
{
	typedef bool (*Transform_IsChildOf_m224006092_ftn) (Transform_t3600365921 *, Transform_t3600365921 *);
	static Transform_IsChildOf_m224006092_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_IsChildOf_m224006092_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::IsChildOf(UnityEngine.Transform)");
	bool retVal = _il2cpp_icall_func(__this, ___parent0);
	return retVal;
}
// System.Collections.IEnumerator UnityEngine.Transform::GetEnumerator()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* Transform_GetEnumerator_m2717073726 (Transform_t3600365921 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Transform_GetEnumerator_m2717073726_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		Enumerator_t3442430665 * L_0 = (Enumerator_t3442430665 *)il2cpp_codegen_object_new(Enumerator_t3442430665_il2cpp_TypeInfo_var);
		Enumerator__ctor_m1351041375(L_0, __this, /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		RuntimeObject* L_1 = V_0;
		return L_1;
	}
}
// UnityEngine.Transform UnityEngine.Transform::GetChild(System.Int32)
extern "C" IL2CPP_METHOD_ATTR Transform_t3600365921 * Transform_GetChild_m1092972975 (Transform_t3600365921 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	typedef Transform_t3600365921 * (*Transform_GetChild_m1092972975_ftn) (Transform_t3600365921 *, int32_t);
	static Transform_GetChild_m1092972975_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_GetChild_m1092972975_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::GetChild(System.Int32)");
	Transform_t3600365921 * retVal = _il2cpp_icall_func(__this, ___index0);
	return retVal;
}
// System.Void UnityEngine.Transform::get_position_Injected(UnityEngine.Vector3&)
extern "C" IL2CPP_METHOD_ATTR void Transform_get_position_Injected_m2186524752 (Transform_t3600365921 * __this, Vector3_t3722313464 * ___ret0, const RuntimeMethod* method)
{
	typedef void (*Transform_get_position_Injected_m2186524752_ftn) (Transform_t3600365921 *, Vector3_t3722313464 *);
	static Transform_get_position_Injected_m2186524752_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_get_position_Injected_m2186524752_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::get_position_Injected(UnityEngine.Vector3&)");
	_il2cpp_icall_func(__this, ___ret0);
}
// System.Void UnityEngine.Transform::set_position_Injected(UnityEngine.Vector3&)
extern "C" IL2CPP_METHOD_ATTR void Transform_set_position_Injected_m139451673 (Transform_t3600365921 * __this, Vector3_t3722313464 * ___value0, const RuntimeMethod* method)
{
	typedef void (*Transform_set_position_Injected_m139451673_ftn) (Transform_t3600365921 *, Vector3_t3722313464 *);
	static Transform_set_position_Injected_m139451673_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_set_position_Injected_m139451673_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::set_position_Injected(UnityEngine.Vector3&)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Void UnityEngine.Transform::get_localPosition_Injected(UnityEngine.Vector3&)
extern "C" IL2CPP_METHOD_ATTR void Transform_get_localPosition_Injected_m2544841678 (Transform_t3600365921 * __this, Vector3_t3722313464 * ___ret0, const RuntimeMethod* method)
{
	typedef void (*Transform_get_localPosition_Injected_m2544841678_ftn) (Transform_t3600365921 *, Vector3_t3722313464 *);
	static Transform_get_localPosition_Injected_m2544841678_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_get_localPosition_Injected_m2544841678_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::get_localPosition_Injected(UnityEngine.Vector3&)");
	_il2cpp_icall_func(__this, ___ret0);
}
// System.Void UnityEngine.Transform::set_localPosition_Injected(UnityEngine.Vector3&)
extern "C" IL2CPP_METHOD_ATTR void Transform_set_localPosition_Injected_m2951700666 (Transform_t3600365921 * __this, Vector3_t3722313464 * ___value0, const RuntimeMethod* method)
{
	typedef void (*Transform_set_localPosition_Injected_m2951700666_ftn) (Transform_t3600365921 *, Vector3_t3722313464 *);
	static Transform_set_localPosition_Injected_m2951700666_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_set_localPosition_Injected_m2951700666_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::set_localPosition_Injected(UnityEngine.Vector3&)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Void UnityEngine.Transform::get_rotation_Injected(UnityEngine.Quaternion&)
extern "C" IL2CPP_METHOD_ATTR void Transform_get_rotation_Injected_m3838128444 (Transform_t3600365921 * __this, Quaternion_t2301928331 * ___ret0, const RuntimeMethod* method)
{
	typedef void (*Transform_get_rotation_Injected_m3838128444_ftn) (Transform_t3600365921 *, Quaternion_t2301928331 *);
	static Transform_get_rotation_Injected_m3838128444_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_get_rotation_Injected_m3838128444_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::get_rotation_Injected(UnityEngine.Quaternion&)");
	_il2cpp_icall_func(__this, ___ret0);
}
// System.Void UnityEngine.Transform::set_rotation_Injected(UnityEngine.Quaternion&)
extern "C" IL2CPP_METHOD_ATTR void Transform_set_rotation_Injected_m51774119 (Transform_t3600365921 * __this, Quaternion_t2301928331 * ___value0, const RuntimeMethod* method)
{
	typedef void (*Transform_set_rotation_Injected_m51774119_ftn) (Transform_t3600365921 *, Quaternion_t2301928331 *);
	static Transform_set_rotation_Injected_m51774119_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_set_rotation_Injected_m51774119_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::set_rotation_Injected(UnityEngine.Quaternion&)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Void UnityEngine.Transform::get_localRotation_Injected(UnityEngine.Quaternion&)
extern "C" IL2CPP_METHOD_ATTR void Transform_get_localRotation_Injected_m1196986957 (Transform_t3600365921 * __this, Quaternion_t2301928331 * ___ret0, const RuntimeMethod* method)
{
	typedef void (*Transform_get_localRotation_Injected_m1196986957_ftn) (Transform_t3600365921 *, Quaternion_t2301928331 *);
	static Transform_get_localRotation_Injected_m1196986957_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_get_localRotation_Injected_m1196986957_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::get_localRotation_Injected(UnityEngine.Quaternion&)");
	_il2cpp_icall_func(__this, ___ret0);
}
// System.Void UnityEngine.Transform::set_localRotation_Injected(UnityEngine.Quaternion&)
extern "C" IL2CPP_METHOD_ATTR void Transform_set_localRotation_Injected_m2477643206 (Transform_t3600365921 * __this, Quaternion_t2301928331 * ___value0, const RuntimeMethod* method)
{
	typedef void (*Transform_set_localRotation_Injected_m2477643206_ftn) (Transform_t3600365921 *, Quaternion_t2301928331 *);
	static Transform_set_localRotation_Injected_m2477643206_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_set_localRotation_Injected_m2477643206_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::set_localRotation_Injected(UnityEngine.Quaternion&)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Void UnityEngine.Transform::get_localScale_Injected(UnityEngine.Vector3&)
extern "C" IL2CPP_METHOD_ATTR void Transform_get_localScale_Injected_m4238330512 (Transform_t3600365921 * __this, Vector3_t3722313464 * ___ret0, const RuntimeMethod* method)
{
	typedef void (*Transform_get_localScale_Injected_m4238330512_ftn) (Transform_t3600365921 *, Vector3_t3722313464 *);
	static Transform_get_localScale_Injected_m4238330512_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_get_localScale_Injected_m4238330512_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::get_localScale_Injected(UnityEngine.Vector3&)");
	_il2cpp_icall_func(__this, ___ret0);
}
// System.Void UnityEngine.Transform::set_localScale_Injected(UnityEngine.Vector3&)
extern "C" IL2CPP_METHOD_ATTR void Transform_set_localScale_Injected_m2631109374 (Transform_t3600365921 * __this, Vector3_t3722313464 * ___value0, const RuntimeMethod* method)
{
	typedef void (*Transform_set_localScale_Injected_m2631109374_ftn) (Transform_t3600365921 *, Vector3_t3722313464 *);
	static Transform_set_localScale_Injected_m2631109374_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_set_localScale_Injected_m2631109374_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::set_localScale_Injected(UnityEngine.Vector3&)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Void UnityEngine.Transform::get_worldToLocalMatrix_Injected(UnityEngine.Matrix4x4&)
extern "C" IL2CPP_METHOD_ATTR void Transform_get_worldToLocalMatrix_Injected_m3487540861 (Transform_t3600365921 * __this, Matrix4x4_t1817901843 * ___ret0, const RuntimeMethod* method)
{
	typedef void (*Transform_get_worldToLocalMatrix_Injected_m3487540861_ftn) (Transform_t3600365921 *, Matrix4x4_t1817901843 *);
	static Transform_get_worldToLocalMatrix_Injected_m3487540861_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_get_worldToLocalMatrix_Injected_m3487540861_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::get_worldToLocalMatrix_Injected(UnityEngine.Matrix4x4&)");
	_il2cpp_icall_func(__this, ___ret0);
}
// System.Void UnityEngine.Transform::get_localToWorldMatrix_Injected(UnityEngine.Matrix4x4&)
extern "C" IL2CPP_METHOD_ATTR void Transform_get_localToWorldMatrix_Injected_m1424530041 (Transform_t3600365921 * __this, Matrix4x4_t1817901843 * ___ret0, const RuntimeMethod* method)
{
	typedef void (*Transform_get_localToWorldMatrix_Injected_m1424530041_ftn) (Transform_t3600365921 *, Matrix4x4_t1817901843 *);
	static Transform_get_localToWorldMatrix_Injected_m1424530041_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_get_localToWorldMatrix_Injected_m1424530041_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::get_localToWorldMatrix_Injected(UnityEngine.Matrix4x4&)");
	_il2cpp_icall_func(__this, ___ret0);
}
// System.Void UnityEngine.Transform::TransformPoint_Injected(UnityEngine.Vector3&,UnityEngine.Vector3&)
extern "C" IL2CPP_METHOD_ATTR void Transform_TransformPoint_Injected_m4136387841 (Transform_t3600365921 * __this, Vector3_t3722313464 * ___position0, Vector3_t3722313464 * ___ret1, const RuntimeMethod* method)
{
	typedef void (*Transform_TransformPoint_Injected_m4136387841_ftn) (Transform_t3600365921 *, Vector3_t3722313464 *, Vector3_t3722313464 *);
	static Transform_TransformPoint_Injected_m4136387841_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_TransformPoint_Injected_m4136387841_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::TransformPoint_Injected(UnityEngine.Vector3&,UnityEngine.Vector3&)");
	_il2cpp_icall_func(__this, ___position0, ___ret1);
}
// System.Void UnityEngine.Transform::InverseTransformPoint_Injected(UnityEngine.Vector3&,UnityEngine.Vector3&)
extern "C" IL2CPP_METHOD_ATTR void Transform_InverseTransformPoint_Injected_m1034693445 (Transform_t3600365921 * __this, Vector3_t3722313464 * ___position0, Vector3_t3722313464 * ___ret1, const RuntimeMethod* method)
{
	typedef void (*Transform_InverseTransformPoint_Injected_m1034693445_ftn) (Transform_t3600365921 *, Vector3_t3722313464 *, Vector3_t3722313464 *);
	static Transform_InverseTransformPoint_Injected_m1034693445_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_InverseTransformPoint_Injected_m1034693445_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::InverseTransformPoint_Injected(UnityEngine.Vector3&,UnityEngine.Vector3&)");
	_il2cpp_icall_func(__this, ___position0, ___ret1);
}
// System.Void UnityEngine.Transform::get_lossyScale_Injected(UnityEngine.Vector3&)
extern "C" IL2CPP_METHOD_ATTR void Transform_get_lossyScale_Injected_m1764174024 (Transform_t3600365921 * __this, Vector3_t3722313464 * ___ret0, const RuntimeMethod* method)
{
	typedef void (*Transform_get_lossyScale_Injected_m1764174024_ftn) (Transform_t3600365921 *, Vector3_t3722313464 *);
	static Transform_get_lossyScale_Injected_m1764174024_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Transform_get_lossyScale_Injected_m1764174024_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Transform::get_lossyScale_Injected(UnityEngine.Vector3&)");
	_il2cpp_icall_func(__this, ___ret0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Transform/Enumerator::.ctor(UnityEngine.Transform)
extern "C" IL2CPP_METHOD_ATTR void Enumerator__ctor_m1351041375 (Enumerator_t3442430665 * __this, Transform_t3600365921 * ___outer0, const RuntimeMethod* method)
{
	{
		__this->set_currentIndex_1((-1));
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		Transform_t3600365921 * L_0 = ___outer0;
		__this->set_outer_0(L_0);
		return;
	}
}
// System.Object UnityEngine.Transform/Enumerator::get_Current()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m2591725252 (Enumerator_t3442430665 * __this, const RuntimeMethod* method)
{
	RuntimeObject * V_0 = NULL;
	{
		Transform_t3600365921 * L_0 = __this->get_outer_0();
		int32_t L_1 = __this->get_currentIndex_1();
		NullCheck(L_0);
		Transform_t3600365921 * L_2 = Transform_GetChild_m1092972975(L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		goto IL_0018;
	}

IL_0018:
	{
		RuntimeObject * L_3 = V_0;
		return L_3;
	}
}
// System.Boolean UnityEngine.Transform/Enumerator::MoveNext()
extern "C" IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m4275888254 (Enumerator_t3442430665 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	{
		Transform_t3600365921 * L_0 = __this->get_outer_0();
		NullCheck(L_0);
		int32_t L_1 = Transform_get_childCount_m3145433196(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		int32_t L_2 = __this->get_currentIndex_1();
		int32_t L_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)1));
		V_1 = L_3;
		__this->set_currentIndex_1(L_3);
		int32_t L_4 = V_1;
		int32_t L_5 = V_0;
		V_2 = (bool)((((int32_t)L_4) < ((int32_t)L_5))? 1 : 0);
		goto IL_0027;
	}

IL_0027:
	{
		bool L_6 = V_2;
		return L_6;
	}
}
// System.Void UnityEngine.Transform/Enumerator::Reset()
extern "C" IL2CPP_METHOD_ATTR void Enumerator_Reset_m39541243 (Enumerator_t3442430665 * __this, const RuntimeMethod* method)
{
	{
		__this->set_currentIndex_1((-1));
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean UnityEngine.U2D.SpriteAtlas::CanBindTo(UnityEngine.Sprite)
extern "C" IL2CPP_METHOD_ATTR bool SpriteAtlas_CanBindTo_m1041932703 (SpriteAtlas_t646931412 * __this, Sprite_t280657092 * ___sprite0, const RuntimeMethod* method)
{
	typedef bool (*SpriteAtlas_CanBindTo_m1041932703_ftn) (SpriteAtlas_t646931412 *, Sprite_t280657092 *);
	static SpriteAtlas_CanBindTo_m1041932703_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (SpriteAtlas_CanBindTo_m1041932703_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.U2D.SpriteAtlas::CanBindTo(UnityEngine.Sprite)");
	bool retVal = _il2cpp_icall_func(__this, ___sprite0);
	return retVal;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean UnityEngine.U2D.SpriteAtlasManager::RequestAtlas(System.String)
extern "C" IL2CPP_METHOD_ATTR bool SpriteAtlasManager_RequestAtlas_m455709951 (RuntimeObject * __this /* static, unused */, String_t* ___tag0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SpriteAtlasManager_RequestAtlas_m455709951_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	String_t* G_B3_0 = NULL;
	RequestAtlasCallback_t3100554279 * G_B3_1 = NULL;
	String_t* G_B2_0 = NULL;
	RequestAtlasCallback_t3100554279 * G_B2_1 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(SpriteAtlasManager_t3158462485_il2cpp_TypeInfo_var);
		RequestAtlasCallback_t3100554279 * L_0 = ((SpriteAtlasManager_t3158462485_StaticFields*)il2cpp_codegen_static_fields_for(SpriteAtlasManager_t3158462485_il2cpp_TypeInfo_var))->get_atlasRequested_0();
		if (!L_0)
		{
			goto IL_003b;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(SpriteAtlasManager_t3158462485_il2cpp_TypeInfo_var);
		RequestAtlasCallback_t3100554279 * L_1 = ((SpriteAtlasManager_t3158462485_StaticFields*)il2cpp_codegen_static_fields_for(SpriteAtlasManager_t3158462485_il2cpp_TypeInfo_var))->get_atlasRequested_0();
		String_t* L_2 = ___tag0;
		Action_1_t819399007 * L_3 = ((SpriteAtlasManager_t3158462485_StaticFields*)il2cpp_codegen_static_fields_for(SpriteAtlasManager_t3158462485_il2cpp_TypeInfo_var))->get_U3CU3Ef__mgU24cache0_2();
		G_B2_0 = L_2;
		G_B2_1 = L_1;
		if (L_3)
		{
			G_B3_0 = L_2;
			G_B3_1 = L_1;
			goto IL_002a;
		}
	}
	{
		intptr_t L_4 = (intptr_t)SpriteAtlasManager_Register_m2413332465_RuntimeMethod_var;
		Action_1_t819399007 * L_5 = (Action_1_t819399007 *)il2cpp_codegen_object_new(Action_1_t819399007_il2cpp_TypeInfo_var);
		Action_1__ctor_m3325790595(L_5, NULL, (intptr_t)L_4, /*hidden argument*/Action_1__ctor_m3325790595_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(SpriteAtlasManager_t3158462485_il2cpp_TypeInfo_var);
		((SpriteAtlasManager_t3158462485_StaticFields*)il2cpp_codegen_static_fields_for(SpriteAtlasManager_t3158462485_il2cpp_TypeInfo_var))->set_U3CU3Ef__mgU24cache0_2(L_5);
		G_B3_0 = G_B2_0;
		G_B3_1 = G_B2_1;
	}

IL_002a:
	{
		IL2CPP_RUNTIME_CLASS_INIT(SpriteAtlasManager_t3158462485_il2cpp_TypeInfo_var);
		Action_1_t819399007 * L_6 = ((SpriteAtlasManager_t3158462485_StaticFields*)il2cpp_codegen_static_fields_for(SpriteAtlasManager_t3158462485_il2cpp_TypeInfo_var))->get_U3CU3Ef__mgU24cache0_2();
		NullCheck(G_B3_1);
		RequestAtlasCallback_Invoke_m378128467(G_B3_1, G_B3_0, L_6, /*hidden argument*/NULL);
		V_0 = (bool)1;
		goto IL_0042;
	}

IL_003b:
	{
		V_0 = (bool)0;
		goto IL_0042;
	}

IL_0042:
	{
		bool L_7 = V_0;
		return L_7;
	}
}
// System.Void UnityEngine.U2D.SpriteAtlasManager::add_atlasRegistered(System.Action`1<UnityEngine.U2D.SpriteAtlas>)
extern "C" IL2CPP_METHOD_ATTR void SpriteAtlasManager_add_atlasRegistered_m2226734943 (RuntimeObject * __this /* static, unused */, Action_1_t819399007 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SpriteAtlasManager_add_atlasRegistered_m2226734943_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t819399007 * V_0 = NULL;
	Action_1_t819399007 * V_1 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(SpriteAtlasManager_t3158462485_il2cpp_TypeInfo_var);
		Action_1_t819399007 * L_0 = ((SpriteAtlasManager_t3158462485_StaticFields*)il2cpp_codegen_static_fields_for(SpriteAtlasManager_t3158462485_il2cpp_TypeInfo_var))->get_atlasRegistered_1();
		V_0 = L_0;
	}

IL_0006:
	{
		Action_1_t819399007 * L_1 = V_0;
		V_1 = L_1;
		IL2CPP_RUNTIME_CLASS_INIT(SpriteAtlasManager_t3158462485_il2cpp_TypeInfo_var);
		Action_1_t819399007 * L_2 = V_1;
		Action_1_t819399007 * L_3 = ___value0;
		Delegate_t1188392813 * L_4 = Delegate_Combine_m1859655160(NULL /*static, unused*/, L_2, L_3, /*hidden argument*/NULL);
		Action_1_t819399007 * L_5 = V_0;
		Action_1_t819399007 * L_6 = InterlockedCompareExchangeImpl<Action_1_t819399007 *>((Action_1_t819399007 **)(((SpriteAtlasManager_t3158462485_StaticFields*)il2cpp_codegen_static_fields_for(SpriteAtlasManager_t3158462485_il2cpp_TypeInfo_var))->get_address_of_atlasRegistered_1()), ((Action_1_t819399007 *)CastclassSealed((RuntimeObject*)L_4, Action_1_t819399007_il2cpp_TypeInfo_var)), L_5);
		V_0 = L_6;
		Action_1_t819399007 * L_7 = V_0;
		Action_1_t819399007 * L_8 = V_1;
		if ((!(((RuntimeObject*)(Action_1_t819399007 *)L_7) == ((RuntimeObject*)(Action_1_t819399007 *)L_8))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.U2D.SpriteAtlasManager::remove_atlasRegistered(System.Action`1<UnityEngine.U2D.SpriteAtlas>)
extern "C" IL2CPP_METHOD_ATTR void SpriteAtlasManager_remove_atlasRegistered_m1470818068 (RuntimeObject * __this /* static, unused */, Action_1_t819399007 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SpriteAtlasManager_remove_atlasRegistered_m1470818068_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t819399007 * V_0 = NULL;
	Action_1_t819399007 * V_1 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(SpriteAtlasManager_t3158462485_il2cpp_TypeInfo_var);
		Action_1_t819399007 * L_0 = ((SpriteAtlasManager_t3158462485_StaticFields*)il2cpp_codegen_static_fields_for(SpriteAtlasManager_t3158462485_il2cpp_TypeInfo_var))->get_atlasRegistered_1();
		V_0 = L_0;
	}

IL_0006:
	{
		Action_1_t819399007 * L_1 = V_0;
		V_1 = L_1;
		IL2CPP_RUNTIME_CLASS_INIT(SpriteAtlasManager_t3158462485_il2cpp_TypeInfo_var);
		Action_1_t819399007 * L_2 = V_1;
		Action_1_t819399007 * L_3 = ___value0;
		Delegate_t1188392813 * L_4 = Delegate_Remove_m334097152(NULL /*static, unused*/, L_2, L_3, /*hidden argument*/NULL);
		Action_1_t819399007 * L_5 = V_0;
		Action_1_t819399007 * L_6 = InterlockedCompareExchangeImpl<Action_1_t819399007 *>((Action_1_t819399007 **)(((SpriteAtlasManager_t3158462485_StaticFields*)il2cpp_codegen_static_fields_for(SpriteAtlasManager_t3158462485_il2cpp_TypeInfo_var))->get_address_of_atlasRegistered_1()), ((Action_1_t819399007 *)CastclassSealed((RuntimeObject*)L_4, Action_1_t819399007_il2cpp_TypeInfo_var)), L_5);
		V_0 = L_6;
		Action_1_t819399007 * L_7 = V_0;
		Action_1_t819399007 * L_8 = V_1;
		if ((!(((RuntimeObject*)(Action_1_t819399007 *)L_7) == ((RuntimeObject*)(Action_1_t819399007 *)L_8))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.U2D.SpriteAtlasManager::PostRegisteredAtlas(UnityEngine.U2D.SpriteAtlas)
extern "C" IL2CPP_METHOD_ATTR void SpriteAtlasManager_PostRegisteredAtlas_m3806600148 (RuntimeObject * __this /* static, unused */, SpriteAtlas_t646931412 * ___spriteAtlas0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SpriteAtlasManager_PostRegisteredAtlas_m3806600148_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(SpriteAtlasManager_t3158462485_il2cpp_TypeInfo_var);
		Action_1_t819399007 * L_0 = ((SpriteAtlasManager_t3158462485_StaticFields*)il2cpp_codegen_static_fields_for(SpriteAtlasManager_t3158462485_il2cpp_TypeInfo_var))->get_atlasRegistered_1();
		if (L_0)
		{
			goto IL_000d;
		}
	}
	{
		goto IL_0018;
	}

IL_000d:
	{
		IL2CPP_RUNTIME_CLASS_INIT(SpriteAtlasManager_t3158462485_il2cpp_TypeInfo_var);
		Action_1_t819399007 * L_1 = ((SpriteAtlasManager_t3158462485_StaticFields*)il2cpp_codegen_static_fields_for(SpriteAtlasManager_t3158462485_il2cpp_TypeInfo_var))->get_atlasRegistered_1();
		SpriteAtlas_t646931412 * L_2 = ___spriteAtlas0;
		NullCheck(L_1);
		Action_1_Invoke_m3071717786(L_1, L_2, /*hidden argument*/Action_1_Invoke_m3071717786_RuntimeMethod_var);
	}

IL_0018:
	{
		return;
	}
}
// System.Void UnityEngine.U2D.SpriteAtlasManager::Register(UnityEngine.U2D.SpriteAtlas)
extern "C" IL2CPP_METHOD_ATTR void SpriteAtlasManager_Register_m2413332465 (RuntimeObject * __this /* static, unused */, SpriteAtlas_t646931412 * ___spriteAtlas0, const RuntimeMethod* method)
{
	typedef void (*SpriteAtlasManager_Register_m2413332465_ftn) (SpriteAtlas_t646931412 *);
	static SpriteAtlasManager_Register_m2413332465_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (SpriteAtlasManager_Register_m2413332465_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.U2D.SpriteAtlasManager::Register(UnityEngine.U2D.SpriteAtlas)");
	_il2cpp_icall_func(___spriteAtlas0);
}
// System.Void UnityEngine.U2D.SpriteAtlasManager::.cctor()
extern "C" IL2CPP_METHOD_ATTR void SpriteAtlasManager__cctor_m3642741753 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SpriteAtlasManager__cctor_m3642741753_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		((SpriteAtlasManager_t3158462485_StaticFields*)il2cpp_codegen_static_fields_for(SpriteAtlasManager_t3158462485_il2cpp_TypeInfo_var))->set_atlasRequested_0((RequestAtlasCallback_t3100554279 *)NULL);
		((SpriteAtlasManager_t3158462485_StaticFields*)il2cpp_codegen_static_fields_for(SpriteAtlasManager_t3158462485_il2cpp_TypeInfo_var))->set_atlasRegistered_1((Action_1_t819399007 *)NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern "C"  void DelegatePInvokeWrapper_RequestAtlasCallback_t3100554279 (RequestAtlasCallback_t3100554279 * __this, String_t* ___tag0, Action_1_t819399007 * ___action1, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(char*, Il2CppMethodPointer);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Marshaling of parameter '___tag0' to native representation
	char* ____tag0_marshaled = NULL;
	____tag0_marshaled = il2cpp_codegen_marshal_string(___tag0);

	// Marshaling of parameter '___action1' to native representation
	Il2CppMethodPointer ____action1_marshaled = NULL;
	____action1_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___action1));

	// Native function invocation
	il2cppPInvokeFunc(____tag0_marshaled, ____action1_marshaled);

	// Marshaling cleanup of parameter '___tag0' native representation
	il2cpp_codegen_marshal_free(____tag0_marshaled);
	____tag0_marshaled = NULL;

}
// System.Void UnityEngine.U2D.SpriteAtlasManager/RequestAtlasCallback::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void RequestAtlasCallback__ctor_m3023745648 (RequestAtlasCallback_t3100554279 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.U2D.SpriteAtlasManager/RequestAtlasCallback::Invoke(System.String,System.Action`1<UnityEngine.U2D.SpriteAtlas>)
extern "C" IL2CPP_METHOD_ATTR void RequestAtlasCallback_Invoke_m378128467 (RequestAtlasCallback_t3100554279 * __this, String_t* ___tag0, Action_1_t819399007 * ___action1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((RuntimeMethod*)(__this->get_method_3()));
	DelegateU5BU5D_t1703627840* delegatesToInvoke = __this->get_delegates_11();
	if (delegatesToInvoke != NULL)
	{
		il2cpp_array_size_t length = delegatesToInvoke->max_length;
		for (il2cpp_array_size_t i = 0; i < length; i++)
		{
			Delegate_t1188392813* currentDelegate = (delegatesToInvoke)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
			Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
			RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
			RuntimeObject* targetThis = currentDelegate->get_m_target_2();
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
			bool ___methodIsStatic = MethodIsStatic(targetMethod);
			if (___methodIsStatic)
			{
				if (il2cpp_codegen_method_parameter_count(targetMethod) == 2)
				{
					// open
					{
						typedef void (*FunctionPointerType) (RuntimeObject *, String_t*, Action_1_t819399007 *, const RuntimeMethod*);
						((FunctionPointerType)targetMethodPointer)(NULL, ___tag0, ___action1, targetMethod);
					}
				}
				else
				{
					// closed
					{
						typedef void (*FunctionPointerType) (RuntimeObject *, void*, String_t*, Action_1_t819399007 *, const RuntimeMethod*);
						((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___tag0, ___action1, targetMethod);
					}
				}
			}
			else
			{
				if (il2cpp_codegen_method_parameter_count(targetMethod) == 2)
				{
					// closed
					if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
					{
						if (il2cpp_codegen_method_is_generic_instance(targetMethod))
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								GenericInterfaceActionInvoker2< String_t*, Action_1_t819399007 * >::Invoke(targetMethod, targetThis, ___tag0, ___action1);
							else
								GenericVirtActionInvoker2< String_t*, Action_1_t819399007 * >::Invoke(targetMethod, targetThis, ___tag0, ___action1);
						}
						else
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								InterfaceActionInvoker2< String_t*, Action_1_t819399007 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___tag0, ___action1);
							else
								VirtActionInvoker2< String_t*, Action_1_t819399007 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___tag0, ___action1);
						}
					}
					else
					{
						typedef void (*FunctionPointerType) (void*, String_t*, Action_1_t819399007 *, const RuntimeMethod*);
						((FunctionPointerType)targetMethodPointer)(targetThis, ___tag0, ___action1, targetMethod);
					}
				}
				else
				{
					// open
					if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
					{
						if (il2cpp_codegen_method_is_generic_instance(targetMethod))
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								GenericInterfaceActionInvoker1< Action_1_t819399007 * >::Invoke(targetMethod, ___tag0, ___action1);
							else
								GenericVirtActionInvoker1< Action_1_t819399007 * >::Invoke(targetMethod, ___tag0, ___action1);
						}
						else
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								InterfaceActionInvoker1< Action_1_t819399007 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___tag0, ___action1);
							else
								VirtActionInvoker1< Action_1_t819399007 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___tag0, ___action1);
						}
					}
					else
					{
						typedef void (*FunctionPointerType) (String_t*, Action_1_t819399007 *, const RuntimeMethod*);
						((FunctionPointerType)targetMethodPointer)(___tag0, ___action1, targetMethod);
					}
				}
			}
		}
	}
	else
	{
		Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
		RuntimeObject* targetThis = __this->get_m_target_2();
		il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		if (___methodIsStatic)
		{
			if (il2cpp_codegen_method_parameter_count(targetMethod) == 2)
			{
				// open
				{
					typedef void (*FunctionPointerType) (RuntimeObject *, String_t*, Action_1_t819399007 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(NULL, ___tag0, ___action1, targetMethod);
				}
			}
			else
			{
				// closed
				{
					typedef void (*FunctionPointerType) (RuntimeObject *, void*, String_t*, Action_1_t819399007 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___tag0, ___action1, targetMethod);
				}
			}
		}
		else
		{
			if (il2cpp_codegen_method_parameter_count(targetMethod) == 2)
			{
				// closed
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (il2cpp_codegen_method_is_generic_instance(targetMethod))
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							GenericInterfaceActionInvoker2< String_t*, Action_1_t819399007 * >::Invoke(targetMethod, targetThis, ___tag0, ___action1);
						else
							GenericVirtActionInvoker2< String_t*, Action_1_t819399007 * >::Invoke(targetMethod, targetThis, ___tag0, ___action1);
					}
					else
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							InterfaceActionInvoker2< String_t*, Action_1_t819399007 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___tag0, ___action1);
						else
							VirtActionInvoker2< String_t*, Action_1_t819399007 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___tag0, ___action1);
					}
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, String_t*, Action_1_t819399007 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___tag0, ___action1, targetMethod);
				}
			}
			else
			{
				// open
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (il2cpp_codegen_method_is_generic_instance(targetMethod))
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							GenericInterfaceActionInvoker1< Action_1_t819399007 * >::Invoke(targetMethod, ___tag0, ___action1);
						else
							GenericVirtActionInvoker1< Action_1_t819399007 * >::Invoke(targetMethod, ___tag0, ___action1);
					}
					else
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							InterfaceActionInvoker1< Action_1_t819399007 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___tag0, ___action1);
						else
							VirtActionInvoker1< Action_1_t819399007 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___tag0, ___action1);
					}
				}
				else
				{
					typedef void (*FunctionPointerType) (String_t*, Action_1_t819399007 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___tag0, ___action1, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult UnityEngine.U2D.SpriteAtlasManager/RequestAtlasCallback::BeginInvoke(System.String,System.Action`1<UnityEngine.U2D.SpriteAtlas>,System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* RequestAtlasCallback_BeginInvoke_m2655374249 (RequestAtlasCallback_t3100554279 * __this, String_t* ___tag0, Action_1_t819399007 * ___action1, AsyncCallback_t3962456242 * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = ___tag0;
	__d_args[1] = ___action1;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Void UnityEngine.U2D.SpriteAtlasManager/RequestAtlasCallback::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR void RequestAtlasCallback_EndInvoke_m2592639818 (RequestAtlasCallback_t3100554279 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.UnhandledExceptionHandler::RegisterUECatcher()
extern "C" IL2CPP_METHOD_ATTR void UnhandledExceptionHandler_RegisterUECatcher_m1350255469 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnhandledExceptionHandler_RegisterUECatcher_m1350255469_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	AppDomain_t1571427825 * G_B2_0 = NULL;
	AppDomain_t1571427825 * G_B1_0 = NULL;
	{
		AppDomain_t1571427825 * L_0 = AppDomain_get_CurrentDomain_m182766250(NULL /*static, unused*/, /*hidden argument*/NULL);
		UnhandledExceptionEventHandler_t3101989324 * L_1 = ((UnhandledExceptionHandler_t1162846485_StaticFields*)il2cpp_codegen_static_fields_for(UnhandledExceptionHandler_t1162846485_il2cpp_TypeInfo_var))->get_U3CU3Ef__mgU24cache0_0();
		G_B1_0 = L_0;
		if (L_1)
		{
			G_B2_0 = L_0;
			goto IL_001e;
		}
	}
	{
		intptr_t L_2 = (intptr_t)UnhandledExceptionHandler_HandleUnhandledException_m2430609357_RuntimeMethod_var;
		UnhandledExceptionEventHandler_t3101989324 * L_3 = (UnhandledExceptionEventHandler_t3101989324 *)il2cpp_codegen_object_new(UnhandledExceptionEventHandler_t3101989324_il2cpp_TypeInfo_var);
		UnhandledExceptionEventHandler__ctor_m626016213(L_3, NULL, (intptr_t)L_2, /*hidden argument*/NULL);
		((UnhandledExceptionHandler_t1162846485_StaticFields*)il2cpp_codegen_static_fields_for(UnhandledExceptionHandler_t1162846485_il2cpp_TypeInfo_var))->set_U3CU3Ef__mgU24cache0_0(L_3);
		G_B2_0 = G_B1_0;
	}

IL_001e:
	{
		UnhandledExceptionEventHandler_t3101989324 * L_4 = ((UnhandledExceptionHandler_t1162846485_StaticFields*)il2cpp_codegen_static_fields_for(UnhandledExceptionHandler_t1162846485_il2cpp_TypeInfo_var))->get_U3CU3Ef__mgU24cache0_0();
		NullCheck(G_B2_0);
		AppDomain_add_UnhandledException_m66698413(G_B2_0, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.UnhandledExceptionHandler::HandleUnhandledException(System.Object,System.UnhandledExceptionEventArgs)
extern "C" IL2CPP_METHOD_ATTR void UnhandledExceptionHandler_HandleUnhandledException_m2430609357 (RuntimeObject * __this /* static, unused */, RuntimeObject * ___sender0, UnhandledExceptionEventArgs_t2886101344 * ___args1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnhandledExceptionHandler_HandleUnhandledException_m2430609357_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t * V_0 = NULL;
	{
		UnhandledExceptionEventArgs_t2886101344 * L_0 = ___args1;
		NullCheck(L_0);
		RuntimeObject * L_1 = UnhandledExceptionEventArgs_get_ExceptionObject_m862578480(L_0, /*hidden argument*/NULL);
		V_0 = ((Exception_t *)IsInstClass((RuntimeObject*)L_1, Exception_t_il2cpp_TypeInfo_var));
		Exception_t * L_2 = V_0;
		if (!L_2)
		{
			goto IL_0041;
		}
	}
	{
		Exception_t * L_3 = V_0;
		UnhandledExceptionHandler_PrintException_m385608237(NULL /*static, unused*/, _stringLiteral1461556331, L_3, /*hidden argument*/NULL);
		Exception_t * L_4 = V_0;
		NullCheck(L_4);
		Type_t * L_5 = Exception_GetType_m2227967756(L_4, /*hidden argument*/NULL);
		NullCheck(L_5);
		String_t* L_6 = VirtFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, L_5);
		Exception_t * L_7 = V_0;
		NullCheck(L_7);
		String_t* L_8 = VirtFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_7);
		Exception_t * L_9 = V_0;
		NullCheck(L_9);
		String_t* L_10 = VirtFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Exception::get_StackTrace() */, L_9);
		UnhandledExceptionHandler_NativeUnhandledExceptionHandler_m2534568686(NULL /*static, unused*/, L_6, L_8, L_10, /*hidden argument*/NULL);
		goto IL_004b;
	}

IL_0041:
	{
		UnhandledExceptionHandler_NativeUnhandledExceptionHandler_m2534568686(NULL /*static, unused*/, (String_t*)NULL, (String_t*)NULL, (String_t*)NULL, /*hidden argument*/NULL);
	}

IL_004b:
	{
		return;
	}
}
// System.Void UnityEngine.UnhandledExceptionHandler::PrintException(System.String,System.Exception)
extern "C" IL2CPP_METHOD_ATTR void UnhandledExceptionHandler_PrintException_m385608237 (RuntimeObject * __this /* static, unused */, String_t* ___title0, Exception_t * ___e1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnhandledExceptionHandler_PrintException_m385608237_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Exception_t * L_0 = ___e1;
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_LogException_m2207318968(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		Exception_t * L_1 = ___e1;
		NullCheck(L_1);
		Exception_t * L_2 = Exception_get_InnerException_m3836775(L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0022;
		}
	}
	{
		Exception_t * L_3 = ___e1;
		NullCheck(L_3);
		Exception_t * L_4 = Exception_get_InnerException_m3836775(L_3, /*hidden argument*/NULL);
		UnhandledExceptionHandler_PrintException_m385608237(NULL /*static, unused*/, _stringLiteral2119111978, L_4, /*hidden argument*/NULL);
	}

IL_0022:
	{
		return;
	}
}
// System.Void UnityEngine.UnhandledExceptionHandler::NativeUnhandledExceptionHandler(System.String,System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR void UnhandledExceptionHandler_NativeUnhandledExceptionHandler_m2534568686 (RuntimeObject * __this /* static, unused */, String_t* ___managedExceptionType0, String_t* ___managedExceptionMessage1, String_t* ___managedExceptionStack2, const RuntimeMethod* method)
{
	typedef void (*UnhandledExceptionHandler_NativeUnhandledExceptionHandler_m2534568686_ftn) (String_t*, String_t*, String_t*);
	static UnhandledExceptionHandler_NativeUnhandledExceptionHandler_m2534568686_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (UnhandledExceptionHandler_NativeUnhandledExceptionHandler_m2534568686_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.UnhandledExceptionHandler::NativeUnhandledExceptionHandler(System.String,System.String,System.String)");
	_il2cpp_icall_func(___managedExceptionType0, ___managedExceptionMessage1, ___managedExceptionStack2);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.UnityAPICompatibilityVersionAttribute::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void UnityAPICompatibilityVersionAttribute__ctor_m3694175011 (UnityAPICompatibilityVersionAttribute_t3842027601 * __this, String_t* ___version0, const RuntimeMethod* method)
{
	{
		Attribute__ctor_m1529526131(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___version0;
		__this->set__version_0(L_0);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.UnityException::.ctor()
extern "C" IL2CPP_METHOD_ATTR void UnityException__ctor_m1456865679 (UnityException_t3598173660 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityException__ctor_m1456865679_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m1152696503(__this, _stringLiteral3595826494, /*hidden argument*/NULL);
		Exception_set_HResult_m3489164646(__this, ((int32_t)-2147467261), /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.UnityException::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void UnityException__ctor_m872329880 (UnityException_t3598173660 * __this, String_t* ___message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityException__ctor_m872329880_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___message0;
		IL2CPP_RUNTIME_CLASS_INIT(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m1152696503(__this, L_0, /*hidden argument*/NULL);
		Exception_set_HResult_m3489164646(__this, ((int32_t)-2147467261), /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.UnityException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" IL2CPP_METHOD_ATTR void UnityException__ctor_m170038890 (UnityException_t3598173660 * __this, SerializationInfo_t950877179 * ___info0, StreamingContext_t3711869237  ___context1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityException__ctor_m170038890_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		SerializationInfo_t950877179 * L_0 = ___info0;
		StreamingContext_t3711869237  L_1 = ___context1;
		IL2CPP_RUNTIME_CLASS_INIT(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m2499432361(__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.UnityLogWriter::.ctor()
extern "C" IL2CPP_METHOD_ATTR void UnityLogWriter__ctor_m1834616883 (UnityLogWriter_t1374348020 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityLogWriter__ctor_m1834616883_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(TextWriter_t3478189236_il2cpp_TypeInfo_var);
		TextWriter__ctor_m2859954372(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.UnityLogWriter::WriteStringToUnityLog(System.String)
extern "C" IL2CPP_METHOD_ATTR void UnityLogWriter_WriteStringToUnityLog_m2695353836 (RuntimeObject * __this /* static, unused */, String_t* ___s0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___s0;
		if (L_0)
		{
			goto IL_000c;
		}
	}
	{
		goto IL_0012;
	}

IL_000c:
	{
		String_t* L_1 = ___s0;
		UnityLogWriter_WriteStringToUnityLogImpl_m2026412198(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
	}

IL_0012:
	{
		return;
	}
}
// System.Void UnityEngine.UnityLogWriter::WriteStringToUnityLogImpl(System.String)
extern "C" IL2CPP_METHOD_ATTR void UnityLogWriter_WriteStringToUnityLogImpl_m2026412198 (RuntimeObject * __this /* static, unused */, String_t* ___s0, const RuntimeMethod* method)
{
	typedef void (*UnityLogWriter_WriteStringToUnityLogImpl_m2026412198_ftn) (String_t*);
	static UnityLogWriter_WriteStringToUnityLogImpl_m2026412198_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (UnityLogWriter_WriteStringToUnityLogImpl_m2026412198_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.UnityLogWriter::WriteStringToUnityLogImpl(System.String)");
	_il2cpp_icall_func(___s0);
}
// System.Void UnityEngine.UnityLogWriter::Init()
extern "C" IL2CPP_METHOD_ATTR void UnityLogWriter_Init_m3866572946 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityLogWriter_Init_m3866572946_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityLogWriter_t1374348020 * L_0 = (UnityLogWriter_t1374348020 *)il2cpp_codegen_object_new(UnityLogWriter_t1374348020_il2cpp_TypeInfo_var);
		UnityLogWriter__ctor_m1834616883(L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Console_t3208230065_il2cpp_TypeInfo_var);
		Console_SetOut_m286050082(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Text.Encoding UnityEngine.UnityLogWriter::get_Encoding()
extern "C" IL2CPP_METHOD_ATTR Encoding_t1523322056 * UnityLogWriter_get_Encoding_m798813894 (UnityLogWriter_t1374348020 * __this, const RuntimeMethod* method)
{
	Encoding_t1523322056 * V_0 = NULL;
	{
		Encoding_t1523322056 * L_0 = Encoding_get_UTF8_m1008486739(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_000c;
	}

IL_000c:
	{
		Encoding_t1523322056 * L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.UnityLogWriter::Write(System.Char)
extern "C" IL2CPP_METHOD_ATTR void UnityLogWriter_Write_m3542862483 (UnityLogWriter_t1374348020 * __this, Il2CppChar ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = Char_ToString_m3588025615((Il2CppChar*)(&___value0), /*hidden argument*/NULL);
		UnityLogWriter_WriteStringToUnityLog_m2695353836(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.UnityLogWriter::Write(System.String)
extern "C" IL2CPP_METHOD_ATTR void UnityLogWriter_Write_m345199408 (UnityLogWriter_t1374348020 * __this, String_t* ___s0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___s0;
		UnityLogWriter_WriteStringToUnityLog_m2695353836(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.UnityLogWriter::Write(System.Char[],System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void UnityLogWriter_Write_m3864776786 (UnityLogWriter_t1374348020 * __this, CharU5BU5D_t3528271667* ___buffer0, int32_t ___index1, int32_t ___count2, const RuntimeMethod* method)
{
	{
		CharU5BU5D_t3528271667* L_0 = ___buffer0;
		int32_t L_1 = ___index1;
		int32_t L_2 = ___count2;
		String_t* L_3 = String_CreateString_m860434552(NULL, L_0, L_1, L_2, /*hidden argument*/NULL);
		UnityLogWriter_WriteStringToUnityLogImpl_m2026412198(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.UnitySynchronizationContext::.ctor()
extern "C" IL2CPP_METHOD_ATTR void UnitySynchronizationContext__ctor_m1707488257 (UnitySynchronizationContext_t1887453786 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnitySynchronizationContext__ctor_m1707488257_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Queue_1_t1200778106 * L_0 = (Queue_1_t1200778106 *)il2cpp_codegen_object_new(Queue_1_t1200778106_il2cpp_TypeInfo_var);
		Queue_1__ctor_m1971992302(L_0, ((int32_t)20), /*hidden argument*/Queue_1__ctor_m1971992302_RuntimeMethod_var);
		__this->set_m_AsyncWorkQueue_0(L_0);
		Thread_t2300836069 * L_1 = Thread_get_CurrentThread_m4142136012(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_1);
		int32_t L_2 = Thread_get_ManagedThreadId_m1068113671(L_1, /*hidden argument*/NULL);
		__this->set_m_MainThreadID_1(L_2);
		SynchronizationContext__ctor_m2514243817(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.UnitySynchronizationContext::Send(System.Threading.SendOrPostCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR void UnitySynchronizationContext_Send_m1576085179 (UnitySynchronizationContext_t1887453786 * __this, SendOrPostCallback_t2750080073 * ___callback0, RuntimeObject * ___state1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnitySynchronizationContext_Send_m1576085179_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ManualResetEvent_t451242010 * V_0 = NULL;
	RuntimeObject * V_1 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
		int32_t L_0 = __this->get_m_MainThreadID_1();
		Thread_t2300836069 * L_1 = Thread_get_CurrentThread_m4142136012(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_1);
		int32_t L_2 = Thread_get_ManagedThreadId_m1068113671(L_1, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) == ((uint32_t)L_2))))
		{
			goto IL_0024;
		}
	}
	{
		SendOrPostCallback_t2750080073 * L_3 = ___callback0;
		RuntimeObject * L_4 = ___state1;
		NullCheck(L_3);
		SendOrPostCallback_Invoke_m937799800(L_3, L_4, /*hidden argument*/NULL);
		goto IL_0076;
	}

IL_0024:
	{
		ManualResetEvent_t451242010 * L_5 = (ManualResetEvent_t451242010 *)il2cpp_codegen_object_new(ManualResetEvent_t451242010_il2cpp_TypeInfo_var);
		ManualResetEvent__ctor_m4010886457(L_5, (bool)0, /*hidden argument*/NULL);
		V_0 = L_5;
	}

IL_002c:
	try
	{ // begin try (depth: 1)
		{
			Queue_1_t1200778106 * L_6 = __this->get_m_AsyncWorkQueue_0();
			V_1 = L_6;
			RuntimeObject * L_7 = V_1;
			Monitor_Enter_m2249409497(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
		}

IL_003a:
		try
		{ // begin try (depth: 2)
			Queue_1_t1200778106 * L_8 = __this->get_m_AsyncWorkQueue_0();
			SendOrPostCallback_t2750080073 * L_9 = ___callback0;
			RuntimeObject * L_10 = ___state1;
			ManualResetEvent_t451242010 * L_11 = V_0;
			WorkRequest_t1354518612  L_12;
			memset(&L_12, 0, sizeof(L_12));
			WorkRequest__ctor_m2665601953((&L_12), L_9, L_10, L_11, /*hidden argument*/NULL);
			NullCheck(L_8);
			Queue_1_Enqueue_m1592503047(L_8, L_12, /*hidden argument*/Queue_1_Enqueue_m1592503047_RuntimeMethod_var);
			IL2CPP_LEAVE(0x5B, FINALLY_0054);
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_0054;
		}

FINALLY_0054:
		{ // begin finally (depth: 2)
			RuntimeObject * L_13 = V_1;
			Monitor_Exit_m3585316909(NULL /*static, unused*/, L_13, /*hidden argument*/NULL);
			IL2CPP_END_FINALLY(84)
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(84)
		{
			IL2CPP_JUMP_TBL(0x5B, IL_005b)
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		}

IL_005b:
		{
			ManualResetEvent_t451242010 * L_14 = V_0;
			NullCheck(L_14);
			VirtFuncInvoker0< bool >::Invoke(10 /* System.Boolean System.Threading.WaitHandle::WaitOne() */, L_14);
			IL2CPP_LEAVE(0x75, FINALLY_0068);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0068;
	}

FINALLY_0068:
	{ // begin finally (depth: 1)
		{
			ManualResetEvent_t451242010 * L_15 = V_0;
			if (!L_15)
			{
				goto IL_0074;
			}
		}

IL_006e:
		{
			ManualResetEvent_t451242010 * L_16 = V_0;
			NullCheck(L_16);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, L_16);
		}

IL_0074:
		{
			IL2CPP_END_FINALLY(104)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(104)
	{
		IL2CPP_JUMP_TBL(0x75, IL_0075)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0075:
	{
	}

IL_0076:
	{
		return;
	}
}
// System.Void UnityEngine.UnitySynchronizationContext::Post(System.Threading.SendOrPostCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR void UnitySynchronizationContext_Post_m3076014349 (UnitySynchronizationContext_t1887453786 * __this, SendOrPostCallback_t2750080073 * ___callback0, RuntimeObject * ___state1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnitySynchronizationContext_Post_m3076014349_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
		Queue_1_t1200778106 * L_0 = __this->get_m_AsyncWorkQueue_0();
		V_0 = L_0;
		RuntimeObject * L_1 = V_0;
		Monitor_Enter_m2249409497(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		Queue_1_t1200778106 * L_2 = __this->get_m_AsyncWorkQueue_0();
		SendOrPostCallback_t2750080073 * L_3 = ___callback0;
		RuntimeObject * L_4 = ___state1;
		WorkRequest_t1354518612  L_5;
		memset(&L_5, 0, sizeof(L_5));
		WorkRequest__ctor_m2665601953((&L_5), L_3, L_4, (ManualResetEvent_t451242010 *)NULL, /*hidden argument*/NULL);
		NullCheck(L_2);
		Queue_1_Enqueue_m1592503047(L_2, L_5, /*hidden argument*/Queue_1_Enqueue_m1592503047_RuntimeMethod_var);
		IL2CPP_LEAVE(0x2F, FINALLY_0028);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0028;
	}

FINALLY_0028:
	{ // begin finally (depth: 1)
		RuntimeObject * L_6 = V_0;
		Monitor_Exit_m3585316909(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(40)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(40)
	{
		IL2CPP_JUMP_TBL(0x2F, IL_002f)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_002f:
	{
		return;
	}
}
// System.Void UnityEngine.UnitySynchronizationContext::Exec()
extern "C" IL2CPP_METHOD_ATTR void UnitySynchronizationContext_Exec_m3359802660 (UnitySynchronizationContext_t1887453786 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnitySynchronizationContext_Exec_m3359802660_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	WorkRequest_t1354518612  V_3;
	memset(&V_3, 0, sizeof(V_3));
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
		Queue_1_t1200778106 * L_0 = __this->get_m_AsyncWorkQueue_0();
		V_0 = L_0;
		RuntimeObject * L_1 = V_0;
		Monitor_Enter_m2249409497(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			Queue_1_t1200778106 * L_2 = __this->get_m_AsyncWorkQueue_0();
			NullCheck(L_2);
			int32_t L_3 = Queue_1_get_Count_m3368911732(L_2, /*hidden argument*/Queue_1_get_Count_m3368911732_RuntimeMethod_var);
			V_1 = L_3;
			V_2 = 0;
			goto IL_003b;
		}

IL_0022:
		{
			Queue_1_t1200778106 * L_4 = __this->get_m_AsyncWorkQueue_0();
			NullCheck(L_4);
			WorkRequest_t1354518612  L_5 = Queue_1_Dequeue_m979967976(L_4, /*hidden argument*/Queue_1_Dequeue_m979967976_RuntimeMethod_var);
			V_3 = L_5;
			WorkRequest_Invoke_m3488164927((WorkRequest_t1354518612 *)(&V_3), /*hidden argument*/NULL);
			int32_t L_6 = V_2;
			V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)1));
		}

IL_003b:
		{
			int32_t L_7 = V_2;
			int32_t L_8 = V_1;
			if ((((int32_t)L_7) < ((int32_t)L_8)))
			{
				goto IL_0022;
			}
		}

IL_0042:
		{
			IL2CPP_LEAVE(0x4F, FINALLY_0048);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0048;
	}

FINALLY_0048:
	{ // begin finally (depth: 1)
		RuntimeObject * L_9 = V_0;
		Monitor_Exit_m3585316909(NULL /*static, unused*/, L_9, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(72)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(72)
	{
		IL2CPP_JUMP_TBL(0x4F, IL_004f)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_004f:
	{
		return;
	}
}
// System.Void UnityEngine.UnitySynchronizationContext::InitializeSynchronizationContext()
extern "C" IL2CPP_METHOD_ATTR void UnitySynchronizationContext_InitializeSynchronizationContext_m3217591031 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnitySynchronizationContext_InitializeSynchronizationContext_m3217591031_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		SynchronizationContext_t2326897723 * L_0 = SynchronizationContext_get_Current_m3666546046(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0015;
		}
	}
	{
		UnitySynchronizationContext_t1887453786 * L_1 = (UnitySynchronizationContext_t1887453786 *)il2cpp_codegen_object_new(UnitySynchronizationContext_t1887453786_il2cpp_TypeInfo_var);
		UnitySynchronizationContext__ctor_m1707488257(L_1, /*hidden argument*/NULL);
		SynchronizationContext_SetSynchronizationContext_m1249070039(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
	}

IL_0015:
	{
		return;
	}
}
// System.Void UnityEngine.UnitySynchronizationContext::ExecuteTasks()
extern "C" IL2CPP_METHOD_ATTR void UnitySynchronizationContext_ExecuteTasks_m1310741010 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnitySynchronizationContext_ExecuteTasks_m1310741010_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	UnitySynchronizationContext_t1887453786 * V_0 = NULL;
	{
		SynchronizationContext_t2326897723 * L_0 = SynchronizationContext_get_Current_m3666546046(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = ((UnitySynchronizationContext_t1887453786 *)IsInstSealed((RuntimeObject*)L_0, UnitySynchronizationContext_t1887453786_il2cpp_TypeInfo_var));
		UnitySynchronizationContext_t1887453786 * L_1 = V_0;
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		UnitySynchronizationContext_t1887453786 * L_2 = V_0;
		NullCheck(L_2);
		UnitySynchronizationContext_Exec_m3359802660(L_2, /*hidden argument*/NULL);
	}

IL_0018:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: UnityEngine.UnitySynchronizationContext/WorkRequest
extern "C" void WorkRequest_t1354518612_marshal_pinvoke(const WorkRequest_t1354518612& unmarshaled, WorkRequest_t1354518612_marshaled_pinvoke& marshaled)
{
	Exception_t* ___m_WaitHandle_2Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_WaitHandle' of type 'WorkRequest': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_WaitHandle_2Exception, NULL, NULL);
}
extern "C" void WorkRequest_t1354518612_marshal_pinvoke_back(const WorkRequest_t1354518612_marshaled_pinvoke& marshaled, WorkRequest_t1354518612& unmarshaled)
{
	Exception_t* ___m_WaitHandle_2Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_WaitHandle' of type 'WorkRequest': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_WaitHandle_2Exception, NULL, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.UnitySynchronizationContext/WorkRequest
extern "C" void WorkRequest_t1354518612_marshal_pinvoke_cleanup(WorkRequest_t1354518612_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.UnitySynchronizationContext/WorkRequest
extern "C" void WorkRequest_t1354518612_marshal_com(const WorkRequest_t1354518612& unmarshaled, WorkRequest_t1354518612_marshaled_com& marshaled)
{
	Exception_t* ___m_WaitHandle_2Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_WaitHandle' of type 'WorkRequest': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_WaitHandle_2Exception, NULL, NULL);
}
extern "C" void WorkRequest_t1354518612_marshal_com_back(const WorkRequest_t1354518612_marshaled_com& marshaled, WorkRequest_t1354518612& unmarshaled)
{
	Exception_t* ___m_WaitHandle_2Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_WaitHandle' of type 'WorkRequest': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_WaitHandle_2Exception, NULL, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.UnitySynchronizationContext/WorkRequest
extern "C" void WorkRequest_t1354518612_marshal_com_cleanup(WorkRequest_t1354518612_marshaled_com& marshaled)
{
}
// System.Void UnityEngine.UnitySynchronizationContext/WorkRequest::.ctor(System.Threading.SendOrPostCallback,System.Object,System.Threading.ManualResetEvent)
extern "C" IL2CPP_METHOD_ATTR void WorkRequest__ctor_m2665601953 (WorkRequest_t1354518612 * __this, SendOrPostCallback_t2750080073 * ___callback0, RuntimeObject * ___state1, ManualResetEvent_t451242010 * ___waitHandle2, const RuntimeMethod* method)
{
	{
		SendOrPostCallback_t2750080073 * L_0 = ___callback0;
		__this->set_m_DelagateCallback_0(L_0);
		RuntimeObject * L_1 = ___state1;
		__this->set_m_DelagateState_1(L_1);
		ManualResetEvent_t451242010 * L_2 = ___waitHandle2;
		__this->set_m_WaitHandle_2(L_2);
		return;
	}
}
extern "C"  void WorkRequest__ctor_m2665601953_AdjustorThunk (RuntimeObject * __this, SendOrPostCallback_t2750080073 * ___callback0, RuntimeObject * ___state1, ManualResetEvent_t451242010 * ___waitHandle2, const RuntimeMethod* method)
{
	WorkRequest_t1354518612 * _thisAdjusted = reinterpret_cast<WorkRequest_t1354518612 *>(__this + 1);
	WorkRequest__ctor_m2665601953(_thisAdjusted, ___callback0, ___state1, ___waitHandle2, method);
}
// System.Void UnityEngine.UnitySynchronizationContext/WorkRequest::Invoke()
extern "C" IL2CPP_METHOD_ATTR void WorkRequest_Invoke_m3488164927 (WorkRequest_t1354518612 * __this, const RuntimeMethod* method)
{
	{
		SendOrPostCallback_t2750080073 * L_0 = __this->get_m_DelagateCallback_0();
		RuntimeObject * L_1 = __this->get_m_DelagateState_1();
		NullCheck(L_0);
		SendOrPostCallback_Invoke_m937799800(L_0, L_1, /*hidden argument*/NULL);
		ManualResetEvent_t451242010 * L_2 = __this->get_m_WaitHandle_2();
		if (!L_2)
		{
			goto IL_0029;
		}
	}
	{
		ManualResetEvent_t451242010 * L_3 = __this->get_m_WaitHandle_2();
		NullCheck(L_3);
		EventWaitHandle_Set_m2445193251(L_3, /*hidden argument*/NULL);
	}

IL_0029:
	{
		return;
	}
}
extern "C"  void WorkRequest_Invoke_m3488164927_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	WorkRequest_t1354518612 * _thisAdjusted = reinterpret_cast<WorkRequest_t1354518612 *>(__this + 1);
	WorkRequest_Invoke_m3488164927(_thisAdjusted, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR void Vector2__ctor_m3970636864 (Vector2_t2156229523 * __this, float ___x0, float ___y1, const RuntimeMethod* method)
{
	{
		float L_0 = ___x0;
		__this->set_x_0(L_0);
		float L_1 = ___y1;
		__this->set_y_1(L_1);
		return;
	}
}
extern "C"  void Vector2__ctor_m3970636864_AdjustorThunk (RuntimeObject * __this, float ___x0, float ___y1, const RuntimeMethod* method)
{
	Vector2_t2156229523 * _thisAdjusted = reinterpret_cast<Vector2_t2156229523 *>(__this + 1);
	Vector2__ctor_m3970636864(_thisAdjusted, ___x0, ___y1, method);
}
// System.Single UnityEngine.Vector2::get_Item(System.Int32)
extern "C" IL2CPP_METHOD_ATTR float Vector2_get_Item_m3559215723 (Vector2_t2156229523 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Vector2_get_Item_m3559215723_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		int32_t L_0 = ___index0;
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		int32_t L_1 = ___index0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_001f;
		}
	}
	{
		goto IL_002b;
	}

IL_0013:
	{
		float L_2 = __this->get_x_0();
		V_0 = L_2;
		goto IL_0036;
	}

IL_001f:
	{
		float L_3 = __this->get_y_1();
		V_0 = L_3;
		goto IL_0036;
	}

IL_002b:
	{
		IndexOutOfRangeException_t1578797820 * L_4 = (IndexOutOfRangeException_t1578797820 *)il2cpp_codegen_object_new(IndexOutOfRangeException_t1578797820_il2cpp_TypeInfo_var);
		IndexOutOfRangeException__ctor_m3408750441(L_4, _stringLiteral2662230418, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, NULL, Vector2_get_Item_m3559215723_RuntimeMethod_var);
	}

IL_0036:
	{
		float L_5 = V_0;
		return L_5;
	}
}
extern "C"  float Vector2_get_Item_m3559215723_AdjustorThunk (RuntimeObject * __this, int32_t ___index0, const RuntimeMethod* method)
{
	Vector2_t2156229523 * _thisAdjusted = reinterpret_cast<Vector2_t2156229523 *>(__this + 1);
	return Vector2_get_Item_m3559215723(_thisAdjusted, ___index0, method);
}
// System.Void UnityEngine.Vector2::set_Item(System.Int32,System.Single)
extern "C" IL2CPP_METHOD_ATTR void Vector2_set_Item_m3557490725 (Vector2_t2156229523 * __this, int32_t ___index0, float ___value1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Vector2_set_Item_m3557490725_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___index0;
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		int32_t L_1 = ___index0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_001f;
		}
	}
	{
		goto IL_002b;
	}

IL_0013:
	{
		float L_2 = ___value1;
		__this->set_x_0(L_2);
		goto IL_0036;
	}

IL_001f:
	{
		float L_3 = ___value1;
		__this->set_y_1(L_3);
		goto IL_0036;
	}

IL_002b:
	{
		IndexOutOfRangeException_t1578797820 * L_4 = (IndexOutOfRangeException_t1578797820 *)il2cpp_codegen_object_new(IndexOutOfRangeException_t1578797820_il2cpp_TypeInfo_var);
		IndexOutOfRangeException__ctor_m3408750441(L_4, _stringLiteral2662230418, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, NULL, Vector2_set_Item_m3557490725_RuntimeMethod_var);
	}

IL_0036:
	{
		return;
	}
}
extern "C"  void Vector2_set_Item_m3557490725_AdjustorThunk (RuntimeObject * __this, int32_t ___index0, float ___value1, const RuntimeMethod* method)
{
	Vector2_t2156229523 * _thisAdjusted = reinterpret_cast<Vector2_t2156229523 *>(__this + 1);
	Vector2_set_Item_m3557490725(_thisAdjusted, ___index0, ___value1, method);
}
// UnityEngine.Vector2 UnityEngine.Vector2::Scale(UnityEngine.Vector2,UnityEngine.Vector2)
extern "C" IL2CPP_METHOD_ATTR Vector2_t2156229523  Vector2_Scale_m165605769 (RuntimeObject * __this /* static, unused */, Vector2_t2156229523  ___a0, Vector2_t2156229523  ___b1, const RuntimeMethod* method)
{
	Vector2_t2156229523  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		float L_0 = (&___a0)->get_x_0();
		float L_1 = (&___b1)->get_x_0();
		float L_2 = (&___a0)->get_y_1();
		float L_3 = (&___b1)->get_y_1();
		Vector2_t2156229523  L_4;
		memset(&L_4, 0, sizeof(L_4));
		Vector2__ctor_m3970636864((&L_4), ((float)il2cpp_codegen_multiply((float)L_0, (float)L_1)), ((float)il2cpp_codegen_multiply((float)L_2, (float)L_3)), /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_002a;
	}

IL_002a:
	{
		Vector2_t2156229523  L_5 = V_0;
		return L_5;
	}
}
// System.String UnityEngine.Vector2::ToString()
extern "C" IL2CPP_METHOD_ATTR String_t* Vector2_ToString_m1205609053 (Vector2_t2156229523 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Vector2_ToString_m1205609053_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		ObjectU5BU5D_t2843939325* L_0 = (ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t2843939325* L_1 = L_0;
		float L_2 = __this->get_x_0();
		float L_3 = L_2;
		RuntimeObject * L_4 = Box(Single_t1397266774_il2cpp_TypeInfo_var, &L_3);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_4);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_4);
		ObjectU5BU5D_t2843939325* L_5 = L_1;
		float L_6 = __this->get_y_1();
		float L_7 = L_6;
		RuntimeObject * L_8 = Box(Single_t1397266774_il2cpp_TypeInfo_var, &L_7);
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_8);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_8);
		String_t* L_9 = UnityString_Format_m261690510(NULL /*static, unused*/, _stringLiteral2738543532, L_5, /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0033;
	}

IL_0033:
	{
		String_t* L_10 = V_0;
		return L_10;
	}
}
extern "C"  String_t* Vector2_ToString_m1205609053_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	Vector2_t2156229523 * _thisAdjusted = reinterpret_cast<Vector2_t2156229523 *>(__this + 1);
	return Vector2_ToString_m1205609053(_thisAdjusted, method);
}
// System.Int32 UnityEngine.Vector2::GetHashCode()
extern "C" IL2CPP_METHOD_ATTR int32_t Vector2_GetHashCode_m3916089713 (Vector2_t2156229523 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		float* L_0 = __this->get_address_of_x_0();
		int32_t L_1 = Single_GetHashCode_m1558506138((float*)L_0, /*hidden argument*/NULL);
		float* L_2 = __this->get_address_of_y_1();
		int32_t L_3 = Single_GetHashCode_m1558506138((float*)L_2, /*hidden argument*/NULL);
		V_0 = ((int32_t)((int32_t)L_1^(int32_t)((int32_t)((int32_t)L_3<<(int32_t)2))));
		goto IL_002c;
	}

IL_002c:
	{
		int32_t L_4 = V_0;
		return L_4;
	}
}
extern "C"  int32_t Vector2_GetHashCode_m3916089713_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	Vector2_t2156229523 * _thisAdjusted = reinterpret_cast<Vector2_t2156229523 *>(__this + 1);
	return Vector2_GetHashCode_m3916089713(_thisAdjusted, method);
}
// System.Boolean UnityEngine.Vector2::Equals(System.Object)
extern "C" IL2CPP_METHOD_ATTR bool Vector2_Equals_m832062989 (Vector2_t2156229523 * __this, RuntimeObject * ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Vector2_Equals_m832062989_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		RuntimeObject * L_0 = ___other0;
		if (((RuntimeObject *)IsInstSealed((RuntimeObject*)L_0, Vector2_t2156229523_il2cpp_TypeInfo_var)))
		{
			goto IL_0013;
		}
	}
	{
		V_0 = (bool)0;
		goto IL_0025;
	}

IL_0013:
	{
		RuntimeObject * L_1 = ___other0;
		bool L_2 = Vector2_Equals_m1313188271((Vector2_t2156229523 *)__this, ((*(Vector2_t2156229523 *)((Vector2_t2156229523 *)UnBox(L_1, Vector2_t2156229523_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		V_0 = L_2;
		goto IL_0025;
	}

IL_0025:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
extern "C"  bool Vector2_Equals_m832062989_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___other0, const RuntimeMethod* method)
{
	Vector2_t2156229523 * _thisAdjusted = reinterpret_cast<Vector2_t2156229523 *>(__this + 1);
	return Vector2_Equals_m832062989(_thisAdjusted, ___other0, method);
}
// System.Boolean UnityEngine.Vector2::Equals(UnityEngine.Vector2)
extern "C" IL2CPP_METHOD_ATTR bool Vector2_Equals_m1313188271 (Vector2_t2156229523 * __this, Vector2_t2156229523  ___other0, const RuntimeMethod* method)
{
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		float* L_0 = __this->get_address_of_x_0();
		float L_1 = (&___other0)->get_x_0();
		bool L_2 = Single_Equals_m1601893879((float*)L_0, L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_002c;
		}
	}
	{
		float* L_3 = __this->get_address_of_y_1();
		float L_4 = (&___other0)->get_y_1();
		bool L_5 = Single_Equals_m1601893879((float*)L_3, L_4, /*hidden argument*/NULL);
		G_B3_0 = ((int32_t)(L_5));
		goto IL_002d;
	}

IL_002c:
	{
		G_B3_0 = 0;
	}

IL_002d:
	{
		V_0 = (bool)G_B3_0;
		goto IL_0033;
	}

IL_0033:
	{
		bool L_6 = V_0;
		return L_6;
	}
}
extern "C"  bool Vector2_Equals_m1313188271_AdjustorThunk (RuntimeObject * __this, Vector2_t2156229523  ___other0, const RuntimeMethod* method)
{
	Vector2_t2156229523 * _thisAdjusted = reinterpret_cast<Vector2_t2156229523 *>(__this + 1);
	return Vector2_Equals_m1313188271(_thisAdjusted, ___other0, method);
}
// System.Single UnityEngine.Vector2::Dot(UnityEngine.Vector2,UnityEngine.Vector2)
extern "C" IL2CPP_METHOD_ATTR float Vector2_Dot_m1554553447 (RuntimeObject * __this /* static, unused */, Vector2_t2156229523  ___lhs0, Vector2_t2156229523  ___rhs1, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		float L_0 = (&___lhs0)->get_x_0();
		float L_1 = (&___rhs1)->get_x_0();
		float L_2 = (&___lhs0)->get_y_1();
		float L_3 = (&___rhs1)->get_y_1();
		V_0 = ((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)L_0, (float)L_1)), (float)((float)il2cpp_codegen_multiply((float)L_2, (float)L_3))));
		goto IL_0026;
	}

IL_0026:
	{
		float L_4 = V_0;
		return L_4;
	}
}
// System.Single UnityEngine.Vector2::get_magnitude()
extern "C" IL2CPP_METHOD_ATTR float Vector2_get_magnitude_m2752892833 (Vector2_t2156229523 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Vector2_get_magnitude_m2752892833_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		float L_0 = __this->get_x_0();
		float L_1 = __this->get_x_0();
		float L_2 = __this->get_y_1();
		float L_3 = __this->get_y_1();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		float L_4 = sqrtf(((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)L_0, (float)L_1)), (float)((float)il2cpp_codegen_multiply((float)L_2, (float)L_3)))));
		V_0 = L_4;
		goto IL_0027;
	}

IL_0027:
	{
		float L_5 = V_0;
		return L_5;
	}
}
extern "C"  float Vector2_get_magnitude_m2752892833_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	Vector2_t2156229523 * _thisAdjusted = reinterpret_cast<Vector2_t2156229523 *>(__this + 1);
	return Vector2_get_magnitude_m2752892833(_thisAdjusted, method);
}
// System.Single UnityEngine.Vector2::get_sqrMagnitude()
extern "C" IL2CPP_METHOD_ATTR float Vector2_get_sqrMagnitude_m837837635 (Vector2_t2156229523 * __this, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		float L_0 = __this->get_x_0();
		float L_1 = __this->get_x_0();
		float L_2 = __this->get_y_1();
		float L_3 = __this->get_y_1();
		V_0 = ((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)L_0, (float)L_1)), (float)((float)il2cpp_codegen_multiply((float)L_2, (float)L_3))));
		goto IL_0022;
	}

IL_0022:
	{
		float L_4 = V_0;
		return L_4;
	}
}
extern "C"  float Vector2_get_sqrMagnitude_m837837635_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	Vector2_t2156229523 * _thisAdjusted = reinterpret_cast<Vector2_t2156229523 *>(__this + 1);
	return Vector2_get_sqrMagnitude_m837837635(_thisAdjusted, method);
}
// UnityEngine.Vector2 UnityEngine.Vector2::op_Addition(UnityEngine.Vector2,UnityEngine.Vector2)
extern "C" IL2CPP_METHOD_ATTR Vector2_t2156229523  Vector2_op_Addition_m800700293 (RuntimeObject * __this /* static, unused */, Vector2_t2156229523  ___a0, Vector2_t2156229523  ___b1, const RuntimeMethod* method)
{
	Vector2_t2156229523  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		float L_0 = (&___a0)->get_x_0();
		float L_1 = (&___b1)->get_x_0();
		float L_2 = (&___a0)->get_y_1();
		float L_3 = (&___b1)->get_y_1();
		Vector2_t2156229523  L_4;
		memset(&L_4, 0, sizeof(L_4));
		Vector2__ctor_m3970636864((&L_4), ((float)il2cpp_codegen_add((float)L_0, (float)L_1)), ((float)il2cpp_codegen_add((float)L_2, (float)L_3)), /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_002a;
	}

IL_002a:
	{
		Vector2_t2156229523  L_5 = V_0;
		return L_5;
	}
}
// UnityEngine.Vector2 UnityEngine.Vector2::op_Subtraction(UnityEngine.Vector2,UnityEngine.Vector2)
extern "C" IL2CPP_METHOD_ATTR Vector2_t2156229523  Vector2_op_Subtraction_m73004381 (RuntimeObject * __this /* static, unused */, Vector2_t2156229523  ___a0, Vector2_t2156229523  ___b1, const RuntimeMethod* method)
{
	Vector2_t2156229523  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		float L_0 = (&___a0)->get_x_0();
		float L_1 = (&___b1)->get_x_0();
		float L_2 = (&___a0)->get_y_1();
		float L_3 = (&___b1)->get_y_1();
		Vector2_t2156229523  L_4;
		memset(&L_4, 0, sizeof(L_4));
		Vector2__ctor_m3970636864((&L_4), ((float)il2cpp_codegen_subtract((float)L_0, (float)L_1)), ((float)il2cpp_codegen_subtract((float)L_2, (float)L_3)), /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_002a;
	}

IL_002a:
	{
		Vector2_t2156229523  L_5 = V_0;
		return L_5;
	}
}
// UnityEngine.Vector2 UnityEngine.Vector2::op_Multiply(UnityEngine.Vector2,System.Single)
extern "C" IL2CPP_METHOD_ATTR Vector2_t2156229523  Vector2_op_Multiply_m2347887432 (RuntimeObject * __this /* static, unused */, Vector2_t2156229523  ___a0, float ___d1, const RuntimeMethod* method)
{
	Vector2_t2156229523  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		float L_0 = (&___a0)->get_x_0();
		float L_1 = ___d1;
		float L_2 = (&___a0)->get_y_1();
		float L_3 = ___d1;
		Vector2_t2156229523  L_4;
		memset(&L_4, 0, sizeof(L_4));
		Vector2__ctor_m3970636864((&L_4), ((float)il2cpp_codegen_multiply((float)L_0, (float)L_1)), ((float)il2cpp_codegen_multiply((float)L_2, (float)L_3)), /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_001e;
	}

IL_001e:
	{
		Vector2_t2156229523  L_5 = V_0;
		return L_5;
	}
}
// UnityEngine.Vector2 UnityEngine.Vector2::op_Multiply(System.Single,UnityEngine.Vector2)
extern "C" IL2CPP_METHOD_ATTR Vector2_t2156229523  Vector2_op_Multiply_m3294489634 (RuntimeObject * __this /* static, unused */, float ___d0, Vector2_t2156229523  ___a1, const RuntimeMethod* method)
{
	Vector2_t2156229523  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		float L_0 = (&___a1)->get_x_0();
		float L_1 = ___d0;
		float L_2 = (&___a1)->get_y_1();
		float L_3 = ___d0;
		Vector2_t2156229523  L_4;
		memset(&L_4, 0, sizeof(L_4));
		Vector2__ctor_m3970636864((&L_4), ((float)il2cpp_codegen_multiply((float)L_0, (float)L_1)), ((float)il2cpp_codegen_multiply((float)L_2, (float)L_3)), /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_001e;
	}

IL_001e:
	{
		Vector2_t2156229523  L_5 = V_0;
		return L_5;
	}
}
// UnityEngine.Vector2 UnityEngine.Vector2::op_Division(UnityEngine.Vector2,System.Single)
extern "C" IL2CPP_METHOD_ATTR Vector2_t2156229523  Vector2_op_Division_m132623573 (RuntimeObject * __this /* static, unused */, Vector2_t2156229523  ___a0, float ___d1, const RuntimeMethod* method)
{
	Vector2_t2156229523  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		float L_0 = (&___a0)->get_x_0();
		float L_1 = ___d1;
		float L_2 = (&___a0)->get_y_1();
		float L_3 = ___d1;
		Vector2_t2156229523  L_4;
		memset(&L_4, 0, sizeof(L_4));
		Vector2__ctor_m3970636864((&L_4), ((float)((float)L_0/(float)L_1)), ((float)((float)L_2/(float)L_3)), /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_001e;
	}

IL_001e:
	{
		Vector2_t2156229523  L_5 = V_0;
		return L_5;
	}
}
// System.Boolean UnityEngine.Vector2::op_Equality(UnityEngine.Vector2,UnityEngine.Vector2)
extern "C" IL2CPP_METHOD_ATTR bool Vector2_op_Equality_m2303255133 (RuntimeObject * __this /* static, unused */, Vector2_t2156229523  ___lhs0, Vector2_t2156229523  ___rhs1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Vector2_op_Equality_m2303255133_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t2156229523  V_0;
	memset(&V_0, 0, sizeof(V_0));
	bool V_1 = false;
	{
		Vector2_t2156229523  L_0 = ___lhs0;
		Vector2_t2156229523  L_1 = ___rhs1;
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_t2156229523_il2cpp_TypeInfo_var);
		Vector2_t2156229523  L_2 = Vector2_op_Subtraction_m73004381(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		float L_3 = Vector2_get_sqrMagnitude_m837837635((Vector2_t2156229523 *)(&V_0), /*hidden argument*/NULL);
		V_1 = (bool)((((float)L_3) < ((float)(9.99999944E-11f)))? 1 : 0);
		goto IL_001d;
	}

IL_001d:
	{
		bool L_4 = V_1;
		return L_4;
	}
}
// System.Boolean UnityEngine.Vector2::op_Inequality(UnityEngine.Vector2,UnityEngine.Vector2)
extern "C" IL2CPP_METHOD_ATTR bool Vector2_op_Inequality_m3858779880 (RuntimeObject * __this /* static, unused */, Vector2_t2156229523  ___lhs0, Vector2_t2156229523  ___rhs1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Vector2_op_Inequality_m3858779880_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		Vector2_t2156229523  L_0 = ___lhs0;
		Vector2_t2156229523  L_1 = ___rhs1;
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_t2156229523_il2cpp_TypeInfo_var);
		bool L_2 = Vector2_op_Equality_m2303255133(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		V_0 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		goto IL_0011;
	}

IL_0011:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
// UnityEngine.Vector2 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR Vector2_t2156229523  Vector2_op_Implicit_m4260192859 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  ___v0, const RuntimeMethod* method)
{
	Vector2_t2156229523  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		float L_0 = (&___v0)->get_x_2();
		float L_1 = (&___v0)->get_y_3();
		Vector2_t2156229523  L_2;
		memset(&L_2, 0, sizeof(L_2));
		Vector2__ctor_m3970636864((&L_2), L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		goto IL_001a;
	}

IL_001a:
	{
		Vector2_t2156229523  L_3 = V_0;
		return L_3;
	}
}
// UnityEngine.Vector3 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector2)
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Vector2_op_Implicit_m1860157806 (RuntimeObject * __this /* static, unused */, Vector2_t2156229523  ___v0, const RuntimeMethod* method)
{
	Vector3_t3722313464  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		float L_0 = (&___v0)->get_x_0();
		float L_1 = (&___v0)->get_y_1();
		Vector3_t3722313464  L_2;
		memset(&L_2, 0, sizeof(L_2));
		Vector3__ctor_m3353183577((&L_2), L_0, L_1, (0.0f), /*hidden argument*/NULL);
		V_0 = L_2;
		goto IL_001f;
	}

IL_001f:
	{
		Vector3_t3722313464  L_3 = V_0;
		return L_3;
	}
}
// UnityEngine.Vector2 UnityEngine.Vector2::get_zero()
extern "C" IL2CPP_METHOD_ATTR Vector2_t2156229523  Vector2_get_zero_m540426400 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Vector2_get_zero_m540426400_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t2156229523  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_t2156229523_il2cpp_TypeInfo_var);
		Vector2_t2156229523  L_0 = ((Vector2_t2156229523_StaticFields*)il2cpp_codegen_static_fields_for(Vector2_t2156229523_il2cpp_TypeInfo_var))->get_zeroVector_2();
		V_0 = L_0;
		goto IL_000c;
	}

IL_000c:
	{
		Vector2_t2156229523  L_1 = V_0;
		return L_1;
	}
}
// UnityEngine.Vector2 UnityEngine.Vector2::get_one()
extern "C" IL2CPP_METHOD_ATTR Vector2_t2156229523  Vector2_get_one_m738793577 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Vector2_get_one_m738793577_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t2156229523  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_t2156229523_il2cpp_TypeInfo_var);
		Vector2_t2156229523  L_0 = ((Vector2_t2156229523_StaticFields*)il2cpp_codegen_static_fields_for(Vector2_t2156229523_il2cpp_TypeInfo_var))->get_oneVector_3();
		V_0 = L_0;
		goto IL_000c;
	}

IL_000c:
	{
		Vector2_t2156229523  L_1 = V_0;
		return L_1;
	}
}
// UnityEngine.Vector2 UnityEngine.Vector2::get_up()
extern "C" IL2CPP_METHOD_ATTR Vector2_t2156229523  Vector2_get_up_m2647420593 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Vector2_get_up_m2647420593_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t2156229523  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_t2156229523_il2cpp_TypeInfo_var);
		Vector2_t2156229523  L_0 = ((Vector2_t2156229523_StaticFields*)il2cpp_codegen_static_fields_for(Vector2_t2156229523_il2cpp_TypeInfo_var))->get_upVector_4();
		V_0 = L_0;
		goto IL_000c;
	}

IL_000c:
	{
		Vector2_t2156229523  L_1 = V_0;
		return L_1;
	}
}
// UnityEngine.Vector2 UnityEngine.Vector2::get_right()
extern "C" IL2CPP_METHOD_ATTR Vector2_t2156229523  Vector2_get_right_m1027081661 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Vector2_get_right_m1027081661_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t2156229523  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_t2156229523_il2cpp_TypeInfo_var);
		Vector2_t2156229523  L_0 = ((Vector2_t2156229523_StaticFields*)il2cpp_codegen_static_fields_for(Vector2_t2156229523_il2cpp_TypeInfo_var))->get_rightVector_7();
		V_0 = L_0;
		goto IL_000c;
	}

IL_000c:
	{
		Vector2_t2156229523  L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Vector2::.cctor()
extern "C" IL2CPP_METHOD_ATTR void Vector2__cctor_m2108982652 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Vector2__cctor_m2108982652_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Vector2_t2156229523  L_0;
		memset(&L_0, 0, sizeof(L_0));
		Vector2__ctor_m3970636864((&L_0), (0.0f), (0.0f), /*hidden argument*/NULL);
		((Vector2_t2156229523_StaticFields*)il2cpp_codegen_static_fields_for(Vector2_t2156229523_il2cpp_TypeInfo_var))->set_zeroVector_2(L_0);
		Vector2_t2156229523  L_1;
		memset(&L_1, 0, sizeof(L_1));
		Vector2__ctor_m3970636864((&L_1), (1.0f), (1.0f), /*hidden argument*/NULL);
		((Vector2_t2156229523_StaticFields*)il2cpp_codegen_static_fields_for(Vector2_t2156229523_il2cpp_TypeInfo_var))->set_oneVector_3(L_1);
		Vector2_t2156229523  L_2;
		memset(&L_2, 0, sizeof(L_2));
		Vector2__ctor_m3970636864((&L_2), (0.0f), (1.0f), /*hidden argument*/NULL);
		((Vector2_t2156229523_StaticFields*)il2cpp_codegen_static_fields_for(Vector2_t2156229523_il2cpp_TypeInfo_var))->set_upVector_4(L_2);
		Vector2_t2156229523  L_3;
		memset(&L_3, 0, sizeof(L_3));
		Vector2__ctor_m3970636864((&L_3), (0.0f), (-1.0f), /*hidden argument*/NULL);
		((Vector2_t2156229523_StaticFields*)il2cpp_codegen_static_fields_for(Vector2_t2156229523_il2cpp_TypeInfo_var))->set_downVector_5(L_3);
		Vector2_t2156229523  L_4;
		memset(&L_4, 0, sizeof(L_4));
		Vector2__ctor_m3970636864((&L_4), (-1.0f), (0.0f), /*hidden argument*/NULL);
		((Vector2_t2156229523_StaticFields*)il2cpp_codegen_static_fields_for(Vector2_t2156229523_il2cpp_TypeInfo_var))->set_leftVector_6(L_4);
		Vector2_t2156229523  L_5;
		memset(&L_5, 0, sizeof(L_5));
		Vector2__ctor_m3970636864((&L_5), (1.0f), (0.0f), /*hidden argument*/NULL);
		((Vector2_t2156229523_StaticFields*)il2cpp_codegen_static_fields_for(Vector2_t2156229523_il2cpp_TypeInfo_var))->set_rightVector_7(L_5);
		Vector2_t2156229523  L_6;
		memset(&L_6, 0, sizeof(L_6));
		Vector2__ctor_m3970636864((&L_6), (std::numeric_limits<float>::infinity()), (std::numeric_limits<float>::infinity()), /*hidden argument*/NULL);
		((Vector2_t2156229523_StaticFields*)il2cpp_codegen_static_fields_for(Vector2_t2156229523_il2cpp_TypeInfo_var))->set_positiveInfinityVector_8(L_6);
		Vector2_t2156229523  L_7;
		memset(&L_7, 0, sizeof(L_7));
		Vector2__ctor_m3970636864((&L_7), (-std::numeric_limits<float>::infinity()), (-std::numeric_limits<float>::infinity()), /*hidden argument*/NULL);
		((Vector2_t2156229523_StaticFields*)il2cpp_codegen_static_fields_for(Vector2_t2156229523_il2cpp_TypeInfo_var))->set_negativeInfinityVector_9(L_7);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR void Vector3__ctor_m3353183577 (Vector3_t3722313464 * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method)
{
	{
		float L_0 = ___x0;
		__this->set_x_2(L_0);
		float L_1 = ___y1;
		__this->set_y_3(L_1);
		float L_2 = ___z2;
		__this->set_z_4(L_2);
		return;
	}
}
extern "C"  void Vector3__ctor_m3353183577_AdjustorThunk (RuntimeObject * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method)
{
	Vector3_t3722313464 * _thisAdjusted = reinterpret_cast<Vector3_t3722313464 *>(__this + 1);
	Vector3__ctor_m3353183577(_thisAdjusted, ___x0, ___y1, ___z2, method);
}
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR void Vector3__ctor_m1719387948 (Vector3_t3722313464 * __this, float ___x0, float ___y1, const RuntimeMethod* method)
{
	{
		float L_0 = ___x0;
		__this->set_x_2(L_0);
		float L_1 = ___y1;
		__this->set_y_3(L_1);
		__this->set_z_4((0.0f));
		return;
	}
}
extern "C"  void Vector3__ctor_m1719387948_AdjustorThunk (RuntimeObject * __this, float ___x0, float ___y1, const RuntimeMethod* method)
{
	Vector3_t3722313464 * _thisAdjusted = reinterpret_cast<Vector3_t3722313464 *>(__this + 1);
	Vector3__ctor_m1719387948(_thisAdjusted, ___x0, ___y1, method);
}
// UnityEngine.Vector3 UnityEngine.Vector3::Lerp(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Vector3_Lerp_m407887542 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  ___a0, Vector3_t3722313464  ___b1, float ___t2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Vector3_Lerp_m407887542_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t3722313464  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		float L_0 = ___t2;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		float L_1 = Mathf_Clamp01_m56433566(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		___t2 = L_1;
		float L_2 = (&___a0)->get_x_2();
		float L_3 = (&___b1)->get_x_2();
		float L_4 = (&___a0)->get_x_2();
		float L_5 = ___t2;
		float L_6 = (&___a0)->get_y_3();
		float L_7 = (&___b1)->get_y_3();
		float L_8 = (&___a0)->get_y_3();
		float L_9 = ___t2;
		float L_10 = (&___a0)->get_z_4();
		float L_11 = (&___b1)->get_z_4();
		float L_12 = (&___a0)->get_z_4();
		float L_13 = ___t2;
		Vector3_t3722313464  L_14;
		memset(&L_14, 0, sizeof(L_14));
		Vector3__ctor_m3353183577((&L_14), ((float)il2cpp_codegen_add((float)L_2, (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_3, (float)L_4)), (float)L_5)))), ((float)il2cpp_codegen_add((float)L_6, (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_7, (float)L_8)), (float)L_9)))), ((float)il2cpp_codegen_add((float)L_10, (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_11, (float)L_12)), (float)L_13)))), /*hidden argument*/NULL);
		V_0 = L_14;
		goto IL_005f;
	}

IL_005f:
	{
		Vector3_t3722313464  L_15 = V_0;
		return L_15;
	}
}
// System.Single UnityEngine.Vector3::get_Item(System.Int32)
extern "C" IL2CPP_METHOD_ATTR float Vector3_get_Item_m668685504 (Vector3_t3722313464 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Vector3_get_Item_m668685504_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		int32_t L_0 = ___index0;
		switch (L_0)
		{
			case 0:
			{
				goto IL_0018;
			}
			case 1:
			{
				goto IL_0024;
			}
			case 2:
			{
				goto IL_0030;
			}
		}
	}
	{
		goto IL_003c;
	}

IL_0018:
	{
		float L_1 = __this->get_x_2();
		V_0 = L_1;
		goto IL_0047;
	}

IL_0024:
	{
		float L_2 = __this->get_y_3();
		V_0 = L_2;
		goto IL_0047;
	}

IL_0030:
	{
		float L_3 = __this->get_z_4();
		V_0 = L_3;
		goto IL_0047;
	}

IL_003c:
	{
		IndexOutOfRangeException_t1578797820 * L_4 = (IndexOutOfRangeException_t1578797820 *)il2cpp_codegen_object_new(IndexOutOfRangeException_t1578797820_il2cpp_TypeInfo_var);
		IndexOutOfRangeException__ctor_m3408750441(L_4, _stringLiteral3966192333, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, NULL, Vector3_get_Item_m668685504_RuntimeMethod_var);
	}

IL_0047:
	{
		float L_5 = V_0;
		return L_5;
	}
}
extern "C"  float Vector3_get_Item_m668685504_AdjustorThunk (RuntimeObject * __this, int32_t ___index0, const RuntimeMethod* method)
{
	Vector3_t3722313464 * _thisAdjusted = reinterpret_cast<Vector3_t3722313464 *>(__this + 1);
	return Vector3_get_Item_m668685504(_thisAdjusted, ___index0, method);
}
// System.Void UnityEngine.Vector3::set_Item(System.Int32,System.Single)
extern "C" IL2CPP_METHOD_ATTR void Vector3_set_Item_m1772472431 (Vector3_t3722313464 * __this, int32_t ___index0, float ___value1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Vector3_set_Item_m1772472431_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___index0;
		switch (L_0)
		{
			case 0:
			{
				goto IL_0018;
			}
			case 1:
			{
				goto IL_0024;
			}
			case 2:
			{
				goto IL_0030;
			}
		}
	}
	{
		goto IL_003c;
	}

IL_0018:
	{
		float L_1 = ___value1;
		__this->set_x_2(L_1);
		goto IL_0047;
	}

IL_0024:
	{
		float L_2 = ___value1;
		__this->set_y_3(L_2);
		goto IL_0047;
	}

IL_0030:
	{
		float L_3 = ___value1;
		__this->set_z_4(L_3);
		goto IL_0047;
	}

IL_003c:
	{
		IndexOutOfRangeException_t1578797820 * L_4 = (IndexOutOfRangeException_t1578797820 *)il2cpp_codegen_object_new(IndexOutOfRangeException_t1578797820_il2cpp_TypeInfo_var);
		IndexOutOfRangeException__ctor_m3408750441(L_4, _stringLiteral3966192333, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, NULL, Vector3_set_Item_m1772472431_RuntimeMethod_var);
	}

IL_0047:
	{
		return;
	}
}
extern "C"  void Vector3_set_Item_m1772472431_AdjustorThunk (RuntimeObject * __this, int32_t ___index0, float ___value1, const RuntimeMethod* method)
{
	Vector3_t3722313464 * _thisAdjusted = reinterpret_cast<Vector3_t3722313464 *>(__this + 1);
	Vector3_set_Item_m1772472431(_thisAdjusted, ___index0, ___value1, method);
}
// UnityEngine.Vector3 UnityEngine.Vector3::Cross(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Vector3_Cross_m418170344 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  ___lhs0, Vector3_t3722313464  ___rhs1, const RuntimeMethod* method)
{
	Vector3_t3722313464  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		float L_0 = (&___lhs0)->get_y_3();
		float L_1 = (&___rhs1)->get_z_4();
		float L_2 = (&___lhs0)->get_z_4();
		float L_3 = (&___rhs1)->get_y_3();
		float L_4 = (&___lhs0)->get_z_4();
		float L_5 = (&___rhs1)->get_x_2();
		float L_6 = (&___lhs0)->get_x_2();
		float L_7 = (&___rhs1)->get_z_4();
		float L_8 = (&___lhs0)->get_x_2();
		float L_9 = (&___rhs1)->get_y_3();
		float L_10 = (&___lhs0)->get_y_3();
		float L_11 = (&___rhs1)->get_x_2();
		Vector3_t3722313464  L_12;
		memset(&L_12, 0, sizeof(L_12));
		Vector3__ctor_m3353183577((&L_12), ((float)il2cpp_codegen_subtract((float)((float)il2cpp_codegen_multiply((float)L_0, (float)L_1)), (float)((float)il2cpp_codegen_multiply((float)L_2, (float)L_3)))), ((float)il2cpp_codegen_subtract((float)((float)il2cpp_codegen_multiply((float)L_4, (float)L_5)), (float)((float)il2cpp_codegen_multiply((float)L_6, (float)L_7)))), ((float)il2cpp_codegen_subtract((float)((float)il2cpp_codegen_multiply((float)L_8, (float)L_9)), (float)((float)il2cpp_codegen_multiply((float)L_10, (float)L_11)))), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0069;
	}

IL_0069:
	{
		Vector3_t3722313464  L_13 = V_0;
		return L_13;
	}
}
// System.Int32 UnityEngine.Vector3::GetHashCode()
extern "C" IL2CPP_METHOD_ATTR int32_t Vector3_GetHashCode_m2879461828 (Vector3_t3722313464 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		float* L_0 = __this->get_address_of_x_2();
		int32_t L_1 = Single_GetHashCode_m1558506138((float*)L_0, /*hidden argument*/NULL);
		float* L_2 = __this->get_address_of_y_3();
		int32_t L_3 = Single_GetHashCode_m1558506138((float*)L_2, /*hidden argument*/NULL);
		float* L_4 = __this->get_address_of_z_4();
		int32_t L_5 = Single_GetHashCode_m1558506138((float*)L_4, /*hidden argument*/NULL);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)L_1^(int32_t)((int32_t)((int32_t)L_3<<(int32_t)2))))^(int32_t)((int32_t)((int32_t)L_5>>(int32_t)2))));
		goto IL_0040;
	}

IL_0040:
	{
		int32_t L_6 = V_0;
		return L_6;
	}
}
extern "C"  int32_t Vector3_GetHashCode_m2879461828_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	Vector3_t3722313464 * _thisAdjusted = reinterpret_cast<Vector3_t3722313464 *>(__this + 1);
	return Vector3_GetHashCode_m2879461828(_thisAdjusted, method);
}
// System.Boolean UnityEngine.Vector3::Equals(System.Object)
extern "C" IL2CPP_METHOD_ATTR bool Vector3_Equals_m1753054704 (Vector3_t3722313464 * __this, RuntimeObject * ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Vector3_Equals_m1753054704_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		RuntimeObject * L_0 = ___other0;
		if (((RuntimeObject *)IsInstSealed((RuntimeObject*)L_0, Vector3_t3722313464_il2cpp_TypeInfo_var)))
		{
			goto IL_0013;
		}
	}
	{
		V_0 = (bool)0;
		goto IL_0025;
	}

IL_0013:
	{
		RuntimeObject * L_1 = ___other0;
		bool L_2 = Vector3_Equals_m906392898((Vector3_t3722313464 *)__this, ((*(Vector3_t3722313464 *)((Vector3_t3722313464 *)UnBox(L_1, Vector3_t3722313464_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		V_0 = L_2;
		goto IL_0025;
	}

IL_0025:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
extern "C"  bool Vector3_Equals_m1753054704_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___other0, const RuntimeMethod* method)
{
	Vector3_t3722313464 * _thisAdjusted = reinterpret_cast<Vector3_t3722313464 *>(__this + 1);
	return Vector3_Equals_m1753054704(_thisAdjusted, ___other0, method);
}
// System.Boolean UnityEngine.Vector3::Equals(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR bool Vector3_Equals_m906392898 (Vector3_t3722313464 * __this, Vector3_t3722313464  ___other0, const RuntimeMethod* method)
{
	bool V_0 = false;
	int32_t G_B4_0 = 0;
	{
		float* L_0 = __this->get_address_of_x_2();
		float L_1 = (&___other0)->get_x_2();
		bool L_2 = Single_Equals_m1601893879((float*)L_0, L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0043;
		}
	}
	{
		float* L_3 = __this->get_address_of_y_3();
		float L_4 = (&___other0)->get_y_3();
		bool L_5 = Single_Equals_m1601893879((float*)L_3, L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0043;
		}
	}
	{
		float* L_6 = __this->get_address_of_z_4();
		float L_7 = (&___other0)->get_z_4();
		bool L_8 = Single_Equals_m1601893879((float*)L_6, L_7, /*hidden argument*/NULL);
		G_B4_0 = ((int32_t)(L_8));
		goto IL_0044;
	}

IL_0043:
	{
		G_B4_0 = 0;
	}

IL_0044:
	{
		V_0 = (bool)G_B4_0;
		goto IL_004a;
	}

IL_004a:
	{
		bool L_9 = V_0;
		return L_9;
	}
}
extern "C"  bool Vector3_Equals_m906392898_AdjustorThunk (RuntimeObject * __this, Vector3_t3722313464  ___other0, const RuntimeMethod* method)
{
	Vector3_t3722313464 * _thisAdjusted = reinterpret_cast<Vector3_t3722313464 *>(__this + 1);
	return Vector3_Equals_m906392898(_thisAdjusted, ___other0, method);
}
// UnityEngine.Vector3 UnityEngine.Vector3::Normalize(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Vector3_Normalize_m2941713846 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Vector3_Normalize_m2941713846_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	Vector3_t3722313464  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		Vector3_t3722313464  L_0 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		float L_1 = Vector3_Magnitude_m3447562852(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		float L_2 = V_0;
		if ((!(((float)L_2) > ((float)(1.0E-05f)))))
		{
			goto IL_0020;
		}
	}
	{
		Vector3_t3722313464  L_3 = ___value0;
		float L_4 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_5 = Vector3_op_Division_m510815599(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		V_1 = L_5;
		goto IL_002b;
	}

IL_0020:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_6 = Vector3_get_zero_m1409827619(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_1 = L_6;
		goto IL_002b;
	}

IL_002b:
	{
		Vector3_t3722313464  L_7 = V_1;
		return L_7;
	}
}
// UnityEngine.Vector3 UnityEngine.Vector3::get_normalized()
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Vector3_get_normalized_m2454957984 (Vector3_t3722313464 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Vector3_get_normalized_m2454957984_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t3722313464  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_0 = Vector3_Normalize_m2941713846(NULL /*static, unused*/, (*(Vector3_t3722313464 *)__this), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_0012;
	}

IL_0012:
	{
		Vector3_t3722313464  L_1 = V_0;
		return L_1;
	}
}
extern "C"  Vector3_t3722313464  Vector3_get_normalized_m2454957984_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	Vector3_t3722313464 * _thisAdjusted = reinterpret_cast<Vector3_t3722313464 *>(__this + 1);
	return Vector3_get_normalized_m2454957984(_thisAdjusted, method);
}
// System.Single UnityEngine.Vector3::Dot(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR float Vector3_Dot_m606404487 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  ___lhs0, Vector3_t3722313464  ___rhs1, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		float L_0 = (&___lhs0)->get_x_2();
		float L_1 = (&___rhs1)->get_x_2();
		float L_2 = (&___lhs0)->get_y_3();
		float L_3 = (&___rhs1)->get_y_3();
		float L_4 = (&___lhs0)->get_z_4();
		float L_5 = (&___rhs1)->get_z_4();
		V_0 = ((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)L_0, (float)L_1)), (float)((float)il2cpp_codegen_multiply((float)L_2, (float)L_3)))), (float)((float)il2cpp_codegen_multiply((float)L_4, (float)L_5))));
		goto IL_0036;
	}

IL_0036:
	{
		float L_6 = V_0;
		return L_6;
	}
}
// System.Single UnityEngine.Vector3::Angle(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR float Vector3_Angle_m3731191531 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  ___from0, Vector3_t3722313464  ___to1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Vector3_Angle_m3731191531_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	{
		float L_0 = Vector3_get_sqrMagnitude_m1474274574((Vector3_t3722313464 *)(&___from0), /*hidden argument*/NULL);
		float L_1 = Vector3_get_sqrMagnitude_m1474274574((Vector3_t3722313464 *)(&___to1), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		float L_2 = sqrtf(((float)il2cpp_codegen_multiply((float)L_0, (float)L_1)));
		V_0 = L_2;
		float L_3 = V_0;
		if ((!(((float)L_3) < ((float)(1.0E-15f)))))
		{
			goto IL_002c;
		}
	}
	{
		V_1 = (0.0f);
		goto IL_0057;
	}

IL_002c:
	{
		Vector3_t3722313464  L_4 = ___from0;
		Vector3_t3722313464  L_5 = ___to1;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		float L_6 = Vector3_Dot_m606404487(NULL /*static, unused*/, L_4, L_5, /*hidden argument*/NULL);
		float L_7 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		float L_8 = Mathf_Clamp_m3350697880(NULL /*static, unused*/, ((float)((float)L_6/(float)L_7)), (-1.0f), (1.0f), /*hidden argument*/NULL);
		V_2 = L_8;
		float L_9 = V_2;
		float L_10 = acosf(L_9);
		V_1 = ((float)il2cpp_codegen_multiply((float)L_10, (float)(57.29578f)));
		goto IL_0057;
	}

IL_0057:
	{
		float L_11 = V_1;
		return L_11;
	}
}
// System.Single UnityEngine.Vector3::Distance(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR float Vector3_Distance_m886789632 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  ___a0, Vector3_t3722313464  ___b1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Vector3_Distance_m886789632_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t3722313464  V_0;
	memset(&V_0, 0, sizeof(V_0));
	float V_1 = 0.0f;
	{
		float L_0 = (&___a0)->get_x_2();
		float L_1 = (&___b1)->get_x_2();
		float L_2 = (&___a0)->get_y_3();
		float L_3 = (&___b1)->get_y_3();
		float L_4 = (&___a0)->get_z_4();
		float L_5 = (&___b1)->get_z_4();
		Vector3__ctor_m3353183577((Vector3_t3722313464 *)(&V_0), ((float)il2cpp_codegen_subtract((float)L_0, (float)L_1)), ((float)il2cpp_codegen_subtract((float)L_2, (float)L_3)), ((float)il2cpp_codegen_subtract((float)L_4, (float)L_5)), /*hidden argument*/NULL);
		float L_6 = (&V_0)->get_x_2();
		float L_7 = (&V_0)->get_x_2();
		float L_8 = (&V_0)->get_y_3();
		float L_9 = (&V_0)->get_y_3();
		float L_10 = (&V_0)->get_z_4();
		float L_11 = (&V_0)->get_z_4();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		float L_12 = sqrtf(((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)L_6, (float)L_7)), (float)((float)il2cpp_codegen_multiply((float)L_8, (float)L_9)))), (float)((float)il2cpp_codegen_multiply((float)L_10, (float)L_11)))));
		V_1 = L_12;
		goto IL_006f;
	}

IL_006f:
	{
		float L_13 = V_1;
		return L_13;
	}
}
// System.Single UnityEngine.Vector3::Magnitude(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR float Vector3_Magnitude_m3447562852 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  ___vector0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Vector3_Magnitude_m3447562852_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		float L_0 = (&___vector0)->get_x_2();
		float L_1 = (&___vector0)->get_x_2();
		float L_2 = (&___vector0)->get_y_3();
		float L_3 = (&___vector0)->get_y_3();
		float L_4 = (&___vector0)->get_z_4();
		float L_5 = (&___vector0)->get_z_4();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		float L_6 = sqrtf(((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)L_0, (float)L_1)), (float)((float)il2cpp_codegen_multiply((float)L_2, (float)L_3)))), (float)((float)il2cpp_codegen_multiply((float)L_4, (float)L_5)))));
		V_0 = L_6;
		goto IL_003b;
	}

IL_003b:
	{
		float L_7 = V_0;
		return L_7;
	}
}
// System.Single UnityEngine.Vector3::get_magnitude()
extern "C" IL2CPP_METHOD_ATTR float Vector3_get_magnitude_m27958459 (Vector3_t3722313464 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Vector3_get_magnitude_m27958459_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		float L_0 = __this->get_x_2();
		float L_1 = __this->get_x_2();
		float L_2 = __this->get_y_3();
		float L_3 = __this->get_y_3();
		float L_4 = __this->get_z_4();
		float L_5 = __this->get_z_4();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		float L_6 = sqrtf(((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)L_0, (float)L_1)), (float)((float)il2cpp_codegen_multiply((float)L_2, (float)L_3)))), (float)((float)il2cpp_codegen_multiply((float)L_4, (float)L_5)))));
		V_0 = L_6;
		goto IL_0035;
	}

IL_0035:
	{
		float L_7 = V_0;
		return L_7;
	}
}
extern "C"  float Vector3_get_magnitude_m27958459_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	Vector3_t3722313464 * _thisAdjusted = reinterpret_cast<Vector3_t3722313464 *>(__this + 1);
	return Vector3_get_magnitude_m27958459(_thisAdjusted, method);
}
// System.Single UnityEngine.Vector3::SqrMagnitude(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR float Vector3_SqrMagnitude_m3025115945 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  ___vector0, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		float L_0 = (&___vector0)->get_x_2();
		float L_1 = (&___vector0)->get_x_2();
		float L_2 = (&___vector0)->get_y_3();
		float L_3 = (&___vector0)->get_y_3();
		float L_4 = (&___vector0)->get_z_4();
		float L_5 = (&___vector0)->get_z_4();
		V_0 = ((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)L_0, (float)L_1)), (float)((float)il2cpp_codegen_multiply((float)L_2, (float)L_3)))), (float)((float)il2cpp_codegen_multiply((float)L_4, (float)L_5))));
		goto IL_0036;
	}

IL_0036:
	{
		float L_6 = V_0;
		return L_6;
	}
}
// System.Single UnityEngine.Vector3::get_sqrMagnitude()
extern "C" IL2CPP_METHOD_ATTR float Vector3_get_sqrMagnitude_m1474274574 (Vector3_t3722313464 * __this, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		float L_0 = __this->get_x_2();
		float L_1 = __this->get_x_2();
		float L_2 = __this->get_y_3();
		float L_3 = __this->get_y_3();
		float L_4 = __this->get_z_4();
		float L_5 = __this->get_z_4();
		V_0 = ((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)L_0, (float)L_1)), (float)((float)il2cpp_codegen_multiply((float)L_2, (float)L_3)))), (float)((float)il2cpp_codegen_multiply((float)L_4, (float)L_5))));
		goto IL_0030;
	}

IL_0030:
	{
		float L_6 = V_0;
		return L_6;
	}
}
extern "C"  float Vector3_get_sqrMagnitude_m1474274574_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	Vector3_t3722313464 * _thisAdjusted = reinterpret_cast<Vector3_t3722313464 *>(__this + 1);
	return Vector3_get_sqrMagnitude_m1474274574(_thisAdjusted, method);
}
// UnityEngine.Vector3 UnityEngine.Vector3::Min(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Vector3_Min_m1803158933 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  ___lhs0, Vector3_t3722313464  ___rhs1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Vector3_Min_m1803158933_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t3722313464  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		float L_0 = (&___lhs0)->get_x_2();
		float L_1 = (&___rhs1)->get_x_2();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		float L_2 = Mathf_Min_m1073399594(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		float L_3 = (&___lhs0)->get_y_3();
		float L_4 = (&___rhs1)->get_y_3();
		float L_5 = Mathf_Min_m1073399594(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		float L_6 = (&___lhs0)->get_z_4();
		float L_7 = (&___rhs1)->get_z_4();
		float L_8 = Mathf_Min_m1073399594(NULL /*static, unused*/, L_6, L_7, /*hidden argument*/NULL);
		Vector3_t3722313464  L_9;
		memset(&L_9, 0, sizeof(L_9));
		Vector3__ctor_m3353183577((&L_9), L_2, L_5, L_8, /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0045;
	}

IL_0045:
	{
		Vector3_t3722313464  L_10 = V_0;
		return L_10;
	}
}
// UnityEngine.Vector3 UnityEngine.Vector3::Max(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Vector3_Max_m3304052994 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  ___lhs0, Vector3_t3722313464  ___rhs1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Vector3_Max_m3304052994_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t3722313464  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		float L_0 = (&___lhs0)->get_x_2();
		float L_1 = (&___rhs1)->get_x_2();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		float L_2 = Mathf_Max_m3146388979(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		float L_3 = (&___lhs0)->get_y_3();
		float L_4 = (&___rhs1)->get_y_3();
		float L_5 = Mathf_Max_m3146388979(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		float L_6 = (&___lhs0)->get_z_4();
		float L_7 = (&___rhs1)->get_z_4();
		float L_8 = Mathf_Max_m3146388979(NULL /*static, unused*/, L_6, L_7, /*hidden argument*/NULL);
		Vector3_t3722313464  L_9;
		memset(&L_9, 0, sizeof(L_9));
		Vector3__ctor_m3353183577((&L_9), L_2, L_5, L_8, /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0045;
	}

IL_0045:
	{
		Vector3_t3722313464  L_10 = V_0;
		return L_10;
	}
}
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Vector3_get_zero_m1409827619 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Vector3_get_zero_m1409827619_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t3722313464  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_0 = ((Vector3_t3722313464_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t3722313464_il2cpp_TypeInfo_var))->get_zeroVector_5();
		V_0 = L_0;
		goto IL_000c;
	}

IL_000c:
	{
		Vector3_t3722313464  L_1 = V_0;
		return L_1;
	}
}
// UnityEngine.Vector3 UnityEngine.Vector3::get_one()
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Vector3_get_one_m1629952498 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Vector3_get_one_m1629952498_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t3722313464  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_0 = ((Vector3_t3722313464_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t3722313464_il2cpp_TypeInfo_var))->get_oneVector_6();
		V_0 = L_0;
		goto IL_000c;
	}

IL_000c:
	{
		Vector3_t3722313464  L_1 = V_0;
		return L_1;
	}
}
// UnityEngine.Vector3 UnityEngine.Vector3::get_forward()
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Vector3_get_forward_m3100859705 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Vector3_get_forward_m3100859705_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t3722313464  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_0 = ((Vector3_t3722313464_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t3722313464_il2cpp_TypeInfo_var))->get_forwardVector_11();
		V_0 = L_0;
		goto IL_000c;
	}

IL_000c:
	{
		Vector3_t3722313464  L_1 = V_0;
		return L_1;
	}
}
// UnityEngine.Vector3 UnityEngine.Vector3::get_back()
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Vector3_get_back_m4077847766 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Vector3_get_back_m4077847766_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t3722313464  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_0 = ((Vector3_t3722313464_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t3722313464_il2cpp_TypeInfo_var))->get_backVector_12();
		V_0 = L_0;
		goto IL_000c;
	}

IL_000c:
	{
		Vector3_t3722313464  L_1 = V_0;
		return L_1;
	}
}
// UnityEngine.Vector3 UnityEngine.Vector3::get_up()
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Vector3_get_up_m3584168373 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Vector3_get_up_m3584168373_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t3722313464  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_0 = ((Vector3_t3722313464_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t3722313464_il2cpp_TypeInfo_var))->get_upVector_7();
		V_0 = L_0;
		goto IL_000c;
	}

IL_000c:
	{
		Vector3_t3722313464  L_1 = V_0;
		return L_1;
	}
}
// UnityEngine.Vector3 UnityEngine.Vector3::get_down()
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Vector3_get_down_m3781355428 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Vector3_get_down_m3781355428_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t3722313464  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_0 = ((Vector3_t3722313464_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t3722313464_il2cpp_TypeInfo_var))->get_downVector_8();
		V_0 = L_0;
		goto IL_000c;
	}

IL_000c:
	{
		Vector3_t3722313464  L_1 = V_0;
		return L_1;
	}
}
// UnityEngine.Vector3 UnityEngine.Vector3::get_left()
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Vector3_get_left_m2428419009 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Vector3_get_left_m2428419009_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t3722313464  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_0 = ((Vector3_t3722313464_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t3722313464_il2cpp_TypeInfo_var))->get_leftVector_9();
		V_0 = L_0;
		goto IL_000c;
	}

IL_000c:
	{
		Vector3_t3722313464  L_1 = V_0;
		return L_1;
	}
}
// UnityEngine.Vector3 UnityEngine.Vector3::get_right()
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Vector3_get_right_m1913784872 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Vector3_get_right_m1913784872_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t3722313464  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_0 = ((Vector3_t3722313464_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t3722313464_il2cpp_TypeInfo_var))->get_rightVector_10();
		V_0 = L_0;
		goto IL_000c;
	}

IL_000c:
	{
		Vector3_t3722313464  L_1 = V_0;
		return L_1;
	}
}
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Vector3_op_Addition_m779775034 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  ___a0, Vector3_t3722313464  ___b1, const RuntimeMethod* method)
{
	Vector3_t3722313464  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		float L_0 = (&___a0)->get_x_2();
		float L_1 = (&___b1)->get_x_2();
		float L_2 = (&___a0)->get_y_3();
		float L_3 = (&___b1)->get_y_3();
		float L_4 = (&___a0)->get_z_4();
		float L_5 = (&___b1)->get_z_4();
		Vector3_t3722313464  L_6;
		memset(&L_6, 0, sizeof(L_6));
		Vector3__ctor_m3353183577((&L_6), ((float)il2cpp_codegen_add((float)L_0, (float)L_1)), ((float)il2cpp_codegen_add((float)L_2, (float)L_3)), ((float)il2cpp_codegen_add((float)L_4, (float)L_5)), /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_0039;
	}

IL_0039:
	{
		Vector3_t3722313464  L_7 = V_0;
		return L_7;
	}
}
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Vector3_op_Subtraction_m3073674971 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  ___a0, Vector3_t3722313464  ___b1, const RuntimeMethod* method)
{
	Vector3_t3722313464  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		float L_0 = (&___a0)->get_x_2();
		float L_1 = (&___b1)->get_x_2();
		float L_2 = (&___a0)->get_y_3();
		float L_3 = (&___b1)->get_y_3();
		float L_4 = (&___a0)->get_z_4();
		float L_5 = (&___b1)->get_z_4();
		Vector3_t3722313464  L_6;
		memset(&L_6, 0, sizeof(L_6));
		Vector3__ctor_m3353183577((&L_6), ((float)il2cpp_codegen_subtract((float)L_0, (float)L_1)), ((float)il2cpp_codegen_subtract((float)L_2, (float)L_3)), ((float)il2cpp_codegen_subtract((float)L_4, (float)L_5)), /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_0039;
	}

IL_0039:
	{
		Vector3_t3722313464  L_7 = V_0;
		return L_7;
	}
}
// UnityEngine.Vector3 UnityEngine.Vector3::op_UnaryNegation(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Vector3_op_UnaryNegation_m1951478815 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  ___a0, const RuntimeMethod* method)
{
	Vector3_t3722313464  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		float L_0 = (&___a0)->get_x_2();
		float L_1 = (&___a0)->get_y_3();
		float L_2 = (&___a0)->get_z_4();
		Vector3_t3722313464  L_3;
		memset(&L_3, 0, sizeof(L_3));
		Vector3__ctor_m3353183577((&L_3), ((-L_0)), ((-L_1)), ((-L_2)), /*hidden argument*/NULL);
		V_0 = L_3;
		goto IL_0024;
	}

IL_0024:
	{
		Vector3_t3722313464  L_4 = V_0;
		return L_4;
	}
}
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Vector3_op_Multiply_m3376773913 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  ___a0, float ___d1, const RuntimeMethod* method)
{
	Vector3_t3722313464  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		float L_0 = (&___a0)->get_x_2();
		float L_1 = ___d1;
		float L_2 = (&___a0)->get_y_3();
		float L_3 = ___d1;
		float L_4 = (&___a0)->get_z_4();
		float L_5 = ___d1;
		Vector3_t3722313464  L_6;
		memset(&L_6, 0, sizeof(L_6));
		Vector3__ctor_m3353183577((&L_6), ((float)il2cpp_codegen_multiply((float)L_0, (float)L_1)), ((float)il2cpp_codegen_multiply((float)L_2, (float)L_3)), ((float)il2cpp_codegen_multiply((float)L_4, (float)L_5)), /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_0027;
	}

IL_0027:
	{
		Vector3_t3722313464  L_7 = V_0;
		return L_7;
	}
}
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(System.Single,UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Vector3_op_Multiply_m2104357790 (RuntimeObject * __this /* static, unused */, float ___d0, Vector3_t3722313464  ___a1, const RuntimeMethod* method)
{
	Vector3_t3722313464  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		float L_0 = (&___a1)->get_x_2();
		float L_1 = ___d0;
		float L_2 = (&___a1)->get_y_3();
		float L_3 = ___d0;
		float L_4 = (&___a1)->get_z_4();
		float L_5 = ___d0;
		Vector3_t3722313464  L_6;
		memset(&L_6, 0, sizeof(L_6));
		Vector3__ctor_m3353183577((&L_6), ((float)il2cpp_codegen_multiply((float)L_0, (float)L_1)), ((float)il2cpp_codegen_multiply((float)L_2, (float)L_3)), ((float)il2cpp_codegen_multiply((float)L_4, (float)L_5)), /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_0027;
	}

IL_0027:
	{
		Vector3_t3722313464  L_7 = V_0;
		return L_7;
	}
}
// UnityEngine.Vector3 UnityEngine.Vector3::op_Division(UnityEngine.Vector3,System.Single)
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Vector3_op_Division_m510815599 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  ___a0, float ___d1, const RuntimeMethod* method)
{
	Vector3_t3722313464  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		float L_0 = (&___a0)->get_x_2();
		float L_1 = ___d1;
		float L_2 = (&___a0)->get_y_3();
		float L_3 = ___d1;
		float L_4 = (&___a0)->get_z_4();
		float L_5 = ___d1;
		Vector3_t3722313464  L_6;
		memset(&L_6, 0, sizeof(L_6));
		Vector3__ctor_m3353183577((&L_6), ((float)((float)L_0/(float)L_1)), ((float)((float)L_2/(float)L_3)), ((float)((float)L_4/(float)L_5)), /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_0027;
	}

IL_0027:
	{
		Vector3_t3722313464  L_7 = V_0;
		return L_7;
	}
}
// System.Boolean UnityEngine.Vector3::op_Equality(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR bool Vector3_op_Equality_m4231250055 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  ___lhs0, Vector3_t3722313464  ___rhs1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Vector3_op_Equality_m4231250055_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		Vector3_t3722313464  L_0 = ___lhs0;
		Vector3_t3722313464  L_1 = ___rhs1;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_2 = Vector3_op_Subtraction_m3073674971(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		float L_3 = Vector3_SqrMagnitude_m3025115945(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		V_0 = (bool)((((float)L_3) < ((float)(9.99999944E-11f)))? 1 : 0);
		goto IL_001a;
	}

IL_001a:
	{
		bool L_4 = V_0;
		return L_4;
	}
}
// System.Boolean UnityEngine.Vector3::op_Inequality(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR bool Vector3_op_Inequality_m315980366 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  ___lhs0, Vector3_t3722313464  ___rhs1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Vector3_op_Inequality_m315980366_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		Vector3_t3722313464  L_0 = ___lhs0;
		Vector3_t3722313464  L_1 = ___rhs1;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		bool L_2 = Vector3_op_Equality_m4231250055(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		V_0 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		goto IL_0011;
	}

IL_0011:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
// System.String UnityEngine.Vector3::ToString()
extern "C" IL2CPP_METHOD_ATTR String_t* Vector3_ToString_m759076600 (Vector3_t3722313464 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Vector3_ToString_m759076600_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		ObjectU5BU5D_t2843939325* L_0 = (ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)3);
		ObjectU5BU5D_t2843939325* L_1 = L_0;
		float L_2 = __this->get_x_2();
		float L_3 = L_2;
		RuntimeObject * L_4 = Box(Single_t1397266774_il2cpp_TypeInfo_var, &L_3);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_4);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_4);
		ObjectU5BU5D_t2843939325* L_5 = L_1;
		float L_6 = __this->get_y_3();
		float L_7 = L_6;
		RuntimeObject * L_8 = Box(Single_t1397266774_il2cpp_TypeInfo_var, &L_7);
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_8);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_8);
		ObjectU5BU5D_t2843939325* L_9 = L_5;
		float L_10 = __this->get_z_4();
		float L_11 = L_10;
		RuntimeObject * L_12 = Box(Single_t1397266774_il2cpp_TypeInfo_var, &L_11);
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_12);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_12);
		String_t* L_13 = UnityString_Format_m261690510(NULL /*static, unused*/, _stringLiteral122510266, L_9, /*hidden argument*/NULL);
		V_0 = L_13;
		goto IL_0041;
	}

IL_0041:
	{
		String_t* L_14 = V_0;
		return L_14;
	}
}
extern "C"  String_t* Vector3_ToString_m759076600_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	Vector3_t3722313464 * _thisAdjusted = reinterpret_cast<Vector3_t3722313464 *>(__this + 1);
	return Vector3_ToString_m759076600(_thisAdjusted, method);
}
// System.Void UnityEngine.Vector3::.cctor()
extern "C" IL2CPP_METHOD_ATTR void Vector3__cctor_m2599650684 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Vector3__cctor_m2599650684_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Vector3_t3722313464  L_0;
		memset(&L_0, 0, sizeof(L_0));
		Vector3__ctor_m3353183577((&L_0), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		((Vector3_t3722313464_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t3722313464_il2cpp_TypeInfo_var))->set_zeroVector_5(L_0);
		Vector3_t3722313464  L_1;
		memset(&L_1, 0, sizeof(L_1));
		Vector3__ctor_m3353183577((&L_1), (1.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		((Vector3_t3722313464_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t3722313464_il2cpp_TypeInfo_var))->set_oneVector_6(L_1);
		Vector3_t3722313464  L_2;
		memset(&L_2, 0, sizeof(L_2));
		Vector3__ctor_m3353183577((&L_2), (0.0f), (1.0f), (0.0f), /*hidden argument*/NULL);
		((Vector3_t3722313464_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t3722313464_il2cpp_TypeInfo_var))->set_upVector_7(L_2);
		Vector3_t3722313464  L_3;
		memset(&L_3, 0, sizeof(L_3));
		Vector3__ctor_m3353183577((&L_3), (0.0f), (-1.0f), (0.0f), /*hidden argument*/NULL);
		((Vector3_t3722313464_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t3722313464_il2cpp_TypeInfo_var))->set_downVector_8(L_3);
		Vector3_t3722313464  L_4;
		memset(&L_4, 0, sizeof(L_4));
		Vector3__ctor_m3353183577((&L_4), (-1.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		((Vector3_t3722313464_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t3722313464_il2cpp_TypeInfo_var))->set_leftVector_9(L_4);
		Vector3_t3722313464  L_5;
		memset(&L_5, 0, sizeof(L_5));
		Vector3__ctor_m3353183577((&L_5), (1.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		((Vector3_t3722313464_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t3722313464_il2cpp_TypeInfo_var))->set_rightVector_10(L_5);
		Vector3_t3722313464  L_6;
		memset(&L_6, 0, sizeof(L_6));
		Vector3__ctor_m3353183577((&L_6), (0.0f), (0.0f), (1.0f), /*hidden argument*/NULL);
		((Vector3_t3722313464_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t3722313464_il2cpp_TypeInfo_var))->set_forwardVector_11(L_6);
		Vector3_t3722313464  L_7;
		memset(&L_7, 0, sizeof(L_7));
		Vector3__ctor_m3353183577((&L_7), (0.0f), (0.0f), (-1.0f), /*hidden argument*/NULL);
		((Vector3_t3722313464_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t3722313464_il2cpp_TypeInfo_var))->set_backVector_12(L_7);
		Vector3_t3722313464  L_8;
		memset(&L_8, 0, sizeof(L_8));
		Vector3__ctor_m3353183577((&L_8), (std::numeric_limits<float>::infinity()), (std::numeric_limits<float>::infinity()), (std::numeric_limits<float>::infinity()), /*hidden argument*/NULL);
		((Vector3_t3722313464_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t3722313464_il2cpp_TypeInfo_var))->set_positiveInfinityVector_13(L_8);
		Vector3_t3722313464  L_9;
		memset(&L_9, 0, sizeof(L_9));
		Vector3__ctor_m3353183577((&L_9), (-std::numeric_limits<float>::infinity()), (-std::numeric_limits<float>::infinity()), (-std::numeric_limits<float>::infinity()), /*hidden argument*/NULL);
		((Vector3_t3722313464_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t3722313464_il2cpp_TypeInfo_var))->set_negativeInfinityVector_14(L_9);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Vector4::.ctor(System.Single,System.Single,System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR void Vector4__ctor_m2498754347 (Vector4_t3319028937 * __this, float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method)
{
	{
		float L_0 = ___x0;
		__this->set_x_1(L_0);
		float L_1 = ___y1;
		__this->set_y_2(L_1);
		float L_2 = ___z2;
		__this->set_z_3(L_2);
		float L_3 = ___w3;
		__this->set_w_4(L_3);
		return;
	}
}
extern "C"  void Vector4__ctor_m2498754347_AdjustorThunk (RuntimeObject * __this, float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method)
{
	Vector4_t3319028937 * _thisAdjusted = reinterpret_cast<Vector4_t3319028937 *>(__this + 1);
	Vector4__ctor_m2498754347(_thisAdjusted, ___x0, ___y1, ___z2, ___w3, method);
}
// System.Single UnityEngine.Vector4::get_Item(System.Int32)
extern "C" IL2CPP_METHOD_ATTR float Vector4_get_Item_m2380866393 (Vector4_t3319028937 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Vector4_get_Item_m2380866393_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		int32_t L_0 = ___index0;
		switch (L_0)
		{
			case 0:
			{
				goto IL_001c;
			}
			case 1:
			{
				goto IL_0028;
			}
			case 2:
			{
				goto IL_0034;
			}
			case 3:
			{
				goto IL_0040;
			}
		}
	}
	{
		goto IL_004c;
	}

IL_001c:
	{
		float L_1 = __this->get_x_1();
		V_0 = L_1;
		goto IL_0057;
	}

IL_0028:
	{
		float L_2 = __this->get_y_2();
		V_0 = L_2;
		goto IL_0057;
	}

IL_0034:
	{
		float L_3 = __this->get_z_3();
		V_0 = L_3;
		goto IL_0057;
	}

IL_0040:
	{
		float L_4 = __this->get_w_4();
		V_0 = L_4;
		goto IL_0057;
	}

IL_004c:
	{
		IndexOutOfRangeException_t1578797820 * L_5 = (IndexOutOfRangeException_t1578797820 *)il2cpp_codegen_object_new(IndexOutOfRangeException_t1578797820_il2cpp_TypeInfo_var);
		IndexOutOfRangeException__ctor_m3408750441(L_5, _stringLiteral2104486960, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, NULL, Vector4_get_Item_m2380866393_RuntimeMethod_var);
	}

IL_0057:
	{
		float L_6 = V_0;
		return L_6;
	}
}
extern "C"  float Vector4_get_Item_m2380866393_AdjustorThunk (RuntimeObject * __this, int32_t ___index0, const RuntimeMethod* method)
{
	Vector4_t3319028937 * _thisAdjusted = reinterpret_cast<Vector4_t3319028937 *>(__this + 1);
	return Vector4_get_Item_m2380866393(_thisAdjusted, ___index0, method);
}
// System.Void UnityEngine.Vector4::set_Item(System.Int32,System.Single)
extern "C" IL2CPP_METHOD_ATTR void Vector4_set_Item_m1183742235 (Vector4_t3319028937 * __this, int32_t ___index0, float ___value1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Vector4_set_Item_m1183742235_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___index0;
		switch (L_0)
		{
			case 0:
			{
				goto IL_001c;
			}
			case 1:
			{
				goto IL_0028;
			}
			case 2:
			{
				goto IL_0034;
			}
			case 3:
			{
				goto IL_0040;
			}
		}
	}
	{
		goto IL_004c;
	}

IL_001c:
	{
		float L_1 = ___value1;
		__this->set_x_1(L_1);
		goto IL_0057;
	}

IL_0028:
	{
		float L_2 = ___value1;
		__this->set_y_2(L_2);
		goto IL_0057;
	}

IL_0034:
	{
		float L_3 = ___value1;
		__this->set_z_3(L_3);
		goto IL_0057;
	}

IL_0040:
	{
		float L_4 = ___value1;
		__this->set_w_4(L_4);
		goto IL_0057;
	}

IL_004c:
	{
		IndexOutOfRangeException_t1578797820 * L_5 = (IndexOutOfRangeException_t1578797820 *)il2cpp_codegen_object_new(IndexOutOfRangeException_t1578797820_il2cpp_TypeInfo_var);
		IndexOutOfRangeException__ctor_m3408750441(L_5, _stringLiteral2104486960, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, NULL, Vector4_set_Item_m1183742235_RuntimeMethod_var);
	}

IL_0057:
	{
		return;
	}
}
extern "C"  void Vector4_set_Item_m1183742235_AdjustorThunk (RuntimeObject * __this, int32_t ___index0, float ___value1, const RuntimeMethod* method)
{
	Vector4_t3319028937 * _thisAdjusted = reinterpret_cast<Vector4_t3319028937 *>(__this + 1);
	Vector4_set_Item_m1183742235(_thisAdjusted, ___index0, ___value1, method);
}
// System.Int32 UnityEngine.Vector4::GetHashCode()
extern "C" IL2CPP_METHOD_ATTR int32_t Vector4_GetHashCode_m536821243 (Vector4_t3319028937 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		float* L_0 = __this->get_address_of_x_1();
		int32_t L_1 = Single_GetHashCode_m1558506138((float*)L_0, /*hidden argument*/NULL);
		float* L_2 = __this->get_address_of_y_2();
		int32_t L_3 = Single_GetHashCode_m1558506138((float*)L_2, /*hidden argument*/NULL);
		float* L_4 = __this->get_address_of_z_3();
		int32_t L_5 = Single_GetHashCode_m1558506138((float*)L_4, /*hidden argument*/NULL);
		float* L_6 = __this->get_address_of_w_4();
		int32_t L_7 = Single_GetHashCode_m1558506138((float*)L_6, /*hidden argument*/NULL);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_1^(int32_t)((int32_t)((int32_t)L_3<<(int32_t)2))))^(int32_t)((int32_t)((int32_t)L_5>>(int32_t)2))))^(int32_t)((int32_t)((int32_t)L_7>>(int32_t)1))));
		goto IL_0054;
	}

IL_0054:
	{
		int32_t L_8 = V_0;
		return L_8;
	}
}
extern "C"  int32_t Vector4_GetHashCode_m536821243_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	Vector4_t3319028937 * _thisAdjusted = reinterpret_cast<Vector4_t3319028937 *>(__this + 1);
	return Vector4_GetHashCode_m536821243(_thisAdjusted, method);
}
// System.Boolean UnityEngine.Vector4::Equals(System.Object)
extern "C" IL2CPP_METHOD_ATTR bool Vector4_Equals_m1779210055 (Vector4_t3319028937 * __this, RuntimeObject * ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Vector4_Equals_m1779210055_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		RuntimeObject * L_0 = ___other0;
		if (((RuntimeObject *)IsInstSealed((RuntimeObject*)L_0, Vector4_t3319028937_il2cpp_TypeInfo_var)))
		{
			goto IL_0013;
		}
	}
	{
		V_0 = (bool)0;
		goto IL_0025;
	}

IL_0013:
	{
		RuntimeObject * L_1 = ___other0;
		bool L_2 = Vector4_Equals_m342438869((Vector4_t3319028937 *)__this, ((*(Vector4_t3319028937 *)((Vector4_t3319028937 *)UnBox(L_1, Vector4_t3319028937_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		V_0 = L_2;
		goto IL_0025;
	}

IL_0025:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
extern "C"  bool Vector4_Equals_m1779210055_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___other0, const RuntimeMethod* method)
{
	Vector4_t3319028937 * _thisAdjusted = reinterpret_cast<Vector4_t3319028937 *>(__this + 1);
	return Vector4_Equals_m1779210055(_thisAdjusted, ___other0, method);
}
// System.Boolean UnityEngine.Vector4::Equals(UnityEngine.Vector4)
extern "C" IL2CPP_METHOD_ATTR bool Vector4_Equals_m342438869 (Vector4_t3319028937 * __this, Vector4_t3319028937  ___other0, const RuntimeMethod* method)
{
	bool V_0 = false;
	int32_t G_B5_0 = 0;
	{
		float* L_0 = __this->get_address_of_x_1();
		float L_1 = (&___other0)->get_x_1();
		bool L_2 = Single_Equals_m1601893879((float*)L_0, L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_005a;
		}
	}
	{
		float* L_3 = __this->get_address_of_y_2();
		float L_4 = (&___other0)->get_y_2();
		bool L_5 = Single_Equals_m1601893879((float*)L_3, L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_005a;
		}
	}
	{
		float* L_6 = __this->get_address_of_z_3();
		float L_7 = (&___other0)->get_z_3();
		bool L_8 = Single_Equals_m1601893879((float*)L_6, L_7, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_005a;
		}
	}
	{
		float* L_9 = __this->get_address_of_w_4();
		float L_10 = (&___other0)->get_w_4();
		bool L_11 = Single_Equals_m1601893879((float*)L_9, L_10, /*hidden argument*/NULL);
		G_B5_0 = ((int32_t)(L_11));
		goto IL_005b;
	}

IL_005a:
	{
		G_B5_0 = 0;
	}

IL_005b:
	{
		V_0 = (bool)G_B5_0;
		goto IL_0061;
	}

IL_0061:
	{
		bool L_12 = V_0;
		return L_12;
	}
}
extern "C"  bool Vector4_Equals_m342438869_AdjustorThunk (RuntimeObject * __this, Vector4_t3319028937  ___other0, const RuntimeMethod* method)
{
	Vector4_t3319028937 * _thisAdjusted = reinterpret_cast<Vector4_t3319028937 *>(__this + 1);
	return Vector4_Equals_m342438869(_thisAdjusted, ___other0, method);
}
// System.Single UnityEngine.Vector4::Dot(UnityEngine.Vector4,UnityEngine.Vector4)
extern "C" IL2CPP_METHOD_ATTR float Vector4_Dot_m3492158352 (RuntimeObject * __this /* static, unused */, Vector4_t3319028937  ___a0, Vector4_t3319028937  ___b1, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		float L_0 = (&___a0)->get_x_1();
		float L_1 = (&___b1)->get_x_1();
		float L_2 = (&___a0)->get_y_2();
		float L_3 = (&___b1)->get_y_2();
		float L_4 = (&___a0)->get_z_3();
		float L_5 = (&___b1)->get_z_3();
		float L_6 = (&___a0)->get_w_4();
		float L_7 = (&___b1)->get_w_4();
		V_0 = ((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)L_0, (float)L_1)), (float)((float)il2cpp_codegen_multiply((float)L_2, (float)L_3)))), (float)((float)il2cpp_codegen_multiply((float)L_4, (float)L_5)))), (float)((float)il2cpp_codegen_multiply((float)L_6, (float)L_7))));
		goto IL_0046;
	}

IL_0046:
	{
		float L_8 = V_0;
		return L_8;
	}
}
// System.Single UnityEngine.Vector4::get_sqrMagnitude()
extern "C" IL2CPP_METHOD_ATTR float Vector4_get_sqrMagnitude_m3767723558 (Vector4_t3319028937 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Vector4_get_sqrMagnitude_m3767723558_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		IL2CPP_RUNTIME_CLASS_INIT(Vector4_t3319028937_il2cpp_TypeInfo_var);
		float L_0 = Vector4_Dot_m3492158352(NULL /*static, unused*/, (*(Vector4_t3319028937 *)__this), (*(Vector4_t3319028937 *)__this), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_0018;
	}

IL_0018:
	{
		float L_1 = V_0;
		return L_1;
	}
}
extern "C"  float Vector4_get_sqrMagnitude_m3767723558_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	Vector4_t3319028937 * _thisAdjusted = reinterpret_cast<Vector4_t3319028937 *>(__this + 1);
	return Vector4_get_sqrMagnitude_m3767723558(_thisAdjusted, method);
}
// UnityEngine.Vector4 UnityEngine.Vector4::get_zero()
extern "C" IL2CPP_METHOD_ATTR Vector4_t3319028937  Vector4_get_zero_m1422399515 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Vector4_get_zero_m1422399515_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector4_t3319028937  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		IL2CPP_RUNTIME_CLASS_INIT(Vector4_t3319028937_il2cpp_TypeInfo_var);
		Vector4_t3319028937  L_0 = ((Vector4_t3319028937_StaticFields*)il2cpp_codegen_static_fields_for(Vector4_t3319028937_il2cpp_TypeInfo_var))->get_zeroVector_5();
		V_0 = L_0;
		goto IL_000c;
	}

IL_000c:
	{
		Vector4_t3319028937  L_1 = V_0;
		return L_1;
	}
}
// UnityEngine.Vector4 UnityEngine.Vector4::op_Subtraction(UnityEngine.Vector4,UnityEngine.Vector4)
extern "C" IL2CPP_METHOD_ATTR Vector4_t3319028937  Vector4_op_Subtraction_m1632208160 (RuntimeObject * __this /* static, unused */, Vector4_t3319028937  ___a0, Vector4_t3319028937  ___b1, const RuntimeMethod* method)
{
	Vector4_t3319028937  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		float L_0 = (&___a0)->get_x_1();
		float L_1 = (&___b1)->get_x_1();
		float L_2 = (&___a0)->get_y_2();
		float L_3 = (&___b1)->get_y_2();
		float L_4 = (&___a0)->get_z_3();
		float L_5 = (&___b1)->get_z_3();
		float L_6 = (&___a0)->get_w_4();
		float L_7 = (&___b1)->get_w_4();
		Vector4_t3319028937  L_8;
		memset(&L_8, 0, sizeof(L_8));
		Vector4__ctor_m2498754347((&L_8), ((float)il2cpp_codegen_subtract((float)L_0, (float)L_1)), ((float)il2cpp_codegen_subtract((float)L_2, (float)L_3)), ((float)il2cpp_codegen_subtract((float)L_4, (float)L_5)), ((float)il2cpp_codegen_subtract((float)L_6, (float)L_7)), /*hidden argument*/NULL);
		V_0 = L_8;
		goto IL_0048;
	}

IL_0048:
	{
		Vector4_t3319028937  L_9 = V_0;
		return L_9;
	}
}
// UnityEngine.Vector4 UnityEngine.Vector4::op_Division(UnityEngine.Vector4,System.Single)
extern "C" IL2CPP_METHOD_ATTR Vector4_t3319028937  Vector4_op_Division_m264790546 (RuntimeObject * __this /* static, unused */, Vector4_t3319028937  ___a0, float ___d1, const RuntimeMethod* method)
{
	Vector4_t3319028937  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		float L_0 = (&___a0)->get_x_1();
		float L_1 = ___d1;
		float L_2 = (&___a0)->get_y_2();
		float L_3 = ___d1;
		float L_4 = (&___a0)->get_z_3();
		float L_5 = ___d1;
		float L_6 = (&___a0)->get_w_4();
		float L_7 = ___d1;
		Vector4_t3319028937  L_8;
		memset(&L_8, 0, sizeof(L_8));
		Vector4__ctor_m2498754347((&L_8), ((float)((float)L_0/(float)L_1)), ((float)((float)L_2/(float)L_3)), ((float)((float)L_4/(float)L_5)), ((float)((float)L_6/(float)L_7)), /*hidden argument*/NULL);
		V_0 = L_8;
		goto IL_0030;
	}

IL_0030:
	{
		Vector4_t3319028937  L_9 = V_0;
		return L_9;
	}
}
// System.Boolean UnityEngine.Vector4::op_Equality(UnityEngine.Vector4,UnityEngine.Vector4)
extern "C" IL2CPP_METHOD_ATTR bool Vector4_op_Equality_m2403588337 (RuntimeObject * __this /* static, unused */, Vector4_t3319028937  ___lhs0, Vector4_t3319028937  ___rhs1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Vector4_op_Equality_m2403588337_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		Vector4_t3319028937  L_0 = ___lhs0;
		Vector4_t3319028937  L_1 = ___rhs1;
		IL2CPP_RUNTIME_CLASS_INIT(Vector4_t3319028937_il2cpp_TypeInfo_var);
		Vector4_t3319028937  L_2 = Vector4_op_Subtraction_m1632208160(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		float L_3 = Vector4_SqrMagnitude_m1488236336(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		V_0 = (bool)((((float)L_3) < ((float)(9.99999944E-11f)))? 1 : 0);
		goto IL_001a;
	}

IL_001a:
	{
		bool L_4 = V_0;
		return L_4;
	}
}
// UnityEngine.Vector3 UnityEngine.Vector4::op_Implicit(UnityEngine.Vector4)
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Vector4_op_Implicit_m1158564884 (RuntimeObject * __this /* static, unused */, Vector4_t3319028937  ___v0, const RuntimeMethod* method)
{
	Vector3_t3722313464  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		float L_0 = (&___v0)->get_x_1();
		float L_1 = (&___v0)->get_y_2();
		float L_2 = (&___v0)->get_z_3();
		Vector3_t3722313464  L_3;
		memset(&L_3, 0, sizeof(L_3));
		Vector3__ctor_m3353183577((&L_3), L_0, L_1, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t3722313464  L_4 = V_0;
		return L_4;
	}
}
// System.String UnityEngine.Vector4::ToString()
extern "C" IL2CPP_METHOD_ATTR String_t* Vector4_ToString_m1596036856 (Vector4_t3319028937 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Vector4_ToString_m1596036856_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		ObjectU5BU5D_t2843939325* L_0 = (ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)4);
		ObjectU5BU5D_t2843939325* L_1 = L_0;
		float L_2 = __this->get_x_1();
		float L_3 = L_2;
		RuntimeObject * L_4 = Box(Single_t1397266774_il2cpp_TypeInfo_var, &L_3);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_4);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_4);
		ObjectU5BU5D_t2843939325* L_5 = L_1;
		float L_6 = __this->get_y_2();
		float L_7 = L_6;
		RuntimeObject * L_8 = Box(Single_t1397266774_il2cpp_TypeInfo_var, &L_7);
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_8);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_8);
		ObjectU5BU5D_t2843939325* L_9 = L_5;
		float L_10 = __this->get_z_3();
		float L_11 = L_10;
		RuntimeObject * L_12 = Box(Single_t1397266774_il2cpp_TypeInfo_var, &L_11);
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_12);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_12);
		ObjectU5BU5D_t2843939325* L_13 = L_9;
		float L_14 = __this->get_w_4();
		float L_15 = L_14;
		RuntimeObject * L_16 = Box(Single_t1397266774_il2cpp_TypeInfo_var, &L_15);
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, L_16);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_16);
		String_t* L_17 = UnityString_Format_m261690510(NULL /*static, unused*/, _stringLiteral3651359435, L_13, /*hidden argument*/NULL);
		V_0 = L_17;
		goto IL_004f;
	}

IL_004f:
	{
		String_t* L_18 = V_0;
		return L_18;
	}
}
extern "C"  String_t* Vector4_ToString_m1596036856_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	Vector4_t3319028937 * _thisAdjusted = reinterpret_cast<Vector4_t3319028937 *>(__this + 1);
	return Vector4_ToString_m1596036856(_thisAdjusted, method);
}
// System.Single UnityEngine.Vector4::SqrMagnitude(UnityEngine.Vector4)
extern "C" IL2CPP_METHOD_ATTR float Vector4_SqrMagnitude_m1488236336 (RuntimeObject * __this /* static, unused */, Vector4_t3319028937  ___a0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Vector4_SqrMagnitude_m1488236336_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		Vector4_t3319028937  L_0 = ___a0;
		Vector4_t3319028937  L_1 = ___a0;
		IL2CPP_RUNTIME_CLASS_INIT(Vector4_t3319028937_il2cpp_TypeInfo_var);
		float L_2 = Vector4_Dot_m3492158352(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		goto IL_000e;
	}

IL_000e:
	{
		float L_3 = V_0;
		return L_3;
	}
}
// System.Void UnityEngine.Vector4::.cctor()
extern "C" IL2CPP_METHOD_ATTR void Vector4__cctor_m2519631228 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Vector4__cctor_m2519631228_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Vector4_t3319028937  L_0;
		memset(&L_0, 0, sizeof(L_0));
		Vector4__ctor_m2498754347((&L_0), (0.0f), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		((Vector4_t3319028937_StaticFields*)il2cpp_codegen_static_fields_for(Vector4_t3319028937_il2cpp_TypeInfo_var))->set_zeroVector_5(L_0);
		Vector4_t3319028937  L_1;
		memset(&L_1, 0, sizeof(L_1));
		Vector4__ctor_m2498754347((&L_1), (1.0f), (1.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		((Vector4_t3319028937_StaticFields*)il2cpp_codegen_static_fields_for(Vector4_t3319028937_il2cpp_TypeInfo_var))->set_oneVector_6(L_1);
		Vector4_t3319028937  L_2;
		memset(&L_2, 0, sizeof(L_2));
		Vector4__ctor_m2498754347((&L_2), (std::numeric_limits<float>::infinity()), (std::numeric_limits<float>::infinity()), (std::numeric_limits<float>::infinity()), (std::numeric_limits<float>::infinity()), /*hidden argument*/NULL);
		((Vector4_t3319028937_StaticFields*)il2cpp_codegen_static_fields_for(Vector4_t3319028937_il2cpp_TypeInfo_var))->set_positiveInfinityVector_7(L_2);
		Vector4_t3319028937  L_3;
		memset(&L_3, 0, sizeof(L_3));
		Vector4__ctor_m2498754347((&L_3), (-std::numeric_limits<float>::infinity()), (-std::numeric_limits<float>::infinity()), (-std::numeric_limits<float>::infinity()), (-std::numeric_limits<float>::infinity()), /*hidden argument*/NULL);
		((Vector4_t3319028937_StaticFields*)il2cpp_codegen_static_fields_for(Vector4_t3319028937_il2cpp_TypeInfo_var))->set_negativeInfinityVector_8(L_3);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.WaitForEndOfFrame::.ctor()
extern "C" IL2CPP_METHOD_ATTR void WaitForEndOfFrame__ctor_m1381314187 (WaitForEndOfFrame_t1314943911 * __this, const RuntimeMethod* method)
{
	{
		YieldInstruction__ctor_m1498450609(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
// Conversion methods for marshalling of: UnityEngine.WaitForSeconds
extern "C" void WaitForSeconds_t1699091251_marshal_pinvoke(const WaitForSeconds_t1699091251& unmarshaled, WaitForSeconds_t1699091251_marshaled_pinvoke& marshaled)
{
	marshaled.___m_Seconds_0 = unmarshaled.get_m_Seconds_0();
}
extern "C" void WaitForSeconds_t1699091251_marshal_pinvoke_back(const WaitForSeconds_t1699091251_marshaled_pinvoke& marshaled, WaitForSeconds_t1699091251& unmarshaled)
{
	float unmarshaled_m_Seconds_temp_0 = 0.0f;
	unmarshaled_m_Seconds_temp_0 = marshaled.___m_Seconds_0;
	unmarshaled.set_m_Seconds_0(unmarshaled_m_Seconds_temp_0);
}
// Conversion method for clean up from marshalling of: UnityEngine.WaitForSeconds
extern "C" void WaitForSeconds_t1699091251_marshal_pinvoke_cleanup(WaitForSeconds_t1699091251_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.WaitForSeconds
extern "C" void WaitForSeconds_t1699091251_marshal_com(const WaitForSeconds_t1699091251& unmarshaled, WaitForSeconds_t1699091251_marshaled_com& marshaled)
{
	marshaled.___m_Seconds_0 = unmarshaled.get_m_Seconds_0();
}
extern "C" void WaitForSeconds_t1699091251_marshal_com_back(const WaitForSeconds_t1699091251_marshaled_com& marshaled, WaitForSeconds_t1699091251& unmarshaled)
{
	float unmarshaled_m_Seconds_temp_0 = 0.0f;
	unmarshaled_m_Seconds_temp_0 = marshaled.___m_Seconds_0;
	unmarshaled.set_m_Seconds_0(unmarshaled_m_Seconds_temp_0);
}
// Conversion method for clean up from marshalling of: UnityEngine.WaitForSeconds
extern "C" void WaitForSeconds_t1699091251_marshal_com_cleanup(WaitForSeconds_t1699091251_marshaled_com& marshaled)
{
}
// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
extern "C" IL2CPP_METHOD_ATTR void WaitForSeconds__ctor_m2199082655 (WaitForSeconds_t1699091251 * __this, float ___seconds0, const RuntimeMethod* method)
{
	{
		YieldInstruction__ctor_m1498450609(__this, /*hidden argument*/NULL);
		float L_0 = ___seconds0;
		__this->set_m_Seconds_0(L_0);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.WaitForSecondsRealtime::.ctor(System.Single)
extern "C" IL2CPP_METHOD_ATTR void WaitForSecondsRealtime__ctor_m507157904 (WaitForSecondsRealtime_t189548121 * __this, float ___time0, const RuntimeMethod* method)
{
	{
		CustomYieldInstruction__ctor_m3408208142(__this, /*hidden argument*/NULL);
		float L_0 = Time_get_realtimeSinceStartup_m3141794964(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_1 = ___time0;
		__this->set_waitTime_0(((float)il2cpp_codegen_add((float)L_0, (float)L_1)));
		return;
	}
}
// System.Boolean UnityEngine.WaitForSecondsRealtime::get_keepWaiting()
extern "C" IL2CPP_METHOD_ATTR bool WaitForSecondsRealtime_get_keepWaiting_m846832224 (WaitForSecondsRealtime_t189548121 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		float L_0 = Time_get_realtimeSinceStartup_m3141794964(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_1 = __this->get_waitTime_0();
		V_0 = (bool)((((float)L_0) < ((float)L_1))? 1 : 0);
		goto IL_0014;
	}

IL_0014:
	{
		bool L_2 = V_0;
		return L_2;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: UnityEngine.YieldInstruction
extern "C" void YieldInstruction_t403091072_marshal_pinvoke(const YieldInstruction_t403091072& unmarshaled, YieldInstruction_t403091072_marshaled_pinvoke& marshaled)
{
}
extern "C" void YieldInstruction_t403091072_marshal_pinvoke_back(const YieldInstruction_t403091072_marshaled_pinvoke& marshaled, YieldInstruction_t403091072& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: UnityEngine.YieldInstruction
extern "C" void YieldInstruction_t403091072_marshal_pinvoke_cleanup(YieldInstruction_t403091072_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.YieldInstruction
extern "C" void YieldInstruction_t403091072_marshal_com(const YieldInstruction_t403091072& unmarshaled, YieldInstruction_t403091072_marshaled_com& marshaled)
{
}
extern "C" void YieldInstruction_t403091072_marshal_com_back(const YieldInstruction_t403091072_marshaled_com& marshaled, YieldInstruction_t403091072& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: UnityEngine.YieldInstruction
extern "C" void YieldInstruction_t403091072_marshal_com_cleanup(YieldInstruction_t403091072_marshaled_com& marshaled)
{
}
// System.Void UnityEngine.YieldInstruction::.ctor()
extern "C" IL2CPP_METHOD_ATTR void YieldInstruction__ctor_m1498450609 (YieldInstruction_t403091072 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.iOS.LocalNotification::Finalize()
extern "C" IL2CPP_METHOD_ATTR void LocalNotification_Finalize_m4237923715 (LocalNotification_t1697500732 * __this, const RuntimeMethod* method)
{
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
	}

IL_0001:
	try
	{ // begin try (depth: 1)
		intptr_t L_0 = __this->get_m_Ptr_0();
		NotificationHelper_DestroyLocal_m2248823824(NULL /*static, unused*/, (intptr_t)L_0, /*hidden argument*/NULL);
		IL2CPP_LEAVE(0x18, FINALLY_0011);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0011;
	}

FINALLY_0011:
	{ // begin finally (depth: 1)
		Object_Finalize_m3076187857(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(17)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(17)
	{
		IL2CPP_JUMP_TBL(0x18, IL_0018)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0018:
	{
		return;
	}
}
// System.Void UnityEngine.iOS.LocalNotification::.cctor()
extern "C" IL2CPP_METHOD_ATTR void LocalNotification__cctor_m2450334404 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (LocalNotification__cctor_m2450334404_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	DateTime_t3738529785  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		DateTime__ctor_m2956360140((DateTime_t3738529785 *)(&V_0), ((int32_t)2001), 1, 1, 0, 0, 0, 1, /*hidden argument*/NULL);
		int64_t L_0 = DateTime_get_Ticks_m1550640881((DateTime_t3738529785 *)(&V_0), /*hidden argument*/NULL);
		((LocalNotification_t1697500732_StaticFields*)il2cpp_codegen_static_fields_for(LocalNotification_t1697500732_il2cpp_TypeInfo_var))->set_m_NSReferenceDateTicks_1(L_0);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.iOS.NotificationHelper::DestroyLocal(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void NotificationHelper_DestroyLocal_m2248823824 (RuntimeObject * __this /* static, unused */, intptr_t ___target0, const RuntimeMethod* method)
{
	typedef void (*NotificationHelper_DestroyLocal_m2248823824_ftn) (intptr_t);
	static NotificationHelper_DestroyLocal_m2248823824_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (NotificationHelper_DestroyLocal_m2248823824_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.iOS.NotificationHelper::DestroyLocal(System.IntPtr)");
	_il2cpp_icall_func(___target0);
}
// System.Void UnityEngine.iOS.NotificationHelper::DestroyRemote(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void NotificationHelper_DestroyRemote_m3390574007 (RuntimeObject * __this /* static, unused */, intptr_t ___target0, const RuntimeMethod* method)
{
	typedef void (*NotificationHelper_DestroyRemote_m3390574007_ftn) (intptr_t);
	static NotificationHelper_DestroyRemote_m3390574007_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (NotificationHelper_DestroyRemote_m3390574007_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.iOS.NotificationHelper::DestroyRemote(System.IntPtr)");
	_il2cpp_icall_func(___target0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.iOS.RemoteNotification::Finalize()
extern "C" IL2CPP_METHOD_ATTR void RemoteNotification_Finalize_m1702910735 (RemoteNotification_t818046696 * __this, const RuntimeMethod* method)
{
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
	}

IL_0001:
	try
	{ // begin try (depth: 1)
		intptr_t L_0 = __this->get_m_Ptr_0();
		NotificationHelper_DestroyRemote_m3390574007(NULL /*static, unused*/, (intptr_t)L_0, /*hidden argument*/NULL);
		IL2CPP_LEAVE(0x18, FINALLY_0011);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0011;
	}

FINALLY_0011:
	{ // begin finally (depth: 1)
		Object_Finalize_m3076187857(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(17)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(17)
	{
		IL2CPP_JUMP_TBL(0x18, IL_0018)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0018:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngineInternal.GenericStack::.ctor()
extern "C" IL2CPP_METHOD_ATTR void GenericStack__ctor_m933681517 (GenericStack_t1310059385 * __this, const RuntimeMethod* method)
{
	{
		Stack__ctor_m2907601956(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngineInternal.MathfInternal::.cctor()
extern "C" IL2CPP_METHOD_ATTR void MathfInternal__cctor_m2622893686 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MathfInternal__cctor_m2622893686_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_memory_barrier();
		((MathfInternal_t624072491_StaticFields*)il2cpp_codegen_static_fields_for(MathfInternal_t624072491_il2cpp_TypeInfo_var))->set_FloatMinNormal_0((1.17549435E-38f));
		il2cpp_codegen_memory_barrier();
		((MathfInternal_t624072491_StaticFields*)il2cpp_codegen_static_fields_for(MathfInternal_t624072491_il2cpp_TypeInfo_var))->set_FloatMinDenormal_1((1.401298E-45f));
		((MathfInternal_t624072491_StaticFields*)il2cpp_codegen_static_fields_for(MathfInternal_t624072491_il2cpp_TypeInfo_var))->set_IsFlushToZeroEnabled_2((bool)1);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Delegate UnityEngineInternal.NetFxCoreExtensions::CreateDelegate(System.Reflection.MethodInfo,System.Type,System.Object)
extern "C" IL2CPP_METHOD_ATTR Delegate_t1188392813 * NetFxCoreExtensions_CreateDelegate_m751211712 (RuntimeObject * __this /* static, unused */, MethodInfo_t * ___self0, Type_t * ___delegateType1, RuntimeObject * ___target2, const RuntimeMethod* method)
{
	Delegate_t1188392813 * V_0 = NULL;
	{
		Type_t * L_0 = ___delegateType1;
		RuntimeObject * L_1 = ___target2;
		MethodInfo_t * L_2 = ___self0;
		Delegate_t1188392813 * L_3 = Delegate_CreateDelegate_m995503480(NULL /*static, unused*/, L_0, L_1, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		goto IL_000f;
	}

IL_000f:
	{
		Delegate_t1188392813 * L_4 = V_0;
		return L_4;
	}
}
// System.Reflection.MethodInfo UnityEngineInternal.NetFxCoreExtensions::GetMethodInfo(System.Delegate)
extern "C" IL2CPP_METHOD_ATTR MethodInfo_t * NetFxCoreExtensions_GetMethodInfo_m444570327 (RuntimeObject * __this /* static, unused */, Delegate_t1188392813 * ___self0, const RuntimeMethod* method)
{
	MethodInfo_t * V_0 = NULL;
	{
		Delegate_t1188392813 * L_0 = ___self0;
		NullCheck(L_0);
		MethodInfo_t * L_1 = Delegate_get_Method_m3071622864(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_000d;
	}

IL_000d:
	{
		MethodInfo_t * L_2 = V_0;
		return L_2;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Delegate UnityEngineInternal.ScriptingUtils::CreateDelegate(System.Type,System.Reflection.MethodInfo)
extern "C" IL2CPP_METHOD_ATTR Delegate_t1188392813 * ScriptingUtils_CreateDelegate_m650796149 (RuntimeObject * __this /* static, unused */, Type_t * ___type0, MethodInfo_t * ___methodInfo1, const RuntimeMethod* method)
{
	Delegate_t1188392813 * V_0 = NULL;
	{
		Type_t * L_0 = ___type0;
		MethodInfo_t * L_1 = ___methodInfo1;
		Delegate_t1188392813 * L_2 = Delegate_CreateDelegate_m2396489936(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		goto IL_000e;
	}

IL_000e:
	{
		Delegate_t1188392813 * L_3 = V_0;
		return L_3;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngineInternal.TypeInferenceRuleAttribute::.ctor(UnityEngineInternal.TypeInferenceRules)
extern "C" IL2CPP_METHOD_ATTR void TypeInferenceRuleAttribute__ctor_m3137488504 (TypeInferenceRuleAttribute_t254868554 * __this, int32_t ___rule0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TypeInferenceRuleAttribute__ctor_m3137488504_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = Box(TypeInferenceRules_t96689094_il2cpp_TypeInfo_var, (&___rule0));
		NullCheck(L_0);
		String_t* L_1 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_0);
		___rule0 = *(int32_t*)UnBox(L_0);
		TypeInferenceRuleAttribute__ctor_m2736695831(__this, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngineInternal.TypeInferenceRuleAttribute::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void TypeInferenceRuleAttribute__ctor_m2736695831 (TypeInferenceRuleAttribute_t254868554 * __this, String_t* ___rule0, const RuntimeMethod* method)
{
	{
		Attribute__ctor_m1529526131(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___rule0;
		__this->set__rule_0(L_0);
		return;
	}
}
// System.String UnityEngineInternal.TypeInferenceRuleAttribute::ToString()
extern "C" IL2CPP_METHOD_ATTR String_t* TypeInferenceRuleAttribute_ToString_m4089326196 (TypeInferenceRuleAttribute_t254868554 * __this, const RuntimeMethod* method)
{
	String_t* V_0 = NULL;
	{
		String_t* L_0 = __this->get__rule_0();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		String_t* L_1 = V_0;
		return L_1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // Modified by PostBuild.cs
