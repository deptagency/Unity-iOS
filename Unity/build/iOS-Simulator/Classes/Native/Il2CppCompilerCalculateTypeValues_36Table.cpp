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


// System.Action
struct Action_t1264377477;
// System.Action`1<System.Boolean>
struct Action_1_t269755560;
// System.Action`1<UnityEngine.Experimental.XR.FrameReceivedEventArgs>
struct Action_1_t2760547698;
// System.Action`1<UnityEngine.Experimental.XR.PlaneAddedEventArgs>
struct Action_1_t2722643320;
// System.Action`1<UnityEngine.Experimental.XR.PlaneRemovedEventArgs>
struct Action_1_t1739597377;
// System.Action`1<UnityEngine.Experimental.XR.PlaneUpdatedEventArgs>
struct Action_1_t521953446;
// System.Action`1<UnityEngine.Experimental.XR.PointCloudUpdatedEventArgs>
struct Action_1_t3609124943;
// System.Action`1<UnityEngine.Experimental.XR.ReferencePointUpdatedEventArgs>
struct Action_1_t2218980328;
// System.Action`1<UnityEngine.Experimental.XR.SessionTrackingStateChangedEventArgs>
struct Action_1_t2515503250;
// System.Action`1<UnityEngine.XR.XRNodeState>
struct Action_1_t3925070025;
// System.Action`3<System.Boolean,System.Boolean,System.Int32>
struct Action_3_t3050575418;
// System.AsyncCallback
struct AsyncCallback_t3962456242;
// System.Char[]
struct CharU5BU5D_t3528271667;
// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>
struct Dictionary_2_t2696614423;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>
struct List_1_t3491343620;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>
struct List_1_t1327982029;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.EventSystem>
struct List_1_t2475741330;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>
struct List_1_t521873611;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>
struct List_1_t2329214678;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>
struct List_1_t537414295;
// System.Collections.Generic.List`1<UnityEngine.Experimental.ISubsystemDescriptorImpl>
struct List_1_t60503245;
// System.Collections.Generic.List`1<UnityEngine.Experimental.Subsystem>
struct List_1_t1561798217;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t2585711361;
// System.Collections.Generic.List`1<UnityEngine.Transform>
struct List_1_t777473367;
// System.Comparison`1<UnityEngine.EventSystems.RaycastResult>
struct Comparison_1_t3135238028;
// System.DelegateData
struct DelegateData_t1677132599;
// System.Delegate[]
struct DelegateU5BU5D_t1703627840;
// System.IAsyncResult
struct IAsyncResult_t767004451;
// System.Object[]
struct ObjectU5BU5D_t2843939325;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.String
struct String_t;
// System.Text.RegularExpressions.Regex
struct Regex_t3657309853;
// System.Void
struct Void_t1185182177;
// UnityEngine.EventSystems.AxisEventData
struct AxisEventData_t2331243652;
// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_t3903027533;
// UnityEngine.EventSystems.BaseInput
struct BaseInput_t3630163547;
// UnityEngine.EventSystems.BaseInputModule
struct BaseInputModule_t2019268878;
// UnityEngine.EventSystems.BaseRaycaster
struct BaseRaycaster_t4150874583;
// UnityEngine.EventSystems.EventSystem
struct EventSystem_t1003666588;
// UnityEngine.EventSystems.EventTrigger/TriggerEvent
struct TriggerEvent_t3867320123;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IBeginDragHandler>
struct EventFunction_1_t1977848392;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.ICancelHandler>
struct EventFunction_1_t2658898854;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IDeselectHandler>
struct EventFunction_1_t3373214253;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IDragHandler>
struct EventFunction_1_t972960537;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IDropHandler>
struct EventFunction_1_t2311673543;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IEndDragHandler>
struct EventFunction_1_t3277009892;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IInitializePotentialDragHandler>
struct EventFunction_1_t3587542510;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IMoveHandler>
struct EventFunction_1_t3912835512;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerClickHandler>
struct EventFunction_1_t3111972472;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerDownHandler>
struct EventFunction_1_t64614563;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerEnterHandler>
struct EventFunction_1_t3995630009;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerExitHandler>
struct EventFunction_1_t2867327688;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerUpHandler>
struct EventFunction_1_t3256600500;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IScrollHandler>
struct EventFunction_1_t2886331738;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.ISelectHandler>
struct EventFunction_1_t955952873;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.ISubmitHandler>
struct EventFunction_1_t1475332338;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IUpdateSelectedHandler>
struct EventFunction_1_t2950825503;
// UnityEngine.EventSystems.PointerInputModule/MouseButtonEventData
struct MouseButtonEventData_t3190347560;
// UnityEngine.EventSystems.PointerInputModule/MouseState
struct MouseState_t384203932;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_t2498835369;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_t3050769227;
// UnityEngine.Experimental.ISubsystemDescriptor
struct ISubsystemDescriptor_t515866703;
// UnityEngine.Experimental.XR.XRCameraSubsystem
struct XRCameraSubsystem_t4195795144;
// UnityEngine.Experimental.XR.XRDepthSubsystem
struct XRDepthSubsystem_t4084359858;
// UnityEngine.Experimental.XR.XRPlaneSubsystem
struct XRPlaneSubsystem_t2260142932;
// UnityEngine.Experimental.XR.XRSessionSubsystem
struct XRSessionSubsystem_t3616338244;
// UnityEngine.GameObject
struct GameObject_t1113636619;
// UnityEngine.RemoteSettings/UpdatedEventHandler
struct UpdatedEventHandler_t1027848393;
// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>
struct ObjectPool_1_t231414508;
// UnityEngine.Video.VideoPlayer
struct VideoPlayer_t1683042537;
// UnityEngine.Video.VideoPlayer/ErrorEventHandler
struct ErrorEventHandler_t3211687919;
// UnityEngine.Video.VideoPlayer/EventHandler
struct EventHandler_t3436254912;
// UnityEngine.Video.VideoPlayer/FrameReadyEventHandler
struct FrameReadyEventHandler_t3848515759;
// UnityEngine.Video.VideoPlayer/TimeEventHandler
struct TimeEventHandler_t445758600;




