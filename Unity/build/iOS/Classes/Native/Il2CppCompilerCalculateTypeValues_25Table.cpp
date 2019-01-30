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
// System.Action`1<Vuforia.AMigratableVideoBackgroundConfigProperty>
struct Action_1_tB7E6786B172E37E43AB34B70B3A0D433255E6A34;
// System.Action`1<Vuforia.Anchor>
struct Action_1_tD3DAB6D6CCAF229BC2724880DEC85B242D848D3D;
// System.Char[]
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2;
// System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.GuideView>
struct Dictionary_2_t43ADA54C777F0C1DE920BCD6F29C43D5C16AE26F;
// System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.ObjectTarget>
struct Dictionary_2_t38214185C816F7C6D37D4A288F828447EFA5BF63;
// System.Collections.Generic.Dictionary`2<UnityEngine.Camera/StereoscopicEye,System.Single>
struct Dictionary_2_t6EA8F59E80026247A2117E6A30B0106FDB5D1BBF;
// System.Collections.Generic.Dictionary`2<UnityEngine.Camera/StereoscopicEye,UnityEngine.Matrix4x4>
struct Dictionary_2_t608BE022CD3D466FFCFE785E662025EBB425A4C0;
// System.Collections.Generic.Dictionary`2<UnityEngine.Camera/StereoscopicEye,UnityEngine.Vector2>
struct Dictionary_2_tA50FC73B50AEAE38268B60A47025C7B19AB363C7;
// System.Collections.Generic.ICollection`1<Vuforia.AnchorBehaviour>
struct ICollection_1_tE10B01F648B08FB3B2EBE3AF876C1CF3F1B841BC;
// System.Collections.Generic.List`1<Vuforia.AMigratableVideoBackgroundConfigProperty>
struct List_1_t954FA07E59908B707EE533C70970B55DF6352585;
// System.Collections.Generic.List`1<Vuforia.AValidatableVideoBackgroundConfigProperty>
struct List_1_tBCEF61DE12E8CFFEDECE9D4B935725C756A78F77;
// System.Collections.Generic.List`1<Vuforia.ICloudRecoEventHandler>
struct List_1_tE36C58ACF764AC79C451D361AF5DC5017516DE23;
// System.Collections.Generic.List`1<Vuforia.ITrackableEventHandler>
struct List_1_tE4338C7F7D33C78CB75B44EB5CCCA0152E97497B;
// System.Collections.Generic.List`1<Vuforia.TargetFinder/TargetSearchResult>
struct List_1_t9F47B63E854EC1B276E04B3C907EA6E9B9A2C619;
// System.Collections.IEnumerator
struct IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A;
// System.ComponentModel.PropertyChangedEventHandler
struct PropertyChangedEventHandler_t617E98E1876A8EB394D2B329340CE02D21FFFC82;
// System.Func`2<Vuforia.ImageTargetBehaviour,System.Boolean>
struct Func_2_tF5361435C33503A15254888BBE249E44BD973485;
// System.Func`2<Vuforia.TrackableBehaviour,System.Boolean>
struct Func_2_tB1EDC94D5DE2903BAA30A4C2DF00098781945AA6;
// System.Object[]
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A;
// System.Single[]
struct SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E;
// System.Void
struct Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017;
// UnityEngine.Camera
struct Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_t18AA4F473C7B295216B7D4B9723B4F3DFCCC9A3F;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_t6E5DF2EBDA42794B5FE0C6DAA97DF65F0BFF571F;
// UnityEngine.GUIStyle
struct GUIStyle_t671F175A201A19166385EE3392292A5F50070572;
// UnityEngine.GameObject
struct GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t30E337C5B5FBBCBAEDAF4093924D916CF2944067;
// UnityEngine.Material
struct Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598;
// UnityEngine.Shader
struct Shader_tE2731FF351B74AB4186897484FB01E000C1160CA;
// UnityEngine.Texture
struct Texture_t387FE83BB848001FD06B14707AEA6D5A0F6A95F4;
// UnityEngine.Texture2D
struct Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C;
// UnityEngine.Transform
struct Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA;
// Vuforia.ARController
struct ARController_tBCF5CBE22AE2AD3FF6DCAC88E78FF7C929D91293;
// Vuforia.Anchor
struct Anchor_tBEF556F294A0BF27AA05F1B2A611BAE1DE5CF335;
// Vuforia.AnchorBehaviour
struct AnchorBehaviour_t44D245039CC4D9728F7594297E43EEE0885CB23E;
// Vuforia.AnchorInputListenerBehaviour/InputReceivedEvent
struct InputReceivedEvent_t30AD5C108997667B53F1C6C844EF0B80096BD49C;
// Vuforia.BackgroundPlaneBehaviour
struct BackgroundPlaneBehaviour_t2615248F9F83AF94A06C6585EBB6C1D3BCF64338;
// Vuforia.ContentPlacedEvent
struct ContentPlacedEvent_t6F76CC86D8FF827E64E67C1DB8D770FB7A085997;
// Vuforia.ContentPositioningBehaviour
struct ContentPositioningBehaviour_t8B3CF7741A8FE98EAAE4210540CDA194E4379B5B;
// Vuforia.DataSet
struct DataSet_t9E9CB4ECE4C6C5C7B2FD9597B83FBAB7C55A4644;
// Vuforia.DigitalEyewearARController/SerializableViewerParameters
struct SerializableViewerParameters_t5F6E8C8CE0B55CCA2E3AC93018053A78AAD5DBE9;
// Vuforia.GuideView
struct GuideView_t0732A5D3A8536A322937D1E3FB0DF808ED666956;
// Vuforia.GuideViewRenderingBehaviour
struct GuideViewRenderingBehaviour_tF142A04A9437EFC6298F1D6CD1629DD8C334FD62;
// Vuforia.HitTestEvent
struct HitTestEvent_t63AB9C2D85E4DB67BA4AEF13B8E65862E90FED4F;
// Vuforia.HitTestResult
struct HitTestResult_t53FC02E2A830035AD9ED88C46D9975FD1B5C59DE;
// Vuforia.IBoundingBox
struct IBoundingBox_tD4F0CD39AB5435E3B1CE66D47080551C8D3469D3;
// Vuforia.ITargetSize
struct ITargetSize_t93FE85335C3D5B63DDB1C5EE2CE85A928F405898;
// Vuforia.Image
struct Image_tDD7214A3062A11DF9F86760338EBB9F105AA4352;
// Vuforia.MidAirPositionerBehaviour/AnchorPositionConfirmedEvent
struct AnchorPositionConfirmedEvent_t63B8BA26EFA42FC76914E18C5AF9E3E9223B5093;
// Vuforia.ModelTarget
struct ModelTarget_t6761EF80F84DC8D31A7266E6B7AED954F25CD54D;
// Vuforia.ModelTargetBehaviour
struct ModelTargetBehaviour_t283F7A0B136589E033A458B5FE0C42F3248CE0B0;
// Vuforia.ObjectTracker
struct ObjectTracker_tC5DE67DCDB38A86F77C3462ECB63C4453A1D8B3E;
// Vuforia.PositionalDeviceTracker
struct PositionalDeviceTracker_tEFAA5FDB9CF19DA74081AE51B41B4B5D9F40D8EE;
// Vuforia.SmartTerrain
struct SmartTerrain_t09E2ED8DC63BA7169F0DCDCC1BA4419BDB878E47;
// Vuforia.StereoProjMatrixStore
struct StereoProjMatrixStore_t666C738477A3F36E8FDD7E872AC154108291348A;
// Vuforia.TargetFinder
struct TargetFinder_t2AFA3E4A66C461FA522FE35048DB093003A7B1AC;
// Vuforia.Trackable
struct Trackable_t2A23C572321E7D4FEAC9A1019DFA0AA144FC9B8F;
// Vuforia.VRDeviceController
struct VRDeviceController_tDFB2A6DE022256FD695E024050B1F3A07B97D044;
// Vuforia.VideoBackgroundBehaviour
struct VideoBackgroundBehaviour_t5FE09B8C02AFCA301B6D915668BE3C050CE37C00;
// Vuforia.VideoBackgroundDefaultProvider
struct VideoBackgroundDefaultProvider_t0B2CEB4665A61EAF6C799309C48637D82A26FE4A;
// Vuforia.VuforiaARController
struct VuforiaARController_t7732FFB77105A2F5BBEA40E3CECC5C15DA624876;
// Vuforia.VuforiaBehaviour
struct VuforiaBehaviour_t9E688F16A822A56C5BB1910EF9B91448A9165BC2;
// Vuforia.VuforiaConfiguration/VideoBackgroundConfiguration
struct VideoBackgroundConfiguration_tCC24E374B966B79D018C14F6807A6DDA47302F17;




#ifndef U3CMODULEU3E_T37E08C55AF58CDE5E92F66C091A50610B9AF1972_H
#define U3CMODULEU3E_T37E08C55AF58CDE5E92F66C091A50610B9AF1972_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t37E08C55AF58CDE5E92F66C091A50610B9AF1972 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CMODULEU3E_T37E08C55AF58CDE5E92F66C091A50610B9AF1972_H
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
#ifndef AMIGRATABLEVIDEOBACKGROUNDCONFIGPROPERTY_TF4F2802B490270693198152EA55FC560C2BB3919_H
#define AMIGRATABLEVIDEOBACKGROUNDCONFIGPROPERTY_TF4F2802B490270693198152EA55FC560C2BB3919_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.AMigratableVideoBackgroundConfigProperty
struct  AMigratableVideoBackgroundConfigProperty_tF4F2802B490270693198152EA55FC560C2BB3919  : public RuntimeObject
{
public:
	// Vuforia.VuforiaConfiguration/VideoBackgroundConfiguration Vuforia.AMigratableVideoBackgroundConfigProperty::Config
	VideoBackgroundConfiguration_tCC24E374B966B79D018C14F6807A6DDA47302F17 * ___Config_0;

public:
	inline static int32_t get_offset_of_Config_0() { return static_cast<int32_t>(offsetof(AMigratableVideoBackgroundConfigProperty_tF4F2802B490270693198152EA55FC560C2BB3919, ___Config_0)); }
	inline VideoBackgroundConfiguration_tCC24E374B966B79D018C14F6807A6DDA47302F17 * get_Config_0() const { return ___Config_0; }
	inline VideoBackgroundConfiguration_tCC24E374B966B79D018C14F6807A6DDA47302F17 ** get_address_of_Config_0() { return &___Config_0; }
	inline void set_Config_0(VideoBackgroundConfiguration_tCC24E374B966B79D018C14F6807A6DDA47302F17 * value)
	{
		___Config_0 = value;
		Il2CppCodeGenWriteBarrier((&___Config_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AMIGRATABLEVIDEOBACKGROUNDCONFIGPROPERTY_TF4F2802B490270693198152EA55FC560C2BB3919_H
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
#ifndef U3CU3EC__DISPLAYCLASS11_0_T8D26720E0A8B72DA015D5C98330F437FBEEBCE02_H
#define U3CU3EC__DISPLAYCLASS11_0_T8D26720E0A8B72DA015D5C98330F437FBEEBCE02_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.ARController/<>c__DisplayClass11_0
struct  U3CU3Ec__DisplayClass11_0_t8D26720E0A8B72DA015D5C98330F437FBEEBCE02  : public RuntimeObject
{
public:
	// Vuforia.ARController Vuforia.ARController/<>c__DisplayClass11_0::controller
	ARController_tBCF5CBE22AE2AD3FF6DCAC88E78FF7C929D91293 * ___controller_0;

public:
	inline static int32_t get_offset_of_controller_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass11_0_t8D26720E0A8B72DA015D5C98330F437FBEEBCE02, ___controller_0)); }
	inline ARController_tBCF5CBE22AE2AD3FF6DCAC88E78FF7C929D91293 * get_controller_0() const { return ___controller_0; }
	inline ARController_tBCF5CBE22AE2AD3FF6DCAC88E78FF7C929D91293 ** get_address_of_controller_0() { return &___controller_0; }
	inline void set_controller_0(ARController_tBCF5CBE22AE2AD3FF6DCAC88E78FF7C929D91293 * value)
	{
		___controller_0 = value;
		Il2CppCodeGenWriteBarrier((&___controller_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CU3EC__DISPLAYCLASS11_0_T8D26720E0A8B72DA015D5C98330F437FBEEBCE02_H
#ifndef AVALIDATABLEVIDEOBACKGROUNDCONFIGPROPERTY_T7C670179380AA43CB486E420F6BAB3B08B01F6B4_H
#define AVALIDATABLEVIDEOBACKGROUNDCONFIGPROPERTY_T7C670179380AA43CB486E420F6BAB3B08B01F6B4_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.AValidatableVideoBackgroundConfigProperty
struct  AValidatableVideoBackgroundConfigProperty_t7C670179380AA43CB486E420F6BAB3B08B01F6B4  : public RuntimeObject
{
public:
	// Vuforia.VuforiaConfiguration/VideoBackgroundConfiguration Vuforia.AValidatableVideoBackgroundConfigProperty::Config
	VideoBackgroundConfiguration_tCC24E374B966B79D018C14F6807A6DDA47302F17 * ___Config_0;
	// Vuforia.VideoBackgroundDefaultProvider Vuforia.AValidatableVideoBackgroundConfigProperty::DefaultProvider
	VideoBackgroundDefaultProvider_t0B2CEB4665A61EAF6C799309C48637D82A26FE4A * ___DefaultProvider_1;

public:
	inline static int32_t get_offset_of_Config_0() { return static_cast<int32_t>(offsetof(AValidatableVideoBackgroundConfigProperty_t7C670179380AA43CB486E420F6BAB3B08B01F6B4, ___Config_0)); }
	inline VideoBackgroundConfiguration_tCC24E374B966B79D018C14F6807A6DDA47302F17 * get_Config_0() const { return ___Config_0; }
	inline VideoBackgroundConfiguration_tCC24E374B966B79D018C14F6807A6DDA47302F17 ** get_address_of_Config_0() { return &___Config_0; }
	inline void set_Config_0(VideoBackgroundConfiguration_tCC24E374B966B79D018C14F6807A6DDA47302F17 * value)
	{
		___Config_0 = value;
		Il2CppCodeGenWriteBarrier((&___Config_0), value);
	}

	inline static int32_t get_offset_of_DefaultProvider_1() { return static_cast<int32_t>(offsetof(AValidatableVideoBackgroundConfigProperty_t7C670179380AA43CB486E420F6BAB3B08B01F6B4, ___DefaultProvider_1)); }
	inline VideoBackgroundDefaultProvider_t0B2CEB4665A61EAF6C799309C48637D82A26FE4A * get_DefaultProvider_1() const { return ___DefaultProvider_1; }
	inline VideoBackgroundDefaultProvider_t0B2CEB4665A61EAF6C799309C48637D82A26FE4A ** get_address_of_DefaultProvider_1() { return &___DefaultProvider_1; }
	inline void set_DefaultProvider_1(VideoBackgroundDefaultProvider_t0B2CEB4665A61EAF6C799309C48637D82A26FE4A * value)
	{
		___DefaultProvider_1 = value;
		Il2CppCodeGenWriteBarrier((&___DefaultProvider_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AVALIDATABLEVIDEOBACKGROUNDCONFIGPROPERTY_T7C670179380AA43CB486E420F6BAB3B08B01F6B4_H
#ifndef ANCHORIMPL_T187011BD4C3999DD142AA584FB40EDB48A4794DC_H
#define ANCHORIMPL_T187011BD4C3999DD142AA584FB40EDB48A4794DC_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.AnchorImpl
struct  AnchorImpl_t187011BD4C3999DD142AA584FB40EDB48A4794DC  : public RuntimeObject
{
public:
	// System.String Vuforia.AnchorImpl::mName
	String_t* ___mName_0;
	// System.Int32 Vuforia.AnchorImpl::mId
	int32_t ___mId_1;

public:
	inline static int32_t get_offset_of_mName_0() { return static_cast<int32_t>(offsetof(AnchorImpl_t187011BD4C3999DD142AA584FB40EDB48A4794DC, ___mName_0)); }
	inline String_t* get_mName_0() const { return ___mName_0; }
	inline String_t** get_address_of_mName_0() { return &___mName_0; }
	inline void set_mName_0(String_t* value)
	{
		___mName_0 = value;
		Il2CppCodeGenWriteBarrier((&___mName_0), value);
	}

	inline static int32_t get_offset_of_mId_1() { return static_cast<int32_t>(offsetof(AnchorImpl_t187011BD4C3999DD142AA584FB40EDB48A4794DC, ___mId_1)); }
	inline int32_t get_mId_1() const { return ___mId_1; }
	inline int32_t* get_address_of_mId_1() { return &___mId_1; }
	inline void set_mId_1(int32_t value)
	{
		___mId_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ANCHORIMPL_T187011BD4C3999DD142AA584FB40EDB48A4794DC_H
#ifndef ANDROIDDATASETS_T4555858703D81E3DC34431B56BCDFDF6BBECBF59_H
#define ANDROIDDATASETS_T4555858703D81E3DC34431B56BCDFDF6BBECBF59_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.AndroidDatasets
struct  AndroidDatasets_t4555858703D81E3DC34431B56BCDFDF6BBECBF59  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ANDROIDDATASETS_T4555858703D81E3DC34431B56BCDFDF6BBECBF59_H
#ifndef ANDROIDUNITYPLAYER_T5346C3BD41748CD085C825F74309396BFDEADBC9_H
#define ANDROIDUNITYPLAYER_T5346C3BD41748CD085C825F74309396BFDEADBC9_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.AndroidUnityPlayer
struct  AndroidUnityPlayer_t5346C3BD41748CD085C825F74309396BFDEADBC9  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ANDROIDUNITYPLAYER_T5346C3BD41748CD085C825F74309396BFDEADBC9_H
#ifndef U3CU3EC__DISPLAYCLASS10_0_TBA0EADD82169074AB68C3D86F7B4C4D898AEB74B_H
#define U3CU3EC__DISPLAYCLASS10_0_TBA0EADD82169074AB68C3D86F7B4C4D898AEB74B_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.ContentPositioningBehaviour/<>c__DisplayClass10_0
struct  U3CU3Ec__DisplayClass10_0_tBA0EADD82169074AB68C3D86F7B4C4D898AEB74B  : public RuntimeObject
{
public:
	// UnityEngine.Transform Vuforia.ContentPositioningBehaviour/<>c__DisplayClass10_0::pose
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___pose_0;
	// Vuforia.ContentPositioningBehaviour Vuforia.ContentPositioningBehaviour/<>c__DisplayClass10_0::<>4__this
	ContentPositioningBehaviour_t8B3CF7741A8FE98EAAE4210540CDA194E4379B5B * ___U3CU3E4__this_1;

public:
	inline static int32_t get_offset_of_pose_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass10_0_tBA0EADD82169074AB68C3D86F7B4C4D898AEB74B, ___pose_0)); }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * get_pose_0() const { return ___pose_0; }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA ** get_address_of_pose_0() { return &___pose_0; }
	inline void set_pose_0(Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * value)
	{
		___pose_0 = value;
		Il2CppCodeGenWriteBarrier((&___pose_0), value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass10_0_tBA0EADD82169074AB68C3D86F7B4C4D898AEB74B, ___U3CU3E4__this_1)); }
	inline ContentPositioningBehaviour_t8B3CF7741A8FE98EAAE4210540CDA194E4379B5B * get_U3CU3E4__this_1() const { return ___U3CU3E4__this_1; }
	inline ContentPositioningBehaviour_t8B3CF7741A8FE98EAAE4210540CDA194E4379B5B ** get_address_of_U3CU3E4__this_1() { return &___U3CU3E4__this_1; }
	inline void set_U3CU3E4__this_1(ContentPositioningBehaviour_t8B3CF7741A8FE98EAAE4210540CDA194E4379B5B * value)
	{
		___U3CU3E4__this_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3E4__this_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CU3EC__DISPLAYCLASS10_0_TBA0EADD82169074AB68C3D86F7B4C4D898AEB74B_H
#ifndef U3CU3EC__DISPLAYCLASS11_0_T893AB4331842E877D333A316C278CA9F09C717EC_H
#define U3CU3EC__DISPLAYCLASS11_0_T893AB4331842E877D333A316C278CA9F09C717EC_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.ContentPositioningBehaviour/<>c__DisplayClass11_0
struct  U3CU3Ec__DisplayClass11_0_t893AB4331842E877D333A316C278CA9F09C717EC  : public RuntimeObject
{
public:
	// Vuforia.HitTestResult Vuforia.ContentPositioningBehaviour/<>c__DisplayClass11_0::hitTestResult
	HitTestResult_t53FC02E2A830035AD9ED88C46D9975FD1B5C59DE * ___hitTestResult_0;
	// Vuforia.ContentPositioningBehaviour Vuforia.ContentPositioningBehaviour/<>c__DisplayClass11_0::<>4__this
	ContentPositioningBehaviour_t8B3CF7741A8FE98EAAE4210540CDA194E4379B5B * ___U3CU3E4__this_1;

public:
	inline static int32_t get_offset_of_hitTestResult_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass11_0_t893AB4331842E877D333A316C278CA9F09C717EC, ___hitTestResult_0)); }
	inline HitTestResult_t53FC02E2A830035AD9ED88C46D9975FD1B5C59DE * get_hitTestResult_0() const { return ___hitTestResult_0; }
	inline HitTestResult_t53FC02E2A830035AD9ED88C46D9975FD1B5C59DE ** get_address_of_hitTestResult_0() { return &___hitTestResult_0; }
	inline void set_hitTestResult_0(HitTestResult_t53FC02E2A830035AD9ED88C46D9975FD1B5C59DE * value)
	{
		___hitTestResult_0 = value;
		Il2CppCodeGenWriteBarrier((&___hitTestResult_0), value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass11_0_t893AB4331842E877D333A316C278CA9F09C717EC, ___U3CU3E4__this_1)); }
	inline ContentPositioningBehaviour_t8B3CF7741A8FE98EAAE4210540CDA194E4379B5B * get_U3CU3E4__this_1() const { return ___U3CU3E4__this_1; }
	inline ContentPositioningBehaviour_t8B3CF7741A8FE98EAAE4210540CDA194E4379B5B ** get_address_of_U3CU3E4__this_1() { return &___U3CU3E4__this_1; }
	inline void set_U3CU3E4__this_1(ContentPositioningBehaviour_t8B3CF7741A8FE98EAAE4210540CDA194E4379B5B * value)
	{
		___U3CU3E4__this_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3E4__this_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CU3EC__DISPLAYCLASS11_0_T893AB4331842E877D333A316C278CA9F09C717EC_H
#ifndef U3CU3EC__DISPLAYCLASS15_0_TA7AC9CC14B4CB1EC918FB6C6D8A0447855F59EF9_H
#define U3CU3EC__DISPLAYCLASS15_0_TA7AC9CC14B4CB1EC918FB6C6D8A0447855F59EF9_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.ContentPositioningBehaviour/<>c__DisplayClass15_0
struct  U3CU3Ec__DisplayClass15_0_tA7AC9CC14B4CB1EC918FB6C6D8A0447855F59EF9  : public RuntimeObject
{
public:
	// Vuforia.Anchor Vuforia.ContentPositioningBehaviour/<>c__DisplayClass15_0::anchor
	RuntimeObject* ___anchor_0;

public:
	inline static int32_t get_offset_of_anchor_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass15_0_tA7AC9CC14B4CB1EC918FB6C6D8A0447855F59EF9, ___anchor_0)); }
	inline RuntimeObject* get_anchor_0() const { return ___anchor_0; }
	inline RuntimeObject** get_address_of_anchor_0() { return &___anchor_0; }
	inline void set_anchor_0(RuntimeObject* value)
	{
		___anchor_0 = value;
		Il2CppCodeGenWriteBarrier((&___anchor_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CU3EC__DISPLAYCLASS15_0_TA7AC9CC14B4CB1EC918FB6C6D8A0447855F59EF9_H
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
#ifndef EULAJSONUTILITY_T8C254349DEBF149816DCBC36D6BF846A40E3ADE1_H
#define EULAJSONUTILITY_T8C254349DEBF149816DCBC36D6BF846A40E3ADE1_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.EulaJsonUtility
struct  EulaJsonUtility_t8C254349DEBF149816DCBC36D6BF846A40E3ADE1  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EULAJSONUTILITY_T8C254349DEBF149816DCBC36D6BF846A40E3ADE1_H
#ifndef U3CSETCHILDOFVUFORIAANCHORU3ED__23_T90E33B7D4CE9FCBA6FB022A584337E2FD5492D17_H
#define U3CSETCHILDOFVUFORIAANCHORU3ED__23_T90E33B7D4CE9FCBA6FB022A584337E2FD5492D17_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.GuideViewRenderingBehaviour/<SetChildOfVuforiaAnchor>d__23
struct  U3CSetChildOfVuforiaAnchorU3Ed__23_t90E33B7D4CE9FCBA6FB022A584337E2FD5492D17  : public RuntimeObject
{
public:
	// System.Int32 Vuforia.GuideViewRenderingBehaviour/<SetChildOfVuforiaAnchor>d__23::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Vuforia.GuideViewRenderingBehaviour/<SetChildOfVuforiaAnchor>d__23::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// Vuforia.GuideViewRenderingBehaviour Vuforia.GuideViewRenderingBehaviour/<SetChildOfVuforiaAnchor>d__23::<>4__this
	GuideViewRenderingBehaviour_tF142A04A9437EFC6298F1D6CD1629DD8C334FD62 * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CSetChildOfVuforiaAnchorU3Ed__23_t90E33B7D4CE9FCBA6FB022A584337E2FD5492D17, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CSetChildOfVuforiaAnchorU3Ed__23_t90E33B7D4CE9FCBA6FB022A584337E2FD5492D17, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3E2__current_1), value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CSetChildOfVuforiaAnchorU3Ed__23_t90E33B7D4CE9FCBA6FB022A584337E2FD5492D17, ___U3CU3E4__this_2)); }
	inline GuideViewRenderingBehaviour_tF142A04A9437EFC6298F1D6CD1629DD8C334FD62 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline GuideViewRenderingBehaviour_tF142A04A9437EFC6298F1D6CD1629DD8C334FD62 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(GuideViewRenderingBehaviour_tF142A04A9437EFC6298F1D6CD1629DD8C334FD62 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3E4__this_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CSETCHILDOFVUFORIAANCHORU3ED__23_T90E33B7D4CE9FCBA6FB022A584337E2FD5492D17_H
#ifndef U3CSHOWGUIDEVIEWAFTERU3ED__22_T149D649553EA5CEFD4B612ADDAC88BF404274BD4_H
#define U3CSHOWGUIDEVIEWAFTERU3ED__22_T149D649553EA5CEFD4B612ADDAC88BF404274BD4_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.GuideViewRenderingBehaviour/<ShowGuideViewAfter>d__22
struct  U3CShowGuideViewAfterU3Ed__22_t149D649553EA5CEFD4B612ADDAC88BF404274BD4  : public RuntimeObject
{
public:
	// System.Int32 Vuforia.GuideViewRenderingBehaviour/<ShowGuideViewAfter>d__22::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Vuforia.GuideViewRenderingBehaviour/<ShowGuideViewAfter>d__22::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// System.Single Vuforia.GuideViewRenderingBehaviour/<ShowGuideViewAfter>d__22::seconds
	float ___seconds_2;
	// Vuforia.GuideViewRenderingBehaviour Vuforia.GuideViewRenderingBehaviour/<ShowGuideViewAfter>d__22::<>4__this
	GuideViewRenderingBehaviour_tF142A04A9437EFC6298F1D6CD1629DD8C334FD62 * ___U3CU3E4__this_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CShowGuideViewAfterU3Ed__22_t149D649553EA5CEFD4B612ADDAC88BF404274BD4, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CShowGuideViewAfterU3Ed__22_t149D649553EA5CEFD4B612ADDAC88BF404274BD4, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3E2__current_1), value);
	}

	inline static int32_t get_offset_of_seconds_2() { return static_cast<int32_t>(offsetof(U3CShowGuideViewAfterU3Ed__22_t149D649553EA5CEFD4B612ADDAC88BF404274BD4, ___seconds_2)); }
	inline float get_seconds_2() const { return ___seconds_2; }
	inline float* get_address_of_seconds_2() { return &___seconds_2; }
	inline void set_seconds_2(float value)
	{
		___seconds_2 = value;
	}

	inline static int32_t get_offset_of_U3CU3E4__this_3() { return static_cast<int32_t>(offsetof(U3CShowGuideViewAfterU3Ed__22_t149D649553EA5CEFD4B612ADDAC88BF404274BD4, ___U3CU3E4__this_3)); }
	inline GuideViewRenderingBehaviour_tF142A04A9437EFC6298F1D6CD1629DD8C334FD62 * get_U3CU3E4__this_3() const { return ___U3CU3E4__this_3; }
	inline GuideViewRenderingBehaviour_tF142A04A9437EFC6298F1D6CD1629DD8C334FD62 ** get_address_of_U3CU3E4__this_3() { return &___U3CU3E4__this_3; }
	inline void set_U3CU3E4__this_3(GuideViewRenderingBehaviour_tF142A04A9437EFC6298F1D6CD1629DD8C334FD62 * value)
	{
		___U3CU3E4__this_3 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3E4__this_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CSHOWGUIDEVIEWAFTERU3ED__22_T149D649553EA5CEFD4B612ADDAC88BF404274BD4_H
#ifndef MODELTARGETBOUNDINGBOXIMPL_T21F47F319E17AD27E3351D0232382928518A0F98_H
#define MODELTARGETBOUNDINGBOXIMPL_T21F47F319E17AD27E3351D0232382928518A0F98_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.ModelTargetBoundingBoxImpl
struct  ModelTargetBoundingBoxImpl_t21F47F319E17AD27E3351D0232382928518A0F98  : public RuntimeObject
{
public:
	// Vuforia.DataSet Vuforia.ModelTargetBoundingBoxImpl::mDataSet
	DataSet_t9E9CB4ECE4C6C5C7B2FD9597B83FBAB7C55A4644 * ___mDataSet_0;
	// System.String Vuforia.ModelTargetBoundingBoxImpl::mName
	String_t* ___mName_1;

public:
	inline static int32_t get_offset_of_mDataSet_0() { return static_cast<int32_t>(offsetof(ModelTargetBoundingBoxImpl_t21F47F319E17AD27E3351D0232382928518A0F98, ___mDataSet_0)); }
	inline DataSet_t9E9CB4ECE4C6C5C7B2FD9597B83FBAB7C55A4644 * get_mDataSet_0() const { return ___mDataSet_0; }
	inline DataSet_t9E9CB4ECE4C6C5C7B2FD9597B83FBAB7C55A4644 ** get_address_of_mDataSet_0() { return &___mDataSet_0; }
	inline void set_mDataSet_0(DataSet_t9E9CB4ECE4C6C5C7B2FD9597B83FBAB7C55A4644 * value)
	{
		___mDataSet_0 = value;
		Il2CppCodeGenWriteBarrier((&___mDataSet_0), value);
	}

	inline static int32_t get_offset_of_mName_1() { return static_cast<int32_t>(offsetof(ModelTargetBoundingBoxImpl_t21F47F319E17AD27E3351D0232382928518A0F98, ___mName_1)); }
	inline String_t* get_mName_1() const { return ___mName_1; }
	inline String_t** get_address_of_mName_1() { return &___mName_1; }
	inline void set_mName_1(String_t* value)
	{
		___mName_1 = value;
		Il2CppCodeGenWriteBarrier((&___mName_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MODELTARGETBOUNDINGBOXIMPL_T21F47F319E17AD27E3351D0232382928518A0F98_H
#ifndef PLATFORMRUNTIMEINITIALIZATION_T97A82C113464E846C018791EE66113F38E2DFFE6_H
#define PLATFORMRUNTIMEINITIALIZATION_T97A82C113464E846C018791EE66113F38E2DFFE6_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.PlatformRuntimeInitialization
struct  PlatformRuntimeInitialization_t97A82C113464E846C018791EE66113F38E2DFFE6  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLATFORMRUNTIMEINITIALIZATION_T97A82C113464E846C018791EE66113F38E2DFFE6_H
#ifndef PLAYMODEUNITYPLAYER_T1148C1DF43FF676A83A58015E7CFC96CFDA88EB7_H
#define PLAYMODEUNITYPLAYER_T1148C1DF43FF676A83A58015E7CFC96CFDA88EB7_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.PlayModeUnityPlayer
struct  PlayModeUnityPlayer_t1148C1DF43FF676A83A58015E7CFC96CFDA88EB7  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYMODEUNITYPLAYER_T1148C1DF43FF676A83A58015E7CFC96CFDA88EB7_H
#ifndef U3CU3EC_T2255C26323B70789F1DEDBCAA38CD03AB66B600C_H
#define U3CU3EC_T2255C26323B70789F1DEDBCAA38CD03AB66B600C_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.PlaymodeSmartTerrainImpl/<>c
struct  U3CU3Ec_t2255C26323B70789F1DEDBCAA38CD03AB66B600C  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t2255C26323B70789F1DEDBCAA38CD03AB66B600C_StaticFields
{
public:
	// Vuforia.PlaymodeSmartTerrainImpl/<>c Vuforia.PlaymodeSmartTerrainImpl/<>c::<>9
	U3CU3Ec_t2255C26323B70789F1DEDBCAA38CD03AB66B600C * ___U3CU3E9_0;
	// System.Func`2<Vuforia.TrackableBehaviour,System.Boolean> Vuforia.PlaymodeSmartTerrainImpl/<>c::<>9__7_0
	Func_2_tB1EDC94D5DE2903BAA30A4C2DF00098781945AA6 * ___U3CU3E9__7_0_1;
	// System.Func`2<Vuforia.ImageTargetBehaviour,System.Boolean> Vuforia.PlaymodeSmartTerrainImpl/<>c::<>9__7_1
	Func_2_tF5361435C33503A15254888BBE249E44BD973485 * ___U3CU3E9__7_1_2;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t2255C26323B70789F1DEDBCAA38CD03AB66B600C_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t2255C26323B70789F1DEDBCAA38CD03AB66B600C * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t2255C26323B70789F1DEDBCAA38CD03AB66B600C ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t2255C26323B70789F1DEDBCAA38CD03AB66B600C * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3E9_0), value);
	}

	inline static int32_t get_offset_of_U3CU3E9__7_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_t2255C26323B70789F1DEDBCAA38CD03AB66B600C_StaticFields, ___U3CU3E9__7_0_1)); }
	inline Func_2_tB1EDC94D5DE2903BAA30A4C2DF00098781945AA6 * get_U3CU3E9__7_0_1() const { return ___U3CU3E9__7_0_1; }
	inline Func_2_tB1EDC94D5DE2903BAA30A4C2DF00098781945AA6 ** get_address_of_U3CU3E9__7_0_1() { return &___U3CU3E9__7_0_1; }
	inline void set_U3CU3E9__7_0_1(Func_2_tB1EDC94D5DE2903BAA30A4C2DF00098781945AA6 * value)
	{
		___U3CU3E9__7_0_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3E9__7_0_1), value);
	}

	inline static int32_t get_offset_of_U3CU3E9__7_1_2() { return static_cast<int32_t>(offsetof(U3CU3Ec_t2255C26323B70789F1DEDBCAA38CD03AB66B600C_StaticFields, ___U3CU3E9__7_1_2)); }
	inline Func_2_tF5361435C33503A15254888BBE249E44BD973485 * get_U3CU3E9__7_1_2() const { return ___U3CU3E9__7_1_2; }
	inline Func_2_tF5361435C33503A15254888BBE249E44BD973485 ** get_address_of_U3CU3E9__7_1_2() { return &___U3CU3E9__7_1_2; }
	inline void set_U3CU3E9__7_1_2(Func_2_tF5361435C33503A15254888BBE249E44BD973485 * value)
	{
		___U3CU3E9__7_1_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3E9__7_1_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CU3EC_T2255C26323B70789F1DEDBCAA38CD03AB66B600C_H
#ifndef U3CU3EC_T31BFC0C775266B0B35351A80037885FEB16EE0B1_H
#define U3CU3EC_T31BFC0C775266B0B35351A80037885FEB16EE0B1_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.PositionalDeviceTrackerImpl/<>c
struct  U3CU3Ec_t31BFC0C775266B0B35351A80037885FEB16EE0B1  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t31BFC0C775266B0B35351A80037885FEB16EE0B1_StaticFields
{
public:
	// Vuforia.PositionalDeviceTrackerImpl/<>c Vuforia.PositionalDeviceTrackerImpl/<>c::<>9
	U3CU3Ec_t31BFC0C775266B0B35351A80037885FEB16EE0B1 * ___U3CU3E9_0;
	// System.Func`2<Vuforia.TrackableBehaviour,System.Boolean> Vuforia.PositionalDeviceTrackerImpl/<>c::<>9__13_0
	Func_2_tB1EDC94D5DE2903BAA30A4C2DF00098781945AA6 * ___U3CU3E9__13_0_1;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t31BFC0C775266B0B35351A80037885FEB16EE0B1_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t31BFC0C775266B0B35351A80037885FEB16EE0B1 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t31BFC0C775266B0B35351A80037885FEB16EE0B1 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t31BFC0C775266B0B35351A80037885FEB16EE0B1 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3E9_0), value);
	}

