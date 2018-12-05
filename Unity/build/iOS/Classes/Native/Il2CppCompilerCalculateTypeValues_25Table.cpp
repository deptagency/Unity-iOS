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


// Mono.Security.X509.X509Certificate
struct X509Certificate_t489243025;
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
// System.Collections.Generic.List`1<System.Security.Cryptography.X509Certificates.X509CertificateImpl>
struct List_1_t28492484;
// System.Collections.Hashtable
struct Hashtable_t1853889766;
// System.Collections.Hashtable/bucket[]
struct bucketU5BU5D_t876121385;
// System.Collections.ICollection
struct ICollection_t3904884886;
// System.Collections.IDictionary
struct IDictionary_t1363984059;
// System.Collections.IEnumerator
struct IEnumerator_t1853284238;
// System.Collections.IEqualityComparer
struct IEqualityComparer_t1493878338;
// System.ComponentModel.AttributeCollection
struct AttributeCollection_t4221220734;
// System.ComponentModel.Design.ITypeDescriptorFilterService
struct ITypeDescriptorFilterService_t2751835844;
// System.ComponentModel.EventDescriptorCollection
struct EventDescriptorCollection_t2278158832;
// System.ComponentModel.ICustomTypeDescriptor
struct ICustomTypeDescriptor_t1654759486;
// System.ComponentModel.PropertyDescriptorCollection
struct PropertyDescriptorCollection_t4164928659;
// System.ComponentModel.ReferenceConverter
struct ReferenceConverter_t1811933861;
// System.ComponentModel.RefreshEventArgs
struct RefreshEventArgs_t9288056;
// System.ComponentModel.RefreshEventHandler
struct RefreshEventHandler_t3637242902;
// System.ComponentModel.TypeConverter
struct TypeConverter_t2249118273;
// System.ComponentModel.TypeDescriptionProvider
struct TypeDescriptionProvider_t3232077895;
// System.ComponentModel.TypeDescriptionProvider/EmptyCustomTypeDescriptor
struct EmptyCustomTypeDescriptor_t4007109994;
// System.ComponentModel.TypeDescriptor/TypeDescriptionNode
struct TypeDescriptionNode_t3022060204;
// System.ComponentModel.WeakHashtable
struct WeakHashtable_t3533205710;
// System.DelegateData
struct DelegateData_t1677132599;
// System.Delegate[]
struct DelegateU5BU5D_t1703627840;
// System.Diagnostics.BooleanSwitch
struct BooleanSwitch_t440064918;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t1169129676;
// System.Guid[]
struct GuidU5BU5D_t545550574;
// System.IAsyncResult
struct IAsyncResult_t767004451;
// System.IO.Compression.DeflateStream
struct DeflateStream_t4175168077;
// System.IO.Compression.DeflateStreamNative
struct DeflateStreamNative_t1405046456;
// System.IO.Compression.DeflateStreamNative/SafeDeflateStreamHandle
struct SafeDeflateStreamHandle_t2005819069;
// System.IO.Compression.DeflateStreamNative/UnmanagedReadOrWrite
struct UnmanagedReadOrWrite_t1975956110;
// System.IO.Stream
struct Stream_t1273022909;
// System.IO.Stream/ReadWriteTask
struct ReadWriteTask_t156472862;
// System.Int32[]
struct Int32U5BU5D_t385246372;
// System.IntPtr[]
struct IntPtrU5BU5D_t4013366056;
// System.Net.CredentialCache
struct CredentialCache_t3101173682;
// System.Net.ICredentials[]
struct ICredentialsU5BU5D_t1573121536;
// System.Object[]
struct ObjectU5BU5D_t2843939325;
// System.Reflection.MemberInfo
struct MemberInfo_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Runtime.Remoting.ServerIdentity
struct ServerIdentity_t2342208608;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_t2481557153;
// System.Security.Cryptography.AsnEncodedData
struct AsnEncodedData_t382354011;
// System.Security.Cryptography.AsymmetricAlgorithm
struct AsymmetricAlgorithm_t932037087;
// System.Security.Cryptography.Oid
struct Oid_t3552120260;
// System.Security.Cryptography.OidCollection
struct OidCollection_t4234766844;
// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t386037858;
// System.Security.Cryptography.X509Certificates.PublicKey
struct PublicKey_t3779582684;
// System.Security.Cryptography.X509Certificates.X500DistinguishedName
struct X500DistinguishedName_t875709727;
// System.Security.Cryptography.X509Certificates.X509Certificate2Collection
struct X509Certificate2Collection_t2111161276;
// System.Security.Cryptography.X509Certificates.X509CertificateCollection
struct X509CertificateCollection_t3399372417;
// System.Security.Cryptography.X509Certificates.X509CertificateImpl
struct X509CertificateImpl_t2851385038;
// System.Security.Cryptography.X509Certificates.X509CertificateImplCollection
struct X509CertificateImplCollection_t1104947111;
// System.Security.Cryptography.X509Certificates.X509ChainElementCollection
struct X509ChainElementCollection_t3110968994;
// System.Security.Cryptography.X509Certificates.X509ChainImpl
struct X509ChainImpl_t2192100862;
// System.Security.Cryptography.X509Certificates.X509ChainPolicy
struct X509ChainPolicy_t2426922870;
// System.Security.Cryptography.X509Certificates.X509ChainStatus[]
struct X509ChainStatusU5BU5D_t2685945535;
// System.Security.Cryptography.X509Certificates.X509ExtensionCollection
struct X509ExtensionCollection_t1350454579;
// System.Security.SecureString
struct SecureString_t3041467854;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t1281789340;
// System.Threading.SemaphoreSlim
struct SemaphoreSlim_t2974092902;
// System.Type
struct Type_t;
// System.Type[]
struct TypeU5BU5D_t3940880105;
// System.Uri
struct Uri_t100236324;
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
#ifndef COLLECTIONBASE_T2727926298_H
#define COLLECTIONBASE_T2727926298_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.CollectionBase
struct  CollectionBase_t2727926298  : public RuntimeObject
{
public:
	// System.Collections.ArrayList System.Collections.CollectionBase::list
	ArrayList_t2718874744 * ___list_0;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(CollectionBase_t2727926298, ___list_0)); }
	inline ArrayList_t2718874744 * get_list_0() const { return ___list_0; }
	inline ArrayList_t2718874744 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(ArrayList_t2718874744 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((&___list_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLLECTIONBASE_T2727926298_H
#ifndef CUSTOMTYPEDESCRIPTOR_T3093649079_H
#define CUSTOMTYPEDESCRIPTOR_T3093649079_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.CustomTypeDescriptor
struct  CustomTypeDescriptor_t3093649079  : public RuntimeObject
{
public:
	// System.ComponentModel.ICustomTypeDescriptor System.ComponentModel.CustomTypeDescriptor::_parent
	RuntimeObject* ____parent_0;

public:
	inline static int32_t get_offset_of__parent_0() { return static_cast<int32_t>(offsetof(CustomTypeDescriptor_t3093649079, ____parent_0)); }
	inline RuntimeObject* get__parent_0() const { return ____parent_0; }
	inline RuntimeObject** get_address_of__parent_0() { return &____parent_0; }
	inline void set__parent_0(RuntimeObject* value)
	{
		____parent_0 = value;
		Il2CppCodeGenWriteBarrier((&____parent_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CUSTOMTYPEDESCRIPTOR_T3093649079_H
#ifndef INSTANCEDESCRIPTOR_T657473484_H
#define INSTANCEDESCRIPTOR_T657473484_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.Design.Serialization.InstanceDescriptor
struct  InstanceDescriptor_t657473484  : public RuntimeObject
{
public:
	// System.Reflection.MemberInfo System.ComponentModel.Design.Serialization.InstanceDescriptor::member
	MemberInfo_t * ___member_0;
	// System.Collections.ICollection System.ComponentModel.Design.Serialization.InstanceDescriptor::arguments
	RuntimeObject* ___arguments_1;
	// System.Boolean System.ComponentModel.Design.Serialization.InstanceDescriptor::isComplete
	bool ___isComplete_2;

public:
	inline static int32_t get_offset_of_member_0() { return static_cast<int32_t>(offsetof(InstanceDescriptor_t657473484, ___member_0)); }
	inline MemberInfo_t * get_member_0() const { return ___member_0; }
	inline MemberInfo_t ** get_address_of_member_0() { return &___member_0; }
	inline void set_member_0(MemberInfo_t * value)
	{
		___member_0 = value;
		Il2CppCodeGenWriteBarrier((&___member_0), value);
	}

	inline static int32_t get_offset_of_arguments_1() { return static_cast<int32_t>(offsetof(InstanceDescriptor_t657473484, ___arguments_1)); }
	inline RuntimeObject* get_arguments_1() const { return ___arguments_1; }
	inline RuntimeObject** get_address_of_arguments_1() { return &___arguments_1; }
	inline void set_arguments_1(RuntimeObject* value)
	{
		___arguments_1 = value;
		Il2CppCodeGenWriteBarrier((&___arguments_1), value);
	}

	inline static int32_t get_offset_of_isComplete_2() { return static_cast<int32_t>(offsetof(InstanceDescriptor_t657473484, ___isComplete_2)); }
	inline bool get_isComplete_2() const { return ___isComplete_2; }
	inline bool* get_address_of_isComplete_2() { return &___isComplete_2; }
	inline void set_isComplete_2(bool value)
	{
		___isComplete_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INSTANCEDESCRIPTOR_T657473484_H
#ifndef PROPERTYDESCRIPTORENUMERATOR_T2627442857_H
#define PROPERTYDESCRIPTORENUMERATOR_T2627442857_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.PropertyDescriptorCollection/PropertyDescriptorEnumerator
struct  PropertyDescriptorEnumerator_t2627442857  : public RuntimeObject
{
public:
	// System.ComponentModel.PropertyDescriptorCollection System.ComponentModel.PropertyDescriptorCollection/PropertyDescriptorEnumerator::owner
	PropertyDescriptorCollection_t4164928659 * ___owner_0;
	// System.Int32 System.ComponentModel.PropertyDescriptorCollection/PropertyDescriptorEnumerator::index
	int32_t ___index_1;

public:
	inline static int32_t get_offset_of_owner_0() { return static_cast<int32_t>(offsetof(PropertyDescriptorEnumerator_t2627442857, ___owner_0)); }
	inline PropertyDescriptorCollection_t4164928659 * get_owner_0() const { return ___owner_0; }
	inline PropertyDescriptorCollection_t4164928659 ** get_address_of_owner_0() { return &___owner_0; }
	inline void set_owner_0(PropertyDescriptorCollection_t4164928659 * value)
	{
		___owner_0 = value;
		Il2CppCodeGenWriteBarrier((&___owner_0), value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(PropertyDescriptorEnumerator_t2627442857, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PROPERTYDESCRIPTORENUMERATOR_T2627442857_H
#ifndef REFERENCECOMPARER_T1826665674_H
#define REFERENCECOMPARER_T1826665674_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.ReferenceConverter/ReferenceComparer
struct  ReferenceComparer_t1826665674  : public RuntimeObject
{
public:
	// System.ComponentModel.ReferenceConverter System.ComponentModel.ReferenceConverter/ReferenceComparer::converter
	ReferenceConverter_t1811933861 * ___converter_0;

public:
	inline static int32_t get_offset_of_converter_0() { return static_cast<int32_t>(offsetof(ReferenceComparer_t1826665674, ___converter_0)); }
	inline ReferenceConverter_t1811933861 * get_converter_0() const { return ___converter_0; }
	inline ReferenceConverter_t1811933861 ** get_address_of_converter_0() { return &___converter_0; }
	inline void set_converter_0(ReferenceConverter_t1811933861 * value)
	{
		___converter_0 = value;
		Il2CppCodeGenWriteBarrier((&___converter_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REFERENCECOMPARER_T1826665674_H
#ifndef REFLECTEDTYPEDATA_T1775264331_H
#define REFLECTEDTYPEDATA_T1775264331_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.ReflectTypeDescriptionProvider/ReflectedTypeData
struct  ReflectedTypeData_t1775264331  : public RuntimeObject
{
public:
	// System.Type System.ComponentModel.ReflectTypeDescriptionProvider/ReflectedTypeData::_type
	Type_t * ____type_0;
	// System.ComponentModel.AttributeCollection System.ComponentModel.ReflectTypeDescriptionProvider/ReflectedTypeData::_attributes
	AttributeCollection_t4221220734 * ____attributes_1;
	// System.ComponentModel.EventDescriptorCollection System.ComponentModel.ReflectTypeDescriptionProvider/ReflectedTypeData::_events
	EventDescriptorCollection_t2278158832 * ____events_2;
	// System.ComponentModel.PropertyDescriptorCollection System.ComponentModel.ReflectTypeDescriptionProvider/ReflectedTypeData::_properties
	PropertyDescriptorCollection_t4164928659 * ____properties_3;
	// System.ComponentModel.TypeConverter System.ComponentModel.ReflectTypeDescriptionProvider/ReflectedTypeData::_converter
	TypeConverter_t2249118273 * ____converter_4;
	// System.Object[] System.ComponentModel.ReflectTypeDescriptionProvider/ReflectedTypeData::_editors
	ObjectU5BU5D_t2843939325* ____editors_5;
	// System.Type[] System.ComponentModel.ReflectTypeDescriptionProvider/ReflectedTypeData::_editorTypes
	TypeU5BU5D_t3940880105* ____editorTypes_6;
	// System.Int32 System.ComponentModel.ReflectTypeDescriptionProvider/ReflectedTypeData::_editorCount
	int32_t ____editorCount_7;

public:
	inline static int32_t get_offset_of__type_0() { return static_cast<int32_t>(offsetof(ReflectedTypeData_t1775264331, ____type_0)); }
	inline Type_t * get__type_0() const { return ____type_0; }
	inline Type_t ** get_address_of__type_0() { return &____type_0; }
	inline void set__type_0(Type_t * value)
	{
		____type_0 = value;
		Il2CppCodeGenWriteBarrier((&____type_0), value);
	}

	inline static int32_t get_offset_of__attributes_1() { return static_cast<int32_t>(offsetof(ReflectedTypeData_t1775264331, ____attributes_1)); }
	inline AttributeCollection_t4221220734 * get__attributes_1() const { return ____attributes_1; }
	inline AttributeCollection_t4221220734 ** get_address_of__attributes_1() { return &____attributes_1; }
	inline void set__attributes_1(AttributeCollection_t4221220734 * value)
	{
		____attributes_1 = value;
		Il2CppCodeGenWriteBarrier((&____attributes_1), value);
	}

	inline static int32_t get_offset_of__events_2() { return static_cast<int32_t>(offsetof(ReflectedTypeData_t1775264331, ____events_2)); }
	inline EventDescriptorCollection_t2278158832 * get__events_2() const { return ____events_2; }
	inline EventDescriptorCollection_t2278158832 ** get_address_of__events_2() { return &____events_2; }
	inline void set__events_2(EventDescriptorCollection_t2278158832 * value)
	{
		____events_2 = value;
		Il2CppCodeGenWriteBarrier((&____events_2), value);
	}

	inline static int32_t get_offset_of__properties_3() { return static_cast<int32_t>(offsetof(ReflectedTypeData_t1775264331, ____properties_3)); }
	inline PropertyDescriptorCollection_t4164928659 * get__properties_3() const { return ____properties_3; }
	inline PropertyDescriptorCollection_t4164928659 ** get_address_of__properties_3() { return &____properties_3; }
	inline void set__properties_3(PropertyDescriptorCollection_t4164928659 * value)
	{
		____properties_3 = value;
		Il2CppCodeGenWriteBarrier((&____properties_3), value);
	}

	inline static int32_t get_offset_of__converter_4() { return static_cast<int32_t>(offsetof(ReflectedTypeData_t1775264331, ____converter_4)); }
	inline TypeConverter_t2249118273 * get__converter_4() const { return ____converter_4; }
	inline TypeConverter_t2249118273 ** get_address_of__converter_4() { return &____converter_4; }
	inline void set__converter_4(TypeConverter_t2249118273 * value)
	{
		____converter_4 = value;
		Il2CppCodeGenWriteBarrier((&____converter_4), value);
	}

	inline static int32_t get_offset_of__editors_5() { return static_cast<int32_t>(offsetof(ReflectedTypeData_t1775264331, ____editors_5)); }
	inline ObjectU5BU5D_t2843939325* get__editors_5() const { return ____editors_5; }
	inline ObjectU5BU5D_t2843939325** get_address_of__editors_5() { return &____editors_5; }
	inline void set__editors_5(ObjectU5BU5D_t2843939325* value)
	{
		____editors_5 = value;
		Il2CppCodeGenWriteBarrier((&____editors_5), value);
	}

	inline static int32_t get_offset_of__editorTypes_6() { return static_cast<int32_t>(offsetof(ReflectedTypeData_t1775264331, ____editorTypes_6)); }
	inline TypeU5BU5D_t3940880105* get__editorTypes_6() const { return ____editorTypes_6; }
	inline TypeU5BU5D_t3940880105** get_address_of__editorTypes_6() { return &____editorTypes_6; }
	inline void set__editorTypes_6(TypeU5BU5D_t3940880105* value)
	{
		____editorTypes_6 = value;
		Il2CppCodeGenWriteBarrier((&____editorTypes_6), value);
	}

	inline static int32_t get_offset_of__editorCount_7() { return static_cast<int32_t>(offsetof(ReflectedTypeData_t1775264331, ____editorCount_7)); }
	inline int32_t get__editorCount_7() const { return ____editorCount_7; }
	inline int32_t* get_address_of__editorCount_7() { return &____editorCount_7; }
	inline void set__editorCount_7(int32_t value)
	{
		____editorCount_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REFLECTEDTYPEDATA_T1775264331_H
#ifndef STANDARDVALUESCOLLECTION_T2184948248_H
#define STANDARDVALUESCOLLECTION_T2184948248_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.TypeConverter/StandardValuesCollection
struct  StandardValuesCollection_t2184948248  : public RuntimeObject
{
public:
	// System.Collections.ICollection System.ComponentModel.TypeConverter/StandardValuesCollection::values
	RuntimeObject* ___values_0;
	// System.Array System.ComponentModel.TypeConverter/StandardValuesCollection::valueArray
	RuntimeArray * ___valueArray_1;

public:
	inline static int32_t get_offset_of_values_0() { return static_cast<int32_t>(offsetof(StandardValuesCollection_t2184948248, ___values_0)); }
	inline RuntimeObject* get_values_0() const { return ___values_0; }
	inline RuntimeObject** get_address_of_values_0() { return &___values_0; }
	inline void set_values_0(RuntimeObject* value)
	{
		___values_0 = value;
		Il2CppCodeGenWriteBarrier((&___values_0), value);
	}

	inline static int32_t get_offset_of_valueArray_1() { return static_cast<int32_t>(offsetof(StandardValuesCollection_t2184948248, ___valueArray_1)); }
	inline RuntimeArray * get_valueArray_1() const { return ___valueArray_1; }
	inline RuntimeArray ** get_address_of_valueArray_1() { return &___valueArray_1; }
	inline void set_valueArray_1(RuntimeArray * value)
	{
		___valueArray_1 = value;
		Il2CppCodeGenWriteBarrier((&___valueArray_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STANDARDVALUESCOLLECTION_T2184948248_H
#ifndef TYPEDESCRIPTIONPROVIDER_T3232077895_H
#define TYPEDESCRIPTIONPROVIDER_T3232077895_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.TypeDescriptionProvider
struct  TypeDescriptionProvider_t3232077895  : public RuntimeObject
{
public:
	// System.ComponentModel.TypeDescriptionProvider System.ComponentModel.TypeDescriptionProvider::_parent
	TypeDescriptionProvider_t3232077895 * ____parent_0;
	// System.ComponentModel.TypeDescriptionProvider/EmptyCustomTypeDescriptor System.ComponentModel.TypeDescriptionProvider::_emptyDescriptor
	EmptyCustomTypeDescriptor_t4007109994 * ____emptyDescriptor_1;

public:
	inline static int32_t get_offset_of__parent_0() { return static_cast<int32_t>(offsetof(TypeDescriptionProvider_t3232077895, ____parent_0)); }
	inline TypeDescriptionProvider_t3232077895 * get__parent_0() const { return ____parent_0; }
	inline TypeDescriptionProvider_t3232077895 ** get_address_of__parent_0() { return &____parent_0; }
	inline void set__parent_0(TypeDescriptionProvider_t3232077895 * value)
	{
		____parent_0 = value;
		Il2CppCodeGenWriteBarrier((&____parent_0), value);
	}

	inline static int32_t get_offset_of__emptyDescriptor_1() { return static_cast<int32_t>(offsetof(TypeDescriptionProvider_t3232077895, ____emptyDescriptor_1)); }
	inline EmptyCustomTypeDescriptor_t4007109994 * get__emptyDescriptor_1() const { return ____emptyDescriptor_1; }
	inline EmptyCustomTypeDescriptor_t4007109994 ** get_address_of__emptyDescriptor_1() { return &____emptyDescriptor_1; }
	inline void set__emptyDescriptor_1(EmptyCustomTypeDescriptor_t4007109994 * value)
	{
		____emptyDescriptor_1 = value;
		Il2CppCodeGenWriteBarrier((&____emptyDescriptor_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPEDESCRIPTIONPROVIDER_T3232077895_H
#ifndef TYPEDESCRIPTOR_T3066613587_H
#define TYPEDESCRIPTOR_T3066613587_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.TypeDescriptor
struct  TypeDescriptor_t3066613587  : public RuntimeObject
{
public:

public:
};

struct TypeDescriptor_t3066613587_StaticFields
{
public:
	// System.ComponentModel.WeakHashtable System.ComponentModel.TypeDescriptor::_providerTable
	WeakHashtable_t3533205710 * ____providerTable_0;
	// System.Collections.Hashtable System.ComponentModel.TypeDescriptor::_providerTypeTable
	Hashtable_t1853889766 * ____providerTypeTable_1;
	// System.Collections.Hashtable modreq(System.Runtime.CompilerServices.IsVolatile) System.ComponentModel.TypeDescriptor::_defaultProviders
	Hashtable_t1853889766 * ____defaultProviders_2;
	// System.Int32 System.ComponentModel.TypeDescriptor::_metadataVersion
	int32_t ____metadataVersion_3;
	// System.Int32 System.ComponentModel.TypeDescriptor::_collisionIndex
	int32_t ____collisionIndex_4;
	// System.Diagnostics.BooleanSwitch System.ComponentModel.TypeDescriptor::TraceDescriptor
	BooleanSwitch_t440064918 * ___TraceDescriptor_5;
	// System.Guid[] System.ComponentModel.TypeDescriptor::_pipelineInitializeKeys
	GuidU5BU5D_t545550574* ____pipelineInitializeKeys_6;
	// System.Guid[] System.ComponentModel.TypeDescriptor::_pipelineMergeKeys
	GuidU5BU5D_t545550574* ____pipelineMergeKeys_7;
	// System.Guid[] System.ComponentModel.TypeDescriptor::_pipelineFilterKeys
	GuidU5BU5D_t545550574* ____pipelineFilterKeys_8;
	// System.Guid[] System.ComponentModel.TypeDescriptor::_pipelineAttributeFilterKeys
	GuidU5BU5D_t545550574* ____pipelineAttributeFilterKeys_9;
	// System.Object System.ComponentModel.TypeDescriptor::_internalSyncObject
	RuntimeObject * ____internalSyncObject_10;
	// System.ComponentModel.RefreshEventHandler System.ComponentModel.TypeDescriptor::Refreshed
	RefreshEventHandler_t3637242902 * ___Refreshed_11;

public:
	inline static int32_t get_offset_of__providerTable_0() { return static_cast<int32_t>(offsetof(TypeDescriptor_t3066613587_StaticFields, ____providerTable_0)); }
	inline WeakHashtable_t3533205710 * get__providerTable_0() const { return ____providerTable_0; }
	inline WeakHashtable_t3533205710 ** get_address_of__providerTable_0() { return &____providerTable_0; }
	inline void set__providerTable_0(WeakHashtable_t3533205710 * value)
	{
		____providerTable_0 = value;
		Il2CppCodeGenWriteBarrier((&____providerTable_0), value);
	}

	inline static int32_t get_offset_of__providerTypeTable_1() { return static_cast<int32_t>(offsetof(TypeDescriptor_t3066613587_StaticFields, ____providerTypeTable_1)); }
	inline Hashtable_t1853889766 * get__providerTypeTable_1() const { return ____providerTypeTable_1; }
	inline Hashtable_t1853889766 ** get_address_of__providerTypeTable_1() { return &____providerTypeTable_1; }
	inline void set__providerTypeTable_1(Hashtable_t1853889766 * value)
	{
		____providerTypeTable_1 = value;
		Il2CppCodeGenWriteBarrier((&____providerTypeTable_1), value);
	}

	inline static int32_t get_offset_of__defaultProviders_2() { return static_cast<int32_t>(offsetof(TypeDescriptor_t3066613587_StaticFields, ____defaultProviders_2)); }
	inline Hashtable_t1853889766 * get__defaultProviders_2() const { return ____defaultProviders_2; }
	inline Hashtable_t1853889766 ** get_address_of__defaultProviders_2() { return &____defaultProviders_2; }
	inline void set__defaultProviders_2(Hashtable_t1853889766 * value)
	{
		____defaultProviders_2 = value;
		Il2CppCodeGenWriteBarrier((&____defaultProviders_2), value);
	}

	inline static int32_t get_offset_of__metadataVersion_3() { return static_cast<int32_t>(offsetof(TypeDescriptor_t3066613587_StaticFields, ____metadataVersion_3)); }
	inline int32_t get__metadataVersion_3() const { return ____metadataVersion_3; }
	inline int32_t* get_address_of__metadataVersion_3() { return &____metadataVersion_3; }
	inline void set__metadataVersion_3(int32_t value)
	{
		____metadataVersion_3 = value;
	}

	inline static int32_t get_offset_of__collisionIndex_4() { return static_cast<int32_t>(offsetof(TypeDescriptor_t3066613587_StaticFields, ____collisionIndex_4)); }
	inline int32_t get__collisionIndex_4() const { return ____collisionIndex_4; }
	inline int32_t* get_address_of__collisionIndex_4() { return &____collisionIndex_4; }
	inline void set__collisionIndex_4(int32_t value)
	{
		____collisionIndex_4 = value;
	}

	inline static int32_t get_offset_of_TraceDescriptor_5() { return static_cast<int32_t>(offsetof(TypeDescriptor_t3066613587_StaticFields, ___TraceDescriptor_5)); }
	inline BooleanSwitch_t440064918 * get_TraceDescriptor_5() const { return ___TraceDescriptor_5; }
	inline BooleanSwitch_t440064918 ** get_address_of_TraceDescriptor_5() { return &___TraceDescriptor_5; }
	inline void set_TraceDescriptor_5(BooleanSwitch_t440064918 * value)
	{
		___TraceDescriptor_5 = value;
		Il2CppCodeGenWriteBarrier((&___TraceDescriptor_5), value);
	}

	inline static int32_t get_offset_of__pipelineInitializeKeys_6() { return static_cast<int32_t>(offsetof(TypeDescriptor_t3066613587_StaticFields, ____pipelineInitializeKeys_6)); }
	inline GuidU5BU5D_t545550574* get__pipelineInitializeKeys_6() const { return ____pipelineInitializeKeys_6; }
	inline GuidU5BU5D_t545550574** get_address_of__pipelineInitializeKeys_6() { return &____pipelineInitializeKeys_6; }
	inline void set__pipelineInitializeKeys_6(GuidU5BU5D_t545550574* value)
	{
		____pipelineInitializeKeys_6 = value;
		Il2CppCodeGenWriteBarrier((&____pipelineInitializeKeys_6), value);
	}

	inline static int32_t get_offset_of__pipelineMergeKeys_7() { return static_cast<int32_t>(offsetof(TypeDescriptor_t3066613587_StaticFields, ____pipelineMergeKeys_7)); }
	inline GuidU5BU5D_t545550574* get__pipelineMergeKeys_7() const { return ____pipelineMergeKeys_7; }
	inline GuidU5BU5D_t545550574** get_address_of__pipelineMergeKeys_7() { return &____pipelineMergeKeys_7; }
	inline void set__pipelineMergeKeys_7(GuidU5BU5D_t545550574* value)
	{
		____pipelineMergeKeys_7 = value;
		Il2CppCodeGenWriteBarrier((&____pipelineMergeKeys_7), value);
	}

	inline static int32_t get_offset_of__pipelineFilterKeys_8() { return static_cast<int32_t>(offsetof(TypeDescriptor_t3066613587_StaticFields, ____pipelineFilterKeys_8)); }
	inline GuidU5BU5D_t545550574* get__pipelineFilterKeys_8() const { return ____pipelineFilterKeys_8; }
	inline GuidU5BU5D_t545550574** get_address_of__pipelineFilterKeys_8() { return &____pipelineFilterKeys_8; }
	inline void set__pipelineFilterKeys_8(GuidU5BU5D_t545550574* value)
	{
		____pipelineFilterKeys_8 = value;
		Il2CppCodeGenWriteBarrier((&____pipelineFilterKeys_8), value);
	}

	inline static int32_t get_offset_of__pipelineAttributeFilterKeys_9() { return static_cast<int32_t>(offsetof(TypeDescriptor_t3066613587_StaticFields, ____pipelineAttributeFilterKeys_9)); }
	inline GuidU5BU5D_t545550574* get__pipelineAttributeFilterKeys_9() const { return ____pipelineAttributeFilterKeys_9; }
	inline GuidU5BU5D_t545550574** get_address_of__pipelineAttributeFilterKeys_9() { return &____pipelineAttributeFilterKeys_9; }
	inline void set__pipelineAttributeFilterKeys_9(GuidU5BU5D_t545550574* value)
	{
		____pipelineAttributeFilterKeys_9 = value;
		Il2CppCodeGenWriteBarrier((&____pipelineAttributeFilterKeys_9), value);
	}

	inline static int32_t get_offset_of__internalSyncObject_10() { return static_cast<int32_t>(offsetof(TypeDescriptor_t3066613587_StaticFields, ____internalSyncObject_10)); }
	inline RuntimeObject * get__internalSyncObject_10() const { return ____internalSyncObject_10; }
	inline RuntimeObject ** get_address_of__internalSyncObject_10() { return &____internalSyncObject_10; }
	inline void set__internalSyncObject_10(RuntimeObject * value)
	{
		____internalSyncObject_10 = value;
		Il2CppCodeGenWriteBarrier((&____internalSyncObject_10), value);
	}

	inline static int32_t get_offset_of_Refreshed_11() { return static_cast<int32_t>(offsetof(TypeDescriptor_t3066613587_StaticFields, ___Refreshed_11)); }
	inline RefreshEventHandler_t3637242902 * get_Refreshed_11() const { return ___Refreshed_11; }
	inline RefreshEventHandler_t3637242902 ** get_address_of_Refreshed_11() { return &___Refreshed_11; }
	inline void set_Refreshed_11(RefreshEventHandler_t3637242902 * value)
	{
		___Refreshed_11 = value;
		Il2CppCodeGenWriteBarrier((&___Refreshed_11), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPEDESCRIPTOR_T3066613587_H
#ifndef FILTERCACHEITEM_T1189670310_H
#define FILTERCACHEITEM_T1189670310_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.TypeDescriptor/FilterCacheItem
struct  FilterCacheItem_t1189670310  : public RuntimeObject
{
public:
	// System.ComponentModel.Design.ITypeDescriptorFilterService System.ComponentModel.TypeDescriptor/FilterCacheItem::_filterService
	RuntimeObject* ____filterService_0;
	// System.Collections.ICollection System.ComponentModel.TypeDescriptor/FilterCacheItem::FilteredMembers
	RuntimeObject* ___FilteredMembers_1;

public:
	inline static int32_t get_offset_of__filterService_0() { return static_cast<int32_t>(offsetof(FilterCacheItem_t1189670310, ____filterService_0)); }
	inline RuntimeObject* get__filterService_0() const { return ____filterService_0; }
	inline RuntimeObject** get_address_of__filterService_0() { return &____filterService_0; }
	inline void set__filterService_0(RuntimeObject* value)
	{
		____filterService_0 = value;
		Il2CppCodeGenWriteBarrier((&____filterService_0), value);
	}

	inline static int32_t get_offset_of_FilteredMembers_1() { return static_cast<int32_t>(offsetof(FilterCacheItem_t1189670310, ___FilteredMembers_1)); }
	inline RuntimeObject* get_FilteredMembers_1() const { return ___FilteredMembers_1; }
	inline RuntimeObject** get_address_of_FilteredMembers_1() { return &___FilteredMembers_1; }
	inline void set_FilteredMembers_1(RuntimeObject* value)
	{
		___FilteredMembers_1 = value;
		Il2CppCodeGenWriteBarrier((&___FilteredMembers_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FILTERCACHEITEM_T1189670310_H
#ifndef MEMBERDESCRIPTORCOMPARER_T457940793_H
#define MEMBERDESCRIPTORCOMPARER_T457940793_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.TypeDescriptor/MemberDescriptorComparer
struct  MemberDescriptorComparer_t457940793  : public RuntimeObject
{
public:

public:
};

struct MemberDescriptorComparer_t457940793_StaticFields
{
public:
	// System.ComponentModel.TypeDescriptor/MemberDescriptorComparer System.ComponentModel.TypeDescriptor/MemberDescriptorComparer::Instance
	MemberDescriptorComparer_t457940793 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(MemberDescriptorComparer_t457940793_StaticFields, ___Instance_0)); }
	inline MemberDescriptorComparer_t457940793 * get_Instance_0() const { return ___Instance_0; }
	inline MemberDescriptorComparer_t457940793 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(MemberDescriptorComparer_t457940793 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((&___Instance_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MEMBERDESCRIPTORCOMPARER_T457940793_H
#ifndef MERGEDTYPEDESCRIPTOR_T3526482283_H
#define MERGEDTYPEDESCRIPTOR_T3526482283_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.TypeDescriptor/MergedTypeDescriptor
struct  MergedTypeDescriptor_t3526482283  : public RuntimeObject
{
public:
	// System.ComponentModel.ICustomTypeDescriptor System.ComponentModel.TypeDescriptor/MergedTypeDescriptor::_primary
	RuntimeObject* ____primary_0;
	// System.ComponentModel.ICustomTypeDescriptor System.ComponentModel.TypeDescriptor/MergedTypeDescriptor::_secondary
	RuntimeObject* ____secondary_1;

public:
	inline static int32_t get_offset_of__primary_0() { return static_cast<int32_t>(offsetof(MergedTypeDescriptor_t3526482283, ____primary_0)); }
	inline RuntimeObject* get__primary_0() const { return ____primary_0; }
	inline RuntimeObject** get_address_of__primary_0() { return &____primary_0; }
	inline void set__primary_0(RuntimeObject* value)
	{
		____primary_0 = value;
		Il2CppCodeGenWriteBarrier((&____primary_0), value);
	}

	inline static int32_t get_offset_of__secondary_1() { return static_cast<int32_t>(offsetof(MergedTypeDescriptor_t3526482283, ____secondary_1)); }
	inline RuntimeObject* get__secondary_1() const { return ____secondary_1; }
	inline RuntimeObject** get_address_of__secondary_1() { return &____secondary_1; }
	inline void set__secondary_1(RuntimeObject* value)
	{
		____secondary_1 = value;
		Il2CppCodeGenWriteBarrier((&____secondary_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MERGEDTYPEDESCRIPTOR_T3526482283_H
#ifndef TYPEDESCRIPTORCOMOBJECT_T50518439_H
#define TYPEDESCRIPTORCOMOBJECT_T50518439_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.TypeDescriptor/TypeDescriptorComObject
struct  TypeDescriptorComObject_t50518439  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPEDESCRIPTORCOMOBJECT_T50518439_H
#ifndef TYPEDESCRIPTORINTERFACE_T3054885090_H
#define TYPEDESCRIPTORINTERFACE_T3054885090_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.TypeDescriptor/TypeDescriptorInterface
struct  TypeDescriptorInterface_t3054885090  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPEDESCRIPTORINTERFACE_T3054885090_H
#ifndef WEAKKEYCOMPARER_T448163292_H
#define WEAKKEYCOMPARER_T448163292_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.WeakHashtable/WeakKeyComparer
struct  WeakKeyComparer_t448163292  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WEAKKEYCOMPARER_T448163292_H
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
#ifndef AUTHORIZATION_T542416582_H
#define AUTHORIZATION_T542416582_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Authorization
struct  Authorization_t542416582  : public RuntimeObject
{
public:
	// System.String System.Net.Authorization::m_Message
	String_t* ___m_Message_0;
	// System.Boolean System.Net.Authorization::m_Complete
	bool ___m_Complete_1;
	// System.String System.Net.Authorization::ModuleAuthenticationType
	String_t* ___ModuleAuthenticationType_2;

public:
	inline static int32_t get_offset_of_m_Message_0() { return static_cast<int32_t>(offsetof(Authorization_t542416582, ___m_Message_0)); }
	inline String_t* get_m_Message_0() const { return ___m_Message_0; }
	inline String_t** get_address_of_m_Message_0() { return &___m_Message_0; }
	inline void set_m_Message_0(String_t* value)
	{
		___m_Message_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_Message_0), value);
	}

	inline static int32_t get_offset_of_m_Complete_1() { return static_cast<int32_t>(offsetof(Authorization_t542416582, ___m_Complete_1)); }
	inline bool get_m_Complete_1() const { return ___m_Complete_1; }
	inline bool* get_address_of_m_Complete_1() { return &___m_Complete_1; }
	inline void set_m_Complete_1(bool value)
	{
		___m_Complete_1 = value;
	}

	inline static int32_t get_offset_of_ModuleAuthenticationType_2() { return static_cast<int32_t>(offsetof(Authorization_t542416582, ___ModuleAuthenticationType_2)); }
	inline String_t* get_ModuleAuthenticationType_2() const { return ___ModuleAuthenticationType_2; }
	inline String_t** get_address_of_ModuleAuthenticationType_2() { return &___ModuleAuthenticationType_2; }
	inline void set_ModuleAuthenticationType_2(String_t* value)
	{
		___ModuleAuthenticationType_2 = value;
		Il2CppCodeGenWriteBarrier((&___ModuleAuthenticationType_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AUTHORIZATION_T542416582_H
#ifndef CREDENTIALCACHE_T3101173682_H
#define CREDENTIALCACHE_T3101173682_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.CredentialCache
struct  CredentialCache_t3101173682  : public RuntimeObject
{
public:
	// System.Collections.Hashtable System.Net.CredentialCache::cache
	Hashtable_t1853889766 * ___cache_0;
	// System.Collections.Hashtable System.Net.CredentialCache::cacheForHosts
	Hashtable_t1853889766 * ___cacheForHosts_1;
	// System.Int32 System.Net.CredentialCache::m_version
	int32_t ___m_version_2;

public:
	inline static int32_t get_offset_of_cache_0() { return static_cast<int32_t>(offsetof(CredentialCache_t3101173682, ___cache_0)); }
	inline Hashtable_t1853889766 * get_cache_0() const { return ___cache_0; }
	inline Hashtable_t1853889766 ** get_address_of_cache_0() { return &___cache_0; }
	inline void set_cache_0(Hashtable_t1853889766 * value)
	{
		___cache_0 = value;
		Il2CppCodeGenWriteBarrier((&___cache_0), value);
	}

	inline static int32_t get_offset_of_cacheForHosts_1() { return static_cast<int32_t>(offsetof(CredentialCache_t3101173682, ___cacheForHosts_1)); }
	inline Hashtable_t1853889766 * get_cacheForHosts_1() const { return ___cacheForHosts_1; }
	inline Hashtable_t1853889766 ** get_address_of_cacheForHosts_1() { return &___cacheForHosts_1; }
	inline void set_cacheForHosts_1(Hashtable_t1853889766 * value)
	{
		___cacheForHosts_1 = value;
		Il2CppCodeGenWriteBarrier((&___cacheForHosts_1), value);
	}

	inline static int32_t get_offset_of_m_version_2() { return static_cast<int32_t>(offsetof(CredentialCache_t3101173682, ___m_version_2)); }
	inline int32_t get_m_version_2() const { return ___m_version_2; }
	inline int32_t* get_address_of_m_version_2() { return &___m_version_2; }
	inline void set_m_version_2(int32_t value)
	{
		___m_version_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CREDENTIALCACHE_T3101173682_H
#ifndef CREDENTIALENUMERATOR_T3795729284_H
#define CREDENTIALENUMERATOR_T3795729284_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.CredentialCache/CredentialEnumerator
struct  CredentialEnumerator_t3795729284  : public RuntimeObject
{
public:
	// System.Net.CredentialCache System.Net.CredentialCache/CredentialEnumerator::m_cache
	CredentialCache_t3101173682 * ___m_cache_0;
	// System.Net.ICredentials[] System.Net.CredentialCache/CredentialEnumerator::m_array
	ICredentialsU5BU5D_t1573121536* ___m_array_1;
	// System.Int32 System.Net.CredentialCache/CredentialEnumerator::m_index
	int32_t ___m_index_2;
	// System.Int32 System.Net.CredentialCache/CredentialEnumerator::m_version
	int32_t ___m_version_3;

public:
	inline static int32_t get_offset_of_m_cache_0() { return static_cast<int32_t>(offsetof(CredentialEnumerator_t3795729284, ___m_cache_0)); }
	inline CredentialCache_t3101173682 * get_m_cache_0() const { return ___m_cache_0; }
	inline CredentialCache_t3101173682 ** get_address_of_m_cache_0() { return &___m_cache_0; }
	inline void set_m_cache_0(CredentialCache_t3101173682 * value)
	{
		___m_cache_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_cache_0), value);
	}

	inline static int32_t get_offset_of_m_array_1() { return static_cast<int32_t>(offsetof(CredentialEnumerator_t3795729284, ___m_array_1)); }
	inline ICredentialsU5BU5D_t1573121536* get_m_array_1() const { return ___m_array_1; }
	inline ICredentialsU5BU5D_t1573121536** get_address_of_m_array_1() { return &___m_array_1; }
	inline void set_m_array_1(ICredentialsU5BU5D_t1573121536* value)
	{
		___m_array_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_array_1), value);
	}

	inline static int32_t get_offset_of_m_index_2() { return static_cast<int32_t>(offsetof(CredentialEnumerator_t3795729284, ___m_index_2)); }
	inline int32_t get_m_index_2() const { return ___m_index_2; }
	inline int32_t* get_address_of_m_index_2() { return &___m_index_2; }
	inline void set_m_index_2(int32_t value)
	{
		___m_index_2 = value;
	}

	inline static int32_t get_offset_of_m_version_3() { return static_cast<int32_t>(offsetof(CredentialEnumerator_t3795729284, ___m_version_3)); }
	inline int32_t get_m_version_3() const { return ___m_version_3; }
	inline int32_t* get_address_of_m_version_3() { return &___m_version_3; }
	inline void set_m_version_3(int32_t value)
	{
		___m_version_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CREDENTIALENUMERATOR_T3795729284_H
#ifndef CREDENTIALKEY_T3703422271_H
#define CREDENTIALKEY_T3703422271_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.CredentialKey
struct  CredentialKey_t3703422271  : public RuntimeObject
{
public:
	// System.Uri System.Net.CredentialKey::UriPrefix
	Uri_t100236324 * ___UriPrefix_0;
	// System.Int32 System.Net.CredentialKey::UriPrefixLength
	int32_t ___UriPrefixLength_1;
	// System.String System.Net.CredentialKey::AuthenticationType
	String_t* ___AuthenticationType_2;
	// System.Int32 System.Net.CredentialKey::m_HashCode
	int32_t ___m_HashCode_3;
	// System.Boolean System.Net.CredentialKey::m_ComputedHashCode
	bool ___m_ComputedHashCode_4;

public:
	inline static int32_t get_offset_of_UriPrefix_0() { return static_cast<int32_t>(offsetof(CredentialKey_t3703422271, ___UriPrefix_0)); }
	inline Uri_t100236324 * get_UriPrefix_0() const { return ___UriPrefix_0; }
	inline Uri_t100236324 ** get_address_of_UriPrefix_0() { return &___UriPrefix_0; }
	inline void set_UriPrefix_0(Uri_t100236324 * value)
	{
		___UriPrefix_0 = value;
		Il2CppCodeGenWriteBarrier((&___UriPrefix_0), value);
	}

	inline static int32_t get_offset_of_UriPrefixLength_1() { return static_cast<int32_t>(offsetof(CredentialKey_t3703422271, ___UriPrefixLength_1)); }
	inline int32_t get_UriPrefixLength_1() const { return ___UriPrefixLength_1; }
	inline int32_t* get_address_of_UriPrefixLength_1() { return &___UriPrefixLength_1; }
	inline void set_UriPrefixLength_1(int32_t value)
	{
		___UriPrefixLength_1 = value;
	}

	inline static int32_t get_offset_of_AuthenticationType_2() { return static_cast<int32_t>(offsetof(CredentialKey_t3703422271, ___AuthenticationType_2)); }
	inline String_t* get_AuthenticationType_2() const { return ___AuthenticationType_2; }
	inline String_t** get_address_of_AuthenticationType_2() { return &___AuthenticationType_2; }
	inline void set_AuthenticationType_2(String_t* value)
	{
		___AuthenticationType_2 = value;
		Il2CppCodeGenWriteBarrier((&___AuthenticationType_2), value);
	}

	inline static int32_t get_offset_of_m_HashCode_3() { return static_cast<int32_t>(offsetof(CredentialKey_t3703422271, ___m_HashCode_3)); }
	inline int32_t get_m_HashCode_3() const { return ___m_HashCode_3; }
	inline int32_t* get_address_of_m_HashCode_3() { return &___m_HashCode_3; }
	inline void set_m_HashCode_3(int32_t value)
	{
		___m_HashCode_3 = value;
	}

	inline static int32_t get_offset_of_m_ComputedHashCode_4() { return static_cast<int32_t>(offsetof(CredentialKey_t3703422271, ___m_ComputedHashCode_4)); }
	inline bool get_m_ComputedHashCode_4() const { return ___m_ComputedHashCode_4; }
	inline bool* get_address_of_m_ComputedHashCode_4() { return &___m_ComputedHashCode_4; }
	inline void set_m_ComputedHashCode_4(bool value)
	{
		___m_ComputedHashCode_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CREDENTIALKEY_T3703422271_H
#ifndef NETWORKCREDENTIAL_T3282608323_H
#define NETWORKCREDENTIAL_T3282608323_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkCredential
struct  NetworkCredential_t3282608323  : public RuntimeObject
{
public:
	// System.String System.Net.NetworkCredential::m_domain
	String_t* ___m_domain_0;
	// System.String System.Net.NetworkCredential::m_userName
	String_t* ___m_userName_1;
	// System.Security.SecureString System.Net.NetworkCredential::m_password
	SecureString_t3041467854 * ___m_password_2;

public:
	inline static int32_t get_offset_of_m_domain_0() { return static_cast<int32_t>(offsetof(NetworkCredential_t3282608323, ___m_domain_0)); }
	inline String_t* get_m_domain_0() const { return ___m_domain_0; }
	inline String_t** get_address_of_m_domain_0() { return &___m_domain_0; }
	inline void set_m_domain_0(String_t* value)
	{
		___m_domain_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_domain_0), value);
	}

	inline static int32_t get_offset_of_m_userName_1() { return static_cast<int32_t>(offsetof(NetworkCredential_t3282608323, ___m_userName_1)); }
	inline String_t* get_m_userName_1() const { return ___m_userName_1; }
	inline String_t** get_address_of_m_userName_1() { return &___m_userName_1; }
	inline void set_m_userName_1(String_t* value)
	{
		___m_userName_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_userName_1), value);
	}

	inline static int32_t get_offset_of_m_password_2() { return static_cast<int32_t>(offsetof(NetworkCredential_t3282608323, ___m_password_2)); }
	inline SecureString_t3041467854 * get_m_password_2() const { return ___m_password_2; }
	inline SecureString_t3041467854 ** get_address_of_m_password_2() { return &___m_password_2; }
	inline void set_m_password_2(SecureString_t3041467854 * value)
	{
		___m_password_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_password_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NETWORKCREDENTIAL_T3282608323_H
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
#ifndef ASNENCODEDDATA_T382354011_H
#define ASNENCODEDDATA_T382354011_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.AsnEncodedData
struct  AsnEncodedData_t382354011  : public RuntimeObject
{
public:
	// System.Security.Cryptography.Oid System.Security.Cryptography.AsnEncodedData::_oid
	Oid_t3552120260 * ____oid_0;
	// System.Byte[] System.Security.Cryptography.AsnEncodedData::_raw
	ByteU5BU5D_t4116647657* ____raw_1;

public:
	inline static int32_t get_offset_of__oid_0() { return static_cast<int32_t>(offsetof(AsnEncodedData_t382354011, ____oid_0)); }
	inline Oid_t3552120260 * get__oid_0() const { return ____oid_0; }
	inline Oid_t3552120260 ** get_address_of__oid_0() { return &____oid_0; }
	inline void set__oid_0(Oid_t3552120260 * value)
	{
		____oid_0 = value;
		Il2CppCodeGenWriteBarrier((&____oid_0), value);
	}

	inline static int32_t get_offset_of__raw_1() { return static_cast<int32_t>(offsetof(AsnEncodedData_t382354011, ____raw_1)); }
	inline ByteU5BU5D_t4116647657* get__raw_1() const { return ____raw_1; }
	inline ByteU5BU5D_t4116647657** get_address_of__raw_1() { return &____raw_1; }
	inline void set__raw_1(ByteU5BU5D_t4116647657* value)
	{
		____raw_1 = value;
		Il2CppCodeGenWriteBarrier((&____raw_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASNENCODEDDATA_T382354011_H
#ifndef CAPI_T4202866366_H
#define CAPI_T4202866366_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.CAPI
struct  CAPI_t4202866366  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CAPI_T4202866366_H
#ifndef OIDCOLLECTION_T4234766844_H
#define OIDCOLLECTION_T4234766844_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.OidCollection
struct  OidCollection_t4234766844  : public RuntimeObject
{
public:
	// System.Collections.ArrayList System.Security.Cryptography.OidCollection::m_list
	ArrayList_t2718874744 * ___m_list_0;

public:
	inline static int32_t get_offset_of_m_list_0() { return static_cast<int32_t>(offsetof(OidCollection_t4234766844, ___m_list_0)); }
	inline ArrayList_t2718874744 * get_m_list_0() const { return ___m_list_0; }
	inline ArrayList_t2718874744 ** get_address_of_m_list_0() { return &___m_list_0; }
	inline void set_m_list_0(ArrayList_t2718874744 * value)
	{
		___m_list_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_list_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OIDCOLLECTION_T4234766844_H
#ifndef OIDENUMERATOR_T899373898_H
#define OIDENUMERATOR_T899373898_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.OidEnumerator
struct  OidEnumerator_t899373898  : public RuntimeObject
{
public:
	// System.Security.Cryptography.OidCollection System.Security.Cryptography.OidEnumerator::m_oids
	OidCollection_t4234766844 * ___m_oids_0;
	// System.Int32 System.Security.Cryptography.OidEnumerator::m_current
	int32_t ___m_current_1;

public:
	inline static int32_t get_offset_of_m_oids_0() { return static_cast<int32_t>(offsetof(OidEnumerator_t899373898, ___m_oids_0)); }
	inline OidCollection_t4234766844 * get_m_oids_0() const { return ___m_oids_0; }
	inline OidCollection_t4234766844 ** get_address_of_m_oids_0() { return &___m_oids_0; }
	inline void set_m_oids_0(OidCollection_t4234766844 * value)
	{
		___m_oids_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_oids_0), value);
	}

	inline static int32_t get_offset_of_m_current_1() { return static_cast<int32_t>(offsetof(OidEnumerator_t899373898, ___m_current_1)); }
	inline int32_t get_m_current_1() const { return ___m_current_1; }
	inline int32_t* get_address_of_m_current_1() { return &___m_current_1; }
	inline void set_m_current_1(int32_t value)
	{
		___m_current_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OIDENUMERATOR_T899373898_H
#ifndef PUBLICKEY_T3779582684_H
#define PUBLICKEY_T3779582684_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.X509Certificates.PublicKey
struct  PublicKey_t3779582684  : public RuntimeObject
{
public:
	// System.Security.Cryptography.AsymmetricAlgorithm System.Security.Cryptography.X509Certificates.PublicKey::_key
	AsymmetricAlgorithm_t932037087 * ____key_0;
	// System.Security.Cryptography.AsnEncodedData System.Security.Cryptography.X509Certificates.PublicKey::_keyValue
	AsnEncodedData_t382354011 * ____keyValue_1;
	// System.Security.Cryptography.AsnEncodedData System.Security.Cryptography.X509Certificates.PublicKey::_params
	AsnEncodedData_t382354011 * ____params_2;
	// System.Security.Cryptography.Oid System.Security.Cryptography.X509Certificates.PublicKey::_oid
	Oid_t3552120260 * ____oid_3;

public:
	inline static int32_t get_offset_of__key_0() { return static_cast<int32_t>(offsetof(PublicKey_t3779582684, ____key_0)); }
	inline AsymmetricAlgorithm_t932037087 * get__key_0() const { return ____key_0; }
	inline AsymmetricAlgorithm_t932037087 ** get_address_of__key_0() { return &____key_0; }
	inline void set__key_0(AsymmetricAlgorithm_t932037087 * value)
	{
		____key_0 = value;
		Il2CppCodeGenWriteBarrier((&____key_0), value);
	}

	inline static int32_t get_offset_of__keyValue_1() { return static_cast<int32_t>(offsetof(PublicKey_t3779582684, ____keyValue_1)); }
	inline AsnEncodedData_t382354011 * get__keyValue_1() const { return ____keyValue_1; }
	inline AsnEncodedData_t382354011 ** get_address_of__keyValue_1() { return &____keyValue_1; }
	inline void set__keyValue_1(AsnEncodedData_t382354011 * value)
	{
		____keyValue_1 = value;
		Il2CppCodeGenWriteBarrier((&____keyValue_1), value);
	}

	inline static int32_t get_offset_of__params_2() { return static_cast<int32_t>(offsetof(PublicKey_t3779582684, ____params_2)); }
	inline AsnEncodedData_t382354011 * get__params_2() const { return ____params_2; }
	inline AsnEncodedData_t382354011 ** get_address_of__params_2() { return &____params_2; }
	inline void set__params_2(AsnEncodedData_t382354011 * value)
	{
		____params_2 = value;
		Il2CppCodeGenWriteBarrier((&____params_2), value);
	}

	inline static int32_t get_offset_of__oid_3() { return static_cast<int32_t>(offsetof(PublicKey_t3779582684, ____oid_3)); }
	inline Oid_t3552120260 * get__oid_3() const { return ____oid_3; }
	inline Oid_t3552120260 ** get_address_of__oid_3() { return &____oid_3; }
	inline void set__oid_3(Oid_t3552120260 * value)
	{
		____oid_3 = value;
		Il2CppCodeGenWriteBarrier((&____oid_3), value);
	}
};

struct PublicKey_t3779582684_StaticFields
{
public:
	// System.Byte[] System.Security.Cryptography.X509Certificates.PublicKey::Empty
	ByteU5BU5D_t4116647657* ___Empty_4;

public:
	inline static int32_t get_offset_of_Empty_4() { return static_cast<int32_t>(offsetof(PublicKey_t3779582684_StaticFields, ___Empty_4)); }
	inline ByteU5BU5D_t4116647657* get_Empty_4() const { return ___Empty_4; }
	inline ByteU5BU5D_t4116647657** get_address_of_Empty_4() { return &___Empty_4; }
	inline void set_Empty_4(ByteU5BU5D_t4116647657* value)
	{
		___Empty_4 = value;
		Il2CppCodeGenWriteBarrier((&___Empty_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PUBLICKEY_T3779582684_H
#ifndef X509CERTIFICATE_T713131622_H
#define X509CERTIFICATE_T713131622_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.X509Certificates.X509Certificate
struct  X509Certificate_t713131622  : public RuntimeObject
{
public:
	// System.Security.Cryptography.X509Certificates.X509CertificateImpl System.Security.Cryptography.X509Certificates.X509Certificate::impl
	X509CertificateImpl_t2851385038 * ___impl_0;
	// System.Boolean System.Security.Cryptography.X509Certificates.X509Certificate::hideDates
	bool ___hideDates_1;
	// System.String System.Security.Cryptography.X509Certificates.X509Certificate::issuer_name
	String_t* ___issuer_name_2;
	// System.String System.Security.Cryptography.X509Certificates.X509Certificate::subject_name
	String_t* ___subject_name_3;

public:
	inline static int32_t get_offset_of_impl_0() { return static_cast<int32_t>(offsetof(X509Certificate_t713131622, ___impl_0)); }
	inline X509CertificateImpl_t2851385038 * get_impl_0() const { return ___impl_0; }
	inline X509CertificateImpl_t2851385038 ** get_address_of_impl_0() { return &___impl_0; }
	inline void set_impl_0(X509CertificateImpl_t2851385038 * value)
	{
		___impl_0 = value;
		Il2CppCodeGenWriteBarrier((&___impl_0), value);
	}

	inline static int32_t get_offset_of_hideDates_1() { return static_cast<int32_t>(offsetof(X509Certificate_t713131622, ___hideDates_1)); }
	inline bool get_hideDates_1() const { return ___hideDates_1; }
	inline bool* get_address_of_hideDates_1() { return &___hideDates_1; }
	inline void set_hideDates_1(bool value)
	{
		___hideDates_1 = value;
	}

	inline static int32_t get_offset_of_issuer_name_2() { return static_cast<int32_t>(offsetof(X509Certificate_t713131622, ___issuer_name_2)); }
	inline String_t* get_issuer_name_2() const { return ___issuer_name_2; }
	inline String_t** get_address_of_issuer_name_2() { return &___issuer_name_2; }
	inline void set_issuer_name_2(String_t* value)
	{
		___issuer_name_2 = value;
		Il2CppCodeGenWriteBarrier((&___issuer_name_2), value);
	}

	inline static int32_t get_offset_of_subject_name_3() { return static_cast<int32_t>(offsetof(X509Certificate_t713131622, ___subject_name_3)); }
	inline String_t* get_subject_name_3() const { return ___subject_name_3; }
	inline String_t** get_address_of_subject_name_3() { return &___subject_name_3; }
	inline void set_subject_name_3(String_t* value)
	{
		___subject_name_3 = value;
		Il2CppCodeGenWriteBarrier((&___subject_name_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // X509CERTIFICATE_T713131622_H
#ifndef X509CERTIFICATEENUMERATOR_T855273292_H
#define X509CERTIFICATEENUMERATOR_T855273292_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.X509Certificates.X509CertificateCollection/X509CertificateEnumerator
struct  X509CertificateEnumerator_t855273292  : public RuntimeObject
{
public:
	// System.Collections.IEnumerator System.Security.Cryptography.X509Certificates.X509CertificateCollection/X509CertificateEnumerator::enumerator
	RuntimeObject* ___enumerator_0;

public:
	inline static int32_t get_offset_of_enumerator_0() { return static_cast<int32_t>(offsetof(X509CertificateEnumerator_t855273292, ___enumerator_0)); }
	inline RuntimeObject* get_enumerator_0() const { return ___enumerator_0; }
	inline RuntimeObject** get_address_of_enumerator_0() { return &___enumerator_0; }
	inline void set_enumerator_0(RuntimeObject* value)
	{
		___enumerator_0 = value;
		Il2CppCodeGenWriteBarrier((&___enumerator_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // X509CERTIFICATEENUMERATOR_T855273292_H
#ifndef X509CERTIFICATEIMPL_T2851385038_H
#define X509CERTIFICATEIMPL_T2851385038_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.X509Certificates.X509CertificateImpl
struct  X509CertificateImpl_t2851385038  : public RuntimeObject
{
public:
	// System.Byte[] System.Security.Cryptography.X509Certificates.X509CertificateImpl::cachedCertificateHash
	ByteU5BU5D_t4116647657* ___cachedCertificateHash_0;

public:
	inline static int32_t get_offset_of_cachedCertificateHash_0() { return static_cast<int32_t>(offsetof(X509CertificateImpl_t2851385038, ___cachedCertificateHash_0)); }
	inline ByteU5BU5D_t4116647657* get_cachedCertificateHash_0() const { return ___cachedCertificateHash_0; }
	inline ByteU5BU5D_t4116647657** get_address_of_cachedCertificateHash_0() { return &___cachedCertificateHash_0; }
	inline void set_cachedCertificateHash_0(ByteU5BU5D_t4116647657* value)
	{
		___cachedCertificateHash_0 = value;
		Il2CppCodeGenWriteBarrier((&___cachedCertificateHash_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // X509CERTIFICATEIMPL_T2851385038_H
#ifndef X509CERTIFICATEIMPLCOLLECTION_T1104947111_H
#define X509CERTIFICATEIMPLCOLLECTION_T1104947111_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.X509Certificates.X509CertificateImplCollection
struct  X509CertificateImplCollection_t1104947111  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<System.Security.Cryptography.X509Certificates.X509CertificateImpl> System.Security.Cryptography.X509Certificates.X509CertificateImplCollection::list
	List_1_t28492484 * ___list_0;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(X509CertificateImplCollection_t1104947111, ___list_0)); }
	inline List_1_t28492484 * get_list_0() const { return ___list_0; }
	inline List_1_t28492484 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t28492484 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((&___list_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // X509CERTIFICATEIMPLCOLLECTION_T1104947111_H
#ifndef X509CHAIN_T194917408_H
#define X509CHAIN_T194917408_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.X509Certificates.X509Chain
struct  X509Chain_t194917408  : public RuntimeObject
{
public:
	// System.Security.Cryptography.X509Certificates.X509ChainImpl System.Security.Cryptography.X509Certificates.X509Chain::impl
	X509ChainImpl_t2192100862 * ___impl_0;

public:
	inline static int32_t get_offset_of_impl_0() { return static_cast<int32_t>(offsetof(X509Chain_t194917408, ___impl_0)); }
	inline X509ChainImpl_t2192100862 * get_impl_0() const { return ___impl_0; }
	inline X509ChainImpl_t2192100862 ** get_address_of_impl_0() { return &___impl_0; }
	inline void set_impl_0(X509ChainImpl_t2192100862 * value)
	{
		___impl_0 = value;
		Il2CppCodeGenWriteBarrier((&___impl_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // X509CHAIN_T194917408_H
#ifndef X509CHAINELEMENTCOLLECTION_T3110968994_H
#define X509CHAINELEMENTCOLLECTION_T3110968994_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.X509Certificates.X509ChainElementCollection
struct  X509ChainElementCollection_t3110968994  : public RuntimeObject
{
public:
	// System.Collections.ArrayList System.Security.Cryptography.X509Certificates.X509ChainElementCollection::_list
	ArrayList_t2718874744 * ____list_0;

public:
	inline static int32_t get_offset_of__list_0() { return static_cast<int32_t>(offsetof(X509ChainElementCollection_t3110968994, ____list_0)); }
	inline ArrayList_t2718874744 * get__list_0() const { return ____list_0; }
	inline ArrayList_t2718874744 ** get_address_of__list_0() { return &____list_0; }
	inline void set__list_0(ArrayList_t2718874744 * value)
	{
		____list_0 = value;
		Il2CppCodeGenWriteBarrier((&____list_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // X509CHAINELEMENTCOLLECTION_T3110968994_H
#ifndef X509CHAINELEMENTENUMERATOR_T3014253456_H
#define X509CHAINELEMENTENUMERATOR_T3014253456_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.X509Certificates.X509ChainElementEnumerator
struct  X509ChainElementEnumerator_t3014253456  : public RuntimeObject
{
public:
	// System.Collections.IEnumerator System.Security.Cryptography.X509Certificates.X509ChainElementEnumerator::enumerator
	RuntimeObject* ___enumerator_0;

public:
	inline static int32_t get_offset_of_enumerator_0() { return static_cast<int32_t>(offsetof(X509ChainElementEnumerator_t3014253456, ___enumerator_0)); }
	inline RuntimeObject* get_enumerator_0() const { return ___enumerator_0; }
	inline RuntimeObject** get_address_of_enumerator_0() { return &___enumerator_0; }
	inline void set_enumerator_0(RuntimeObject* value)
	{
		___enumerator_0 = value;
		Il2CppCodeGenWriteBarrier((&___enumerator_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // X509CHAINELEMENTENUMERATOR_T3014253456_H
#ifndef X509CHAINIMPL_T2192100862_H
#define X509CHAINIMPL_T2192100862_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.X509Certificates.X509ChainImpl
struct  X509ChainImpl_t2192100862  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // X509CHAINIMPL_T2192100862_H
#ifndef X509EXTENSIONCOLLECTION_T1350454579_H
#define X509EXTENSIONCOLLECTION_T1350454579_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.X509Certificates.X509ExtensionCollection
struct  X509ExtensionCollection_t1350454579  : public RuntimeObject
{
public:
	// System.Collections.ArrayList System.Security.Cryptography.X509Certificates.X509ExtensionCollection::_list
	ArrayList_t2718874744 * ____list_1;

public:
	inline static int32_t get_offset_of__list_1() { return static_cast<int32_t>(offsetof(X509ExtensionCollection_t1350454579, ____list_1)); }
	inline ArrayList_t2718874744 * get__list_1() const { return ____list_1; }
	inline ArrayList_t2718874744 ** get_address_of__list_1() { return &____list_1; }
	inline void set__list_1(ArrayList_t2718874744 * value)
	{
		____list_1 = value;
		Il2CppCodeGenWriteBarrier((&____list_1), value);
	}
};

struct X509ExtensionCollection_t1350454579_StaticFields
{
public:
	// System.Byte[] System.Security.Cryptography.X509Certificates.X509ExtensionCollection::Empty
	ByteU5BU5D_t4116647657* ___Empty_0;

public:
	inline static int32_t get_offset_of_Empty_0() { return static_cast<int32_t>(offsetof(X509ExtensionCollection_t1350454579_StaticFields, ___Empty_0)); }
	inline ByteU5BU5D_t4116647657* get_Empty_0() const { return ___Empty_0; }
	inline ByteU5BU5D_t4116647657** get_address_of_Empty_0() { return &___Empty_0; }
	inline void set_Empty_0(ByteU5BU5D_t4116647657* value)
	{
		___Empty_0 = value;
		Il2CppCodeGenWriteBarrier((&___Empty_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // X509EXTENSIONCOLLECTION_T1350454579_H
#ifndef X509EXTENSIONENUMERATOR_T2479560659_H
#define X509EXTENSIONENUMERATOR_T2479560659_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.X509Certificates.X509ExtensionEnumerator
struct  X509ExtensionEnumerator_t2479560659  : public RuntimeObject
{
public:
	// System.Collections.IEnumerator System.Security.Cryptography.X509Certificates.X509ExtensionEnumerator::enumerator
	RuntimeObject* ___enumerator_0;

public:
	inline static int32_t get_offset_of_enumerator_0() { return static_cast<int32_t>(offsetof(X509ExtensionEnumerator_t2479560659, ___enumerator_0)); }
	inline RuntimeObject* get_enumerator_0() const { return ___enumerator_0; }
	inline RuntimeObject** get_address_of_enumerator_0() { return &___enumerator_0; }
	inline void set_enumerator_0(RuntimeObject* value)
	{
		___enumerator_0 = value;
		Il2CppCodeGenWriteBarrier((&___enumerator_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // X509EXTENSIONENUMERATOR_T2479560659_H
#ifndef X509HELPER2_T60991662_H
#define X509HELPER2_T60991662_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.X509Certificates.X509Helper2
struct  X509Helper2_t60991662  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // X509HELPER2_T60991662_H
#ifndef MYNATIVEHELPER_T3301851777_H
#define MYNATIVEHELPER_T3301851777_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.X509Certificates.X509Helper2/MyNativeHelper
struct  MyNativeHelper_t3301851777  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MYNATIVEHELPER_T3301851777_H
#ifndef X509UTILS_T1623412129_H
#define X509UTILS_T1623412129_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.X509Certificates.X509Utils
struct  X509Utils_t1623412129  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // X509UTILS_T1623412129_H
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
#ifndef DESIGNERSERIALIZERATTRIBUTE_T1570548024_H
#define DESIGNERSERIALIZERATTRIBUTE_T1570548024_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.Design.Serialization.DesignerSerializerAttribute
struct  DesignerSerializerAttribute_t1570548024  : public Attribute_t861562559
{
public:
	// System.String System.ComponentModel.Design.Serialization.DesignerSerializerAttribute::serializerTypeName
	String_t* ___serializerTypeName_0;
	// System.String System.ComponentModel.Design.Serialization.DesignerSerializerAttribute::serializerBaseTypeName
	String_t* ___serializerBaseTypeName_1;
	// System.String System.ComponentModel.Design.Serialization.DesignerSerializerAttribute::typeId
	String_t* ___typeId_2;

public:
	inline static int32_t get_offset_of_serializerTypeName_0() { return static_cast<int32_t>(offsetof(DesignerSerializerAttribute_t1570548024, ___serializerTypeName_0)); }
	inline String_t* get_serializerTypeName_0() const { return ___serializerTypeName_0; }
	inline String_t** get_address_of_serializerTypeName_0() { return &___serializerTypeName_0; }
	inline void set_serializerTypeName_0(String_t* value)
	{
		___serializerTypeName_0 = value;
		Il2CppCodeGenWriteBarrier((&___serializerTypeName_0), value);
	}

	inline static int32_t get_offset_of_serializerBaseTypeName_1() { return static_cast<int32_t>(offsetof(DesignerSerializerAttribute_t1570548024, ___serializerBaseTypeName_1)); }
	inline String_t* get_serializerBaseTypeName_1() const { return ___serializerBaseTypeName_1; }
	inline String_t** get_address_of_serializerBaseTypeName_1() { return &___serializerBaseTypeName_1; }
	inline void set_serializerBaseTypeName_1(String_t* value)
	{
		___serializerBaseTypeName_1 = value;
		Il2CppCodeGenWriteBarrier((&___serializerBaseTypeName_1), value);
	}

	inline static int32_t get_offset_of_typeId_2() { return static_cast<int32_t>(offsetof(DesignerSerializerAttribute_t1570548024, ___typeId_2)); }
	inline String_t* get_typeId_2() const { return ___typeId_2; }
	inline String_t** get_address_of_typeId_2() { return &___typeId_2; }
	inline void set_typeId_2(String_t* value)
	{
		___typeId_2 = value;
		Il2CppCodeGenWriteBarrier((&___typeId_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DESIGNERSERIALIZERATTRIBUTE_T1570548024_H
#ifndef ROOTDESIGNERSERIALIZERATTRIBUTE_T3074689342_H
#define ROOTDESIGNERSERIALIZERATTRIBUTE_T3074689342_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.Design.Serialization.RootDesignerSerializerAttribute
struct  RootDesignerSerializerAttribute_t3074689342  : public Attribute_t861562559
{
public:
	// System.Boolean System.ComponentModel.Design.Serialization.RootDesignerSerializerAttribute::reloadable
	bool ___reloadable_0;
	// System.String System.ComponentModel.Design.Serialization.RootDesignerSerializerAttribute::serializerTypeName
	String_t* ___serializerTypeName_1;
	// System.String System.ComponentModel.Design.Serialization.RootDesignerSerializerAttribute::serializerBaseTypeName
	String_t* ___serializerBaseTypeName_2;
	// System.String System.ComponentModel.Design.Serialization.RootDesignerSerializerAttribute::typeId
	String_t* ___typeId_3;

public:
	inline static int32_t get_offset_of_reloadable_0() { return static_cast<int32_t>(offsetof(RootDesignerSerializerAttribute_t3074689342, ___reloadable_0)); }
	inline bool get_reloadable_0() const { return ___reloadable_0; }
	inline bool* get_address_of_reloadable_0() { return &___reloadable_0; }
	inline void set_reloadable_0(bool value)
	{
		___reloadable_0 = value;
	}

	inline static int32_t get_offset_of_serializerTypeName_1() { return static_cast<int32_t>(offsetof(RootDesignerSerializerAttribute_t3074689342, ___serializerTypeName_1)); }
	inline String_t* get_serializerTypeName_1() const { return ___serializerTypeName_1; }
	inline String_t** get_address_of_serializerTypeName_1() { return &___serializerTypeName_1; }
	inline void set_serializerTypeName_1(String_t* value)
	{
		___serializerTypeName_1 = value;
		Il2CppCodeGenWriteBarrier((&___serializerTypeName_1), value);
	}

	inline static int32_t get_offset_of_serializerBaseTypeName_2() { return static_cast<int32_t>(offsetof(RootDesignerSerializerAttribute_t3074689342, ___serializerBaseTypeName_2)); }
	inline String_t* get_serializerBaseTypeName_2() const { return ___serializerBaseTypeName_2; }
	inline String_t** get_address_of_serializerBaseTypeName_2() { return &___serializerBaseTypeName_2; }
	inline void set_serializerBaseTypeName_2(String_t* value)
	{
		___serializerBaseTypeName_2 = value;
		Il2CppCodeGenWriteBarrier((&___serializerBaseTypeName_2), value);
	}

	inline static int32_t get_offset_of_typeId_3() { return static_cast<int32_t>(offsetof(RootDesignerSerializerAttribute_t3074689342, ___typeId_3)); }
	inline String_t* get_typeId_3() const { return ___typeId_3; }
	inline String_t** get_address_of_typeId_3() { return &___typeId_3; }
	inline void set_typeId_3(String_t* value)
	{
		___typeId_3 = value;
		Il2CppCodeGenWriteBarrier((&___typeId_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ROOTDESIGNERSERIALIZERATTRIBUTE_T3074689342_H
#ifndef READONLYATTRIBUTE_T1907441566_H
#define READONLYATTRIBUTE_T1907441566_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.ReadOnlyAttribute
struct  ReadOnlyAttribute_t1907441566  : public Attribute_t861562559
{
public:
	// System.Boolean System.ComponentModel.ReadOnlyAttribute::isReadOnly
	bool ___isReadOnly_0;

public:
	inline static int32_t get_offset_of_isReadOnly_0() { return static_cast<int32_t>(offsetof(ReadOnlyAttribute_t1907441566, ___isReadOnly_0)); }
	inline bool get_isReadOnly_0() const { return ___isReadOnly_0; }
	inline bool* get_address_of_isReadOnly_0() { return &___isReadOnly_0; }
	inline void set_isReadOnly_0(bool value)
	{
		___isReadOnly_0 = value;
	}
};

struct ReadOnlyAttribute_t1907441566_StaticFields
{
public:
	// System.ComponentModel.ReadOnlyAttribute System.ComponentModel.ReadOnlyAttribute::Yes
	ReadOnlyAttribute_t1907441566 * ___Yes_1;
	// System.ComponentModel.ReadOnlyAttribute System.ComponentModel.ReadOnlyAttribute::No
	ReadOnlyAttribute_t1907441566 * ___No_2;
	// System.ComponentModel.ReadOnlyAttribute System.ComponentModel.ReadOnlyAttribute::Default
	ReadOnlyAttribute_t1907441566 * ___Default_3;

public:
	inline static int32_t get_offset_of_Yes_1() { return static_cast<int32_t>(offsetof(ReadOnlyAttribute_t1907441566_StaticFields, ___Yes_1)); }
	inline ReadOnlyAttribute_t1907441566 * get_Yes_1() const { return ___Yes_1; }
	inline ReadOnlyAttribute_t1907441566 ** get_address_of_Yes_1() { return &___Yes_1; }
	inline void set_Yes_1(ReadOnlyAttribute_t1907441566 * value)
	{
		___Yes_1 = value;
		Il2CppCodeGenWriteBarrier((&___Yes_1), value);
	}

	inline static int32_t get_offset_of_No_2() { return static_cast<int32_t>(offsetof(ReadOnlyAttribute_t1907441566_StaticFields, ___No_2)); }
	inline ReadOnlyAttribute_t1907441566 * get_No_2() const { return ___No_2; }
	inline ReadOnlyAttribute_t1907441566 ** get_address_of_No_2() { return &___No_2; }
	inline void set_No_2(ReadOnlyAttribute_t1907441566 * value)
	{
		___No_2 = value;
		Il2CppCodeGenWriteBarrier((&___No_2), value);
	}

	inline static int32_t get_offset_of_Default_3() { return static_cast<int32_t>(offsetof(ReadOnlyAttribute_t1907441566_StaticFields, ___Default_3)); }
	inline ReadOnlyAttribute_t1907441566 * get_Default_3() const { return ___Default_3; }
	inline ReadOnlyAttribute_t1907441566 ** get_address_of_Default_3() { return &___Default_3; }
	inline void set_Default_3(ReadOnlyAttribute_t1907441566 * value)
	{
		___Default_3 = value;
		Il2CppCodeGenWriteBarrier((&___Default_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // READONLYATTRIBUTE_T1907441566_H
#ifndef RECOMMENDEDASCONFIGURABLEATTRIBUTE_T279829077_H
#define RECOMMENDEDASCONFIGURABLEATTRIBUTE_T279829077_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.RecommendedAsConfigurableAttribute
struct  RecommendedAsConfigurableAttribute_t279829077  : public Attribute_t861562559
{
public:
	// System.Boolean System.ComponentModel.RecommendedAsConfigurableAttribute::recommendedAsConfigurable
	bool ___recommendedAsConfigurable_0;

public:
	inline static int32_t get_offset_of_recommendedAsConfigurable_0() { return static_cast<int32_t>(offsetof(RecommendedAsConfigurableAttribute_t279829077, ___recommendedAsConfigurable_0)); }
	inline bool get_recommendedAsConfigurable_0() const { return ___recommendedAsConfigurable_0; }
	inline bool* get_address_of_recommendedAsConfigurable_0() { return &___recommendedAsConfigurable_0; }
	inline void set_recommendedAsConfigurable_0(bool value)
	{
		___recommendedAsConfigurable_0 = value;
	}
};

struct RecommendedAsConfigurableAttribute_t279829077_StaticFields
{
public:
	// System.ComponentModel.RecommendedAsConfigurableAttribute System.ComponentModel.RecommendedAsConfigurableAttribute::No
	RecommendedAsConfigurableAttribute_t279829077 * ___No_1;
	// System.ComponentModel.RecommendedAsConfigurableAttribute System.ComponentModel.RecommendedAsConfigurableAttribute::Yes
	RecommendedAsConfigurableAttribute_t279829077 * ___Yes_2;
	// System.ComponentModel.RecommendedAsConfigurableAttribute System.ComponentModel.RecommendedAsConfigurableAttribute::Default
	RecommendedAsConfigurableAttribute_t279829077 * ___Default_3;

public:
	inline static int32_t get_offset_of_No_1() { return static_cast<int32_t>(offsetof(RecommendedAsConfigurableAttribute_t279829077_StaticFields, ___No_1)); }
	inline RecommendedAsConfigurableAttribute_t279829077 * get_No_1() const { return ___No_1; }
	inline RecommendedAsConfigurableAttribute_t279829077 ** get_address_of_No_1() { return &___No_1; }
	inline void set_No_1(RecommendedAsConfigurableAttribute_t279829077 * value)
	{
		___No_1 = value;
		Il2CppCodeGenWriteBarrier((&___No_1), value);
	}

	inline static int32_t get_offset_of_Yes_2() { return static_cast<int32_t>(offsetof(RecommendedAsConfigurableAttribute_t279829077_StaticFields, ___Yes_2)); }
	inline RecommendedAsConfigurableAttribute_t279829077 * get_Yes_2() const { return ___Yes_2; }
	inline RecommendedAsConfigurableAttribute_t279829077 ** get_address_of_Yes_2() { return &___Yes_2; }
	inline void set_Yes_2(RecommendedAsConfigurableAttribute_t279829077 * value)
	{
		___Yes_2 = value;
		Il2CppCodeGenWriteBarrier((&___Yes_2), value);
	}

	inline static int32_t get_offset_of_Default_3() { return static_cast<int32_t>(offsetof(RecommendedAsConfigurableAttribute_t279829077_StaticFields, ___Default_3)); }
	inline RecommendedAsConfigurableAttribute_t279829077 * get_Default_3() const { return ___Default_3; }
	inline RecommendedAsConfigurableAttribute_t279829077 ** get_address_of_Default_3() { return &___Default_3; }
	inline void set_Default_3(RecommendedAsConfigurableAttribute_t279829077 * value)
	{
		___Default_3 = value;
		Il2CppCodeGenWriteBarrier((&___Default_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RECOMMENDEDASCONFIGURABLEATTRIBUTE_T279829077_H
#ifndef REFRESHEVENTARGS_T9288056_H
#define REFRESHEVENTARGS_T9288056_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.RefreshEventArgs
struct  RefreshEventArgs_t9288056  : public EventArgs_t3591816995
{
public:
	// System.Type System.ComponentModel.RefreshEventArgs::typeChanged
	Type_t * ___typeChanged_1;

public:
	inline static int32_t get_offset_of_typeChanged_1() { return static_cast<int32_t>(offsetof(RefreshEventArgs_t9288056, ___typeChanged_1)); }
	inline Type_t * get_typeChanged_1() const { return ___typeChanged_1; }
	inline Type_t ** get_address_of_typeChanged_1() { return &___typeChanged_1; }
	inline void set_typeChanged_1(Type_t * value)
	{
		___typeChanged_1 = value;
		Il2CppCodeGenWriteBarrier((&___typeChanged_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REFRESHEVENTARGS_T9288056_H
#ifndef TYPECONVERTERATTRIBUTE_T3271584429_H
#define TYPECONVERTERATTRIBUTE_T3271584429_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.TypeConverterAttribute
struct  TypeConverterAttribute_t3271584429  : public Attribute_t861562559
{
public:
	// System.String System.ComponentModel.TypeConverterAttribute::typeName
	String_t* ___typeName_0;

public:
	inline static int32_t get_offset_of_typeName_0() { return static_cast<int32_t>(offsetof(TypeConverterAttribute_t3271584429, ___typeName_0)); }
	inline String_t* get_typeName_0() const { return ___typeName_0; }
	inline String_t** get_address_of_typeName_0() { return &___typeName_0; }
	inline void set_typeName_0(String_t* value)
	{
		___typeName_0 = value;
		Il2CppCodeGenWriteBarrier((&___typeName_0), value);
	}
};

struct TypeConverterAttribute_t3271584429_StaticFields
{
public:
	// System.ComponentModel.TypeConverterAttribute System.ComponentModel.TypeConverterAttribute::Default
	TypeConverterAttribute_t3271584429 * ___Default_1;

public:
	inline static int32_t get_offset_of_Default_1() { return static_cast<int32_t>(offsetof(TypeConverterAttribute_t3271584429_StaticFields, ___Default_1)); }
	inline TypeConverterAttribute_t3271584429 * get_Default_1() const { return ___Default_1; }
	inline TypeConverterAttribute_t3271584429 ** get_address_of_Default_1() { return &___Default_1; }
	inline void set_Default_1(TypeConverterAttribute_t3271584429 * value)
	{
		___Default_1 = value;
		Il2CppCodeGenWriteBarrier((&___Default_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPECONVERTERATTRIBUTE_T3271584429_H
#ifndef EMPTYCUSTOMTYPEDESCRIPTOR_T4007109994_H
#define EMPTYCUSTOMTYPEDESCRIPTOR_T4007109994_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.TypeDescriptionProvider/EmptyCustomTypeDescriptor
struct  EmptyCustomTypeDescriptor_t4007109994  : public CustomTypeDescriptor_t3093649079
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EMPTYCUSTOMTYPEDESCRIPTOR_T4007109994_H
#ifndef TYPEDESCRIPTIONPROVIDERATTRIBUTE_T2619663527_H
#define TYPEDESCRIPTIONPROVIDERATTRIBUTE_T2619663527_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.TypeDescriptionProviderAttribute
struct  TypeDescriptionProviderAttribute_t2619663527  : public Attribute_t861562559
{
public:
	// System.String System.ComponentModel.TypeDescriptionProviderAttribute::_typeName
	String_t* ____typeName_0;

public:
	inline static int32_t get_offset_of__typeName_0() { return static_cast<int32_t>(offsetof(TypeDescriptionProviderAttribute_t2619663527, ____typeName_0)); }
	inline String_t* get__typeName_0() const { return ____typeName_0; }
	inline String_t** get_address_of__typeName_0() { return &____typeName_0; }
	inline void set__typeName_0(String_t* value)
	{
		____typeName_0 = value;
		Il2CppCodeGenWriteBarrier((&____typeName_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPEDESCRIPTIONPROVIDERATTRIBUTE_T2619663527_H
#ifndef TYPEDESCRIPTIONNODE_T3022060204_H
#define TYPEDESCRIPTIONNODE_T3022060204_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.TypeDescriptor/TypeDescriptionNode
struct  TypeDescriptionNode_t3022060204  : public TypeDescriptionProvider_t3232077895
{
public:
	// System.ComponentModel.TypeDescriptor/TypeDescriptionNode System.ComponentModel.TypeDescriptor/TypeDescriptionNode::Next
	TypeDescriptionNode_t3022060204 * ___Next_2;
	// System.ComponentModel.TypeDescriptionProvider System.ComponentModel.TypeDescriptor/TypeDescriptionNode::Provider
	TypeDescriptionProvider_t3232077895 * ___Provider_3;

public:
	inline static int32_t get_offset_of_Next_2() { return static_cast<int32_t>(offsetof(TypeDescriptionNode_t3022060204, ___Next_2)); }
	inline TypeDescriptionNode_t3022060204 * get_Next_2() const { return ___Next_2; }
	inline TypeDescriptionNode_t3022060204 ** get_address_of_Next_2() { return &___Next_2; }
	inline void set_Next_2(TypeDescriptionNode_t3022060204 * value)
	{
		___Next_2 = value;
		Il2CppCodeGenWriteBarrier((&___Next_2), value);
	}

	inline static int32_t get_offset_of_Provider_3() { return static_cast<int32_t>(offsetof(TypeDescriptionNode_t3022060204, ___Provider_3)); }
	inline TypeDescriptionProvider_t3232077895 * get_Provider_3() const { return ___Provider_3; }
	inline TypeDescriptionProvider_t3232077895 ** get_address_of_Provider_3() { return &___Provider_3; }
	inline void set_Provider_3(TypeDescriptionProvider_t3232077895 * value)
	{
		___Provider_3 = value;
		Il2CppCodeGenWriteBarrier((&___Provider_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPEDESCRIPTIONNODE_T3022060204_H
#ifndef DEFAULTEXTENDEDTYPEDESCRIPTOR_T1757997412_H
#define DEFAULTEXTENDEDTYPEDESCRIPTOR_T1757997412_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.TypeDescriptor/TypeDescriptionNode/DefaultExtendedTypeDescriptor
struct  DefaultExtendedTypeDescriptor_t1757997412 
{
public:
	// System.ComponentModel.TypeDescriptor/TypeDescriptionNode System.ComponentModel.TypeDescriptor/TypeDescriptionNode/DefaultExtendedTypeDescriptor::_node
	TypeDescriptionNode_t3022060204 * ____node_0;
	// System.Object System.ComponentModel.TypeDescriptor/TypeDescriptionNode/DefaultExtendedTypeDescriptor::_instance
	RuntimeObject * ____instance_1;

public:
	inline static int32_t get_offset_of__node_0() { return static_cast<int32_t>(offsetof(DefaultExtendedTypeDescriptor_t1757997412, ____node_0)); }
	inline TypeDescriptionNode_t3022060204 * get__node_0() const { return ____node_0; }
	inline TypeDescriptionNode_t3022060204 ** get_address_of__node_0() { return &____node_0; }
	inline void set__node_0(TypeDescriptionNode_t3022060204 * value)
	{
		____node_0 = value;
		Il2CppCodeGenWriteBarrier((&____node_0), value);
	}

	inline static int32_t get_offset_of__instance_1() { return static_cast<int32_t>(offsetof(DefaultExtendedTypeDescriptor_t1757997412, ____instance_1)); }
	inline RuntimeObject * get__instance_1() const { return ____instance_1; }
	inline RuntimeObject ** get_address_of__instance_1() { return &____instance_1; }
	inline void set__instance_1(RuntimeObject * value)
	{
		____instance_1 = value;
		Il2CppCodeGenWriteBarrier((&____instance_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ComponentModel.TypeDescriptor/TypeDescriptionNode/DefaultExtendedTypeDescriptor
struct DefaultExtendedTypeDescriptor_t1757997412_marshaled_pinvoke
{
	TypeDescriptionNode_t3022060204 * ____node_0;
	Il2CppIUnknown* ____instance_1;
};
// Native definition for COM marshalling of System.ComponentModel.TypeDescriptor/TypeDescriptionNode/DefaultExtendedTypeDescriptor
struct DefaultExtendedTypeDescriptor_t1757997412_marshaled_com
{
	TypeDescriptionNode_t3022060204 * ____node_0;
	Il2CppIUnknown* ____instance_1;
};
#endif // DEFAULTEXTENDEDTYPEDESCRIPTOR_T1757997412_H
#ifndef DEFAULTTYPEDESCRIPTOR_T4148937846_H
#define DEFAULTTYPEDESCRIPTOR_T4148937846_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.TypeDescriptor/TypeDescriptionNode/DefaultTypeDescriptor
struct  DefaultTypeDescriptor_t4148937846 
{
public:
	// System.ComponentModel.TypeDescriptor/TypeDescriptionNode System.ComponentModel.TypeDescriptor/TypeDescriptionNode/DefaultTypeDescriptor::_node
	TypeDescriptionNode_t3022060204 * ____node_0;
	// System.Type System.ComponentModel.TypeDescriptor/TypeDescriptionNode/DefaultTypeDescriptor::_objectType
	Type_t * ____objectType_1;
	// System.Object System.ComponentModel.TypeDescriptor/TypeDescriptionNode/DefaultTypeDescriptor::_instance
	RuntimeObject * ____instance_2;

public:
	inline static int32_t get_offset_of__node_0() { return static_cast<int32_t>(offsetof(DefaultTypeDescriptor_t4148937846, ____node_0)); }
	inline TypeDescriptionNode_t3022060204 * get__node_0() const { return ____node_0; }
	inline TypeDescriptionNode_t3022060204 ** get_address_of__node_0() { return &____node_0; }
	inline void set__node_0(TypeDescriptionNode_t3022060204 * value)
	{
		____node_0 = value;
		Il2CppCodeGenWriteBarrier((&____node_0), value);
	}

	inline static int32_t get_offset_of__objectType_1() { return static_cast<int32_t>(offsetof(DefaultTypeDescriptor_t4148937846, ____objectType_1)); }
	inline Type_t * get__objectType_1() const { return ____objectType_1; }
	inline Type_t ** get_address_of__objectType_1() { return &____objectType_1; }
	inline void set__objectType_1(Type_t * value)
	{
		____objectType_1 = value;
		Il2CppCodeGenWriteBarrier((&____objectType_1), value);
	}

	inline static int32_t get_offset_of__instance_2() { return static_cast<int32_t>(offsetof(DefaultTypeDescriptor_t4148937846, ____instance_2)); }
	inline RuntimeObject * get__instance_2() const { return ____instance_2; }
	inline RuntimeObject ** get_address_of__instance_2() { return &____instance_2; }
	inline void set__instance_2(RuntimeObject * value)
	{
		____instance_2 = value;
		Il2CppCodeGenWriteBarrier((&____instance_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ComponentModel.TypeDescriptor/TypeDescriptionNode/DefaultTypeDescriptor
struct DefaultTypeDescriptor_t4148937846_marshaled_pinvoke
{
	TypeDescriptionNode_t3022060204 * ____node_0;
	Type_t * ____objectType_1;
	Il2CppIUnknown* ____instance_2;
};
// Native definition for COM marshalling of System.ComponentModel.TypeDescriptor/TypeDescriptionNode/DefaultTypeDescriptor
struct DefaultTypeDescriptor_t4148937846_marshaled_com
{
	TypeDescriptionNode_t3022060204 * ____node_0;
	Type_t * ____objectType_1;
	Il2CppIUnknown* ____instance_2;
};
#endif // DEFAULTTYPEDESCRIPTOR_T4148937846_H
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
	RandomNumberGenerator_t386037858 * ____rng_13;
	// System.Security.Cryptography.RandomNumberGenerator System.Guid::_fastRng
	RandomNumberGenerator_t386037858 * ____fastRng_14;

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
	inline RandomNumberGenerator_t386037858 * get__rng_13() const { return ____rng_13; }
	inline RandomNumberGenerator_t386037858 ** get_address_of__rng_13() { return &____rng_13; }
	inline void set__rng_13(RandomNumberGenerator_t386037858 * value)
	{
		____rng_13 = value;
		Il2CppCodeGenWriteBarrier((&____rng_13), value);
	}

	inline static int32_t get_offset_of__fastRng_14() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____fastRng_14)); }
	inline RandomNumberGenerator_t386037858 * get__fastRng_14() const { return ____fastRng_14; }
	inline RandomNumberGenerator_t386037858 ** get_address_of__fastRng_14() { return &____fastRng_14; }
	inline void set__fastRng_14(RandomNumberGenerator_t386037858 * value)
	{
		____fastRng_14 = value;
		Il2CppCodeGenWriteBarrier((&____fastRng_14), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GUID_T_H
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
#ifndef SYSTEMNETWORKCREDENTIAL_T3685288932_H
#define SYSTEMNETWORKCREDENTIAL_T3685288932_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.SystemNetworkCredential
struct  SystemNetworkCredential_t3685288932  : public NetworkCredential_t3282608323
{
public:

public:
};

struct SystemNetworkCredential_t3685288932_StaticFields
{
public:
	// System.Net.SystemNetworkCredential System.Net.SystemNetworkCredential::defaultCredential
	SystemNetworkCredential_t3685288932 * ___defaultCredential_3;

public:
	inline static int32_t get_offset_of_defaultCredential_3() { return static_cast<int32_t>(offsetof(SystemNetworkCredential_t3685288932_StaticFields, ___defaultCredential_3)); }
	inline SystemNetworkCredential_t3685288932 * get_defaultCredential_3() const { return ___defaultCredential_3; }
	inline SystemNetworkCredential_t3685288932 ** get_address_of_defaultCredential_3() { return &___defaultCredential_3; }
	inline void set_defaultCredential_3(SystemNetworkCredential_t3685288932 * value)
	{
		___defaultCredential_3 = value;
		Il2CppCodeGenWriteBarrier((&___defaultCredential_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYSTEMNETWORKCREDENTIAL_T3685288932_H
#ifndef GCHANDLE_T3351438187_H
#define GCHANDLE_T3351438187_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.GCHandle
struct  GCHandle_t3351438187 
{
public:
	// System.Int32 System.Runtime.InteropServices.GCHandle::handle
	int32_t ___handle_0;

public:
	inline static int32_t get_offset_of_handle_0() { return static_cast<int32_t>(offsetof(GCHandle_t3351438187, ___handle_0)); }
	inline int32_t get_handle_0() const { return ___handle_0; }
	inline int32_t* get_address_of_handle_0() { return &___handle_0; }
	inline void set_handle_0(int32_t value)
	{
		___handle_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GCHANDLE_T3351438187_H
#ifndef X500DISTINGUISHEDNAME_T875709727_H
#define X500DISTINGUISHEDNAME_T875709727_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.X509Certificates.X500DistinguishedName
struct  X500DistinguishedName_t875709727  : public AsnEncodedData_t382354011
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // X500DISTINGUISHEDNAME_T875709727_H
#ifndef X509CERTIFICATE2_T714049126_H
#define X509CERTIFICATE2_T714049126_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.X509Certificates.X509Certificate2
struct  X509Certificate2_t714049126  : public X509Certificate_t713131622
{
public:
	// System.String System.Security.Cryptography.X509Certificates.X509Certificate2::friendlyName
	String_t* ___friendlyName_4;

public:
	inline static int32_t get_offset_of_friendlyName_4() { return static_cast<int32_t>(offsetof(X509Certificate2_t714049126, ___friendlyName_4)); }
	inline String_t* get_friendlyName_4() const { return ___friendlyName_4; }
	inline String_t** get_address_of_friendlyName_4() { return &___friendlyName_4; }
	inline void set_friendlyName_4(String_t* value)
	{
		___friendlyName_4 = value;
		Il2CppCodeGenWriteBarrier((&___friendlyName_4), value);
	}
};

struct X509Certificate2_t714049126_StaticFields
{
public:
	// System.Byte[] System.Security.Cryptography.X509Certificates.X509Certificate2::signedData
	ByteU5BU5D_t4116647657* ___signedData_5;

public:
	inline static int32_t get_offset_of_signedData_5() { return static_cast<int32_t>(offsetof(X509Certificate2_t714049126_StaticFields, ___signedData_5)); }
	inline ByteU5BU5D_t4116647657* get_signedData_5() const { return ___signedData_5; }
	inline ByteU5BU5D_t4116647657** get_address_of_signedData_5() { return &___signedData_5; }
	inline void set_signedData_5(ByteU5BU5D_t4116647657* value)
	{
		___signedData_5 = value;
		Il2CppCodeGenWriteBarrier((&___signedData_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // X509CERTIFICATE2_T714049126_H
#ifndef X509CERTIFICATE2IMPL_T4078769278_H
#define X509CERTIFICATE2IMPL_T4078769278_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.X509Certificates.X509Certificate2Impl
struct  X509Certificate2Impl_t4078769278  : public X509CertificateImpl_t2851385038
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // X509CERTIFICATE2IMPL_T4078769278_H
#ifndef X509CERTIFICATECOLLECTION_T3399372417_H
#define X509CERTIFICATECOLLECTION_T3399372417_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.X509Certificates.X509CertificateCollection
struct  X509CertificateCollection_t3399372417  : public CollectionBase_t2727926298
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // X509CERTIFICATECOLLECTION_T3399372417_H
#ifndef X509EXTENSION_T3272255153_H
#define X509EXTENSION_T3272255153_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.X509Certificates.X509Extension
struct  X509Extension_t3272255153  : public AsnEncodedData_t382354011
{
public:
	// System.Boolean System.Security.Cryptography.X509Certificates.X509Extension::_critical
	bool ____critical_2;

public:
	inline static int32_t get_offset_of__critical_2() { return static_cast<int32_t>(offsetof(X509Extension_t3272255153, ____critical_2)); }
	inline bool get__critical_2() const { return ____critical_2; }
	inline bool* get_address_of__critical_2() { return &____critical_2; }
	inline void set__critical_2(bool value)
	{
		____critical_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // X509EXTENSION_T3272255153_H
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
#ifndef HASHTABLE_T1853889766_H
#define HASHTABLE_T1853889766_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Hashtable
struct  Hashtable_t1853889766  : public RuntimeObject
{
public:
	// System.Collections.Hashtable/bucket[] System.Collections.Hashtable::buckets
	bucketU5BU5D_t876121385* ___buckets_0;
	// System.Int32 System.Collections.Hashtable::count
	int32_t ___count_1;
	// System.Int32 System.Collections.Hashtable::occupancy
	int32_t ___occupancy_2;
	// System.Int32 System.Collections.Hashtable::loadsize
	int32_t ___loadsize_3;
	// System.Single System.Collections.Hashtable::loadFactor
	float ___loadFactor_4;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Hashtable::version
	int32_t ___version_5;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Hashtable::isWriterInProgress
	bool ___isWriterInProgress_6;
	// System.Collections.ICollection System.Collections.Hashtable::keys
	RuntimeObject* ___keys_7;
	// System.Collections.ICollection System.Collections.Hashtable::values
	RuntimeObject* ___values_8;
	// System.Collections.IEqualityComparer System.Collections.Hashtable::_keycomparer
	RuntimeObject* ____keycomparer_9;
	// System.Object System.Collections.Hashtable::_syncRoot
	RuntimeObject * ____syncRoot_10;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Hashtable_t1853889766, ___buckets_0)); }
	inline bucketU5BU5D_t876121385* get_buckets_0() const { return ___buckets_0; }
	inline bucketU5BU5D_t876121385** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(bucketU5BU5D_t876121385* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((&___buckets_0), value);
	}

	inline static int32_t get_offset_of_count_1() { return static_cast<int32_t>(offsetof(Hashtable_t1853889766, ___count_1)); }
	inline int32_t get_count_1() const { return ___count_1; }
	inline int32_t* get_address_of_count_1() { return &___count_1; }
	inline void set_count_1(int32_t value)
	{
		___count_1 = value;
	}

	inline static int32_t get_offset_of_occupancy_2() { return static_cast<int32_t>(offsetof(Hashtable_t1853889766, ___occupancy_2)); }
	inline int32_t get_occupancy_2() const { return ___occupancy_2; }
	inline int32_t* get_address_of_occupancy_2() { return &___occupancy_2; }
	inline void set_occupancy_2(int32_t value)
	{
		___occupancy_2 = value;
	}

	inline static int32_t get_offset_of_loadsize_3() { return static_cast<int32_t>(offsetof(Hashtable_t1853889766, ___loadsize_3)); }
	inline int32_t get_loadsize_3() const { return ___loadsize_3; }
	inline int32_t* get_address_of_loadsize_3() { return &___loadsize_3; }
	inline void set_loadsize_3(int32_t value)
	{
		___loadsize_3 = value;
	}

	inline static int32_t get_offset_of_loadFactor_4() { return static_cast<int32_t>(offsetof(Hashtable_t1853889766, ___loadFactor_4)); }
	inline float get_loadFactor_4() const { return ___loadFactor_4; }
	inline float* get_address_of_loadFactor_4() { return &___loadFactor_4; }
	inline void set_loadFactor_4(float value)
	{
		___loadFactor_4 = value;
	}

	inline static int32_t get_offset_of_version_5() { return static_cast<int32_t>(offsetof(Hashtable_t1853889766, ___version_5)); }
	inline int32_t get_version_5() const { return ___version_5; }
	inline int32_t* get_address_of_version_5() { return &___version_5; }
	inline void set_version_5(int32_t value)
	{
		___version_5 = value;
	}

	inline static int32_t get_offset_of_isWriterInProgress_6() { return static_cast<int32_t>(offsetof(Hashtable_t1853889766, ___isWriterInProgress_6)); }
	inline bool get_isWriterInProgress_6() const { return ___isWriterInProgress_6; }
	inline bool* get_address_of_isWriterInProgress_6() { return &___isWriterInProgress_6; }
	inline void set_isWriterInProgress_6(bool value)
	{
		___isWriterInProgress_6 = value;
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Hashtable_t1853889766, ___keys_7)); }
	inline RuntimeObject* get_keys_7() const { return ___keys_7; }
	inline RuntimeObject** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(RuntimeObject* value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((&___keys_7), value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Hashtable_t1853889766, ___values_8)); }
	inline RuntimeObject* get_values_8() const { return ___values_8; }
	inline RuntimeObject** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(RuntimeObject* value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((&___values_8), value);
	}

	inline static int32_t get_offset_of__keycomparer_9() { return static_cast<int32_t>(offsetof(Hashtable_t1853889766, ____keycomparer_9)); }
	inline RuntimeObject* get__keycomparer_9() const { return ____keycomparer_9; }
	inline RuntimeObject** get_address_of__keycomparer_9() { return &____keycomparer_9; }
	inline void set__keycomparer_9(RuntimeObject* value)
	{
		____keycomparer_9 = value;
		Il2CppCodeGenWriteBarrier((&____keycomparer_9), value);
	}

	inline static int32_t get_offset_of__syncRoot_10() { return static_cast<int32_t>(offsetof(Hashtable_t1853889766, ____syncRoot_10)); }
	inline RuntimeObject * get__syncRoot_10() const { return ____syncRoot_10; }
	inline RuntimeObject ** get_address_of__syncRoot_10() { return &____syncRoot_10; }
	inline void set__syncRoot_10(RuntimeObject * value)
	{
		____syncRoot_10 = value;
		Il2CppCodeGenWriteBarrier((&____syncRoot_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HASHTABLE_T1853889766_H
#ifndef REFLECTTYPEDESCRIPTIONPROVIDER_T2247041319_H
#define REFLECTTYPEDESCRIPTIONPROVIDER_T2247041319_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.ReflectTypeDescriptionProvider
struct  ReflectTypeDescriptionProvider_t2247041319  : public TypeDescriptionProvider_t3232077895
{
public:
	// System.Collections.Hashtable System.ComponentModel.ReflectTypeDescriptionProvider::_typeData
	Hashtable_t1853889766 * ____typeData_2;

public:
	inline static int32_t get_offset_of__typeData_2() { return static_cast<int32_t>(offsetof(ReflectTypeDescriptionProvider_t2247041319, ____typeData_2)); }
	inline Hashtable_t1853889766 * get__typeData_2() const { return ____typeData_2; }
	inline Hashtable_t1853889766 ** get_address_of__typeData_2() { return &____typeData_2; }
	inline void set__typeData_2(Hashtable_t1853889766 * value)
	{
		____typeData_2 = value;
		Il2CppCodeGenWriteBarrier((&____typeData_2), value);
	}
};

struct ReflectTypeDescriptionProvider_t2247041319_StaticFields
{
public:
	// System.Type[] System.ComponentModel.ReflectTypeDescriptionProvider::_typeConstructor
	TypeU5BU5D_t3940880105* ____typeConstructor_3;
	// System.Collections.Hashtable modreq(System.Runtime.CompilerServices.IsVolatile) System.ComponentModel.ReflectTypeDescriptionProvider::_intrinsicTypeConverters
	Hashtable_t1853889766 * ____intrinsicTypeConverters_4;
	// System.Object System.ComponentModel.ReflectTypeDescriptionProvider::_intrinsicReferenceKey
	RuntimeObject * ____intrinsicReferenceKey_5;
	// System.Object System.ComponentModel.ReflectTypeDescriptionProvider::_intrinsicNullableKey
	RuntimeObject * ____intrinsicNullableKey_6;
	// System.Object System.ComponentModel.ReflectTypeDescriptionProvider::_dictionaryKey
	RuntimeObject * ____dictionaryKey_7;
	// System.Collections.Hashtable modreq(System.Runtime.CompilerServices.IsVolatile) System.ComponentModel.ReflectTypeDescriptionProvider::_attributeCache
	Hashtable_t1853889766 * ____attributeCache_8;
	// System.Guid System.ComponentModel.ReflectTypeDescriptionProvider::_extenderProviderKey
	Guid_t  ____extenderProviderKey_9;
	// System.Guid System.ComponentModel.ReflectTypeDescriptionProvider::_extenderPropertiesKey
	Guid_t  ____extenderPropertiesKey_10;
	// System.Guid System.ComponentModel.ReflectTypeDescriptionProvider::_extenderProviderPropertiesKey
	Guid_t  ____extenderProviderPropertiesKey_11;
	// System.Type[] System.ComponentModel.ReflectTypeDescriptionProvider::_skipInterfaceAttributeList
	TypeU5BU5D_t3940880105* ____skipInterfaceAttributeList_12;
	// System.Object System.ComponentModel.ReflectTypeDescriptionProvider::_internalSyncObject
	RuntimeObject * ____internalSyncObject_13;

public:
	inline static int32_t get_offset_of__typeConstructor_3() { return static_cast<int32_t>(offsetof(ReflectTypeDescriptionProvider_t2247041319_StaticFields, ____typeConstructor_3)); }
	inline TypeU5BU5D_t3940880105* get__typeConstructor_3() const { return ____typeConstructor_3; }
	inline TypeU5BU5D_t3940880105** get_address_of__typeConstructor_3() { return &____typeConstructor_3; }
	inline void set__typeConstructor_3(TypeU5BU5D_t3940880105* value)
	{
		____typeConstructor_3 = value;
		Il2CppCodeGenWriteBarrier((&____typeConstructor_3), value);
	}

	inline static int32_t get_offset_of__intrinsicTypeConverters_4() { return static_cast<int32_t>(offsetof(ReflectTypeDescriptionProvider_t2247041319_StaticFields, ____intrinsicTypeConverters_4)); }
	inline Hashtable_t1853889766 * get__intrinsicTypeConverters_4() const { return ____intrinsicTypeConverters_4; }
	inline Hashtable_t1853889766 ** get_address_of__intrinsicTypeConverters_4() { return &____intrinsicTypeConverters_4; }
	inline void set__intrinsicTypeConverters_4(Hashtable_t1853889766 * value)
	{
		____intrinsicTypeConverters_4 = value;
		Il2CppCodeGenWriteBarrier((&____intrinsicTypeConverters_4), value);
	}

	inline static int32_t get_offset_of__intrinsicReferenceKey_5() { return static_cast<int32_t>(offsetof(ReflectTypeDescriptionProvider_t2247041319_StaticFields, ____intrinsicReferenceKey_5)); }
	inline RuntimeObject * get__intrinsicReferenceKey_5() const { return ____intrinsicReferenceKey_5; }
	inline RuntimeObject ** get_address_of__intrinsicReferenceKey_5() { return &____intrinsicReferenceKey_5; }
	inline void set__intrinsicReferenceKey_5(RuntimeObject * value)
	{
		____intrinsicReferenceKey_5 = value;
		Il2CppCodeGenWriteBarrier((&____intrinsicReferenceKey_5), value);
	}

	inline static int32_t get_offset_of__intrinsicNullableKey_6() { return static_cast<int32_t>(offsetof(ReflectTypeDescriptionProvider_t2247041319_StaticFields, ____intrinsicNullableKey_6)); }
	inline RuntimeObject * get__intrinsicNullableKey_6() const { return ____intrinsicNullableKey_6; }
	inline RuntimeObject ** get_address_of__intrinsicNullableKey_6() { return &____intrinsicNullableKey_6; }
	inline void set__intrinsicNullableKey_6(RuntimeObject * value)
	{
		____intrinsicNullableKey_6 = value;
		Il2CppCodeGenWriteBarrier((&____intrinsicNullableKey_6), value);
	}

	inline static int32_t get_offset_of__dictionaryKey_7() { return static_cast<int32_t>(offsetof(ReflectTypeDescriptionProvider_t2247041319_StaticFields, ____dictionaryKey_7)); }
	inline RuntimeObject * get__dictionaryKey_7() const { return ____dictionaryKey_7; }
	inline RuntimeObject ** get_address_of__dictionaryKey_7() { return &____dictionaryKey_7; }
	inline void set__dictionaryKey_7(RuntimeObject * value)
	{
		____dictionaryKey_7 = value;
		Il2CppCodeGenWriteBarrier((&____dictionaryKey_7), value);
	}

	inline static int32_t get_offset_of__attributeCache_8() { return static_cast<int32_t>(offsetof(ReflectTypeDescriptionProvider_t2247041319_StaticFields, ____attributeCache_8)); }
	inline Hashtable_t1853889766 * get__attributeCache_8() const { return ____attributeCache_8; }
	inline Hashtable_t1853889766 ** get_address_of__attributeCache_8() { return &____attributeCache_8; }
	inline void set__attributeCache_8(Hashtable_t1853889766 * value)
	{
		____attributeCache_8 = value;
		Il2CppCodeGenWriteBarrier((&____attributeCache_8), value);
	}

	inline static int32_t get_offset_of__extenderProviderKey_9() { return static_cast<int32_t>(offsetof(ReflectTypeDescriptionProvider_t2247041319_StaticFields, ____extenderProviderKey_9)); }
	inline Guid_t  get__extenderProviderKey_9() const { return ____extenderProviderKey_9; }
	inline Guid_t * get_address_of__extenderProviderKey_9() { return &____extenderProviderKey_9; }
	inline void set__extenderProviderKey_9(Guid_t  value)
	{
		____extenderProviderKey_9 = value;
	}

	inline static int32_t get_offset_of__extenderPropertiesKey_10() { return static_cast<int32_t>(offsetof(ReflectTypeDescriptionProvider_t2247041319_StaticFields, ____extenderPropertiesKey_10)); }
	inline Guid_t  get__extenderPropertiesKey_10() const { return ____extenderPropertiesKey_10; }
	inline Guid_t * get_address_of__extenderPropertiesKey_10() { return &____extenderPropertiesKey_10; }
	inline void set__extenderPropertiesKey_10(Guid_t  value)
	{
		____extenderPropertiesKey_10 = value;
	}

	inline static int32_t get_offset_of__extenderProviderPropertiesKey_11() { return static_cast<int32_t>(offsetof(ReflectTypeDescriptionProvider_t2247041319_StaticFields, ____extenderProviderPropertiesKey_11)); }
	inline Guid_t  get__extenderProviderPropertiesKey_11() const { return ____extenderProviderPropertiesKey_11; }
	inline Guid_t * get_address_of__extenderProviderPropertiesKey_11() { return &____extenderProviderPropertiesKey_11; }
	inline void set__extenderProviderPropertiesKey_11(Guid_t  value)
	{
		____extenderProviderPropertiesKey_11 = value;
	}

	inline static int32_t get_offset_of__skipInterfaceAttributeList_12() { return static_cast<int32_t>(offsetof(ReflectTypeDescriptionProvider_t2247041319_StaticFields, ____skipInterfaceAttributeList_12)); }
	inline TypeU5BU5D_t3940880105* get__skipInterfaceAttributeList_12() const { return ____skipInterfaceAttributeList_12; }
	inline TypeU5BU5D_t3940880105** get_address_of__skipInterfaceAttributeList_12() { return &____skipInterfaceAttributeList_12; }
	inline void set__skipInterfaceAttributeList_12(TypeU5BU5D_t3940880105* value)
	{
		____skipInterfaceAttributeList_12 = value;
		Il2CppCodeGenWriteBarrier((&____skipInterfaceAttributeList_12), value);
	}

	inline static int32_t get_offset_of__internalSyncObject_13() { return static_cast<int32_t>(offsetof(ReflectTypeDescriptionProvider_t2247041319_StaticFields, ____internalSyncObject_13)); }
	inline RuntimeObject * get__internalSyncObject_13() const { return ____internalSyncObject_13; }
	inline RuntimeObject ** get_address_of__internalSyncObject_13() { return &____internalSyncObject_13; }
	inline void set__internalSyncObject_13(RuntimeObject * value)
	{
		____internalSyncObject_13 = value;
		Il2CppCodeGenWriteBarrier((&____internalSyncObject_13), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REFLECTTYPEDESCRIPTIONPROVIDER_T2247041319_H
#ifndef TYPECONVERTER_T2249118273_H
#define TYPECONVERTER_T2249118273_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.TypeConverter
struct  TypeConverter_t2249118273  : public RuntimeObject
{
public:

public:
};

struct TypeConverter_t2249118273_StaticFields
{
public:
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.ComponentModel.TypeConverter::useCompatibleTypeConversion
	bool ___useCompatibleTypeConversion_1;

public:
	inline static int32_t get_offset_of_useCompatibleTypeConversion_1() { return static_cast<int32_t>(offsetof(TypeConverter_t2249118273_StaticFields, ___useCompatibleTypeConversion_1)); }
	inline bool get_useCompatibleTypeConversion_1() const { return ___useCompatibleTypeConversion_1; }
	inline bool* get_address_of_useCompatibleTypeConversion_1() { return &___useCompatibleTypeConversion_1; }
	inline void set_useCompatibleTypeConversion_1(bool value)
	{
		___useCompatibleTypeConversion_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPECONVERTER_T2249118273_H
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
#ifndef COMPRESSIONMODE_T3714291783_H
#define COMPRESSIONMODE_T3714291783_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.Compression.CompressionMode
struct  CompressionMode_t3714291783 
{
public:
	// System.Int32 System.IO.Compression.CompressionMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CompressionMode_t3714291783, ___value___2)); }
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
#endif // COMPRESSIONMODE_T3714291783_H
#ifndef DEFLATESTREAMNATIVE_T1405046456_H
#define DEFLATESTREAMNATIVE_T1405046456_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.Compression.DeflateStreamNative
struct  DeflateStreamNative_t1405046456  : public RuntimeObject
{
public:
	// System.IO.Compression.DeflateStreamNative/UnmanagedReadOrWrite System.IO.Compression.DeflateStreamNative::feeder
	UnmanagedReadOrWrite_t1975956110 * ___feeder_0;
	// System.IO.Stream System.IO.Compression.DeflateStreamNative::base_stream
	Stream_t1273022909 * ___base_stream_1;
	// System.IO.Compression.DeflateStreamNative/SafeDeflateStreamHandle System.IO.Compression.DeflateStreamNative::z_stream
	SafeDeflateStreamHandle_t2005819069 * ___z_stream_2;
	// System.Runtime.InteropServices.GCHandle System.IO.Compression.DeflateStreamNative::data
	GCHandle_t3351438187  ___data_3;
	// System.Boolean System.IO.Compression.DeflateStreamNative::disposed
	bool ___disposed_4;
	// System.Byte[] System.IO.Compression.DeflateStreamNative::io_buffer
	ByteU5BU5D_t4116647657* ___io_buffer_5;

public:
	inline static int32_t get_offset_of_feeder_0() { return static_cast<int32_t>(offsetof(DeflateStreamNative_t1405046456, ___feeder_0)); }
	inline UnmanagedReadOrWrite_t1975956110 * get_feeder_0() const { return ___feeder_0; }
	inline UnmanagedReadOrWrite_t1975956110 ** get_address_of_feeder_0() { return &___feeder_0; }
	inline void set_feeder_0(UnmanagedReadOrWrite_t1975956110 * value)
	{
		___feeder_0 = value;
		Il2CppCodeGenWriteBarrier((&___feeder_0), value);
	}

	inline static int32_t get_offset_of_base_stream_1() { return static_cast<int32_t>(offsetof(DeflateStreamNative_t1405046456, ___base_stream_1)); }
	inline Stream_t1273022909 * get_base_stream_1() const { return ___base_stream_1; }
	inline Stream_t1273022909 ** get_address_of_base_stream_1() { return &___base_stream_1; }
	inline void set_base_stream_1(Stream_t1273022909 * value)
	{
		___base_stream_1 = value;
		Il2CppCodeGenWriteBarrier((&___base_stream_1), value);
	}

	inline static int32_t get_offset_of_z_stream_2() { return static_cast<int32_t>(offsetof(DeflateStreamNative_t1405046456, ___z_stream_2)); }
	inline SafeDeflateStreamHandle_t2005819069 * get_z_stream_2() const { return ___z_stream_2; }
	inline SafeDeflateStreamHandle_t2005819069 ** get_address_of_z_stream_2() { return &___z_stream_2; }
	inline void set_z_stream_2(SafeDeflateStreamHandle_t2005819069 * value)
	{
		___z_stream_2 = value;
		Il2CppCodeGenWriteBarrier((&___z_stream_2), value);
	}

	inline static int32_t get_offset_of_data_3() { return static_cast<int32_t>(offsetof(DeflateStreamNative_t1405046456, ___data_3)); }
	inline GCHandle_t3351438187  get_data_3() const { return ___data_3; }
	inline GCHandle_t3351438187 * get_address_of_data_3() { return &___data_3; }
	inline void set_data_3(GCHandle_t3351438187  value)
	{
		___data_3 = value;
	}

	inline static int32_t get_offset_of_disposed_4() { return static_cast<int32_t>(offsetof(DeflateStreamNative_t1405046456, ___disposed_4)); }
	inline bool get_disposed_4() const { return ___disposed_4; }
	inline bool* get_address_of_disposed_4() { return &___disposed_4; }
	inline void set_disposed_4(bool value)
	{
		___disposed_4 = value;
	}

	inline static int32_t get_offset_of_io_buffer_5() { return static_cast<int32_t>(offsetof(DeflateStreamNative_t1405046456, ___io_buffer_5)); }
	inline ByteU5BU5D_t4116647657* get_io_buffer_5() const { return ___io_buffer_5; }
	inline ByteU5BU5D_t4116647657** get_address_of_io_buffer_5() { return &___io_buffer_5; }
	inline void set_io_buffer_5(ByteU5BU5D_t4116647657* value)
	{
		___io_buffer_5 = value;
		Il2CppCodeGenWriteBarrier((&___io_buffer_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEFLATESTREAMNATIVE_T1405046456_H
#ifndef GZIPSTREAM_T3417139389_H
#define GZIPSTREAM_T3417139389_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.Compression.GZipStream
struct  GZipStream_t3417139389  : public Stream_t1273022909
{
public:
	// System.IO.Compression.DeflateStream System.IO.Compression.GZipStream::_deflateStream
	DeflateStream_t4175168077 * ____deflateStream_4;

public:
	inline static int32_t get_offset_of__deflateStream_4() { return static_cast<int32_t>(offsetof(GZipStream_t3417139389, ____deflateStream_4)); }
	inline DeflateStream_t4175168077 * get__deflateStream_4() const { return ____deflateStream_4; }
	inline DeflateStream_t4175168077 ** get_address_of__deflateStream_4() { return &____deflateStream_4; }
	inline void set__deflateStream_4(DeflateStream_t4175168077 * value)
	{
		____deflateStream_4 = value;
		Il2CppCodeGenWriteBarrier((&____deflateStream_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GZIPSTREAM_T3417139389_H
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
#ifndef AUTHENTICATIONEXCEPTION_T1221369422_H
#define AUTHENTICATIONEXCEPTION_T1221369422_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Authentication.AuthenticationException
struct  AuthenticationException_t1221369422  : public SystemException_t176217640
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AUTHENTICATIONEXCEPTION_T1221369422_H
#ifndef SSLPROTOCOLS_T928472600_H
#define SSLPROTOCOLS_T928472600_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Authentication.SslProtocols
struct  SslProtocols_t928472600 
{
public:
	// System.Int32 System.Security.Authentication.SslProtocols::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SslProtocols_t928472600, ___value___2)); }
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
#endif // SSLPROTOCOLS_T928472600_H
#ifndef ASNDECODESTATUS_T788588755_H
#define ASNDECODESTATUS_T788588755_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.AsnDecodeStatus
struct  AsnDecodeStatus_t788588755 
{
public:
	// System.Int32 System.Security.Cryptography.AsnDecodeStatus::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AsnDecodeStatus_t788588755, ___value___2)); }
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
#endif // ASNDECODESTATUS_T788588755_H
#ifndef OIDGROUP_T395834848_H
#define OIDGROUP_T395834848_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.OidGroup
struct  OidGroup_t395834848 
{
public:
	// System.Int32 System.Security.Cryptography.OidGroup::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(OidGroup_t395834848, ___value___2)); }
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
#endif // OIDGROUP_T395834848_H
#ifndef STORELOCATION_T2864310644_H
#define STORELOCATION_T2864310644_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.X509Certificates.StoreLocation
struct  StoreLocation_t2864310644 
{
public:
	// System.Int32 System.Security.Cryptography.X509Certificates.StoreLocation::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(StoreLocation_t2864310644, ___value___2)); }
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
#endif // STORELOCATION_T2864310644_H
#ifndef X509CERTIFICATE2COLLECTION_T2111161276_H
#define X509CERTIFICATE2COLLECTION_T2111161276_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.X509Certificates.X509Certificate2Collection
struct  X509Certificate2Collection_t2111161276  : public X509CertificateCollection_t3399372417
{
public:

public:
};

struct X509Certificate2Collection_t2111161276_StaticFields
{
public:
	// System.String[] System.Security.Cryptography.X509Certificates.X509Certificate2Collection::newline_split
	StringU5BU5D_t1281789340* ___newline_split_1;

public:
	inline static int32_t get_offset_of_newline_split_1() { return static_cast<int32_t>(offsetof(X509Certificate2Collection_t2111161276_StaticFields, ___newline_split_1)); }
	inline StringU5BU5D_t1281789340* get_newline_split_1() const { return ___newline_split_1; }
	inline StringU5BU5D_t1281789340** get_address_of_newline_split_1() { return &___newline_split_1; }
	inline void set_newline_split_1(StringU5BU5D_t1281789340* value)
	{
		___newline_split_1 = value;
		Il2CppCodeGenWriteBarrier((&___newline_split_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // X509CERTIFICATE2COLLECTION_T2111161276_H
#ifndef X509CERTIFICATE2IMPLMONO_T1885766714_H
#define X509CERTIFICATE2IMPLMONO_T1885766714_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.X509Certificates.X509Certificate2ImplMono
struct  X509Certificate2ImplMono_t1885766714  : public X509Certificate2Impl_t4078769278
{
public:
	// System.Boolean System.Security.Cryptography.X509Certificates.X509Certificate2ImplMono::_archived
	bool ____archived_1;
	// System.Security.Cryptography.X509Certificates.X509ExtensionCollection System.Security.Cryptography.X509Certificates.X509Certificate2ImplMono::_extensions
	X509ExtensionCollection_t1350454579 * ____extensions_2;
	// System.Security.Cryptography.X509Certificates.PublicKey System.Security.Cryptography.X509Certificates.X509Certificate2ImplMono::_publicKey
	PublicKey_t3779582684 * ____publicKey_3;
	// System.Security.Cryptography.X509Certificates.X500DistinguishedName System.Security.Cryptography.X509Certificates.X509Certificate2ImplMono::issuer_name
	X500DistinguishedName_t875709727 * ___issuer_name_4;
	// System.Security.Cryptography.X509Certificates.X500DistinguishedName System.Security.Cryptography.X509Certificates.X509Certificate2ImplMono::subject_name
	X500DistinguishedName_t875709727 * ___subject_name_5;
	// System.Security.Cryptography.Oid System.Security.Cryptography.X509Certificates.X509Certificate2ImplMono::signature_algorithm
	Oid_t3552120260 * ___signature_algorithm_6;
	// System.Security.Cryptography.X509Certificates.X509CertificateImplCollection System.Security.Cryptography.X509Certificates.X509Certificate2ImplMono::intermediateCerts
	X509CertificateImplCollection_t1104947111 * ___intermediateCerts_7;
	// Mono.Security.X509.X509Certificate System.Security.Cryptography.X509Certificates.X509Certificate2ImplMono::_cert
	X509Certificate_t489243025 * ____cert_8;

public:
	inline static int32_t get_offset_of__archived_1() { return static_cast<int32_t>(offsetof(X509Certificate2ImplMono_t1885766714, ____archived_1)); }
	inline bool get__archived_1() const { return ____archived_1; }
	inline bool* get_address_of__archived_1() { return &____archived_1; }
	inline void set__archived_1(bool value)
	{
		____archived_1 = value;
	}

	inline static int32_t get_offset_of__extensions_2() { return static_cast<int32_t>(offsetof(X509Certificate2ImplMono_t1885766714, ____extensions_2)); }
	inline X509ExtensionCollection_t1350454579 * get__extensions_2() const { return ____extensions_2; }
	inline X509ExtensionCollection_t1350454579 ** get_address_of__extensions_2() { return &____extensions_2; }
	inline void set__extensions_2(X509ExtensionCollection_t1350454579 * value)
	{
		____extensions_2 = value;
		Il2CppCodeGenWriteBarrier((&____extensions_2), value);
	}

	inline static int32_t get_offset_of__publicKey_3() { return static_cast<int32_t>(offsetof(X509Certificate2ImplMono_t1885766714, ____publicKey_3)); }
	inline PublicKey_t3779582684 * get__publicKey_3() const { return ____publicKey_3; }
	inline PublicKey_t3779582684 ** get_address_of__publicKey_3() { return &____publicKey_3; }
	inline void set__publicKey_3(PublicKey_t3779582684 * value)
	{
		____publicKey_3 = value;
		Il2CppCodeGenWriteBarrier((&____publicKey_3), value);
	}

	inline static int32_t get_offset_of_issuer_name_4() { return static_cast<int32_t>(offsetof(X509Certificate2ImplMono_t1885766714, ___issuer_name_4)); }
	inline X500DistinguishedName_t875709727 * get_issuer_name_4() const { return ___issuer_name_4; }
	inline X500DistinguishedName_t875709727 ** get_address_of_issuer_name_4() { return &___issuer_name_4; }
	inline void set_issuer_name_4(X500DistinguishedName_t875709727 * value)
	{
		___issuer_name_4 = value;
		Il2CppCodeGenWriteBarrier((&___issuer_name_4), value);
	}

	inline static int32_t get_offset_of_subject_name_5() { return static_cast<int32_t>(offsetof(X509Certificate2ImplMono_t1885766714, ___subject_name_5)); }
	inline X500DistinguishedName_t875709727 * get_subject_name_5() const { return ___subject_name_5; }
	inline X500DistinguishedName_t875709727 ** get_address_of_subject_name_5() { return &___subject_name_5; }
	inline void set_subject_name_5(X500DistinguishedName_t875709727 * value)
	{
		___subject_name_5 = value;
		Il2CppCodeGenWriteBarrier((&___subject_name_5), value);
	}

	inline static int32_t get_offset_of_signature_algorithm_6() { return static_cast<int32_t>(offsetof(X509Certificate2ImplMono_t1885766714, ___signature_algorithm_6)); }
	inline Oid_t3552120260 * get_signature_algorithm_6() const { return ___signature_algorithm_6; }
	inline Oid_t3552120260 ** get_address_of_signature_algorithm_6() { return &___signature_algorithm_6; }
	inline void set_signature_algorithm_6(Oid_t3552120260 * value)
	{
		___signature_algorithm_6 = value;
		Il2CppCodeGenWriteBarrier((&___signature_algorithm_6), value);
	}

	inline static int32_t get_offset_of_intermediateCerts_7() { return static_cast<int32_t>(offsetof(X509Certificate2ImplMono_t1885766714, ___intermediateCerts_7)); }
	inline X509CertificateImplCollection_t1104947111 * get_intermediateCerts_7() const { return ___intermediateCerts_7; }
	inline X509CertificateImplCollection_t1104947111 ** get_address_of_intermediateCerts_7() { return &___intermediateCerts_7; }
	inline void set_intermediateCerts_7(X509CertificateImplCollection_t1104947111 * value)
	{
		___intermediateCerts_7 = value;
		Il2CppCodeGenWriteBarrier((&___intermediateCerts_7), value);
	}

	inline static int32_t get_offset_of__cert_8() { return static_cast<int32_t>(offsetof(X509Certificate2ImplMono_t1885766714, ____cert_8)); }
	inline X509Certificate_t489243025 * get__cert_8() const { return ____cert_8; }
	inline X509Certificate_t489243025 ** get_address_of__cert_8() { return &____cert_8; }
	inline void set__cert_8(X509Certificate_t489243025 * value)
	{
		____cert_8 = value;
		Il2CppCodeGenWriteBarrier((&____cert_8), value);
	}
};

struct X509Certificate2ImplMono_t1885766714_StaticFields
{
public:
	// System.String System.Security.Cryptography.X509Certificates.X509Certificate2ImplMono::empty_error
	String_t* ___empty_error_9;
	// System.Byte[] System.Security.Cryptography.X509Certificates.X509Certificate2ImplMono::commonName
	ByteU5BU5D_t4116647657* ___commonName_10;
	// System.Byte[] System.Security.Cryptography.X509Certificates.X509Certificate2ImplMono::email
	ByteU5BU5D_t4116647657* ___email_11;
	// System.Byte[] System.Security.Cryptography.X509Certificates.X509Certificate2ImplMono::signedData
	ByteU5BU5D_t4116647657* ___signedData_12;

public:
	inline static int32_t get_offset_of_empty_error_9() { return static_cast<int32_t>(offsetof(X509Certificate2ImplMono_t1885766714_StaticFields, ___empty_error_9)); }
	inline String_t* get_empty_error_9() const { return ___empty_error_9; }
	inline String_t** get_address_of_empty_error_9() { return &___empty_error_9; }
	inline void set_empty_error_9(String_t* value)
	{
		___empty_error_9 = value;
		Il2CppCodeGenWriteBarrier((&___empty_error_9), value);
	}

	inline static int32_t get_offset_of_commonName_10() { return static_cast<int32_t>(offsetof(X509Certificate2ImplMono_t1885766714_StaticFields, ___commonName_10)); }
	inline ByteU5BU5D_t4116647657* get_commonName_10() const { return ___commonName_10; }
	inline ByteU5BU5D_t4116647657** get_address_of_commonName_10() { return &___commonName_10; }
	inline void set_commonName_10(ByteU5BU5D_t4116647657* value)
	{
		___commonName_10 = value;
		Il2CppCodeGenWriteBarrier((&___commonName_10), value);
	}

	inline static int32_t get_offset_of_email_11() { return static_cast<int32_t>(offsetof(X509Certificate2ImplMono_t1885766714_StaticFields, ___email_11)); }
	inline ByteU5BU5D_t4116647657* get_email_11() const { return ___email_11; }
	inline ByteU5BU5D_t4116647657** get_address_of_email_11() { return &___email_11; }
	inline void set_email_11(ByteU5BU5D_t4116647657* value)
	{
		___email_11 = value;
		Il2CppCodeGenWriteBarrier((&___email_11), value);
	}

	inline static int32_t get_offset_of_signedData_12() { return static_cast<int32_t>(offsetof(X509Certificate2ImplMono_t1885766714_StaticFields, ___signedData_12)); }
	inline ByteU5BU5D_t4116647657* get_signedData_12() const { return ___signedData_12; }
	inline ByteU5BU5D_t4116647657** get_address_of_signedData_12() { return &___signedData_12; }
	inline void set_signedData_12(ByteU5BU5D_t4116647657* value)
	{
		___signedData_12 = value;
		Il2CppCodeGenWriteBarrier((&___signedData_12), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // X509CERTIFICATE2IMPLMONO_T1885766714_H
#ifndef X509CHAINSTATUSFLAGS_T1026973125_H
#define X509CHAINSTATUSFLAGS_T1026973125_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.X509Certificates.X509ChainStatusFlags
struct  X509ChainStatusFlags_t1026973125 
{
public:
	// System.Int32 System.Security.Cryptography.X509Certificates.X509ChainStatusFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(X509ChainStatusFlags_t1026973125, ___value___2)); }
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
#endif // X509CHAINSTATUSFLAGS_T1026973125_H
#ifndef X509KEYUSAGEFLAGS_T1431795504_H
#define X509KEYUSAGEFLAGS_T1431795504_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.X509Certificates.X509KeyUsageFlags
struct  X509KeyUsageFlags_t1431795504 
{
public:
	// System.Int32 System.Security.Cryptography.X509Certificates.X509KeyUsageFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(X509KeyUsageFlags_t1431795504, ___value___2)); }
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
#endif // X509KEYUSAGEFLAGS_T1431795504_H
#ifndef X509REVOCATIONFLAG_T2592711905_H
#define X509REVOCATIONFLAG_T2592711905_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.X509Certificates.X509RevocationFlag
struct  X509RevocationFlag_t2592711905 
{
public:
	// System.Int32 System.Security.Cryptography.X509Certificates.X509RevocationFlag::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(X509RevocationFlag_t2592711905, ___value___2)); }
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
#endif // X509REVOCATIONFLAG_T2592711905_H
#ifndef X509REVOCATIONMODE_T2571829933_H
#define X509REVOCATIONMODE_T2571829933_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.X509Certificates.X509RevocationMode
struct  X509RevocationMode_t2571829933 
{
public:
	// System.Int32 System.Security.Cryptography.X509Certificates.X509RevocationMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(X509RevocationMode_t2571829933, ___value___2)); }
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
#endif // X509REVOCATIONMODE_T2571829933_H
#ifndef X509SUBJECTKEYIDENTIFIERHASHALGORITHM_T3929505454_H
#define X509SUBJECTKEYIDENTIFIERHASHALGORITHM_T3929505454_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierHashAlgorithm
struct  X509SubjectKeyIdentifierHashAlgorithm_t3929505454 
{
public:
	// System.Int32 System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierHashAlgorithm::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(X509SubjectKeyIdentifierHashAlgorithm_t3929505454, ___value___2)); }
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
#endif // X509SUBJECTKEYIDENTIFIERHASHALGORITHM_T3929505454_H
#ifndef X509VERIFICATIONFLAGS_T2086244306_H
#define X509VERIFICATIONFLAGS_T2086244306_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.X509Certificates.X509VerificationFlags
struct  X509VerificationFlags_t2086244306 
{
public:
	// System.Int32 System.Security.Cryptography.X509Certificates.X509VerificationFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(X509VerificationFlags_t2086244306, ___value___2)); }
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
#endif // X509VERIFICATIONFLAGS_T2086244306_H
#ifndef TIMESPAN_T881159249_H
#define TIMESPAN_T881159249_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.TimeSpan
struct  TimeSpan_t881159249 
{
public:
	// System.Int64 System.TimeSpan::_ticks
	int64_t ____ticks_3;

public:
	inline static int32_t get_offset_of__ticks_3() { return static_cast<int32_t>(offsetof(TimeSpan_t881159249, ____ticks_3)); }
	inline int64_t get__ticks_3() const { return ____ticks_3; }
	inline int64_t* get_address_of__ticks_3() { return &____ticks_3; }
	inline void set__ticks_3(int64_t value)
	{
		____ticks_3 = value;
	}
};

struct TimeSpan_t881159249_StaticFields
{
public:
	// System.TimeSpan System.TimeSpan::Zero
	TimeSpan_t881159249  ___Zero_0;
	// System.TimeSpan System.TimeSpan::MaxValue
	TimeSpan_t881159249  ___MaxValue_1;
	// System.TimeSpan System.TimeSpan::MinValue
	TimeSpan_t881159249  ___MinValue_2;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.TimeSpan::_legacyConfigChecked
	bool ____legacyConfigChecked_4;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.TimeSpan::_legacyMode
	bool ____legacyMode_5;

public:
	inline static int32_t get_offset_of_Zero_0() { return static_cast<int32_t>(offsetof(TimeSpan_t881159249_StaticFields, ___Zero_0)); }
	inline TimeSpan_t881159249  get_Zero_0() const { return ___Zero_0; }
	inline TimeSpan_t881159249 * get_address_of_Zero_0() { return &___Zero_0; }
	inline void set_Zero_0(TimeSpan_t881159249  value)
	{
		___Zero_0 = value;
	}

	inline static int32_t get_offset_of_MaxValue_1() { return static_cast<int32_t>(offsetof(TimeSpan_t881159249_StaticFields, ___MaxValue_1)); }
	inline TimeSpan_t881159249  get_MaxValue_1() const { return ___MaxValue_1; }
	inline TimeSpan_t881159249 * get_address_of_MaxValue_1() { return &___MaxValue_1; }
	inline void set_MaxValue_1(TimeSpan_t881159249  value)
	{
		___MaxValue_1 = value;
	}

	inline static int32_t get_offset_of_MinValue_2() { return static_cast<int32_t>(offsetof(TimeSpan_t881159249_StaticFields, ___MinValue_2)); }
	inline TimeSpan_t881159249  get_MinValue_2() const { return ___MinValue_2; }
	inline TimeSpan_t881159249 * get_address_of_MinValue_2() { return &___MinValue_2; }
	inline void set_MinValue_2(TimeSpan_t881159249  value)
	{
		___MinValue_2 = value;
	}

	inline static int32_t get_offset_of__legacyConfigChecked_4() { return static_cast<int32_t>(offsetof(TimeSpan_t881159249_StaticFields, ____legacyConfigChecked_4)); }
	inline bool get__legacyConfigChecked_4() const { return ____legacyConfigChecked_4; }
	inline bool* get_address_of__legacyConfigChecked_4() { return &____legacyConfigChecked_4; }
	inline void set__legacyConfigChecked_4(bool value)
	{
		____legacyConfigChecked_4 = value;
	}

	inline static int32_t get_offset_of__legacyMode_5() { return static_cast<int32_t>(offsetof(TimeSpan_t881159249_StaticFields, ____legacyMode_5)); }
	inline bool get__legacyMode_5() const { return ____legacyMode_5; }
	inline bool* get_address_of__legacyMode_5() { return &____legacyMode_5; }
	inline void set__legacyMode_5(bool value)
	{
		____legacyMode_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TIMESPAN_T881159249_H
#ifndef BASENUMBERCONVERTER_T312147029_H
#define BASENUMBERCONVERTER_T312147029_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.BaseNumberConverter
struct  BaseNumberConverter_t312147029  : public TypeConverter_t2249118273
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BASENUMBERCONVERTER_T312147029_H
#ifndef REFERENCECONVERTER_T1811933861_H
#define REFERENCECONVERTER_T1811933861_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.ReferenceConverter
struct  ReferenceConverter_t1811933861  : public TypeConverter_t2249118273
{
public:
	// System.Type System.ComponentModel.ReferenceConverter::type
	Type_t * ___type_3;

public:
	inline static int32_t get_offset_of_type_3() { return static_cast<int32_t>(offsetof(ReferenceConverter_t1811933861, ___type_3)); }
	inline Type_t * get_type_3() const { return ___type_3; }
	inline Type_t ** get_address_of_type_3() { return &___type_3; }
	inline void set_type_3(Type_t * value)
	{
		___type_3 = value;
		Il2CppCodeGenWriteBarrier((&___type_3), value);
	}
};

struct ReferenceConverter_t1811933861_StaticFields
{
public:
	// System.String System.ComponentModel.ReferenceConverter::none
	String_t* ___none_2;

public:
	inline static int32_t get_offset_of_none_2() { return static_cast<int32_t>(offsetof(ReferenceConverter_t1811933861_StaticFields, ___none_2)); }
	inline String_t* get_none_2() const { return ___none_2; }
	inline String_t** get_address_of_none_2() { return &___none_2; }
	inline void set_none_2(String_t* value)
	{
		___none_2 = value;
		Il2CppCodeGenWriteBarrier((&___none_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REFERENCECONVERTER_T1811933861_H
#ifndef STRINGCONVERTER_T3216726494_H
#define STRINGCONVERTER_T3216726494_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.StringConverter
struct  StringConverter_t3216726494  : public TypeConverter_t2249118273
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRINGCONVERTER_T3216726494_H
#ifndef TIMESPANCONVERTER_T3504031848_H
#define TIMESPANCONVERTER_T3504031848_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.TimeSpanConverter
struct  TimeSpanConverter_t3504031848  : public TypeConverter_t2249118273
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TIMESPANCONVERTER_T3504031848_H
#ifndef WEAKHASHTABLE_T3533205710_H
#define WEAKHASHTABLE_T3533205710_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.WeakHashtable
struct  WeakHashtable_t3533205710  : public Hashtable_t1853889766
{
public:

public:
};

struct WeakHashtable_t3533205710_StaticFields
{
public:
	// System.Collections.IEqualityComparer System.ComponentModel.WeakHashtable::_comparer
	RuntimeObject* ____comparer_11;

public:
	inline static int32_t get_offset_of__comparer_11() { return static_cast<int32_t>(offsetof(WeakHashtable_t3533205710_StaticFields, ____comparer_11)); }
	inline RuntimeObject* get__comparer_11() const { return ____comparer_11; }
	inline RuntimeObject** get_address_of__comparer_11() { return &____comparer_11; }
	inline void set__comparer_11(RuntimeObject* value)
	{
		____comparer_11 = value;
		Il2CppCodeGenWriteBarrier((&____comparer_11), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WEAKHASHTABLE_T3533205710_H
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
#ifndef DEFLATESTREAM_T4175168077_H
#define DEFLATESTREAM_T4175168077_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.Compression.DeflateStream
struct  DeflateStream_t4175168077  : public Stream_t1273022909
{
public:
	// System.IO.Stream System.IO.Compression.DeflateStream::base_stream
	Stream_t1273022909 * ___base_stream_4;
	// System.IO.Compression.CompressionMode System.IO.Compression.DeflateStream::mode
	int32_t ___mode_5;
	// System.Boolean System.IO.Compression.DeflateStream::leaveOpen
	bool ___leaveOpen_6;
	// System.Boolean System.IO.Compression.DeflateStream::disposed
	bool ___disposed_7;
	// System.IO.Compression.DeflateStreamNative System.IO.Compression.DeflateStream::native
	DeflateStreamNative_t1405046456 * ___native_8;

public:
	inline static int32_t get_offset_of_base_stream_4() { return static_cast<int32_t>(offsetof(DeflateStream_t4175168077, ___base_stream_4)); }
	inline Stream_t1273022909 * get_base_stream_4() const { return ___base_stream_4; }
	inline Stream_t1273022909 ** get_address_of_base_stream_4() { return &___base_stream_4; }
	inline void set_base_stream_4(Stream_t1273022909 * value)
	{
		___base_stream_4 = value;
		Il2CppCodeGenWriteBarrier((&___base_stream_4), value);
	}

	inline static int32_t get_offset_of_mode_5() { return static_cast<int32_t>(offsetof(DeflateStream_t4175168077, ___mode_5)); }
	inline int32_t get_mode_5() const { return ___mode_5; }
	inline int32_t* get_address_of_mode_5() { return &___mode_5; }
	inline void set_mode_5(int32_t value)
	{
		___mode_5 = value;
	}

	inline static int32_t get_offset_of_leaveOpen_6() { return static_cast<int32_t>(offsetof(DeflateStream_t4175168077, ___leaveOpen_6)); }
	inline bool get_leaveOpen_6() const { return ___leaveOpen_6; }
	inline bool* get_address_of_leaveOpen_6() { return &___leaveOpen_6; }
	inline void set_leaveOpen_6(bool value)
	{
		___leaveOpen_6 = value;
	}

	inline static int32_t get_offset_of_disposed_7() { return static_cast<int32_t>(offsetof(DeflateStream_t4175168077, ___disposed_7)); }
	inline bool get_disposed_7() const { return ___disposed_7; }
	inline bool* get_address_of_disposed_7() { return &___disposed_7; }
	inline void set_disposed_7(bool value)
	{
		___disposed_7 = value;
	}

	inline static int32_t get_offset_of_native_8() { return static_cast<int32_t>(offsetof(DeflateStream_t4175168077, ___native_8)); }
	inline DeflateStreamNative_t1405046456 * get_native_8() const { return ___native_8; }
	inline DeflateStreamNative_t1405046456 ** get_address_of_native_8() { return &___native_8; }
	inline void set_native_8(DeflateStreamNative_t1405046456 * value)
	{
		___native_8 = value;
		Il2CppCodeGenWriteBarrier((&___native_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEFLATESTREAM_T4175168077_H
#ifndef SAFEDEFLATESTREAMHANDLE_T2005819069_H
#define SAFEDEFLATESTREAMHANDLE_T2005819069_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.Compression.DeflateStreamNative/SafeDeflateStreamHandle
struct  SafeDeflateStreamHandle_t2005819069  : public SafeHandle_t3273388951
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SAFEDEFLATESTREAMHANDLE_T2005819069_H
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
#ifndef OID_T3552120260_H
#define OID_T3552120260_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.Oid
struct  Oid_t3552120260  : public RuntimeObject
{
public:
	// System.String System.Security.Cryptography.Oid::m_value
	String_t* ___m_value_0;
	// System.String System.Security.Cryptography.Oid::m_friendlyName
	String_t* ___m_friendlyName_1;
	// System.Security.Cryptography.OidGroup System.Security.Cryptography.Oid::m_group
	int32_t ___m_group_2;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Oid_t3552120260, ___m_value_0)); }
	inline String_t* get_m_value_0() const { return ___m_value_0; }
	inline String_t** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(String_t* value)
	{
		___m_value_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_value_0), value);
	}

	inline static int32_t get_offset_of_m_friendlyName_1() { return static_cast<int32_t>(offsetof(Oid_t3552120260, ___m_friendlyName_1)); }
	inline String_t* get_m_friendlyName_1() const { return ___m_friendlyName_1; }
	inline String_t** get_address_of_m_friendlyName_1() { return &___m_friendlyName_1; }
	inline void set_m_friendlyName_1(String_t* value)
	{
		___m_friendlyName_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_friendlyName_1), value);
	}

	inline static int32_t get_offset_of_m_group_2() { return static_cast<int32_t>(offsetof(Oid_t3552120260, ___m_group_2)); }
	inline int32_t get_m_group_2() const { return ___m_group_2; }
	inline int32_t* get_address_of_m_group_2() { return &___m_group_2; }
	inline void set_m_group_2(int32_t value)
	{
		___m_group_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OID_T3552120260_H
#ifndef X509BASICCONSTRAINTSEXTENSION_T2828968862_H
#define X509BASICCONSTRAINTSEXTENSION_T2828968862_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.X509Certificates.X509BasicConstraintsExtension
struct  X509BasicConstraintsExtension_t2828968862  : public X509Extension_t3272255153
{
public:
	// System.Boolean System.Security.Cryptography.X509Certificates.X509BasicConstraintsExtension::_certificateAuthority
	bool ____certificateAuthority_5;
	// System.Boolean System.Security.Cryptography.X509Certificates.X509BasicConstraintsExtension::_hasPathLengthConstraint
	bool ____hasPathLengthConstraint_6;
	// System.Int32 System.Security.Cryptography.X509Certificates.X509BasicConstraintsExtension::_pathLengthConstraint
	int32_t ____pathLengthConstraint_7;
	// System.Security.Cryptography.AsnDecodeStatus System.Security.Cryptography.X509Certificates.X509BasicConstraintsExtension::_status
	int32_t ____status_8;

public:
	inline static int32_t get_offset_of__certificateAuthority_5() { return static_cast<int32_t>(offsetof(X509BasicConstraintsExtension_t2828968862, ____certificateAuthority_5)); }
	inline bool get__certificateAuthority_5() const { return ____certificateAuthority_5; }
	inline bool* get_address_of__certificateAuthority_5() { return &____certificateAuthority_5; }
	inline void set__certificateAuthority_5(bool value)
	{
		____certificateAuthority_5 = value;
	}

	inline static int32_t get_offset_of__hasPathLengthConstraint_6() { return static_cast<int32_t>(offsetof(X509BasicConstraintsExtension_t2828968862, ____hasPathLengthConstraint_6)); }
	inline bool get__hasPathLengthConstraint_6() const { return ____hasPathLengthConstraint_6; }
	inline bool* get_address_of__hasPathLengthConstraint_6() { return &____hasPathLengthConstraint_6; }
	inline void set__hasPathLengthConstraint_6(bool value)
	{
		____hasPathLengthConstraint_6 = value;
	}

	inline static int32_t get_offset_of__pathLengthConstraint_7() { return static_cast<int32_t>(offsetof(X509BasicConstraintsExtension_t2828968862, ____pathLengthConstraint_7)); }
	inline int32_t get__pathLengthConstraint_7() const { return ____pathLengthConstraint_7; }
	inline int32_t* get_address_of__pathLengthConstraint_7() { return &____pathLengthConstraint_7; }
	inline void set__pathLengthConstraint_7(int32_t value)
	{
		____pathLengthConstraint_7 = value;
	}

	inline static int32_t get_offset_of__status_8() { return static_cast<int32_t>(offsetof(X509BasicConstraintsExtension_t2828968862, ____status_8)); }
	inline int32_t get__status_8() const { return ____status_8; }
	inline int32_t* get_address_of__status_8() { return &____status_8; }
	inline void set__status_8(int32_t value)
	{
		____status_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // X509BASICCONSTRAINTSEXTENSION_T2828968862_H
#ifndef X509CHAINIMPLMONO_T3829837506_H
#define X509CHAINIMPLMONO_T3829837506_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.X509Certificates.X509ChainImplMono
struct  X509ChainImplMono_t3829837506  : public X509ChainImpl_t2192100862
{
public:
	// System.Security.Cryptography.X509Certificates.StoreLocation System.Security.Cryptography.X509Certificates.X509ChainImplMono::location
	int32_t ___location_0;
	// System.Security.Cryptography.X509Certificates.X509ChainElementCollection System.Security.Cryptography.X509Certificates.X509ChainImplMono::elements
	X509ChainElementCollection_t3110968994 * ___elements_1;
	// System.Security.Cryptography.X509Certificates.X509ChainPolicy System.Security.Cryptography.X509Certificates.X509ChainImplMono::policy
	X509ChainPolicy_t2426922870 * ___policy_2;

public:
	inline static int32_t get_offset_of_location_0() { return static_cast<int32_t>(offsetof(X509ChainImplMono_t3829837506, ___location_0)); }
	inline int32_t get_location_0() const { return ___location_0; }
	inline int32_t* get_address_of_location_0() { return &___location_0; }
	inline void set_location_0(int32_t value)
	{
		___location_0 = value;
	}

	inline static int32_t get_offset_of_elements_1() { return static_cast<int32_t>(offsetof(X509ChainImplMono_t3829837506, ___elements_1)); }
	inline X509ChainElementCollection_t3110968994 * get_elements_1() const { return ___elements_1; }
	inline X509ChainElementCollection_t3110968994 ** get_address_of_elements_1() { return &___elements_1; }
	inline void set_elements_1(X509ChainElementCollection_t3110968994 * value)
	{
		___elements_1 = value;
		Il2CppCodeGenWriteBarrier((&___elements_1), value);
	}

	inline static int32_t get_offset_of_policy_2() { return static_cast<int32_t>(offsetof(X509ChainImplMono_t3829837506, ___policy_2)); }
	inline X509ChainPolicy_t2426922870 * get_policy_2() const { return ___policy_2; }
	inline X509ChainPolicy_t2426922870 ** get_address_of_policy_2() { return &___policy_2; }
	inline void set_policy_2(X509ChainPolicy_t2426922870 * value)
	{
		___policy_2 = value;
		Il2CppCodeGenWriteBarrier((&___policy_2), value);
	}
};

struct X509ChainImplMono_t3829837506_StaticFields
{
public:
	// System.Security.Cryptography.X509Certificates.X509ChainStatus[] System.Security.Cryptography.X509Certificates.X509ChainImplMono::Empty
	X509ChainStatusU5BU5D_t2685945535* ___Empty_3;

public:
	inline static int32_t get_offset_of_Empty_3() { return static_cast<int32_t>(offsetof(X509ChainImplMono_t3829837506_StaticFields, ___Empty_3)); }
	inline X509ChainStatusU5BU5D_t2685945535* get_Empty_3() const { return ___Empty_3; }
	inline X509ChainStatusU5BU5D_t2685945535** get_address_of_Empty_3() { return &___Empty_3; }
	inline void set_Empty_3(X509ChainStatusU5BU5D_t2685945535* value)
	{
		___Empty_3 = value;
		Il2CppCodeGenWriteBarrier((&___Empty_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // X509CHAINIMPLMONO_T3829837506_H
#ifndef X509CHAINPOLICY_T2426922870_H
#define X509CHAINPOLICY_T2426922870_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.X509Certificates.X509ChainPolicy
struct  X509ChainPolicy_t2426922870  : public RuntimeObject
{
public:
	// System.Security.Cryptography.OidCollection System.Security.Cryptography.X509Certificates.X509ChainPolicy::apps
	OidCollection_t4234766844 * ___apps_0;
	// System.Security.Cryptography.OidCollection System.Security.Cryptography.X509Certificates.X509ChainPolicy::cert
	OidCollection_t4234766844 * ___cert_1;
	// System.Security.Cryptography.X509Certificates.X509CertificateCollection System.Security.Cryptography.X509Certificates.X509ChainPolicy::store
	X509CertificateCollection_t3399372417 * ___store_2;
	// System.Security.Cryptography.X509Certificates.X509Certificate2Collection System.Security.Cryptography.X509Certificates.X509ChainPolicy::store2
	X509Certificate2Collection_t2111161276 * ___store2_3;
	// System.Security.Cryptography.X509Certificates.X509RevocationFlag System.Security.Cryptography.X509Certificates.X509ChainPolicy::rflag
	int32_t ___rflag_4;
	// System.Security.Cryptography.X509Certificates.X509RevocationMode System.Security.Cryptography.X509Certificates.X509ChainPolicy::mode
	int32_t ___mode_5;
	// System.TimeSpan System.Security.Cryptography.X509Certificates.X509ChainPolicy::timeout
	TimeSpan_t881159249  ___timeout_6;
	// System.Security.Cryptography.X509Certificates.X509VerificationFlags System.Security.Cryptography.X509Certificates.X509ChainPolicy::vflags
	int32_t ___vflags_7;
	// System.DateTime System.Security.Cryptography.X509Certificates.X509ChainPolicy::vtime
	DateTime_t3738529785  ___vtime_8;

public:
	inline static int32_t get_offset_of_apps_0() { return static_cast<int32_t>(offsetof(X509ChainPolicy_t2426922870, ___apps_0)); }
	inline OidCollection_t4234766844 * get_apps_0() const { return ___apps_0; }
	inline OidCollection_t4234766844 ** get_address_of_apps_0() { return &___apps_0; }
	inline void set_apps_0(OidCollection_t4234766844 * value)
	{
		___apps_0 = value;
		Il2CppCodeGenWriteBarrier((&___apps_0), value);
	}

	inline static int32_t get_offset_of_cert_1() { return static_cast<int32_t>(offsetof(X509ChainPolicy_t2426922870, ___cert_1)); }
	inline OidCollection_t4234766844 * get_cert_1() const { return ___cert_1; }
	inline OidCollection_t4234766844 ** get_address_of_cert_1() { return &___cert_1; }
	inline void set_cert_1(OidCollection_t4234766844 * value)
	{
		___cert_1 = value;
		Il2CppCodeGenWriteBarrier((&___cert_1), value);
	}

	inline static int32_t get_offset_of_store_2() { return static_cast<int32_t>(offsetof(X509ChainPolicy_t2426922870, ___store_2)); }
	inline X509CertificateCollection_t3399372417 * get_store_2() const { return ___store_2; }
	inline X509CertificateCollection_t3399372417 ** get_address_of_store_2() { return &___store_2; }
	inline void set_store_2(X509CertificateCollection_t3399372417 * value)
	{
		___store_2 = value;
		Il2CppCodeGenWriteBarrier((&___store_2), value);
	}

	inline static int32_t get_offset_of_store2_3() { return static_cast<int32_t>(offsetof(X509ChainPolicy_t2426922870, ___store2_3)); }
	inline X509Certificate2Collection_t2111161276 * get_store2_3() const { return ___store2_3; }
	inline X509Certificate2Collection_t2111161276 ** get_address_of_store2_3() { return &___store2_3; }
	inline void set_store2_3(X509Certificate2Collection_t2111161276 * value)
	{
		___store2_3 = value;
		Il2CppCodeGenWriteBarrier((&___store2_3), value);
	}

	inline static int32_t get_offset_of_rflag_4() { return static_cast<int32_t>(offsetof(X509ChainPolicy_t2426922870, ___rflag_4)); }
	inline int32_t get_rflag_4() const { return ___rflag_4; }
	inline int32_t* get_address_of_rflag_4() { return &___rflag_4; }
	inline void set_rflag_4(int32_t value)
	{
		___rflag_4 = value;
	}

	inline static int32_t get_offset_of_mode_5() { return static_cast<int32_t>(offsetof(X509ChainPolicy_t2426922870, ___mode_5)); }
	inline int32_t get_mode_5() const { return ___mode_5; }
	inline int32_t* get_address_of_mode_5() { return &___mode_5; }
	inline void set_mode_5(int32_t value)
	{
		___mode_5 = value;
	}

	inline static int32_t get_offset_of_timeout_6() { return static_cast<int32_t>(offsetof(X509ChainPolicy_t2426922870, ___timeout_6)); }
	inline TimeSpan_t881159249  get_timeout_6() const { return ___timeout_6; }
	inline TimeSpan_t881159249 * get_address_of_timeout_6() { return &___timeout_6; }
	inline void set_timeout_6(TimeSpan_t881159249  value)
	{
		___timeout_6 = value;
	}

	inline static int32_t get_offset_of_vflags_7() { return static_cast<int32_t>(offsetof(X509ChainPolicy_t2426922870, ___vflags_7)); }
	inline int32_t get_vflags_7() const { return ___vflags_7; }
	inline int32_t* get_address_of_vflags_7() { return &___vflags_7; }
	inline void set_vflags_7(int32_t value)
	{
		___vflags_7 = value;
	}

	inline static int32_t get_offset_of_vtime_8() { return static_cast<int32_t>(offsetof(X509ChainPolicy_t2426922870, ___vtime_8)); }
	inline DateTime_t3738529785  get_vtime_8() const { return ___vtime_8; }
	inline DateTime_t3738529785 * get_address_of_vtime_8() { return &___vtime_8; }
	inline void set_vtime_8(DateTime_t3738529785  value)
	{
		___vtime_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // X509CHAINPOLICY_T2426922870_H
#ifndef X509CHAINSTATUS_T133602714_H
#define X509CHAINSTATUS_T133602714_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.X509Certificates.X509ChainStatus
struct  X509ChainStatus_t133602714 
{
public:
	// System.Security.Cryptography.X509Certificates.X509ChainStatusFlags System.Security.Cryptography.X509Certificates.X509ChainStatus::status
	int32_t ___status_0;
	// System.String System.Security.Cryptography.X509Certificates.X509ChainStatus::info
	String_t* ___info_1;

public:
	inline static int32_t get_offset_of_status_0() { return static_cast<int32_t>(offsetof(X509ChainStatus_t133602714, ___status_0)); }
	inline int32_t get_status_0() const { return ___status_0; }
	inline int32_t* get_address_of_status_0() { return &___status_0; }
	inline void set_status_0(int32_t value)
	{
		___status_0 = value;
	}

	inline static int32_t get_offset_of_info_1() { return static_cast<int32_t>(offsetof(X509ChainStatus_t133602714, ___info_1)); }
	inline String_t* get_info_1() const { return ___info_1; }
	inline String_t** get_address_of_info_1() { return &___info_1; }
	inline void set_info_1(String_t* value)
	{
		___info_1 = value;
		Il2CppCodeGenWriteBarrier((&___info_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Security.Cryptography.X509Certificates.X509ChainStatus
struct X509ChainStatus_t133602714_marshaled_pinvoke
{
	int32_t ___status_0;
	char* ___info_1;
};
// Native definition for COM marshalling of System.Security.Cryptography.X509Certificates.X509ChainStatus
struct X509ChainStatus_t133602714_marshaled_com
{
	int32_t ___status_0;
	Il2CppChar* ___info_1;
};
#endif // X509CHAINSTATUS_T133602714_H
#ifndef X509ENHANCEDKEYUSAGEEXTENSION_T4189149453_H
#define X509ENHANCEDKEYUSAGEEXTENSION_T4189149453_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.X509Certificates.X509EnhancedKeyUsageExtension
struct  X509EnhancedKeyUsageExtension_t4189149453  : public X509Extension_t3272255153
{
public:
	// System.Security.Cryptography.OidCollection System.Security.Cryptography.X509Certificates.X509EnhancedKeyUsageExtension::_enhKeyUsage
	OidCollection_t4234766844 * ____enhKeyUsage_3;
	// System.Security.Cryptography.AsnDecodeStatus System.Security.Cryptography.X509Certificates.X509EnhancedKeyUsageExtension::_status
	int32_t ____status_4;

public:
	inline static int32_t get_offset_of__enhKeyUsage_3() { return static_cast<int32_t>(offsetof(X509EnhancedKeyUsageExtension_t4189149453, ____enhKeyUsage_3)); }
	inline OidCollection_t4234766844 * get__enhKeyUsage_3() const { return ____enhKeyUsage_3; }
	inline OidCollection_t4234766844 ** get_address_of__enhKeyUsage_3() { return &____enhKeyUsage_3; }
	inline void set__enhKeyUsage_3(OidCollection_t4234766844 * value)
	{
		____enhKeyUsage_3 = value;
		Il2CppCodeGenWriteBarrier((&____enhKeyUsage_3), value);
	}

	inline static int32_t get_offset_of__status_4() { return static_cast<int32_t>(offsetof(X509EnhancedKeyUsageExtension_t4189149453, ____status_4)); }
	inline int32_t get__status_4() const { return ____status_4; }
	inline int32_t* get_address_of__status_4() { return &____status_4; }
	inline void set__status_4(int32_t value)
	{
		____status_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // X509ENHANCEDKEYUSAGEEXTENSION_T4189149453_H
#ifndef X509KEYUSAGEEXTENSION_T2042101591_H
#define X509KEYUSAGEEXTENSION_T2042101591_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.X509Certificates.X509KeyUsageExtension
struct  X509KeyUsageExtension_t2042101591  : public X509Extension_t3272255153
{
public:
	// System.Security.Cryptography.X509Certificates.X509KeyUsageFlags System.Security.Cryptography.X509Certificates.X509KeyUsageExtension::_keyUsages
	int32_t ____keyUsages_6;
	// System.Security.Cryptography.AsnDecodeStatus System.Security.Cryptography.X509Certificates.X509KeyUsageExtension::_status
	int32_t ____status_7;

public:
	inline static int32_t get_offset_of__keyUsages_6() { return static_cast<int32_t>(offsetof(X509KeyUsageExtension_t2042101591, ____keyUsages_6)); }
	inline int32_t get__keyUsages_6() const { return ____keyUsages_6; }
	inline int32_t* get_address_of__keyUsages_6() { return &____keyUsages_6; }
	inline void set__keyUsages_6(int32_t value)
	{
		____keyUsages_6 = value;
	}

	inline static int32_t get_offset_of__status_7() { return static_cast<int32_t>(offsetof(X509KeyUsageExtension_t2042101591, ____status_7)); }
	inline int32_t get__status_7() const { return ____status_7; }
	inline int32_t* get_address_of__status_7() { return &____status_7; }
	inline void set__status_7(int32_t value)
	{
		____status_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // X509KEYUSAGEEXTENSION_T2042101591_H
#ifndef X509SUBJECTKEYIDENTIFIEREXTENSION_T4258825542_H
#define X509SUBJECTKEYIDENTIFIEREXTENSION_T4258825542_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierExtension
struct  X509SubjectKeyIdentifierExtension_t4258825542  : public X509Extension_t3272255153
{
public:
	// System.Byte[] System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierExtension::_subjectKeyIdentifier
	ByteU5BU5D_t4116647657* ____subjectKeyIdentifier_5;
	// System.String System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierExtension::_ski
	String_t* ____ski_6;
	// System.Security.Cryptography.AsnDecodeStatus System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierExtension::_status
	int32_t ____status_7;

public:
	inline static int32_t get_offset_of__subjectKeyIdentifier_5() { return static_cast<int32_t>(offsetof(X509SubjectKeyIdentifierExtension_t4258825542, ____subjectKeyIdentifier_5)); }
	inline ByteU5BU5D_t4116647657* get__subjectKeyIdentifier_5() const { return ____subjectKeyIdentifier_5; }
	inline ByteU5BU5D_t4116647657** get_address_of__subjectKeyIdentifier_5() { return &____subjectKeyIdentifier_5; }
	inline void set__subjectKeyIdentifier_5(ByteU5BU5D_t4116647657* value)
	{
		____subjectKeyIdentifier_5 = value;
		Il2CppCodeGenWriteBarrier((&____subjectKeyIdentifier_5), value);
	}

	inline static int32_t get_offset_of__ski_6() { return static_cast<int32_t>(offsetof(X509SubjectKeyIdentifierExtension_t4258825542, ____ski_6)); }
	inline String_t* get__ski_6() const { return ____ski_6; }
	inline String_t** get_address_of__ski_6() { return &____ski_6; }
	inline void set__ski_6(String_t* value)
	{
		____ski_6 = value;
		Il2CppCodeGenWriteBarrier((&____ski_6), value);
	}

	inline static int32_t get_offset_of__status_7() { return static_cast<int32_t>(offsetof(X509SubjectKeyIdentifierExtension_t4258825542, ____status_7)); }
	inline int32_t get__status_7() const { return ____status_7; }
	inline int32_t* get_address_of__status_7() { return &____status_7; }
	inline void set__status_7(int32_t value)
	{
		____status_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // X509SUBJECTKEYIDENTIFIEREXTENSION_T4258825542_H
#ifndef REFRESHEVENTHANDLER_T3637242902_H
#define REFRESHEVENTHANDLER_T3637242902_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.RefreshEventHandler
struct  RefreshEventHandler_t3637242902  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REFRESHEVENTHANDLER_T3637242902_H
#ifndef SBYTECONVERTER_T2970182448_H
#define SBYTECONVERTER_T2970182448_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.SByteConverter
struct  SByteConverter_t2970182448  : public BaseNumberConverter_t312147029
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SBYTECONVERTER_T2970182448_H
#ifndef SINGLECONVERTER_T902207630_H
#define SINGLECONVERTER_T902207630_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.SingleConverter
struct  SingleConverter_t902207630  : public BaseNumberConverter_t312147029
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SINGLECONVERTER_T902207630_H
#ifndef UINT16CONVERTER_T819459975_H
#define UINT16CONVERTER_T819459975_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.UInt16Converter
struct  UInt16Converter_t819459975  : public BaseNumberConverter_t312147029
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UINT16CONVERTER_T819459975_H
#ifndef UINT32CONVERTER_T3472493373_H
#define UINT32CONVERTER_T3472493373_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.UInt32Converter
struct  UInt32Converter_t3472493373  : public BaseNumberConverter_t312147029
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UINT32CONVERTER_T3472493373_H
#ifndef UINT64CONVERTER_T4189949036_H
#define UINT64CONVERTER_T4189949036_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.UInt64Converter
struct  UInt64Converter_t4189949036  : public BaseNumberConverter_t312147029
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UINT64CONVERTER_T4189949036_H
#ifndef READMETHOD_T893206259_H
#define READMETHOD_T893206259_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.Compression.DeflateStream/ReadMethod
struct  ReadMethod_t893206259  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // READMETHOD_T893206259_H
#ifndef WRITEMETHOD_T2538911768_H
#define WRITEMETHOD_T2538911768_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.Compression.DeflateStream/WriteMethod
struct  WriteMethod_t2538911768  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WRITEMETHOD_T2538911768_H
#ifndef UNMANAGEDREADORWRITE_T1975956110_H
#define UNMANAGEDREADORWRITE_T1975956110_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.Compression.DeflateStreamNative/UnmanagedReadOrWrite
struct  UnmanagedReadOrWrite_t1975956110  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNMANAGEDREADORWRITE_T1975956110_H





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2500 = { sizeof (PropertyDescriptorEnumerator_t2627442857), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2500[2] = 
{
	PropertyDescriptorEnumerator_t2627442857::get_offset_of_owner_0(),
	PropertyDescriptorEnumerator_t2627442857::get_offset_of_index_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2501 = { sizeof (ReadOnlyAttribute_t1907441566), -1, sizeof(ReadOnlyAttribute_t1907441566_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2501[4] = 
{
	ReadOnlyAttribute_t1907441566::get_offset_of_isReadOnly_0(),
	ReadOnlyAttribute_t1907441566_StaticFields::get_offset_of_Yes_1(),
	ReadOnlyAttribute_t1907441566_StaticFields::get_offset_of_No_2(),
	ReadOnlyAttribute_t1907441566_StaticFields::get_offset_of_Default_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2502 = { sizeof (RecommendedAsConfigurableAttribute_t279829077), -1, sizeof(RecommendedAsConfigurableAttribute_t279829077_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2502[4] = 
{
	RecommendedAsConfigurableAttribute_t279829077::get_offset_of_recommendedAsConfigurable_0(),
	RecommendedAsConfigurableAttribute_t279829077_StaticFields::get_offset_of_No_1(),
	RecommendedAsConfigurableAttribute_t279829077_StaticFields::get_offset_of_Yes_2(),
	RecommendedAsConfigurableAttribute_t279829077_StaticFields::get_offset_of_Default_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2503 = { sizeof (ReferenceConverter_t1811933861), -1, sizeof(ReferenceConverter_t1811933861_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2503[2] = 
{
	ReferenceConverter_t1811933861_StaticFields::get_offset_of_none_2(),
	ReferenceConverter_t1811933861::get_offset_of_type_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2504 = { sizeof (ReferenceComparer_t1826665674), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2504[1] = 
{
	ReferenceComparer_t1826665674::get_offset_of_converter_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2505 = { sizeof (ReflectTypeDescriptionProvider_t2247041319), -1, sizeof(ReflectTypeDescriptionProvider_t2247041319_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2505[12] = 
{
	ReflectTypeDescriptionProvider_t2247041319::get_offset_of__typeData_2(),
	ReflectTypeDescriptionProvider_t2247041319_StaticFields::get_offset_of__typeConstructor_3(),
	ReflectTypeDescriptionProvider_t2247041319_StaticFields::get_offset_of__intrinsicTypeConverters_4(),
	ReflectTypeDescriptionProvider_t2247041319_StaticFields::get_offset_of__intrinsicReferenceKey_5(),
	ReflectTypeDescriptionProvider_t2247041319_StaticFields::get_offset_of__intrinsicNullableKey_6(),
	ReflectTypeDescriptionProvider_t2247041319_StaticFields::get_offset_of__dictionaryKey_7(),
	ReflectTypeDescriptionProvider_t2247041319_StaticFields::get_offset_of__attributeCache_8(),
	ReflectTypeDescriptionProvider_t2247041319_StaticFields::get_offset_of__extenderProviderKey_9(),
	ReflectTypeDescriptionProvider_t2247041319_StaticFields::get_offset_of__extenderPropertiesKey_10(),
	ReflectTypeDescriptionProvider_t2247041319_StaticFields::get_offset_of__extenderProviderPropertiesKey_11(),
	ReflectTypeDescriptionProvider_t2247041319_StaticFields::get_offset_of__skipInterfaceAttributeList_12(),
	ReflectTypeDescriptionProvider_t2247041319_StaticFields::get_offset_of__internalSyncObject_13(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2506 = { sizeof (ReflectedTypeData_t1775264331), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2506[8] = 
{
	ReflectedTypeData_t1775264331::get_offset_of__type_0(),
	ReflectedTypeData_t1775264331::get_offset_of__attributes_1(),
	ReflectedTypeData_t1775264331::get_offset_of__events_2(),
	ReflectedTypeData_t1775264331::get_offset_of__properties_3(),
	ReflectedTypeData_t1775264331::get_offset_of__converter_4(),
	ReflectedTypeData_t1775264331::get_offset_of__editors_5(),
	ReflectedTypeData_t1775264331::get_offset_of__editorTypes_6(),
	ReflectedTypeData_t1775264331::get_offset_of__editorCount_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2507 = { sizeof (RefreshEventArgs_t9288056), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2507[1] = 
{
	RefreshEventArgs_t9288056::get_offset_of_typeChanged_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2508 = { sizeof (RefreshEventHandler_t3637242902), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2509 = { sizeof (SByteConverter_t2970182448), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2510 = { sizeof (SingleConverter_t902207630), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2511 = { sizeof (StringConverter_t3216726494), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2512 = { sizeof (TimeSpanConverter_t3504031848), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2513 = { sizeof (TypeConverter_t2249118273), -1, sizeof(TypeConverter_t2249118273_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2513[2] = 
{
	0,
	TypeConverter_t2249118273_StaticFields::get_offset_of_useCompatibleTypeConversion_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2514 = { sizeof (StandardValuesCollection_t2184948248), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2514[2] = 
{
	StandardValuesCollection_t2184948248::get_offset_of_values_0(),
	StandardValuesCollection_t2184948248::get_offset_of_valueArray_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2515 = { sizeof (TypeConverterAttribute_t3271584429), -1, sizeof(TypeConverterAttribute_t3271584429_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2515[2] = 
{
	TypeConverterAttribute_t3271584429::get_offset_of_typeName_0(),
	TypeConverterAttribute_t3271584429_StaticFields::get_offset_of_Default_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2516 = { sizeof (TypeDescriptionProvider_t3232077895), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2516[2] = 
{
	TypeDescriptionProvider_t3232077895::get_offset_of__parent_0(),
	TypeDescriptionProvider_t3232077895::get_offset_of__emptyDescriptor_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2517 = { sizeof (EmptyCustomTypeDescriptor_t4007109994), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2518 = { sizeof (TypeDescriptionProviderAttribute_t2619663527), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2518[1] = 
{
	TypeDescriptionProviderAttribute_t2619663527::get_offset_of__typeName_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2519 = { sizeof (TypeDescriptor_t3066613587), -1, sizeof(TypeDescriptor_t3066613587_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2519[12] = 
{
	TypeDescriptor_t3066613587_StaticFields::get_offset_of__providerTable_0(),
	TypeDescriptor_t3066613587_StaticFields::get_offset_of__providerTypeTable_1(),
	TypeDescriptor_t3066613587_StaticFields::get_offset_of__defaultProviders_2(),
	TypeDescriptor_t3066613587_StaticFields::get_offset_of__metadataVersion_3(),
	TypeDescriptor_t3066613587_StaticFields::get_offset_of__collisionIndex_4(),
	TypeDescriptor_t3066613587_StaticFields::get_offset_of_TraceDescriptor_5(),
	TypeDescriptor_t3066613587_StaticFields::get_offset_of__pipelineInitializeKeys_6(),
	TypeDescriptor_t3066613587_StaticFields::get_offset_of__pipelineMergeKeys_7(),
	TypeDescriptor_t3066613587_StaticFields::get_offset_of__pipelineFilterKeys_8(),
	TypeDescriptor_t3066613587_StaticFields::get_offset_of__pipelineAttributeFilterKeys_9(),
	TypeDescriptor_t3066613587_StaticFields::get_offset_of__internalSyncObject_10(),
	TypeDescriptor_t3066613587_StaticFields::get_offset_of_Refreshed_11(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2520 = { sizeof (FilterCacheItem_t1189670310), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2520[2] = 
{
	FilterCacheItem_t1189670310::get_offset_of__filterService_0(),
	FilterCacheItem_t1189670310::get_offset_of_FilteredMembers_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2521 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2522 = { sizeof (MemberDescriptorComparer_t457940793), -1, sizeof(MemberDescriptorComparer_t457940793_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2522[1] = 
{
	MemberDescriptorComparer_t457940793_StaticFields::get_offset_of_Instance_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2523 = { sizeof (MergedTypeDescriptor_t3526482283), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2523[2] = 
{
	MergedTypeDescriptor_t3526482283::get_offset_of__primary_0(),
	MergedTypeDescriptor_t3526482283::get_offset_of__secondary_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2524 = { sizeof (TypeDescriptionNode_t3022060204), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2524[2] = 
{
	TypeDescriptionNode_t3022060204::get_offset_of_Next_2(),
	TypeDescriptionNode_t3022060204::get_offset_of_Provider_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2525 = { sizeof (DefaultExtendedTypeDescriptor_t1757997412)+ sizeof (RuntimeObject), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2525[2] = 
{
	DefaultExtendedTypeDescriptor_t1757997412::get_offset_of__node_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	DefaultExtendedTypeDescriptor_t1757997412::get_offset_of__instance_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2526 = { sizeof (DefaultTypeDescriptor_t4148937846)+ sizeof (RuntimeObject), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2526[3] = 
{
	DefaultTypeDescriptor_t4148937846::get_offset_of__node_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	DefaultTypeDescriptor_t4148937846::get_offset_of__objectType_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	DefaultTypeDescriptor_t4148937846::get_offset_of__instance_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2527 = { sizeof (TypeDescriptorComObject_t50518439), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2528 = { sizeof (TypeDescriptorInterface_t3054885090), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2529 = { sizeof (UInt16Converter_t819459975), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2530 = { sizeof (UInt32Converter_t3472493373), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2531 = { sizeof (UInt64Converter_t4189949036), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2532 = { sizeof (Win32Exception_t3234146298), -1, sizeof(Win32Exception_t3234146298_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2532[3] = 
{
	Win32Exception_t3234146298::get_offset_of_nativeErrorCode_17(),
	Win32Exception_t3234146298_StaticFields::get_offset_of_s_ErrorMessagesInitialized_18(),
	Win32Exception_t3234146298_StaticFields::get_offset_of_s_ErrorMessage_19(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2533 = { sizeof (BaseNumberConverter_t312147029), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2534 = { sizeof (WeakHashtable_t3533205710), -1, sizeof(WeakHashtable_t3533205710_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2534[1] = 
{
	WeakHashtable_t3533205710_StaticFields::get_offset_of__comparer_11(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2535 = { sizeof (WeakKeyComparer_t448163292), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2536 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2537 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2538 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2539 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2540 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2541 = { sizeof (DesignerSerializerAttribute_t1570548024), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2541[3] = 
{
	DesignerSerializerAttribute_t1570548024::get_offset_of_serializerTypeName_0(),
	DesignerSerializerAttribute_t1570548024::get_offset_of_serializerBaseTypeName_1(),
	DesignerSerializerAttribute_t1570548024::get_offset_of_typeId_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2542 = { sizeof (InstanceDescriptor_t657473484), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2542[3] = 
{
	InstanceDescriptor_t657473484::get_offset_of_member_0(),
	InstanceDescriptor_t657473484::get_offset_of_arguments_1(),
	InstanceDescriptor_t657473484::get_offset_of_isComplete_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2543 = { sizeof (RootDesignerSerializerAttribute_t3074689342), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2543[4] = 
{
	RootDesignerSerializerAttribute_t3074689342::get_offset_of_reloadable_0(),
	RootDesignerSerializerAttribute_t3074689342::get_offset_of_serializerTypeName_1(),
	RootDesignerSerializerAttribute_t3074689342::get_offset_of_serializerBaseTypeName_2(),
	RootDesignerSerializerAttribute_t3074689342::get_offset_of_typeId_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2544 = { sizeof (AuthenticationException_t1221369422), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2545 = { sizeof (SslProtocols_t928472600)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2545[8] = 
{
	SslProtocols_t928472600::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2546 = { sizeof (OidGroup_t395834848)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2546[12] = 
{
	OidGroup_t395834848::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2547 = { sizeof (Oid_t3552120260), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2547[3] = 
{
	Oid_t3552120260::get_offset_of_m_value_0(),
	Oid_t3552120260::get_offset_of_m_friendlyName_1(),
	Oid_t3552120260::get_offset_of_m_group_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2548 = { sizeof (OidCollection_t4234766844), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2548[1] = 
{
	OidCollection_t4234766844::get_offset_of_m_list_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2549 = { sizeof (OidEnumerator_t899373898), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2549[2] = 
{
	OidEnumerator_t899373898::get_offset_of_m_oids_0(),
	OidEnumerator_t899373898::get_offset_of_m_current_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2550 = { sizeof (CAPI_t4202866366), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2551 = { sizeof (AsnDecodeStatus_t788588755)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2551[7] = 
{
	AsnDecodeStatus_t788588755::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2552 = { sizeof (AsnEncodedData_t382354011), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2552[2] = 
{
	AsnEncodedData_t382354011::get_offset_of__oid_0(),
	AsnEncodedData_t382354011::get_offset_of__raw_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2553 = { sizeof (StoreLocation_t2864310644)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2553[3] = 
{
	StoreLocation_t2864310644::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2554 = { sizeof (X509ChainStatusFlags_t1026973125)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2554[27] = 
{
	X509ChainStatusFlags_t1026973125::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2555 = { sizeof (X509KeyUsageFlags_t1431795504)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2555[11] = 
{
	X509KeyUsageFlags_t1431795504::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2556 = { sizeof (X509RevocationFlag_t2592711905)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2556[4] = 
{
	X509RevocationFlag_t2592711905::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2557 = { sizeof (X509RevocationMode_t2571829933)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2557[4] = 
{
	X509RevocationMode_t2571829933::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2558 = { sizeof (X509SubjectKeyIdentifierHashAlgorithm_t3929505454)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2558[4] = 
{
	X509SubjectKeyIdentifierHashAlgorithm_t3929505454::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2559 = { sizeof (X509VerificationFlags_t2086244306)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2559[15] = 
{
	X509VerificationFlags_t2086244306::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2560 = { sizeof (X509Utils_t1623412129), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2561 = { sizeof (PublicKey_t3779582684), -1, sizeof(PublicKey_t3779582684_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2561[5] = 
{
	PublicKey_t3779582684::get_offset_of__key_0(),
	PublicKey_t3779582684::get_offset_of__keyValue_1(),
	PublicKey_t3779582684::get_offset_of__params_2(),
	PublicKey_t3779582684::get_offset_of__oid_3(),
	PublicKey_t3779582684_StaticFields::get_offset_of_Empty_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2562 = { sizeof (X500DistinguishedName_t875709727), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2563 = { sizeof (X509BasicConstraintsExtension_t2828968862), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2563[6] = 
{
	0,
	0,
	X509BasicConstraintsExtension_t2828968862::get_offset_of__certificateAuthority_5(),
	X509BasicConstraintsExtension_t2828968862::get_offset_of__hasPathLengthConstraint_6(),
	X509BasicConstraintsExtension_t2828968862::get_offset_of__pathLengthConstraint_7(),
	X509BasicConstraintsExtension_t2828968862::get_offset_of__status_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2564 = { sizeof (X509Certificate2_t714049126), -1, sizeof(X509Certificate2_t714049126_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2564[2] = 
{
	X509Certificate2_t714049126::get_offset_of_friendlyName_4(),
	X509Certificate2_t714049126_StaticFields::get_offset_of_signedData_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2565 = { sizeof (X509Certificate2Collection_t2111161276), -1, sizeof(X509Certificate2Collection_t2111161276_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2565[1] = 
{
	X509Certificate2Collection_t2111161276_StaticFields::get_offset_of_newline_split_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2566 = { sizeof (X509Certificate2Impl_t4078769278), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2567 = { sizeof (X509Certificate2ImplMono_t1885766714), -1, sizeof(X509Certificate2ImplMono_t1885766714_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2567[12] = 
{
	X509Certificate2ImplMono_t1885766714::get_offset_of__archived_1(),
	X509Certificate2ImplMono_t1885766714::get_offset_of__extensions_2(),
	X509Certificate2ImplMono_t1885766714::get_offset_of__publicKey_3(),
	X509Certificate2ImplMono_t1885766714::get_offset_of_issuer_name_4(),
	X509Certificate2ImplMono_t1885766714::get_offset_of_subject_name_5(),
	X509Certificate2ImplMono_t1885766714::get_offset_of_signature_algorithm_6(),
	X509Certificate2ImplMono_t1885766714::get_offset_of_intermediateCerts_7(),
	X509Certificate2ImplMono_t1885766714::get_offset_of__cert_8(),
	X509Certificate2ImplMono_t1885766714_StaticFields::get_offset_of_empty_error_9(),
	X509Certificate2ImplMono_t1885766714_StaticFields::get_offset_of_commonName_10(),
	X509Certificate2ImplMono_t1885766714_StaticFields::get_offset_of_email_11(),
	X509Certificate2ImplMono_t1885766714_StaticFields::get_offset_of_signedData_12(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2568 = { sizeof (X509CertificateCollection_t3399372417), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2569 = { sizeof (X509CertificateEnumerator_t855273292), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2569[1] = 
{
	X509CertificateEnumerator_t855273292::get_offset_of_enumerator_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2570 = { sizeof (X509CertificateImplCollection_t1104947111), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2570[1] = 
{
	X509CertificateImplCollection_t1104947111::get_offset_of_list_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2571 = { sizeof (X509Chain_t194917408), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2571[1] = 
{
	X509Chain_t194917408::get_offset_of_impl_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2572 = { sizeof (X509ChainElementCollection_t3110968994), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2572[1] = 
{
	X509ChainElementCollection_t3110968994::get_offset_of__list_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2573 = { sizeof (X509ChainElementEnumerator_t3014253456), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2573[1] = 
{
	X509ChainElementEnumerator_t3014253456::get_offset_of_enumerator_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2574 = { sizeof (X509ChainImpl_t2192100862), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2575 = { sizeof (X509ChainImplMono_t3829837506), -1, sizeof(X509ChainImplMono_t3829837506_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2575[4] = 
{
	X509ChainImplMono_t3829837506::get_offset_of_location_0(),
	X509ChainImplMono_t3829837506::get_offset_of_elements_1(),
	X509ChainImplMono_t3829837506::get_offset_of_policy_2(),
	X509ChainImplMono_t3829837506_StaticFields::get_offset_of_Empty_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2576 = { sizeof (X509ChainPolicy_t2426922870), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2576[9] = 
{
	X509ChainPolicy_t2426922870::get_offset_of_apps_0(),
	X509ChainPolicy_t2426922870::get_offset_of_cert_1(),
	X509ChainPolicy_t2426922870::get_offset_of_store_2(),
	X509ChainPolicy_t2426922870::get_offset_of_store2_3(),
	X509ChainPolicy_t2426922870::get_offset_of_rflag_4(),
	X509ChainPolicy_t2426922870::get_offset_of_mode_5(),
	X509ChainPolicy_t2426922870::get_offset_of_timeout_6(),
	X509ChainPolicy_t2426922870::get_offset_of_vflags_7(),
	X509ChainPolicy_t2426922870::get_offset_of_vtime_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2577 = { sizeof (X509ChainStatus_t133602714)+ sizeof (RuntimeObject), sizeof(X509ChainStatus_t133602714_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable2577[2] = 
{
	X509ChainStatus_t133602714::get_offset_of_status_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	X509ChainStatus_t133602714::get_offset_of_info_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2578 = { sizeof (X509EnhancedKeyUsageExtension_t4189149453), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2578[2] = 
{
	X509EnhancedKeyUsageExtension_t4189149453::get_offset_of__enhKeyUsage_3(),
	X509EnhancedKeyUsageExtension_t4189149453::get_offset_of__status_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2579 = { sizeof (X509Extension_t3272255153), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2579[1] = 
{
	X509Extension_t3272255153::get_offset_of__critical_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2580 = { sizeof (X509ExtensionCollection_t1350454579), -1, sizeof(X509ExtensionCollection_t1350454579_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2580[2] = 
{
	X509ExtensionCollection_t1350454579_StaticFields::get_offset_of_Empty_0(),
	X509ExtensionCollection_t1350454579::get_offset_of__list_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2581 = { sizeof (X509ExtensionEnumerator_t2479560659), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2581[1] = 
{
	X509ExtensionEnumerator_t2479560659::get_offset_of_enumerator_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2582 = { sizeof (X509Helper2_t60991662), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2583 = { sizeof (MyNativeHelper_t3301851777), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2584 = { sizeof (X509KeyUsageExtension_t2042101591), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2584[5] = 
{
	0,
	0,
	0,
	X509KeyUsageExtension_t2042101591::get_offset_of__keyUsages_6(),
	X509KeyUsageExtension_t2042101591::get_offset_of__status_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2585 = { sizeof (X509SubjectKeyIdentifierExtension_t4258825542), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2585[5] = 
{
	0,
	0,
	X509SubjectKeyIdentifierExtension_t4258825542::get_offset_of__subjectKeyIdentifier_5(),
	X509SubjectKeyIdentifierExtension_t4258825542::get_offset_of__ski_6(),
	X509SubjectKeyIdentifierExtension_t4258825542::get_offset_of__status_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2586 = { sizeof (CompressionMode_t3714291783)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2586[3] = 
{
	CompressionMode_t3714291783::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2587 = { sizeof (GZipStream_t3417139389), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2587[1] = 
{
	GZipStream_t3417139389::get_offset_of__deflateStream_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2588 = { sizeof (DeflateStream_t4175168077), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2588[5] = 
{
	DeflateStream_t4175168077::get_offset_of_base_stream_4(),
	DeflateStream_t4175168077::get_offset_of_mode_5(),
	DeflateStream_t4175168077::get_offset_of_leaveOpen_6(),
	DeflateStream_t4175168077::get_offset_of_disposed_7(),
	DeflateStream_t4175168077::get_offset_of_native_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2589 = { sizeof (ReadMethod_t893206259), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2590 = { sizeof (WriteMethod_t2538911768), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2591 = { sizeof (DeflateStreamNative_t1405046456), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2591[6] = 
{
	DeflateStreamNative_t1405046456::get_offset_of_feeder_0(),
	DeflateStreamNative_t1405046456::get_offset_of_base_stream_1(),
	DeflateStreamNative_t1405046456::get_offset_of_z_stream_2(),
	DeflateStreamNative_t1405046456::get_offset_of_data_3(),
	DeflateStreamNative_t1405046456::get_offset_of_disposed_4(),
	DeflateStreamNative_t1405046456::get_offset_of_io_buffer_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2592 = { sizeof (UnmanagedReadOrWrite_t1975956110), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2593 = { sizeof (SafeDeflateStreamHandle_t2005819069), sizeof(void*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2594 = { sizeof (SecurityProtocolType_t2721465497)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2594[6] = 
{
	SecurityProtocolType_t2721465497::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2595 = { sizeof (Authorization_t542416582), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2595[3] = 
{
	Authorization_t542416582::get_offset_of_m_Message_0(),
	Authorization_t542416582::get_offset_of_m_Complete_1(),
	Authorization_t542416582::get_offset_of_ModuleAuthenticationType_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2596 = { sizeof (CredentialCache_t3101173682), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2596[3] = 
{
	CredentialCache_t3101173682::get_offset_of_cache_0(),
	CredentialCache_t3101173682::get_offset_of_cacheForHosts_1(),
	CredentialCache_t3101173682::get_offset_of_m_version_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2597 = { sizeof (CredentialEnumerator_t3795729284), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2597[4] = 
{
	CredentialEnumerator_t3795729284::get_offset_of_m_cache_0(),
	CredentialEnumerator_t3795729284::get_offset_of_m_array_1(),
	CredentialEnumerator_t3795729284::get_offset_of_m_index_2(),
	CredentialEnumerator_t3795729284::get_offset_of_m_version_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2598 = { sizeof (SystemNetworkCredential_t3685288932), -1, sizeof(SystemNetworkCredential_t3685288932_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2598[1] = 
{
	SystemNetworkCredential_t3685288932_StaticFields::get_offset_of_defaultCredential_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2599 = { sizeof (CredentialKey_t3703422271), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2599[5] = 
{
	CredentialKey_t3703422271::get_offset_of_UriPrefix_0(),
	CredentialKey_t3703422271::get_offset_of_UriPrefixLength_1(),
	CredentialKey_t3703422271::get_offset_of_AuthenticationType_2(),
	CredentialKey_t3703422271::get_offset_of_m_HashCode_3(),
	CredentialKey_t3703422271::get_offset_of_m_ComputedHashCode_4(),
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // Modified by PostBuild.cs
