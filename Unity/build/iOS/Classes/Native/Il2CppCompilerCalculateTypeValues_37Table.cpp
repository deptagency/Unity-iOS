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


// System.Action`1<Vuforia.AMigratableVideoBackgroundConfigProperty>
struct Action_1_t894480726;
// System.Action`1<Vuforia.Anchor>
struct Action_1_t4033558042;
// System.AsyncCallback
struct AsyncCallback_t3962456242;
// System.Char[]
struct CharU5BU5D_t3528271667;
// System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.ObjectTarget>
struct Dictionary_2_t2100965753;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t128053199;
// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_t1260619206;
// System.Collections.Generic.List`1<UnityEngine.Color32>
struct List_1_t4072576034;
// System.Collections.Generic.List`1<UnityEngine.RectTransform>
struct List_1_t881764471;
// System.Collections.Generic.List`1<UnityEngine.UI.Selectable>
struct List_1_t427135887;
// System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry>
struct List_1_t134214538;
// System.Collections.Generic.List`1<UnityEngine.UI.Toggle>
struct List_1_t4207451803;
// System.Collections.Generic.List`1<UnityEngine.Vector2>
struct List_1_t3628304265;
// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct List_1_t899420910;
// System.Collections.Generic.List`1<UnityEngine.Vector4>
struct List_1_t496136383;
// System.Collections.Generic.List`1<Vuforia.AMigratableVideoBackgroundConfigProperty>
struct List_1_t2194087873;
// System.Collections.Generic.List`1<Vuforia.ICloudRecoEventHandler>
struct List_1_t1049732891;
// System.Collections.Generic.List`1<Vuforia.TargetFinder/TargetSearchResult>
struct List_1_t619090059;
// System.DelegateData
struct DelegateData_t1677132599;
// System.Delegate[]
struct DelegateU5BU5D_t1703627840;
// System.Func`2<UnityEngine.UI.ILayoutElement,System.Single>
struct Func_2_t235587086;
// System.Func`2<UnityEngine.UI.Toggle,System.Boolean>
struct Func_2_t3446800538;
// System.Func`2<Vuforia.TrackableBehaviour,System.Boolean>
struct Func_2_t2413074071;
// System.IAsyncResult
struct IAsyncResult_t767004451;
// System.Object[]
struct ObjectU5BU5D_t2843939325;
// System.Predicate`1<UnityEngine.Component>
struct Predicate_1_t2748928575;
// System.Predicate`1<UnityEngine.UI.Toggle>
struct Predicate_1_t3560671185;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t1281789340;
// System.Void
struct Void_t1185182177;
// UnityEngine.Canvas
struct Canvas_t3310196443;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_t2598313366;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t3807901092;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_t2498835369;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_t3050769227;
// UnityEngine.Events.UnityAction
struct UnityAction_t3245792599;
// UnityEngine.Events.UnityAction`1<UnityEngine.Component>
struct UnityAction_1_t2508470592;
// UnityEngine.GUIStyle
struct GUIStyle_t3956901511;
// UnityEngine.Material
struct Material_t340375123;
// UnityEngine.Mesh
struct Mesh_t3648964284;
// UnityEngine.RaycastHit2D[]
struct RaycastHit2DU5BU5D_t4286651560;
// UnityEngine.RaycastHit[]
struct RaycastHitU5BU5D_t1690781147;
// UnityEngine.RectOffset
struct RectOffset_t1369453676;
// UnityEngine.RectTransform
struct RectTransform_t3704657025;
// UnityEngine.RectTransform/ReapplyDrivenProperties
struct ReapplyDrivenProperties_t1258266594;
// UnityEngine.Sprite
struct Sprite_t280657092;
// UnityEngine.TextGenerator
struct TextGenerator_t3211863866;
// UnityEngine.Texture2D
struct Texture2D_t3840446185;
// UnityEngine.Transform
struct Transform_t3600365921;
// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_t2532145056;
// UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.IClipper>
struct IndexedSet_1_t2673511092;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t3055525458;
// UnityEngine.UI.FontData
struct FontData_t746620069;
// UnityEngine.UI.Graphic
struct Graphic_t1660335611;
// UnityEngine.UI.Image
struct Image_t2670269651;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t3661388177;
// UnityEngine.UI.ObjectPool`1<UnityEngine.UI.LayoutRebuilder>
struct ObjectPool_1_t240936516;
// UnityEngine.UI.RectMask2D
struct RectMask2D_t3474889437;
// UnityEngine.UI.ReflectionMethodsCache/GetRayIntersectionAllCallback
struct GetRayIntersectionAllCallback_t3913627115;
// UnityEngine.UI.ReflectionMethodsCache/GetRayIntersectionAllNonAllocCallback
struct GetRayIntersectionAllNonAllocCallback_t2311174851;
// UnityEngine.UI.ReflectionMethodsCache/GetRaycastNonAllocCallback
struct GetRaycastNonAllocCallback_t3841783507;
// UnityEngine.UI.ReflectionMethodsCache/Raycast2DCallback
struct Raycast2DCallback_t768590915;
// UnityEngine.UI.ReflectionMethodsCache/Raycast3DCallback
struct Raycast3DCallback_t701940803;
// UnityEngine.UI.ReflectionMethodsCache/RaycastAllCallback
struct RaycastAllCallback_t1884415901;
// UnityEngine.UI.ScrollRect/ScrollRectEvent
struct ScrollRectEvent_t343079324;
// UnityEngine.UI.Scrollbar
struct Scrollbar_t1494447233;
// UnityEngine.UI.Selectable
struct Selectable_t3250028441;
// UnityEngine.UI.Slider/SliderEvent
struct SliderEvent_t3180273144;
// UnityEngine.UI.Toggle/ToggleEvent
struct ToggleEvent_t1873685584;
// UnityEngine.UI.ToggleGroup
struct ToggleGroup_t123837990;
// UnityEngine.UI.VertexHelper
struct VertexHelper_t2453304189;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_t1981460040;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t1718750761;
// Vuforia.ARController
struct ARController_t116632334;
// Vuforia.DataSet
struct DataSet_t3286034874;
// Vuforia.ObjectTracker
struct ObjectTracker_t4177997237;
// Vuforia.TargetFinder
struct TargetFinder_t2439332195;
// Vuforia.VuforiaBehaviour
struct VuforiaBehaviour_t2151848540;
// Vuforia.VuforiaConfiguration/VideoBackgroundConfiguration
struct VideoBackgroundConfiguration_t3392414655;




#ifndef U3CMODULEU3E_T692745546_H
#define U3CMODULEU3E_T692745546_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t692745546 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CMODULEU3E_T692745546_H
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
#ifndef BASEVERTEXEFFECT_T2675891272_H
#define BASEVERTEXEFFECT_T2675891272_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.BaseVertexEffect
struct  BaseVertexEffect_t2675891272  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BASEVERTEXEFFECT_T2675891272_H
#ifndef CLIPPERREGISTRY_T2428680409_H
#define CLIPPERREGISTRY_T2428680409_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.ClipperRegistry
struct  ClipperRegistry_t2428680409  : public RuntimeObject
{
public:
	// UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.IClipper> UnityEngine.UI.ClipperRegistry::m_Clippers
	IndexedSet_1_t2673511092 * ___m_Clippers_1;

public:
	inline static int32_t get_offset_of_m_Clippers_1() { return static_cast<int32_t>(offsetof(ClipperRegistry_t2428680409, ___m_Clippers_1)); }
	inline IndexedSet_1_t2673511092 * get_m_Clippers_1() const { return ___m_Clippers_1; }
	inline IndexedSet_1_t2673511092 ** get_address_of_m_Clippers_1() { return &___m_Clippers_1; }
	inline void set_m_Clippers_1(IndexedSet_1_t2673511092 * value)
	{
		___m_Clippers_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_Clippers_1), value);
	}
};