#ifndef U3CMODULEU3E_T692745554_H
#define U3CMODULEU3E_T692745554_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t692745554 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CMODULEU3E_T692745554_H
#ifndef U3CMODULEU3E_T692745551_H
#define U3CMODULEU3E_T692745551_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t692745551 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CMODULEU3E_T692745551_H
#ifndef U3CMODULEU3E_T692745552_H
#define U3CMODULEU3E_T692745552_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t692745552 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CMODULEU3E_T692745552_H
#ifndef U3CMODULEU3E_T692745555_H
#define U3CMODULEU3E_T692745555_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t692745555 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CMODULEU3E_T692745555_H
#ifndef U3CMODULEU3E_T692745553_H
#define U3CMODULEU3E_T692745553_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t692745553 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CMODULEU3E_T692745553_H
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
#ifndef ABSTRACTEVENTDATA_T4171500731_H
#define ABSTRACTEVENTDATA_T4171500731_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.EventSystems.AbstractEventData
struct  AbstractEventData_t4171500731  : public RuntimeObject
{
public:
	// System.Boolean UnityEngine.EventSystems.AbstractEventData::m_Used
	bool ___m_Used_0;

public:
	inline static int32_t get_offset_of_m_Used_0() { return static_cast<int32_t>(offsetof(AbstractEventData_t4171500731, ___m_Used_0)); }
	inline bool get_m_Used_0() const { return ___m_Used_0; }
	inline bool* get_address_of_m_Used_0() { return &___m_Used_0; }
	inline void set_m_Used_0(bool value)
	{
		___m_Used_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ABSTRACTEVENTDATA_T4171500731_H
#ifndef EXECUTEEVENTS_T3484638744_H
#define EXECUTEEVENTS_T3484638744_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.EventSystems.ExecuteEvents
struct  ExecuteEvents_t3484638744  : public RuntimeObject
{
public:

public:
};

struct ExecuteEvents_t3484638744_StaticFields
{
public:
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerEnterHandler> UnityEngine.EventSystems.ExecuteEvents::s_PointerEnterHandler
	EventFunction_1_t3995630009 * ___s_PointerEnterHandler_0;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerExitHandler> UnityEngine.EventSystems.ExecuteEvents::s_PointerExitHandler
	EventFunction_1_t2867327688 * ___s_PointerExitHandler_1;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerDownHandler> UnityEngine.EventSystems.ExecuteEvents::s_PointerDownHandler
	EventFunction_1_t64614563 * ___s_PointerDownHandler_2;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerUpHandler> UnityEngine.EventSystems.ExecuteEvents::s_PointerUpHandler
	EventFunction_1_t3256600500 * ___s_PointerUpHandler_3;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerClickHandler> UnityEngine.EventSystems.ExecuteEvents::s_PointerClickHandler
	EventFunction_1_t3111972472 * ___s_PointerClickHandler_4;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IInitializePotentialDragHandler> UnityEngine.EventSystems.ExecuteEvents::s_InitializePotentialDragHandler
	EventFunction_1_t3587542510 * ___s_InitializePotentialDragHandler_5;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IBeginDragHandler> UnityEngine.EventSystems.ExecuteEvents::s_BeginDragHandler
	EventFunction_1_t1977848392 * ___s_BeginDragHandler_6;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IDragHandler> UnityEngine.EventSystems.ExecuteEvents::s_DragHandler
	EventFunction_1_t972960537 * ___s_DragHandler_7;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IEndDragHandler> UnityEngine.EventSystems.ExecuteEvents::s_EndDragHandler
	EventFunction_1_t3277009892 * ___s_EndDragHandler_8;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IDropHandler> UnityEngine.EventSystems.ExecuteEvents::s_DropHandler
	EventFunction_1_t2311673543 * ___s_DropHandler_9;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IScrollHandler> UnityEngine.EventSystems.ExecuteEvents::s_ScrollHandler
	EventFunction_1_t2886331738 * ___s_ScrollHandler_10;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IUpdateSelectedHandler> UnityEngine.EventSystems.ExecuteEvents::s_UpdateSelectedHandler
	EventFunction_1_t2950825503 * ___s_UpdateSelectedHandler_11;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.ISelectHandler> UnityEngine.EventSystems.ExecuteEvents::s_SelectHandler
	EventFunction_1_t955952873 * ___s_SelectHandler_12;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IDeselectHandler> UnityEngine.EventSystems.ExecuteEvents::s_DeselectHandler
	EventFunction_1_t3373214253 * ___s_DeselectHandler_13;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IMoveHandler> UnityEngine.EventSystems.ExecuteEvents::s_MoveHandler
	EventFunction_1_t3912835512 * ___s_MoveHandler_14;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.ISubmitHandler> UnityEngine.EventSystems.ExecuteEvents::s_SubmitHandler
	EventFunction_1_t1475332338 * ___s_SubmitHandler_15;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.ICancelHandler> UnityEngine.EventSystems.ExecuteEvents::s_CancelHandler
	EventFunction_1_t2658898854 * ___s_CancelHandler_16;
	// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>> UnityEngine.EventSystems.ExecuteEvents::s_HandlerListPool
	ObjectPool_1_t231414508 * ___s_HandlerListPool_17;
	// System.Collections.Generic.List`1<UnityEngine.Transform> UnityEngine.EventSystems.ExecuteEvents::s_InternalTransformList
	List_1_t777473367 * ___s_InternalTransformList_18;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerEnterHandler> UnityEngine.EventSystems.ExecuteEvents::<>f__mg$cache0
	EventFunction_1_t3995630009 * ___U3CU3Ef__mgU24cache0_19;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerExitHandler> UnityEngine.EventSystems.ExecuteEvents::<>f__mg$cache1
	EventFunction_1_t2867327688 * ___U3CU3Ef__mgU24cache1_20;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerDownHandler> UnityEngine.EventSystems.ExecuteEvents::<>f__mg$cache2
	EventFunction_1_t64614563 * ___U3CU3Ef__mgU24cache2_21;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerUpHandler> UnityEngine.EventSystems.ExecuteEvents::<>f__mg$cache3
	EventFunction_1_t3256600500 * ___U3CU3Ef__mgU24cache3_22;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerClickHandler> UnityEngine.EventSystems.ExecuteEvents::<>f__mg$cache4
	EventFunction_1_t3111972472 * ___U3CU3Ef__mgU24cache4_23;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IInitializePotentialDragHandler> UnityEngine.EventSystems.ExecuteEvents::<>f__mg$cache5
	EventFunction_1_t3587542510 * ___U3CU3Ef__mgU24cache5_24;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IBeginDragHandler> UnityEngine.EventSystems.ExecuteEvents::<>f__mg$cache6
	EventFunction_1_t1977848392 * ___U3CU3Ef__mgU24cache6_25;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IDragHandler> UnityEngine.EventSystems.ExecuteEvents::<>f__mg$cache7
	EventFunction_1_t972960537 * ___U3CU3Ef__mgU24cache7_26;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IEndDragHandler> UnityEngine.EventSystems.ExecuteEvents::<>f__mg$cache8
	EventFunction_1_t3277009892 * ___U3CU3Ef__mgU24cache8_27;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IDropHandler> UnityEngine.EventSystems.ExecuteEvents::<>f__mg$cache9
	EventFunction_1_t2311673543 * ___U3CU3Ef__mgU24cache9_28;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IScrollHandler> UnityEngine.EventSystems.ExecuteEvents::<>f__mg$cacheA
	EventFunction_1_t2886331738 * ___U3CU3Ef__mgU24cacheA_29;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IUpdateSelectedHandler> UnityEngine.EventSystems.ExecuteEvents::<>f__mg$cacheB
	EventFunction_1_t2950825503 * ___U3CU3Ef__mgU24cacheB_30;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.ISelectHandler> UnityEngine.EventSystems.ExecuteEvents::<>f__mg$cacheC
	EventFunction_1_t955952873 * ___U3CU3Ef__mgU24cacheC_31;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IDeselectHandler> UnityEngine.EventSystems.ExecuteEvents::<>f__mg$cacheD
	EventFunction_1_t3373214253 * ___U3CU3Ef__mgU24cacheD_32;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IMoveHandler> UnityEngine.EventSystems.ExecuteEvents::<>f__mg$cacheE
	EventFunction_1_t3912835512 * ___U3CU3Ef__mgU24cacheE_33;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.ISubmitHandler> UnityEngine.EventSystems.ExecuteEvents::<>f__mg$cacheF
	EventFunction_1_t1475332338 * ___U3CU3Ef__mgU24cacheF_34;
	// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.ICancelHandler> UnityEngine.EventSystems.ExecuteEvents::<>f__mg$cache10
	EventFunction_1_t2658898854 * ___U3CU3Ef__mgU24cache10_35;

public:
	inline static int32_t get_offset_of_s_PointerEnterHandler_0() { return static_cast<int32_t>(offsetof(ExecuteEvents_t3484638744_StaticFields, ___s_PointerEnterHandler_0)); }
	inline EventFunction_1_t3995630009 * get_s_PointerEnterHandler_0() const { return ___s_PointerEnterHandler_0; }
	inline EventFunction_1_t3995630009 ** get_address_of_s_PointerEnterHandler_0() { return &___s_PointerEnterHandler_0; }
	inline void set_s_PointerEnterHandler_0(EventFunction_1_t3995630009 * value)
	{
		___s_PointerEnterHandler_0 = value;
		Il2CppCodeGenWriteBarrier((&___s_PointerEnterHandler_0), value);
	}

	inline static int32_t get_offset_of_s_PointerExitHandler_1() { return static_cast<int32_t>(offsetof(ExecuteEvents_t3484638744_StaticFields, ___s_PointerExitHandler_1)); }
	inline EventFunction_1_t2867327688 * get_s_PointerExitHandler_1() const { return ___s_PointerExitHandler_1; }
	inline EventFunction_1_t2867327688 ** get_address_of_s_PointerExitHandler_1() { return &___s_PointerExitHandler_1; }
	inline void set_s_PointerExitHandler_1(EventFunction_1_t2867327688 * value)
	{
		___s_PointerExitHandler_1 = value;
		Il2CppCodeGenWriteBarrier((&___s_PointerExitHandler_1), value);
	}

	inline static int32_t get_offset_of_s_PointerDownHandler_2() { return static_cast<int32_t>(offsetof(ExecuteEvents_t3484638744_StaticFields, ___s_PointerDownHandler_2)); }
	inline EventFunction_1_t64614563 * get_s_PointerDownHandler_2() const { return ___s_PointerDownHandler_2; }
	inline EventFunction_1_t64614563 ** get_address_of_s_PointerDownHandler_2() { return &___s_PointerDownHandler_2; }
	inline void set_s_PointerDownHandler_2(EventFunction_1_t64614563 * value)
	{
		___s_PointerDownHandler_2 = value;
		Il2CppCodeGenWriteBarrier((&___s_PointerDownHandler_2), value);
	}

	inline static int32_t get_offset_of_s_PointerUpHandler_3() { return static_cast<int32_t>(offsetof(ExecuteEvents_t3484638744_StaticFields, ___s_PointerUpHandler_3)); }
	inline EventFunction_1_t3256600500 * get_s_PointerUpHandler_3() const { return ___s_PointerUpHandler_3; }
	inline EventFunction_1_t3256600500 ** get_address_of_s_PointerUpHandler_3() { return &___s_PointerUpHandler_3; }
	inline void set_s_PointerUpHandler_3(EventFunction_1_t3256600500 * value)
	{
		___s_PointerUpHandler_3 = value;
		Il2CppCodeGenWriteBarrier((&___s_PointerUpHandler_3), value);
	}

	inline static int32_t get_offset_of_s_PointerClickHandler_4() { return static_cast<int32_t>(offsetof(ExecuteEvents_t3484638744_StaticFields, ___s_PointerClickHandler_4)); }
	inline EventFunction_1_t3111972472 * get_s_PointerClickHandler_4() const { return ___s_PointerClickHandler_4; }
	inline EventFunction_1_t3111972472 ** get_address_of_s_PointerClickHandler_4() { return &___s_PointerClickHandler_4; }
	inline void set_s_PointerClickHandler_4(EventFunction_1_t3111972472 * value)
	{
		___s_PointerClickHandler_4 = value;
		Il2CppCodeGenWriteBarrier((&___s_PointerClickHandler_4), value);
	}

	inline static int32_t get_offset_of_s_InitializePotentialDragHandler_5() { return static_cast<int32_t>(offsetof(ExecuteEvents_t3484638744_StaticFields, ___s_InitializePotentialDragHandler_5)); }
	inline EventFunction_1_t3587542510 * get_s_InitializePotentialDragHandler_5() const { return ___s_InitializePotentialDragHandler_5; }
	inline EventFunction_1_t3587542510 ** get_address_of_s_InitializePotentialDragHandler_5() { return &___s_InitializePotentialDragHandler_5; }
	inline void set_s_InitializePotentialDragHandler_5(EventFunction_1_t3587542510 * value)
	{
		___s_InitializePotentialDragHandler_5 = value;
		Il2CppCodeGenWriteBarrier((&___s_InitializePotentialDragHandler_5), value);
	}

	inline static int32_t get_offset_of_s_BeginDragHandler_6() { return static_cast<int32_t>(offsetof(ExecuteEvents_t3484638744_StaticFields, ___s_BeginDragHandler_6)); }
	inline EventFunction_1_t1977848392 * get_s_BeginDragHandler_6() const { return ___s_BeginDragHandler_6; }
	inline EventFunction_1_t1977848392 ** get_address_of_s_BeginDragHandler_6() { return &___s_BeginDragHandler_6; }
	inline void set_s_BeginDragHandler_6(EventFunction_1_t1977848392 * value)
	{
		___s_BeginDragHandler_6 = value;
		Il2CppCodeGenWriteBarrier((&___s_BeginDragHandler_6), value);
	}

	inline static int32_t get_offset_of_s_DragHandler_7() { return static_cast<int32_t>(offsetof(ExecuteEvents_t3484638744_StaticFields, ___s_DragHandler_7)); }
	inline EventFunction_1_t972960537 * get_s_DragHandler_7() const { return ___s_DragHandler_7; }
	inline EventFunction_1_t972960537 ** get_address_of_s_DragHandler_7() { return &___s_DragHandler_7; }
	inline void set_s_DragHandler_7(EventFunction_1_t972960537 * value)
	{
		___s_DragHandler_7 = value;
		Il2CppCodeGenWriteBarrier((&___s_DragHandler_7), value);
	}

	inline static int32_t get_offset_of_s_EndDragHandler_8() { return static_cast<int32_t>(offsetof(ExecuteEvents_t3484638744_StaticFields, ___s_EndDragHandler_8)); }
	inline EventFunction_1_t3277009892 * get_s_EndDragHandler_8() const { return ___s_EndDragHandler_8; }
	inline EventFunction_1_t3277009892 ** get_address_of_s_EndDragHandler_8() { return &___s_EndDragHandler_8; }
	inline void set_s_EndDragHandler_8(EventFunction_1_t3277009892 * value)
	{
		___s_EndDragHandler_8 = value;
		Il2CppCodeGenWriteBarrier((&___s_EndDragHandler_8), value);
	}

	inline static int32_t get_offset_of_s_DropHandler_9() { return static_cast<int32_t>(offsetof(ExecuteEvents_t3484638744_StaticFields, ___s_DropHandler_9)); }
	inline EventFunction_1_t2311673543 * get_s_DropHandler_9() const { return ___s_DropHandler_9; }
	inline EventFunction_1_t2311673543 ** get_address_of_s_DropHandler_9() { return &___s_DropHandler_9; }
	inline void set_s_DropHandler_9(EventFunction_1_t2311673543 * value)
	{
		___s_DropHandler_9 = value;
		Il2CppCodeGenWriteBarrier((&___s_DropHandler_9), value);
	}

	inline static int32_t get_offset_of_s_ScrollHandler_10() { return static_cast<int32_t>(offsetof(ExecuteEvents_t3484638744_StaticFields, ___s_ScrollHandler_10)); }
	inline EventFunction_1_t2886331738 * get_s_ScrollHandler_10() const { return ___s_ScrollHandler_10; }
	inline EventFunction_1_t2886331738 ** get_address_of_s_ScrollHandler_10() { return &___s_ScrollHandler_10; }
	inline void set_s_ScrollHandler_10(EventFunction_1_t2886331738 * value)
	{
		___s_ScrollHandler_10 = value;
		Il2CppCodeGenWriteBarrier((&___s_ScrollHandler_10), value);
	}

	inline static int32_t get_offset_of_s_UpdateSelectedHandler_11() { return static_cast<int32_t>(offsetof(ExecuteEvents_t3484638744_StaticFields, ___s_UpdateSelectedHandler_11)); }
	inline EventFunction_1_t2950825503 * get_s_UpdateSelectedHandler_11() const { return ___s_UpdateSelectedHandler_11; }
	inline EventFunction_1_t2950825503 ** get_address_of_s_UpdateSelectedHandler_11() { return &___s_UpdateSelectedHandler_11; }
	inline void set_s_UpdateSelectedHandler_11(EventFunction_1_t2950825503 * value)
	{
		___s_UpdateSelectedHandler_11 = value;
		Il2CppCodeGenWriteBarrier((&___s_UpdateSelectedHandler_11), value);
	}

	inline static int32_t get_offset_of_s_SelectHandler_12() { return static_cast<int32_t>(offsetof(ExecuteEvents_t3484638744_StaticFields, ___s_SelectHandler_12)); }
	inline EventFunction_1_t955952873 * get_s_SelectHandler_12() const { return ___s_SelectHandler_12; }
	inline EventFunction_1_t955952873 ** get_address_of_s_SelectHandler_12() { return &___s_SelectHandler_12; }
	inline void set_s_SelectHandler_12(EventFunction_1_t955952873 * value)
	{
		___s_SelectHandler_12 = value;
		Il2CppCodeGenWriteBarrier((&___s_SelectHandler_12), value);
	}

	inline static int32_t get_offset_of_s_DeselectHandler_13() { return static_cast<int32_t>(offsetof(ExecuteEvents_t3484638744_StaticFields, ___s_DeselectHandler_13)); }
	inline EventFunction_1_t3373214253 * get_s_DeselectHandler_13() const { return ___s_DeselectHandler_13; }
	inline EventFunction_1_t3373214253 ** get_address_of_s_DeselectHandler_13() { return &___s_DeselectHandler_13; }
	inline void set_s_DeselectHandler_13(EventFunction_1_t3373214253 * value)
	{
		___s_DeselectHandler_13 = value;
		Il2CppCodeGenWriteBarrier((&___s_DeselectHandler_13), value);
	}

	inline static int32_t get_offset_of_s_MoveHandler_14() { return static_cast<int32_t>(offsetof(ExecuteEvents_t3484638744_StaticFields, ___s_MoveHandler_14)); }
	inline EventFunction_1_t3912835512 * get_s_MoveHandler_14() const { return ___s_MoveHandler_14; }
	inline EventFunction_1_t3912835512 ** get_address_of_s_MoveHandler_14() { return &___s_MoveHandler_14; }
	inline void set_s_MoveHandler_14(EventFunction_1_t3912835512 * value)
	{
		___s_MoveHandler_14 = value;
		Il2CppCodeGenWriteBarrier((&___s_MoveHandler_14), value);
	}

	inline static int32_t get_offset_of_s_SubmitHandler_15() { return static_cast<int32_t>(offsetof(ExecuteEvents_t3484638744_StaticFields, ___s_SubmitHandler_15)); }
	inline EventFunction_1_t1475332338 * get_s_SubmitHandler_15() const { return ___s_SubmitHandler_15; }
	inline EventFunction_1_t1475332338 ** get_address_of_s_SubmitHandler_15() { return &___s_SubmitHandler_15; }
	inline void set_s_SubmitHandler_15(EventFunction_1_t1475332338 * value)
	{
		___s_SubmitHandler_15 = value;
		Il2CppCodeGenWriteBarrier((&___s_SubmitHandler_15), value);
	}

	inline static int32_t get_offset_of_s_CancelHandler_16() { return static_cast<int32_t>(offsetof(ExecuteEvents_t3484638744_StaticFields, ___s_CancelHandler_16)); }
	inline EventFunction_1_t2658898854 * get_s_CancelHandler_16() const { return ___s_CancelHandler_16; }
	inline EventFunction_1_t2658898854 ** get_address_of_s_CancelHandler_16() { return &___s_CancelHandler_16; }
	inline void set_s_CancelHandler_16(EventFunction_1_t2658898854 * value)
	{
		___s_CancelHandler_16 = value;
		Il2CppCodeGenWriteBarrier((&___s_CancelHandler_16), value);
	}

	inline static int32_t get_offset_of_s_HandlerListPool_17() { return static_cast<int32_t>(offsetof(ExecuteEvents_t3484638744_StaticFields, ___s_HandlerListPool_17)); }
	inline ObjectPool_1_t231414508 * get_s_HandlerListPool_17() const { return ___s_HandlerListPool_17; }
	inline ObjectPool_1_t231414508 ** get_address_of_s_HandlerListPool_17() { return &___s_HandlerListPool_17; }
	inline void set_s_HandlerListPool_17(ObjectPool_1_t231414508 * value)
	{
		___s_HandlerListPool_17 = value;
		Il2CppCodeGenWriteBarrier((&___s_HandlerListPool_17), value);
	}

	inline static int32_t get_offset_of_s_InternalTransformList_18() { return static_cast<int32_t>(offsetof(ExecuteEvents_t3484638744_StaticFields, ___s_InternalTransformList_18)); }
	inline List_1_t777473367 * get_s_InternalTransformList_18() const { return ___s_InternalTransformList_18; }
	inline List_1_t777473367 ** get_address_of_s_InternalTransformList_18() { return &___s_InternalTransformList_18; }
	inline void set_s_InternalTransformList_18(List_1_t777473367 * value)
	{
		___s_InternalTransformList_18 = value;
		Il2CppCodeGenWriteBarrier((&___s_InternalTransformList_18), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache0_19() { return static_cast<int32_t>(offsetof(ExecuteEvents_t3484638744_StaticFields, ___U3CU3Ef__mgU24cache0_19)); }
	inline EventFunction_1_t3995630009 * get_U3CU3Ef__mgU24cache0_19() const { return ___U3CU3Ef__mgU24cache0_19; }
	inline EventFunction_1_t3995630009 ** get_address_of_U3CU3Ef__mgU24cache0_19() { return &___U3CU3Ef__mgU24cache0_19; }
	inline void set_U3CU3Ef__mgU24cache0_19(EventFunction_1_t3995630009 * value)
	{
		___U3CU3Ef__mgU24cache0_19 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache0_19), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache1_20() { return static_cast<int32_t>(offsetof(ExecuteEvents_t3484638744_StaticFields, ___U3CU3Ef__mgU24cache1_20)); }
	inline EventFunction_1_t2867327688 * get_U3CU3Ef__mgU24cache1_20() const { return ___U3CU3Ef__mgU24cache1_20; }
	inline EventFunction_1_t2867327688 ** get_address_of_U3CU3Ef__mgU24cache1_20() { return &___U3CU3Ef__mgU24cache1_20; }
	inline void set_U3CU3Ef__mgU24cache1_20(EventFunction_1_t2867327688 * value)
	{
		___U3CU3Ef__mgU24cache1_20 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache1_20), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache2_21() { return static_cast<int32_t>(offsetof(ExecuteEvents_t3484638744_StaticFields, ___U3CU3Ef__mgU24cache2_21)); }
	inline EventFunction_1_t64614563 * get_U3CU3Ef__mgU24cache2_21() const { return ___U3CU3Ef__mgU24cache2_21; }
	inline EventFunction_1_t64614563 ** get_address_of_U3CU3Ef__mgU24cache2_21() { return &___U3CU3Ef__mgU24cache2_21; }
	inline void set_U3CU3Ef__mgU24cache2_21(EventFunction_1_t64614563 * value)
	{
		___U3CU3Ef__mgU24cache2_21 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache2_21), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache3_22() { return static_cast<int32_t>(offsetof(ExecuteEvents_t3484638744_StaticFields, ___U3CU3Ef__mgU24cache3_22)); }
	inline EventFunction_1_t3256600500 * get_U3CU3Ef__mgU24cache3_22() const { return ___U3CU3Ef__mgU24cache3_22; }
	inline EventFunction_1_t3256600500 ** get_address_of_U3CU3Ef__mgU24cache3_22() { return &___U3CU3Ef__mgU24cache3_22; }
	inline void set_U3CU3Ef__mgU24cache3_22(EventFunction_1_t3256600500 * value)
	{
		___U3CU3Ef__mgU24cache3_22 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache3_22), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache4_23() { return static_cast<int32_t>(offsetof(ExecuteEvents_t3484638744_StaticFields, ___U3CU3Ef__mgU24cache4_23)); }
	inline EventFunction_1_t3111972472 * get_U3CU3Ef__mgU24cache4_23() const { return ___U3CU3Ef__mgU24cache4_23; }
	inline EventFunction_1_t3111972472 ** get_address_of_U3CU3Ef__mgU24cache4_23() { return &___U3CU3Ef__mgU24cache4_23; }
	inline void set_U3CU3Ef__mgU24cache4_23(EventFunction_1_t3111972472 * value)
	{
		___U3CU3Ef__mgU24cache4_23 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache4_23), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache5_24() { return static_cast<int32_t>(offsetof(ExecuteEvents_t3484638744_StaticFields, ___U3CU3Ef__mgU24cache5_24)); }
	inline EventFunction_1_t3587542510 * get_U3CU3Ef__mgU24cache5_24() const { return ___U3CU3Ef__mgU24cache5_24; }
	inline EventFunction_1_t3587542510 ** get_address_of_U3CU3Ef__mgU24cache5_24() { return &___U3CU3Ef__mgU24cache5_24; }
	inline void set_U3CU3Ef__mgU24cache5_24(EventFunction_1_t3587542510 * value)
	{
		___U3CU3Ef__mgU24cache5_24 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache5_24), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache6_25() { return static_cast<int32_t>(offsetof(ExecuteEvents_t3484638744_StaticFields, ___U3CU3Ef__mgU24cache6_25)); }
	inline EventFunction_1_t1977848392 * get_U3CU3Ef__mgU24cache6_25() const { return ___U3CU3Ef__mgU24cache6_25; }
	inline EventFunction_1_t1977848392 ** get_address_of_U3CU3Ef__mgU24cache6_25() { return &___U3CU3Ef__mgU24cache6_25; }
	inline void set_U3CU3Ef__mgU24cache6_25(EventFunction_1_t1977848392 * value)
	{
		___U3CU3Ef__mgU24cache6_25 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache6_25), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache7_26() { return static_cast<int32_t>(offsetof(ExecuteEvents_t3484638744_StaticFields, ___U3CU3Ef__mgU24cache7_26)); }
	inline EventFunction_1_t972960537 * get_U3CU3Ef__mgU24cache7_26() const { return ___U3CU3Ef__mgU24cache7_26; }
	inline EventFunction_1_t972960537 ** get_address_of_U3CU3Ef__mgU24cache7_26() { return &___U3CU3Ef__mgU24cache7_26; }
	inline void set_U3CU3Ef__mgU24cache7_26(EventFunction_1_t972960537 * value)
	{
		___U3CU3Ef__mgU24cache7_26 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache7_26), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache8_27() { return static_cast<int32_t>(offsetof(ExecuteEvents_t3484638744_StaticFields, ___U3CU3Ef__mgU24cache8_27)); }
	inline EventFunction_1_t3277009892 * get_U3CU3Ef__mgU24cache8_27() const { return ___U3CU3Ef__mgU24cache8_27; }
	inline EventFunction_1_t3277009892 ** get_address_of_U3CU3Ef__mgU24cache8_27() { return &___U3CU3Ef__mgU24cache8_27; }
	inline void set_U3CU3Ef__mgU24cache8_27(EventFunction_1_t3277009892 * value)
	{
		___U3CU3Ef__mgU24cache8_27 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache8_27), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache9_28() { return static_cast<int32_t>(offsetof(ExecuteEvents_t3484638744_StaticFields, ___U3CU3Ef__mgU24cache9_28)); }
	inline EventFunction_1_t2311673543 * get_U3CU3Ef__mgU24cache9_28() const { return ___U3CU3Ef__mgU24cache9_28; }
	inline EventFunction_1_t2311673543 ** get_address_of_U3CU3Ef__mgU24cache9_28() { return &___U3CU3Ef__mgU24cache9_28; }
	inline void set_U3CU3Ef__mgU24cache9_28(EventFunction_1_t2311673543 * value)
	{
		___U3CU3Ef__mgU24cache9_28 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache9_28), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cacheA_29() { return static_cast<int32_t>(offsetof(ExecuteEvents_t3484638744_StaticFields, ___U3CU3Ef__mgU24cacheA_29)); }
	inline EventFunction_1_t2886331738 * get_U3CU3Ef__mgU24cacheA_29() const { return ___U3CU3Ef__mgU24cacheA_29; }
	inline EventFunction_1_t2886331738 ** get_address_of_U3CU3Ef__mgU24cacheA_29() { return &___U3CU3Ef__mgU24cacheA_29; }
	inline void set_U3CU3Ef__mgU24cacheA_29(EventFunction_1_t2886331738 * value)
	{
		___U3CU3Ef__mgU24cacheA_29 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cacheA_29), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cacheB_30() { return static_cast<int32_t>(offsetof(ExecuteEvents_t3484638744_StaticFields, ___U3CU3Ef__mgU24cacheB_30)); }
	inline EventFunction_1_t2950825503 * get_U3CU3Ef__mgU24cacheB_30() const { return ___U3CU3Ef__mgU24cacheB_30; }
	inline EventFunction_1_t2950825503 ** get_address_of_U3CU3Ef__mgU24cacheB_30() { return &___U3CU3Ef__mgU24cacheB_30; }
	inline void set_U3CU3Ef__mgU24cacheB_30(EventFunction_1_t2950825503 * value)
	{
		___U3CU3Ef__mgU24cacheB_30 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cacheB_30), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cacheC_31() { return static_cast<int32_t>(offsetof(ExecuteEvents_t3484638744_StaticFields, ___U3CU3Ef__mgU24cacheC_31)); }
	inline EventFunction_1_t955952873 * get_U3CU3Ef__mgU24cacheC_31() const { return ___U3CU3Ef__mgU24cacheC_31; }
	inline EventFunction_1_t955952873 ** get_address_of_U3CU3Ef__mgU24cacheC_31() { return &___U3CU3Ef__mgU24cacheC_31; }
	inline void set_U3CU3Ef__mgU24cacheC_31(EventFunction_1_t955952873 * value)
	{
		___U3CU3Ef__mgU24cacheC_31 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cacheC_31), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cacheD_32() { return static_cast<int32_t>(offsetof(ExecuteEvents_t3484638744_StaticFields, ___U3CU3Ef__mgU24cacheD_32)); }
	inline EventFunction_1_t3373214253 * get_U3CU3Ef__mgU24cacheD_32() const { return ___U3CU3Ef__mgU24cacheD_32; }
	inline EventFunction_1_t3373214253 ** get_address_of_U3CU3Ef__mgU24cacheD_32() { return &___U3CU3Ef__mgU24cacheD_32; }
	inline void set_U3CU3Ef__mgU24cacheD_32(EventFunction_1_t3373214253 * value)
	{
		___U3CU3Ef__mgU24cacheD_32 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cacheD_32), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cacheE_33() { return static_cast<int32_t>(offsetof(ExecuteEvents_t3484638744_StaticFields, ___U3CU3Ef__mgU24cacheE_33)); }
	inline EventFunction_1_t3912835512 * get_U3CU3Ef__mgU24cacheE_33() const { return ___U3CU3Ef__mgU24cacheE_33; }
	inline EventFunction_1_t3912835512 ** get_address_of_U3CU3Ef__mgU24cacheE_33() { return &___U3CU3Ef__mgU24cacheE_33; }
	inline void set_U3CU3Ef__mgU24cacheE_33(EventFunction_1_t3912835512 * value)
	{
		___U3CU3Ef__mgU24cacheE_33 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cacheE_33), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cacheF_34() { return static_cast<int32_t>(offsetof(ExecuteEvents_t3484638744_StaticFields, ___U3CU3Ef__mgU24cacheF_34)); }
	inline EventFunction_1_t1475332338 * get_U3CU3Ef__mgU24cacheF_34() const { return ___U3CU3Ef__mgU24cacheF_34; }
	inline EventFunction_1_t1475332338 ** get_address_of_U3CU3Ef__mgU24cacheF_34() { return &___U3CU3Ef__mgU24cacheF_34; }
	inline void set_U3CU3Ef__mgU24cacheF_34(EventFunction_1_t1475332338 * value)
	{
		___U3CU3Ef__mgU24cacheF_34 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cacheF_34), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache10_35() { return static_cast<int32_t>(offsetof(ExecuteEvents_t3484638744_StaticFields, ___U3CU3Ef__mgU24cache10_35)); }
	inline EventFunction_1_t2658898854 * get_U3CU3Ef__mgU24cache10_35() const { return ___U3CU3Ef__mgU24cache10_35; }
	inline EventFunction_1_t2658898854 ** get_address_of_U3CU3Ef__mgU24cache10_35() { return &___U3CU3Ef__mgU24cache10_35; }
	inline void set_U3CU3Ef__mgU24cache10_35(EventFunction_1_t2658898854 * value)
	{
		___U3CU3Ef__mgU24cache10_35 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache10_35), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXECUTEEVENTS_T3484638744_H
#ifndef MOUSESTATE_T384203932_H
#define MOUSESTATE_T384203932_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.EventSystems.PointerInputModule/MouseState
struct  MouseState_t384203932  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<UnityEngine.EventSystems.PointerInputModule/ButtonState> UnityEngine.EventSystems.PointerInputModule/MouseState::m_TrackedButtons
	List_1_t2329214678 * ___m_TrackedButtons_0;

public:
	inline static int32_t get_offset_of_m_TrackedButtons_0() { return static_cast<int32_t>(offsetof(MouseState_t384203932, ___m_TrackedButtons_0)); }
	inline List_1_t2329214678 * get_m_TrackedButtons_0() const { return ___m_TrackedButtons_0; }
	inline List_1_t2329214678 ** get_address_of_m_TrackedButtons_0() { return &___m_TrackedButtons_0; }
	inline void set_m_TrackedButtons_0(List_1_t2329214678 * value)
	{
		___m_TrackedButtons_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_TrackedButtons_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MOUSESTATE_T384203932_H
#ifndef RAYCASTERMANAGER_T2536340562_H
#define RAYCASTERMANAGER_T2536340562_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.EventSystems.RaycasterManager
struct  RaycasterManager_t2536340562  : public RuntimeObject
{
public:

public:
};

struct RaycasterManager_t2536340562_StaticFields
{
public:
	// System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster> UnityEngine.EventSystems.RaycasterManager::s_Raycasters
	List_1_t1327982029 * ___s_Raycasters_0;

public:
	inline static int32_t get_offset_of_s_Raycasters_0() { return static_cast<int32_t>(offsetof(RaycasterManager_t2536340562_StaticFields, ___s_Raycasters_0)); }
	inline List_1_t1327982029 * get_s_Raycasters_0() const { return ___s_Raycasters_0; }
	inline List_1_t1327982029 ** get_address_of_s_Raycasters_0() { return &___s_Raycasters_0; }
	inline void set_s_Raycasters_0(List_1_t1327982029 * value)
	{
		___s_Raycasters_0 = value;
		Il2CppCodeGenWriteBarrier((&___s_Raycasters_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RAYCASTERMANAGER_T2536340562_H
#ifndef UNITYEVENTBASE_T3960448221_H
#define UNITYEVENTBASE_T3960448221_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.UnityEventBase
struct  UnityEventBase_t3960448221  : public RuntimeObject
{
public:
	// UnityEngine.Events.InvokableCallList UnityEngine.Events.UnityEventBase::m_Calls
	InvokableCallList_t2498835369 * ___m_Calls_0;
	// UnityEngine.Events.PersistentCallGroup UnityEngine.Events.UnityEventBase::m_PersistentCalls
	PersistentCallGroup_t3050769227 * ___m_PersistentCalls_1;
	// System.String UnityEngine.Events.UnityEventBase::m_TypeName
	String_t* ___m_TypeName_2;
	// System.Boolean UnityEngine.Events.UnityEventBase::m_CallsDirty
	bool ___m_CallsDirty_3;

public:
	inline static int32_t get_offset_of_m_Calls_0() { return static_cast<int32_t>(offsetof(UnityEventBase_t3960448221, ___m_Calls_0)); }
	inline InvokableCallList_t2498835369 * get_m_Calls_0() const { return ___m_Calls_0; }
	inline InvokableCallList_t2498835369 ** get_address_of_m_Calls_0() { return &___m_Calls_0; }
	inline void set_m_Calls_0(InvokableCallList_t2498835369 * value)
	{
		___m_Calls_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_Calls_0), value);
	}

	inline static int32_t get_offset_of_m_PersistentCalls_1() { return static_cast<int32_t>(offsetof(UnityEventBase_t3960448221, ___m_PersistentCalls_1)); }
	inline PersistentCallGroup_t3050769227 * get_m_PersistentCalls_1() const { return ___m_PersistentCalls_1; }
	inline PersistentCallGroup_t3050769227 ** get_address_of_m_PersistentCalls_1() { return &___m_PersistentCalls_1; }
	inline void set_m_PersistentCalls_1(PersistentCallGroup_t3050769227 * value)
	{
		___m_PersistentCalls_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_PersistentCalls_1), value);
	}

	inline static int32_t get_offset_of_m_TypeName_2() { return static_cast<int32_t>(offsetof(UnityEventBase_t3960448221, ___m_TypeName_2)); }
	inline String_t* get_m_TypeName_2() const { return ___m_TypeName_2; }
	inline String_t** get_address_of_m_TypeName_2() { return &___m_TypeName_2; }
	inline void set_m_TypeName_2(String_t* value)
	{
		___m_TypeName_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_TypeName_2), value);
	}

	inline static int32_t get_offset_of_m_CallsDirty_3() { return static_cast<int32_t>(offsetof(UnityEventBase_t3960448221, ___m_CallsDirty_3)); }
	inline bool get_m_CallsDirty_3() const { return ___m_CallsDirty_3; }
	inline bool* get_address_of_m_CallsDirty_3() { return &___m_CallsDirty_3; }
	inline void set_m_CallsDirty_3(bool value)
	{
		___m_CallsDirty_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYEVENTBASE_T3960448221_H
#ifndef INTERNAL_SUBSYSTEMDESCRIPTORS_T691162017_H
#define INTERNAL_SUBSYSTEMDESCRIPTORS_T691162017_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.Internal_SubsystemDescriptors
struct  Internal_SubsystemDescriptors_t691162017  : public RuntimeObject
{
public:

public:
};

struct Internal_SubsystemDescriptors_t691162017_StaticFields
{
public:
	// System.Collections.Generic.List`1<UnityEngine.Experimental.ISubsystemDescriptorImpl> UnityEngine.Experimental.Internal_SubsystemDescriptors::s_SubsystemDescriptors
	List_1_t60503245 * ___s_SubsystemDescriptors_0;

public:
	inline static int32_t get_offset_of_s_SubsystemDescriptors_0() { return static_cast<int32_t>(offsetof(Internal_SubsystemDescriptors_t691162017_StaticFields, ___s_SubsystemDescriptors_0)); }
	inline List_1_t60503245 * get_s_SubsystemDescriptors_0() const { return ___s_SubsystemDescriptors_0; }
	inline List_1_t60503245 ** get_address_of_s_SubsystemDescriptors_0() { return &___s_SubsystemDescriptors_0; }
	inline void set_s_SubsystemDescriptors_0(List_1_t60503245 * value)
	{
		___s_SubsystemDescriptors_0 = value;
		Il2CppCodeGenWriteBarrier((&___s_SubsystemDescriptors_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTERNAL_SUBSYSTEMDESCRIPTORS_T691162017_H
#ifndef INTERNAL_SUBSYSTEMINSTANCES_T893566515_H
#define INTERNAL_SUBSYSTEMINSTANCES_T893566515_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.Internal_SubsystemInstances
struct  Internal_SubsystemInstances_t893566515  : public RuntimeObject
{
public:

public:
};

struct Internal_SubsystemInstances_t893566515_StaticFields
{
public:
	// System.Collections.Generic.List`1<UnityEngine.Experimental.Subsystem> UnityEngine.Experimental.Internal_SubsystemInstances::s_SubsystemInstances
	List_1_t1561798217 * ___s_SubsystemInstances_0;

public:
	inline static int32_t get_offset_of_s_SubsystemInstances_0() { return static_cast<int32_t>(offsetof(Internal_SubsystemInstances_t893566515_StaticFields, ___s_SubsystemInstances_0)); }
	inline List_1_t1561798217 * get_s_SubsystemInstances_0() const { return ___s_SubsystemInstances_0; }
	inline List_1_t1561798217 ** get_address_of_s_SubsystemInstances_0() { return &___s_SubsystemInstances_0; }
	inline void set_s_SubsystemInstances_0(List_1_t1561798217 * value)
	{
		___s_SubsystemInstances_0 = value;
		Il2CppCodeGenWriteBarrier((&___s_SubsystemInstances_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTERNAL_SUBSYSTEMINSTANCES_T893566515_H
#ifndef REMOTESETTINGS_T1718627291_H
#define REMOTESETTINGS_T1718627291_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.RemoteSettings
struct  RemoteSettings_t1718627291  : public RuntimeObject
{
public:

public:
};

struct RemoteSettings_t1718627291_StaticFields
{
public:
	// UnityEngine.RemoteSettings/UpdatedEventHandler UnityEngine.RemoteSettings::Updated
	UpdatedEventHandler_t1027848393 * ___Updated_0;
	// System.Action UnityEngine.RemoteSettings::BeforeFetchFromServer
	Action_t1264377477 * ___BeforeFetchFromServer_1;
	// System.Action`3<System.Boolean,System.Boolean,System.Int32> UnityEngine.RemoteSettings::Completed
	Action_3_t3050575418 * ___Completed_2;

public:
	inline static int32_t get_offset_of_Updated_0() { return static_cast<int32_t>(offsetof(RemoteSettings_t1718627291_StaticFields, ___Updated_0)); }
	inline UpdatedEventHandler_t1027848393 * get_Updated_0() const { return ___Updated_0; }
	inline UpdatedEventHandler_t1027848393 ** get_address_of_Updated_0() { return &___Updated_0; }
	inline void set_Updated_0(UpdatedEventHandler_t1027848393 * value)
	{
		___Updated_0 = value;
		Il2CppCodeGenWriteBarrier((&___Updated_0), value);
	}

	inline static int32_t get_offset_of_BeforeFetchFromServer_1() { return static_cast<int32_t>(offsetof(RemoteSettings_t1718627291_StaticFields, ___BeforeFetchFromServer_1)); }
	inline Action_t1264377477 * get_BeforeFetchFromServer_1() const { return ___BeforeFetchFromServer_1; }
	inline Action_t1264377477 ** get_address_of_BeforeFetchFromServer_1() { return &___BeforeFetchFromServer_1; }
	inline void set_BeforeFetchFromServer_1(Action_t1264377477 * value)
	{
		___BeforeFetchFromServer_1 = value;
		Il2CppCodeGenWriteBarrier((&___BeforeFetchFromServer_1), value);
	}

	inline static int32_t get_offset_of_Completed_2() { return static_cast<int32_t>(offsetof(RemoteSettings_t1718627291_StaticFields, ___Completed_2)); }
	inline Action_3_t3050575418 * get_Completed_2() const { return ___Completed_2; }
	inline Action_3_t3050575418 ** get_address_of_Completed_2() { return &___Completed_2; }
	inline void set_Completed_2(Action_3_t3050575418 * value)
	{
		___Completed_2 = value;
		Il2CppCodeGenWriteBarrier((&___Completed_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REMOTESETTINGS_T1718627291_H
#ifndef INPUTTRACKING_T2240286067_H
#define INPUTTRACKING_T2240286067_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.InputTracking
struct  InputTracking_t2240286067  : public RuntimeObject
{
public:

public:
};

struct InputTracking_t2240286067_StaticFields
{
public:
	// System.Action`1<UnityEngine.XR.XRNodeState> UnityEngine.XR.InputTracking::trackingAcquired
	Action_1_t3925070025 * ___trackingAcquired_0;
	// System.Action`1<UnityEngine.XR.XRNodeState> UnityEngine.XR.InputTracking::trackingLost
	Action_1_t3925070025 * ___trackingLost_1;
	// System.Action`1<UnityEngine.XR.XRNodeState> UnityEngine.XR.InputTracking::nodeAdded
	Action_1_t3925070025 * ___nodeAdded_2;
	// System.Action`1<UnityEngine.XR.XRNodeState> UnityEngine.XR.InputTracking::nodeRemoved
	Action_1_t3925070025 * ___nodeRemoved_3;

public:
	inline static int32_t get_offset_of_trackingAcquired_0() { return static_cast<int32_t>(offsetof(InputTracking_t2240286067_StaticFields, ___trackingAcquired_0)); }
	inline Action_1_t3925070025 * get_trackingAcquired_0() const { return ___trackingAcquired_0; }
	inline Action_1_t3925070025 ** get_address_of_trackingAcquired_0() { return &___trackingAcquired_0; }
	inline void set_trackingAcquired_0(Action_1_t3925070025 * value)
	{
		___trackingAcquired_0 = value;
		Il2CppCodeGenWriteBarrier((&___trackingAcquired_0), value);
	}

	inline static int32_t get_offset_of_trackingLost_1() { return static_cast<int32_t>(offsetof(InputTracking_t2240286067_StaticFields, ___trackingLost_1)); }
	inline Action_1_t3925070025 * get_trackingLost_1() const { return ___trackingLost_1; }
	inline Action_1_t3925070025 ** get_address_of_trackingLost_1() { return &___trackingLost_1; }
	inline void set_trackingLost_1(Action_1_t3925070025 * value)
	{
		___trackingLost_1 = value;
		Il2CppCodeGenWriteBarrier((&___trackingLost_1), value);
	}

	inline static int32_t get_offset_of_nodeAdded_2() { return static_cast<int32_t>(offsetof(InputTracking_t2240286067_StaticFields, ___nodeAdded_2)); }
	inline Action_1_t3925070025 * get_nodeAdded_2() const { return ___nodeAdded_2; }
	inline Action_1_t3925070025 ** get_address_of_nodeAdded_2() { return &___nodeAdded_2; }
	inline void set_nodeAdded_2(Action_1_t3925070025 * value)
	{
		___nodeAdded_2 = value;
		Il2CppCodeGenWriteBarrier((&___nodeAdded_2), value);
	}

	inline static int32_t get_offset_of_nodeRemoved_3() { return static_cast<int32_t>(offsetof(InputTracking_t2240286067_StaticFields, ___nodeRemoved_3)); }
	inline Action_1_t3925070025 * get_nodeRemoved_3() const { return ___nodeRemoved_3; }
	inline Action_1_t3925070025 ** get_address_of_nodeRemoved_3() { return &___nodeRemoved_3; }
	inline void set_nodeRemoved_3(Action_1_t3925070025 * value)
	{
		___nodeRemoved_3 = value;
		Il2CppCodeGenWriteBarrier((&___nodeRemoved_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INPUTTRACKING_T2240286067_H
#ifndef WEBREQUESTUTILS_T3541624225_H
#define WEBREQUESTUTILS_T3541624225_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngineInternal.WebRequestUtils
struct  WebRequestUtils_t3541624225  : public RuntimeObject
{
public:

public:
};

struct WebRequestUtils_t3541624225_StaticFields
{
public:
	// System.Text.RegularExpressions.Regex UnityEngineInternal.WebRequestUtils::domainRegex
	Regex_t3657309853 * ___domainRegex_0;

public:
	inline static int32_t get_offset_of_domainRegex_0() { return static_cast<int32_t>(offsetof(WebRequestUtils_t3541624225_StaticFields, ___domainRegex_0)); }
	inline Regex_t3657309853 * get_domainRegex_0() const { return ___domainRegex_0; }
	inline Regex_t3657309853 ** get_address_of_domainRegex_0() { return &___domainRegex_0; }
	inline void set_domainRegex_0(Regex_t3657309853 * value)
	{
		___domainRegex_0 = value;
		Il2CppCodeGenWriteBarrier((&___domainRegex_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WEBREQUESTUTILS_T3541624225_H
#ifndef DOUBLE_T594665363_H
#define DOUBLE_T594665363_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Double
struct  Double_t594665363 
{
public:
	// System.Double System.Double::m_value
	double ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Double_t594665363, ___m_value_0)); }
	inline double get_m_value_0() const { return ___m_value_0; }
	inline double* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(double value)
	{
		___m_value_0 = value;
	}
};

struct Double_t594665363_StaticFields
{
public:
	// System.Double System.Double::NegativeZero
	double ___NegativeZero_7;

public:
	inline static int32_t get_offset_of_NegativeZero_7() { return static_cast<int32_t>(offsetof(Double_t594665363_StaticFields, ___NegativeZero_7)); }
	inline double get_NegativeZero_7() const { return ___NegativeZero_7; }
	inline double* get_address_of_NegativeZero_7() { return &___NegativeZero_7; }
	inline void set_NegativeZero_7(double value)
	{
		___NegativeZero_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DOUBLE_T594665363_H
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
#ifndef BASEEVENTDATA_T3903027533_H
#define BASEEVENTDATA_T3903027533_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.EventSystems.BaseEventData
struct  BaseEventData_t3903027533  : public AbstractEventData_t4171500731
{
public:
	// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.BaseEventData::m_EventSystem
	EventSystem_t1003666588 * ___m_EventSystem_1;

public:
	inline static int32_t get_offset_of_m_EventSystem_1() { return static_cast<int32_t>(offsetof(BaseEventData_t3903027533, ___m_EventSystem_1)); }
	inline EventSystem_t1003666588 * get_m_EventSystem_1() const { return ___m_EventSystem_1; }
	inline EventSystem_t1003666588 ** get_address_of_m_EventSystem_1() { return &___m_EventSystem_1; }
	inline void set_m_EventSystem_1(EventSystem_t1003666588 * value)
	{
		___m_EventSystem_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_EventSystem_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BASEEVENTDATA_T3903027533_H
#ifndef UNITYEVENT_1_T489719741_H
#define UNITYEVENT_1_T489719741_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.UnityEvent`1<UnityEngine.EventSystems.BaseEventData>
struct  UnityEvent_1_t489719741  : public UnityEventBase_t3960448221
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_t2843939325* ___m_InvokeArray_4;

public:
	inline static int32_t get_offset_of_m_InvokeArray_4() { return static_cast<int32_t>(offsetof(UnityEvent_1_t489719741, ___m_InvokeArray_4)); }
	inline ObjectU5BU5D_t2843939325* get_m_InvokeArray_4() const { return ___m_InvokeArray_4; }
	inline ObjectU5BU5D_t2843939325** get_address_of_m_InvokeArray_4() { return &___m_InvokeArray_4; }
	inline void set_m_InvokeArray_4(ObjectU5BU5D_t2843939325* value)
	{
		___m_InvokeArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_InvokeArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYEVENT_1_T489719741_H
#ifndef FRAMERECEIVEDEVENTARGS_T2588080103_H
#define FRAMERECEIVEDEVENTARGS_T2588080103_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.XR.FrameReceivedEventArgs
struct  FrameReceivedEventArgs_t2588080103 
{
public:
	// UnityEngine.Experimental.XR.XRCameraSubsystem UnityEngine.Experimental.XR.FrameReceivedEventArgs::m_CameraSubsystem
	XRCameraSubsystem_t4195795144 * ___m_CameraSubsystem_0;

public:
	inline static int32_t get_offset_of_m_CameraSubsystem_0() { return static_cast<int32_t>(offsetof(FrameReceivedEventArgs_t2588080103, ___m_CameraSubsystem_0)); }
	inline XRCameraSubsystem_t4195795144 * get_m_CameraSubsystem_0() const { return ___m_CameraSubsystem_0; }
	inline XRCameraSubsystem_t4195795144 ** get_address_of_m_CameraSubsystem_0() { return &___m_CameraSubsystem_0; }
	inline void set_m_CameraSubsystem_0(XRCameraSubsystem_t4195795144 * value)
	{
		___m_CameraSubsystem_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_CameraSubsystem_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Experimental.XR.FrameReceivedEventArgs
struct FrameReceivedEventArgs_t2588080103_marshaled_pinvoke
{
	XRCameraSubsystem_t4195795144 * ___m_CameraSubsystem_0;
};
// Native definition for COM marshalling of UnityEngine.Experimental.XR.FrameReceivedEventArgs
struct FrameReceivedEventArgs_t2588080103_marshaled_com
{
	XRCameraSubsystem_t4195795144 * ___m_CameraSubsystem_0;
};
#endif // FRAMERECEIVEDEVENTARGS_T2588080103_H
#ifndef POINTCLOUDUPDATEDEVENTARGS_T3436657348_H
#define POINTCLOUDUPDATEDEVENTARGS_T3436657348_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.XR.PointCloudUpdatedEventArgs
struct  PointCloudUpdatedEventArgs_t3436657348 
{
public:
	// UnityEngine.Experimental.XR.XRDepthSubsystem UnityEngine.Experimental.XR.PointCloudUpdatedEventArgs::m_DepthSubsystem
	XRDepthSubsystem_t4084359858 * ___m_DepthSubsystem_0;

public:
	inline static int32_t get_offset_of_m_DepthSubsystem_0() { return static_cast<int32_t>(offsetof(PointCloudUpdatedEventArgs_t3436657348, ___m_DepthSubsystem_0)); }
	inline XRDepthSubsystem_t4084359858 * get_m_DepthSubsystem_0() const { return ___m_DepthSubsystem_0; }
	inline XRDepthSubsystem_t4084359858 ** get_address_of_m_DepthSubsystem_0() { return &___m_DepthSubsystem_0; }
	inline void set_m_DepthSubsystem_0(XRDepthSubsystem_t4084359858 * value)
	{
		___m_DepthSubsystem_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_DepthSubsystem_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Experimental.XR.PointCloudUpdatedEventArgs
struct PointCloudUpdatedEventArgs_t3436657348_marshaled_pinvoke
{
	XRDepthSubsystem_t4084359858 * ___m_DepthSubsystem_0;
};
// Native definition for COM marshalling of UnityEngine.Experimental.XR.PointCloudUpdatedEventArgs
struct PointCloudUpdatedEventArgs_t3436657348_marshaled_com
{
	XRDepthSubsystem_t4084359858 * ___m_DepthSubsystem_0;
};
#endif // POINTCLOUDUPDATEDEVENTARGS_T3436657348_H
#ifndef TRACKABLEID_T1251031970_H
#define TRACKABLEID_T1251031970_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.XR.TrackableId
struct  TrackableId_t1251031970 
{
public:
	// System.UInt64 UnityEngine.Experimental.XR.TrackableId::m_SubId1
	uint64_t ___m_SubId1_1;
	// System.UInt64 UnityEngine.Experimental.XR.TrackableId::m_SubId2
	uint64_t ___m_SubId2_2;

public:
	inline static int32_t get_offset_of_m_SubId1_1() { return static_cast<int32_t>(offsetof(TrackableId_t1251031970, ___m_SubId1_1)); }
	inline uint64_t get_m_SubId1_1() const { return ___m_SubId1_1; }
	inline uint64_t* get_address_of_m_SubId1_1() { return &___m_SubId1_1; }
	inline void set_m_SubId1_1(uint64_t value)
	{
		___m_SubId1_1 = value;
	}

	inline static int32_t get_offset_of_m_SubId2_2() { return static_cast<int32_t>(offsetof(TrackableId_t1251031970, ___m_SubId2_2)); }
	inline uint64_t get_m_SubId2_2() const { return ___m_SubId2_2; }
	inline uint64_t* get_address_of_m_SubId2_2() { return &___m_SubId2_2; }
	inline void set_m_SubId2_2(uint64_t value)
	{
		___m_SubId2_2 = value;
	}
};

struct TrackableId_t1251031970_StaticFields
{
public:
	// UnityEngine.Experimental.XR.TrackableId UnityEngine.Experimental.XR.TrackableId::s_InvalidId
	TrackableId_t1251031970  ___s_InvalidId_0;

public:
	inline static int32_t get_offset_of_s_InvalidId_0() { return static_cast<int32_t>(offsetof(TrackableId_t1251031970_StaticFields, ___s_InvalidId_0)); }
	inline TrackableId_t1251031970  get_s_InvalidId_0() const { return ___s_InvalidId_0; }
	inline TrackableId_t1251031970 * get_address_of_s_InvalidId_0() { return &___s_InvalidId_0; }
	inline void set_s_InvalidId_0(TrackableId_t1251031970  value)
	{
		___s_InvalidId_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRACKABLEID_T1251031970_H
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
#ifndef EVENTHANDLE_T600343995_H
#define EVENTHANDLE_T600343995_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.EventSystems.EventHandle
struct  EventHandle_t600343995 
{
public:
	// System.Int32 UnityEngine.EventSystems.EventHandle::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(EventHandle_t600343995, ___value___2)); }
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
#endif // EVENTHANDLE_T600343995_H
#ifndef TRIGGEREVENT_T3867320123_H
#define TRIGGEREVENT_T3867320123_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.EventSystems.EventTrigger/TriggerEvent
struct  TriggerEvent_t3867320123  : public UnityEvent_1_t489719741
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRIGGEREVENT_T3867320123_H
#ifndef EVENTTRIGGERTYPE_T55832929_H
#define EVENTTRIGGERTYPE_T55832929_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.EventSystems.EventTriggerType
struct  EventTriggerType_t55832929 
{
public:
	// System.Int32 UnityEngine.EventSystems.EventTriggerType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(EventTriggerType_t55832929, ___value___2)); }
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
#endif // EVENTTRIGGERTYPE_T55832929_H
#ifndef MOVEDIRECTION_T1216237838_H
#define MOVEDIRECTION_T1216237838_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.EventSystems.MoveDirection
struct  MoveDirection_t1216237838 
{
public:
	// System.Int32 UnityEngine.EventSystems.MoveDirection::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(MoveDirection_t1216237838, ___value___2)); }
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
#endif // MOVEDIRECTION_T1216237838_H
#ifndef FRAMEPRESSSTATE_T3039385657_H
#define FRAMEPRESSSTATE_T3039385657_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.EventSystems.PointerEventData/FramePressState
struct  FramePressState_t3039385657 
{
public:
	// System.Int32 UnityEngine.EventSystems.PointerEventData/FramePressState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FramePressState_t3039385657, ___value___2)); }
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
#endif // FRAMEPRESSSTATE_T3039385657_H
#ifndef INPUTBUTTON_T3704011348_H
#define INPUTBUTTON_T3704011348_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.EventSystems.PointerEventData/InputButton
struct  InputButton_t3704011348 
{
public:
	// System.Int32 UnityEngine.EventSystems.PointerEventData/InputButton::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(InputButton_t3704011348, ___value___2)); }
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
#endif // INPUTBUTTON_T3704011348_H
#ifndef RAYCASTRESULT_T3360306849_H
#define RAYCASTRESULT_T3360306849_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.EventSystems.RaycastResult
struct  RaycastResult_t3360306849 
{
public:
	// UnityEngine.GameObject UnityEngine.EventSystems.RaycastResult::m_GameObject
	GameObject_t1113636619 * ___m_GameObject_0;
	// UnityEngine.EventSystems.BaseRaycaster UnityEngine.EventSystems.RaycastResult::module
	BaseRaycaster_t4150874583 * ___module_1;
	// System.Single UnityEngine.EventSystems.RaycastResult::distance
	float ___distance_2;
	// System.Single UnityEngine.EventSystems.RaycastResult::index
	float ___index_3;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::depth
	int32_t ___depth_4;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::sortingLayer
	int32_t ___sortingLayer_5;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::sortingOrder
	int32_t ___sortingOrder_6;
	// UnityEngine.Vector3 UnityEngine.EventSystems.RaycastResult::worldPosition
	Vector3_t3722313464  ___worldPosition_7;
	// UnityEngine.Vector3 UnityEngine.EventSystems.RaycastResult::worldNormal
	Vector3_t3722313464  ___worldNormal_8;
	// UnityEngine.Vector2 UnityEngine.EventSystems.RaycastResult::screenPosition
	Vector2_t2156229523  ___screenPosition_9;

public:
	inline static int32_t get_offset_of_m_GameObject_0() { return static_cast<int32_t>(offsetof(RaycastResult_t3360306849, ___m_GameObject_0)); }
	inline GameObject_t1113636619 * get_m_GameObject_0() const { return ___m_GameObject_0; }
	inline GameObject_t1113636619 ** get_address_of_m_GameObject_0() { return &___m_GameObject_0; }
	inline void set_m_GameObject_0(GameObject_t1113636619 * value)
	{
		___m_GameObject_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_GameObject_0), value);
	}

	inline static int32_t get_offset_of_module_1() { return static_cast<int32_t>(offsetof(RaycastResult_t3360306849, ___module_1)); }
	inline BaseRaycaster_t4150874583 * get_module_1() const { return ___module_1; }
	inline BaseRaycaster_t4150874583 ** get_address_of_module_1() { return &___module_1; }
	inline void set_module_1(BaseRaycaster_t4150874583 * value)
	{
		___module_1 = value;
		Il2CppCodeGenWriteBarrier((&___module_1), value);
	}

	inline static int32_t get_offset_of_distance_2() { return static_cast<int32_t>(offsetof(RaycastResult_t3360306849, ___distance_2)); }
	inline float get_distance_2() const { return ___distance_2; }
	inline float* get_address_of_distance_2() { return &___distance_2; }
	inline void set_distance_2(float value)
	{
		___distance_2 = value;
	}

	inline static int32_t get_offset_of_index_3() { return static_cast<int32_t>(offsetof(RaycastResult_t3360306849, ___index_3)); }
	inline float get_index_3() const { return ___index_3; }
	inline float* get_address_of_index_3() { return &___index_3; }
	inline void set_index_3(float value)
	{
		___index_3 = value;
	}

	inline static int32_t get_offset_of_depth_4() { return static_cast<int32_t>(offsetof(RaycastResult_t3360306849, ___depth_4)); }
	inline int32_t get_depth_4() const { return ___depth_4; }
	inline int32_t* get_address_of_depth_4() { return &___depth_4; }
	inline void set_depth_4(int32_t value)
	{
		___depth_4 = value;
	}

	inline static int32_t get_offset_of_sortingLayer_5() { return static_cast<int32_t>(offsetof(RaycastResult_t3360306849, ___sortingLayer_5)); }
	inline int32_t get_sortingLayer_5() const { return ___sortingLayer_5; }
	inline int32_t* get_address_of_sortingLayer_5() { return &___sortingLayer_5; }
	inline void set_sortingLayer_5(int32_t value)
	{
		___sortingLayer_5 = value;
	}

	inline static int32_t get_offset_of_sortingOrder_6() { return static_cast<int32_t>(offsetof(RaycastResult_t3360306849, ___sortingOrder_6)); }
	inline int32_t get_sortingOrder_6() const { return ___sortingOrder_6; }
	inline int32_t* get_address_of_sortingOrder_6() { return &___sortingOrder_6; }
	inline void set_sortingOrder_6(int32_t value)
	{
		___sortingOrder_6 = value;
	}

	inline static int32_t get_offset_of_worldPosition_7() { return static_cast<int32_t>(offsetof(RaycastResult_t3360306849, ___worldPosition_7)); }
	inline Vector3_t3722313464  get_worldPosition_7() const { return ___worldPosition_7; }
	inline Vector3_t3722313464 * get_address_of_worldPosition_7() { return &___worldPosition_7; }
	inline void set_worldPosition_7(Vector3_t3722313464  value)
	{
		___worldPosition_7 = value;
	}

	inline static int32_t get_offset_of_worldNormal_8() { return static_cast<int32_t>(offsetof(RaycastResult_t3360306849, ___worldNormal_8)); }
	inline Vector3_t3722313464  get_worldNormal_8() const { return ___worldNormal_8; }
	inline Vector3_t3722313464 * get_address_of_worldNormal_8() { return &___worldNormal_8; }
	inline void set_worldNormal_8(Vector3_t3722313464  value)
	{
		___worldNormal_8 = value;
	}

	inline static int32_t get_offset_of_screenPosition_9() { return static_cast<int32_t>(offsetof(RaycastResult_t3360306849, ___screenPosition_9)); }
	inline Vector2_t2156229523  get_screenPosition_9() const { return ___screenPosition_9; }
	inline Vector2_t2156229523 * get_address_of_screenPosition_9() { return &___screenPosition_9; }
	inline void set_screenPosition_9(Vector2_t2156229523  value)
	{
		___screenPosition_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.EventSystems.RaycastResult
struct RaycastResult_t3360306849_marshaled_pinvoke
{
	GameObject_t1113636619 * ___m_GameObject_0;
	BaseRaycaster_t4150874583 * ___module_1;
	float ___distance_2;
	float ___index_3;
	int32_t ___depth_4;
	int32_t ___sortingLayer_5;
	int32_t ___sortingOrder_6;
	Vector3_t3722313464  ___worldPosition_7;
	Vector3_t3722313464  ___worldNormal_8;
	Vector2_t2156229523  ___screenPosition_9;
};
// Native definition for COM marshalling of UnityEngine.EventSystems.RaycastResult
struct RaycastResult_t3360306849_marshaled_com
{
	GameObject_t1113636619 * ___m_GameObject_0;
	BaseRaycaster_t4150874583 * ___module_1;
	float ___distance_2;
	float ___index_3;
	int32_t ___depth_4;
	int32_t ___sortingLayer_5;
	int32_t ___sortingOrder_6;
	Vector3_t3722313464  ___worldPosition_7;
	Vector3_t3722313464  ___worldNormal_8;
	Vector2_t2156229523  ___screenPosition_9;
};
#endif // RAYCASTRESULT_T3360306849_H
#ifndef SUBSYSTEM_T89723475_H
#define SUBSYSTEM_T89723475_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.Subsystem
struct  Subsystem_t89723475  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Experimental.Subsystem::m_Ptr
	intptr_t ___m_Ptr_0;
	// UnityEngine.Experimental.ISubsystemDescriptor UnityEngine.Experimental.Subsystem::m_subsystemDescriptor
	RuntimeObject* ___m_subsystemDescriptor_1;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(Subsystem_t89723475, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}

	inline static int32_t get_offset_of_m_subsystemDescriptor_1() { return static_cast<int32_t>(offsetof(Subsystem_t89723475, ___m_subsystemDescriptor_1)); }
	inline RuntimeObject* get_m_subsystemDescriptor_1() const { return ___m_subsystemDescriptor_1; }
	inline RuntimeObject** get_address_of_m_subsystemDescriptor_1() { return &___m_subsystemDescriptor_1; }
	inline void set_m_subsystemDescriptor_1(RuntimeObject* value)
	{
		___m_subsystemDescriptor_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_subsystemDescriptor_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Experimental.Subsystem
struct Subsystem_t89723475_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	RuntimeObject* ___m_subsystemDescriptor_1;
};
// Native definition for COM marshalling of UnityEngine.Experimental.Subsystem
struct Subsystem_t89723475_marshaled_com
{
	intptr_t ___m_Ptr_0;
	RuntimeObject* ___m_subsystemDescriptor_1;
};
#endif // SUBSYSTEM_T89723475_H
#ifndef SUBSYSTEMDESCRIPTORBASE_T2374447182_H
#define SUBSYSTEMDESCRIPTORBASE_T2374447182_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.SubsystemDescriptorBase
struct  SubsystemDescriptorBase_t2374447182  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Experimental.SubsystemDescriptorBase::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(SubsystemDescriptorBase_t2374447182, ___m_Ptr_0)); }
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
// Native definition for P/Invoke marshalling of UnityEngine.Experimental.SubsystemDescriptorBase
struct SubsystemDescriptorBase_t2374447182_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Experimental.SubsystemDescriptorBase
struct SubsystemDescriptorBase_t2374447182_marshaled_com
{
	intptr_t ___m_Ptr_0;
};
#endif // SUBSYSTEMDESCRIPTORBASE_T2374447182_H
#ifndef PLANEALIGNMENT_T1259054711_H
#define PLANEALIGNMENT_T1259054711_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.XR.PlaneAlignment
struct  PlaneAlignment_t1259054711 
{
public:
	// System.Int32 UnityEngine.Experimental.XR.PlaneAlignment::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PlaneAlignment_t1259054711, ___value___2)); }
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
#endif // PLANEALIGNMENT_T1259054711_H
#ifndef TRACKINGSTATE_T1935085052_H
#define TRACKINGSTATE_T1935085052_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.XR.TrackingState
struct  TrackingState_t1935085052 
{
public:
	// System.Int32 UnityEngine.Experimental.XR.TrackingState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TrackingState_t1935085052, ___value___2)); }
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
#endif // TRACKINGSTATE_T1935085052_H
#ifndef CERTIFICATEHANDLER_T2739891000_H
#define CERTIFICATEHANDLER_T2739891000_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.CertificateHandler
struct  CertificateHandler_t2739891000  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Networking.CertificateHandler::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(CertificateHandler_t2739891000, ___m_Ptr_0)); }
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
// Native definition for P/Invoke marshalling of UnityEngine.Networking.CertificateHandler
struct CertificateHandler_t2739891000_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Networking.CertificateHandler
struct CertificateHandler_t2739891000_marshaled_com
{
	intptr_t ___m_Ptr_0;
};
#endif // CERTIFICATEHANDLER_T2739891000_H
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
#ifndef PLAYABLEHANDLE_T1095853803_H
#define PLAYABLEHANDLE_T1095853803_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Playables.PlayableHandle
struct  PlayableHandle_t1095853803 
{
public:
	// System.IntPtr UnityEngine.Playables.PlayableHandle::m_Handle
	intptr_t ___m_Handle_0;
	// System.UInt32 UnityEngine.Playables.PlayableHandle::m_Version
	uint32_t ___m_Version_1;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(PlayableHandle_t1095853803, ___m_Handle_0)); }
	inline intptr_t get_m_Handle_0() const { return ___m_Handle_0; }
	inline intptr_t* get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(intptr_t value)
	{
		___m_Handle_0 = value;
	}

	inline static int32_t get_offset_of_m_Version_1() { return static_cast<int32_t>(offsetof(PlayableHandle_t1095853803, ___m_Version_1)); }
	inline uint32_t get_m_Version_1() const { return ___m_Version_1; }
	inline uint32_t* get_address_of_m_Version_1() { return &___m_Version_1; }
	inline void set_m_Version_1(uint32_t value)
	{
		___m_Version_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYABLEHANDLE_T1095853803_H
#ifndef POSE_T545244865_H
#define POSE_T545244865_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Pose
struct  Pose_t545244865 
{
public:
	// UnityEngine.Vector3 UnityEngine.Pose::position
	Vector3_t3722313464  ___position_0;
	// UnityEngine.Quaternion UnityEngine.Pose::rotation
	Quaternion_t2301928331  ___rotation_1;

public:
	inline static int32_t get_offset_of_position_0() { return static_cast<int32_t>(offsetof(Pose_t545244865, ___position_0)); }
	inline Vector3_t3722313464  get_position_0() const { return ___position_0; }
	inline Vector3_t3722313464 * get_address_of_position_0() { return &___position_0; }
	inline void set_position_0(Vector3_t3722313464  value)
	{
		___position_0 = value;
	}

	inline static int32_t get_offset_of_rotation_1() { return static_cast<int32_t>(offsetof(Pose_t545244865, ___rotation_1)); }
	inline Quaternion_t2301928331  get_rotation_1() const { return ___rotation_1; }
	inline Quaternion_t2301928331 * get_address_of_rotation_1() { return &___rotation_1; }
	inline void set_rotation_1(Quaternion_t2301928331  value)
	{
		___rotation_1 = value;
	}
};

struct Pose_t545244865_StaticFields
{
public:
	// UnityEngine.Pose UnityEngine.Pose::k_Identity
	Pose_t545244865  ___k_Identity_2;

public:
	inline static int32_t get_offset_of_k_Identity_2() { return static_cast<int32_t>(offsetof(Pose_t545244865_StaticFields, ___k_Identity_2)); }
	inline Pose_t545244865  get_k_Identity_2() const { return ___k_Identity_2; }
	inline Pose_t545244865 * get_address_of_k_Identity_2() { return &___k_Identity_2; }
	inline void set_k_Identity_2(Pose_t545244865  value)
	{
		___k_Identity_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // POSE_T545244865_H
#ifndef REMOTECONFIGSETTINGS_T1247263429_H
#define REMOTECONFIGSETTINGS_T1247263429_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.RemoteConfigSettings
struct  RemoteConfigSettings_t1247263429  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.RemoteConfigSettings::m_Ptr
	intptr_t ___m_Ptr_0;
	// System.Action`1<System.Boolean> UnityEngine.RemoteConfigSettings::Updated
	Action_1_t269755560 * ___Updated_1;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(RemoteConfigSettings_t1247263429, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}

	inline static int32_t get_offset_of_Updated_1() { return static_cast<int32_t>(offsetof(RemoteConfigSettings_t1247263429, ___Updated_1)); }
	inline Action_1_t269755560 * get_Updated_1() const { return ___Updated_1; }
	inline Action_1_t269755560 ** get_address_of_Updated_1() { return &___Updated_1; }
	inline void set_Updated_1(Action_1_t269755560 * value)
	{
		___Updated_1 = value;
		Il2CppCodeGenWriteBarrier((&___Updated_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.RemoteConfigSettings
struct RemoteConfigSettings_t1247263429_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	Il2CppMethodPointer ___Updated_1;
};
// Native definition for COM marshalling of UnityEngine.RemoteConfigSettings
struct RemoteConfigSettings_t1247263429_marshaled_com
{
	intptr_t ___m_Ptr_0;
	Il2CppMethodPointer ___Updated_1;
};
#endif // REMOTECONFIGSETTINGS_T1247263429_H
#ifndef VIDEO3DLAYOUT_T1816783498_H
#define VIDEO3DLAYOUT_T1816783498_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Video.Video3DLayout
struct  Video3DLayout_t1816783498 
{
public:
	// System.Int32 UnityEngine.Video.Video3DLayout::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Video3DLayout_t1816783498, ___value___2)); }
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
#endif // VIDEO3DLAYOUT_T1816783498_H
#ifndef VIDEOASPECTRATIO_T3966034969_H
#define VIDEOASPECTRATIO_T3966034969_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Video.VideoAspectRatio
struct  VideoAspectRatio_t3966034969 
{
public:
	// System.Int32 UnityEngine.Video.VideoAspectRatio::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(VideoAspectRatio_t3966034969, ___value___2)); }
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
#endif // VIDEOASPECTRATIO_T3966034969_H
#ifndef VIDEOAUDIOOUTPUTMODE_T1271585647_H
#define VIDEOAUDIOOUTPUTMODE_T1271585647_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Video.VideoAudioOutputMode
struct  VideoAudioOutputMode_t1271585647 
{
public:
	// System.Int32 UnityEngine.Video.VideoAudioOutputMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(VideoAudioOutputMode_t1271585647, ___value___2)); }
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
#endif // VIDEOAUDIOOUTPUTMODE_T1271585647_H
#ifndef VIDEORENDERMODE_T1346002962_H
#define VIDEORENDERMODE_T1346002962_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Video.VideoRenderMode
struct  VideoRenderMode_t1346002962 
{
public:
	// System.Int32 UnityEngine.Video.VideoRenderMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(VideoRenderMode_t1346002962, ___value___2)); }
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
#endif // VIDEORENDERMODE_T1346002962_H
#ifndef VIDEOSOURCE_T4095631662_H
#define VIDEOSOURCE_T4095631662_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Video.VideoSource
struct  VideoSource_t4095631662 
{
public:
	// System.Int32 UnityEngine.Video.VideoSource::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(VideoSource_t4095631662, ___value___2)); }
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
#endif // VIDEOSOURCE_T4095631662_H
#ifndef VIDEOTIMEREFERENCE_T2705533265_H
#define VIDEOTIMEREFERENCE_T2705533265_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Video.VideoTimeReference
struct  VideoTimeReference_t2705533265 
{
public:
	// System.Int32 UnityEngine.Video.VideoTimeReference::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(VideoTimeReference_t2705533265, ___value___2)); }
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
#endif // VIDEOTIMEREFERENCE_T2705533265_H
#ifndef VIDEOTIMESOURCE_T1981307483_H
#define VIDEOTIMESOURCE_T1981307483_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Video.VideoTimeSource
struct  VideoTimeSource_t1981307483 
{
public:
	// System.Int32 UnityEngine.Video.VideoTimeSource::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(VideoTimeSource_t1981307483, ___value___2)); }
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
#endif // VIDEOTIMESOURCE_T1981307483_H
#ifndef AVAILABLETRACKINGDATA_T3752197997_H
#define AVAILABLETRACKINGDATA_T3752197997_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.AvailableTrackingData
struct  AvailableTrackingData_t3752197997 
{
public:
	// System.Int32 UnityEngine.XR.AvailableTrackingData::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AvailableTrackingData_t3752197997, ___value___2)); }
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
#endif // AVAILABLETRACKINGDATA_T3752197997_H
#ifndef TRACKINGSTATEEVENTTYPE_T4085253601_H
#define TRACKINGSTATEEVENTTYPE_T4085253601_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.InputTracking/TrackingStateEventType
struct  TrackingStateEventType_t4085253601 
{
public:
	// System.Int32 UnityEngine.XR.InputTracking/TrackingStateEventType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TrackingStateEventType_t4085253601, ___value___2)); }
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
#endif // TRACKINGSTATEEVENTTYPE_T4085253601_H
#ifndef XRNODE_T3929440994_H
#define XRNODE_T3929440994_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.XRNode
struct  XRNode_t3929440994 
{
public:
	// System.Int32 UnityEngine.XR.XRNode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(XRNode_t3929440994, ___value___2)); }
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
#endif // XRNODE_T3929440994_H
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
#ifndef AXISEVENTDATA_T2331243652_H
#define AXISEVENTDATA_T2331243652_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.EventSystems.AxisEventData
struct  AxisEventData_t2331243652  : public BaseEventData_t3903027533
{
public:
	// UnityEngine.Vector2 UnityEngine.EventSystems.AxisEventData::<moveVector>k__BackingField
	Vector2_t2156229523  ___U3CmoveVectorU3Ek__BackingField_2;
	// UnityEngine.EventSystems.MoveDirection UnityEngine.EventSystems.AxisEventData::<moveDir>k__BackingField
	int32_t ___U3CmoveDirU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_U3CmoveVectorU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(AxisEventData_t2331243652, ___U3CmoveVectorU3Ek__BackingField_2)); }
	inline Vector2_t2156229523  get_U3CmoveVectorU3Ek__BackingField_2() const { return ___U3CmoveVectorU3Ek__BackingField_2; }
	inline Vector2_t2156229523 * get_address_of_U3CmoveVectorU3Ek__BackingField_2() { return &___U3CmoveVectorU3Ek__BackingField_2; }
	inline void set_U3CmoveVectorU3Ek__BackingField_2(Vector2_t2156229523  value)
	{
		___U3CmoveVectorU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CmoveDirU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(AxisEventData_t2331243652, ___U3CmoveDirU3Ek__BackingField_3)); }
	inline int32_t get_U3CmoveDirU3Ek__BackingField_3() const { return ___U3CmoveDirU3Ek__BackingField_3; }
	inline int32_t* get_address_of_U3CmoveDirU3Ek__BackingField_3() { return &___U3CmoveDirU3Ek__BackingField_3; }
	inline void set_U3CmoveDirU3Ek__BackingField_3(int32_t value)
	{
		___U3CmoveDirU3Ek__BackingField_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AXISEVENTDATA_T2331243652_H
#ifndef ENTRY_T3344766165_H
#define ENTRY_T3344766165_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.EventSystems.EventTrigger/Entry
struct  Entry_t3344766165  : public RuntimeObject
{
public:
	// UnityEngine.EventSystems.EventTriggerType UnityEngine.EventSystems.EventTrigger/Entry::eventID
	int32_t ___eventID_0;
	// UnityEngine.EventSystems.EventTrigger/TriggerEvent UnityEngine.EventSystems.EventTrigger/Entry::callback
	TriggerEvent_t3867320123 * ___callback_1;

public:
	inline static int32_t get_offset_of_eventID_0() { return static_cast<int32_t>(offsetof(Entry_t3344766165, ___eventID_0)); }
	inline int32_t get_eventID_0() const { return ___eventID_0; }
	inline int32_t* get_address_of_eventID_0() { return &___eventID_0; }
	inline void set_eventID_0(int32_t value)
	{
		___eventID_0 = value;
	}

	inline static int32_t get_offset_of_callback_1() { return static_cast<int32_t>(offsetof(Entry_t3344766165, ___callback_1)); }
	inline TriggerEvent_t3867320123 * get_callback_1() const { return ___callback_1; }
	inline TriggerEvent_t3867320123 ** get_address_of_callback_1() { return &___callback_1; }
	inline void set_callback_1(TriggerEvent_t3867320123 * value)
	{
		___callback_1 = value;
		Il2CppCodeGenWriteBarrier((&___callback_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENTRY_T3344766165_H
#ifndef POINTEREVENTDATA_T3807901092_H
#define POINTEREVENTDATA_T3807901092_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.EventSystems.PointerEventData
struct  PointerEventData_t3807901092  : public BaseEventData_t3903027533
{
public:
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerEnter>k__BackingField
	GameObject_t1113636619 * ___U3CpointerEnterU3Ek__BackingField_2;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::m_PointerPress
	GameObject_t1113636619 * ___m_PointerPress_3;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<lastPress>k__BackingField
	GameObject_t1113636619 * ___U3ClastPressU3Ek__BackingField_4;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<rawPointerPress>k__BackingField
	GameObject_t1113636619 * ___U3CrawPointerPressU3Ek__BackingField_5;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerDrag>k__BackingField
	GameObject_t1113636619 * ___U3CpointerDragU3Ek__BackingField_6;
	// UnityEngine.EventSystems.RaycastResult UnityEngine.EventSystems.PointerEventData::<pointerCurrentRaycast>k__BackingField
	RaycastResult_t3360306849  ___U3CpointerCurrentRaycastU3Ek__BackingField_7;
	// UnityEngine.EventSystems.RaycastResult UnityEngine.EventSystems.PointerEventData::<pointerPressRaycast>k__BackingField
	RaycastResult_t3360306849  ___U3CpointerPressRaycastU3Ek__BackingField_8;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> UnityEngine.EventSystems.PointerEventData::hovered
	List_1_t2585711361 * ___hovered_9;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<eligibleForClick>k__BackingField
	bool ___U3CeligibleForClickU3Ek__BackingField_10;
	// System.Int32 UnityEngine.EventSystems.PointerEventData::<pointerId>k__BackingField
	int32_t ___U3CpointerIdU3Ek__BackingField_11;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<position>k__BackingField
	Vector2_t2156229523  ___U3CpositionU3Ek__BackingField_12;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<delta>k__BackingField
	Vector2_t2156229523  ___U3CdeltaU3Ek__BackingField_13;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<pressPosition>k__BackingField
	Vector2_t2156229523  ___U3CpressPositionU3Ek__BackingField_14;
	// UnityEngine.Vector3 UnityEngine.EventSystems.PointerEventData::<worldPosition>k__BackingField
	Vector3_t3722313464  ___U3CworldPositionU3Ek__BackingField_15;
	// UnityEngine.Vector3 UnityEngine.EventSystems.PointerEventData::<worldNormal>k__BackingField
	Vector3_t3722313464  ___U3CworldNormalU3Ek__BackingField_16;
	// System.Single UnityEngine.EventSystems.PointerEventData::<clickTime>k__BackingField
	float ___U3CclickTimeU3Ek__BackingField_17;
	// System.Int32 UnityEngine.EventSystems.PointerEventData::<clickCount>k__BackingField
	int32_t ___U3CclickCountU3Ek__BackingField_18;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<scrollDelta>k__BackingField
	Vector2_t2156229523  ___U3CscrollDeltaU3Ek__BackingField_19;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<useDragThreshold>k__BackingField
	bool ___U3CuseDragThresholdU3Ek__BackingField_20;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<dragging>k__BackingField
	bool ___U3CdraggingU3Ek__BackingField_21;
	// UnityEngine.EventSystems.PointerEventData/InputButton UnityEngine.EventSystems.PointerEventData::<button>k__BackingField
	int32_t ___U3CbuttonU3Ek__BackingField_22;

public:
	inline static int32_t get_offset_of_U3CpointerEnterU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(PointerEventData_t3807901092, ___U3CpointerEnterU3Ek__BackingField_2)); }
	inline GameObject_t1113636619 * get_U3CpointerEnterU3Ek__BackingField_2() const { return ___U3CpointerEnterU3Ek__BackingField_2; }
	inline GameObject_t1113636619 ** get_address_of_U3CpointerEnterU3Ek__BackingField_2() { return &___U3CpointerEnterU3Ek__BackingField_2; }
	inline void set_U3CpointerEnterU3Ek__BackingField_2(GameObject_t1113636619 * value)
	{
		___U3CpointerEnterU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3CpointerEnterU3Ek__BackingField_2), value);
	}

	inline static int32_t get_offset_of_m_PointerPress_3() { return static_cast<int32_t>(offsetof(PointerEventData_t3807901092, ___m_PointerPress_3)); }
	inline GameObject_t1113636619 * get_m_PointerPress_3() const { return ___m_PointerPress_3; }
	inline GameObject_t1113636619 ** get_address_of_m_PointerPress_3() { return &___m_PointerPress_3; }
	inline void set_m_PointerPress_3(GameObject_t1113636619 * value)
	{
		___m_PointerPress_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_PointerPress_3), value);
	}

	inline static int32_t get_offset_of_U3ClastPressU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(PointerEventData_t3807901092, ___U3ClastPressU3Ek__BackingField_4)); }
	inline GameObject_t1113636619 * get_U3ClastPressU3Ek__BackingField_4() const { return ___U3ClastPressU3Ek__BackingField_4; }
	inline GameObject_t1113636619 ** get_address_of_U3ClastPressU3Ek__BackingField_4() { return &___U3ClastPressU3Ek__BackingField_4; }
	inline void set_U3ClastPressU3Ek__BackingField_4(GameObject_t1113636619 * value)
	{
		___U3ClastPressU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((&___U3ClastPressU3Ek__BackingField_4), value);
	}

	inline static int32_t get_offset_of_U3CrawPointerPressU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(PointerEventData_t3807901092, ___U3CrawPointerPressU3Ek__BackingField_5)); }
	inline GameObject_t1113636619 * get_U3CrawPointerPressU3Ek__BackingField_5() const { return ___U3CrawPointerPressU3Ek__BackingField_5; }
	inline GameObject_t1113636619 ** get_address_of_U3CrawPointerPressU3Ek__BackingField_5() { return &___U3CrawPointerPressU3Ek__BackingField_5; }
	inline void set_U3CrawPointerPressU3Ek__BackingField_5(GameObject_t1113636619 * value)
	{
		___U3CrawPointerPressU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((&___U3CrawPointerPressU3Ek__BackingField_5), value);
	}

	inline static int32_t get_offset_of_U3CpointerDragU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(PointerEventData_t3807901092, ___U3CpointerDragU3Ek__BackingField_6)); }
	inline GameObject_t1113636619 * get_U3CpointerDragU3Ek__BackingField_6() const { return ___U3CpointerDragU3Ek__BackingField_6; }
	inline GameObject_t1113636619 ** get_address_of_U3CpointerDragU3Ek__BackingField_6() { return &___U3CpointerDragU3Ek__BackingField_6; }
	inline void set_U3CpointerDragU3Ek__BackingField_6(GameObject_t1113636619 * value)
	{
		___U3CpointerDragU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((&___U3CpointerDragU3Ek__BackingField_6), value);
	}

	inline static int32_t get_offset_of_U3CpointerCurrentRaycastU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(PointerEventData_t3807901092, ___U3CpointerCurrentRaycastU3Ek__BackingField_7)); }
	inline RaycastResult_t3360306849  get_U3CpointerCurrentRaycastU3Ek__BackingField_7() const { return ___U3CpointerCurrentRaycastU3Ek__BackingField_7; }
	inline RaycastResult_t3360306849 * get_address_of_U3CpointerCurrentRaycastU3Ek__BackingField_7() { return &___U3CpointerCurrentRaycastU3Ek__BackingField_7; }
	inline void set_U3CpointerCurrentRaycastU3Ek__BackingField_7(RaycastResult_t3360306849  value)
	{
		___U3CpointerCurrentRaycastU3Ek__BackingField_7 = value;
	}

	inline static int32_t get_offset_of_U3CpointerPressRaycastU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(PointerEventData_t3807901092, ___U3CpointerPressRaycastU3Ek__BackingField_8)); }
	inline RaycastResult_t3360306849  get_U3CpointerPressRaycastU3Ek__BackingField_8() const { return ___U3CpointerPressRaycastU3Ek__BackingField_8; }
	inline RaycastResult_t3360306849 * get_address_of_U3CpointerPressRaycastU3Ek__BackingField_8() { return &___U3CpointerPressRaycastU3Ek__BackingField_8; }
	inline void set_U3CpointerPressRaycastU3Ek__BackingField_8(RaycastResult_t3360306849  value)
	{
		___U3CpointerPressRaycastU3Ek__BackingField_8 = value;
	}

	inline static int32_t get_offset_of_hovered_9() { return static_cast<int32_t>(offsetof(PointerEventData_t3807901092, ___hovered_9)); }
	inline List_1_t2585711361 * get_hovered_9() const { return ___hovered_9; }
	inline List_1_t2585711361 ** get_address_of_hovered_9() { return &___hovered_9; }
	inline void set_hovered_9(List_1_t2585711361 * value)
	{
		___hovered_9 = value;
		Il2CppCodeGenWriteBarrier((&___hovered_9), value);
	}

	inline static int32_t get_offset_of_U3CeligibleForClickU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(PointerEventData_t3807901092, ___U3CeligibleForClickU3Ek__BackingField_10)); }
	inline bool get_U3CeligibleForClickU3Ek__BackingField_10() const { return ___U3CeligibleForClickU3Ek__BackingField_10; }
	inline bool* get_address_of_U3CeligibleForClickU3Ek__BackingField_10() { return &___U3CeligibleForClickU3Ek__BackingField_10; }
	inline void set_U3CeligibleForClickU3Ek__BackingField_10(bool value)
	{
		___U3CeligibleForClickU3Ek__BackingField_10 = value;
	}

	inline static int32_t get_offset_of_U3CpointerIdU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(PointerEventData_t3807901092, ___U3CpointerIdU3Ek__BackingField_11)); }
	inline int32_t get_U3CpointerIdU3Ek__BackingField_11() const { return ___U3CpointerIdU3Ek__BackingField_11; }
	inline int32_t* get_address_of_U3CpointerIdU3Ek__BackingField_11() { return &___U3CpointerIdU3Ek__BackingField_11; }
	inline void set_U3CpointerIdU3Ek__BackingField_11(int32_t value)
	{
		___U3CpointerIdU3Ek__BackingField_11 = value;
	}

	inline static int32_t get_offset_of_U3CpositionU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(PointerEventData_t3807901092, ___U3CpositionU3Ek__BackingField_12)); }
	inline Vector2_t2156229523  get_U3CpositionU3Ek__BackingField_12() const { return ___U3CpositionU3Ek__BackingField_12; }
	inline Vector2_t2156229523 * get_address_of_U3CpositionU3Ek__BackingField_12() { return &___U3CpositionU3Ek__BackingField_12; }
	inline void set_U3CpositionU3Ek__BackingField_12(Vector2_t2156229523  value)
	{
		___U3CpositionU3Ek__BackingField_12 = value;
	}

	inline static int32_t get_offset_of_U3CdeltaU3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(PointerEventData_t3807901092, ___U3CdeltaU3Ek__BackingField_13)); }
	inline Vector2_t2156229523  get_U3CdeltaU3Ek__BackingField_13() const { return ___U3CdeltaU3Ek__BackingField_13; }
	inline Vector2_t2156229523 * get_address_of_U3CdeltaU3Ek__BackingField_13() { return &___U3CdeltaU3Ek__BackingField_13; }
	inline void set_U3CdeltaU3Ek__BackingField_13(Vector2_t2156229523  value)
	{
		___U3CdeltaU3Ek__BackingField_13 = value;
	}

	inline static int32_t get_offset_of_U3CpressPositionU3Ek__BackingField_14() { return static_cast<int32_t>(offsetof(PointerEventData_t3807901092, ___U3CpressPositionU3Ek__BackingField_14)); }
	inline Vector2_t2156229523  get_U3CpressPositionU3Ek__BackingField_14() const { return ___U3CpressPositionU3Ek__BackingField_14; }
	inline Vector2_t2156229523 * get_address_of_U3CpressPositionU3Ek__BackingField_14() { return &___U3CpressPositionU3Ek__BackingField_14; }
	inline void set_U3CpressPositionU3Ek__BackingField_14(Vector2_t2156229523  value)
	{
		___U3CpressPositionU3Ek__BackingField_14 = value;
	}

	inline static int32_t get_offset_of_U3CworldPositionU3Ek__BackingField_15() { return static_cast<int32_t>(offsetof(PointerEventData_t3807901092, ___U3CworldPositionU3Ek__BackingField_15)); }
	inline Vector3_t3722313464  get_U3CworldPositionU3Ek__BackingField_15() const { return ___U3CworldPositionU3Ek__BackingField_15; }
	inline Vector3_t3722313464 * get_address_of_U3CworldPositionU3Ek__BackingField_15() { return &___U3CworldPositionU3Ek__BackingField_15; }
	inline void set_U3CworldPositionU3Ek__BackingField_15(Vector3_t3722313464  value)
	{
		___U3CworldPositionU3Ek__BackingField_15 = value;
	}

	inline static int32_t get_offset_of_U3CworldNormalU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(PointerEventData_t3807901092, ___U3CworldNormalU3Ek__BackingField_16)); }
	inline Vector3_t3722313464  get_U3CworldNormalU3Ek__BackingField_16() const { return ___U3CworldNormalU3Ek__BackingField_16; }
	inline Vector3_t3722313464 * get_address_of_U3CworldNormalU3Ek__BackingField_16() { return &___U3CworldNormalU3Ek__BackingField_16; }
	inline void set_U3CworldNormalU3Ek__BackingField_16(Vector3_t3722313464  value)
	{
		___U3CworldNormalU3Ek__BackingField_16 = value;
	}

	inline static int32_t get_offset_of_U3CclickTimeU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(PointerEventData_t3807901092, ___U3CclickTimeU3Ek__BackingField_17)); }
	inline float get_U3CclickTimeU3Ek__BackingField_17() const { return ___U3CclickTimeU3Ek__BackingField_17; }
	inline float* get_address_of_U3CclickTimeU3Ek__BackingField_17() { return &___U3CclickTimeU3Ek__BackingField_17; }
	inline void set_U3CclickTimeU3Ek__BackingField_17(float value)
	{
		___U3CclickTimeU3Ek__BackingField_17 = value;
	}

	inline static int32_t get_offset_of_U3CclickCountU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(PointerEventData_t3807901092, ___U3CclickCountU3Ek__BackingField_18)); }
	inline int32_t get_U3CclickCountU3Ek__BackingField_18() const { return ___U3CclickCountU3Ek__BackingField_18; }
	inline int32_t* get_address_of_U3CclickCountU3Ek__BackingField_18() { return &___U3CclickCountU3Ek__BackingField_18; }
	inline void set_U3CclickCountU3Ek__BackingField_18(int32_t value)
	{
		___U3CclickCountU3Ek__BackingField_18 = value;
	}

	inline static int32_t get_offset_of_U3CscrollDeltaU3Ek__BackingField_19() { return static_cast<int32_t>(offsetof(PointerEventData_t3807901092, ___U3CscrollDeltaU3Ek__BackingField_19)); }
	inline Vector2_t2156229523  get_U3CscrollDeltaU3Ek__BackingField_19() const { return ___U3CscrollDeltaU3Ek__BackingField_19; }
	inline Vector2_t2156229523 * get_address_of_U3CscrollDeltaU3Ek__BackingField_19() { return &___U3CscrollDeltaU3Ek__BackingField_19; }
	inline void set_U3CscrollDeltaU3Ek__BackingField_19(Vector2_t2156229523  value)
	{
		___U3CscrollDeltaU3Ek__BackingField_19 = value;
	}

	inline static int32_t get_offset_of_U3CuseDragThresholdU3Ek__BackingField_20() { return static_cast<int32_t>(offsetof(PointerEventData_t3807901092, ___U3CuseDragThresholdU3Ek__BackingField_20)); }
	inline bool get_U3CuseDragThresholdU3Ek__BackingField_20() const { return ___U3CuseDragThresholdU3Ek__BackingField_20; }
	inline bool* get_address_of_U3CuseDragThresholdU3Ek__BackingField_20() { return &___U3CuseDragThresholdU3Ek__BackingField_20; }
	inline void set_U3CuseDragThresholdU3Ek__BackingField_20(bool value)
	{
		___U3CuseDragThresholdU3Ek__BackingField_20 = value;
	}

	inline static int32_t get_offset_of_U3CdraggingU3Ek__BackingField_21() { return static_cast<int32_t>(offsetof(PointerEventData_t3807901092, ___U3CdraggingU3Ek__BackingField_21)); }
	inline bool get_U3CdraggingU3Ek__BackingField_21() const { return ___U3CdraggingU3Ek__BackingField_21; }
	inline bool* get_address_of_U3CdraggingU3Ek__BackingField_21() { return &___U3CdraggingU3Ek__BackingField_21; }
	inline void set_U3CdraggingU3Ek__BackingField_21(bool value)
	{
		___U3CdraggingU3Ek__BackingField_21 = value;
	}

	inline static int32_t get_offset_of_U3CbuttonU3Ek__BackingField_22() { return static_cast<int32_t>(offsetof(PointerEventData_t3807901092, ___U3CbuttonU3Ek__BackingField_22)); }
	inline int32_t get_U3CbuttonU3Ek__BackingField_22() const { return ___U3CbuttonU3Ek__BackingField_22; }
	inline int32_t* get_address_of_U3CbuttonU3Ek__BackingField_22() { return &___U3CbuttonU3Ek__BackingField_22; }
	inline void set_U3CbuttonU3Ek__BackingField_22(int32_t value)
	{
		___U3CbuttonU3Ek__BackingField_22 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // POINTEREVENTDATA_T3807901092_H
#ifndef BUTTONSTATE_T857139936_H
#define BUTTONSTATE_T857139936_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.EventSystems.PointerInputModule/ButtonState
struct  ButtonState_t857139936  : public RuntimeObject
{
public:
	// UnityEngine.EventSystems.PointerEventData/InputButton UnityEngine.EventSystems.PointerInputModule/ButtonState::m_Button
	int32_t ___m_Button_0;
	// UnityEngine.EventSystems.PointerInputModule/MouseButtonEventData UnityEngine.EventSystems.PointerInputModule/ButtonState::m_EventData
	MouseButtonEventData_t3190347560 * ___m_EventData_1;

public:
	inline static int32_t get_offset_of_m_Button_0() { return static_cast<int32_t>(offsetof(ButtonState_t857139936, ___m_Button_0)); }
	inline int32_t get_m_Button_0() const { return ___m_Button_0; }
	inline int32_t* get_address_of_m_Button_0() { return &___m_Button_0; }
	inline void set_m_Button_0(int32_t value)
	{
		___m_Button_0 = value;
	}

	inline static int32_t get_offset_of_m_EventData_1() { return static_cast<int32_t>(offsetof(ButtonState_t857139936, ___m_EventData_1)); }
	inline MouseButtonEventData_t3190347560 * get_m_EventData_1() const { return ___m_EventData_1; }
	inline MouseButtonEventData_t3190347560 ** get_address_of_m_EventData_1() { return &___m_EventData_1; }
	inline void set_m_EventData_1(MouseButtonEventData_t3190347560 * value)
	{
		___m_EventData_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_EventData_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BUTTONSTATE_T857139936_H
#ifndef SUBSYSTEMDESCRIPTOR_1_T1932951644_H
#define SUBSYSTEMDESCRIPTOR_1_T1932951644_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.SubsystemDescriptor`1<UnityEngine.Experimental.XR.XRCameraSubsystem>
struct  SubsystemDescriptor_1_t1932951644  : public SubsystemDescriptorBase_t2374447182
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SUBSYSTEMDESCRIPTOR_1_T1932951644_H
#ifndef SUBSYSTEMDESCRIPTOR_1_T1821516358_H
#define SUBSYSTEMDESCRIPTOR_1_T1821516358_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.SubsystemDescriptor`1<UnityEngine.Experimental.XR.XRDepthSubsystem>
struct  SubsystemDescriptor_1_t1821516358  : public SubsystemDescriptorBase_t2374447182
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SUBSYSTEMDESCRIPTOR_1_T1821516358_H
#ifndef SUBSYSTEMDESCRIPTOR_1_T4292266728_H
#define SUBSYSTEMDESCRIPTOR_1_T4292266728_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.SubsystemDescriptor`1<UnityEngine.Experimental.XR.XRPlaneSubsystem>
struct  SubsystemDescriptor_1_t4292266728  : public SubsystemDescriptorBase_t2374447182
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SUBSYSTEMDESCRIPTOR_1_T4292266728_H
#ifndef SUBSYSTEMDESCRIPTOR_1_T2448998858_H
#define SUBSYSTEMDESCRIPTOR_1_T2448998858_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.SubsystemDescriptor`1<UnityEngine.Experimental.XR.XRReferencePointSubsystem>
struct  SubsystemDescriptor_1_t2448998858  : public SubsystemDescriptorBase_t2374447182
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SUBSYSTEMDESCRIPTOR_1_T2448998858_H
#ifndef SUBSYSTEMDESCRIPTOR_1_T1353494744_H
#define SUBSYSTEMDESCRIPTOR_1_T1353494744_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.SubsystemDescriptor`1<UnityEngine.Experimental.XR.XRSessionSubsystem>
struct  SubsystemDescriptor_1_t1353494744  : public SubsystemDescriptorBase_t2374447182
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SUBSYSTEMDESCRIPTOR_1_T1353494744_H
#ifndef SUBSYSTEM_1_T588646725_H
#define SUBSYSTEM_1_T588646725_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.Subsystem`1<UnityEngine.Experimental.XR.XRCameraSubsystemDescriptor>
struct  Subsystem_1_t588646725  : public Subsystem_t89723475
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SUBSYSTEM_1_T588646725_H
#ifndef SUBSYSTEM_1_T3920528600_H
#define SUBSYSTEM_1_T3920528600_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.Subsystem`1<UnityEngine.Experimental.XR.XRDepthSubsystemDescriptor>
struct  Subsystem_1_t3920528600  : public Subsystem_t89723475
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SUBSYSTEM_1_T3920528600_H
#ifndef SUBSYSTEM_1_T1428396990_H
#define SUBSYSTEM_1_T1428396990_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.Subsystem`1<UnityEngine.Experimental.XR.XRPlaneSubsystemDescriptor>
struct  Subsystem_1_t1428396990  : public Subsystem_t89723475
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SUBSYSTEM_1_T1428396990_H
#ifndef SUBSYSTEM_1_T2853778384_H
#define SUBSYSTEM_1_T2853778384_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.Subsystem`1<UnityEngine.Experimental.XR.XRReferencePointSubsystemDescriptor>
struct  Subsystem_1_t2853778384  : public Subsystem_t89723475
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SUBSYSTEM_1_T2853778384_H
#ifndef SUBSYSTEM_1_T2383066733_H
#define SUBSYSTEM_1_T2383066733_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.Subsystem`1<UnityEngine.Experimental.XR.XRSessionSubsystemDescriptor>
struct  Subsystem_1_t2383066733  : public Subsystem_t89723475
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SUBSYSTEM_1_T2383066733_H
#ifndef VIDEOCLIPPLAYABLE_T2598186649_H
#define VIDEOCLIPPLAYABLE_T2598186649_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.Video.VideoClipPlayable
struct  VideoClipPlayable_t2598186649 
{
public:
	// UnityEngine.Playables.PlayableHandle UnityEngine.Experimental.Video.VideoClipPlayable::m_Handle
	PlayableHandle_t1095853803  ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(VideoClipPlayable_t2598186649, ___m_Handle_0)); }
	inline PlayableHandle_t1095853803  get_m_Handle_0() const { return ___m_Handle_0; }
	inline PlayableHandle_t1095853803 * get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(PlayableHandle_t1095853803  value)
	{
		___m_Handle_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VIDEOCLIPPLAYABLE_T2598186649_H
#ifndef BOUNDEDPLANE_T1317492334_H
#define BOUNDEDPLANE_T1317492334_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.XR.BoundedPlane
struct  BoundedPlane_t1317492334 
{
public:
	// System.UInt32 UnityEngine.Experimental.XR.BoundedPlane::m_InstanceId
	uint32_t ___m_InstanceId_0;
	// UnityEngine.Experimental.XR.TrackableId UnityEngine.Experimental.XR.BoundedPlane::<Id>k__BackingField
	TrackableId_t1251031970  ___U3CIdU3Ek__BackingField_1;
	// UnityEngine.Experimental.XR.TrackableId UnityEngine.Experimental.XR.BoundedPlane::<SubsumedById>k__BackingField
	TrackableId_t1251031970  ___U3CSubsumedByIdU3Ek__BackingField_2;
	// UnityEngine.Pose UnityEngine.Experimental.XR.BoundedPlane::<Pose>k__BackingField
	Pose_t545244865  ___U3CPoseU3Ek__BackingField_3;
	// UnityEngine.Vector3 UnityEngine.Experimental.XR.BoundedPlane::<Center>k__BackingField
	Vector3_t3722313464  ___U3CCenterU3Ek__BackingField_4;
	// UnityEngine.Vector2 UnityEngine.Experimental.XR.BoundedPlane::<Size>k__BackingField
	Vector2_t2156229523  ___U3CSizeU3Ek__BackingField_5;
	// UnityEngine.Experimental.XR.PlaneAlignment UnityEngine.Experimental.XR.BoundedPlane::<Alignment>k__BackingField
	int32_t ___U3CAlignmentU3Ek__BackingField_6;

public:
	inline static int32_t get_offset_of_m_InstanceId_0() { return static_cast<int32_t>(offsetof(BoundedPlane_t1317492334, ___m_InstanceId_0)); }
	inline uint32_t get_m_InstanceId_0() const { return ___m_InstanceId_0; }
	inline uint32_t* get_address_of_m_InstanceId_0() { return &___m_InstanceId_0; }
	inline void set_m_InstanceId_0(uint32_t value)
	{
		___m_InstanceId_0 = value;
	}

	inline static int32_t get_offset_of_U3CIdU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(BoundedPlane_t1317492334, ___U3CIdU3Ek__BackingField_1)); }
	inline TrackableId_t1251031970  get_U3CIdU3Ek__BackingField_1() const { return ___U3CIdU3Ek__BackingField_1; }
	inline TrackableId_t1251031970 * get_address_of_U3CIdU3Ek__BackingField_1() { return &___U3CIdU3Ek__BackingField_1; }
	inline void set_U3CIdU3Ek__BackingField_1(TrackableId_t1251031970  value)
	{
		___U3CIdU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CSubsumedByIdU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(BoundedPlane_t1317492334, ___U3CSubsumedByIdU3Ek__BackingField_2)); }
	inline TrackableId_t1251031970  get_U3CSubsumedByIdU3Ek__BackingField_2() const { return ___U3CSubsumedByIdU3Ek__BackingField_2; }
	inline TrackableId_t1251031970 * get_address_of_U3CSubsumedByIdU3Ek__BackingField_2() { return &___U3CSubsumedByIdU3Ek__BackingField_2; }
	inline void set_U3CSubsumedByIdU3Ek__BackingField_2(TrackableId_t1251031970  value)
	{
		___U3CSubsumedByIdU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CPoseU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(BoundedPlane_t1317492334, ___U3CPoseU3Ek__BackingField_3)); }
	inline Pose_t545244865  get_U3CPoseU3Ek__BackingField_3() const { return ___U3CPoseU3Ek__BackingField_3; }
	inline Pose_t545244865 * get_address_of_U3CPoseU3Ek__BackingField_3() { return &___U3CPoseU3Ek__BackingField_3; }
	inline void set_U3CPoseU3Ek__BackingField_3(Pose_t545244865  value)
	{
		___U3CPoseU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_U3CCenterU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(BoundedPlane_t1317492334, ___U3CCenterU3Ek__BackingField_4)); }
	inline Vector3_t3722313464  get_U3CCenterU3Ek__BackingField_4() const { return ___U3CCenterU3Ek__BackingField_4; }
	inline Vector3_t3722313464 * get_address_of_U3CCenterU3Ek__BackingField_4() { return &___U3CCenterU3Ek__BackingField_4; }
	inline void set_U3CCenterU3Ek__BackingField_4(Vector3_t3722313464  value)
	{
		___U3CCenterU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of_U3CSizeU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(BoundedPlane_t1317492334, ___U3CSizeU3Ek__BackingField_5)); }
	inline Vector2_t2156229523  get_U3CSizeU3Ek__BackingField_5() const { return ___U3CSizeU3Ek__BackingField_5; }
	inline Vector2_t2156229523 * get_address_of_U3CSizeU3Ek__BackingField_5() { return &___U3CSizeU3Ek__BackingField_5; }
	inline void set_U3CSizeU3Ek__BackingField_5(Vector2_t2156229523  value)
	{
		___U3CSizeU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_U3CAlignmentU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(BoundedPlane_t1317492334, ___U3CAlignmentU3Ek__BackingField_6)); }
	inline int32_t get_U3CAlignmentU3Ek__BackingField_6() const { return ___U3CAlignmentU3Ek__BackingField_6; }
	inline int32_t* get_address_of_U3CAlignmentU3Ek__BackingField_6() { return &___U3CAlignmentU3Ek__BackingField_6; }
	inline void set_U3CAlignmentU3Ek__BackingField_6(int32_t value)
	{
		___U3CAlignmentU3Ek__BackingField_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BOUNDEDPLANE_T1317492334_H
#ifndef REFERENCEPOINT_T394942483_H
#define REFERENCEPOINT_T394942483_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.XR.ReferencePoint
struct  ReferencePoint_t394942483 
{
public:
	// UnityEngine.Experimental.XR.TrackableId UnityEngine.Experimental.XR.ReferencePoint::<Id>k__BackingField
	TrackableId_t1251031970  ___U3CIdU3Ek__BackingField_0;
	// UnityEngine.Experimental.XR.TrackingState UnityEngine.Experimental.XR.ReferencePoint::<TrackingState>k__BackingField
	int32_t ___U3CTrackingStateU3Ek__BackingField_1;
	// UnityEngine.Pose UnityEngine.Experimental.XR.ReferencePoint::<Pose>k__BackingField
	Pose_t545244865  ___U3CPoseU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3CIdU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(ReferencePoint_t394942483, ___U3CIdU3Ek__BackingField_0)); }
	inline TrackableId_t1251031970  get_U3CIdU3Ek__BackingField_0() const { return ___U3CIdU3Ek__BackingField_0; }
	inline TrackableId_t1251031970 * get_address_of_U3CIdU3Ek__BackingField_0() { return &___U3CIdU3Ek__BackingField_0; }
	inline void set_U3CIdU3Ek__BackingField_0(TrackableId_t1251031970  value)
	{
		___U3CIdU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CTrackingStateU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(ReferencePoint_t394942483, ___U3CTrackingStateU3Ek__BackingField_1)); }
	inline int32_t get_U3CTrackingStateU3Ek__BackingField_1() const { return ___U3CTrackingStateU3Ek__BackingField_1; }
	inline int32_t* get_address_of_U3CTrackingStateU3Ek__BackingField_1() { return &___U3CTrackingStateU3Ek__BackingField_1; }
	inline void set_U3CTrackingStateU3Ek__BackingField_1(int32_t value)
	{
		___U3CTrackingStateU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CPoseU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(ReferencePoint_t394942483, ___U3CPoseU3Ek__BackingField_2)); }
	inline Pose_t545244865  get_U3CPoseU3Ek__BackingField_2() const { return ___U3CPoseU3Ek__BackingField_2; }
	inline Pose_t545244865 * get_address_of_U3CPoseU3Ek__BackingField_2() { return &___U3CPoseU3Ek__BackingField_2; }
	inline void set_U3CPoseU3Ek__BackingField_2(Pose_t545244865  value)
	{
		___U3CPoseU3Ek__BackingField_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REFERENCEPOINT_T394942483_H
#ifndef SESSIONTRACKINGSTATECHANGEDEVENTARGS_T2343035655_H
#define SESSIONTRACKINGSTATECHANGEDEVENTARGS_T2343035655_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.XR.SessionTrackingStateChangedEventArgs
struct  SessionTrackingStateChangedEventArgs_t2343035655 
{
public:
	// UnityEngine.Experimental.XR.XRSessionSubsystem UnityEngine.Experimental.XR.SessionTrackingStateChangedEventArgs::m_Session
	XRSessionSubsystem_t3616338244 * ___m_Session_0;
	// UnityEngine.Experimental.XR.TrackingState UnityEngine.Experimental.XR.SessionTrackingStateChangedEventArgs::<NewState>k__BackingField
	int32_t ___U3CNewStateU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_m_Session_0() { return static_cast<int32_t>(offsetof(SessionTrackingStateChangedEventArgs_t2343035655, ___m_Session_0)); }
	inline XRSessionSubsystem_t3616338244 * get_m_Session_0() const { return ___m_Session_0; }
	inline XRSessionSubsystem_t3616338244 ** get_address_of_m_Session_0() { return &___m_Session_0; }
	inline void set_m_Session_0(XRSessionSubsystem_t3616338244 * value)
	{
		___m_Session_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_Session_0), value);
	}

	inline static int32_t get_offset_of_U3CNewStateU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(SessionTrackingStateChangedEventArgs_t2343035655, ___U3CNewStateU3Ek__BackingField_1)); }
	inline int32_t get_U3CNewStateU3Ek__BackingField_1() const { return ___U3CNewStateU3Ek__BackingField_1; }
	inline int32_t* get_address_of_U3CNewStateU3Ek__BackingField_1() { return &___U3CNewStateU3Ek__BackingField_1; }
	inline void set_U3CNewStateU3Ek__BackingField_1(int32_t value)
	{
		___U3CNewStateU3Ek__BackingField_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Experimental.XR.SessionTrackingStateChangedEventArgs
struct SessionTrackingStateChangedEventArgs_t2343035655_marshaled_pinvoke
{
	XRSessionSubsystem_t3616338244 * ___m_Session_0;
	int32_t ___U3CNewStateU3Ek__BackingField_1;
};
// Native definition for COM marshalling of UnityEngine.Experimental.XR.SessionTrackingStateChangedEventArgs
struct SessionTrackingStateChangedEventArgs_t2343035655_marshaled_com
{
	XRSessionSubsystem_t3616338244 * ___m_Session_0;
	int32_t ___U3CNewStateU3Ek__BackingField_1;
};
#endif // SESSIONTRACKINGSTATECHANGEDEVENTARGS_T2343035655_H
#ifndef VIDEOCLIP_T1281919028_H
#define VIDEOCLIP_T1281919028_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Video.VideoClip
struct  VideoClip_t1281919028  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VIDEOCLIP_T1281919028_H
#ifndef XRNODESTATE_T3752602430_H
#define XRNODESTATE_T3752602430_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.XRNodeState
struct  XRNodeState_t3752602430 
{
public:
	// UnityEngine.XR.XRNode UnityEngine.XR.XRNodeState::m_Type
	int32_t ___m_Type_0;
	// UnityEngine.XR.AvailableTrackingData UnityEngine.XR.XRNodeState::m_AvailableFields
	int32_t ___m_AvailableFields_1;
	// UnityEngine.Vector3 UnityEngine.XR.XRNodeState::m_Position
	Vector3_t3722313464  ___m_Position_2;
	// UnityEngine.Quaternion UnityEngine.XR.XRNodeState::m_Rotation
	Quaternion_t2301928331  ___m_Rotation_3;
	// UnityEngine.Vector3 UnityEngine.XR.XRNodeState::m_Velocity
	Vector3_t3722313464  ___m_Velocity_4;
	// UnityEngine.Vector3 UnityEngine.XR.XRNodeState::m_AngularVelocity
	Vector3_t3722313464  ___m_AngularVelocity_5;
	// UnityEngine.Vector3 UnityEngine.XR.XRNodeState::m_Acceleration
	Vector3_t3722313464  ___m_Acceleration_6;
	// UnityEngine.Vector3 UnityEngine.XR.XRNodeState::m_AngularAcceleration
	Vector3_t3722313464  ___m_AngularAcceleration_7;
	// System.Int32 UnityEngine.XR.XRNodeState::m_Tracked
	int32_t ___m_Tracked_8;
	// System.UInt64 UnityEngine.XR.XRNodeState::m_UniqueID
	uint64_t ___m_UniqueID_9;

public:
	inline static int32_t get_offset_of_m_Type_0() { return static_cast<int32_t>(offsetof(XRNodeState_t3752602430, ___m_Type_0)); }
	inline int32_t get_m_Type_0() const { return ___m_Type_0; }
	inline int32_t* get_address_of_m_Type_0() { return &___m_Type_0; }
	inline void set_m_Type_0(int32_t value)
	{
		___m_Type_0 = value;
	}

	inline static int32_t get_offset_of_m_AvailableFields_1() { return static_cast<int32_t>(offsetof(XRNodeState_t3752602430, ___m_AvailableFields_1)); }
	inline int32_t get_m_AvailableFields_1() const { return ___m_AvailableFields_1; }
	inline int32_t* get_address_of_m_AvailableFields_1() { return &___m_AvailableFields_1; }
	inline void set_m_AvailableFields_1(int32_t value)
	{
		___m_AvailableFields_1 = value;
	}

	inline static int32_t get_offset_of_m_Position_2() { return static_cast<int32_t>(offsetof(XRNodeState_t3752602430, ___m_Position_2)); }
	inline Vector3_t3722313464  get_m_Position_2() const { return ___m_Position_2; }
	inline Vector3_t3722313464 * get_address_of_m_Position_2() { return &___m_Position_2; }
	inline void set_m_Position_2(Vector3_t3722313464  value)
	{
		___m_Position_2 = value;
	}

	inline static int32_t get_offset_of_m_Rotation_3() { return static_cast<int32_t>(offsetof(XRNodeState_t3752602430, ___m_Rotation_3)); }
	inline Quaternion_t2301928331  get_m_Rotation_3() const { return ___m_Rotation_3; }
	inline Quaternion_t2301928331 * get_address_of_m_Rotation_3() { return &___m_Rotation_3; }
	inline void set_m_Rotation_3(Quaternion_t2301928331  value)
	{
		___m_Rotation_3 = value;
	}

	inline static int32_t get_offset_of_m_Velocity_4() { return static_cast<int32_t>(offsetof(XRNodeState_t3752602430, ___m_Velocity_4)); }
	inline Vector3_t3722313464  get_m_Velocity_4() const { return ___m_Velocity_4; }
	inline Vector3_t3722313464 * get_address_of_m_Velocity_4() { return &___m_Velocity_4; }
	inline void set_m_Velocity_4(Vector3_t3722313464  value)
	{
		___m_Velocity_4 = value;
	}

	inline static int32_t get_offset_of_m_AngularVelocity_5() { return static_cast<int32_t>(offsetof(XRNodeState_t3752602430, ___m_AngularVelocity_5)); }
	inline Vector3_t3722313464  get_m_AngularVelocity_5() const { return ___m_AngularVelocity_5; }
	inline Vector3_t3722313464 * get_address_of_m_AngularVelocity_5() { return &___m_AngularVelocity_5; }
	inline void set_m_AngularVelocity_5(Vector3_t3722313464  value)
	{
		___m_AngularVelocity_5 = value;
	}

	inline static int32_t get_offset_of_m_Acceleration_6() { return static_cast<int32_t>(offsetof(XRNodeState_t3752602430, ___m_Acceleration_6)); }
	inline Vector3_t3722313464  get_m_Acceleration_6() const { return ___m_Acceleration_6; }
	inline Vector3_t3722313464 * get_address_of_m_Acceleration_6() { return &___m_Acceleration_6; }
	inline void set_m_Acceleration_6(Vector3_t3722313464  value)
	{
		___m_Acceleration_6 = value;
	}

	inline static int32_t get_offset_of_m_AngularAcceleration_7() { return static_cast<int32_t>(offsetof(XRNodeState_t3752602430, ___m_AngularAcceleration_7)); }
	inline Vector3_t3722313464  get_m_AngularAcceleration_7() const { return ___m_AngularAcceleration_7; }
	inline Vector3_t3722313464 * get_address_of_m_AngularAcceleration_7() { return &___m_AngularAcceleration_7; }
	inline void set_m_AngularAcceleration_7(Vector3_t3722313464  value)
	{
		___m_AngularAcceleration_7 = value;
	}

	inline static int32_t get_offset_of_m_Tracked_8() { return static_cast<int32_t>(offsetof(XRNodeState_t3752602430, ___m_Tracked_8)); }
	inline int32_t get_m_Tracked_8() const { return ___m_Tracked_8; }
	inline int32_t* get_address_of_m_Tracked_8() { return &___m_Tracked_8; }
	inline void set_m_Tracked_8(int32_t value)
	{
		___m_Tracked_8 = value;
	}

	inline static int32_t get_offset_of_m_UniqueID_9() { return static_cast<int32_t>(offsetof(XRNodeState_t3752602430, ___m_UniqueID_9)); }
	inline uint64_t get_m_UniqueID_9() const { return ___m_UniqueID_9; }
	inline uint64_t* get_address_of_m_UniqueID_9() { return &___m_UniqueID_9; }
	inline void set_m_UniqueID_9(uint64_t value)
	{
		___m_UniqueID_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XRNODESTATE_T3752602430_H
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
#ifndef PLANEADDEDEVENTARGS_T2550175725_H
#define PLANEADDEDEVENTARGS_T2550175725_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.XR.PlaneAddedEventArgs
struct  PlaneAddedEventArgs_t2550175725 
{
public:
	// UnityEngine.Experimental.XR.XRPlaneSubsystem UnityEngine.Experimental.XR.PlaneAddedEventArgs::<PlaneSubsystem>k__BackingField
	XRPlaneSubsystem_t2260142932 * ___U3CPlaneSubsystemU3Ek__BackingField_0;
	// UnityEngine.Experimental.XR.BoundedPlane UnityEngine.Experimental.XR.PlaneAddedEventArgs::<Plane>k__BackingField
	BoundedPlane_t1317492334  ___U3CPlaneU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CPlaneSubsystemU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(PlaneAddedEventArgs_t2550175725, ___U3CPlaneSubsystemU3Ek__BackingField_0)); }
	inline XRPlaneSubsystem_t2260142932 * get_U3CPlaneSubsystemU3Ek__BackingField_0() const { return ___U3CPlaneSubsystemU3Ek__BackingField_0; }
	inline XRPlaneSubsystem_t2260142932 ** get_address_of_U3CPlaneSubsystemU3Ek__BackingField_0() { return &___U3CPlaneSubsystemU3Ek__BackingField_0; }
	inline void set_U3CPlaneSubsystemU3Ek__BackingField_0(XRPlaneSubsystem_t2260142932 * value)
	{
		___U3CPlaneSubsystemU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CPlaneSubsystemU3Ek__BackingField_0), value);
	}

	inline static int32_t get_offset_of_U3CPlaneU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(PlaneAddedEventArgs_t2550175725, ___U3CPlaneU3Ek__BackingField_1)); }
	inline BoundedPlane_t1317492334  get_U3CPlaneU3Ek__BackingField_1() const { return ___U3CPlaneU3Ek__BackingField_1; }
	inline BoundedPlane_t1317492334 * get_address_of_U3CPlaneU3Ek__BackingField_1() { return &___U3CPlaneU3Ek__BackingField_1; }
	inline void set_U3CPlaneU3Ek__BackingField_1(BoundedPlane_t1317492334  value)
	{
		___U3CPlaneU3Ek__BackingField_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Experimental.XR.PlaneAddedEventArgs
struct PlaneAddedEventArgs_t2550175725_marshaled_pinvoke
{
	XRPlaneSubsystem_t2260142932 * ___U3CPlaneSubsystemU3Ek__BackingField_0;
	BoundedPlane_t1317492334  ___U3CPlaneU3Ek__BackingField_1;
};
// Native definition for COM marshalling of UnityEngine.Experimental.XR.PlaneAddedEventArgs
struct PlaneAddedEventArgs_t2550175725_marshaled_com
{
	XRPlaneSubsystem_t2260142932 * ___U3CPlaneSubsystemU3Ek__BackingField_0;
	BoundedPlane_t1317492334  ___U3CPlaneU3Ek__BackingField_1;
};
#endif // PLANEADDEDEVENTARGS_T2550175725_H
#ifndef PLANEREMOVEDEVENTARGS_T1567129782_H
#define PLANEREMOVEDEVENTARGS_T1567129782_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.XR.PlaneRemovedEventArgs
struct  PlaneRemovedEventArgs_t1567129782 
{
public:
	// UnityEngine.Experimental.XR.XRPlaneSubsystem UnityEngine.Experimental.XR.PlaneRemovedEventArgs::<PlaneSubsystem>k__BackingField
	XRPlaneSubsystem_t2260142932 * ___U3CPlaneSubsystemU3Ek__BackingField_0;
	// UnityEngine.Experimental.XR.BoundedPlane UnityEngine.Experimental.XR.PlaneRemovedEventArgs::<Plane>k__BackingField
	BoundedPlane_t1317492334  ___U3CPlaneU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CPlaneSubsystemU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(PlaneRemovedEventArgs_t1567129782, ___U3CPlaneSubsystemU3Ek__BackingField_0)); }
	inline XRPlaneSubsystem_t2260142932 * get_U3CPlaneSubsystemU3Ek__BackingField_0() const { return ___U3CPlaneSubsystemU3Ek__BackingField_0; }
	inline XRPlaneSubsystem_t2260142932 ** get_address_of_U3CPlaneSubsystemU3Ek__BackingField_0() { return &___U3CPlaneSubsystemU3Ek__BackingField_0; }
	inline void set_U3CPlaneSubsystemU3Ek__BackingField_0(XRPlaneSubsystem_t2260142932 * value)
	{
		___U3CPlaneSubsystemU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CPlaneSubsystemU3Ek__BackingField_0), value);
	}

	inline static int32_t get_offset_of_U3CPlaneU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(PlaneRemovedEventArgs_t1567129782, ___U3CPlaneU3Ek__BackingField_1)); }
	inline BoundedPlane_t1317492334  get_U3CPlaneU3Ek__BackingField_1() const { return ___U3CPlaneU3Ek__BackingField_1; }
	inline BoundedPlane_t1317492334 * get_address_of_U3CPlaneU3Ek__BackingField_1() { return &___U3CPlaneU3Ek__BackingField_1; }
	inline void set_U3CPlaneU3Ek__BackingField_1(BoundedPlane_t1317492334  value)
	{
		___U3CPlaneU3Ek__BackingField_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Experimental.XR.PlaneRemovedEventArgs
struct PlaneRemovedEventArgs_t1567129782_marshaled_pinvoke
{
	XRPlaneSubsystem_t2260142932 * ___U3CPlaneSubsystemU3Ek__BackingField_0;
	BoundedPlane_t1317492334  ___U3CPlaneU3Ek__BackingField_1;
};
// Native definition for COM marshalling of UnityEngine.Experimental.XR.PlaneRemovedEventArgs
struct PlaneRemovedEventArgs_t1567129782_marshaled_com
{
	XRPlaneSubsystem_t2260142932 * ___U3CPlaneSubsystemU3Ek__BackingField_0;
	BoundedPlane_t1317492334  ___U3CPlaneU3Ek__BackingField_1;
};
#endif // PLANEREMOVEDEVENTARGS_T1567129782_H
#ifndef PLANEUPDATEDEVENTARGS_T349485851_H
#define PLANEUPDATEDEVENTARGS_T349485851_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.XR.PlaneUpdatedEventArgs
struct  PlaneUpdatedEventArgs_t349485851 
{
public:
	// UnityEngine.Experimental.XR.XRPlaneSubsystem UnityEngine.Experimental.XR.PlaneUpdatedEventArgs::<PlaneSubsystem>k__BackingField
	XRPlaneSubsystem_t2260142932 * ___U3CPlaneSubsystemU3Ek__BackingField_0;
	// UnityEngine.Experimental.XR.BoundedPlane UnityEngine.Experimental.XR.PlaneUpdatedEventArgs::<Plane>k__BackingField
	BoundedPlane_t1317492334  ___U3CPlaneU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CPlaneSubsystemU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(PlaneUpdatedEventArgs_t349485851, ___U3CPlaneSubsystemU3Ek__BackingField_0)); }
	inline XRPlaneSubsystem_t2260142932 * get_U3CPlaneSubsystemU3Ek__BackingField_0() const { return ___U3CPlaneSubsystemU3Ek__BackingField_0; }
	inline XRPlaneSubsystem_t2260142932 ** get_address_of_U3CPlaneSubsystemU3Ek__BackingField_0() { return &___U3CPlaneSubsystemU3Ek__BackingField_0; }
	inline void set_U3CPlaneSubsystemU3Ek__BackingField_0(XRPlaneSubsystem_t2260142932 * value)
	{
		___U3CPlaneSubsystemU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CPlaneSubsystemU3Ek__BackingField_0), value);
	}

	inline static int32_t get_offset_of_U3CPlaneU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(PlaneUpdatedEventArgs_t349485851, ___U3CPlaneU3Ek__BackingField_1)); }
	inline BoundedPlane_t1317492334  get_U3CPlaneU3Ek__BackingField_1() const { return ___U3CPlaneU3Ek__BackingField_1; }
	inline BoundedPlane_t1317492334 * get_address_of_U3CPlaneU3Ek__BackingField_1() { return &___U3CPlaneU3Ek__BackingField_1; }
	inline void set_U3CPlaneU3Ek__BackingField_1(BoundedPlane_t1317492334  value)
	{
		___U3CPlaneU3Ek__BackingField_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Experimental.XR.PlaneUpdatedEventArgs
struct PlaneUpdatedEventArgs_t349485851_marshaled_pinvoke
{
	XRPlaneSubsystem_t2260142932 * ___U3CPlaneSubsystemU3Ek__BackingField_0;
	BoundedPlane_t1317492334  ___U3CPlaneU3Ek__BackingField_1;
};
// Native definition for COM marshalling of UnityEngine.Experimental.XR.PlaneUpdatedEventArgs
struct PlaneUpdatedEventArgs_t349485851_marshaled_com
{
	XRPlaneSubsystem_t2260142932 * ___U3CPlaneSubsystemU3Ek__BackingField_0;
	BoundedPlane_t1317492334  ___U3CPlaneU3Ek__BackingField_1;
};
#endif // PLANEUPDATEDEVENTARGS_T349485851_H
#ifndef REFERENCEPOINTUPDATEDEVENTARGS_T2046512733_H
#define REFERENCEPOINTUPDATEDEVENTARGS_T2046512733_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.XR.ReferencePointUpdatedEventArgs
struct  ReferencePointUpdatedEventArgs_t2046512733 
{
public:
	// UnityEngine.Experimental.XR.ReferencePoint UnityEngine.Experimental.XR.ReferencePointUpdatedEventArgs::<ReferencePoint>k__BackingField
	ReferencePoint_t394942483  ___U3CReferencePointU3Ek__BackingField_0;
	// UnityEngine.Experimental.XR.TrackingState UnityEngine.Experimental.XR.ReferencePointUpdatedEventArgs::<PreviousTrackingState>k__BackingField
	int32_t ___U3CPreviousTrackingStateU3Ek__BackingField_1;
	// UnityEngine.Pose UnityEngine.Experimental.XR.ReferencePointUpdatedEventArgs::<PreviousPose>k__BackingField
	Pose_t545244865  ___U3CPreviousPoseU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3CReferencePointU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(ReferencePointUpdatedEventArgs_t2046512733, ___U3CReferencePointU3Ek__BackingField_0)); }
	inline ReferencePoint_t394942483  get_U3CReferencePointU3Ek__BackingField_0() const { return ___U3CReferencePointU3Ek__BackingField_0; }
	inline ReferencePoint_t394942483 * get_address_of_U3CReferencePointU3Ek__BackingField_0() { return &___U3CReferencePointU3Ek__BackingField_0; }
	inline void set_U3CReferencePointU3Ek__BackingField_0(ReferencePoint_t394942483  value)
	{
		___U3CReferencePointU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CPreviousTrackingStateU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(ReferencePointUpdatedEventArgs_t2046512733, ___U3CPreviousTrackingStateU3Ek__BackingField_1)); }
	inline int32_t get_U3CPreviousTrackingStateU3Ek__BackingField_1() const { return ___U3CPreviousTrackingStateU3Ek__BackingField_1; }
	inline int32_t* get_address_of_U3CPreviousTrackingStateU3Ek__BackingField_1() { return &___U3CPreviousTrackingStateU3Ek__BackingField_1; }
	inline void set_U3CPreviousTrackingStateU3Ek__BackingField_1(int32_t value)
	{
		___U3CPreviousTrackingStateU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CPreviousPoseU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(ReferencePointUpdatedEventArgs_t2046512733, ___U3CPreviousPoseU3Ek__BackingField_2)); }
	inline Pose_t545244865  get_U3CPreviousPoseU3Ek__BackingField_2() const { return ___U3CPreviousPoseU3Ek__BackingField_2; }
	inline Pose_t545244865 * get_address_of_U3CPreviousPoseU3Ek__BackingField_2() { return &___U3CPreviousPoseU3Ek__BackingField_2; }
	inline void set_U3CPreviousPoseU3Ek__BackingField_2(Pose_t545244865  value)
	{
		___U3CPreviousPoseU3Ek__BackingField_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REFERENCEPOINTUPDATEDEVENTARGS_T2046512733_H
#ifndef XRCAMERASUBSYSTEM_T4195795144_H
#define XRCAMERASUBSYSTEM_T4195795144_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.XR.XRCameraSubsystem
struct  XRCameraSubsystem_t4195795144  : public Subsystem_1_t588646725
{
public:
	// System.Action`1<UnityEngine.Experimental.XR.FrameReceivedEventArgs> UnityEngine.Experimental.XR.XRCameraSubsystem::FrameReceived
	Action_1_t2760547698 * ___FrameReceived_2;

public:
	inline static int32_t get_offset_of_FrameReceived_2() { return static_cast<int32_t>(offsetof(XRCameraSubsystem_t4195795144, ___FrameReceived_2)); }
	inline Action_1_t2760547698 * get_FrameReceived_2() const { return ___FrameReceived_2; }
	inline Action_1_t2760547698 ** get_address_of_FrameReceived_2() { return &___FrameReceived_2; }
	inline void set_FrameReceived_2(Action_1_t2760547698 * value)
	{
		___FrameReceived_2 = value;
		Il2CppCodeGenWriteBarrier((&___FrameReceived_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XRCAMERASUBSYSTEM_T4195795144_H
#ifndef XRCAMERASUBSYSTEMDESCRIPTOR_T3689383335_H
#define XRCAMERASUBSYSTEMDESCRIPTOR_T3689383335_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.XR.XRCameraSubsystemDescriptor
struct  XRCameraSubsystemDescriptor_t3689383335  : public SubsystemDescriptor_1_t1932951644
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XRCAMERASUBSYSTEMDESCRIPTOR_T3689383335_H
#ifndef XRDEPTHSUBSYSTEM_T4084359858_H
#define XRDEPTHSUBSYSTEM_T4084359858_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.XR.XRDepthSubsystem
struct  XRDepthSubsystem_t4084359858  : public Subsystem_1_t3920528600
{
public:
	// System.Action`1<UnityEngine.Experimental.XR.PointCloudUpdatedEventArgs> UnityEngine.Experimental.XR.XRDepthSubsystem::PointCloudUpdated
	Action_1_t3609124943 * ___PointCloudUpdated_2;

public:
	inline static int32_t get_offset_of_PointCloudUpdated_2() { return static_cast<int32_t>(offsetof(XRDepthSubsystem_t4084359858, ___PointCloudUpdated_2)); }
	inline Action_1_t3609124943 * get_PointCloudUpdated_2() const { return ___PointCloudUpdated_2; }
	inline Action_1_t3609124943 ** get_address_of_PointCloudUpdated_2() { return &___PointCloudUpdated_2; }
	inline void set_PointCloudUpdated_2(Action_1_t3609124943 * value)
	{
		___PointCloudUpdated_2 = value;
		Il2CppCodeGenWriteBarrier((&___PointCloudUpdated_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XRDEPTHSUBSYSTEM_T4084359858_H
#ifndef XRDEPTHSUBSYSTEMDESCRIPTOR_T2726297914_H
#define XRDEPTHSUBSYSTEMDESCRIPTOR_T2726297914_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.XR.XRDepthSubsystemDescriptor
struct  XRDepthSubsystemDescriptor_t2726297914  : public SubsystemDescriptor_1_t1821516358
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XRDEPTHSUBSYSTEMDESCRIPTOR_T2726297914_H
#ifndef XRPLANESUBSYSTEM_T2260142932_H
#define XRPLANESUBSYSTEM_T2260142932_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.XR.XRPlaneSubsystem
struct  XRPlaneSubsystem_t2260142932  : public Subsystem_1_t1428396990
{
public:
	// System.Action`1<UnityEngine.Experimental.XR.PlaneAddedEventArgs> UnityEngine.Experimental.XR.XRPlaneSubsystem::PlaneAdded
	Action_1_t2722643320 * ___PlaneAdded_2;
	// System.Action`1<UnityEngine.Experimental.XR.PlaneUpdatedEventArgs> UnityEngine.Experimental.XR.XRPlaneSubsystem::PlaneUpdated
	Action_1_t521953446 * ___PlaneUpdated_3;
	// System.Action`1<UnityEngine.Experimental.XR.PlaneRemovedEventArgs> UnityEngine.Experimental.XR.XRPlaneSubsystem::PlaneRemoved
	Action_1_t1739597377 * ___PlaneRemoved_4;

public:
	inline static int32_t get_offset_of_PlaneAdded_2() { return static_cast<int32_t>(offsetof(XRPlaneSubsystem_t2260142932, ___PlaneAdded_2)); }
	inline Action_1_t2722643320 * get_PlaneAdded_2() const { return ___PlaneAdded_2; }
	inline Action_1_t2722643320 ** get_address_of_PlaneAdded_2() { return &___PlaneAdded_2; }
	inline void set_PlaneAdded_2(Action_1_t2722643320 * value)
	{
		___PlaneAdded_2 = value;
		Il2CppCodeGenWriteBarrier((&___PlaneAdded_2), value);
	}

	inline static int32_t get_offset_of_PlaneUpdated_3() { return static_cast<int32_t>(offsetof(XRPlaneSubsystem_t2260142932, ___PlaneUpdated_3)); }
	inline Action_1_t521953446 * get_PlaneUpdated_3() const { return ___PlaneUpdated_3; }
	inline Action_1_t521953446 ** get_address_of_PlaneUpdated_3() { return &___PlaneUpdated_3; }
	inline void set_PlaneUpdated_3(Action_1_t521953446 * value)
	{
		___PlaneUpdated_3 = value;
		Il2CppCodeGenWriteBarrier((&___PlaneUpdated_3), value);
	}

	inline static int32_t get_offset_of_PlaneRemoved_4() { return static_cast<int32_t>(offsetof(XRPlaneSubsystem_t2260142932, ___PlaneRemoved_4)); }
	inline Action_1_t1739597377 * get_PlaneRemoved_4() const { return ___PlaneRemoved_4; }
	inline Action_1_t1739597377 ** get_address_of_PlaneRemoved_4() { return &___PlaneRemoved_4; }
	inline void set_PlaneRemoved_4(Action_1_t1739597377 * value)
	{
		___PlaneRemoved_4 = value;
		Il2CppCodeGenWriteBarrier((&___PlaneRemoved_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XRPLANESUBSYSTEM_T2260142932_H
#ifndef XRPLANESUBSYSTEMDESCRIPTOR_T234166304_H
#define XRPLANESUBSYSTEMDESCRIPTOR_T234166304_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.XR.XRPlaneSubsystemDescriptor
struct  XRPlaneSubsystemDescriptor_t234166304  : public SubsystemDescriptor_1_t4292266728
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XRPLANESUBSYSTEMDESCRIPTOR_T234166304_H
#ifndef XRREFERENCEPOINTSUBSYSTEM_T416875062_H
#define XRREFERENCEPOINTSUBSYSTEM_T416875062_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.XR.XRReferencePointSubsystem
struct  XRReferencePointSubsystem_t416875062  : public Subsystem_1_t2853778384
{
public:
	// System.Action`1<UnityEngine.Experimental.XR.ReferencePointUpdatedEventArgs> UnityEngine.Experimental.XR.XRReferencePointSubsystem::ReferencePointUpdated
	Action_1_t2218980328 * ___ReferencePointUpdated_2;

public:
	inline static int32_t get_offset_of_ReferencePointUpdated_2() { return static_cast<int32_t>(offsetof(XRReferencePointSubsystem_t416875062, ___ReferencePointUpdated_2)); }
	inline Action_1_t2218980328 * get_ReferencePointUpdated_2() const { return ___ReferencePointUpdated_2; }
	inline Action_1_t2218980328 ** get_address_of_ReferencePointUpdated_2() { return &___ReferencePointUpdated_2; }
	inline void set_ReferencePointUpdated_2(Action_1_t2218980328 * value)
	{
		___ReferencePointUpdated_2 = value;
		Il2CppCodeGenWriteBarrier((&___ReferencePointUpdated_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XRREFERENCEPOINTSUBSYSTEM_T416875062_H
#ifndef XRREFERENCEPOINTSUBSYSTEMDESCRIPTOR_T1659547698_H
#define XRREFERENCEPOINTSUBSYSTEMDESCRIPTOR_T1659547698_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.XR.XRReferencePointSubsystemDescriptor
struct  XRReferencePointSubsystemDescriptor_t1659547698  : public SubsystemDescriptor_1_t2448998858
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XRREFERENCEPOINTSUBSYSTEMDESCRIPTOR_T1659547698_H
#ifndef XRSESSIONSUBSYSTEM_T3616338244_H
#define XRSESSIONSUBSYSTEM_T3616338244_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.XR.XRSessionSubsystem
struct  XRSessionSubsystem_t3616338244  : public Subsystem_1_t2383066733
{
public:
	// System.Action`1<UnityEngine.Experimental.XR.SessionTrackingStateChangedEventArgs> UnityEngine.Experimental.XR.XRSessionSubsystem::TrackingStateChanged
	Action_1_t2515503250 * ___TrackingStateChanged_2;

public:
	inline static int32_t get_offset_of_TrackingStateChanged_2() { return static_cast<int32_t>(offsetof(XRSessionSubsystem_t3616338244, ___TrackingStateChanged_2)); }
	inline Action_1_t2515503250 * get_TrackingStateChanged_2() const { return ___TrackingStateChanged_2; }
	inline Action_1_t2515503250 ** get_address_of_TrackingStateChanged_2() { return &___TrackingStateChanged_2; }
	inline void set_TrackingStateChanged_2(Action_1_t2515503250 * value)
	{
		___TrackingStateChanged_2 = value;
		Il2CppCodeGenWriteBarrier((&___TrackingStateChanged_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XRSESSIONSUBSYSTEM_T3616338244_H
#ifndef XRSESSIONSUBSYSTEMDESCRIPTOR_T1188836047_H
#define XRSESSIONSUBSYSTEMDESCRIPTOR_T1188836047_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.XR.XRSessionSubsystemDescriptor
struct  XRSessionSubsystemDescriptor_t1188836047  : public SubsystemDescriptor_1_t1353494744
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XRSESSIONSUBSYSTEMDESCRIPTOR_T1188836047_H
#ifndef UPDATEDEVENTHANDLER_T1027848393_H
#define UPDATEDEVENTHANDLER_T1027848393_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.RemoteSettings/UpdatedEventHandler
struct  UpdatedEventHandler_t1027848393  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UPDATEDEVENTHANDLER_T1027848393_H
#ifndef ERROREVENTHANDLER_T3211687919_H
#define ERROREVENTHANDLER_T3211687919_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Video.VideoPlayer/ErrorEventHandler
struct  ErrorEventHandler_t3211687919  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ERROREVENTHANDLER_T3211687919_H
#ifndef EVENTHANDLER_T3436254912_H
#define EVENTHANDLER_T3436254912_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Video.VideoPlayer/EventHandler
struct  EventHandler_t3436254912  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EVENTHANDLER_T3436254912_H
#ifndef FRAMEREADYEVENTHANDLER_T3848515759_H
#define FRAMEREADYEVENTHANDLER_T3848515759_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Video.VideoPlayer/FrameReadyEventHandler
struct  FrameReadyEventHandler_t3848515759  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FRAMEREADYEVENTHANDLER_T3848515759_H
#ifndef TIMEEVENTHANDLER_T445758600_H
#define TIMEEVENTHANDLER_T445758600_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Video.VideoPlayer/TimeEventHandler
struct  TimeEventHandler_t445758600  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TIMEEVENTHANDLER_T445758600_H
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
#ifndef VIDEOPLAYER_T1683042537_H
#define VIDEOPLAYER_T1683042537_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Video.VideoPlayer
struct  VideoPlayer_t1683042537  : public Behaviour_t1437897464
{
public:
	// UnityEngine.Video.VideoPlayer/EventHandler UnityEngine.Video.VideoPlayer::prepareCompleted
	EventHandler_t3436254912 * ___prepareCompleted_4;
	// UnityEngine.Video.VideoPlayer/EventHandler UnityEngine.Video.VideoPlayer::loopPointReached
	EventHandler_t3436254912 * ___loopPointReached_5;
	// UnityEngine.Video.VideoPlayer/EventHandler UnityEngine.Video.VideoPlayer::started
	EventHandler_t3436254912 * ___started_6;
	// UnityEngine.Video.VideoPlayer/EventHandler UnityEngine.Video.VideoPlayer::frameDropped
	EventHandler_t3436254912 * ___frameDropped_7;
	// UnityEngine.Video.VideoPlayer/ErrorEventHandler UnityEngine.Video.VideoPlayer::errorReceived
	ErrorEventHandler_t3211687919 * ___errorReceived_8;
	// UnityEngine.Video.VideoPlayer/EventHandler UnityEngine.Video.VideoPlayer::seekCompleted
	EventHandler_t3436254912 * ___seekCompleted_9;
	// UnityEngine.Video.VideoPlayer/TimeEventHandler UnityEngine.Video.VideoPlayer::clockResyncOccurred
	TimeEventHandler_t445758600 * ___clockResyncOccurred_10;
	// UnityEngine.Video.VideoPlayer/FrameReadyEventHandler UnityEngine.Video.VideoPlayer::frameReady
	FrameReadyEventHandler_t3848515759 * ___frameReady_11;

public:
	inline static int32_t get_offset_of_prepareCompleted_4() { return static_cast<int32_t>(offsetof(VideoPlayer_t1683042537, ___prepareCompleted_4)); }
	inline EventHandler_t3436254912 * get_prepareCompleted_4() const { return ___prepareCompleted_4; }
	inline EventHandler_t3436254912 ** get_address_of_prepareCompleted_4() { return &___prepareCompleted_4; }
	inline void set_prepareCompleted_4(EventHandler_t3436254912 * value)
	{
		___prepareCompleted_4 = value;
		Il2CppCodeGenWriteBarrier((&___prepareCompleted_4), value);
	}

	inline static int32_t get_offset_of_loopPointReached_5() { return static_cast<int32_t>(offsetof(VideoPlayer_t1683042537, ___loopPointReached_5)); }
	inline EventHandler_t3436254912 * get_loopPointReached_5() const { return ___loopPointReached_5; }
	inline EventHandler_t3436254912 ** get_address_of_loopPointReached_5() { return &___loopPointReached_5; }
	inline void set_loopPointReached_5(EventHandler_t3436254912 * value)
	{
		___loopPointReached_5 = value;
		Il2CppCodeGenWriteBarrier((&___loopPointReached_5), value);
	}

	inline static int32_t get_offset_of_started_6() { return static_cast<int32_t>(offsetof(VideoPlayer_t1683042537, ___started_6)); }
	inline EventHandler_t3436254912 * get_started_6() const { return ___started_6; }
	inline EventHandler_t3436254912 ** get_address_of_started_6() { return &___started_6; }
	inline void set_started_6(EventHandler_t3436254912 * value)
	{
		___started_6 = value;
		Il2CppCodeGenWriteBarrier((&___started_6), value);
	}

	inline static int32_t get_offset_of_frameDropped_7() { return static_cast<int32_t>(offsetof(VideoPlayer_t1683042537, ___frameDropped_7)); }
	inline EventHandler_t3436254912 * get_frameDropped_7() const { return ___frameDropped_7; }
	inline EventHandler_t3436254912 ** get_address_of_frameDropped_7() { return &___frameDropped_7; }
	inline void set_frameDropped_7(EventHandler_t3436254912 * value)
	{
		___frameDropped_7 = value;
		Il2CppCodeGenWriteBarrier((&___frameDropped_7), value);
	}

	inline static int32_t get_offset_of_errorReceived_8() { return static_cast<int32_t>(offsetof(VideoPlayer_t1683042537, ___errorReceived_8)); }
	inline ErrorEventHandler_t3211687919 * get_errorReceived_8() const { return ___errorReceived_8; }
	inline ErrorEventHandler_t3211687919 ** get_address_of_errorReceived_8() { return &___errorReceived_8; }
	inline void set_errorReceived_8(ErrorEventHandler_t3211687919 * value)
	{
		___errorReceived_8 = value;
		Il2CppCodeGenWriteBarrier((&___errorReceived_8), value);
	}

	inline static int32_t get_offset_of_seekCompleted_9() { return static_cast<int32_t>(offsetof(VideoPlayer_t1683042537, ___seekCompleted_9)); }
	inline EventHandler_t3436254912 * get_seekCompleted_9() const { return ___seekCompleted_9; }
	inline EventHandler_t3436254912 ** get_address_of_seekCompleted_9() { return &___seekCompleted_9; }
	inline void set_seekCompleted_9(EventHandler_t3436254912 * value)
	{
		___seekCompleted_9 = value;
		Il2CppCodeGenWriteBarrier((&___seekCompleted_9), value);
	}

	inline static int32_t get_offset_of_clockResyncOccurred_10() { return static_cast<int32_t>(offsetof(VideoPlayer_t1683042537, ___clockResyncOccurred_10)); }
	inline TimeEventHandler_t445758600 * get_clockResyncOccurred_10() const { return ___clockResyncOccurred_10; }
	inline TimeEventHandler_t445758600 ** get_address_of_clockResyncOccurred_10() { return &___clockResyncOccurred_10; }
	inline void set_clockResyncOccurred_10(TimeEventHandler_t445758600 * value)
	{
		___clockResyncOccurred_10 = value;
		Il2CppCodeGenWriteBarrier((&___clockResyncOccurred_10), value);
	}

	inline static int32_t get_offset_of_frameReady_11() { return static_cast<int32_t>(offsetof(VideoPlayer_t1683042537, ___frameReady_11)); }
	inline FrameReadyEventHandler_t3848515759 * get_frameReady_11() const { return ___frameReady_11; }
	inline FrameReadyEventHandler_t3848515759 ** get_address_of_frameReady_11() { return &___frameReady_11; }
	inline void set_frameReady_11(FrameReadyEventHandler_t3848515759 * value)
	{
		___frameReady_11 = value;
		Il2CppCodeGenWriteBarrier((&___frameReady_11), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VIDEOPLAYER_T1683042537_H
#ifndef EVENTTRIGGER_T1076084509_H
#define EVENTTRIGGER_T1076084509_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.EventSystems.EventTrigger
struct  EventTrigger_t1076084509  : public MonoBehaviour_t3962482529
{
public:
	// System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry> UnityEngine.EventSystems.EventTrigger::m_Delegates
	List_1_t521873611 * ___m_Delegates_4;
	// System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry> UnityEngine.EventSystems.EventTrigger::delegates
	List_1_t521873611 * ___delegates_5;

public:
	inline static int32_t get_offset_of_m_Delegates_4() { return static_cast<int32_t>(offsetof(EventTrigger_t1076084509, ___m_Delegates_4)); }
	inline List_1_t521873611 * get_m_Delegates_4() const { return ___m_Delegates_4; }
	inline List_1_t521873611 ** get_address_of_m_Delegates_4() { return &___m_Delegates_4; }
	inline void set_m_Delegates_4(List_1_t521873611 * value)
	{
		___m_Delegates_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_Delegates_4), value);
	}

	inline static int32_t get_offset_of_delegates_5() { return static_cast<int32_t>(offsetof(EventTrigger_t1076084509, ___delegates_5)); }
	inline List_1_t521873611 * get_delegates_5() const { return ___delegates_5; }
	inline List_1_t521873611 ** get_address_of_delegates_5() { return &___delegates_5; }
	inline void set_delegates_5(List_1_t521873611 * value)
	{
		___delegates_5 = value;
		Il2CppCodeGenWriteBarrier((&___delegates_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EVENTTRIGGER_T1076084509_H
#ifndef UIBEHAVIOUR_T3495933518_H
#define UIBEHAVIOUR_T3495933518_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.EventSystems.UIBehaviour
struct  UIBehaviour_t3495933518  : public MonoBehaviour_t3962482529
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UIBEHAVIOUR_T3495933518_H
#ifndef BASEINPUT_T3630163547_H
#define BASEINPUT_T3630163547_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.EventSystems.BaseInput
struct  BaseInput_t3630163547  : public UIBehaviour_t3495933518
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BASEINPUT_T3630163547_H
#ifndef BASEINPUTMODULE_T2019268878_H
#define BASEINPUTMODULE_T2019268878_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.EventSystems.BaseInputModule
struct  BaseInputModule_t2019268878  : public UIBehaviour_t3495933518
{
public:
	// System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult> UnityEngine.EventSystems.BaseInputModule::m_RaycastResultCache
	List_1_t537414295 * ___m_RaycastResultCache_4;
	// UnityEngine.EventSystems.AxisEventData UnityEngine.EventSystems.BaseInputModule::m_AxisEventData
	AxisEventData_t2331243652 * ___m_AxisEventData_5;
	// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.BaseInputModule::m_EventSystem
	EventSystem_t1003666588 * ___m_EventSystem_6;
	// UnityEngine.EventSystems.BaseEventData UnityEngine.EventSystems.BaseInputModule::m_BaseEventData
	BaseEventData_t3903027533 * ___m_BaseEventData_7;
	// UnityEngine.EventSystems.BaseInput UnityEngine.EventSystems.BaseInputModule::m_InputOverride
	BaseInput_t3630163547 * ___m_InputOverride_8;
	// UnityEngine.EventSystems.BaseInput UnityEngine.EventSystems.BaseInputModule::m_DefaultInput
	BaseInput_t3630163547 * ___m_DefaultInput_9;

public:
	inline static int32_t get_offset_of_m_RaycastResultCache_4() { return static_cast<int32_t>(offsetof(BaseInputModule_t2019268878, ___m_RaycastResultCache_4)); }
	inline List_1_t537414295 * get_m_RaycastResultCache_4() const { return ___m_RaycastResultCache_4; }
	inline List_1_t537414295 ** get_address_of_m_RaycastResultCache_4() { return &___m_RaycastResultCache_4; }
	inline void set_m_RaycastResultCache_4(List_1_t537414295 * value)
	{
		___m_RaycastResultCache_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_RaycastResultCache_4), value);
	}

	inline static int32_t get_offset_of_m_AxisEventData_5() { return static_cast<int32_t>(offsetof(BaseInputModule_t2019268878, ___m_AxisEventData_5)); }
	inline AxisEventData_t2331243652 * get_m_AxisEventData_5() const { return ___m_AxisEventData_5; }
	inline AxisEventData_t2331243652 ** get_address_of_m_AxisEventData_5() { return &___m_AxisEventData_5; }
	inline void set_m_AxisEventData_5(AxisEventData_t2331243652 * value)
	{
		___m_AxisEventData_5 = value;
		Il2CppCodeGenWriteBarrier((&___m_AxisEventData_5), value);
	}

	inline static int32_t get_offset_of_m_EventSystem_6() { return static_cast<int32_t>(offsetof(BaseInputModule_t2019268878, ___m_EventSystem_6)); }
	inline EventSystem_t1003666588 * get_m_EventSystem_6() const { return ___m_EventSystem_6; }
	inline EventSystem_t1003666588 ** get_address_of_m_EventSystem_6() { return &___m_EventSystem_6; }
	inline void set_m_EventSystem_6(EventSystem_t1003666588 * value)
	{
		___m_EventSystem_6 = value;
		Il2CppCodeGenWriteBarrier((&___m_EventSystem_6), value);
	}

	inline static int32_t get_offset_of_m_BaseEventData_7() { return static_cast<int32_t>(offsetof(BaseInputModule_t2019268878, ___m_BaseEventData_7)); }
	inline BaseEventData_t3903027533 * get_m_BaseEventData_7() const { return ___m_BaseEventData_7; }
	inline BaseEventData_t3903027533 ** get_address_of_m_BaseEventData_7() { return &___m_BaseEventData_7; }
	inline void set_m_BaseEventData_7(BaseEventData_t3903027533 * value)
	{
		___m_BaseEventData_7 = value;
		Il2CppCodeGenWriteBarrier((&___m_BaseEventData_7), value);
	}

	inline static int32_t get_offset_of_m_InputOverride_8() { return static_cast<int32_t>(offsetof(BaseInputModule_t2019268878, ___m_InputOverride_8)); }
	inline BaseInput_t3630163547 * get_m_InputOverride_8() const { return ___m_InputOverride_8; }
	inline BaseInput_t3630163547 ** get_address_of_m_InputOverride_8() { return &___m_InputOverride_8; }
	inline void set_m_InputOverride_8(BaseInput_t3630163547 * value)
	{
		___m_InputOverride_8 = value;
		Il2CppCodeGenWriteBarrier((&___m_InputOverride_8), value);
	}

	inline static int32_t get_offset_of_m_DefaultInput_9() { return static_cast<int32_t>(offsetof(BaseInputModule_t2019268878, ___m_DefaultInput_9)); }
	inline BaseInput_t3630163547 * get_m_DefaultInput_9() const { return ___m_DefaultInput_9; }
	inline BaseInput_t3630163547 ** get_address_of_m_DefaultInput_9() { return &___m_DefaultInput_9; }
	inline void set_m_DefaultInput_9(BaseInput_t3630163547 * value)
	{
		___m_DefaultInput_9 = value;
		Il2CppCodeGenWriteBarrier((&___m_DefaultInput_9), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BASEINPUTMODULE_T2019268878_H
#ifndef EVENTSYSTEM_T1003666588_H
#define EVENTSYSTEM_T1003666588_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.EventSystems.EventSystem
struct  EventSystem_t1003666588  : public UIBehaviour_t3495933518
{
public:
	// System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule> UnityEngine.EventSystems.EventSystem::m_SystemInputModules
	List_1_t3491343620 * ___m_SystemInputModules_4;
	// UnityEngine.EventSystems.BaseInputModule UnityEngine.EventSystems.EventSystem::m_CurrentInputModule
	BaseInputModule_t2019268878 * ___m_CurrentInputModule_5;
	// UnityEngine.GameObject UnityEngine.EventSystems.EventSystem::m_FirstSelected
	GameObject_t1113636619 * ___m_FirstSelected_7;
	// System.Boolean UnityEngine.EventSystems.EventSystem::m_sendNavigationEvents
	bool ___m_sendNavigationEvents_8;
	// System.Int32 UnityEngine.EventSystems.EventSystem::m_DragThreshold
	int32_t ___m_DragThreshold_9;
	// UnityEngine.GameObject UnityEngine.EventSystems.EventSystem::m_CurrentSelected
	GameObject_t1113636619 * ___m_CurrentSelected_10;
	// System.Boolean UnityEngine.EventSystems.EventSystem::m_HasFocus
	bool ___m_HasFocus_11;
	// System.Boolean UnityEngine.EventSystems.EventSystem::m_SelectionGuard
	bool ___m_SelectionGuard_12;
	// UnityEngine.EventSystems.BaseEventData UnityEngine.EventSystems.EventSystem::m_DummyData
	BaseEventData_t3903027533 * ___m_DummyData_13;

public:
	inline static int32_t get_offset_of_m_SystemInputModules_4() { return static_cast<int32_t>(offsetof(EventSystem_t1003666588, ___m_SystemInputModules_4)); }
	inline List_1_t3491343620 * get_m_SystemInputModules_4() const { return ___m_SystemInputModules_4; }
	inline List_1_t3491343620 ** get_address_of_m_SystemInputModules_4() { return &___m_SystemInputModules_4; }
	inline void set_m_SystemInputModules_4(List_1_t3491343620 * value)
	{
		___m_SystemInputModules_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_SystemInputModules_4), value);
	}

	inline static int32_t get_offset_of_m_CurrentInputModule_5() { return static_cast<int32_t>(offsetof(EventSystem_t1003666588, ___m_CurrentInputModule_5)); }
	inline BaseInputModule_t2019268878 * get_m_CurrentInputModule_5() const { return ___m_CurrentInputModule_5; }
	inline BaseInputModule_t2019268878 ** get_address_of_m_CurrentInputModule_5() { return &___m_CurrentInputModule_5; }
	inline void set_m_CurrentInputModule_5(BaseInputModule_t2019268878 * value)
	{
		___m_CurrentInputModule_5 = value;
		Il2CppCodeGenWriteBarrier((&___m_CurrentInputModule_5), value);
	}

	inline static int32_t get_offset_of_m_FirstSelected_7() { return static_cast<int32_t>(offsetof(EventSystem_t1003666588, ___m_FirstSelected_7)); }
	inline GameObject_t1113636619 * get_m_FirstSelected_7() const { return ___m_FirstSelected_7; }
	inline GameObject_t1113636619 ** get_address_of_m_FirstSelected_7() { return &___m_FirstSelected_7; }
	inline void set_m_FirstSelected_7(GameObject_t1113636619 * value)
	{
		___m_FirstSelected_7 = value;
		Il2CppCodeGenWriteBarrier((&___m_FirstSelected_7), value);
	}

	inline static int32_t get_offset_of_m_sendNavigationEvents_8() { return static_cast<int32_t>(offsetof(EventSystem_t1003666588, ___m_sendNavigationEvents_8)); }
	inline bool get_m_sendNavigationEvents_8() const { return ___m_sendNavigationEvents_8; }
	inline bool* get_address_of_m_sendNavigationEvents_8() { return &___m_sendNavigationEvents_8; }
	inline void set_m_sendNavigationEvents_8(bool value)
	{
		___m_sendNavigationEvents_8 = value;
	}

	inline static int32_t get_offset_of_m_DragThreshold_9() { return static_cast<int32_t>(offsetof(EventSystem_t1003666588, ___m_DragThreshold_9)); }
	inline int32_t get_m_DragThreshold_9() const { return ___m_DragThreshold_9; }
	inline int32_t* get_address_of_m_DragThreshold_9() { return &___m_DragThreshold_9; }
	inline void set_m_DragThreshold_9(int32_t value)
	{
		___m_DragThreshold_9 = value;
	}

	inline static int32_t get_offset_of_m_CurrentSelected_10() { return static_cast<int32_t>(offsetof(EventSystem_t1003666588, ___m_CurrentSelected_10)); }
	inline GameObject_t1113636619 * get_m_CurrentSelected_10() const { return ___m_CurrentSelected_10; }
	inline GameObject_t1113636619 ** get_address_of_m_CurrentSelected_10() { return &___m_CurrentSelected_10; }
	inline void set_m_CurrentSelected_10(GameObject_t1113636619 * value)
	{
		___m_CurrentSelected_10 = value;
		Il2CppCodeGenWriteBarrier((&___m_CurrentSelected_10), value);
	}

	inline static int32_t get_offset_of_m_HasFocus_11() { return static_cast<int32_t>(offsetof(EventSystem_t1003666588, ___m_HasFocus_11)); }
	inline bool get_m_HasFocus_11() const { return ___m_HasFocus_11; }
	inline bool* get_address_of_m_HasFocus_11() { return &___m_HasFocus_11; }
	inline void set_m_HasFocus_11(bool value)
	{
		___m_HasFocus_11 = value;
	}

	inline static int32_t get_offset_of_m_SelectionGuard_12() { return static_cast<int32_t>(offsetof(EventSystem_t1003666588, ___m_SelectionGuard_12)); }
	inline bool get_m_SelectionGuard_12() const { return ___m_SelectionGuard_12; }
	inline bool* get_address_of_m_SelectionGuard_12() { return &___m_SelectionGuard_12; }
	inline void set_m_SelectionGuard_12(bool value)
	{
		___m_SelectionGuard_12 = value;
	}

	inline static int32_t get_offset_of_m_DummyData_13() { return static_cast<int32_t>(offsetof(EventSystem_t1003666588, ___m_DummyData_13)); }
	inline BaseEventData_t3903027533 * get_m_DummyData_13() const { return ___m_DummyData_13; }
	inline BaseEventData_t3903027533 ** get_address_of_m_DummyData_13() { return &___m_DummyData_13; }
	inline void set_m_DummyData_13(BaseEventData_t3903027533 * value)
	{
		___m_DummyData_13 = value;
		Il2CppCodeGenWriteBarrier((&___m_DummyData_13), value);
	}
};

struct EventSystem_t1003666588_StaticFields
{
public:
	// System.Collections.Generic.List`1<UnityEngine.EventSystems.EventSystem> UnityEngine.EventSystems.EventSystem::m_EventSystems
	List_1_t2475741330 * ___m_EventSystems_6;
	// System.Comparison`1<UnityEngine.EventSystems.RaycastResult> UnityEngine.EventSystems.EventSystem::s_RaycastComparer
	Comparison_1_t3135238028 * ___s_RaycastComparer_14;
	// System.Comparison`1<UnityEngine.EventSystems.RaycastResult> UnityEngine.EventSystems.EventSystem::<>f__mg$cache0
	Comparison_1_t3135238028 * ___U3CU3Ef__mgU24cache0_15;

public:
	inline static int32_t get_offset_of_m_EventSystems_6() { return static_cast<int32_t>(offsetof(EventSystem_t1003666588_StaticFields, ___m_EventSystems_6)); }
	inline List_1_t2475741330 * get_m_EventSystems_6() const { return ___m_EventSystems_6; }
	inline List_1_t2475741330 ** get_address_of_m_EventSystems_6() { return &___m_EventSystems_6; }
	inline void set_m_EventSystems_6(List_1_t2475741330 * value)
	{
		___m_EventSystems_6 = value;
		Il2CppCodeGenWriteBarrier((&___m_EventSystems_6), value);
	}

	inline static int32_t get_offset_of_s_RaycastComparer_14() { return static_cast<int32_t>(offsetof(EventSystem_t1003666588_StaticFields, ___s_RaycastComparer_14)); }
	inline Comparison_1_t3135238028 * get_s_RaycastComparer_14() const { return ___s_RaycastComparer_14; }
	inline Comparison_1_t3135238028 ** get_address_of_s_RaycastComparer_14() { return &___s_RaycastComparer_14; }
	inline void set_s_RaycastComparer_14(Comparison_1_t3135238028 * value)
	{
		___s_RaycastComparer_14 = value;
		Il2CppCodeGenWriteBarrier((&___s_RaycastComparer_14), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache0_15() { return static_cast<int32_t>(offsetof(EventSystem_t1003666588_StaticFields, ___U3CU3Ef__mgU24cache0_15)); }
	inline Comparison_1_t3135238028 * get_U3CU3Ef__mgU24cache0_15() const { return ___U3CU3Ef__mgU24cache0_15; }
	inline Comparison_1_t3135238028 ** get_address_of_U3CU3Ef__mgU24cache0_15() { return &___U3CU3Ef__mgU24cache0_15; }
	inline void set_U3CU3Ef__mgU24cache0_15(Comparison_1_t3135238028 * value)
	{
		___U3CU3Ef__mgU24cache0_15 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache0_15), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EVENTSYSTEM_T1003666588_H
#ifndef POINTERINPUTMODULE_T3453173740_H
#define POINTERINPUTMODULE_T3453173740_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.EventSystems.PointerInputModule
struct  PointerInputModule_t3453173740  : public BaseInputModule_t2019268878
{
public:
	// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData> UnityEngine.EventSystems.PointerInputModule::m_PointerData
	Dictionary_2_t2696614423 * ___m_PointerData_14;
	// UnityEngine.EventSystems.PointerInputModule/MouseState UnityEngine.EventSystems.PointerInputModule::m_MouseState
	MouseState_t384203932 * ___m_MouseState_15;

public:
	inline static int32_t get_offset_of_m_PointerData_14() { return static_cast<int32_t>(offsetof(PointerInputModule_t3453173740, ___m_PointerData_14)); }
	inline Dictionary_2_t2696614423 * get_m_PointerData_14() const { return ___m_PointerData_14; }
	inline Dictionary_2_t2696614423 ** get_address_of_m_PointerData_14() { return &___m_PointerData_14; }
	inline void set_m_PointerData_14(Dictionary_2_t2696614423 * value)
	{
		___m_PointerData_14 = value;
		Il2CppCodeGenWriteBarrier((&___m_PointerData_14), value);
	}

	inline static int32_t get_offset_of_m_MouseState_15() { return static_cast<int32_t>(offsetof(PointerInputModule_t3453173740, ___m_MouseState_15)); }
	inline MouseState_t384203932 * get_m_MouseState_15() const { return ___m_MouseState_15; }
	inline MouseState_t384203932 ** get_address_of_m_MouseState_15() { return &___m_MouseState_15; }
	inline void set_m_MouseState_15(MouseState_t384203932 * value)
	{
		___m_MouseState_15 = value;
		Il2CppCodeGenWriteBarrier((&___m_MouseState_15), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // POINTERINPUTMODULE_T3453173740_H





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3600 = { sizeof (RemoteSettings_t1718627291), -1, sizeof(RemoteSettings_t1718627291_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable3600[3] = 
{
	RemoteSettings_t1718627291_StaticFields::get_offset_of_Updated_0(),
	RemoteSettings_t1718627291_StaticFields::get_offset_of_BeforeFetchFromServer_1(),
	RemoteSettings_t1718627291_StaticFields::get_offset_of_Completed_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3601 = { sizeof (UpdatedEventHandler_t1027848393), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3602 = { sizeof (RemoteConfigSettings_t1247263429), sizeof(RemoteConfigSettings_t1247263429_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable3602[2] = 
{
	RemoteConfigSettings_t1247263429::get_offset_of_m_Ptr_0(),
	RemoteConfigSettings_t1247263429::get_offset_of_Updated_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3603 = { sizeof (U3CModuleU3E_t692745551), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3604 = { sizeof (WebRequestUtils_t3541624225), -1, sizeof(WebRequestUtils_t3541624225_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable3604[1] = 
{
	WebRequestUtils_t3541624225_StaticFields::get_offset_of_domainRegex_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3605 = { sizeof (CertificateHandler_t2739891000), sizeof(CertificateHandler_t2739891000_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable3605[1] = 
{
	CertificateHandler_t2739891000::get_offset_of_m_Ptr_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3606 = { sizeof (U3CModuleU3E_t692745552), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3607 = { sizeof (VideoClip_t1281919028), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3608 = { sizeof (VideoClipPlayable_t2598186649)+ sizeof (RuntimeObject), sizeof(VideoClipPlayable_t2598186649 ), 0, 0 };
extern const int32_t g_FieldOffsetTable3608[1] = 
{
	VideoClipPlayable_t2598186649::get_offset_of_m_Handle_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3609 = { sizeof (VideoRenderMode_t1346002962)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable3609[6] = 
{
	VideoRenderMode_t1346002962::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3610 = { sizeof (Video3DLayout_t1816783498)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable3610[4] = 
{
	Video3DLayout_t1816783498::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3611 = { sizeof (VideoAspectRatio_t3966034969)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable3611[7] = 
{
	VideoAspectRatio_t3966034969::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3612 = { sizeof (VideoTimeSource_t1981307483)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable3612[3] = 
{
	VideoTimeSource_t1981307483::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3613 = { sizeof (VideoTimeReference_t2705533265)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable3613[4] = 
{
	VideoTimeReference_t2705533265::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3614 = { sizeof (VideoSource_t4095631662)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable3614[3] = 
{
	VideoSource_t4095631662::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3615 = { sizeof (VideoAudioOutputMode_t1271585647)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable3615[5] = 
{
	VideoAudioOutputMode_t1271585647::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3616 = { sizeof (VideoPlayer_t1683042537), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3616[8] = 
{
	VideoPlayer_t1683042537::get_offset_of_prepareCompleted_4(),
	VideoPlayer_t1683042537::get_offset_of_loopPointReached_5(),
	VideoPlayer_t1683042537::get_offset_of_started_6(),
	VideoPlayer_t1683042537::get_offset_of_frameDropped_7(),
	VideoPlayer_t1683042537::get_offset_of_errorReceived_8(),
	VideoPlayer_t1683042537::get_offset_of_seekCompleted_9(),
	VideoPlayer_t1683042537::get_offset_of_clockResyncOccurred_10(),
	VideoPlayer_t1683042537::get_offset_of_frameReady_11(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3617 = { sizeof (EventHandler_t3436254912), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3618 = { sizeof (ErrorEventHandler_t3211687919), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3619 = { sizeof (FrameReadyEventHandler_t3848515759), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3620 = { sizeof (TimeEventHandler_t445758600), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3621 = { sizeof (U3CModuleU3E_t692745553), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3622 = { sizeof (InputTracking_t2240286067), -1, sizeof(InputTracking_t2240286067_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable3622[4] = 
{
	InputTracking_t2240286067_StaticFields::get_offset_of_trackingAcquired_0(),
	InputTracking_t2240286067_StaticFields::get_offset_of_trackingLost_1(),
	InputTracking_t2240286067_StaticFields::get_offset_of_nodeAdded_2(),
	InputTracking_t2240286067_StaticFields::get_offset_of_nodeRemoved_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3623 = { sizeof (TrackingStateEventType_t4085253601)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable3623[5] = 
{
	TrackingStateEventType_t4085253601::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3624 = { sizeof (TrackableId_t1251031970)+ sizeof (RuntimeObject), sizeof(TrackableId_t1251031970 ), sizeof(TrackableId_t1251031970_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable3624[3] = 
{
	TrackableId_t1251031970_StaticFields::get_offset_of_s_InvalidId_0(),
	TrackableId_t1251031970::get_offset_of_m_SubId1_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	TrackableId_t1251031970::get_offset_of_m_SubId2_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3625 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3626 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3627 = { sizeof (SubsystemDescriptorBase_t2374447182), sizeof(SubsystemDescriptorBase_t2374447182_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable3627[1] = 
{
	SubsystemDescriptorBase_t2374447182::get_offset_of_m_Ptr_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3628 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3629 = { sizeof (Internal_SubsystemInstances_t893566515), -1, sizeof(Internal_SubsystemInstances_t893566515_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable3629[1] = 
{
	Internal_SubsystemInstances_t893566515_StaticFields::get_offset_of_s_SubsystemInstances_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3630 = { sizeof (Internal_SubsystemDescriptors_t691162017), -1, sizeof(Internal_SubsystemDescriptors_t691162017_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable3630[1] = 
{
	Internal_SubsystemDescriptors_t691162017_StaticFields::get_offset_of_s_SubsystemDescriptors_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3631 = { sizeof (Subsystem_t89723475), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3631[2] = 
{
	Subsystem_t89723475::get_offset_of_m_Ptr_0(),
	Subsystem_t89723475::get_offset_of_m_subsystemDescriptor_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3632 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3633 = { sizeof (XRNode_t3929440994)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable3633[10] = 
{
	XRNode_t3929440994::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3634 = { sizeof (AvailableTrackingData_t3752197997)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable3634[8] = 
{
	AvailableTrackingData_t3752197997::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3635 = { sizeof (XRNodeState_t3752602430)+ sizeof (RuntimeObject), sizeof(XRNodeState_t3752602430 ), 0, 0 };
extern const int32_t g_FieldOffsetTable3635[10] = 
{
	XRNodeState_t3752602430::get_offset_of_m_Type_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	XRNodeState_t3752602430::get_offset_of_m_AvailableFields_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	XRNodeState_t3752602430::get_offset_of_m_Position_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	XRNodeState_t3752602430::get_offset_of_m_Rotation_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	XRNodeState_t3752602430::get_offset_of_m_Velocity_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
	XRNodeState_t3752602430::get_offset_of_m_AngularVelocity_5() + static_cast<int32_t>(sizeof(RuntimeObject)),
	XRNodeState_t3752602430::get_offset_of_m_Acceleration_6() + static_cast<int32_t>(sizeof(RuntimeObject)),
	XRNodeState_t3752602430::get_offset_of_m_AngularAcceleration_7() + static_cast<int32_t>(sizeof(RuntimeObject)),
	XRNodeState_t3752602430::get_offset_of_m_Tracked_8() + static_cast<int32_t>(sizeof(RuntimeObject)),
	XRNodeState_t3752602430::get_offset_of_m_UniqueID_9() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3636 = { sizeof (FrameReceivedEventArgs_t2588080103)+ sizeof (RuntimeObject), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3636[1] = 
{
	FrameReceivedEventArgs_t2588080103::get_offset_of_m_CameraSubsystem_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3637 = { sizeof (XRCameraSubsystem_t4195795144), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3637[1] = 
{
	XRCameraSubsystem_t4195795144::get_offset_of_FrameReceived_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3638 = { sizeof (XRCameraSubsystemDescriptor_t3689383335), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3639 = { sizeof (PointCloudUpdatedEventArgs_t3436657348)+ sizeof (RuntimeObject), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3639[1] = 
{
	PointCloudUpdatedEventArgs_t3436657348::get_offset_of_m_DepthSubsystem_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3640 = { sizeof (XRDepthSubsystem_t4084359858), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3640[1] = 
{
	XRDepthSubsystem_t4084359858::get_offset_of_PointCloudUpdated_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3641 = { sizeof (XRDepthSubsystemDescriptor_t2726297914), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3642 = { sizeof (PlaneAlignment_t1259054711)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable3642[4] = 
{
	PlaneAlignment_t1259054711::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3643 = { sizeof (BoundedPlane_t1317492334)+ sizeof (RuntimeObject), sizeof(BoundedPlane_t1317492334 ), 0, 0 };
extern const int32_t g_FieldOffsetTable3643[7] = 
{
	BoundedPlane_t1317492334::get_offset_of_m_InstanceId_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	BoundedPlane_t1317492334::get_offset_of_U3CIdU3Ek__BackingField_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	BoundedPlane_t1317492334::get_offset_of_U3CSubsumedByIdU3Ek__BackingField_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	BoundedPlane_t1317492334::get_offset_of_U3CPoseU3Ek__BackingField_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	BoundedPlane_t1317492334::get_offset_of_U3CCenterU3Ek__BackingField_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
	BoundedPlane_t1317492334::get_offset_of_U3CSizeU3Ek__BackingField_5() + static_cast<int32_t>(sizeof(RuntimeObject)),
	BoundedPlane_t1317492334::get_offset_of_U3CAlignmentU3Ek__BackingField_6() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3644 = { sizeof (PlaneAddedEventArgs_t2550175725)+ sizeof (RuntimeObject), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3644[2] = 
{
	PlaneAddedEventArgs_t2550175725::get_offset_of_U3CPlaneSubsystemU3Ek__BackingField_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	PlaneAddedEventArgs_t2550175725::get_offset_of_U3CPlaneU3Ek__BackingField_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3645 = { sizeof (PlaneUpdatedEventArgs_t349485851)+ sizeof (RuntimeObject), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3645[2] = 
{
	PlaneUpdatedEventArgs_t349485851::get_offset_of_U3CPlaneSubsystemU3Ek__BackingField_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	PlaneUpdatedEventArgs_t349485851::get_offset_of_U3CPlaneU3Ek__BackingField_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3646 = { sizeof (PlaneRemovedEventArgs_t1567129782)+ sizeof (RuntimeObject), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3646[2] = 
{
	PlaneRemovedEventArgs_t1567129782::get_offset_of_U3CPlaneSubsystemU3Ek__BackingField_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	PlaneRemovedEventArgs_t1567129782::get_offset_of_U3CPlaneU3Ek__BackingField_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3647 = { sizeof (XRPlaneSubsystem_t2260142932), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3647[3] = 
{
	XRPlaneSubsystem_t2260142932::get_offset_of_PlaneAdded_2(),
	XRPlaneSubsystem_t2260142932::get_offset_of_PlaneUpdated_3(),
	XRPlaneSubsystem_t2260142932::get_offset_of_PlaneRemoved_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3648 = { sizeof (XRPlaneSubsystemDescriptor_t234166304), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3649 = { sizeof (ReferencePoint_t394942483)+ sizeof (RuntimeObject), sizeof(ReferencePoint_t394942483 ), 0, 0 };
extern const int32_t g_FieldOffsetTable3649[3] = 
{
	ReferencePoint_t394942483::get_offset_of_U3CIdU3Ek__BackingField_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ReferencePoint_t394942483::get_offset_of_U3CTrackingStateU3Ek__BackingField_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ReferencePoint_t394942483::get_offset_of_U3CPoseU3Ek__BackingField_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3650 = { sizeof (ReferencePointUpdatedEventArgs_t2046512733)+ sizeof (RuntimeObject), sizeof(ReferencePointUpdatedEventArgs_t2046512733 ), 0, 0 };
extern const int32_t g_FieldOffsetTable3650[3] = 
{
	ReferencePointUpdatedEventArgs_t2046512733::get_offset_of_U3CReferencePointU3Ek__BackingField_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ReferencePointUpdatedEventArgs_t2046512733::get_offset_of_U3CPreviousTrackingStateU3Ek__BackingField_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ReferencePointUpdatedEventArgs_t2046512733::get_offset_of_U3CPreviousPoseU3Ek__BackingField_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3651 = { sizeof (XRReferencePointSubsystem_t416875062), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3651[1] = 
{
	XRReferencePointSubsystem_t416875062::get_offset_of_ReferencePointUpdated_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3652 = { sizeof (XRReferencePointSubsystemDescriptor_t1659547698), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3653 = { sizeof (TrackingState_t1935085052)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable3653[4] = 
{
	TrackingState_t1935085052::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3654 = { sizeof (SessionTrackingStateChangedEventArgs_t2343035655)+ sizeof (RuntimeObject), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3654[2] = 
{
	SessionTrackingStateChangedEventArgs_t2343035655::get_offset_of_m_Session_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	SessionTrackingStateChangedEventArgs_t2343035655::get_offset_of_U3CNewStateU3Ek__BackingField_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3655 = { sizeof (XRSessionSubsystem_t3616338244), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3655[1] = 
{
	XRSessionSubsystem_t3616338244::get_offset_of_TrackingStateChanged_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3656 = { sizeof (XRSessionSubsystemDescriptor_t1188836047), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3657 = { sizeof (U3CModuleU3E_t692745554), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3658 = { sizeof (U3CModuleU3E_t692745555), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3659 = { sizeof (EventHandle_t600343995)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable3659[3] = 
{
	EventHandle_t600343995::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3660 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3661 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3662 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3663 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3664 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3665 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3666 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3667 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3668 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3669 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3670 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3671 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3672 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3673 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3674 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3675 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3676 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3677 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3678 = { sizeof (EventSystem_t1003666588), -1, sizeof(EventSystem_t1003666588_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable3678[12] = 
{
	EventSystem_t1003666588::get_offset_of_m_SystemInputModules_4(),
	EventSystem_t1003666588::get_offset_of_m_CurrentInputModule_5(),
	EventSystem_t1003666588_StaticFields::get_offset_of_m_EventSystems_6(),
	EventSystem_t1003666588::get_offset_of_m_FirstSelected_7(),
	EventSystem_t1003666588::get_offset_of_m_sendNavigationEvents_8(),
	EventSystem_t1003666588::get_offset_of_m_DragThreshold_9(),
	EventSystem_t1003666588::get_offset_of_m_CurrentSelected_10(),
	EventSystem_t1003666588::get_offset_of_m_HasFocus_11(),
	EventSystem_t1003666588::get_offset_of_m_SelectionGuard_12(),
	EventSystem_t1003666588::get_offset_of_m_DummyData_13(),
	EventSystem_t1003666588_StaticFields::get_offset_of_s_RaycastComparer_14(),
	EventSystem_t1003666588_StaticFields::get_offset_of_U3CU3Ef__mgU24cache0_15(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3679 = { sizeof (EventTrigger_t1076084509), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3679[2] = 
{
	EventTrigger_t1076084509::get_offset_of_m_Delegates_4(),
	EventTrigger_t1076084509::get_offset_of_delegates_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3680 = { sizeof (TriggerEvent_t3867320123), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3681 = { sizeof (Entry_t3344766165), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3681[2] = 
{
	Entry_t3344766165::get_offset_of_eventID_0(),
	Entry_t3344766165::get_offset_of_callback_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3682 = { sizeof (EventTriggerType_t55832929)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable3682[18] = 
{
	EventTriggerType_t55832929::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3683 = { sizeof (ExecuteEvents_t3484638744), -1, sizeof(ExecuteEvents_t3484638744_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable3683[36] = 
{
	ExecuteEvents_t3484638744_StaticFields::get_offset_of_s_PointerEnterHandler_0(),
	ExecuteEvents_t3484638744_StaticFields::get_offset_of_s_PointerExitHandler_1(),
	ExecuteEvents_t3484638744_StaticFields::get_offset_of_s_PointerDownHandler_2(),
	ExecuteEvents_t3484638744_StaticFields::get_offset_of_s_PointerUpHandler_3(),
	ExecuteEvents_t3484638744_StaticFields::get_offset_of_s_PointerClickHandler_4(),
	ExecuteEvents_t3484638744_StaticFields::get_offset_of_s_InitializePotentialDragHandler_5(),
	ExecuteEvents_t3484638744_StaticFields::get_offset_of_s_BeginDragHandler_6(),
	ExecuteEvents_t3484638744_StaticFields::get_offset_of_s_DragHandler_7(),
	ExecuteEvents_t3484638744_StaticFields::get_offset_of_s_EndDragHandler_8(),
	ExecuteEvents_t3484638744_StaticFields::get_offset_of_s_DropHandler_9(),
	ExecuteEvents_t3484638744_StaticFields::get_offset_of_s_ScrollHandler_10(),
	ExecuteEvents_t3484638744_StaticFields::get_offset_of_s_UpdateSelectedHandler_11(),
	ExecuteEvents_t3484638744_StaticFields::get_offset_of_s_SelectHandler_12(),
	ExecuteEvents_t3484638744_StaticFields::get_offset_of_s_DeselectHandler_13(),
	ExecuteEvents_t3484638744_StaticFields::get_offset_of_s_MoveHandler_14(),
	ExecuteEvents_t3484638744_StaticFields::get_offset_of_s_SubmitHandler_15(),
	ExecuteEvents_t3484638744_StaticFields::get_offset_of_s_CancelHandler_16(),
	ExecuteEvents_t3484638744_StaticFields::get_offset_of_s_HandlerListPool_17(),
	ExecuteEvents_t3484638744_StaticFields::get_offset_of_s_InternalTransformList_18(),
	ExecuteEvents_t3484638744_StaticFields::get_offset_of_U3CU3Ef__mgU24cache0_19(),
	ExecuteEvents_t3484638744_StaticFields::get_offset_of_U3CU3Ef__mgU24cache1_20(),
	ExecuteEvents_t3484638744_StaticFields::get_offset_of_U3CU3Ef__mgU24cache2_21(),
	ExecuteEvents_t3484638744_StaticFields::get_offset_of_U3CU3Ef__mgU24cache3_22(),
	ExecuteEvents_t3484638744_StaticFields::get_offset_of_U3CU3Ef__mgU24cache4_23(),
	ExecuteEvents_t3484638744_StaticFields::get_offset_of_U3CU3Ef__mgU24cache5_24(),
	ExecuteEvents_t3484638744_StaticFields::get_offset_of_U3CU3Ef__mgU24cache6_25(),
	ExecuteEvents_t3484638744_StaticFields::get_offset_of_U3CU3Ef__mgU24cache7_26(),
	ExecuteEvents_t3484638744_StaticFields::get_offset_of_U3CU3Ef__mgU24cache8_27(),
	ExecuteEvents_t3484638744_StaticFields::get_offset_of_U3CU3Ef__mgU24cache9_28(),
	ExecuteEvents_t3484638744_StaticFields::get_offset_of_U3CU3Ef__mgU24cacheA_29(),
	ExecuteEvents_t3484638744_StaticFields::get_offset_of_U3CU3Ef__mgU24cacheB_30(),
	ExecuteEvents_t3484638744_StaticFields::get_offset_of_U3CU3Ef__mgU24cacheC_31(),
	ExecuteEvents_t3484638744_StaticFields::get_offset_of_U3CU3Ef__mgU24cacheD_32(),
	ExecuteEvents_t3484638744_StaticFields::get_offset_of_U3CU3Ef__mgU24cacheE_33(),
	ExecuteEvents_t3484638744_StaticFields::get_offset_of_U3CU3Ef__mgU24cacheF_34(),
	ExecuteEvents_t3484638744_StaticFields::get_offset_of_U3CU3Ef__mgU24cache10_35(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3684 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3685 = { sizeof (MoveDirection_t1216237838)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable3685[6] = 
{
	MoveDirection_t1216237838::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3686 = { sizeof (RaycasterManager_t2536340562), -1, sizeof(RaycasterManager_t2536340562_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable3686[1] = 
{
	RaycasterManager_t2536340562_StaticFields::get_offset_of_s_Raycasters_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3687 = { sizeof (RaycastResult_t3360306849)+ sizeof (RuntimeObject), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3687[10] = 
{
	RaycastResult_t3360306849::get_offset_of_m_GameObject_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	RaycastResult_t3360306849::get_offset_of_module_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	RaycastResult_t3360306849::get_offset_of_distance_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	RaycastResult_t3360306849::get_offset_of_index_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	RaycastResult_t3360306849::get_offset_of_depth_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
	RaycastResult_t3360306849::get_offset_of_sortingLayer_5() + static_cast<int32_t>(sizeof(RuntimeObject)),
	RaycastResult_t3360306849::get_offset_of_sortingOrder_6() + static_cast<int32_t>(sizeof(RuntimeObject)),
	RaycastResult_t3360306849::get_offset_of_worldPosition_7() + static_cast<int32_t>(sizeof(RuntimeObject)),
	RaycastResult_t3360306849::get_offset_of_worldNormal_8() + static_cast<int32_t>(sizeof(RuntimeObject)),
	RaycastResult_t3360306849::get_offset_of_screenPosition_9() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3688 = { sizeof (UIBehaviour_t3495933518), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3689 = { sizeof (AxisEventData_t2331243652), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3689[2] = 
{
	AxisEventData_t2331243652::get_offset_of_U3CmoveVectorU3Ek__BackingField_2(),
	AxisEventData_t2331243652::get_offset_of_U3CmoveDirU3Ek__BackingField_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3690 = { sizeof (AbstractEventData_t4171500731), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3690[1] = 
{
	AbstractEventData_t4171500731::get_offset_of_m_Used_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3691 = { sizeof (BaseEventData_t3903027533), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3691[1] = 
{
	BaseEventData_t3903027533::get_offset_of_m_EventSystem_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3692 = { sizeof (PointerEventData_t3807901092), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3692[21] = 
{
	PointerEventData_t3807901092::get_offset_of_U3CpointerEnterU3Ek__BackingField_2(),
	PointerEventData_t3807901092::get_offset_of_m_PointerPress_3(),
	PointerEventData_t3807901092::get_offset_of_U3ClastPressU3Ek__BackingField_4(),
	PointerEventData_t3807901092::get_offset_of_U3CrawPointerPressU3Ek__BackingField_5(),
	PointerEventData_t3807901092::get_offset_of_U3CpointerDragU3Ek__BackingField_6(),
	PointerEventData_t3807901092::get_offset_of_U3CpointerCurrentRaycastU3Ek__BackingField_7(),
	PointerEventData_t3807901092::get_offset_of_U3CpointerPressRaycastU3Ek__BackingField_8(),
	PointerEventData_t3807901092::get_offset_of_hovered_9(),
	PointerEventData_t3807901092::get_offset_of_U3CeligibleForClickU3Ek__BackingField_10(),
	PointerEventData_t3807901092::get_offset_of_U3CpointerIdU3Ek__BackingField_11(),
	PointerEventData_t3807901092::get_offset_of_U3CpositionU3Ek__BackingField_12(),
	PointerEventData_t3807901092::get_offset_of_U3CdeltaU3Ek__BackingField_13(),
	PointerEventData_t3807901092::get_offset_of_U3CpressPositionU3Ek__BackingField_14(),
	PointerEventData_t3807901092::get_offset_of_U3CworldPositionU3Ek__BackingField_15(),
	PointerEventData_t3807901092::get_offset_of_U3CworldNormalU3Ek__BackingField_16(),
	PointerEventData_t3807901092::get_offset_of_U3CclickTimeU3Ek__BackingField_17(),
	PointerEventData_t3807901092::get_offset_of_U3CclickCountU3Ek__BackingField_18(),
	PointerEventData_t3807901092::get_offset_of_U3CscrollDeltaU3Ek__BackingField_19(),
	PointerEventData_t3807901092::get_offset_of_U3CuseDragThresholdU3Ek__BackingField_20(),
	PointerEventData_t3807901092::get_offset_of_U3CdraggingU3Ek__BackingField_21(),
	PointerEventData_t3807901092::get_offset_of_U3CbuttonU3Ek__BackingField_22(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3693 = { sizeof (InputButton_t3704011348)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable3693[4] = 
{
	InputButton_t3704011348::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3694 = { sizeof (FramePressState_t3039385657)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable3694[5] = 
{
	FramePressState_t3039385657::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3695 = { sizeof (BaseInput_t3630163547), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3696 = { sizeof (BaseInputModule_t2019268878), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3696[6] = 
{
	BaseInputModule_t2019268878::get_offset_of_m_RaycastResultCache_4(),
	BaseInputModule_t2019268878::get_offset_of_m_AxisEventData_5(),
	BaseInputModule_t2019268878::get_offset_of_m_EventSystem_6(),
	BaseInputModule_t2019268878::get_offset_of_m_BaseEventData_7(),
	BaseInputModule_t2019268878::get_offset_of_m_InputOverride_8(),
	BaseInputModule_t2019268878::get_offset_of_m_DefaultInput_9(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3697 = { sizeof (PointerInputModule_t3453173740), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3697[6] = 
{
	0,
	0,
	0,
	0,
	PointerInputModule_t3453173740::get_offset_of_m_PointerData_14(),
	PointerInputModule_t3453173740::get_offset_of_m_MouseState_15(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3698 = { sizeof (ButtonState_t857139936), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3698[2] = 
{
	ButtonState_t857139936::get_offset_of_m_Button_0(),
	ButtonState_t857139936::get_offset_of_m_EventData_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3699 = { sizeof (MouseState_t384203932), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3699[1] = 
{
	MouseState_t384203932::get_offset_of_m_TrackedButtons_0(),
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // Modified by PostBuild.cs
