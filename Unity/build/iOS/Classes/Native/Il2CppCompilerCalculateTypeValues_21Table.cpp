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


// System.Action`1<UnityEngine.Font>
struct Action_1_t795662E553415ECF2DD0F8EEB9BA170C3670F37C;
// System.Action`1<UnityEngine.Profiling.Memory.Experimental.MetaData>
struct Action_1_tD6810E674F680F908B08CF4048402180F53FB478;
// System.Action`1<UnityEngine.U2D.SpriteAtlas>
struct Action_1_t148D4FE58B48D51DD45913A7B6EAA61E30D4B285;
// System.Action`2<System.String,System.Action`1<UnityEngine.U2D.SpriteAtlas>>
struct Action_2_t93D9A2FE2A1A1E8453EFAE70181CB587FB14FBB4;
// System.Action`2<System.String,System.Boolean>
struct Action_2_tA4D387C88A3C439A4931A264E2DEFEC33886F455;
// System.AsyncCallback
struct AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4;
// System.Byte[]
struct ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821;
// System.Char[]
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226;
// System.Collections.Generic.List`1<UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents/MessageTypeSubscribers>
struct List_1_t7A61150CB0ABE0CF17E2B25826FFC770CCDBBC86;
// System.Collections.Generic.List`1<UnityEngine.UICharInfo>
struct List_1_tD850FBA632A52824016AAA9B3748BA38F51E087E;
// System.Collections.Generic.List`1<UnityEngine.UILineInfo>
struct List_1_t7687D8368357F4437252DC75BFCE9DE76F3143A0;
// System.Collections.Generic.List`1<UnityEngine.UIVertex>
struct List_1_t4CE16E1B496C9FE941554BB47727DFDD7C3D9554;
// System.DelegateData
struct DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE;
// System.Delegate[]
struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86;
// System.IAsyncResult
struct IAsyncResult_t8E194308510B375B42432981AE5E7488C458D598;
// System.Object[]
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t12277F7F965BA79C54E4B3BFABD27A5FFB725EE2;
// System.String
struct String_t;
// System.Type
struct Type_t;
// System.Void
struct Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_t18AA4F473C7B295216B7D4B9723B4F3DFCCC9A3F;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_t6E5DF2EBDA42794B5FE0C6DAA97DF65F0BFF571F;
// UnityEngine.Events.UnityAction`1<UnityEngine.SceneManagement.Scene>
struct UnityAction_1_t95F46E5AC4F5A5CFAD850DDC188E2674CEAC6384;
// UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.LoadSceneMode>
struct UnityAction_2_t34FACA3D608984EE7CF1EE51BBFA450D2DB62305;
// UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.Scene>
struct UnityAction_2_t6FF15ABDB8C2C9E1BB0E5A79FEDA471C0679D51F;
// UnityEngine.Experimental.Rendering.IRenderPipeline
struct IRenderPipeline_t8EF590EEEC1C2078F8F61296569841619584051E;
// UnityEngine.Experimental.Rendering.IRenderPipelineAsset
struct IRenderPipelineAsset_tD337D8556267C1348960FCC250EA1BA0FC635239;
// UnityEngine.Font
struct Font_t1EDE54AF557272BE314EB4B40EFA50CEB353CA26;
// UnityEngine.Font/FontTextureRebuildCallback
struct FontTextureRebuildCallback_tD700C63BB1A449E3A0464C81701E981677D3021C;
// UnityEngine.ILogHandler
struct ILogHandler_t941F581F97535C9BFC019CF1D0B44990E31F92B4;
// UnityEngine.IPlayerEditorConnectionNative
struct IPlayerEditorConnectionNative_tEB17D62E7FD9F3F765C507C546B7F4EA06ADB612;
// UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents
struct PlayerEditorConnectionEvents_t34FBEA62160A657924BC889C2F9FC4B0FC601D5A;
// UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents/ConnectionChangeEvent
struct ConnectionChangeEvent_t88A3E76467566DB9813DF5BD2DABD20D523D4681;
// UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents/MessageEvent
struct MessageEvent_t62B5B1B04FCC5843790EE008D585B006E82E08FC;
// UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0;
// UnityEngine.Playables.PlayableBinding/CreateOutputMethod
struct CreateOutputMethod_tA7B649F49822FC5DD0B0D9F17247C73CAECB1CA3;
// UnityEngine.Playables.PlayableBinding[]
struct PlayableBindingU5BU5D_t7EB322901D51EAB67BA4F711C87F3AC1CF5D89AB;
// UnityEngine.RectTransform
struct RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20;
// UnityEngine.RectTransform/ReapplyDrivenProperties
struct ReapplyDrivenProperties_t431F4FBD9C59AE097FE33C4354CC6251B01B527D;
// UnityEngine.Texture2D
struct Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C;
// UnityEngine.Transform
struct Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA;

struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_com;



#ifndef U3CMODULEU3E_T6EFABDA0B2A020FB3DD6CA286799D867733667F1_H
#define U3CMODULEU3E_T6EFABDA0B2A020FB3DD6CA286799D867733667F1_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t6EFABDA0B2A020FB3DD6CA286799D867733667F1 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CMODULEU3E_T6EFABDA0B2A020FB3DD6CA286799D867733667F1_H
#ifndef U3CMODULEU3E_TDBB8B8FDA571F608D819B1D5558C135A3972639B_H
#define U3CMODULEU3E_TDBB8B8FDA571F608D819B1D5558C135A3972639B_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_tDBB8B8FDA571F608D819B1D5558C135A3972639B 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CMODULEU3E_TDBB8B8FDA571F608D819B1D5558C135A3972639B_H
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
#ifndef STACK_T37723B68CC4FFD95F0F3D06A5D42D7DEE7569643_H
#define STACK_T37723B68CC4FFD95F0F3D06A5D42D7DEE7569643_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Stack
struct  Stack_t37723B68CC4FFD95F0F3D06A5D42D7DEE7569643  : public RuntimeObject
{
public:
	// System.Object[] System.Collections.Stack::_array
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ____array_0;
	// System.Int32 System.Collections.Stack::_size
	int32_t ____size_1;
	// System.Int32 System.Collections.Stack::_version
	int32_t ____version_2;
	// System.Object System.Collections.Stack::_syncRoot
	RuntimeObject * ____syncRoot_3;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(Stack_t37723B68CC4FFD95F0F3D06A5D42D7DEE7569643, ____array_0)); }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* get__array_0() const { return ____array_0; }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((&____array_0), value);
	}

	inline static int32_t get_offset_of__size_1() { return static_cast<int32_t>(offsetof(Stack_t37723B68CC4FFD95F0F3D06A5D42D7DEE7569643, ____size_1)); }
	inline int32_t get__size_1() const { return ____size_1; }
	inline int32_t* get_address_of__size_1() { return &____size_1; }
	inline void set__size_1(int32_t value)
	{
		____size_1 = value;
	}

	inline static int32_t get_offset_of__version_2() { return static_cast<int32_t>(offsetof(Stack_t37723B68CC4FFD95F0F3D06A5D42D7DEE7569643, ____version_2)); }
	inline int32_t get__version_2() const { return ____version_2; }
	inline int32_t* get_address_of__version_2() { return &____version_2; }
	inline void set__version_2(int32_t value)
	{
		____version_2 = value;
	}

	inline static int32_t get_offset_of__syncRoot_3() { return static_cast<int32_t>(offsetof(Stack_t37723B68CC4FFD95F0F3D06A5D42D7DEE7569643, ____syncRoot_3)); }
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
#endif // STACK_T37723B68CC4FFD95F0F3D06A5D42D7DEE7569643_H
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
#ifndef UNITYEVENTBASE_T6E0F7823762EE94BB8489B5AE41C7802A266D3D5_H
#define UNITYEVENTBASE_T6E0F7823762EE94BB8489B5AE41C7802A266D3D5_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.UnityEventBase
struct  UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5  : public RuntimeObject
{
public:
	// UnityEngine.Events.InvokableCallList UnityEngine.Events.UnityEventBase::m_Calls
	InvokableCallList_t18AA4F473C7B295216B7D4B9723B4F3DFCCC9A3F * ___m_Calls_0;
	// UnityEngine.Events.PersistentCallGroup UnityEngine.Events.UnityEventBase::m_PersistentCalls
	PersistentCallGroup_t6E5DF2EBDA42794B5FE0C6DAA97DF65F0BFF571F * ___m_PersistentCalls_1;
	// System.String UnityEngine.Events.UnityEventBase::m_TypeName
	String_t* ___m_TypeName_2;
	// System.Boolean UnityEngine.Events.UnityEventBase::m_CallsDirty
	bool ___m_CallsDirty_3;

public:
	inline static int32_t get_offset_of_m_Calls_0() { return static_cast<int32_t>(offsetof(UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5, ___m_Calls_0)); }
	inline InvokableCallList_t18AA4F473C7B295216B7D4B9723B4F3DFCCC9A3F * get_m_Calls_0() const { return ___m_Calls_0; }
	inline InvokableCallList_t18AA4F473C7B295216B7D4B9723B4F3DFCCC9A3F ** get_address_of_m_Calls_0() { return &___m_Calls_0; }
	inline void set_m_Calls_0(InvokableCallList_t18AA4F473C7B295216B7D4B9723B4F3DFCCC9A3F * value)
	{
		___m_Calls_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_Calls_0), value);
	}

	inline static int32_t get_offset_of_m_PersistentCalls_1() { return static_cast<int32_t>(offsetof(UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5, ___m_PersistentCalls_1)); }
	inline PersistentCallGroup_t6E5DF2EBDA42794B5FE0C6DAA97DF65F0BFF571F * get_m_PersistentCalls_1() const { return ___m_PersistentCalls_1; }
	inline PersistentCallGroup_t6E5DF2EBDA42794B5FE0C6DAA97DF65F0BFF571F ** get_address_of_m_PersistentCalls_1() { return &___m_PersistentCalls_1; }
	inline void set_m_PersistentCalls_1(PersistentCallGroup_t6E5DF2EBDA42794B5FE0C6DAA97DF65F0BFF571F * value)
	{
		___m_PersistentCalls_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_PersistentCalls_1), value);
	}

	inline static int32_t get_offset_of_m_TypeName_2() { return static_cast<int32_t>(offsetof(UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5, ___m_TypeName_2)); }
	inline String_t* get_m_TypeName_2() const { return ___m_TypeName_2; }
	inline String_t** get_address_of_m_TypeName_2() { return &___m_TypeName_2; }
	inline void set_m_TypeName_2(String_t* value)
	{
		___m_TypeName_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_TypeName_2), value);
	}

	inline static int32_t get_offset_of_m_CallsDirty_3() { return static_cast<int32_t>(offsetof(UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5, ___m_CallsDirty_3)); }
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
#endif // UNITYEVENTBASE_T6E0F7823762EE94BB8489B5AE41C7802A266D3D5_H
#ifndef RENDERPIPELINEMANAGER_T778435CA5356ADD91DF0BC8AAA5FE4F200643AE5_H
#define RENDERPIPELINEMANAGER_T778435CA5356ADD91DF0BC8AAA5FE4F200643AE5_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.Rendering.RenderPipelineManager
struct  RenderPipelineManager_t778435CA5356ADD91DF0BC8AAA5FE4F200643AE5  : public RuntimeObject
{
public:

public:
};

struct RenderPipelineManager_t778435CA5356ADD91DF0BC8AAA5FE4F200643AE5_StaticFields
{
public:
	// UnityEngine.Experimental.Rendering.IRenderPipelineAsset UnityEngine.Experimental.Rendering.RenderPipelineManager::s_CurrentPipelineAsset
	RuntimeObject* ___s_CurrentPipelineAsset_0;
	// UnityEngine.Experimental.Rendering.IRenderPipeline UnityEngine.Experimental.Rendering.RenderPipelineManager::<currentPipeline>k__BackingField
	RuntimeObject* ___U3CcurrentPipelineU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_s_CurrentPipelineAsset_0() { return static_cast<int32_t>(offsetof(RenderPipelineManager_t778435CA5356ADD91DF0BC8AAA5FE4F200643AE5_StaticFields, ___s_CurrentPipelineAsset_0)); }
	inline RuntimeObject* get_s_CurrentPipelineAsset_0() const { return ___s_CurrentPipelineAsset_0; }
	inline RuntimeObject** get_address_of_s_CurrentPipelineAsset_0() { return &___s_CurrentPipelineAsset_0; }
	inline void set_s_CurrentPipelineAsset_0(RuntimeObject* value)
	{
		___s_CurrentPipelineAsset_0 = value;
		Il2CppCodeGenWriteBarrier((&___s_CurrentPipelineAsset_0), value);
	}