struct ClipperRegistry_t2428680409_StaticFields
{
public:
	// UnityEngine.UI.ClipperRegistry UnityEngine.UI.ClipperRegistry::s_Instance
	ClipperRegistry_t2428680409 * ___s_Instance_0;

public:
	inline static int32_t get_offset_of_s_Instance_0() { return static_cast<int32_t>(offsetof(ClipperRegistry_t2428680409_StaticFields, ___s_Instance_0)); }
	inline ClipperRegistry_t2428680409 * get_s_Instance_0() const { return ___s_Instance_0; }
	inline ClipperRegistry_t2428680409 ** get_address_of_s_Instance_0() { return &___s_Instance_0; }
	inline void set_s_Instance_0(ClipperRegistry_t2428680409 * value)
	{
		___s_Instance_0 = value;
		Il2CppCodeGenWriteBarrier((&___s_Instance_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CLIPPERREGISTRY_T2428680409_H
#ifndef CLIPPING_T312708592_H
#define CLIPPING_T312708592_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Clipping
struct  Clipping_t312708592  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CLIPPING_T312708592_H
#ifndef U3CDELAYEDSETDIRTYU3EC__ITERATOR0_T3170500204_H
#define U3CDELAYEDSETDIRTYU3EC__ITERATOR0_T3170500204_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.LayoutGroup/<DelayedSetDirty>c__Iterator0
struct  U3CDelayedSetDirtyU3Ec__Iterator0_t3170500204  : public RuntimeObject
{
public:
	// UnityEngine.RectTransform UnityEngine.UI.LayoutGroup/<DelayedSetDirty>c__Iterator0::rectTransform
	RectTransform_t3704657025 * ___rectTransform_0;
	// System.Object UnityEngine.UI.LayoutGroup/<DelayedSetDirty>c__Iterator0::$current
	RuntimeObject * ___U24current_1;
	// System.Boolean UnityEngine.UI.LayoutGroup/<DelayedSetDirty>c__Iterator0::$disposing
	bool ___U24disposing_2;
	// System.Int32 UnityEngine.UI.LayoutGroup/<DelayedSetDirty>c__Iterator0::$PC
	int32_t ___U24PC_3;

public:
	inline static int32_t get_offset_of_rectTransform_0() { return static_cast<int32_t>(offsetof(U3CDelayedSetDirtyU3Ec__Iterator0_t3170500204, ___rectTransform_0)); }
	inline RectTransform_t3704657025 * get_rectTransform_0() const { return ___rectTransform_0; }
	inline RectTransform_t3704657025 ** get_address_of_rectTransform_0() { return &___rectTransform_0; }
	inline void set_rectTransform_0(RectTransform_t3704657025 * value)
	{
		___rectTransform_0 = value;
		Il2CppCodeGenWriteBarrier((&___rectTransform_0), value);
	}

	inline static int32_t get_offset_of_U24current_1() { return static_cast<int32_t>(offsetof(U3CDelayedSetDirtyU3Ec__Iterator0_t3170500204, ___U24current_1)); }
	inline RuntimeObject * get_U24current_1() const { return ___U24current_1; }
	inline RuntimeObject ** get_address_of_U24current_1() { return &___U24current_1; }
	inline void set_U24current_1(RuntimeObject * value)
	{
		___U24current_1 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_1), value);
	}

	inline static int32_t get_offset_of_U24disposing_2() { return static_cast<int32_t>(offsetof(U3CDelayedSetDirtyU3Ec__Iterator0_t3170500204, ___U24disposing_2)); }
	inline bool get_U24disposing_2() const { return ___U24disposing_2; }
	inline bool* get_address_of_U24disposing_2() { return &___U24disposing_2; }
	inline void set_U24disposing_2(bool value)
	{
		___U24disposing_2 = value;
	}

	inline static int32_t get_offset_of_U24PC_3() { return static_cast<int32_t>(offsetof(U3CDelayedSetDirtyU3Ec__Iterator0_t3170500204, ___U24PC_3)); }
	inline int32_t get_U24PC_3() const { return ___U24PC_3; }
	inline int32_t* get_address_of_U24PC_3() { return &___U24PC_3; }
	inline void set_U24PC_3(int32_t value)
	{
		___U24PC_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CDELAYEDSETDIRTYU3EC__ITERATOR0_T3170500204_H
#ifndef LAYOUTREBUILDER_T541313304_H
#define LAYOUTREBUILDER_T541313304_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.LayoutRebuilder
struct  LayoutRebuilder_t541313304  : public RuntimeObject
{
public:
	// UnityEngine.RectTransform UnityEngine.UI.LayoutRebuilder::m_ToRebuild
	RectTransform_t3704657025 * ___m_ToRebuild_0;
	// System.Int32 UnityEngine.UI.LayoutRebuilder::m_CachedHashFromTransform
	int32_t ___m_CachedHashFromTransform_1;

public:
	inline static int32_t get_offset_of_m_ToRebuild_0() { return static_cast<int32_t>(offsetof(LayoutRebuilder_t541313304, ___m_ToRebuild_0)); }
	inline RectTransform_t3704657025 * get_m_ToRebuild_0() const { return ___m_ToRebuild_0; }
	inline RectTransform_t3704657025 ** get_address_of_m_ToRebuild_0() { return &___m_ToRebuild_0; }
	inline void set_m_ToRebuild_0(RectTransform_t3704657025 * value)
	{
		___m_ToRebuild_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_ToRebuild_0), value);
	}

	inline static int32_t get_offset_of_m_CachedHashFromTransform_1() { return static_cast<int32_t>(offsetof(LayoutRebuilder_t541313304, ___m_CachedHashFromTransform_1)); }
	inline int32_t get_m_CachedHashFromTransform_1() const { return ___m_CachedHashFromTransform_1; }
	inline int32_t* get_address_of_m_CachedHashFromTransform_1() { return &___m_CachedHashFromTransform_1; }
	inline void set_m_CachedHashFromTransform_1(int32_t value)
	{
		___m_CachedHashFromTransform_1 = value;
	}
};

struct LayoutRebuilder_t541313304_StaticFields
{
public:
	// UnityEngine.UI.ObjectPool`1<UnityEngine.UI.LayoutRebuilder> UnityEngine.UI.LayoutRebuilder::s_Rebuilders
	ObjectPool_1_t240936516 * ___s_Rebuilders_2;
	// UnityEngine.RectTransform/ReapplyDrivenProperties UnityEngine.UI.LayoutRebuilder::<>f__mg$cache0
	ReapplyDrivenProperties_t1258266594 * ___U3CU3Ef__mgU24cache0_3;
	// System.Predicate`1<UnityEngine.Component> UnityEngine.UI.LayoutRebuilder::<>f__am$cache0
	Predicate_1_t2748928575 * ___U3CU3Ef__amU24cache0_4;
	// UnityEngine.Events.UnityAction`1<UnityEngine.Component> UnityEngine.UI.LayoutRebuilder::<>f__am$cache1
	UnityAction_1_t2508470592 * ___U3CU3Ef__amU24cache1_5;
	// UnityEngine.Events.UnityAction`1<UnityEngine.Component> UnityEngine.UI.LayoutRebuilder::<>f__am$cache2
	UnityAction_1_t2508470592 * ___U3CU3Ef__amU24cache2_6;
	// UnityEngine.Events.UnityAction`1<UnityEngine.Component> UnityEngine.UI.LayoutRebuilder::<>f__am$cache3
	UnityAction_1_t2508470592 * ___U3CU3Ef__amU24cache3_7;
	// UnityEngine.Events.UnityAction`1<UnityEngine.Component> UnityEngine.UI.LayoutRebuilder::<>f__am$cache4
	UnityAction_1_t2508470592 * ___U3CU3Ef__amU24cache4_8;

public:
	inline static int32_t get_offset_of_s_Rebuilders_2() { return static_cast<int32_t>(offsetof(LayoutRebuilder_t541313304_StaticFields, ___s_Rebuilders_2)); }
	inline ObjectPool_1_t240936516 * get_s_Rebuilders_2() const { return ___s_Rebuilders_2; }
	inline ObjectPool_1_t240936516 ** get_address_of_s_Rebuilders_2() { return &___s_Rebuilders_2; }
	inline void set_s_Rebuilders_2(ObjectPool_1_t240936516 * value)
	{
		___s_Rebuilders_2 = value;
		Il2CppCodeGenWriteBarrier((&___s_Rebuilders_2), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache0_3() { return static_cast<int32_t>(offsetof(LayoutRebuilder_t541313304_StaticFields, ___U3CU3Ef__mgU24cache0_3)); }
	inline ReapplyDrivenProperties_t1258266594 * get_U3CU3Ef__mgU24cache0_3() const { return ___U3CU3Ef__mgU24cache0_3; }
	inline ReapplyDrivenProperties_t1258266594 ** get_address_of_U3CU3Ef__mgU24cache0_3() { return &___U3CU3Ef__mgU24cache0_3; }
	inline void set_U3CU3Ef__mgU24cache0_3(ReapplyDrivenProperties_t1258266594 * value)
	{
		___U3CU3Ef__mgU24cache0_3 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache0_3), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache0_4() { return static_cast<int32_t>(offsetof(LayoutRebuilder_t541313304_StaticFields, ___U3CU3Ef__amU24cache0_4)); }
	inline Predicate_1_t2748928575 * get_U3CU3Ef__amU24cache0_4() const { return ___U3CU3Ef__amU24cache0_4; }
	inline Predicate_1_t2748928575 ** get_address_of_U3CU3Ef__amU24cache0_4() { return &___U3CU3Ef__amU24cache0_4; }
	inline void set_U3CU3Ef__amU24cache0_4(Predicate_1_t2748928575 * value)
	{
		___U3CU3Ef__amU24cache0_4 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cache0_4), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache1_5() { return static_cast<int32_t>(offsetof(LayoutRebuilder_t541313304_StaticFields, ___U3CU3Ef__amU24cache1_5)); }
	inline UnityAction_1_t2508470592 * get_U3CU3Ef__amU24cache1_5() const { return ___U3CU3Ef__amU24cache1_5; }
	inline UnityAction_1_t2508470592 ** get_address_of_U3CU3Ef__amU24cache1_5() { return &___U3CU3Ef__amU24cache1_5; }
	inline void set_U3CU3Ef__amU24cache1_5(UnityAction_1_t2508470592 * value)
	{
		___U3CU3Ef__amU24cache1_5 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cache1_5), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache2_6() { return static_cast<int32_t>(offsetof(LayoutRebuilder_t541313304_StaticFields, ___U3CU3Ef__amU24cache2_6)); }
	inline UnityAction_1_t2508470592 * get_U3CU3Ef__amU24cache2_6() const { return ___U3CU3Ef__amU24cache2_6; }
	inline UnityAction_1_t2508470592 ** get_address_of_U3CU3Ef__amU24cache2_6() { return &___U3CU3Ef__amU24cache2_6; }
	inline void set_U3CU3Ef__amU24cache2_6(UnityAction_1_t2508470592 * value)
	{
		___U3CU3Ef__amU24cache2_6 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cache2_6), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache3_7() { return static_cast<int32_t>(offsetof(LayoutRebuilder_t541313304_StaticFields, ___U3CU3Ef__amU24cache3_7)); }
	inline UnityAction_1_t2508470592 * get_U3CU3Ef__amU24cache3_7() const { return ___U3CU3Ef__amU24cache3_7; }
	inline UnityAction_1_t2508470592 ** get_address_of_U3CU3Ef__amU24cache3_7() { return &___U3CU3Ef__amU24cache3_7; }
	inline void set_U3CU3Ef__amU24cache3_7(UnityAction_1_t2508470592 * value)
	{
		___U3CU3Ef__amU24cache3_7 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cache3_7), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache4_8() { return static_cast<int32_t>(offsetof(LayoutRebuilder_t541313304_StaticFields, ___U3CU3Ef__amU24cache4_8)); }
	inline UnityAction_1_t2508470592 * get_U3CU3Ef__amU24cache4_8() const { return ___U3CU3Ef__amU24cache4_8; }
	inline UnityAction_1_t2508470592 ** get_address_of_U3CU3Ef__amU24cache4_8() { return &___U3CU3Ef__amU24cache4_8; }
	inline void set_U3CU3Ef__amU24cache4_8(UnityAction_1_t2508470592 * value)
	{
		___U3CU3Ef__amU24cache4_8 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cache4_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LAYOUTREBUILDER_T541313304_H
#ifndef LAYOUTUTILITY_T2745813735_H
#define LAYOUTUTILITY_T2745813735_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.LayoutUtility
struct  LayoutUtility_t2745813735  : public RuntimeObject
{
public:

public:
};

struct LayoutUtility_t2745813735_StaticFields
{
public:
	// System.Func`2<UnityEngine.UI.ILayoutElement,System.Single> UnityEngine.UI.LayoutUtility::<>f__am$cache0
	Func_2_t235587086 * ___U3CU3Ef__amU24cache0_0;
	// System.Func`2<UnityEngine.UI.ILayoutElement,System.Single> UnityEngine.UI.LayoutUtility::<>f__am$cache1
	Func_2_t235587086 * ___U3CU3Ef__amU24cache1_1;
	// System.Func`2<UnityEngine.UI.ILayoutElement,System.Single> UnityEngine.UI.LayoutUtility::<>f__am$cache2
	Func_2_t235587086 * ___U3CU3Ef__amU24cache2_2;
	// System.Func`2<UnityEngine.UI.ILayoutElement,System.Single> UnityEngine.UI.LayoutUtility::<>f__am$cache3
	Func_2_t235587086 * ___U3CU3Ef__amU24cache3_3;
	// System.Func`2<UnityEngine.UI.ILayoutElement,System.Single> UnityEngine.UI.LayoutUtility::<>f__am$cache4
	Func_2_t235587086 * ___U3CU3Ef__amU24cache4_4;
	// System.Func`2<UnityEngine.UI.ILayoutElement,System.Single> UnityEngine.UI.LayoutUtility::<>f__am$cache5
	Func_2_t235587086 * ___U3CU3Ef__amU24cache5_5;
	// System.Func`2<UnityEngine.UI.ILayoutElement,System.Single> UnityEngine.UI.LayoutUtility::<>f__am$cache6
	Func_2_t235587086 * ___U3CU3Ef__amU24cache6_6;
	// System.Func`2<UnityEngine.UI.ILayoutElement,System.Single> UnityEngine.UI.LayoutUtility::<>f__am$cache7
	Func_2_t235587086 * ___U3CU3Ef__amU24cache7_7;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cache0_0() { return static_cast<int32_t>(offsetof(LayoutUtility_t2745813735_StaticFields, ___U3CU3Ef__amU24cache0_0)); }
	inline Func_2_t235587086 * get_U3CU3Ef__amU24cache0_0() const { return ___U3CU3Ef__amU24cache0_0; }
	inline Func_2_t235587086 ** get_address_of_U3CU3Ef__amU24cache0_0() { return &___U3CU3Ef__amU24cache0_0; }
	inline void set_U3CU3Ef__amU24cache0_0(Func_2_t235587086 * value)
	{
		___U3CU3Ef__amU24cache0_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cache0_0), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache1_1() { return static_cast<int32_t>(offsetof(LayoutUtility_t2745813735_StaticFields, ___U3CU3Ef__amU24cache1_1)); }
	inline Func_2_t235587086 * get_U3CU3Ef__amU24cache1_1() const { return ___U3CU3Ef__amU24cache1_1; }
	inline Func_2_t235587086 ** get_address_of_U3CU3Ef__amU24cache1_1() { return &___U3CU3Ef__amU24cache1_1; }
	inline void set_U3CU3Ef__amU24cache1_1(Func_2_t235587086 * value)
	{
		___U3CU3Ef__amU24cache1_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cache1_1), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache2_2() { return static_cast<int32_t>(offsetof(LayoutUtility_t2745813735_StaticFields, ___U3CU3Ef__amU24cache2_2)); }
	inline Func_2_t235587086 * get_U3CU3Ef__amU24cache2_2() const { return ___U3CU3Ef__amU24cache2_2; }
	inline Func_2_t235587086 ** get_address_of_U3CU3Ef__amU24cache2_2() { return &___U3CU3Ef__amU24cache2_2; }
	inline void set_U3CU3Ef__amU24cache2_2(Func_2_t235587086 * value)
	{
		___U3CU3Ef__amU24cache2_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cache2_2), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache3_3() { return static_cast<int32_t>(offsetof(LayoutUtility_t2745813735_StaticFields, ___U3CU3Ef__amU24cache3_3)); }
	inline Func_2_t235587086 * get_U3CU3Ef__amU24cache3_3() const { return ___U3CU3Ef__amU24cache3_3; }
	inline Func_2_t235587086 ** get_address_of_U3CU3Ef__amU24cache3_3() { return &___U3CU3Ef__amU24cache3_3; }
	inline void set_U3CU3Ef__amU24cache3_3(Func_2_t235587086 * value)
	{
		___U3CU3Ef__amU24cache3_3 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cache3_3), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache4_4() { return static_cast<int32_t>(offsetof(LayoutUtility_t2745813735_StaticFields, ___U3CU3Ef__amU24cache4_4)); }
	inline Func_2_t235587086 * get_U3CU3Ef__amU24cache4_4() const { return ___U3CU3Ef__amU24cache4_4; }
	inline Func_2_t235587086 ** get_address_of_U3CU3Ef__amU24cache4_4() { return &___U3CU3Ef__amU24cache4_4; }
	inline void set_U3CU3Ef__amU24cache4_4(Func_2_t235587086 * value)
	{
		___U3CU3Ef__amU24cache4_4 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cache4_4), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache5_5() { return static_cast<int32_t>(offsetof(LayoutUtility_t2745813735_StaticFields, ___U3CU3Ef__amU24cache5_5)); }
	inline Func_2_t235587086 * get_U3CU3Ef__amU24cache5_5() const { return ___U3CU3Ef__amU24cache5_5; }
	inline Func_2_t235587086 ** get_address_of_U3CU3Ef__amU24cache5_5() { return &___U3CU3Ef__amU24cache5_5; }
	inline void set_U3CU3Ef__amU24cache5_5(Func_2_t235587086 * value)
	{
		___U3CU3Ef__amU24cache5_5 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cache5_5), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache6_6() { return static_cast<int32_t>(offsetof(LayoutUtility_t2745813735_StaticFields, ___U3CU3Ef__amU24cache6_6)); }
	inline Func_2_t235587086 * get_U3CU3Ef__amU24cache6_6() const { return ___U3CU3Ef__amU24cache6_6; }
	inline Func_2_t235587086 ** get_address_of_U3CU3Ef__amU24cache6_6() { return &___U3CU3Ef__amU24cache6_6; }
	inline void set_U3CU3Ef__amU24cache6_6(Func_2_t235587086 * value)
	{
		___U3CU3Ef__amU24cache6_6 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cache6_6), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache7_7() { return static_cast<int32_t>(offsetof(LayoutUtility_t2745813735_StaticFields, ___U3CU3Ef__amU24cache7_7)); }
	inline Func_2_t235587086 * get_U3CU3Ef__amU24cache7_7() const { return ___U3CU3Ef__amU24cache7_7; }
	inline Func_2_t235587086 ** get_address_of_U3CU3Ef__amU24cache7_7() { return &___U3CU3Ef__amU24cache7_7; }
	inline void set_U3CU3Ef__amU24cache7_7(Func_2_t235587086 * value)
	{
		___U3CU3Ef__amU24cache7_7 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cache7_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LAYOUTUTILITY_T2745813735_H
#ifndef RECTANGULARVERTEXCLIPPER_T626611136_H
#define RECTANGULARVERTEXCLIPPER_T626611136_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.RectangularVertexClipper
struct  RectangularVertexClipper_t626611136  : public RuntimeObject
{
public:
	// UnityEngine.Vector3[] UnityEngine.UI.RectangularVertexClipper::m_WorldCorners
	Vector3U5BU5D_t1718750761* ___m_WorldCorners_0;
	// UnityEngine.Vector3[] UnityEngine.UI.RectangularVertexClipper::m_CanvasCorners
	Vector3U5BU5D_t1718750761* ___m_CanvasCorners_1;

public:
	inline static int32_t get_offset_of_m_WorldCorners_0() { return static_cast<int32_t>(offsetof(RectangularVertexClipper_t626611136, ___m_WorldCorners_0)); }
	inline Vector3U5BU5D_t1718750761* get_m_WorldCorners_0() const { return ___m_WorldCorners_0; }
	inline Vector3U5BU5D_t1718750761** get_address_of_m_WorldCorners_0() { return &___m_WorldCorners_0; }
	inline void set_m_WorldCorners_0(Vector3U5BU5D_t1718750761* value)
	{
		___m_WorldCorners_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_WorldCorners_0), value);
	}

	inline static int32_t get_offset_of_m_CanvasCorners_1() { return static_cast<int32_t>(offsetof(RectangularVertexClipper_t626611136, ___m_CanvasCorners_1)); }
	inline Vector3U5BU5D_t1718750761* get_m_CanvasCorners_1() const { return ___m_CanvasCorners_1; }
	inline Vector3U5BU5D_t1718750761** get_address_of_m_CanvasCorners_1() { return &___m_CanvasCorners_1; }
	inline void set_m_CanvasCorners_1(Vector3U5BU5D_t1718750761* value)
	{
		___m_CanvasCorners_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_CanvasCorners_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RECTANGULARVERTEXCLIPPER_T626611136_H
#ifndef REFLECTIONMETHODSCACHE_T2103211062_H
#define REFLECTIONMETHODSCACHE_T2103211062_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.ReflectionMethodsCache
struct  ReflectionMethodsCache_t2103211062  : public RuntimeObject
{
public:
	// UnityEngine.UI.ReflectionMethodsCache/Raycast3DCallback UnityEngine.UI.ReflectionMethodsCache::raycast3D
	Raycast3DCallback_t701940803 * ___raycast3D_0;
	// UnityEngine.UI.ReflectionMethodsCache/RaycastAllCallback UnityEngine.UI.ReflectionMethodsCache::raycast3DAll
	RaycastAllCallback_t1884415901 * ___raycast3DAll_1;
	// UnityEngine.UI.ReflectionMethodsCache/Raycast2DCallback UnityEngine.UI.ReflectionMethodsCache::raycast2D
	Raycast2DCallback_t768590915 * ___raycast2D_2;
	// UnityEngine.UI.ReflectionMethodsCache/GetRayIntersectionAllCallback UnityEngine.UI.ReflectionMethodsCache::getRayIntersectionAll
	GetRayIntersectionAllCallback_t3913627115 * ___getRayIntersectionAll_3;
	// UnityEngine.UI.ReflectionMethodsCache/GetRayIntersectionAllNonAllocCallback UnityEngine.UI.ReflectionMethodsCache::getRayIntersectionAllNonAlloc
	GetRayIntersectionAllNonAllocCallback_t2311174851 * ___getRayIntersectionAllNonAlloc_4;
	// UnityEngine.UI.ReflectionMethodsCache/GetRaycastNonAllocCallback UnityEngine.UI.ReflectionMethodsCache::getRaycastNonAlloc
	GetRaycastNonAllocCallback_t3841783507 * ___getRaycastNonAlloc_5;

public:
	inline static int32_t get_offset_of_raycast3D_0() { return static_cast<int32_t>(offsetof(ReflectionMethodsCache_t2103211062, ___raycast3D_0)); }
	inline Raycast3DCallback_t701940803 * get_raycast3D_0() const { return ___raycast3D_0; }
	inline Raycast3DCallback_t701940803 ** get_address_of_raycast3D_0() { return &___raycast3D_0; }
	inline void set_raycast3D_0(Raycast3DCallback_t701940803 * value)
	{
		___raycast3D_0 = value;
		Il2CppCodeGenWriteBarrier((&___raycast3D_0), value);
	}

	inline static int32_t get_offset_of_raycast3DAll_1() { return static_cast<int32_t>(offsetof(ReflectionMethodsCache_t2103211062, ___raycast3DAll_1)); }
	inline RaycastAllCallback_t1884415901 * get_raycast3DAll_1() const { return ___raycast3DAll_1; }
	inline RaycastAllCallback_t1884415901 ** get_address_of_raycast3DAll_1() { return &___raycast3DAll_1; }
	inline void set_raycast3DAll_1(RaycastAllCallback_t1884415901 * value)
	{
		___raycast3DAll_1 = value;
		Il2CppCodeGenWriteBarrier((&___raycast3DAll_1), value);
	}

	inline static int32_t get_offset_of_raycast2D_2() { return static_cast<int32_t>(offsetof(ReflectionMethodsCache_t2103211062, ___raycast2D_2)); }
	inline Raycast2DCallback_t768590915 * get_raycast2D_2() const { return ___raycast2D_2; }
	inline Raycast2DCallback_t768590915 ** get_address_of_raycast2D_2() { return &___raycast2D_2; }
	inline void set_raycast2D_2(Raycast2DCallback_t768590915 * value)
	{
		___raycast2D_2 = value;
		Il2CppCodeGenWriteBarrier((&___raycast2D_2), value);
	}

	inline static int32_t get_offset_of_getRayIntersectionAll_3() { return static_cast<int32_t>(offsetof(ReflectionMethodsCache_t2103211062, ___getRayIntersectionAll_3)); }
	inline GetRayIntersectionAllCallback_t3913627115 * get_getRayIntersectionAll_3() const { return ___getRayIntersectionAll_3; }
	inline GetRayIntersectionAllCallback_t3913627115 ** get_address_of_getRayIntersectionAll_3() { return &___getRayIntersectionAll_3; }
	inline void set_getRayIntersectionAll_3(GetRayIntersectionAllCallback_t3913627115 * value)
	{
		___getRayIntersectionAll_3 = value;
		Il2CppCodeGenWriteBarrier((&___getRayIntersectionAll_3), value);
	}

	inline static int32_t get_offset_of_getRayIntersectionAllNonAlloc_4() { return static_cast<int32_t>(offsetof(ReflectionMethodsCache_t2103211062, ___getRayIntersectionAllNonAlloc_4)); }
	inline GetRayIntersectionAllNonAllocCallback_t2311174851 * get_getRayIntersectionAllNonAlloc_4() const { return ___getRayIntersectionAllNonAlloc_4; }
	inline GetRayIntersectionAllNonAllocCallback_t2311174851 ** get_address_of_getRayIntersectionAllNonAlloc_4() { return &___getRayIntersectionAllNonAlloc_4; }
	inline void set_getRayIntersectionAllNonAlloc_4(GetRayIntersectionAllNonAllocCallback_t2311174851 * value)
	{
		___getRayIntersectionAllNonAlloc_4 = value;
		Il2CppCodeGenWriteBarrier((&___getRayIntersectionAllNonAlloc_4), value);
	}

	inline static int32_t get_offset_of_getRaycastNonAlloc_5() { return static_cast<int32_t>(offsetof(ReflectionMethodsCache_t2103211062, ___getRaycastNonAlloc_5)); }
	inline GetRaycastNonAllocCallback_t3841783507 * get_getRaycastNonAlloc_5() const { return ___getRaycastNonAlloc_5; }
	inline GetRaycastNonAllocCallback_t3841783507 ** get_address_of_getRaycastNonAlloc_5() { return &___getRaycastNonAlloc_5; }
	inline void set_getRaycastNonAlloc_5(GetRaycastNonAllocCallback_t3841783507 * value)
	{
		___getRaycastNonAlloc_5 = value;
		Il2CppCodeGenWriteBarrier((&___getRaycastNonAlloc_5), value);
	}
};

struct ReflectionMethodsCache_t2103211062_StaticFields
{
public:
	// UnityEngine.UI.ReflectionMethodsCache UnityEngine.UI.ReflectionMethodsCache::s_ReflectionMethodsCache
	ReflectionMethodsCache_t2103211062 * ___s_ReflectionMethodsCache_6;

public:
	inline static int32_t get_offset_of_s_ReflectionMethodsCache_6() { return static_cast<int32_t>(offsetof(ReflectionMethodsCache_t2103211062_StaticFields, ___s_ReflectionMethodsCache_6)); }
	inline ReflectionMethodsCache_t2103211062 * get_s_ReflectionMethodsCache_6() const { return ___s_ReflectionMethodsCache_6; }
	inline ReflectionMethodsCache_t2103211062 ** get_address_of_s_ReflectionMethodsCache_6() { return &___s_ReflectionMethodsCache_6; }
	inline void set_s_ReflectionMethodsCache_6(ReflectionMethodsCache_t2103211062 * value)
	{
		___s_ReflectionMethodsCache_6 = value;
		Il2CppCodeGenWriteBarrier((&___s_ReflectionMethodsCache_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REFLECTIONMETHODSCACHE_T2103211062_H
#ifndef U3CCLICKREPEATU3EC__ITERATOR0_T3442648935_H
#define U3CCLICKREPEATU3EC__ITERATOR0_T3442648935_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Scrollbar/<ClickRepeat>c__Iterator0
struct  U3CClickRepeatU3Ec__Iterator0_t3442648935  : public RuntimeObject
{
public:
	// UnityEngine.EventSystems.PointerEventData UnityEngine.UI.Scrollbar/<ClickRepeat>c__Iterator0::eventData
	PointerEventData_t3807901092 * ___eventData_0;
	// UnityEngine.UI.Scrollbar UnityEngine.UI.Scrollbar/<ClickRepeat>c__Iterator0::$this
	Scrollbar_t1494447233 * ___U24this_1;
	// System.Object UnityEngine.UI.Scrollbar/<ClickRepeat>c__Iterator0::$current
	RuntimeObject * ___U24current_2;
	// System.Boolean UnityEngine.UI.Scrollbar/<ClickRepeat>c__Iterator0::$disposing
	bool ___U24disposing_3;
	// System.Int32 UnityEngine.UI.Scrollbar/<ClickRepeat>c__Iterator0::$PC
	int32_t ___U24PC_4;

public:
	inline static int32_t get_offset_of_eventData_0() { return static_cast<int32_t>(offsetof(U3CClickRepeatU3Ec__Iterator0_t3442648935, ___eventData_0)); }
	inline PointerEventData_t3807901092 * get_eventData_0() const { return ___eventData_0; }
	inline PointerEventData_t3807901092 ** get_address_of_eventData_0() { return &___eventData_0; }
	inline void set_eventData_0(PointerEventData_t3807901092 * value)
	{
		___eventData_0 = value;
		Il2CppCodeGenWriteBarrier((&___eventData_0), value);
	}

	inline static int32_t get_offset_of_U24this_1() { return static_cast<int32_t>(offsetof(U3CClickRepeatU3Ec__Iterator0_t3442648935, ___U24this_1)); }
	inline Scrollbar_t1494447233 * get_U24this_1() const { return ___U24this_1; }
	inline Scrollbar_t1494447233 ** get_address_of_U24this_1() { return &___U24this_1; }
	inline void set_U24this_1(Scrollbar_t1494447233 * value)
	{
		___U24this_1 = value;
		Il2CppCodeGenWriteBarrier((&___U24this_1), value);
	}

	inline static int32_t get_offset_of_U24current_2() { return static_cast<int32_t>(offsetof(U3CClickRepeatU3Ec__Iterator0_t3442648935, ___U24current_2)); }
	inline RuntimeObject * get_U24current_2() const { return ___U24current_2; }
	inline RuntimeObject ** get_address_of_U24current_2() { return &___U24current_2; }
	inline void set_U24current_2(RuntimeObject * value)
	{
		___U24current_2 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_2), value);
	}

	inline static int32_t get_offset_of_U24disposing_3() { return static_cast<int32_t>(offsetof(U3CClickRepeatU3Ec__Iterator0_t3442648935, ___U24disposing_3)); }
	inline bool get_U24disposing_3() const { return ___U24disposing_3; }
	inline bool* get_address_of_U24disposing_3() { return &___U24disposing_3; }
	inline void set_U24disposing_3(bool value)
	{
		___U24disposing_3 = value;
	}

	inline static int32_t get_offset_of_U24PC_4() { return static_cast<int32_t>(offsetof(U3CClickRepeatU3Ec__Iterator0_t3442648935, ___U24PC_4)); }
	inline int32_t get_U24PC_4() const { return ___U24PC_4; }
	inline int32_t* get_address_of_U24PC_4() { return &___U24PC_4; }
	inline void set_U24PC_4(int32_t value)
	{
		___U24PC_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CCLICKREPEATU3EC__ITERATOR0_T3442648935_H
#ifndef SETPROPERTYUTILITY_T3359423571_H
#define SETPROPERTYUTILITY_T3359423571_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.SetPropertyUtility
struct  SetPropertyUtility_t3359423571  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SETPROPERTYUTILITY_T3359423571_H
#ifndef STENCILMATERIAL_T3850132571_H
#define STENCILMATERIAL_T3850132571_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.StencilMaterial
struct  StencilMaterial_t3850132571  : public RuntimeObject
{
public:

public:
};

struct StencilMaterial_t3850132571_StaticFields
{
public:
	// System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry> UnityEngine.UI.StencilMaterial::m_List
	List_1_t134214538 * ___m_List_0;

public:
	inline static int32_t get_offset_of_m_List_0() { return static_cast<int32_t>(offsetof(StencilMaterial_t3850132571_StaticFields, ___m_List_0)); }
	inline List_1_t134214538 * get_m_List_0() const { return ___m_List_0; }
	inline List_1_t134214538 ** get_address_of_m_List_0() { return &___m_List_0; }
	inline void set_m_List_0(List_1_t134214538 * value)
	{
		___m_List_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_List_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STENCILMATERIAL_T3850132571_H
#ifndef AMIGRATABLEVIDEOBACKGROUNDCONFIGPROPERTY_T722013131_H
#define AMIGRATABLEVIDEOBACKGROUNDCONFIGPROPERTY_T722013131_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.AMigratableVideoBackgroundConfigProperty
struct  AMigratableVideoBackgroundConfigProperty_t722013131  : public RuntimeObject
{
public:
	// Vuforia.VuforiaConfiguration/VideoBackgroundConfiguration Vuforia.AMigratableVideoBackgroundConfigProperty::Config
	VideoBackgroundConfiguration_t3392414655 * ___Config_0;

public:
	inline static int32_t get_offset_of_Config_0() { return static_cast<int32_t>(offsetof(AMigratableVideoBackgroundConfigProperty_t722013131, ___Config_0)); }
	inline VideoBackgroundConfiguration_t3392414655 * get_Config_0() const { return ___Config_0; }
	inline VideoBackgroundConfiguration_t3392414655 ** get_address_of_Config_0() { return &___Config_0; }
	inline void set_Config_0(VideoBackgroundConfiguration_t3392414655 * value)
	{
		___Config_0 = value;
		Il2CppCodeGenWriteBarrier((&___Config_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AMIGRATABLEVIDEOBACKGROUNDCONFIGPROPERTY_T722013131_H
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
#ifndef U3CU3EC__DISPLAYCLASS11_0_T2669575632_H
#define U3CU3EC__DISPLAYCLASS11_0_T2669575632_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.ARController/<>c__DisplayClass11_0
struct  U3CU3Ec__DisplayClass11_0_t2669575632  : public RuntimeObject
{
public:
	// Vuforia.ARController Vuforia.ARController/<>c__DisplayClass11_0::controller
	ARController_t116632334 * ___controller_0;

public:
	inline static int32_t get_offset_of_controller_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass11_0_t2669575632, ___controller_0)); }
	inline ARController_t116632334 * get_controller_0() const { return ___controller_0; }
	inline ARController_t116632334 ** get_address_of_controller_0() { return &___controller_0; }
	inline void set_controller_0(ARController_t116632334 * value)
	{
		___controller_0 = value;
		Il2CppCodeGenWriteBarrier((&___controller_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CU3EC__DISPLAYCLASS11_0_T2669575632_H
#ifndef EULAJSONUTILITY_T3513723441_H
#define EULAJSONUTILITY_T3513723441_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.EulaJsonUtility
struct  EulaJsonUtility_t3513723441  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EULAJSONUTILITY_T3513723441_H
#ifndef U3CU3EC_T1040550284_H
#define U3CU3EC_T1040550284_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.PositionalDeviceTrackerImpl/<>c
struct  U3CU3Ec_t1040550284  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t1040550284_StaticFields
{
public:
	// Vuforia.PositionalDeviceTrackerImpl/<>c Vuforia.PositionalDeviceTrackerImpl/<>c::<>9
	U3CU3Ec_t1040550284 * ___U3CU3E9_0;
	// System.Func`2<Vuforia.TrackableBehaviour,System.Boolean> Vuforia.PositionalDeviceTrackerImpl/<>c::<>9__13_0
	Func_2_t2413074071 * ___U3CU3E9__13_0_1;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t1040550284_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t1040550284 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t1040550284 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t1040550284 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3E9_0), value);
	}

	inline static int32_t get_offset_of_U3CU3E9__13_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_t1040550284_StaticFields, ___U3CU3E9__13_0_1)); }
	inline Func_2_t2413074071 * get_U3CU3E9__13_0_1() const { return ___U3CU3E9__13_0_1; }
	inline Func_2_t2413074071 ** get_address_of_U3CU3E9__13_0_1() { return &___U3CU3E9__13_0_1; }
	inline void set_U3CU3E9__13_0_1(Func_2_t2413074071 * value)
	{
		___U3CU3E9__13_0_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3E9__13_0_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CU3EC_T1040550284_H
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
#ifndef VIDEOBACKGROUNDCONFIGMIGRATOR_T3105432194_H
#define VIDEOBACKGROUNDCONFIGMIGRATOR_T3105432194_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.VideoBackgroundConfigMigrator
struct  VideoBackgroundConfigMigrator_t3105432194  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<Vuforia.AMigratableVideoBackgroundConfigProperty> Vuforia.VideoBackgroundConfigMigrator::mMigratableProperties
	List_1_t2194087873 * ___mMigratableProperties_0;

public:
	inline static int32_t get_offset_of_mMigratableProperties_0() { return static_cast<int32_t>(offsetof(VideoBackgroundConfigMigrator_t3105432194, ___mMigratableProperties_0)); }
	inline List_1_t2194087873 * get_mMigratableProperties_0() const { return ___mMigratableProperties_0; }
	inline List_1_t2194087873 ** get_address_of_mMigratableProperties_0() { return &___mMigratableProperties_0; }
	inline void set_mMigratableProperties_0(List_1_t2194087873 * value)
	{
		___mMigratableProperties_0 = value;
		Il2CppCodeGenWriteBarrier((&___mMigratableProperties_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VIDEOBACKGROUNDCONFIGMIGRATOR_T3105432194_H
#ifndef U3CU3EC_T2359455578_H
#define U3CU3EC_T2359455578_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.VideoBackgroundConfigMigrator/<>c
struct  U3CU3Ec_t2359455578  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t2359455578_StaticFields
{
public:
	// Vuforia.VideoBackgroundConfigMigrator/<>c Vuforia.VideoBackgroundConfigMigrator/<>c::<>9
	U3CU3Ec_t2359455578 * ___U3CU3E9_0;
	// System.Action`1<Vuforia.AMigratableVideoBackgroundConfigProperty> Vuforia.VideoBackgroundConfigMigrator/<>c::<>9__2_0
	Action_1_t894480726 * ___U3CU3E9__2_0_1;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t2359455578_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t2359455578 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t2359455578 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t2359455578 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3E9_0), value);
	}

	inline static int32_t get_offset_of_U3CU3E9__2_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_t2359455578_StaticFields, ___U3CU3E9__2_0_1)); }
	inline Action_1_t894480726 * get_U3CU3E9__2_0_1() const { return ___U3CU3E9__2_0_1; }
	inline Action_1_t894480726 ** get_address_of_U3CU3E9__2_0_1() { return &___U3CU3E9__2_0_1; }
	inline void set_U3CU3E9__2_0_1(Action_1_t894480726 * value)
	{
		___U3CU3E9__2_0_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3E9__2_0_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CU3EC_T2359455578_H
#ifndef U24ARRAYTYPEU3D12_T2488454196_H
#define U24ARRAYTYPEU3D12_T2488454196_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType=12
#pragma pack(push, tp, 1)
struct  U24ArrayTypeU3D12_t2488454196 
{
public:
	union
	{
		struct
		{
		};
		uint8_t U24ArrayTypeU3D12_t2488454196__padding[12];
	};

public:
};
#pragma pack(pop, tp)

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU3D12_T2488454196_H
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
#ifndef DRIVENRECTTRANSFORMTRACKER_T2562230146_H
#define DRIVENRECTTRANSFORMTRACKER_T2562230146_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.DrivenRectTransformTracker
struct  DrivenRectTransformTracker_t2562230146 
{
public:
	union
	{
		struct
		{
		};
		uint8_t DrivenRectTransformTracker_t2562230146__padding[1];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DRIVENRECTTRANSFORMTRACKER_T2562230146_H
#ifndef UNITYEVENT_1_T978947469_H
#define UNITYEVENT_1_T978947469_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.UnityEvent`1<System.Boolean>
struct  UnityEvent_1_t978947469  : public UnityEventBase_t3960448221
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_t2843939325* ___m_InvokeArray_4;

public:
	inline static int32_t get_offset_of_m_InvokeArray_4() { return static_cast<int32_t>(offsetof(UnityEvent_1_t978947469, ___m_InvokeArray_4)); }
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
#endif // UNITYEVENT_1_T978947469_H
#ifndef UNITYEVENT_1_T2278926278_H
#define UNITYEVENT_1_T2278926278_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.UnityEvent`1<System.Single>
struct  UnityEvent_1_t2278926278  : public UnityEventBase_t3960448221
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_t2843939325* ___m_InvokeArray_4;

public:
	inline static int32_t get_offset_of_m_InvokeArray_4() { return static_cast<int32_t>(offsetof(UnityEvent_1_t2278926278, ___m_InvokeArray_4)); }
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
#endif // UNITYEVENT_1_T2278926278_H
#ifndef UNITYEVENT_1_T3037889027_H
#define UNITYEVENT_1_T3037889027_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.UnityEvent`1<UnityEngine.Vector2>
struct  UnityEvent_1_t3037889027  : public UnityEventBase_t3960448221
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_t2843939325* ___m_InvokeArray_4;

public:
	inline static int32_t get_offset_of_m_InvokeArray_4() { return static_cast<int32_t>(offsetof(UnityEvent_1_t3037889027, ___m_InvokeArray_4)); }
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
#endif // UNITYEVENT_1_T3037889027_H
#ifndef SPRITESTATE_T1362986479_H
#define SPRITESTATE_T1362986479_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.SpriteState
struct  SpriteState_t1362986479 
{
public:
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_HighlightedSprite
	Sprite_t280657092 * ___m_HighlightedSprite_0;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_PressedSprite
	Sprite_t280657092 * ___m_PressedSprite_1;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_DisabledSprite
	Sprite_t280657092 * ___m_DisabledSprite_2;

public:
	inline static int32_t get_offset_of_m_HighlightedSprite_0() { return static_cast<int32_t>(offsetof(SpriteState_t1362986479, ___m_HighlightedSprite_0)); }
	inline Sprite_t280657092 * get_m_HighlightedSprite_0() const { return ___m_HighlightedSprite_0; }
	inline Sprite_t280657092 ** get_address_of_m_HighlightedSprite_0() { return &___m_HighlightedSprite_0; }
	inline void set_m_HighlightedSprite_0(Sprite_t280657092 * value)
	{
		___m_HighlightedSprite_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_HighlightedSprite_0), value);
	}

	inline static int32_t get_offset_of_m_PressedSprite_1() { return static_cast<int32_t>(offsetof(SpriteState_t1362986479, ___m_PressedSprite_1)); }
	inline Sprite_t280657092 * get_m_PressedSprite_1() const { return ___m_PressedSprite_1; }
	inline Sprite_t280657092 ** get_address_of_m_PressedSprite_1() { return &___m_PressedSprite_1; }
	inline void set_m_PressedSprite_1(Sprite_t280657092 * value)
	{
		___m_PressedSprite_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_PressedSprite_1), value);
	}

	inline static int32_t get_offset_of_m_DisabledSprite_2() { return static_cast<int32_t>(offsetof(SpriteState_t1362986479, ___m_DisabledSprite_2)); }
	inline Sprite_t280657092 * get_m_DisabledSprite_2() const { return ___m_DisabledSprite_2; }
	inline Sprite_t280657092 ** get_address_of_m_DisabledSprite_2() { return &___m_DisabledSprite_2; }
	inline void set_m_DisabledSprite_2(Sprite_t280657092 * value)
	{
		___m_DisabledSprite_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_DisabledSprite_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.UI.SpriteState
struct SpriteState_t1362986479_marshaled_pinvoke
{
	Sprite_t280657092 * ___m_HighlightedSprite_0;
	Sprite_t280657092 * ___m_PressedSprite_1;
	Sprite_t280657092 * ___m_DisabledSprite_2;
};
// Native definition for COM marshalling of UnityEngine.UI.SpriteState
struct SpriteState_t1362986479_marshaled_com
{
	Sprite_t280657092 * ___m_HighlightedSprite_0;
	Sprite_t280657092 * ___m_PressedSprite_1;
	Sprite_t280657092 * ___m_DisabledSprite_2;
};
#endif // SPRITESTATE_T1362986479_H
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
#ifndef EULAVERSIONSTRINGS_T2506079335_H
#define EULAVERSIONSTRINGS_T2506079335_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.EulaJsonUtility/EulaVersionStrings
struct  EulaVersionStrings_t2506079335 
{
public:
	// System.String[] Vuforia.EulaJsonUtility/EulaVersionStrings::Values
	StringU5BU5D_t1281789340* ___Values_0;

public:
	inline static int32_t get_offset_of_Values_0() { return static_cast<int32_t>(offsetof(EulaVersionStrings_t2506079335, ___Values_0)); }
	inline StringU5BU5D_t1281789340* get_Values_0() const { return ___Values_0; }
	inline StringU5BU5D_t1281789340** get_address_of_Values_0() { return &___Values_0; }
	inline void set_Values_0(StringU5BU5D_t1281789340* value)
	{
		___Values_0 = value;
		Il2CppCodeGenWriteBarrier((&___Values_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of Vuforia.EulaJsonUtility/EulaVersionStrings
struct EulaVersionStrings_t2506079335_marshaled_pinvoke
{
	char** ___Values_0;
};
// Native definition for COM marshalling of Vuforia.EulaJsonUtility/EulaVersionStrings
struct EulaVersionStrings_t2506079335_marshaled_com
{
	Il2CppChar** ___Values_0;
};
#endif // EULAVERSIONSTRINGS_T2506079335_H
#ifndef MATTESHADERPROPERTYMIGRATION_T1678383081_H
#define MATTESHADERPROPERTYMIGRATION_T1678383081_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.MatteShaderPropertyMigration
struct  MatteShaderPropertyMigration_t1678383081  : public AMigratableVideoBackgroundConfigProperty_t722013131
{
public:
	// System.String Vuforia.MatteShaderPropertyMigration::mOldShaderName
	String_t* ___mOldShaderName_1;
	// System.String Vuforia.MatteShaderPropertyMigration::mNewShaderName
	String_t* ___mNewShaderName_2;

public:
	inline static int32_t get_offset_of_mOldShaderName_1() { return static_cast<int32_t>(offsetof(MatteShaderPropertyMigration_t1678383081, ___mOldShaderName_1)); }
	inline String_t* get_mOldShaderName_1() const { return ___mOldShaderName_1; }
	inline String_t** get_address_of_mOldShaderName_1() { return &___mOldShaderName_1; }
	inline void set_mOldShaderName_1(String_t* value)
	{
		___mOldShaderName_1 = value;
		Il2CppCodeGenWriteBarrier((&___mOldShaderName_1), value);
	}

	inline static int32_t get_offset_of_mNewShaderName_2() { return static_cast<int32_t>(offsetof(MatteShaderPropertyMigration_t1678383081, ___mNewShaderName_2)); }
	inline String_t* get_mNewShaderName_2() const { return ___mNewShaderName_2; }
	inline String_t** get_address_of_mNewShaderName_2() { return &___mNewShaderName_2; }
	inline void set_mNewShaderName_2(String_t* value)
	{
		___mNewShaderName_2 = value;
		Il2CppCodeGenWriteBarrier((&___mNewShaderName_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MATTESHADERPROPERTYMIGRATION_T1678383081_H
#ifndef TARGETFINDERSTATE_T3286805956_H
#define TARGETFINDERSTATE_T3286805956_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.TargetFinder/TargetFinderState
#pragma pack(push, tp, 1)
struct  TargetFinderState_t3286805956 
{
public:
	// System.Int32 Vuforia.TargetFinder/TargetFinderState::IsRequesting
	int32_t ___IsRequesting_0;
	// System.Int32 Vuforia.TargetFinder/TargetFinderState::UpdateState
	int32_t ___UpdateState_1;

public:
	inline static int32_t get_offset_of_IsRequesting_0() { return static_cast<int32_t>(offsetof(TargetFinderState_t3286805956, ___IsRequesting_0)); }
	inline int32_t get_IsRequesting_0() const { return ___IsRequesting_0; }
	inline int32_t* get_address_of_IsRequesting_0() { return &___IsRequesting_0; }
	inline void set_IsRequesting_0(int32_t value)
	{
		___IsRequesting_0 = value;
	}

	inline static int32_t get_offset_of_UpdateState_1() { return static_cast<int32_t>(offsetof(TargetFinderState_t3286805956, ___UpdateState_1)); }
	inline int32_t get_UpdateState_1() const { return ___UpdateState_1; }
	inline int32_t* get_address_of_UpdateState_1() { return &___UpdateState_1; }
	inline void set_UpdateState_1(int32_t value)
	{
		___UpdateState_1 = value;
	}
};
#pragma pack(pop, tp)

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TARGETFINDERSTATE_T3286805956_H
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
#ifndef VIDEOBACKGROUNDSHADERPROPERTYMIGRATION_T1702172738_H
#define VIDEOBACKGROUNDSHADERPROPERTYMIGRATION_T1702172738_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.VideoBackgroundShaderPropertyMigration
struct  VideoBackgroundShaderPropertyMigration_t1702172738  : public AMigratableVideoBackgroundConfigProperty_t722013131
{
public:
	// System.String Vuforia.VideoBackgroundShaderPropertyMigration::mOldShaderName
	String_t* ___mOldShaderName_1;
	// System.String Vuforia.VideoBackgroundShaderPropertyMigration::mNewShaderName
	String_t* ___mNewShaderName_2;

public:
	inline static int32_t get_offset_of_mOldShaderName_1() { return static_cast<int32_t>(offsetof(VideoBackgroundShaderPropertyMigration_t1702172738, ___mOldShaderName_1)); }
	inline String_t* get_mOldShaderName_1() const { return ___mOldShaderName_1; }
	inline String_t** get_address_of_mOldShaderName_1() { return &___mOldShaderName_1; }
	inline void set_mOldShaderName_1(String_t* value)
	{
		___mOldShaderName_1 = value;
		Il2CppCodeGenWriteBarrier((&___mOldShaderName_1), value);
	}

	inline static int32_t get_offset_of_mNewShaderName_2() { return static_cast<int32_t>(offsetof(VideoBackgroundShaderPropertyMigration_t1702172738, ___mNewShaderName_2)); }
	inline String_t* get_mNewShaderName_2() const { return ___mNewShaderName_2; }
	inline String_t** get_address_of_mNewShaderName_2() { return &___mNewShaderName_2; }
	inline void set_mNewShaderName_2(String_t* value)
	{
		___mNewShaderName_2 = value;
		Il2CppCodeGenWriteBarrier((&___mNewShaderName_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VIDEOBACKGROUNDSHADERPROPERTYMIGRATION_T1702172738_H
#ifndef U3CPRIVATEIMPLEMENTATIONDETAILSU3E_T3057255367_H
#define U3CPRIVATEIMPLEMENTATIONDETAILSU3E_T3057255367_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>
struct  U3CPrivateImplementationDetailsU3E_t3057255367  : public RuntimeObject
{
public:

public:
};

struct U3CPrivateImplementationDetailsU3E_t3057255367_StaticFields
{
public:
	// <PrivateImplementationDetails>/$ArrayType=12 <PrivateImplementationDetails>::$field-7BBE37982E6C057ED87163CAFC7FD6E5E42EEA46
	U24ArrayTypeU3D12_t2488454196  ___U24fieldU2D7BBE37982E6C057ED87163CAFC7FD6E5E42EEA46_0;

public:
	inline static int32_t get_offset_of_U24fieldU2D7BBE37982E6C057ED87163CAFC7FD6E5E42EEA46_0() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255367_StaticFields, ___U24fieldU2D7BBE37982E6C057ED87163CAFC7FD6E5E42EEA46_0)); }
	inline U24ArrayTypeU3D12_t2488454196  get_U24fieldU2D7BBE37982E6C057ED87163CAFC7FD6E5E42EEA46_0() const { return ___U24fieldU2D7BBE37982E6C057ED87163CAFC7FD6E5E42EEA46_0; }
	inline U24ArrayTypeU3D12_t2488454196 * get_address_of_U24fieldU2D7BBE37982E6C057ED87163CAFC7FD6E5E42EEA46_0() { return &___U24fieldU2D7BBE37982E6C057ED87163CAFC7FD6E5E42EEA46_0; }
	inline void set_U24fieldU2D7BBE37982E6C057ED87163CAFC7FD6E5E42EEA46_0(U24ArrayTypeU3D12_t2488454196  value)
	{
		___U24fieldU2D7BBE37982E6C057ED87163CAFC7FD6E5E42EEA46_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CPRIVATEIMPLEMENTATIONDETAILSU3E_T3057255367_H
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
#ifndef BOUNDS_T2266837910_H
#define BOUNDS_T2266837910_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Bounds
struct  Bounds_t2266837910 
{
public:
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Center
	Vector3_t3722313464  ___m_Center_0;
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Extents
	Vector3_t3722313464  ___m_Extents_1;

public:
	inline static int32_t get_offset_of_m_Center_0() { return static_cast<int32_t>(offsetof(Bounds_t2266837910, ___m_Center_0)); }
	inline Vector3_t3722313464  get_m_Center_0() const { return ___m_Center_0; }
	inline Vector3_t3722313464 * get_address_of_m_Center_0() { return &___m_Center_0; }
	inline void set_m_Center_0(Vector3_t3722313464  value)
	{
		___m_Center_0 = value;
	}

	inline static int32_t get_offset_of_m_Extents_1() { return static_cast<int32_t>(offsetof(Bounds_t2266837910, ___m_Extents_1)); }
	inline Vector3_t3722313464  get_m_Extents_1() const { return ___m_Extents_1; }
	inline Vector3_t3722313464 * get_address_of_m_Extents_1() { return &___m_Extents_1; }
	inline void set_m_Extents_1(Vector3_t3722313464  value)
	{
		___m_Extents_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BOUNDS_T2266837910_H
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
#ifndef RAYCASTHIT_T1056001966_H
#define RAYCASTHIT_T1056001966_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.RaycastHit
struct  RaycastHit_t1056001966 
{
public:
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Point
	Vector3_t3722313464  ___m_Point_0;
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Normal
	Vector3_t3722313464  ___m_Normal_1;
	// System.UInt32 UnityEngine.RaycastHit::m_FaceID
	uint32_t ___m_FaceID_2;
	// System.Single UnityEngine.RaycastHit::m_Distance
	float ___m_Distance_3;
	// UnityEngine.Vector2 UnityEngine.RaycastHit::m_UV
	Vector2_t2156229523  ___m_UV_4;
	// System.Int32 UnityEngine.RaycastHit::m_Collider
	int32_t ___m_Collider_5;

public:
	inline static int32_t get_offset_of_m_Point_0() { return static_cast<int32_t>(offsetof(RaycastHit_t1056001966, ___m_Point_0)); }
	inline Vector3_t3722313464  get_m_Point_0() const { return ___m_Point_0; }
	inline Vector3_t3722313464 * get_address_of_m_Point_0() { return &___m_Point_0; }
	inline void set_m_Point_0(Vector3_t3722313464  value)
	{
		___m_Point_0 = value;
	}

	inline static int32_t get_offset_of_m_Normal_1() { return static_cast<int32_t>(offsetof(RaycastHit_t1056001966, ___m_Normal_1)); }
	inline Vector3_t3722313464  get_m_Normal_1() const { return ___m_Normal_1; }
	inline Vector3_t3722313464 * get_address_of_m_Normal_1() { return &___m_Normal_1; }
	inline void set_m_Normal_1(Vector3_t3722313464  value)
	{
		___m_Normal_1 = value;
	}

	inline static int32_t get_offset_of_m_FaceID_2() { return static_cast<int32_t>(offsetof(RaycastHit_t1056001966, ___m_FaceID_2)); }
	inline uint32_t get_m_FaceID_2() const { return ___m_FaceID_2; }
	inline uint32_t* get_address_of_m_FaceID_2() { return &___m_FaceID_2; }
	inline void set_m_FaceID_2(uint32_t value)
	{
		___m_FaceID_2 = value;
	}

	inline static int32_t get_offset_of_m_Distance_3() { return static_cast<int32_t>(offsetof(RaycastHit_t1056001966, ___m_Distance_3)); }
	inline float get_m_Distance_3() const { return ___m_Distance_3; }
	inline float* get_address_of_m_Distance_3() { return &___m_Distance_3; }
	inline void set_m_Distance_3(float value)
	{
		___m_Distance_3 = value;
	}

	inline static int32_t get_offset_of_m_UV_4() { return static_cast<int32_t>(offsetof(RaycastHit_t1056001966, ___m_UV_4)); }
	inline Vector2_t2156229523  get_m_UV_4() const { return ___m_UV_4; }
	inline Vector2_t2156229523 * get_address_of_m_UV_4() { return &___m_UV_4; }
	inline void set_m_UV_4(Vector2_t2156229523  value)
	{
		___m_UV_4 = value;
	}

	inline static int32_t get_offset_of_m_Collider_5() { return static_cast<int32_t>(offsetof(RaycastHit_t1056001966, ___m_Collider_5)); }
	inline int32_t get_m_Collider_5() const { return ___m_Collider_5; }
	inline int32_t* get_address_of_m_Collider_5() { return &___m_Collider_5; }
	inline void set_m_Collider_5(int32_t value)
	{
		___m_Collider_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RAYCASTHIT_T1056001966_H
#ifndef RAYCASTHIT2D_T2279581989_H
#define RAYCASTHIT2D_T2279581989_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.RaycastHit2D
struct  RaycastHit2D_t2279581989 
{
public:
	// UnityEngine.Vector2 UnityEngine.RaycastHit2D::m_Centroid
	Vector2_t2156229523  ___m_Centroid_0;
	// UnityEngine.Vector2 UnityEngine.RaycastHit2D::m_Point
	Vector2_t2156229523  ___m_Point_1;
	// UnityEngine.Vector2 UnityEngine.RaycastHit2D::m_Normal
	Vector2_t2156229523  ___m_Normal_2;
	// System.Single UnityEngine.RaycastHit2D::m_Distance
	float ___m_Distance_3;
	// System.Single UnityEngine.RaycastHit2D::m_Fraction
	float ___m_Fraction_4;
	// System.Int32 UnityEngine.RaycastHit2D::m_Collider
	int32_t ___m_Collider_5;

public:
	inline static int32_t get_offset_of_m_Centroid_0() { return static_cast<int32_t>(offsetof(RaycastHit2D_t2279581989, ___m_Centroid_0)); }
	inline Vector2_t2156229523  get_m_Centroid_0() const { return ___m_Centroid_0; }
	inline Vector2_t2156229523 * get_address_of_m_Centroid_0() { return &___m_Centroid_0; }
	inline void set_m_Centroid_0(Vector2_t2156229523  value)
	{
		___m_Centroid_0 = value;
	}

	inline static int32_t get_offset_of_m_Point_1() { return static_cast<int32_t>(offsetof(RaycastHit2D_t2279581989, ___m_Point_1)); }
	inline Vector2_t2156229523  get_m_Point_1() const { return ___m_Point_1; }
	inline Vector2_t2156229523 * get_address_of_m_Point_1() { return &___m_Point_1; }
	inline void set_m_Point_1(Vector2_t2156229523  value)
	{
		___m_Point_1 = value;
	}

	inline static int32_t get_offset_of_m_Normal_2() { return static_cast<int32_t>(offsetof(RaycastHit2D_t2279581989, ___m_Normal_2)); }
	inline Vector2_t2156229523  get_m_Normal_2() const { return ___m_Normal_2; }
	inline Vector2_t2156229523 * get_address_of_m_Normal_2() { return &___m_Normal_2; }
	inline void set_m_Normal_2(Vector2_t2156229523  value)
	{
		___m_Normal_2 = value;
	}

	inline static int32_t get_offset_of_m_Distance_3() { return static_cast<int32_t>(offsetof(RaycastHit2D_t2279581989, ___m_Distance_3)); }
	inline float get_m_Distance_3() const { return ___m_Distance_3; }
	inline float* get_address_of_m_Distance_3() { return &___m_Distance_3; }
	inline void set_m_Distance_3(float value)
	{
		___m_Distance_3 = value;
	}

	inline static int32_t get_offset_of_m_Fraction_4() { return static_cast<int32_t>(offsetof(RaycastHit2D_t2279581989, ___m_Fraction_4)); }
	inline float get_m_Fraction_4() const { return ___m_Fraction_4; }
	inline float* get_address_of_m_Fraction_4() { return &___m_Fraction_4; }
	inline void set_m_Fraction_4(float value)
	{
		___m_Fraction_4 = value;
	}

	inline static int32_t get_offset_of_m_Collider_5() { return static_cast<int32_t>(offsetof(RaycastHit2D_t2279581989, ___m_Collider_5)); }
	inline int32_t get_m_Collider_5() const { return ___m_Collider_5; }
	inline int32_t* get_address_of_m_Collider_5() { return &___m_Collider_5; }
	inline void set_m_Collider_5(int32_t value)
	{
		___m_Collider_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RAYCASTHIT2D_T2279581989_H
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
#ifndef TEXTANCHOR_T2035777396_H
#define TEXTANCHOR_T2035777396_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.TextAnchor
struct  TextAnchor_t2035777396 
{
public:
	// System.Int32 UnityEngine.TextAnchor::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TextAnchor_t2035777396, ___value___2)); }
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
#endif // TEXTANCHOR_T2035777396_H
#ifndef ASPECTMODE_T3417192999_H
#define ASPECTMODE_T3417192999_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.AspectRatioFitter/AspectMode
struct  AspectMode_t3417192999 
{
public:
	// System.Int32 UnityEngine.UI.AspectRatioFitter/AspectMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AspectMode_t3417192999, ___value___2)); }
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
#endif // ASPECTMODE_T3417192999_H
#ifndef SCALEMODE_T2604066427_H
#define SCALEMODE_T2604066427_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.CanvasScaler/ScaleMode
struct  ScaleMode_t2604066427 
{
public:
	// System.Int32 UnityEngine.UI.CanvasScaler/ScaleMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ScaleMode_t2604066427, ___value___2)); }
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
#endif // SCALEMODE_T2604066427_H
#ifndef SCREENMATCHMODE_T3675272090_H
#define SCREENMATCHMODE_T3675272090_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.CanvasScaler/ScreenMatchMode
struct  ScreenMatchMode_t3675272090 
{
public:
	// System.Int32 UnityEngine.UI.CanvasScaler/ScreenMatchMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ScreenMatchMode_t3675272090, ___value___2)); }
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
#endif // SCREENMATCHMODE_T3675272090_H
#ifndef UNIT_T2218508340_H
#define UNIT_T2218508340_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.CanvasScaler/Unit
struct  Unit_t2218508340 
{
public:
	// System.Int32 UnityEngine.UI.CanvasScaler/Unit::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Unit_t2218508340, ___value___2)); }
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
#endif // UNIT_T2218508340_H
#ifndef COLORBLOCK_T2139031574_H
#define COLORBLOCK_T2139031574_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.ColorBlock
struct  ColorBlock_t2139031574 
{
public:
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_NormalColor
	Color_t2555686324  ___m_NormalColor_0;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_HighlightedColor
	Color_t2555686324  ___m_HighlightedColor_1;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_PressedColor
	Color_t2555686324  ___m_PressedColor_2;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_DisabledColor
	Color_t2555686324  ___m_DisabledColor_3;
	// System.Single UnityEngine.UI.ColorBlock::m_ColorMultiplier
	float ___m_ColorMultiplier_4;
	// System.Single UnityEngine.UI.ColorBlock::m_FadeDuration
	float ___m_FadeDuration_5;

public:
	inline static int32_t get_offset_of_m_NormalColor_0() { return static_cast<int32_t>(offsetof(ColorBlock_t2139031574, ___m_NormalColor_0)); }
	inline Color_t2555686324  get_m_NormalColor_0() const { return ___m_NormalColor_0; }
	inline Color_t2555686324 * get_address_of_m_NormalColor_0() { return &___m_NormalColor_0; }
	inline void set_m_NormalColor_0(Color_t2555686324  value)
	{
		___m_NormalColor_0 = value;
	}

	inline static int32_t get_offset_of_m_HighlightedColor_1() { return static_cast<int32_t>(offsetof(ColorBlock_t2139031574, ___m_HighlightedColor_1)); }
	inline Color_t2555686324  get_m_HighlightedColor_1() const { return ___m_HighlightedColor_1; }
	inline Color_t2555686324 * get_address_of_m_HighlightedColor_1() { return &___m_HighlightedColor_1; }
	inline void set_m_HighlightedColor_1(Color_t2555686324  value)
	{
		___m_HighlightedColor_1 = value;
	}

	inline static int32_t get_offset_of_m_PressedColor_2() { return static_cast<int32_t>(offsetof(ColorBlock_t2139031574, ___m_PressedColor_2)); }
	inline Color_t2555686324  get_m_PressedColor_2() const { return ___m_PressedColor_2; }
	inline Color_t2555686324 * get_address_of_m_PressedColor_2() { return &___m_PressedColor_2; }
	inline void set_m_PressedColor_2(Color_t2555686324  value)
	{
		___m_PressedColor_2 = value;
	}

	inline static int32_t get_offset_of_m_DisabledColor_3() { return static_cast<int32_t>(offsetof(ColorBlock_t2139031574, ___m_DisabledColor_3)); }
	inline Color_t2555686324  get_m_DisabledColor_3() const { return ___m_DisabledColor_3; }
	inline Color_t2555686324 * get_address_of_m_DisabledColor_3() { return &___m_DisabledColor_3; }
	inline void set_m_DisabledColor_3(Color_t2555686324  value)
	{
		___m_DisabledColor_3 = value;
	}

	inline static int32_t get_offset_of_m_ColorMultiplier_4() { return static_cast<int32_t>(offsetof(ColorBlock_t2139031574, ___m_ColorMultiplier_4)); }
	inline float get_m_ColorMultiplier_4() const { return ___m_ColorMultiplier_4; }
	inline float* get_address_of_m_ColorMultiplier_4() { return &___m_ColorMultiplier_4; }
	inline void set_m_ColorMultiplier_4(float value)
	{
		___m_ColorMultiplier_4 = value;
	}

	inline static int32_t get_offset_of_m_FadeDuration_5() { return static_cast<int32_t>(offsetof(ColorBlock_t2139031574, ___m_FadeDuration_5)); }
	inline float get_m_FadeDuration_5() const { return ___m_FadeDuration_5; }
	inline float* get_address_of_m_FadeDuration_5() { return &___m_FadeDuration_5; }
	inline void set_m_FadeDuration_5(float value)
	{
		___m_FadeDuration_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLORBLOCK_T2139031574_H
#ifndef FITMODE_T3267881214_H
#define FITMODE_T3267881214_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.ContentSizeFitter/FitMode
struct  FitMode_t3267881214 
{
public:
	// System.Int32 UnityEngine.UI.ContentSizeFitter/FitMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FitMode_t3267881214, ___value___2)); }
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
#endif // FITMODE_T3267881214_H
#ifndef AXIS_T3613393006_H
#define AXIS_T3613393006_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.GridLayoutGroup/Axis
struct  Axis_t3613393006 
{
public:
	// System.Int32 UnityEngine.UI.GridLayoutGroup/Axis::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Axis_t3613393006, ___value___2)); }
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
#endif // AXIS_T3613393006_H
#ifndef CONSTRAINT_T814224393_H
#define CONSTRAINT_T814224393_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.GridLayoutGroup/Constraint
struct  Constraint_t814224393 
{
public:
	// System.Int32 UnityEngine.UI.GridLayoutGroup/Constraint::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Constraint_t814224393, ___value___2)); }
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
#endif // CONSTRAINT_T814224393_H
#ifndef CORNER_T1493259673_H
#define CORNER_T1493259673_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.GridLayoutGroup/Corner
struct  Corner_t1493259673 
{
public:
	// System.Int32 UnityEngine.UI.GridLayoutGroup/Corner::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Corner_t1493259673, ___value___2)); }
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
#endif // CORNER_T1493259673_H
#ifndef MODE_T1066900953_H
#define MODE_T1066900953_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Navigation/Mode
struct  Mode_t1066900953 
{
public:
	// System.Int32 UnityEngine.UI.Navigation/Mode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Mode_t1066900953, ___value___2)); }
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
#endif // MODE_T1066900953_H
#ifndef MOVEMENTTYPE_T4072922106_H
#define MOVEMENTTYPE_T4072922106_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.ScrollRect/MovementType
struct  MovementType_t4072922106 
{
public:
	// System.Int32 UnityEngine.UI.ScrollRect/MovementType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(MovementType_t4072922106, ___value___2)); }
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
#endif // MOVEMENTTYPE_T4072922106_H
#ifndef SCROLLRECTEVENT_T343079324_H
#define SCROLLRECTEVENT_T343079324_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.ScrollRect/ScrollRectEvent
struct  ScrollRectEvent_t343079324  : public UnityEvent_1_t3037889027
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SCROLLRECTEVENT_T343079324_H
#ifndef SCROLLBARVISIBILITY_T705693775_H
#define SCROLLBARVISIBILITY_T705693775_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.ScrollRect/ScrollbarVisibility
struct  ScrollbarVisibility_t705693775 
{
public:
	// System.Int32 UnityEngine.UI.ScrollRect/ScrollbarVisibility::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ScrollbarVisibility_t705693775, ___value___2)); }
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
#endif // SCROLLBARVISIBILITY_T705693775_H
#ifndef AXIS_T1697763317_H
#define AXIS_T1697763317_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Scrollbar/Axis
struct  Axis_t1697763317 
{
public:
	// System.Int32 UnityEngine.UI.Scrollbar/Axis::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Axis_t1697763317, ___value___2)); }
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
#endif // AXIS_T1697763317_H
#ifndef SCROLLEVENT_T149898510_H
#define SCROLLEVENT_T149898510_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Scrollbar/ScrollEvent
struct  ScrollEvent_t149898510  : public UnityEvent_1_t2278926278
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SCROLLEVENT_T149898510_H
#ifndef SELECTIONSTATE_T2656606514_H
#define SELECTIONSTATE_T2656606514_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Selectable/SelectionState
struct  SelectionState_t2656606514 
{
public:
	// System.Int32 UnityEngine.UI.Selectable/SelectionState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SelectionState_t2656606514, ___value___2)); }
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
#endif // SELECTIONSTATE_T2656606514_H
#ifndef TRANSITION_T1769908631_H
#define TRANSITION_T1769908631_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Selectable/Transition
struct  Transition_t1769908631 
{
public:
	// System.Int32 UnityEngine.UI.Selectable/Transition::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Transition_t1769908631, ___value___2)); }
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
#endif // TRANSITION_T1769908631_H
#ifndef AXIS_T809944411_H
#define AXIS_T809944411_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Slider/Axis
struct  Axis_t809944411 
{
public:
	// System.Int32 UnityEngine.UI.Slider/Axis::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Axis_t809944411, ___value___2)); }
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
#endif // AXIS_T809944411_H
#ifndef DIRECTION_T337909235_H
#define DIRECTION_T337909235_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Slider/Direction
struct  Direction_t337909235 
{
public:
	// System.Int32 UnityEngine.UI.Slider/Direction::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Direction_t337909235, ___value___2)); }
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
#endif // DIRECTION_T337909235_H
#ifndef SLIDEREVENT_T3180273144_H
#define SLIDEREVENT_T3180273144_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Slider/SliderEvent
struct  SliderEvent_t3180273144  : public UnityEvent_1_t2278926278
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SLIDEREVENT_T3180273144_H
#ifndef TOGGLEEVENT_T1873685584_H
#define TOGGLEEVENT_T1873685584_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Toggle/ToggleEvent
struct  ToggleEvent_t1873685584  : public UnityEvent_1_t978947469
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TOGGLEEVENT_T1873685584_H
#ifndef TOGGLETRANSITION_T3587297765_H
#define TOGGLETRANSITION_T3587297765_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Toggle/ToggleTransition
struct  ToggleTransition_t3587297765 
{
public:
	// System.Int32 UnityEngine.UI.Toggle/ToggleTransition::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ToggleTransition_t3587297765, ___value___2)); }
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
#endif // TOGGLETRANSITION_T3587297765_H
#ifndef VERTEXHELPER_T2453304189_H
#define VERTEXHELPER_T2453304189_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.VertexHelper
struct  VertexHelper_t2453304189  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<UnityEngine.Vector3> UnityEngine.UI.VertexHelper::m_Positions
	List_1_t899420910 * ___m_Positions_0;
	// System.Collections.Generic.List`1<UnityEngine.Color32> UnityEngine.UI.VertexHelper::m_Colors
	List_1_t4072576034 * ___m_Colors_1;
	// System.Collections.Generic.List`1<UnityEngine.Vector2> UnityEngine.UI.VertexHelper::m_Uv0S
	List_1_t3628304265 * ___m_Uv0S_2;
	// System.Collections.Generic.List`1<UnityEngine.Vector2> UnityEngine.UI.VertexHelper::m_Uv1S
	List_1_t3628304265 * ___m_Uv1S_3;
	// System.Collections.Generic.List`1<UnityEngine.Vector2> UnityEngine.UI.VertexHelper::m_Uv2S
	List_1_t3628304265 * ___m_Uv2S_4;
	// System.Collections.Generic.List`1<UnityEngine.Vector2> UnityEngine.UI.VertexHelper::m_Uv3S
	List_1_t3628304265 * ___m_Uv3S_5;
	// System.Collections.Generic.List`1<UnityEngine.Vector3> UnityEngine.UI.VertexHelper::m_Normals
	List_1_t899420910 * ___m_Normals_6;
	// System.Collections.Generic.List`1<UnityEngine.Vector4> UnityEngine.UI.VertexHelper::m_Tangents
	List_1_t496136383 * ___m_Tangents_7;
	// System.Collections.Generic.List`1<System.Int32> UnityEngine.UI.VertexHelper::m_Indices
	List_1_t128053199 * ___m_Indices_8;

public:
	inline static int32_t get_offset_of_m_Positions_0() { return static_cast<int32_t>(offsetof(VertexHelper_t2453304189, ___m_Positions_0)); }
	inline List_1_t899420910 * get_m_Positions_0() const { return ___m_Positions_0; }
	inline List_1_t899420910 ** get_address_of_m_Positions_0() { return &___m_Positions_0; }
	inline void set_m_Positions_0(List_1_t899420910 * value)
	{
		___m_Positions_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_Positions_0), value);
	}

	inline static int32_t get_offset_of_m_Colors_1() { return static_cast<int32_t>(offsetof(VertexHelper_t2453304189, ___m_Colors_1)); }
	inline List_1_t4072576034 * get_m_Colors_1() const { return ___m_Colors_1; }
	inline List_1_t4072576034 ** get_address_of_m_Colors_1() { return &___m_Colors_1; }
	inline void set_m_Colors_1(List_1_t4072576034 * value)
	{
		___m_Colors_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_Colors_1), value);
	}

	inline static int32_t get_offset_of_m_Uv0S_2() { return static_cast<int32_t>(offsetof(VertexHelper_t2453304189, ___m_Uv0S_2)); }
	inline List_1_t3628304265 * get_m_Uv0S_2() const { return ___m_Uv0S_2; }
	inline List_1_t3628304265 ** get_address_of_m_Uv0S_2() { return &___m_Uv0S_2; }
	inline void set_m_Uv0S_2(List_1_t3628304265 * value)
	{
		___m_Uv0S_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_Uv0S_2), value);
	}

	inline static int32_t get_offset_of_m_Uv1S_3() { return static_cast<int32_t>(offsetof(VertexHelper_t2453304189, ___m_Uv1S_3)); }
	inline List_1_t3628304265 * get_m_Uv1S_3() const { return ___m_Uv1S_3; }
	inline List_1_t3628304265 ** get_address_of_m_Uv1S_3() { return &___m_Uv1S_3; }
	inline void set_m_Uv1S_3(List_1_t3628304265 * value)
	{
		___m_Uv1S_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_Uv1S_3), value);
	}

	inline static int32_t get_offset_of_m_Uv2S_4() { return static_cast<int32_t>(offsetof(VertexHelper_t2453304189, ___m_Uv2S_4)); }
	inline List_1_t3628304265 * get_m_Uv2S_4() const { return ___m_Uv2S_4; }
	inline List_1_t3628304265 ** get_address_of_m_Uv2S_4() { return &___m_Uv2S_4; }
	inline void set_m_Uv2S_4(List_1_t3628304265 * value)
	{
		___m_Uv2S_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_Uv2S_4), value);
	}

	inline static int32_t get_offset_of_m_Uv3S_5() { return static_cast<int32_t>(offsetof(VertexHelper_t2453304189, ___m_Uv3S_5)); }
	inline List_1_t3628304265 * get_m_Uv3S_5() const { return ___m_Uv3S_5; }
	inline List_1_t3628304265 ** get_address_of_m_Uv3S_5() { return &___m_Uv3S_5; }
	inline void set_m_Uv3S_5(List_1_t3628304265 * value)
	{
		___m_Uv3S_5 = value;
		Il2CppCodeGenWriteBarrier((&___m_Uv3S_5), value);
	}

	inline static int32_t get_offset_of_m_Normals_6() { return static_cast<int32_t>(offsetof(VertexHelper_t2453304189, ___m_Normals_6)); }
	inline List_1_t899420910 * get_m_Normals_6() const { return ___m_Normals_6; }
	inline List_1_t899420910 ** get_address_of_m_Normals_6() { return &___m_Normals_6; }
	inline void set_m_Normals_6(List_1_t899420910 * value)
	{
		___m_Normals_6 = value;
		Il2CppCodeGenWriteBarrier((&___m_Normals_6), value);
	}

	inline static int32_t get_offset_of_m_Tangents_7() { return static_cast<int32_t>(offsetof(VertexHelper_t2453304189, ___m_Tangents_7)); }
	inline List_1_t496136383 * get_m_Tangents_7() const { return ___m_Tangents_7; }
	inline List_1_t496136383 ** get_address_of_m_Tangents_7() { return &___m_Tangents_7; }
	inline void set_m_Tangents_7(List_1_t496136383 * value)
	{
		___m_Tangents_7 = value;
		Il2CppCodeGenWriteBarrier((&___m_Tangents_7), value);
	}

	inline static int32_t get_offset_of_m_Indices_8() { return static_cast<int32_t>(offsetof(VertexHelper_t2453304189, ___m_Indices_8)); }
	inline List_1_t128053199 * get_m_Indices_8() const { return ___m_Indices_8; }
	inline List_1_t128053199 ** get_address_of_m_Indices_8() { return &___m_Indices_8; }
	inline void set_m_Indices_8(List_1_t128053199 * value)
	{
		___m_Indices_8 = value;
		Il2CppCodeGenWriteBarrier((&___m_Indices_8), value);
	}
};

struct VertexHelper_t2453304189_StaticFields
{
public:
	// UnityEngine.Vector4 UnityEngine.UI.VertexHelper::s_DefaultTangent
	Vector4_t3319028937  ___s_DefaultTangent_9;
	// UnityEngine.Vector3 UnityEngine.UI.VertexHelper::s_DefaultNormal
	Vector3_t3722313464  ___s_DefaultNormal_10;

public:
	inline static int32_t get_offset_of_s_DefaultTangent_9() { return static_cast<int32_t>(offsetof(VertexHelper_t2453304189_StaticFields, ___s_DefaultTangent_9)); }
	inline Vector4_t3319028937  get_s_DefaultTangent_9() const { return ___s_DefaultTangent_9; }
	inline Vector4_t3319028937 * get_address_of_s_DefaultTangent_9() { return &___s_DefaultTangent_9; }
	inline void set_s_DefaultTangent_9(Vector4_t3319028937  value)
	{
		___s_DefaultTangent_9 = value;
	}

	inline static int32_t get_offset_of_s_DefaultNormal_10() { return static_cast<int32_t>(offsetof(VertexHelper_t2453304189_StaticFields, ___s_DefaultNormal_10)); }
	inline Vector3_t3722313464  get_s_DefaultNormal_10() const { return ___s_DefaultNormal_10; }
	inline Vector3_t3722313464 * get_address_of_s_DefaultNormal_10() { return &___s_DefaultNormal_10; }
	inline void set_s_DefaultNormal_10(Vector3_t3722313464  value)
	{
		___s_DefaultNormal_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VERTEXHELPER_T2453304189_H
#ifndef CAMERACALIBRATIONCOMPARER_T2990055837_H
#define CAMERACALIBRATIONCOMPARER_T2990055837_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.CameraCalibrationComparer
struct  CameraCalibrationComparer_t2990055837  : public RuntimeObject
{
public:
	// UnityEngine.Vector4 Vuforia.CameraCalibrationComparer::mLastCameraCalibrationValues
	Vector4_t3319028937  ___mLastCameraCalibrationValues_1;

public:
	inline static int32_t get_offset_of_mLastCameraCalibrationValues_1() { return static_cast<int32_t>(offsetof(CameraCalibrationComparer_t2990055837, ___mLastCameraCalibrationValues_1)); }
	inline Vector4_t3319028937  get_mLastCameraCalibrationValues_1() const { return ___mLastCameraCalibrationValues_1; }
	inline Vector4_t3319028937 * get_address_of_mLastCameraCalibrationValues_1() { return &___mLastCameraCalibrationValues_1; }
	inline void set_mLastCameraCalibrationValues_1(Vector4_t3319028937  value)
	{
		___mLastCameraCalibrationValues_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CAMERACALIBRATIONCOMPARER_T2990055837_H
#ifndef ILLUMINATIONMANAGER_T3960931838_H
#define ILLUMINATIONMANAGER_T3960931838_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.IlluminationManager
struct  IlluminationManager_t3960931838  : public RuntimeObject
{
public:
	// Vuforia.TrackerData/IlluminationData Vuforia.IlluminationManager::mIlluminationData
	IlluminationData_t3332404395  ___mIlluminationData_1;

public:
	inline static int32_t get_offset_of_mIlluminationData_1() { return static_cast<int32_t>(offsetof(IlluminationManager_t3960931838, ___mIlluminationData_1)); }
	inline IlluminationData_t3332404395  get_mIlluminationData_1() const { return ___mIlluminationData_1; }
	inline IlluminationData_t3332404395 * get_address_of_mIlluminationData_1() { return &___mIlluminationData_1; }
	inline void set_mIlluminationData_1(IlluminationData_t3332404395  value)
	{
		___mIlluminationData_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ILLUMINATIONMANAGER_T3960931838_H
#ifndef POSITIONALDEVICETRACKER_T656722001_H
#define POSITIONALDEVICETRACKER_T656722001_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.PositionalDeviceTracker
struct  PositionalDeviceTracker_t656722001  : public DeviceTracker_t2315692373
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // POSITIONALDEVICETRACKER_T656722001_H
#ifndef TARGETFINDER_T2439332195_H
#define TARGETFINDER_T2439332195_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.TargetFinder
struct  TargetFinder_t2439332195  : public RuntimeObject
{
public:
	// System.IntPtr Vuforia.TargetFinder::mTargetFinderPtr
	intptr_t ___mTargetFinderPtr_0;
	// System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.ObjectTarget> Vuforia.TargetFinder::mTargets
	Dictionary_2_t2100965753 * ___mTargets_1;
	// System.IntPtr Vuforia.TargetFinder::mTargetFinderStatePtr
	intptr_t ___mTargetFinderStatePtr_2;
	// Vuforia.TargetFinder/TargetFinderState Vuforia.TargetFinder::mTargetFinderState
	TargetFinderState_t3286805956  ___mTargetFinderState_3;
	// System.Collections.Generic.List`1<Vuforia.TargetFinder/TargetSearchResult> Vuforia.TargetFinder::mNewResults
	List_1_t619090059 * ___mNewResults_4;

public:
	inline static int32_t get_offset_of_mTargetFinderPtr_0() { return static_cast<int32_t>(offsetof(TargetFinder_t2439332195, ___mTargetFinderPtr_0)); }
	inline intptr_t get_mTargetFinderPtr_0() const { return ___mTargetFinderPtr_0; }
	inline intptr_t* get_address_of_mTargetFinderPtr_0() { return &___mTargetFinderPtr_0; }
	inline void set_mTargetFinderPtr_0(intptr_t value)
	{
		___mTargetFinderPtr_0 = value;
	}

	inline static int32_t get_offset_of_mTargets_1() { return static_cast<int32_t>(offsetof(TargetFinder_t2439332195, ___mTargets_1)); }
	inline Dictionary_2_t2100965753 * get_mTargets_1() const { return ___mTargets_1; }
	inline Dictionary_2_t2100965753 ** get_address_of_mTargets_1() { return &___mTargets_1; }
	inline void set_mTargets_1(Dictionary_2_t2100965753 * value)
	{
		___mTargets_1 = value;
		Il2CppCodeGenWriteBarrier((&___mTargets_1), value);
	}

	inline static int32_t get_offset_of_mTargetFinderStatePtr_2() { return static_cast<int32_t>(offsetof(TargetFinder_t2439332195, ___mTargetFinderStatePtr_2)); }
	inline intptr_t get_mTargetFinderStatePtr_2() const { return ___mTargetFinderStatePtr_2; }
	inline intptr_t* get_address_of_mTargetFinderStatePtr_2() { return &___mTargetFinderStatePtr_2; }
	inline void set_mTargetFinderStatePtr_2(intptr_t value)
	{
		___mTargetFinderStatePtr_2 = value;
	}

	inline static int32_t get_offset_of_mTargetFinderState_3() { return static_cast<int32_t>(offsetof(TargetFinder_t2439332195, ___mTargetFinderState_3)); }
	inline TargetFinderState_t3286805956  get_mTargetFinderState_3() const { return ___mTargetFinderState_3; }
	inline TargetFinderState_t3286805956 * get_address_of_mTargetFinderState_3() { return &___mTargetFinderState_3; }
	inline void set_mTargetFinderState_3(TargetFinderState_t3286805956  value)
	{
		___mTargetFinderState_3 = value;
	}

	inline static int32_t get_offset_of_mNewResults_4() { return static_cast<int32_t>(offsetof(TargetFinder_t2439332195, ___mNewResults_4)); }
	inline List_1_t619090059 * get_mNewResults_4() const { return ___mNewResults_4; }
	inline List_1_t619090059 ** get_address_of_mNewResults_4() { return &___mNewResults_4; }
	inline void set_mNewResults_4(List_1_t619090059 * value)
	{
		___mNewResults_4 = value;
		Il2CppCodeGenWriteBarrier((&___mNewResults_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TARGETFINDER_T2439332195_H
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
#ifndef NAVIGATION_T3049316579_H
#define NAVIGATION_T3049316579_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Navigation
struct  Navigation_t3049316579 
{
public:
	// UnityEngine.UI.Navigation/Mode UnityEngine.UI.Navigation::m_Mode
	int32_t ___m_Mode_0;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnUp
	Selectable_t3250028441 * ___m_SelectOnUp_1;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnDown
	Selectable_t3250028441 * ___m_SelectOnDown_2;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnLeft
	Selectable_t3250028441 * ___m_SelectOnLeft_3;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnRight
	Selectable_t3250028441 * ___m_SelectOnRight_4;

public:
	inline static int32_t get_offset_of_m_Mode_0() { return static_cast<int32_t>(offsetof(Navigation_t3049316579, ___m_Mode_0)); }
	inline int32_t get_m_Mode_0() const { return ___m_Mode_0; }
	inline int32_t* get_address_of_m_Mode_0() { return &___m_Mode_0; }
	inline void set_m_Mode_0(int32_t value)
	{
		___m_Mode_0 = value;
	}

	inline static int32_t get_offset_of_m_SelectOnUp_1() { return static_cast<int32_t>(offsetof(Navigation_t3049316579, ___m_SelectOnUp_1)); }
	inline Selectable_t3250028441 * get_m_SelectOnUp_1() const { return ___m_SelectOnUp_1; }
	inline Selectable_t3250028441 ** get_address_of_m_SelectOnUp_1() { return &___m_SelectOnUp_1; }
	inline void set_m_SelectOnUp_1(Selectable_t3250028441 * value)
	{
		___m_SelectOnUp_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_SelectOnUp_1), value);
	}

	inline static int32_t get_offset_of_m_SelectOnDown_2() { return static_cast<int32_t>(offsetof(Navigation_t3049316579, ___m_SelectOnDown_2)); }
	inline Selectable_t3250028441 * get_m_SelectOnDown_2() const { return ___m_SelectOnDown_2; }
	inline Selectable_t3250028441 ** get_address_of_m_SelectOnDown_2() { return &___m_SelectOnDown_2; }
	inline void set_m_SelectOnDown_2(Selectable_t3250028441 * value)
	{
		___m_SelectOnDown_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_SelectOnDown_2), value);
	}

	inline static int32_t get_offset_of_m_SelectOnLeft_3() { return static_cast<int32_t>(offsetof(Navigation_t3049316579, ___m_SelectOnLeft_3)); }
	inline Selectable_t3250028441 * get_m_SelectOnLeft_3() const { return ___m_SelectOnLeft_3; }
	inline Selectable_t3250028441 ** get_address_of_m_SelectOnLeft_3() { return &___m_SelectOnLeft_3; }
	inline void set_m_SelectOnLeft_3(Selectable_t3250028441 * value)
	{
		___m_SelectOnLeft_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_SelectOnLeft_3), value);
	}

	inline static int32_t get_offset_of_m_SelectOnRight_4() { return static_cast<int32_t>(offsetof(Navigation_t3049316579, ___m_SelectOnRight_4)); }
	inline Selectable_t3250028441 * get_m_SelectOnRight_4() const { return ___m_SelectOnRight_4; }
	inline Selectable_t3250028441 ** get_address_of_m_SelectOnRight_4() { return &___m_SelectOnRight_4; }
	inline void set_m_SelectOnRight_4(Selectable_t3250028441 * value)
	{
		___m_SelectOnRight_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_SelectOnRight_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.UI.Navigation
struct Navigation_t3049316579_marshaled_pinvoke
{
	int32_t ___m_Mode_0;
	Selectable_t3250028441 * ___m_SelectOnUp_1;
	Selectable_t3250028441 * ___m_SelectOnDown_2;
	Selectable_t3250028441 * ___m_SelectOnLeft_3;
	Selectable_t3250028441 * ___m_SelectOnRight_4;
};
// Native definition for COM marshalling of UnityEngine.UI.Navigation
struct Navigation_t3049316579_marshaled_com
{
	int32_t ___m_Mode_0;
	Selectable_t3250028441 * ___m_SelectOnUp_1;
	Selectable_t3250028441 * ___m_SelectOnDown_2;
	Selectable_t3250028441 * ___m_SelectOnLeft_3;
	Selectable_t3250028441 * ___m_SelectOnRight_4;
};
#endif // NAVIGATION_T3049316579_H
#ifndef MATENTRY_T2957107092_H
#define MATENTRY_T2957107092_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.StencilMaterial/MatEntry
struct  MatEntry_t2957107092  : public RuntimeObject
{
public:
	// UnityEngine.Material UnityEngine.UI.StencilMaterial/MatEntry::baseMat
	Material_t340375123 * ___baseMat_0;
	// UnityEngine.Material UnityEngine.UI.StencilMaterial/MatEntry::customMat
	Material_t340375123 * ___customMat_1;
	// System.Int32 UnityEngine.UI.StencilMaterial/MatEntry::count
	int32_t ___count_2;
	// System.Int32 UnityEngine.UI.StencilMaterial/MatEntry::stencilId
	int32_t ___stencilId_3;
	// UnityEngine.Rendering.StencilOp UnityEngine.UI.StencilMaterial/MatEntry::operation
	int32_t ___operation_4;
	// UnityEngine.Rendering.CompareFunction UnityEngine.UI.StencilMaterial/MatEntry::compareFunction
	int32_t ___compareFunction_5;
	// System.Int32 UnityEngine.UI.StencilMaterial/MatEntry::readMask
	int32_t ___readMask_6;
	// System.Int32 UnityEngine.UI.StencilMaterial/MatEntry::writeMask
	int32_t ___writeMask_7;
	// System.Boolean UnityEngine.UI.StencilMaterial/MatEntry::useAlphaClip
	bool ___useAlphaClip_8;
	// UnityEngine.Rendering.ColorWriteMask UnityEngine.UI.StencilMaterial/MatEntry::colorMask
	int32_t ___colorMask_9;

public:
	inline static int32_t get_offset_of_baseMat_0() { return static_cast<int32_t>(offsetof(MatEntry_t2957107092, ___baseMat_0)); }
	inline Material_t340375123 * get_baseMat_0() const { return ___baseMat_0; }
	inline Material_t340375123 ** get_address_of_baseMat_0() { return &___baseMat_0; }
	inline void set_baseMat_0(Material_t340375123 * value)
	{
		___baseMat_0 = value;
		Il2CppCodeGenWriteBarrier((&___baseMat_0), value);
	}

	inline static int32_t get_offset_of_customMat_1() { return static_cast<int32_t>(offsetof(MatEntry_t2957107092, ___customMat_1)); }
	inline Material_t340375123 * get_customMat_1() const { return ___customMat_1; }
	inline Material_t340375123 ** get_address_of_customMat_1() { return &___customMat_1; }
	inline void set_customMat_1(Material_t340375123 * value)
	{
		___customMat_1 = value;
		Il2CppCodeGenWriteBarrier((&___customMat_1), value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(MatEntry_t2957107092, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_stencilId_3() { return static_cast<int32_t>(offsetof(MatEntry_t2957107092, ___stencilId_3)); }
	inline int32_t get_stencilId_3() const { return ___stencilId_3; }
	inline int32_t* get_address_of_stencilId_3() { return &___stencilId_3; }
	inline void set_stencilId_3(int32_t value)
	{
		___stencilId_3 = value;
	}

	inline static int32_t get_offset_of_operation_4() { return static_cast<int32_t>(offsetof(MatEntry_t2957107092, ___operation_4)); }
	inline int32_t get_operation_4() const { return ___operation_4; }
	inline int32_t* get_address_of_operation_4() { return &___operation_4; }
	inline void set_operation_4(int32_t value)
	{
		___operation_4 = value;
	}

	inline static int32_t get_offset_of_compareFunction_5() { return static_cast<int32_t>(offsetof(MatEntry_t2957107092, ___compareFunction_5)); }
	inline int32_t get_compareFunction_5() const { return ___compareFunction_5; }
	inline int32_t* get_address_of_compareFunction_5() { return &___compareFunction_5; }
	inline void set_compareFunction_5(int32_t value)
	{
		___compareFunction_5 = value;
	}

	inline static int32_t get_offset_of_readMask_6() { return static_cast<int32_t>(offsetof(MatEntry_t2957107092, ___readMask_6)); }
	inline int32_t get_readMask_6() const { return ___readMask_6; }
	inline int32_t* get_address_of_readMask_6() { return &___readMask_6; }
	inline void set_readMask_6(int32_t value)
	{
		___readMask_6 = value;
	}

	inline static int32_t get_offset_of_writeMask_7() { return static_cast<int32_t>(offsetof(MatEntry_t2957107092, ___writeMask_7)); }
	inline int32_t get_writeMask_7() const { return ___writeMask_7; }
	inline int32_t* get_address_of_writeMask_7() { return &___writeMask_7; }
	inline void set_writeMask_7(int32_t value)
	{
		___writeMask_7 = value;
	}

	inline static int32_t get_offset_of_useAlphaClip_8() { return static_cast<int32_t>(offsetof(MatEntry_t2957107092, ___useAlphaClip_8)); }
	inline bool get_useAlphaClip_8() const { return ___useAlphaClip_8; }
	inline bool* get_address_of_useAlphaClip_8() { return &___useAlphaClip_8; }
	inline void set_useAlphaClip_8(bool value)
	{
		___useAlphaClip_8 = value;
	}

	inline static int32_t get_offset_of_colorMask_9() { return static_cast<int32_t>(offsetof(MatEntry_t2957107092, ___colorMask_9)); }
	inline int32_t get_colorMask_9() const { return ___colorMask_9; }
	inline int32_t* get_address_of_colorMask_9() { return &___colorMask_9; }
	inline void set_colorMask_9(int32_t value)
	{
		___colorMask_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MATENTRY_T2957107092_H
#ifndef IMAGETARGETFINDER_T2774980633_H
#define IMAGETARGETFINDER_T2774980633_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.ImageTargetFinder
struct  ImageTargetFinder_t2774980633  : public TargetFinder_t2439332195
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // IMAGETARGETFINDER_T2774980633_H
#ifndef POSITIONALDEVICETRACKERIMPL_T1314438186_H
#define POSITIONALDEVICETRACKERIMPL_T1314438186_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.PositionalDeviceTrackerImpl
struct  PositionalDeviceTrackerImpl_t1314438186  : public PositionalDeviceTracker_t656722001
{
public:
	// System.Action`1<Vuforia.Anchor> Vuforia.PositionalDeviceTrackerImpl::mAnchorRemovedEvent
	Action_1_t4033558042 * ___mAnchorRemovedEvent_1;

public:
	inline static int32_t get_offset_of_mAnchorRemovedEvent_1() { return static_cast<int32_t>(offsetof(PositionalDeviceTrackerImpl_t1314438186, ___mAnchorRemovedEvent_1)); }
	inline Action_1_t4033558042 * get_mAnchorRemovedEvent_1() const { return ___mAnchorRemovedEvent_1; }
	inline Action_1_t4033558042 ** get_address_of_mAnchorRemovedEvent_1() { return &___mAnchorRemovedEvent_1; }
	inline void set_mAnchorRemovedEvent_1(Action_1_t4033558042 * value)
	{
		___mAnchorRemovedEvent_1 = value;
		Il2CppCodeGenWriteBarrier((&___mAnchorRemovedEvent_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // POSITIONALDEVICETRACKERIMPL_T1314438186_H
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
#ifndef GETRAYINTERSECTIONALLCALLBACK_T3913627115_H
#define GETRAYINTERSECTIONALLCALLBACK_T3913627115_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.ReflectionMethodsCache/GetRayIntersectionAllCallback
struct  GetRayIntersectionAllCallback_t3913627115  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GETRAYINTERSECTIONALLCALLBACK_T3913627115_H
#ifndef GETRAYINTERSECTIONALLNONALLOCCALLBACK_T2311174851_H
#define GETRAYINTERSECTIONALLNONALLOCCALLBACK_T2311174851_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.ReflectionMethodsCache/GetRayIntersectionAllNonAllocCallback
struct  GetRayIntersectionAllNonAllocCallback_t2311174851  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GETRAYINTERSECTIONALLNONALLOCCALLBACK_T2311174851_H
#ifndef GETRAYCASTNONALLOCCALLBACK_T3841783507_H
#define GETRAYCASTNONALLOCCALLBACK_T3841783507_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.ReflectionMethodsCache/GetRaycastNonAllocCallback
struct  GetRaycastNonAllocCallback_t3841783507  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GETRAYCASTNONALLOCCALLBACK_T3841783507_H
#ifndef RAYCAST2DCALLBACK_T768590915_H
#define RAYCAST2DCALLBACK_T768590915_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.ReflectionMethodsCache/Raycast2DCallback
struct  Raycast2DCallback_t768590915  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RAYCAST2DCALLBACK_T768590915_H
#ifndef RAYCAST3DCALLBACK_T701940803_H
#define RAYCAST3DCALLBACK_T701940803_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.ReflectionMethodsCache/Raycast3DCallback
struct  Raycast3DCallback_t701940803  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RAYCAST3DCALLBACK_T701940803_H
#ifndef RAYCASTALLCALLBACK_T1884415901_H
#define RAYCASTALLCALLBACK_T1884415901_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.ReflectionMethodsCache/RaycastAllCallback
struct  RaycastAllCallback_t1884415901  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RAYCASTALLCALLBACK_T1884415901_H
#ifndef POSITIONALPLAYMODEDEVICETRACKERIMPL_T1348222404_H
#define POSITIONALPLAYMODEDEVICETRACKERIMPL_T1348222404_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.PositionalPlayModeDeviceTrackerImpl
struct  PositionalPlayModeDeviceTrackerImpl_t1348222404  : public PositionalDeviceTrackerImpl_t1314438186
{
public:
	// Vuforia.DataSet Vuforia.PositionalPlayModeDeviceTrackerImpl::mEmulatorDataset
	DataSet_t3286034874 * ___mEmulatorDataset_2;

public:
	inline static int32_t get_offset_of_mEmulatorDataset_2() { return static_cast<int32_t>(offsetof(PositionalPlayModeDeviceTrackerImpl_t1348222404, ___mEmulatorDataset_2)); }
	inline DataSet_t3286034874 * get_mEmulatorDataset_2() const { return ___mEmulatorDataset_2; }
	inline DataSet_t3286034874 ** get_address_of_mEmulatorDataset_2() { return &___mEmulatorDataset_2; }
	inline void set_mEmulatorDataset_2(DataSet_t3286034874 * value)
	{
		___mEmulatorDataset_2 = value;
		Il2CppCodeGenWriteBarrier((&___mEmulatorDataset_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // POSITIONALPLAYMODEDEVICETRACKERIMPL_T1348222404_H
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
#ifndef DEFAULTMODELRECOEVENTHANDLERPLACEHOLDER_T3262631700_H
#define DEFAULTMODELRECOEVENTHANDLERPLACEHOLDER_T3262631700_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DefaultModelRecoEventHandlerPlaceHolder
struct  DefaultModelRecoEventHandlerPlaceHolder_t3262631700  : public MonoBehaviour_t3962482529
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEFAULTMODELRECOEVENTHANDLERPLACEHOLDER_T3262631700_H
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
#ifndef DEFAULTINITIALIZATIONERRORHANDLERINTERNAL_T2721934644_H
#define DEFAULTINITIALIZATIONERRORHANDLERINTERNAL_T2721934644_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DefaultInitializationErrorHandlerInternal
struct  DefaultInitializationErrorHandlerInternal_t2721934644  : public VuforiaMonoBehaviour_t1150221792
{
public:
	// System.String DefaultInitializationErrorHandlerInternal::mErrorText
	String_t* ___mErrorText_4;
	// System.Boolean DefaultInitializationErrorHandlerInternal::mErrorOccurred
	bool ___mErrorOccurred_5;
	// UnityEngine.GUIStyle DefaultInitializationErrorHandlerInternal::bodyStyle
	GUIStyle_t3956901511 * ___bodyStyle_7;
	// UnityEngine.GUIStyle DefaultInitializationErrorHandlerInternal::headerStyle
	GUIStyle_t3956901511 * ___headerStyle_8;
	// UnityEngine.GUIStyle DefaultInitializationErrorHandlerInternal::footerStyle
	GUIStyle_t3956901511 * ___footerStyle_9;
	// UnityEngine.Texture2D DefaultInitializationErrorHandlerInternal::bodyTexture
	Texture2D_t3840446185 * ___bodyTexture_10;
	// UnityEngine.Texture2D DefaultInitializationErrorHandlerInternal::headerTexture
	Texture2D_t3840446185 * ___headerTexture_11;
	// UnityEngine.Texture2D DefaultInitializationErrorHandlerInternal::footerTexture
	Texture2D_t3840446185 * ___footerTexture_12;

public:
	inline static int32_t get_offset_of_mErrorText_4() { return static_cast<int32_t>(offsetof(DefaultInitializationErrorHandlerInternal_t2721934644, ___mErrorText_4)); }
	inline String_t* get_mErrorText_4() const { return ___mErrorText_4; }
	inline String_t** get_address_of_mErrorText_4() { return &___mErrorText_4; }
	inline void set_mErrorText_4(String_t* value)
	{
		___mErrorText_4 = value;
		Il2CppCodeGenWriteBarrier((&___mErrorText_4), value);
	}

	inline static int32_t get_offset_of_mErrorOccurred_5() { return static_cast<int32_t>(offsetof(DefaultInitializationErrorHandlerInternal_t2721934644, ___mErrorOccurred_5)); }
	inline bool get_mErrorOccurred_5() const { return ___mErrorOccurred_5; }
	inline bool* get_address_of_mErrorOccurred_5() { return &___mErrorOccurred_5; }
	inline void set_mErrorOccurred_5(bool value)
	{
		___mErrorOccurred_5 = value;
	}

	inline static int32_t get_offset_of_bodyStyle_7() { return static_cast<int32_t>(offsetof(DefaultInitializationErrorHandlerInternal_t2721934644, ___bodyStyle_7)); }
	inline GUIStyle_t3956901511 * get_bodyStyle_7() const { return ___bodyStyle_7; }
	inline GUIStyle_t3956901511 ** get_address_of_bodyStyle_7() { return &___bodyStyle_7; }
	inline void set_bodyStyle_7(GUIStyle_t3956901511 * value)
	{
		___bodyStyle_7 = value;
		Il2CppCodeGenWriteBarrier((&___bodyStyle_7), value);
	}

	inline static int32_t get_offset_of_headerStyle_8() { return static_cast<int32_t>(offsetof(DefaultInitializationErrorHandlerInternal_t2721934644, ___headerStyle_8)); }
	inline GUIStyle_t3956901511 * get_headerStyle_8() const { return ___headerStyle_8; }
	inline GUIStyle_t3956901511 ** get_address_of_headerStyle_8() { return &___headerStyle_8; }
	inline void set_headerStyle_8(GUIStyle_t3956901511 * value)
	{
		___headerStyle_8 = value;
		Il2CppCodeGenWriteBarrier((&___headerStyle_8), value);
	}

	inline static int32_t get_offset_of_footerStyle_9() { return static_cast<int32_t>(offsetof(DefaultInitializationErrorHandlerInternal_t2721934644, ___footerStyle_9)); }
	inline GUIStyle_t3956901511 * get_footerStyle_9() const { return ___footerStyle_9; }
	inline GUIStyle_t3956901511 ** get_address_of_footerStyle_9() { return &___footerStyle_9; }
	inline void set_footerStyle_9(GUIStyle_t3956901511 * value)
	{
		___footerStyle_9 = value;
		Il2CppCodeGenWriteBarrier((&___footerStyle_9), value);
	}

	inline static int32_t get_offset_of_bodyTexture_10() { return static_cast<int32_t>(offsetof(DefaultInitializationErrorHandlerInternal_t2721934644, ___bodyTexture_10)); }
	inline Texture2D_t3840446185 * get_bodyTexture_10() const { return ___bodyTexture_10; }
	inline Texture2D_t3840446185 ** get_address_of_bodyTexture_10() { return &___bodyTexture_10; }
	inline void set_bodyTexture_10(Texture2D_t3840446185 * value)
	{
		___bodyTexture_10 = value;
		Il2CppCodeGenWriteBarrier((&___bodyTexture_10), value);
	}

	inline static int32_t get_offset_of_headerTexture_11() { return static_cast<int32_t>(offsetof(DefaultInitializationErrorHandlerInternal_t2721934644, ___headerTexture_11)); }
	inline Texture2D_t3840446185 * get_headerTexture_11() const { return ___headerTexture_11; }
	inline Texture2D_t3840446185 ** get_address_of_headerTexture_11() { return &___headerTexture_11; }
	inline void set_headerTexture_11(Texture2D_t3840446185 * value)
	{
		___headerTexture_11 = value;
		Il2CppCodeGenWriteBarrier((&___headerTexture_11), value);
	}

	inline static int32_t get_offset_of_footerTexture_12() { return static_cast<int32_t>(offsetof(DefaultInitializationErrorHandlerInternal_t2721934644, ___footerTexture_12)); }
	inline Texture2D_t3840446185 * get_footerTexture_12() const { return ___footerTexture_12; }
	inline Texture2D_t3840446185 ** get_address_of_footerTexture_12() { return &___footerTexture_12; }
	inline void set_footerTexture_12(Texture2D_t3840446185 * value)
	{
		___footerTexture_12 = value;
		Il2CppCodeGenWriteBarrier((&___footerTexture_12), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEFAULTINITIALIZATIONERRORHANDLERINTERNAL_T2721934644_H
#ifndef DEFAULTINITIALIZATIONERRORHANDLERPLACEHOLDER_T270221276_H
#define DEFAULTINITIALIZATIONERRORHANDLERPLACEHOLDER_T270221276_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DefaultInitializationErrorHandlerPlaceHolder
struct  DefaultInitializationErrorHandlerPlaceHolder_t270221276  : public VuforiaMonoBehaviour_t1150221792
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEFAULTINITIALIZATIONERRORHANDLERPLACEHOLDER_T270221276_H
#ifndef DEFAULTTRACKABLEBEHAVIOURPLACEHOLDER_T3249521055_H
#define DEFAULTTRACKABLEBEHAVIOURPLACEHOLDER_T3249521055_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DefaultTrackableBehaviourPlaceholder
struct  DefaultTrackableBehaviourPlaceholder_t3249521055  : public VuforiaMonoBehaviour_t1150221792
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEFAULTTRACKABLEBEHAVIOURPLACEHOLDER_T3249521055_H
#ifndef ASPECTRATIOFITTER_T3312407083_H
#define ASPECTRATIOFITTER_T3312407083_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.AspectRatioFitter
struct  AspectRatioFitter_t3312407083  : public UIBehaviour_t3495933518
{
public:
	// UnityEngine.UI.AspectRatioFitter/AspectMode UnityEngine.UI.AspectRatioFitter::m_AspectMode
	int32_t ___m_AspectMode_4;
	// System.Single UnityEngine.UI.AspectRatioFitter::m_AspectRatio
	float ___m_AspectRatio_5;
	// UnityEngine.RectTransform UnityEngine.UI.AspectRatioFitter::m_Rect
	RectTransform_t3704657025 * ___m_Rect_6;
	// System.Boolean UnityEngine.UI.AspectRatioFitter::m_DelayedSetDirty
	bool ___m_DelayedSetDirty_7;
	// UnityEngine.DrivenRectTransformTracker UnityEngine.UI.AspectRatioFitter::m_Tracker
	DrivenRectTransformTracker_t2562230146  ___m_Tracker_8;

public:
	inline static int32_t get_offset_of_m_AspectMode_4() { return static_cast<int32_t>(offsetof(AspectRatioFitter_t3312407083, ___m_AspectMode_4)); }
	inline int32_t get_m_AspectMode_4() const { return ___m_AspectMode_4; }
	inline int32_t* get_address_of_m_AspectMode_4() { return &___m_AspectMode_4; }
	inline void set_m_AspectMode_4(int32_t value)
	{
		___m_AspectMode_4 = value;
	}

	inline static int32_t get_offset_of_m_AspectRatio_5() { return static_cast<int32_t>(offsetof(AspectRatioFitter_t3312407083, ___m_AspectRatio_5)); }
	inline float get_m_AspectRatio_5() const { return ___m_AspectRatio_5; }
	inline float* get_address_of_m_AspectRatio_5() { return &___m_AspectRatio_5; }
	inline void set_m_AspectRatio_5(float value)
	{
		___m_AspectRatio_5 = value;
	}

	inline static int32_t get_offset_of_m_Rect_6() { return static_cast<int32_t>(offsetof(AspectRatioFitter_t3312407083, ___m_Rect_6)); }
	inline RectTransform_t3704657025 * get_m_Rect_6() const { return ___m_Rect_6; }
	inline RectTransform_t3704657025 ** get_address_of_m_Rect_6() { return &___m_Rect_6; }
	inline void set_m_Rect_6(RectTransform_t3704657025 * value)
	{
		___m_Rect_6 = value;
		Il2CppCodeGenWriteBarrier((&___m_Rect_6), value);
	}

	inline static int32_t get_offset_of_m_DelayedSetDirty_7() { return static_cast<int32_t>(offsetof(AspectRatioFitter_t3312407083, ___m_DelayedSetDirty_7)); }
	inline bool get_m_DelayedSetDirty_7() const { return ___m_DelayedSetDirty_7; }
	inline bool* get_address_of_m_DelayedSetDirty_7() { return &___m_DelayedSetDirty_7; }
	inline void set_m_DelayedSetDirty_7(bool value)
	{
		___m_DelayedSetDirty_7 = value;
	}

	inline static int32_t get_offset_of_m_Tracker_8() { return static_cast<int32_t>(offsetof(AspectRatioFitter_t3312407083, ___m_Tracker_8)); }
	inline DrivenRectTransformTracker_t2562230146  get_m_Tracker_8() const { return ___m_Tracker_8; }
	inline DrivenRectTransformTracker_t2562230146 * get_address_of_m_Tracker_8() { return &___m_Tracker_8; }
	inline void set_m_Tracker_8(DrivenRectTransformTracker_t2562230146  value)
	{
		___m_Tracker_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASPECTRATIOFITTER_T3312407083_H
#ifndef BASEMESHEFFECT_T2440176439_H
#define BASEMESHEFFECT_T2440176439_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.BaseMeshEffect
struct  BaseMeshEffect_t2440176439  : public UIBehaviour_t3495933518
{
public:
	// UnityEngine.UI.Graphic UnityEngine.UI.BaseMeshEffect::m_Graphic
	Graphic_t1660335611 * ___m_Graphic_4;

public:
	inline static int32_t get_offset_of_m_Graphic_4() { return static_cast<int32_t>(offsetof(BaseMeshEffect_t2440176439, ___m_Graphic_4)); }
	inline Graphic_t1660335611 * get_m_Graphic_4() const { return ___m_Graphic_4; }
	inline Graphic_t1660335611 ** get_address_of_m_Graphic_4() { return &___m_Graphic_4; }
	inline void set_m_Graphic_4(Graphic_t1660335611 * value)
	{
		___m_Graphic_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_Graphic_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BASEMESHEFFECT_T2440176439_H
#ifndef CANVASSCALER_T2767979955_H
#define CANVASSCALER_T2767979955_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.CanvasScaler
struct  CanvasScaler_t2767979955  : public UIBehaviour_t3495933518
{
public:
	// UnityEngine.UI.CanvasScaler/ScaleMode UnityEngine.UI.CanvasScaler::m_UiScaleMode
	int32_t ___m_UiScaleMode_4;
	// System.Single UnityEngine.UI.CanvasScaler::m_ReferencePixelsPerUnit
	float ___m_ReferencePixelsPerUnit_5;
	// System.Single UnityEngine.UI.CanvasScaler::m_ScaleFactor
	float ___m_ScaleFactor_6;
	// UnityEngine.Vector2 UnityEngine.UI.CanvasScaler::m_ReferenceResolution
	Vector2_t2156229523  ___m_ReferenceResolution_7;
	// UnityEngine.UI.CanvasScaler/ScreenMatchMode UnityEngine.UI.CanvasScaler::m_ScreenMatchMode
	int32_t ___m_ScreenMatchMode_8;
	// System.Single UnityEngine.UI.CanvasScaler::m_MatchWidthOrHeight
	float ___m_MatchWidthOrHeight_9;
	// UnityEngine.UI.CanvasScaler/Unit UnityEngine.UI.CanvasScaler::m_PhysicalUnit
	int32_t ___m_PhysicalUnit_11;
	// System.Single UnityEngine.UI.CanvasScaler::m_FallbackScreenDPI
	float ___m_FallbackScreenDPI_12;
	// System.Single UnityEngine.UI.CanvasScaler::m_DefaultSpriteDPI
	float ___m_DefaultSpriteDPI_13;
	// System.Single UnityEngine.UI.CanvasScaler::m_DynamicPixelsPerUnit
	float ___m_DynamicPixelsPerUnit_14;
	// UnityEngine.Canvas UnityEngine.UI.CanvasScaler::m_Canvas
	Canvas_t3310196443 * ___m_Canvas_15;
	// System.Single UnityEngine.UI.CanvasScaler::m_PrevScaleFactor
	float ___m_PrevScaleFactor_16;
	// System.Single UnityEngine.UI.CanvasScaler::m_PrevReferencePixelsPerUnit
	float ___m_PrevReferencePixelsPerUnit_17;

public:
	inline static int32_t get_offset_of_m_UiScaleMode_4() { return static_cast<int32_t>(offsetof(CanvasScaler_t2767979955, ___m_UiScaleMode_4)); }
	inline int32_t get_m_UiScaleMode_4() const { return ___m_UiScaleMode_4; }
	inline int32_t* get_address_of_m_UiScaleMode_4() { return &___m_UiScaleMode_4; }
	inline void set_m_UiScaleMode_4(int32_t value)
	{
		___m_UiScaleMode_4 = value;
	}

	inline static int32_t get_offset_of_m_ReferencePixelsPerUnit_5() { return static_cast<int32_t>(offsetof(CanvasScaler_t2767979955, ___m_ReferencePixelsPerUnit_5)); }
	inline float get_m_ReferencePixelsPerUnit_5() const { return ___m_ReferencePixelsPerUnit_5; }
	inline float* get_address_of_m_ReferencePixelsPerUnit_5() { return &___m_ReferencePixelsPerUnit_5; }
	inline void set_m_ReferencePixelsPerUnit_5(float value)
	{
		___m_ReferencePixelsPerUnit_5 = value;
	}

	inline static int32_t get_offset_of_m_ScaleFactor_6() { return static_cast<int32_t>(offsetof(CanvasScaler_t2767979955, ___m_ScaleFactor_6)); }
	inline float get_m_ScaleFactor_6() const { return ___m_ScaleFactor_6; }
	inline float* get_address_of_m_ScaleFactor_6() { return &___m_ScaleFactor_6; }
	inline void set_m_ScaleFactor_6(float value)
	{
		___m_ScaleFactor_6 = value;
	}

	inline static int32_t get_offset_of_m_ReferenceResolution_7() { return static_cast<int32_t>(offsetof(CanvasScaler_t2767979955, ___m_ReferenceResolution_7)); }
	inline Vector2_t2156229523  get_m_ReferenceResolution_7() const { return ___m_ReferenceResolution_7; }
	inline Vector2_t2156229523 * get_address_of_m_ReferenceResolution_7() { return &___m_ReferenceResolution_7; }
	inline void set_m_ReferenceResolution_7(Vector2_t2156229523  value)
	{
		___m_ReferenceResolution_7 = value;
	}

	inline static int32_t get_offset_of_m_ScreenMatchMode_8() { return static_cast<int32_t>(offsetof(CanvasScaler_t2767979955, ___m_ScreenMatchMode_8)); }
	inline int32_t get_m_ScreenMatchMode_8() const { return ___m_ScreenMatchMode_8; }
	inline int32_t* get_address_of_m_ScreenMatchMode_8() { return &___m_ScreenMatchMode_8; }
	inline void set_m_ScreenMatchMode_8(int32_t value)
	{
		___m_ScreenMatchMode_8 = value;
	}

	inline static int32_t get_offset_of_m_MatchWidthOrHeight_9() { return static_cast<int32_t>(offsetof(CanvasScaler_t2767979955, ___m_MatchWidthOrHeight_9)); }
	inline float get_m_MatchWidthOrHeight_9() const { return ___m_MatchWidthOrHeight_9; }
	inline float* get_address_of_m_MatchWidthOrHeight_9() { return &___m_MatchWidthOrHeight_9; }
	inline void set_m_MatchWidthOrHeight_9(float value)
	{
		___m_MatchWidthOrHeight_9 = value;
	}

	inline static int32_t get_offset_of_m_PhysicalUnit_11() { return static_cast<int32_t>(offsetof(CanvasScaler_t2767979955, ___m_PhysicalUnit_11)); }
	inline int32_t get_m_PhysicalUnit_11() const { return ___m_PhysicalUnit_11; }
	inline int32_t* get_address_of_m_PhysicalUnit_11() { return &___m_PhysicalUnit_11; }
	inline void set_m_PhysicalUnit_11(int32_t value)
	{
		___m_PhysicalUnit_11 = value;
	}

	inline static int32_t get_offset_of_m_FallbackScreenDPI_12() { return static_cast<int32_t>(offsetof(CanvasScaler_t2767979955, ___m_FallbackScreenDPI_12)); }
	inline float get_m_FallbackScreenDPI_12() const { return ___m_FallbackScreenDPI_12; }
	inline float* get_address_of_m_FallbackScreenDPI_12() { return &___m_FallbackScreenDPI_12; }
	inline void set_m_FallbackScreenDPI_12(float value)
	{
		___m_FallbackScreenDPI_12 = value;
	}

	inline static int32_t get_offset_of_m_DefaultSpriteDPI_13() { return static_cast<int32_t>(offsetof(CanvasScaler_t2767979955, ___m_DefaultSpriteDPI_13)); }
	inline float get_m_DefaultSpriteDPI_13() const { return ___m_DefaultSpriteDPI_13; }
	inline float* get_address_of_m_DefaultSpriteDPI_13() { return &___m_DefaultSpriteDPI_13; }
	inline void set_m_DefaultSpriteDPI_13(float value)
	{
		___m_DefaultSpriteDPI_13 = value;
	}

	inline static int32_t get_offset_of_m_DynamicPixelsPerUnit_14() { return static_cast<int32_t>(offsetof(CanvasScaler_t2767979955, ___m_DynamicPixelsPerUnit_14)); }
	inline float get_m_DynamicPixelsPerUnit_14() const { return ___m_DynamicPixelsPerUnit_14; }
	inline float* get_address_of_m_DynamicPixelsPerUnit_14() { return &___m_DynamicPixelsPerUnit_14; }
	inline void set_m_DynamicPixelsPerUnit_14(float value)
	{
		___m_DynamicPixelsPerUnit_14 = value;
	}

	inline static int32_t get_offset_of_m_Canvas_15() { return static_cast<int32_t>(offsetof(CanvasScaler_t2767979955, ___m_Canvas_15)); }
	inline Canvas_t3310196443 * get_m_Canvas_15() const { return ___m_Canvas_15; }
	inline Canvas_t3310196443 ** get_address_of_m_Canvas_15() { return &___m_Canvas_15; }
	inline void set_m_Canvas_15(Canvas_t3310196443 * value)
	{
		___m_Canvas_15 = value;
		Il2CppCodeGenWriteBarrier((&___m_Canvas_15), value);
	}

	inline static int32_t get_offset_of_m_PrevScaleFactor_16() { return static_cast<int32_t>(offsetof(CanvasScaler_t2767979955, ___m_PrevScaleFactor_16)); }
	inline float get_m_PrevScaleFactor_16() const { return ___m_PrevScaleFactor_16; }
	inline float* get_address_of_m_PrevScaleFactor_16() { return &___m_PrevScaleFactor_16; }
	inline void set_m_PrevScaleFactor_16(float value)
	{
		___m_PrevScaleFactor_16 = value;
	}

	inline static int32_t get_offset_of_m_PrevReferencePixelsPerUnit_17() { return static_cast<int32_t>(offsetof(CanvasScaler_t2767979955, ___m_PrevReferencePixelsPerUnit_17)); }
	inline float get_m_PrevReferencePixelsPerUnit_17() const { return ___m_PrevReferencePixelsPerUnit_17; }
	inline float* get_address_of_m_PrevReferencePixelsPerUnit_17() { return &___m_PrevReferencePixelsPerUnit_17; }
	inline void set_m_PrevReferencePixelsPerUnit_17(float value)
	{
		___m_PrevReferencePixelsPerUnit_17 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CANVASSCALER_T2767979955_H
#ifndef CONTENTSIZEFITTER_T3850442145_H
#define CONTENTSIZEFITTER_T3850442145_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.ContentSizeFitter
struct  ContentSizeFitter_t3850442145  : public UIBehaviour_t3495933518
{
public:
	// UnityEngine.UI.ContentSizeFitter/FitMode UnityEngine.UI.ContentSizeFitter::m_HorizontalFit
	int32_t ___m_HorizontalFit_4;
	// UnityEngine.UI.ContentSizeFitter/FitMode UnityEngine.UI.ContentSizeFitter::m_VerticalFit
	int32_t ___m_VerticalFit_5;
	// UnityEngine.RectTransform UnityEngine.UI.ContentSizeFitter::m_Rect
	RectTransform_t3704657025 * ___m_Rect_6;
	// UnityEngine.DrivenRectTransformTracker UnityEngine.UI.ContentSizeFitter::m_Tracker
	DrivenRectTransformTracker_t2562230146  ___m_Tracker_7;

public:
	inline static int32_t get_offset_of_m_HorizontalFit_4() { return static_cast<int32_t>(offsetof(ContentSizeFitter_t3850442145, ___m_HorizontalFit_4)); }
	inline int32_t get_m_HorizontalFit_4() const { return ___m_HorizontalFit_4; }
	inline int32_t* get_address_of_m_HorizontalFit_4() { return &___m_HorizontalFit_4; }
	inline void set_m_HorizontalFit_4(int32_t value)
	{
		___m_HorizontalFit_4 = value;
	}

	inline static int32_t get_offset_of_m_VerticalFit_5() { return static_cast<int32_t>(offsetof(ContentSizeFitter_t3850442145, ___m_VerticalFit_5)); }
	inline int32_t get_m_VerticalFit_5() const { return ___m_VerticalFit_5; }
	inline int32_t* get_address_of_m_VerticalFit_5() { return &___m_VerticalFit_5; }
	inline void set_m_VerticalFit_5(int32_t value)
	{
		___m_VerticalFit_5 = value;
	}

	inline static int32_t get_offset_of_m_Rect_6() { return static_cast<int32_t>(offsetof(ContentSizeFitter_t3850442145, ___m_Rect_6)); }
	inline RectTransform_t3704657025 * get_m_Rect_6() const { return ___m_Rect_6; }
	inline RectTransform_t3704657025 ** get_address_of_m_Rect_6() { return &___m_Rect_6; }
	inline void set_m_Rect_6(RectTransform_t3704657025 * value)
	{
		___m_Rect_6 = value;
		Il2CppCodeGenWriteBarrier((&___m_Rect_6), value);
	}

	inline static int32_t get_offset_of_m_Tracker_7() { return static_cast<int32_t>(offsetof(ContentSizeFitter_t3850442145, ___m_Tracker_7)); }
	inline DrivenRectTransformTracker_t2562230146  get_m_Tracker_7() const { return ___m_Tracker_7; }
	inline DrivenRectTransformTracker_t2562230146 * get_address_of_m_Tracker_7() { return &___m_Tracker_7; }
	inline void set_m_Tracker_7(DrivenRectTransformTracker_t2562230146  value)
	{
		___m_Tracker_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONTENTSIZEFITTER_T3850442145_H
#ifndef GRAPHIC_T1660335611_H
#define GRAPHIC_T1660335611_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Graphic
struct  Graphic_t1660335611  : public UIBehaviour_t3495933518
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t340375123 * ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_t2555686324  ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_8;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t3704657025 * ___m_RectTransform_9;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_t2598313366 * ___m_CanvasRenderer_10;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t3310196443 * ___m_Canvas_11;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_12;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_13;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t3245792599 * ___m_OnDirtyLayoutCallback_14;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t3245792599 * ___m_OnDirtyVertsCallback_15;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t3245792599 * ___m_OnDirtyMaterialCallback_16;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t3055525458 * ___m_ColorTweenRunner_19;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_20;

public:
	inline static int32_t get_offset_of_m_Material_6() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_Material_6)); }
	inline Material_t340375123 * get_m_Material_6() const { return ___m_Material_6; }
	inline Material_t340375123 ** get_address_of_m_Material_6() { return &___m_Material_6; }
	inline void set_m_Material_6(Material_t340375123 * value)
	{
		___m_Material_6 = value;
		Il2CppCodeGenWriteBarrier((&___m_Material_6), value);
	}

	inline static int32_t get_offset_of_m_Color_7() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_Color_7)); }
	inline Color_t2555686324  get_m_Color_7() const { return ___m_Color_7; }
	inline Color_t2555686324 * get_address_of_m_Color_7() { return &___m_Color_7; }
	inline void set_m_Color_7(Color_t2555686324  value)
	{
		___m_Color_7 = value;
	}

	inline static int32_t get_offset_of_m_RaycastTarget_8() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_RaycastTarget_8)); }
	inline bool get_m_RaycastTarget_8() const { return ___m_RaycastTarget_8; }
	inline bool* get_address_of_m_RaycastTarget_8() { return &___m_RaycastTarget_8; }
	inline void set_m_RaycastTarget_8(bool value)
	{
		___m_RaycastTarget_8 = value;
	}

	inline static int32_t get_offset_of_m_RectTransform_9() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_RectTransform_9)); }
	inline RectTransform_t3704657025 * get_m_RectTransform_9() const { return ___m_RectTransform_9; }
	inline RectTransform_t3704657025 ** get_address_of_m_RectTransform_9() { return &___m_RectTransform_9; }
	inline void set_m_RectTransform_9(RectTransform_t3704657025 * value)
	{
		___m_RectTransform_9 = value;
		Il2CppCodeGenWriteBarrier((&___m_RectTransform_9), value);
	}

	inline static int32_t get_offset_of_m_CanvasRenderer_10() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_CanvasRenderer_10)); }
	inline CanvasRenderer_t2598313366 * get_m_CanvasRenderer_10() const { return ___m_CanvasRenderer_10; }
	inline CanvasRenderer_t2598313366 ** get_address_of_m_CanvasRenderer_10() { return &___m_CanvasRenderer_10; }
	inline void set_m_CanvasRenderer_10(CanvasRenderer_t2598313366 * value)
	{
		___m_CanvasRenderer_10 = value;
		Il2CppCodeGenWriteBarrier((&___m_CanvasRenderer_10), value);
	}

	inline static int32_t get_offset_of_m_Canvas_11() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_Canvas_11)); }
	inline Canvas_t3310196443 * get_m_Canvas_11() const { return ___m_Canvas_11; }
	inline Canvas_t3310196443 ** get_address_of_m_Canvas_11() { return &___m_Canvas_11; }
	inline void set_m_Canvas_11(Canvas_t3310196443 * value)
	{
		___m_Canvas_11 = value;
		Il2CppCodeGenWriteBarrier((&___m_Canvas_11), value);
	}

	inline static int32_t get_offset_of_m_VertsDirty_12() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_VertsDirty_12)); }
	inline bool get_m_VertsDirty_12() const { return ___m_VertsDirty_12; }
	inline bool* get_address_of_m_VertsDirty_12() { return &___m_VertsDirty_12; }
	inline void set_m_VertsDirty_12(bool value)
	{
		___m_VertsDirty_12 = value;
	}

	inline static int32_t get_offset_of_m_MaterialDirty_13() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_MaterialDirty_13)); }
	inline bool get_m_MaterialDirty_13() const { return ___m_MaterialDirty_13; }
	inline bool* get_address_of_m_MaterialDirty_13() { return &___m_MaterialDirty_13; }
	inline void set_m_MaterialDirty_13(bool value)
	{
		___m_MaterialDirty_13 = value;
	}

	inline static int32_t get_offset_of_m_OnDirtyLayoutCallback_14() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_OnDirtyLayoutCallback_14)); }
	inline UnityAction_t3245792599 * get_m_OnDirtyLayoutCallback_14() const { return ___m_OnDirtyLayoutCallback_14; }
	inline UnityAction_t3245792599 ** get_address_of_m_OnDirtyLayoutCallback_14() { return &___m_OnDirtyLayoutCallback_14; }
	inline void set_m_OnDirtyLayoutCallback_14(UnityAction_t3245792599 * value)
	{
		___m_OnDirtyLayoutCallback_14 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnDirtyLayoutCallback_14), value);
	}

	inline static int32_t get_offset_of_m_OnDirtyVertsCallback_15() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_OnDirtyVertsCallback_15)); }
	inline UnityAction_t3245792599 * get_m_OnDirtyVertsCallback_15() const { return ___m_OnDirtyVertsCallback_15; }
	inline UnityAction_t3245792599 ** get_address_of_m_OnDirtyVertsCallback_15() { return &___m_OnDirtyVertsCallback_15; }
	inline void set_m_OnDirtyVertsCallback_15(UnityAction_t3245792599 * value)
	{
		___m_OnDirtyVertsCallback_15 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnDirtyVertsCallback_15), value);
	}

	inline static int32_t get_offset_of_m_OnDirtyMaterialCallback_16() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_OnDirtyMaterialCallback_16)); }
	inline UnityAction_t3245792599 * get_m_OnDirtyMaterialCallback_16() const { return ___m_OnDirtyMaterialCallback_16; }
	inline UnityAction_t3245792599 ** get_address_of_m_OnDirtyMaterialCallback_16() { return &___m_OnDirtyMaterialCallback_16; }
	inline void set_m_OnDirtyMaterialCallback_16(UnityAction_t3245792599 * value)
	{
		___m_OnDirtyMaterialCallback_16 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnDirtyMaterialCallback_16), value);
	}

	inline static int32_t get_offset_of_m_ColorTweenRunner_19() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_ColorTweenRunner_19)); }
	inline TweenRunner_1_t3055525458 * get_m_ColorTweenRunner_19() const { return ___m_ColorTweenRunner_19; }
	inline TweenRunner_1_t3055525458 ** get_address_of_m_ColorTweenRunner_19() { return &___m_ColorTweenRunner_19; }
	inline void set_m_ColorTweenRunner_19(TweenRunner_1_t3055525458 * value)
	{
		___m_ColorTweenRunner_19 = value;
		Il2CppCodeGenWriteBarrier((&___m_ColorTweenRunner_19), value);
	}

	inline static int32_t get_offset_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_20() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___U3CuseLegacyMeshGenerationU3Ek__BackingField_20)); }
	inline bool get_U3CuseLegacyMeshGenerationU3Ek__BackingField_20() const { return ___U3CuseLegacyMeshGenerationU3Ek__BackingField_20; }
	inline bool* get_address_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_20() { return &___U3CuseLegacyMeshGenerationU3Ek__BackingField_20; }
	inline void set_U3CuseLegacyMeshGenerationU3Ek__BackingField_20(bool value)
	{
		___U3CuseLegacyMeshGenerationU3Ek__BackingField_20 = value;
	}
};

struct Graphic_t1660335611_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t340375123 * ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_t3840446185 * ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t3648964284 * ___s_Mesh_17;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_t2453304189 * ___s_VertexHelper_18;

public:
	inline static int32_t get_offset_of_s_DefaultUI_4() { return static_cast<int32_t>(offsetof(Graphic_t1660335611_StaticFields, ___s_DefaultUI_4)); }
	inline Material_t340375123 * get_s_DefaultUI_4() const { return ___s_DefaultUI_4; }
	inline Material_t340375123 ** get_address_of_s_DefaultUI_4() { return &___s_DefaultUI_4; }
	inline void set_s_DefaultUI_4(Material_t340375123 * value)
	{
		___s_DefaultUI_4 = value;
		Il2CppCodeGenWriteBarrier((&___s_DefaultUI_4), value);
	}

	inline static int32_t get_offset_of_s_WhiteTexture_5() { return static_cast<int32_t>(offsetof(Graphic_t1660335611_StaticFields, ___s_WhiteTexture_5)); }
	inline Texture2D_t3840446185 * get_s_WhiteTexture_5() const { return ___s_WhiteTexture_5; }
	inline Texture2D_t3840446185 ** get_address_of_s_WhiteTexture_5() { return &___s_WhiteTexture_5; }
	inline void set_s_WhiteTexture_5(Texture2D_t3840446185 * value)
	{
		___s_WhiteTexture_5 = value;
		Il2CppCodeGenWriteBarrier((&___s_WhiteTexture_5), value);
	}

	inline static int32_t get_offset_of_s_Mesh_17() { return static_cast<int32_t>(offsetof(Graphic_t1660335611_StaticFields, ___s_Mesh_17)); }
	inline Mesh_t3648964284 * get_s_Mesh_17() const { return ___s_Mesh_17; }
	inline Mesh_t3648964284 ** get_address_of_s_Mesh_17() { return &___s_Mesh_17; }
	inline void set_s_Mesh_17(Mesh_t3648964284 * value)
	{
		___s_Mesh_17 = value;
		Il2CppCodeGenWriteBarrier((&___s_Mesh_17), value);
	}

	inline static int32_t get_offset_of_s_VertexHelper_18() { return static_cast<int32_t>(offsetof(Graphic_t1660335611_StaticFields, ___s_VertexHelper_18)); }
	inline VertexHelper_t2453304189 * get_s_VertexHelper_18() const { return ___s_VertexHelper_18; }
	inline VertexHelper_t2453304189 ** get_address_of_s_VertexHelper_18() { return &___s_VertexHelper_18; }
	inline void set_s_VertexHelper_18(VertexHelper_t2453304189 * value)
	{
		___s_VertexHelper_18 = value;
		Il2CppCodeGenWriteBarrier((&___s_VertexHelper_18), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GRAPHIC_T1660335611_H
#ifndef LAYOUTELEMENT_T1785403678_H
#define LAYOUTELEMENT_T1785403678_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.LayoutElement
struct  LayoutElement_t1785403678  : public UIBehaviour_t3495933518
{
public:
	// System.Boolean UnityEngine.UI.LayoutElement::m_IgnoreLayout
	bool ___m_IgnoreLayout_4;
	// System.Single UnityEngine.UI.LayoutElement::m_MinWidth
	float ___m_MinWidth_5;
	// System.Single UnityEngine.UI.LayoutElement::m_MinHeight
	float ___m_MinHeight_6;
	// System.Single UnityEngine.UI.LayoutElement::m_PreferredWidth
	float ___m_PreferredWidth_7;
	// System.Single UnityEngine.UI.LayoutElement::m_PreferredHeight
	float ___m_PreferredHeight_8;
	// System.Single UnityEngine.UI.LayoutElement::m_FlexibleWidth
	float ___m_FlexibleWidth_9;
	// System.Single UnityEngine.UI.LayoutElement::m_FlexibleHeight
	float ___m_FlexibleHeight_10;
	// System.Int32 UnityEngine.UI.LayoutElement::m_LayoutPriority
	int32_t ___m_LayoutPriority_11;

public:
	inline static int32_t get_offset_of_m_IgnoreLayout_4() { return static_cast<int32_t>(offsetof(LayoutElement_t1785403678, ___m_IgnoreLayout_4)); }
	inline bool get_m_IgnoreLayout_4() const { return ___m_IgnoreLayout_4; }
	inline bool* get_address_of_m_IgnoreLayout_4() { return &___m_IgnoreLayout_4; }
	inline void set_m_IgnoreLayout_4(bool value)
	{
		___m_IgnoreLayout_4 = value;
	}

	inline static int32_t get_offset_of_m_MinWidth_5() { return static_cast<int32_t>(offsetof(LayoutElement_t1785403678, ___m_MinWidth_5)); }
	inline float get_m_MinWidth_5() const { return ___m_MinWidth_5; }
	inline float* get_address_of_m_MinWidth_5() { return &___m_MinWidth_5; }
	inline void set_m_MinWidth_5(float value)
	{
		___m_MinWidth_5 = value;
	}

	inline static int32_t get_offset_of_m_MinHeight_6() { return static_cast<int32_t>(offsetof(LayoutElement_t1785403678, ___m_MinHeight_6)); }
	inline float get_m_MinHeight_6() const { return ___m_MinHeight_6; }
	inline float* get_address_of_m_MinHeight_6() { return &___m_MinHeight_6; }
	inline void set_m_MinHeight_6(float value)
	{
		___m_MinHeight_6 = value;
	}

	inline static int32_t get_offset_of_m_PreferredWidth_7() { return static_cast<int32_t>(offsetof(LayoutElement_t1785403678, ___m_PreferredWidth_7)); }
	inline float get_m_PreferredWidth_7() const { return ___m_PreferredWidth_7; }
	inline float* get_address_of_m_PreferredWidth_7() { return &___m_PreferredWidth_7; }
	inline void set_m_PreferredWidth_7(float value)
	{
		___m_PreferredWidth_7 = value;
	}

	inline static int32_t get_offset_of_m_PreferredHeight_8() { return static_cast<int32_t>(offsetof(LayoutElement_t1785403678, ___m_PreferredHeight_8)); }
	inline float get_m_PreferredHeight_8() const { return ___m_PreferredHeight_8; }
	inline float* get_address_of_m_PreferredHeight_8() { return &___m_PreferredHeight_8; }
	inline void set_m_PreferredHeight_8(float value)
	{
		___m_PreferredHeight_8 = value;
	}

	inline static int32_t get_offset_of_m_FlexibleWidth_9() { return static_cast<int32_t>(offsetof(LayoutElement_t1785403678, ___m_FlexibleWidth_9)); }
	inline float get_m_FlexibleWidth_9() const { return ___m_FlexibleWidth_9; }
	inline float* get_address_of_m_FlexibleWidth_9() { return &___m_FlexibleWidth_9; }
	inline void set_m_FlexibleWidth_9(float value)
	{
		___m_FlexibleWidth_9 = value;
	}

	inline static int32_t get_offset_of_m_FlexibleHeight_10() { return static_cast<int32_t>(offsetof(LayoutElement_t1785403678, ___m_FlexibleHeight_10)); }
	inline float get_m_FlexibleHeight_10() const { return ___m_FlexibleHeight_10; }
	inline float* get_address_of_m_FlexibleHeight_10() { return &___m_FlexibleHeight_10; }
	inline void set_m_FlexibleHeight_10(float value)
	{
		___m_FlexibleHeight_10 = value;
	}

	inline static int32_t get_offset_of_m_LayoutPriority_11() { return static_cast<int32_t>(offsetof(LayoutElement_t1785403678, ___m_LayoutPriority_11)); }
	inline int32_t get_m_LayoutPriority_11() const { return ___m_LayoutPriority_11; }
	inline int32_t* get_address_of_m_LayoutPriority_11() { return &___m_LayoutPriority_11; }
	inline void set_m_LayoutPriority_11(int32_t value)
	{
		___m_LayoutPriority_11 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LAYOUTELEMENT_T1785403678_H
#ifndef LAYOUTGROUP_T2436138090_H
#define LAYOUTGROUP_T2436138090_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.LayoutGroup
struct  LayoutGroup_t2436138090  : public UIBehaviour_t3495933518
{
public:
	// UnityEngine.RectOffset UnityEngine.UI.LayoutGroup::m_Padding
	RectOffset_t1369453676 * ___m_Padding_4;
	// UnityEngine.TextAnchor UnityEngine.UI.LayoutGroup::m_ChildAlignment
	int32_t ___m_ChildAlignment_5;
	// UnityEngine.RectTransform UnityEngine.UI.LayoutGroup::m_Rect
	RectTransform_t3704657025 * ___m_Rect_6;
	// UnityEngine.DrivenRectTransformTracker UnityEngine.UI.LayoutGroup::m_Tracker
	DrivenRectTransformTracker_t2562230146  ___m_Tracker_7;
	// UnityEngine.Vector2 UnityEngine.UI.LayoutGroup::m_TotalMinSize
	Vector2_t2156229523  ___m_TotalMinSize_8;
	// UnityEngine.Vector2 UnityEngine.UI.LayoutGroup::m_TotalPreferredSize
	Vector2_t2156229523  ___m_TotalPreferredSize_9;
	// UnityEngine.Vector2 UnityEngine.UI.LayoutGroup::m_TotalFlexibleSize
	Vector2_t2156229523  ___m_TotalFlexibleSize_10;
	// System.Collections.Generic.List`1<UnityEngine.RectTransform> UnityEngine.UI.LayoutGroup::m_RectChildren
	List_1_t881764471 * ___m_RectChildren_11;

public:
	inline static int32_t get_offset_of_m_Padding_4() { return static_cast<int32_t>(offsetof(LayoutGroup_t2436138090, ___m_Padding_4)); }
	inline RectOffset_t1369453676 * get_m_Padding_4() const { return ___m_Padding_4; }
	inline RectOffset_t1369453676 ** get_address_of_m_Padding_4() { return &___m_Padding_4; }
	inline void set_m_Padding_4(RectOffset_t1369453676 * value)
	{
		___m_Padding_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_Padding_4), value);
	}

	inline static int32_t get_offset_of_m_ChildAlignment_5() { return static_cast<int32_t>(offsetof(LayoutGroup_t2436138090, ___m_ChildAlignment_5)); }
	inline int32_t get_m_ChildAlignment_5() const { return ___m_ChildAlignment_5; }
	inline int32_t* get_address_of_m_ChildAlignment_5() { return &___m_ChildAlignment_5; }
	inline void set_m_ChildAlignment_5(int32_t value)
	{
		___m_ChildAlignment_5 = value;
	}

	inline static int32_t get_offset_of_m_Rect_6() { return static_cast<int32_t>(offsetof(LayoutGroup_t2436138090, ___m_Rect_6)); }
	inline RectTransform_t3704657025 * get_m_Rect_6() const { return ___m_Rect_6; }
	inline RectTransform_t3704657025 ** get_address_of_m_Rect_6() { return &___m_Rect_6; }
	inline void set_m_Rect_6(RectTransform_t3704657025 * value)
	{
		___m_Rect_6 = value;
		Il2CppCodeGenWriteBarrier((&___m_Rect_6), value);
	}

	inline static int32_t get_offset_of_m_Tracker_7() { return static_cast<int32_t>(offsetof(LayoutGroup_t2436138090, ___m_Tracker_7)); }
	inline DrivenRectTransformTracker_t2562230146  get_m_Tracker_7() const { return ___m_Tracker_7; }
	inline DrivenRectTransformTracker_t2562230146 * get_address_of_m_Tracker_7() { return &___m_Tracker_7; }
	inline void set_m_Tracker_7(DrivenRectTransformTracker_t2562230146  value)
	{
		___m_Tracker_7 = value;
	}

	inline static int32_t get_offset_of_m_TotalMinSize_8() { return static_cast<int32_t>(offsetof(LayoutGroup_t2436138090, ___m_TotalMinSize_8)); }
	inline Vector2_t2156229523  get_m_TotalMinSize_8() const { return ___m_TotalMinSize_8; }
	inline Vector2_t2156229523 * get_address_of_m_TotalMinSize_8() { return &___m_TotalMinSize_8; }
	inline void set_m_TotalMinSize_8(Vector2_t2156229523  value)
	{
		___m_TotalMinSize_8 = value;
	}

	inline static int32_t get_offset_of_m_TotalPreferredSize_9() { return static_cast<int32_t>(offsetof(LayoutGroup_t2436138090, ___m_TotalPreferredSize_9)); }
	inline Vector2_t2156229523  get_m_TotalPreferredSize_9() const { return ___m_TotalPreferredSize_9; }
	inline Vector2_t2156229523 * get_address_of_m_TotalPreferredSize_9() { return &___m_TotalPreferredSize_9; }
	inline void set_m_TotalPreferredSize_9(Vector2_t2156229523  value)
	{
		___m_TotalPreferredSize_9 = value;
	}

	inline static int32_t get_offset_of_m_TotalFlexibleSize_10() { return static_cast<int32_t>(offsetof(LayoutGroup_t2436138090, ___m_TotalFlexibleSize_10)); }
	inline Vector2_t2156229523  get_m_TotalFlexibleSize_10() const { return ___m_TotalFlexibleSize_10; }
	inline Vector2_t2156229523 * get_address_of_m_TotalFlexibleSize_10() { return &___m_TotalFlexibleSize_10; }
	inline void set_m_TotalFlexibleSize_10(Vector2_t2156229523  value)
	{
		___m_TotalFlexibleSize_10 = value;
	}

	inline static int32_t get_offset_of_m_RectChildren_11() { return static_cast<int32_t>(offsetof(LayoutGroup_t2436138090, ___m_RectChildren_11)); }
	inline List_1_t881764471 * get_m_RectChildren_11() const { return ___m_RectChildren_11; }
	inline List_1_t881764471 ** get_address_of_m_RectChildren_11() { return &___m_RectChildren_11; }
	inline void set_m_RectChildren_11(List_1_t881764471 * value)
	{
		___m_RectChildren_11 = value;
		Il2CppCodeGenWriteBarrier((&___m_RectChildren_11), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LAYOUTGROUP_T2436138090_H
#ifndef SCROLLRECT_T4137855814_H
#define SCROLLRECT_T4137855814_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.ScrollRect
struct  ScrollRect_t4137855814  : public UIBehaviour_t3495933518
{
public:
	// UnityEngine.RectTransform UnityEngine.UI.ScrollRect::m_Content
	RectTransform_t3704657025 * ___m_Content_4;
	// System.Boolean UnityEngine.UI.ScrollRect::m_Horizontal
	bool ___m_Horizontal_5;
	// System.Boolean UnityEngine.UI.ScrollRect::m_Vertical
	bool ___m_Vertical_6;
	// UnityEngine.UI.ScrollRect/MovementType UnityEngine.UI.ScrollRect::m_MovementType
	int32_t ___m_MovementType_7;
	// System.Single UnityEngine.UI.ScrollRect::m_Elasticity
	float ___m_Elasticity_8;
	// System.Boolean UnityEngine.UI.ScrollRect::m_Inertia
	bool ___m_Inertia_9;
	// System.Single UnityEngine.UI.ScrollRect::m_DecelerationRate
	float ___m_DecelerationRate_10;
	// System.Single UnityEngine.UI.ScrollRect::m_ScrollSensitivity
	float ___m_ScrollSensitivity_11;
	// UnityEngine.RectTransform UnityEngine.UI.ScrollRect::m_Viewport
	RectTransform_t3704657025 * ___m_Viewport_12;
	// UnityEngine.UI.Scrollbar UnityEngine.UI.ScrollRect::m_HorizontalScrollbar
	Scrollbar_t1494447233 * ___m_HorizontalScrollbar_13;
	// UnityEngine.UI.Scrollbar UnityEngine.UI.ScrollRect::m_VerticalScrollbar
	Scrollbar_t1494447233 * ___m_VerticalScrollbar_14;
	// UnityEngine.UI.ScrollRect/ScrollbarVisibility UnityEngine.UI.ScrollRect::m_HorizontalScrollbarVisibility
	int32_t ___m_HorizontalScrollbarVisibility_15;
	// UnityEngine.UI.ScrollRect/ScrollbarVisibility UnityEngine.UI.ScrollRect::m_VerticalScrollbarVisibility
	int32_t ___m_VerticalScrollbarVisibility_16;
	// System.Single UnityEngine.UI.ScrollRect::m_HorizontalScrollbarSpacing
	float ___m_HorizontalScrollbarSpacing_17;
	// System.Single UnityEngine.UI.ScrollRect::m_VerticalScrollbarSpacing
	float ___m_VerticalScrollbarSpacing_18;
	// UnityEngine.UI.ScrollRect/ScrollRectEvent UnityEngine.UI.ScrollRect::m_OnValueChanged
	ScrollRectEvent_t343079324 * ___m_OnValueChanged_19;
	// UnityEngine.Vector2 UnityEngine.UI.ScrollRect::m_PointerStartLocalCursor
	Vector2_t2156229523  ___m_PointerStartLocalCursor_20;
	// UnityEngine.Vector2 UnityEngine.UI.ScrollRect::m_ContentStartPosition
	Vector2_t2156229523  ___m_ContentStartPosition_21;
	// UnityEngine.RectTransform UnityEngine.UI.ScrollRect::m_ViewRect
	RectTransform_t3704657025 * ___m_ViewRect_22;
	// UnityEngine.Bounds UnityEngine.UI.ScrollRect::m_ContentBounds
	Bounds_t2266837910  ___m_ContentBounds_23;
	// UnityEngine.Bounds UnityEngine.UI.ScrollRect::m_ViewBounds
	Bounds_t2266837910  ___m_ViewBounds_24;
	// UnityEngine.Vector2 UnityEngine.UI.ScrollRect::m_Velocity
	Vector2_t2156229523  ___m_Velocity_25;
	// System.Boolean UnityEngine.UI.ScrollRect::m_Dragging
	bool ___m_Dragging_26;
	// UnityEngine.Vector2 UnityEngine.UI.ScrollRect::m_PrevPosition
	Vector2_t2156229523  ___m_PrevPosition_27;
	// UnityEngine.Bounds UnityEngine.UI.ScrollRect::m_PrevContentBounds
	Bounds_t2266837910  ___m_PrevContentBounds_28;
	// UnityEngine.Bounds UnityEngine.UI.ScrollRect::m_PrevViewBounds
	Bounds_t2266837910  ___m_PrevViewBounds_29;
	// System.Boolean UnityEngine.UI.ScrollRect::m_HasRebuiltLayout
	bool ___m_HasRebuiltLayout_30;
	// System.Boolean UnityEngine.UI.ScrollRect::m_HSliderExpand
	bool ___m_HSliderExpand_31;
	// System.Boolean UnityEngine.UI.ScrollRect::m_VSliderExpand
	bool ___m_VSliderExpand_32;
	// System.Single UnityEngine.UI.ScrollRect::m_HSliderHeight
	float ___m_HSliderHeight_33;
	// System.Single UnityEngine.UI.ScrollRect::m_VSliderWidth
	float ___m_VSliderWidth_34;
	// UnityEngine.RectTransform UnityEngine.UI.ScrollRect::m_Rect
	RectTransform_t3704657025 * ___m_Rect_35;
	// UnityEngine.RectTransform UnityEngine.UI.ScrollRect::m_HorizontalScrollbarRect
	RectTransform_t3704657025 * ___m_HorizontalScrollbarRect_36;
	// UnityEngine.RectTransform UnityEngine.UI.ScrollRect::m_VerticalScrollbarRect
	RectTransform_t3704657025 * ___m_VerticalScrollbarRect_37;
	// UnityEngine.DrivenRectTransformTracker UnityEngine.UI.ScrollRect::m_Tracker
	DrivenRectTransformTracker_t2562230146  ___m_Tracker_38;
	// UnityEngine.Vector3[] UnityEngine.UI.ScrollRect::m_Corners
	Vector3U5BU5D_t1718750761* ___m_Corners_39;

public:
	inline static int32_t get_offset_of_m_Content_4() { return static_cast<int32_t>(offsetof(ScrollRect_t4137855814, ___m_Content_4)); }
	inline RectTransform_t3704657025 * get_m_Content_4() const { return ___m_Content_4; }
	inline RectTransform_t3704657025 ** get_address_of_m_Content_4() { return &___m_Content_4; }
	inline void set_m_Content_4(RectTransform_t3704657025 * value)
	{
		___m_Content_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_Content_4), value);
	}

	inline static int32_t get_offset_of_m_Horizontal_5() { return static_cast<int32_t>(offsetof(ScrollRect_t4137855814, ___m_Horizontal_5)); }
	inline bool get_m_Horizontal_5() const { return ___m_Horizontal_5; }
	inline bool* get_address_of_m_Horizontal_5() { return &___m_Horizontal_5; }
	inline void set_m_Horizontal_5(bool value)
	{
		___m_Horizontal_5 = value;
	}

	inline static int32_t get_offset_of_m_Vertical_6() { return static_cast<int32_t>(offsetof(ScrollRect_t4137855814, ___m_Vertical_6)); }
	inline bool get_m_Vertical_6() const { return ___m_Vertical_6; }
	inline bool* get_address_of_m_Vertical_6() { return &___m_Vertical_6; }
	inline void set_m_Vertical_6(bool value)
	{
		___m_Vertical_6 = value;
	}

	inline static int32_t get_offset_of_m_MovementType_7() { return static_cast<int32_t>(offsetof(ScrollRect_t4137855814, ___m_MovementType_7)); }
	inline int32_t get_m_MovementType_7() const { return ___m_MovementType_7; }
	inline int32_t* get_address_of_m_MovementType_7() { return &___m_MovementType_7; }
	inline void set_m_MovementType_7(int32_t value)
	{
		___m_MovementType_7 = value;
	}

	inline static int32_t get_offset_of_m_Elasticity_8() { return static_cast<int32_t>(offsetof(ScrollRect_t4137855814, ___m_Elasticity_8)); }
	inline float get_m_Elasticity_8() const { return ___m_Elasticity_8; }
	inline float* get_address_of_m_Elasticity_8() { return &___m_Elasticity_8; }
	inline void set_m_Elasticity_8(float value)
	{
		___m_Elasticity_8 = value;
	}

	inline static int32_t get_offset_of_m_Inertia_9() { return static_cast<int32_t>(offsetof(ScrollRect_t4137855814, ___m_Inertia_9)); }
	inline bool get_m_Inertia_9() const { return ___m_Inertia_9; }
	inline bool* get_address_of_m_Inertia_9() { return &___m_Inertia_9; }
	inline void set_m_Inertia_9(bool value)
	{
		___m_Inertia_9 = value;
	}

	inline static int32_t get_offset_of_m_DecelerationRate_10() { return static_cast<int32_t>(offsetof(ScrollRect_t4137855814, ___m_DecelerationRate_10)); }
	inline float get_m_DecelerationRate_10() const { return ___m_DecelerationRate_10; }
	inline float* get_address_of_m_DecelerationRate_10() { return &___m_DecelerationRate_10; }
	inline void set_m_DecelerationRate_10(float value)
	{
		___m_DecelerationRate_10 = value;
	}

	inline static int32_t get_offset_of_m_ScrollSensitivity_11() { return static_cast<int32_t>(offsetof(ScrollRect_t4137855814, ___m_ScrollSensitivity_11)); }
	inline float get_m_ScrollSensitivity_11() const { return ___m_ScrollSensitivity_11; }
	inline float* get_address_of_m_ScrollSensitivity_11() { return &___m_ScrollSensitivity_11; }
	inline void set_m_ScrollSensitivity_11(float value)
	{
		___m_ScrollSensitivity_11 = value;
	}

	inline static int32_t get_offset_of_m_Viewport_12() { return static_cast<int32_t>(offsetof(ScrollRect_t4137855814, ___m_Viewport_12)); }
	inline RectTransform_t3704657025 * get_m_Viewport_12() const { return ___m_Viewport_12; }
	inline RectTransform_t3704657025 ** get_address_of_m_Viewport_12() { return &___m_Viewport_12; }
	inline void set_m_Viewport_12(RectTransform_t3704657025 * value)
	{
		___m_Viewport_12 = value;
		Il2CppCodeGenWriteBarrier((&___m_Viewport_12), value);
	}

	inline static int32_t get_offset_of_m_HorizontalScrollbar_13() { return static_cast<int32_t>(offsetof(ScrollRect_t4137855814, ___m_HorizontalScrollbar_13)); }
	inline Scrollbar_t1494447233 * get_m_HorizontalScrollbar_13() const { return ___m_HorizontalScrollbar_13; }
	inline Scrollbar_t1494447233 ** get_address_of_m_HorizontalScrollbar_13() { return &___m_HorizontalScrollbar_13; }
	inline void set_m_HorizontalScrollbar_13(Scrollbar_t1494447233 * value)
	{
		___m_HorizontalScrollbar_13 = value;
		Il2CppCodeGenWriteBarrier((&___m_HorizontalScrollbar_13), value);
	}

	inline static int32_t get_offset_of_m_VerticalScrollbar_14() { return static_cast<int32_t>(offsetof(ScrollRect_t4137855814, ___m_VerticalScrollbar_14)); }
	inline Scrollbar_t1494447233 * get_m_VerticalScrollbar_14() const { return ___m_VerticalScrollbar_14; }
	inline Scrollbar_t1494447233 ** get_address_of_m_VerticalScrollbar_14() { return &___m_VerticalScrollbar_14; }
	inline void set_m_VerticalScrollbar_14(Scrollbar_t1494447233 * value)
	{
		___m_VerticalScrollbar_14 = value;
		Il2CppCodeGenWriteBarrier((&___m_VerticalScrollbar_14), value);
	}

	inline static int32_t get_offset_of_m_HorizontalScrollbarVisibility_15() { return static_cast<int32_t>(offsetof(ScrollRect_t4137855814, ___m_HorizontalScrollbarVisibility_15)); }
	inline int32_t get_m_HorizontalScrollbarVisibility_15() const { return ___m_HorizontalScrollbarVisibility_15; }
	inline int32_t* get_address_of_m_HorizontalScrollbarVisibility_15() { return &___m_HorizontalScrollbarVisibility_15; }
	inline void set_m_HorizontalScrollbarVisibility_15(int32_t value)
	{
		___m_HorizontalScrollbarVisibility_15 = value;
	}

	inline static int32_t get_offset_of_m_VerticalScrollbarVisibility_16() { return static_cast<int32_t>(offsetof(ScrollRect_t4137855814, ___m_VerticalScrollbarVisibility_16)); }
	inline int32_t get_m_VerticalScrollbarVisibility_16() const { return ___m_VerticalScrollbarVisibility_16; }
	inline int32_t* get_address_of_m_VerticalScrollbarVisibility_16() { return &___m_VerticalScrollbarVisibility_16; }
	inline void set_m_VerticalScrollbarVisibility_16(int32_t value)
	{
		___m_VerticalScrollbarVisibility_16 = value;
	}

	inline static int32_t get_offset_of_m_HorizontalScrollbarSpacing_17() { return static_cast<int32_t>(offsetof(ScrollRect_t4137855814, ___m_HorizontalScrollbarSpacing_17)); }
	inline float get_m_HorizontalScrollbarSpacing_17() const { return ___m_HorizontalScrollbarSpacing_17; }
	inline float* get_address_of_m_HorizontalScrollbarSpacing_17() { return &___m_HorizontalScrollbarSpacing_17; }
	inline void set_m_HorizontalScrollbarSpacing_17(float value)
	{
		___m_HorizontalScrollbarSpacing_17 = value;
	}

	inline static int32_t get_offset_of_m_VerticalScrollbarSpacing_18() { return static_cast<int32_t>(offsetof(ScrollRect_t4137855814, ___m_VerticalScrollbarSpacing_18)); }
	inline float get_m_VerticalScrollbarSpacing_18() const { return ___m_VerticalScrollbarSpacing_18; }
	inline float* get_address_of_m_VerticalScrollbarSpacing_18() { return &___m_VerticalScrollbarSpacing_18; }
	inline void set_m_VerticalScrollbarSpacing_18(float value)
	{
		___m_VerticalScrollbarSpacing_18 = value;
	}

	inline static int32_t get_offset_of_m_OnValueChanged_19() { return static_cast<int32_t>(offsetof(ScrollRect_t4137855814, ___m_OnValueChanged_19)); }
	inline ScrollRectEvent_t343079324 * get_m_OnValueChanged_19() const { return ___m_OnValueChanged_19; }
	inline ScrollRectEvent_t343079324 ** get_address_of_m_OnValueChanged_19() { return &___m_OnValueChanged_19; }
	inline void set_m_OnValueChanged_19(ScrollRectEvent_t343079324 * value)
	{
		___m_OnValueChanged_19 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnValueChanged_19), value);
	}

	inline static int32_t get_offset_of_m_PointerStartLocalCursor_20() { return static_cast<int32_t>(offsetof(ScrollRect_t4137855814, ___m_PointerStartLocalCursor_20)); }
	inline Vector2_t2156229523  get_m_PointerStartLocalCursor_20() const { return ___m_PointerStartLocalCursor_20; }
	inline Vector2_t2156229523 * get_address_of_m_PointerStartLocalCursor_20() { return &___m_PointerStartLocalCursor_20; }
	inline void set_m_PointerStartLocalCursor_20(Vector2_t2156229523  value)
	{
		___m_PointerStartLocalCursor_20 = value;
	}

	inline static int32_t get_offset_of_m_ContentStartPosition_21() { return static_cast<int32_t>(offsetof(ScrollRect_t4137855814, ___m_ContentStartPosition_21)); }
	inline Vector2_t2156229523  get_m_ContentStartPosition_21() const { return ___m_ContentStartPosition_21; }
	inline Vector2_t2156229523 * get_address_of_m_ContentStartPosition_21() { return &___m_ContentStartPosition_21; }
	inline void set_m_ContentStartPosition_21(Vector2_t2156229523  value)
	{
		___m_ContentStartPosition_21 = value;
	}

	inline static int32_t get_offset_of_m_ViewRect_22() { return static_cast<int32_t>(offsetof(ScrollRect_t4137855814, ___m_ViewRect_22)); }
	inline RectTransform_t3704657025 * get_m_ViewRect_22() const { return ___m_ViewRect_22; }
	inline RectTransform_t3704657025 ** get_address_of_m_ViewRect_22() { return &___m_ViewRect_22; }
	inline void set_m_ViewRect_22(RectTransform_t3704657025 * value)
	{
		___m_ViewRect_22 = value;
		Il2CppCodeGenWriteBarrier((&___m_ViewRect_22), value);
	}

	inline static int32_t get_offset_of_m_ContentBounds_23() { return static_cast<int32_t>(offsetof(ScrollRect_t4137855814, ___m_ContentBounds_23)); }
	inline Bounds_t2266837910  get_m_ContentBounds_23() const { return ___m_ContentBounds_23; }
	inline Bounds_t2266837910 * get_address_of_m_ContentBounds_23() { return &___m_ContentBounds_23; }
	inline void set_m_ContentBounds_23(Bounds_t2266837910  value)
	{
		___m_ContentBounds_23 = value;
	}

	inline static int32_t get_offset_of_m_ViewBounds_24() { return static_cast<int32_t>(offsetof(ScrollRect_t4137855814, ___m_ViewBounds_24)); }
	inline Bounds_t2266837910  get_m_ViewBounds_24() const { return ___m_ViewBounds_24; }
	inline Bounds_t2266837910 * get_address_of_m_ViewBounds_24() { return &___m_ViewBounds_24; }
	inline void set_m_ViewBounds_24(Bounds_t2266837910  value)
	{
		___m_ViewBounds_24 = value;
	}

	inline static int32_t get_offset_of_m_Velocity_25() { return static_cast<int32_t>(offsetof(ScrollRect_t4137855814, ___m_Velocity_25)); }
	inline Vector2_t2156229523  get_m_Velocity_25() const { return ___m_Velocity_25; }
	inline Vector2_t2156229523 * get_address_of_m_Velocity_25() { return &___m_Velocity_25; }
	inline void set_m_Velocity_25(Vector2_t2156229523  value)
	{
		___m_Velocity_25 = value;
	}

	inline static int32_t get_offset_of_m_Dragging_26() { return static_cast<int32_t>(offsetof(ScrollRect_t4137855814, ___m_Dragging_26)); }
	inline bool get_m_Dragging_26() const { return ___m_Dragging_26; }
	inline bool* get_address_of_m_Dragging_26() { return &___m_Dragging_26; }
	inline void set_m_Dragging_26(bool value)
	{
		___m_Dragging_26 = value;
	}

	inline static int32_t get_offset_of_m_PrevPosition_27() { return static_cast<int32_t>(offsetof(ScrollRect_t4137855814, ___m_PrevPosition_27)); }
	inline Vector2_t2156229523  get_m_PrevPosition_27() const { return ___m_PrevPosition_27; }
	inline Vector2_t2156229523 * get_address_of_m_PrevPosition_27() { return &___m_PrevPosition_27; }
	inline void set_m_PrevPosition_27(Vector2_t2156229523  value)
	{
		___m_PrevPosition_27 = value;
	}

	inline static int32_t get_offset_of_m_PrevContentBounds_28() { return static_cast<int32_t>(offsetof(ScrollRect_t4137855814, ___m_PrevContentBounds_28)); }
	inline Bounds_t2266837910  get_m_PrevContentBounds_28() const { return ___m_PrevContentBounds_28; }
	inline Bounds_t2266837910 * get_address_of_m_PrevContentBounds_28() { return &___m_PrevContentBounds_28; }
	inline void set_m_PrevContentBounds_28(Bounds_t2266837910  value)
	{
		___m_PrevContentBounds_28 = value;
	}

	inline static int32_t get_offset_of_m_PrevViewBounds_29() { return static_cast<int32_t>(offsetof(ScrollRect_t4137855814, ___m_PrevViewBounds_29)); }
	inline Bounds_t2266837910  get_m_PrevViewBounds_29() const { return ___m_PrevViewBounds_29; }
	inline Bounds_t2266837910 * get_address_of_m_PrevViewBounds_29() { return &___m_PrevViewBounds_29; }
	inline void set_m_PrevViewBounds_29(Bounds_t2266837910  value)
	{
		___m_PrevViewBounds_29 = value;
	}

	inline static int32_t get_offset_of_m_HasRebuiltLayout_30() { return static_cast<int32_t>(offsetof(ScrollRect_t4137855814, ___m_HasRebuiltLayout_30)); }
	inline bool get_m_HasRebuiltLayout_30() const { return ___m_HasRebuiltLayout_30; }
	inline bool* get_address_of_m_HasRebuiltLayout_30() { return &___m_HasRebuiltLayout_30; }
	inline void set_m_HasRebuiltLayout_30(bool value)
	{
		___m_HasRebuiltLayout_30 = value;
	}

	inline static int32_t get_offset_of_m_HSliderExpand_31() { return static_cast<int32_t>(offsetof(ScrollRect_t4137855814, ___m_HSliderExpand_31)); }
	inline bool get_m_HSliderExpand_31() const { return ___m_HSliderExpand_31; }
	inline bool* get_address_of_m_HSliderExpand_31() { return &___m_HSliderExpand_31; }
	inline void set_m_HSliderExpand_31(bool value)
	{
		___m_HSliderExpand_31 = value;
	}

	inline static int32_t get_offset_of_m_VSliderExpand_32() { return static_cast<int32_t>(offsetof(ScrollRect_t4137855814, ___m_VSliderExpand_32)); }
	inline bool get_m_VSliderExpand_32() const { return ___m_VSliderExpand_32; }
	inline bool* get_address_of_m_VSliderExpand_32() { return &___m_VSliderExpand_32; }
	inline void set_m_VSliderExpand_32(bool value)
	{
		___m_VSliderExpand_32 = value;
	}

	inline static int32_t get_offset_of_m_HSliderHeight_33() { return static_cast<int32_t>(offsetof(ScrollRect_t4137855814, ___m_HSliderHeight_33)); }
	inline float get_m_HSliderHeight_33() const { return ___m_HSliderHeight_33; }
	inline float* get_address_of_m_HSliderHeight_33() { return &___m_HSliderHeight_33; }
	inline void set_m_HSliderHeight_33(float value)
	{
		___m_HSliderHeight_33 = value;
	}

	inline static int32_t get_offset_of_m_VSliderWidth_34() { return static_cast<int32_t>(offsetof(ScrollRect_t4137855814, ___m_VSliderWidth_34)); }
	inline float get_m_VSliderWidth_34() const { return ___m_VSliderWidth_34; }
	inline float* get_address_of_m_VSliderWidth_34() { return &___m_VSliderWidth_34; }
	inline void set_m_VSliderWidth_34(float value)
	{
		___m_VSliderWidth_34 = value;
	}

	inline static int32_t get_offset_of_m_Rect_35() { return static_cast<int32_t>(offsetof(ScrollRect_t4137855814, ___m_Rect_35)); }
	inline RectTransform_t3704657025 * get_m_Rect_35() const { return ___m_Rect_35; }
	inline RectTransform_t3704657025 ** get_address_of_m_Rect_35() { return &___m_Rect_35; }
	inline void set_m_Rect_35(RectTransform_t3704657025 * value)
	{
		___m_Rect_35 = value;
		Il2CppCodeGenWriteBarrier((&___m_Rect_35), value);
	}

	inline static int32_t get_offset_of_m_HorizontalScrollbarRect_36() { return static_cast<int32_t>(offsetof(ScrollRect_t4137855814, ___m_HorizontalScrollbarRect_36)); }
	inline RectTransform_t3704657025 * get_m_HorizontalScrollbarRect_36() const { return ___m_HorizontalScrollbarRect_36; }
	inline RectTransform_t3704657025 ** get_address_of_m_HorizontalScrollbarRect_36() { return &___m_HorizontalScrollbarRect_36; }
	inline void set_m_HorizontalScrollbarRect_36(RectTransform_t3704657025 * value)
	{
		___m_HorizontalScrollbarRect_36 = value;
		Il2CppCodeGenWriteBarrier((&___m_HorizontalScrollbarRect_36), value);
	}

	inline static int32_t get_offset_of_m_VerticalScrollbarRect_37() { return static_cast<int32_t>(offsetof(ScrollRect_t4137855814, ___m_VerticalScrollbarRect_37)); }
	inline RectTransform_t3704657025 * get_m_VerticalScrollbarRect_37() const { return ___m_VerticalScrollbarRect_37; }
	inline RectTransform_t3704657025 ** get_address_of_m_VerticalScrollbarRect_37() { return &___m_VerticalScrollbarRect_37; }
	inline void set_m_VerticalScrollbarRect_37(RectTransform_t3704657025 * value)
	{
		___m_VerticalScrollbarRect_37 = value;
		Il2CppCodeGenWriteBarrier((&___m_VerticalScrollbarRect_37), value);
	}

	inline static int32_t get_offset_of_m_Tracker_38() { return static_cast<int32_t>(offsetof(ScrollRect_t4137855814, ___m_Tracker_38)); }
	inline DrivenRectTransformTracker_t2562230146  get_m_Tracker_38() const { return ___m_Tracker_38; }
	inline DrivenRectTransformTracker_t2562230146 * get_address_of_m_Tracker_38() { return &___m_Tracker_38; }
	inline void set_m_Tracker_38(DrivenRectTransformTracker_t2562230146  value)
	{
		___m_Tracker_38 = value;
	}

	inline static int32_t get_offset_of_m_Corners_39() { return static_cast<int32_t>(offsetof(ScrollRect_t4137855814, ___m_Corners_39)); }
	inline Vector3U5BU5D_t1718750761* get_m_Corners_39() const { return ___m_Corners_39; }
	inline Vector3U5BU5D_t1718750761** get_address_of_m_Corners_39() { return &___m_Corners_39; }
	inline void set_m_Corners_39(Vector3U5BU5D_t1718750761* value)
	{
		___m_Corners_39 = value;
		Il2CppCodeGenWriteBarrier((&___m_Corners_39), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SCROLLRECT_T4137855814_H
#ifndef SELECTABLE_T3250028441_H
#define SELECTABLE_T3250028441_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Selectable
struct  Selectable_t3250028441  : public UIBehaviour_t3495933518
{
public:
	// UnityEngine.UI.Navigation UnityEngine.UI.Selectable::m_Navigation
	Navigation_t3049316579  ___m_Navigation_5;
	// UnityEngine.UI.Selectable/Transition UnityEngine.UI.Selectable::m_Transition
	int32_t ___m_Transition_6;
	// UnityEngine.UI.ColorBlock UnityEngine.UI.Selectable::m_Colors
	ColorBlock_t2139031574  ___m_Colors_7;
	// UnityEngine.UI.SpriteState UnityEngine.UI.Selectable::m_SpriteState
	SpriteState_t1362986479  ___m_SpriteState_8;
	// UnityEngine.UI.AnimationTriggers UnityEngine.UI.Selectable::m_AnimationTriggers
	AnimationTriggers_t2532145056 * ___m_AnimationTriggers_9;
	// System.Boolean UnityEngine.UI.Selectable::m_Interactable
	bool ___m_Interactable_10;
	// UnityEngine.UI.Graphic UnityEngine.UI.Selectable::m_TargetGraphic
	Graphic_t1660335611 * ___m_TargetGraphic_11;
	// System.Boolean UnityEngine.UI.Selectable::m_GroupsAllowInteraction
	bool ___m_GroupsAllowInteraction_12;
	// UnityEngine.UI.Selectable/SelectionState UnityEngine.UI.Selectable::m_CurrentSelectionState
	int32_t ___m_CurrentSelectionState_13;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerInside>k__BackingField
	bool ___U3CisPointerInsideU3Ek__BackingField_14;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerDown>k__BackingField
	bool ___U3CisPointerDownU3Ek__BackingField_15;
	// System.Boolean UnityEngine.UI.Selectable::<hasSelection>k__BackingField
	bool ___U3ChasSelectionU3Ek__BackingField_16;
	// System.Collections.Generic.List`1<UnityEngine.CanvasGroup> UnityEngine.UI.Selectable::m_CanvasGroupCache
	List_1_t1260619206 * ___m_CanvasGroupCache_17;

public:
	inline static int32_t get_offset_of_m_Navigation_5() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___m_Navigation_5)); }
	inline Navigation_t3049316579  get_m_Navigation_5() const { return ___m_Navigation_5; }
	inline Navigation_t3049316579 * get_address_of_m_Navigation_5() { return &___m_Navigation_5; }
	inline void set_m_Navigation_5(Navigation_t3049316579  value)
	{
		___m_Navigation_5 = value;
	}

	inline static int32_t get_offset_of_m_Transition_6() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___m_Transition_6)); }
	inline int32_t get_m_Transition_6() const { return ___m_Transition_6; }
	inline int32_t* get_address_of_m_Transition_6() { return &___m_Transition_6; }
	inline void set_m_Transition_6(int32_t value)
	{
		___m_Transition_6 = value;
	}

	inline static int32_t get_offset_of_m_Colors_7() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___m_Colors_7)); }
	inline ColorBlock_t2139031574  get_m_Colors_7() const { return ___m_Colors_7; }
	inline ColorBlock_t2139031574 * get_address_of_m_Colors_7() { return &___m_Colors_7; }
	inline void set_m_Colors_7(ColorBlock_t2139031574  value)
	{
		___m_Colors_7 = value;
	}

	inline static int32_t get_offset_of_m_SpriteState_8() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___m_SpriteState_8)); }
	inline SpriteState_t1362986479  get_m_SpriteState_8() const { return ___m_SpriteState_8; }
	inline SpriteState_t1362986479 * get_address_of_m_SpriteState_8() { return &___m_SpriteState_8; }
	inline void set_m_SpriteState_8(SpriteState_t1362986479  value)
	{
		___m_SpriteState_8 = value;
	}

	inline static int32_t get_offset_of_m_AnimationTriggers_9() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___m_AnimationTriggers_9)); }
	inline AnimationTriggers_t2532145056 * get_m_AnimationTriggers_9() const { return ___m_AnimationTriggers_9; }
	inline AnimationTriggers_t2532145056 ** get_address_of_m_AnimationTriggers_9() { return &___m_AnimationTriggers_9; }
	inline void set_m_AnimationTriggers_9(AnimationTriggers_t2532145056 * value)
	{
		___m_AnimationTriggers_9 = value;
		Il2CppCodeGenWriteBarrier((&___m_AnimationTriggers_9), value);
	}

	inline static int32_t get_offset_of_m_Interactable_10() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___m_Interactable_10)); }
	inline bool get_m_Interactable_10() const { return ___m_Interactable_10; }
	inline bool* get_address_of_m_Interactable_10() { return &___m_Interactable_10; }
	inline void set_m_Interactable_10(bool value)
	{
		___m_Interactable_10 = value;
	}

	inline static int32_t get_offset_of_m_TargetGraphic_11() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___m_TargetGraphic_11)); }
	inline Graphic_t1660335611 * get_m_TargetGraphic_11() const { return ___m_TargetGraphic_11; }
	inline Graphic_t1660335611 ** get_address_of_m_TargetGraphic_11() { return &___m_TargetGraphic_11; }
	inline void set_m_TargetGraphic_11(Graphic_t1660335611 * value)
	{
		___m_TargetGraphic_11 = value;
		Il2CppCodeGenWriteBarrier((&___m_TargetGraphic_11), value);
	}

	inline static int32_t get_offset_of_m_GroupsAllowInteraction_12() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___m_GroupsAllowInteraction_12)); }
	inline bool get_m_GroupsAllowInteraction_12() const { return ___m_GroupsAllowInteraction_12; }
	inline bool* get_address_of_m_GroupsAllowInteraction_12() { return &___m_GroupsAllowInteraction_12; }
	inline void set_m_GroupsAllowInteraction_12(bool value)
	{
		___m_GroupsAllowInteraction_12 = value;
	}

	inline static int32_t get_offset_of_m_CurrentSelectionState_13() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___m_CurrentSelectionState_13)); }
	inline int32_t get_m_CurrentSelectionState_13() const { return ___m_CurrentSelectionState_13; }
	inline int32_t* get_address_of_m_CurrentSelectionState_13() { return &___m_CurrentSelectionState_13; }
	inline void set_m_CurrentSelectionState_13(int32_t value)
	{
		___m_CurrentSelectionState_13 = value;
	}

	inline static int32_t get_offset_of_U3CisPointerInsideU3Ek__BackingField_14() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___U3CisPointerInsideU3Ek__BackingField_14)); }
	inline bool get_U3CisPointerInsideU3Ek__BackingField_14() const { return ___U3CisPointerInsideU3Ek__BackingField_14; }
	inline bool* get_address_of_U3CisPointerInsideU3Ek__BackingField_14() { return &___U3CisPointerInsideU3Ek__BackingField_14; }
	inline void set_U3CisPointerInsideU3Ek__BackingField_14(bool value)
	{
		___U3CisPointerInsideU3Ek__BackingField_14 = value;
	}

	inline static int32_t get_offset_of_U3CisPointerDownU3Ek__BackingField_15() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___U3CisPointerDownU3Ek__BackingField_15)); }
	inline bool get_U3CisPointerDownU3Ek__BackingField_15() const { return ___U3CisPointerDownU3Ek__BackingField_15; }
	inline bool* get_address_of_U3CisPointerDownU3Ek__BackingField_15() { return &___U3CisPointerDownU3Ek__BackingField_15; }
	inline void set_U3CisPointerDownU3Ek__BackingField_15(bool value)
	{
		___U3CisPointerDownU3Ek__BackingField_15 = value;
	}

	inline static int32_t get_offset_of_U3ChasSelectionU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___U3ChasSelectionU3Ek__BackingField_16)); }
	inline bool get_U3ChasSelectionU3Ek__BackingField_16() const { return ___U3ChasSelectionU3Ek__BackingField_16; }
	inline bool* get_address_of_U3ChasSelectionU3Ek__BackingField_16() { return &___U3ChasSelectionU3Ek__BackingField_16; }
	inline void set_U3ChasSelectionU3Ek__BackingField_16(bool value)
	{
		___U3ChasSelectionU3Ek__BackingField_16 = value;
	}

	inline static int32_t get_offset_of_m_CanvasGroupCache_17() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___m_CanvasGroupCache_17)); }
	inline List_1_t1260619206 * get_m_CanvasGroupCache_17() const { return ___m_CanvasGroupCache_17; }
	inline List_1_t1260619206 ** get_address_of_m_CanvasGroupCache_17() { return &___m_CanvasGroupCache_17; }
	inline void set_m_CanvasGroupCache_17(List_1_t1260619206 * value)
	{
		___m_CanvasGroupCache_17 = value;
		Il2CppCodeGenWriteBarrier((&___m_CanvasGroupCache_17), value);
	}
};