	inline static int32_t get_offset_of_U3CU3E9__13_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_t31BFC0C775266B0B35351A80037885FEB16EE0B1_StaticFields, ___U3CU3E9__13_0_1)); }
	inline Func_2_tB1EDC94D5DE2903BAA30A4C2DF00098781945AA6 * get_U3CU3E9__13_0_1() const { return ___U3CU3E9__13_0_1; }
	inline Func_2_tB1EDC94D5DE2903BAA30A4C2DF00098781945AA6 ** get_address_of_U3CU3E9__13_0_1() { return &___U3CU3E9__13_0_1; }
	inline void set_U3CU3E9__13_0_1(Func_2_tB1EDC94D5DE2903BAA30A4C2DF00098781945AA6 * value)
	{
		___U3CU3E9__13_0_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3E9__13_0_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CU3EC_T31BFC0C775266B0B35351A80037885FEB16EE0B1_H
#ifndef STATICWEBCAMTEXADAPTOR_TE0A86A229DA0C5F39CEC9D76D9BEF635580D3625_H
#define STATICWEBCAMTEXADAPTOR_TE0A86A229DA0C5F39CEC9D76D9BEF635580D3625_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.StaticWebCamTexAdaptor
struct  StaticWebCamTexAdaptor_tE0A86A229DA0C5F39CEC9D76D9BEF635580D3625  : public RuntimeObject
{
public:
	// UnityEngine.Texture Vuforia.StaticWebCamTexAdaptor::<Texture>k__BackingField
	Texture_t387FE83BB848001FD06B14707AEA6D5A0F6A95F4 * ___U3CTextureU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CTextureU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(StaticWebCamTexAdaptor_tE0A86A229DA0C5F39CEC9D76D9BEF635580D3625, ___U3CTextureU3Ek__BackingField_0)); }
	inline Texture_t387FE83BB848001FD06B14707AEA6D5A0F6A95F4 * get_U3CTextureU3Ek__BackingField_0() const { return ___U3CTextureU3Ek__BackingField_0; }
	inline Texture_t387FE83BB848001FD06B14707AEA6D5A0F6A95F4 ** get_address_of_U3CTextureU3Ek__BackingField_0() { return &___U3CTextureU3Ek__BackingField_0; }
	inline void set_U3CTextureU3Ek__BackingField_0(Texture_t387FE83BB848001FD06B14707AEA6D5A0F6A95F4 * value)
	{
		___U3CTextureU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CTextureU3Ek__BackingField_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STATICWEBCAMTEXADAPTOR_TE0A86A229DA0C5F39CEC9D76D9BEF635580D3625_H
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
#ifndef UNITYCOMPONENTEXTENSIONS_T9F0045DBCEFA6E3D0D61EF91365CB0A9703DF288_H
#define UNITYCOMPONENTEXTENSIONS_T9F0045DBCEFA6E3D0D61EF91365CB0A9703DF288_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.UnityComponentExtensions
struct  UnityComponentExtensions_t9F0045DBCEFA6E3D0D61EF91365CB0A9703DF288  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYCOMPONENTEXTENSIONS_T9F0045DBCEFA6E3D0D61EF91365CB0A9703DF288_H
#ifndef VIDEOBACKGROUNDCONFIGMIGRATOR_TEAEF33C27BF6ED821E0237860EB786CD2BA92D81_H
#define VIDEOBACKGROUNDCONFIGMIGRATOR_TEAEF33C27BF6ED821E0237860EB786CD2BA92D81_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.VideoBackgroundConfigMigrator
struct  VideoBackgroundConfigMigrator_tEAEF33C27BF6ED821E0237860EB786CD2BA92D81  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<Vuforia.AMigratableVideoBackgroundConfigProperty> Vuforia.VideoBackgroundConfigMigrator::mMigratableProperties
	List_1_t954FA07E59908B707EE533C70970B55DF6352585 * ___mMigratableProperties_0;

public:
	inline static int32_t get_offset_of_mMigratableProperties_0() { return static_cast<int32_t>(offsetof(VideoBackgroundConfigMigrator_tEAEF33C27BF6ED821E0237860EB786CD2BA92D81, ___mMigratableProperties_0)); }
	inline List_1_t954FA07E59908B707EE533C70970B55DF6352585 * get_mMigratableProperties_0() const { return ___mMigratableProperties_0; }
	inline List_1_t954FA07E59908B707EE533C70970B55DF6352585 ** get_address_of_mMigratableProperties_0() { return &___mMigratableProperties_0; }
	inline void set_mMigratableProperties_0(List_1_t954FA07E59908B707EE533C70970B55DF6352585 * value)
	{
		___mMigratableProperties_0 = value;
		Il2CppCodeGenWriteBarrier((&___mMigratableProperties_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VIDEOBACKGROUNDCONFIGMIGRATOR_TEAEF33C27BF6ED821E0237860EB786CD2BA92D81_H
#ifndef U3CU3EC_T8412B21F5F41E2A528335D4F11B53694DA3229EC_H
#define U3CU3EC_T8412B21F5F41E2A528335D4F11B53694DA3229EC_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.VideoBackgroundConfigMigrator/<>c
struct  U3CU3Ec_t8412B21F5F41E2A528335D4F11B53694DA3229EC  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t8412B21F5F41E2A528335D4F11B53694DA3229EC_StaticFields
{
public:
	// Vuforia.VideoBackgroundConfigMigrator/<>c Vuforia.VideoBackgroundConfigMigrator/<>c::<>9
	U3CU3Ec_t8412B21F5F41E2A528335D4F11B53694DA3229EC * ___U3CU3E9_0;
	// System.Action`1<Vuforia.AMigratableVideoBackgroundConfigProperty> Vuforia.VideoBackgroundConfigMigrator/<>c::<>9__2_0
	Action_1_tB7E6786B172E37E43AB34B70B3A0D433255E6A34 * ___U3CU3E9__2_0_1;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t8412B21F5F41E2A528335D4F11B53694DA3229EC_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t8412B21F5F41E2A528335D4F11B53694DA3229EC * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t8412B21F5F41E2A528335D4F11B53694DA3229EC ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t8412B21F5F41E2A528335D4F11B53694DA3229EC * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3E9_0), value);
	}

	inline static int32_t get_offset_of_U3CU3E9__2_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_t8412B21F5F41E2A528335D4F11B53694DA3229EC_StaticFields, ___U3CU3E9__2_0_1)); }
	inline Action_1_tB7E6786B172E37E43AB34B70B3A0D433255E6A34 * get_U3CU3E9__2_0_1() const { return ___U3CU3E9__2_0_1; }
	inline Action_1_tB7E6786B172E37E43AB34B70B3A0D433255E6A34 ** get_address_of_U3CU3E9__2_0_1() { return &___U3CU3E9__2_0_1; }
	inline void set_U3CU3E9__2_0_1(Action_1_tB7E6786B172E37E43AB34B70B3A0D433255E6A34 * value)
	{
		___U3CU3E9__2_0_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3E9__2_0_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CU3EC_T8412B21F5F41E2A528335D4F11B53694DA3229EC_H
#ifndef VIDEOBACKGROUNDCONFIGVALIDATOR_TC6D2432439D8AAAF1E72C8124FC620504DC11EB0_H
#define VIDEOBACKGROUNDCONFIGVALIDATOR_TC6D2432439D8AAAF1E72C8124FC620504DC11EB0_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.VideoBackgroundConfigValidator
struct  VideoBackgroundConfigValidator_tC6D2432439D8AAAF1E72C8124FC620504DC11EB0  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<Vuforia.AValidatableVideoBackgroundConfigProperty> Vuforia.VideoBackgroundConfigValidator::mValidatableProperties
	List_1_tBCEF61DE12E8CFFEDECE9D4B935725C756A78F77 * ___mValidatableProperties_0;

public:
	inline static int32_t get_offset_of_mValidatableProperties_0() { return static_cast<int32_t>(offsetof(VideoBackgroundConfigValidator_tC6D2432439D8AAAF1E72C8124FC620504DC11EB0, ___mValidatableProperties_0)); }
	inline List_1_tBCEF61DE12E8CFFEDECE9D4B935725C756A78F77 * get_mValidatableProperties_0() const { return ___mValidatableProperties_0; }
	inline List_1_tBCEF61DE12E8CFFEDECE9D4B935725C756A78F77 ** get_address_of_mValidatableProperties_0() { return &___mValidatableProperties_0; }
	inline void set_mValidatableProperties_0(List_1_tBCEF61DE12E8CFFEDECE9D4B935725C756A78F77 * value)
	{
		___mValidatableProperties_0 = value;
		Il2CppCodeGenWriteBarrier((&___mValidatableProperties_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VIDEOBACKGROUNDCONFIGVALIDATOR_TC6D2432439D8AAAF1E72C8124FC620504DC11EB0_H
#ifndef U3CU3EC__DISPLAYCLASS2_0_TDA1C694A3B22700FA2A2B9A65EC6A49E864F2750_H
#define U3CU3EC__DISPLAYCLASS2_0_TDA1C694A3B22700FA2A2B9A65EC6A49E864F2750_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.VideoBackgroundConfigValidator/<>c__DisplayClass2_0
struct  U3CU3Ec__DisplayClass2_0_tDA1C694A3B22700FA2A2B9A65EC6A49E864F2750  : public RuntimeObject
{
public:
	// System.Boolean Vuforia.VideoBackgroundConfigValidator/<>c__DisplayClass2_0::res
	bool ___res_0;

public:
	inline static int32_t get_offset_of_res_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass2_0_tDA1C694A3B22700FA2A2B9A65EC6A49E864F2750, ___res_0)); }
	inline bool get_res_0() const { return ___res_0; }
	inline bool* get_address_of_res_0() { return &___res_0; }
	inline void set_res_0(bool value)
	{
		___res_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CU3EC__DISPLAYCLASS2_0_TDA1C694A3B22700FA2A2B9A65EC6A49E864F2750_H
#ifndef VIDEOBACKGROUNDDEFAULTPROVIDER_T0B2CEB4665A61EAF6C799309C48637D82A26FE4A_H
#define VIDEOBACKGROUNDDEFAULTPROVIDER_T0B2CEB4665A61EAF6C799309C48637D82A26FE4A_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.VideoBackgroundDefaultProvider
struct  VideoBackgroundDefaultProvider_t0B2CEB4665A61EAF6C799309C48637D82A26FE4A  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VIDEOBACKGROUNDDEFAULTPROVIDER_T0B2CEB4665A61EAF6C799309C48637D82A26FE4A_H
#ifndef WSAUNITYPLAYER_T8984115743F343B91C65C2C363768A7515EF78BB_H
#define WSAUNITYPLAYER_T8984115743F343B91C65C2C363768A7515EF78BB_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.WSAUnityPlayer
struct  WSAUnityPlayer_t8984115743F343B91C65C2C363768A7515EF78BB  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WSAUNITYPLAYER_T8984115743F343B91C65C2C363768A7515EF78BB_H
#ifndef U24ARRAYTYPEU3D12_T25F5D2FC4CFB01F181ED6F7A7F68C39C5D73E199_H
#define U24ARRAYTYPEU3D12_T25F5D2FC4CFB01F181ED6F7A7F68C39C5D73E199_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType=12
#pragma pack(push, tp, 1)
struct  U24ArrayTypeU3D12_t25F5D2FC4CFB01F181ED6F7A7F68C39C5D73E199 
{
public:
	union
	{
		struct
		{
		};
		uint8_t U24ArrayTypeU3D12_t25F5D2FC4CFB01F181ED6F7A7F68C39C5D73E199__padding[12];
	};

public:
};
#pragma pack(pop, tp)

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU3D12_T25F5D2FC4CFB01F181ED6F7A7F68C39C5D73E199_H
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
#ifndef SINGLE_TDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_H
#define SINGLE_TDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Single
struct  Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1, ___m_value_0)); }
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
#endif // SINGLE_TDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_H
#ifndef UNITYEVENT_1_T257C104996F98E724B7742D8D6AAA98EBEDC82AF_H
#define UNITYEVENT_1_T257C104996F98E724B7742D8D6AAA98EBEDC82AF_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.UnityEvent`1<UnityEngine.GameObject>
struct  UnityEvent_1_t257C104996F98E724B7742D8D6AAA98EBEDC82AF  : public UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___m_InvokeArray_4;

public:
	inline static int32_t get_offset_of_m_InvokeArray_4() { return static_cast<int32_t>(offsetof(UnityEvent_1_t257C104996F98E724B7742D8D6AAA98EBEDC82AF, ___m_InvokeArray_4)); }
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
#endif // UNITYEVENT_1_T257C104996F98E724B7742D8D6AAA98EBEDC82AF_H
#ifndef UNITYEVENT_1_TD15FCA738F4102B872C1480A6678ED16A8A51845_H
#define UNITYEVENT_1_TD15FCA738F4102B872C1480A6678ED16A8A51845_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.UnityEvent`1<UnityEngine.Transform>
struct  UnityEvent_1_tD15FCA738F4102B872C1480A6678ED16A8A51845  : public UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___m_InvokeArray_4;

public:
	inline static int32_t get_offset_of_m_InvokeArray_4() { return static_cast<int32_t>(offsetof(UnityEvent_1_tD15FCA738F4102B872C1480A6678ED16A8A51845, ___m_InvokeArray_4)); }
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
#endif // UNITYEVENT_1_TD15FCA738F4102B872C1480A6678ED16A8A51845_H
#ifndef UNITYEVENT_1_T88E036FD5956DB491BCC160FA57EF4F9584042B9_H
#define UNITYEVENT_1_T88E036FD5956DB491BCC160FA57EF4F9584042B9_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.UnityEvent`1<UnityEngine.Vector2>
struct  UnityEvent_1_t88E036FD5956DB491BCC160FA57EF4F9584042B9  : public UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___m_InvokeArray_4;

public:
	inline static int32_t get_offset_of_m_InvokeArray_4() { return static_cast<int32_t>(offsetof(UnityEvent_1_t88E036FD5956DB491BCC160FA57EF4F9584042B9, ___m_InvokeArray_4)); }
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
#endif // UNITYEVENT_1_T88E036FD5956DB491BCC160FA57EF4F9584042B9_H
#ifndef UNITYEVENT_1_T829D31AB9F9A4E0C21C8062405B1EF98DDD81ADE_H
#define UNITYEVENT_1_T829D31AB9F9A4E0C21C8062405B1EF98DDD81ADE_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.UnityEvent`1<Vuforia.HitTestResult>
struct  UnityEvent_1_t829D31AB9F9A4E0C21C8062405B1EF98DDD81ADE  : public UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___m_InvokeArray_4;

public:
	inline static int32_t get_offset_of_m_InvokeArray_4() { return static_cast<int32_t>(offsetof(UnityEvent_1_t829D31AB9F9A4E0C21C8062405B1EF98DDD81ADE, ___m_InvokeArray_4)); }
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
#endif // UNITYEVENT_1_T829D31AB9F9A4E0C21C8062405B1EF98DDD81ADE_H
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
#ifndef ANCHORDATA_TC476940A18BABB720CE1D5A2B78153B01DF407FF_H
#define ANCHORDATA_TC476940A18BABB720CE1D5A2B78153B01DF407FF_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.AnchorData
#pragma pack(push, tp, 1)
struct  AnchorData_tC476940A18BABB720CE1D5A2B78153B01DF407FF 
{
public:
	// System.Int32 Vuforia.AnchorData::id
	int32_t ___id_0;
	// System.Int32 Vuforia.AnchorData::unused
	int32_t ___unused_1;

public:
	inline static int32_t get_offset_of_id_0() { return static_cast<int32_t>(offsetof(AnchorData_tC476940A18BABB720CE1D5A2B78153B01DF407FF, ___id_0)); }
	inline int32_t get_id_0() const { return ___id_0; }
	inline int32_t* get_address_of_id_0() { return &___id_0; }
	inline void set_id_0(int32_t value)
	{
		___id_0 = value;
	}