	inline static int32_t get_offset_of_U3CcurrentPipelineU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(RenderPipelineManager_t778435CA5356ADD91DF0BC8AAA5FE4F200643AE5_StaticFields, ___U3CcurrentPipelineU3Ek__BackingField_1)); }
	inline RuntimeObject* get_U3CcurrentPipelineU3Ek__BackingField_1() const { return ___U3CcurrentPipelineU3Ek__BackingField_1; }
	inline RuntimeObject** get_address_of_U3CcurrentPipelineU3Ek__BackingField_1() { return &___U3CcurrentPipelineU3Ek__BackingField_1; }
	inline void set_U3CcurrentPipelineU3Ek__BackingField_1(RuntimeObject* value)
	{
		___U3CcurrentPipelineU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CcurrentPipelineU3Ek__BackingField_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RENDERPIPELINEMANAGER_T778435CA5356ADD91DF0BC8AAA5FE4F200643AE5_H
#ifndef MESSAGEEVENTARGS_T9E4989078D86D3D94EF8D595F80D6673636C9D30_H
#define MESSAGEEVENTARGS_T9E4989078D86D3D94EF8D595F80D6673636C9D30_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.PlayerConnection.MessageEventArgs
struct  MessageEventArgs_t9E4989078D86D3D94EF8D595F80D6673636C9D30  : public RuntimeObject
{
public:
	// System.Int32 UnityEngine.Networking.PlayerConnection.MessageEventArgs::playerId
	int32_t ___playerId_0;
	// System.Byte[] UnityEngine.Networking.PlayerConnection.MessageEventArgs::data
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___data_1;

public:
	inline static int32_t get_offset_of_playerId_0() { return static_cast<int32_t>(offsetof(MessageEventArgs_t9E4989078D86D3D94EF8D595F80D6673636C9D30, ___playerId_0)); }
	inline int32_t get_playerId_0() const { return ___playerId_0; }
	inline int32_t* get_address_of_playerId_0() { return &___playerId_0; }
	inline void set_playerId_0(int32_t value)
	{
		___playerId_0 = value;
	}

	inline static int32_t get_offset_of_data_1() { return static_cast<int32_t>(offsetof(MessageEventArgs_t9E4989078D86D3D94EF8D595F80D6673636C9D30, ___data_1)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_data_1() const { return ___data_1; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_data_1() { return &___data_1; }
	inline void set_data_1(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___data_1 = value;
		Il2CppCodeGenWriteBarrier((&___data_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MESSAGEEVENTARGS_T9E4989078D86D3D94EF8D595F80D6673636C9D30_H
#ifndef U3CBLOCKUNTILRECVMSGU3EC__ANONSTOREY2_TB44031B365C58252C7A5A05A1BFEC7E2035FE68E_H
#define U3CBLOCKUNTILRECVMSGU3EC__ANONSTOREY2_TB44031B365C58252C7A5A05A1BFEC7E2035FE68E_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.PlayerConnection.PlayerConnection/<BlockUntilRecvMsg>c__AnonStorey2
struct  U3CBlockUntilRecvMsgU3Ec__AnonStorey2_tB44031B365C58252C7A5A05A1BFEC7E2035FE68E  : public RuntimeObject
{
public:
	// System.Boolean UnityEngine.Networking.PlayerConnection.PlayerConnection/<BlockUntilRecvMsg>c__AnonStorey2::msgReceived
	bool ___msgReceived_0;

public:
	inline static int32_t get_offset_of_msgReceived_0() { return static_cast<int32_t>(offsetof(U3CBlockUntilRecvMsgU3Ec__AnonStorey2_tB44031B365C58252C7A5A05A1BFEC7E2035FE68E, ___msgReceived_0)); }
	inline bool get_msgReceived_0() const { return ___msgReceived_0; }
	inline bool* get_address_of_msgReceived_0() { return &___msgReceived_0; }
	inline void set_msgReceived_0(bool value)
	{
		___msgReceived_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CBLOCKUNTILRECVMSGU3EC__ANONSTOREY2_TB44031B365C58252C7A5A05A1BFEC7E2035FE68E_H
#ifndef PLAYEREDITORCONNECTIONEVENTS_T34FBEA62160A657924BC889C2F9FC4B0FC601D5A_H
#define PLAYEREDITORCONNECTIONEVENTS_T34FBEA62160A657924BC889C2F9FC4B0FC601D5A_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents
struct  PlayerEditorConnectionEvents_t34FBEA62160A657924BC889C2F9FC4B0FC601D5A  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents/MessageTypeSubscribers> UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents::messageTypeSubscribers
	List_1_t7A61150CB0ABE0CF17E2B25826FFC770CCDBBC86 * ___messageTypeSubscribers_0;
	// UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents/ConnectionChangeEvent UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents::connectionEvent
	ConnectionChangeEvent_t88A3E76467566DB9813DF5BD2DABD20D523D4681 * ___connectionEvent_1;
	// UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents/ConnectionChangeEvent UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents::disconnectionEvent
	ConnectionChangeEvent_t88A3E76467566DB9813DF5BD2DABD20D523D4681 * ___disconnectionEvent_2;

public:
	inline static int32_t get_offset_of_messageTypeSubscribers_0() { return static_cast<int32_t>(offsetof(PlayerEditorConnectionEvents_t34FBEA62160A657924BC889C2F9FC4B0FC601D5A, ___messageTypeSubscribers_0)); }
	inline List_1_t7A61150CB0ABE0CF17E2B25826FFC770CCDBBC86 * get_messageTypeSubscribers_0() const { return ___messageTypeSubscribers_0; }
	inline List_1_t7A61150CB0ABE0CF17E2B25826FFC770CCDBBC86 ** get_address_of_messageTypeSubscribers_0() { return &___messageTypeSubscribers_0; }
	inline void set_messageTypeSubscribers_0(List_1_t7A61150CB0ABE0CF17E2B25826FFC770CCDBBC86 * value)
	{
		___messageTypeSubscribers_0 = value;
		Il2CppCodeGenWriteBarrier((&___messageTypeSubscribers_0), value);
	}

	inline static int32_t get_offset_of_connectionEvent_1() { return static_cast<int32_t>(offsetof(PlayerEditorConnectionEvents_t34FBEA62160A657924BC889C2F9FC4B0FC601D5A, ___connectionEvent_1)); }
	inline ConnectionChangeEvent_t88A3E76467566DB9813DF5BD2DABD20D523D4681 * get_connectionEvent_1() const { return ___connectionEvent_1; }
	inline ConnectionChangeEvent_t88A3E76467566DB9813DF5BD2DABD20D523D4681 ** get_address_of_connectionEvent_1() { return &___connectionEvent_1; }
	inline void set_connectionEvent_1(ConnectionChangeEvent_t88A3E76467566DB9813DF5BD2DABD20D523D4681 * value)
	{
		___connectionEvent_1 = value;
		Il2CppCodeGenWriteBarrier((&___connectionEvent_1), value);
	}

	inline static int32_t get_offset_of_disconnectionEvent_2() { return static_cast<int32_t>(offsetof(PlayerEditorConnectionEvents_t34FBEA62160A657924BC889C2F9FC4B0FC601D5A, ___disconnectionEvent_2)); }
	inline ConnectionChangeEvent_t88A3E76467566DB9813DF5BD2DABD20D523D4681 * get_disconnectionEvent_2() const { return ___disconnectionEvent_2; }
	inline ConnectionChangeEvent_t88A3E76467566DB9813DF5BD2DABD20D523D4681 ** get_address_of_disconnectionEvent_2() { return &___disconnectionEvent_2; }
	inline void set_disconnectionEvent_2(ConnectionChangeEvent_t88A3E76467566DB9813DF5BD2DABD20D523D4681 * value)
	{
		___disconnectionEvent_2 = value;
		Il2CppCodeGenWriteBarrier((&___disconnectionEvent_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYEREDITORCONNECTIONEVENTS_T34FBEA62160A657924BC889C2F9FC4B0FC601D5A_H
#ifndef MESSAGETYPESUBSCRIBERS_T2B83CF84645921BDEF2A06A3CCCC0F9ECDC107FE_H
#define MESSAGETYPESUBSCRIBERS_T2B83CF84645921BDEF2A06A3CCCC0F9ECDC107FE_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents/MessageTypeSubscribers
struct  MessageTypeSubscribers_t2B83CF84645921BDEF2A06A3CCCC0F9ECDC107FE  : public RuntimeObject
{
public:
	// System.String UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents/MessageTypeSubscribers::m_messageTypeId
	String_t* ___m_messageTypeId_0;
	// System.Int32 UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents/MessageTypeSubscribers::subscriberCount
	int32_t ___subscriberCount_1;
	// UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents/MessageEvent UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents/MessageTypeSubscribers::messageCallback
	MessageEvent_t62B5B1B04FCC5843790EE008D585B006E82E08FC * ___messageCallback_2;

public:
	inline static int32_t get_offset_of_m_messageTypeId_0() { return static_cast<int32_t>(offsetof(MessageTypeSubscribers_t2B83CF84645921BDEF2A06A3CCCC0F9ECDC107FE, ___m_messageTypeId_0)); }
	inline String_t* get_m_messageTypeId_0() const { return ___m_messageTypeId_0; }
	inline String_t** get_address_of_m_messageTypeId_0() { return &___m_messageTypeId_0; }
	inline void set_m_messageTypeId_0(String_t* value)
	{
		___m_messageTypeId_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_messageTypeId_0), value);
	}

	inline static int32_t get_offset_of_subscriberCount_1() { return static_cast<int32_t>(offsetof(MessageTypeSubscribers_t2B83CF84645921BDEF2A06A3CCCC0F9ECDC107FE, ___subscriberCount_1)); }
	inline int32_t get_subscriberCount_1() const { return ___subscriberCount_1; }
	inline int32_t* get_address_of_subscriberCount_1() { return &___subscriberCount_1; }
	inline void set_subscriberCount_1(int32_t value)
	{
		___subscriberCount_1 = value;
	}

	inline static int32_t get_offset_of_messageCallback_2() { return static_cast<int32_t>(offsetof(MessageTypeSubscribers_t2B83CF84645921BDEF2A06A3CCCC0F9ECDC107FE, ___messageCallback_2)); }
	inline MessageEvent_t62B5B1B04FCC5843790EE008D585B006E82E08FC * get_messageCallback_2() const { return ___messageCallback_2; }
	inline MessageEvent_t62B5B1B04FCC5843790EE008D585B006E82E08FC ** get_address_of_messageCallback_2() { return &___messageCallback_2; }
	inline void set_messageCallback_2(MessageEvent_t62B5B1B04FCC5843790EE008D585B006E82E08FC * value)
	{
		___messageCallback_2 = value;
		Il2CppCodeGenWriteBarrier((&___messageCallback_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MESSAGETYPESUBSCRIBERS_T2B83CF84645921BDEF2A06A3CCCC0F9ECDC107FE_H
#ifndef PLAYABLEBEHAVIOUR_T5F4AA32E735199182CC5F57D426D27BE8ABA8F01_H
#define PLAYABLEBEHAVIOUR_T5F4AA32E735199182CC5F57D426D27BE8ABA8F01_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Playables.PlayableBehaviour
struct  PlayableBehaviour_t5F4AA32E735199182CC5F57D426D27BE8ABA8F01  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYABLEBEHAVIOUR_T5F4AA32E735199182CC5F57D426D27BE8ABA8F01_H
#ifndef MEMORYPROFILER_T677A743C10D777755A26A6D2B2832861E7C130DF_H
#define MEMORYPROFILER_T677A743C10D777755A26A6D2B2832861E7C130DF_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Profiling.Memory.Experimental.MemoryProfiler
struct  MemoryProfiler_t677A743C10D777755A26A6D2B2832861E7C130DF  : public RuntimeObject
{
public:

public:
};

struct MemoryProfiler_t677A743C10D777755A26A6D2B2832861E7C130DF_StaticFields
{
public:
	// System.Action`2<System.String,System.Boolean> UnityEngine.Profiling.Memory.Experimental.MemoryProfiler::snapshotFinished
	Action_2_tA4D387C88A3C439A4931A264E2DEFEC33886F455 * ___snapshotFinished_0;
	// System.Action`1<UnityEngine.Profiling.Memory.Experimental.MetaData> UnityEngine.Profiling.Memory.Experimental.MemoryProfiler::createMetaData
	Action_1_tD6810E674F680F908B08CF4048402180F53FB478 * ___createMetaData_1;

public:
	inline static int32_t get_offset_of_snapshotFinished_0() { return static_cast<int32_t>(offsetof(MemoryProfiler_t677A743C10D777755A26A6D2B2832861E7C130DF_StaticFields, ___snapshotFinished_0)); }
	inline Action_2_tA4D387C88A3C439A4931A264E2DEFEC33886F455 * get_snapshotFinished_0() const { return ___snapshotFinished_0; }
	inline Action_2_tA4D387C88A3C439A4931A264E2DEFEC33886F455 ** get_address_of_snapshotFinished_0() { return &___snapshotFinished_0; }
	inline void set_snapshotFinished_0(Action_2_tA4D387C88A3C439A4931A264E2DEFEC33886F455 * value)
	{
		___snapshotFinished_0 = value;
		Il2CppCodeGenWriteBarrier((&___snapshotFinished_0), value);
	}

	inline static int32_t get_offset_of_createMetaData_1() { return static_cast<int32_t>(offsetof(MemoryProfiler_t677A743C10D777755A26A6D2B2832861E7C130DF_StaticFields, ___createMetaData_1)); }
	inline Action_1_tD6810E674F680F908B08CF4048402180F53FB478 * get_createMetaData_1() const { return ___createMetaData_1; }
	inline Action_1_tD6810E674F680F908B08CF4048402180F53FB478 ** get_address_of_createMetaData_1() { return &___createMetaData_1; }
	inline void set_createMetaData_1(Action_1_tD6810E674F680F908B08CF4048402180F53FB478 * value)
	{
		___createMetaData_1 = value;
		Il2CppCodeGenWriteBarrier((&___createMetaData_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MEMORYPROFILER_T677A743C10D777755A26A6D2B2832861E7C130DF_H
#ifndef METADATA_T8A5880BAD743B1ED7D9345DCF60600F1807E81CA_H
#define METADATA_T8A5880BAD743B1ED7D9345DCF60600F1807E81CA_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Profiling.Memory.Experimental.MetaData
struct  MetaData_t8A5880BAD743B1ED7D9345DCF60600F1807E81CA  : public RuntimeObject
{
public:
	// System.String UnityEngine.Profiling.Memory.Experimental.MetaData::content
	String_t* ___content_0;
	// System.String UnityEngine.Profiling.Memory.Experimental.MetaData::platform
	String_t* ___platform_1;
	// UnityEngine.Texture2D UnityEngine.Profiling.Memory.Experimental.MetaData::screenshot
	Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * ___screenshot_2;

public:
	inline static int32_t get_offset_of_content_0() { return static_cast<int32_t>(offsetof(MetaData_t8A5880BAD743B1ED7D9345DCF60600F1807E81CA, ___content_0)); }
	inline String_t* get_content_0() const { return ___content_0; }
	inline String_t** get_address_of_content_0() { return &___content_0; }
	inline void set_content_0(String_t* value)
	{
		___content_0 = value;
		Il2CppCodeGenWriteBarrier((&___content_0), value);
	}

	inline static int32_t get_offset_of_platform_1() { return static_cast<int32_t>(offsetof(MetaData_t8A5880BAD743B1ED7D9345DCF60600F1807E81CA, ___platform_1)); }
	inline String_t* get_platform_1() const { return ___platform_1; }
	inline String_t** get_address_of_platform_1() { return &___platform_1; }
	inline void set_platform_1(String_t* value)
	{
		___platform_1 = value;
		Il2CppCodeGenWriteBarrier((&___platform_1), value);
	}

	inline static int32_t get_offset_of_screenshot_2() { return static_cast<int32_t>(offsetof(MetaData_t8A5880BAD743B1ED7D9345DCF60600F1807E81CA, ___screenshot_2)); }
	inline Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * get_screenshot_2() const { return ___screenshot_2; }
	inline Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C ** get_address_of_screenshot_2() { return &___screenshot_2; }
	inline void set_screenshot_2(Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * value)
	{
		___screenshot_2 = value;
		Il2CppCodeGenWriteBarrier((&___screenshot_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // METADATA_T8A5880BAD743B1ED7D9345DCF60600F1807E81CA_H
#ifndef SCENEMANAGER_T68A7070D2AD3860C3EE327C94F38270E49AFB489_H
#define SCENEMANAGER_T68A7070D2AD3860C3EE327C94F38270E49AFB489_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SceneManagement.SceneManager
struct  SceneManager_t68A7070D2AD3860C3EE327C94F38270E49AFB489  : public RuntimeObject
{
public:

public:
};

struct SceneManager_t68A7070D2AD3860C3EE327C94F38270E49AFB489_StaticFields
{
public:
	// UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.LoadSceneMode> UnityEngine.SceneManagement.SceneManager::sceneLoaded
	UnityAction_2_t34FACA3D608984EE7CF1EE51BBFA450D2DB62305 * ___sceneLoaded_0;
	// UnityEngine.Events.UnityAction`1<UnityEngine.SceneManagement.Scene> UnityEngine.SceneManagement.SceneManager::sceneUnloaded
	UnityAction_1_t95F46E5AC4F5A5CFAD850DDC188E2674CEAC6384 * ___sceneUnloaded_1;
	// UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.Scene> UnityEngine.SceneManagement.SceneManager::activeSceneChanged
	UnityAction_2_t6FF15ABDB8C2C9E1BB0E5A79FEDA471C0679D51F * ___activeSceneChanged_2;

public:
	inline static int32_t get_offset_of_sceneLoaded_0() { return static_cast<int32_t>(offsetof(SceneManager_t68A7070D2AD3860C3EE327C94F38270E49AFB489_StaticFields, ___sceneLoaded_0)); }
	inline UnityAction_2_t34FACA3D608984EE7CF1EE51BBFA450D2DB62305 * get_sceneLoaded_0() const { return ___sceneLoaded_0; }
	inline UnityAction_2_t34FACA3D608984EE7CF1EE51BBFA450D2DB62305 ** get_address_of_sceneLoaded_0() { return &___sceneLoaded_0; }
	inline void set_sceneLoaded_0(UnityAction_2_t34FACA3D608984EE7CF1EE51BBFA450D2DB62305 * value)
	{
		___sceneLoaded_0 = value;
		Il2CppCodeGenWriteBarrier((&___sceneLoaded_0), value);
	}

	inline static int32_t get_offset_of_sceneUnloaded_1() { return static_cast<int32_t>(offsetof(SceneManager_t68A7070D2AD3860C3EE327C94F38270E49AFB489_StaticFields, ___sceneUnloaded_1)); }
	inline UnityAction_1_t95F46E5AC4F5A5CFAD850DDC188E2674CEAC6384 * get_sceneUnloaded_1() const { return ___sceneUnloaded_1; }
	inline UnityAction_1_t95F46E5AC4F5A5CFAD850DDC188E2674CEAC6384 ** get_address_of_sceneUnloaded_1() { return &___sceneUnloaded_1; }
	inline void set_sceneUnloaded_1(UnityAction_1_t95F46E5AC4F5A5CFAD850DDC188E2674CEAC6384 * value)
	{
		___sceneUnloaded_1 = value;
		Il2CppCodeGenWriteBarrier((&___sceneUnloaded_1), value);
	}

	inline static int32_t get_offset_of_activeSceneChanged_2() { return static_cast<int32_t>(offsetof(SceneManager_t68A7070D2AD3860C3EE327C94F38270E49AFB489_StaticFields, ___activeSceneChanged_2)); }
	inline UnityAction_2_t6FF15ABDB8C2C9E1BB0E5A79FEDA471C0679D51F * get_activeSceneChanged_2() const { return ___activeSceneChanged_2; }
	inline UnityAction_2_t6FF15ABDB8C2C9E1BB0E5A79FEDA471C0679D51F ** get_address_of_activeSceneChanged_2() { return &___activeSceneChanged_2; }
	inline void set_activeSceneChanged_2(UnityAction_2_t6FF15ABDB8C2C9E1BB0E5A79FEDA471C0679D51F * value)
	{
		___activeSceneChanged_2 = value;
		Il2CppCodeGenWriteBarrier((&___activeSceneChanged_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SCENEMANAGER_T68A7070D2AD3860C3EE327C94F38270E49AFB489_H
#ifndef DATAUTILITY_TCB73BC0DADF53AB46BADD161F652D75507C8A872_H
#define DATAUTILITY_TCB73BC0DADF53AB46BADD161F652D75507C8A872_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Sprites.DataUtility
struct  DataUtility_tCB73BC0DADF53AB46BADD161F652D75507C8A872  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATAUTILITY_TCB73BC0DADF53AB46BADD161F652D75507C8A872_H
#ifndef ENUMERATOR_T638F7B8050EF8C37413868F2AF7EA5E1D36123CC_H
#define ENUMERATOR_T638F7B8050EF8C37413868F2AF7EA5E1D36123CC_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Transform/Enumerator
struct  Enumerator_t638F7B8050EF8C37413868F2AF7EA5E1D36123CC  : public RuntimeObject
{
public:
	// UnityEngine.Transform UnityEngine.Transform/Enumerator::outer
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___outer_0;
	// System.Int32 UnityEngine.Transform/Enumerator::currentIndex
	int32_t ___currentIndex_1;

public:
	inline static int32_t get_offset_of_outer_0() { return static_cast<int32_t>(offsetof(Enumerator_t638F7B8050EF8C37413868F2AF7EA5E1D36123CC, ___outer_0)); }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * get_outer_0() const { return ___outer_0; }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA ** get_address_of_outer_0() { return &___outer_0; }
	inline void set_outer_0(Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * value)
	{
		___outer_0 = value;
		Il2CppCodeGenWriteBarrier((&___outer_0), value);
	}

	inline static int32_t get_offset_of_currentIndex_1() { return static_cast<int32_t>(offsetof(Enumerator_t638F7B8050EF8C37413868F2AF7EA5E1D36123CC, ___currentIndex_1)); }
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
#endif // ENUMERATOR_T638F7B8050EF8C37413868F2AF7EA5E1D36123CC_H
#ifndef SPRITEATLASMANAGER_T1C01B60566565F3F93DB97484F390383781FF98F_H
#define SPRITEATLASMANAGER_T1C01B60566565F3F93DB97484F390383781FF98F_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.U2D.SpriteAtlasManager
struct  SpriteAtlasManager_t1C01B60566565F3F93DB97484F390383781FF98F  : public RuntimeObject
{
public:

public:
};

struct SpriteAtlasManager_t1C01B60566565F3F93DB97484F390383781FF98F_StaticFields
{
public:
	// System.Action`2<System.String,System.Action`1<UnityEngine.U2D.SpriteAtlas>> UnityEngine.U2D.SpriteAtlasManager::atlasRequested
	Action_2_t93D9A2FE2A1A1E8453EFAE70181CB587FB14FBB4 * ___atlasRequested_0;
	// System.Action`1<UnityEngine.U2D.SpriteAtlas> UnityEngine.U2D.SpriteAtlasManager::atlasRegistered
	Action_1_t148D4FE58B48D51DD45913A7B6EAA61E30D4B285 * ___atlasRegistered_1;
	// System.Action`1<UnityEngine.U2D.SpriteAtlas> UnityEngine.U2D.SpriteAtlasManager::<>f__mg$cache0
	Action_1_t148D4FE58B48D51DD45913A7B6EAA61E30D4B285 * ___U3CU3Ef__mgU24cache0_2;

public:
	inline static int32_t get_offset_of_atlasRequested_0() { return static_cast<int32_t>(offsetof(SpriteAtlasManager_t1C01B60566565F3F93DB97484F390383781FF98F_StaticFields, ___atlasRequested_0)); }
	inline Action_2_t93D9A2FE2A1A1E8453EFAE70181CB587FB14FBB4 * get_atlasRequested_0() const { return ___atlasRequested_0; }
	inline Action_2_t93D9A2FE2A1A1E8453EFAE70181CB587FB14FBB4 ** get_address_of_atlasRequested_0() { return &___atlasRequested_0; }
	inline void set_atlasRequested_0(Action_2_t93D9A2FE2A1A1E8453EFAE70181CB587FB14FBB4 * value)
	{
		___atlasRequested_0 = value;
		Il2CppCodeGenWriteBarrier((&___atlasRequested_0), value);
	}

	inline static int32_t get_offset_of_atlasRegistered_1() { return static_cast<int32_t>(offsetof(SpriteAtlasManager_t1C01B60566565F3F93DB97484F390383781FF98F_StaticFields, ___atlasRegistered_1)); }
	inline Action_1_t148D4FE58B48D51DD45913A7B6EAA61E30D4B285 * get_atlasRegistered_1() const { return ___atlasRegistered_1; }
	inline Action_1_t148D4FE58B48D51DD45913A7B6EAA61E30D4B285 ** get_address_of_atlasRegistered_1() { return &___atlasRegistered_1; }
	inline void set_atlasRegistered_1(Action_1_t148D4FE58B48D51DD45913A7B6EAA61E30D4B285 * value)
	{
		___atlasRegistered_1 = value;
		Il2CppCodeGenWriteBarrier((&___atlasRegistered_1), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache0_2() { return static_cast<int32_t>(offsetof(SpriteAtlasManager_t1C01B60566565F3F93DB97484F390383781FF98F_StaticFields, ___U3CU3Ef__mgU24cache0_2)); }
	inline Action_1_t148D4FE58B48D51DD45913A7B6EAA61E30D4B285 * get_U3CU3Ef__mgU24cache0_2() const { return ___U3CU3Ef__mgU24cache0_2; }
	inline Action_1_t148D4FE58B48D51DD45913A7B6EAA61E30D4B285 ** get_address_of_U3CU3Ef__mgU24cache0_2() { return &___U3CU3Ef__mgU24cache0_2; }
	inline void set_U3CU3Ef__mgU24cache0_2(Action_1_t148D4FE58B48D51DD45913A7B6EAA61E30D4B285 * value)
	{
		___U3CU3Ef__mgU24cache0_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache0_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SPRITEATLASMANAGER_T1C01B60566565F3F93DB97484F390383781FF98F_H
#ifndef NOTIFICATIONHELPER_T0EB5401C1C0BCA9E371168B32D8BAFDB94CEDC07_H
#define NOTIFICATIONHELPER_T0EB5401C1C0BCA9E371168B32D8BAFDB94CEDC07_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.iOS.NotificationHelper
struct  NotificationHelper_t0EB5401C1C0BCA9E371168B32D8BAFDB94CEDC07  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NOTIFICATIONHELPER_T0EB5401C1C0BCA9E371168B32D8BAFDB94CEDC07_H
#ifndef NETFXCOREEXTENSIONS_T7D32855D478E08AB317D48832133C0584F744747_H
#define NETFXCOREEXTENSIONS_T7D32855D478E08AB317D48832133C0584F744747_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngineInternal.NetFxCoreExtensions
struct  NetFxCoreExtensions_t7D32855D478E08AB317D48832133C0584F744747  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NETFXCOREEXTENSIONS_T7D32855D478E08AB317D48832133C0584F744747_H
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
	RandomNumberGenerator_t12277F7F965BA79C54E4B3BFABD27A5FFB725EE2 * ____rng_13;

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
	inline RandomNumberGenerator_t12277F7F965BA79C54E4B3BFABD27A5FFB725EE2 * get__rng_13() const { return ____rng_13; }
	inline RandomNumberGenerator_t12277F7F965BA79C54E4B3BFABD27A5FFB725EE2 ** get_address_of__rng_13() { return &____rng_13; }
	inline void set__rng_13(RandomNumberGenerator_t12277F7F965BA79C54E4B3BFABD27A5FFB725EE2 * value)
	{
		____rng_13 = value;
		Il2CppCodeGenWriteBarrier((&____rng_13), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GUID_T_H
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
#ifndef ANIMATORCLIPINFO_T78457ABBA83D388EDFF26F436F5E61A29CF4E180_H
#define ANIMATORCLIPINFO_T78457ABBA83D388EDFF26F436F5E61A29CF4E180_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AnimatorClipInfo
struct  AnimatorClipInfo_t78457ABBA83D388EDFF26F436F5E61A29CF4E180 
{
public:
	// System.Int32 UnityEngine.AnimatorClipInfo::m_ClipInstanceID
	int32_t ___m_ClipInstanceID_0;
	// System.Single UnityEngine.AnimatorClipInfo::m_Weight
	float ___m_Weight_1;

public:
	inline static int32_t get_offset_of_m_ClipInstanceID_0() { return static_cast<int32_t>(offsetof(AnimatorClipInfo_t78457ABBA83D388EDFF26F436F5E61A29CF4E180, ___m_ClipInstanceID_0)); }
	inline int32_t get_m_ClipInstanceID_0() const { return ___m_ClipInstanceID_0; }
	inline int32_t* get_address_of_m_ClipInstanceID_0() { return &___m_ClipInstanceID_0; }
	inline void set_m_ClipInstanceID_0(int32_t value)
	{
		___m_ClipInstanceID_0 = value;
	}

	inline static int32_t get_offset_of_m_Weight_1() { return static_cast<int32_t>(offsetof(AnimatorClipInfo_t78457ABBA83D388EDFF26F436F5E61A29CF4E180, ___m_Weight_1)); }
	inline float get_m_Weight_1() const { return ___m_Weight_1; }
	inline float* get_address_of_m_Weight_1() { return &___m_Weight_1; }
	inline void set_m_Weight_1(float value)
	{
		___m_Weight_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ANIMATORCLIPINFO_T78457ABBA83D388EDFF26F436F5E61A29CF4E180_H
#ifndef COLOR_T119BCA590009762C7223FDD3AF9706653AC84ED2_H
#define COLOR_T119BCA590009762C7223FDD3AF9706653AC84ED2_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Color
struct  Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 
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
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___a_3)); }
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
#endif // COLOR_T119BCA590009762C7223FDD3AF9706653AC84ED2_H
#ifndef COLOR32_T23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23_H
#define COLOR32_T23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Color32
struct  Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23 
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
	inline static int32_t get_offset_of_rgba_0() { return static_cast<int32_t>(offsetof(Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23, ___rgba_0)); }
	inline int32_t get_rgba_0() const { return ___rgba_0; }
	inline int32_t* get_address_of_rgba_0() { return &___rgba_0; }
	inline void set_rgba_0(int32_t value)
	{
		___rgba_0 = value;
	}

	inline static int32_t get_offset_of_r_1() { return static_cast<int32_t>(offsetof(Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23, ___r_1)); }
	inline uint8_t get_r_1() const { return ___r_1; }
	inline uint8_t* get_address_of_r_1() { return &___r_1; }
	inline void set_r_1(uint8_t value)
	{
		___r_1 = value;
	}

	inline static int32_t get_offset_of_g_2() { return static_cast<int32_t>(offsetof(Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23, ___g_2)); }
	inline uint8_t get_g_2() const { return ___g_2; }
	inline uint8_t* get_address_of_g_2() { return &___g_2; }
	inline void set_g_2(uint8_t value)
	{
		___g_2 = value;
	}

	inline static int32_t get_offset_of_b_3() { return static_cast<int32_t>(offsetof(Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23, ___b_3)); }
	inline uint8_t get_b_3() const { return ___b_3; }
	inline uint8_t* get_address_of_b_3() { return &___b_3; }
	inline void set_b_3(uint8_t value)
	{
		___b_3 = value;
	}

	inline static int32_t get_offset_of_a_4() { return static_cast<int32_t>(offsetof(Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23, ___a_4)); }
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
#endif // COLOR32_T23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23_H
#ifndef DRIVENRECTTRANSFORMTRACKER_TB8FBBE24EEE9618CA32E4B3CF52F4AD7FDDEBE03_H
#define DRIVENRECTTRANSFORMTRACKER_TB8FBBE24EEE9618CA32E4B3CF52F4AD7FDDEBE03_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.DrivenRectTransformTracker
struct  DrivenRectTransformTracker_tB8FBBE24EEE9618CA32E4B3CF52F4AD7FDDEBE03 
{
public:
	union
	{
		struct
		{
		};
		uint8_t DrivenRectTransformTracker_tB8FBBE24EEE9618CA32E4B3CF52F4AD7FDDEBE03__padding[1];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DRIVENRECTTRANSFORMTRACKER_TB8FBBE24EEE9618CA32E4B3CF52F4AD7FDDEBE03_H
#ifndef UNITYEVENT_1_T6DD758393B13FC2A58BE44E647D9EBEA4F27D914_H
#define UNITYEVENT_1_T6DD758393B13FC2A58BE44E647D9EBEA4F27D914_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.UnityEvent`1<System.Int32>
struct  UnityEvent_1_t6DD758393B13FC2A58BE44E647D9EBEA4F27D914  : public UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___m_InvokeArray_4;

public:
	inline static int32_t get_offset_of_m_InvokeArray_4() { return static_cast<int32_t>(offsetof(UnityEvent_1_t6DD758393B13FC2A58BE44E647D9EBEA4F27D914, ___m_InvokeArray_4)); }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* get_m_InvokeArray_4() const { return ___m_InvokeArray_4; }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** get_address_of_m_InvokeArray_4() { return &___m_InvokeArray_4; }
	inline void set_m_InvokeArray_4(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* value)
	{
		___m_InvokeArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_InvokeArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYEVENT_1_T6DD758393B13FC2A58BE44E647D9EBEA4F27D914_H
#ifndef UNITYEVENT_1_T74D81F82F43FEE6D3592CADCB4D7253AFFC12332_H
#define UNITYEVENT_1_T74D81F82F43FEE6D3592CADCB4D7253AFFC12332_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.UnityEvent`1<UnityEngine.Networking.PlayerConnection.MessageEventArgs>
struct  UnityEvent_1_t74D81F82F43FEE6D3592CADCB4D7253AFFC12332  : public UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___m_InvokeArray_4;

public:
	inline static int32_t get_offset_of_m_InvokeArray_4() { return static_cast<int32_t>(offsetof(UnityEvent_1_t74D81F82F43FEE6D3592CADCB4D7253AFFC12332, ___m_InvokeArray_4)); }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* get_m_InvokeArray_4() const { return ___m_InvokeArray_4; }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** get_address_of_m_InvokeArray_4() { return &___m_InvokeArray_4; }
	inline void set_m_InvokeArray_4(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* value)
	{
		___m_InvokeArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_InvokeArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYEVENT_1_T74D81F82F43FEE6D3592CADCB4D7253AFFC12332_H
#ifndef EXTENSIONOFNATIVECLASSATTRIBUTE_T595E5601C3ACC7C8A8C5AEE90A05E7C7FF977FDF_H
#define EXTENSIONOFNATIVECLASSATTRIBUTE_T595E5601C3ACC7C8A8C5AEE90A05E7C7FF977FDF_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.ExtensionOfNativeClassAttribute
struct  ExtensionOfNativeClassAttribute_t595E5601C3ACC7C8A8C5AEE90A05E7C7FF977FDF  : public Attribute_tF048C13FB3C8CFCC53F82290E4A3F621089F9A74
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXTENSIONOFNATIVECLASSATTRIBUTE_T595E5601C3ACC7C8A8C5AEE90A05E7C7FF977FDF_H
#ifndef DEFAULTVALUEATTRIBUTE_T71AB43F14F9BC6FF9A3D760A99915A544D5E9B9A_H
#define DEFAULTVALUEATTRIBUTE_T71AB43F14F9BC6FF9A3D760A99915A544D5E9B9A_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Internal.DefaultValueAttribute
struct  DefaultValueAttribute_t71AB43F14F9BC6FF9A3D760A99915A544D5E9B9A  : public Attribute_tF048C13FB3C8CFCC53F82290E4A3F621089F9A74
{
public:
	// System.Object UnityEngine.Internal.DefaultValueAttribute::DefaultValue
	RuntimeObject * ___DefaultValue_0;

public:
	inline static int32_t get_offset_of_DefaultValue_0() { return static_cast<int32_t>(offsetof(DefaultValueAttribute_t71AB43F14F9BC6FF9A3D760A99915A544D5E9B9A, ___DefaultValue_0)); }
	inline RuntimeObject * get_DefaultValue_0() const { return ___DefaultValue_0; }
	inline RuntimeObject ** get_address_of_DefaultValue_0() { return &___DefaultValue_0; }
	inline void set_DefaultValue_0(RuntimeObject * value)
	{
		___DefaultValue_0 = value;
		Il2CppCodeGenWriteBarrier((&___DefaultValue_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEFAULTVALUEATTRIBUTE_T71AB43F14F9BC6FF9A3D760A99915A544D5E9B9A_H
#ifndef EXCLUDEFROMDOCSATTRIBUTE_TD383C690B3BAC7B087185EACA5A93BEEF03C7B7A_H
#define EXCLUDEFROMDOCSATTRIBUTE_TD383C690B3BAC7B087185EACA5A93BEEF03C7B7A_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Internal.ExcludeFromDocsAttribute
struct  ExcludeFromDocsAttribute_tD383C690B3BAC7B087185EACA5A93BEEF03C7B7A  : public Attribute_tF048C13FB3C8CFCC53F82290E4A3F621089F9A74
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXCLUDEFROMDOCSATTRIBUTE_TD383C690B3BAC7B087185EACA5A93BEEF03C7B7A_H
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
#ifndef SCENE_T942E023788C2BC9FBB7EC8356B4FB0088B2CFED2_H
#define SCENE_T942E023788C2BC9FBB7EC8356B4FB0088B2CFED2_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SceneManagement.Scene
struct  Scene_t942E023788C2BC9FBB7EC8356B4FB0088B2CFED2 
{
public:
	// System.Int32 UnityEngine.SceneManagement.Scene::m_Handle
	int32_t ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(Scene_t942E023788C2BC9FBB7EC8356B4FB0088B2CFED2, ___m_Handle_0)); }
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
#endif // SCENE_T942E023788C2BC9FBB7EC8356B4FB0088B2CFED2_H
#ifndef MOVEDFROMATTRIBUTE_TE9A667A7698BEF9EA09BF23E4308CD1EC2099162_H
#define MOVEDFROMATTRIBUTE_TE9A667A7698BEF9EA09BF23E4308CD1EC2099162_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Scripting.APIUpdating.MovedFromAttribute
struct  MovedFromAttribute_tE9A667A7698BEF9EA09BF23E4308CD1EC2099162  : public Attribute_tF048C13FB3C8CFCC53F82290E4A3F621089F9A74
{
public:
	// System.String UnityEngine.Scripting.APIUpdating.MovedFromAttribute::<Namespace>k__BackingField
	String_t* ___U3CNamespaceU3Ek__BackingField_0;
	// System.Boolean UnityEngine.Scripting.APIUpdating.MovedFromAttribute::<IsInDifferentAssembly>k__BackingField
	bool ___U3CIsInDifferentAssemblyU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CNamespaceU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(MovedFromAttribute_tE9A667A7698BEF9EA09BF23E4308CD1EC2099162, ___U3CNamespaceU3Ek__BackingField_0)); }
	inline String_t* get_U3CNamespaceU3Ek__BackingField_0() const { return ___U3CNamespaceU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CNamespaceU3Ek__BackingField_0() { return &___U3CNamespaceU3Ek__BackingField_0; }
	inline void set_U3CNamespaceU3Ek__BackingField_0(String_t* value)
	{
		___U3CNamespaceU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CNamespaceU3Ek__BackingField_0), value);
	}

	inline static int32_t get_offset_of_U3CIsInDifferentAssemblyU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(MovedFromAttribute_tE9A667A7698BEF9EA09BF23E4308CD1EC2099162, ___U3CIsInDifferentAssemblyU3Ek__BackingField_1)); }
	inline bool get_U3CIsInDifferentAssemblyU3Ek__BackingField_1() const { return ___U3CIsInDifferentAssemblyU3Ek__BackingField_1; }
	inline bool* get_address_of_U3CIsInDifferentAssemblyU3Ek__BackingField_1() { return &___U3CIsInDifferentAssemblyU3Ek__BackingField_1; }
	inline void set_U3CIsInDifferentAssemblyU3Ek__BackingField_1(bool value)
	{
		___U3CIsInDifferentAssemblyU3Ek__BackingField_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MOVEDFROMATTRIBUTE_TE9A667A7698BEF9EA09BF23E4308CD1EC2099162_H
#ifndef PRESERVEATTRIBUTE_T864F9DAA4DBF2524206AD57CE51AEB955702AA3F_H
#define PRESERVEATTRIBUTE_T864F9DAA4DBF2524206AD57CE51AEB955702AA3F_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Scripting.PreserveAttribute
struct  PreserveAttribute_t864F9DAA4DBF2524206AD57CE51AEB955702AA3F  : public Attribute_tF048C13FB3C8CFCC53F82290E4A3F621089F9A74
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PRESERVEATTRIBUTE_T864F9DAA4DBF2524206AD57CE51AEB955702AA3F_H
#ifndef FORMERLYSERIALIZEDASATTRIBUTE_T31939F907F52C74DB25B51BB0064837BC15760AC_H
#define FORMERLYSERIALIZEDASATTRIBUTE_T31939F907F52C74DB25B51BB0064837BC15760AC_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Serialization.FormerlySerializedAsAttribute
struct  FormerlySerializedAsAttribute_t31939F907F52C74DB25B51BB0064837BC15760AC  : public Attribute_tF048C13FB3C8CFCC53F82290E4A3F621089F9A74
{
public:
	// System.String UnityEngine.Serialization.FormerlySerializedAsAttribute::m_oldName
	String_t* ___m_oldName_0;

public:
	inline static int32_t get_offset_of_m_oldName_0() { return static_cast<int32_t>(offsetof(FormerlySerializedAsAttribute_t31939F907F52C74DB25B51BB0064837BC15760AC, ___m_oldName_0)); }
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
#endif // FORMERLYSERIALIZEDASATTRIBUTE_T31939F907F52C74DB25B51BB0064837BC15760AC_H
#ifndef SHAREDBETWEENANIMATORSATTRIBUTE_TD52C4EACCF9B8F7A21A34D11D3971A823B131F03_H
#define SHAREDBETWEENANIMATORSATTRIBUTE_TD52C4EACCF9B8F7A21A34D11D3971A823B131F03_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SharedBetweenAnimatorsAttribute
struct  SharedBetweenAnimatorsAttribute_tD52C4EACCF9B8F7A21A34D11D3971A823B131F03  : public Attribute_tF048C13FB3C8CFCC53F82290E4A3F621089F9A74
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SHAREDBETWEENANIMATORSATTRIBUTE_TD52C4EACCF9B8F7A21A34D11D3971A823B131F03_H
#ifndef UILINEINFO_T0AF27251CA07CEE2BC0C1FEF752245596B8033E6_H
#define UILINEINFO_T0AF27251CA07CEE2BC0C1FEF752245596B8033E6_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UILineInfo
struct  UILineInfo_t0AF27251CA07CEE2BC0C1FEF752245596B8033E6 
{
public:
	// System.Int32 UnityEngine.UILineInfo::startCharIdx
	int32_t ___startCharIdx_0;
	// System.Int32 UnityEngine.UILineInfo::height
	int32_t ___height_1;
	// System.Single UnityEngine.UILineInfo::topY
	float ___topY_2;
	// System.Single UnityEngine.UILineInfo::leading
	float ___leading_3;

public:
	inline static int32_t get_offset_of_startCharIdx_0() { return static_cast<int32_t>(offsetof(UILineInfo_t0AF27251CA07CEE2BC0C1FEF752245596B8033E6, ___startCharIdx_0)); }
	inline int32_t get_startCharIdx_0() const { return ___startCharIdx_0; }
	inline int32_t* get_address_of_startCharIdx_0() { return &___startCharIdx_0; }
	inline void set_startCharIdx_0(int32_t value)
	{
		___startCharIdx_0 = value;
	}

	inline static int32_t get_offset_of_height_1() { return static_cast<int32_t>(offsetof(UILineInfo_t0AF27251CA07CEE2BC0C1FEF752245596B8033E6, ___height_1)); }
	inline int32_t get_height_1() const { return ___height_1; }
	inline int32_t* get_address_of_height_1() { return &___height_1; }
	inline void set_height_1(int32_t value)
	{
		___height_1 = value;
	}

	inline static int32_t get_offset_of_topY_2() { return static_cast<int32_t>(offsetof(UILineInfo_t0AF27251CA07CEE2BC0C1FEF752245596B8033E6, ___topY_2)); }
	inline float get_topY_2() const { return ___topY_2; }
	inline float* get_address_of_topY_2() { return &___topY_2; }
	inline void set_topY_2(float value)
	{
		___topY_2 = value;
	}

	inline static int32_t get_offset_of_leading_3() { return static_cast<int32_t>(offsetof(UILineInfo_t0AF27251CA07CEE2BC0C1FEF752245596B8033E6, ___leading_3)); }
	inline float get_leading_3() const { return ___leading_3; }
	inline float* get_address_of_leading_3() { return &___leading_3; }
	inline void set_leading_3(float value)
	{
		___leading_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UILINEINFO_T0AF27251CA07CEE2BC0C1FEF752245596B8033E6_H
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
#ifndef GENERICSTACK_TC59D21E8DBC50F3C608479C942200AC44CA2D5BC_H
#define GENERICSTACK_TC59D21E8DBC50F3C608479C942200AC44CA2D5BC_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngineInternal.GenericStack
struct  GenericStack_tC59D21E8DBC50F3C608479C942200AC44CA2D5BC  : public Stack_t37723B68CC4FFD95F0F3D06A5D42D7DEE7569643
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GENERICSTACK_TC59D21E8DBC50F3C608479C942200AC44CA2D5BC_H
#ifndef TYPEINFERENCERULEATTRIBUTE_TEB3BA6FDE6D6817FD33E2620200007EB9730214B_H
#define TYPEINFERENCERULEATTRIBUTE_TEB3BA6FDE6D6817FD33E2620200007EB9730214B_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngineInternal.TypeInferenceRuleAttribute
struct  TypeInferenceRuleAttribute_tEB3BA6FDE6D6817FD33E2620200007EB9730214B  : public Attribute_tF048C13FB3C8CFCC53F82290E4A3F621089F9A74
{
public:
	// System.String UnityEngineInternal.TypeInferenceRuleAttribute::_rule
	String_t* ____rule_0;

public:
	inline static int32_t get_offset_of__rule_0() { return static_cast<int32_t>(offsetof(TypeInferenceRuleAttribute_tEB3BA6FDE6D6817FD33E2620200007EB9730214B, ____rule_0)); }
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
#endif // TYPEINFERENCERULEATTRIBUTE_TEB3BA6FDE6D6817FD33E2620200007EB9730214B_H
#ifndef DELEGATE_T_H
#define DELEGATE_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Delegate
struct  Delegate_t  : public RuntimeObject
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
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_10;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_target_2), value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_extra_arg_5() { return static_cast<int32_t>(offsetof(Delegate_t, ___extra_arg_5)); }
	inline intptr_t get_extra_arg_5() const { return ___extra_arg_5; }
	inline intptr_t* get_address_of_extra_arg_5() { return &___extra_arg_5; }
	inline void set_extra_arg_5(intptr_t value)
	{
		___extra_arg_5 = value;
	}

	inline static int32_t get_offset_of_method_code_6() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_code_6)); }
	inline intptr_t get_method_code_6() const { return ___method_code_6; }
	inline intptr_t* get_address_of_method_code_6() { return &___method_code_6; }
	inline void set_method_code_6(intptr_t value)
	{
		___method_code_6 = value;
	}

	inline static int32_t get_offset_of_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_info_7)); }
	inline MethodInfo_t * get_method_info_7() const { return ___method_info_7; }
	inline MethodInfo_t ** get_address_of_method_info_7() { return &___method_info_7; }
	inline void set_method_info_7(MethodInfo_t * value)
	{
		___method_info_7 = value;
		Il2CppCodeGenWriteBarrier((&___method_info_7), value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((&___original_method_info_8), value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t, ___data_9)); }
	inline DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * get_data_9() const { return ___data_9; }
	inline DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((&___data_9), value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_is_virtual_10)); }
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
struct Delegate_t_marshaled_pinvoke
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
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
	int32_t ___method_is_virtual_10;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
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
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
	int32_t ___method_is_virtual_10;
};
#endif // DELEGATE_T_H
#ifndef DRIVENTRANSFORMPROPERTIES_TE19A09F25C763B9190D4F0CD90ABC01F1C6CEC5F_H
#define DRIVENTRANSFORMPROPERTIES_TE19A09F25C763B9190D4F0CD90ABC01F1C6CEC5F_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.DrivenTransformProperties
struct  DrivenTransformProperties_tE19A09F25C763B9190D4F0CD90ABC01F1C6CEC5F 
{
public:
	// System.Int32 UnityEngine.DrivenTransformProperties::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DrivenTransformProperties_tE19A09F25C763B9190D4F0CD90ABC01F1C6CEC5F, ___value___2)); }
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
#endif // DRIVENTRANSFORMPROPERTIES_TE19A09F25C763B9190D4F0CD90ABC01F1C6CEC5F_H
#ifndef ANIMATIONHUMANSTREAM_T576024C2BE0EAD2602F724B6C0A61A6A72E6F5C2_H
#define ANIMATIONHUMANSTREAM_T576024C2BE0EAD2602F724B6C0A61A6A72E6F5C2_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.Animations.AnimationHumanStream
struct  AnimationHumanStream_t576024C2BE0EAD2602F724B6C0A61A6A72E6F5C2 
{
public:
	// System.IntPtr UnityEngine.Experimental.Animations.AnimationHumanStream::stream
	intptr_t ___stream_0;

public:
	inline static int32_t get_offset_of_stream_0() { return static_cast<int32_t>(offsetof(AnimationHumanStream_t576024C2BE0EAD2602F724B6C0A61A6A72E6F5C2, ___stream_0)); }
	inline intptr_t get_stream_0() const { return ___stream_0; }
	inline intptr_t* get_address_of_stream_0() { return &___stream_0; }
	inline void set_stream_0(intptr_t value)
	{
		___stream_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ANIMATIONHUMANSTREAM_T576024C2BE0EAD2602F724B6C0A61A6A72E6F5C2_H
#ifndef ANIMATIONSTREAM_TF539D75F7B97F32656D025617E8EDB5C9A2F715E_H
#define ANIMATIONSTREAM_TF539D75F7B97F32656D025617E8EDB5C9A2F715E_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.Animations.AnimationStream
struct  AnimationStream_tF539D75F7B97F32656D025617E8EDB5C9A2F715E 
{
public:
	// System.UInt32 UnityEngine.Experimental.Animations.AnimationStream::m_AnimatorBindingsVersion
	uint32_t ___m_AnimatorBindingsVersion_0;
	// System.IntPtr UnityEngine.Experimental.Animations.AnimationStream::constant
	intptr_t ___constant_1;
	// System.IntPtr UnityEngine.Experimental.Animations.AnimationStream::input
	intptr_t ___input_2;
	// System.IntPtr UnityEngine.Experimental.Animations.AnimationStream::output
	intptr_t ___output_3;
	// System.IntPtr UnityEngine.Experimental.Animations.AnimationStream::workspace
	intptr_t ___workspace_4;
	// System.IntPtr UnityEngine.Experimental.Animations.AnimationStream::inputStreamAccessor
	intptr_t ___inputStreamAccessor_5;
	// System.IntPtr UnityEngine.Experimental.Animations.AnimationStream::animationHandleBinder
	intptr_t ___animationHandleBinder_6;

public:
	inline static int32_t get_offset_of_m_AnimatorBindingsVersion_0() { return static_cast<int32_t>(offsetof(AnimationStream_tF539D75F7B97F32656D025617E8EDB5C9A2F715E, ___m_AnimatorBindingsVersion_0)); }
	inline uint32_t get_m_AnimatorBindingsVersion_0() const { return ___m_AnimatorBindingsVersion_0; }
	inline uint32_t* get_address_of_m_AnimatorBindingsVersion_0() { return &___m_AnimatorBindingsVersion_0; }
	inline void set_m_AnimatorBindingsVersion_0(uint32_t value)
	{
		___m_AnimatorBindingsVersion_0 = value;
	}

	inline static int32_t get_offset_of_constant_1() { return static_cast<int32_t>(offsetof(AnimationStream_tF539D75F7B97F32656D025617E8EDB5C9A2F715E, ___constant_1)); }
	inline intptr_t get_constant_1() const { return ___constant_1; }
	inline intptr_t* get_address_of_constant_1() { return &___constant_1; }
	inline void set_constant_1(intptr_t value)
	{
		___constant_1 = value;
	}

	inline static int32_t get_offset_of_input_2() { return static_cast<int32_t>(offsetof(AnimationStream_tF539D75F7B97F32656D025617E8EDB5C9A2F715E, ___input_2)); }
	inline intptr_t get_input_2() const { return ___input_2; }
	inline intptr_t* get_address_of_input_2() { return &___input_2; }
	inline void set_input_2(intptr_t value)
	{
		___input_2 = value;
	}

	inline static int32_t get_offset_of_output_3() { return static_cast<int32_t>(offsetof(AnimationStream_tF539D75F7B97F32656D025617E8EDB5C9A2F715E, ___output_3)); }
	inline intptr_t get_output_3() const { return ___output_3; }
	inline intptr_t* get_address_of_output_3() { return &___output_3; }
	inline void set_output_3(intptr_t value)
	{
		___output_3 = value;
	}

	inline static int32_t get_offset_of_workspace_4() { return static_cast<int32_t>(offsetof(AnimationStream_tF539D75F7B97F32656D025617E8EDB5C9A2F715E, ___workspace_4)); }
	inline intptr_t get_workspace_4() const { return ___workspace_4; }
	inline intptr_t* get_address_of_workspace_4() { return &___workspace_4; }
	inline void set_workspace_4(intptr_t value)
	{
		___workspace_4 = value;
	}

	inline static int32_t get_offset_of_inputStreamAccessor_5() { return static_cast<int32_t>(offsetof(AnimationStream_tF539D75F7B97F32656D025617E8EDB5C9A2F715E, ___inputStreamAccessor_5)); }
	inline intptr_t get_inputStreamAccessor_5() const { return ___inputStreamAccessor_5; }
	inline intptr_t* get_address_of_inputStreamAccessor_5() { return &___inputStreamAccessor_5; }
	inline void set_inputStreamAccessor_5(intptr_t value)
	{
		___inputStreamAccessor_5 = value;
	}

	inline static int32_t get_offset_of_animationHandleBinder_6() { return static_cast<int32_t>(offsetof(AnimationStream_tF539D75F7B97F32656D025617E8EDB5C9A2F715E, ___animationHandleBinder_6)); }
	inline intptr_t get_animationHandleBinder_6() const { return ___animationHandleBinder_6; }
	inline intptr_t* get_address_of_animationHandleBinder_6() { return &___animationHandleBinder_6; }
	inline void set_animationHandleBinder_6(intptr_t value)
	{
		___animationHandleBinder_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ANIMATIONSTREAM_TF539D75F7B97F32656D025617E8EDB5C9A2F715E_H
#ifndef LIGHTMAPMIXEDBAKEMODE_TEEB17B701329F03407D091EDFF6D4AC04B0FF394_H
#define LIGHTMAPMIXEDBAKEMODE_TEEB17B701329F03407D091EDFF6D4AC04B0FF394_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.Rendering.SupportedRenderingFeatures/LightmapMixedBakeMode
struct  LightmapMixedBakeMode_tEEB17B701329F03407D091EDFF6D4AC04B0FF394 
{
public:
	// System.Int32 UnityEngine.Experimental.Rendering.SupportedRenderingFeatures/LightmapMixedBakeMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(LightmapMixedBakeMode_tEEB17B701329F03407D091EDFF6D4AC04B0FF394, ___value___2)); }
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
#endif // LIGHTMAPMIXEDBAKEMODE_TEEB17B701329F03407D091EDFF6D4AC04B0FF394_H
#ifndef REFLECTIONPROBESUPPORTFLAGS_T6889D3ACC24B40D648C7FB8194707698CCA5EC7A_H
#define REFLECTIONPROBESUPPORTFLAGS_T6889D3ACC24B40D648C7FB8194707698CCA5EC7A_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.Rendering.SupportedRenderingFeatures/ReflectionProbeSupportFlags
struct  ReflectionProbeSupportFlags_t6889D3ACC24B40D648C7FB8194707698CCA5EC7A 
{
public:
	// System.Int32 UnityEngine.Experimental.Rendering.SupportedRenderingFeatures/ReflectionProbeSupportFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ReflectionProbeSupportFlags_t6889D3ACC24B40D648C7FB8194707698CCA5EC7A, ___value___2)); }
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
#endif // REFLECTIONPROBESUPPORTFLAGS_T6889D3ACC24B40D648C7FB8194707698CCA5EC7A_H
#ifndef SPRITEBONE_TD75C1B533C9282AEC369B66DF430C1CAC3C8BEB2_H
#define SPRITEBONE_TD75C1B533C9282AEC369B66DF430C1CAC3C8BEB2_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.U2D.SpriteBone
struct  SpriteBone_tD75C1B533C9282AEC369B66DF430C1CAC3C8BEB2 
{
public:
	// System.String UnityEngine.Experimental.U2D.SpriteBone::m_Name
	String_t* ___m_Name_0;
	// UnityEngine.Vector3 UnityEngine.Experimental.U2D.SpriteBone::m_Position
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___m_Position_1;
	// UnityEngine.Quaternion UnityEngine.Experimental.U2D.SpriteBone::m_Rotation
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___m_Rotation_2;
	// System.Single UnityEngine.Experimental.U2D.SpriteBone::m_Length
	float ___m_Length_3;
	// System.Int32 UnityEngine.Experimental.U2D.SpriteBone::m_ParentId
	int32_t ___m_ParentId_4;

public:
	inline static int32_t get_offset_of_m_Name_0() { return static_cast<int32_t>(offsetof(SpriteBone_tD75C1B533C9282AEC369B66DF430C1CAC3C8BEB2, ___m_Name_0)); }
	inline String_t* get_m_Name_0() const { return ___m_Name_0; }
	inline String_t** get_address_of_m_Name_0() { return &___m_Name_0; }
	inline void set_m_Name_0(String_t* value)
	{
		___m_Name_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_Name_0), value);
	}

	inline static int32_t get_offset_of_m_Position_1() { return static_cast<int32_t>(offsetof(SpriteBone_tD75C1B533C9282AEC369B66DF430C1CAC3C8BEB2, ___m_Position_1)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_m_Position_1() const { return ___m_Position_1; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_m_Position_1() { return &___m_Position_1; }
	inline void set_m_Position_1(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___m_Position_1 = value;
	}

	inline static int32_t get_offset_of_m_Rotation_2() { return static_cast<int32_t>(offsetof(SpriteBone_tD75C1B533C9282AEC369B66DF430C1CAC3C8BEB2, ___m_Rotation_2)); }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  get_m_Rotation_2() const { return ___m_Rotation_2; }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * get_address_of_m_Rotation_2() { return &___m_Rotation_2; }
	inline void set_m_Rotation_2(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  value)
	{
		___m_Rotation_2 = value;
	}

	inline static int32_t get_offset_of_m_Length_3() { return static_cast<int32_t>(offsetof(SpriteBone_tD75C1B533C9282AEC369B66DF430C1CAC3C8BEB2, ___m_Length_3)); }
	inline float get_m_Length_3() const { return ___m_Length_3; }
	inline float* get_address_of_m_Length_3() { return &___m_Length_3; }
	inline void set_m_Length_3(float value)
	{
		___m_Length_3 = value;
	}

	inline static int32_t get_offset_of_m_ParentId_4() { return static_cast<int32_t>(offsetof(SpriteBone_tD75C1B533C9282AEC369B66DF430C1CAC3C8BEB2, ___m_ParentId_4)); }
	inline int32_t get_m_ParentId_4() const { return ___m_ParentId_4; }
	inline int32_t* get_address_of_m_ParentId_4() { return &___m_ParentId_4; }
	inline void set_m_ParentId_4(int32_t value)
	{
		___m_ParentId_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Experimental.U2D.SpriteBone
struct SpriteBone_tD75C1B533C9282AEC369B66DF430C1CAC3C8BEB2_marshaled_pinvoke
{
	char* ___m_Name_0;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___m_Position_1;
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___m_Rotation_2;
	float ___m_Length_3;
	int32_t ___m_ParentId_4;
};
// Native definition for COM marshalling of UnityEngine.Experimental.U2D.SpriteBone
struct SpriteBone_tD75C1B533C9282AEC369B66DF430C1CAC3C8BEB2_marshaled_com
{
	Il2CppChar* ___m_Name_0;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___m_Position_1;
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___m_Rotation_2;
	float ___m_Length_3;
	int32_t ___m_ParentId_4;
};
#endif // SPRITEBONE_TD75C1B533C9282AEC369B66DF430C1CAC3C8BEB2_H
#ifndef FONTSTYLE_T273973EBB1F40C2381F6D60AB957149DE5720CF3_H
#define FONTSTYLE_T273973EBB1F40C2381F6D60AB957149DE5720CF3_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.FontStyle
struct  FontStyle_t273973EBB1F40C2381F6D60AB957149DE5720CF3 
{
public:
	// System.Int32 UnityEngine.FontStyle::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FontStyle_t273973EBB1F40C2381F6D60AB957149DE5720CF3, ___value___2)); }
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
#endif // FONTSTYLE_T273973EBB1F40C2381F6D60AB957149DE5720CF3_H
#ifndef HORIZONTALWRAPMODE_T56D876281F814EC1AF0C21A34E20BBF4BEEA302C_H
#define HORIZONTALWRAPMODE_T56D876281F814EC1AF0C21A34E20BBF4BEEA302C_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.HorizontalWrapMode
struct  HorizontalWrapMode_t56D876281F814EC1AF0C21A34E20BBF4BEEA302C 
{
public:
	// System.Int32 UnityEngine.HorizontalWrapMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(HorizontalWrapMode_t56D876281F814EC1AF0C21A34E20BBF4BEEA302C, ___value___2)); }
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
#endif // HORIZONTALWRAPMODE_T56D876281F814EC1AF0C21A34E20BBF4BEEA302C_H
#ifndef LIGHTMAPBAKETYPE_TE25771860DE24FF67A6C12EBF0277B1018C48C22_H
#define LIGHTMAPBAKETYPE_TE25771860DE24FF67A6C12EBF0277B1018C48C22_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.LightmapBakeType
struct  LightmapBakeType_tE25771860DE24FF67A6C12EBF0277B1018C48C22 
{
public:
	// System.Int32 UnityEngine.LightmapBakeType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(LightmapBakeType_tE25771860DE24FF67A6C12EBF0277B1018C48C22, ___value___2)); }
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
#endif // LIGHTMAPBAKETYPE_TE25771860DE24FF67A6C12EBF0277B1018C48C22_H
#ifndef LIGHTMAPSMODE_T9783FF26F166392E6E10A551A3E87DE913DC2BCA_H
#define LIGHTMAPSMODE_T9783FF26F166392E6E10A551A3E87DE913DC2BCA_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.LightmapsMode
struct  LightmapsMode_t9783FF26F166392E6E10A551A3E87DE913DC2BCA 
{
public:
	// System.Int32 UnityEngine.LightmapsMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(LightmapsMode_t9783FF26F166392E6E10A551A3E87DE913DC2BCA, ___value___2)); }
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
#endif // LIGHTMAPSMODE_T9783FF26F166392E6E10A551A3E87DE913DC2BCA_H
#ifndef LOGTYPE_T6B6C6234E8B44B73937581ACFBE15DE28227849D_H
#define LOGTYPE_T6B6C6234E8B44B73937581ACFBE15DE28227849D_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.LogType
struct  LogType_t6B6C6234E8B44B73937581ACFBE15DE28227849D 
{
public:
	// System.Int32 UnityEngine.LogType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(LogType_t6B6C6234E8B44B73937581ACFBE15DE28227849D, ___value___2)); }
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
#endif // LOGTYPE_T6B6C6234E8B44B73937581ACFBE15DE28227849D_H
#ifndef U3CREGISTERU3EC__ANONSTOREY0_T4375D335A7606DAF99A8211D91BDC830C6EAC2C9_H
#define U3CREGISTERU3EC__ANONSTOREY0_T4375D335A7606DAF99A8211D91BDC830C6EAC2C9_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.PlayerConnection.PlayerConnection/<Register>c__AnonStorey0
struct  U3CRegisterU3Ec__AnonStorey0_t4375D335A7606DAF99A8211D91BDC830C6EAC2C9  : public RuntimeObject
{
public:
	// System.Guid UnityEngine.Networking.PlayerConnection.PlayerConnection/<Register>c__AnonStorey0::messageId
	Guid_t  ___messageId_0;

public:
	inline static int32_t get_offset_of_messageId_0() { return static_cast<int32_t>(offsetof(U3CRegisterU3Ec__AnonStorey0_t4375D335A7606DAF99A8211D91BDC830C6EAC2C9, ___messageId_0)); }
	inline Guid_t  get_messageId_0() const { return ___messageId_0; }
	inline Guid_t * get_address_of_messageId_0() { return &___messageId_0; }
	inline void set_messageId_0(Guid_t  value)
	{
		___messageId_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CREGISTERU3EC__ANONSTOREY0_T4375D335A7606DAF99A8211D91BDC830C6EAC2C9_H
#ifndef U3CUNREGISTERU3EC__ANONSTOREY1_T7DA501C8DA7F3BB2973B2C0142557AB6D056B10E_H
#define U3CUNREGISTERU3EC__ANONSTOREY1_T7DA501C8DA7F3BB2973B2C0142557AB6D056B10E_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.PlayerConnection.PlayerConnection/<Unregister>c__AnonStorey1
struct  U3CUnregisterU3Ec__AnonStorey1_t7DA501C8DA7F3BB2973B2C0142557AB6D056B10E  : public RuntimeObject
{
public:
	// System.Guid UnityEngine.Networking.PlayerConnection.PlayerConnection/<Unregister>c__AnonStorey1::messageId
	Guid_t  ___messageId_0;

public:
	inline static int32_t get_offset_of_messageId_0() { return static_cast<int32_t>(offsetof(U3CUnregisterU3Ec__AnonStorey1_t7DA501C8DA7F3BB2973B2C0142557AB6D056B10E, ___messageId_0)); }
	inline Guid_t  get_messageId_0() const { return ___messageId_0; }
	inline Guid_t * get_address_of_messageId_0() { return &___messageId_0; }
	inline void set_messageId_0(Guid_t  value)
	{
		___messageId_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CUNREGISTERU3EC__ANONSTOREY1_T7DA501C8DA7F3BB2973B2C0142557AB6D056B10E_H
#ifndef U3CADDANDCREATEU3EC__ANONSTOREY1_T20F8F6C08F7A3288E431E891185668F751FE90EF_H
#define U3CADDANDCREATEU3EC__ANONSTOREY1_T20F8F6C08F7A3288E431E891185668F751FE90EF_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents/<AddAndCreate>c__AnonStorey1
struct  U3CAddAndCreateU3Ec__AnonStorey1_t20F8F6C08F7A3288E431E891185668F751FE90EF  : public RuntimeObject
{
public:
	// System.Guid UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents/<AddAndCreate>c__AnonStorey1::messageId
	Guid_t  ___messageId_0;

public:
	inline static int32_t get_offset_of_messageId_0() { return static_cast<int32_t>(offsetof(U3CAddAndCreateU3Ec__AnonStorey1_t20F8F6C08F7A3288E431E891185668F751FE90EF, ___messageId_0)); }
	inline Guid_t  get_messageId_0() const { return ___messageId_0; }
	inline Guid_t * get_address_of_messageId_0() { return &___messageId_0; }
	inline void set_messageId_0(Guid_t  value)
	{
		___messageId_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CADDANDCREATEU3EC__ANONSTOREY1_T20F8F6C08F7A3288E431E891185668F751FE90EF_H
#ifndef U3CINVOKEMESSAGEIDSUBSCRIBERSU3EC__ANONSTOREY0_T37CFFB3BEBB77FEFC07F695D1BD2200C32ABCDA0_H
#define U3CINVOKEMESSAGEIDSUBSCRIBERSU3EC__ANONSTOREY0_T37CFFB3BEBB77FEFC07F695D1BD2200C32ABCDA0_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents/<InvokeMessageIdSubscribers>c__AnonStorey0
struct  U3CInvokeMessageIdSubscribersU3Ec__AnonStorey0_t37CFFB3BEBB77FEFC07F695D1BD2200C32ABCDA0  : public RuntimeObject
{
public:
	// System.Guid UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents/<InvokeMessageIdSubscribers>c__AnonStorey0::messageId
	Guid_t  ___messageId_0;

public:
	inline static int32_t get_offset_of_messageId_0() { return static_cast<int32_t>(offsetof(U3CInvokeMessageIdSubscribersU3Ec__AnonStorey0_t37CFFB3BEBB77FEFC07F695D1BD2200C32ABCDA0, ___messageId_0)); }
	inline Guid_t  get_messageId_0() const { return ___messageId_0; }
	inline Guid_t * get_address_of_messageId_0() { return &___messageId_0; }
	inline void set_messageId_0(Guid_t  value)
	{
		___messageId_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CINVOKEMESSAGEIDSUBSCRIBERSU3EC__ANONSTOREY0_T37CFFB3BEBB77FEFC07F695D1BD2200C32ABCDA0_H
#ifndef U3CUNREGISTERMANAGEDCALLBACKU3EC__ANONSTOREY2_TBF8E6B433970276A827260CA19563B32D2D1D801_H
#define U3CUNREGISTERMANAGEDCALLBACKU3EC__ANONSTOREY2_TBF8E6B433970276A827260CA19563B32D2D1D801_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents/<UnregisterManagedCallback>c__AnonStorey2
struct  U3CUnregisterManagedCallbackU3Ec__AnonStorey2_tBF8E6B433970276A827260CA19563B32D2D1D801  : public RuntimeObject
{
public:
	// System.Guid UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents/<UnregisterManagedCallback>c__AnonStorey2::messageId
	Guid_t  ___messageId_0;

public:
	inline static int32_t get_offset_of_messageId_0() { return static_cast<int32_t>(offsetof(U3CUnregisterManagedCallbackU3Ec__AnonStorey2_tBF8E6B433970276A827260CA19563B32D2D1D801, ___messageId_0)); }
	inline Guid_t  get_messageId_0() const { return ___messageId_0; }
	inline Guid_t * get_address_of_messageId_0() { return &___messageId_0; }
	inline void set_messageId_0(Guid_t  value)
	{
		___messageId_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CUNREGISTERMANAGEDCALLBACKU3EC__ANONSTOREY2_TBF8E6B433970276A827260CA19563B32D2D1D801_H
#ifndef CONNECTIONCHANGEEVENT_T88A3E76467566DB9813DF5BD2DABD20D523D4681_H
#define CONNECTIONCHANGEEVENT_T88A3E76467566DB9813DF5BD2DABD20D523D4681_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents/ConnectionChangeEvent
struct  ConnectionChangeEvent_t88A3E76467566DB9813DF5BD2DABD20D523D4681  : public UnityEvent_1_t6DD758393B13FC2A58BE44E647D9EBEA4F27D914
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONNECTIONCHANGEEVENT_T88A3E76467566DB9813DF5BD2DABD20D523D4681_H
#ifndef MESSAGEEVENT_T62B5B1B04FCC5843790EE008D585B006E82E08FC_H
#define MESSAGEEVENT_T62B5B1B04FCC5843790EE008D585B006E82E08FC_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents/MessageEvent
struct  MessageEvent_t62B5B1B04FCC5843790EE008D585B006E82E08FC  : public UnityEvent_1_t74D81F82F43FEE6D3592CADCB4D7253AFFC12332
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MESSAGEEVENT_T62B5B1B04FCC5843790EE008D585B006E82E08FC_H
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
#ifndef PLAYABLEGRAPH_TEC38BBCA59BDD496F75037F220984D41339AB8BA_H
#define PLAYABLEGRAPH_TEC38BBCA59BDD496F75037F220984D41339AB8BA_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Playables.PlayableGraph
struct  PlayableGraph_tEC38BBCA59BDD496F75037F220984D41339AB8BA 
{
public:
	// System.IntPtr UnityEngine.Playables.PlayableGraph::m_Handle
	intptr_t ___m_Handle_0;
	// System.UInt32 UnityEngine.Playables.PlayableGraph::m_Version
	uint32_t ___m_Version_1;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(PlayableGraph_tEC38BBCA59BDD496F75037F220984D41339AB8BA, ___m_Handle_0)); }
	inline intptr_t get_m_Handle_0() const { return ___m_Handle_0; }
	inline intptr_t* get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(intptr_t value)
	{
		___m_Handle_0 = value;
	}

	inline static int32_t get_offset_of_m_Version_1() { return static_cast<int32_t>(offsetof(PlayableGraph_tEC38BBCA59BDD496F75037F220984D41339AB8BA, ___m_Version_1)); }
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
#endif // PLAYABLEGRAPH_TEC38BBCA59BDD496F75037F220984D41339AB8BA_H
#ifndef PLAYABLEHANDLE_T9D3B4E540D4413CED81DDD6A24C5373BEFA1D182_H
#define PLAYABLEHANDLE_T9D3B4E540D4413CED81DDD6A24C5373BEFA1D182_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Playables.PlayableHandle
struct  PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 
{
public:
	// System.IntPtr UnityEngine.Playables.PlayableHandle::m_Handle
	intptr_t ___m_Handle_0;
	// System.UInt32 UnityEngine.Playables.PlayableHandle::m_Version
	uint32_t ___m_Version_1;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182, ___m_Handle_0)); }
	inline intptr_t get_m_Handle_0() const { return ___m_Handle_0; }
	inline intptr_t* get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(intptr_t value)
	{
		___m_Handle_0 = value;
	}

	inline static int32_t get_offset_of_m_Version_1() { return static_cast<int32_t>(offsetof(PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182, ___m_Version_1)); }
	inline uint32_t get_m_Version_1() const { return ___m_Version_1; }
	inline uint32_t* get_address_of_m_Version_1() { return &___m_Version_1; }
	inline void set_m_Version_1(uint32_t value)
	{
		___m_Version_1 = value;
	}
};

struct PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182_StaticFields
{
public:
	// UnityEngine.Playables.PlayableHandle UnityEngine.Playables.PlayableHandle::m_Null
	PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  ___m_Null_2;

public:
	inline static int32_t get_offset_of_m_Null_2() { return static_cast<int32_t>(offsetof(PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182_StaticFields, ___m_Null_2)); }
	inline PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  get_m_Null_2() const { return ___m_Null_2; }
	inline PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 * get_address_of_m_Null_2() { return &___m_Null_2; }
	inline void set_m_Null_2(PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  value)
	{
		___m_Null_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYABLEHANDLE_T9D3B4E540D4413CED81DDD6A24C5373BEFA1D182_H
#ifndef PLAYABLEOUTPUTHANDLE_T0D0C9D8ACC1A4061BD4EAEB61F3EE0357052F922_H
#define PLAYABLEOUTPUTHANDLE_T0D0C9D8ACC1A4061BD4EAEB61F3EE0357052F922_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Playables.PlayableOutputHandle
struct  PlayableOutputHandle_t0D0C9D8ACC1A4061BD4EAEB61F3EE0357052F922 
{
public:
	// System.IntPtr UnityEngine.Playables.PlayableOutputHandle::m_Handle
	intptr_t ___m_Handle_0;
	// System.UInt32 UnityEngine.Playables.PlayableOutputHandle::m_Version
	uint32_t ___m_Version_1;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(PlayableOutputHandle_t0D0C9D8ACC1A4061BD4EAEB61F3EE0357052F922, ___m_Handle_0)); }
	inline intptr_t get_m_Handle_0() const { return ___m_Handle_0; }
	inline intptr_t* get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(intptr_t value)
	{
		___m_Handle_0 = value;
	}

	inline static int32_t get_offset_of_m_Version_1() { return static_cast<int32_t>(offsetof(PlayableOutputHandle_t0D0C9D8ACC1A4061BD4EAEB61F3EE0357052F922, ___m_Version_1)); }
	inline uint32_t get_m_Version_1() const { return ___m_Version_1; }
	inline uint32_t* get_address_of_m_Version_1() { return &___m_Version_1; }
	inline void set_m_Version_1(uint32_t value)
	{
		___m_Version_1 = value;
	}
};

struct PlayableOutputHandle_t0D0C9D8ACC1A4061BD4EAEB61F3EE0357052F922_StaticFields
{
public:
	// UnityEngine.Playables.PlayableOutputHandle UnityEngine.Playables.PlayableOutputHandle::m_Null
	PlayableOutputHandle_t0D0C9D8ACC1A4061BD4EAEB61F3EE0357052F922  ___m_Null_2;

public:
	inline static int32_t get_offset_of_m_Null_2() { return static_cast<int32_t>(offsetof(PlayableOutputHandle_t0D0C9D8ACC1A4061BD4EAEB61F3EE0357052F922_StaticFields, ___m_Null_2)); }
	inline PlayableOutputHandle_t0D0C9D8ACC1A4061BD4EAEB61F3EE0357052F922  get_m_Null_2() const { return ___m_Null_2; }
	inline PlayableOutputHandle_t0D0C9D8ACC1A4061BD4EAEB61F3EE0357052F922 * get_address_of_m_Null_2() { return &___m_Null_2; }
	inline void set_m_Null_2(PlayableOutputHandle_t0D0C9D8ACC1A4061BD4EAEB61F3EE0357052F922  value)
	{
		___m_Null_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYABLEOUTPUTHANDLE_T0D0C9D8ACC1A4061BD4EAEB61F3EE0357052F922_H
#ifndef AXIS_TA0521D01CB96B1073151D89F6DB21C805556FE39_H
#define AXIS_TA0521D01CB96B1073151D89F6DB21C805556FE39_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.RectTransform/Axis
struct  Axis_tA0521D01CB96B1073151D89F6DB21C805556FE39 
{
public:
	// System.Int32 UnityEngine.RectTransform/Axis::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Axis_tA0521D01CB96B1073151D89F6DB21C805556FE39, ___value___2)); }
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
#endif // AXIS_TA0521D01CB96B1073151D89F6DB21C805556FE39_H
#ifndef EDGE_TE7D013B0542A9F63E6413D67C3F0B866CC228278_H
#define EDGE_TE7D013B0542A9F63E6413D67C3F0B866CC228278_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.RectTransform/Edge
struct  Edge_tE7D013B0542A9F63E6413D67C3F0B866CC228278 
{
public:
	// System.Int32 UnityEngine.RectTransform/Edge::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Edge_tE7D013B0542A9F63E6413D67C3F0B866CC228278, ___value___2)); }
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
#endif // EDGE_TE7D013B0542A9F63E6413D67C3F0B866CC228278_H
#ifndef LOADSCENEMODE_T75F0B96794398942671B8315D2A9AC25C40A22D5_H
#define LOADSCENEMODE_T75F0B96794398942671B8315D2A9AC25C40A22D5_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SceneManagement.LoadSceneMode
struct  LoadSceneMode_t75F0B96794398942671B8315D2A9AC25C40A22D5 
{
public:
	// System.Int32 UnityEngine.SceneManagement.LoadSceneMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(LoadSceneMode_t75F0B96794398942671B8315D2A9AC25C40A22D5, ___value___2)); }
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
#endif // LOADSCENEMODE_T75F0B96794398942671B8315D2A9AC25C40A22D5_H
#ifndef SPRITEPACKINGMODE_TCAC1A79D61697B3532FB2FC8CAF3A2DD150555B1_H
#define SPRITEPACKINGMODE_TCAC1A79D61697B3532FB2FC8CAF3A2DD150555B1_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SpritePackingMode
struct  SpritePackingMode_tCAC1A79D61697B3532FB2FC8CAF3A2DD150555B1 
{
public:
	// System.Int32 UnityEngine.SpritePackingMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SpritePackingMode_tCAC1A79D61697B3532FB2FC8CAF3A2DD150555B1, ___value___2)); }
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
#endif // SPRITEPACKINGMODE_TCAC1A79D61697B3532FB2FC8CAF3A2DD150555B1_H
#ifndef TEXTANCHOR_TEC19034D476659A5E05366C63564F34DD30E7C57_H
#define TEXTANCHOR_TEC19034D476659A5E05366C63564F34DD30E7C57_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.TextAnchor
struct  TextAnchor_tEC19034D476659A5E05366C63564F34DD30E7C57 
{
public:
	// System.Int32 UnityEngine.TextAnchor::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TextAnchor_tEC19034D476659A5E05366C63564F34DD30E7C57, ___value___2)); }
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
#endif // TEXTANCHOR_TEC19034D476659A5E05366C63564F34DD30E7C57_H
#ifndef TEXTGENERATIONERROR_T7D5BA12E3120623131293E20A1120847377A2524_H
#define TEXTGENERATIONERROR_T7D5BA12E3120623131293E20A1120847377A2524_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.TextGenerationError
struct  TextGenerationError_t7D5BA12E3120623131293E20A1120847377A2524 
{
public:
	// System.Int32 UnityEngine.TextGenerationError::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TextGenerationError_t7D5BA12E3120623131293E20A1120847377A2524, ___value___2)); }
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
#endif // TEXTGENERATIONERROR_T7D5BA12E3120623131293E20A1120847377A2524_H
#ifndef UICHARINFO_TB4C92043A686A600D36A92E3108F173C499E318A_H
#define UICHARINFO_TB4C92043A686A600D36A92E3108F173C499E318A_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UICharInfo
struct  UICharInfo_tB4C92043A686A600D36A92E3108F173C499E318A 
{
public:
	// UnityEngine.Vector2 UnityEngine.UICharInfo::cursorPos
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___cursorPos_0;
	// System.Single UnityEngine.UICharInfo::charWidth
	float ___charWidth_1;

public:
	inline static int32_t get_offset_of_cursorPos_0() { return static_cast<int32_t>(offsetof(UICharInfo_tB4C92043A686A600D36A92E3108F173C499E318A, ___cursorPos_0)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_cursorPos_0() const { return ___cursorPos_0; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_cursorPos_0() { return &___cursorPos_0; }
	inline void set_cursorPos_0(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___cursorPos_0 = value;
	}

	inline static int32_t get_offset_of_charWidth_1() { return static_cast<int32_t>(offsetof(UICharInfo_tB4C92043A686A600D36A92E3108F173C499E318A, ___charWidth_1)); }
	inline float get_charWidth_1() const { return ___charWidth_1; }
	inline float* get_address_of_charWidth_1() { return &___charWidth_1; }
	inline void set_charWidth_1(float value)
	{
		___charWidth_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UICHARINFO_TB4C92043A686A600D36A92E3108F173C499E318A_H
#ifndef UIVERTEX_T0583C35B730B218B542E80203F5F4BC6F1E9E577_H
#define UIVERTEX_T0583C35B730B218B542E80203F5F4BC6F1E9E577_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UIVertex
struct  UIVertex_t0583C35B730B218B542E80203F5F4BC6F1E9E577 
{
public:
	// UnityEngine.Vector3 UnityEngine.UIVertex::position
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___position_0;
	// UnityEngine.Vector3 UnityEngine.UIVertex::normal
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___normal_1;
	// UnityEngine.Vector4 UnityEngine.UIVertex::tangent
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___tangent_2;
	// UnityEngine.Color32 UnityEngine.UIVertex::color
	Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  ___color_3;
	// UnityEngine.Vector2 UnityEngine.UIVertex::uv0
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___uv0_4;
	// UnityEngine.Vector2 UnityEngine.UIVertex::uv1
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___uv1_5;
	// UnityEngine.Vector2 UnityEngine.UIVertex::uv2
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___uv2_6;
	// UnityEngine.Vector2 UnityEngine.UIVertex::uv3
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___uv3_7;

public:
	inline static int32_t get_offset_of_position_0() { return static_cast<int32_t>(offsetof(UIVertex_t0583C35B730B218B542E80203F5F4BC6F1E9E577, ___position_0)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_position_0() const { return ___position_0; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_position_0() { return &___position_0; }
	inline void set_position_0(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___position_0 = value;
	}

	inline static int32_t get_offset_of_normal_1() { return static_cast<int32_t>(offsetof(UIVertex_t0583C35B730B218B542E80203F5F4BC6F1E9E577, ___normal_1)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_normal_1() const { return ___normal_1; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_normal_1() { return &___normal_1; }
	inline void set_normal_1(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___normal_1 = value;
	}

	inline static int32_t get_offset_of_tangent_2() { return static_cast<int32_t>(offsetof(UIVertex_t0583C35B730B218B542E80203F5F4BC6F1E9E577, ___tangent_2)); }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  get_tangent_2() const { return ___tangent_2; }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * get_address_of_tangent_2() { return &___tangent_2; }
	inline void set_tangent_2(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  value)
	{
		___tangent_2 = value;
	}

	inline static int32_t get_offset_of_color_3() { return static_cast<int32_t>(offsetof(UIVertex_t0583C35B730B218B542E80203F5F4BC6F1E9E577, ___color_3)); }
	inline Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  get_color_3() const { return ___color_3; }
	inline Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23 * get_address_of_color_3() { return &___color_3; }
	inline void set_color_3(Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  value)
	{
		___color_3 = value;
	}

	inline static int32_t get_offset_of_uv0_4() { return static_cast<int32_t>(offsetof(UIVertex_t0583C35B730B218B542E80203F5F4BC6F1E9E577, ___uv0_4)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_uv0_4() const { return ___uv0_4; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_uv0_4() { return &___uv0_4; }
	inline void set_uv0_4(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___uv0_4 = value;
	}

	inline static int32_t get_offset_of_uv1_5() { return static_cast<int32_t>(offsetof(UIVertex_t0583C35B730B218B542E80203F5F4BC6F1E9E577, ___uv1_5)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_uv1_5() const { return ___uv1_5; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_uv1_5() { return &___uv1_5; }
	inline void set_uv1_5(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___uv1_5 = value;
	}

	inline static int32_t get_offset_of_uv2_6() { return static_cast<int32_t>(offsetof(UIVertex_t0583C35B730B218B542E80203F5F4BC6F1E9E577, ___uv2_6)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_uv2_6() const { return ___uv2_6; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_uv2_6() { return &___uv2_6; }
	inline void set_uv2_6(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___uv2_6 = value;
	}

	inline static int32_t get_offset_of_uv3_7() { return static_cast<int32_t>(offsetof(UIVertex_t0583C35B730B218B542E80203F5F4BC6F1E9E577, ___uv3_7)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_uv3_7() const { return ___uv3_7; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_uv3_7() { return &___uv3_7; }
	inline void set_uv3_7(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___uv3_7 = value;
	}
};

struct UIVertex_t0583C35B730B218B542E80203F5F4BC6F1E9E577_StaticFields
{
public:
	// UnityEngine.Color32 UnityEngine.UIVertex::s_DefaultColor
	Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  ___s_DefaultColor_8;
	// UnityEngine.Vector4 UnityEngine.UIVertex::s_DefaultTangent
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___s_DefaultTangent_9;
	// UnityEngine.UIVertex UnityEngine.UIVertex::simpleVert
	UIVertex_t0583C35B730B218B542E80203F5F4BC6F1E9E577  ___simpleVert_10;

public:
	inline static int32_t get_offset_of_s_DefaultColor_8() { return static_cast<int32_t>(offsetof(UIVertex_t0583C35B730B218B542E80203F5F4BC6F1E9E577_StaticFields, ___s_DefaultColor_8)); }
	inline Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  get_s_DefaultColor_8() const { return ___s_DefaultColor_8; }
	inline Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23 * get_address_of_s_DefaultColor_8() { return &___s_DefaultColor_8; }
	inline void set_s_DefaultColor_8(Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  value)
	{
		___s_DefaultColor_8 = value;
	}

	inline static int32_t get_offset_of_s_DefaultTangent_9() { return static_cast<int32_t>(offsetof(UIVertex_t0583C35B730B218B542E80203F5F4BC6F1E9E577_StaticFields, ___s_DefaultTangent_9)); }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  get_s_DefaultTangent_9() const { return ___s_DefaultTangent_9; }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * get_address_of_s_DefaultTangent_9() { return &___s_DefaultTangent_9; }
	inline void set_s_DefaultTangent_9(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  value)
	{
		___s_DefaultTangent_9 = value;
	}

	inline static int32_t get_offset_of_simpleVert_10() { return static_cast<int32_t>(offsetof(UIVertex_t0583C35B730B218B542E80203F5F4BC6F1E9E577_StaticFields, ___simpleVert_10)); }
	inline UIVertex_t0583C35B730B218B542E80203F5F4BC6F1E9E577  get_simpleVert_10() const { return ___simpleVert_10; }
	inline UIVertex_t0583C35B730B218B542E80203F5F4BC6F1E9E577 * get_address_of_simpleVert_10() { return &___simpleVert_10; }
	inline void set_simpleVert_10(UIVertex_t0583C35B730B218B542E80203F5F4BC6F1E9E577  value)
	{
		___simpleVert_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UIVERTEX_T0583C35B730B218B542E80203F5F4BC6F1E9E577_H
#ifndef VERTICALWRAPMODE_TD909C5B2F6A25AE3797BC71373196D850FC845E9_H
#define VERTICALWRAPMODE_TD909C5B2F6A25AE3797BC71373196D850FC845E9_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.VerticalWrapMode
struct  VerticalWrapMode_tD909C5B2F6A25AE3797BC71373196D850FC845E9 
{
public:
	// System.Int32 UnityEngine.VerticalWrapMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(VerticalWrapMode_tD909C5B2F6A25AE3797BC71373196D850FC845E9, ___value___2)); }
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
#endif // VERTICALWRAPMODE_TD909C5B2F6A25AE3797BC71373196D850FC845E9_H
#ifndef LOCALNOTIFICATION_TCA79CA9F746F4B3A8F3F0A40BB4AB2FAD7D3238F_H
#define LOCALNOTIFICATION_TCA79CA9F746F4B3A8F3F0A40BB4AB2FAD7D3238F_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.iOS.LocalNotification
struct  LocalNotification_tCA79CA9F746F4B3A8F3F0A40BB4AB2FAD7D3238F  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.iOS.LocalNotification::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(LocalNotification_tCA79CA9F746F4B3A8F3F0A40BB4AB2FAD7D3238F, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

struct LocalNotification_tCA79CA9F746F4B3A8F3F0A40BB4AB2FAD7D3238F_StaticFields
{
public:
	// System.Int64 UnityEngine.iOS.LocalNotification::m_NSReferenceDateTicks
	int64_t ___m_NSReferenceDateTicks_1;

public:
	inline static int32_t get_offset_of_m_NSReferenceDateTicks_1() { return static_cast<int32_t>(offsetof(LocalNotification_tCA79CA9F746F4B3A8F3F0A40BB4AB2FAD7D3238F_StaticFields, ___m_NSReferenceDateTicks_1)); }
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
#endif // LOCALNOTIFICATION_TCA79CA9F746F4B3A8F3F0A40BB4AB2FAD7D3238F_H
#ifndef REMOTENOTIFICATION_TE0413FADC666D8ECDE70A365F41A784002106061_H
#define REMOTENOTIFICATION_TE0413FADC666D8ECDE70A365F41A784002106061_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.iOS.RemoteNotification
struct  RemoteNotification_tE0413FADC666D8ECDE70A365F41A784002106061  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.iOS.RemoteNotification::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(RemoteNotification_tE0413FADC666D8ECDE70A365F41A784002106061, ___m_Ptr_0)); }
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
#endif // REMOTENOTIFICATION_TE0413FADC666D8ECDE70A365F41A784002106061_H
#ifndef TYPEINFERENCERULES_TFA03D20477226A95FE644665C3C08A6B6281C333_H
#define TYPEINFERENCERULES_TFA03D20477226A95FE644665C3C08A6B6281C333_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngineInternal.TypeInferenceRules
struct  TypeInferenceRules_tFA03D20477226A95FE644665C3C08A6B6281C333 
{
public:
	// System.Int32 UnityEngineInternal.TypeInferenceRules::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TypeInferenceRules_tFA03D20477226A95FE644665C3C08A6B6281C333, ___value___2)); }
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
#endif // TYPEINFERENCERULES_TFA03D20477226A95FE644665C3C08A6B6281C333_H
#ifndef MULTICASTDELEGATE_T_H
#define MULTICASTDELEGATE_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MulticastDelegate
struct  MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* value)
	{
		___delegates_11 = value;
		Il2CppCodeGenWriteBarrier((&___delegates_11), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* ___delegates_11;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* ___delegates_11;
};
#endif // MULTICASTDELEGATE_T_H
#ifndef ANIMATIONCLIPPLAYABLE_T6EF38F9EED94096D4793638AFC8D11D285B43183_H
#define ANIMATIONCLIPPLAYABLE_T6EF38F9EED94096D4793638AFC8D11D285B43183_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Animations.AnimationClipPlayable
struct  AnimationClipPlayable_t6EF38F9EED94096D4793638AFC8D11D285B43183 
{
public:
	// UnityEngine.Playables.PlayableHandle UnityEngine.Animations.AnimationClipPlayable::m_Handle
	PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(AnimationClipPlayable_t6EF38F9EED94096D4793638AFC8D11D285B43183, ___m_Handle_0)); }
	inline PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  get_m_Handle_0() const { return ___m_Handle_0; }
	inline PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 * get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  value)
	{
		___m_Handle_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ANIMATIONCLIPPLAYABLE_T6EF38F9EED94096D4793638AFC8D11D285B43183_H
#ifndef ANIMATIONLAYERMIXERPLAYABLE_T699CCDE32ABD6FC79BFC09064E473D785D9F9371_H
#define ANIMATIONLAYERMIXERPLAYABLE_T699CCDE32ABD6FC79BFC09064E473D785D9F9371_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Animations.AnimationLayerMixerPlayable
struct  AnimationLayerMixerPlayable_t699CCDE32ABD6FC79BFC09064E473D785D9F9371 
{
public:
	// UnityEngine.Playables.PlayableHandle UnityEngine.Animations.AnimationLayerMixerPlayable::m_Handle
	PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(AnimationLayerMixerPlayable_t699CCDE32ABD6FC79BFC09064E473D785D9F9371, ___m_Handle_0)); }
	inline PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  get_m_Handle_0() const { return ___m_Handle_0; }
	inline PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 * get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  value)
	{
		___m_Handle_0 = value;
	}
};

struct AnimationLayerMixerPlayable_t699CCDE32ABD6FC79BFC09064E473D785D9F9371_StaticFields
{
public:
	// UnityEngine.Animations.AnimationLayerMixerPlayable UnityEngine.Animations.AnimationLayerMixerPlayable::m_NullPlayable
	AnimationLayerMixerPlayable_t699CCDE32ABD6FC79BFC09064E473D785D9F9371  ___m_NullPlayable_1;

public:
	inline static int32_t get_offset_of_m_NullPlayable_1() { return static_cast<int32_t>(offsetof(AnimationLayerMixerPlayable_t699CCDE32ABD6FC79BFC09064E473D785D9F9371_StaticFields, ___m_NullPlayable_1)); }
	inline AnimationLayerMixerPlayable_t699CCDE32ABD6FC79BFC09064E473D785D9F9371  get_m_NullPlayable_1() const { return ___m_NullPlayable_1; }
	inline AnimationLayerMixerPlayable_t699CCDE32ABD6FC79BFC09064E473D785D9F9371 * get_address_of_m_NullPlayable_1() { return &___m_NullPlayable_1; }
	inline void set_m_NullPlayable_1(AnimationLayerMixerPlayable_t699CCDE32ABD6FC79BFC09064E473D785D9F9371  value)
	{
		___m_NullPlayable_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ANIMATIONLAYERMIXERPLAYABLE_T699CCDE32ABD6FC79BFC09064E473D785D9F9371_H
#ifndef ANIMATIONMIXERPLAYABLE_TA71C834654979CF92B034B537EE5A3DA9713030A_H
#define ANIMATIONMIXERPLAYABLE_TA71C834654979CF92B034B537EE5A3DA9713030A_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Animations.AnimationMixerPlayable
struct  AnimationMixerPlayable_tA71C834654979CF92B034B537EE5A3DA9713030A 
{
public:
	// UnityEngine.Playables.PlayableHandle UnityEngine.Animations.AnimationMixerPlayable::m_Handle
	PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(AnimationMixerPlayable_tA71C834654979CF92B034B537EE5A3DA9713030A, ___m_Handle_0)); }
	inline PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  get_m_Handle_0() const { return ___m_Handle_0; }
	inline PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 * get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  value)
	{
		___m_Handle_0 = value;
	}
};

struct AnimationMixerPlayable_tA71C834654979CF92B034B537EE5A3DA9713030A_StaticFields
{
public:
	// UnityEngine.Animations.AnimationMixerPlayable UnityEngine.Animations.AnimationMixerPlayable::m_NullPlayable
	AnimationMixerPlayable_tA71C834654979CF92B034B537EE5A3DA9713030A  ___m_NullPlayable_1;

public:
	inline static int32_t get_offset_of_m_NullPlayable_1() { return static_cast<int32_t>(offsetof(AnimationMixerPlayable_tA71C834654979CF92B034B537EE5A3DA9713030A_StaticFields, ___m_NullPlayable_1)); }
	inline AnimationMixerPlayable_tA71C834654979CF92B034B537EE5A3DA9713030A  get_m_NullPlayable_1() const { return ___m_NullPlayable_1; }
	inline AnimationMixerPlayable_tA71C834654979CF92B034B537EE5A3DA9713030A * get_address_of_m_NullPlayable_1() { return &___m_NullPlayable_1; }
	inline void set_m_NullPlayable_1(AnimationMixerPlayable_tA71C834654979CF92B034B537EE5A3DA9713030A  value)
	{
		___m_NullPlayable_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ANIMATIONMIXERPLAYABLE_TA71C834654979CF92B034B537EE5A3DA9713030A_H
#ifndef ANIMATIONMOTIONXTODELTAPLAYABLE_TA5F0BE3BA966E1A6661311F185C1544F90302CDC_H
#define ANIMATIONMOTIONXTODELTAPLAYABLE_TA5F0BE3BA966E1A6661311F185C1544F90302CDC_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Animations.AnimationMotionXToDeltaPlayable
struct  AnimationMotionXToDeltaPlayable_tA5F0BE3BA966E1A6661311F185C1544F90302CDC 
{
public:
	// UnityEngine.Playables.PlayableHandle UnityEngine.Animations.AnimationMotionXToDeltaPlayable::m_Handle
	PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(AnimationMotionXToDeltaPlayable_tA5F0BE3BA966E1A6661311F185C1544F90302CDC, ___m_Handle_0)); }
	inline PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  get_m_Handle_0() const { return ___m_Handle_0; }
	inline PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 * get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  value)
	{
		___m_Handle_0 = value;
	}
};

struct AnimationMotionXToDeltaPlayable_tA5F0BE3BA966E1A6661311F185C1544F90302CDC_StaticFields
{
public:
	// UnityEngine.Animations.AnimationMotionXToDeltaPlayable UnityEngine.Animations.AnimationMotionXToDeltaPlayable::m_NullPlayable
	AnimationMotionXToDeltaPlayable_tA5F0BE3BA966E1A6661311F185C1544F90302CDC  ___m_NullPlayable_1;

public:
	inline static int32_t get_offset_of_m_NullPlayable_1() { return static_cast<int32_t>(offsetof(AnimationMotionXToDeltaPlayable_tA5F0BE3BA966E1A6661311F185C1544F90302CDC_StaticFields, ___m_NullPlayable_1)); }
	inline AnimationMotionXToDeltaPlayable_tA5F0BE3BA966E1A6661311F185C1544F90302CDC  get_m_NullPlayable_1() const { return ___m_NullPlayable_1; }
	inline AnimationMotionXToDeltaPlayable_tA5F0BE3BA966E1A6661311F185C1544F90302CDC * get_address_of_m_NullPlayable_1() { return &___m_NullPlayable_1; }
	inline void set_m_NullPlayable_1(AnimationMotionXToDeltaPlayable_tA5F0BE3BA966E1A6661311F185C1544F90302CDC  value)
	{
		___m_NullPlayable_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ANIMATIONMOTIONXTODELTAPLAYABLE_TA5F0BE3BA966E1A6661311F185C1544F90302CDC_H
#ifndef ANIMATIONOFFSETPLAYABLE_T1534674D22C39D6ED74F24A108C3475C7301A93E_H
#define ANIMATIONOFFSETPLAYABLE_T1534674D22C39D6ED74F24A108C3475C7301A93E_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Animations.AnimationOffsetPlayable
struct  AnimationOffsetPlayable_t1534674D22C39D6ED74F24A108C3475C7301A93E 
{
public:
	// UnityEngine.Playables.PlayableHandle UnityEngine.Animations.AnimationOffsetPlayable::m_Handle
	PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(AnimationOffsetPlayable_t1534674D22C39D6ED74F24A108C3475C7301A93E, ___m_Handle_0)); }
	inline PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  get_m_Handle_0() const { return ___m_Handle_0; }
	inline PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 * get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  value)
	{
		___m_Handle_0 = value;
	}
};

struct AnimationOffsetPlayable_t1534674D22C39D6ED74F24A108C3475C7301A93E_StaticFields
{
public:
	// UnityEngine.Animations.AnimationOffsetPlayable UnityEngine.Animations.AnimationOffsetPlayable::m_NullPlayable
	AnimationOffsetPlayable_t1534674D22C39D6ED74F24A108C3475C7301A93E  ___m_NullPlayable_1;

public:
	inline static int32_t get_offset_of_m_NullPlayable_1() { return static_cast<int32_t>(offsetof(AnimationOffsetPlayable_t1534674D22C39D6ED74F24A108C3475C7301A93E_StaticFields, ___m_NullPlayable_1)); }
	inline AnimationOffsetPlayable_t1534674D22C39D6ED74F24A108C3475C7301A93E  get_m_NullPlayable_1() const { return ___m_NullPlayable_1; }
	inline AnimationOffsetPlayable_t1534674D22C39D6ED74F24A108C3475C7301A93E * get_address_of_m_NullPlayable_1() { return &___m_NullPlayable_1; }
	inline void set_m_NullPlayable_1(AnimationOffsetPlayable_t1534674D22C39D6ED74F24A108C3475C7301A93E  value)
	{
		___m_NullPlayable_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ANIMATIONOFFSETPLAYABLE_T1534674D22C39D6ED74F24A108C3475C7301A93E_H
#ifndef ANIMATIONPLAYABLEOUTPUT_TA10178429D6528BDB4516F6788CE680E349553E6_H
#define ANIMATIONPLAYABLEOUTPUT_TA10178429D6528BDB4516F6788CE680E349553E6_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Animations.AnimationPlayableOutput
struct  AnimationPlayableOutput_tA10178429D6528BDB4516F6788CE680E349553E6 
{
public:
	// UnityEngine.Playables.PlayableOutputHandle UnityEngine.Animations.AnimationPlayableOutput::m_Handle
	PlayableOutputHandle_t0D0C9D8ACC1A4061BD4EAEB61F3EE0357052F922  ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(AnimationPlayableOutput_tA10178429D6528BDB4516F6788CE680E349553E6, ___m_Handle_0)); }
	inline PlayableOutputHandle_t0D0C9D8ACC1A4061BD4EAEB61F3EE0357052F922  get_m_Handle_0() const { return ___m_Handle_0; }
	inline PlayableOutputHandle_t0D0C9D8ACC1A4061BD4EAEB61F3EE0357052F922 * get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(PlayableOutputHandle_t0D0C9D8ACC1A4061BD4EAEB61F3EE0357052F922  value)
	{
		___m_Handle_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ANIMATIONPLAYABLEOUTPUT_TA10178429D6528BDB4516F6788CE680E349553E6_H
#ifndef ANIMATIONPOSEPLAYABLE_T92EAB5BB4093D236F90ED0242488039EA87AFA07_H
#define ANIMATIONPOSEPLAYABLE_T92EAB5BB4093D236F90ED0242488039EA87AFA07_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Animations.AnimationPosePlayable
struct  AnimationPosePlayable_t92EAB5BB4093D236F90ED0242488039EA87AFA07 
{
public:
	// UnityEngine.Playables.PlayableHandle UnityEngine.Animations.AnimationPosePlayable::m_Handle
	PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(AnimationPosePlayable_t92EAB5BB4093D236F90ED0242488039EA87AFA07, ___m_Handle_0)); }
	inline PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  get_m_Handle_0() const { return ___m_Handle_0; }
	inline PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 * get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  value)
	{
		___m_Handle_0 = value;
	}
};

struct AnimationPosePlayable_t92EAB5BB4093D236F90ED0242488039EA87AFA07_StaticFields
{
public:
	// UnityEngine.Animations.AnimationPosePlayable UnityEngine.Animations.AnimationPosePlayable::m_NullPlayable
	AnimationPosePlayable_t92EAB5BB4093D236F90ED0242488039EA87AFA07  ___m_NullPlayable_1;

public:
	inline static int32_t get_offset_of_m_NullPlayable_1() { return static_cast<int32_t>(offsetof(AnimationPosePlayable_t92EAB5BB4093D236F90ED0242488039EA87AFA07_StaticFields, ___m_NullPlayable_1)); }
	inline AnimationPosePlayable_t92EAB5BB4093D236F90ED0242488039EA87AFA07  get_m_NullPlayable_1() const { return ___m_NullPlayable_1; }
	inline AnimationPosePlayable_t92EAB5BB4093D236F90ED0242488039EA87AFA07 * get_address_of_m_NullPlayable_1() { return &___m_NullPlayable_1; }
	inline void set_m_NullPlayable_1(AnimationPosePlayable_t92EAB5BB4093D236F90ED0242488039EA87AFA07  value)
	{
		___m_NullPlayable_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ANIMATIONPOSEPLAYABLE_T92EAB5BB4093D236F90ED0242488039EA87AFA07_H
#ifndef ANIMATIONREMOVESCALEPLAYABLE_T02381EE856ADF73C82C1EA6D2AD1878EC5879A7B_H
#define ANIMATIONREMOVESCALEPLAYABLE_T02381EE856ADF73C82C1EA6D2AD1878EC5879A7B_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Animations.AnimationRemoveScalePlayable
struct  AnimationRemoveScalePlayable_t02381EE856ADF73C82C1EA6D2AD1878EC5879A7B 
{
public:
	// UnityEngine.Playables.PlayableHandle UnityEngine.Animations.AnimationRemoveScalePlayable::m_Handle
	PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(AnimationRemoveScalePlayable_t02381EE856ADF73C82C1EA6D2AD1878EC5879A7B, ___m_Handle_0)); }
	inline PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  get_m_Handle_0() const { return ___m_Handle_0; }
	inline PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 * get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  value)
	{
		___m_Handle_0 = value;
	}
};

struct AnimationRemoveScalePlayable_t02381EE856ADF73C82C1EA6D2AD1878EC5879A7B_StaticFields
{
public:
	// UnityEngine.Animations.AnimationRemoveScalePlayable UnityEngine.Animations.AnimationRemoveScalePlayable::m_NullPlayable
	AnimationRemoveScalePlayable_t02381EE856ADF73C82C1EA6D2AD1878EC5879A7B  ___m_NullPlayable_1;

public:
	inline static int32_t get_offset_of_m_NullPlayable_1() { return static_cast<int32_t>(offsetof(AnimationRemoveScalePlayable_t02381EE856ADF73C82C1EA6D2AD1878EC5879A7B_StaticFields, ___m_NullPlayable_1)); }
	inline AnimationRemoveScalePlayable_t02381EE856ADF73C82C1EA6D2AD1878EC5879A7B  get_m_NullPlayable_1() const { return ___m_NullPlayable_1; }
	inline AnimationRemoveScalePlayable_t02381EE856ADF73C82C1EA6D2AD1878EC5879A7B * get_address_of_m_NullPlayable_1() { return &___m_NullPlayable_1; }
	inline void set_m_NullPlayable_1(AnimationRemoveScalePlayable_t02381EE856ADF73C82C1EA6D2AD1878EC5879A7B  value)
	{
		___m_NullPlayable_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ANIMATIONREMOVESCALEPLAYABLE_T02381EE856ADF73C82C1EA6D2AD1878EC5879A7B_H
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
#ifndef ANIMATIONSCRIPTPLAYABLE_T73DEE79FEABE593A01BC5B5FC403DD19CEC38F5F_H
#define ANIMATIONSCRIPTPLAYABLE_T73DEE79FEABE593A01BC5B5FC403DD19CEC38F5F_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.Animations.AnimationScriptPlayable
struct  AnimationScriptPlayable_t73DEE79FEABE593A01BC5B5FC403DD19CEC38F5F 
{
public:
	// UnityEngine.Playables.PlayableHandle UnityEngine.Experimental.Animations.AnimationScriptPlayable::m_Handle
	PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(AnimationScriptPlayable_t73DEE79FEABE593A01BC5B5FC403DD19CEC38F5F, ___m_Handle_0)); }
	inline PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  get_m_Handle_0() const { return ___m_Handle_0; }
	inline PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 * get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  value)
	{
		___m_Handle_0 = value;
	}
};

struct AnimationScriptPlayable_t73DEE79FEABE593A01BC5B5FC403DD19CEC38F5F_StaticFields
{
public:
	// UnityEngine.Experimental.Animations.AnimationScriptPlayable UnityEngine.Experimental.Animations.AnimationScriptPlayable::m_NullPlayable
	AnimationScriptPlayable_t73DEE79FEABE593A01BC5B5FC403DD19CEC38F5F  ___m_NullPlayable_1;

public:
	inline static int32_t get_offset_of_m_NullPlayable_1() { return static_cast<int32_t>(offsetof(AnimationScriptPlayable_t73DEE79FEABE593A01BC5B5FC403DD19CEC38F5F_StaticFields, ___m_NullPlayable_1)); }
	inline AnimationScriptPlayable_t73DEE79FEABE593A01BC5B5FC403DD19CEC38F5F  get_m_NullPlayable_1() const { return ___m_NullPlayable_1; }
	inline AnimationScriptPlayable_t73DEE79FEABE593A01BC5B5FC403DD19CEC38F5F * get_address_of_m_NullPlayable_1() { return &___m_NullPlayable_1; }
	inline void set_m_NullPlayable_1(AnimationScriptPlayable_t73DEE79FEABE593A01BC5B5FC403DD19CEC38F5F  value)
	{
		___m_NullPlayable_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ANIMATIONSCRIPTPLAYABLE_T73DEE79FEABE593A01BC5B5FC403DD19CEC38F5F_H
#ifndef MATERIALEFFECTPLAYABLE_T40911576524A28294D958991232297B1728713FC_H
#define MATERIALEFFECTPLAYABLE_T40911576524A28294D958991232297B1728713FC_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.Playables.MaterialEffectPlayable
struct  MaterialEffectPlayable_t40911576524A28294D958991232297B1728713FC 
{
public:
	// UnityEngine.Playables.PlayableHandle UnityEngine.Experimental.Playables.MaterialEffectPlayable::m_Handle
	PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(MaterialEffectPlayable_t40911576524A28294D958991232297B1728713FC, ___m_Handle_0)); }
	inline PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  get_m_Handle_0() const { return ___m_Handle_0; }
	inline PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 * get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  value)
	{
		___m_Handle_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MATERIALEFFECTPLAYABLE_T40911576524A28294D958991232297B1728713FC_H
#ifndef TEXTUREMIXERPLAYABLE_TC536766EC72A3E271307F13E649F22BA411B9326_H
#define TEXTUREMIXERPLAYABLE_TC536766EC72A3E271307F13E649F22BA411B9326_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.Playables.TextureMixerPlayable
struct  TextureMixerPlayable_tC536766EC72A3E271307F13E649F22BA411B9326 
{
public:
	// UnityEngine.Playables.PlayableHandle UnityEngine.Experimental.Playables.TextureMixerPlayable::m_Handle
	PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(TextureMixerPlayable_tC536766EC72A3E271307F13E649F22BA411B9326, ___m_Handle_0)); }
	inline PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  get_m_Handle_0() const { return ___m_Handle_0; }
	inline PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 * get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  value)
	{
		___m_Handle_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEXTUREMIXERPLAYABLE_TC536766EC72A3E271307F13E649F22BA411B9326_H
#ifndef TEXTUREPLAYABLEOUTPUT_T0D35788D263A2C088E9778F2D9984A24ECEC0845_H
#define TEXTUREPLAYABLEOUTPUT_T0D35788D263A2C088E9778F2D9984A24ECEC0845_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.Playables.TexturePlayableOutput
struct  TexturePlayableOutput_t0D35788D263A2C088E9778F2D9984A24ECEC0845 
{
public:
	// UnityEngine.Playables.PlayableOutputHandle UnityEngine.Experimental.Playables.TexturePlayableOutput::m_Handle
	PlayableOutputHandle_t0D0C9D8ACC1A4061BD4EAEB61F3EE0357052F922  ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(TexturePlayableOutput_t0D35788D263A2C088E9778F2D9984A24ECEC0845, ___m_Handle_0)); }
	inline PlayableOutputHandle_t0D0C9D8ACC1A4061BD4EAEB61F3EE0357052F922  get_m_Handle_0() const { return ___m_Handle_0; }
	inline PlayableOutputHandle_t0D0C9D8ACC1A4061BD4EAEB61F3EE0357052F922 * get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(PlayableOutputHandle_t0D0C9D8ACC1A4061BD4EAEB61F3EE0357052F922  value)
	{
		___m_Handle_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEXTUREPLAYABLEOUTPUT_T0D35788D263A2C088E9778F2D9984A24ECEC0845_H
#ifndef SUPPORTEDRENDERINGFEATURES_TF24D93A14DDE0527765F39F6F4B500B14B216F92_H
#define SUPPORTEDRENDERINGFEATURES_TF24D93A14DDE0527765F39F6F4B500B14B216F92_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.Rendering.SupportedRenderingFeatures
struct  SupportedRenderingFeatures_tF24D93A14DDE0527765F39F6F4B500B14B216F92  : public RuntimeObject
{
public:
	// UnityEngine.Experimental.Rendering.SupportedRenderingFeatures/ReflectionProbeSupportFlags UnityEngine.Experimental.Rendering.SupportedRenderingFeatures::<reflectionProbeSupportFlags>k__BackingField
	int32_t ___U3CreflectionProbeSupportFlagsU3Ek__BackingField_1;
	// UnityEngine.Experimental.Rendering.SupportedRenderingFeatures/LightmapMixedBakeMode UnityEngine.Experimental.Rendering.SupportedRenderingFeatures::<defaultMixedLightingMode>k__BackingField
	int32_t ___U3CdefaultMixedLightingModeU3Ek__BackingField_2;
	// UnityEngine.Experimental.Rendering.SupportedRenderingFeatures/LightmapMixedBakeMode UnityEngine.Experimental.Rendering.SupportedRenderingFeatures::<supportedMixedLightingModes>k__BackingField
	int32_t ___U3CsupportedMixedLightingModesU3Ek__BackingField_3;
	// UnityEngine.LightmapBakeType UnityEngine.Experimental.Rendering.SupportedRenderingFeatures::<supportedLightmapBakeTypes>k__BackingField
	int32_t ___U3CsupportedLightmapBakeTypesU3Ek__BackingField_4;
	// UnityEngine.LightmapsMode UnityEngine.Experimental.Rendering.SupportedRenderingFeatures::<supportedLightmapsModes>k__BackingField
	int32_t ___U3CsupportedLightmapsModesU3Ek__BackingField_5;
	// System.Boolean UnityEngine.Experimental.Rendering.SupportedRenderingFeatures::<rendererSupportsLightProbeProxyVolumes>k__BackingField
	bool ___U3CrendererSupportsLightProbeProxyVolumesU3Ek__BackingField_6;
	// System.Boolean UnityEngine.Experimental.Rendering.SupportedRenderingFeatures::<rendererSupportsMotionVectors>k__BackingField
	bool ___U3CrendererSupportsMotionVectorsU3Ek__BackingField_7;
	// System.Boolean UnityEngine.Experimental.Rendering.SupportedRenderingFeatures::<rendererSupportsReceiveShadows>k__BackingField
	bool ___U3CrendererSupportsReceiveShadowsU3Ek__BackingField_8;
	// System.Boolean UnityEngine.Experimental.Rendering.SupportedRenderingFeatures::<rendererSupportsReflectionProbes>k__BackingField
	bool ___U3CrendererSupportsReflectionProbesU3Ek__BackingField_9;
	// System.Boolean UnityEngine.Experimental.Rendering.SupportedRenderingFeatures::<rendererSupportsRendererPriority>k__BackingField
	bool ___U3CrendererSupportsRendererPriorityU3Ek__BackingField_10;
	// System.Boolean UnityEngine.Experimental.Rendering.SupportedRenderingFeatures::<rendererOverridesEnvironmentLighting>k__BackingField
	bool ___U3CrendererOverridesEnvironmentLightingU3Ek__BackingField_11;
	// System.Boolean UnityEngine.Experimental.Rendering.SupportedRenderingFeatures::<rendererOverridesFog>k__BackingField
	bool ___U3CrendererOverridesFogU3Ek__BackingField_12;
	// System.Boolean UnityEngine.Experimental.Rendering.SupportedRenderingFeatures::<rendererOverridesOtherLightingSettings>k__BackingField
	bool ___U3CrendererOverridesOtherLightingSettingsU3Ek__BackingField_13;

public:
	inline static int32_t get_offset_of_U3CreflectionProbeSupportFlagsU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(SupportedRenderingFeatures_tF24D93A14DDE0527765F39F6F4B500B14B216F92, ___U3CreflectionProbeSupportFlagsU3Ek__BackingField_1)); }
	inline int32_t get_U3CreflectionProbeSupportFlagsU3Ek__BackingField_1() const { return ___U3CreflectionProbeSupportFlagsU3Ek__BackingField_1; }
	inline int32_t* get_address_of_U3CreflectionProbeSupportFlagsU3Ek__BackingField_1() { return &___U3CreflectionProbeSupportFlagsU3Ek__BackingField_1; }
	inline void set_U3CreflectionProbeSupportFlagsU3Ek__BackingField_1(int32_t value)
	{
		___U3CreflectionProbeSupportFlagsU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CdefaultMixedLightingModeU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(SupportedRenderingFeatures_tF24D93A14DDE0527765F39F6F4B500B14B216F92, ___U3CdefaultMixedLightingModeU3Ek__BackingField_2)); }
	inline int32_t get_U3CdefaultMixedLightingModeU3Ek__BackingField_2() const { return ___U3CdefaultMixedLightingModeU3Ek__BackingField_2; }
	inline int32_t* get_address_of_U3CdefaultMixedLightingModeU3Ek__BackingField_2() { return &___U3CdefaultMixedLightingModeU3Ek__BackingField_2; }
	inline void set_U3CdefaultMixedLightingModeU3Ek__BackingField_2(int32_t value)
	{
		___U3CdefaultMixedLightingModeU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CsupportedMixedLightingModesU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(SupportedRenderingFeatures_tF24D93A14DDE0527765F39F6F4B500B14B216F92, ___U3CsupportedMixedLightingModesU3Ek__BackingField_3)); }
	inline int32_t get_U3CsupportedMixedLightingModesU3Ek__BackingField_3() const { return ___U3CsupportedMixedLightingModesU3Ek__BackingField_3; }
	inline int32_t* get_address_of_U3CsupportedMixedLightingModesU3Ek__BackingField_3() { return &___U3CsupportedMixedLightingModesU3Ek__BackingField_3; }
	inline void set_U3CsupportedMixedLightingModesU3Ek__BackingField_3(int32_t value)
	{
		___U3CsupportedMixedLightingModesU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_U3CsupportedLightmapBakeTypesU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(SupportedRenderingFeatures_tF24D93A14DDE0527765F39F6F4B500B14B216F92, ___U3CsupportedLightmapBakeTypesU3Ek__BackingField_4)); }
	inline int32_t get_U3CsupportedLightmapBakeTypesU3Ek__BackingField_4() const { return ___U3CsupportedLightmapBakeTypesU3Ek__BackingField_4; }
	inline int32_t* get_address_of_U3CsupportedLightmapBakeTypesU3Ek__BackingField_4() { return &___U3CsupportedLightmapBakeTypesU3Ek__BackingField_4; }
	inline void set_U3CsupportedLightmapBakeTypesU3Ek__BackingField_4(int32_t value)
	{
		___U3CsupportedLightmapBakeTypesU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of_U3CsupportedLightmapsModesU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(SupportedRenderingFeatures_tF24D93A14DDE0527765F39F6F4B500B14B216F92, ___U3CsupportedLightmapsModesU3Ek__BackingField_5)); }
	inline int32_t get_U3CsupportedLightmapsModesU3Ek__BackingField_5() const { return ___U3CsupportedLightmapsModesU3Ek__BackingField_5; }
	inline int32_t* get_address_of_U3CsupportedLightmapsModesU3Ek__BackingField_5() { return &___U3CsupportedLightmapsModesU3Ek__BackingField_5; }
	inline void set_U3CsupportedLightmapsModesU3Ek__BackingField_5(int32_t value)
	{
		___U3CsupportedLightmapsModesU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_U3CrendererSupportsLightProbeProxyVolumesU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(SupportedRenderingFeatures_tF24D93A14DDE0527765F39F6F4B500B14B216F92, ___U3CrendererSupportsLightProbeProxyVolumesU3Ek__BackingField_6)); }
	inline bool get_U3CrendererSupportsLightProbeProxyVolumesU3Ek__BackingField_6() const { return ___U3CrendererSupportsLightProbeProxyVolumesU3Ek__BackingField_6; }
	inline bool* get_address_of_U3CrendererSupportsLightProbeProxyVolumesU3Ek__BackingField_6() { return &___U3CrendererSupportsLightProbeProxyVolumesU3Ek__BackingField_6; }
	inline void set_U3CrendererSupportsLightProbeProxyVolumesU3Ek__BackingField_6(bool value)
	{
		___U3CrendererSupportsLightProbeProxyVolumesU3Ek__BackingField_6 = value;
	}

	inline static int32_t get_offset_of_U3CrendererSupportsMotionVectorsU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(SupportedRenderingFeatures_tF24D93A14DDE0527765F39F6F4B500B14B216F92, ___U3CrendererSupportsMotionVectorsU3Ek__BackingField_7)); }
	inline bool get_U3CrendererSupportsMotionVectorsU3Ek__BackingField_7() const { return ___U3CrendererSupportsMotionVectorsU3Ek__BackingField_7; }
	inline bool* get_address_of_U3CrendererSupportsMotionVectorsU3Ek__BackingField_7() { return &___U3CrendererSupportsMotionVectorsU3Ek__BackingField_7; }
	inline void set_U3CrendererSupportsMotionVectorsU3Ek__BackingField_7(bool value)
	{
		___U3CrendererSupportsMotionVectorsU3Ek__BackingField_7 = value;
	}

	inline static int32_t get_offset_of_U3CrendererSupportsReceiveShadowsU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(SupportedRenderingFeatures_tF24D93A14DDE0527765F39F6F4B500B14B216F92, ___U3CrendererSupportsReceiveShadowsU3Ek__BackingField_8)); }
	inline bool get_U3CrendererSupportsReceiveShadowsU3Ek__BackingField_8() const { return ___U3CrendererSupportsReceiveShadowsU3Ek__BackingField_8; }
	inline bool* get_address_of_U3CrendererSupportsReceiveShadowsU3Ek__BackingField_8() { return &___U3CrendererSupportsReceiveShadowsU3Ek__BackingField_8; }
	inline void set_U3CrendererSupportsReceiveShadowsU3Ek__BackingField_8(bool value)
	{
		___U3CrendererSupportsReceiveShadowsU3Ek__BackingField_8 = value;
	}

	inline static int32_t get_offset_of_U3CrendererSupportsReflectionProbesU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(SupportedRenderingFeatures_tF24D93A14DDE0527765F39F6F4B500B14B216F92, ___U3CrendererSupportsReflectionProbesU3Ek__BackingField_9)); }
	inline bool get_U3CrendererSupportsReflectionProbesU3Ek__BackingField_9() const { return ___U3CrendererSupportsReflectionProbesU3Ek__BackingField_9; }
	inline bool* get_address_of_U3CrendererSupportsReflectionProbesU3Ek__BackingField_9() { return &___U3CrendererSupportsReflectionProbesU3Ek__BackingField_9; }
	inline void set_U3CrendererSupportsReflectionProbesU3Ek__BackingField_9(bool value)
	{
		___U3CrendererSupportsReflectionProbesU3Ek__BackingField_9 = value;
	}

	inline static int32_t get_offset_of_U3CrendererSupportsRendererPriorityU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(SupportedRenderingFeatures_tF24D93A14DDE0527765F39F6F4B500B14B216F92, ___U3CrendererSupportsRendererPriorityU3Ek__BackingField_10)); }
	inline bool get_U3CrendererSupportsRendererPriorityU3Ek__BackingField_10() const { return ___U3CrendererSupportsRendererPriorityU3Ek__BackingField_10; }
	inline bool* get_address_of_U3CrendererSupportsRendererPriorityU3Ek__BackingField_10() { return &___U3CrendererSupportsRendererPriorityU3Ek__BackingField_10; }
	inline void set_U3CrendererSupportsRendererPriorityU3Ek__BackingField_10(bool value)
	{
		___U3CrendererSupportsRendererPriorityU3Ek__BackingField_10 = value;
	}

	inline static int32_t get_offset_of_U3CrendererOverridesEnvironmentLightingU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(SupportedRenderingFeatures_tF24D93A14DDE0527765F39F6F4B500B14B216F92, ___U3CrendererOverridesEnvironmentLightingU3Ek__BackingField_11)); }
	inline bool get_U3CrendererOverridesEnvironmentLightingU3Ek__BackingField_11() const { return ___U3CrendererOverridesEnvironmentLightingU3Ek__BackingField_11; }
	inline bool* get_address_of_U3CrendererOverridesEnvironmentLightingU3Ek__BackingField_11() { return &___U3CrendererOverridesEnvironmentLightingU3Ek__BackingField_11; }
	inline void set_U3CrendererOverridesEnvironmentLightingU3Ek__BackingField_11(bool value)
	{
		___U3CrendererOverridesEnvironmentLightingU3Ek__BackingField_11 = value;
	}

	inline static int32_t get_offset_of_U3CrendererOverridesFogU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(SupportedRenderingFeatures_tF24D93A14DDE0527765F39F6F4B500B14B216F92, ___U3CrendererOverridesFogU3Ek__BackingField_12)); }
	inline bool get_U3CrendererOverridesFogU3Ek__BackingField_12() const { return ___U3CrendererOverridesFogU3Ek__BackingField_12; }
	inline bool* get_address_of_U3CrendererOverridesFogU3Ek__BackingField_12() { return &___U3CrendererOverridesFogU3Ek__BackingField_12; }
	inline void set_U3CrendererOverridesFogU3Ek__BackingField_12(bool value)
	{
		___U3CrendererOverridesFogU3Ek__BackingField_12 = value;
	}

	inline static int32_t get_offset_of_U3CrendererOverridesOtherLightingSettingsU3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(SupportedRenderingFeatures_tF24D93A14DDE0527765F39F6F4B500B14B216F92, ___U3CrendererOverridesOtherLightingSettingsU3Ek__BackingField_13)); }
	inline bool get_U3CrendererOverridesOtherLightingSettingsU3Ek__BackingField_13() const { return ___U3CrendererOverridesOtherLightingSettingsU3Ek__BackingField_13; }
	inline bool* get_address_of_U3CrendererOverridesOtherLightingSettingsU3Ek__BackingField_13() { return &___U3CrendererOverridesOtherLightingSettingsU3Ek__BackingField_13; }
	inline void set_U3CrendererOverridesOtherLightingSettingsU3Ek__BackingField_13(bool value)
	{
		___U3CrendererOverridesOtherLightingSettingsU3Ek__BackingField_13 = value;
	}
};

struct SupportedRenderingFeatures_tF24D93A14DDE0527765F39F6F4B500B14B216F92_StaticFields
{
public:
	// UnityEngine.Experimental.Rendering.SupportedRenderingFeatures UnityEngine.Experimental.Rendering.SupportedRenderingFeatures::s_Active
	SupportedRenderingFeatures_tF24D93A14DDE0527765F39F6F4B500B14B216F92 * ___s_Active_0;

public:
	inline static int32_t get_offset_of_s_Active_0() { return static_cast<int32_t>(offsetof(SupportedRenderingFeatures_tF24D93A14DDE0527765F39F6F4B500B14B216F92_StaticFields, ___s_Active_0)); }
	inline SupportedRenderingFeatures_tF24D93A14DDE0527765F39F6F4B500B14B216F92 * get_s_Active_0() const { return ___s_Active_0; }
	inline SupportedRenderingFeatures_tF24D93A14DDE0527765F39F6F4B500B14B216F92 ** get_address_of_s_Active_0() { return &___s_Active_0; }
	inline void set_s_Active_0(SupportedRenderingFeatures_tF24D93A14DDE0527765F39F6F4B500B14B216F92 * value)
	{
		___s_Active_0 = value;
		Il2CppCodeGenWriteBarrier((&___s_Active_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SUPPORTEDRENDERINGFEATURES_TF24D93A14DDE0527765F39F6F4B500B14B216F92_H
#ifndef FONT_T1EDE54AF557272BE314EB4B40EFA50CEB353CA26_H
#define FONT_T1EDE54AF557272BE314EB4B40EFA50CEB353CA26_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Font
struct  Font_t1EDE54AF557272BE314EB4B40EFA50CEB353CA26  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:
	// UnityEngine.Font/FontTextureRebuildCallback UnityEngine.Font::m_FontTextureRebuildCallback
	FontTextureRebuildCallback_tD700C63BB1A449E3A0464C81701E981677D3021C * ___m_FontTextureRebuildCallback_5;

public:
	inline static int32_t get_offset_of_m_FontTextureRebuildCallback_5() { return static_cast<int32_t>(offsetof(Font_t1EDE54AF557272BE314EB4B40EFA50CEB353CA26, ___m_FontTextureRebuildCallback_5)); }
	inline FontTextureRebuildCallback_tD700C63BB1A449E3A0464C81701E981677D3021C * get_m_FontTextureRebuildCallback_5() const { return ___m_FontTextureRebuildCallback_5; }
	inline FontTextureRebuildCallback_tD700C63BB1A449E3A0464C81701E981677D3021C ** get_address_of_m_FontTextureRebuildCallback_5() { return &___m_FontTextureRebuildCallback_5; }
	inline void set_m_FontTextureRebuildCallback_5(FontTextureRebuildCallback_tD700C63BB1A449E3A0464C81701E981677D3021C * value)
	{
		___m_FontTextureRebuildCallback_5 = value;
		Il2CppCodeGenWriteBarrier((&___m_FontTextureRebuildCallback_5), value);
	}
};

struct Font_t1EDE54AF557272BE314EB4B40EFA50CEB353CA26_StaticFields
{
public:
	// System.Action`1<UnityEngine.Font> UnityEngine.Font::textureRebuilt
	Action_1_t795662E553415ECF2DD0F8EEB9BA170C3670F37C * ___textureRebuilt_4;

public:
	inline static int32_t get_offset_of_textureRebuilt_4() { return static_cast<int32_t>(offsetof(Font_t1EDE54AF557272BE314EB4B40EFA50CEB353CA26_StaticFields, ___textureRebuilt_4)); }
	inline Action_1_t795662E553415ECF2DD0F8EEB9BA170C3670F37C * get_textureRebuilt_4() const { return ___textureRebuilt_4; }
	inline Action_1_t795662E553415ECF2DD0F8EEB9BA170C3670F37C ** get_address_of_textureRebuilt_4() { return &___textureRebuilt_4; }
	inline void set_textureRebuilt_4(Action_1_t795662E553415ECF2DD0F8EEB9BA170C3670F37C * value)
	{
		___textureRebuilt_4 = value;
		Il2CppCodeGenWriteBarrier((&___textureRebuilt_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FONT_T1EDE54AF557272BE314EB4B40EFA50CEB353CA26_H
#ifndef LOGGER_TEB67FD7450076B84B97F22DBE8B2911FC4FBC35F_H
#define LOGGER_TEB67FD7450076B84B97F22DBE8B2911FC4FBC35F_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Logger
struct  Logger_tEB67FD7450076B84B97F22DBE8B2911FC4FBC35F  : public RuntimeObject
{
public:
	// UnityEngine.ILogHandler UnityEngine.Logger::<logHandler>k__BackingField
	RuntimeObject* ___U3ClogHandlerU3Ek__BackingField_0;
	// System.Boolean UnityEngine.Logger::<logEnabled>k__BackingField
	bool ___U3ClogEnabledU3Ek__BackingField_1;
	// UnityEngine.LogType UnityEngine.Logger::<filterLogType>k__BackingField
	int32_t ___U3CfilterLogTypeU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3ClogHandlerU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(Logger_tEB67FD7450076B84B97F22DBE8B2911FC4FBC35F, ___U3ClogHandlerU3Ek__BackingField_0)); }
	inline RuntimeObject* get_U3ClogHandlerU3Ek__BackingField_0() const { return ___U3ClogHandlerU3Ek__BackingField_0; }
	inline RuntimeObject** get_address_of_U3ClogHandlerU3Ek__BackingField_0() { return &___U3ClogHandlerU3Ek__BackingField_0; }
	inline void set_U3ClogHandlerU3Ek__BackingField_0(RuntimeObject* value)
	{
		___U3ClogHandlerU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3ClogHandlerU3Ek__BackingField_0), value);
	}

	inline static int32_t get_offset_of_U3ClogEnabledU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(Logger_tEB67FD7450076B84B97F22DBE8B2911FC4FBC35F, ___U3ClogEnabledU3Ek__BackingField_1)); }
	inline bool get_U3ClogEnabledU3Ek__BackingField_1() const { return ___U3ClogEnabledU3Ek__BackingField_1; }
	inline bool* get_address_of_U3ClogEnabledU3Ek__BackingField_1() { return &___U3ClogEnabledU3Ek__BackingField_1; }
	inline void set_U3ClogEnabledU3Ek__BackingField_1(bool value)
	{
		___U3ClogEnabledU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CfilterLogTypeU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(Logger_tEB67FD7450076B84B97F22DBE8B2911FC4FBC35F, ___U3CfilterLogTypeU3Ek__BackingField_2)); }
	inline int32_t get_U3CfilterLogTypeU3Ek__BackingField_2() const { return ___U3CfilterLogTypeU3Ek__BackingField_2; }
	inline int32_t* get_address_of_U3CfilterLogTypeU3Ek__BackingField_2() { return &___U3CfilterLogTypeU3Ek__BackingField_2; }
	inline void set_U3CfilterLogTypeU3Ek__BackingField_2(int32_t value)
	{
		___U3CfilterLogTypeU3Ek__BackingField_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LOGGER_TEB67FD7450076B84B97F22DBE8B2911FC4FBC35F_H
#ifndef PLAYABLE_T4ABB910C374FCAB6B926DA4D34A85857A59950D0_H
#define PLAYABLE_T4ABB910C374FCAB6B926DA4D34A85857A59950D0_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Playables.Playable
struct  Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0 
{
public:
	// UnityEngine.Playables.PlayableHandle UnityEngine.Playables.Playable::m_Handle
	PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0, ___m_Handle_0)); }
	inline PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  get_m_Handle_0() const { return ___m_Handle_0; }
	inline PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 * get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182  value)
	{
		___m_Handle_0 = value;
	}
};

struct Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0_StaticFields
{
public:
	// UnityEngine.Playables.Playable UnityEngine.Playables.Playable::m_NullPlayable
	Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0  ___m_NullPlayable_1;

public:
	inline static int32_t get_offset_of_m_NullPlayable_1() { return static_cast<int32_t>(offsetof(Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0_StaticFields, ___m_NullPlayable_1)); }
	inline Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0  get_m_NullPlayable_1() const { return ___m_NullPlayable_1; }
	inline Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0 * get_address_of_m_NullPlayable_1() { return &___m_NullPlayable_1; }
	inline void set_m_NullPlayable_1(Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0  value)
	{
		___m_NullPlayable_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYABLE_T4ABB910C374FCAB6B926DA4D34A85857A59950D0_H
#ifndef PLAYABLEBINDING_T4D92F4CF16B8608DD83947E5D40CB7690F23F9C8_H
#define PLAYABLEBINDING_T4D92F4CF16B8608DD83947E5D40CB7690F23F9C8_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Playables.PlayableBinding
struct  PlayableBinding_t4D92F4CF16B8608DD83947E5D40CB7690F23F9C8 
{
public:
	// System.String UnityEngine.Playables.PlayableBinding::m_StreamName
	String_t* ___m_StreamName_0;
	// UnityEngine.Object UnityEngine.Playables.PlayableBinding::m_SourceObject
	Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___m_SourceObject_1;
	// System.Type UnityEngine.Playables.PlayableBinding::m_SourceBindingType
	Type_t * ___m_SourceBindingType_2;
	// UnityEngine.Playables.PlayableBinding/CreateOutputMethod UnityEngine.Playables.PlayableBinding::m_CreateOutputMethod
	CreateOutputMethod_tA7B649F49822FC5DD0B0D9F17247C73CAECB1CA3 * ___m_CreateOutputMethod_3;

public:
	inline static int32_t get_offset_of_m_StreamName_0() { return static_cast<int32_t>(offsetof(PlayableBinding_t4D92F4CF16B8608DD83947E5D40CB7690F23F9C8, ___m_StreamName_0)); }
	inline String_t* get_m_StreamName_0() const { return ___m_StreamName_0; }
	inline String_t** get_address_of_m_StreamName_0() { return &___m_StreamName_0; }
	inline void set_m_StreamName_0(String_t* value)
	{
		___m_StreamName_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_StreamName_0), value);
	}

	inline static int32_t get_offset_of_m_SourceObject_1() { return static_cast<int32_t>(offsetof(PlayableBinding_t4D92F4CF16B8608DD83947E5D40CB7690F23F9C8, ___m_SourceObject_1)); }
	inline Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * get_m_SourceObject_1() const { return ___m_SourceObject_1; }
	inline Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 ** get_address_of_m_SourceObject_1() { return &___m_SourceObject_1; }
	inline void set_m_SourceObject_1(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * value)
	{
		___m_SourceObject_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_SourceObject_1), value);
	}

	inline static int32_t get_offset_of_m_SourceBindingType_2() { return static_cast<int32_t>(offsetof(PlayableBinding_t4D92F4CF16B8608DD83947E5D40CB7690F23F9C8, ___m_SourceBindingType_2)); }
	inline Type_t * get_m_SourceBindingType_2() const { return ___m_SourceBindingType_2; }
	inline Type_t ** get_address_of_m_SourceBindingType_2() { return &___m_SourceBindingType_2; }
	inline void set_m_SourceBindingType_2(Type_t * value)
	{
		___m_SourceBindingType_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_SourceBindingType_2), value);
	}

	inline static int32_t get_offset_of_m_CreateOutputMethod_3() { return static_cast<int32_t>(offsetof(PlayableBinding_t4D92F4CF16B8608DD83947E5D40CB7690F23F9C8, ___m_CreateOutputMethod_3)); }
	inline CreateOutputMethod_tA7B649F49822FC5DD0B0D9F17247C73CAECB1CA3 * get_m_CreateOutputMethod_3() const { return ___m_CreateOutputMethod_3; }
	inline CreateOutputMethod_tA7B649F49822FC5DD0B0D9F17247C73CAECB1CA3 ** get_address_of_m_CreateOutputMethod_3() { return &___m_CreateOutputMethod_3; }
	inline void set_m_CreateOutputMethod_3(CreateOutputMethod_tA7B649F49822FC5DD0B0D9F17247C73CAECB1CA3 * value)
	{
		___m_CreateOutputMethod_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_CreateOutputMethod_3), value);
	}
};

struct PlayableBinding_t4D92F4CF16B8608DD83947E5D40CB7690F23F9C8_StaticFields
{
public:
	// UnityEngine.Playables.PlayableBinding[] UnityEngine.Playables.PlayableBinding::None
	PlayableBindingU5BU5D_t7EB322901D51EAB67BA4F711C87F3AC1CF5D89AB* ___None_4;
	// System.Double UnityEngine.Playables.PlayableBinding::DefaultDuration
	double ___DefaultDuration_5;

public:
	inline static int32_t get_offset_of_None_4() { return static_cast<int32_t>(offsetof(PlayableBinding_t4D92F4CF16B8608DD83947E5D40CB7690F23F9C8_StaticFields, ___None_4)); }
	inline PlayableBindingU5BU5D_t7EB322901D51EAB67BA4F711C87F3AC1CF5D89AB* get_None_4() const { return ___None_4; }
	inline PlayableBindingU5BU5D_t7EB322901D51EAB67BA4F711C87F3AC1CF5D89AB** get_address_of_None_4() { return &___None_4; }
	inline void set_None_4(PlayableBindingU5BU5D_t7EB322901D51EAB67BA4F711C87F3AC1CF5D89AB* value)
	{
		___None_4 = value;
		Il2CppCodeGenWriteBarrier((&___None_4), value);
	}

	inline static int32_t get_offset_of_DefaultDuration_5() { return static_cast<int32_t>(offsetof(PlayableBinding_t4D92F4CF16B8608DD83947E5D40CB7690F23F9C8_StaticFields, ___DefaultDuration_5)); }
	inline double get_DefaultDuration_5() const { return ___DefaultDuration_5; }
	inline double* get_address_of_DefaultDuration_5() { return &___DefaultDuration_5; }
	inline void set_DefaultDuration_5(double value)
	{
		___DefaultDuration_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Playables.PlayableBinding
struct PlayableBinding_t4D92F4CF16B8608DD83947E5D40CB7690F23F9C8_marshaled_pinvoke
{
	char* ___m_StreamName_0;
	Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_pinvoke ___m_SourceObject_1;
	Type_t * ___m_SourceBindingType_2;
	Il2CppMethodPointer ___m_CreateOutputMethod_3;
};
// Native definition for COM marshalling of UnityEngine.Playables.PlayableBinding
struct PlayableBinding_t4D92F4CF16B8608DD83947E5D40CB7690F23F9C8_marshaled_com
{
	Il2CppChar* ___m_StreamName_0;
	Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_com* ___m_SourceObject_1;
	Type_t * ___m_SourceBindingType_2;
	Il2CppMethodPointer ___m_CreateOutputMethod_3;
};
#endif // PLAYABLEBINDING_T4D92F4CF16B8608DD83947E5D40CB7690F23F9C8_H
#ifndef PLAYABLEOUTPUT_T5E024C3D28C983782CD4FDB2FA5AD23998D21345_H
#define PLAYABLEOUTPUT_T5E024C3D28C983782CD4FDB2FA5AD23998D21345_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Playables.PlayableOutput
struct  PlayableOutput_t5E024C3D28C983782CD4FDB2FA5AD23998D21345 
{
public:
	// UnityEngine.Playables.PlayableOutputHandle UnityEngine.Playables.PlayableOutput::m_Handle
	PlayableOutputHandle_t0D0C9D8ACC1A4061BD4EAEB61F3EE0357052F922  ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(PlayableOutput_t5E024C3D28C983782CD4FDB2FA5AD23998D21345, ___m_Handle_0)); }
	inline PlayableOutputHandle_t0D0C9D8ACC1A4061BD4EAEB61F3EE0357052F922  get_m_Handle_0() const { return ___m_Handle_0; }
	inline PlayableOutputHandle_t0D0C9D8ACC1A4061BD4EAEB61F3EE0357052F922 * get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(PlayableOutputHandle_t0D0C9D8ACC1A4061BD4EAEB61F3EE0357052F922  value)
	{
		___m_Handle_0 = value;
	}
};

struct PlayableOutput_t5E024C3D28C983782CD4FDB2FA5AD23998D21345_StaticFields
{
public:
	// UnityEngine.Playables.PlayableOutput UnityEngine.Playables.PlayableOutput::m_NullPlayableOutput
	PlayableOutput_t5E024C3D28C983782CD4FDB2FA5AD23998D21345  ___m_NullPlayableOutput_1;

public:
	inline static int32_t get_offset_of_m_NullPlayableOutput_1() { return static_cast<int32_t>(offsetof(PlayableOutput_t5E024C3D28C983782CD4FDB2FA5AD23998D21345_StaticFields, ___m_NullPlayableOutput_1)); }
	inline PlayableOutput_t5E024C3D28C983782CD4FDB2FA5AD23998D21345  get_m_NullPlayableOutput_1() const { return ___m_NullPlayableOutput_1; }
	inline PlayableOutput_t5E024C3D28C983782CD4FDB2FA5AD23998D21345 * get_address_of_m_NullPlayableOutput_1() { return &___m_NullPlayableOutput_1; }
	inline void set_m_NullPlayableOutput_1(PlayableOutput_t5E024C3D28C983782CD4FDB2FA5AD23998D21345  value)
	{
		___m_NullPlayableOutput_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYABLEOUTPUT_T5E024C3D28C983782CD4FDB2FA5AD23998D21345_H
#ifndef SCRIPTPLAYABLEOUTPUT_T67E829DFF611371240082B6430A5BBD849291446_H
#define SCRIPTPLAYABLEOUTPUT_T67E829DFF611371240082B6430A5BBD849291446_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Playables.ScriptPlayableOutput
struct  ScriptPlayableOutput_t67E829DFF611371240082B6430A5BBD849291446 
{
public:
	// UnityEngine.Playables.PlayableOutputHandle UnityEngine.Playables.ScriptPlayableOutput::m_Handle
	PlayableOutputHandle_t0D0C9D8ACC1A4061BD4EAEB61F3EE0357052F922  ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(ScriptPlayableOutput_t67E829DFF611371240082B6430A5BBD849291446, ___m_Handle_0)); }
	inline PlayableOutputHandle_t0D0C9D8ACC1A4061BD4EAEB61F3EE0357052F922  get_m_Handle_0() const { return ___m_Handle_0; }
	inline PlayableOutputHandle_t0D0C9D8ACC1A4061BD4EAEB61F3EE0357052F922 * get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(PlayableOutputHandle_t0D0C9D8ACC1A4061BD4EAEB61F3EE0357052F922  value)
	{
		___m_Handle_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SCRIPTPLAYABLEOUTPUT_T67E829DFF611371240082B6430A5BBD849291446_H
#ifndef SCRIPTABLEOBJECT_TAB015486CEAB714DA0D5C1BA389B84FB90427734_H
#define SCRIPTABLEOBJECT_TAB015486CEAB714DA0D5C1BA389B84FB90427734_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.ScriptableObject
struct  ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734_marshaled_pinvoke : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734_marshaled_com : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_com
{
};
#endif // SCRIPTABLEOBJECT_TAB015486CEAB714DA0D5C1BA389B84FB90427734_H
#ifndef SPRITE_TCA09498D612D08DE668653AF1E9C12BF53434198_H
#define SPRITE_TCA09498D612D08DE668653AF1E9C12BF53434198_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Sprite
struct  Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SPRITE_TCA09498D612D08DE668653AF1E9C12BF53434198_H
#ifndef TEXTGENERATIONSETTINGS_T37703542535A1638D2A08F41DB629A483616AF68_H
#define TEXTGENERATIONSETTINGS_T37703542535A1638D2A08F41DB629A483616AF68_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.TextGenerationSettings
struct  TextGenerationSettings_t37703542535A1638D2A08F41DB629A483616AF68 
{
public:
	// UnityEngine.Font UnityEngine.TextGenerationSettings::font
	Font_t1EDE54AF557272BE314EB4B40EFA50CEB353CA26 * ___font_0;
	// UnityEngine.Color UnityEngine.TextGenerationSettings::color
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___color_1;
	// System.Int32 UnityEngine.TextGenerationSettings::fontSize
	int32_t ___fontSize_2;
	// System.Single UnityEngine.TextGenerationSettings::lineSpacing
	float ___lineSpacing_3;
	// System.Boolean UnityEngine.TextGenerationSettings::richText
	bool ___richText_4;
	// System.Single UnityEngine.TextGenerationSettings::scaleFactor
	float ___scaleFactor_5;
	// UnityEngine.FontStyle UnityEngine.TextGenerationSettings::fontStyle
	int32_t ___fontStyle_6;
	// UnityEngine.TextAnchor UnityEngine.TextGenerationSettings::textAnchor
	int32_t ___textAnchor_7;
	// System.Boolean UnityEngine.TextGenerationSettings::alignByGeometry
	bool ___alignByGeometry_8;
	// System.Boolean UnityEngine.TextGenerationSettings::resizeTextForBestFit
	bool ___resizeTextForBestFit_9;
	// System.Int32 UnityEngine.TextGenerationSettings::resizeTextMinSize
	int32_t ___resizeTextMinSize_10;
	// System.Int32 UnityEngine.TextGenerationSettings::resizeTextMaxSize
	int32_t ___resizeTextMaxSize_11;
	// System.Boolean UnityEngine.TextGenerationSettings::updateBounds
	bool ___updateBounds_12;
	// UnityEngine.VerticalWrapMode UnityEngine.TextGenerationSettings::verticalOverflow
	int32_t ___verticalOverflow_13;
	// UnityEngine.HorizontalWrapMode UnityEngine.TextGenerationSettings::horizontalOverflow
	int32_t ___horizontalOverflow_14;
	// UnityEngine.Vector2 UnityEngine.TextGenerationSettings::generationExtents
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___generationExtents_15;
	// UnityEngine.Vector2 UnityEngine.TextGenerationSettings::pivot
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___pivot_16;
	// System.Boolean UnityEngine.TextGenerationSettings::generateOutOfBounds
	bool ___generateOutOfBounds_17;

public:
	inline static int32_t get_offset_of_font_0() { return static_cast<int32_t>(offsetof(TextGenerationSettings_t37703542535A1638D2A08F41DB629A483616AF68, ___font_0)); }
	inline Font_t1EDE54AF557272BE314EB4B40EFA50CEB353CA26 * get_font_0() const { return ___font_0; }
	inline Font_t1EDE54AF557272BE314EB4B40EFA50CEB353CA26 ** get_address_of_font_0() { return &___font_0; }
	inline void set_font_0(Font_t1EDE54AF557272BE314EB4B40EFA50CEB353CA26 * value)
	{
		___font_0 = value;
		Il2CppCodeGenWriteBarrier((&___font_0), value);
	}

	inline static int32_t get_offset_of_color_1() { return static_cast<int32_t>(offsetof(TextGenerationSettings_t37703542535A1638D2A08F41DB629A483616AF68, ___color_1)); }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  get_color_1() const { return ___color_1; }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * get_address_of_color_1() { return &___color_1; }
	inline void set_color_1(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  value)
	{
		___color_1 = value;
	}

	inline static int32_t get_offset_of_fontSize_2() { return static_cast<int32_t>(offsetof(TextGenerationSettings_t37703542535A1638D2A08F41DB629A483616AF68, ___fontSize_2)); }
	inline int32_t get_fontSize_2() const { return ___fontSize_2; }
	inline int32_t* get_address_of_fontSize_2() { return &___fontSize_2; }
	inline void set_fontSize_2(int32_t value)
	{
		___fontSize_2 = value;
	}

	inline static int32_t get_offset_of_lineSpacing_3() { return static_cast<int32_t>(offsetof(TextGenerationSettings_t37703542535A1638D2A08F41DB629A483616AF68, ___lineSpacing_3)); }
	inline float get_lineSpacing_3() const { return ___lineSpacing_3; }
	inline float* get_address_of_lineSpacing_3() { return &___lineSpacing_3; }
	inline void set_lineSpacing_3(float value)
	{
		___lineSpacing_3 = value;
	}

	inline static int32_t get_offset_of_richText_4() { return static_cast<int32_t>(offsetof(TextGenerationSettings_t37703542535A1638D2A08F41DB629A483616AF68, ___richText_4)); }
	inline bool get_richText_4() const { return ___richText_4; }
	inline bool* get_address_of_richText_4() { return &___richText_4; }
	inline void set_richText_4(bool value)
	{
		___richText_4 = value;
	}

	inline static int32_t get_offset_of_scaleFactor_5() { return static_cast<int32_t>(offsetof(TextGenerationSettings_t37703542535A1638D2A08F41DB629A483616AF68, ___scaleFactor_5)); }
	inline float get_scaleFactor_5() const { return ___scaleFactor_5; }
	inline float* get_address_of_scaleFactor_5() { return &___scaleFactor_5; }
	inline void set_scaleFactor_5(float value)
	{
		___scaleFactor_5 = value;
	}

	inline static int32_t get_offset_of_fontStyle_6() { return static_cast<int32_t>(offsetof(TextGenerationSettings_t37703542535A1638D2A08F41DB629A483616AF68, ___fontStyle_6)); }
	inline int32_t get_fontStyle_6() const { return ___fontStyle_6; }
	inline int32_t* get_address_of_fontStyle_6() { return &___fontStyle_6; }
	inline void set_fontStyle_6(int32_t value)
	{
		___fontStyle_6 = value;
	}

	inline static int32_t get_offset_of_textAnchor_7() { return static_cast<int32_t>(offsetof(TextGenerationSettings_t37703542535A1638D2A08F41DB629A483616AF68, ___textAnchor_7)); }
	inline int32_t get_textAnchor_7() const { return ___textAnchor_7; }
	inline int32_t* get_address_of_textAnchor_7() { return &___textAnchor_7; }
	inline void set_textAnchor_7(int32_t value)
	{
		___textAnchor_7 = value;
	}

	inline static int32_t get_offset_of_alignByGeometry_8() { return static_cast<int32_t>(offsetof(TextGenerationSettings_t37703542535A1638D2A08F41DB629A483616AF68, ___alignByGeometry_8)); }
	inline bool get_alignByGeometry_8() const { return ___alignByGeometry_8; }
	inline bool* get_address_of_alignByGeometry_8() { return &___alignByGeometry_8; }
	inline void set_alignByGeometry_8(bool value)
	{
		___alignByGeometry_8 = value;
	}

	inline static int32_t get_offset_of_resizeTextForBestFit_9() { return static_cast<int32_t>(offsetof(TextGenerationSettings_t37703542535A1638D2A08F41DB629A483616AF68, ___resizeTextForBestFit_9)); }
	inline bool get_resizeTextForBestFit_9() const { return ___resizeTextForBestFit_9; }
	inline bool* get_address_of_resizeTextForBestFit_9() { return &___resizeTextForBestFit_9; }
	inline void set_resizeTextForBestFit_9(bool value)
	{
		___resizeTextForBestFit_9 = value;
	}

	inline static int32_t get_offset_of_resizeTextMinSize_10() { return static_cast<int32_t>(offsetof(TextGenerationSettings_t37703542535A1638D2A08F41DB629A483616AF68, ___resizeTextMinSize_10)); }
	inline int32_t get_resizeTextMinSize_10() const { return ___resizeTextMinSize_10; }
	inline int32_t* get_address_of_resizeTextMinSize_10() { return &___resizeTextMinSize_10; }
	inline void set_resizeTextMinSize_10(int32_t value)
	{
		___resizeTextMinSize_10 = value;
	}

	inline static int32_t get_offset_of_resizeTextMaxSize_11() { return static_cast<int32_t>(offsetof(TextGenerationSettings_t37703542535A1638D2A08F41DB629A483616AF68, ___resizeTextMaxSize_11)); }
	inline int32_t get_resizeTextMaxSize_11() const { return ___resizeTextMaxSize_11; }
	inline int32_t* get_address_of_resizeTextMaxSize_11() { return &___resizeTextMaxSize_11; }
	inline void set_resizeTextMaxSize_11(int32_t value)
	{
		___resizeTextMaxSize_11 = value;
	}

	inline static int32_t get_offset_of_updateBounds_12() { return static_cast<int32_t>(offsetof(TextGenerationSettings_t37703542535A1638D2A08F41DB629A483616AF68, ___updateBounds_12)); }
	inline bool get_updateBounds_12() const { return ___updateBounds_12; }
	inline bool* get_address_of_updateBounds_12() { return &___updateBounds_12; }
	inline void set_updateBounds_12(bool value)
	{
		___updateBounds_12 = value;
	}

	inline static int32_t get_offset_of_verticalOverflow_13() { return static_cast<int32_t>(offsetof(TextGenerationSettings_t37703542535A1638D2A08F41DB629A483616AF68, ___verticalOverflow_13)); }
	inline int32_t get_verticalOverflow_13() const { return ___verticalOverflow_13; }
	inline int32_t* get_address_of_verticalOverflow_13() { return &___verticalOverflow_13; }
	inline void set_verticalOverflow_13(int32_t value)
	{
		___verticalOverflow_13 = value;
	}

	inline static int32_t get_offset_of_horizontalOverflow_14() { return static_cast<int32_t>(offsetof(TextGenerationSettings_t37703542535A1638D2A08F41DB629A483616AF68, ___horizontalOverflow_14)); }
	inline int32_t get_horizontalOverflow_14() const { return ___horizontalOverflow_14; }
	inline int32_t* get_address_of_horizontalOverflow_14() { return &___horizontalOverflow_14; }
	inline void set_horizontalOverflow_14(int32_t value)
	{
		___horizontalOverflow_14 = value;
	}

	inline static int32_t get_offset_of_generationExtents_15() { return static_cast<int32_t>(offsetof(TextGenerationSettings_t37703542535A1638D2A08F41DB629A483616AF68, ___generationExtents_15)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_generationExtents_15() const { return ___generationExtents_15; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_generationExtents_15() { return &___generationExtents_15; }
	inline void set_generationExtents_15(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___generationExtents_15 = value;
	}

	inline static int32_t get_offset_of_pivot_16() { return static_cast<int32_t>(offsetof(TextGenerationSettings_t37703542535A1638D2A08F41DB629A483616AF68, ___pivot_16)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_pivot_16() const { return ___pivot_16; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_pivot_16() { return &___pivot_16; }
	inline void set_pivot_16(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___pivot_16 = value;
	}

	inline static int32_t get_offset_of_generateOutOfBounds_17() { return static_cast<int32_t>(offsetof(TextGenerationSettings_t37703542535A1638D2A08F41DB629A483616AF68, ___generateOutOfBounds_17)); }
	inline bool get_generateOutOfBounds_17() const { return ___generateOutOfBounds_17; }
	inline bool* get_address_of_generateOutOfBounds_17() { return &___generateOutOfBounds_17; }
	inline void set_generateOutOfBounds_17(bool value)
	{
		___generateOutOfBounds_17 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.TextGenerationSettings
struct TextGenerationSettings_t37703542535A1638D2A08F41DB629A483616AF68_marshaled_pinvoke
{
	Font_t1EDE54AF557272BE314EB4B40EFA50CEB353CA26 * ___font_0;
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___color_1;
	int32_t ___fontSize_2;
	float ___lineSpacing_3;
	int32_t ___richText_4;
	float ___scaleFactor_5;
	int32_t ___fontStyle_6;
	int32_t ___textAnchor_7;
	int32_t ___alignByGeometry_8;
	int32_t ___resizeTextForBestFit_9;
	int32_t ___resizeTextMinSize_10;
	int32_t ___resizeTextMaxSize_11;
	int32_t ___updateBounds_12;
	int32_t ___verticalOverflow_13;
	int32_t ___horizontalOverflow_14;
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___generationExtents_15;
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___pivot_16;
	int32_t ___generateOutOfBounds_17;
};
// Native definition for COM marshalling of UnityEngine.TextGenerationSettings
struct TextGenerationSettings_t37703542535A1638D2A08F41DB629A483616AF68_marshaled_com
{
	Font_t1EDE54AF557272BE314EB4B40EFA50CEB353CA26 * ___font_0;
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___color_1;
	int32_t ___fontSize_2;
	float ___lineSpacing_3;
	int32_t ___richText_4;
	float ___scaleFactor_5;
	int32_t ___fontStyle_6;
	int32_t ___textAnchor_7;
	int32_t ___alignByGeometry_8;
	int32_t ___resizeTextForBestFit_9;
	int32_t ___resizeTextMinSize_10;
	int32_t ___resizeTextMaxSize_11;
	int32_t ___updateBounds_12;
	int32_t ___verticalOverflow_13;
	int32_t ___horizontalOverflow_14;
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___generationExtents_15;
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___pivot_16;
	int32_t ___generateOutOfBounds_17;
};
#endif // TEXTGENERATIONSETTINGS_T37703542535A1638D2A08F41DB629A483616AF68_H
#ifndef SPRITEATLAS_T3CCE7E93E25959957EF61B2A875FEF42DAD8537A_H
#define SPRITEATLAS_T3CCE7E93E25959957EF61B2A875FEF42DAD8537A_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.U2D.SpriteAtlas
struct  SpriteAtlas_t3CCE7E93E25959957EF61B2A875FEF42DAD8537A  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SPRITEATLAS_T3CCE7E93E25959957EF61B2A875FEF42DAD8537A_H
#ifndef FONTTEXTUREREBUILDCALLBACK_TD700C63BB1A449E3A0464C81701E981677D3021C_H
#define FONTTEXTUREREBUILDCALLBACK_TD700C63BB1A449E3A0464C81701E981677D3021C_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Font/FontTextureRebuildCallback
struct  FontTextureRebuildCallback_tD700C63BB1A449E3A0464C81701E981677D3021C  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FONTTEXTUREREBUILDCALLBACK_TD700C63BB1A449E3A0464C81701E981677D3021C_H
#ifndef PLAYERCONNECTION_TFC3A80EAE06A41E9D3879144C86D87DE99EC56EA_H
#define PLAYERCONNECTION_TFC3A80EAE06A41E9D3879144C86D87DE99EC56EA_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.PlayerConnection.PlayerConnection
struct  PlayerConnection_tFC3A80EAE06A41E9D3879144C86D87DE99EC56EA  : public ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734
{
public:
	// UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents UnityEngine.Networking.PlayerConnection.PlayerConnection::m_PlayerEditorConnectionEvents
	PlayerEditorConnectionEvents_t34FBEA62160A657924BC889C2F9FC4B0FC601D5A * ___m_PlayerEditorConnectionEvents_5;
	// System.Collections.Generic.List`1<System.Int32> UnityEngine.Networking.PlayerConnection.PlayerConnection::m_connectedPlayers
	List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * ___m_connectedPlayers_6;
	// System.Boolean UnityEngine.Networking.PlayerConnection.PlayerConnection::m_IsInitilized
	bool ___m_IsInitilized_7;

public:
	inline static int32_t get_offset_of_m_PlayerEditorConnectionEvents_5() { return static_cast<int32_t>(offsetof(PlayerConnection_tFC3A80EAE06A41E9D3879144C86D87DE99EC56EA, ___m_PlayerEditorConnectionEvents_5)); }
	inline PlayerEditorConnectionEvents_t34FBEA62160A657924BC889C2F9FC4B0FC601D5A * get_m_PlayerEditorConnectionEvents_5() const { return ___m_PlayerEditorConnectionEvents_5; }
	inline PlayerEditorConnectionEvents_t34FBEA62160A657924BC889C2F9FC4B0FC601D5A ** get_address_of_m_PlayerEditorConnectionEvents_5() { return &___m_PlayerEditorConnectionEvents_5; }
	inline void set_m_PlayerEditorConnectionEvents_5(PlayerEditorConnectionEvents_t34FBEA62160A657924BC889C2F9FC4B0FC601D5A * value)
	{
		___m_PlayerEditorConnectionEvents_5 = value;
		Il2CppCodeGenWriteBarrier((&___m_PlayerEditorConnectionEvents_5), value);
	}

	inline static int32_t get_offset_of_m_connectedPlayers_6() { return static_cast<int32_t>(offsetof(PlayerConnection_tFC3A80EAE06A41E9D3879144C86D87DE99EC56EA, ___m_connectedPlayers_6)); }
	inline List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * get_m_connectedPlayers_6() const { return ___m_connectedPlayers_6; }
	inline List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 ** get_address_of_m_connectedPlayers_6() { return &___m_connectedPlayers_6; }
	inline void set_m_connectedPlayers_6(List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * value)
	{
		___m_connectedPlayers_6 = value;
		Il2CppCodeGenWriteBarrier((&___m_connectedPlayers_6), value);
	}

	inline static int32_t get_offset_of_m_IsInitilized_7() { return static_cast<int32_t>(offsetof(PlayerConnection_tFC3A80EAE06A41E9D3879144C86D87DE99EC56EA, ___m_IsInitilized_7)); }
	inline bool get_m_IsInitilized_7() const { return ___m_IsInitilized_7; }
	inline bool* get_address_of_m_IsInitilized_7() { return &___m_IsInitilized_7; }
	inline void set_m_IsInitilized_7(bool value)
	{
		___m_IsInitilized_7 = value;
	}
};

struct PlayerConnection_tFC3A80EAE06A41E9D3879144C86D87DE99EC56EA_StaticFields
{
public:
	// UnityEngine.IPlayerEditorConnectionNative UnityEngine.Networking.PlayerConnection.PlayerConnection::connectionNative
	RuntimeObject* ___connectionNative_4;
	// UnityEngine.Networking.PlayerConnection.PlayerConnection UnityEngine.Networking.PlayerConnection.PlayerConnection::s_Instance
	PlayerConnection_tFC3A80EAE06A41E9D3879144C86D87DE99EC56EA * ___s_Instance_8;

public:
	inline static int32_t get_offset_of_connectionNative_4() { return static_cast<int32_t>(offsetof(PlayerConnection_tFC3A80EAE06A41E9D3879144C86D87DE99EC56EA_StaticFields, ___connectionNative_4)); }
	inline RuntimeObject* get_connectionNative_4() const { return ___connectionNative_4; }
	inline RuntimeObject** get_address_of_connectionNative_4() { return &___connectionNative_4; }
	inline void set_connectionNative_4(RuntimeObject* value)
	{
		___connectionNative_4 = value;
		Il2CppCodeGenWriteBarrier((&___connectionNative_4), value);
	}

	inline static int32_t get_offset_of_s_Instance_8() { return static_cast<int32_t>(offsetof(PlayerConnection_tFC3A80EAE06A41E9D3879144C86D87DE99EC56EA_StaticFields, ___s_Instance_8)); }
	inline PlayerConnection_tFC3A80EAE06A41E9D3879144C86D87DE99EC56EA * get_s_Instance_8() const { return ___s_Instance_8; }
	inline PlayerConnection_tFC3A80EAE06A41E9D3879144C86D87DE99EC56EA ** get_address_of_s_Instance_8() { return &___s_Instance_8; }
	inline void set_s_Instance_8(PlayerConnection_tFC3A80EAE06A41E9D3879144C86D87DE99EC56EA * value)
	{
		___s_Instance_8 = value;
		Il2CppCodeGenWriteBarrier((&___s_Instance_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYERCONNECTION_TFC3A80EAE06A41E9D3879144C86D87DE99EC56EA_H
#ifndef PLAYABLEASSET_T28B670EFE526C0D383A1C5A5AE2A150424E989AD_H
#define PLAYABLEASSET_T28B670EFE526C0D383A1C5A5AE2A150424E989AD_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Playables.PlayableAsset
struct  PlayableAsset_t28B670EFE526C0D383A1C5A5AE2A150424E989AD  : public ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYABLEASSET_T28B670EFE526C0D383A1C5A5AE2A150424E989AD_H
#ifndef CREATEOUTPUTMETHOD_TA7B649F49822FC5DD0B0D9F17247C73CAECB1CA3_H
#define CREATEOUTPUTMETHOD_TA7B649F49822FC5DD0B0D9F17247C73CAECB1CA3_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Playables.PlayableBinding/CreateOutputMethod
struct  CreateOutputMethod_tA7B649F49822FC5DD0B0D9F17247C73CAECB1CA3  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CREATEOUTPUTMETHOD_TA7B649F49822FC5DD0B0D9F17247C73CAECB1CA3_H
#ifndef REAPPLYDRIVENPROPERTIES_T431F4FBD9C59AE097FE33C4354CC6251B01B527D_H
#define REAPPLYDRIVENPROPERTIES_T431F4FBD9C59AE097FE33C4354CC6251B01B527D_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.RectTransform/ReapplyDrivenProperties
struct  ReapplyDrivenProperties_t431F4FBD9C59AE097FE33C4354CC6251B01B527D  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REAPPLYDRIVENPROPERTIES_T431F4FBD9C59AE097FE33C4354CC6251B01B527D_H
#ifndef RENDERER_T0556D67DD582620D1F495627EDE30D03284151F4_H
#define RENDERER_T0556D67DD582620D1F495627EDE30D03284151F4_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Renderer
struct  Renderer_t0556D67DD582620D1F495627EDE30D03284151F4  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RENDERER_T0556D67DD582620D1F495627EDE30D03284151F4_H
#ifndef STATEMACHINEBEHAVIOUR_T698612ED92024B087045C388731B7673550C786C_H
#define STATEMACHINEBEHAVIOUR_T698612ED92024B087045C388731B7673550C786C_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.StateMachineBehaviour
struct  StateMachineBehaviour_t698612ED92024B087045C388731B7673550C786C  : public ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STATEMACHINEBEHAVIOUR_T698612ED92024B087045C388731B7673550C786C_H
#ifndef TEXTGENERATOR_TD455BE18A64C7DDF854F6DB3CCEBF705121C58A8_H
#define TEXTGENERATOR_TD455BE18A64C7DDF854F6DB3CCEBF705121C58A8_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.TextGenerator
struct  TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.TextGenerator::m_Ptr
	intptr_t ___m_Ptr_0;
	// System.String UnityEngine.TextGenerator::m_LastString
	String_t* ___m_LastString_1;
	// UnityEngine.TextGenerationSettings UnityEngine.TextGenerator::m_LastSettings
	TextGenerationSettings_t37703542535A1638D2A08F41DB629A483616AF68  ___m_LastSettings_2;
	// System.Boolean UnityEngine.TextGenerator::m_HasGenerated
	bool ___m_HasGenerated_3;
	// UnityEngine.TextGenerationError UnityEngine.TextGenerator::m_LastValid
	int32_t ___m_LastValid_4;
	// System.Collections.Generic.List`1<UnityEngine.UIVertex> UnityEngine.TextGenerator::m_Verts
	List_1_t4CE16E1B496C9FE941554BB47727DFDD7C3D9554 * ___m_Verts_5;
	// System.Collections.Generic.List`1<UnityEngine.UICharInfo> UnityEngine.TextGenerator::m_Characters
	List_1_tD850FBA632A52824016AAA9B3748BA38F51E087E * ___m_Characters_6;
	// System.Collections.Generic.List`1<UnityEngine.UILineInfo> UnityEngine.TextGenerator::m_Lines
	List_1_t7687D8368357F4437252DC75BFCE9DE76F3143A0 * ___m_Lines_7;
	// System.Boolean UnityEngine.TextGenerator::m_CachedVerts
	bool ___m_CachedVerts_8;
	// System.Boolean UnityEngine.TextGenerator::m_CachedCharacters
	bool ___m_CachedCharacters_9;
	// System.Boolean UnityEngine.TextGenerator::m_CachedLines
	bool ___m_CachedLines_10;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}

	inline static int32_t get_offset_of_m_LastString_1() { return static_cast<int32_t>(offsetof(TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8, ___m_LastString_1)); }
	inline String_t* get_m_LastString_1() const { return ___m_LastString_1; }
	inline String_t** get_address_of_m_LastString_1() { return &___m_LastString_1; }
	inline void set_m_LastString_1(String_t* value)
	{
		___m_LastString_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_LastString_1), value);
	}

	inline static int32_t get_offset_of_m_LastSettings_2() { return static_cast<int32_t>(offsetof(TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8, ___m_LastSettings_2)); }
	inline TextGenerationSettings_t37703542535A1638D2A08F41DB629A483616AF68  get_m_LastSettings_2() const { return ___m_LastSettings_2; }
	inline TextGenerationSettings_t37703542535A1638D2A08F41DB629A483616AF68 * get_address_of_m_LastSettings_2() { return &___m_LastSettings_2; }
	inline void set_m_LastSettings_2(TextGenerationSettings_t37703542535A1638D2A08F41DB629A483616AF68  value)
	{
		___m_LastSettings_2 = value;
	}

	inline static int32_t get_offset_of_m_HasGenerated_3() { return static_cast<int32_t>(offsetof(TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8, ___m_HasGenerated_3)); }
	inline bool get_m_HasGenerated_3() const { return ___m_HasGenerated_3; }
	inline bool* get_address_of_m_HasGenerated_3() { return &___m_HasGenerated_3; }
	inline void set_m_HasGenerated_3(bool value)
	{
		___m_HasGenerated_3 = value;
	}

	inline static int32_t get_offset_of_m_LastValid_4() { return static_cast<int32_t>(offsetof(TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8, ___m_LastValid_4)); }
	inline int32_t get_m_LastValid_4() const { return ___m_LastValid_4; }
	inline int32_t* get_address_of_m_LastValid_4() { return &___m_LastValid_4; }
	inline void set_m_LastValid_4(int32_t value)
	{
		___m_LastValid_4 = value;
	}

	inline static int32_t get_offset_of_m_Verts_5() { return static_cast<int32_t>(offsetof(TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8, ___m_Verts_5)); }
	inline List_1_t4CE16E1B496C9FE941554BB47727DFDD7C3D9554 * get_m_Verts_5() const { return ___m_Verts_5; }
	inline List_1_t4CE16E1B496C9FE941554BB47727DFDD7C3D9554 ** get_address_of_m_Verts_5() { return &___m_Verts_5; }
	inline void set_m_Verts_5(List_1_t4CE16E1B496C9FE941554BB47727DFDD7C3D9554 * value)
	{
		___m_Verts_5 = value;
		Il2CppCodeGenWriteBarrier((&___m_Verts_5), value);
	}

	inline static int32_t get_offset_of_m_Characters_6() { return static_cast<int32_t>(offsetof(TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8, ___m_Characters_6)); }
	inline List_1_tD850FBA632A52824016AAA9B3748BA38F51E087E * get_m_Characters_6() const { return ___m_Characters_6; }
	inline List_1_tD850FBA632A52824016AAA9B3748BA38F51E087E ** get_address_of_m_Characters_6() { return &___m_Characters_6; }
	inline void set_m_Characters_6(List_1_tD850FBA632A52824016AAA9B3748BA38F51E087E * value)
	{
		___m_Characters_6 = value;
		Il2CppCodeGenWriteBarrier((&___m_Characters_6), value);
	}

	inline static int32_t get_offset_of_m_Lines_7() { return static_cast<int32_t>(offsetof(TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8, ___m_Lines_7)); }
	inline List_1_t7687D8368357F4437252DC75BFCE9DE76F3143A0 * get_m_Lines_7() const { return ___m_Lines_7; }
	inline List_1_t7687D8368357F4437252DC75BFCE9DE76F3143A0 ** get_address_of_m_Lines_7() { return &___m_Lines_7; }
	inline void set_m_Lines_7(List_1_t7687D8368357F4437252DC75BFCE9DE76F3143A0 * value)
	{
		___m_Lines_7 = value;
		Il2CppCodeGenWriteBarrier((&___m_Lines_7), value);
	}

	inline static int32_t get_offset_of_m_CachedVerts_8() { return static_cast<int32_t>(offsetof(TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8, ___m_CachedVerts_8)); }
	inline bool get_m_CachedVerts_8() const { return ___m_CachedVerts_8; }
	inline bool* get_address_of_m_CachedVerts_8() { return &___m_CachedVerts_8; }
	inline void set_m_CachedVerts_8(bool value)
	{
		___m_CachedVerts_8 = value;
	}

	inline static int32_t get_offset_of_m_CachedCharacters_9() { return static_cast<int32_t>(offsetof(TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8, ___m_CachedCharacters_9)); }
	inline bool get_m_CachedCharacters_9() const { return ___m_CachedCharacters_9; }
	inline bool* get_address_of_m_CachedCharacters_9() { return &___m_CachedCharacters_9; }
	inline void set_m_CachedCharacters_9(bool value)
	{
		___m_CachedCharacters_9 = value;
	}

	inline static int32_t get_offset_of_m_CachedLines_10() { return static_cast<int32_t>(offsetof(TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8, ___m_CachedLines_10)); }
	inline bool get_m_CachedLines_10() const { return ___m_CachedLines_10; }
	inline bool* get_address_of_m_CachedLines_10() { return &___m_CachedLines_10; }
	inline void set_m_CachedLines_10(bool value)
	{
		___m_CachedLines_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.TextGenerator
struct TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	char* ___m_LastString_1;
	TextGenerationSettings_t37703542535A1638D2A08F41DB629A483616AF68_marshaled_pinvoke ___m_LastSettings_2;
	int32_t ___m_HasGenerated_3;
	int32_t ___m_LastValid_4;
	List_1_t4CE16E1B496C9FE941554BB47727DFDD7C3D9554 * ___m_Verts_5;
	List_1_tD850FBA632A52824016AAA9B3748BA38F51E087E * ___m_Characters_6;
	List_1_t7687D8368357F4437252DC75BFCE9DE76F3143A0 * ___m_Lines_7;
	int32_t ___m_CachedVerts_8;
	int32_t ___m_CachedCharacters_9;
	int32_t ___m_CachedLines_10;
};
// Native definition for COM marshalling of UnityEngine.TextGenerator
struct TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8_marshaled_com
{
	intptr_t ___m_Ptr_0;
	Il2CppChar* ___m_LastString_1;
	TextGenerationSettings_t37703542535A1638D2A08F41DB629A483616AF68_marshaled_com ___m_LastSettings_2;
	int32_t ___m_HasGenerated_3;
	int32_t ___m_LastValid_4;
	List_1_t4CE16E1B496C9FE941554BB47727DFDD7C3D9554 * ___m_Verts_5;
	List_1_tD850FBA632A52824016AAA9B3748BA38F51E087E * ___m_Characters_6;
	List_1_t7687D8368357F4437252DC75BFCE9DE76F3143A0 * ___m_Lines_7;
	int32_t ___m_CachedVerts_8;
	int32_t ___m_CachedCharacters_9;
	int32_t ___m_CachedLines_10;
};
#endif // TEXTGENERATOR_TD455BE18A64C7DDF854F6DB3CCEBF705121C58A8_H
#ifndef TRANSFORM_TBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA_H
#define TRANSFORM_TBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Transform
struct  Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSFORM_TBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA_H
#ifndef RECTTRANSFORM_T285CBD8775B25174B75164F10618F8B9728E1B20_H
#define RECTTRANSFORM_T285CBD8775B25174B75164F10618F8B9728E1B20_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.RectTransform
struct  RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20  : public Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA
{
public:

public:
};

struct RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20_StaticFields
{
public:
	// UnityEngine.RectTransform/ReapplyDrivenProperties UnityEngine.RectTransform::reapplyDrivenProperties
	ReapplyDrivenProperties_t431F4FBD9C59AE097FE33C4354CC6251B01B527D * ___reapplyDrivenProperties_4;

public:
	inline static int32_t get_offset_of_reapplyDrivenProperties_4() { return static_cast<int32_t>(offsetof(RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20_StaticFields, ___reapplyDrivenProperties_4)); }
	inline ReapplyDrivenProperties_t431F4FBD9C59AE097FE33C4354CC6251B01B527D * get_reapplyDrivenProperties_4() const { return ___reapplyDrivenProperties_4; }
	inline ReapplyDrivenProperties_t431F4FBD9C59AE097FE33C4354CC6251B01B527D ** get_address_of_reapplyDrivenProperties_4() { return &___reapplyDrivenProperties_4; }
	inline void set_reapplyDrivenProperties_4(ReapplyDrivenProperties_t431F4FBD9C59AE097FE33C4354CC6251B01B527D * value)
	{
		___reapplyDrivenProperties_4 = value;
		Il2CppCodeGenWriteBarrier((&___reapplyDrivenProperties_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RECTTRANSFORM_T285CBD8775B25174B75164F10618F8B9728E1B20_H
#ifndef SPRITERENDERER_TCD51E875611195DBB91123B68434881D3441BC6F_H
#define SPRITERENDERER_TCD51E875611195DBB91123B68434881D3441BC6F_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SpriteRenderer
struct  SpriteRenderer_tCD51E875611195DBB91123B68434881D3441BC6F  : public Renderer_t0556D67DD582620D1F495627EDE30D03284151F4
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SPRITERENDERER_TCD51E875611195DBB91123B68434881D3441BC6F_H





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2100 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2101 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2102 = { sizeof (MaterialEffectPlayable_t40911576524A28294D958991232297B1728713FC)+ sizeof (RuntimeObject), sizeof(MaterialEffectPlayable_t40911576524A28294D958991232297B1728713FC ), 0, 0 };
extern const int32_t g_FieldOffsetTable2102[1] = 
{
	MaterialEffectPlayable_t40911576524A28294D958991232297B1728713FC::get_offset_of_m_Handle_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2103 = { sizeof (Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0)+ sizeof (RuntimeObject), sizeof(Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0 ), sizeof(Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2103[2] = 
{
	Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0::get_offset_of_m_Handle_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Playable_t4ABB910C374FCAB6B926DA4D34A85857A59950D0_StaticFields::get_offset_of_m_NullPlayable_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2104 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2105 = { sizeof (PlayableAsset_t28B670EFE526C0D383A1C5A5AE2A150424E989AD), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2106 = { sizeof (PlayableBehaviour_t5F4AA32E735199182CC5F57D426D27BE8ABA8F01), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2107 = { sizeof (PlayableBinding_t4D92F4CF16B8608DD83947E5D40CB7690F23F9C8)+ sizeof (RuntimeObject), -1, sizeof(PlayableBinding_t4D92F4CF16B8608DD83947E5D40CB7690F23F9C8_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2107[6] = 
{
	PlayableBinding_t4D92F4CF16B8608DD83947E5D40CB7690F23F9C8::get_offset_of_m_StreamName_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	PlayableBinding_t4D92F4CF16B8608DD83947E5D40CB7690F23F9C8::get_offset_of_m_SourceObject_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	PlayableBinding_t4D92F4CF16B8608DD83947E5D40CB7690F23F9C8::get_offset_of_m_SourceBindingType_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	PlayableBinding_t4D92F4CF16B8608DD83947E5D40CB7690F23F9C8::get_offset_of_m_CreateOutputMethod_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	PlayableBinding_t4D92F4CF16B8608DD83947E5D40CB7690F23F9C8_StaticFields::get_offset_of_None_4(),
	PlayableBinding_t4D92F4CF16B8608DD83947E5D40CB7690F23F9C8_StaticFields::get_offset_of_DefaultDuration_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2108 = { sizeof (CreateOutputMethod_tA7B649F49822FC5DD0B0D9F17247C73CAECB1CA3), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2109 = { sizeof (PlayableGraph_tEC38BBCA59BDD496F75037F220984D41339AB8BA)+ sizeof (RuntimeObject), sizeof(PlayableGraph_tEC38BBCA59BDD496F75037F220984D41339AB8BA ), 0, 0 };
extern const int32_t g_FieldOffsetTable2109[2] = 
{
	PlayableGraph_tEC38BBCA59BDD496F75037F220984D41339AB8BA::get_offset_of_m_Handle_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	PlayableGraph_tEC38BBCA59BDD496F75037F220984D41339AB8BA::get_offset_of_m_Version_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2110 = { sizeof (PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182)+ sizeof (RuntimeObject), sizeof(PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182 ), sizeof(PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2110[3] = 
{
	PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182::get_offset_of_m_Handle_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182::get_offset_of_m_Version_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	PlayableHandle_t9D3B4E540D4413CED81DDD6A24C5373BEFA1D182_StaticFields::get_offset_of_m_Null_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2111 = { sizeof (PlayableOutput_t5E024C3D28C983782CD4FDB2FA5AD23998D21345)+ sizeof (RuntimeObject), sizeof(PlayableOutput_t5E024C3D28C983782CD4FDB2FA5AD23998D21345 ), sizeof(PlayableOutput_t5E024C3D28C983782CD4FDB2FA5AD23998D21345_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2111[2] = 
{
	PlayableOutput_t5E024C3D28C983782CD4FDB2FA5AD23998D21345::get_offset_of_m_Handle_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	PlayableOutput_t5E024C3D28C983782CD4FDB2FA5AD23998D21345_StaticFields::get_offset_of_m_NullPlayableOutput_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2112 = { sizeof (PlayableOutputHandle_t0D0C9D8ACC1A4061BD4EAEB61F3EE0357052F922)+ sizeof (RuntimeObject), sizeof(PlayableOutputHandle_t0D0C9D8ACC1A4061BD4EAEB61F3EE0357052F922 ), sizeof(PlayableOutputHandle_t0D0C9D8ACC1A4061BD4EAEB61F3EE0357052F922_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2112[3] = 
{
	PlayableOutputHandle_t0D0C9D8ACC1A4061BD4EAEB61F3EE0357052F922::get_offset_of_m_Handle_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	PlayableOutputHandle_t0D0C9D8ACC1A4061BD4EAEB61F3EE0357052F922::get_offset_of_m_Version_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	PlayableOutputHandle_t0D0C9D8ACC1A4061BD4EAEB61F3EE0357052F922_StaticFields::get_offset_of_m_Null_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2113 = { sizeof (ScriptPlayableOutput_t67E829DFF611371240082B6430A5BBD849291446)+ sizeof (RuntimeObject), sizeof(ScriptPlayableOutput_t67E829DFF611371240082B6430A5BBD849291446 ), 0, 0 };
extern const int32_t g_FieldOffsetTable2113[1] = 
{
	ScriptPlayableOutput_t67E829DFF611371240082B6430A5BBD849291446::get_offset_of_m_Handle_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2114 = { sizeof (TextureMixerPlayable_tC536766EC72A3E271307F13E649F22BA411B9326)+ sizeof (RuntimeObject), sizeof(TextureMixerPlayable_tC536766EC72A3E271307F13E649F22BA411B9326 ), 0, 0 };
extern const int32_t g_FieldOffsetTable2114[1] = 
{
	TextureMixerPlayable_tC536766EC72A3E271307F13E649F22BA411B9326::get_offset_of_m_Handle_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2115 = { sizeof (TexturePlayableOutput_t0D35788D263A2C088E9778F2D9984A24ECEC0845)+ sizeof (RuntimeObject), sizeof(TexturePlayableOutput_t0D35788D263A2C088E9778F2D9984A24ECEC0845 ), 0, 0 };
extern const int32_t g_FieldOffsetTable2115[1] = 
{
	TexturePlayableOutput_t0D35788D263A2C088E9778F2D9984A24ECEC0845::get_offset_of_m_Handle_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2116 = { sizeof (DefaultValueAttribute_t71AB43F14F9BC6FF9A3D760A99915A544D5E9B9A), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2116[1] = 
{
	DefaultValueAttribute_t71AB43F14F9BC6FF9A3D760A99915A544D5E9B9A::get_offset_of_DefaultValue_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2117 = { sizeof (ExcludeFromDocsAttribute_tD383C690B3BAC7B087185EACA5A93BEEF03C7B7A), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2118 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2119 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2120 = { sizeof (Logger_tEB67FD7450076B84B97F22DBE8B2911FC4FBC35F), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2120[3] = 
{
	Logger_tEB67FD7450076B84B97F22DBE8B2911FC4FBC35F::get_offset_of_U3ClogHandlerU3Ek__BackingField_0(),
	Logger_tEB67FD7450076B84B97F22DBE8B2911FC4FBC35F::get_offset_of_U3ClogEnabledU3Ek__BackingField_1(),
	Logger_tEB67FD7450076B84B97F22DBE8B2911FC4FBC35F::get_offset_of_U3CfilterLogTypeU3Ek__BackingField_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2121 = { sizeof (MessageEventArgs_t9E4989078D86D3D94EF8D595F80D6673636C9D30), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2121[2] = 
{
	MessageEventArgs_t9E4989078D86D3D94EF8D595F80D6673636C9D30::get_offset_of_playerId_0(),
	MessageEventArgs_t9E4989078D86D3D94EF8D595F80D6673636C9D30::get_offset_of_data_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2122 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2123 = { sizeof (PlayerConnection_tFC3A80EAE06A41E9D3879144C86D87DE99EC56EA), -1, sizeof(PlayerConnection_tFC3A80EAE06A41E9D3879144C86D87DE99EC56EA_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2123[5] = 
{
	PlayerConnection_tFC3A80EAE06A41E9D3879144C86D87DE99EC56EA_StaticFields::get_offset_of_connectionNative_4(),
	PlayerConnection_tFC3A80EAE06A41E9D3879144C86D87DE99EC56EA::get_offset_of_m_PlayerEditorConnectionEvents_5(),
	PlayerConnection_tFC3A80EAE06A41E9D3879144C86D87DE99EC56EA::get_offset_of_m_connectedPlayers_6(),
	PlayerConnection_tFC3A80EAE06A41E9D3879144C86D87DE99EC56EA::get_offset_of_m_IsInitilized_7(),
	PlayerConnection_tFC3A80EAE06A41E9D3879144C86D87DE99EC56EA_StaticFields::get_offset_of_s_Instance_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2124 = { sizeof (U3CRegisterU3Ec__AnonStorey0_t4375D335A7606DAF99A8211D91BDC830C6EAC2C9), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2124[1] = 
{
	U3CRegisterU3Ec__AnonStorey0_t4375D335A7606DAF99A8211D91BDC830C6EAC2C9::get_offset_of_messageId_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2125 = { sizeof (U3CUnregisterU3Ec__AnonStorey1_t7DA501C8DA7F3BB2973B2C0142557AB6D056B10E), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2125[1] = 
{
	U3CUnregisterU3Ec__AnonStorey1_t7DA501C8DA7F3BB2973B2C0142557AB6D056B10E::get_offset_of_messageId_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2126 = { sizeof (U3CBlockUntilRecvMsgU3Ec__AnonStorey2_tB44031B365C58252C7A5A05A1BFEC7E2035FE68E), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2126[1] = 
{
	U3CBlockUntilRecvMsgU3Ec__AnonStorey2_tB44031B365C58252C7A5A05A1BFEC7E2035FE68E::get_offset_of_msgReceived_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2127 = { sizeof (PlayerEditorConnectionEvents_t34FBEA62160A657924BC889C2F9FC4B0FC601D5A), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2127[3] = 
{
	PlayerEditorConnectionEvents_t34FBEA62160A657924BC889C2F9FC4B0FC601D5A::get_offset_of_messageTypeSubscribers_0(),
	PlayerEditorConnectionEvents_t34FBEA62160A657924BC889C2F9FC4B0FC601D5A::get_offset_of_connectionEvent_1(),
	PlayerEditorConnectionEvents_t34FBEA62160A657924BC889C2F9FC4B0FC601D5A::get_offset_of_disconnectionEvent_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2128 = { sizeof (MessageEvent_t62B5B1B04FCC5843790EE008D585B006E82E08FC), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2129 = { sizeof (ConnectionChangeEvent_t88A3E76467566DB9813DF5BD2DABD20D523D4681), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2130 = { sizeof (MessageTypeSubscribers_t2B83CF84645921BDEF2A06A3CCCC0F9ECDC107FE), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2130[3] = 
{
	MessageTypeSubscribers_t2B83CF84645921BDEF2A06A3CCCC0F9ECDC107FE::get_offset_of_m_messageTypeId_0(),
	MessageTypeSubscribers_t2B83CF84645921BDEF2A06A3CCCC0F9ECDC107FE::get_offset_of_subscriberCount_1(),
	MessageTypeSubscribers_t2B83CF84645921BDEF2A06A3CCCC0F9ECDC107FE::get_offset_of_messageCallback_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2131 = { sizeof (U3CInvokeMessageIdSubscribersU3Ec__AnonStorey0_t37CFFB3BEBB77FEFC07F695D1BD2200C32ABCDA0), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2131[1] = 
{
	U3CInvokeMessageIdSubscribersU3Ec__AnonStorey0_t37CFFB3BEBB77FEFC07F695D1BD2200C32ABCDA0::get_offset_of_messageId_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2132 = { sizeof (U3CAddAndCreateU3Ec__AnonStorey1_t20F8F6C08F7A3288E431E891185668F751FE90EF), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2132[1] = 
{
	U3CAddAndCreateU3Ec__AnonStorey1_t20F8F6C08F7A3288E431E891185668F751FE90EF::get_offset_of_messageId_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2133 = { sizeof (U3CUnregisterManagedCallbackU3Ec__AnonStorey2_tBF8E6B433970276A827260CA19563B32D2D1D801), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2133[1] = 
{
	U3CUnregisterManagedCallbackU3Ec__AnonStorey2_tBF8E6B433970276A827260CA19563B32D2D1D801::get_offset_of_messageId_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2134 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2135 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2136 = { sizeof (RenderPipelineManager_t778435CA5356ADD91DF0BC8AAA5FE4F200643AE5), -1, sizeof(RenderPipelineManager_t778435CA5356ADD91DF0BC8AAA5FE4F200643AE5_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2136[2] = 
{
	RenderPipelineManager_t778435CA5356ADD91DF0BC8AAA5FE4F200643AE5_StaticFields::get_offset_of_s_CurrentPipelineAsset_0(),
	RenderPipelineManager_t778435CA5356ADD91DF0BC8AAA5FE4F200643AE5_StaticFields::get_offset_of_U3CcurrentPipelineU3Ek__BackingField_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2137 = { sizeof (SupportedRenderingFeatures_tF24D93A14DDE0527765F39F6F4B500B14B216F92), -1, sizeof(SupportedRenderingFeatures_tF24D93A14DDE0527765F39F6F4B500B14B216F92_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2137[14] = 
{
	SupportedRenderingFeatures_tF24D93A14DDE0527765F39F6F4B500B14B216F92_StaticFields::get_offset_of_s_Active_0(),
	SupportedRenderingFeatures_tF24D93A14DDE0527765F39F6F4B500B14B216F92::get_offset_of_U3CreflectionProbeSupportFlagsU3Ek__BackingField_1(),
	SupportedRenderingFeatures_tF24D93A14DDE0527765F39F6F4B500B14B216F92::get_offset_of_U3CdefaultMixedLightingModeU3Ek__BackingField_2(),
	SupportedRenderingFeatures_tF24D93A14DDE0527765F39F6F4B500B14B216F92::get_offset_of_U3CsupportedMixedLightingModesU3Ek__BackingField_3(),
	SupportedRenderingFeatures_tF24D93A14DDE0527765F39F6F4B500B14B216F92::get_offset_of_U3CsupportedLightmapBakeTypesU3Ek__BackingField_4(),
	SupportedRenderingFeatures_tF24D93A14DDE0527765F39F6F4B500B14B216F92::get_offset_of_U3CsupportedLightmapsModesU3Ek__BackingField_5(),
	SupportedRenderingFeatures_tF24D93A14DDE0527765F39F6F4B500B14B216F92::get_offset_of_U3CrendererSupportsLightProbeProxyVolumesU3Ek__BackingField_6(),
	SupportedRenderingFeatures_tF24D93A14DDE0527765F39F6F4B500B14B216F92::get_offset_of_U3CrendererSupportsMotionVectorsU3Ek__BackingField_7(),
	SupportedRenderingFeatures_tF24D93A14DDE0527765F39F6F4B500B14B216F92::get_offset_of_U3CrendererSupportsReceiveShadowsU3Ek__BackingField_8(),
	SupportedRenderingFeatures_tF24D93A14DDE0527765F39F6F4B500B14B216F92::get_offset_of_U3CrendererSupportsReflectionProbesU3Ek__BackingField_9(),
	SupportedRenderingFeatures_tF24D93A14DDE0527765F39F6F4B500B14B216F92::get_offset_of_U3CrendererSupportsRendererPriorityU3Ek__BackingField_10(),
	SupportedRenderingFeatures_tF24D93A14DDE0527765F39F6F4B500B14B216F92::get_offset_of_U3CrendererOverridesEnvironmentLightingU3Ek__BackingField_11(),
	SupportedRenderingFeatures_tF24D93A14DDE0527765F39F6F4B500B14B216F92::get_offset_of_U3CrendererOverridesFogU3Ek__BackingField_12(),
	SupportedRenderingFeatures_tF24D93A14DDE0527765F39F6F4B500B14B216F92::get_offset_of_U3CrendererOverridesOtherLightingSettingsU3Ek__BackingField_13(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2138 = { sizeof (ReflectionProbeSupportFlags_t6889D3ACC24B40D648C7FB8194707698CCA5EC7A)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2138[3] = 
{
	ReflectionProbeSupportFlags_t6889D3ACC24B40D648C7FB8194707698CCA5EC7A::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2139 = { sizeof (LightmapMixedBakeMode_tEEB17B701329F03407D091EDFF6D4AC04B0FF394)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2139[5] = 
{
	LightmapMixedBakeMode_tEEB17B701329F03407D091EDFF6D4AC04B0FF394::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2140 = { sizeof (Scene_t942E023788C2BC9FBB7EC8356B4FB0088B2CFED2)+ sizeof (RuntimeObject), sizeof(Scene_t942E023788C2BC9FBB7EC8356B4FB0088B2CFED2 ), 0, 0 };
extern const int32_t g_FieldOffsetTable2140[1] = 
{
	Scene_t942E023788C2BC9FBB7EC8356B4FB0088B2CFED2::get_offset_of_m_Handle_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2141 = { sizeof (SceneManager_t68A7070D2AD3860C3EE327C94F38270E49AFB489), -1, sizeof(SceneManager_t68A7070D2AD3860C3EE327C94F38270E49AFB489_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2141[3] = 
{
	SceneManager_t68A7070D2AD3860C3EE327C94F38270E49AFB489_StaticFields::get_offset_of_sceneLoaded_0(),
	SceneManager_t68A7070D2AD3860C3EE327C94F38270E49AFB489_StaticFields::get_offset_of_sceneUnloaded_1(),
	SceneManager_t68A7070D2AD3860C3EE327C94F38270E49AFB489_StaticFields::get_offset_of_activeSceneChanged_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2142 = { sizeof (LoadSceneMode_t75F0B96794398942671B8315D2A9AC25C40A22D5)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2142[3] = 
{
	LoadSceneMode_t75F0B96794398942671B8315D2A9AC25C40A22D5::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2143 = { sizeof (ExtensionOfNativeClassAttribute_t595E5601C3ACC7C8A8C5AEE90A05E7C7FF977FDF), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2144 = { sizeof (PreserveAttribute_t864F9DAA4DBF2524206AD57CE51AEB955702AA3F), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2145 = { sizeof (MovedFromAttribute_tE9A667A7698BEF9EA09BF23E4308CD1EC2099162), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2145[2] = 
{
	MovedFromAttribute_tE9A667A7698BEF9EA09BF23E4308CD1EC2099162::get_offset_of_U3CNamespaceU3Ek__BackingField_0(),
	MovedFromAttribute_tE9A667A7698BEF9EA09BF23E4308CD1EC2099162::get_offset_of_U3CIsInDifferentAssemblyU3Ek__BackingField_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2146 = { sizeof (FormerlySerializedAsAttribute_t31939F907F52C74DB25B51BB0064837BC15760AC), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2146[1] = 
{
	FormerlySerializedAsAttribute_t31939F907F52C74DB25B51BB0064837BC15760AC::get_offset_of_m_oldName_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2147 = { sizeof (TypeInferenceRules_tFA03D20477226A95FE644665C3C08A6B6281C333)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2147[5] = 
{
	TypeInferenceRules_tFA03D20477226A95FE644665C3C08A6B6281C333::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2148 = { sizeof (TypeInferenceRuleAttribute_tEB3BA6FDE6D6817FD33E2620200007EB9730214B), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2148[1] = 
{
	TypeInferenceRuleAttribute_tEB3BA6FDE6D6817FD33E2620200007EB9730214B::get_offset_of__rule_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2149 = { sizeof (GenericStack_tC59D21E8DBC50F3C608479C942200AC44CA2D5BC), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2150 = { sizeof (NetFxCoreExtensions_t7D32855D478E08AB317D48832133C0584F744747), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2151 = { sizeof (NotificationHelper_t0EB5401C1C0BCA9E371168B32D8BAFDB94CEDC07), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2152 = { sizeof (LocalNotification_tCA79CA9F746F4B3A8F3F0A40BB4AB2FAD7D3238F), -1, sizeof(LocalNotification_tCA79CA9F746F4B3A8F3F0A40BB4AB2FAD7D3238F_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2152[2] = 
{
	LocalNotification_tCA79CA9F746F4B3A8F3F0A40BB4AB2FAD7D3238F::get_offset_of_m_Ptr_0(),
	LocalNotification_tCA79CA9F746F4B3A8F3F0A40BB4AB2FAD7D3238F_StaticFields::get_offset_of_m_NSReferenceDateTicks_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2153 = { sizeof (RemoteNotification_tE0413FADC666D8ECDE70A365F41A784002106061), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2153[1] = 
{
	RemoteNotification_tE0413FADC666D8ECDE70A365F41A784002106061::get_offset_of_m_Ptr_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2154 = { sizeof (MetaData_t8A5880BAD743B1ED7D9345DCF60600F1807E81CA), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2154[3] = 
{
	MetaData_t8A5880BAD743B1ED7D9345DCF60600F1807E81CA::get_offset_of_content_0(),
	MetaData_t8A5880BAD743B1ED7D9345DCF60600F1807E81CA::get_offset_of_platform_1(),
	MetaData_t8A5880BAD743B1ED7D9345DCF60600F1807E81CA::get_offset_of_screenshot_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2155 = { sizeof (MemoryProfiler_t677A743C10D777755A26A6D2B2832861E7C130DF), -1, sizeof(MemoryProfiler_t677A743C10D777755A26A6D2B2832861E7C130DF_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2155[2] = 
{
	MemoryProfiler_t677A743C10D777755A26A6D2B2832861E7C130DF_StaticFields::get_offset_of_snapshotFinished_0(),
	MemoryProfiler_t677A743C10D777755A26A6D2B2832861E7C130DF_StaticFields::get_offset_of_createMetaData_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2156 = { sizeof (DrivenTransformProperties_tE19A09F25C763B9190D4F0CD90ABC01F1C6CEC5F)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2156[26] = 
{
	DrivenTransformProperties_tE19A09F25C763B9190D4F0CD90ABC01F1C6CEC5F::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2157 = { sizeof (DrivenRectTransformTracker_tB8FBBE24EEE9618CA32E4B3CF52F4AD7FDDEBE03)+ sizeof (RuntimeObject), sizeof(DrivenRectTransformTracker_tB8FBBE24EEE9618CA32E4B3CF52F4AD7FDDEBE03 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2158 = { sizeof (RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20), -1, sizeof(RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2158[1] = 
{
	RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20_StaticFields::get_offset_of_reapplyDrivenProperties_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2159 = { sizeof (Edge_tE7D013B0542A9F63E6413D67C3F0B866CC228278)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2159[5] = 
{
	Edge_tE7D013B0542A9F63E6413D67C3F0B866CC228278::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2160 = { sizeof (Axis_tA0521D01CB96B1073151D89F6DB21C805556FE39)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2160[3] = 
{
	Axis_tA0521D01CB96B1073151D89F6DB21C805556FE39::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2161 = { sizeof (ReapplyDrivenProperties_t431F4FBD9C59AE097FE33C4354CC6251B01B527D), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2162 = { sizeof (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2163 = { sizeof (Enumerator_t638F7B8050EF8C37413868F2AF7EA5E1D36123CC), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2163[2] = 
{
	Enumerator_t638F7B8050EF8C37413868F2AF7EA5E1D36123CC::get_offset_of_outer_0(),
	Enumerator_t638F7B8050EF8C37413868F2AF7EA5E1D36123CC::get_offset_of_currentIndex_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2164 = { sizeof (SpriteBone_tD75C1B533C9282AEC369B66DF430C1CAC3C8BEB2)+ sizeof (RuntimeObject), sizeof(SpriteBone_tD75C1B533C9282AEC369B66DF430C1CAC3C8BEB2_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable2164[5] = 
{
	SpriteBone_tD75C1B533C9282AEC369B66DF430C1CAC3C8BEB2::get_offset_of_m_Name_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	SpriteBone_tD75C1B533C9282AEC369B66DF430C1CAC3C8BEB2::get_offset_of_m_Position_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	SpriteBone_tD75C1B533C9282AEC369B66DF430C1CAC3C8BEB2::get_offset_of_m_Rotation_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	SpriteBone_tD75C1B533C9282AEC369B66DF430C1CAC3C8BEB2::get_offset_of_m_Length_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	SpriteBone_tD75C1B533C9282AEC369B66DF430C1CAC3C8BEB2::get_offset_of_m_ParentId_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2165 = { sizeof (DataUtility_tCB73BC0DADF53AB46BADD161F652D75507C8A872), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2166 = { sizeof (SpriteRenderer_tCD51E875611195DBB91123B68434881D3441BC6F), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2167 = { sizeof (SpritePackingMode_tCAC1A79D61697B3532FB2FC8CAF3A2DD150555B1)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2167[3] = 
{
	SpritePackingMode_tCAC1A79D61697B3532FB2FC8CAF3A2DD150555B1::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2168 = { sizeof (Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2169 = { sizeof (SpriteAtlasManager_t1C01B60566565F3F93DB97484F390383781FF98F), -1, sizeof(SpriteAtlasManager_t1C01B60566565F3F93DB97484F390383781FF98F_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2169[3] = 
{
	SpriteAtlasManager_t1C01B60566565F3F93DB97484F390383781FF98F_StaticFields::get_offset_of_atlasRequested_0(),
	SpriteAtlasManager_t1C01B60566565F3F93DB97484F390383781FF98F_StaticFields::get_offset_of_atlasRegistered_1(),
	SpriteAtlasManager_t1C01B60566565F3F93DB97484F390383781FF98F_StaticFields::get_offset_of_U3CU3Ef__mgU24cache0_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2170 = { sizeof (SpriteAtlas_t3CCE7E93E25959957EF61B2A875FEF42DAD8537A), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2171 = { sizeof (U3CModuleU3E_tDBB8B8FDA571F608D819B1D5558C135A3972639B), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2172 = { sizeof (FontStyle_t273973EBB1F40C2381F6D60AB957149DE5720CF3)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2172[5] = 
{
	FontStyle_t273973EBB1F40C2381F6D60AB957149DE5720CF3::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2173 = { sizeof (TextGenerationError_t7D5BA12E3120623131293E20A1120847377A2524)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2173[5] = 
{
	TextGenerationError_t7D5BA12E3120623131293E20A1120847377A2524::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2174 = { sizeof (TextGenerationSettings_t37703542535A1638D2A08F41DB629A483616AF68)+ sizeof (RuntimeObject), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2174[18] = 
{
	TextGenerationSettings_t37703542535A1638D2A08F41DB629A483616AF68::get_offset_of_font_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	TextGenerationSettings_t37703542535A1638D2A08F41DB629A483616AF68::get_offset_of_color_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	TextGenerationSettings_t37703542535A1638D2A08F41DB629A483616AF68::get_offset_of_fontSize_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	TextGenerationSettings_t37703542535A1638D2A08F41DB629A483616AF68::get_offset_of_lineSpacing_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	TextGenerationSettings_t37703542535A1638D2A08F41DB629A483616AF68::get_offset_of_richText_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
	TextGenerationSettings_t37703542535A1638D2A08F41DB629A483616AF68::get_offset_of_scaleFactor_5() + static_cast<int32_t>(sizeof(RuntimeObject)),
	TextGenerationSettings_t37703542535A1638D2A08F41DB629A483616AF68::get_offset_of_fontStyle_6() + static_cast<int32_t>(sizeof(RuntimeObject)),
	TextGenerationSettings_t37703542535A1638D2A08F41DB629A483616AF68::get_offset_of_textAnchor_7() + static_cast<int32_t>(sizeof(RuntimeObject)),
	TextGenerationSettings_t37703542535A1638D2A08F41DB629A483616AF68::get_offset_of_alignByGeometry_8() + static_cast<int32_t>(sizeof(RuntimeObject)),
	TextGenerationSettings_t37703542535A1638D2A08F41DB629A483616AF68::get_offset_of_resizeTextForBestFit_9() + static_cast<int32_t>(sizeof(RuntimeObject)),
	TextGenerationSettings_t37703542535A1638D2A08F41DB629A483616AF68::get_offset_of_resizeTextMinSize_10() + static_cast<int32_t>(sizeof(RuntimeObject)),
	TextGenerationSettings_t37703542535A1638D2A08F41DB629A483616AF68::get_offset_of_resizeTextMaxSize_11() + static_cast<int32_t>(sizeof(RuntimeObject)),
	TextGenerationSettings_t37703542535A1638D2A08F41DB629A483616AF68::get_offset_of_updateBounds_12() + static_cast<int32_t>(sizeof(RuntimeObject)),
	TextGenerationSettings_t37703542535A1638D2A08F41DB629A483616AF68::get_offset_of_verticalOverflow_13() + static_cast<int32_t>(sizeof(RuntimeObject)),
	TextGenerationSettings_t37703542535A1638D2A08F41DB629A483616AF68::get_offset_of_horizontalOverflow_14() + static_cast<int32_t>(sizeof(RuntimeObject)),
	TextGenerationSettings_t37703542535A1638D2A08F41DB629A483616AF68::get_offset_of_generationExtents_15() + static_cast<int32_t>(sizeof(RuntimeObject)),
	TextGenerationSettings_t37703542535A1638D2A08F41DB629A483616AF68::get_offset_of_pivot_16() + static_cast<int32_t>(sizeof(RuntimeObject)),
	TextGenerationSettings_t37703542535A1638D2A08F41DB629A483616AF68::get_offset_of_generateOutOfBounds_17() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2175 = { sizeof (TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2175[11] = 
{
	TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8::get_offset_of_m_Ptr_0(),
	TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8::get_offset_of_m_LastString_1(),
	TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8::get_offset_of_m_LastSettings_2(),
	TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8::get_offset_of_m_HasGenerated_3(),
	TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8::get_offset_of_m_LastValid_4(),
	TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8::get_offset_of_m_Verts_5(),
	TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8::get_offset_of_m_Characters_6(),
	TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8::get_offset_of_m_Lines_7(),
	TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8::get_offset_of_m_CachedVerts_8(),
	TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8::get_offset_of_m_CachedCharacters_9(),
	TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8::get_offset_of_m_CachedLines_10(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2176 = { sizeof (TextAnchor_tEC19034D476659A5E05366C63564F34DD30E7C57)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2176[10] = 
{
	TextAnchor_tEC19034D476659A5E05366C63564F34DD30E7C57::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2177 = { sizeof (HorizontalWrapMode_t56D876281F814EC1AF0C21A34E20BBF4BEEA302C)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2177[3] = 
{
	HorizontalWrapMode_t56D876281F814EC1AF0C21A34E20BBF4BEEA302C::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2178 = { sizeof (VerticalWrapMode_tD909C5B2F6A25AE3797BC71373196D850FC845E9)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2178[3] = 
{
	VerticalWrapMode_tD909C5B2F6A25AE3797BC71373196D850FC845E9::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2179 = { sizeof (UICharInfo_tB4C92043A686A600D36A92E3108F173C499E318A)+ sizeof (RuntimeObject), sizeof(UICharInfo_tB4C92043A686A600D36A92E3108F173C499E318A ), 0, 0 };
extern const int32_t g_FieldOffsetTable2179[2] = 
{
	UICharInfo_tB4C92043A686A600D36A92E3108F173C499E318A::get_offset_of_cursorPos_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	UICharInfo_tB4C92043A686A600D36A92E3108F173C499E318A::get_offset_of_charWidth_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2180 = { sizeof (UILineInfo_t0AF27251CA07CEE2BC0C1FEF752245596B8033E6)+ sizeof (RuntimeObject), sizeof(UILineInfo_t0AF27251CA07CEE2BC0C1FEF752245596B8033E6 ), 0, 0 };
extern const int32_t g_FieldOffsetTable2180[4] = 
{
	UILineInfo_t0AF27251CA07CEE2BC0C1FEF752245596B8033E6::get_offset_of_startCharIdx_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	UILineInfo_t0AF27251CA07CEE2BC0C1FEF752245596B8033E6::get_offset_of_height_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	UILineInfo_t0AF27251CA07CEE2BC0C1FEF752245596B8033E6::get_offset_of_topY_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	UILineInfo_t0AF27251CA07CEE2BC0C1FEF752245596B8033E6::get_offset_of_leading_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2181 = { sizeof (UIVertex_t0583C35B730B218B542E80203F5F4BC6F1E9E577)+ sizeof (RuntimeObject), sizeof(UIVertex_t0583C35B730B218B542E80203F5F4BC6F1E9E577 ), sizeof(UIVertex_t0583C35B730B218B542E80203F5F4BC6F1E9E577_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2181[11] = 
{
	UIVertex_t0583C35B730B218B542E80203F5F4BC6F1E9E577::get_offset_of_position_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	UIVertex_t0583C35B730B218B542E80203F5F4BC6F1E9E577::get_offset_of_normal_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	UIVertex_t0583C35B730B218B542E80203F5F4BC6F1E9E577::get_offset_of_tangent_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	UIVertex_t0583C35B730B218B542E80203F5F4BC6F1E9E577::get_offset_of_color_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	UIVertex_t0583C35B730B218B542E80203F5F4BC6F1E9E577::get_offset_of_uv0_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
	UIVertex_t0583C35B730B218B542E80203F5F4BC6F1E9E577::get_offset_of_uv1_5() + static_cast<int32_t>(sizeof(RuntimeObject)),
	UIVertex_t0583C35B730B218B542E80203F5F4BC6F1E9E577::get_offset_of_uv2_6() + static_cast<int32_t>(sizeof(RuntimeObject)),
	UIVertex_t0583C35B730B218B542E80203F5F4BC6F1E9E577::get_offset_of_uv3_7() + static_cast<int32_t>(sizeof(RuntimeObject)),
	UIVertex_t0583C35B730B218B542E80203F5F4BC6F1E9E577_StaticFields::get_offset_of_s_DefaultColor_8(),
	UIVertex_t0583C35B730B218B542E80203F5F4BC6F1E9E577_StaticFields::get_offset_of_s_DefaultTangent_9(),
	UIVertex_t0583C35B730B218B542E80203F5F4BC6F1E9E577_StaticFields::get_offset_of_simpleVert_10(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2182 = { sizeof (Font_t1EDE54AF557272BE314EB4B40EFA50CEB353CA26), -1, sizeof(Font_t1EDE54AF557272BE314EB4B40EFA50CEB353CA26_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2182[2] = 
{
	Font_t1EDE54AF557272BE314EB4B40EFA50CEB353CA26_StaticFields::get_offset_of_textureRebuilt_4(),
	Font_t1EDE54AF557272BE314EB4B40EFA50CEB353CA26::get_offset_of_m_FontTextureRebuildCallback_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2183 = { sizeof (FontTextureRebuildCallback_tD700C63BB1A449E3A0464C81701E981677D3021C), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2184 = { sizeof (U3CModuleU3E_t6EFABDA0B2A020FB3DD6CA286799D867733667F1), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2185 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2186 = { sizeof (SharedBetweenAnimatorsAttribute_tD52C4EACCF9B8F7A21A34D11D3971A823B131F03), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2187 = { sizeof (StateMachineBehaviour_t698612ED92024B087045C388731B7673550C786C), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2188 = { sizeof (AnimationClipPlayable_t6EF38F9EED94096D4793638AFC8D11D285B43183)+ sizeof (RuntimeObject), sizeof(AnimationClipPlayable_t6EF38F9EED94096D4793638AFC8D11D285B43183 ), 0, 0 };
extern const int32_t g_FieldOffsetTable2188[1] = 
{
	AnimationClipPlayable_t6EF38F9EED94096D4793638AFC8D11D285B43183::get_offset_of_m_Handle_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2189 = { sizeof (AnimationHumanStream_t576024C2BE0EAD2602F724B6C0A61A6A72E6F5C2)+ sizeof (RuntimeObject), sizeof(AnimationHumanStream_t576024C2BE0EAD2602F724B6C0A61A6A72E6F5C2 ), 0, 0 };
extern const int32_t g_FieldOffsetTable2189[1] = 
{
	AnimationHumanStream_t576024C2BE0EAD2602F724B6C0A61A6A72E6F5C2::get_offset_of_stream_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2190 = { sizeof (AnimationLayerMixerPlayable_t699CCDE32ABD6FC79BFC09064E473D785D9F9371)+ sizeof (RuntimeObject), sizeof(AnimationLayerMixerPlayable_t699CCDE32ABD6FC79BFC09064E473D785D9F9371 ), sizeof(AnimationLayerMixerPlayable_t699CCDE32ABD6FC79BFC09064E473D785D9F9371_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2190[2] = 
{
	AnimationLayerMixerPlayable_t699CCDE32ABD6FC79BFC09064E473D785D9F9371::get_offset_of_m_Handle_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	AnimationLayerMixerPlayable_t699CCDE32ABD6FC79BFC09064E473D785D9F9371_StaticFields::get_offset_of_m_NullPlayable_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2191 = { sizeof (AnimationMixerPlayable_tA71C834654979CF92B034B537EE5A3DA9713030A)+ sizeof (RuntimeObject), sizeof(AnimationMixerPlayable_tA71C834654979CF92B034B537EE5A3DA9713030A ), sizeof(AnimationMixerPlayable_tA71C834654979CF92B034B537EE5A3DA9713030A_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2191[2] = 
{
	AnimationMixerPlayable_tA71C834654979CF92B034B537EE5A3DA9713030A::get_offset_of_m_Handle_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	AnimationMixerPlayable_tA71C834654979CF92B034B537EE5A3DA9713030A_StaticFields::get_offset_of_m_NullPlayable_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2192 = { sizeof (AnimationMotionXToDeltaPlayable_tA5F0BE3BA966E1A6661311F185C1544F90302CDC)+ sizeof (RuntimeObject), sizeof(AnimationMotionXToDeltaPlayable_tA5F0BE3BA966E1A6661311F185C1544F90302CDC ), sizeof(AnimationMotionXToDeltaPlayable_tA5F0BE3BA966E1A6661311F185C1544F90302CDC_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2192[2] = 
{
	AnimationMotionXToDeltaPlayable_tA5F0BE3BA966E1A6661311F185C1544F90302CDC::get_offset_of_m_Handle_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	AnimationMotionXToDeltaPlayable_tA5F0BE3BA966E1A6661311F185C1544F90302CDC_StaticFields::get_offset_of_m_NullPlayable_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2193 = { sizeof (AnimationOffsetPlayable_t1534674D22C39D6ED74F24A108C3475C7301A93E)+ sizeof (RuntimeObject), sizeof(AnimationOffsetPlayable_t1534674D22C39D6ED74F24A108C3475C7301A93E ), sizeof(AnimationOffsetPlayable_t1534674D22C39D6ED74F24A108C3475C7301A93E_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2193[2] = 
{
	AnimationOffsetPlayable_t1534674D22C39D6ED74F24A108C3475C7301A93E::get_offset_of_m_Handle_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	AnimationOffsetPlayable_t1534674D22C39D6ED74F24A108C3475C7301A93E_StaticFields::get_offset_of_m_NullPlayable_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2194 = { sizeof (AnimationPlayableOutput_tA10178429D6528BDB4516F6788CE680E349553E6)+ sizeof (RuntimeObject), sizeof(AnimationPlayableOutput_tA10178429D6528BDB4516F6788CE680E349553E6 ), 0, 0 };
extern const int32_t g_FieldOffsetTable2194[1] = 
{
	AnimationPlayableOutput_tA10178429D6528BDB4516F6788CE680E349553E6::get_offset_of_m_Handle_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2195 = { sizeof (AnimationPosePlayable_t92EAB5BB4093D236F90ED0242488039EA87AFA07)+ sizeof (RuntimeObject), sizeof(AnimationPosePlayable_t92EAB5BB4093D236F90ED0242488039EA87AFA07 ), sizeof(AnimationPosePlayable_t92EAB5BB4093D236F90ED0242488039EA87AFA07_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2195[2] = 
{
	AnimationPosePlayable_t92EAB5BB4093D236F90ED0242488039EA87AFA07::get_offset_of_m_Handle_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	AnimationPosePlayable_t92EAB5BB4093D236F90ED0242488039EA87AFA07_StaticFields::get_offset_of_m_NullPlayable_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2196 = { sizeof (AnimationRemoveScalePlayable_t02381EE856ADF73C82C1EA6D2AD1878EC5879A7B)+ sizeof (RuntimeObject), sizeof(AnimationRemoveScalePlayable_t02381EE856ADF73C82C1EA6D2AD1878EC5879A7B ), sizeof(AnimationRemoveScalePlayable_t02381EE856ADF73C82C1EA6D2AD1878EC5879A7B_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2196[2] = 
{
	AnimationRemoveScalePlayable_t02381EE856ADF73C82C1EA6D2AD1878EC5879A7B::get_offset_of_m_Handle_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	AnimationRemoveScalePlayable_t02381EE856ADF73C82C1EA6D2AD1878EC5879A7B_StaticFields::get_offset_of_m_NullPlayable_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2197 = { sizeof (AnimationScriptPlayable_t73DEE79FEABE593A01BC5B5FC403DD19CEC38F5F)+ sizeof (RuntimeObject), sizeof(AnimationScriptPlayable_t73DEE79FEABE593A01BC5B5FC403DD19CEC38F5F ), sizeof(AnimationScriptPlayable_t73DEE79FEABE593A01BC5B5FC403DD19CEC38F5F_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2197[2] = 
{
	AnimationScriptPlayable_t73DEE79FEABE593A01BC5B5FC403DD19CEC38F5F::get_offset_of_m_Handle_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	AnimationScriptPlayable_t73DEE79FEABE593A01BC5B5FC403DD19CEC38F5F_StaticFields::get_offset_of_m_NullPlayable_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2198 = { sizeof (AnimationStream_tF539D75F7B97F32656D025617E8EDB5C9A2F715E)+ sizeof (RuntimeObject), sizeof(AnimationStream_tF539D75F7B97F32656D025617E8EDB5C9A2F715E ), 0, 0 };
extern const int32_t g_FieldOffsetTable2198[7] = 
{
	AnimationStream_tF539D75F7B97F32656D025617E8EDB5C9A2F715E::get_offset_of_m_AnimatorBindingsVersion_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	AnimationStream_tF539D75F7B97F32656D025617E8EDB5C9A2F715E::get_offset_of_constant_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	AnimationStream_tF539D75F7B97F32656D025617E8EDB5C9A2F715E::get_offset_of_input_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	AnimationStream_tF539D75F7B97F32656D025617E8EDB5C9A2F715E::get_offset_of_output_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	AnimationStream_tF539D75F7B97F32656D025617E8EDB5C9A2F715E::get_offset_of_workspace_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
	AnimationStream_tF539D75F7B97F32656D025617E8EDB5C9A2F715E::get_offset_of_inputStreamAccessor_5() + static_cast<int32_t>(sizeof(RuntimeObject)),
	AnimationStream_tF539D75F7B97F32656D025617E8EDB5C9A2F715E::get_offset_of_animationHandleBinder_6() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2199 = { sizeof (AnimatorClipInfo_t78457ABBA83D388EDFF26F436F5E61A29CF4E180)+ sizeof (RuntimeObject), sizeof(AnimatorClipInfo_t78457ABBA83D388EDFF26F436F5E61A29CF4E180 ), 0, 0 };
extern const int32_t g_FieldOffsetTable2199[2] = 
{
	AnimatorClipInfo_t78457ABBA83D388EDFF26F436F5E61A29CF4E180::get_offset_of_m_ClipInstanceID_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	AnimatorClipInfo_t78457ABBA83D388EDFF26F436F5E61A29CF4E180::get_offset_of_m_Weight_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // Modified by PostBuild.cs