struct Selectable_t3250028441_StaticFields
{
public:
	// System.Collections.Generic.List`1<UnityEngine.UI.Selectable> UnityEngine.UI.Selectable::s_List
	List_1_t427135887 * ___s_List_4;

public:
	inline static int32_t get_offset_of_s_List_4() { return static_cast<int32_t>(offsetof(Selectable_t3250028441_StaticFields, ___s_List_4)); }
	inline List_1_t427135887 * get_s_List_4() const { return ___s_List_4; }
	inline List_1_t427135887 ** get_address_of_s_List_4() { return &___s_List_4; }
	inline void set_s_List_4(List_1_t427135887 * value)
	{
		___s_List_4 = value;
		Il2CppCodeGenWriteBarrier((&___s_List_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SELECTABLE_T3250028441_H
#ifndef TOGGLEGROUP_T123837990_H
#define TOGGLEGROUP_T123837990_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.ToggleGroup
struct  ToggleGroup_t123837990  : public UIBehaviour_t3495933518
{
public:
	// System.Boolean UnityEngine.UI.ToggleGroup::m_AllowSwitchOff
	bool ___m_AllowSwitchOff_4;
	// System.Collections.Generic.List`1<UnityEngine.UI.Toggle> UnityEngine.UI.ToggleGroup::m_Toggles
	List_1_t4207451803 * ___m_Toggles_5;

public:
	inline static int32_t get_offset_of_m_AllowSwitchOff_4() { return static_cast<int32_t>(offsetof(ToggleGroup_t123837990, ___m_AllowSwitchOff_4)); }
	inline bool get_m_AllowSwitchOff_4() const { return ___m_AllowSwitchOff_4; }
	inline bool* get_address_of_m_AllowSwitchOff_4() { return &___m_AllowSwitchOff_4; }
	inline void set_m_AllowSwitchOff_4(bool value)
	{
		___m_AllowSwitchOff_4 = value;
	}

	inline static int32_t get_offset_of_m_Toggles_5() { return static_cast<int32_t>(offsetof(ToggleGroup_t123837990, ___m_Toggles_5)); }
	inline List_1_t4207451803 * get_m_Toggles_5() const { return ___m_Toggles_5; }
	inline List_1_t4207451803 ** get_address_of_m_Toggles_5() { return &___m_Toggles_5; }
	inline void set_m_Toggles_5(List_1_t4207451803 * value)
	{
		___m_Toggles_5 = value;
		Il2CppCodeGenWriteBarrier((&___m_Toggles_5), value);
	}
};

struct ToggleGroup_t123837990_StaticFields
{
public:
	// System.Predicate`1<UnityEngine.UI.Toggle> UnityEngine.UI.ToggleGroup::<>f__am$cache0
	Predicate_1_t3560671185 * ___U3CU3Ef__amU24cache0_6;
	// System.Func`2<UnityEngine.UI.Toggle,System.Boolean> UnityEngine.UI.ToggleGroup::<>f__am$cache1
	Func_2_t3446800538 * ___U3CU3Ef__amU24cache1_7;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cache0_6() { return static_cast<int32_t>(offsetof(ToggleGroup_t123837990_StaticFields, ___U3CU3Ef__amU24cache0_6)); }
	inline Predicate_1_t3560671185 * get_U3CU3Ef__amU24cache0_6() const { return ___U3CU3Ef__amU24cache0_6; }
	inline Predicate_1_t3560671185 ** get_address_of_U3CU3Ef__amU24cache0_6() { return &___U3CU3Ef__amU24cache0_6; }
	inline void set_U3CU3Ef__amU24cache0_6(Predicate_1_t3560671185 * value)
	{
		___U3CU3Ef__amU24cache0_6 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cache0_6), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache1_7() { return static_cast<int32_t>(offsetof(ToggleGroup_t123837990_StaticFields, ___U3CU3Ef__amU24cache1_7)); }
	inline Func_2_t3446800538 * get_U3CU3Ef__amU24cache1_7() const { return ___U3CU3Ef__amU24cache1_7; }
	inline Func_2_t3446800538 ** get_address_of_U3CU3Ef__amU24cache1_7() { return &___U3CU3Ef__amU24cache1_7; }
	inline void set_U3CU3Ef__amU24cache1_7(Func_2_t3446800538 * value)
	{
		___U3CU3Ef__amU24cache1_7 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cache1_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TOGGLEGROUP_T123837990_H
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
#ifndef PREVIEWMODELTURNOFFBEHAVIOUR_T804227973_H
#define PREVIEWMODELTURNOFFBEHAVIOUR_T804227973_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.PreviewModelTurnOffBehaviour
struct  PreviewModelTurnOffBehaviour_t804227973  : public VuforiaMonoBehaviour_t1150221792
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PREVIEWMODELTURNOFFBEHAVIOUR_T804227973_H
#ifndef GRIDLAYOUTGROUP_T3046220461_H
#define GRIDLAYOUTGROUP_T3046220461_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.GridLayoutGroup
struct  GridLayoutGroup_t3046220461  : public LayoutGroup_t2436138090
{
public:
	// UnityEngine.UI.GridLayoutGroup/Corner UnityEngine.UI.GridLayoutGroup::m_StartCorner
	int32_t ___m_StartCorner_12;
	// UnityEngine.UI.GridLayoutGroup/Axis UnityEngine.UI.GridLayoutGroup::m_StartAxis
	int32_t ___m_StartAxis_13;
	// UnityEngine.Vector2 UnityEngine.UI.GridLayoutGroup::m_CellSize
	Vector2_t2156229523  ___m_CellSize_14;
	// UnityEngine.Vector2 UnityEngine.UI.GridLayoutGroup::m_Spacing
	Vector2_t2156229523  ___m_Spacing_15;
	// UnityEngine.UI.GridLayoutGroup/Constraint UnityEngine.UI.GridLayoutGroup::m_Constraint
	int32_t ___m_Constraint_16;
	// System.Int32 UnityEngine.UI.GridLayoutGroup::m_ConstraintCount
	int32_t ___m_ConstraintCount_17;

public:
	inline static int32_t get_offset_of_m_StartCorner_12() { return static_cast<int32_t>(offsetof(GridLayoutGroup_t3046220461, ___m_StartCorner_12)); }
	inline int32_t get_m_StartCorner_12() const { return ___m_StartCorner_12; }
	inline int32_t* get_address_of_m_StartCorner_12() { return &___m_StartCorner_12; }
	inline void set_m_StartCorner_12(int32_t value)
	{
		___m_StartCorner_12 = value;
	}

	inline static int32_t get_offset_of_m_StartAxis_13() { return static_cast<int32_t>(offsetof(GridLayoutGroup_t3046220461, ___m_StartAxis_13)); }
	inline int32_t get_m_StartAxis_13() const { return ___m_StartAxis_13; }
	inline int32_t* get_address_of_m_StartAxis_13() { return &___m_StartAxis_13; }
	inline void set_m_StartAxis_13(int32_t value)
	{
		___m_StartAxis_13 = value;
	}

	inline static int32_t get_offset_of_m_CellSize_14() { return static_cast<int32_t>(offsetof(GridLayoutGroup_t3046220461, ___m_CellSize_14)); }
	inline Vector2_t2156229523  get_m_CellSize_14() const { return ___m_CellSize_14; }
	inline Vector2_t2156229523 * get_address_of_m_CellSize_14() { return &___m_CellSize_14; }
	inline void set_m_CellSize_14(Vector2_t2156229523  value)
	{
		___m_CellSize_14 = value;
	}

	inline static int32_t get_offset_of_m_Spacing_15() { return static_cast<int32_t>(offsetof(GridLayoutGroup_t3046220461, ___m_Spacing_15)); }
	inline Vector2_t2156229523  get_m_Spacing_15() const { return ___m_Spacing_15; }
	inline Vector2_t2156229523 * get_address_of_m_Spacing_15() { return &___m_Spacing_15; }
	inline void set_m_Spacing_15(Vector2_t2156229523  value)
	{
		___m_Spacing_15 = value;
	}

	inline static int32_t get_offset_of_m_Constraint_16() { return static_cast<int32_t>(offsetof(GridLayoutGroup_t3046220461, ___m_Constraint_16)); }
	inline int32_t get_m_Constraint_16() const { return ___m_Constraint_16; }
	inline int32_t* get_address_of_m_Constraint_16() { return &___m_Constraint_16; }
	inline void set_m_Constraint_16(int32_t value)
	{
		___m_Constraint_16 = value;
	}

	inline static int32_t get_offset_of_m_ConstraintCount_17() { return static_cast<int32_t>(offsetof(GridLayoutGroup_t3046220461, ___m_ConstraintCount_17)); }
	inline int32_t get_m_ConstraintCount_17() const { return ___m_ConstraintCount_17; }
	inline int32_t* get_address_of_m_ConstraintCount_17() { return &___m_ConstraintCount_17; }
	inline void set_m_ConstraintCount_17(int32_t value)
	{
		___m_ConstraintCount_17 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GRIDLAYOUTGROUP_T3046220461_H
#ifndef HORIZONTALORVERTICALLAYOUTGROUP_T729725570_H
#define HORIZONTALORVERTICALLAYOUTGROUP_T729725570_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.HorizontalOrVerticalLayoutGroup
struct  HorizontalOrVerticalLayoutGroup_t729725570  : public LayoutGroup_t2436138090
{
public:
	// System.Single UnityEngine.UI.HorizontalOrVerticalLayoutGroup::m_Spacing
	float ___m_Spacing_12;
	// System.Boolean UnityEngine.UI.HorizontalOrVerticalLayoutGroup::m_ChildForceExpandWidth
	bool ___m_ChildForceExpandWidth_13;
	// System.Boolean UnityEngine.UI.HorizontalOrVerticalLayoutGroup::m_ChildForceExpandHeight
	bool ___m_ChildForceExpandHeight_14;
	// System.Boolean UnityEngine.UI.HorizontalOrVerticalLayoutGroup::m_ChildControlWidth
	bool ___m_ChildControlWidth_15;
	// System.Boolean UnityEngine.UI.HorizontalOrVerticalLayoutGroup::m_ChildControlHeight
	bool ___m_ChildControlHeight_16;

public:
	inline static int32_t get_offset_of_m_Spacing_12() { return static_cast<int32_t>(offsetof(HorizontalOrVerticalLayoutGroup_t729725570, ___m_Spacing_12)); }
	inline float get_m_Spacing_12() const { return ___m_Spacing_12; }
	inline float* get_address_of_m_Spacing_12() { return &___m_Spacing_12; }
	inline void set_m_Spacing_12(float value)
	{
		___m_Spacing_12 = value;
	}

	inline static int32_t get_offset_of_m_ChildForceExpandWidth_13() { return static_cast<int32_t>(offsetof(HorizontalOrVerticalLayoutGroup_t729725570, ___m_ChildForceExpandWidth_13)); }
	inline bool get_m_ChildForceExpandWidth_13() const { return ___m_ChildForceExpandWidth_13; }
	inline bool* get_address_of_m_ChildForceExpandWidth_13() { return &___m_ChildForceExpandWidth_13; }
	inline void set_m_ChildForceExpandWidth_13(bool value)
	{
		___m_ChildForceExpandWidth_13 = value;
	}

	inline static int32_t get_offset_of_m_ChildForceExpandHeight_14() { return static_cast<int32_t>(offsetof(HorizontalOrVerticalLayoutGroup_t729725570, ___m_ChildForceExpandHeight_14)); }
	inline bool get_m_ChildForceExpandHeight_14() const { return ___m_ChildForceExpandHeight_14; }
	inline bool* get_address_of_m_ChildForceExpandHeight_14() { return &___m_ChildForceExpandHeight_14; }
	inline void set_m_ChildForceExpandHeight_14(bool value)
	{
		___m_ChildForceExpandHeight_14 = value;
	}

	inline static int32_t get_offset_of_m_ChildControlWidth_15() { return static_cast<int32_t>(offsetof(HorizontalOrVerticalLayoutGroup_t729725570, ___m_ChildControlWidth_15)); }
	inline bool get_m_ChildControlWidth_15() const { return ___m_ChildControlWidth_15; }
	inline bool* get_address_of_m_ChildControlWidth_15() { return &___m_ChildControlWidth_15; }
	inline void set_m_ChildControlWidth_15(bool value)
	{
		___m_ChildControlWidth_15 = value;
	}

	inline static int32_t get_offset_of_m_ChildControlHeight_16() { return static_cast<int32_t>(offsetof(HorizontalOrVerticalLayoutGroup_t729725570, ___m_ChildControlHeight_16)); }
	inline bool get_m_ChildControlHeight_16() const { return ___m_ChildControlHeight_16; }
	inline bool* get_address_of_m_ChildControlHeight_16() { return &___m_ChildControlHeight_16; }
	inline void set_m_ChildControlHeight_16(bool value)
	{
		___m_ChildControlHeight_16 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HORIZONTALORVERTICALLAYOUTGROUP_T729725570_H
#ifndef MASKABLEGRAPHIC_T3839221559_H
#define MASKABLEGRAPHIC_T3839221559_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.MaskableGraphic
struct  MaskableGraphic_t3839221559  : public Graphic_t1660335611
{
public:
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_21;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t340375123 * ___m_MaskMaterial_22;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_t3474889437 * ___m_ParentMask_23;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_24;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_25;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t3661388177 * ___m_OnCullStateChanged_26;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_27;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_28;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_t1718750761* ___m_Corners_29;

public:
	inline static int32_t get_offset_of_m_ShouldRecalculateStencil_21() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_ShouldRecalculateStencil_21)); }
	inline bool get_m_ShouldRecalculateStencil_21() const { return ___m_ShouldRecalculateStencil_21; }
	inline bool* get_address_of_m_ShouldRecalculateStencil_21() { return &___m_ShouldRecalculateStencil_21; }
	inline void set_m_ShouldRecalculateStencil_21(bool value)
	{
		___m_ShouldRecalculateStencil_21 = value;
	}

	inline static int32_t get_offset_of_m_MaskMaterial_22() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_MaskMaterial_22)); }
	inline Material_t340375123 * get_m_MaskMaterial_22() const { return ___m_MaskMaterial_22; }
	inline Material_t340375123 ** get_address_of_m_MaskMaterial_22() { return &___m_MaskMaterial_22; }
	inline void set_m_MaskMaterial_22(Material_t340375123 * value)
	{
		___m_MaskMaterial_22 = value;
		Il2CppCodeGenWriteBarrier((&___m_MaskMaterial_22), value);
	}

	inline static int32_t get_offset_of_m_ParentMask_23() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_ParentMask_23)); }
	inline RectMask2D_t3474889437 * get_m_ParentMask_23() const { return ___m_ParentMask_23; }
	inline RectMask2D_t3474889437 ** get_address_of_m_ParentMask_23() { return &___m_ParentMask_23; }
	inline void set_m_ParentMask_23(RectMask2D_t3474889437 * value)
	{
		___m_ParentMask_23 = value;
		Il2CppCodeGenWriteBarrier((&___m_ParentMask_23), value);
	}

	inline static int32_t get_offset_of_m_Maskable_24() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_Maskable_24)); }
	inline bool get_m_Maskable_24() const { return ___m_Maskable_24; }
	inline bool* get_address_of_m_Maskable_24() { return &___m_Maskable_24; }
	inline void set_m_Maskable_24(bool value)
	{
		___m_Maskable_24 = value;
	}

	inline static int32_t get_offset_of_m_IncludeForMasking_25() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_IncludeForMasking_25)); }
	inline bool get_m_IncludeForMasking_25() const { return ___m_IncludeForMasking_25; }
	inline bool* get_address_of_m_IncludeForMasking_25() { return &___m_IncludeForMasking_25; }
	inline void set_m_IncludeForMasking_25(bool value)
	{
		___m_IncludeForMasking_25 = value;
	}

	inline static int32_t get_offset_of_m_OnCullStateChanged_26() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_OnCullStateChanged_26)); }
	inline CullStateChangedEvent_t3661388177 * get_m_OnCullStateChanged_26() const { return ___m_OnCullStateChanged_26; }
	inline CullStateChangedEvent_t3661388177 ** get_address_of_m_OnCullStateChanged_26() { return &___m_OnCullStateChanged_26; }
	inline void set_m_OnCullStateChanged_26(CullStateChangedEvent_t3661388177 * value)
	{
		___m_OnCullStateChanged_26 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnCullStateChanged_26), value);
	}

	inline static int32_t get_offset_of_m_ShouldRecalculate_27() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_ShouldRecalculate_27)); }
	inline bool get_m_ShouldRecalculate_27() const { return ___m_ShouldRecalculate_27; }
	inline bool* get_address_of_m_ShouldRecalculate_27() { return &___m_ShouldRecalculate_27; }
	inline void set_m_ShouldRecalculate_27(bool value)
	{
		___m_ShouldRecalculate_27 = value;
	}

	inline static int32_t get_offset_of_m_StencilValue_28() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_StencilValue_28)); }
	inline int32_t get_m_StencilValue_28() const { return ___m_StencilValue_28; }
	inline int32_t* get_address_of_m_StencilValue_28() { return &___m_StencilValue_28; }
	inline void set_m_StencilValue_28(int32_t value)
	{
		___m_StencilValue_28 = value;
	}

	inline static int32_t get_offset_of_m_Corners_29() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_Corners_29)); }
	inline Vector3U5BU5D_t1718750761* get_m_Corners_29() const { return ___m_Corners_29; }
	inline Vector3U5BU5D_t1718750761** get_address_of_m_Corners_29() { return &___m_Corners_29; }
	inline void set_m_Corners_29(Vector3U5BU5D_t1718750761* value)
	{
		___m_Corners_29 = value;
		Il2CppCodeGenWriteBarrier((&___m_Corners_29), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MASKABLEGRAPHIC_T3839221559_H
#ifndef POSITIONASUV1_T3991086357_H
#define POSITIONASUV1_T3991086357_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.PositionAsUV1
struct  PositionAsUV1_t3991086357  : public BaseMeshEffect_t2440176439
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // POSITIONASUV1_T3991086357_H
#ifndef SHADOW_T773074319_H
#define SHADOW_T773074319_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Shadow
struct  Shadow_t773074319  : public BaseMeshEffect_t2440176439
{
public:
	// UnityEngine.Color UnityEngine.UI.Shadow::m_EffectColor
	Color_t2555686324  ___m_EffectColor_5;
	// UnityEngine.Vector2 UnityEngine.UI.Shadow::m_EffectDistance
	Vector2_t2156229523  ___m_EffectDistance_6;
	// System.Boolean UnityEngine.UI.Shadow::m_UseGraphicAlpha
	bool ___m_UseGraphicAlpha_7;

public:
	inline static int32_t get_offset_of_m_EffectColor_5() { return static_cast<int32_t>(offsetof(Shadow_t773074319, ___m_EffectColor_5)); }
	inline Color_t2555686324  get_m_EffectColor_5() const { return ___m_EffectColor_5; }
	inline Color_t2555686324 * get_address_of_m_EffectColor_5() { return &___m_EffectColor_5; }
	inline void set_m_EffectColor_5(Color_t2555686324  value)
	{
		___m_EffectColor_5 = value;
	}

	inline static int32_t get_offset_of_m_EffectDistance_6() { return static_cast<int32_t>(offsetof(Shadow_t773074319, ___m_EffectDistance_6)); }
	inline Vector2_t2156229523  get_m_EffectDistance_6() const { return ___m_EffectDistance_6; }
	inline Vector2_t2156229523 * get_address_of_m_EffectDistance_6() { return &___m_EffectDistance_6; }
	inline void set_m_EffectDistance_6(Vector2_t2156229523  value)
	{
		___m_EffectDistance_6 = value;
	}

	inline static int32_t get_offset_of_m_UseGraphicAlpha_7() { return static_cast<int32_t>(offsetof(Shadow_t773074319, ___m_UseGraphicAlpha_7)); }
	inline bool get_m_UseGraphicAlpha_7() const { return ___m_UseGraphicAlpha_7; }
	inline bool* get_address_of_m_UseGraphicAlpha_7() { return &___m_UseGraphicAlpha_7; }
	inline void set_m_UseGraphicAlpha_7(bool value)
	{
		___m_UseGraphicAlpha_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SHADOW_T773074319_H
#ifndef SLIDER_T3903728902_H
#define SLIDER_T3903728902_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Slider
struct  Slider_t3903728902  : public Selectable_t3250028441
{
public:
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_FillRect
	RectTransform_t3704657025 * ___m_FillRect_18;
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_HandleRect
	RectTransform_t3704657025 * ___m_HandleRect_19;
	// UnityEngine.UI.Slider/Direction UnityEngine.UI.Slider::m_Direction
	int32_t ___m_Direction_20;
	// System.Single UnityEngine.UI.Slider::m_MinValue
	float ___m_MinValue_21;
	// System.Single UnityEngine.UI.Slider::m_MaxValue
	float ___m_MaxValue_22;
	// System.Boolean UnityEngine.UI.Slider::m_WholeNumbers
	bool ___m_WholeNumbers_23;
	// System.Single UnityEngine.UI.Slider::m_Value
	float ___m_Value_24;
	// UnityEngine.UI.Slider/SliderEvent UnityEngine.UI.Slider::m_OnValueChanged
	SliderEvent_t3180273144 * ___m_OnValueChanged_25;
	// UnityEngine.UI.Image UnityEngine.UI.Slider::m_FillImage
	Image_t2670269651 * ___m_FillImage_26;
	// UnityEngine.Transform UnityEngine.UI.Slider::m_FillTransform
	Transform_t3600365921 * ___m_FillTransform_27;
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_FillContainerRect
	RectTransform_t3704657025 * ___m_FillContainerRect_28;
	// UnityEngine.Transform UnityEngine.UI.Slider::m_HandleTransform
	Transform_t3600365921 * ___m_HandleTransform_29;
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_HandleContainerRect
	RectTransform_t3704657025 * ___m_HandleContainerRect_30;
	// UnityEngine.Vector2 UnityEngine.UI.Slider::m_Offset
	Vector2_t2156229523  ___m_Offset_31;
	// UnityEngine.DrivenRectTransformTracker UnityEngine.UI.Slider::m_Tracker
	DrivenRectTransformTracker_t2562230146  ___m_Tracker_32;

public:
	inline static int32_t get_offset_of_m_FillRect_18() { return static_cast<int32_t>(offsetof(Slider_t3903728902, ___m_FillRect_18)); }
	inline RectTransform_t3704657025 * get_m_FillRect_18() const { return ___m_FillRect_18; }
	inline RectTransform_t3704657025 ** get_address_of_m_FillRect_18() { return &___m_FillRect_18; }
	inline void set_m_FillRect_18(RectTransform_t3704657025 * value)
	{
		___m_FillRect_18 = value;
		Il2CppCodeGenWriteBarrier((&___m_FillRect_18), value);
	}

	inline static int32_t get_offset_of_m_HandleRect_19() { return static_cast<int32_t>(offsetof(Slider_t3903728902, ___m_HandleRect_19)); }
	inline RectTransform_t3704657025 * get_m_HandleRect_19() const { return ___m_HandleRect_19; }
	inline RectTransform_t3704657025 ** get_address_of_m_HandleRect_19() { return &___m_HandleRect_19; }
	inline void set_m_HandleRect_19(RectTransform_t3704657025 * value)
	{
		___m_HandleRect_19 = value;
		Il2CppCodeGenWriteBarrier((&___m_HandleRect_19), value);
	}

	inline static int32_t get_offset_of_m_Direction_20() { return static_cast<int32_t>(offsetof(Slider_t3903728902, ___m_Direction_20)); }
	inline int32_t get_m_Direction_20() const { return ___m_Direction_20; }
	inline int32_t* get_address_of_m_Direction_20() { return &___m_Direction_20; }
	inline void set_m_Direction_20(int32_t value)
	{
		___m_Direction_20 = value;
	}

	inline static int32_t get_offset_of_m_MinValue_21() { return static_cast<int32_t>(offsetof(Slider_t3903728902, ___m_MinValue_21)); }
	inline float get_m_MinValue_21() const { return ___m_MinValue_21; }
	inline float* get_address_of_m_MinValue_21() { return &___m_MinValue_21; }
	inline void set_m_MinValue_21(float value)
	{
		___m_MinValue_21 = value;
	}

	inline static int32_t get_offset_of_m_MaxValue_22() { return static_cast<int32_t>(offsetof(Slider_t3903728902, ___m_MaxValue_22)); }
	inline float get_m_MaxValue_22() const { return ___m_MaxValue_22; }
	inline float* get_address_of_m_MaxValue_22() { return &___m_MaxValue_22; }
	inline void set_m_MaxValue_22(float value)
	{
		___m_MaxValue_22 = value;
	}

	inline static int32_t get_offset_of_m_WholeNumbers_23() { return static_cast<int32_t>(offsetof(Slider_t3903728902, ___m_WholeNumbers_23)); }
	inline bool get_m_WholeNumbers_23() const { return ___m_WholeNumbers_23; }
	inline bool* get_address_of_m_WholeNumbers_23() { return &___m_WholeNumbers_23; }
	inline void set_m_WholeNumbers_23(bool value)
	{
		___m_WholeNumbers_23 = value;
	}

	inline static int32_t get_offset_of_m_Value_24() { return static_cast<int32_t>(offsetof(Slider_t3903728902, ___m_Value_24)); }
	inline float get_m_Value_24() const { return ___m_Value_24; }
	inline float* get_address_of_m_Value_24() { return &___m_Value_24; }
	inline void set_m_Value_24(float value)
	{
		___m_Value_24 = value;
	}

	inline static int32_t get_offset_of_m_OnValueChanged_25() { return static_cast<int32_t>(offsetof(Slider_t3903728902, ___m_OnValueChanged_25)); }
	inline SliderEvent_t3180273144 * get_m_OnValueChanged_25() const { return ___m_OnValueChanged_25; }
	inline SliderEvent_t3180273144 ** get_address_of_m_OnValueChanged_25() { return &___m_OnValueChanged_25; }
	inline void set_m_OnValueChanged_25(SliderEvent_t3180273144 * value)
	{
		___m_OnValueChanged_25 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnValueChanged_25), value);
	}

	inline static int32_t get_offset_of_m_FillImage_26() { return static_cast<int32_t>(offsetof(Slider_t3903728902, ___m_FillImage_26)); }
	inline Image_t2670269651 * get_m_FillImage_26() const { return ___m_FillImage_26; }
	inline Image_t2670269651 ** get_address_of_m_FillImage_26() { return &___m_FillImage_26; }
	inline void set_m_FillImage_26(Image_t2670269651 * value)
	{
		___m_FillImage_26 = value;
		Il2CppCodeGenWriteBarrier((&___m_FillImage_26), value);
	}

	inline static int32_t get_offset_of_m_FillTransform_27() { return static_cast<int32_t>(offsetof(Slider_t3903728902, ___m_FillTransform_27)); }
	inline Transform_t3600365921 * get_m_FillTransform_27() const { return ___m_FillTransform_27; }
	inline Transform_t3600365921 ** get_address_of_m_FillTransform_27() { return &___m_FillTransform_27; }
	inline void set_m_FillTransform_27(Transform_t3600365921 * value)
	{
		___m_FillTransform_27 = value;
		Il2CppCodeGenWriteBarrier((&___m_FillTransform_27), value);
	}

	inline static int32_t get_offset_of_m_FillContainerRect_28() { return static_cast<int32_t>(offsetof(Slider_t3903728902, ___m_FillContainerRect_28)); }
	inline RectTransform_t3704657025 * get_m_FillContainerRect_28() const { return ___m_FillContainerRect_28; }
	inline RectTransform_t3704657025 ** get_address_of_m_FillContainerRect_28() { return &___m_FillContainerRect_28; }
	inline void set_m_FillContainerRect_28(RectTransform_t3704657025 * value)
	{
		___m_FillContainerRect_28 = value;
		Il2CppCodeGenWriteBarrier((&___m_FillContainerRect_28), value);
	}

	inline static int32_t get_offset_of_m_HandleTransform_29() { return static_cast<int32_t>(offsetof(Slider_t3903728902, ___m_HandleTransform_29)); }
	inline Transform_t3600365921 * get_m_HandleTransform_29() const { return ___m_HandleTransform_29; }
	inline Transform_t3600365921 ** get_address_of_m_HandleTransform_29() { return &___m_HandleTransform_29; }
	inline void set_m_HandleTransform_29(Transform_t3600365921 * value)
	{
		___m_HandleTransform_29 = value;
		Il2CppCodeGenWriteBarrier((&___m_HandleTransform_29), value);
	}

	inline static int32_t get_offset_of_m_HandleContainerRect_30() { return static_cast<int32_t>(offsetof(Slider_t3903728902, ___m_HandleContainerRect_30)); }
	inline RectTransform_t3704657025 * get_m_HandleContainerRect_30() const { return ___m_HandleContainerRect_30; }
	inline RectTransform_t3704657025 ** get_address_of_m_HandleContainerRect_30() { return &___m_HandleContainerRect_30; }
	inline void set_m_HandleContainerRect_30(RectTransform_t3704657025 * value)
	{
		___m_HandleContainerRect_30 = value;
		Il2CppCodeGenWriteBarrier((&___m_HandleContainerRect_30), value);
	}

	inline static int32_t get_offset_of_m_Offset_31() { return static_cast<int32_t>(offsetof(Slider_t3903728902, ___m_Offset_31)); }
	inline Vector2_t2156229523  get_m_Offset_31() const { return ___m_Offset_31; }
	inline Vector2_t2156229523 * get_address_of_m_Offset_31() { return &___m_Offset_31; }
	inline void set_m_Offset_31(Vector2_t2156229523  value)
	{
		___m_Offset_31 = value;
	}

	inline static int32_t get_offset_of_m_Tracker_32() { return static_cast<int32_t>(offsetof(Slider_t3903728902, ___m_Tracker_32)); }
	inline DrivenRectTransformTracker_t2562230146  get_m_Tracker_32() const { return ___m_Tracker_32; }
	inline DrivenRectTransformTracker_t2562230146 * get_address_of_m_Tracker_32() { return &___m_Tracker_32; }
	inline void set_m_Tracker_32(DrivenRectTransformTracker_t2562230146  value)
	{
		___m_Tracker_32 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SLIDER_T3903728902_H
#ifndef TOGGLE_T2735377061_H
#define TOGGLE_T2735377061_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Toggle
struct  Toggle_t2735377061  : public Selectable_t3250028441
{
public:
	// UnityEngine.UI.Toggle/ToggleTransition UnityEngine.UI.Toggle::toggleTransition
	int32_t ___toggleTransition_18;
	// UnityEngine.UI.Graphic UnityEngine.UI.Toggle::graphic
	Graphic_t1660335611 * ___graphic_19;
	// UnityEngine.UI.ToggleGroup UnityEngine.UI.Toggle::m_Group
	ToggleGroup_t123837990 * ___m_Group_20;
	// UnityEngine.UI.Toggle/ToggleEvent UnityEngine.UI.Toggle::onValueChanged
	ToggleEvent_t1873685584 * ___onValueChanged_21;
	// System.Boolean UnityEngine.UI.Toggle::m_IsOn
	bool ___m_IsOn_22;

public:
	inline static int32_t get_offset_of_toggleTransition_18() { return static_cast<int32_t>(offsetof(Toggle_t2735377061, ___toggleTransition_18)); }
	inline int32_t get_toggleTransition_18() const { return ___toggleTransition_18; }
	inline int32_t* get_address_of_toggleTransition_18() { return &___toggleTransition_18; }
	inline void set_toggleTransition_18(int32_t value)
	{
		___toggleTransition_18 = value;
	}

	inline static int32_t get_offset_of_graphic_19() { return static_cast<int32_t>(offsetof(Toggle_t2735377061, ___graphic_19)); }
	inline Graphic_t1660335611 * get_graphic_19() const { return ___graphic_19; }
	inline Graphic_t1660335611 ** get_address_of_graphic_19() { return &___graphic_19; }
	inline void set_graphic_19(Graphic_t1660335611 * value)
	{
		___graphic_19 = value;
		Il2CppCodeGenWriteBarrier((&___graphic_19), value);
	}

	inline static int32_t get_offset_of_m_Group_20() { return static_cast<int32_t>(offsetof(Toggle_t2735377061, ___m_Group_20)); }
	inline ToggleGroup_t123837990 * get_m_Group_20() const { return ___m_Group_20; }
	inline ToggleGroup_t123837990 ** get_address_of_m_Group_20() { return &___m_Group_20; }
	inline void set_m_Group_20(ToggleGroup_t123837990 * value)
	{
		___m_Group_20 = value;
		Il2CppCodeGenWriteBarrier((&___m_Group_20), value);
	}

	inline static int32_t get_offset_of_onValueChanged_21() { return static_cast<int32_t>(offsetof(Toggle_t2735377061, ___onValueChanged_21)); }
	inline ToggleEvent_t1873685584 * get_onValueChanged_21() const { return ___onValueChanged_21; }
	inline ToggleEvent_t1873685584 ** get_address_of_onValueChanged_21() { return &___onValueChanged_21; }
	inline void set_onValueChanged_21(ToggleEvent_t1873685584 * value)
	{
		___onValueChanged_21 = value;
		Il2CppCodeGenWriteBarrier((&___onValueChanged_21), value);
	}

	inline static int32_t get_offset_of_m_IsOn_22() { return static_cast<int32_t>(offsetof(Toggle_t2735377061, ___m_IsOn_22)); }
	inline bool get_m_IsOn_22() const { return ___m_IsOn_22; }
	inline bool* get_address_of_m_IsOn_22() { return &___m_IsOn_22; }
	inline void set_m_IsOn_22(bool value)
	{
		___m_IsOn_22 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TOGGLE_T2735377061_H
#ifndef HORIZONTALLAYOUTGROUP_T2586782146_H
#define HORIZONTALLAYOUTGROUP_T2586782146_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.HorizontalLayoutGroup
struct  HorizontalLayoutGroup_t2586782146  : public HorizontalOrVerticalLayoutGroup_t729725570
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HORIZONTALLAYOUTGROUP_T2586782146_H
#ifndef OUTLINE_T2536100125_H
#define OUTLINE_T2536100125_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Outline
struct  Outline_t2536100125  : public Shadow_t773074319
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OUTLINE_T2536100125_H
#ifndef TEXT_T1901882714_H
#define TEXT_T1901882714_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Text
struct  Text_t1901882714  : public MaskableGraphic_t3839221559
{
public:
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_t746620069 * ___m_FontData_30;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_31;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_t3211863866 * ___m_TextCache_32;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_t3211863866 * ___m_TextCacheForLayout_33;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_35;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_t1981460040* ___m_TempVerts_36;

public:
	inline static int32_t get_offset_of_m_FontData_30() { return static_cast<int32_t>(offsetof(Text_t1901882714, ___m_FontData_30)); }
	inline FontData_t746620069 * get_m_FontData_30() const { return ___m_FontData_30; }
	inline FontData_t746620069 ** get_address_of_m_FontData_30() { return &___m_FontData_30; }
	inline void set_m_FontData_30(FontData_t746620069 * value)
	{
		___m_FontData_30 = value;
		Il2CppCodeGenWriteBarrier((&___m_FontData_30), value);
	}

	inline static int32_t get_offset_of_m_Text_31() { return static_cast<int32_t>(offsetof(Text_t1901882714, ___m_Text_31)); }
	inline String_t* get_m_Text_31() const { return ___m_Text_31; }
	inline String_t** get_address_of_m_Text_31() { return &___m_Text_31; }
	inline void set_m_Text_31(String_t* value)
	{
		___m_Text_31 = value;
		Il2CppCodeGenWriteBarrier((&___m_Text_31), value);
	}

	inline static int32_t get_offset_of_m_TextCache_32() { return static_cast<int32_t>(offsetof(Text_t1901882714, ___m_TextCache_32)); }
	inline TextGenerator_t3211863866 * get_m_TextCache_32() const { return ___m_TextCache_32; }
	inline TextGenerator_t3211863866 ** get_address_of_m_TextCache_32() { return &___m_TextCache_32; }
	inline void set_m_TextCache_32(TextGenerator_t3211863866 * value)
	{
		___m_TextCache_32 = value;
		Il2CppCodeGenWriteBarrier((&___m_TextCache_32), value);
	}

	inline static int32_t get_offset_of_m_TextCacheForLayout_33() { return static_cast<int32_t>(offsetof(Text_t1901882714, ___m_TextCacheForLayout_33)); }
	inline TextGenerator_t3211863866 * get_m_TextCacheForLayout_33() const { return ___m_TextCacheForLayout_33; }
	inline TextGenerator_t3211863866 ** get_address_of_m_TextCacheForLayout_33() { return &___m_TextCacheForLayout_33; }
	inline void set_m_TextCacheForLayout_33(TextGenerator_t3211863866 * value)
	{
		___m_TextCacheForLayout_33 = value;
		Il2CppCodeGenWriteBarrier((&___m_TextCacheForLayout_33), value);
	}

	inline static int32_t get_offset_of_m_DisableFontTextureRebuiltCallback_35() { return static_cast<int32_t>(offsetof(Text_t1901882714, ___m_DisableFontTextureRebuiltCallback_35)); }
	inline bool get_m_DisableFontTextureRebuiltCallback_35() const { return ___m_DisableFontTextureRebuiltCallback_35; }
	inline bool* get_address_of_m_DisableFontTextureRebuiltCallback_35() { return &___m_DisableFontTextureRebuiltCallback_35; }
	inline void set_m_DisableFontTextureRebuiltCallback_35(bool value)
	{
		___m_DisableFontTextureRebuiltCallback_35 = value;
	}

	inline static int32_t get_offset_of_m_TempVerts_36() { return static_cast<int32_t>(offsetof(Text_t1901882714, ___m_TempVerts_36)); }
	inline UIVertexU5BU5D_t1981460040* get_m_TempVerts_36() const { return ___m_TempVerts_36; }
	inline UIVertexU5BU5D_t1981460040** get_address_of_m_TempVerts_36() { return &___m_TempVerts_36; }
	inline void set_m_TempVerts_36(UIVertexU5BU5D_t1981460040* value)
	{
		___m_TempVerts_36 = value;
		Il2CppCodeGenWriteBarrier((&___m_TempVerts_36), value);
	}
};

struct Text_t1901882714_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_t340375123 * ___s_DefaultText_34;

public:
	inline static int32_t get_offset_of_s_DefaultText_34() { return static_cast<int32_t>(offsetof(Text_t1901882714_StaticFields, ___s_DefaultText_34)); }
	inline Material_t340375123 * get_s_DefaultText_34() const { return ___s_DefaultText_34; }
	inline Material_t340375123 ** get_address_of_s_DefaultText_34() { return &___s_DefaultText_34; }
	inline void set_s_DefaultText_34(Material_t340375123 * value)
	{
		___s_DefaultText_34 = value;
		Il2CppCodeGenWriteBarrier((&___s_DefaultText_34), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEXT_T1901882714_H
#ifndef VERTICALLAYOUTGROUP_T923838031_H
#define VERTICALLAYOUTGROUP_T923838031_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.VerticalLayoutGroup
struct  VerticalLayoutGroup_t923838031  : public HorizontalOrVerticalLayoutGroup_t729725570
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VERTICALLAYOUTGROUP_T923838031_H





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3700 = { sizeof (ScrollEvent_t149898510), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3701 = { sizeof (Axis_t1697763317)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable3701[3] = 
{
	Axis_t1697763317::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3702 = { sizeof (U3CClickRepeatU3Ec__Iterator0_t3442648935), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3702[5] = 
{
	U3CClickRepeatU3Ec__Iterator0_t3442648935::get_offset_of_eventData_0(),
	U3CClickRepeatU3Ec__Iterator0_t3442648935::get_offset_of_U24this_1(),
	U3CClickRepeatU3Ec__Iterator0_t3442648935::get_offset_of_U24current_2(),
	U3CClickRepeatU3Ec__Iterator0_t3442648935::get_offset_of_U24disposing_3(),
	U3CClickRepeatU3Ec__Iterator0_t3442648935::get_offset_of_U24PC_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3703 = { sizeof (ScrollRect_t4137855814), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3703[36] = 
{
	ScrollRect_t4137855814::get_offset_of_m_Content_4(),
	ScrollRect_t4137855814::get_offset_of_m_Horizontal_5(),
	ScrollRect_t4137855814::get_offset_of_m_Vertical_6(),
	ScrollRect_t4137855814::get_offset_of_m_MovementType_7(),
	ScrollRect_t4137855814::get_offset_of_m_Elasticity_8(),
	ScrollRect_t4137855814::get_offset_of_m_Inertia_9(),
	ScrollRect_t4137855814::get_offset_of_m_DecelerationRate_10(),
	ScrollRect_t4137855814::get_offset_of_m_ScrollSensitivity_11(),
	ScrollRect_t4137855814::get_offset_of_m_Viewport_12(),
	ScrollRect_t4137855814::get_offset_of_m_HorizontalScrollbar_13(),
	ScrollRect_t4137855814::get_offset_of_m_VerticalScrollbar_14(),
	ScrollRect_t4137855814::get_offset_of_m_HorizontalScrollbarVisibility_15(),
	ScrollRect_t4137855814::get_offset_of_m_VerticalScrollbarVisibility_16(),
	ScrollRect_t4137855814::get_offset_of_m_HorizontalScrollbarSpacing_17(),
	ScrollRect_t4137855814::get_offset_of_m_VerticalScrollbarSpacing_18(),
	ScrollRect_t4137855814::get_offset_of_m_OnValueChanged_19(),
	ScrollRect_t4137855814::get_offset_of_m_PointerStartLocalCursor_20(),
	ScrollRect_t4137855814::get_offset_of_m_ContentStartPosition_21(),
	ScrollRect_t4137855814::get_offset_of_m_ViewRect_22(),
	ScrollRect_t4137855814::get_offset_of_m_ContentBounds_23(),
	ScrollRect_t4137855814::get_offset_of_m_ViewBounds_24(),
	ScrollRect_t4137855814::get_offset_of_m_Velocity_25(),
	ScrollRect_t4137855814::get_offset_of_m_Dragging_26(),
	ScrollRect_t4137855814::get_offset_of_m_PrevPosition_27(),
	ScrollRect_t4137855814::get_offset_of_m_PrevContentBounds_28(),
	ScrollRect_t4137855814::get_offset_of_m_PrevViewBounds_29(),
	ScrollRect_t4137855814::get_offset_of_m_HasRebuiltLayout_30(),
	ScrollRect_t4137855814::get_offset_of_m_HSliderExpand_31(),
	ScrollRect_t4137855814::get_offset_of_m_VSliderExpand_32(),
	ScrollRect_t4137855814::get_offset_of_m_HSliderHeight_33(),
	ScrollRect_t4137855814::get_offset_of_m_VSliderWidth_34(),
	ScrollRect_t4137855814::get_offset_of_m_Rect_35(),
	ScrollRect_t4137855814::get_offset_of_m_HorizontalScrollbarRect_36(),
	ScrollRect_t4137855814::get_offset_of_m_VerticalScrollbarRect_37(),
	ScrollRect_t4137855814::get_offset_of_m_Tracker_38(),
	ScrollRect_t4137855814::get_offset_of_m_Corners_39(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3704 = { sizeof (MovementType_t4072922106)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable3704[4] = 
{
	MovementType_t4072922106::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3705 = { sizeof (ScrollbarVisibility_t705693775)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable3705[4] = 
{
	ScrollbarVisibility_t705693775::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3706 = { sizeof (ScrollRectEvent_t343079324), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3707 = { sizeof (Selectable_t3250028441), -1, sizeof(Selectable_t3250028441_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable3707[14] = 
{
	Selectable_t3250028441_StaticFields::get_offset_of_s_List_4(),
	Selectable_t3250028441::get_offset_of_m_Navigation_5(),
	Selectable_t3250028441::get_offset_of_m_Transition_6(),
	Selectable_t3250028441::get_offset_of_m_Colors_7(),
	Selectable_t3250028441::get_offset_of_m_SpriteState_8(),
	Selectable_t3250028441::get_offset_of_m_AnimationTriggers_9(),
	Selectable_t3250028441::get_offset_of_m_Interactable_10(),
	Selectable_t3250028441::get_offset_of_m_TargetGraphic_11(),
	Selectable_t3250028441::get_offset_of_m_GroupsAllowInteraction_12(),
	Selectable_t3250028441::get_offset_of_m_CurrentSelectionState_13(),
	Selectable_t3250028441::get_offset_of_U3CisPointerInsideU3Ek__BackingField_14(),
	Selectable_t3250028441::get_offset_of_U3CisPointerDownU3Ek__BackingField_15(),
	Selectable_t3250028441::get_offset_of_U3ChasSelectionU3Ek__BackingField_16(),
	Selectable_t3250028441::get_offset_of_m_CanvasGroupCache_17(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3708 = { sizeof (Transition_t1769908631)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable3708[5] = 
{
	Transition_t1769908631::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3709 = { sizeof (SelectionState_t2656606514)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable3709[5] = 
{
	SelectionState_t2656606514::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3710 = { sizeof (SetPropertyUtility_t3359423571), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3711 = { sizeof (Slider_t3903728902), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3711[15] = 
{
	Slider_t3903728902::get_offset_of_m_FillRect_18(),
	Slider_t3903728902::get_offset_of_m_HandleRect_19(),
	Slider_t3903728902::get_offset_of_m_Direction_20(),
	Slider_t3903728902::get_offset_of_m_MinValue_21(),
	Slider_t3903728902::get_offset_of_m_MaxValue_22(),
	Slider_t3903728902::get_offset_of_m_WholeNumbers_23(),
	Slider_t3903728902::get_offset_of_m_Value_24(),
	Slider_t3903728902::get_offset_of_m_OnValueChanged_25(),
	Slider_t3903728902::get_offset_of_m_FillImage_26(),
	Slider_t3903728902::get_offset_of_m_FillTransform_27(),
	Slider_t3903728902::get_offset_of_m_FillContainerRect_28(),
	Slider_t3903728902::get_offset_of_m_HandleTransform_29(),
	Slider_t3903728902::get_offset_of_m_HandleContainerRect_30(),
	Slider_t3903728902::get_offset_of_m_Offset_31(),
	Slider_t3903728902::get_offset_of_m_Tracker_32(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3712 = { sizeof (Direction_t337909235)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable3712[5] = 
{
	Direction_t337909235::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3713 = { sizeof (SliderEvent_t3180273144), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3714 = { sizeof (Axis_t809944411)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable3714[3] = 
{
	Axis_t809944411::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3715 = { sizeof (SpriteState_t1362986479)+ sizeof (RuntimeObject), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3715[3] = 
{
	SpriteState_t1362986479::get_offset_of_m_HighlightedSprite_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	SpriteState_t1362986479::get_offset_of_m_PressedSprite_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	SpriteState_t1362986479::get_offset_of_m_DisabledSprite_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3716 = { sizeof (StencilMaterial_t3850132571), -1, sizeof(StencilMaterial_t3850132571_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable3716[1] = 
{
	StencilMaterial_t3850132571_StaticFields::get_offset_of_m_List_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3717 = { sizeof (MatEntry_t2957107092), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3717[10] = 
{
	MatEntry_t2957107092::get_offset_of_baseMat_0(),
	MatEntry_t2957107092::get_offset_of_customMat_1(),
	MatEntry_t2957107092::get_offset_of_count_2(),
	MatEntry_t2957107092::get_offset_of_stencilId_3(),
	MatEntry_t2957107092::get_offset_of_operation_4(),
	MatEntry_t2957107092::get_offset_of_compareFunction_5(),
	MatEntry_t2957107092::get_offset_of_readMask_6(),
	MatEntry_t2957107092::get_offset_of_writeMask_7(),
	MatEntry_t2957107092::get_offset_of_useAlphaClip_8(),
	MatEntry_t2957107092::get_offset_of_colorMask_9(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3718 = { sizeof (Text_t1901882714), -1, sizeof(Text_t1901882714_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable3718[7] = 
{
	Text_t1901882714::get_offset_of_m_FontData_30(),
	Text_t1901882714::get_offset_of_m_Text_31(),
	Text_t1901882714::get_offset_of_m_TextCache_32(),
	Text_t1901882714::get_offset_of_m_TextCacheForLayout_33(),
	Text_t1901882714_StaticFields::get_offset_of_s_DefaultText_34(),
	Text_t1901882714::get_offset_of_m_DisableFontTextureRebuiltCallback_35(),
	Text_t1901882714::get_offset_of_m_TempVerts_36(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3719 = { sizeof (Toggle_t2735377061), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3719[5] = 
{
	Toggle_t2735377061::get_offset_of_toggleTransition_18(),
	Toggle_t2735377061::get_offset_of_graphic_19(),
	Toggle_t2735377061::get_offset_of_m_Group_20(),
	Toggle_t2735377061::get_offset_of_onValueChanged_21(),
	Toggle_t2735377061::get_offset_of_m_IsOn_22(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3720 = { sizeof (ToggleTransition_t3587297765)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable3720[3] = 
{
	ToggleTransition_t3587297765::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3721 = { sizeof (ToggleEvent_t1873685584), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3722 = { sizeof (ToggleGroup_t123837990), -1, sizeof(ToggleGroup_t123837990_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable3722[4] = 
{
	ToggleGroup_t123837990::get_offset_of_m_AllowSwitchOff_4(),
	ToggleGroup_t123837990::get_offset_of_m_Toggles_5(),
	ToggleGroup_t123837990_StaticFields::get_offset_of_U3CU3Ef__amU24cache0_6(),
	ToggleGroup_t123837990_StaticFields::get_offset_of_U3CU3Ef__amU24cache1_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3723 = { sizeof (ClipperRegistry_t2428680409), -1, sizeof(ClipperRegistry_t2428680409_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable3723[2] = 
{
	ClipperRegistry_t2428680409_StaticFields::get_offset_of_s_Instance_0(),
	ClipperRegistry_t2428680409::get_offset_of_m_Clippers_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3724 = { sizeof (Clipping_t312708592), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3725 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3726 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3727 = { sizeof (RectangularVertexClipper_t626611136), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3727[2] = 
{
	RectangularVertexClipper_t626611136::get_offset_of_m_WorldCorners_0(),
	RectangularVertexClipper_t626611136::get_offset_of_m_CanvasCorners_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3728 = { sizeof (AspectRatioFitter_t3312407083), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3728[5] = 
{
	AspectRatioFitter_t3312407083::get_offset_of_m_AspectMode_4(),
	AspectRatioFitter_t3312407083::get_offset_of_m_AspectRatio_5(),
	AspectRatioFitter_t3312407083::get_offset_of_m_Rect_6(),
	AspectRatioFitter_t3312407083::get_offset_of_m_DelayedSetDirty_7(),
	AspectRatioFitter_t3312407083::get_offset_of_m_Tracker_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3729 = { sizeof (AspectMode_t3417192999)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable3729[6] = 
{
	AspectMode_t3417192999::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3730 = { sizeof (CanvasScaler_t2767979955), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3730[14] = 
{
	CanvasScaler_t2767979955::get_offset_of_m_UiScaleMode_4(),
	CanvasScaler_t2767979955::get_offset_of_m_ReferencePixelsPerUnit_5(),
	CanvasScaler_t2767979955::get_offset_of_m_ScaleFactor_6(),
	CanvasScaler_t2767979955::get_offset_of_m_ReferenceResolution_7(),
	CanvasScaler_t2767979955::get_offset_of_m_ScreenMatchMode_8(),
	CanvasScaler_t2767979955::get_offset_of_m_MatchWidthOrHeight_9(),
	0,
	CanvasScaler_t2767979955::get_offset_of_m_PhysicalUnit_11(),
	CanvasScaler_t2767979955::get_offset_of_m_FallbackScreenDPI_12(),
	CanvasScaler_t2767979955::get_offset_of_m_DefaultSpriteDPI_13(),
	CanvasScaler_t2767979955::get_offset_of_m_DynamicPixelsPerUnit_14(),
	CanvasScaler_t2767979955::get_offset_of_m_Canvas_15(),
	CanvasScaler_t2767979955::get_offset_of_m_PrevScaleFactor_16(),
	CanvasScaler_t2767979955::get_offset_of_m_PrevReferencePixelsPerUnit_17(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3731 = { sizeof (ScaleMode_t2604066427)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable3731[4] = 
{
	ScaleMode_t2604066427::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3732 = { sizeof (ScreenMatchMode_t3675272090)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable3732[4] = 
{
	ScreenMatchMode_t3675272090::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3733 = { sizeof (Unit_t2218508340)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable3733[6] = 
{
	Unit_t2218508340::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3734 = { sizeof (ContentSizeFitter_t3850442145), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3734[4] = 
{
	ContentSizeFitter_t3850442145::get_offset_of_m_HorizontalFit_4(),
	ContentSizeFitter_t3850442145::get_offset_of_m_VerticalFit_5(),
	ContentSizeFitter_t3850442145::get_offset_of_m_Rect_6(),
	ContentSizeFitter_t3850442145::get_offset_of_m_Tracker_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3735 = { sizeof (FitMode_t3267881214)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable3735[4] = 
{
	FitMode_t3267881214::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3736 = { sizeof (GridLayoutGroup_t3046220461), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3736[6] = 
{
	GridLayoutGroup_t3046220461::get_offset_of_m_StartCorner_12(),
	GridLayoutGroup_t3046220461::get_offset_of_m_StartAxis_13(),
	GridLayoutGroup_t3046220461::get_offset_of_m_CellSize_14(),
	GridLayoutGroup_t3046220461::get_offset_of_m_Spacing_15(),
	GridLayoutGroup_t3046220461::get_offset_of_m_Constraint_16(),
	GridLayoutGroup_t3046220461::get_offset_of_m_ConstraintCount_17(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3737 = { sizeof (Corner_t1493259673)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable3737[5] = 
{
	Corner_t1493259673::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3738 = { sizeof (Axis_t3613393006)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable3738[3] = 
{
	Axis_t3613393006::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3739 = { sizeof (Constraint_t814224393)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable3739[4] = 
{
	Constraint_t814224393::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3740 = { sizeof (HorizontalLayoutGroup_t2586782146), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3741 = { sizeof (HorizontalOrVerticalLayoutGroup_t729725570), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3741[5] = 
{
	HorizontalOrVerticalLayoutGroup_t729725570::get_offset_of_m_Spacing_12(),
	HorizontalOrVerticalLayoutGroup_t729725570::get_offset_of_m_ChildForceExpandWidth_13(),
	HorizontalOrVerticalLayoutGroup_t729725570::get_offset_of_m_ChildForceExpandHeight_14(),
	HorizontalOrVerticalLayoutGroup_t729725570::get_offset_of_m_ChildControlWidth_15(),
	HorizontalOrVerticalLayoutGroup_t729725570::get_offset_of_m_ChildControlHeight_16(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3742 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3743 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3744 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3745 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3746 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3747 = { sizeof (LayoutElement_t1785403678), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3747[8] = 
{
	LayoutElement_t1785403678::get_offset_of_m_IgnoreLayout_4(),
	LayoutElement_t1785403678::get_offset_of_m_MinWidth_5(),
	LayoutElement_t1785403678::get_offset_of_m_MinHeight_6(),
	LayoutElement_t1785403678::get_offset_of_m_PreferredWidth_7(),
	LayoutElement_t1785403678::get_offset_of_m_PreferredHeight_8(),
	LayoutElement_t1785403678::get_offset_of_m_FlexibleWidth_9(),
	LayoutElement_t1785403678::get_offset_of_m_FlexibleHeight_10(),
	LayoutElement_t1785403678::get_offset_of_m_LayoutPriority_11(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3748 = { sizeof (LayoutGroup_t2436138090), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3748[8] = 
{
	LayoutGroup_t2436138090::get_offset_of_m_Padding_4(),
	LayoutGroup_t2436138090::get_offset_of_m_ChildAlignment_5(),
	LayoutGroup_t2436138090::get_offset_of_m_Rect_6(),
	LayoutGroup_t2436138090::get_offset_of_m_Tracker_7(),
	LayoutGroup_t2436138090::get_offset_of_m_TotalMinSize_8(),
	LayoutGroup_t2436138090::get_offset_of_m_TotalPreferredSize_9(),
	LayoutGroup_t2436138090::get_offset_of_m_TotalFlexibleSize_10(),
	LayoutGroup_t2436138090::get_offset_of_m_RectChildren_11(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3749 = { sizeof (U3CDelayedSetDirtyU3Ec__Iterator0_t3170500204), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3749[4] = 
{
	U3CDelayedSetDirtyU3Ec__Iterator0_t3170500204::get_offset_of_rectTransform_0(),
	U3CDelayedSetDirtyU3Ec__Iterator0_t3170500204::get_offset_of_U24current_1(),
	U3CDelayedSetDirtyU3Ec__Iterator0_t3170500204::get_offset_of_U24disposing_2(),
	U3CDelayedSetDirtyU3Ec__Iterator0_t3170500204::get_offset_of_U24PC_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3750 = { sizeof (LayoutRebuilder_t541313304), -1, sizeof(LayoutRebuilder_t541313304_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable3750[9] = 
{
	LayoutRebuilder_t541313304::get_offset_of_m_ToRebuild_0(),
	LayoutRebuilder_t541313304::get_offset_of_m_CachedHashFromTransform_1(),
	LayoutRebuilder_t541313304_StaticFields::get_offset_of_s_Rebuilders_2(),
	LayoutRebuilder_t541313304_StaticFields::get_offset_of_U3CU3Ef__mgU24cache0_3(),
	LayoutRebuilder_t541313304_StaticFields::get_offset_of_U3CU3Ef__amU24cache0_4(),
	LayoutRebuilder_t541313304_StaticFields::get_offset_of_U3CU3Ef__amU24cache1_5(),
	LayoutRebuilder_t541313304_StaticFields::get_offset_of_U3CU3Ef__amU24cache2_6(),
	LayoutRebuilder_t541313304_StaticFields::get_offset_of_U3CU3Ef__amU24cache3_7(),
	LayoutRebuilder_t541313304_StaticFields::get_offset_of_U3CU3Ef__amU24cache4_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3751 = { sizeof (LayoutUtility_t2745813735), -1, sizeof(LayoutUtility_t2745813735_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable3751[8] = 
{
	LayoutUtility_t2745813735_StaticFields::get_offset_of_U3CU3Ef__amU24cache0_0(),
	LayoutUtility_t2745813735_StaticFields::get_offset_of_U3CU3Ef__amU24cache1_1(),
	LayoutUtility_t2745813735_StaticFields::get_offset_of_U3CU3Ef__amU24cache2_2(),
	LayoutUtility_t2745813735_StaticFields::get_offset_of_U3CU3Ef__amU24cache3_3(),
	LayoutUtility_t2745813735_StaticFields::get_offset_of_U3CU3Ef__amU24cache4_4(),
	LayoutUtility_t2745813735_StaticFields::get_offset_of_U3CU3Ef__amU24cache5_5(),
	LayoutUtility_t2745813735_StaticFields::get_offset_of_U3CU3Ef__amU24cache6_6(),
	LayoutUtility_t2745813735_StaticFields::get_offset_of_U3CU3Ef__amU24cache7_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3752 = { sizeof (VerticalLayoutGroup_t923838031), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3753 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3754 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable3754[2] = 
{
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3755 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable3755[2] = 
{
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3756 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable3756[4] = 
{
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3757 = { sizeof (ReflectionMethodsCache_t2103211062), -1, sizeof(ReflectionMethodsCache_t2103211062_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable3757[7] = 
{
	ReflectionMethodsCache_t2103211062::get_offset_of_raycast3D_0(),
	ReflectionMethodsCache_t2103211062::get_offset_of_raycast3DAll_1(),
	ReflectionMethodsCache_t2103211062::get_offset_of_raycast2D_2(),
	ReflectionMethodsCache_t2103211062::get_offset_of_getRayIntersectionAll_3(),
	ReflectionMethodsCache_t2103211062::get_offset_of_getRayIntersectionAllNonAlloc_4(),
	ReflectionMethodsCache_t2103211062::get_offset_of_getRaycastNonAlloc_5(),
	ReflectionMethodsCache_t2103211062_StaticFields::get_offset_of_s_ReflectionMethodsCache_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3758 = { sizeof (Raycast3DCallback_t701940803), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3759 = { sizeof (Raycast2DCallback_t768590915), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3760 = { sizeof (RaycastAllCallback_t1884415901), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3761 = { sizeof (GetRayIntersectionAllCallback_t3913627115), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3762 = { sizeof (GetRayIntersectionAllNonAllocCallback_t2311174851), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3763 = { sizeof (GetRaycastNonAllocCallback_t3841783507), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3764 = { sizeof (VertexHelper_t2453304189), -1, sizeof(VertexHelper_t2453304189_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable3764[11] = 
{
	VertexHelper_t2453304189::get_offset_of_m_Positions_0(),
	VertexHelper_t2453304189::get_offset_of_m_Colors_1(),
	VertexHelper_t2453304189::get_offset_of_m_Uv0S_2(),
	VertexHelper_t2453304189::get_offset_of_m_Uv1S_3(),
	VertexHelper_t2453304189::get_offset_of_m_Uv2S_4(),
	VertexHelper_t2453304189::get_offset_of_m_Uv3S_5(),
	VertexHelper_t2453304189::get_offset_of_m_Normals_6(),
	VertexHelper_t2453304189::get_offset_of_m_Tangents_7(),
	VertexHelper_t2453304189::get_offset_of_m_Indices_8(),
	VertexHelper_t2453304189_StaticFields::get_offset_of_s_DefaultTangent_9(),
	VertexHelper_t2453304189_StaticFields::get_offset_of_s_DefaultNormal_10(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3765 = { sizeof (BaseVertexEffect_t2675891272), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3766 = { sizeof (BaseMeshEffect_t2440176439), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3766[1] = 
{
	BaseMeshEffect_t2440176439::get_offset_of_m_Graphic_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3767 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3768 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3769 = { sizeof (Outline_t2536100125), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3770 = { sizeof (PositionAsUV1_t3991086357), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3771 = { sizeof (Shadow_t773074319), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3771[4] = 
{
	Shadow_t773074319::get_offset_of_m_EffectColor_5(),
	Shadow_t773074319::get_offset_of_m_EffectDistance_6(),
	Shadow_t773074319::get_offset_of_m_UseGraphicAlpha_7(),
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3772 = { sizeof (U3CPrivateImplementationDetailsU3E_t3057255367), -1, sizeof(U3CPrivateImplementationDetailsU3E_t3057255367_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable3772[1] = 
{
	U3CPrivateImplementationDetailsU3E_t3057255367_StaticFields::get_offset_of_U24fieldU2D7BBE37982E6C057ED87163CAFC7FD6E5E42EEA46_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3773 = { sizeof (U24ArrayTypeU3D12_t2488454196)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU3D12_t2488454196 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3774 = { sizeof (U3CModuleU3E_t692745546), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3775 = { sizeof (DefaultModelRecoEventHandlerPlaceHolder_t3262631700), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3776 = { sizeof (DefaultInitializationErrorHandlerInternal_t2721934644), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3776[9] = 
{
	DefaultInitializationErrorHandlerInternal_t2721934644::get_offset_of_mErrorText_4(),
	DefaultInitializationErrorHandlerInternal_t2721934644::get_offset_of_mErrorOccurred_5(),
	0,
	DefaultInitializationErrorHandlerInternal_t2721934644::get_offset_of_bodyStyle_7(),
	DefaultInitializationErrorHandlerInternal_t2721934644::get_offset_of_headerStyle_8(),
	DefaultInitializationErrorHandlerInternal_t2721934644::get_offset_of_footerStyle_9(),
	DefaultInitializationErrorHandlerInternal_t2721934644::get_offset_of_bodyTexture_10(),
	DefaultInitializationErrorHandlerInternal_t2721934644::get_offset_of_headerTexture_11(),
	DefaultInitializationErrorHandlerInternal_t2721934644::get_offset_of_footerTexture_12(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3777 = { sizeof (DefaultInitializationErrorHandlerPlaceHolder_t270221276), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3778 = { sizeof (DefaultTrackableBehaviourPlaceholder_t3249521055), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3779 = { sizeof (VuforiaMonoBehaviour_t1150221792), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3780 = { sizeof (ARController_t116632334), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3780[1] = 
{
	ARController_t116632334::get_offset_of_mVuforiaBehaviour_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3781 = { sizeof (U3CU3Ec__DisplayClass11_0_t2669575632), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3781[1] = 
{
	U3CU3Ec__DisplayClass11_0_t2669575632::get_offset_of_controller_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3782 = { sizeof (EulaJsonUtility_t3513723441), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3783 = { sizeof (EulaVersionStrings_t2506079335)+ sizeof (RuntimeObject), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3783[1] = 
{
	EulaVersionStrings_t2506079335::get_offset_of_Values_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3784 = { sizeof (AMigratableVideoBackgroundConfigProperty_t722013131), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3784[1] = 
{
	AMigratableVideoBackgroundConfigProperty_t722013131::get_offset_of_Config_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3785 = { sizeof (MatteShaderPropertyMigration_t1678383081), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3785[2] = 
{
	MatteShaderPropertyMigration_t1678383081::get_offset_of_mOldShaderName_1(),
	MatteShaderPropertyMigration_t1678383081::get_offset_of_mNewShaderName_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3786 = { sizeof (VideoBackgroundConfigMigrator_t3105432194), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3786[1] = 
{
	VideoBackgroundConfigMigrator_t3105432194::get_offset_of_mMigratableProperties_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3787 = { sizeof (U3CU3Ec_t2359455578), -1, sizeof(U3CU3Ec_t2359455578_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable3787[2] = 
{
	U3CU3Ec_t2359455578_StaticFields::get_offset_of_U3CU3E9_0(),
	U3CU3Ec_t2359455578_StaticFields::get_offset_of_U3CU3E9__2_0_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3788 = { sizeof (VideoBackgroundShaderPropertyMigration_t1702172738), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3788[2] = 
{
	VideoBackgroundShaderPropertyMigration_t1702172738::get_offset_of_mOldShaderName_1(),
	VideoBackgroundShaderPropertyMigration_t1702172738::get_offset_of_mNewShaderName_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3789 = { sizeof (ImageTargetFinder_t2774980633), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3790 = { sizeof (ObjectRecoBehaviour_t2762250941), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3790[8] = 
{
	ObjectRecoBehaviour_t2762250941::get_offset_of_mObjectTracker_4(),
	ObjectRecoBehaviour_t2762250941::get_offset_of_mTargetFinder_5(),
	ObjectRecoBehaviour_t2762250941::get_offset_of_mCurrentlyInitializing_6(),
	ObjectRecoBehaviour_t2762250941::get_offset_of_mInitSuccess_7(),
	ObjectRecoBehaviour_t2762250941::get_offset_of_mRecoStarted_8(),
	ObjectRecoBehaviour_t2762250941::get_offset_of_mOnInitializedCalled_9(),
	ObjectRecoBehaviour_t2762250941::get_offset_of_mHandlers_10(),
	ObjectRecoBehaviour_t2762250941::get_offset_of_mTargetFinderStartedBeforeDisable_11(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3791 = { sizeof (CameraCalibrationComparer_t2990055837), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3791[2] = 
{
	0,
	CameraCalibrationComparer_t2990055837::get_offset_of_mLastCameraCalibrationValues_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3792 = { sizeof (IlluminationManager_t3960931838), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3792[2] = 
{
	0,
	IlluminationManager_t3960931838::get_offset_of_mIlluminationData_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3793 = { sizeof (PreviewModelTurnOffBehaviour_t804227973), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3794 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3795 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3796 = { sizeof (PositionalDeviceTrackerImpl_t1314438186), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3796[1] = 
{
	PositionalDeviceTrackerImpl_t1314438186::get_offset_of_mAnchorRemovedEvent_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3797 = { sizeof (U3CU3Ec_t1040550284), -1, sizeof(U3CU3Ec_t1040550284_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable3797[2] = 
{
	U3CU3Ec_t1040550284_StaticFields::get_offset_of_U3CU3E9_0(),
	U3CU3Ec_t1040550284_StaticFields::get_offset_of_U3CU3E9__13_0_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3798 = { sizeof (PositionalPlayModeDeviceTrackerImpl_t1348222404), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3798[1] = 
{
	PositionalPlayModeDeviceTrackerImpl_t1348222404::get_offset_of_mEmulatorDataset_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3799 = { sizeof (PositionalDeviceTracker_t656722001), -1, 0, 0 };
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // Modified by PostBuild.cs