	inline static int32_t get_offset_of_unused_1() { return static_cast<int32_t>(offsetof(AnchorData_tC476940A18BABB720CE1D5A2B78153B01DF407FF, ___unused_1)); }
	inline int32_t get_unused_1() const { return ___unused_1; }
	inline int32_t* get_address_of_unused_1() { return &___unused_1; }
	inline void set_unused_1(int32_t value)
	{
		___unused_1 = value;
	}
};
#pragma pack(pop, tp)

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ANCHORDATA_TC476940A18BABB720CE1D5A2B78153B01DF407FF_H
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
#ifndef EULAVERSIONSTRINGS_TAEEF9B262F37DD7F1E2CA7EDD2FAA5BAFCB47042_H
#define EULAVERSIONSTRINGS_TAEEF9B262F37DD7F1E2CA7EDD2FAA5BAFCB47042_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.EulaJsonUtility/EulaVersionStrings
struct  EulaVersionStrings_tAEEF9B262F37DD7F1E2CA7EDD2FAA5BAFCB47042 
{
public:
	// System.String[] Vuforia.EulaJsonUtility/EulaVersionStrings::Values
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ___Values_0;

public:
	inline static int32_t get_offset_of_Values_0() { return static_cast<int32_t>(offsetof(EulaVersionStrings_tAEEF9B262F37DD7F1E2CA7EDD2FAA5BAFCB47042, ___Values_0)); }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* get_Values_0() const { return ___Values_0; }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E** get_address_of_Values_0() { return &___Values_0; }
	inline void set_Values_0(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* value)
	{
		___Values_0 = value;
		Il2CppCodeGenWriteBarrier((&___Values_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of Vuforia.EulaJsonUtility/EulaVersionStrings
struct EulaVersionStrings_tAEEF9B262F37DD7F1E2CA7EDD2FAA5BAFCB47042_marshaled_pinvoke
{
	char** ___Values_0;
};
// Native definition for COM marshalling of Vuforia.EulaJsonUtility/EulaVersionStrings
struct EulaVersionStrings_tAEEF9B262F37DD7F1E2CA7EDD2FAA5BAFCB47042_marshaled_com
{
	Il2CppChar** ___Values_0;
};
#endif // EULAVERSIONSTRINGS_TAEEF9B262F37DD7F1E2CA7EDD2FAA5BAFCB47042_H
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
#ifndef MATTESHADERPROPERTY_T135A3774A258638E6E504EC3C593105CD140D2FD_H
#define MATTESHADERPROPERTY_T135A3774A258638E6E504EC3C593105CD140D2FD_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.MatteShaderProperty
struct  MatteShaderProperty_t135A3774A258638E6E504EC3C593105CD140D2FD  : public AValidatableVideoBackgroundConfigProperty_t7C670179380AA43CB486E420F6BAB3B08B01F6B4
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MATTESHADERPROPERTY_T135A3774A258638E6E504EC3C593105CD140D2FD_H
#ifndef MATTESHADERPROPERTYMIGRATION_T344F92FD10DB03501B9369C840F881DF696AD72E_H
#define MATTESHADERPROPERTYMIGRATION_T344F92FD10DB03501B9369C840F881DF696AD72E_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.MatteShaderPropertyMigration
struct  MatteShaderPropertyMigration_t344F92FD10DB03501B9369C840F881DF696AD72E  : public AMigratableVideoBackgroundConfigProperty_tF4F2802B490270693198152EA55FC560C2BB3919
{
public:
	// System.String Vuforia.MatteShaderPropertyMigration::mOldShaderName
	String_t* ___mOldShaderName_1;
	// System.String Vuforia.MatteShaderPropertyMigration::mNewShaderName
	String_t* ___mNewShaderName_2;

public:
	inline static int32_t get_offset_of_mOldShaderName_1() { return static_cast<int32_t>(offsetof(MatteShaderPropertyMigration_t344F92FD10DB03501B9369C840F881DF696AD72E, ___mOldShaderName_1)); }
	inline String_t* get_mOldShaderName_1() const { return ___mOldShaderName_1; }
	inline String_t** get_address_of_mOldShaderName_1() { return &___mOldShaderName_1; }
	inline void set_mOldShaderName_1(String_t* value)
	{
		___mOldShaderName_1 = value;
		Il2CppCodeGenWriteBarrier((&___mOldShaderName_1), value);
	}

	inline static int32_t get_offset_of_mNewShaderName_2() { return static_cast<int32_t>(offsetof(MatteShaderPropertyMigration_t344F92FD10DB03501B9369C840F881DF696AD72E, ___mNewShaderName_2)); }
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
#endif // MATTESHADERPROPERTYMIGRATION_T344F92FD10DB03501B9369C840F881DF696AD72E_H
#ifndef NUMDIVISIONSPROPERTY_T256C036FE34F79188C444C116986E14905657527_H
#define NUMDIVISIONSPROPERTY_T256C036FE34F79188C444C116986E14905657527_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.NumDivisionsProperty
struct  NumDivisionsProperty_t256C036FE34F79188C444C116986E14905657527  : public AValidatableVideoBackgroundConfigProperty_t7C670179380AA43CB486E420F6BAB3B08B01F6B4
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NUMDIVISIONSPROPERTY_T256C036FE34F79188C444C116986E14905657527_H
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
#ifndef TARGETFINDERSTATE_TFED6EAB7D0324D88E902EC9988067C11E8B8C11D_H
#define TARGETFINDERSTATE_TFED6EAB7D0324D88E902EC9988067C11E8B8C11D_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.TargetFinder/TargetFinderState
#pragma pack(push, tp, 1)
struct  TargetFinderState_tFED6EAB7D0324D88E902EC9988067C11E8B8C11D 
{
public:
	// System.Int32 Vuforia.TargetFinder/TargetFinderState::IsRequesting
	int32_t ___IsRequesting_0;
	// System.Int32 Vuforia.TargetFinder/TargetFinderState::UpdateState
	int32_t ___UpdateState_1;

public:
	inline static int32_t get_offset_of_IsRequesting_0() { return static_cast<int32_t>(offsetof(TargetFinderState_tFED6EAB7D0324D88E902EC9988067C11E8B8C11D, ___IsRequesting_0)); }
	inline int32_t get_IsRequesting_0() const { return ___IsRequesting_0; }
	inline int32_t* get_address_of_IsRequesting_0() { return &___IsRequesting_0; }
	inline void set_IsRequesting_0(int32_t value)
	{
		___IsRequesting_0 = value;
	}

	inline static int32_t get_offset_of_UpdateState_1() { return static_cast<int32_t>(offsetof(TargetFinderState_tFED6EAB7D0324D88E902EC9988067C11E8B8C11D, ___UpdateState_1)); }
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
#endif // TARGETFINDERSTATE_TFED6EAB7D0324D88E902EC9988067C11E8B8C11D_H
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
#ifndef VIDEOBACKGROUNDSHADERPROPERTY_T162378EC0A889704F1DA266B52C01CF58B875B49_H
#define VIDEOBACKGROUNDSHADERPROPERTY_T162378EC0A889704F1DA266B52C01CF58B875B49_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.VideoBackgroundShaderProperty
struct  VideoBackgroundShaderProperty_t162378EC0A889704F1DA266B52C01CF58B875B49  : public AValidatableVideoBackgroundConfigProperty_t7C670179380AA43CB486E420F6BAB3B08B01F6B4
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VIDEOBACKGROUNDSHADERPROPERTY_T162378EC0A889704F1DA266B52C01CF58B875B49_H
#ifndef VIDEOBACKGROUNDSHADERPROPERTYMIGRATION_TD767C59FBD3971344605D8E2372F2A9AABDE9185_H
#define VIDEOBACKGROUNDSHADERPROPERTYMIGRATION_TD767C59FBD3971344605D8E2372F2A9AABDE9185_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.VideoBackgroundShaderPropertyMigration
struct  VideoBackgroundShaderPropertyMigration_tD767C59FBD3971344605D8E2372F2A9AABDE9185  : public AMigratableVideoBackgroundConfigProperty_tF4F2802B490270693198152EA55FC560C2BB3919
{
public:
	// System.String Vuforia.VideoBackgroundShaderPropertyMigration::mOldShaderName
	String_t* ___mOldShaderName_1;
	// System.String Vuforia.VideoBackgroundShaderPropertyMigration::mNewShaderName
	String_t* ___mNewShaderName_2;

public:
	inline static int32_t get_offset_of_mOldShaderName_1() { return static_cast<int32_t>(offsetof(VideoBackgroundShaderPropertyMigration_tD767C59FBD3971344605D8E2372F2A9AABDE9185, ___mOldShaderName_1)); }
	inline String_t* get_mOldShaderName_1() const { return ___mOldShaderName_1; }
	inline String_t** get_address_of_mOldShaderName_1() { return &___mOldShaderName_1; }
	inline void set_mOldShaderName_1(String_t* value)
	{
		___mOldShaderName_1 = value;
		Il2CppCodeGenWriteBarrier((&___mOldShaderName_1), value);
	}

	inline static int32_t get_offset_of_mNewShaderName_2() { return static_cast<int32_t>(offsetof(VideoBackgroundShaderPropertyMigration_tD767C59FBD3971344605D8E2372F2A9AABDE9185, ___mNewShaderName_2)); }
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
#endif // VIDEOBACKGROUNDSHADERPROPERTYMIGRATION_TD767C59FBD3971344605D8E2372F2A9AABDE9185_H
#ifndef U3CPRIVATEIMPLEMENTATIONDETAILSU3E_TC8332394FBFEEB4B73459A35E182942340DA3537_H
#define U3CPRIVATEIMPLEMENTATIONDETAILSU3E_TC8332394FBFEEB4B73459A35E182942340DA3537_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>
struct  U3CPrivateImplementationDetailsU3E_tC8332394FBFEEB4B73459A35E182942340DA3537  : public RuntimeObject
{
public:

public:
};

struct U3CPrivateImplementationDetailsU3E_tC8332394FBFEEB4B73459A35E182942340DA3537_StaticFields
{
public:
	// <PrivateImplementationDetails>/$ArrayType=12 <PrivateImplementationDetails>::$field-7BBE37982E6C057ED87163CAFC7FD6E5E42EEA46
	U24ArrayTypeU3D12_t25F5D2FC4CFB01F181ED6F7A7F68C39C5D73E199  ___U24fieldU2D7BBE37982E6C057ED87163CAFC7FD6E5E42EEA46_0;

public:
	inline static int32_t get_offset_of_U24fieldU2D7BBE37982E6C057ED87163CAFC7FD6E5E42EEA46_0() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_tC8332394FBFEEB4B73459A35E182942340DA3537_StaticFields, ___U24fieldU2D7BBE37982E6C057ED87163CAFC7FD6E5E42EEA46_0)); }
	inline U24ArrayTypeU3D12_t25F5D2FC4CFB01F181ED6F7A7F68C39C5D73E199  get_U24fieldU2D7BBE37982E6C057ED87163CAFC7FD6E5E42EEA46_0() const { return ___U24fieldU2D7BBE37982E6C057ED87163CAFC7FD6E5E42EEA46_0; }
	inline U24ArrayTypeU3D12_t25F5D2FC4CFB01F181ED6F7A7F68C39C5D73E199 * get_address_of_U24fieldU2D7BBE37982E6C057ED87163CAFC7FD6E5E42EEA46_0() { return &___U24fieldU2D7BBE37982E6C057ED87163CAFC7FD6E5E42EEA46_0; }
	inline void set_U24fieldU2D7BBE37982E6C057ED87163CAFC7FD6E5E42EEA46_0(U24ArrayTypeU3D12_t25F5D2FC4CFB01F181ED6F7A7F68C39C5D73E199  value)
	{
		___U24fieldU2D7BBE37982E6C057ED87163CAFC7FD6E5E42EEA46_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CPRIVATEIMPLEMENTATIONDETAILSU3E_TC8332394FBFEEB4B73459A35E182942340DA3537_H
#ifndef DEPTHTEXTUREMODE_T284833A8AB245ACA7E27BE611BE03B18B0249F01_H
#define DEPTHTEXTUREMODE_T284833A8AB245ACA7E27BE611BE03B18B0249F01_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.DepthTextureMode
struct  DepthTextureMode_t284833A8AB245ACA7E27BE611BE03B18B0249F01 
{
public:
	// System.Int32 UnityEngine.DepthTextureMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DepthTextureMode_t284833A8AB245ACA7E27BE611BE03B18B0249F01, ___value___2)); }
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
#endif // DEPTHTEXTUREMODE_T284833A8AB245ACA7E27BE611BE03B18B0249F01_H
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
#ifndef INPUTRECEIVEDEVENT_T30AD5C108997667B53F1C6C844EF0B80096BD49C_H
#define INPUTRECEIVEDEVENT_T30AD5C108997667B53F1C6C844EF0B80096BD49C_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.AnchorInputListenerBehaviour/InputReceivedEvent
struct  InputReceivedEvent_t30AD5C108997667B53F1C6C844EF0B80096BD49C  : public UnityEvent_1_t88E036FD5956DB491BCC160FA57EF4F9584042B9
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INPUTRECEIVEDEVENT_T30AD5C108997667B53F1C6C844EF0B80096BD49C_H
#ifndef CAMERACALIBRATIONCOMPARER_T7CF72E6611106D56BB040F32DB6D7BFF0898F7EA_H
#define CAMERACALIBRATIONCOMPARER_T7CF72E6611106D56BB040F32DB6D7BFF0898F7EA_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.CameraCalibrationComparer
struct  CameraCalibrationComparer_t7CF72E6611106D56BB040F32DB6D7BFF0898F7EA  : public RuntimeObject
{
public:
	// UnityEngine.Vector4 Vuforia.CameraCalibrationComparer::mLastCameraCalibrationValues
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___mLastCameraCalibrationValues_1;

public:
	inline static int32_t get_offset_of_mLastCameraCalibrationValues_1() { return static_cast<int32_t>(offsetof(CameraCalibrationComparer_t7CF72E6611106D56BB040F32DB6D7BFF0898F7EA, ___mLastCameraCalibrationValues_1)); }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  get_mLastCameraCalibrationValues_1() const { return ___mLastCameraCalibrationValues_1; }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * get_address_of_mLastCameraCalibrationValues_1() { return &___mLastCameraCalibrationValues_1; }
	inline void set_mLastCameraCalibrationValues_1(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  value)
	{
		___mLastCameraCalibrationValues_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CAMERACALIBRATIONCOMPARER_T7CF72E6611106D56BB040F32DB6D7BFF0898F7EA_H
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
#ifndef CONTENTPLACEDEVENT_T6F76CC86D8FF827E64E67C1DB8D770FB7A085997_H
#define CONTENTPLACEDEVENT_T6F76CC86D8FF827E64E67C1DB8D770FB7A085997_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.ContentPlacedEvent
struct  ContentPlacedEvent_t6F76CC86D8FF827E64E67C1DB8D770FB7A085997  : public UnityEvent_1_t257C104996F98E724B7742D8D6AAA98EBEDC82AF
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONTENTPLACEDEVENT_T6F76CC86D8FF827E64E67C1DB8D770FB7A085997_H
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
#ifndef EYEWEARTYPE_T0DF90F97DCCF9F068455C2AF59B1758E89615C13_H
#define EYEWEARTYPE_T0DF90F97DCCF9F068455C2AF59B1758E89615C13_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.DigitalEyewearARController/EyewearType
struct  EyewearType_t0DF90F97DCCF9F068455C2AF59B1758E89615C13 
{
public:
	// System.Int32 Vuforia.DigitalEyewearARController/EyewearType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(EyewearType_t0DF90F97DCCF9F068455C2AF59B1758E89615C13, ___value___2)); }
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
#endif // EYEWEARTYPE_T0DF90F97DCCF9F068455C2AF59B1758E89615C13_H
#ifndef SEETHROUGHCONFIGURATION_TF34F5E33DC51F5EEB23599A905DD112FF00C8E34_H
#define SEETHROUGHCONFIGURATION_TF34F5E33DC51F5EEB23599A905DD112FF00C8E34_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.DigitalEyewearARController/SeeThroughConfiguration
struct  SeeThroughConfiguration_tF34F5E33DC51F5EEB23599A905DD112FF00C8E34 
{
public:
	// System.Int32 Vuforia.DigitalEyewearARController/SeeThroughConfiguration::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SeeThroughConfiguration_tF34F5E33DC51F5EEB23599A905DD112FF00C8E34, ___value___2)); }
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
#endif // SEETHROUGHCONFIGURATION_TF34F5E33DC51F5EEB23599A905DD112FF00C8E34_H
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
#ifndef EYEID_T28F4EC81A49D7B7323B60C35F563D9A2FD226631_H
#define EYEID_T28F4EC81A49D7B7323B60C35F563D9A2FD226631_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.EyewearDevice/EyeID
struct  EyeID_t28F4EC81A49D7B7323B60C35F563D9A2FD226631 
{
public:
	// System.Int32 Vuforia.EyewearDevice/EyeID::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(EyeID_t28F4EC81A49D7B7323B60C35F563D9A2FD226631, ___value___2)); }
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
#endif // EYEID_T28F4EC81A49D7B7323B60C35F563D9A2FD226631_H
#ifndef ALIGNMENTTYPE_TF2C2C7A89AC6F079D5F34A736DC4D5F5BF2C01B8_H
#define ALIGNMENTTYPE_TF2C2C7A89AC6F079D5F34A736DC4D5F5BF2C01B8_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.EyewearDevice/EyewearCalibrationReading/AlignmentType
struct  AlignmentType_tF2C2C7A89AC6F079D5F34A736DC4D5F5BF2C01B8 
{
public:
	// System.Int32 Vuforia.EyewearDevice/EyewearCalibrationReading/AlignmentType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AlignmentType_tF2C2C7A89AC6F079D5F34A736DC4D5F5BF2C01B8, ___value___2)); }
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
#endif // ALIGNMENTTYPE_TF2C2C7A89AC6F079D5F34A736DC4D5F5BF2C01B8_H
#ifndef GUIDEVIEW_T0732A5D3A8536A322937D1E3FB0DF808ED666956_H
#define GUIDEVIEW_T0732A5D3A8536A322937D1E3FB0DF808ED666956_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.GuideView
struct  GuideView_t0732A5D3A8536A322937D1E3FB0DF808ED666956  : public RuntimeObject
{
public:
	// Vuforia.Image Vuforia.GuideView::<Image>k__BackingField
	Image_tDD7214A3062A11DF9F86760338EBB9F105AA4352 * ___U3CImageU3Ek__BackingField_0;
	// System.IntPtr Vuforia.GuideView::mInstancePtr
	intptr_t ___mInstancePtr_1;
	// UnityEngine.Matrix4x4 Vuforia.GuideView::mPose
	Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  ___mPose_2;
	// System.ComponentModel.PropertyChangedEventHandler Vuforia.GuideView::PropertyChanged
	PropertyChangedEventHandler_t617E98E1876A8EB394D2B329340CE02D21FFFC82 * ___PropertyChanged_3;

public:
	inline static int32_t get_offset_of_U3CImageU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(GuideView_t0732A5D3A8536A322937D1E3FB0DF808ED666956, ___U3CImageU3Ek__BackingField_0)); }
	inline Image_tDD7214A3062A11DF9F86760338EBB9F105AA4352 * get_U3CImageU3Ek__BackingField_0() const { return ___U3CImageU3Ek__BackingField_0; }
	inline Image_tDD7214A3062A11DF9F86760338EBB9F105AA4352 ** get_address_of_U3CImageU3Ek__BackingField_0() { return &___U3CImageU3Ek__BackingField_0; }
	inline void set_U3CImageU3Ek__BackingField_0(Image_tDD7214A3062A11DF9F86760338EBB9F105AA4352 * value)
	{
		___U3CImageU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CImageU3Ek__BackingField_0), value);
	}

	inline static int32_t get_offset_of_mInstancePtr_1() { return static_cast<int32_t>(offsetof(GuideView_t0732A5D3A8536A322937D1E3FB0DF808ED666956, ___mInstancePtr_1)); }
	inline intptr_t get_mInstancePtr_1() const { return ___mInstancePtr_1; }
	inline intptr_t* get_address_of_mInstancePtr_1() { return &___mInstancePtr_1; }
	inline void set_mInstancePtr_1(intptr_t value)
	{
		___mInstancePtr_1 = value;
	}

	inline static int32_t get_offset_of_mPose_2() { return static_cast<int32_t>(offsetof(GuideView_t0732A5D3A8536A322937D1E3FB0DF808ED666956, ___mPose_2)); }
	inline Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  get_mPose_2() const { return ___mPose_2; }
	inline Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA * get_address_of_mPose_2() { return &___mPose_2; }
	inline void set_mPose_2(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  value)
	{
		___mPose_2 = value;
	}

	inline static int32_t get_offset_of_PropertyChanged_3() { return static_cast<int32_t>(offsetof(GuideView_t0732A5D3A8536A322937D1E3FB0DF808ED666956, ___PropertyChanged_3)); }
	inline PropertyChangedEventHandler_t617E98E1876A8EB394D2B329340CE02D21FFFC82 * get_PropertyChanged_3() const { return ___PropertyChanged_3; }
	inline PropertyChangedEventHandler_t617E98E1876A8EB394D2B329340CE02D21FFFC82 ** get_address_of_PropertyChanged_3() { return &___PropertyChanged_3; }
	inline void set_PropertyChanged_3(PropertyChangedEventHandler_t617E98E1876A8EB394D2B329340CE02D21FFFC82 * value)
	{
		___PropertyChanged_3 = value;
		Il2CppCodeGenWriteBarrier((&___PropertyChanged_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GUIDEVIEW_T0732A5D3A8536A322937D1E3FB0DF808ED666956_H
#ifndef HITTESTEVENT_T63AB9C2D85E4DB67BA4AEF13B8E65862E90FED4F_H
#define HITTESTEVENT_T63AB9C2D85E4DB67BA4AEF13B8E65862E90FED4F_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.HitTestEvent
struct  HitTestEvent_t63AB9C2D85E4DB67BA4AEF13B8E65862E90FED4F  : public UnityEvent_1_t829D31AB9F9A4E0C21C8062405B1EF98DDD81ADE
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HITTESTEVENT_T63AB9C2D85E4DB67BA4AEF13B8E65862E90FED4F_H
#ifndef HITTESTMODE_TA27F6512F1F271CA16946F6B0D654F766469973B_H
#define HITTESTMODE_TA27F6512F1F271CA16946F6B0D654F766469973B_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.HitTestMode
struct  HitTestMode_tA27F6512F1F271CA16946F6B0D654F766469973B 
{
public:
	// System.Int32 Vuforia.HitTestMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(HitTestMode_tA27F6512F1F271CA16946F6B0D654F766469973B, ___value___2)); }
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
#endif // HITTESTMODE_TA27F6512F1F271CA16946F6B0D654F766469973B_H
#ifndef HITTESTRESULT_T53FC02E2A830035AD9ED88C46D9975FD1B5C59DE_H
#define HITTESTRESULT_T53FC02E2A830035AD9ED88C46D9975FD1B5C59DE_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.HitTestResult
struct  HitTestResult_t53FC02E2A830035AD9ED88C46D9975FD1B5C59DE  : public RuntimeObject
{
public:
	// System.IntPtr Vuforia.HitTestResult::mPtr
	intptr_t ___mPtr_0;
	// UnityEngine.Vector3 Vuforia.HitTestResult::mPosition
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___mPosition_1;
	// UnityEngine.Quaternion Vuforia.HitTestResult::mOrientation
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___mOrientation_2;

public:
	inline static int32_t get_offset_of_mPtr_0() { return static_cast<int32_t>(offsetof(HitTestResult_t53FC02E2A830035AD9ED88C46D9975FD1B5C59DE, ___mPtr_0)); }
	inline intptr_t get_mPtr_0() const { return ___mPtr_0; }
	inline intptr_t* get_address_of_mPtr_0() { return &___mPtr_0; }
	inline void set_mPtr_0(intptr_t value)
	{
		___mPtr_0 = value;
	}

	inline static int32_t get_offset_of_mPosition_1() { return static_cast<int32_t>(offsetof(HitTestResult_t53FC02E2A830035AD9ED88C46D9975FD1B5C59DE, ___mPosition_1)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_mPosition_1() const { return ___mPosition_1; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_mPosition_1() { return &___mPosition_1; }
	inline void set_mPosition_1(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___mPosition_1 = value;
	}

	inline static int32_t get_offset_of_mOrientation_2() { return static_cast<int32_t>(offsetof(HitTestResult_t53FC02E2A830035AD9ED88C46D9975FD1B5C59DE, ___mOrientation_2)); }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  get_mOrientation_2() const { return ___mOrientation_2; }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * get_address_of_mOrientation_2() { return &___mOrientation_2; }
	inline void set_mOrientation_2(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  value)
	{
		___mOrientation_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HITTESTRESULT_T53FC02E2A830035AD9ED88C46D9975FD1B5C59DE_H
#ifndef HITTESTRESULTDATA_T67DDE76CFB43E7C2EF3EA7CA447F2F66C0201FE3_H
#define HITTESTRESULTDATA_T67DDE76CFB43E7C2EF3EA7CA447F2F66C0201FE3_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.HitTestResultData
struct  HitTestResultData_t67DDE76CFB43E7C2EF3EA7CA447F2F66C0201FE3 
{
public:
	// System.IntPtr Vuforia.HitTestResultData::HitTestResultPtr
	intptr_t ___HitTestResultPtr_0;
	// System.Single[] Vuforia.HitTestResultData::Orientation
	SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* ___Orientation_1;
	// System.Single[] Vuforia.HitTestResultData::Position
	SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* ___Position_2;
	// System.Single Vuforia.HitTestResultData::Unused
	float ___Unused_3;

public:
	inline static int32_t get_offset_of_HitTestResultPtr_0() { return static_cast<int32_t>(offsetof(HitTestResultData_t67DDE76CFB43E7C2EF3EA7CA447F2F66C0201FE3, ___HitTestResultPtr_0)); }
	inline intptr_t get_HitTestResultPtr_0() const { return ___HitTestResultPtr_0; }
	inline intptr_t* get_address_of_HitTestResultPtr_0() { return &___HitTestResultPtr_0; }
	inline void set_HitTestResultPtr_0(intptr_t value)
	{
		___HitTestResultPtr_0 = value;
	}

	inline static int32_t get_offset_of_Orientation_1() { return static_cast<int32_t>(offsetof(HitTestResultData_t67DDE76CFB43E7C2EF3EA7CA447F2F66C0201FE3, ___Orientation_1)); }
	inline SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* get_Orientation_1() const { return ___Orientation_1; }
	inline SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5** get_address_of_Orientation_1() { return &___Orientation_1; }
	inline void set_Orientation_1(SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* value)
	{
		___Orientation_1 = value;
		Il2CppCodeGenWriteBarrier((&___Orientation_1), value);
	}

	inline static int32_t get_offset_of_Position_2() { return static_cast<int32_t>(offsetof(HitTestResultData_t67DDE76CFB43E7C2EF3EA7CA447F2F66C0201FE3, ___Position_2)); }
	inline SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* get_Position_2() const { return ___Position_2; }
	inline SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5** get_address_of_Position_2() { return &___Position_2; }
	inline void set_Position_2(SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* value)
	{
		___Position_2 = value;
		Il2CppCodeGenWriteBarrier((&___Position_2), value);
	}

	inline static int32_t get_offset_of_Unused_3() { return static_cast<int32_t>(offsetof(HitTestResultData_t67DDE76CFB43E7C2EF3EA7CA447F2F66C0201FE3, ___Unused_3)); }
	inline float get_Unused_3() const { return ___Unused_3; }
	inline float* get_address_of_Unused_3() { return &___Unused_3; }
	inline void set_Unused_3(float value)
	{
		___Unused_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of Vuforia.HitTestResultData
#pragma pack(push, tp, 1)
struct HitTestResultData_t67DDE76CFB43E7C2EF3EA7CA447F2F66C0201FE3_marshaled_pinvoke
{
	intptr_t ___HitTestResultPtr_0;
	float ___Orientation_1[4];
	float ___Position_2[3];
	float ___Unused_3;
};
#pragma pack(pop, tp)
// Native definition for COM marshalling of Vuforia.HitTestResultData
#pragma pack(push, tp, 1)
struct HitTestResultData_t67DDE76CFB43E7C2EF3EA7CA447F2F66C0201FE3_marshaled_com
{
	intptr_t ___HitTestResultPtr_0;
	float ___Orientation_1[4];
	float ___Position_2[3];
	float ___Unused_3;
};
#pragma pack(pop, tp)
#endif // HITTESTRESULTDATA_T67DDE76CFB43E7C2EF3EA7CA447F2F66C0201FE3_H
#ifndef ILLUMINATIONMANAGER_T20764D05A4DA19AE6C1CADF24630DEFC5B59E296_H
#define ILLUMINATIONMANAGER_T20764D05A4DA19AE6C1CADF24630DEFC5B59E296_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.IlluminationManager
struct  IlluminationManager_t20764D05A4DA19AE6C1CADF24630DEFC5B59E296  : public RuntimeObject
{
public:
	// Vuforia.TrackerData/IlluminationData Vuforia.IlluminationManager::mIlluminationData
	IlluminationData_tD92AC3353F4A03A75AC592B597C88238195BF12C  ___mIlluminationData_1;

public:
	inline static int32_t get_offset_of_mIlluminationData_1() { return static_cast<int32_t>(offsetof(IlluminationManager_t20764D05A4DA19AE6C1CADF24630DEFC5B59E296, ___mIlluminationData_1)); }
	inline IlluminationData_tD92AC3353F4A03A75AC592B597C88238195BF12C  get_mIlluminationData_1() const { return ___mIlluminationData_1; }
	inline IlluminationData_tD92AC3353F4A03A75AC592B597C88238195BF12C * get_address_of_mIlluminationData_1() { return &___mIlluminationData_1; }
	inline void set_mIlluminationData_1(IlluminationData_tD92AC3353F4A03A75AC592B597C88238195BF12C  value)
	{
		___mIlluminationData_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ILLUMINATIONMANAGER_T20764D05A4DA19AE6C1CADF24630DEFC5B59E296_H
#ifndef ANCHORPOSITIONCONFIRMEDEVENT_T63B8BA26EFA42FC76914E18C5AF9E3E9223B5093_H
#define ANCHORPOSITIONCONFIRMEDEVENT_T63B8BA26EFA42FC76914E18C5AF9E3E9223B5093_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.MidAirPositionerBehaviour/AnchorPositionConfirmedEvent
struct  AnchorPositionConfirmedEvent_t63B8BA26EFA42FC76914E18C5AF9E3E9223B5093  : public UnityEvent_1_tD15FCA738F4102B872C1480A6678ED16A8A51845
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ANCHORPOSITIONCONFIRMEDEVENT_T63B8BA26EFA42FC76914E18C5AF9E3E9223B5093_H
#ifndef GUIDEVIEWDISPLAYMODE_T88D0866B25C697FC57941C3608F5C0C58928533D_H
#define GUIDEVIEWDISPLAYMODE_T88D0866B25C697FC57941C3608F5C0C58928533D_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.ModelTargetBehaviour/GuideViewDisplayMode
struct  GuideViewDisplayMode_t88D0866B25C697FC57941C3608F5C0C58928533D 
{
public:
	// System.Int32 Vuforia.ModelTargetBehaviour/GuideViewDisplayMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(GuideViewDisplayMode_t88D0866B25C697FC57941C3608F5C0C58928533D, ___value___2)); }
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
#endif // GUIDEVIEWDISPLAYMODE_T88D0866B25C697FC57941C3608F5C0C58928533D_H
#ifndef MODELTARGETTYPE_T7AA8F7B8F72074404180E971F6F4AE2CEBB26CD6_H
#define MODELTARGETTYPE_T7AA8F7B8F72074404180E971F6F4AE2CEBB26CD6_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.ModelTargetType
struct  ModelTargetType_t7AA8F7B8F72074404180E971F6F4AE2CEBB26CD6 
{
public:
	// System.Int32 Vuforia.ModelTargetType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ModelTargetType_t7AA8F7B8F72074404180E971F6F4AE2CEBB26CD6, ___value___2)); }
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
#endif // MODELTARGETTYPE_T7AA8F7B8F72074404180E971F6F4AE2CEBB26CD6_H
#ifndef PLANESHIDEEXCESSAREACLIPPING_T5F23A579A8417B65BE4ED09DCE98118228E85B68_H
#define PLANESHIDEEXCESSAREACLIPPING_T5F23A579A8417B65BE4ED09DCE98118228E85B68_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.PlanesHideExcessAreaClipping
struct  PlanesHideExcessAreaClipping_t5F23A579A8417B65BE4ED09DCE98118228E85B68  : public RuntimeObject
{
public:
	// UnityEngine.Shader Vuforia.PlanesHideExcessAreaClipping::mMatteShader
	Shader_tE2731FF351B74AB4186897484FB01E000C1160CA * ___mMatteShader_1;
	// UnityEngine.GameObject[] Vuforia.PlanesHideExcessAreaClipping::mClippingPlanes
	GameObjectU5BU5D_t30E337C5B5FBBCBAEDAF4093924D916CF2944067* ___mClippingPlanes_2;
	// System.Boolean Vuforia.PlanesHideExcessAreaClipping::mPlanesActivated
	bool ___mPlanesActivated_3;
	// UnityEngine.Vector2 Vuforia.PlanesHideExcessAreaClipping::mClippingScale
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___mClippingScale_4;

public:
	inline static int32_t get_offset_of_mMatteShader_1() { return static_cast<int32_t>(offsetof(PlanesHideExcessAreaClipping_t5F23A579A8417B65BE4ED09DCE98118228E85B68, ___mMatteShader_1)); }
	inline Shader_tE2731FF351B74AB4186897484FB01E000C1160CA * get_mMatteShader_1() const { return ___mMatteShader_1; }
	inline Shader_tE2731FF351B74AB4186897484FB01E000C1160CA ** get_address_of_mMatteShader_1() { return &___mMatteShader_1; }
	inline void set_mMatteShader_1(Shader_tE2731FF351B74AB4186897484FB01E000C1160CA * value)
	{
		___mMatteShader_1 = value;
		Il2CppCodeGenWriteBarrier((&___mMatteShader_1), value);
	}

	inline static int32_t get_offset_of_mClippingPlanes_2() { return static_cast<int32_t>(offsetof(PlanesHideExcessAreaClipping_t5F23A579A8417B65BE4ED09DCE98118228E85B68, ___mClippingPlanes_2)); }
	inline GameObjectU5BU5D_t30E337C5B5FBBCBAEDAF4093924D916CF2944067* get_mClippingPlanes_2() const { return ___mClippingPlanes_2; }
	inline GameObjectU5BU5D_t30E337C5B5FBBCBAEDAF4093924D916CF2944067** get_address_of_mClippingPlanes_2() { return &___mClippingPlanes_2; }
	inline void set_mClippingPlanes_2(GameObjectU5BU5D_t30E337C5B5FBBCBAEDAF4093924D916CF2944067* value)
	{
		___mClippingPlanes_2 = value;
		Il2CppCodeGenWriteBarrier((&___mClippingPlanes_2), value);
	}

	inline static int32_t get_offset_of_mPlanesActivated_3() { return static_cast<int32_t>(offsetof(PlanesHideExcessAreaClipping_t5F23A579A8417B65BE4ED09DCE98118228E85B68, ___mPlanesActivated_3)); }
	inline bool get_mPlanesActivated_3() const { return ___mPlanesActivated_3; }
	inline bool* get_address_of_mPlanesActivated_3() { return &___mPlanesActivated_3; }
	inline void set_mPlanesActivated_3(bool value)
	{
		___mPlanesActivated_3 = value;
	}

	inline static int32_t get_offset_of_mClippingScale_4() { return static_cast<int32_t>(offsetof(PlanesHideExcessAreaClipping_t5F23A579A8417B65BE4ED09DCE98118228E85B68, ___mClippingScale_4)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_mClippingScale_4() const { return ___mClippingScale_4; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_mClippingScale_4() { return &___mClippingScale_4; }
	inline void set_mClippingScale_4(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___mClippingScale_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLANESHIDEEXCESSAREACLIPPING_T5F23A579A8417B65BE4ED09DCE98118228E85B68_H
#ifndef PLANEPOS_T60098A513ADA4FA8AD54484DDD6B887538E53E3A_H
#define PLANEPOS_T60098A513ADA4FA8AD54484DDD6B887538E53E3A_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.PlanesHideExcessAreaClipping/PlanePos
struct  PlanePos_t60098A513ADA4FA8AD54484DDD6B887538E53E3A 
{
public:
	// System.Int32 Vuforia.PlanesHideExcessAreaClipping/PlanePos::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PlanePos_t60098A513ADA4FA8AD54484DDD6B887538E53E3A, ___value___2)); }
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
#endif // PLANEPOS_T60098A513ADA4FA8AD54484DDD6B887538E53E3A_H
#ifndef PLAYMODESMARTTERRAINIMPL_TFC4B251FFDB1C30DC842D1422F07BD37CCCF8C8B_H
#define PLAYMODESMARTTERRAINIMPL_TFC4B251FFDB1C30DC842D1422F07BD37CCCF8C8B_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.PlaymodeSmartTerrainImpl
struct  PlaymodeSmartTerrainImpl_tFC4B251FFDB1C30DC842D1422F07BD37CCCF8C8B  : public SmartTerrain_t09E2ED8DC63BA7169F0DCDCC1BA4419BDB878E47
{
public:
	// UnityEngine.Vector3 Vuforia.PlaymodeSmartTerrainImpl::mEmulatorPlaneSize
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___mEmulatorPlaneSize_3;
	// UnityEngine.GameObject Vuforia.PlaymodeSmartTerrainImpl::mEmulatorGroundPlane
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___mEmulatorGroundPlane_4;
	// UnityEngine.GameObject Vuforia.PlaymodeSmartTerrainImpl::mGroundPlaneImageTarget
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___mGroundPlaneImageTarget_5;

public:
	inline static int32_t get_offset_of_mEmulatorPlaneSize_3() { return static_cast<int32_t>(offsetof(PlaymodeSmartTerrainImpl_tFC4B251FFDB1C30DC842D1422F07BD37CCCF8C8B, ___mEmulatorPlaneSize_3)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_mEmulatorPlaneSize_3() const { return ___mEmulatorPlaneSize_3; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_mEmulatorPlaneSize_3() { return &___mEmulatorPlaneSize_3; }
	inline void set_mEmulatorPlaneSize_3(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___mEmulatorPlaneSize_3 = value;
	}

	inline static int32_t get_offset_of_mEmulatorGroundPlane_4() { return static_cast<int32_t>(offsetof(PlaymodeSmartTerrainImpl_tFC4B251FFDB1C30DC842D1422F07BD37CCCF8C8B, ___mEmulatorGroundPlane_4)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_mEmulatorGroundPlane_4() const { return ___mEmulatorGroundPlane_4; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_mEmulatorGroundPlane_4() { return &___mEmulatorGroundPlane_4; }
	inline void set_mEmulatorGroundPlane_4(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___mEmulatorGroundPlane_4 = value;
		Il2CppCodeGenWriteBarrier((&___mEmulatorGroundPlane_4), value);
	}

	inline static int32_t get_offset_of_mGroundPlaneImageTarget_5() { return static_cast<int32_t>(offsetof(PlaymodeSmartTerrainImpl_tFC4B251FFDB1C30DC842D1422F07BD37CCCF8C8B, ___mGroundPlaneImageTarget_5)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_mGroundPlaneImageTarget_5() const { return ___mGroundPlaneImageTarget_5; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_mGroundPlaneImageTarget_5() { return &___mGroundPlaneImageTarget_5; }
	inline void set_mGroundPlaneImageTarget_5(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___mGroundPlaneImageTarget_5 = value;
		Il2CppCodeGenWriteBarrier((&___mGroundPlaneImageTarget_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYMODESMARTTERRAINIMPL_TFC4B251FFDB1C30DC842D1422F07BD37CCCF8C8B_H
#ifndef POSITIONALDEVICETRACKER_TEFAA5FDB9CF19DA74081AE51B41B4B5D9F40D8EE_H
#define POSITIONALDEVICETRACKER_TEFAA5FDB9CF19DA74081AE51B41B4B5D9F40D8EE_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.PositionalDeviceTracker
struct  PositionalDeviceTracker_tEFAA5FDB9CF19DA74081AE51B41B4B5D9F40D8EE  : public DeviceTracker_tD6E28B77342C2CBE99C14112AFA51C0798EC3086
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // POSITIONALDEVICETRACKER_TEFAA5FDB9CF19DA74081AE51B41B4B5D9F40D8EE_H
#ifndef STATE_T3FDFF603F7E24F1BA6D3159D9F4CC7E1B4F8F4CE_H
#define STATE_T3FDFF603F7E24F1BA6D3159D9F4CC7E1B4F8F4CE_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.SmartTerrainARController/State
struct  State_t3FDFF603F7E24F1BA6D3159D9F4CC7E1B4F8F4CE 
{
public:
	// System.Int32 Vuforia.SmartTerrainARController/State::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(State_t3FDFF603F7E24F1BA6D3159D9F4CC7E1B4F8F4CE, ___value___2)); }
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
#endif // STATE_T3FDFF603F7E24F1BA6D3159D9F4CC7E1B4F8F4CE_H
#ifndef STAGETYPE_T365B0DEB2DCA1C8053A874CB86AAA2AD99C93AC6_H
#define STAGETYPE_T365B0DEB2DCA1C8053A874CB86AAA2AD99C93AC6_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.StageType
struct  StageType_t365B0DEB2DCA1C8053A874CB86AAA2AD99C93AC6 
{
public:
	// System.Int32 Vuforia.StageType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(StageType_t365B0DEB2DCA1C8053A874CB86AAA2AD99C93AC6, ___value___2)); }
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
#endif // STAGETYPE_T365B0DEB2DCA1C8053A874CB86AAA2AD99C93AC6_H
#ifndef MODE_TFAC11BEAD3F06C10D033DA80E27982CADB4008C8_H
#define MODE_TFAC11BEAD3F06C10D033DA80E27982CADB4008C8_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.StereoProjMatrixStore/Mode
struct  Mode_tFAC11BEAD3F06C10D033DA80E27982CADB4008C8 
{
public:
	// System.Int32 Vuforia.StereoProjMatrixStore/Mode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Mode_tFAC11BEAD3F06C10D033DA80E27982CADB4008C8, ___value___2)); }
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
#endif // MODE_TFAC11BEAD3F06C10D033DA80E27982CADB4008C8_H
#ifndef TARGETFINDER_T2AFA3E4A66C461FA522FE35048DB093003A7B1AC_H
#define TARGETFINDER_T2AFA3E4A66C461FA522FE35048DB093003A7B1AC_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.TargetFinder
struct  TargetFinder_t2AFA3E4A66C461FA522FE35048DB093003A7B1AC  : public RuntimeObject
{
public:
	// System.IntPtr Vuforia.TargetFinder::mTargetFinderPtr
	intptr_t ___mTargetFinderPtr_0;
	// System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.ObjectTarget> Vuforia.TargetFinder::mTargets
	Dictionary_2_t38214185C816F7C6D37D4A288F828447EFA5BF63 * ___mTargets_1;
	// System.IntPtr Vuforia.TargetFinder::mTargetFinderStatePtr
	intptr_t ___mTargetFinderStatePtr_2;
	// Vuforia.TargetFinder/TargetFinderState Vuforia.TargetFinder::mTargetFinderState
	TargetFinderState_tFED6EAB7D0324D88E902EC9988067C11E8B8C11D  ___mTargetFinderState_3;
	// System.Collections.Generic.List`1<Vuforia.TargetFinder/TargetSearchResult> Vuforia.TargetFinder::mNewResults
	List_1_t9F47B63E854EC1B276E04B3C907EA6E9B9A2C619 * ___mNewResults_4;

public:
	inline static int32_t get_offset_of_mTargetFinderPtr_0() { return static_cast<int32_t>(offsetof(TargetFinder_t2AFA3E4A66C461FA522FE35048DB093003A7B1AC, ___mTargetFinderPtr_0)); }
	inline intptr_t get_mTargetFinderPtr_0() const { return ___mTargetFinderPtr_0; }
	inline intptr_t* get_address_of_mTargetFinderPtr_0() { return &___mTargetFinderPtr_0; }
	inline void set_mTargetFinderPtr_0(intptr_t value)
	{
		___mTargetFinderPtr_0 = value;
	}

	inline static int32_t get_offset_of_mTargets_1() { return static_cast<int32_t>(offsetof(TargetFinder_t2AFA3E4A66C461FA522FE35048DB093003A7B1AC, ___mTargets_1)); }
	inline Dictionary_2_t38214185C816F7C6D37D4A288F828447EFA5BF63 * get_mTargets_1() const { return ___mTargets_1; }
	inline Dictionary_2_t38214185C816F7C6D37D4A288F828447EFA5BF63 ** get_address_of_mTargets_1() { return &___mTargets_1; }
	inline void set_mTargets_1(Dictionary_2_t38214185C816F7C6D37D4A288F828447EFA5BF63 * value)
	{
		___mTargets_1 = value;
		Il2CppCodeGenWriteBarrier((&___mTargets_1), value);
	}

	inline static int32_t get_offset_of_mTargetFinderStatePtr_2() { return static_cast<int32_t>(offsetof(TargetFinder_t2AFA3E4A66C461FA522FE35048DB093003A7B1AC, ___mTargetFinderStatePtr_2)); }
	inline intptr_t get_mTargetFinderStatePtr_2() const { return ___mTargetFinderStatePtr_2; }
	inline intptr_t* get_address_of_mTargetFinderStatePtr_2() { return &___mTargetFinderStatePtr_2; }
	inline void set_mTargetFinderStatePtr_2(intptr_t value)
	{
		___mTargetFinderStatePtr_2 = value;
	}

	inline static int32_t get_offset_of_mTargetFinderState_3() { return static_cast<int32_t>(offsetof(TargetFinder_t2AFA3E4A66C461FA522FE35048DB093003A7B1AC, ___mTargetFinderState_3)); }
	inline TargetFinderState_tFED6EAB7D0324D88E902EC9988067C11E8B8C11D  get_mTargetFinderState_3() const { return ___mTargetFinderState_3; }
	inline TargetFinderState_tFED6EAB7D0324D88E902EC9988067C11E8B8C11D * get_address_of_mTargetFinderState_3() { return &___mTargetFinderState_3; }
	inline void set_mTargetFinderState_3(TargetFinderState_tFED6EAB7D0324D88E902EC9988067C11E8B8C11D  value)
	{
		___mTargetFinderState_3 = value;
	}

	inline static int32_t get_offset_of_mNewResults_4() { return static_cast<int32_t>(offsetof(TargetFinder_t2AFA3E4A66C461FA522FE35048DB093003A7B1AC, ___mNewResults_4)); }
	inline List_1_t9F47B63E854EC1B276E04B3C907EA6E9B9A2C619 * get_mNewResults_4() const { return ___mNewResults_4; }
	inline List_1_t9F47B63E854EC1B276E04B3C907EA6E9B9A2C619 ** get_address_of_mNewResults_4() { return &___mNewResults_4; }
	inline void set_mNewResults_4(List_1_t9F47B63E854EC1B276E04B3C907EA6E9B9A2C619 * value)
	{
		___mNewResults_4 = value;
		Il2CppCodeGenWriteBarrier((&___mNewResults_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TARGETFINDER_T2AFA3E4A66C461FA522FE35048DB093003A7B1AC_H
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
#ifndef WORLDCENTERMODE_T53E1430BD989A54F75332A2DA9D61C93545897E6_H
#define WORLDCENTERMODE_T53E1430BD989A54F75332A2DA9D61C93545897E6_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.VuforiaARController/WorldCenterMode
struct  WorldCenterMode_t53E1430BD989A54F75332A2DA9D61C93545897E6 
{
public:
	// System.Int32 Vuforia.VuforiaARController/WorldCenterMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(WorldCenterMode_t53E1430BD989A54F75332A2DA9D61C93545897E6, ___value___2)); }
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
#endif // WORLDCENTERMODE_T53E1430BD989A54F75332A2DA9D61C93545897E6_H
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
#ifndef DIGITALEYEWEARARCONTROLLER_T973FDCC2DBCE328656150191FBC1A0E49189D9E4_H
#define DIGITALEYEWEARARCONTROLLER_T973FDCC2DBCE328656150191FBC1A0E49189D9E4_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.DigitalEyewearARController
struct  DigitalEyewearARController_t973FDCC2DBCE328656150191FBC1A0E49189D9E4  : public ARController_tBCF5CBE22AE2AD3FF6DCAC88E78FF7C929D91293
{
public:
	// System.Single Vuforia.DigitalEyewearARController::mCameraOffset
	float ___mCameraOffset_5;
	// System.Int32 Vuforia.DigitalEyewearARController::mDistortionRenderingLayer
	int32_t ___mDistortionRenderingLayer_6;
	// Vuforia.DigitalEyewearARController/EyewearType Vuforia.DigitalEyewearARController::mEyewearType
	int32_t ___mEyewearType_7;
	// Vuforia.DigitalEyewearARController/StereoFramework Vuforia.DigitalEyewearARController::mStereoFramework
	int32_t ___mStereoFramework_8;
	// Vuforia.DigitalEyewearARController/SeeThroughConfiguration Vuforia.DigitalEyewearARController::mSeeThroughConfiguration
	int32_t ___mSeeThroughConfiguration_9;
	// System.String Vuforia.DigitalEyewearARController::mViewerName
	String_t* ___mViewerName_10;
	// System.String Vuforia.DigitalEyewearARController::mViewerManufacturer
	String_t* ___mViewerManufacturer_11;
	// System.Boolean Vuforia.DigitalEyewearARController::mUseCustomViewer
	bool ___mUseCustomViewer_12;
	// Vuforia.DigitalEyewearARController/SerializableViewerParameters Vuforia.DigitalEyewearARController::mCustomViewer
	SerializableViewerParameters_t5F6E8C8CE0B55CCA2E3AC93018053A78AAD5DBE9 * ___mCustomViewer_13;
	// UnityEngine.Transform Vuforia.DigitalEyewearARController::mCentralAnchorPoint
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___mCentralAnchorPoint_14;
	// UnityEngine.Camera Vuforia.DigitalEyewearARController::mPrimaryCamera
	Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * ___mPrimaryCamera_15;
	// Vuforia.VuforiaARController Vuforia.DigitalEyewearARController::mVuforiaBehaviour
	VuforiaARController_t7732FFB77105A2F5BBEA40E3CECC5C15DA624876 * ___mVuforiaBehaviour_16;
	// System.Boolean Vuforia.DigitalEyewearARController::mSetFocusPlaneAutomatically
	bool ___mSetFocusPlaneAutomatically_17;
	// Vuforia.VRDeviceController Vuforia.DigitalEyewearARController::mVRDeviceController
	VRDeviceController_tDFB2A6DE022256FD695E024050B1F3A07B97D044 * ___mVRDeviceController_18;
	// UnityEngine.Vector3 Vuforia.DigitalEyewearARController::mCamPositionAtSceneStart
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___mCamPositionAtSceneStart_19;
	// UnityEngine.Quaternion Vuforia.DigitalEyewearARController::mCamRotationAtSceneStart
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___mCamRotationAtSceneStart_20;

public:
	inline static int32_t get_offset_of_mCameraOffset_5() { return static_cast<int32_t>(offsetof(DigitalEyewearARController_t973FDCC2DBCE328656150191FBC1A0E49189D9E4, ___mCameraOffset_5)); }
	inline float get_mCameraOffset_5() const { return ___mCameraOffset_5; }
	inline float* get_address_of_mCameraOffset_5() { return &___mCameraOffset_5; }
	inline void set_mCameraOffset_5(float value)
	{
		___mCameraOffset_5 = value;
	}

	inline static int32_t get_offset_of_mDistortionRenderingLayer_6() { return static_cast<int32_t>(offsetof(DigitalEyewearARController_t973FDCC2DBCE328656150191FBC1A0E49189D9E4, ___mDistortionRenderingLayer_6)); }
	inline int32_t get_mDistortionRenderingLayer_6() const { return ___mDistortionRenderingLayer_6; }
	inline int32_t* get_address_of_mDistortionRenderingLayer_6() { return &___mDistortionRenderingLayer_6; }
	inline void set_mDistortionRenderingLayer_6(int32_t value)
	{
		___mDistortionRenderingLayer_6 = value;
	}

	inline static int32_t get_offset_of_mEyewearType_7() { return static_cast<int32_t>(offsetof(DigitalEyewearARController_t973FDCC2DBCE328656150191FBC1A0E49189D9E4, ___mEyewearType_7)); }
	inline int32_t get_mEyewearType_7() const { return ___mEyewearType_7; }
	inline int32_t* get_address_of_mEyewearType_7() { return &___mEyewearType_7; }
	inline void set_mEyewearType_7(int32_t value)
	{
		___mEyewearType_7 = value;
	}

	inline static int32_t get_offset_of_mStereoFramework_8() { return static_cast<int32_t>(offsetof(DigitalEyewearARController_t973FDCC2DBCE328656150191FBC1A0E49189D9E4, ___mStereoFramework_8)); }
	inline int32_t get_mStereoFramework_8() const { return ___mStereoFramework_8; }
	inline int32_t* get_address_of_mStereoFramework_8() { return &___mStereoFramework_8; }
	inline void set_mStereoFramework_8(int32_t value)
	{
		___mStereoFramework_8 = value;
	}

	inline static int32_t get_offset_of_mSeeThroughConfiguration_9() { return static_cast<int32_t>(offsetof(DigitalEyewearARController_t973FDCC2DBCE328656150191FBC1A0E49189D9E4, ___mSeeThroughConfiguration_9)); }
	inline int32_t get_mSeeThroughConfiguration_9() const { return ___mSeeThroughConfiguration_9; }
	inline int32_t* get_address_of_mSeeThroughConfiguration_9() { return &___mSeeThroughConfiguration_9; }
	inline void set_mSeeThroughConfiguration_9(int32_t value)
	{
		___mSeeThroughConfiguration_9 = value;
	}

	inline static int32_t get_offset_of_mViewerName_10() { return static_cast<int32_t>(offsetof(DigitalEyewearARController_t973FDCC2DBCE328656150191FBC1A0E49189D9E4, ___mViewerName_10)); }
	inline String_t* get_mViewerName_10() const { return ___mViewerName_10; }
	inline String_t** get_address_of_mViewerName_10() { return &___mViewerName_10; }
	inline void set_mViewerName_10(String_t* value)
	{
		___mViewerName_10 = value;
		Il2CppCodeGenWriteBarrier((&___mViewerName_10), value);
	}

	inline static int32_t get_offset_of_mViewerManufacturer_11() { return static_cast<int32_t>(offsetof(DigitalEyewearARController_t973FDCC2DBCE328656150191FBC1A0E49189D9E4, ___mViewerManufacturer_11)); }
	inline String_t* get_mViewerManufacturer_11() const { return ___mViewerManufacturer_11; }
	inline String_t** get_address_of_mViewerManufacturer_11() { return &___mViewerManufacturer_11; }
	inline void set_mViewerManufacturer_11(String_t* value)
	{
		___mViewerManufacturer_11 = value;
		Il2CppCodeGenWriteBarrier((&___mViewerManufacturer_11), value);
	}

	inline static int32_t get_offset_of_mUseCustomViewer_12() { return static_cast<int32_t>(offsetof(DigitalEyewearARController_t973FDCC2DBCE328656150191FBC1A0E49189D9E4, ___mUseCustomViewer_12)); }
	inline bool get_mUseCustomViewer_12() const { return ___mUseCustomViewer_12; }
	inline bool* get_address_of_mUseCustomViewer_12() { return &___mUseCustomViewer_12; }
	inline void set_mUseCustomViewer_12(bool value)
	{
		___mUseCustomViewer_12 = value;
	}

	inline static int32_t get_offset_of_mCustomViewer_13() { return static_cast<int32_t>(offsetof(DigitalEyewearARController_t973FDCC2DBCE328656150191FBC1A0E49189D9E4, ___mCustomViewer_13)); }
	inline SerializableViewerParameters_t5F6E8C8CE0B55CCA2E3AC93018053A78AAD5DBE9 * get_mCustomViewer_13() const { return ___mCustomViewer_13; }
	inline SerializableViewerParameters_t5F6E8C8CE0B55CCA2E3AC93018053A78AAD5DBE9 ** get_address_of_mCustomViewer_13() { return &___mCustomViewer_13; }
	inline void set_mCustomViewer_13(SerializableViewerParameters_t5F6E8C8CE0B55CCA2E3AC93018053A78AAD5DBE9 * value)
	{
		___mCustomViewer_13 = value;
		Il2CppCodeGenWriteBarrier((&___mCustomViewer_13), value);
	}

	inline static int32_t get_offset_of_mCentralAnchorPoint_14() { return static_cast<int32_t>(offsetof(DigitalEyewearARController_t973FDCC2DBCE328656150191FBC1A0E49189D9E4, ___mCentralAnchorPoint_14)); }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * get_mCentralAnchorPoint_14() const { return ___mCentralAnchorPoint_14; }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA ** get_address_of_mCentralAnchorPoint_14() { return &___mCentralAnchorPoint_14; }
	inline void set_mCentralAnchorPoint_14(Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * value)
	{
		___mCentralAnchorPoint_14 = value;
		Il2CppCodeGenWriteBarrier((&___mCentralAnchorPoint_14), value);
	}

	inline static int32_t get_offset_of_mPrimaryCamera_15() { return static_cast<int32_t>(offsetof(DigitalEyewearARController_t973FDCC2DBCE328656150191FBC1A0E49189D9E4, ___mPrimaryCamera_15)); }
	inline Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * get_mPrimaryCamera_15() const { return ___mPrimaryCamera_15; }
	inline Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 ** get_address_of_mPrimaryCamera_15() { return &___mPrimaryCamera_15; }
	inline void set_mPrimaryCamera_15(Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * value)
	{
		___mPrimaryCamera_15 = value;
		Il2CppCodeGenWriteBarrier((&___mPrimaryCamera_15), value);
	}

	inline static int32_t get_offset_of_mVuforiaBehaviour_16() { return static_cast<int32_t>(offsetof(DigitalEyewearARController_t973FDCC2DBCE328656150191FBC1A0E49189D9E4, ___mVuforiaBehaviour_16)); }
	inline VuforiaARController_t7732FFB77105A2F5BBEA40E3CECC5C15DA624876 * get_mVuforiaBehaviour_16() const { return ___mVuforiaBehaviour_16; }
	inline VuforiaARController_t7732FFB77105A2F5BBEA40E3CECC5C15DA624876 ** get_address_of_mVuforiaBehaviour_16() { return &___mVuforiaBehaviour_16; }
	inline void set_mVuforiaBehaviour_16(VuforiaARController_t7732FFB77105A2F5BBEA40E3CECC5C15DA624876 * value)
	{
		___mVuforiaBehaviour_16 = value;
		Il2CppCodeGenWriteBarrier((&___mVuforiaBehaviour_16), value);
	}

	inline static int32_t get_offset_of_mSetFocusPlaneAutomatically_17() { return static_cast<int32_t>(offsetof(DigitalEyewearARController_t973FDCC2DBCE328656150191FBC1A0E49189D9E4, ___mSetFocusPlaneAutomatically_17)); }
	inline bool get_mSetFocusPlaneAutomatically_17() const { return ___mSetFocusPlaneAutomatically_17; }
	inline bool* get_address_of_mSetFocusPlaneAutomatically_17() { return &___mSetFocusPlaneAutomatically_17; }
	inline void set_mSetFocusPlaneAutomatically_17(bool value)
	{
		___mSetFocusPlaneAutomatically_17 = value;
	}

	inline static int32_t get_offset_of_mVRDeviceController_18() { return static_cast<int32_t>(offsetof(DigitalEyewearARController_t973FDCC2DBCE328656150191FBC1A0E49189D9E4, ___mVRDeviceController_18)); }
	inline VRDeviceController_tDFB2A6DE022256FD695E024050B1F3A07B97D044 * get_mVRDeviceController_18() const { return ___mVRDeviceController_18; }
	inline VRDeviceController_tDFB2A6DE022256FD695E024050B1F3A07B97D044 ** get_address_of_mVRDeviceController_18() { return &___mVRDeviceController_18; }
	inline void set_mVRDeviceController_18(VRDeviceController_tDFB2A6DE022256FD695E024050B1F3A07B97D044 * value)
	{
		___mVRDeviceController_18 = value;
		Il2CppCodeGenWriteBarrier((&___mVRDeviceController_18), value);
	}

	inline static int32_t get_offset_of_mCamPositionAtSceneStart_19() { return static_cast<int32_t>(offsetof(DigitalEyewearARController_t973FDCC2DBCE328656150191FBC1A0E49189D9E4, ___mCamPositionAtSceneStart_19)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_mCamPositionAtSceneStart_19() const { return ___mCamPositionAtSceneStart_19; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_mCamPositionAtSceneStart_19() { return &___mCamPositionAtSceneStart_19; }
	inline void set_mCamPositionAtSceneStart_19(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___mCamPositionAtSceneStart_19 = value;
	}

	inline static int32_t get_offset_of_mCamRotationAtSceneStart_20() { return static_cast<int32_t>(offsetof(DigitalEyewearARController_t973FDCC2DBCE328656150191FBC1A0E49189D9E4, ___mCamRotationAtSceneStart_20)); }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  get_mCamRotationAtSceneStart_20() const { return ___mCamRotationAtSceneStart_20; }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * get_address_of_mCamRotationAtSceneStart_20() { return &___mCamRotationAtSceneStart_20; }
	inline void set_mCamRotationAtSceneStart_20(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  value)
	{
		___mCamRotationAtSceneStart_20 = value;
	}
};

struct DigitalEyewearARController_t973FDCC2DBCE328656150191FBC1A0E49189D9E4_StaticFields
{
public:
	// Vuforia.DigitalEyewearARController Vuforia.DigitalEyewearARController::mInstance
	DigitalEyewearARController_t973FDCC2DBCE328656150191FBC1A0E49189D9E4 * ___mInstance_21;
	// System.Object Vuforia.DigitalEyewearARController::mPadlock
	RuntimeObject * ___mPadlock_22;

public:
	inline static int32_t get_offset_of_mInstance_21() { return static_cast<int32_t>(offsetof(DigitalEyewearARController_t973FDCC2DBCE328656150191FBC1A0E49189D9E4_StaticFields, ___mInstance_21)); }
	inline DigitalEyewearARController_t973FDCC2DBCE328656150191FBC1A0E49189D9E4 * get_mInstance_21() const { return ___mInstance_21; }
	inline DigitalEyewearARController_t973FDCC2DBCE328656150191FBC1A0E49189D9E4 ** get_address_of_mInstance_21() { return &___mInstance_21; }
	inline void set_mInstance_21(DigitalEyewearARController_t973FDCC2DBCE328656150191FBC1A0E49189D9E4 * value)
	{
		___mInstance_21 = value;
		Il2CppCodeGenWriteBarrier((&___mInstance_21), value);
	}

	inline static int32_t get_offset_of_mPadlock_22() { return static_cast<int32_t>(offsetof(DigitalEyewearARController_t973FDCC2DBCE328656150191FBC1A0E49189D9E4_StaticFields, ___mPadlock_22)); }
	inline RuntimeObject * get_mPadlock_22() const { return ___mPadlock_22; }
	inline RuntimeObject ** get_address_of_mPadlock_22() { return &___mPadlock_22; }
	inline void set_mPadlock_22(RuntimeObject * value)
	{
		___mPadlock_22 = value;
		Il2CppCodeGenWriteBarrier((&___mPadlock_22), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DIGITALEYEWEARARCONTROLLER_T973FDCC2DBCE328656150191FBC1A0E49189D9E4_H
#ifndef SERIALIZABLEVIEWERPARAMETERS_T5F6E8C8CE0B55CCA2E3AC93018053A78AAD5DBE9_H
#define SERIALIZABLEVIEWERPARAMETERS_T5F6E8C8CE0B55CCA2E3AC93018053A78AAD5DBE9_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.DigitalEyewearARController/SerializableViewerParameters
struct  SerializableViewerParameters_t5F6E8C8CE0B55CCA2E3AC93018053A78AAD5DBE9  : public RuntimeObject
{
public:
	// System.Single Vuforia.DigitalEyewearARController/SerializableViewerParameters::Version
	float ___Version_0;
	// System.String Vuforia.DigitalEyewearARController/SerializableViewerParameters::Name
	String_t* ___Name_1;
	// System.String Vuforia.DigitalEyewearARController/SerializableViewerParameters::Manufacturer
	String_t* ___Manufacturer_2;
	// Vuforia.ViewerButtonType Vuforia.DigitalEyewearARController/SerializableViewerParameters::ButtonType
	int32_t ___ButtonType_3;
	// System.Single Vuforia.DigitalEyewearARController/SerializableViewerParameters::ScreenToLensDistance
	float ___ScreenToLensDistance_4;
	// System.Single Vuforia.DigitalEyewearARController/SerializableViewerParameters::InterLensDistance
	float ___InterLensDistance_5;
	// Vuforia.ViewerTrayAlignment Vuforia.DigitalEyewearARController/SerializableViewerParameters::TrayAlignment
	int32_t ___TrayAlignment_6;
	// System.Single Vuforia.DigitalEyewearARController/SerializableViewerParameters::LensCenterToTrayDistance
	float ___LensCenterToTrayDistance_7;
	// UnityEngine.Vector2 Vuforia.DigitalEyewearARController/SerializableViewerParameters::DistortionCoefficients
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___DistortionCoefficients_8;
	// UnityEngine.Vector4 Vuforia.DigitalEyewearARController/SerializableViewerParameters::FieldOfView
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___FieldOfView_9;
	// System.Boolean Vuforia.DigitalEyewearARController/SerializableViewerParameters::ContainsMagnet
	bool ___ContainsMagnet_10;

public:
	inline static int32_t get_offset_of_Version_0() { return static_cast<int32_t>(offsetof(SerializableViewerParameters_t5F6E8C8CE0B55CCA2E3AC93018053A78AAD5DBE9, ___Version_0)); }
	inline float get_Version_0() const { return ___Version_0; }
	inline float* get_address_of_Version_0() { return &___Version_0; }
	inline void set_Version_0(float value)
	{
		___Version_0 = value;
	}

	inline static int32_t get_offset_of_Name_1() { return static_cast<int32_t>(offsetof(SerializableViewerParameters_t5F6E8C8CE0B55CCA2E3AC93018053A78AAD5DBE9, ___Name_1)); }
	inline String_t* get_Name_1() const { return ___Name_1; }
	inline String_t** get_address_of_Name_1() { return &___Name_1; }
	inline void set_Name_1(String_t* value)
	{
		___Name_1 = value;
		Il2CppCodeGenWriteBarrier((&___Name_1), value);
	}

	inline static int32_t get_offset_of_Manufacturer_2() { return static_cast<int32_t>(offsetof(SerializableViewerParameters_t5F6E8C8CE0B55CCA2E3AC93018053A78AAD5DBE9, ___Manufacturer_2)); }
	inline String_t* get_Manufacturer_2() const { return ___Manufacturer_2; }
	inline String_t** get_address_of_Manufacturer_2() { return &___Manufacturer_2; }
	inline void set_Manufacturer_2(String_t* value)
	{
		___Manufacturer_2 = value;
		Il2CppCodeGenWriteBarrier((&___Manufacturer_2), value);
	}

	inline static int32_t get_offset_of_ButtonType_3() { return static_cast<int32_t>(offsetof(SerializableViewerParameters_t5F6E8C8CE0B55CCA2E3AC93018053A78AAD5DBE9, ___ButtonType_3)); }
	inline int32_t get_ButtonType_3() const { return ___ButtonType_3; }
	inline int32_t* get_address_of_ButtonType_3() { return &___ButtonType_3; }
	inline void set_ButtonType_3(int32_t value)
	{
		___ButtonType_3 = value;
	}

	inline static int32_t get_offset_of_ScreenToLensDistance_4() { return static_cast<int32_t>(offsetof(SerializableViewerParameters_t5F6E8C8CE0B55CCA2E3AC93018053A78AAD5DBE9, ___ScreenToLensDistance_4)); }
	inline float get_ScreenToLensDistance_4() const { return ___ScreenToLensDistance_4; }
	inline float* get_address_of_ScreenToLensDistance_4() { return &___ScreenToLensDistance_4; }
	inline void set_ScreenToLensDistance_4(float value)
	{
		___ScreenToLensDistance_4 = value;
	}

	inline static int32_t get_offset_of_InterLensDistance_5() { return static_cast<int32_t>(offsetof(SerializableViewerParameters_t5F6E8C8CE0B55CCA2E3AC93018053A78AAD5DBE9, ___InterLensDistance_5)); }
	inline float get_InterLensDistance_5() const { return ___InterLensDistance_5; }
	inline float* get_address_of_InterLensDistance_5() { return &___InterLensDistance_5; }
	inline void set_InterLensDistance_5(float value)
	{
		___InterLensDistance_5 = value;
	}

	inline static int32_t get_offset_of_TrayAlignment_6() { return static_cast<int32_t>(offsetof(SerializableViewerParameters_t5F6E8C8CE0B55CCA2E3AC93018053A78AAD5DBE9, ___TrayAlignment_6)); }
	inline int32_t get_TrayAlignment_6() const { return ___TrayAlignment_6; }
	inline int32_t* get_address_of_TrayAlignment_6() { return &___TrayAlignment_6; }
	inline void set_TrayAlignment_6(int32_t value)
	{
		___TrayAlignment_6 = value;
	}

	inline static int32_t get_offset_of_LensCenterToTrayDistance_7() { return static_cast<int32_t>(offsetof(SerializableViewerParameters_t5F6E8C8CE0B55CCA2E3AC93018053A78AAD5DBE9, ___LensCenterToTrayDistance_7)); }
	inline float get_LensCenterToTrayDistance_7() const { return ___LensCenterToTrayDistance_7; }
	inline float* get_address_of_LensCenterToTrayDistance_7() { return &___LensCenterToTrayDistance_7; }
	inline void set_LensCenterToTrayDistance_7(float value)
	{
		___LensCenterToTrayDistance_7 = value;
	}

	inline static int32_t get_offset_of_DistortionCoefficients_8() { return static_cast<int32_t>(offsetof(SerializableViewerParameters_t5F6E8C8CE0B55CCA2E3AC93018053A78AAD5DBE9, ___DistortionCoefficients_8)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_DistortionCoefficients_8() const { return ___DistortionCoefficients_8; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_DistortionCoefficients_8() { return &___DistortionCoefficients_8; }
	inline void set_DistortionCoefficients_8(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___DistortionCoefficients_8 = value;
	}

	inline static int32_t get_offset_of_FieldOfView_9() { return static_cast<int32_t>(offsetof(SerializableViewerParameters_t5F6E8C8CE0B55CCA2E3AC93018053A78AAD5DBE9, ___FieldOfView_9)); }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  get_FieldOfView_9() const { return ___FieldOfView_9; }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * get_address_of_FieldOfView_9() { return &___FieldOfView_9; }
	inline void set_FieldOfView_9(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  value)
	{
		___FieldOfView_9 = value;
	}

	inline static int32_t get_offset_of_ContainsMagnet_10() { return static_cast<int32_t>(offsetof(SerializableViewerParameters_t5F6E8C8CE0B55CCA2E3AC93018053A78AAD5DBE9, ___ContainsMagnet_10)); }
	inline bool get_ContainsMagnet_10() const { return ___ContainsMagnet_10; }
	inline bool* get_address_of_ContainsMagnet_10() { return &___ContainsMagnet_10; }
	inline void set_ContainsMagnet_10(bool value)
	{
		___ContainsMagnet_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SERIALIZABLEVIEWERPARAMETERS_T5F6E8C8CE0B55CCA2E3AC93018053A78AAD5DBE9_H
#ifndef EYEWEARCALIBRATIONREADING_TD743FD53EA93E7F38F03C245F65EFBBE8722C7B8_H
#define EYEWEARCALIBRATIONREADING_TD743FD53EA93E7F38F03C245F65EFBBE8722C7B8_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.EyewearDevice/EyewearCalibrationReading
struct  EyewearCalibrationReading_tD743FD53EA93E7F38F03C245F65EFBBE8722C7B8 
{
public:
	// System.Single[] Vuforia.EyewearDevice/EyewearCalibrationReading::pose
	SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* ___pose_0;
	// System.Single Vuforia.EyewearDevice/EyewearCalibrationReading::scale
	float ___scale_1;
	// System.Single Vuforia.EyewearDevice/EyewearCalibrationReading::centerX
	float ___centerX_2;
	// System.Single Vuforia.EyewearDevice/EyewearCalibrationReading::centerY
	float ___centerY_3;
	// Vuforia.EyewearDevice/EyewearCalibrationReading/AlignmentType Vuforia.EyewearDevice/EyewearCalibrationReading::type
	int32_t ___type_4;

public:
	inline static int32_t get_offset_of_pose_0() { return static_cast<int32_t>(offsetof(EyewearCalibrationReading_tD743FD53EA93E7F38F03C245F65EFBBE8722C7B8, ___pose_0)); }
	inline SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* get_pose_0() const { return ___pose_0; }
	inline SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5** get_address_of_pose_0() { return &___pose_0; }
	inline void set_pose_0(SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* value)
	{
		___pose_0 = value;
		Il2CppCodeGenWriteBarrier((&___pose_0), value);
	}

	inline static int32_t get_offset_of_scale_1() { return static_cast<int32_t>(offsetof(EyewearCalibrationReading_tD743FD53EA93E7F38F03C245F65EFBBE8722C7B8, ___scale_1)); }
	inline float get_scale_1() const { return ___scale_1; }
	inline float* get_address_of_scale_1() { return &___scale_1; }
	inline void set_scale_1(float value)
	{
		___scale_1 = value;
	}

	inline static int32_t get_offset_of_centerX_2() { return static_cast<int32_t>(offsetof(EyewearCalibrationReading_tD743FD53EA93E7F38F03C245F65EFBBE8722C7B8, ___centerX_2)); }
	inline float get_centerX_2() const { return ___centerX_2; }
	inline float* get_address_of_centerX_2() { return &___centerX_2; }
	inline void set_centerX_2(float value)
	{
		___centerX_2 = value;
	}

	inline static int32_t get_offset_of_centerY_3() { return static_cast<int32_t>(offsetof(EyewearCalibrationReading_tD743FD53EA93E7F38F03C245F65EFBBE8722C7B8, ___centerY_3)); }
	inline float get_centerY_3() const { return ___centerY_3; }
	inline float* get_address_of_centerY_3() { return &___centerY_3; }
	inline void set_centerY_3(float value)
	{
		___centerY_3 = value;
	}

	inline static int32_t get_offset_of_type_4() { return static_cast<int32_t>(offsetof(EyewearCalibrationReading_tD743FD53EA93E7F38F03C245F65EFBBE8722C7B8, ___type_4)); }
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
// Native definition for P/Invoke marshalling of Vuforia.EyewearDevice/EyewearCalibrationReading
struct EyewearCalibrationReading_tD743FD53EA93E7F38F03C245F65EFBBE8722C7B8_marshaled_pinvoke
{
	float* ___pose_0;
	float ___scale_1;
	float ___centerX_2;
	float ___centerY_3;
	int32_t ___type_4;
};
// Native definition for COM marshalling of Vuforia.EyewearDevice/EyewearCalibrationReading
struct EyewearCalibrationReading_tD743FD53EA93E7F38F03C245F65EFBBE8722C7B8_marshaled_com
{
	float* ___pose_0;
	float ___scale_1;
	float ___centerX_2;
	float ___centerY_3;
	int32_t ___type_4;
};
#endif // EYEWEARCALIBRATIONREADING_TD743FD53EA93E7F38F03C245F65EFBBE8722C7B8_H
#ifndef IOSUNITYPLAYER_T817845D8227749BEB3E0D74F528AB844DA814C28_H
#define IOSUNITYPLAYER_T817845D8227749BEB3E0D74F528AB844DA814C28_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.IOSUnityPlayer
struct  IOSUnityPlayer_t817845D8227749BEB3E0D74F528AB844DA814C28  : public RuntimeObject
{
public:
	// UnityEngine.ScreenOrientation Vuforia.IOSUnityPlayer::mScreenOrientation
	int32_t ___mScreenOrientation_0;

public:
	inline static int32_t get_offset_of_mScreenOrientation_0() { return static_cast<int32_t>(offsetof(IOSUnityPlayer_t817845D8227749BEB3E0D74F528AB844DA814C28, ___mScreenOrientation_0)); }
	inline int32_t get_mScreenOrientation_0() const { return ___mScreenOrientation_0; }
	inline int32_t* get_address_of_mScreenOrientation_0() { return &___mScreenOrientation_0; }
	inline void set_mScreenOrientation_0(int32_t value)
	{
		___mScreenOrientation_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // IOSUNITYPLAYER_T817845D8227749BEB3E0D74F528AB844DA814C28_H
#ifndef IMAGETARGETFINDER_T6E3D734AC2A2C4C1DF5578F038B15345296BE957_H
#define IMAGETARGETFINDER_T6E3D734AC2A2C4C1DF5578F038B15345296BE957_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.ImageTargetFinder
struct  ImageTargetFinder_t6E3D734AC2A2C4C1DF5578F038B15345296BE957  : public TargetFinder_t2AFA3E4A66C461FA522FE35048DB093003A7B1AC
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // IMAGETARGETFINDER_T6E3D734AC2A2C4C1DF5578F038B15345296BE957_H
#ifndef MODELTARGETIMPL_TD484936FF7A7ED1644951F50A18D4574B095480E_H
#define MODELTARGETIMPL_TD484936FF7A7ED1644951F50A18D4574B095480E_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.ModelTargetImpl
struct  ModelTargetImpl_tD484936FF7A7ED1644951F50A18D4574B095480E  : public DataSetObjectTargetImpl_tC2D896B84A1FDE730F7E2F20045D12CBC6F30C98
{
public:
	// Vuforia.IBoundingBox Vuforia.ModelTargetImpl::mBoundingBoxImpl
	RuntimeObject* ___mBoundingBoxImpl_4;
	// System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.GuideView> Vuforia.ModelTargetImpl::mLoadedGuideViews
	Dictionary_2_t43ADA54C777F0C1DE920BCD6F29C43D5C16AE26F * ___mLoadedGuideViews_5;

public:
	inline static int32_t get_offset_of_mBoundingBoxImpl_4() { return static_cast<int32_t>(offsetof(ModelTargetImpl_tD484936FF7A7ED1644951F50A18D4574B095480E, ___mBoundingBoxImpl_4)); }
	inline RuntimeObject* get_mBoundingBoxImpl_4() const { return ___mBoundingBoxImpl_4; }
	inline RuntimeObject** get_address_of_mBoundingBoxImpl_4() { return &___mBoundingBoxImpl_4; }
	inline void set_mBoundingBoxImpl_4(RuntimeObject* value)
	{
		___mBoundingBoxImpl_4 = value;
		Il2CppCodeGenWriteBarrier((&___mBoundingBoxImpl_4), value);
	}

	inline static int32_t get_offset_of_mLoadedGuideViews_5() { return static_cast<int32_t>(offsetof(ModelTargetImpl_tD484936FF7A7ED1644951F50A18D4574B095480E, ___mLoadedGuideViews_5)); }
	inline Dictionary_2_t43ADA54C777F0C1DE920BCD6F29C43D5C16AE26F * get_mLoadedGuideViews_5() const { return ___mLoadedGuideViews_5; }
	inline Dictionary_2_t43ADA54C777F0C1DE920BCD6F29C43D5C16AE26F ** get_address_of_mLoadedGuideViews_5() { return &___mLoadedGuideViews_5; }
	inline void set_mLoadedGuideViews_5(Dictionary_2_t43ADA54C777F0C1DE920BCD6F29C43D5C16AE26F * value)
	{
		___mLoadedGuideViews_5 = value;
		Il2CppCodeGenWriteBarrier((&___mLoadedGuideViews_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MODELTARGETIMPL_TD484936FF7A7ED1644951F50A18D4574B095480E_H
#ifndef POSITIONALDEVICETRACKERIMPL_TF19B8A9FE3C3E8FB8A1C4DB8EB0A6125A0302860_H
#define POSITIONALDEVICETRACKERIMPL_TF19B8A9FE3C3E8FB8A1C4DB8EB0A6125A0302860_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.PositionalDeviceTrackerImpl
struct  PositionalDeviceTrackerImpl_tF19B8A9FE3C3E8FB8A1C4DB8EB0A6125A0302860  : public PositionalDeviceTracker_tEFAA5FDB9CF19DA74081AE51B41B4B5D9F40D8EE
{
public:
	// System.Action`1<Vuforia.Anchor> Vuforia.PositionalDeviceTrackerImpl::mAnchorRemovedEvent
	Action_1_tD3DAB6D6CCAF229BC2724880DEC85B242D848D3D * ___mAnchorRemovedEvent_1;

public:
	inline static int32_t get_offset_of_mAnchorRemovedEvent_1() { return static_cast<int32_t>(offsetof(PositionalDeviceTrackerImpl_tF19B8A9FE3C3E8FB8A1C4DB8EB0A6125A0302860, ___mAnchorRemovedEvent_1)); }
	inline Action_1_tD3DAB6D6CCAF229BC2724880DEC85B242D848D3D * get_mAnchorRemovedEvent_1() const { return ___mAnchorRemovedEvent_1; }
	inline Action_1_tD3DAB6D6CCAF229BC2724880DEC85B242D848D3D ** get_address_of_mAnchorRemovedEvent_1() { return &___mAnchorRemovedEvent_1; }
	inline void set_mAnchorRemovedEvent_1(Action_1_tD3DAB6D6CCAF229BC2724880DEC85B242D848D3D * value)
	{
		___mAnchorRemovedEvent_1 = value;
		Il2CppCodeGenWriteBarrier((&___mAnchorRemovedEvent_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // POSITIONALDEVICETRACKERIMPL_TF19B8A9FE3C3E8FB8A1C4DB8EB0A6125A0302860_H
#ifndef SMARTTERRAINARCONTROLLER_T71E6FA089F9760C9BA027E3808EE43568BF0BD3D_H
#define SMARTTERRAINARCONTROLLER_T71E6FA089F9760C9BA027E3808EE43568BF0BD3D_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.SmartTerrainARController
struct  SmartTerrainARController_t71E6FA089F9760C9BA027E3808EE43568BF0BD3D  : public ARController_tBCF5CBE22AE2AD3FF6DCAC88E78FF7C929D91293
{
public:
	// System.Boolean Vuforia.SmartTerrainARController::mAutoInitAndStartTracker
	bool ___mAutoInitAndStartTracker_2;
	// Vuforia.SmartTerrainARController/State Vuforia.SmartTerrainARController::mState
	int32_t ___mState_3;

public:
	inline static int32_t get_offset_of_mAutoInitAndStartTracker_2() { return static_cast<int32_t>(offsetof(SmartTerrainARController_t71E6FA089F9760C9BA027E3808EE43568BF0BD3D, ___mAutoInitAndStartTracker_2)); }
	inline bool get_mAutoInitAndStartTracker_2() const { return ___mAutoInitAndStartTracker_2; }
	inline bool* get_address_of_mAutoInitAndStartTracker_2() { return &___mAutoInitAndStartTracker_2; }
	inline void set_mAutoInitAndStartTracker_2(bool value)
	{
		___mAutoInitAndStartTracker_2 = value;
	}

	inline static int32_t get_offset_of_mState_3() { return static_cast<int32_t>(offsetof(SmartTerrainARController_t71E6FA089F9760C9BA027E3808EE43568BF0BD3D, ___mState_3)); }
	inline int32_t get_mState_3() const { return ___mState_3; }
	inline int32_t* get_address_of_mState_3() { return &___mState_3; }
	inline void set_mState_3(int32_t value)
	{
		___mState_3 = value;
	}
};

struct SmartTerrainARController_t71E6FA089F9760C9BA027E3808EE43568BF0BD3D_StaticFields
{
public:
	// Vuforia.SmartTerrainARController Vuforia.SmartTerrainARController::mInstance
	SmartTerrainARController_t71E6FA089F9760C9BA027E3808EE43568BF0BD3D * ___mInstance_1;

public:
	inline static int32_t get_offset_of_mInstance_1() { return static_cast<int32_t>(offsetof(SmartTerrainARController_t71E6FA089F9760C9BA027E3808EE43568BF0BD3D_StaticFields, ___mInstance_1)); }
	inline SmartTerrainARController_t71E6FA089F9760C9BA027E3808EE43568BF0BD3D * get_mInstance_1() const { return ___mInstance_1; }
	inline SmartTerrainARController_t71E6FA089F9760C9BA027E3808EE43568BF0BD3D ** get_address_of_mInstance_1() { return &___mInstance_1; }
	inline void set_mInstance_1(SmartTerrainARController_t71E6FA089F9760C9BA027E3808EE43568BF0BD3D * value)
	{
		___mInstance_1 = value;
		Il2CppCodeGenWriteBarrier((&___mInstance_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SMARTTERRAINARCONTROLLER_T71E6FA089F9760C9BA027E3808EE43568BF0BD3D_H
#ifndef STEREOPROJMATRIXSTORE_T666C738477A3F36E8FDD7E872AC154108291348A_H
#define STEREOPROJMATRIXSTORE_T666C738477A3F36E8FDD7E872AC154108291348A_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.StereoProjMatrixStore
struct  StereoProjMatrixStore_t666C738477A3F36E8FDD7E872AC154108291348A  : public RuntimeObject
{
public:
	// UnityEngine.Camera Vuforia.StereoProjMatrixStore::mCamera
	Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * ___mCamera_0;
	// System.Collections.Generic.Dictionary`2<UnityEngine.Camera/StereoscopicEye,UnityEngine.Matrix4x4> Vuforia.StereoProjMatrixStore::mProjectionMatrices
	Dictionary_2_t608BE022CD3D466FFCFE785E662025EBB425A4C0 * ___mProjectionMatrices_1;
	// System.Collections.Generic.Dictionary`2<UnityEngine.Camera/StereoscopicEye,System.Single> Vuforia.StereoProjMatrixStore::mAppliedVerticalFoVs
	Dictionary_2_t6EA8F59E80026247A2117E6A30B0106FDB5D1BBF * ___mAppliedVerticalFoVs_2;
	// System.Collections.Generic.Dictionary`2<UnityEngine.Camera/StereoscopicEye,System.Single> Vuforia.StereoProjMatrixStore::mCurrentVerticalFoVs
	Dictionary_2_t6EA8F59E80026247A2117E6A30B0106FDB5D1BBF * ___mCurrentVerticalFoVs_3;
	// System.Collections.Generic.Dictionary`2<UnityEngine.Camera/StereoscopicEye,System.Single> Vuforia.StereoProjMatrixStore::mAppliedHorizontalFoVs
	Dictionary_2_t6EA8F59E80026247A2117E6A30B0106FDB5D1BBF * ___mAppliedHorizontalFoVs_4;
	// System.Collections.Generic.Dictionary`2<UnityEngine.Camera/StereoscopicEye,System.Single> Vuforia.StereoProjMatrixStore::mCurrentHorizontalFoVs
	Dictionary_2_t6EA8F59E80026247A2117E6A30B0106FDB5D1BBF * ___mCurrentHorizontalFoVs_5;
	// UnityEngine.Matrix4x4 Vuforia.StereoProjMatrixStore::mSharedCullingProjectionMatrix
	Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  ___mSharedCullingProjectionMatrix_6;
	// UnityEngine.Matrix4x4 Vuforia.StereoProjMatrixStore::mSharedCullingViewMatrix
	Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  ___mSharedCullingViewMatrix_7;
	// UnityEngine.Matrix4x4 Vuforia.StereoProjMatrixStore::mLeftEyeOffsetMatrix
	Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  ___mLeftEyeOffsetMatrix_8;
	// UnityEngine.Matrix4x4 Vuforia.StereoProjMatrixStore::mRightEyeOffsetMatrix
	Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  ___mRightEyeOffsetMatrix_9;
	// Vuforia.StereoProjMatrixStore/Mode Vuforia.StereoProjMatrixStore::mMode
	int32_t ___mMode_10;

public:
	inline static int32_t get_offset_of_mCamera_0() { return static_cast<int32_t>(offsetof(StereoProjMatrixStore_t666C738477A3F36E8FDD7E872AC154108291348A, ___mCamera_0)); }
	inline Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * get_mCamera_0() const { return ___mCamera_0; }
	inline Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 ** get_address_of_mCamera_0() { return &___mCamera_0; }
	inline void set_mCamera_0(Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * value)
	{
		___mCamera_0 = value;
		Il2CppCodeGenWriteBarrier((&___mCamera_0), value);
	}

	inline static int32_t get_offset_of_mProjectionMatrices_1() { return static_cast<int32_t>(offsetof(StereoProjMatrixStore_t666C738477A3F36E8FDD7E872AC154108291348A, ___mProjectionMatrices_1)); }
	inline Dictionary_2_t608BE022CD3D466FFCFE785E662025EBB425A4C0 * get_mProjectionMatrices_1() const { return ___mProjectionMatrices_1; }
	inline Dictionary_2_t608BE022CD3D466FFCFE785E662025EBB425A4C0 ** get_address_of_mProjectionMatrices_1() { return &___mProjectionMatrices_1; }
	inline void set_mProjectionMatrices_1(Dictionary_2_t608BE022CD3D466FFCFE785E662025EBB425A4C0 * value)
	{
		___mProjectionMatrices_1 = value;
		Il2CppCodeGenWriteBarrier((&___mProjectionMatrices_1), value);
	}

	inline static int32_t get_offset_of_mAppliedVerticalFoVs_2() { return static_cast<int32_t>(offsetof(StereoProjMatrixStore_t666C738477A3F36E8FDD7E872AC154108291348A, ___mAppliedVerticalFoVs_2)); }
	inline Dictionary_2_t6EA8F59E80026247A2117E6A30B0106FDB5D1BBF * get_mAppliedVerticalFoVs_2() const { return ___mAppliedVerticalFoVs_2; }
	inline Dictionary_2_t6EA8F59E80026247A2117E6A30B0106FDB5D1BBF ** get_address_of_mAppliedVerticalFoVs_2() { return &___mAppliedVerticalFoVs_2; }
	inline void set_mAppliedVerticalFoVs_2(Dictionary_2_t6EA8F59E80026247A2117E6A30B0106FDB5D1BBF * value)
	{
		___mAppliedVerticalFoVs_2 = value;
		Il2CppCodeGenWriteBarrier((&___mAppliedVerticalFoVs_2), value);
	}

	inline static int32_t get_offset_of_mCurrentVerticalFoVs_3() { return static_cast<int32_t>(offsetof(StereoProjMatrixStore_t666C738477A3F36E8FDD7E872AC154108291348A, ___mCurrentVerticalFoVs_3)); }
	inline Dictionary_2_t6EA8F59E80026247A2117E6A30B0106FDB5D1BBF * get_mCurrentVerticalFoVs_3() const { return ___mCurrentVerticalFoVs_3; }
	inline Dictionary_2_t6EA8F59E80026247A2117E6A30B0106FDB5D1BBF ** get_address_of_mCurrentVerticalFoVs_3() { return &___mCurrentVerticalFoVs_3; }
	inline void set_mCurrentVerticalFoVs_3(Dictionary_2_t6EA8F59E80026247A2117E6A30B0106FDB5D1BBF * value)
	{
		___mCurrentVerticalFoVs_3 = value;
		Il2CppCodeGenWriteBarrier((&___mCurrentVerticalFoVs_3), value);
	}

	inline static int32_t get_offset_of_mAppliedHorizontalFoVs_4() { return static_cast<int32_t>(offsetof(StereoProjMatrixStore_t666C738477A3F36E8FDD7E872AC154108291348A, ___mAppliedHorizontalFoVs_4)); }
	inline Dictionary_2_t6EA8F59E80026247A2117E6A30B0106FDB5D1BBF * get_mAppliedHorizontalFoVs_4() const { return ___mAppliedHorizontalFoVs_4; }
	inline Dictionary_2_t6EA8F59E80026247A2117E6A30B0106FDB5D1BBF ** get_address_of_mAppliedHorizontalFoVs_4() { return &___mAppliedHorizontalFoVs_4; }
	inline void set_mAppliedHorizontalFoVs_4(Dictionary_2_t6EA8F59E80026247A2117E6A30B0106FDB5D1BBF * value)
	{
		___mAppliedHorizontalFoVs_4 = value;
		Il2CppCodeGenWriteBarrier((&___mAppliedHorizontalFoVs_4), value);
	}

	inline static int32_t get_offset_of_mCurrentHorizontalFoVs_5() { return static_cast<int32_t>(offsetof(StereoProjMatrixStore_t666C738477A3F36E8FDD7E872AC154108291348A, ___mCurrentHorizontalFoVs_5)); }
	inline Dictionary_2_t6EA8F59E80026247A2117E6A30B0106FDB5D1BBF * get_mCurrentHorizontalFoVs_5() const { return ___mCurrentHorizontalFoVs_5; }
	inline Dictionary_2_t6EA8F59E80026247A2117E6A30B0106FDB5D1BBF ** get_address_of_mCurrentHorizontalFoVs_5() { return &___mCurrentHorizontalFoVs_5; }
	inline void set_mCurrentHorizontalFoVs_5(Dictionary_2_t6EA8F59E80026247A2117E6A30B0106FDB5D1BBF * value)
	{
		___mCurrentHorizontalFoVs_5 = value;
		Il2CppCodeGenWriteBarrier((&___mCurrentHorizontalFoVs_5), value);
	}

	inline static int32_t get_offset_of_mSharedCullingProjectionMatrix_6() { return static_cast<int32_t>(offsetof(StereoProjMatrixStore_t666C738477A3F36E8FDD7E872AC154108291348A, ___mSharedCullingProjectionMatrix_6)); }
	inline Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  get_mSharedCullingProjectionMatrix_6() const { return ___mSharedCullingProjectionMatrix_6; }
	inline Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA * get_address_of_mSharedCullingProjectionMatrix_6() { return &___mSharedCullingProjectionMatrix_6; }
	inline void set_mSharedCullingProjectionMatrix_6(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  value)
	{
		___mSharedCullingProjectionMatrix_6 = value;
	}

	inline static int32_t get_offset_of_mSharedCullingViewMatrix_7() { return static_cast<int32_t>(offsetof(StereoProjMatrixStore_t666C738477A3F36E8FDD7E872AC154108291348A, ___mSharedCullingViewMatrix_7)); }
	inline Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  get_mSharedCullingViewMatrix_7() const { return ___mSharedCullingViewMatrix_7; }
	inline Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA * get_address_of_mSharedCullingViewMatrix_7() { return &___mSharedCullingViewMatrix_7; }
	inline void set_mSharedCullingViewMatrix_7(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  value)
	{
		___mSharedCullingViewMatrix_7 = value;
	}

	inline static int32_t get_offset_of_mLeftEyeOffsetMatrix_8() { return static_cast<int32_t>(offsetof(StereoProjMatrixStore_t666C738477A3F36E8FDD7E872AC154108291348A, ___mLeftEyeOffsetMatrix_8)); }
	inline Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  get_mLeftEyeOffsetMatrix_8() const { return ___mLeftEyeOffsetMatrix_8; }
	inline Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA * get_address_of_mLeftEyeOffsetMatrix_8() { return &___mLeftEyeOffsetMatrix_8; }
	inline void set_mLeftEyeOffsetMatrix_8(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  value)
	{
		___mLeftEyeOffsetMatrix_8 = value;
	}

	inline static int32_t get_offset_of_mRightEyeOffsetMatrix_9() { return static_cast<int32_t>(offsetof(StereoProjMatrixStore_t666C738477A3F36E8FDD7E872AC154108291348A, ___mRightEyeOffsetMatrix_9)); }
	inline Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  get_mRightEyeOffsetMatrix_9() const { return ___mRightEyeOffsetMatrix_9; }
	inline Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA * get_address_of_mRightEyeOffsetMatrix_9() { return &___mRightEyeOffsetMatrix_9; }
	inline void set_mRightEyeOffsetMatrix_9(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  value)
	{
		___mRightEyeOffsetMatrix_9 = value;
	}

	inline static int32_t get_offset_of_mMode_10() { return static_cast<int32_t>(offsetof(StereoProjMatrixStore_t666C738477A3F36E8FDD7E872AC154108291348A, ___mMode_10)); }
	inline int32_t get_mMode_10() const { return ___mMode_10; }
	inline int32_t* get_address_of_mMode_10() { return &___mMode_10; }
	inline void set_mMode_10(int32_t value)
	{
		___mMode_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STEREOPROJMATRIXSTORE_T666C738477A3F36E8FDD7E872AC154108291348A_H
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
#ifndef POSITIONALPLAYMODEDEVICETRACKERIMPL_TF584C6DE898C0D606A40CA3D5D7BF4CD45FB1305_H
#define POSITIONALPLAYMODEDEVICETRACKERIMPL_TF584C6DE898C0D606A40CA3D5D7BF4CD45FB1305_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.PositionalPlayModeDeviceTrackerImpl
struct  PositionalPlayModeDeviceTrackerImpl_tF584C6DE898C0D606A40CA3D5D7BF4CD45FB1305  : public PositionalDeviceTrackerImpl_tF19B8A9FE3C3E8FB8A1C4DB8EB0A6125A0302860
{
public:
	// Vuforia.DataSet Vuforia.PositionalPlayModeDeviceTrackerImpl::mEmulatorDataset
	DataSet_t9E9CB4ECE4C6C5C7B2FD9597B83FBAB7C55A4644 * ___mEmulatorDataset_2;

public:
	inline static int32_t get_offset_of_mEmulatorDataset_2() { return static_cast<int32_t>(offsetof(PositionalPlayModeDeviceTrackerImpl_tF584C6DE898C0D606A40CA3D5D7BF4CD45FB1305, ___mEmulatorDataset_2)); }
	inline DataSet_t9E9CB4ECE4C6C5C7B2FD9597B83FBAB7C55A4644 * get_mEmulatorDataset_2() const { return ___mEmulatorDataset_2; }
	inline DataSet_t9E9CB4ECE4C6C5C7B2FD9597B83FBAB7C55A4644 ** get_address_of_mEmulatorDataset_2() { return &___mEmulatorDataset_2; }
	inline void set_mEmulatorDataset_2(DataSet_t9E9CB4ECE4C6C5C7B2FD9597B83FBAB7C55A4644 * value)
	{
		___mEmulatorDataset_2 = value;
		Il2CppCodeGenWriteBarrier((&___mEmulatorDataset_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // POSITIONALPLAYMODEDEVICETRACKERIMPL_TF584C6DE898C0D606A40CA3D5D7BF4CD45FB1305_H
#ifndef VRDEVICECAMERACONFIGURATION_T647AFB774A37819F464C5D5F01599CAD29FD7E57_H
#define VRDEVICECAMERACONFIGURATION_T647AFB774A37819F464C5D5F01599CAD29FD7E57_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.VRDeviceCameraConfiguration
struct  VRDeviceCameraConfiguration_t647AFB774A37819F464C5D5F01599CAD29FD7E57  : public BaseCameraConfiguration_tF625F5FF38D44D6E2D1D929C1F29DA533F97642A
{
public:
	// UnityEngine.Camera Vuforia.VRDeviceCameraConfiguration::mCamera
	Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * ___mCamera_12;
	// Vuforia.StereoProjMatrixStore Vuforia.VRDeviceCameraConfiguration::mMatrixStore
	StereoProjMatrixStore_t666C738477A3F36E8FDD7E872AC154108291348A * ___mMatrixStore_13;
	// UnityEngine.Matrix4x4 Vuforia.VRDeviceCameraConfiguration::mLeftMatrixUsedForVBPlacement
	Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  ___mLeftMatrixUsedForVBPlacement_14;
	// System.Single Vuforia.VRDeviceCameraConfiguration::mLastAppliedNearClipPlane
	float ___mLastAppliedNearClipPlane_15;
	// System.Single Vuforia.VRDeviceCameraConfiguration::mLastAppliedFarClipPlane
	float ___mLastAppliedFarClipPlane_16;
	// System.Single Vuforia.VRDeviceCameraConfiguration::mMaxDepthForVideoBackground
	float ___mMaxDepthForVideoBackground_17;
	// System.Single Vuforia.VRDeviceCameraConfiguration::mMinDepthForVideoBackground
	float ___mMinDepthForVideoBackground_18;
	// System.Int32 Vuforia.VRDeviceCameraConfiguration::mScreenWidth
	int32_t ___mScreenWidth_19;
	// System.Int32 Vuforia.VRDeviceCameraConfiguration::mScreenHeight
	int32_t ___mScreenHeight_20;
	// System.Single Vuforia.VRDeviceCameraConfiguration::mStereoDepth
	float ___mStereoDepth_21;
	// System.Boolean Vuforia.VRDeviceCameraConfiguration::mResetMatrix
	bool ___mResetMatrix_22;
	// System.Collections.Generic.Dictionary`2<UnityEngine.Camera/StereoscopicEye,UnityEngine.Vector2> Vuforia.VRDeviceCameraConfiguration::mVuforiaFrustumSkew
	Dictionary_2_tA50FC73B50AEAE38268B60A47025C7B19AB363C7 * ___mVuforiaFrustumSkew_23;
	// System.Collections.Generic.Dictionary`2<UnityEngine.Camera/StereoscopicEye,UnityEngine.Vector2> Vuforia.VRDeviceCameraConfiguration::mCenterToEyeAxis
	Dictionary_2_tA50FC73B50AEAE38268B60A47025C7B19AB363C7 * ___mCenterToEyeAxis_24;
	// Vuforia.VRDeviceController Vuforia.VRDeviceCameraConfiguration::mVrDeviceController
	VRDeviceController_tDFB2A6DE022256FD695E024050B1F3A07B97D044 * ___mVrDeviceController_25;

public:
	inline static int32_t get_offset_of_mCamera_12() { return static_cast<int32_t>(offsetof(VRDeviceCameraConfiguration_t647AFB774A37819F464C5D5F01599CAD29FD7E57, ___mCamera_12)); }
	inline Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * get_mCamera_12() const { return ___mCamera_12; }
	inline Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 ** get_address_of_mCamera_12() { return &___mCamera_12; }
	inline void set_mCamera_12(Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * value)
	{
		___mCamera_12 = value;
		Il2CppCodeGenWriteBarrier((&___mCamera_12), value);
	}

	inline static int32_t get_offset_of_mMatrixStore_13() { return static_cast<int32_t>(offsetof(VRDeviceCameraConfiguration_t647AFB774A37819F464C5D5F01599CAD29FD7E57, ___mMatrixStore_13)); }
	inline StereoProjMatrixStore_t666C738477A3F36E8FDD7E872AC154108291348A * get_mMatrixStore_13() const { return ___mMatrixStore_13; }
	inline StereoProjMatrixStore_t666C738477A3F36E8FDD7E872AC154108291348A ** get_address_of_mMatrixStore_13() { return &___mMatrixStore_13; }
	inline void set_mMatrixStore_13(StereoProjMatrixStore_t666C738477A3F36E8FDD7E872AC154108291348A * value)
	{
		___mMatrixStore_13 = value;
		Il2CppCodeGenWriteBarrier((&___mMatrixStore_13), value);
	}

	inline static int32_t get_offset_of_mLeftMatrixUsedForVBPlacement_14() { return static_cast<int32_t>(offsetof(VRDeviceCameraConfiguration_t647AFB774A37819F464C5D5F01599CAD29FD7E57, ___mLeftMatrixUsedForVBPlacement_14)); }
	inline Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  get_mLeftMatrixUsedForVBPlacement_14() const { return ___mLeftMatrixUsedForVBPlacement_14; }
	inline Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA * get_address_of_mLeftMatrixUsedForVBPlacement_14() { return &___mLeftMatrixUsedForVBPlacement_14; }
	inline void set_mLeftMatrixUsedForVBPlacement_14(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  value)
	{
		___mLeftMatrixUsedForVBPlacement_14 = value;
	}

	inline static int32_t get_offset_of_mLastAppliedNearClipPlane_15() { return static_cast<int32_t>(offsetof(VRDeviceCameraConfiguration_t647AFB774A37819F464C5D5F01599CAD29FD7E57, ___mLastAppliedNearClipPlane_15)); }
	inline float get_mLastAppliedNearClipPlane_15() const { return ___mLastAppliedNearClipPlane_15; }
	inline float* get_address_of_mLastAppliedNearClipPlane_15() { return &___mLastAppliedNearClipPlane_15; }
	inline void set_mLastAppliedNearClipPlane_15(float value)
	{
		___mLastAppliedNearClipPlane_15 = value;
	}

	inline static int32_t get_offset_of_mLastAppliedFarClipPlane_16() { return static_cast<int32_t>(offsetof(VRDeviceCameraConfiguration_t647AFB774A37819F464C5D5F01599CAD29FD7E57, ___mLastAppliedFarClipPlane_16)); }
	inline float get_mLastAppliedFarClipPlane_16() const { return ___mLastAppliedFarClipPlane_16; }
	inline float* get_address_of_mLastAppliedFarClipPlane_16() { return &___mLastAppliedFarClipPlane_16; }
	inline void set_mLastAppliedFarClipPlane_16(float value)
	{
		___mLastAppliedFarClipPlane_16 = value;
	}

	inline static int32_t get_offset_of_mMaxDepthForVideoBackground_17() { return static_cast<int32_t>(offsetof(VRDeviceCameraConfiguration_t647AFB774A37819F464C5D5F01599CAD29FD7E57, ___mMaxDepthForVideoBackground_17)); }
	inline float get_mMaxDepthForVideoBackground_17() const { return ___mMaxDepthForVideoBackground_17; }
	inline float* get_address_of_mMaxDepthForVideoBackground_17() { return &___mMaxDepthForVideoBackground_17; }
	inline void set_mMaxDepthForVideoBackground_17(float value)
	{
		___mMaxDepthForVideoBackground_17 = value;
	}

	inline static int32_t get_offset_of_mMinDepthForVideoBackground_18() { return static_cast<int32_t>(offsetof(VRDeviceCameraConfiguration_t647AFB774A37819F464C5D5F01599CAD29FD7E57, ___mMinDepthForVideoBackground_18)); }
	inline float get_mMinDepthForVideoBackground_18() const { return ___mMinDepthForVideoBackground_18; }
	inline float* get_address_of_mMinDepthForVideoBackground_18() { return &___mMinDepthForVideoBackground_18; }
	inline void set_mMinDepthForVideoBackground_18(float value)
	{
		___mMinDepthForVideoBackground_18 = value;
	}

	inline static int32_t get_offset_of_mScreenWidth_19() { return static_cast<int32_t>(offsetof(VRDeviceCameraConfiguration_t647AFB774A37819F464C5D5F01599CAD29FD7E57, ___mScreenWidth_19)); }
	inline int32_t get_mScreenWidth_19() const { return ___mScreenWidth_19; }
	inline int32_t* get_address_of_mScreenWidth_19() { return &___mScreenWidth_19; }
	inline void set_mScreenWidth_19(int32_t value)
	{
		___mScreenWidth_19 = value;
	}

	inline static int32_t get_offset_of_mScreenHeight_20() { return static_cast<int32_t>(offsetof(VRDeviceCameraConfiguration_t647AFB774A37819F464C5D5F01599CAD29FD7E57, ___mScreenHeight_20)); }
	inline int32_t get_mScreenHeight_20() const { return ___mScreenHeight_20; }
	inline int32_t* get_address_of_mScreenHeight_20() { return &___mScreenHeight_20; }
	inline void set_mScreenHeight_20(int32_t value)
	{
		___mScreenHeight_20 = value;
	}

	inline static int32_t get_offset_of_mStereoDepth_21() { return static_cast<int32_t>(offsetof(VRDeviceCameraConfiguration_t647AFB774A37819F464C5D5F01599CAD29FD7E57, ___mStereoDepth_21)); }
	inline float get_mStereoDepth_21() const { return ___mStereoDepth_21; }
	inline float* get_address_of_mStereoDepth_21() { return &___mStereoDepth_21; }
	inline void set_mStereoDepth_21(float value)
	{
		___mStereoDepth_21 = value;
	}

	inline static int32_t get_offset_of_mResetMatrix_22() { return static_cast<int32_t>(offsetof(VRDeviceCameraConfiguration_t647AFB774A37819F464C5D5F01599CAD29FD7E57, ___mResetMatrix_22)); }
	inline bool get_mResetMatrix_22() const { return ___mResetMatrix_22; }
	inline bool* get_address_of_mResetMatrix_22() { return &___mResetMatrix_22; }
	inline void set_mResetMatrix_22(bool value)
	{
		___mResetMatrix_22 = value;
	}

	inline static int32_t get_offset_of_mVuforiaFrustumSkew_23() { return static_cast<int32_t>(offsetof(VRDeviceCameraConfiguration_t647AFB774A37819F464C5D5F01599CAD29FD7E57, ___mVuforiaFrustumSkew_23)); }
	inline Dictionary_2_tA50FC73B50AEAE38268B60A47025C7B19AB363C7 * get_mVuforiaFrustumSkew_23() const { return ___mVuforiaFrustumSkew_23; }
	inline Dictionary_2_tA50FC73B50AEAE38268B60A47025C7B19AB363C7 ** get_address_of_mVuforiaFrustumSkew_23() { return &___mVuforiaFrustumSkew_23; }
	inline void set_mVuforiaFrustumSkew_23(Dictionary_2_tA50FC73B50AEAE38268B60A47025C7B19AB363C7 * value)
	{
		___mVuforiaFrustumSkew_23 = value;
		Il2CppCodeGenWriteBarrier((&___mVuforiaFrustumSkew_23), value);
	}

	inline static int32_t get_offset_of_mCenterToEyeAxis_24() { return static_cast<int32_t>(offsetof(VRDeviceCameraConfiguration_t647AFB774A37819F464C5D5F01599CAD29FD7E57, ___mCenterToEyeAxis_24)); }
	inline Dictionary_2_tA50FC73B50AEAE38268B60A47025C7B19AB363C7 * get_mCenterToEyeAxis_24() const { return ___mCenterToEyeAxis_24; }
	inline Dictionary_2_tA50FC73B50AEAE38268B60A47025C7B19AB363C7 ** get_address_of_mCenterToEyeAxis_24() { return &___mCenterToEyeAxis_24; }
	inline void set_mCenterToEyeAxis_24(Dictionary_2_tA50FC73B50AEAE38268B60A47025C7B19AB363C7 * value)
	{
		___mCenterToEyeAxis_24 = value;
		Il2CppCodeGenWriteBarrier((&___mCenterToEyeAxis_24), value);
	}

	inline static int32_t get_offset_of_mVrDeviceController_25() { return static_cast<int32_t>(offsetof(VRDeviceCameraConfiguration_t647AFB774A37819F464C5D5F01599CAD29FD7E57, ___mVrDeviceController_25)); }
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
#endif // VRDEVICECAMERACONFIGURATION_T647AFB774A37819F464C5D5F01599CAD29FD7E57_H
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
#ifndef EXTERNALVRDEVICECAMERACONFIGURATION_T22E28FE2FAB2D078AC355155BECEF402BEB11EA2_H
#define EXTERNALVRDEVICECAMERACONFIGURATION_T22E28FE2FAB2D078AC355155BECEF402BEB11EA2_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.ExternalVRDeviceCameraConfiguration
struct  ExternalVRDeviceCameraConfiguration_t22E28FE2FAB2D078AC355155BECEF402BEB11EA2  : public VRDeviceCameraConfiguration_t647AFB774A37819F464C5D5F01599CAD29FD7E57
{
public:
	// Vuforia.VuforiaARController/WorldCenterMode Vuforia.ExternalVRDeviceCameraConfiguration::mLastWorldCenterMode
	int32_t ___mLastWorldCenterMode_27;

public:
	inline static int32_t get_offset_of_mLastWorldCenterMode_27() { return static_cast<int32_t>(offsetof(ExternalVRDeviceCameraConfiguration_t22E28FE2FAB2D078AC355155BECEF402BEB11EA2, ___mLastWorldCenterMode_27)); }
	inline int32_t get_mLastWorldCenterMode_27() const { return ___mLastWorldCenterMode_27; }
	inline int32_t* get_address_of_mLastWorldCenterMode_27() { return &___mLastWorldCenterMode_27; }
	inline void set_mLastWorldCenterMode_27(int32_t value)
	{
		___mLastWorldCenterMode_27 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXTERNALVRDEVICECAMERACONFIGURATION_T22E28FE2FAB2D078AC355155BECEF402BEB11EA2_H
#ifndef VUFORIAVRDEVICECAMERACONFIGURATION_TCB9640859B8EDE61154CAA9A09DADF84905FEAED_H
#define VUFORIAVRDEVICECAMERACONFIGURATION_TCB9640859B8EDE61154CAA9A09DADF84905FEAED_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.VuforiaVRDeviceCameraConfiguration
struct  VuforiaVRDeviceCameraConfiguration_tCB9640859B8EDE61154CAA9A09DADF84905FEAED  : public VRDeviceCameraConfiguration_t647AFB774A37819F464C5D5F01599CAD29FD7E57
{
public:
	// System.Single Vuforia.VuforiaVRDeviceCameraConfiguration::mStereoOffset
	float ___mStereoOffset_27;
	// System.Boolean Vuforia.VuforiaVRDeviceCameraConfiguration::mDelayedVideoBackgroundEnabledChanged
	bool ___mDelayedVideoBackgroundEnabledChanged_28;

public:
	inline static int32_t get_offset_of_mStereoOffset_27() { return static_cast<int32_t>(offsetof(VuforiaVRDeviceCameraConfiguration_tCB9640859B8EDE61154CAA9A09DADF84905FEAED, ___mStereoOffset_27)); }
	inline float get_mStereoOffset_27() const { return ___mStereoOffset_27; }
	inline float* get_address_of_mStereoOffset_27() { return &___mStereoOffset_27; }
	inline void set_mStereoOffset_27(float value)
	{
		___mStereoOffset_27 = value;
	}

	inline static int32_t get_offset_of_mDelayedVideoBackgroundEnabledChanged_28() { return static_cast<int32_t>(offsetof(VuforiaVRDeviceCameraConfiguration_tCB9640859B8EDE61154CAA9A09DADF84905FEAED, ___mDelayedVideoBackgroundEnabledChanged_28)); }
	inline bool get_mDelayedVideoBackgroundEnabledChanged_28() const { return ___mDelayedVideoBackgroundEnabledChanged_28; }
	inline bool* get_address_of_mDelayedVideoBackgroundEnabledChanged_28() { return &___mDelayedVideoBackgroundEnabledChanged_28; }
	inline void set_mDelayedVideoBackgroundEnabledChanged_28(bool value)
	{
		___mDelayedVideoBackgroundEnabledChanged_28 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VUFORIAVRDEVICECAMERACONFIGURATION_TCB9640859B8EDE61154CAA9A09DADF84905FEAED_H
#ifndef DEFAULTMODELRECOEVENTHANDLERPLACEHOLDER_T673F37C51BFA1B123383CA7BDF13995754AF7259_H
#define DEFAULTMODELRECOEVENTHANDLERPLACEHOLDER_T673F37C51BFA1B123383CA7BDF13995754AF7259_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DefaultModelRecoEventHandlerPlaceHolder
struct  DefaultModelRecoEventHandlerPlaceHolder_t673F37C51BFA1B123383CA7BDF13995754AF7259  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEFAULTMODELRECOEVENTHANDLERPLACEHOLDER_T673F37C51BFA1B123383CA7BDF13995754AF7259_H
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
#ifndef DEFAULTINITIALIZATIONERRORHANDLERINTERNAL_T070410BFD6016AD74D2FEE5CBA147D4C2E9080A4_H
#define DEFAULTINITIALIZATIONERRORHANDLERINTERNAL_T070410BFD6016AD74D2FEE5CBA147D4C2E9080A4_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DefaultInitializationErrorHandlerInternal
struct  DefaultInitializationErrorHandlerInternal_t070410BFD6016AD74D2FEE5CBA147D4C2E9080A4  : public VuforiaMonoBehaviour_t806C61E721B78928AF6266F3AF838FA2CB56AB5D
{
public:
	// System.String DefaultInitializationErrorHandlerInternal::mErrorText
	String_t* ___mErrorText_4;
	// System.Boolean DefaultInitializationErrorHandlerInternal::mErrorOccurred
	bool ___mErrorOccurred_5;
	// UnityEngine.GUIStyle DefaultInitializationErrorHandlerInternal::bodyStyle
	GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * ___bodyStyle_7;
	// UnityEngine.GUIStyle DefaultInitializationErrorHandlerInternal::headerStyle
	GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * ___headerStyle_8;
	// UnityEngine.GUIStyle DefaultInitializationErrorHandlerInternal::footerStyle
	GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * ___footerStyle_9;
	// UnityEngine.Texture2D DefaultInitializationErrorHandlerInternal::bodyTexture
	Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * ___bodyTexture_10;
	// UnityEngine.Texture2D DefaultInitializationErrorHandlerInternal::headerTexture
	Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * ___headerTexture_11;
	// UnityEngine.Texture2D DefaultInitializationErrorHandlerInternal::footerTexture
	Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * ___footerTexture_12;

public:
	inline static int32_t get_offset_of_mErrorText_4() { return static_cast<int32_t>(offsetof(DefaultInitializationErrorHandlerInternal_t070410BFD6016AD74D2FEE5CBA147D4C2E9080A4, ___mErrorText_4)); }
	inline String_t* get_mErrorText_4() const { return ___mErrorText_4; }
	inline String_t** get_address_of_mErrorText_4() { return &___mErrorText_4; }
	inline void set_mErrorText_4(String_t* value)
	{
		___mErrorText_4 = value;
		Il2CppCodeGenWriteBarrier((&___mErrorText_4), value);
	}

	inline static int32_t get_offset_of_mErrorOccurred_5() { return static_cast<int32_t>(offsetof(DefaultInitializationErrorHandlerInternal_t070410BFD6016AD74D2FEE5CBA147D4C2E9080A4, ___mErrorOccurred_5)); }
	inline bool get_mErrorOccurred_5() const { return ___mErrorOccurred_5; }
	inline bool* get_address_of_mErrorOccurred_5() { return &___mErrorOccurred_5; }
	inline void set_mErrorOccurred_5(bool value)
	{
		___mErrorOccurred_5 = value;
	}

	inline static int32_t get_offset_of_bodyStyle_7() { return static_cast<int32_t>(offsetof(DefaultInitializationErrorHandlerInternal_t070410BFD6016AD74D2FEE5CBA147D4C2E9080A4, ___bodyStyle_7)); }
	inline GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * get_bodyStyle_7() const { return ___bodyStyle_7; }
	inline GUIStyle_t671F175A201A19166385EE3392292A5F50070572 ** get_address_of_bodyStyle_7() { return &___bodyStyle_7; }
	inline void set_bodyStyle_7(GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * value)
	{
		___bodyStyle_7 = value;
		Il2CppCodeGenWriteBarrier((&___bodyStyle_7), value);
	}

	inline static int32_t get_offset_of_headerStyle_8() { return static_cast<int32_t>(offsetof(DefaultInitializationErrorHandlerInternal_t070410BFD6016AD74D2FEE5CBA147D4C2E9080A4, ___headerStyle_8)); }
	inline GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * get_headerStyle_8() const { return ___headerStyle_8; }
	inline GUIStyle_t671F175A201A19166385EE3392292A5F50070572 ** get_address_of_headerStyle_8() { return &___headerStyle_8; }
	inline void set_headerStyle_8(GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * value)
	{
		___headerStyle_8 = value;
		Il2CppCodeGenWriteBarrier((&___headerStyle_8), value);
	}

	inline static int32_t get_offset_of_footerStyle_9() { return static_cast<int32_t>(offsetof(DefaultInitializationErrorHandlerInternal_t070410BFD6016AD74D2FEE5CBA147D4C2E9080A4, ___footerStyle_9)); }
	inline GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * get_footerStyle_9() const { return ___footerStyle_9; }
	inline GUIStyle_t671F175A201A19166385EE3392292A5F50070572 ** get_address_of_footerStyle_9() { return &___footerStyle_9; }
	inline void set_footerStyle_9(GUIStyle_t671F175A201A19166385EE3392292A5F50070572 * value)
	{
		___footerStyle_9 = value;
		Il2CppCodeGenWriteBarrier((&___footerStyle_9), value);
	}

	inline static int32_t get_offset_of_bodyTexture_10() { return static_cast<int32_t>(offsetof(DefaultInitializationErrorHandlerInternal_t070410BFD6016AD74D2FEE5CBA147D4C2E9080A4, ___bodyTexture_10)); }
	inline Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * get_bodyTexture_10() const { return ___bodyTexture_10; }
	inline Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C ** get_address_of_bodyTexture_10() { return &___bodyTexture_10; }
	inline void set_bodyTexture_10(Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * value)
	{
		___bodyTexture_10 = value;
		Il2CppCodeGenWriteBarrier((&___bodyTexture_10), value);
	}

	inline static int32_t get_offset_of_headerTexture_11() { return static_cast<int32_t>(offsetof(DefaultInitializationErrorHandlerInternal_t070410BFD6016AD74D2FEE5CBA147D4C2E9080A4, ___headerTexture_11)); }
	inline Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * get_headerTexture_11() const { return ___headerTexture_11; }
	inline Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C ** get_address_of_headerTexture_11() { return &___headerTexture_11; }
	inline void set_headerTexture_11(Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * value)
	{
		___headerTexture_11 = value;
		Il2CppCodeGenWriteBarrier((&___headerTexture_11), value);
	}

	inline static int32_t get_offset_of_footerTexture_12() { return static_cast<int32_t>(offsetof(DefaultInitializationErrorHandlerInternal_t070410BFD6016AD74D2FEE5CBA147D4C2E9080A4, ___footerTexture_12)); }
	inline Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * get_footerTexture_12() const { return ___footerTexture_12; }
	inline Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C ** get_address_of_footerTexture_12() { return &___footerTexture_12; }
	inline void set_footerTexture_12(Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * value)
	{
		___footerTexture_12 = value;
		Il2CppCodeGenWriteBarrier((&___footerTexture_12), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEFAULTINITIALIZATIONERRORHANDLERINTERNAL_T070410BFD6016AD74D2FEE5CBA147D4C2E9080A4_H
#ifndef DEFAULTINITIALIZATIONERRORHANDLERPLACEHOLDER_T15644F32C0CF8452355C6CE7E70A9D53AD622A1D_H
#define DEFAULTINITIALIZATIONERRORHANDLERPLACEHOLDER_T15644F32C0CF8452355C6CE7E70A9D53AD622A1D_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DefaultInitializationErrorHandlerPlaceHolder
struct  DefaultInitializationErrorHandlerPlaceHolder_t15644F32C0CF8452355C6CE7E70A9D53AD622A1D  : public VuforiaMonoBehaviour_t806C61E721B78928AF6266F3AF838FA2CB56AB5D
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEFAULTINITIALIZATIONERRORHANDLERPLACEHOLDER_T15644F32C0CF8452355C6CE7E70A9D53AD622A1D_H
#ifndef DEFAULTTRACKABLEBEHAVIOURPLACEHOLDER_TFE7DDD8DB77F0237E4C998B84A73B85F90A2450F_H
#define DEFAULTTRACKABLEBEHAVIOURPLACEHOLDER_TFE7DDD8DB77F0237E4C998B84A73B85F90A2450F_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DefaultTrackableBehaviourPlaceholder
struct  DefaultTrackableBehaviourPlaceholder_tFE7DDD8DB77F0237E4C998B84A73B85F90A2450F  : public VuforiaMonoBehaviour_t806C61E721B78928AF6266F3AF838FA2CB56AB5D
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEFAULTTRACKABLEBEHAVIOURPLACEHOLDER_TFE7DDD8DB77F0237E4C998B84A73B85F90A2450F_H
#ifndef ANCHORINPUTLISTENERBEHAVIOUR_TF944EDC39D85497FCE2C5AF520164C0B759EA404_H
#define ANCHORINPUTLISTENERBEHAVIOUR_TF944EDC39D85497FCE2C5AF520164C0B759EA404_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.AnchorInputListenerBehaviour
struct  AnchorInputListenerBehaviour_tF944EDC39D85497FCE2C5AF520164C0B759EA404  : public VuforiaMonoBehaviour_t806C61E721B78928AF6266F3AF838FA2CB56AB5D
{
public:
	// Vuforia.AnchorInputListenerBehaviour/InputReceivedEvent Vuforia.AnchorInputListenerBehaviour::OnInputReceivedEvent
	InputReceivedEvent_t30AD5C108997667B53F1C6C844EF0B80096BD49C * ___OnInputReceivedEvent_4;
	// System.Boolean Vuforia.AnchorInputListenerBehaviour::mDisplayAdvanced
	bool ___mDisplayAdvanced_5;

public:
	inline static int32_t get_offset_of_OnInputReceivedEvent_4() { return static_cast<int32_t>(offsetof(AnchorInputListenerBehaviour_tF944EDC39D85497FCE2C5AF520164C0B759EA404, ___OnInputReceivedEvent_4)); }
	inline InputReceivedEvent_t30AD5C108997667B53F1C6C844EF0B80096BD49C * get_OnInputReceivedEvent_4() const { return ___OnInputReceivedEvent_4; }
	inline InputReceivedEvent_t30AD5C108997667B53F1C6C844EF0B80096BD49C ** get_address_of_OnInputReceivedEvent_4() { return &___OnInputReceivedEvent_4; }
	inline void set_OnInputReceivedEvent_4(InputReceivedEvent_t30AD5C108997667B53F1C6C844EF0B80096BD49C * value)
	{
		___OnInputReceivedEvent_4 = value;
		Il2CppCodeGenWriteBarrier((&___OnInputReceivedEvent_4), value);
	}

	inline static int32_t get_offset_of_mDisplayAdvanced_5() { return static_cast<int32_t>(offsetof(AnchorInputListenerBehaviour_tF944EDC39D85497FCE2C5AF520164C0B759EA404, ___mDisplayAdvanced_5)); }
	inline bool get_mDisplayAdvanced_5() const { return ___mDisplayAdvanced_5; }
	inline bool* get_address_of_mDisplayAdvanced_5() { return &___mDisplayAdvanced_5; }
	inline void set_mDisplayAdvanced_5(bool value)
	{
		___mDisplayAdvanced_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ANCHORINPUTLISTENERBEHAVIOUR_TF944EDC39D85497FCE2C5AF520164C0B759EA404_H
#ifndef CONTENTPOSITIONINGBEHAVIOUR_T8B3CF7741A8FE98EAAE4210540CDA194E4379B5B_H
#define CONTENTPOSITIONINGBEHAVIOUR_T8B3CF7741A8FE98EAAE4210540CDA194E4379B5B_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.ContentPositioningBehaviour
struct  ContentPositioningBehaviour_t8B3CF7741A8FE98EAAE4210540CDA194E4379B5B  : public VuforiaMonoBehaviour_t806C61E721B78928AF6266F3AF838FA2CB56AB5D
{
public:
	// Vuforia.AnchorBehaviour Vuforia.ContentPositioningBehaviour::AnchorStage
	AnchorBehaviour_t44D245039CC4D9728F7594297E43EEE0885CB23E * ___AnchorStage_4;
	// System.Boolean Vuforia.ContentPositioningBehaviour::DuplicateStage
	bool ___DuplicateStage_5;
	// Vuforia.ContentPlacedEvent Vuforia.ContentPositioningBehaviour::OnContentPlaced
	ContentPlacedEvent_t6F76CC86D8FF827E64E67C1DB8D770FB7A085997 * ___OnContentPlaced_6;
	// System.Boolean Vuforia.ContentPositioningBehaviour::mDisplayAdvanced
	bool ___mDisplayAdvanced_7;
	// Vuforia.PositionalDeviceTracker Vuforia.ContentPositioningBehaviour::mDeviceTracker
	PositionalDeviceTracker_tEFAA5FDB9CF19DA74081AE51B41B4B5D9F40D8EE * ___mDeviceTracker_10;
	// System.Collections.Generic.ICollection`1<Vuforia.AnchorBehaviour> Vuforia.ContentPositioningBehaviour::mInstantiatedAnchors
	RuntimeObject* ___mInstantiatedAnchors_11;

public:
	inline static int32_t get_offset_of_AnchorStage_4() { return static_cast<int32_t>(offsetof(ContentPositioningBehaviour_t8B3CF7741A8FE98EAAE4210540CDA194E4379B5B, ___AnchorStage_4)); }
	inline AnchorBehaviour_t44D245039CC4D9728F7594297E43EEE0885CB23E * get_AnchorStage_4() const { return ___AnchorStage_4; }
	inline AnchorBehaviour_t44D245039CC4D9728F7594297E43EEE0885CB23E ** get_address_of_AnchorStage_4() { return &___AnchorStage_4; }
	inline void set_AnchorStage_4(AnchorBehaviour_t44D245039CC4D9728F7594297E43EEE0885CB23E * value)
	{
		___AnchorStage_4 = value;
		Il2CppCodeGenWriteBarrier((&___AnchorStage_4), value);
	}

	inline static int32_t get_offset_of_DuplicateStage_5() { return static_cast<int32_t>(offsetof(ContentPositioningBehaviour_t8B3CF7741A8FE98EAAE4210540CDA194E4379B5B, ___DuplicateStage_5)); }
	inline bool get_DuplicateStage_5() const { return ___DuplicateStage_5; }
	inline bool* get_address_of_DuplicateStage_5() { return &___DuplicateStage_5; }
	inline void set_DuplicateStage_5(bool value)
	{
		___DuplicateStage_5 = value;
	}

	inline static int32_t get_offset_of_OnContentPlaced_6() { return static_cast<int32_t>(offsetof(ContentPositioningBehaviour_t8B3CF7741A8FE98EAAE4210540CDA194E4379B5B, ___OnContentPlaced_6)); }
	inline ContentPlacedEvent_t6F76CC86D8FF827E64E67C1DB8D770FB7A085997 * get_OnContentPlaced_6() const { return ___OnContentPlaced_6; }
	inline ContentPlacedEvent_t6F76CC86D8FF827E64E67C1DB8D770FB7A085997 ** get_address_of_OnContentPlaced_6() { return &___OnContentPlaced_6; }
	inline void set_OnContentPlaced_6(ContentPlacedEvent_t6F76CC86D8FF827E64E67C1DB8D770FB7A085997 * value)
	{
		___OnContentPlaced_6 = value;
		Il2CppCodeGenWriteBarrier((&___OnContentPlaced_6), value);
	}

	inline static int32_t get_offset_of_mDisplayAdvanced_7() { return static_cast<int32_t>(offsetof(ContentPositioningBehaviour_t8B3CF7741A8FE98EAAE4210540CDA194E4379B5B, ___mDisplayAdvanced_7)); }
	inline bool get_mDisplayAdvanced_7() const { return ___mDisplayAdvanced_7; }
	inline bool* get_address_of_mDisplayAdvanced_7() { return &___mDisplayAdvanced_7; }
	inline void set_mDisplayAdvanced_7(bool value)
	{
		___mDisplayAdvanced_7 = value;
	}

	inline static int32_t get_offset_of_mDeviceTracker_10() { return static_cast<int32_t>(offsetof(ContentPositioningBehaviour_t8B3CF7741A8FE98EAAE4210540CDA194E4379B5B, ___mDeviceTracker_10)); }
	inline PositionalDeviceTracker_tEFAA5FDB9CF19DA74081AE51B41B4B5D9F40D8EE * get_mDeviceTracker_10() const { return ___mDeviceTracker_10; }
	inline PositionalDeviceTracker_tEFAA5FDB9CF19DA74081AE51B41B4B5D9F40D8EE ** get_address_of_mDeviceTracker_10() { return &___mDeviceTracker_10; }
	inline void set_mDeviceTracker_10(PositionalDeviceTracker_tEFAA5FDB9CF19DA74081AE51B41B4B5D9F40D8EE * value)
	{
		___mDeviceTracker_10 = value;
		Il2CppCodeGenWriteBarrier((&___mDeviceTracker_10), value);
	}

	inline static int32_t get_offset_of_mInstantiatedAnchors_11() { return static_cast<int32_t>(offsetof(ContentPositioningBehaviour_t8B3CF7741A8FE98EAAE4210540CDA194E4379B5B, ___mInstantiatedAnchors_11)); }
	inline RuntimeObject* get_mInstantiatedAnchors_11() const { return ___mInstantiatedAnchors_11; }
	inline RuntimeObject** get_address_of_mInstantiatedAnchors_11() { return &___mInstantiatedAnchors_11; }
	inline void set_mInstantiatedAnchors_11(RuntimeObject* value)
	{
		___mInstantiatedAnchors_11 = value;
		Il2CppCodeGenWriteBarrier((&___mInstantiatedAnchors_11), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONTENTPOSITIONINGBEHAVIOUR_T8B3CF7741A8FE98EAAE4210540CDA194E4379B5B_H
#ifndef GLERRORHANDLER_T0E814EDCBE6293FD3D378715730ED229429AB93A_H
#define GLERRORHANDLER_T0E814EDCBE6293FD3D378715730ED229429AB93A_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.GLErrorHandler
struct  GLErrorHandler_t0E814EDCBE6293FD3D378715730ED229429AB93A  : public VuforiaMonoBehaviour_t806C61E721B78928AF6266F3AF838FA2CB56AB5D
{
public:

public:
};

struct GLErrorHandler_t0E814EDCBE6293FD3D378715730ED229429AB93A_StaticFields
{
public:
	// System.String Vuforia.GLErrorHandler::mErrorText
	String_t* ___mErrorText_4;
	// System.Boolean Vuforia.GLErrorHandler::mErrorOccurred
	bool ___mErrorOccurred_5;

public:
	inline static int32_t get_offset_of_mErrorText_4() { return static_cast<int32_t>(offsetof(GLErrorHandler_t0E814EDCBE6293FD3D378715730ED229429AB93A_StaticFields, ___mErrorText_4)); }
	inline String_t* get_mErrorText_4() const { return ___mErrorText_4; }
	inline String_t** get_address_of_mErrorText_4() { return &___mErrorText_4; }
	inline void set_mErrorText_4(String_t* value)
	{
		___mErrorText_4 = value;
		Il2CppCodeGenWriteBarrier((&___mErrorText_4), value);
	}

	inline static int32_t get_offset_of_mErrorOccurred_5() { return static_cast<int32_t>(offsetof(GLErrorHandler_t0E814EDCBE6293FD3D378715730ED229429AB93A_StaticFields, ___mErrorOccurred_5)); }
	inline bool get_mErrorOccurred_5() const { return ___mErrorOccurred_5; }
	inline bool* get_address_of_mErrorOccurred_5() { return &___mErrorOccurred_5; }
	inline void set_mErrorOccurred_5(bool value)
	{
		___mErrorOccurred_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GLERRORHANDLER_T0E814EDCBE6293FD3D378715730ED229429AB93A_H
#ifndef GUIDEVIEW2DBEHAVIOUR_T2B9C7F5CED5A2EE6DCEF7BBE93B74C012A2EE52B_H
#define GUIDEVIEW2DBEHAVIOUR_T2B9C7F5CED5A2EE6DCEF7BBE93B74C012A2EE52B_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.GuideView2DBehaviour
struct  GuideView2DBehaviour_t2B9C7F5CED5A2EE6DCEF7BBE93B74C012A2EE52B  : public VuforiaMonoBehaviour_t806C61E721B78928AF6266F3AF838FA2CB56AB5D
{
public:
	// System.Single Vuforia.GuideView2DBehaviour::mCameraAspect
	float ___mCameraAspect_4;
	// System.Single Vuforia.GuideView2DBehaviour::mCameraFOV
	float ___mCameraFOV_5;
	// System.Single Vuforia.GuideView2DBehaviour::mCameraNearPlane
	float ___mCameraNearPlane_6;
	// UnityEngine.Texture2D Vuforia.GuideView2DBehaviour::mGuideViewTexture
	Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * ___mGuideViewTexture_7;
	// System.Boolean Vuforia.GuideView2DBehaviour::mFlipImageVertically
	bool ___mFlipImageVertically_8;

public:
	inline static int32_t get_offset_of_mCameraAspect_4() { return static_cast<int32_t>(offsetof(GuideView2DBehaviour_t2B9C7F5CED5A2EE6DCEF7BBE93B74C012A2EE52B, ___mCameraAspect_4)); }
	inline float get_mCameraAspect_4() const { return ___mCameraAspect_4; }
	inline float* get_address_of_mCameraAspect_4() { return &___mCameraAspect_4; }
	inline void set_mCameraAspect_4(float value)
	{
		___mCameraAspect_4 = value;
	}

	inline static int32_t get_offset_of_mCameraFOV_5() { return static_cast<int32_t>(offsetof(GuideView2DBehaviour_t2B9C7F5CED5A2EE6DCEF7BBE93B74C012A2EE52B, ___mCameraFOV_5)); }
	inline float get_mCameraFOV_5() const { return ___mCameraFOV_5; }
	inline float* get_address_of_mCameraFOV_5() { return &___mCameraFOV_5; }
	inline void set_mCameraFOV_5(float value)
	{
		___mCameraFOV_5 = value;
	}

	inline static int32_t get_offset_of_mCameraNearPlane_6() { return static_cast<int32_t>(offsetof(GuideView2DBehaviour_t2B9C7F5CED5A2EE6DCEF7BBE93B74C012A2EE52B, ___mCameraNearPlane_6)); }
	inline float get_mCameraNearPlane_6() const { return ___mCameraNearPlane_6; }
	inline float* get_address_of_mCameraNearPlane_6() { return &___mCameraNearPlane_6; }
	inline void set_mCameraNearPlane_6(float value)
	{
		___mCameraNearPlane_6 = value;
	}

	inline static int32_t get_offset_of_mGuideViewTexture_7() { return static_cast<int32_t>(offsetof(GuideView2DBehaviour_t2B9C7F5CED5A2EE6DCEF7BBE93B74C012A2EE52B, ___mGuideViewTexture_7)); }
	inline Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * get_mGuideViewTexture_7() const { return ___mGuideViewTexture_7; }
	inline Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C ** get_address_of_mGuideViewTexture_7() { return &___mGuideViewTexture_7; }
	inline void set_mGuideViewTexture_7(Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * value)
	{
		___mGuideViewTexture_7 = value;
		Il2CppCodeGenWriteBarrier((&___mGuideViewTexture_7), value);
	}

	inline static int32_t get_offset_of_mFlipImageVertically_8() { return static_cast<int32_t>(offsetof(GuideView2DBehaviour_t2B9C7F5CED5A2EE6DCEF7BBE93B74C012A2EE52B, ___mFlipImageVertically_8)); }
	inline bool get_mFlipImageVertically_8() const { return ___mFlipImageVertically_8; }
	inline bool* get_address_of_mFlipImageVertically_8() { return &___mFlipImageVertically_8; }
	inline void set_mFlipImageVertically_8(bool value)
	{
		___mFlipImageVertically_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GUIDEVIEW2DBEHAVIOUR_T2B9C7F5CED5A2EE6DCEF7BBE93B74C012A2EE52B_H
#ifndef GUIDEVIEW3DBEHAVIOUR_TAFB7AAB771DAFC4E0CC71309E8B7B87FAC63EDC0_H
#define GUIDEVIEW3DBEHAVIOUR_TAFB7AAB771DAFC4E0CC71309E8B7B87FAC63EDC0_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.GuideView3DBehaviour
struct  GuideView3DBehaviour_tAFB7AAB771DAFC4E0CC71309E8B7B87FAC63EDC0  : public VuforiaMonoBehaviour_t806C61E721B78928AF6266F3AF838FA2CB56AB5D
{
public:
	// Vuforia.GuideView Vuforia.GuideView3DBehaviour::mCurrentGuideView
	GuideView_t0732A5D3A8536A322937D1E3FB0DF808ED666956 * ___mCurrentGuideView_4;

public:
	inline static int32_t get_offset_of_mCurrentGuideView_4() { return static_cast<int32_t>(offsetof(GuideView3DBehaviour_tAFB7AAB771DAFC4E0CC71309E8B7B87FAC63EDC0, ___mCurrentGuideView_4)); }
	inline GuideView_t0732A5D3A8536A322937D1E3FB0DF808ED666956 * get_mCurrentGuideView_4() const { return ___mCurrentGuideView_4; }
	inline GuideView_t0732A5D3A8536A322937D1E3FB0DF808ED666956 ** get_address_of_mCurrentGuideView_4() { return &___mCurrentGuideView_4; }
	inline void set_mCurrentGuideView_4(GuideView_t0732A5D3A8536A322937D1E3FB0DF808ED666956 * value)
	{
		___mCurrentGuideView_4 = value;
		Il2CppCodeGenWriteBarrier((&___mCurrentGuideView_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GUIDEVIEW3DBEHAVIOUR_TAFB7AAB771DAFC4E0CC71309E8B7B87FAC63EDC0_H
#ifndef GUIDEVIEWCAMERABEHAVIOUR_T78CD9CA8AB9C4B31C2173C2DBCB663A9BD8464A9_H
#define GUIDEVIEWCAMERABEHAVIOUR_T78CD9CA8AB9C4B31C2173C2DBCB663A9BD8464A9_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.GuideViewCameraBehaviour
struct  GuideViewCameraBehaviour_t78CD9CA8AB9C4B31C2173C2DBCB663A9BD8464A9  : public VuforiaMonoBehaviour_t806C61E721B78928AF6266F3AF838FA2CB56AB5D
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GUIDEVIEWCAMERABEHAVIOUR_T78CD9CA8AB9C4B31C2173C2DBCB663A9BD8464A9_H
#ifndef GUIDEVIEWRENDERINGBEHAVIOUR_TF142A04A9437EFC6298F1D6CD1629DD8C334FD62_H
#define GUIDEVIEWRENDERINGBEHAVIOUR_TF142A04A9437EFC6298F1D6CD1629DD8C334FD62_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.GuideViewRenderingBehaviour
struct  GuideViewRenderingBehaviour_tF142A04A9437EFC6298F1D6CD1629DD8C334FD62  : public VuforiaMonoBehaviour_t806C61E721B78928AF6266F3AF838FA2CB56AB5D
{
public:
	// System.Single Vuforia.GuideViewRenderingBehaviour::guideReappearanceDelay
	float ___guideReappearanceDelay_4;
	// Vuforia.ModelTargetBehaviour Vuforia.GuideViewRenderingBehaviour::mTrackedTarget
	ModelTargetBehaviour_t283F7A0B136589E033A458B5FE0C42F3248CE0B0 * ___mTrackedTarget_7;
	// Vuforia.ModelTargetBehaviour/GuideViewDisplayMode Vuforia.GuideViewRenderingBehaviour::mGuideViewDisplayMode
	int32_t ___mGuideViewDisplayMode_8;
	// Vuforia.GuideView Vuforia.GuideViewRenderingBehaviour::mGuideView
	GuideView_t0732A5D3A8536A322937D1E3FB0DF808ED666956 * ___mGuideView_9;
	// System.Boolean Vuforia.GuideViewRenderingBehaviour::mGuideViewInitialized
	bool ___mGuideViewInitialized_10;
	// System.Collections.IEnumerator Vuforia.GuideViewRenderingBehaviour::mShowGuideViewCoroutine
	RuntimeObject* ___mShowGuideViewCoroutine_11;
	// UnityEngine.GameObject Vuforia.GuideViewRenderingBehaviour::mGuideViewGameObject
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___mGuideViewGameObject_12;
	// System.Boolean Vuforia.GuideViewRenderingBehaviour::mGuideViewShown
	bool ___mGuideViewShown_13;
	// UnityEngine.DepthTextureMode Vuforia.GuideViewRenderingBehaviour::mPrevDepthTextureMode
	int32_t ___mPrevDepthTextureMode_14;

public:
	inline static int32_t get_offset_of_guideReappearanceDelay_4() { return static_cast<int32_t>(offsetof(GuideViewRenderingBehaviour_tF142A04A9437EFC6298F1D6CD1629DD8C334FD62, ___guideReappearanceDelay_4)); }
	inline float get_guideReappearanceDelay_4() const { return ___guideReappearanceDelay_4; }
	inline float* get_address_of_guideReappearanceDelay_4() { return &___guideReappearanceDelay_4; }
	inline void set_guideReappearanceDelay_4(float value)
	{
		___guideReappearanceDelay_4 = value;
	}

	inline static int32_t get_offset_of_mTrackedTarget_7() { return static_cast<int32_t>(offsetof(GuideViewRenderingBehaviour_tF142A04A9437EFC6298F1D6CD1629DD8C334FD62, ___mTrackedTarget_7)); }
	inline ModelTargetBehaviour_t283F7A0B136589E033A458B5FE0C42F3248CE0B0 * get_mTrackedTarget_7() const { return ___mTrackedTarget_7; }
	inline ModelTargetBehaviour_t283F7A0B136589E033A458B5FE0C42F3248CE0B0 ** get_address_of_mTrackedTarget_7() { return &___mTrackedTarget_7; }
	inline void set_mTrackedTarget_7(ModelTargetBehaviour_t283F7A0B136589E033A458B5FE0C42F3248CE0B0 * value)
	{
		___mTrackedTarget_7 = value;
		Il2CppCodeGenWriteBarrier((&___mTrackedTarget_7), value);
	}

	inline static int32_t get_offset_of_mGuideViewDisplayMode_8() { return static_cast<int32_t>(offsetof(GuideViewRenderingBehaviour_tF142A04A9437EFC6298F1D6CD1629DD8C334FD62, ___mGuideViewDisplayMode_8)); }
	inline int32_t get_mGuideViewDisplayMode_8() const { return ___mGuideViewDisplayMode_8; }
	inline int32_t* get_address_of_mGuideViewDisplayMode_8() { return &___mGuideViewDisplayMode_8; }
	inline void set_mGuideViewDisplayMode_8(int32_t value)
	{
		___mGuideViewDisplayMode_8 = value;
	}

	inline static int32_t get_offset_of_mGuideView_9() { return static_cast<int32_t>(offsetof(GuideViewRenderingBehaviour_tF142A04A9437EFC6298F1D6CD1629DD8C334FD62, ___mGuideView_9)); }
	inline GuideView_t0732A5D3A8536A322937D1E3FB0DF808ED666956 * get_mGuideView_9() const { return ___mGuideView_9; }
	inline GuideView_t0732A5D3A8536A322937D1E3FB0DF808ED666956 ** get_address_of_mGuideView_9() { return &___mGuideView_9; }
	inline void set_mGuideView_9(GuideView_t0732A5D3A8536A322937D1E3FB0DF808ED666956 * value)
	{
		___mGuideView_9 = value;
		Il2CppCodeGenWriteBarrier((&___mGuideView_9), value);
	}

	inline static int32_t get_offset_of_mGuideViewInitialized_10() { return static_cast<int32_t>(offsetof(GuideViewRenderingBehaviour_tF142A04A9437EFC6298F1D6CD1629DD8C334FD62, ___mGuideViewInitialized_10)); }
	inline bool get_mGuideViewInitialized_10() const { return ___mGuideViewInitialized_10; }
	inline bool* get_address_of_mGuideViewInitialized_10() { return &___mGuideViewInitialized_10; }
	inline void set_mGuideViewInitialized_10(bool value)
	{
		___mGuideViewInitialized_10 = value;
	}

	inline static int32_t get_offset_of_mShowGuideViewCoroutine_11() { return static_cast<int32_t>(offsetof(GuideViewRenderingBehaviour_tF142A04A9437EFC6298F1D6CD1629DD8C334FD62, ___mShowGuideViewCoroutine_11)); }
	inline RuntimeObject* get_mShowGuideViewCoroutine_11() const { return ___mShowGuideViewCoroutine_11; }
	inline RuntimeObject** get_address_of_mShowGuideViewCoroutine_11() { return &___mShowGuideViewCoroutine_11; }
	inline void set_mShowGuideViewCoroutine_11(RuntimeObject* value)
	{
		___mShowGuideViewCoroutine_11 = value;
		Il2CppCodeGenWriteBarrier((&___mShowGuideViewCoroutine_11), value);
	}

	inline static int32_t get_offset_of_mGuideViewGameObject_12() { return static_cast<int32_t>(offsetof(GuideViewRenderingBehaviour_tF142A04A9437EFC6298F1D6CD1629DD8C334FD62, ___mGuideViewGameObject_12)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_mGuideViewGameObject_12() const { return ___mGuideViewGameObject_12; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_mGuideViewGameObject_12() { return &___mGuideViewGameObject_12; }
	inline void set_mGuideViewGameObject_12(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___mGuideViewGameObject_12 = value;
		Il2CppCodeGenWriteBarrier((&___mGuideViewGameObject_12), value);
	}

	inline static int32_t get_offset_of_mGuideViewShown_13() { return static_cast<int32_t>(offsetof(GuideViewRenderingBehaviour_tF142A04A9437EFC6298F1D6CD1629DD8C334FD62, ___mGuideViewShown_13)); }
	inline bool get_mGuideViewShown_13() const { return ___mGuideViewShown_13; }
	inline bool* get_address_of_mGuideViewShown_13() { return &___mGuideViewShown_13; }
	inline void set_mGuideViewShown_13(bool value)
	{
		___mGuideViewShown_13 = value;
	}

	inline static int32_t get_offset_of_mPrevDepthTextureMode_14() { return static_cast<int32_t>(offsetof(GuideViewRenderingBehaviour_tF142A04A9437EFC6298F1D6CD1629DD8C334FD62, ___mPrevDepthTextureMode_14)); }
	inline int32_t get_mPrevDepthTextureMode_14() const { return ___mPrevDepthTextureMode_14; }
	inline int32_t* get_address_of_mPrevDepthTextureMode_14() { return &___mPrevDepthTextureMode_14; }
	inline void set_mPrevDepthTextureMode_14(int32_t value)
	{
		___mPrevDepthTextureMode_14 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GUIDEVIEWRENDERINGBEHAVIOUR_TF142A04A9437EFC6298F1D6CD1629DD8C334FD62_H
#ifndef MASKOUTBEHAVIOUR_T1D183DD82AF2945A6334465A9E6759268AB689F4_H
#define MASKOUTBEHAVIOUR_T1D183DD82AF2945A6334465A9E6759268AB689F4_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.MaskOutBehaviour
struct  MaskOutBehaviour_t1D183DD82AF2945A6334465A9E6759268AB689F4  : public VuforiaMonoBehaviour_t806C61E721B78928AF6266F3AF838FA2CB56AB5D
{
public:
	// UnityEngine.Material Vuforia.MaskOutBehaviour::maskMaterial
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___maskMaterial_4;

public:
	inline static int32_t get_offset_of_maskMaterial_4() { return static_cast<int32_t>(offsetof(MaskOutBehaviour_t1D183DD82AF2945A6334465A9E6759268AB689F4, ___maskMaterial_4)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_maskMaterial_4() const { return ___maskMaterial_4; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_maskMaterial_4() { return &___maskMaterial_4; }
	inline void set_maskMaterial_4(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___maskMaterial_4 = value;
		Il2CppCodeGenWriteBarrier((&___maskMaterial_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MASKOUTBEHAVIOUR_T1D183DD82AF2945A6334465A9E6759268AB689F4_H
#ifndef MIDAIRPOSITIONERBEHAVIOUR_T1A3E8D1CA52D8CD157FA40A50045FE02FFDD12B0_H
#define MIDAIRPOSITIONERBEHAVIOUR_T1A3E8D1CA52D8CD157FA40A50045FE02FFDD12B0_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.MidAirPositionerBehaviour
struct  MidAirPositionerBehaviour_t1A3E8D1CA52D8CD157FA40A50045FE02FFDD12B0  : public VuforiaMonoBehaviour_t806C61E721B78928AF6266F3AF838FA2CB56AB5D
{
public:
	// System.Single Vuforia.MidAirPositionerBehaviour::DistanceToCamera
	float ___DistanceToCamera_4;
	// UnityEngine.GameObject Vuforia.MidAirPositionerBehaviour::MidAirIndicator
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___MidAirIndicator_5;
	// Vuforia.MidAirPositionerBehaviour/AnchorPositionConfirmedEvent Vuforia.MidAirPositionerBehaviour::OnAnchorPositionConfirmed
	AnchorPositionConfirmedEvent_t63B8BA26EFA42FC76914E18C5AF9E3E9223B5093 * ___OnAnchorPositionConfirmed_6;
	// UnityEngine.Camera Vuforia.MidAirPositionerBehaviour::mCamera
	Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * ___mCamera_7;
	// System.Boolean Vuforia.MidAirPositionerBehaviour::mDisplayAdvanced
	bool ___mDisplayAdvanced_8;

public:
	inline static int32_t get_offset_of_DistanceToCamera_4() { return static_cast<int32_t>(offsetof(MidAirPositionerBehaviour_t1A3E8D1CA52D8CD157FA40A50045FE02FFDD12B0, ___DistanceToCamera_4)); }
	inline float get_DistanceToCamera_4() const { return ___DistanceToCamera_4; }
	inline float* get_address_of_DistanceToCamera_4() { return &___DistanceToCamera_4; }
	inline void set_DistanceToCamera_4(float value)
	{
		___DistanceToCamera_4 = value;
	}

	inline static int32_t get_offset_of_MidAirIndicator_5() { return static_cast<int32_t>(offsetof(MidAirPositionerBehaviour_t1A3E8D1CA52D8CD157FA40A50045FE02FFDD12B0, ___MidAirIndicator_5)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_MidAirIndicator_5() const { return ___MidAirIndicator_5; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_MidAirIndicator_5() { return &___MidAirIndicator_5; }
	inline void set_MidAirIndicator_5(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___MidAirIndicator_5 = value;
		Il2CppCodeGenWriteBarrier((&___MidAirIndicator_5), value);
	}

	inline static int32_t get_offset_of_OnAnchorPositionConfirmed_6() { return static_cast<int32_t>(offsetof(MidAirPositionerBehaviour_t1A3E8D1CA52D8CD157FA40A50045FE02FFDD12B0, ___OnAnchorPositionConfirmed_6)); }
	inline AnchorPositionConfirmedEvent_t63B8BA26EFA42FC76914E18C5AF9E3E9223B5093 * get_OnAnchorPositionConfirmed_6() const { return ___OnAnchorPositionConfirmed_6; }
	inline AnchorPositionConfirmedEvent_t63B8BA26EFA42FC76914E18C5AF9E3E9223B5093 ** get_address_of_OnAnchorPositionConfirmed_6() { return &___OnAnchorPositionConfirmed_6; }
	inline void set_OnAnchorPositionConfirmed_6(AnchorPositionConfirmedEvent_t63B8BA26EFA42FC76914E18C5AF9E3E9223B5093 * value)
	{
		___OnAnchorPositionConfirmed_6 = value;
		Il2CppCodeGenWriteBarrier((&___OnAnchorPositionConfirmed_6), value);
	}

	inline static int32_t get_offset_of_mCamera_7() { return static_cast<int32_t>(offsetof(MidAirPositionerBehaviour_t1A3E8D1CA52D8CD157FA40A50045FE02FFDD12B0, ___mCamera_7)); }
	inline Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * get_mCamera_7() const { return ___mCamera_7; }
	inline Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 ** get_address_of_mCamera_7() { return &___mCamera_7; }
	inline void set_mCamera_7(Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * value)
	{
		___mCamera_7 = value;
		Il2CppCodeGenWriteBarrier((&___mCamera_7), value);
	}

	inline static int32_t get_offset_of_mDisplayAdvanced_8() { return static_cast<int32_t>(offsetof(MidAirPositionerBehaviour_t1A3E8D1CA52D8CD157FA40A50045FE02FFDD12B0, ___mDisplayAdvanced_8)); }
	inline bool get_mDisplayAdvanced_8() const { return ___mDisplayAdvanced_8; }
	inline bool* get_address_of_mDisplayAdvanced_8() { return &___mDisplayAdvanced_8; }
	inline void set_mDisplayAdvanced_8(bool value)
	{
		___mDisplayAdvanced_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MIDAIRPOSITIONERBEHAVIOUR_T1A3E8D1CA52D8CD157FA40A50045FE02FFDD12B0_H
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
#ifndef PLANEFINDERBEHAVIOUR_T217EBD6AC6946BB53BF52F3525158C0BD4B4EDB9_H
#define PLANEFINDERBEHAVIOUR_T217EBD6AC6946BB53BF52F3525158C0BD4B4EDB9_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.PlaneFinderBehaviour
struct  PlaneFinderBehaviour_t217EBD6AC6946BB53BF52F3525158C0BD4B4EDB9  : public VuforiaMonoBehaviour_t806C61E721B78928AF6266F3AF838FA2CB56AB5D
{
public:
	// UnityEngine.GameObject Vuforia.PlaneFinderBehaviour::PlaneIndicator
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___PlaneIndicator_4;
	// System.Single Vuforia.PlaneFinderBehaviour::Height
	float ___Height_5;
	// Vuforia.HitTestEvent Vuforia.PlaneFinderBehaviour::OnInteractiveHitTest
	HitTestEvent_t63AB9C2D85E4DB67BA4AEF13B8E65862E90FED4F * ___OnInteractiveHitTest_6;
	// Vuforia.HitTestEvent Vuforia.PlaneFinderBehaviour::OnAutomaticHitTest
	HitTestEvent_t63AB9C2D85E4DB67BA4AEF13B8E65862E90FED4F * ___OnAutomaticHitTest_7;
	// Vuforia.SmartTerrain Vuforia.PlaneFinderBehaviour::mSmartTerrain
	SmartTerrain_t09E2ED8DC63BA7169F0DCDCC1BA4419BDB878E47 * ___mSmartTerrain_8;
	// UnityEngine.Vector2 Vuforia.PlaneFinderBehaviour::mViewportCenter
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___mViewportCenter_9;
	// System.Single Vuforia.PlaneFinderBehaviour::mLastUpdate
	float ___mLastUpdate_10;
	// System.Boolean Vuforia.PlaneFinderBehaviour::mPreviouslyVisible
	bool ___mPreviouslyVisible_11;
	// System.Boolean Vuforia.PlaneFinderBehaviour::mDisplayAdvanced
	bool ___mDisplayAdvanced_13;
	// Vuforia.HitTestMode Vuforia.PlaneFinderBehaviour::mHitTestMode
	int32_t ___mHitTestMode_14;

public:
	inline static int32_t get_offset_of_PlaneIndicator_4() { return static_cast<int32_t>(offsetof(PlaneFinderBehaviour_t217EBD6AC6946BB53BF52F3525158C0BD4B4EDB9, ___PlaneIndicator_4)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_PlaneIndicator_4() const { return ___PlaneIndicator_4; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_PlaneIndicator_4() { return &___PlaneIndicator_4; }
	inline void set_PlaneIndicator_4(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___PlaneIndicator_4 = value;
		Il2CppCodeGenWriteBarrier((&___PlaneIndicator_4), value);
	}

	inline static int32_t get_offset_of_Height_5() { return static_cast<int32_t>(offsetof(PlaneFinderBehaviour_t217EBD6AC6946BB53BF52F3525158C0BD4B4EDB9, ___Height_5)); }
	inline float get_Height_5() const { return ___Height_5; }
	inline float* get_address_of_Height_5() { return &___Height_5; }
	inline void set_Height_5(float value)
	{
		___Height_5 = value;
	}

	inline static int32_t get_offset_of_OnInteractiveHitTest_6() { return static_cast<int32_t>(offsetof(PlaneFinderBehaviour_t217EBD6AC6946BB53BF52F3525158C0BD4B4EDB9, ___OnInteractiveHitTest_6)); }
	inline HitTestEvent_t63AB9C2D85E4DB67BA4AEF13B8E65862E90FED4F * get_OnInteractiveHitTest_6() const { return ___OnInteractiveHitTest_6; }
	inline HitTestEvent_t63AB9C2D85E4DB67BA4AEF13B8E65862E90FED4F ** get_address_of_OnInteractiveHitTest_6() { return &___OnInteractiveHitTest_6; }
	inline void set_OnInteractiveHitTest_6(HitTestEvent_t63AB9C2D85E4DB67BA4AEF13B8E65862E90FED4F * value)
	{
		___OnInteractiveHitTest_6 = value;
		Il2CppCodeGenWriteBarrier((&___OnInteractiveHitTest_6), value);
	}

	inline static int32_t get_offset_of_OnAutomaticHitTest_7() { return static_cast<int32_t>(offsetof(PlaneFinderBehaviour_t217EBD6AC6946BB53BF52F3525158C0BD4B4EDB9, ___OnAutomaticHitTest_7)); }
	inline HitTestEvent_t63AB9C2D85E4DB67BA4AEF13B8E65862E90FED4F * get_OnAutomaticHitTest_7() const { return ___OnAutomaticHitTest_7; }
	inline HitTestEvent_t63AB9C2D85E4DB67BA4AEF13B8E65862E90FED4F ** get_address_of_OnAutomaticHitTest_7() { return &___OnAutomaticHitTest_7; }
	inline void set_OnAutomaticHitTest_7(HitTestEvent_t63AB9C2D85E4DB67BA4AEF13B8E65862E90FED4F * value)
	{
		___OnAutomaticHitTest_7 = value;
		Il2CppCodeGenWriteBarrier((&___OnAutomaticHitTest_7), value);
	}

	inline static int32_t get_offset_of_mSmartTerrain_8() { return static_cast<int32_t>(offsetof(PlaneFinderBehaviour_t217EBD6AC6946BB53BF52F3525158C0BD4B4EDB9, ___mSmartTerrain_8)); }
	inline SmartTerrain_t09E2ED8DC63BA7169F0DCDCC1BA4419BDB878E47 * get_mSmartTerrain_8() const { return ___mSmartTerrain_8; }
	inline SmartTerrain_t09E2ED8DC63BA7169F0DCDCC1BA4419BDB878E47 ** get_address_of_mSmartTerrain_8() { return &___mSmartTerrain_8; }
	inline void set_mSmartTerrain_8(SmartTerrain_t09E2ED8DC63BA7169F0DCDCC1BA4419BDB878E47 * value)
	{
		___mSmartTerrain_8 = value;
		Il2CppCodeGenWriteBarrier((&___mSmartTerrain_8), value);
	}

	inline static int32_t get_offset_of_mViewportCenter_9() { return static_cast<int32_t>(offsetof(PlaneFinderBehaviour_t217EBD6AC6946BB53BF52F3525158C0BD4B4EDB9, ___mViewportCenter_9)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_mViewportCenter_9() const { return ___mViewportCenter_9; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_mViewportCenter_9() { return &___mViewportCenter_9; }
	inline void set_mViewportCenter_9(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___mViewportCenter_9 = value;
	}

	inline static int32_t get_offset_of_mLastUpdate_10() { return static_cast<int32_t>(offsetof(PlaneFinderBehaviour_t217EBD6AC6946BB53BF52F3525158C0BD4B4EDB9, ___mLastUpdate_10)); }
	inline float get_mLastUpdate_10() const { return ___mLastUpdate_10; }
	inline float* get_address_of_mLastUpdate_10() { return &___mLastUpdate_10; }
	inline void set_mLastUpdate_10(float value)
	{
		___mLastUpdate_10 = value;
	}

	inline static int32_t get_offset_of_mPreviouslyVisible_11() { return static_cast<int32_t>(offsetof(PlaneFinderBehaviour_t217EBD6AC6946BB53BF52F3525158C0BD4B4EDB9, ___mPreviouslyVisible_11)); }
	inline bool get_mPreviouslyVisible_11() const { return ___mPreviouslyVisible_11; }
	inline bool* get_address_of_mPreviouslyVisible_11() { return &___mPreviouslyVisible_11; }
	inline void set_mPreviouslyVisible_11(bool value)
	{
		___mPreviouslyVisible_11 = value;
	}

	inline static int32_t get_offset_of_mDisplayAdvanced_13() { return static_cast<int32_t>(offsetof(PlaneFinderBehaviour_t217EBD6AC6946BB53BF52F3525158C0BD4B4EDB9, ___mDisplayAdvanced_13)); }
	inline bool get_mDisplayAdvanced_13() const { return ___mDisplayAdvanced_13; }
	inline bool* get_address_of_mDisplayAdvanced_13() { return &___mDisplayAdvanced_13; }
	inline void set_mDisplayAdvanced_13(bool value)
	{
		___mDisplayAdvanced_13 = value;
	}

	inline static int32_t get_offset_of_mHitTestMode_14() { return static_cast<int32_t>(offsetof(PlaneFinderBehaviour_t217EBD6AC6946BB53BF52F3525158C0BD4B4EDB9, ___mHitTestMode_14)); }
	inline int32_t get_mHitTestMode_14() const { return ___mHitTestMode_14; }
	inline int32_t* get_address_of_mHitTestMode_14() { return &___mHitTestMode_14; }
	inline void set_mHitTestMode_14(int32_t value)
	{
		___mHitTestMode_14 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLANEFINDERBEHAVIOUR_T217EBD6AC6946BB53BF52F3525158C0BD4B4EDB9_H
#ifndef PREVIEWMODELTURNOFFBEHAVIOUR_TA344DB2730D08DE3DBFAFBF34DD9789D22C1F645_H
#define PREVIEWMODELTURNOFFBEHAVIOUR_TA344DB2730D08DE3DBFAFBF34DD9789D22C1F645_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.PreviewModelTurnOffBehaviour
struct  PreviewModelTurnOffBehaviour_tA344DB2730D08DE3DBFAFBF34DD9789D22C1F645  : public VuforiaMonoBehaviour_t806C61E721B78928AF6266F3AF838FA2CB56AB5D
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PREVIEWMODELTURNOFFBEHAVIOUR_TA344DB2730D08DE3DBFAFBF34DD9789D22C1F645_H
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
#ifndef ANCHORBEHAVIOUR_T44D245039CC4D9728F7594297E43EEE0885CB23E_H
#define ANCHORBEHAVIOUR_T44D245039CC4D9728F7594297E43EEE0885CB23E_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.AnchorBehaviour
struct  AnchorBehaviour_t44D245039CC4D9728F7594297E43EEE0885CB23E  : public TrackableBehaviour_t579D75AAFEF7B2D69F4B68931D5A58074E80A7E4
{
public:
	// Vuforia.StageType Vuforia.AnchorBehaviour::mSelectedStageType
	int32_t ___mSelectedStageType_12;
	// UnityEngine.GameObject Vuforia.AnchorBehaviour::mPlaneReference
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___mPlaneReference_13;
	// UnityEngine.GameObject Vuforia.AnchorBehaviour::mMidAirReference
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___mMidAirReference_14;
	// Vuforia.Anchor Vuforia.AnchorBehaviour::mAnchor
	RuntimeObject* ___mAnchor_15;

public:
	inline static int32_t get_offset_of_mSelectedStageType_12() { return static_cast<int32_t>(offsetof(AnchorBehaviour_t44D245039CC4D9728F7594297E43EEE0885CB23E, ___mSelectedStageType_12)); }
	inline int32_t get_mSelectedStageType_12() const { return ___mSelectedStageType_12; }
	inline int32_t* get_address_of_mSelectedStageType_12() { return &___mSelectedStageType_12; }
	inline void set_mSelectedStageType_12(int32_t value)
	{
		___mSelectedStageType_12 = value;
	}

	inline static int32_t get_offset_of_mPlaneReference_13() { return static_cast<int32_t>(offsetof(AnchorBehaviour_t44D245039CC4D9728F7594297E43EEE0885CB23E, ___mPlaneReference_13)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_mPlaneReference_13() const { return ___mPlaneReference_13; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_mPlaneReference_13() { return &___mPlaneReference_13; }
	inline void set_mPlaneReference_13(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___mPlaneReference_13 = value;
		Il2CppCodeGenWriteBarrier((&___mPlaneReference_13), value);
	}

	inline static int32_t get_offset_of_mMidAirReference_14() { return static_cast<int32_t>(offsetof(AnchorBehaviour_t44D245039CC4D9728F7594297E43EEE0885CB23E, ___mMidAirReference_14)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_mMidAirReference_14() const { return ___mMidAirReference_14; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_mMidAirReference_14() { return &___mMidAirReference_14; }
	inline void set_mMidAirReference_14(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___mMidAirReference_14 = value;
		Il2CppCodeGenWriteBarrier((&___mMidAirReference_14), value);
	}

	inline static int32_t get_offset_of_mAnchor_15() { return static_cast<int32_t>(offsetof(AnchorBehaviour_t44D245039CC4D9728F7594297E43EEE0885CB23E, ___mAnchor_15)); }
	inline RuntimeObject* get_mAnchor_15() const { return ___mAnchor_15; }
	inline RuntimeObject** get_address_of_mAnchor_15() { return &___mAnchor_15; }
	inline void set_mAnchor_15(RuntimeObject* value)
	{
		___mAnchor_15 = value;
		Il2CppCodeGenWriteBarrier((&___mAnchor_15), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ANCHORBEHAVIOUR_T44D245039CC4D9728F7594297E43EEE0885CB23E_H
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
#ifndef ANCHORSTAGEBEHAVIOUR_T26FC024D4092C8B296F79D446A6314D8C977945D_H
#define ANCHORSTAGEBEHAVIOUR_T26FC024D4092C8B296F79D446A6314D8C977945D_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.AnchorStageBehaviour
struct  AnchorStageBehaviour_t26FC024D4092C8B296F79D446A6314D8C977945D  : public AnchorBehaviour_t44D245039CC4D9728F7594297E43EEE0885CB23E
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ANCHORSTAGEBEHAVIOUR_T26FC024D4092C8B296F79D446A6314D8C977945D_H
#ifndef MODELTARGETBEHAVIOUR_T283F7A0B136589E033A458B5FE0C42F3248CE0B0_H
#define MODELTARGETBEHAVIOUR_T283F7A0B136589E033A458B5FE0C42F3248CE0B0_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.ModelTargetBehaviour
struct  ModelTargetBehaviour_t283F7A0B136589E033A458B5FE0C42F3248CE0B0  : public DataSetTrackableBehaviour_t84B7BB3C959046F38CC73E423800BD2F8859E706
{
public:
	// Vuforia.ModelTarget Vuforia.ModelTargetBehaviour::mModelTarget
	RuntimeObject* ___mModelTarget_13;
	// UnityEngine.GameObject Vuforia.ModelTargetBehaviour::mGuideViewRenderer
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___mGuideViewRenderer_15;
	// Vuforia.PositionalDeviceTracker Vuforia.ModelTargetBehaviour::mDeviceTracker
	PositionalDeviceTracker_tEFAA5FDB9CF19DA74081AE51B41B4B5D9F40D8EE * ___mDeviceTracker_16;
	// Vuforia.ModelTargetType Vuforia.ModelTargetBehaviour::mModelTargetType
	int32_t ___mModelTargetType_17;
	// System.Single Vuforia.ModelTargetBehaviour::mBaseSize
	float ___mBaseSize_18;
	// System.Single Vuforia.ModelTargetBehaviour::mAspectRatioXY
	float ___mAspectRatioXY_19;
	// System.Single Vuforia.ModelTargetBehaviour::mAspectRatioXZ
	float ___mAspectRatioXZ_20;
	// System.Boolean Vuforia.ModelTargetBehaviour::mShowBoundingBox
	bool ___mShowBoundingBox_21;
	// System.Boolean Vuforia.ModelTargetBehaviour::mOverrideSnappingPose
	bool ___mOverrideSnappingPose_22;
	// UnityEngine.Vector3 Vuforia.ModelTargetBehaviour::mBBoxMin
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___mBBoxMin_23;
	// UnityEngine.Vector3 Vuforia.ModelTargetBehaviour::mBBoxMax
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___mBBoxMax_24;
	// UnityEngine.Texture2D Vuforia.ModelTargetBehaviour::mPreviewImage
	Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * ___mPreviewImage_25;
	// System.Single Vuforia.ModelTargetBehaviour::mLength
	float ___mLength_26;
	// System.Single Vuforia.ModelTargetBehaviour::mWidth
	float ___mWidth_27;
	// System.Single Vuforia.ModelTargetBehaviour::mHeight
	float ___mHeight_28;
	// UnityEngine.GameObject Vuforia.ModelTargetBehaviour::m3DGuideViewModel
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___m3DGuideViewModel_29;
	// UnityEngine.Texture2D Vuforia.ModelTargetBehaviour::m2DGuideViewImage
	Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * ___m2DGuideViewImage_30;
	// Vuforia.ModelTargetBehaviour/GuideViewDisplayMode Vuforia.ModelTargetBehaviour::mGuideViewDisplayMode
	int32_t ___mGuideViewDisplayMode_31;
	// UnityEngine.Material Vuforia.ModelTargetBehaviour::m2DGuideViewMaterial
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___m2DGuideViewMaterial_32;
	// UnityEngine.Material Vuforia.ModelTargetBehaviour::m3DGuideViewMaterial
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___m3DGuideViewMaterial_33;
	// UnityEngine.Vector3 Vuforia.ModelTargetBehaviour::mLastTransformScale
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___mLastTransformScale_34;
	// UnityEngine.Vector3 Vuforia.ModelTargetBehaviour::mLastSize
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___mLastSize_35;
	// System.Boolean Vuforia.ModelTargetBehaviour::mDataSetIsActive
	bool ___mDataSetIsActive_36;

public:
	inline static int32_t get_offset_of_mModelTarget_13() { return static_cast<int32_t>(offsetof(ModelTargetBehaviour_t283F7A0B136589E033A458B5FE0C42F3248CE0B0, ___mModelTarget_13)); }
	inline RuntimeObject* get_mModelTarget_13() const { return ___mModelTarget_13; }
	inline RuntimeObject** get_address_of_mModelTarget_13() { return &___mModelTarget_13; }
	inline void set_mModelTarget_13(RuntimeObject* value)
	{
		___mModelTarget_13 = value;
		Il2CppCodeGenWriteBarrier((&___mModelTarget_13), value);
	}

	inline static int32_t get_offset_of_mGuideViewRenderer_15() { return static_cast<int32_t>(offsetof(ModelTargetBehaviour_t283F7A0B136589E033A458B5FE0C42F3248CE0B0, ___mGuideViewRenderer_15)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_mGuideViewRenderer_15() const { return ___mGuideViewRenderer_15; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_mGuideViewRenderer_15() { return &___mGuideViewRenderer_15; }
	inline void set_mGuideViewRenderer_15(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___mGuideViewRenderer_15 = value;
		Il2CppCodeGenWriteBarrier((&___mGuideViewRenderer_15), value);
	}

	inline static int32_t get_offset_of_mDeviceTracker_16() { return static_cast<int32_t>(offsetof(ModelTargetBehaviour_t283F7A0B136589E033A458B5FE0C42F3248CE0B0, ___mDeviceTracker_16)); }
	inline PositionalDeviceTracker_tEFAA5FDB9CF19DA74081AE51B41B4B5D9F40D8EE * get_mDeviceTracker_16() const { return ___mDeviceTracker_16; }
	inline PositionalDeviceTracker_tEFAA5FDB9CF19DA74081AE51B41B4B5D9F40D8EE ** get_address_of_mDeviceTracker_16() { return &___mDeviceTracker_16; }
	inline void set_mDeviceTracker_16(PositionalDeviceTracker_tEFAA5FDB9CF19DA74081AE51B41B4B5D9F40D8EE * value)
	{
		___mDeviceTracker_16 = value;
		Il2CppCodeGenWriteBarrier((&___mDeviceTracker_16), value);
	}

	inline static int32_t get_offset_of_mModelTargetType_17() { return static_cast<int32_t>(offsetof(ModelTargetBehaviour_t283F7A0B136589E033A458B5FE0C42F3248CE0B0, ___mModelTargetType_17)); }
	inline int32_t get_mModelTargetType_17() const { return ___mModelTargetType_17; }
	inline int32_t* get_address_of_mModelTargetType_17() { return &___mModelTargetType_17; }
	inline void set_mModelTargetType_17(int32_t value)
	{
		___mModelTargetType_17 = value;
	}

	inline static int32_t get_offset_of_mBaseSize_18() { return static_cast<int32_t>(offsetof(ModelTargetBehaviour_t283F7A0B136589E033A458B5FE0C42F3248CE0B0, ___mBaseSize_18)); }
	inline float get_mBaseSize_18() const { return ___mBaseSize_18; }
	inline float* get_address_of_mBaseSize_18() { return &___mBaseSize_18; }
	inline void set_mBaseSize_18(float value)
	{
		___mBaseSize_18 = value;
	}

	inline static int32_t get_offset_of_mAspectRatioXY_19() { return static_cast<int32_t>(offsetof(ModelTargetBehaviour_t283F7A0B136589E033A458B5FE0C42F3248CE0B0, ___mAspectRatioXY_19)); }
	inline float get_mAspectRatioXY_19() const { return ___mAspectRatioXY_19; }
	inline float* get_address_of_mAspectRatioXY_19() { return &___mAspectRatioXY_19; }
	inline void set_mAspectRatioXY_19(float value)
	{
		___mAspectRatioXY_19 = value;
	}

	inline static int32_t get_offset_of_mAspectRatioXZ_20() { return static_cast<int32_t>(offsetof(ModelTargetBehaviour_t283F7A0B136589E033A458B5FE0C42F3248CE0B0, ___mAspectRatioXZ_20)); }
	inline float get_mAspectRatioXZ_20() const { return ___mAspectRatioXZ_20; }
	inline float* get_address_of_mAspectRatioXZ_20() { return &___mAspectRatioXZ_20; }
	inline void set_mAspectRatioXZ_20(float value)
	{
		___mAspectRatioXZ_20 = value;
	}

	inline static int32_t get_offset_of_mShowBoundingBox_21() { return static_cast<int32_t>(offsetof(ModelTargetBehaviour_t283F7A0B136589E033A458B5FE0C42F3248CE0B0, ___mShowBoundingBox_21)); }
	inline bool get_mShowBoundingBox_21() const { return ___mShowBoundingBox_21; }
	inline bool* get_address_of_mShowBoundingBox_21() { return &___mShowBoundingBox_21; }
	inline void set_mShowBoundingBox_21(bool value)
	{
		___mShowBoundingBox_21 = value;
	}

	inline static int32_t get_offset_of_mOverrideSnappingPose_22() { return static_cast<int32_t>(offsetof(ModelTargetBehaviour_t283F7A0B136589E033A458B5FE0C42F3248CE0B0, ___mOverrideSnappingPose_22)); }
	inline bool get_mOverrideSnappingPose_22() const { return ___mOverrideSnappingPose_22; }
	inline bool* get_address_of_mOverrideSnappingPose_22() { return &___mOverrideSnappingPose_22; }
	inline void set_mOverrideSnappingPose_22(bool value)
	{
		___mOverrideSnappingPose_22 = value;
	}

	inline static int32_t get_offset_of_mBBoxMin_23() { return static_cast<int32_t>(offsetof(ModelTargetBehaviour_t283F7A0B136589E033A458B5FE0C42F3248CE0B0, ___mBBoxMin_23)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_mBBoxMin_23() const { return ___mBBoxMin_23; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_mBBoxMin_23() { return &___mBBoxMin_23; }
	inline void set_mBBoxMin_23(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___mBBoxMin_23 = value;
	}

	inline static int32_t get_offset_of_mBBoxMax_24() { return static_cast<int32_t>(offsetof(ModelTargetBehaviour_t283F7A0B136589E033A458B5FE0C42F3248CE0B0, ___mBBoxMax_24)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_mBBoxMax_24() const { return ___mBBoxMax_24; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_mBBoxMax_24() { return &___mBBoxMax_24; }
	inline void set_mBBoxMax_24(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___mBBoxMax_24 = value;
	}

	inline static int32_t get_offset_of_mPreviewImage_25() { return static_cast<int32_t>(offsetof(ModelTargetBehaviour_t283F7A0B136589E033A458B5FE0C42F3248CE0B0, ___mPreviewImage_25)); }
	inline Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * get_mPreviewImage_25() const { return ___mPreviewImage_25; }
	inline Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C ** get_address_of_mPreviewImage_25() { return &___mPreviewImage_25; }
	inline void set_mPreviewImage_25(Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * value)
	{
		___mPreviewImage_25 = value;
		Il2CppCodeGenWriteBarrier((&___mPreviewImage_25), value);
	}

	inline static int32_t get_offset_of_mLength_26() { return static_cast<int32_t>(offsetof(ModelTargetBehaviour_t283F7A0B136589E033A458B5FE0C42F3248CE0B0, ___mLength_26)); }
	inline float get_mLength_26() const { return ___mLength_26; }
	inline float* get_address_of_mLength_26() { return &___mLength_26; }
	inline void set_mLength_26(float value)
	{
		___mLength_26 = value;
	}

	inline static int32_t get_offset_of_mWidth_27() { return static_cast<int32_t>(offsetof(ModelTargetBehaviour_t283F7A0B136589E033A458B5FE0C42F3248CE0B0, ___mWidth_27)); }
	inline float get_mWidth_27() const { return ___mWidth_27; }
	inline float* get_address_of_mWidth_27() { return &___mWidth_27; }
	inline void set_mWidth_27(float value)
	{
		___mWidth_27 = value;
	}

	inline static int32_t get_offset_of_mHeight_28() { return static_cast<int32_t>(offsetof(ModelTargetBehaviour_t283F7A0B136589E033A458B5FE0C42F3248CE0B0, ___mHeight_28)); }
	inline float get_mHeight_28() const { return ___mHeight_28; }
	inline float* get_address_of_mHeight_28() { return &___mHeight_28; }
	inline void set_mHeight_28(float value)
	{
		___mHeight_28 = value;
	}

	inline static int32_t get_offset_of_m3DGuideViewModel_29() { return static_cast<int32_t>(offsetof(ModelTargetBehaviour_t283F7A0B136589E033A458B5FE0C42F3248CE0B0, ___m3DGuideViewModel_29)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_m3DGuideViewModel_29() const { return ___m3DGuideViewModel_29; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_m3DGuideViewModel_29() { return &___m3DGuideViewModel_29; }
	inline void set_m3DGuideViewModel_29(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___m3DGuideViewModel_29 = value;
		Il2CppCodeGenWriteBarrier((&___m3DGuideViewModel_29), value);
	}

	inline static int32_t get_offset_of_m2DGuideViewImage_30() { return static_cast<int32_t>(offsetof(ModelTargetBehaviour_t283F7A0B136589E033A458B5FE0C42F3248CE0B0, ___m2DGuideViewImage_30)); }
	inline Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * get_m2DGuideViewImage_30() const { return ___m2DGuideViewImage_30; }
	inline Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C ** get_address_of_m2DGuideViewImage_30() { return &___m2DGuideViewImage_30; }
	inline void set_m2DGuideViewImage_30(Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * value)
	{
		___m2DGuideViewImage_30 = value;
		Il2CppCodeGenWriteBarrier((&___m2DGuideViewImage_30), value);
	}

	inline static int32_t get_offset_of_mGuideViewDisplayMode_31() { return static_cast<int32_t>(offsetof(ModelTargetBehaviour_t283F7A0B136589E033A458B5FE0C42F3248CE0B0, ___mGuideViewDisplayMode_31)); }
	inline int32_t get_mGuideViewDisplayMode_31() const { return ___mGuideViewDisplayMode_31; }
	inline int32_t* get_address_of_mGuideViewDisplayMode_31() { return &___mGuideViewDisplayMode_31; }
	inline void set_mGuideViewDisplayMode_31(int32_t value)
	{
		___mGuideViewDisplayMode_31 = value;
	}

	inline static int32_t get_offset_of_m2DGuideViewMaterial_32() { return static_cast<int32_t>(offsetof(ModelTargetBehaviour_t283F7A0B136589E033A458B5FE0C42F3248CE0B0, ___m2DGuideViewMaterial_32)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_m2DGuideViewMaterial_32() const { return ___m2DGuideViewMaterial_32; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_m2DGuideViewMaterial_32() { return &___m2DGuideViewMaterial_32; }
	inline void set_m2DGuideViewMaterial_32(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___m2DGuideViewMaterial_32 = value;
		Il2CppCodeGenWriteBarrier((&___m2DGuideViewMaterial_32), value);
	}

	inline static int32_t get_offset_of_m3DGuideViewMaterial_33() { return static_cast<int32_t>(offsetof(ModelTargetBehaviour_t283F7A0B136589E033A458B5FE0C42F3248CE0B0, ___m3DGuideViewMaterial_33)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_m3DGuideViewMaterial_33() const { return ___m3DGuideViewMaterial_33; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_m3DGuideViewMaterial_33() { return &___m3DGuideViewMaterial_33; }
	inline void set_m3DGuideViewMaterial_33(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___m3DGuideViewMaterial_33 = value;
		Il2CppCodeGenWriteBarrier((&___m3DGuideViewMaterial_33), value);
	}

	inline static int32_t get_offset_of_mLastTransformScale_34() { return static_cast<int32_t>(offsetof(ModelTargetBehaviour_t283F7A0B136589E033A458B5FE0C42F3248CE0B0, ___mLastTransformScale_34)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_mLastTransformScale_34() const { return ___mLastTransformScale_34; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_mLastTransformScale_34() { return &___mLastTransformScale_34; }
	inline void set_mLastTransformScale_34(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___mLastTransformScale_34 = value;
	}

	inline static int32_t get_offset_of_mLastSize_35() { return static_cast<int32_t>(offsetof(ModelTargetBehaviour_t283F7A0B136589E033A458B5FE0C42F3248CE0B0, ___mLastSize_35)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_mLastSize_35() const { return ___mLastSize_35; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_mLastSize_35() { return &___mLastSize_35; }
	inline void set_mLastSize_35(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___mLastSize_35 = value;
	}

	inline static int32_t get_offset_of_mDataSetIsActive_36() { return static_cast<int32_t>(offsetof(ModelTargetBehaviour_t283F7A0B136589E033A458B5FE0C42F3248CE0B0, ___mDataSetIsActive_36)); }
	inline bool get_mDataSetIsActive_36() const { return ___mDataSetIsActive_36; }
	inline bool* get_address_of_mDataSetIsActive_36() { return &___mDataSetIsActive_36; }
	inline void set_mDataSetIsActive_36(bool value)
	{
		___mDataSetIsActive_36 = value;
	}
};

struct ModelTargetBehaviour_t283F7A0B136589E033A458B5FE0C42F3248CE0B0_StaticFields
{
public:
	// System.String Vuforia.ModelTargetBehaviour::GUIDE_VIEW_RENDERER_NAME
	String_t* ___GUIDE_VIEW_RENDERER_NAME_14;

public:
	inline static int32_t get_offset_of_GUIDE_VIEW_RENDERER_NAME_14() { return static_cast<int32_t>(offsetof(ModelTargetBehaviour_t283F7A0B136589E033A458B5FE0C42F3248CE0B0_StaticFields, ___GUIDE_VIEW_RENDERER_NAME_14)); }
	inline String_t* get_GUIDE_VIEW_RENDERER_NAME_14() const { return ___GUIDE_VIEW_RENDERER_NAME_14; }
	inline String_t** get_address_of_GUIDE_VIEW_RENDERER_NAME_14() { return &___GUIDE_VIEW_RENDERER_NAME_14; }
	inline void set_GUIDE_VIEW_RENDERER_NAME_14(String_t* value)
	{
		___GUIDE_VIEW_RENDERER_NAME_14 = value;
		Il2CppCodeGenWriteBarrier((&___GUIDE_VIEW_RENDERER_NAME_14), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MODELTARGETBEHAVIOUR_T283F7A0B136589E033A458B5FE0C42F3248CE0B0_H





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2500 = { sizeof (U3CPrivateImplementationDetailsU3E_tC8332394FBFEEB4B73459A35E182942340DA3537), -1, sizeof(U3CPrivateImplementationDetailsU3E_tC8332394FBFEEB4B73459A35E182942340DA3537_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2500[1] = 
{
	U3CPrivateImplementationDetailsU3E_tC8332394FBFEEB4B73459A35E182942340DA3537_StaticFields::get_offset_of_U24fieldU2D7BBE37982E6C057ED87163CAFC7FD6E5E42EEA46_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2501 = { sizeof (U24ArrayTypeU3D12_t25F5D2FC4CFB01F181ED6F7A7F68C39C5D73E199)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU3D12_t25F5D2FC4CFB01F181ED6F7A7F68C39C5D73E199 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2502 = { sizeof (U3CModuleU3E_t37E08C55AF58CDE5E92F66C091A50610B9AF1972), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2503 = { sizeof (DefaultModelRecoEventHandlerPlaceHolder_t673F37C51BFA1B123383CA7BDF13995754AF7259), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2504 = { sizeof (DefaultInitializationErrorHandlerInternal_t070410BFD6016AD74D2FEE5CBA147D4C2E9080A4), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2504[9] = 
{
	DefaultInitializationErrorHandlerInternal_t070410BFD6016AD74D2FEE5CBA147D4C2E9080A4::get_offset_of_mErrorText_4(),
	DefaultInitializationErrorHandlerInternal_t070410BFD6016AD74D2FEE5CBA147D4C2E9080A4::get_offset_of_mErrorOccurred_5(),
	0,
	DefaultInitializationErrorHandlerInternal_t070410BFD6016AD74D2FEE5CBA147D4C2E9080A4::get_offset_of_bodyStyle_7(),
	DefaultInitializationErrorHandlerInternal_t070410BFD6016AD74D2FEE5CBA147D4C2E9080A4::get_offset_of_headerStyle_8(),
	DefaultInitializationErrorHandlerInternal_t070410BFD6016AD74D2FEE5CBA147D4C2E9080A4::get_offset_of_footerStyle_9(),
	DefaultInitializationErrorHandlerInternal_t070410BFD6016AD74D2FEE5CBA147D4C2E9080A4::get_offset_of_bodyTexture_10(),
	DefaultInitializationErrorHandlerInternal_t070410BFD6016AD74D2FEE5CBA147D4C2E9080A4::get_offset_of_headerTexture_11(),
	DefaultInitializationErrorHandlerInternal_t070410BFD6016AD74D2FEE5CBA147D4C2E9080A4::get_offset_of_footerTexture_12(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2505 = { sizeof (DefaultInitializationErrorHandlerPlaceHolder_t15644F32C0CF8452355C6CE7E70A9D53AD622A1D), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2506 = { sizeof (DefaultTrackableBehaviourPlaceholder_tFE7DDD8DB77F0237E4C998B84A73B85F90A2450F), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2507 = { sizeof (VuforiaMonoBehaviour_t806C61E721B78928AF6266F3AF838FA2CB56AB5D), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2508 = { sizeof (ARController_tBCF5CBE22AE2AD3FF6DCAC88E78FF7C929D91293), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2508[1] = 
{
	ARController_tBCF5CBE22AE2AD3FF6DCAC88E78FF7C929D91293::get_offset_of_mVuforiaBehaviour_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2509 = { sizeof (U3CU3Ec__DisplayClass11_0_t8D26720E0A8B72DA015D5C98330F437FBEEBCE02), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2509[1] = 
{
	U3CU3Ec__DisplayClass11_0_t8D26720E0A8B72DA015D5C98330F437FBEEBCE02::get_offset_of_controller_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2510 = { sizeof (EulaJsonUtility_t8C254349DEBF149816DCBC36D6BF846A40E3ADE1), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2511 = { sizeof (EulaVersionStrings_tAEEF9B262F37DD7F1E2CA7EDD2FAA5BAFCB47042)+ sizeof (RuntimeObject), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2511[1] = 
{
	EulaVersionStrings_tAEEF9B262F37DD7F1E2CA7EDD2FAA5BAFCB47042::get_offset_of_Values_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2512 = { sizeof (AMigratableVideoBackgroundConfigProperty_tF4F2802B490270693198152EA55FC560C2BB3919), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2512[1] = 
{
	AMigratableVideoBackgroundConfigProperty_tF4F2802B490270693198152EA55FC560C2BB3919::get_offset_of_Config_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2513 = { sizeof (MatteShaderPropertyMigration_t344F92FD10DB03501B9369C840F881DF696AD72E), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2513[2] = 
{
	MatteShaderPropertyMigration_t344F92FD10DB03501B9369C840F881DF696AD72E::get_offset_of_mOldShaderName_1(),
	MatteShaderPropertyMigration_t344F92FD10DB03501B9369C840F881DF696AD72E::get_offset_of_mNewShaderName_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2514 = { sizeof (VideoBackgroundConfigMigrator_tEAEF33C27BF6ED821E0237860EB786CD2BA92D81), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2514[1] = 
{
	VideoBackgroundConfigMigrator_tEAEF33C27BF6ED821E0237860EB786CD2BA92D81::get_offset_of_mMigratableProperties_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2515 = { sizeof (U3CU3Ec_t8412B21F5F41E2A528335D4F11B53694DA3229EC), -1, sizeof(U3CU3Ec_t8412B21F5F41E2A528335D4F11B53694DA3229EC_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2515[2] = 
{
	U3CU3Ec_t8412B21F5F41E2A528335D4F11B53694DA3229EC_StaticFields::get_offset_of_U3CU3E9_0(),
	U3CU3Ec_t8412B21F5F41E2A528335D4F11B53694DA3229EC_StaticFields::get_offset_of_U3CU3E9__2_0_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2516 = { sizeof (VideoBackgroundShaderPropertyMigration_tD767C59FBD3971344605D8E2372F2A9AABDE9185), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2516[2] = 
{
	VideoBackgroundShaderPropertyMigration_tD767C59FBD3971344605D8E2372F2A9AABDE9185::get_offset_of_mOldShaderName_1(),
	VideoBackgroundShaderPropertyMigration_tD767C59FBD3971344605D8E2372F2A9AABDE9185::get_offset_of_mNewShaderName_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2517 = { sizeof (ImageTargetFinder_t6E3D734AC2A2C4C1DF5578F038B15345296BE957), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2518 = { sizeof (ObjectRecoBehaviour_tB0D779F2222B6AA203C3E40B0D170F0225F5986D), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2518[8] = 
{
	ObjectRecoBehaviour_tB0D779F2222B6AA203C3E40B0D170F0225F5986D::get_offset_of_mObjectTracker_4(),
	ObjectRecoBehaviour_tB0D779F2222B6AA203C3E40B0D170F0225F5986D::get_offset_of_mTargetFinder_5(),
	ObjectRecoBehaviour_tB0D779F2222B6AA203C3E40B0D170F0225F5986D::get_offset_of_mCurrentlyInitializing_6(),
	ObjectRecoBehaviour_tB0D779F2222B6AA203C3E40B0D170F0225F5986D::get_offset_of_mInitSuccess_7(),
	ObjectRecoBehaviour_tB0D779F2222B6AA203C3E40B0D170F0225F5986D::get_offset_of_mRecoStarted_8(),
	ObjectRecoBehaviour_tB0D779F2222B6AA203C3E40B0D170F0225F5986D::get_offset_of_mOnInitializedCalled_9(),
	ObjectRecoBehaviour_tB0D779F2222B6AA203C3E40B0D170F0225F5986D::get_offset_of_mHandlers_10(),
	ObjectRecoBehaviour_tB0D779F2222B6AA203C3E40B0D170F0225F5986D::get_offset_of_mTargetFinderStartedBeforeDisable_11(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2519 = { sizeof (CameraCalibrationComparer_t7CF72E6611106D56BB040F32DB6D7BFF0898F7EA), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2519[2] = 
{
	0,
	CameraCalibrationComparer_t7CF72E6611106D56BB040F32DB6D7BFF0898F7EA::get_offset_of_mLastCameraCalibrationValues_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2520 = { sizeof (IlluminationManager_t20764D05A4DA19AE6C1CADF24630DEFC5B59E296), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2520[2] = 
{
	0,
	IlluminationManager_t20764D05A4DA19AE6C1CADF24630DEFC5B59E296::get_offset_of_mIlluminationData_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2521 = { sizeof (PreviewModelTurnOffBehaviour_tA344DB2730D08DE3DBFAFBF34DD9789D22C1F645), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2522 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2523 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2524 = { sizeof (PositionalDeviceTrackerImpl_tF19B8A9FE3C3E8FB8A1C4DB8EB0A6125A0302860), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2524[1] = 
{
	PositionalDeviceTrackerImpl_tF19B8A9FE3C3E8FB8A1C4DB8EB0A6125A0302860::get_offset_of_mAnchorRemovedEvent_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2525 = { sizeof (U3CU3Ec_t31BFC0C775266B0B35351A80037885FEB16EE0B1), -1, sizeof(U3CU3Ec_t31BFC0C775266B0B35351A80037885FEB16EE0B1_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2525[2] = 
{
	U3CU3Ec_t31BFC0C775266B0B35351A80037885FEB16EE0B1_StaticFields::get_offset_of_U3CU3E9_0(),
	U3CU3Ec_t31BFC0C775266B0B35351A80037885FEB16EE0B1_StaticFields::get_offset_of_U3CU3E9__13_0_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2526 = { sizeof (PositionalPlayModeDeviceTrackerImpl_tF584C6DE898C0D606A40CA3D5D7BF4CD45FB1305), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2526[1] = 
{
	PositionalPlayModeDeviceTrackerImpl_tF584C6DE898C0D606A40CA3D5D7BF4CD45FB1305::get_offset_of_mEmulatorDataset_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2527 = { sizeof (PositionalDeviceTracker_tEFAA5FDB9CF19DA74081AE51B41B4B5D9F40D8EE), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2528 = { sizeof (StaticWebCamTexAdaptor_tE0A86A229DA0C5F39CEC9D76D9BEF635580D3625), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2528[1] = 
{
	StaticWebCamTexAdaptor_tE0A86A229DA0C5F39CEC9D76D9BEF635580D3625::get_offset_of_U3CTextureU3Ek__BackingField_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2529 = { sizeof (AnchorBehaviour_t44D245039CC4D9728F7594297E43EEE0885CB23E), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2529[4] = 
{
	AnchorBehaviour_t44D245039CC4D9728F7594297E43EEE0885CB23E::get_offset_of_mSelectedStageType_12(),
	AnchorBehaviour_t44D245039CC4D9728F7594297E43EEE0885CB23E::get_offset_of_mPlaneReference_13(),
	AnchorBehaviour_t44D245039CC4D9728F7594297E43EEE0885CB23E::get_offset_of_mMidAirReference_14(),
	AnchorBehaviour_t44D245039CC4D9728F7594297E43EEE0885CB23E::get_offset_of_mAnchor_15(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2530 = { sizeof (GuideViewCameraBehaviour_t78CD9CA8AB9C4B31C2173C2DBCB663A9BD8464A9), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2531 = { sizeof (ModelTargetBoundingBoxImpl_t21F47F319E17AD27E3351D0232382928518A0F98), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2531[2] = 
{
	ModelTargetBoundingBoxImpl_t21F47F319E17AD27E3351D0232382928518A0F98::get_offset_of_mDataSet_0(),
	ModelTargetBoundingBoxImpl_t21F47F319E17AD27E3351D0232382928518A0F98::get_offset_of_mName_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2532 = { sizeof (AndroidDatasets_t4555858703D81E3DC34431B56BCDFDF6BBECBF59), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2533 = { sizeof (AndroidUnityPlayer_t5346C3BD41748CD085C825F74309396BFDEADBC9), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2534 = { sizeof (IOSUnityPlayer_t817845D8227749BEB3E0D74F528AB844DA814C28), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2534[1] = 
{
	IOSUnityPlayer_t817845D8227749BEB3E0D74F528AB844DA814C28::get_offset_of_mScreenOrientation_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2535 = { sizeof (PlatformRuntimeInitialization_t97A82C113464E846C018791EE66113F38E2DFFE6), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2536 = { sizeof (PlayModeUnityPlayer_t1148C1DF43FF676A83A58015E7CFC96CFDA88EB7), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2537 = { sizeof (WSAUnityPlayer_t8984115743F343B91C65C2C363768A7515EF78BB), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2538 = { sizeof (VideoBackgroundDefaultProvider_t0B2CEB4665A61EAF6C799309C48637D82A26FE4A), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2538[3] = 
{
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2539 = { sizeof (PlanesHideExcessAreaClipping_t5F23A579A8417B65BE4ED09DCE98118228E85B68), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2539[5] = 
{
	0,
	PlanesHideExcessAreaClipping_t5F23A579A8417B65BE4ED09DCE98118228E85B68::get_offset_of_mMatteShader_1(),
	PlanesHideExcessAreaClipping_t5F23A579A8417B65BE4ED09DCE98118228E85B68::get_offset_of_mClippingPlanes_2(),
	PlanesHideExcessAreaClipping_t5F23A579A8417B65BE4ED09DCE98118228E85B68::get_offset_of_mPlanesActivated_3(),
	PlanesHideExcessAreaClipping_t5F23A579A8417B65BE4ED09DCE98118228E85B68::get_offset_of_mClippingScale_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2540 = { sizeof (PlanePos_t60098A513ADA4FA8AD54484DDD6B887538E53E3A)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2540[5] = 
{
	PlanePos_t60098A513ADA4FA8AD54484DDD6B887538E53E3A::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2541 = { sizeof (VuforiaVRDeviceCameraConfiguration_tCB9640859B8EDE61154CAA9A09DADF84905FEAED), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2541[3] = 
{
	0,
	VuforiaVRDeviceCameraConfiguration_tCB9640859B8EDE61154CAA9A09DADF84905FEAED::get_offset_of_mStereoOffset_27(),
	VuforiaVRDeviceCameraConfiguration_tCB9640859B8EDE61154CAA9A09DADF84905FEAED::get_offset_of_mDelayedVideoBackgroundEnabledChanged_28(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2542 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2543 = { sizeof (StereoProjMatrixStore_t666C738477A3F36E8FDD7E872AC154108291348A), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2543[11] = 
{
	StereoProjMatrixStore_t666C738477A3F36E8FDD7E872AC154108291348A::get_offset_of_mCamera_0(),
	StereoProjMatrixStore_t666C738477A3F36E8FDD7E872AC154108291348A::get_offset_of_mProjectionMatrices_1(),
	StereoProjMatrixStore_t666C738477A3F36E8FDD7E872AC154108291348A::get_offset_of_mAppliedVerticalFoVs_2(),
	StereoProjMatrixStore_t666C738477A3F36E8FDD7E872AC154108291348A::get_offset_of_mCurrentVerticalFoVs_3(),
	StereoProjMatrixStore_t666C738477A3F36E8FDD7E872AC154108291348A::get_offset_of_mAppliedHorizontalFoVs_4(),
	StereoProjMatrixStore_t666C738477A3F36E8FDD7E872AC154108291348A::get_offset_of_mCurrentHorizontalFoVs_5(),
	StereoProjMatrixStore_t666C738477A3F36E8FDD7E872AC154108291348A::get_offset_of_mSharedCullingProjectionMatrix_6(),
	StereoProjMatrixStore_t666C738477A3F36E8FDD7E872AC154108291348A::get_offset_of_mSharedCullingViewMatrix_7(),
	StereoProjMatrixStore_t666C738477A3F36E8FDD7E872AC154108291348A::get_offset_of_mLeftEyeOffsetMatrix_8(),
	StereoProjMatrixStore_t666C738477A3F36E8FDD7E872AC154108291348A::get_offset_of_mRightEyeOffsetMatrix_9(),
	StereoProjMatrixStore_t666C738477A3F36E8FDD7E872AC154108291348A::get_offset_of_mMode_10(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2544 = { sizeof (Mode_tFAC11BEAD3F06C10D033DA80E27982CADB4008C8)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2544[3] = 
{
	Mode_tFAC11BEAD3F06C10D033DA80E27982CADB4008C8::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2545 = { sizeof (ExternalVRDeviceCameraConfiguration_t22E28FE2FAB2D078AC355155BECEF402BEB11EA2), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2545[2] = 
{
	0,
	ExternalVRDeviceCameraConfiguration_t22E28FE2FAB2D078AC355155BECEF402BEB11EA2::get_offset_of_mLastWorldCenterMode_27(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2546 = { sizeof (VRDeviceCameraConfiguration_t647AFB774A37819F464C5D5F01599CAD29FD7E57), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2546[15] = 
{
	0,
	VRDeviceCameraConfiguration_t647AFB774A37819F464C5D5F01599CAD29FD7E57::get_offset_of_mCamera_12(),
	VRDeviceCameraConfiguration_t647AFB774A37819F464C5D5F01599CAD29FD7E57::get_offset_of_mMatrixStore_13(),
	VRDeviceCameraConfiguration_t647AFB774A37819F464C5D5F01599CAD29FD7E57::get_offset_of_mLeftMatrixUsedForVBPlacement_14(),
	VRDeviceCameraConfiguration_t647AFB774A37819F464C5D5F01599CAD29FD7E57::get_offset_of_mLastAppliedNearClipPlane_15(),
	VRDeviceCameraConfiguration_t647AFB774A37819F464C5D5F01599CAD29FD7E57::get_offset_of_mLastAppliedFarClipPlane_16(),
	VRDeviceCameraConfiguration_t647AFB774A37819F464C5D5F01599CAD29FD7E57::get_offset_of_mMaxDepthForVideoBackground_17(),
	VRDeviceCameraConfiguration_t647AFB774A37819F464C5D5F01599CAD29FD7E57::get_offset_of_mMinDepthForVideoBackground_18(),
	VRDeviceCameraConfiguration_t647AFB774A37819F464C5D5F01599CAD29FD7E57::get_offset_of_mScreenWidth_19(),
	VRDeviceCameraConfiguration_t647AFB774A37819F464C5D5F01599CAD29FD7E57::get_offset_of_mScreenHeight_20(),
	VRDeviceCameraConfiguration_t647AFB774A37819F464C5D5F01599CAD29FD7E57::get_offset_of_mStereoDepth_21(),
	VRDeviceCameraConfiguration_t647AFB774A37819F464C5D5F01599CAD29FD7E57::get_offset_of_mResetMatrix_22(),
	VRDeviceCameraConfiguration_t647AFB774A37819F464C5D5F01599CAD29FD7E57::get_offset_of_mVuforiaFrustumSkew_23(),
	VRDeviceCameraConfiguration_t647AFB774A37819F464C5D5F01599CAD29FD7E57::get_offset_of_mCenterToEyeAxis_24(),
	VRDeviceCameraConfiguration_t647AFB774A37819F464C5D5F01599CAD29FD7E57::get_offset_of_mVrDeviceController_25(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2547 = { sizeof (DigitalEyewearARController_t973FDCC2DBCE328656150191FBC1A0E49189D9E4), -1, sizeof(DigitalEyewearARController_t973FDCC2DBCE328656150191FBC1A0E49189D9E4_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2547[22] = 
{
	0,
	0,
	0,
	0,
	DigitalEyewearARController_t973FDCC2DBCE328656150191FBC1A0E49189D9E4::get_offset_of_mCameraOffset_5(),
	DigitalEyewearARController_t973FDCC2DBCE328656150191FBC1A0E49189D9E4::get_offset_of_mDistortionRenderingLayer_6(),
	DigitalEyewearARController_t973FDCC2DBCE328656150191FBC1A0E49189D9E4::get_offset_of_mEyewearType_7(),
	DigitalEyewearARController_t973FDCC2DBCE328656150191FBC1A0E49189D9E4::get_offset_of_mStereoFramework_8(),
	DigitalEyewearARController_t973FDCC2DBCE328656150191FBC1A0E49189D9E4::get_offset_of_mSeeThroughConfiguration_9(),
	DigitalEyewearARController_t973FDCC2DBCE328656150191FBC1A0E49189D9E4::get_offset_of_mViewerName_10(),
	DigitalEyewearARController_t973FDCC2DBCE328656150191FBC1A0E49189D9E4::get_offset_of_mViewerManufacturer_11(),
	DigitalEyewearARController_t973FDCC2DBCE328656150191FBC1A0E49189D9E4::get_offset_of_mUseCustomViewer_12(),
	DigitalEyewearARController_t973FDCC2DBCE328656150191FBC1A0E49189D9E4::get_offset_of_mCustomViewer_13(),
	DigitalEyewearARController_t973FDCC2DBCE328656150191FBC1A0E49189D9E4::get_offset_of_mCentralAnchorPoint_14(),
	DigitalEyewearARController_t973FDCC2DBCE328656150191FBC1A0E49189D9E4::get_offset_of_mPrimaryCamera_15(),
	DigitalEyewearARController_t973FDCC2DBCE328656150191FBC1A0E49189D9E4::get_offset_of_mVuforiaBehaviour_16(),
	DigitalEyewearARController_t973FDCC2DBCE328656150191FBC1A0E49189D9E4::get_offset_of_mSetFocusPlaneAutomatically_17(),
	DigitalEyewearARController_t973FDCC2DBCE328656150191FBC1A0E49189D9E4::get_offset_of_mVRDeviceController_18(),
	DigitalEyewearARController_t973FDCC2DBCE328656150191FBC1A0E49189D9E4::get_offset_of_mCamPositionAtSceneStart_19(),
	DigitalEyewearARController_t973FDCC2DBCE328656150191FBC1A0E49189D9E4::get_offset_of_mCamRotationAtSceneStart_20(),
	DigitalEyewearARController_t973FDCC2DBCE328656150191FBC1A0E49189D9E4_StaticFields::get_offset_of_mInstance_21(),
	DigitalEyewearARController_t973FDCC2DBCE328656150191FBC1A0E49189D9E4_StaticFields::get_offset_of_mPadlock_22(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2548 = { sizeof (EyewearType_t0DF90F97DCCF9F068455C2AF59B1758E89615C13)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2548[4] = 
{
	EyewearType_t0DF90F97DCCF9F068455C2AF59B1758E89615C13::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2549 = { sizeof (StereoFramework_t95A56F9A03F0EBAFFC34ABBE8309C936859E13BA)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2549[2] = 
{
	StereoFramework_t95A56F9A03F0EBAFFC34ABBE8309C936859E13BA::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2550 = { sizeof (SeeThroughConfiguration_tF34F5E33DC51F5EEB23599A905DD112FF00C8E34)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2550[3] = 
{
	SeeThroughConfiguration_tF34F5E33DC51F5EEB23599A905DD112FF00C8E34::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2551 = { sizeof (SerializableViewerParameters_t5F6E8C8CE0B55CCA2E3AC93018053A78AAD5DBE9), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2551[11] = 
{
	SerializableViewerParameters_t5F6E8C8CE0B55CCA2E3AC93018053A78AAD5DBE9::get_offset_of_Version_0(),
	SerializableViewerParameters_t5F6E8C8CE0B55CCA2E3AC93018053A78AAD5DBE9::get_offset_of_Name_1(),
	SerializableViewerParameters_t5F6E8C8CE0B55CCA2E3AC93018053A78AAD5DBE9::get_offset_of_Manufacturer_2(),
	SerializableViewerParameters_t5F6E8C8CE0B55CCA2E3AC93018053A78AAD5DBE9::get_offset_of_ButtonType_3(),
	SerializableViewerParameters_t5F6E8C8CE0B55CCA2E3AC93018053A78AAD5DBE9::get_offset_of_ScreenToLensDistance_4(),
	SerializableViewerParameters_t5F6E8C8CE0B55CCA2E3AC93018053A78AAD5DBE9::get_offset_of_InterLensDistance_5(),
	SerializableViewerParameters_t5F6E8C8CE0B55CCA2E3AC93018053A78AAD5DBE9::get_offset_of_TrayAlignment_6(),
	SerializableViewerParameters_t5F6E8C8CE0B55CCA2E3AC93018053A78AAD5DBE9::get_offset_of_LensCenterToTrayDistance_7(),
	SerializableViewerParameters_t5F6E8C8CE0B55CCA2E3AC93018053A78AAD5DBE9::get_offset_of_DistortionCoefficients_8(),
	SerializableViewerParameters_t5F6E8C8CE0B55CCA2E3AC93018053A78AAD5DBE9::get_offset_of_FieldOfView_9(),
	SerializableViewerParameters_t5F6E8C8CE0B55CCA2E3AC93018053A78AAD5DBE9::get_offset_of_ContainsMagnet_10(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2552 = { sizeof (UnityComponentExtensions_t9F0045DBCEFA6E3D0D61EF91365CB0A9703DF288), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2553 = { sizeof (AValidatableVideoBackgroundConfigProperty_t7C670179380AA43CB486E420F6BAB3B08B01F6B4), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2553[2] = 
{
	AValidatableVideoBackgroundConfigProperty_t7C670179380AA43CB486E420F6BAB3B08B01F6B4::get_offset_of_Config_0(),
	AValidatableVideoBackgroundConfigProperty_t7C670179380AA43CB486E420F6BAB3B08B01F6B4::get_offset_of_DefaultProvider_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2554 = { sizeof (MatteShaderProperty_t135A3774A258638E6E504EC3C593105CD140D2FD), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2555 = { sizeof (NumDivisionsProperty_t256C036FE34F79188C444C116986E14905657527), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2555[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2556 = { sizeof (VideoBackgroundConfigValidator_tC6D2432439D8AAAF1E72C8124FC620504DC11EB0), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2556[1] = 
{
	VideoBackgroundConfigValidator_tC6D2432439D8AAAF1E72C8124FC620504DC11EB0::get_offset_of_mValidatableProperties_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2557 = { sizeof (U3CU3Ec__DisplayClass2_0_tDA1C694A3B22700FA2A2B9A65EC6A49E864F2750), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2557[1] = 
{
	U3CU3Ec__DisplayClass2_0_tDA1C694A3B22700FA2A2B9A65EC6A49E864F2750::get_offset_of_res_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2558 = { sizeof (VideoBackgroundShaderProperty_t162378EC0A889704F1DA266B52C01CF58B875B49), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2559 = { sizeof (EyewearDevice_t083CA7719B929A57A532B386322C61658849AA1E), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2560 = { sizeof (EyeID_t28F4EC81A49D7B7323B60C35F563D9A2FD226631)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2560[4] = 
{
	EyeID_t28F4EC81A49D7B7323B60C35F563D9A2FD226631::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2561 = { sizeof (EyewearCalibrationReading_tD743FD53EA93E7F38F03C245F65EFBBE8722C7B8)+ sizeof (RuntimeObject), sizeof(EyewearCalibrationReading_tD743FD53EA93E7F38F03C245F65EFBBE8722C7B8_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable2561[5] = 
{
	EyewearCalibrationReading_tD743FD53EA93E7F38F03C245F65EFBBE8722C7B8::get_offset_of_pose_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	EyewearCalibrationReading_tD743FD53EA93E7F38F03C245F65EFBBE8722C7B8::get_offset_of_scale_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	EyewearCalibrationReading_tD743FD53EA93E7F38F03C245F65EFBBE8722C7B8::get_offset_of_centerX_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	EyewearCalibrationReading_tD743FD53EA93E7F38F03C245F65EFBBE8722C7B8::get_offset_of_centerY_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	EyewearCalibrationReading_tD743FD53EA93E7F38F03C245F65EFBBE8722C7B8::get_offset_of_type_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2562 = { sizeof (AlignmentType_tF2C2C7A89AC6F079D5F34A736DC4D5F5BF2C01B8)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2562[4] = 
{
	AlignmentType_tF2C2C7A89AC6F079D5F34A736DC4D5F5BF2C01B8::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2563 = { sizeof (GuideView_t0732A5D3A8536A322937D1E3FB0DF808ED666956), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2563[4] = 
{
	GuideView_t0732A5D3A8536A322937D1E3FB0DF808ED666956::get_offset_of_U3CImageU3Ek__BackingField_0(),
	GuideView_t0732A5D3A8536A322937D1E3FB0DF808ED666956::get_offset_of_mInstancePtr_1(),
	GuideView_t0732A5D3A8536A322937D1E3FB0DF808ED666956::get_offset_of_mPose_2(),
	GuideView_t0732A5D3A8536A322937D1E3FB0DF808ED666956::get_offset_of_PropertyChanged_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2564 = { sizeof (GuideView2DBehaviour_t2B9C7F5CED5A2EE6DCEF7BBE93B74C012A2EE52B), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2564[5] = 
{
	GuideView2DBehaviour_t2B9C7F5CED5A2EE6DCEF7BBE93B74C012A2EE52B::get_offset_of_mCameraAspect_4(),
	GuideView2DBehaviour_t2B9C7F5CED5A2EE6DCEF7BBE93B74C012A2EE52B::get_offset_of_mCameraFOV_5(),
	GuideView2DBehaviour_t2B9C7F5CED5A2EE6DCEF7BBE93B74C012A2EE52B::get_offset_of_mCameraNearPlane_6(),
	GuideView2DBehaviour_t2B9C7F5CED5A2EE6DCEF7BBE93B74C012A2EE52B::get_offset_of_mGuideViewTexture_7(),
	GuideView2DBehaviour_t2B9C7F5CED5A2EE6DCEF7BBE93B74C012A2EE52B::get_offset_of_mFlipImageVertically_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2565 = { sizeof (GuideView3DBehaviour_tAFB7AAB771DAFC4E0CC71309E8B7B87FAC63EDC0), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2565[1] = 
{
	GuideView3DBehaviour_tAFB7AAB771DAFC4E0CC71309E8B7B87FAC63EDC0::get_offset_of_mCurrentGuideView_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2566 = { sizeof (GuideViewRenderingBehaviour_tF142A04A9437EFC6298F1D6CD1629DD8C334FD62), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2566[11] = 
{
	GuideViewRenderingBehaviour_tF142A04A9437EFC6298F1D6CD1629DD8C334FD62::get_offset_of_guideReappearanceDelay_4(),
	0,
	0,
	GuideViewRenderingBehaviour_tF142A04A9437EFC6298F1D6CD1629DD8C334FD62::get_offset_of_mTrackedTarget_7(),
	GuideViewRenderingBehaviour_tF142A04A9437EFC6298F1D6CD1629DD8C334FD62::get_offset_of_mGuideViewDisplayMode_8(),
	GuideViewRenderingBehaviour_tF142A04A9437EFC6298F1D6CD1629DD8C334FD62::get_offset_of_mGuideView_9(),
	GuideViewRenderingBehaviour_tF142A04A9437EFC6298F1D6CD1629DD8C334FD62::get_offset_of_mGuideViewInitialized_10(),
	GuideViewRenderingBehaviour_tF142A04A9437EFC6298F1D6CD1629DD8C334FD62::get_offset_of_mShowGuideViewCoroutine_11(),
	GuideViewRenderingBehaviour_tF142A04A9437EFC6298F1D6CD1629DD8C334FD62::get_offset_of_mGuideViewGameObject_12(),
	GuideViewRenderingBehaviour_tF142A04A9437EFC6298F1D6CD1629DD8C334FD62::get_offset_of_mGuideViewShown_13(),
	GuideViewRenderingBehaviour_tF142A04A9437EFC6298F1D6CD1629DD8C334FD62::get_offset_of_mPrevDepthTextureMode_14(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2567 = { sizeof (U3CShowGuideViewAfterU3Ed__22_t149D649553EA5CEFD4B612ADDAC88BF404274BD4), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2567[4] = 
{
	U3CShowGuideViewAfterU3Ed__22_t149D649553EA5CEFD4B612ADDAC88BF404274BD4::get_offset_of_U3CU3E1__state_0(),
	U3CShowGuideViewAfterU3Ed__22_t149D649553EA5CEFD4B612ADDAC88BF404274BD4::get_offset_of_U3CU3E2__current_1(),
	U3CShowGuideViewAfterU3Ed__22_t149D649553EA5CEFD4B612ADDAC88BF404274BD4::get_offset_of_seconds_2(),
	U3CShowGuideViewAfterU3Ed__22_t149D649553EA5CEFD4B612ADDAC88BF404274BD4::get_offset_of_U3CU3E4__this_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2568 = { sizeof (U3CSetChildOfVuforiaAnchorU3Ed__23_t90E33B7D4CE9FCBA6FB022A584337E2FD5492D17), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2568[3] = 
{
	U3CSetChildOfVuforiaAnchorU3Ed__23_t90E33B7D4CE9FCBA6FB022A584337E2FD5492D17::get_offset_of_U3CU3E1__state_0(),
	U3CSetChildOfVuforiaAnchorU3Ed__23_t90E33B7D4CE9FCBA6FB022A584337E2FD5492D17::get_offset_of_U3CU3E2__current_1(),
	U3CSetChildOfVuforiaAnchorU3Ed__23_t90E33B7D4CE9FCBA6FB022A584337E2FD5492D17::get_offset_of_U3CU3E4__this_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2569 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2570 = { sizeof (ModelTargetImpl_tD484936FF7A7ED1644951F50A18D4574B095480E), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2570[2] = 
{
	ModelTargetImpl_tD484936FF7A7ED1644951F50A18D4574B095480E::get_offset_of_mBoundingBoxImpl_4(),
	ModelTargetImpl_tD484936FF7A7ED1644951F50A18D4574B095480E::get_offset_of_mLoadedGuideViews_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2571 = { sizeof (ModelTargetType_t7AA8F7B8F72074404180E971F6F4AE2CEBB26CD6)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2571[3] = 
{
	ModelTargetType_t7AA8F7B8F72074404180E971F6F4AE2CEBB26CD6::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2572 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2573 = { sizeof (ModelTargetBehaviour_t283F7A0B136589E033A458B5FE0C42F3248CE0B0), -1, sizeof(ModelTargetBehaviour_t283F7A0B136589E033A458B5FE0C42F3248CE0B0_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2573[24] = 
{
	ModelTargetBehaviour_t283F7A0B136589E033A458B5FE0C42F3248CE0B0::get_offset_of_mModelTarget_13(),
	ModelTargetBehaviour_t283F7A0B136589E033A458B5FE0C42F3248CE0B0_StaticFields::get_offset_of_GUIDE_VIEW_RENDERER_NAME_14(),
	ModelTargetBehaviour_t283F7A0B136589E033A458B5FE0C42F3248CE0B0::get_offset_of_mGuideViewRenderer_15(),
	ModelTargetBehaviour_t283F7A0B136589E033A458B5FE0C42F3248CE0B0::get_offset_of_mDeviceTracker_16(),
	ModelTargetBehaviour_t283F7A0B136589E033A458B5FE0C42F3248CE0B0::get_offset_of_mModelTargetType_17(),
	ModelTargetBehaviour_t283F7A0B136589E033A458B5FE0C42F3248CE0B0::get_offset_of_mBaseSize_18(),
	ModelTargetBehaviour_t283F7A0B136589E033A458B5FE0C42F3248CE0B0::get_offset_of_mAspectRatioXY_19(),
	ModelTargetBehaviour_t283F7A0B136589E033A458B5FE0C42F3248CE0B0::get_offset_of_mAspectRatioXZ_20(),
	ModelTargetBehaviour_t283F7A0B136589E033A458B5FE0C42F3248CE0B0::get_offset_of_mShowBoundingBox_21(),
	ModelTargetBehaviour_t283F7A0B136589E033A458B5FE0C42F3248CE0B0::get_offset_of_mOverrideSnappingPose_22(),
	ModelTargetBehaviour_t283F7A0B136589E033A458B5FE0C42F3248CE0B0::get_offset_of_mBBoxMin_23(),
	ModelTargetBehaviour_t283F7A0B136589E033A458B5FE0C42F3248CE0B0::get_offset_of_mBBoxMax_24(),
	ModelTargetBehaviour_t283F7A0B136589E033A458B5FE0C42F3248CE0B0::get_offset_of_mPreviewImage_25(),
	ModelTargetBehaviour_t283F7A0B136589E033A458B5FE0C42F3248CE0B0::get_offset_of_mLength_26(),
	ModelTargetBehaviour_t283F7A0B136589E033A458B5FE0C42F3248CE0B0::get_offset_of_mWidth_27(),
	ModelTargetBehaviour_t283F7A0B136589E033A458B5FE0C42F3248CE0B0::get_offset_of_mHeight_28(),
	ModelTargetBehaviour_t283F7A0B136589E033A458B5FE0C42F3248CE0B0::get_offset_of_m3DGuideViewModel_29(),
	ModelTargetBehaviour_t283F7A0B136589E033A458B5FE0C42F3248CE0B0::get_offset_of_m2DGuideViewImage_30(),
	ModelTargetBehaviour_t283F7A0B136589E033A458B5FE0C42F3248CE0B0::get_offset_of_mGuideViewDisplayMode_31(),
	ModelTargetBehaviour_t283F7A0B136589E033A458B5FE0C42F3248CE0B0::get_offset_of_m2DGuideViewMaterial_32(),
	ModelTargetBehaviour_t283F7A0B136589E033A458B5FE0C42F3248CE0B0::get_offset_of_m3DGuideViewMaterial_33(),
	ModelTargetBehaviour_t283F7A0B136589E033A458B5FE0C42F3248CE0B0::get_offset_of_mLastTransformScale_34(),
	ModelTargetBehaviour_t283F7A0B136589E033A458B5FE0C42F3248CE0B0::get_offset_of_mLastSize_35(),
	ModelTargetBehaviour_t283F7A0B136589E033A458B5FE0C42F3248CE0B0::get_offset_of_mDataSetIsActive_36(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2574 = { sizeof (GuideViewDisplayMode_t88D0866B25C697FC57941C3608F5C0C58928533D)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2574[4] = 
{
	GuideViewDisplayMode_t88D0866B25C697FC57941C3608F5C0C58928533D::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2575 = { sizeof (GLErrorHandler_t0E814EDCBE6293FD3D378715730ED229429AB93A), -1, sizeof(GLErrorHandler_t0E814EDCBE6293FD3D378715730ED229429AB93A_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2575[3] = 
{
	GLErrorHandler_t0E814EDCBE6293FD3D378715730ED229429AB93A_StaticFields::get_offset_of_mErrorText_4(),
	GLErrorHandler_t0E814EDCBE6293FD3D378715730ED229429AB93A_StaticFields::get_offset_of_mErrorOccurred_5(),
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2576 = { sizeof (MaskOutBehaviour_t1D183DD82AF2945A6334465A9E6759268AB689F4), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2576[1] = 
{
	MaskOutBehaviour_t1D183DD82AF2945A6334465A9E6759268AB689F4::get_offset_of_maskMaterial_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2577 = { sizeof (AnchorData_tC476940A18BABB720CE1D5A2B78153B01DF407FF)+ sizeof (RuntimeObject), sizeof(AnchorData_tC476940A18BABB720CE1D5A2B78153B01DF407FF ), 0, 0 };
extern const int32_t g_FieldOffsetTable2577[2] = 
{
	AnchorData_tC476940A18BABB720CE1D5A2B78153B01DF407FF::get_offset_of_id_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	AnchorData_tC476940A18BABB720CE1D5A2B78153B01DF407FF::get_offset_of_unused_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2578 = { sizeof (SmartTerrainARController_t71E6FA089F9760C9BA027E3808EE43568BF0BD3D), -1, sizeof(SmartTerrainARController_t71E6FA089F9760C9BA027E3808EE43568BF0BD3D_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2578[3] = 
{
	SmartTerrainARController_t71E6FA089F9760C9BA027E3808EE43568BF0BD3D_StaticFields::get_offset_of_mInstance_1(),
	SmartTerrainARController_t71E6FA089F9760C9BA027E3808EE43568BF0BD3D::get_offset_of_mAutoInitAndStartTracker_2(),
	SmartTerrainARController_t71E6FA089F9760C9BA027E3808EE43568BF0BD3D::get_offset_of_mState_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2579 = { sizeof (State_t3FDFF603F7E24F1BA6D3159D9F4CC7E1B4F8F4CE)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2579[4] = 
{
	State_t3FDFF603F7E24F1BA6D3159D9F4CC7E1B4F8F4CE::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2580 = { sizeof (StageType_t365B0DEB2DCA1C8053A874CB86AAA2AD99C93AC6)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2580[3] = 
{
	StageType_t365B0DEB2DCA1C8053A874CB86AAA2AD99C93AC6::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2581 = { sizeof (ContentPlacedEvent_t6F76CC86D8FF827E64E67C1DB8D770FB7A085997), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2582 = { sizeof (ContentPositioningBehaviour_t8B3CF7741A8FE98EAAE4210540CDA194E4379B5B), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2582[8] = 
{
	ContentPositioningBehaviour_t8B3CF7741A8FE98EAAE4210540CDA194E4379B5B::get_offset_of_AnchorStage_4(),
	ContentPositioningBehaviour_t8B3CF7741A8FE98EAAE4210540CDA194E4379B5B::get_offset_of_DuplicateStage_5(),
	ContentPositioningBehaviour_t8B3CF7741A8FE98EAAE4210540CDA194E4379B5B::get_offset_of_OnContentPlaced_6(),
	ContentPositioningBehaviour_t8B3CF7741A8FE98EAAE4210540CDA194E4379B5B::get_offset_of_mDisplayAdvanced_7(),
	0,
	0,
	ContentPositioningBehaviour_t8B3CF7741A8FE98EAAE4210540CDA194E4379B5B::get_offset_of_mDeviceTracker_10(),
	ContentPositioningBehaviour_t8B3CF7741A8FE98EAAE4210540CDA194E4379B5B::get_offset_of_mInstantiatedAnchors_11(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2583 = { sizeof (U3CU3Ec__DisplayClass10_0_tBA0EADD82169074AB68C3D86F7B4C4D898AEB74B), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2583[2] = 
{
	U3CU3Ec__DisplayClass10_0_tBA0EADD82169074AB68C3D86F7B4C4D898AEB74B::get_offset_of_pose_0(),
	U3CU3Ec__DisplayClass10_0_tBA0EADD82169074AB68C3D86F7B4C4D898AEB74B::get_offset_of_U3CU3E4__this_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2584 = { sizeof (U3CU3Ec__DisplayClass11_0_t893AB4331842E877D333A316C278CA9F09C717EC), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2584[2] = 
{
	U3CU3Ec__DisplayClass11_0_t893AB4331842E877D333A316C278CA9F09C717EC::get_offset_of_hitTestResult_0(),
	U3CU3Ec__DisplayClass11_0_t893AB4331842E877D333A316C278CA9F09C717EC::get_offset_of_U3CU3E4__this_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2585 = { sizeof (U3CU3Ec__DisplayClass15_0_tA7AC9CC14B4CB1EC918FB6C6D8A0447855F59EF9), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2585[1] = 
{
	U3CU3Ec__DisplayClass15_0_tA7AC9CC14B4CB1EC918FB6C6D8A0447855F59EF9::get_offset_of_anchor_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2586 = { sizeof (AnchorImpl_t187011BD4C3999DD142AA584FB40EDB48A4794DC), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2586[2] = 
{
	AnchorImpl_t187011BD4C3999DD142AA584FB40EDB48A4794DC::get_offset_of_mName_0(),
	AnchorImpl_t187011BD4C3999DD142AA584FB40EDB48A4794DC::get_offset_of_mId_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2587 = { sizeof (MidAirPositionerBehaviour_t1A3E8D1CA52D8CD157FA40A50045FE02FFDD12B0), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2587[5] = 
{
	MidAirPositionerBehaviour_t1A3E8D1CA52D8CD157FA40A50045FE02FFDD12B0::get_offset_of_DistanceToCamera_4(),
	MidAirPositionerBehaviour_t1A3E8D1CA52D8CD157FA40A50045FE02FFDD12B0::get_offset_of_MidAirIndicator_5(),
	MidAirPositionerBehaviour_t1A3E8D1CA52D8CD157FA40A50045FE02FFDD12B0::get_offset_of_OnAnchorPositionConfirmed_6(),
	MidAirPositionerBehaviour_t1A3E8D1CA52D8CD157FA40A50045FE02FFDD12B0::get_offset_of_mCamera_7(),
	MidAirPositionerBehaviour_t1A3E8D1CA52D8CD157FA40A50045FE02FFDD12B0::get_offset_of_mDisplayAdvanced_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2588 = { sizeof (AnchorPositionConfirmedEvent_t63B8BA26EFA42FC76914E18C5AF9E3E9223B5093), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2589 = { sizeof (AnchorInputListenerBehaviour_tF944EDC39D85497FCE2C5AF520164C0B759EA404), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2589[2] = 
{
	AnchorInputListenerBehaviour_tF944EDC39D85497FCE2C5AF520164C0B759EA404::get_offset_of_OnInputReceivedEvent_4(),
	AnchorInputListenerBehaviour_tF944EDC39D85497FCE2C5AF520164C0B759EA404::get_offset_of_mDisplayAdvanced_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2590 = { sizeof (InputReceivedEvent_t30AD5C108997667B53F1C6C844EF0B80096BD49C), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2591 = { sizeof (HitTestEvent_t63AB9C2D85E4DB67BA4AEF13B8E65862E90FED4F), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2592 = { sizeof (HitTestMode_tA27F6512F1F271CA16946F6B0D654F766469973B)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2592[3] = 
{
	HitTestMode_tA27F6512F1F271CA16946F6B0D654F766469973B::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2593 = { sizeof (HitTestResultData_t67DDE76CFB43E7C2EF3EA7CA447F2F66C0201FE3)+ sizeof (RuntimeObject), sizeof(HitTestResultData_t67DDE76CFB43E7C2EF3EA7CA447F2F66C0201FE3_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable2593[4] = 
{
	HitTestResultData_t67DDE76CFB43E7C2EF3EA7CA447F2F66C0201FE3::get_offset_of_HitTestResultPtr_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	HitTestResultData_t67DDE76CFB43E7C2EF3EA7CA447F2F66C0201FE3::get_offset_of_Orientation_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	HitTestResultData_t67DDE76CFB43E7C2EF3EA7CA447F2F66C0201FE3::get_offset_of_Position_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	HitTestResultData_t67DDE76CFB43E7C2EF3EA7CA447F2F66C0201FE3::get_offset_of_Unused_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2594 = { sizeof (PlaymodeSmartTerrainImpl_tFC4B251FFDB1C30DC842D1422F07BD37CCCF8C8B), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2594[5] = 
{
	0,
	0,
	PlaymodeSmartTerrainImpl_tFC4B251FFDB1C30DC842D1422F07BD37CCCF8C8B::get_offset_of_mEmulatorPlaneSize_3(),
	PlaymodeSmartTerrainImpl_tFC4B251FFDB1C30DC842D1422F07BD37CCCF8C8B::get_offset_of_mEmulatorGroundPlane_4(),
	PlaymodeSmartTerrainImpl_tFC4B251FFDB1C30DC842D1422F07BD37CCCF8C8B::get_offset_of_mGroundPlaneImageTarget_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2595 = { sizeof (U3CU3Ec_t2255C26323B70789F1DEDBCAA38CD03AB66B600C), -1, sizeof(U3CU3Ec_t2255C26323B70789F1DEDBCAA38CD03AB66B600C_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2595[3] = 
{
	U3CU3Ec_t2255C26323B70789F1DEDBCAA38CD03AB66B600C_StaticFields::get_offset_of_U3CU3E9_0(),
	U3CU3Ec_t2255C26323B70789F1DEDBCAA38CD03AB66B600C_StaticFields::get_offset_of_U3CU3E9__7_0_1(),
	U3CU3Ec_t2255C26323B70789F1DEDBCAA38CD03AB66B600C_StaticFields::get_offset_of_U3CU3E9__7_1_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2596 = { sizeof (SmartTerrain_t09E2ED8DC63BA7169F0DCDCC1BA4419BDB878E47), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2597 = { sizeof (HitTestResult_t53FC02E2A830035AD9ED88C46D9975FD1B5C59DE), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2597[3] = 
{
	HitTestResult_t53FC02E2A830035AD9ED88C46D9975FD1B5C59DE::get_offset_of_mPtr_0(),
	HitTestResult_t53FC02E2A830035AD9ED88C46D9975FD1B5C59DE::get_offset_of_mPosition_1(),
	HitTestResult_t53FC02E2A830035AD9ED88C46D9975FD1B5C59DE::get_offset_of_mOrientation_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2598 = { sizeof (AnchorStageBehaviour_t26FC024D4092C8B296F79D446A6314D8C977945D), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2599 = { sizeof (PlaneFinderBehaviour_t217EBD6AC6946BB53BF52F3525158C0BD4B4EDB9), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2599[11] = 
{
	PlaneFinderBehaviour_t217EBD6AC6946BB53BF52F3525158C0BD4B4EDB9::get_offset_of_PlaneIndicator_4(),
	PlaneFinderBehaviour_t217EBD6AC6946BB53BF52F3525158C0BD4B4EDB9::get_offset_of_Height_5(),
	PlaneFinderBehaviour_t217EBD6AC6946BB53BF52F3525158C0BD4B4EDB9::get_offset_of_OnInteractiveHitTest_6(),
	PlaneFinderBehaviour_t217EBD6AC6946BB53BF52F3525158C0BD4B4EDB9::get_offset_of_OnAutomaticHitTest_7(),
	PlaneFinderBehaviour_t217EBD6AC6946BB53BF52F3525158C0BD4B4EDB9::get_offset_of_mSmartTerrain_8(),
	PlaneFinderBehaviour_t217EBD6AC6946BB53BF52F3525158C0BD4B4EDB9::get_offset_of_mViewportCenter_9(),
	PlaneFinderBehaviour_t217EBD6AC6946BB53BF52F3525158C0BD4B4EDB9::get_offset_of_mLastUpdate_10(),
	PlaneFinderBehaviour_t217EBD6AC6946BB53BF52F3525158C0BD4B4EDB9::get_offset_of_mPreviouslyVisible_11(),
	0,
	PlaneFinderBehaviour_t217EBD6AC6946BB53BF52F3525158C0BD4B4EDB9::get_offset_of_mDisplayAdvanced_13(),
	PlaneFinderBehaviour_t217EBD6AC6946BB53BF52F3525158C0BD4B4EDB9::get_offset_of_mHitTestMode_14(),
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // Modified by PostBuild.cs
