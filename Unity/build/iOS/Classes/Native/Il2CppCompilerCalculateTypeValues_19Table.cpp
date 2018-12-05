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


// System.AsyncCallback
struct AsyncCallback_t3962456242;
// System.Byte[]
struct ByteU5BU5D_t4116647657;
// System.Char[]
struct CharU5BU5D_t3528271667;
// System.Collections.Generic.Dictionary`2<System.String,System.Boolean>
struct Dictionary_2_t4177511560;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t2736202052;
// System.Collections.Generic.Dictionary`2<System.String,System.Xml.Schema.SchemaNotation>
struct Dictionary_2_t1732933766;
// System.Collections.Generic.Dictionary`2<System.Xml.XmlQualifiedName,System.Xml.Schema.SchemaAttDef>
struct Dictionary_2_t2404538479;
// System.Collections.Generic.Dictionary`2<System.Xml.XmlQualifiedName,System.Xml.Schema.SchemaElementDecl>
struct Dictionary_2_t2242461324;
// System.Collections.Generic.Dictionary`2<System.Xml.XmlQualifiedName,System.Xml.Schema.SchemaEntity>
struct Dictionary_2_t1552439284;
// System.Collections.Generic.Dictionary`2<System.Xml.XmlQualifiedName,System.Xml.XmlQualifiedName>
struct Dictionary_2_t2735651632;
// System.Collections.Generic.List`1<System.String>
struct List_1_t3319525431;
// System.Collections.Generic.List`1<System.Xml.IDtdDefaultAttributeInfo>
struct List_1_t4247439429;
// System.Collections.Generic.List`1<System.Xml.Schema.RangePositionInfo>
struct List_1_t2062043678;
// System.Collections.Hashtable
struct Hashtable_t1853889766;
// System.Collections.IDictionary
struct IDictionary_t1363984059;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t1693217257;
// System.Collections.Stack
struct Stack_t2329662280;
// System.DelegateData
struct DelegateData_t1677132599;
// System.Delegate[]
struct DelegateU5BU5D_t1703627840;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t1169129676;
// System.IAsyncResult
struct IAsyncResult_t767004451;
// System.Int32[]
struct Int32U5BU5D_t385246372;
// System.IntPtr[]
struct IntPtrU5BU5D_t4013366056;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_t2481557153;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t1281789340;
// System.Text.RegularExpressions.Regex
struct Regex_t3657309853;
// System.Text.StringBuilder
struct StringBuilder_t;
// System.Threading.ReaderWriterLock
struct ReaderWriterLock_t367846299;
// System.Type
struct Type_t;
// System.UInt32[]
struct UInt32U5BU5D_t2770800703;
// System.Uri
struct Uri_t100236324;
// System.Void
struct Void_t1185182177;
// System.Xml.HWStack
struct HWStack_t658497212;
// System.Xml.IValidationEventHandling
struct IValidationEventHandling_t3880195220;
// System.Xml.PositionInfo
struct PositionInfo_t2441432568;
// System.Xml.Schema.BitSet
struct BitSet_t1154229585;
// System.Xml.Schema.BitSet[]
struct BitSetU5BU5D_t1465593420;
// System.Xml.Schema.CompiledIdentityConstraint[]
struct CompiledIdentityConstraintU5BU5D_t2573057752;
// System.Xml.Schema.ConstraintStruct[]
struct ConstraintStructU5BU5D_t3023613795;
// System.Xml.Schema.ContentValidator
struct ContentValidator_t2085579204;
// System.Xml.Schema.DatatypeImplementation
struct DatatypeImplementation_t3722098011;
// System.Xml.Schema.DatatypeImplementation/SchemaDatatypeMap[]
struct SchemaDatatypeMapU5BU5D_t4071411298;
// System.Xml.Schema.DatatypeImplementation[]
struct DatatypeImplementationU5BU5D_t1069202138;
// System.Xml.Schema.DtdValidator/NamespaceManager
struct NamespaceManager_t2339540891;
// System.Xml.Schema.FacetsChecker
struct FacetsChecker_t3316496195;
// System.Xml.Schema.FacetsChecker/FacetsCompiler/Map[]
struct MapU5BU5D_t475731498;
// System.Xml.Schema.IdRefNode
struct IdRefNode_t3774897917;
// System.Xml.Schema.NamespaceList
struct NamespaceList_t60893868;
// System.Xml.Schema.Parser
struct Parser_t3220530449;
// System.Xml.Schema.ParticleContentValidator
struct ParticleContentValidator_t2931748829;
// System.Xml.Schema.RestrictionFacets
struct RestrictionFacets_t1638599442;
// System.Xml.Schema.SchemaAttDef
struct SchemaAttDef_t2429541159;
// System.Xml.Schema.SchemaBuilder
struct SchemaBuilder_t3521006541;
// System.Xml.Schema.SchemaElementDecl
struct SchemaElementDecl_t2267464004;
// System.Xml.Schema.SchemaInfo
struct SchemaInfo_t3347508623;
// System.Xml.Schema.SchemaNames
struct SchemaNames_t661607975;
// System.Xml.Schema.ValidationEventArgs
struct ValidationEventArgs_t2784773869;
// System.Xml.Schema.ValidationEventHandler
struct ValidationEventHandler_t791314227;
// System.Xml.Schema.ValidationState
struct ValidationState_t603008718;
// System.Xml.Schema.XdrBuilder
struct XdrBuilder_t781626846;
// System.Xml.Schema.XdrBuilder/AttributeContent
struct AttributeContent_t2997225126;
// System.Xml.Schema.XdrBuilder/DeclBaseInfo
struct DeclBaseInfo_t2186480169;
// System.Xml.Schema.XdrBuilder/ElementContent
struct ElementContent_t2671703075;
// System.Xml.Schema.XdrBuilder/GroupContent
struct GroupContent_t833025371;
// System.Xml.Schema.XdrBuilder/XdrAttributeEntry[]
struct XdrAttributeEntryU5BU5D_t4099313209;
// System.Xml.Schema.XdrBuilder/XdrBeginChildFunction
struct XdrBeginChildFunction_t3571964013;
// System.Xml.Schema.XdrBuilder/XdrBuildFunction
struct XdrBuildFunction_t4965607;
// System.Xml.Schema.XdrBuilder/XdrEndChildFunction
struct XdrEndChildFunction_t2609844494;
// System.Xml.Schema.XdrBuilder/XdrEntry
struct XdrEntry_t1852396641;
// System.Xml.Schema.XdrBuilder/XdrEntry[]
struct XdrEntryU5BU5D_t507154684;
// System.Xml.Schema.XdrBuilder/XdrInitFunction
struct XdrInitFunction_t326013928;
// System.Xml.Schema.XmlAtomicValue/NamespacePrefixForQName
struct NamespacePrefixForQName_t198417103;
// System.Xml.Schema.XmlSchema
struct XmlSchema_t3742557897;
// System.Xml.Schema.XmlSchemaAnnotation
struct XmlSchemaAnnotation_t2553753397;
// System.Xml.Schema.XmlSchemaAnyAttribute
struct XmlSchemaAnyAttribute_t963227996;
// System.Xml.Schema.XmlSchemaAttribute
struct XmlSchemaAttribute_t2797257020;
// System.Xml.Schema.XmlSchemaCollection
struct XmlSchemaCollection_t3610399789;
// System.Xml.Schema.XmlSchemaCompilationSettings
struct XmlSchemaCompilationSettings_t2218765537;
// System.Xml.Schema.XmlSchemaContent
struct XmlSchemaContent_t1040349258;
// System.Xml.Schema.XmlSchemaContentModel
struct XmlSchemaContentModel_t602185179;
// System.Xml.Schema.XmlSchemaDatatype
struct XmlSchemaDatatype_t322714710;
// System.Xml.Schema.XmlSchemaElement
struct XmlSchemaElement_t427880856;
// System.Xml.Schema.XmlSchemaException
struct XmlSchemaException_t3511258692;
// System.Xml.Schema.XmlSchemaObject
struct XmlSchemaObject_t1315720168;
// System.Xml.Schema.XmlSchemaObjectCollection
struct XmlSchemaObjectCollection_t1064819932;
// System.Xml.Schema.XmlSchemaObjectTable
struct XmlSchemaObjectTable_t2546974348;
// System.Xml.Schema.XmlSchemaParticle
struct XmlSchemaParticle_t3828501457;
// System.Xml.Schema.XmlSchemaPatternFacet
struct XmlSchemaPatternFacet_t3316004401;
// System.Xml.Schema.XmlSchemaSimpleType
struct XmlSchemaSimpleType_t2678868104;
// System.Xml.Schema.XmlSchemaSimpleType[]
struct XmlSchemaSimpleTypeU5BU5D_t1394089049;
// System.Xml.Schema.XmlSchemaType
struct XmlSchemaType_t2033747345;
// System.Xml.Schema.XmlValueConverter
struct XmlValueConverter_t585560190;
// System.Xml.Serialization.XmlSerializerNamespaces
struct XmlSerializerNamespaces_t2702737953;
// System.Xml.XmlAttribute[]
struct XmlAttributeU5BU5D_t1490365106;
// System.Xml.XmlDocument
struct XmlDocument_t2837193595;
// System.Xml.XmlNameTable
struct XmlNameTable_t71772148;
// System.Xml.XmlNamespaceManager
struct XmlNamespaceManager_t418790500;
// System.Xml.XmlNamespaceManager/NamespaceDeclaration[]
struct NamespaceDeclarationU5BU5D_t3609802718;
// System.Xml.XmlNode
struct XmlNode_t3767805227;
// System.Xml.XmlNode[]
struct XmlNodeU5BU5D_t3728671178;
// System.Xml.XmlQualifiedName
struct XmlQualifiedName_t2760654312;
// System.Xml.XmlQualifiedName[]
struct XmlQualifiedNameU5BU5D_t1471530361;
// System.Xml.XmlReader
struct XmlReader_t3121518892;
// System.Xml.XmlResolver
struct XmlResolver_t626023767;
// System.Xml.XmlValidatingReaderImpl
struct XmlValidatingReaderImpl_t1817762384;

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
#ifndef BASEPROCESSOR_T2302394543_H
#define BASEPROCESSOR_T2302394543_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Schema.BaseProcessor
struct  BaseProcessor_t2302394543  : public RuntimeObject
{
public:
	// System.Xml.XmlNameTable System.Xml.Schema.BaseProcessor::nameTable
	XmlNameTable_t71772148 * ___nameTable_0;
	// System.Xml.Schema.SchemaNames System.Xml.Schema.BaseProcessor::schemaNames
	SchemaNames_t661607975 * ___schemaNames_1;
	// System.Xml.Schema.ValidationEventHandler System.Xml.Schema.BaseProcessor::eventHandler
	ValidationEventHandler_t791314227 * ___eventHandler_2;
	// System.Xml.Schema.XmlSchemaCompilationSettings System.Xml.Schema.BaseProcessor::compilationSettings
	XmlSchemaCompilationSettings_t2218765537 * ___compilationSettings_3;
	// System.Int32 System.Xml.Schema.BaseProcessor::errorCount
	int32_t ___errorCount_4;
	// System.String System.Xml.Schema.BaseProcessor::NsXml
	String_t* ___NsXml_5;

public:
	inline static int32_t get_offset_of_nameTable_0() { return static_cast<int32_t>(offsetof(BaseProcessor_t2302394543, ___nameTable_0)); }
	inline XmlNameTable_t71772148 * get_nameTable_0() const { return ___nameTable_0; }
	inline XmlNameTable_t71772148 ** get_address_of_nameTable_0() { return &___nameTable_0; }
	inline void set_nameTable_0(XmlNameTable_t71772148 * value)
	{
		___nameTable_0 = value;
		Il2CppCodeGenWriteBarrier((&___nameTable_0), value);
	}

	inline static int32_t get_offset_of_schemaNames_1() { return static_cast<int32_t>(offsetof(BaseProcessor_t2302394543, ___schemaNames_1)); }
	inline SchemaNames_t661607975 * get_schemaNames_1() const { return ___schemaNames_1; }
	inline SchemaNames_t661607975 ** get_address_of_schemaNames_1() { return &___schemaNames_1; }
	inline void set_schemaNames_1(SchemaNames_t661607975 * value)
	{
		___schemaNames_1 = value;
		Il2CppCodeGenWriteBarrier((&___schemaNames_1), value);
	}

	inline static int32_t get_offset_of_eventHandler_2() { return static_cast<int32_t>(offsetof(BaseProcessor_t2302394543, ___eventHandler_2)); }
	inline ValidationEventHandler_t791314227 * get_eventHandler_2() const { return ___eventHandler_2; }
	inline ValidationEventHandler_t791314227 ** get_address_of_eventHandler_2() { return &___eventHandler_2; }
	inline void set_eventHandler_2(ValidationEventHandler_t791314227 * value)
	{
		___eventHandler_2 = value;
		Il2CppCodeGenWriteBarrier((&___eventHandler_2), value);
	}

	inline static int32_t get_offset_of_compilationSettings_3() { return static_cast<int32_t>(offsetof(BaseProcessor_t2302394543, ___compilationSettings_3)); }
	inline XmlSchemaCompilationSettings_t2218765537 * get_compilationSettings_3() const { return ___compilationSettings_3; }
	inline XmlSchemaCompilationSettings_t2218765537 ** get_address_of_compilationSettings_3() { return &___compilationSettings_3; }
	inline void set_compilationSettings_3(XmlSchemaCompilationSettings_t2218765537 * value)
	{
		___compilationSettings_3 = value;
		Il2CppCodeGenWriteBarrier((&___compilationSettings_3), value);
	}

	inline static int32_t get_offset_of_errorCount_4() { return static_cast<int32_t>(offsetof(BaseProcessor_t2302394543, ___errorCount_4)); }
	inline int32_t get_errorCount_4() const { return ___errorCount_4; }
	inline int32_t* get_address_of_errorCount_4() { return &___errorCount_4; }
	inline void set_errorCount_4(int32_t value)
	{
		___errorCount_4 = value;
	}

	inline static int32_t get_offset_of_NsXml_5() { return static_cast<int32_t>(offsetof(BaseProcessor_t2302394543, ___NsXml_5)); }
	inline String_t* get_NsXml_5() const { return ___NsXml_5; }
	inline String_t** get_address_of_NsXml_5() { return &___NsXml_5; }
	inline void set_NsXml_5(String_t* value)
	{
		___NsXml_5 = value;
		Il2CppCodeGenWriteBarrier((&___NsXml_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BASEPROCESSOR_T2302394543_H
#ifndef BASEVALIDATOR_T868759770_H
#define BASEVALIDATOR_T868759770_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Schema.BaseValidator
struct  BaseValidator_t868759770  : public RuntimeObject
{
public:
	// System.Xml.Schema.XmlSchemaCollection System.Xml.Schema.BaseValidator::schemaCollection
	XmlSchemaCollection_t3610399789 * ___schemaCollection_0;
	// System.Xml.IValidationEventHandling System.Xml.Schema.BaseValidator::eventHandling
	RuntimeObject* ___eventHandling_1;
	// System.Xml.XmlNameTable System.Xml.Schema.BaseValidator::nameTable
	XmlNameTable_t71772148 * ___nameTable_2;
	// System.Xml.Schema.SchemaNames System.Xml.Schema.BaseValidator::schemaNames
	SchemaNames_t661607975 * ___schemaNames_3;
	// System.Xml.PositionInfo System.Xml.Schema.BaseValidator::positionInfo
	PositionInfo_t2441432568 * ___positionInfo_4;
	// System.Xml.XmlResolver System.Xml.Schema.BaseValidator::xmlResolver
	XmlResolver_t626023767 * ___xmlResolver_5;
	// System.Uri System.Xml.Schema.BaseValidator::baseUri
	Uri_t100236324 * ___baseUri_6;
	// System.Xml.Schema.SchemaInfo System.Xml.Schema.BaseValidator::schemaInfo
	SchemaInfo_t3347508623 * ___schemaInfo_7;
	// System.Xml.XmlValidatingReaderImpl System.Xml.Schema.BaseValidator::reader
	XmlValidatingReaderImpl_t1817762384 * ___reader_8;
	// System.Xml.XmlQualifiedName System.Xml.Schema.BaseValidator::elementName
	XmlQualifiedName_t2760654312 * ___elementName_9;
	// System.Xml.Schema.ValidationState System.Xml.Schema.BaseValidator::context
	ValidationState_t603008718 * ___context_10;
	// System.Text.StringBuilder System.Xml.Schema.BaseValidator::textValue
	StringBuilder_t * ___textValue_11;
	// System.String System.Xml.Schema.BaseValidator::textString
	String_t* ___textString_12;
	// System.Boolean System.Xml.Schema.BaseValidator::hasSibling
	bool ___hasSibling_13;
	// System.Boolean System.Xml.Schema.BaseValidator::checkDatatype
	bool ___checkDatatype_14;

public:
	inline static int32_t get_offset_of_schemaCollection_0() { return static_cast<int32_t>(offsetof(BaseValidator_t868759770, ___schemaCollection_0)); }
	inline XmlSchemaCollection_t3610399789 * get_schemaCollection_0() const { return ___schemaCollection_0; }
	inline XmlSchemaCollection_t3610399789 ** get_address_of_schemaCollection_0() { return &___schemaCollection_0; }
	inline void set_schemaCollection_0(XmlSchemaCollection_t3610399789 * value)
	{
		___schemaCollection_0 = value;
		Il2CppCodeGenWriteBarrier((&___schemaCollection_0), value);
	}

	inline static int32_t get_offset_of_eventHandling_1() { return static_cast<int32_t>(offsetof(BaseValidator_t868759770, ___eventHandling_1)); }
	inline RuntimeObject* get_eventHandling_1() const { return ___eventHandling_1; }
	inline RuntimeObject** get_address_of_eventHandling_1() { return &___eventHandling_1; }
	inline void set_eventHandling_1(RuntimeObject* value)
	{
		___eventHandling_1 = value;
		Il2CppCodeGenWriteBarrier((&___eventHandling_1), value);
	}

	inline static int32_t get_offset_of_nameTable_2() { return static_cast<int32_t>(offsetof(BaseValidator_t868759770, ___nameTable_2)); }
	inline XmlNameTable_t71772148 * get_nameTable_2() const { return ___nameTable_2; }
	inline XmlNameTable_t71772148 ** get_address_of_nameTable_2() { return &___nameTable_2; }
	inline void set_nameTable_2(XmlNameTable_t71772148 * value)
	{
		___nameTable_2 = value;
		Il2CppCodeGenWriteBarrier((&___nameTable_2), value);
	}

	inline static int32_t get_offset_of_schemaNames_3() { return static_cast<int32_t>(offsetof(BaseValidator_t868759770, ___schemaNames_3)); }
	inline SchemaNames_t661607975 * get_schemaNames_3() const { return ___schemaNames_3; }
	inline SchemaNames_t661607975 ** get_address_of_schemaNames_3() { return &___schemaNames_3; }
	inline void set_schemaNames_3(SchemaNames_t661607975 * value)
	{
		___schemaNames_3 = value;
		Il2CppCodeGenWriteBarrier((&___schemaNames_3), value);
	}

	inline static int32_t get_offset_of_positionInfo_4() { return static_cast<int32_t>(offsetof(BaseValidator_t868759770, ___positionInfo_4)); }
	inline PositionInfo_t2441432568 * get_positionInfo_4() const { return ___positionInfo_4; }
	inline PositionInfo_t2441432568 ** get_address_of_positionInfo_4() { return &___positionInfo_4; }
	inline void set_positionInfo_4(PositionInfo_t2441432568 * value)
	{
		___positionInfo_4 = value;
		Il2CppCodeGenWriteBarrier((&___positionInfo_4), value);
	}

	inline static int32_t get_offset_of_xmlResolver_5() { return static_cast<int32_t>(offsetof(BaseValidator_t868759770, ___xmlResolver_5)); }
	inline XmlResolver_t626023767 * get_xmlResolver_5() const { return ___xmlResolver_5; }
	inline XmlResolver_t626023767 ** get_address_of_xmlResolver_5() { return &___xmlResolver_5; }
	inline void set_xmlResolver_5(XmlResolver_t626023767 * value)
	{
		___xmlResolver_5 = value;
		Il2CppCodeGenWriteBarrier((&___xmlResolver_5), value);
	}

	inline static int32_t get_offset_of_baseUri_6() { return static_cast<int32_t>(offsetof(BaseValidator_t868759770, ___baseUri_6)); }
	inline Uri_t100236324 * get_baseUri_6() const { return ___baseUri_6; }
	inline Uri_t100236324 ** get_address_of_baseUri_6() { return &___baseUri_6; }
	inline void set_baseUri_6(Uri_t100236324 * value)
	{
		___baseUri_6 = value;
		Il2CppCodeGenWriteBarrier((&___baseUri_6), value);
	}

	inline static int32_t get_offset_of_schemaInfo_7() { return static_cast<int32_t>(offsetof(BaseValidator_t868759770, ___schemaInfo_7)); }
	inline SchemaInfo_t3347508623 * get_schemaInfo_7() const { return ___schemaInfo_7; }
	inline SchemaInfo_t3347508623 ** get_address_of_schemaInfo_7() { return &___schemaInfo_7; }
	inline void set_schemaInfo_7(SchemaInfo_t3347508623 * value)
	{
		___schemaInfo_7 = value;
		Il2CppCodeGenWriteBarrier((&___schemaInfo_7), value);
	}

	inline static int32_t get_offset_of_reader_8() { return static_cast<int32_t>(offsetof(BaseValidator_t868759770, ___reader_8)); }
	inline XmlValidatingReaderImpl_t1817762384 * get_reader_8() const { return ___reader_8; }
	inline XmlValidatingReaderImpl_t1817762384 ** get_address_of_reader_8() { return &___reader_8; }
	inline void set_reader_8(XmlValidatingReaderImpl_t1817762384 * value)
	{
		___reader_8 = value;
		Il2CppCodeGenWriteBarrier((&___reader_8), value);
	}

	inline static int32_t get_offset_of_elementName_9() { return static_cast<int32_t>(offsetof(BaseValidator_t868759770, ___elementName_9)); }
	inline XmlQualifiedName_t2760654312 * get_elementName_9() const { return ___elementName_9; }
	inline XmlQualifiedName_t2760654312 ** get_address_of_elementName_9() { return &___elementName_9; }
	inline void set_elementName_9(XmlQualifiedName_t2760654312 * value)
	{
		___elementName_9 = value;
		Il2CppCodeGenWriteBarrier((&___elementName_9), value);
	}

	inline static int32_t get_offset_of_context_10() { return static_cast<int32_t>(offsetof(BaseValidator_t868759770, ___context_10)); }
	inline ValidationState_t603008718 * get_context_10() const { return ___context_10; }
	inline ValidationState_t603008718 ** get_address_of_context_10() { return &___context_10; }
	inline void set_context_10(ValidationState_t603008718 * value)
	{
		___context_10 = value;
		Il2CppCodeGenWriteBarrier((&___context_10), value);
	}

	inline static int32_t get_offset_of_textValue_11() { return static_cast<int32_t>(offsetof(BaseValidator_t868759770, ___textValue_11)); }
	inline StringBuilder_t * get_textValue_11() const { return ___textValue_11; }
	inline StringBuilder_t ** get_address_of_textValue_11() { return &___textValue_11; }
	inline void set_textValue_11(StringBuilder_t * value)
	{
		___textValue_11 = value;
		Il2CppCodeGenWriteBarrier((&___textValue_11), value);
	}

	inline static int32_t get_offset_of_textString_12() { return static_cast<int32_t>(offsetof(BaseValidator_t868759770, ___textString_12)); }
	inline String_t* get_textString_12() const { return ___textString_12; }
	inline String_t** get_address_of_textString_12() { return &___textString_12; }
	inline void set_textString_12(String_t* value)
	{
		___textString_12 = value;
		Il2CppCodeGenWriteBarrier((&___textString_12), value);
	}

	inline static int32_t get_offset_of_hasSibling_13() { return static_cast<int32_t>(offsetof(BaseValidator_t868759770, ___hasSibling_13)); }
	inline bool get_hasSibling_13() const { return ___hasSibling_13; }
	inline bool* get_address_of_hasSibling_13() { return &___hasSibling_13; }
	inline void set_hasSibling_13(bool value)
	{
		___hasSibling_13 = value;
	}

	inline static int32_t get_offset_of_checkDatatype_14() { return static_cast<int32_t>(offsetof(BaseValidator_t868759770, ___checkDatatype_14)); }
	inline bool get_checkDatatype_14() const { return ___checkDatatype_14; }
	inline bool* get_address_of_checkDatatype_14() { return &___checkDatatype_14; }
	inline void set_checkDatatype_14(bool value)
	{
		___checkDatatype_14 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BASEVALIDATOR_T868759770_H
#ifndef FACETSCHECKER_T3316496195_H
#define FACETSCHECKER_T3316496195_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Schema.FacetsChecker
struct  FacetsChecker_t3316496195  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FACETSCHECKER_T3316496195_H
#ifndef SCHEMABUILDER_T3521006541_H
#define SCHEMABUILDER_T3521006541_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Schema.SchemaBuilder
struct  SchemaBuilder_t3521006541  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SCHEMABUILDER_T3521006541_H
#ifndef SCHEMAENTITY_T1577441964_H
#define SCHEMAENTITY_T1577441964_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Schema.SchemaEntity
struct  SchemaEntity_t1577441964  : public RuntimeObject
{
public:
	// System.Xml.XmlQualifiedName System.Xml.Schema.SchemaEntity::qname
	XmlQualifiedName_t2760654312 * ___qname_0;
	// System.String System.Xml.Schema.SchemaEntity::url
	String_t* ___url_1;
	// System.String System.Xml.Schema.SchemaEntity::pubid
	String_t* ___pubid_2;
	// System.String System.Xml.Schema.SchemaEntity::text
	String_t* ___text_3;
	// System.Xml.XmlQualifiedName System.Xml.Schema.SchemaEntity::ndata
	XmlQualifiedName_t2760654312 * ___ndata_4;
	// System.Int32 System.Xml.Schema.SchemaEntity::lineNumber
	int32_t ___lineNumber_5;
	// System.Int32 System.Xml.Schema.SchemaEntity::linePosition
	int32_t ___linePosition_6;
	// System.Boolean System.Xml.Schema.SchemaEntity::isParameter
	bool ___isParameter_7;
	// System.Boolean System.Xml.Schema.SchemaEntity::isExternal
	bool ___isExternal_8;
	// System.Boolean System.Xml.Schema.SchemaEntity::parsingInProgress
	bool ___parsingInProgress_9;
	// System.Boolean System.Xml.Schema.SchemaEntity::isDeclaredInExternal
	bool ___isDeclaredInExternal_10;
	// System.String System.Xml.Schema.SchemaEntity::baseURI
	String_t* ___baseURI_11;
	// System.String System.Xml.Schema.SchemaEntity::declaredURI
	String_t* ___declaredURI_12;

public:
	inline static int32_t get_offset_of_qname_0() { return static_cast<int32_t>(offsetof(SchemaEntity_t1577441964, ___qname_0)); }
	inline XmlQualifiedName_t2760654312 * get_qname_0() const { return ___qname_0; }
	inline XmlQualifiedName_t2760654312 ** get_address_of_qname_0() { return &___qname_0; }
	inline void set_qname_0(XmlQualifiedName_t2760654312 * value)
	{
		___qname_0 = value;
		Il2CppCodeGenWriteBarrier((&___qname_0), value);
	}

	inline static int32_t get_offset_of_url_1() { return static_cast<int32_t>(offsetof(SchemaEntity_t1577441964, ___url_1)); }
	inline String_t* get_url_1() const { return ___url_1; }
	inline String_t** get_address_of_url_1() { return &___url_1; }
	inline void set_url_1(String_t* value)
	{
		___url_1 = value;
		Il2CppCodeGenWriteBarrier((&___url_1), value);
	}

	inline static int32_t get_offset_of_pubid_2() { return static_cast<int32_t>(offsetof(SchemaEntity_t1577441964, ___pubid_2)); }
	inline String_t* get_pubid_2() const { return ___pubid_2; }
	inline String_t** get_address_of_pubid_2() { return &___pubid_2; }
	inline void set_pubid_2(String_t* value)
	{
		___pubid_2 = value;
		Il2CppCodeGenWriteBarrier((&___pubid_2), value);
	}

	inline static int32_t get_offset_of_text_3() { return static_cast<int32_t>(offsetof(SchemaEntity_t1577441964, ___text_3)); }
	inline String_t* get_text_3() const { return ___text_3; }
	inline String_t** get_address_of_text_3() { return &___text_3; }
	inline void set_text_3(String_t* value)
	{
		___text_3 = value;
		Il2CppCodeGenWriteBarrier((&___text_3), value);
	}

	inline static int32_t get_offset_of_ndata_4() { return static_cast<int32_t>(offsetof(SchemaEntity_t1577441964, ___ndata_4)); }
	inline XmlQualifiedName_t2760654312 * get_ndata_4() const { return ___ndata_4; }
	inline XmlQualifiedName_t2760654312 ** get_address_of_ndata_4() { return &___ndata_4; }
	inline void set_ndata_4(XmlQualifiedName_t2760654312 * value)
	{
		___ndata_4 = value;
		Il2CppCodeGenWriteBarrier((&___ndata_4), value);
	}

	inline static int32_t get_offset_of_lineNumber_5() { return static_cast<int32_t>(offsetof(SchemaEntity_t1577441964, ___lineNumber_5)); }
	inline int32_t get_lineNumber_5() const { return ___lineNumber_5; }
	inline int32_t* get_address_of_lineNumber_5() { return &___lineNumber_5; }
	inline void set_lineNumber_5(int32_t value)
	{
		___lineNumber_5 = value;
	}

	inline static int32_t get_offset_of_linePosition_6() { return static_cast<int32_t>(offsetof(SchemaEntity_t1577441964, ___linePosition_6)); }
	inline int32_t get_linePosition_6() const { return ___linePosition_6; }
	inline int32_t* get_address_of_linePosition_6() { return &___linePosition_6; }
	inline void set_linePosition_6(int32_t value)
	{
		___linePosition_6 = value;
	}

	inline static int32_t get_offset_of_isParameter_7() { return static_cast<int32_t>(offsetof(SchemaEntity_t1577441964, ___isParameter_7)); }
	inline bool get_isParameter_7() const { return ___isParameter_7; }
	inline bool* get_address_of_isParameter_7() { return &___isParameter_7; }
	inline void set_isParameter_7(bool value)
	{
		___isParameter_7 = value;
	}

	inline static int32_t get_offset_of_isExternal_8() { return static_cast<int32_t>(offsetof(SchemaEntity_t1577441964, ___isExternal_8)); }
	inline bool get_isExternal_8() const { return ___isExternal_8; }
	inline bool* get_address_of_isExternal_8() { return &___isExternal_8; }
	inline void set_isExternal_8(bool value)
	{
		___isExternal_8 = value;
	}

	inline static int32_t get_offset_of_parsingInProgress_9() { return static_cast<int32_t>(offsetof(SchemaEntity_t1577441964, ___parsingInProgress_9)); }
	inline bool get_parsingInProgress_9() const { return ___parsingInProgress_9; }
	inline bool* get_address_of_parsingInProgress_9() { return &___parsingInProgress_9; }
	inline void set_parsingInProgress_9(bool value)
	{
		___parsingInProgress_9 = value;
	}

	inline static int32_t get_offset_of_isDeclaredInExternal_10() { return static_cast<int32_t>(offsetof(SchemaEntity_t1577441964, ___isDeclaredInExternal_10)); }
	inline bool get_isDeclaredInExternal_10() const { return ___isDeclaredInExternal_10; }
	inline bool* get_address_of_isDeclaredInExternal_10() { return &___isDeclaredInExternal_10; }
	inline void set_isDeclaredInExternal_10(bool value)
	{
		___isDeclaredInExternal_10 = value;
	}

	inline static int32_t get_offset_of_baseURI_11() { return static_cast<int32_t>(offsetof(SchemaEntity_t1577441964, ___baseURI_11)); }
	inline String_t* get_baseURI_11() const { return ___baseURI_11; }
	inline String_t** get_address_of_baseURI_11() { return &___baseURI_11; }
	inline void set_baseURI_11(String_t* value)
	{
		___baseURI_11 = value;
		Il2CppCodeGenWriteBarrier((&___baseURI_11), value);
	}

	inline static int32_t get_offset_of_declaredURI_12() { return static_cast<int32_t>(offsetof(SchemaEntity_t1577441964, ___declaredURI_12)); }
	inline String_t* get_declaredURI_12() const { return ___declaredURI_12; }
	inline String_t** get_address_of_declaredURI_12() { return &___declaredURI_12; }
	inline void set_declaredURI_12(String_t* value)
	{
		___declaredURI_12 = value;
		Il2CppCodeGenWriteBarrier((&___declaredURI_12), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SCHEMAENTITY_T1577441964_H
#ifndef SCHEMANAMES_T661607975_H
#define SCHEMANAMES_T661607975_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Schema.SchemaNames
struct  SchemaNames_t661607975  : public RuntimeObject
{
public:
	// System.Xml.XmlNameTable System.Xml.Schema.SchemaNames::nameTable
	XmlNameTable_t71772148 * ___nameTable_0;
	// System.String System.Xml.Schema.SchemaNames::NsDataType
	String_t* ___NsDataType_1;
	// System.String System.Xml.Schema.SchemaNames::NsDataTypeAlias
	String_t* ___NsDataTypeAlias_2;
	// System.String System.Xml.Schema.SchemaNames::NsDataTypeOld
	String_t* ___NsDataTypeOld_3;
	// System.String System.Xml.Schema.SchemaNames::NsXml
	String_t* ___NsXml_4;
	// System.String System.Xml.Schema.SchemaNames::NsXmlNs
	String_t* ___NsXmlNs_5;
	// System.String System.Xml.Schema.SchemaNames::NsXdr
	String_t* ___NsXdr_6;
	// System.String System.Xml.Schema.SchemaNames::NsXdrAlias
	String_t* ___NsXdrAlias_7;
	// System.String System.Xml.Schema.SchemaNames::NsXs
	String_t* ___NsXs_8;
	// System.String System.Xml.Schema.SchemaNames::NsXsi
	String_t* ___NsXsi_9;
	// System.String System.Xml.Schema.SchemaNames::XsiType
	String_t* ___XsiType_10;
	// System.String System.Xml.Schema.SchemaNames::XsiNil
	String_t* ___XsiNil_11;
	// System.String System.Xml.Schema.SchemaNames::XsiSchemaLocation
	String_t* ___XsiSchemaLocation_12;
	// System.String System.Xml.Schema.SchemaNames::XsiNoNamespaceSchemaLocation
	String_t* ___XsiNoNamespaceSchemaLocation_13;
	// System.String System.Xml.Schema.SchemaNames::XsdSchema
	String_t* ___XsdSchema_14;
	// System.String System.Xml.Schema.SchemaNames::XdrSchema
	String_t* ___XdrSchema_15;
	// System.Xml.XmlQualifiedName System.Xml.Schema.SchemaNames::QnPCData
	XmlQualifiedName_t2760654312 * ___QnPCData_16;
	// System.Xml.XmlQualifiedName System.Xml.Schema.SchemaNames::QnXml
	XmlQualifiedName_t2760654312 * ___QnXml_17;
	// System.Xml.XmlQualifiedName System.Xml.Schema.SchemaNames::QnXmlNs
	XmlQualifiedName_t2760654312 * ___QnXmlNs_18;
	// System.Xml.XmlQualifiedName System.Xml.Schema.SchemaNames::QnDtDt
	XmlQualifiedName_t2760654312 * ___QnDtDt_19;
	// System.Xml.XmlQualifiedName System.Xml.Schema.SchemaNames::QnXmlLang
	XmlQualifiedName_t2760654312 * ___QnXmlLang_20;
	// System.Xml.XmlQualifiedName System.Xml.Schema.SchemaNames::QnName
	XmlQualifiedName_t2760654312 * ___QnName_21;
	// System.Xml.XmlQualifiedName System.Xml.Schema.SchemaNames::QnType
	XmlQualifiedName_t2760654312 * ___QnType_22;
	// System.Xml.XmlQualifiedName System.Xml.Schema.SchemaNames::QnMaxOccurs
	XmlQualifiedName_t2760654312 * ___QnMaxOccurs_23;
	// System.Xml.XmlQualifiedName System.Xml.Schema.SchemaNames::QnMinOccurs
	XmlQualifiedName_t2760654312 * ___QnMinOccurs_24;
	// System.Xml.XmlQualifiedName System.Xml.Schema.SchemaNames::QnInfinite
	XmlQualifiedName_t2760654312 * ___QnInfinite_25;
	// System.Xml.XmlQualifiedName System.Xml.Schema.SchemaNames::QnModel
	XmlQualifiedName_t2760654312 * ___QnModel_26;
	// System.Xml.XmlQualifiedName System.Xml.Schema.SchemaNames::QnOpen
	XmlQualifiedName_t2760654312 * ___QnOpen_27;
	// System.Xml.XmlQualifiedName System.Xml.Schema.SchemaNames::QnClosed
	XmlQualifiedName_t2760654312 * ___QnClosed_28;
	// System.Xml.XmlQualifiedName System.Xml.Schema.SchemaNames::QnContent
	XmlQualifiedName_t2760654312 * ___QnContent_29;
	// System.Xml.XmlQualifiedName System.Xml.Schema.SchemaNames::QnMixed
	XmlQualifiedName_t2760654312 * ___QnMixed_30;
	// System.Xml.XmlQualifiedName System.Xml.Schema.SchemaNames::QnEmpty
	XmlQualifiedName_t2760654312 * ___QnEmpty_31;
	// System.Xml.XmlQualifiedName System.Xml.Schema.SchemaNames::QnEltOnly
	XmlQualifiedName_t2760654312 * ___QnEltOnly_32;
	// System.Xml.XmlQualifiedName System.Xml.Schema.SchemaNames::QnTextOnly
	XmlQualifiedName_t2760654312 * ___QnTextOnly_33;
	// System.Xml.XmlQualifiedName System.Xml.Schema.SchemaNames::QnOrder
	XmlQualifiedName_t2760654312 * ___QnOrder_34;
	// System.Xml.XmlQualifiedName System.Xml.Schema.SchemaNames::QnSeq
	XmlQualifiedName_t2760654312 * ___QnSeq_35;
	// System.Xml.XmlQualifiedName System.Xml.Schema.SchemaNames::QnOne
	XmlQualifiedName_t2760654312 * ___QnOne_36;
	// System.Xml.XmlQualifiedName System.Xml.Schema.SchemaNames::QnMany
	XmlQualifiedName_t2760654312 * ___QnMany_37;
	// System.Xml.XmlQualifiedName System.Xml.Schema.SchemaNames::QnRequired
	XmlQualifiedName_t2760654312 * ___QnRequired_38;
	// System.Xml.XmlQualifiedName System.Xml.Schema.SchemaNames::QnYes
	XmlQualifiedName_t2760654312 * ___QnYes_39;
	// System.Xml.XmlQualifiedName System.Xml.Schema.SchemaNames::QnNo
	XmlQualifiedName_t2760654312 * ___QnNo_40;
	// System.Xml.XmlQualifiedName System.Xml.Schema.SchemaNames::QnString
	XmlQualifiedName_t2760654312 * ___QnString_41;
	// System.Xml.XmlQualifiedName System.Xml.Schema.SchemaNames::QnID
	XmlQualifiedName_t2760654312 * ___QnID_42;
	// System.Xml.XmlQualifiedName System.Xml.Schema.SchemaNames::QnIDRef
	XmlQualifiedName_t2760654312 * ___QnIDRef_43;
	// System.Xml.XmlQualifiedName System.Xml.Schema.SchemaNames::QnIDRefs
	XmlQualifiedName_t2760654312 * ___QnIDRefs_44;
	// System.Xml.XmlQualifiedName System.Xml.Schema.SchemaNames::QnEntity
	XmlQualifiedName_t2760654312 * ___QnEntity_45;
	// System.Xml.XmlQualifiedName System.Xml.Schema.SchemaNames::QnEntities
	XmlQualifiedName_t2760654312 * ___QnEntities_46;
	// System.Xml.XmlQualifiedName System.Xml.Schema.SchemaNames::QnNmToken
	XmlQualifiedName_t2760654312 * ___QnNmToken_47;
	// System.Xml.XmlQualifiedName System.Xml.Schema.SchemaNames::QnNmTokens
	XmlQualifiedName_t2760654312 * ___QnNmTokens_48;
	// System.Xml.XmlQualifiedName System.Xml.Schema.SchemaNames::QnEnumeration
	XmlQualifiedName_t2760654312 * ___QnEnumeration_49;
	// System.Xml.XmlQualifiedName System.Xml.Schema.SchemaNames::QnDefault
	XmlQualifiedName_t2760654312 * ___QnDefault_50;
	// System.Xml.XmlQualifiedName System.Xml.Schema.SchemaNames::QnXdrSchema
	XmlQualifiedName_t2760654312 * ___QnXdrSchema_51;
	// System.Xml.XmlQualifiedName System.Xml.Schema.SchemaNames::QnXdrElementType
	XmlQualifiedName_t2760654312 * ___QnXdrElementType_52;
	// System.Xml.XmlQualifiedName System.Xml.Schema.SchemaNames::QnXdrElement
	XmlQualifiedName_t2760654312 * ___QnXdrElement_53;
	// System.Xml.XmlQualifiedName System.Xml.Schema.SchemaNames::QnXdrGroup
	XmlQualifiedName_t2760654312 * ___QnXdrGroup_54;
	// System.Xml.XmlQualifiedName System.Xml.Schema.SchemaNames::QnXdrAttributeType
	XmlQualifiedName_t2760654312 * ___QnXdrAttributeType_55;
	// System.Xml.XmlQualifiedName System.Xml.Schema.SchemaNames::QnXdrAttribute
	XmlQualifiedName_t2760654312 * ___QnXdrAttribute_56;
	// System.Xml.XmlQualifiedName System.Xml.Schema.SchemaNames::QnXdrDataType
	XmlQualifiedName_t2760654312 * ___QnXdrDataType_57;
	// System.Xml.XmlQualifiedName System.Xml.Schema.SchemaNames::QnXdrDescription
	XmlQualifiedName_t2760654312 * ___QnXdrDescription_58;
	// System.Xml.XmlQualifiedName System.Xml.Schema.SchemaNames::QnXdrExtends
	XmlQualifiedName_t2760654312 * ___QnXdrExtends_59;
	// System.Xml.XmlQualifiedName System.Xml.Schema.SchemaNames::QnXdrAliasSchema
	XmlQualifiedName_t2760654312 * ___QnXdrAliasSchema_60;
	// System.Xml.XmlQualifiedName System.Xml.Schema.SchemaNames::QnDtType
	XmlQualifiedName_t2760654312 * ___QnDtType_61;
	// System.Xml.XmlQualifiedName System.Xml.Schema.SchemaNames::QnDtValues
	XmlQualifiedName_t2760654312 * ___QnDtValues_62;
	// System.Xml.XmlQualifiedName System.Xml.Schema.SchemaNames::QnDtMaxLength
	XmlQualifiedName_t2760654312 * ___QnDtMaxLength_63;
	// System.Xml.XmlQualifiedName System.Xml.Schema.SchemaNames::QnDtMinLength
	XmlQualifiedName_t2760654312 * ___QnDtMinLength_64;
	// System.Xml.XmlQualifiedName System.Xml.Schema.SchemaNames::QnDtMax
	XmlQualifiedName_t2760654312 * ___QnDtMax_65;
	// System.Xml.XmlQualifiedName System.Xml.Schema.SchemaNames::QnDtMin
	XmlQualifiedName_t2760654312 * ___QnDtMin_66;
	// System.Xml.XmlQualifiedName System.Xml.Schema.SchemaNames::QnDtMinExclusive
	XmlQualifiedName_t2760654312 * ___QnDtMinExclusive_67;
	// System.Xml.XmlQualifiedName System.Xml.Schema.SchemaNames::QnDtMaxExclusive
	XmlQualifiedName_t2760654312 * ___QnDtMaxExclusive_68;
	// System.Xml.XmlQualifiedName System.Xml.Schema.SchemaNames::QnTargetNamespace
	XmlQualifiedName_t2760654312 * ___QnTargetNamespace_69;
	// System.Xml.XmlQualifiedName System.Xml.Schema.SchemaNames::QnVersion
	XmlQualifiedName_t2760654312 * ___QnVersion_70;
	// System.Xml.XmlQualifiedName System.Xml.Schema.SchemaNames::QnFinalDefault
	XmlQualifiedName_t2760654312 * ___QnFinalDefault_71;
	// System.Xml.XmlQualifiedName System.Xml.Schema.SchemaNames::QnBlockDefault
	XmlQualifiedName_t2760654312 * ___QnBlockDefault_72;
	// System.Xml.XmlQualifiedName System.Xml.Schema.SchemaNames::QnFixed
	XmlQualifiedName_t2760654312 * ___QnFixed_73;
	// System.Xml.XmlQualifiedName System.Xml.Schema.SchemaNames::QnAbstract
	XmlQualifiedName_t2760654312 * ___QnAbstract_74;
	// System.Xml.XmlQualifiedName System.Xml.Schema.SchemaNames::QnBlock
	XmlQualifiedName_t2760654312 * ___QnBlock_75;
	// System.Xml.XmlQualifiedName System.Xml.Schema.SchemaNames::QnSubstitutionGroup
	XmlQualifiedName_t2760654312 * ___QnSubstitutionGroup_76;
	// System.Xml.XmlQualifiedName System.Xml.Schema.SchemaNames::QnFinal
	XmlQualifiedName_t2760654312 * ___QnFinal_77;
	// System.Xml.XmlQualifiedName System.Xml.Schema.SchemaNames::QnNillable
	XmlQualifiedName_t2760654312 * ___QnNillable_78;
	// System.Xml.XmlQualifiedName System.Xml.Schema.SchemaNames::QnRef
	XmlQualifiedName_t2760654312 * ___QnRef_79;
	// System.Xml.XmlQualifiedName System.Xml.Schema.SchemaNames::QnBase
	XmlQualifiedName_t2760654312 * ___QnBase_80;
	// System.Xml.XmlQualifiedName System.Xml.Schema.SchemaNames::QnDerivedBy
	XmlQualifiedName_t2760654312 * ___QnDerivedBy_81;
	// System.Xml.XmlQualifiedName System.Xml.Schema.SchemaNames::QnNamespace
	XmlQualifiedName_t2760654312 * ___QnNamespace_82;
	// System.Xml.XmlQualifiedName System.Xml.Schema.SchemaNames::QnProcessContents
	XmlQualifiedName_t2760654312 * ___QnProcessContents_83;
	// System.Xml.XmlQualifiedName System.Xml.Schema.SchemaNames::QnRefer
	XmlQualifiedName_t2760654312 * ___QnRefer_84;
	// System.Xml.XmlQualifiedName System.Xml.Schema.SchemaNames::QnPublic
	XmlQualifiedName_t2760654312 * ___QnPublic_85;
	// System.Xml.XmlQualifiedName System.Xml.Schema.SchemaNames::QnSystem
	XmlQualifiedName_t2760654312 * ___QnSystem_86;
	// System.Xml.XmlQualifiedName System.Xml.Schema.SchemaNames::QnSchemaLocation
	XmlQualifiedName_t2760654312 * ___QnSchemaLocation_87;
	// System.Xml.XmlQualifiedName System.Xml.Schema.SchemaNames::QnValue
	XmlQualifiedName_t2760654312 * ___QnValue_88;
	// System.Xml.XmlQualifiedName System.Xml.Schema.SchemaNames::QnUse
	XmlQualifiedName_t2760654312 * ___QnUse_89;
	// System.Xml.XmlQualifiedName System.Xml.Schema.SchemaNames::QnForm
	XmlQualifiedName_t2760654312 * ___QnForm_90;
	// System.Xml.XmlQualifiedName System.Xml.Schema.SchemaNames::QnElementFormDefault
	XmlQualifiedName_t2760654312 * ___QnElementFormDefault_91;
	// System.Xml.XmlQualifiedName System.Xml.Schema.SchemaNames::QnAttributeFormDefault
	XmlQualifiedName_t2760654312 * ___QnAttributeFormDefault_92;
	// System.Xml.XmlQualifiedName System.Xml.Schema.SchemaNames::QnItemType
	XmlQualifiedName_t2760654312 * ___QnItemType_93;
	// System.Xml.XmlQualifiedName System.Xml.Schema.SchemaNames::QnMemberTypes
	XmlQualifiedName_t2760654312 * ___QnMemberTypes_94;
	// System.Xml.XmlQualifiedName System.Xml.Schema.SchemaNames::QnXPath
	XmlQualifiedName_t2760654312 * ___QnXPath_95;
	// System.Xml.XmlQualifiedName System.Xml.Schema.SchemaNames::QnXsdSchema
	XmlQualifiedName_t2760654312 * ___QnXsdSchema_96;
	// System.Xml.XmlQualifiedName System.Xml.Schema.SchemaNames::QnXsdAnnotation
	XmlQualifiedName_t2760654312 * ___QnXsdAnnotation_97;
	// System.Xml.XmlQualifiedName System.Xml.Schema.SchemaNames::QnXsdInclude
	XmlQualifiedName_t2760654312 * ___QnXsdInclude_98;
	// System.Xml.XmlQualifiedName System.Xml.Schema.SchemaNames::QnXsdImport
	XmlQualifiedName_t2760654312 * ___QnXsdImport_99;
	// System.Xml.XmlQualifiedName System.Xml.Schema.SchemaNames::QnXsdElement
	XmlQualifiedName_t2760654312 * ___QnXsdElement_100;
	// System.Xml.XmlQualifiedName System.Xml.Schema.SchemaNames::QnXsdAttribute
	XmlQualifiedName_t2760654312 * ___QnXsdAttribute_101;
	// System.Xml.XmlQualifiedName System.Xml.Schema.SchemaNames::QnXsdAttributeGroup
	XmlQualifiedName_t2760654312 * ___QnXsdAttributeGroup_102;
	// System.Xml.XmlQualifiedName System.Xml.Schema.SchemaNames::QnXsdAnyAttribute
	XmlQualifiedName_t2760654312 * ___QnXsdAnyAttribute_103;
	// System.Xml.XmlQualifiedName System.Xml.Schema.SchemaNames::QnXsdGroup
	XmlQualifiedName_t2760654312 * ___QnXsdGroup_104;
	// System.Xml.XmlQualifiedName System.Xml.Schema.SchemaNames::QnXsdAll
	XmlQualifiedName_t2760654312 * ___QnXsdAll_105;
	// System.Xml.XmlQualifiedName System.Xml.Schema.SchemaNames::QnXsdChoice
	XmlQualifiedName_t2760654312 * ___QnXsdChoice_106;
	// System.Xml.XmlQualifiedName System.Xml.Schema.SchemaNames::QnXsdSequence
	XmlQualifiedName_t2760654312 * ___QnXsdSequence_107;
	// System.Xml.XmlQualifiedName System.Xml.Schema.SchemaNames::QnXsdAny
	XmlQualifiedName_t2760654312 * ___QnXsdAny_108;
	// System.Xml.XmlQualifiedName System.Xml.Schema.SchemaNames::QnXsdNotation
	XmlQualifiedName_t2760654312 * ___QnXsdNotation_109;
	// System.Xml.XmlQualifiedName System.Xml.Schema.SchemaNames::QnXsdSimpleType
	XmlQualifiedName_t2760654312 * ___QnXsdSimpleType_110;
	// System.Xml.XmlQualifiedName System.Xml.Schema.SchemaNames::QnXsdComplexType
	XmlQualifiedName_t2760654312 * ___QnXsdComplexType_111;
	// System.Xml.XmlQualifiedName System.Xml.Schema.SchemaNames::QnXsdUnique
	XmlQualifiedName_t2760654312 * ___QnXsdUnique_112;
	// System.Xml.XmlQualifiedName System.Xml.Schema.SchemaNames::QnXsdKey
	XmlQualifiedName_t2760654312 * ___QnXsdKey_113;
	// System.Xml.XmlQualifiedName System.Xml.Schema.SchemaNames::QnXsdKeyRef
	XmlQualifiedName_t2760654312 * ___QnXsdKeyRef_114;
	// System.Xml.XmlQualifiedName System.Xml.Schema.SchemaNames::QnXsdSelector
	XmlQualifiedName_t2760654312 * ___QnXsdSelector_115;
	// System.Xml.XmlQualifiedName System.Xml.Schema.SchemaNames::QnXsdField
	XmlQualifiedName_t2760654312 * ___QnXsdField_116;
	// System.Xml.XmlQualifiedName System.Xml.Schema.SchemaNames::QnXsdMinExclusive
	XmlQualifiedName_t2760654312 * ___QnXsdMinExclusive_117;
	// System.Xml.XmlQualifiedName System.Xml.Schema.SchemaNames::QnXsdMinInclusive
	XmlQualifiedName_t2760654312 * ___QnXsdMinInclusive_118;
	// System.Xml.XmlQualifiedName System.Xml.Schema.SchemaNames::QnXsdMaxInclusive
	XmlQualifiedName_t2760654312 * ___QnXsdMaxInclusive_119;
	// System.Xml.XmlQualifiedName System.Xml.Schema.SchemaNames::QnXsdMaxExclusive
	XmlQualifiedName_t2760654312 * ___QnXsdMaxExclusive_120;
	// System.Xml.XmlQualifiedName System.Xml.Schema.SchemaNames::QnXsdTotalDigits
	XmlQualifiedName_t2760654312 * ___QnXsdTotalDigits_121;
	// System.Xml.XmlQualifiedName System.Xml.Schema.SchemaNames::QnXsdFractionDigits
	XmlQualifiedName_t2760654312 * ___QnXsdFractionDigits_122;
	// System.Xml.XmlQualifiedName System.Xml.Schema.SchemaNames::QnXsdLength
	XmlQualifiedName_t2760654312 * ___QnXsdLength_123;
	// System.Xml.XmlQualifiedName System.Xml.Schema.SchemaNames::QnXsdMinLength
	XmlQualifiedName_t2760654312 * ___QnXsdMinLength_124;
	// System.Xml.XmlQualifiedName System.Xml.Schema.SchemaNames::QnXsdMaxLength
	XmlQualifiedName_t2760654312 * ___QnXsdMaxLength_125;
	// System.Xml.XmlQualifiedName System.Xml.Schema.SchemaNames::QnXsdEnumeration
	XmlQualifiedName_t2760654312 * ___QnXsdEnumeration_126;
	// System.Xml.XmlQualifiedName System.Xml.Schema.SchemaNames::QnXsdPattern
	XmlQualifiedName_t2760654312 * ___QnXsdPattern_127;
	// System.Xml.XmlQualifiedName System.Xml.Schema.SchemaNames::QnXsdDocumentation
	XmlQualifiedName_t2760654312 * ___QnXsdDocumentation_128;
	// System.Xml.XmlQualifiedName System.Xml.Schema.SchemaNames::QnXsdAppinfo
	XmlQualifiedName_t2760654312 * ___QnXsdAppinfo_129;
	// System.Xml.XmlQualifiedName System.Xml.Schema.SchemaNames::QnSource
	XmlQualifiedName_t2760654312 * ___QnSource_130;
	// System.Xml.XmlQualifiedName System.Xml.Schema.SchemaNames::QnXsdComplexContent
	XmlQualifiedName_t2760654312 * ___QnXsdComplexContent_131;
	// System.Xml.XmlQualifiedName System.Xml.Schema.SchemaNames::QnXsdSimpleContent
	XmlQualifiedName_t2760654312 * ___QnXsdSimpleContent_132;
	// System.Xml.XmlQualifiedName System.Xml.Schema.SchemaNames::QnXsdRestriction
	XmlQualifiedName_t2760654312 * ___QnXsdRestriction_133;
	// System.Xml.XmlQualifiedName System.Xml.Schema.SchemaNames::QnXsdExtension
	XmlQualifiedName_t2760654312 * ___QnXsdExtension_134;
	// System.Xml.XmlQualifiedName System.Xml.Schema.SchemaNames::QnXsdUnion
	XmlQualifiedName_t2760654312 * ___QnXsdUnion_135;
	// System.Xml.XmlQualifiedName System.Xml.Schema.SchemaNames::QnXsdList
	XmlQualifiedName_t2760654312 * ___QnXsdList_136;
	// System.Xml.XmlQualifiedName System.Xml.Schema.SchemaNames::QnXsdWhiteSpace
	XmlQualifiedName_t2760654312 * ___QnXsdWhiteSpace_137;
	// System.Xml.XmlQualifiedName System.Xml.Schema.SchemaNames::QnXsdRedefine
	XmlQualifiedName_t2760654312 * ___QnXsdRedefine_138;
	// System.Xml.XmlQualifiedName System.Xml.Schema.SchemaNames::QnXsdAnyType
	XmlQualifiedName_t2760654312 * ___QnXsdAnyType_139;
	// System.Xml.XmlQualifiedName[] System.Xml.Schema.SchemaNames::TokenToQName
	XmlQualifiedNameU5BU5D_t1471530361* ___TokenToQName_140;

public:
	inline static int32_t get_offset_of_nameTable_0() { return static_cast<int32_t>(offsetof(SchemaNames_t661607975, ___nameTable_0)); }
	inline XmlNameTable_t71772148 * get_nameTable_0() const { return ___nameTable_0; }
	inline XmlNameTable_t71772148 ** get_address_of_nameTable_0() { return &___nameTable_0; }
	inline void set_nameTable_0(XmlNameTable_t71772148 * value)
	{
		___nameTable_0 = value;
		Il2CppCodeGenWriteBarrier((&___nameTable_0), value);
	}

	inline static int32_t get_offset_of_NsDataType_1() { return static_cast<int32_t>(offsetof(SchemaNames_t661607975, ___NsDataType_1)); }
	inline String_t* get_NsDataType_1() const { return ___NsDataType_1; }
	inline String_t** get_address_of_NsDataType_1() { return &___NsDataType_1; }
	inline void set_NsDataType_1(String_t* value)
	{
		___NsDataType_1 = value;
		Il2CppCodeGenWriteBarrier((&___NsDataType_1), value);
	}

	inline static int32_t get_offset_of_NsDataTypeAlias_2() { return static_cast<int32_t>(offsetof(SchemaNames_t661607975, ___NsDataTypeAlias_2)); }
	inline String_t* get_NsDataTypeAlias_2() const { return ___NsDataTypeAlias_2; }
	inline String_t** get_address_of_NsDataTypeAlias_2() { return &___NsDataTypeAlias_2; }
	inline void set_NsDataTypeAlias_2(String_t* value)
	{
		___NsDataTypeAlias_2 = value;
		Il2CppCodeGenWriteBarrier((&___NsDataTypeAlias_2), value);
	}

	inline static int32_t get_offset_of_NsDataTypeOld_3() { return static_cast<int32_t>(offsetof(SchemaNames_t661607975, ___NsDataTypeOld_3)); }
	inline String_t* get_NsDataTypeOld_3() const { return ___NsDataTypeOld_3; }
	inline String_t** get_address_of_NsDataTypeOld_3() { return &___NsDataTypeOld_3; }
	inline void set_NsDataTypeOld_3(String_t* value)
	{
		___NsDataTypeOld_3 = value;
		Il2CppCodeGenWriteBarrier((&___NsDataTypeOld_3), value);
	}

	inline static int32_t get_offset_of_NsXml_4() { return static_cast<int32_t>(offsetof(SchemaNames_t661607975, ___NsXml_4)); }
	inline String_t* get_NsXml_4() const { return ___NsXml_4; }
	inline String_t** get_address_of_NsXml_4() { return &___NsXml_4; }
	inline void set_NsXml_4(String_t* value)
	{
		___NsXml_4 = value;
		Il2CppCodeGenWriteBarrier((&___NsXml_4), value);
	}

	inline static int32_t get_offset_of_NsXmlNs_5() { return static_cast<int32_t>(offsetof(SchemaNames_t661607975, ___NsXmlNs_5)); }
	inline String_t* get_NsXmlNs_5() const { return ___NsXmlNs_5; }
	inline String_t** get_address_of_NsXmlNs_5() { return &___NsXmlNs_5; }
	inline void set_NsXmlNs_5(String_t* value)
	{
		___NsXmlNs_5 = value;
		Il2CppCodeGenWriteBarrier((&___NsXmlNs_5), value);
	}

	inline static int32_t get_offset_of_NsXdr_6() { return static_cast<int32_t>(offsetof(SchemaNames_t661607975, ___NsXdr_6)); }
	inline String_t* get_NsXdr_6() const { return ___NsXdr_6; }
	inline String_t** get_address_of_NsXdr_6() { return &___NsXdr_6; }
	inline void set_NsXdr_6(String_t* value)
	{
		___NsXdr_6 = value;
		Il2CppCodeGenWriteBarrier((&___NsXdr_6), value);
	}

	inline static int32_t get_offset_of_NsXdrAlias_7() { return static_cast<int32_t>(offsetof(SchemaNames_t661607975, ___NsXdrAlias_7)); }
	inline String_t* get_NsXdrAlias_7() const { return ___NsXdrAlias_7; }
	inline String_t** get_address_of_NsXdrAlias_7() { return &___NsXdrAlias_7; }
	inline void set_NsXdrAlias_7(String_t* value)
	{
		___NsXdrAlias_7 = value;
		Il2CppCodeGenWriteBarrier((&___NsXdrAlias_7), value);
	}

	inline static int32_t get_offset_of_NsXs_8() { return static_cast<int32_t>(offsetof(SchemaNames_t661607975, ___NsXs_8)); }
	inline String_t* get_NsXs_8() const { return ___NsXs_8; }
	inline String_t** get_address_of_NsXs_8() { return &___NsXs_8; }
	inline void set_NsXs_8(String_t* value)
	{
		___NsXs_8 = value;
		Il2CppCodeGenWriteBarrier((&___NsXs_8), value);
	}

	inline static int32_t get_offset_of_NsXsi_9() { return static_cast<int32_t>(offsetof(SchemaNames_t661607975, ___NsXsi_9)); }
	inline String_t* get_NsXsi_9() const { return ___NsXsi_9; }
	inline String_t** get_address_of_NsXsi_9() { return &___NsXsi_9; }
	inline void set_NsXsi_9(String_t* value)
	{
		___NsXsi_9 = value;
		Il2CppCodeGenWriteBarrier((&___NsXsi_9), value);
	}

	inline static int32_t get_offset_of_XsiType_10() { return static_cast<int32_t>(offsetof(SchemaNames_t661607975, ___XsiType_10)); }
	inline String_t* get_XsiType_10() const { return ___XsiType_10; }
	inline String_t** get_address_of_XsiType_10() { return &___XsiType_10; }
	inline void set_XsiType_10(String_t* value)
	{
		___XsiType_10 = value;
		Il2CppCodeGenWriteBarrier((&___XsiType_10), value);
	}

	inline static int32_t get_offset_of_XsiNil_11() { return static_cast<int32_t>(offsetof(SchemaNames_t661607975, ___XsiNil_11)); }
	inline String_t* get_XsiNil_11() const { return ___XsiNil_11; }
	inline String_t** get_address_of_XsiNil_11() { return &___XsiNil_11; }
	inline void set_XsiNil_11(String_t* value)
	{
		___XsiNil_11 = value;
		Il2CppCodeGenWriteBarrier((&___XsiNil_11), value);
	}

	inline static int32_t get_offset_of_XsiSchemaLocation_12() { return static_cast<int32_t>(offsetof(SchemaNames_t661607975, ___XsiSchemaLocation_12)); }
	inline String_t* get_XsiSchemaLocation_12() const { return ___XsiSchemaLocation_12; }
	inline String_t** get_address_of_XsiSchemaLocation_12() { return &___XsiSchemaLocation_12; }
	inline void set_XsiSchemaLocation_12(String_t* value)
	{
		___XsiSchemaLocation_12 = value;
		Il2CppCodeGenWriteBarrier((&___XsiSchemaLocation_12), value);
	}

	inline static int32_t get_offset_of_XsiNoNamespaceSchemaLocation_13() { return static_cast<int32_t>(offsetof(SchemaNames_t661607975, ___XsiNoNamespaceSchemaLocation_13)); }
	inline String_t* get_XsiNoNamespaceSchemaLocation_13() const { return ___XsiNoNamespaceSchemaLocation_13; }
	inline String_t** get_address_of_XsiNoNamespaceSchemaLocation_13() { return &___XsiNoNamespaceSchemaLocation_13; }
	inline void set_XsiNoNamespaceSchemaLocation_13(String_t* value)
	{
		___XsiNoNamespaceSchemaLocation_13 = value;
		Il2CppCodeGenWriteBarrier((&___XsiNoNamespaceSchemaLocation_13), value);
	}

	inline static int32_t get_offset_of_XsdSchema_14() { return static_cast<int32_t>(offsetof(SchemaNames_t661607975, ___XsdSchema_14)); }
	inline String_t* get_XsdSchema_14() const { return ___XsdSchema_14; }
	inline String_t** get_address_of_XsdSchema_14() { return &___XsdSchema_14; }
	inline void set_XsdSchema_14(String_t* value)
	{
		___XsdSchema_14 = value;
		Il2CppCodeGenWriteBarrier((&___XsdSchema_14), value);
	}

	inline static int32_t get_offset_of_XdrSchema_15() { return static_cast<int32_t>(offsetof(SchemaNames_t661607975, ___XdrSchema_15)); }
	inline String_t* get_XdrSchema_15() const { return ___XdrSchema_15; }
	inline String_t** get_address_of_XdrSchema_15() { return &___XdrSchema_15; }
	inline void set_XdrSchema_15(String_t* value)
	{
		___XdrSchema_15 = value;
		Il2CppCodeGenWriteBarrier((&___XdrSchema_15), value);
	}

	inline static int32_t get_offset_of_QnPCData_16() { return static_cast<int32_t>(offsetof(SchemaNames_t661607975, ___QnPCData_16)); }
	inline XmlQualifiedName_t2760654312 * get_QnPCData_16() const { return ___QnPCData_16; }
	inline XmlQualifiedName_t2760654312 ** get_address_of_QnPCData_16() { return &___QnPCData_16; }
	inline void set_QnPCData_16(XmlQualifiedName_t2760654312 * value)
	{
		___QnPCData_16 = value;
		Il2CppCodeGenWriteBarrier((&___QnPCData_16), value);
	}

	inline static int32_t get_offset_of_QnXml_17() { return static_cast<int32_t>(offsetof(SchemaNames_t661607975, ___QnXml_17)); }
	inline XmlQualifiedName_t2760654312 * get_QnXml_17() const { return ___QnXml_17; }
	inline XmlQualifiedName_t2760654312 ** get_address_of_QnXml_17() { return &___QnXml_17; }
	inline void set_QnXml_17(XmlQualifiedName_t2760654312 * value)
	{
		___QnXml_17 = value;
		Il2CppCodeGenWriteBarrier((&___QnXml_17), value);
	}

	inline static int32_t get_offset_of_QnXmlNs_18() { return static_cast<int32_t>(offsetof(SchemaNames_t661607975, ___QnXmlNs_18)); }
	inline XmlQualifiedName_t2760654312 * get_QnXmlNs_18() const { return ___QnXmlNs_18; }
	inline XmlQualifiedName_t2760654312 ** get_address_of_QnXmlNs_18() { return &___QnXmlNs_18; }
	inline void set_QnXmlNs_18(XmlQualifiedName_t2760654312 * value)
	{
		___QnXmlNs_18 = value;
		Il2CppCodeGenWriteBarrier((&___QnXmlNs_18), value);
	}

	inline static int32_t get_offset_of_QnDtDt_19() { return static_cast<int32_t>(offsetof(SchemaNames_t661607975, ___QnDtDt_19)); }
	inline XmlQualifiedName_t2760654312 * get_QnDtDt_19() const { return ___QnDtDt_19; }
	inline XmlQualifiedName_t2760654312 ** get_address_of_QnDtDt_19() { return &___QnDtDt_19; }
	inline void set_QnDtDt_19(XmlQualifiedName_t2760654312 * value)
	{
		___QnDtDt_19 = value;
		Il2CppCodeGenWriteBarrier((&___QnDtDt_19), value);
	}

	inline static int32_t get_offset_of_QnXmlLang_20() { return static_cast<int32_t>(offsetof(SchemaNames_t661607975, ___QnXmlLang_20)); }
	inline XmlQualifiedName_t2760654312 * get_QnXmlLang_20() const { return ___QnXmlLang_20; }
	inline XmlQualifiedName_t2760654312 ** get_address_of_QnXmlLang_20() { return &___QnXmlLang_20; }
	inline void set_QnXmlLang_20(XmlQualifiedName_t2760654312 * value)
	{
		___QnXmlLang_20 = value;
		Il2CppCodeGenWriteBarrier((&___QnXmlLang_20), value);
	}

	inline static int32_t get_offset_of_QnName_21() { return static_cast<int32_t>(offsetof(SchemaNames_t661607975, ___QnName_21)); }
	inline XmlQualifiedName_t2760654312 * get_QnName_21() const { return ___QnName_21; }
	inline XmlQualifiedName_t2760654312 ** get_address_of_QnName_21() { return &___QnName_21; }
	inline void set_QnName_21(XmlQualifiedName_t2760654312 * value)
	{
		___QnName_21 = value;
		Il2CppCodeGenWriteBarrier((&___QnName_21), value);
	}

	inline static int32_t get_offset_of_QnType_22() { return static_cast<int32_t>(offsetof(SchemaNames_t661607975, ___QnType_22)); }
	inline XmlQualifiedName_t2760654312 * get_QnType_22() const { return ___QnType_22; }
	inline XmlQualifiedName_t2760654312 ** get_address_of_QnType_22() { return &___QnType_22; }
	inline void set_QnType_22(XmlQualifiedName_t2760654312 * value)
	{
		___QnType_22 = value;
		Il2CppCodeGenWriteBarrier((&___QnType_22), value);
	}

	inline static int32_t get_offset_of_QnMaxOccurs_23() { return static_cast<int32_t>(offsetof(SchemaNames_t661607975, ___QnMaxOccurs_23)); }
	inline XmlQualifiedName_t2760654312 * get_QnMaxOccurs_23() const { return ___QnMaxOccurs_23; }
	inline XmlQualifiedName_t2760654312 ** get_address_of_QnMaxOccurs_23() { return &___QnMaxOccurs_23; }
	inline void set_QnMaxOccurs_23(XmlQualifiedName_t2760654312 * value)
	{
		___QnMaxOccurs_23 = value;
		Il2CppCodeGenWriteBarrier((&___QnMaxOccurs_23), value);
	}

	inline static int32_t get_offset_of_QnMinOccurs_24() { return static_cast<int32_t>(offsetof(SchemaNames_t661607975, ___QnMinOccurs_24)); }
	inline XmlQualifiedName_t2760654312 * get_QnMinOccurs_24() const { return ___QnMinOccurs_24; }
	inline XmlQualifiedName_t2760654312 ** get_address_of_QnMinOccurs_24() { return &___QnMinOccurs_24; }
	inline void set_QnMinOccurs_24(XmlQualifiedName_t2760654312 * value)
	{
		___QnMinOccurs_24 = value;
		Il2CppCodeGenWriteBarrier((&___QnMinOccurs_24), value);
	}

	inline static int32_t get_offset_of_QnInfinite_25() { return static_cast<int32_t>(offsetof(SchemaNames_t661607975, ___QnInfinite_25)); }
	inline XmlQualifiedName_t2760654312 * get_QnInfinite_25() const { return ___QnInfinite_25; }
	inline XmlQualifiedName_t2760654312 ** get_address_of_QnInfinite_25() { return &___QnInfinite_25; }
	inline void set_QnInfinite_25(XmlQualifiedName_t2760654312 * value)
	{
		___QnInfinite_25 = value;
		Il2CppCodeGenWriteBarrier((&___QnInfinite_25), value);
	}

	inline static int32_t get_offset_of_QnModel_26() { return static_cast<int32_t>(offsetof(SchemaNames_t661607975, ___QnModel_26)); }
	inline XmlQualifiedName_t2760654312 * get_QnModel_26() const { return ___QnModel_26; }
	inline XmlQualifiedName_t2760654312 ** get_address_of_QnModel_26() { return &___QnModel_26; }
	inline void set_QnModel_26(XmlQualifiedName_t2760654312 * value)
	{
		___QnModel_26 = value;
		Il2CppCodeGenWriteBarrier((&___QnModel_26), value);
	}

	inline static int32_t get_offset_of_QnOpen_27() { return static_cast<int32_t>(offsetof(SchemaNames_t661607975, ___QnOpen_27)); }
	inline XmlQualifiedName_t2760654312 * get_QnOpen_27() const { return ___QnOpen_27; }
	inline XmlQualifiedName_t2760654312 ** get_address_of_QnOpen_27() { return &___QnOpen_27; }
	inline void set_QnOpen_27(XmlQualifiedName_t2760654312 * value)
	{
		___QnOpen_27 = value;
		Il2CppCodeGenWriteBarrier((&___QnOpen_27), value);
	}

	inline static int32_t get_offset_of_QnClosed_28() { return static_cast<int32_t>(offsetof(SchemaNames_t661607975, ___QnClosed_28)); }
	inline XmlQualifiedName_t2760654312 * get_QnClosed_28() const { return ___QnClosed_28; }
	inline XmlQualifiedName_t2760654312 ** get_address_of_QnClosed_28() { return &___QnClosed_28; }
	inline void set_QnClosed_28(XmlQualifiedName_t2760654312 * value)
	{
		___QnClosed_28 = value;
		Il2CppCodeGenWriteBarrier((&___QnClosed_28), value);
	}

	inline static int32_t get_offset_of_QnContent_29() { return static_cast<int32_t>(offsetof(SchemaNames_t661607975, ___QnContent_29)); }
	inline XmlQualifiedName_t2760654312 * get_QnContent_29() const { return ___QnContent_29; }
	inline XmlQualifiedName_t2760654312 ** get_address_of_QnContent_29() { return &___QnContent_29; }
	inline void set_QnContent_29(XmlQualifiedName_t2760654312 * value)
	{
		___QnContent_29 = value;
		Il2CppCodeGenWriteBarrier((&___QnContent_29), value);
	}

	inline static int32_t get_offset_of_QnMixed_30() { return static_cast<int32_t>(offsetof(SchemaNames_t661607975, ___QnMixed_30)); }
	inline XmlQualifiedName_t2760654312 * get_QnMixed_30() const { return ___QnMixed_30; }
	inline XmlQualifiedName_t2760654312 ** get_address_of_QnMixed_30() { return &___QnMixed_30; }
	inline void set_QnMixed_30(XmlQualifiedName_t2760654312 * value)
	{
		___QnMixed_30 = value;
		Il2CppCodeGenWriteBarrier((&___QnMixed_30), value);
	}

	inline static int32_t get_offset_of_QnEmpty_31() { return static_cast<int32_t>(offsetof(SchemaNames_t661607975, ___QnEmpty_31)); }
	inline XmlQualifiedName_t2760654312 * get_QnEmpty_31() const { return ___QnEmpty_31; }
	inline XmlQualifiedName_t2760654312 ** get_address_of_QnEmpty_31() { return &___QnEmpty_31; }
	inline void set_QnEmpty_31(XmlQualifiedName_t2760654312 * value)
	{
		___QnEmpty_31 = value;
		Il2CppCodeGenWriteBarrier((&___QnEmpty_31), value);
	}

	inline static int32_t get_offset_of_QnEltOnly_32() { return static_cast<int32_t>(offsetof(SchemaNames_t661607975, ___QnEltOnly_32)); }
	inline XmlQualifiedName_t2760654312 * get_QnEltOnly_32() const { return ___QnEltOnly_32; }
	inline XmlQualifiedName_t2760654312 ** get_address_of_QnEltOnly_32() { return &___QnEltOnly_32; }
	inline void set_QnEltOnly_32(XmlQualifiedName_t2760654312 * value)
	{
		___QnEltOnly_32 = value;
		Il2CppCodeGenWriteBarrier((&___QnEltOnly_32), value);
	}

	inline static int32_t get_offset_of_QnTextOnly_33() { return static_cast<int32_t>(offsetof(SchemaNames_t661607975, ___QnTextOnly_33)); }
	inline XmlQualifiedName_t2760654312 * get_QnTextOnly_33() const { return ___QnTextOnly_33; }
	inline XmlQualifiedName_t2760654312 ** get_address_of_QnTextOnly_33() { return &___QnTextOnly_33; }
	inline void set_QnTextOnly_33(XmlQualifiedName_t2760654312 * value)
	{
		___QnTextOnly_33 = value;
		Il2CppCodeGenWriteBarrier((&___QnTextOnly_33), value);
	}

	inline static int32_t get_offset_of_QnOrder_34() { return static_cast<int32_t>(offsetof(SchemaNames_t661607975, ___QnOrder_34)); }
	inline XmlQualifiedName_t2760654312 * get_QnOrder_34() const { return ___QnOrder_34; }
	inline XmlQualifiedName_t2760654312 ** get_address_of_QnOrder_34() { return &___QnOrder_34; }
	inline void set_QnOrder_34(XmlQualifiedName_t2760654312 * value)
	{
		___QnOrder_34 = value;
		Il2CppCodeGenWriteBarrier((&___QnOrder_34), value);
	}

	inline static int32_t get_offset_of_QnSeq_35() { return static_cast<int32_t>(offsetof(SchemaNames_t661607975, ___QnSeq_35)); }
	inline XmlQualifiedName_t2760654312 * get_QnSeq_35() const { return ___QnSeq_35; }
	inline XmlQualifiedName_t2760654312 ** get_address_of_QnSeq_35() { return &___QnSeq_35; }
	inline void set_QnSeq_35(XmlQualifiedName_t2760654312 * value)
	{
		___QnSeq_35 = value;
		Il2CppCodeGenWriteBarrier((&___QnSeq_35), value);
	}

	inline static int32_t get_offset_of_QnOne_36() { return static_cast<int32_t>(offsetof(SchemaNames_t661607975, ___QnOne_36)); }
	inline XmlQualifiedName_t2760654312 * get_QnOne_36() const { return ___QnOne_36; }
	inline XmlQualifiedName_t2760654312 ** get_address_of_QnOne_36() { return &___QnOne_36; }
	inline void set_QnOne_36(XmlQualifiedName_t2760654312 * value)
	{
		___QnOne_36 = value;
		Il2CppCodeGenWriteBarrier((&___QnOne_36), value);
	}

	inline static int32_t get_offset_of_QnMany_37() { return static_cast<int32_t>(offsetof(SchemaNames_t661607975, ___QnMany_37)); }
	inline XmlQualifiedName_t2760654312 * get_QnMany_37() const { return ___QnMany_37; }
	inline XmlQualifiedName_t2760654312 ** get_address_of_QnMany_37() { return &___QnMany_37; }
	inline void set_QnMany_37(XmlQualifiedName_t2760654312 * value)
	{
		___QnMany_37 = value;
		Il2CppCodeGenWriteBarrier((&___QnMany_37), value);
	}

	inline static int32_t get_offset_of_QnRequired_38() { return static_cast<int32_t>(offsetof(SchemaNames_t661607975, ___QnRequired_38)); }
	inline XmlQualifiedName_t2760654312 * get_QnRequired_38() const { return ___QnRequired_38; }
	inline XmlQualifiedName_t2760654312 ** get_address_of_QnRequired_38() { return &___QnRequired_38; }
	inline void set_QnRequired_38(XmlQualifiedName_t2760654312 * value)
	{
		___QnRequired_38 = value;
		Il2CppCodeGenWriteBarrier((&___QnRequired_38), value);
	}

	inline static int32_t get_offset_of_QnYes_39() { return static_cast<int32_t>(offsetof(SchemaNames_t661607975, ___QnYes_39)); }
	inline XmlQualifiedName_t2760654312 * get_QnYes_39() const { return ___QnYes_39; }
	inline XmlQualifiedName_t2760654312 ** get_address_of_QnYes_39() { return &___QnYes_39; }
	inline void set_QnYes_39(XmlQualifiedName_t2760654312 * value)
	{
		___QnYes_39 = value;
		Il2CppCodeGenWriteBarrier((&___QnYes_39), value);
	}

	inline static int32_t get_offset_of_QnNo_40() { return static_cast<int32_t>(offsetof(SchemaNames_t661607975, ___QnNo_40)); }
	inline XmlQualifiedName_t2760654312 * get_QnNo_40() const { return ___QnNo_40; }
	inline XmlQualifiedName_t2760654312 ** get_address_of_QnNo_40() { return &___QnNo_40; }
	inline void set_QnNo_40(XmlQualifiedName_t2760654312 * value)
	{
		___QnNo_40 = value;
		Il2CppCodeGenWriteBarrier((&___QnNo_40), value);
	}

	inline static int32_t get_offset_of_QnString_41() { return static_cast<int32_t>(offsetof(SchemaNames_t661607975, ___QnString_41)); }
	inline XmlQualifiedName_t2760654312 * get_QnString_41() const { return ___QnString_41; }
	inline XmlQualifiedName_t2760654312 ** get_address_of_QnString_41() { return &___QnString_41; }
	inline void set_QnString_41(XmlQualifiedName_t2760654312 * value)
	{
		___QnString_41 = value;
		Il2CppCodeGenWriteBarrier((&___QnString_41), value);
	}

	inline static int32_t get_offset_of_QnID_42() { return static_cast<int32_t>(offsetof(SchemaNames_t661607975, ___QnID_42)); }
	inline XmlQualifiedName_t2760654312 * get_QnID_42() const { return ___QnID_42; }
	inline XmlQualifiedName_t2760654312 ** get_address_of_QnID_42() { return &___QnID_42; }
	inline void set_QnID_42(XmlQualifiedName_t2760654312 * value)
	{
		___QnID_42 = value;
		Il2CppCodeGenWriteBarrier((&___QnID_42), value);
	}

	inline static int32_t get_offset_of_QnIDRef_43() { return static_cast<int32_t>(offsetof(SchemaNames_t661607975, ___QnIDRef_43)); }
	inline XmlQualifiedName_t2760654312 * get_QnIDRef_43() const { return ___QnIDRef_43; }
	inline XmlQualifiedName_t2760654312 ** get_address_of_QnIDRef_43() { return &___QnIDRef_43; }
	inline void set_QnIDRef_43(XmlQualifiedName_t2760654312 * value)
	{
		___QnIDRef_43 = value;
		Il2CppCodeGenWriteBarrier((&___QnIDRef_43), value);
	}

	inline static int32_t get_offset_of_QnIDRefs_44() { return static_cast<int32_t>(offsetof(SchemaNames_t661607975, ___QnIDRefs_44)); }
	inline XmlQualifiedName_t2760654312 * get_QnIDRefs_44() const { return ___QnIDRefs_44; }
	inline XmlQualifiedName_t2760654312 ** get_address_of_QnIDRefs_44() { return &___QnIDRefs_44; }
	inline void set_QnIDRefs_44(XmlQualifiedName_t2760654312 * value)
	{
		___QnIDRefs_44 = value;
		Il2CppCodeGenWriteBarrier((&___QnIDRefs_44), value);
	}

	inline static int32_t get_offset_of_QnEntity_45() { return static_cast<int32_t>(offsetof(SchemaNames_t661607975, ___QnEntity_45)); }
	inline XmlQualifiedName_t2760654312 * get_QnEntity_45() const { return ___QnEntity_45; }
	inline XmlQualifiedName_t2760654312 ** get_address_of_QnEntity_45() { return &___QnEntity_45; }
	inline void set_QnEntity_45(XmlQualifiedName_t2760654312 * value)
	{
		___QnEntity_45 = value;
		Il2CppCodeGenWriteBarrier((&___QnEntity_45), value);
	}

	inline static int32_t get_offset_of_QnEntities_46() { return static_cast<int32_t>(offsetof(SchemaNames_t661607975, ___QnEntities_46)); }
	inline XmlQualifiedName_t2760654312 * get_QnEntities_46() const { return ___QnEntities_46; }
	inline XmlQualifiedName_t2760654312 ** get_address_of_QnEntities_46() { return &___QnEntities_46; }
	inline void set_QnEntities_46(XmlQualifiedName_t2760654312 * value)
	{
		___QnEntities_46 = value;
		Il2CppCodeGenWriteBarrier((&___QnEntities_46), value);
	}

	inline static int32_t get_offset_of_QnNmToken_47() { return static_cast<int32_t>(offsetof(SchemaNames_t661607975, ___QnNmToken_47)); }
	inline XmlQualifiedName_t2760654312 * get_QnNmToken_47() const { return ___QnNmToken_47; }
	inline XmlQualifiedName_t2760654312 ** get_address_of_QnNmToken_47() { return &___QnNmToken_47; }
	inline void set_QnNmToken_47(XmlQualifiedName_t2760654312 * value)
	{
		___QnNmToken_47 = value;
		Il2CppCodeGenWriteBarrier((&___QnNmToken_47), value);
	}

	inline static int32_t get_offset_of_QnNmTokens_48() { return static_cast<int32_t>(offsetof(SchemaNames_t661607975, ___QnNmTokens_48)); }
	inline XmlQualifiedName_t2760654312 * get_QnNmTokens_48() const { return ___QnNmTokens_48; }
	inline XmlQualifiedName_t2760654312 ** get_address_of_QnNmTokens_48() { return &___QnNmTokens_48; }
	inline void set_QnNmTokens_48(XmlQualifiedName_t2760654312 * value)
	{
		___QnNmTokens_48 = value;
		Il2CppCodeGenWriteBarrier((&___QnNmTokens_48), value);
	}

	inline static int32_t get_offset_of_QnEnumeration_49() { return static_cast<int32_t>(offsetof(SchemaNames_t661607975, ___QnEnumeration_49)); }
	inline XmlQualifiedName_t2760654312 * get_QnEnumeration_49() const { return ___QnEnumeration_49; }
	inline XmlQualifiedName_t2760654312 ** get_address_of_QnEnumeration_49() { return &___QnEnumeration_49; }
	inline void set_QnEnumeration_49(XmlQualifiedName_t2760654312 * value)
	{
		___QnEnumeration_49 = value;
		Il2CppCodeGenWriteBarrier((&___QnEnumeration_49), value);
	}

	inline static int32_t get_offset_of_QnDefault_50() { return static_cast<int32_t>(offsetof(SchemaNames_t661607975, ___QnDefault_50)); }
	inline XmlQualifiedName_t2760654312 * get_QnDefault_50() const { return ___QnDefault_50; }
	inline XmlQualifiedName_t2760654312 ** get_address_of_QnDefault_50() { return &___QnDefault_50; }
	inline void set_QnDefault_50(XmlQualifiedName_t2760654312 * value)
	{
		___QnDefault_50 = value;
		Il2CppCodeGenWriteBarrier((&___QnDefault_50), value);
	}

	inline static int32_t get_offset_of_QnXdrSchema_51() { return static_cast<int32_t>(offsetof(SchemaNames_t661607975, ___QnXdrSchema_51)); }
	inline XmlQualifiedName_t2760654312 * get_QnXdrSchema_51() const { return ___QnXdrSchema_51; }
	inline XmlQualifiedName_t2760654312 ** get_address_of_QnXdrSchema_51() { return &___QnXdrSchema_51; }
	inline void set_QnXdrSchema_51(XmlQualifiedName_t2760654312 * value)
	{
		___QnXdrSchema_51 = value;
		Il2CppCodeGenWriteBarrier((&___QnXdrSchema_51), value);
	}

	inline static int32_t get_offset_of_QnXdrElementType_52() { return static_cast<int32_t>(offsetof(SchemaNames_t661607975, ___QnXdrElementType_52)); }
	inline XmlQualifiedName_t2760654312 * get_QnXdrElementType_52() const { return ___QnXdrElementType_52; }
	inline XmlQualifiedName_t2760654312 ** get_address_of_QnXdrElementType_52() { return &___QnXdrElementType_52; }
	inline void set_QnXdrElementType_52(XmlQualifiedName_t2760654312 * value)
	{
		___QnXdrElementType_52 = value;
		Il2CppCodeGenWriteBarrier((&___QnXdrElementType_52), value);
	}

	inline static int32_t get_offset_of_QnXdrElement_53() { return static_cast<int32_t>(offsetof(SchemaNames_t661607975, ___QnXdrElement_53)); }
	inline XmlQualifiedName_t2760654312 * get_QnXdrElement_53() const { return ___QnXdrElement_53; }
	inline XmlQualifiedName_t2760654312 ** get_address_of_QnXdrElement_53() { return &___QnXdrElement_53; }
	inline void set_QnXdrElement_53(XmlQualifiedName_t2760654312 * value)
	{
		___QnXdrElement_53 = value;
		Il2CppCodeGenWriteBarrier((&___QnXdrElement_53), value);
	}

	inline static int32_t get_offset_of_QnXdrGroup_54() { return static_cast<int32_t>(offsetof(SchemaNames_t661607975, ___QnXdrGroup_54)); }
	inline XmlQualifiedName_t2760654312 * get_QnXdrGroup_54() const { return ___QnXdrGroup_54; }
	inline XmlQualifiedName_t2760654312 ** get_address_of_QnXdrGroup_54() { return &___QnXdrGroup_54; }
	inline void set_QnXdrGroup_54(XmlQualifiedName_t2760654312 * value)
	{
		___QnXdrGroup_54 = value;
		Il2CppCodeGenWriteBarrier((&___QnXdrGroup_54), value);
	}

	inline static int32_t get_offset_of_QnXdrAttributeType_55() { return static_cast<int32_t>(offsetof(SchemaNames_t661607975, ___QnXdrAttributeType_55)); }
	inline XmlQualifiedName_t2760654312 * get_QnXdrAttributeType_55() const { return ___QnXdrAttributeType_55; }
	inline XmlQualifiedName_t2760654312 ** get_address_of_QnXdrAttributeType_55() { return &___QnXdrAttributeType_55; }
	inline void set_QnXdrAttributeType_55(XmlQualifiedName_t2760654312 * value)
	{
		___QnXdrAttributeType_55 = value;
		Il2CppCodeGenWriteBarrier((&___QnXdrAttributeType_55), value);
	}

	inline static int32_t get_offset_of_QnXdrAttribute_56() { return static_cast<int32_t>(offsetof(SchemaNames_t661607975, ___QnXdrAttribute_56)); }
	inline XmlQualifiedName_t2760654312 * get_QnXdrAttribute_56() const { return ___QnXdrAttribute_56; }
	inline XmlQualifiedName_t2760654312 ** get_address_of_QnXdrAttribute_56() { return &___QnXdrAttribute_56; }
	inline void set_QnXdrAttribute_56(XmlQualifiedName_t2760654312 * value)
	{
		___QnXdrAttribute_56 = value;
		Il2CppCodeGenWriteBarrier((&___QnXdrAttribute_56), value);
	}

	inline static int32_t get_offset_of_QnXdrDataType_57() { return static_cast<int32_t>(offsetof(SchemaNames_t661607975, ___QnXdrDataType_57)); }
	inline XmlQualifiedName_t2760654312 * get_QnXdrDataType_57() const { return ___QnXdrDataType_57; }
	inline XmlQualifiedName_t2760654312 ** get_address_of_QnXdrDataType_57() { return &___QnXdrDataType_57; }
	inline void set_QnXdrDataType_57(XmlQualifiedName_t2760654312 * value)
	{
		___QnXdrDataType_57 = value;
		Il2CppCodeGenWriteBarrier((&___QnXdrDataType_57), value);
	}

	inline static int32_t get_offset_of_QnXdrDescription_58() { return static_cast<int32_t>(offsetof(SchemaNames_t661607975, ___QnXdrDescription_58)); }
	inline XmlQualifiedName_t2760654312 * get_QnXdrDescription_58() const { return ___QnXdrDescription_58; }
	inline XmlQualifiedName_t2760654312 ** get_address_of_QnXdrDescription_58() { return &___QnXdrDescription_58; }
	inline void set_QnXdrDescription_58(XmlQualifiedName_t2760654312 * value)
	{
		___QnXdrDescription_58 = value;
		Il2CppCodeGenWriteBarrier((&___QnXdrDescription_58), value);
	}

	inline static int32_t get_offset_of_QnXdrExtends_59() { return static_cast<int32_t>(offsetof(SchemaNames_t661607975, ___QnXdrExtends_59)); }
	inline XmlQualifiedName_t2760654312 * get_QnXdrExtends_59() const { return ___QnXdrExtends_59; }
	inline XmlQualifiedName_t2760654312 ** get_address_of_QnXdrExtends_59() { return &___QnXdrExtends_59; }
	inline void set_QnXdrExtends_59(XmlQualifiedName_t2760654312 * value)
	{
		___QnXdrExtends_59 = value;
		Il2CppCodeGenWriteBarrier((&___QnXdrExtends_59), value);
	}

	inline static int32_t get_offset_of_QnXdrAliasSchema_60() { return static_cast<int32_t>(offsetof(SchemaNames_t661607975, ___QnXdrAliasSchema_60)); }
	inline XmlQualifiedName_t2760654312 * get_QnXdrAliasSchema_60() const { return ___QnXdrAliasSchema_60; }
	inline XmlQualifiedName_t2760654312 ** get_address_of_QnXdrAliasSchema_60() { return &___QnXdrAliasSchema_60; }
	inline void set_QnXdrAliasSchema_60(XmlQualifiedName_t2760654312 * value)
	{
		___QnXdrAliasSchema_60 = value;
		Il2CppCodeGenWriteBarrier((&___QnXdrAliasSchema_60), value);
	}

	inline static int32_t get_offset_of_QnDtType_61() { return static_cast<int32_t>(offsetof(SchemaNames_t661607975, ___QnDtType_61)); }
	inline XmlQualifiedName_t2760654312 * get_QnDtType_61() const { return ___QnDtType_61; }
	inline XmlQualifiedName_t2760654312 ** get_address_of_QnDtType_61() { return &___QnDtType_61; }
	inline void set_QnDtType_61(XmlQualifiedName_t2760654312 * value)
	{
		___QnDtType_61 = value;
		Il2CppCodeGenWriteBarrier((&___QnDtType_61), value);
	}

	inline static int32_t get_offset_of_QnDtValues_62() { return static_cast<int32_t>(offsetof(SchemaNames_t661607975, ___QnDtValues_62)); }
	inline XmlQualifiedName_t2760654312 * get_QnDtValues_62() const { return ___QnDtValues_62; }
	inline XmlQualifiedName_t2760654312 ** get_address_of_QnDtValues_62() { return &___QnDtValues_62; }
	inline void set_QnDtValues_62(XmlQualifiedName_t2760654312 * value)
	{
		___QnDtValues_62 = value;
		Il2CppCodeGenWriteBarrier((&___QnDtValues_62), value);
	}

	inline static int32_t get_offset_of_QnDtMaxLength_63() { return static_cast<int32_t>(offsetof(SchemaNames_t661607975, ___QnDtMaxLength_63)); }
	inline XmlQualifiedName_t2760654312 * get_QnDtMaxLength_63() const { return ___QnDtMaxLength_63; }
	inline XmlQualifiedName_t2760654312 ** get_address_of_QnDtMaxLength_63() { return &___QnDtMaxLength_63; }
	inline void set_QnDtMaxLength_63(XmlQualifiedName_t2760654312 * value)
	{
		___QnDtMaxLength_63 = value;
		Il2CppCodeGenWriteBarrier((&___QnDtMaxLength_63), value);
	}

	inline static int32_t get_offset_of_QnDtMinLength_64() { return static_cast<int32_t>(offsetof(SchemaNames_t661607975, ___QnDtMinLength_64)); }
	inline XmlQualifiedName_t2760654312 * get_QnDtMinLength_64() const { return ___QnDtMinLength_64; }
	inline XmlQualifiedName_t2760654312 ** get_address_of_QnDtMinLength_64() { return &___QnDtMinLength_64; }
	inline void set_QnDtMinLength_64(XmlQualifiedName_t2760654312 * value)
	{
		___QnDtMinLength_64 = value;
		Il2CppCodeGenWriteBarrier((&___QnDtMinLength_64), value);
	}

	inline static int32_t get_offset_of_QnDtMax_65() { return static_cast<int32_t>(offsetof(SchemaNames_t661607975, ___QnDtMax_65)); }
	inline XmlQualifiedName_t2760654312 * get_QnDtMax_65() const { return ___QnDtMax_65; }
	inline XmlQualifiedName_t2760654312 ** get_address_of_QnDtMax_65() { return &___QnDtMax_65; }
	inline void set_QnDtMax_65(XmlQualifiedName_t2760654312 * value)
	{
		___QnDtMax_65 = value;
		Il2CppCodeGenWriteBarrier((&___QnDtMax_65), value);
	}

	inline static int32_t get_offset_of_QnDtMin_66() { return static_cast<int32_t>(offsetof(SchemaNames_t661607975, ___QnDtMin_66)); }
	inline XmlQualifiedName_t2760654312 * get_QnDtMin_66() const { return ___QnDtMin_66; }
	inline XmlQualifiedName_t2760654312 ** get_address_of_QnDtMin_66() { return &___QnDtMin_66; }
	inline void set_QnDtMin_66(XmlQualifiedName_t2760654312 * value)
	{
		___QnDtMin_66 = value;
		Il2CppCodeGenWriteBarrier((&___QnDtMin_66), value);
	}

	inline static int32_t get_offset_of_QnDtMinExclusive_67() { return static_cast<int32_t>(offsetof(SchemaNames_t661607975, ___QnDtMinExclusive_67)); }
	inline XmlQualifiedName_t2760654312 * get_QnDtMinExclusive_67() const { return ___QnDtMinExclusive_67; }
	inline XmlQualifiedName_t2760654312 ** get_address_of_QnDtMinExclusive_67() { return &___QnDtMinExclusive_67; }
	inline void set_QnDtMinExclusive_67(XmlQualifiedName_t2760654312 * value)
	{
		___QnDtMinExclusive_67 = value;
		Il2CppCodeGenWriteBarrier((&___QnDtMinExclusive_67), value);
	}

	inline static int32_t get_offset_of_QnDtMaxExclusive_68() { return static_cast<int32_t>(offsetof(SchemaNames_t661607975, ___QnDtMaxExclusive_68)); }
	inline XmlQualifiedName_t2760654312 * get_QnDtMaxExclusive_68() const { return ___QnDtMaxExclusive_68; }
	inline XmlQualifiedName_t2760654312 ** get_address_of_QnDtMaxExclusive_68() { return &___QnDtMaxExclusive_68; }
	inline void set_QnDtMaxExclusive_68(XmlQualifiedName_t2760654312 * value)
	{
		___QnDtMaxExclusive_68 = value;
		Il2CppCodeGenWriteBarrier((&___QnDtMaxExclusive_68), value);
	}

	inline static int32_t get_offset_of_QnTargetNamespace_69() { return static_cast<int32_t>(offsetof(SchemaNames_t661607975, ___QnTargetNamespace_69)); }
	inline XmlQualifiedName_t2760654312 * get_QnTargetNamespace_69() const { return ___QnTargetNamespace_69; }
	inline XmlQualifiedName_t2760654312 ** get_address_of_QnTargetNamespace_69() { return &___QnTargetNamespace_69; }
	inline void set_QnTargetNamespace_69(XmlQualifiedName_t2760654312 * value)
	{
		___QnTargetNamespace_69 = value;
		Il2CppCodeGenWriteBarrier((&___QnTargetNamespace_69), value);
	}

	inline static int32_t get_offset_of_QnVersion_70() { return static_cast<int32_t>(offsetof(SchemaNames_t661607975, ___QnVersion_70)); }
	inline XmlQualifiedName_t2760654312 * get_QnVersion_70() const { return ___QnVersion_70; }
	inline XmlQualifiedName_t2760654312 ** get_address_of_QnVersion_70() { return &___QnVersion_70; }
	inline void set_QnVersion_70(XmlQualifiedName_t2760654312 * value)
	{
		___QnVersion_70 = value;
		Il2CppCodeGenWriteBarrier((&___QnVersion_70), value);
	}

	inline static int32_t get_offset_of_QnFinalDefault_71() { return static_cast<int32_t>(offsetof(SchemaNames_t661607975, ___QnFinalDefault_71)); }
	inline XmlQualifiedName_t2760654312 * get_QnFinalDefault_71() const { return ___QnFinalDefault_71; }
	inline XmlQualifiedName_t2760654312 ** get_address_of_QnFinalDefault_71() { return &___QnFinalDefault_71; }
	inline void set_QnFinalDefault_71(XmlQualifiedName_t2760654312 * value)
	{
		___QnFinalDefault_71 = value;
		Il2CppCodeGenWriteBarrier((&___QnFinalDefault_71), value);
	}

	inline static int32_t get_offset_of_QnBlockDefault_72() { return static_cast<int32_t>(offsetof(SchemaNames_t661607975, ___QnBlockDefault_72)); }
	inline XmlQualifiedName_t2760654312 * get_QnBlockDefault_72() const { return ___QnBlockDefault_72; }
	inline XmlQualifiedName_t2760654312 ** get_address_of_QnBlockDefault_72() { return &___QnBlockDefault_72; }
	inline void set_QnBlockDefault_72(XmlQualifiedName_t2760654312 * value)
	{
		___QnBlockDefault_72 = value;
		Il2CppCodeGenWriteBarrier((&___QnBlockDefault_72), value);
	}

	inline static int32_t get_offset_of_QnFixed_73() { return static_cast<int32_t>(offsetof(SchemaNames_t661607975, ___QnFixed_73)); }
	inline XmlQualifiedName_t2760654312 * get_QnFixed_73() const { return ___QnFixed_73; }
	inline XmlQualifiedName_t2760654312 ** get_address_of_QnFixed_73() { return &___QnFixed_73; }
	inline void set_QnFixed_73(XmlQualifiedName_t2760654312 * value)
	{
		___QnFixed_73 = value;
		Il2CppCodeGenWriteBarrier((&___QnFixed_73), value);
	}

	inline static int32_t get_offset_of_QnAbstract_74() { return static_cast<int32_t>(offsetof(SchemaNames_t661607975, ___QnAbstract_74)); }
	inline XmlQualifiedName_t2760654312 * get_QnAbstract_74() const { return ___QnAbstract_74; }
	inline XmlQualifiedName_t2760654312 ** get_address_of_QnAbstract_74() { return &___QnAbstract_74; }
	inline void set_QnAbstract_74(XmlQualifiedName_t2760654312 * value)
	{
		___QnAbstract_74 = value;
		Il2CppCodeGenWriteBarrier((&___QnAbstract_74), value);
	}

	inline static int32_t get_offset_of_QnBlock_75() { return static_cast<int32_t>(offsetof(SchemaNames_t661607975, ___QnBlock_75)); }
	inline XmlQualifiedName_t2760654312 * get_QnBlock_75() const { return ___QnBlock_75; }
	inline XmlQualifiedName_t2760654312 ** get_address_of_QnBlock_75() { return &___QnBlock_75; }
	inline void set_QnBlock_75(XmlQualifiedName_t2760654312 * value)
	{
		___QnBlock_75 = value;
		Il2CppCodeGenWriteBarrier((&___QnBlock_75), value);
	}

	inline static int32_t get_offset_of_QnSubstitutionGroup_76() { return static_cast<int32_t>(offsetof(SchemaNames_t661607975, ___QnSubstitutionGroup_76)); }
	inline XmlQualifiedName_t2760654312 * get_QnSubstitutionGroup_76() const { return ___QnSubstitutionGroup_76; }
	inline XmlQualifiedName_t2760654312 ** get_address_of_QnSubstitutionGroup_76() { return &___QnSubstitutionGroup_76; }
	inline void set_QnSubstitutionGroup_76(XmlQualifiedName_t2760654312 * value)
	{
		___QnSubstitutionGroup_76 = value;
		Il2CppCodeGenWriteBarrier((&___QnSubstitutionGroup_76), value);
	}

	inline static int32_t get_offset_of_QnFinal_77() { return static_cast<int32_t>(offsetof(SchemaNames_t661607975, ___QnFinal_77)); }
	inline XmlQualifiedName_t2760654312 * get_QnFinal_77() const { return ___QnFinal_77; }
	inline XmlQualifiedName_t2760654312 ** get_address_of_QnFinal_77() { return &___QnFinal_77; }
	inline void set_QnFinal_77(XmlQualifiedName_t2760654312 * value)
	{
		___QnFinal_77 = value;
		Il2CppCodeGenWriteBarrier((&___QnFinal_77), value);
	}

	inline static int32_t get_offset_of_QnNillable_78() { return static_cast<int32_t>(offsetof(SchemaNames_t661607975, ___QnNillable_78)); }
	inline XmlQualifiedName_t2760654312 * get_QnNillable_78() const { return ___QnNillable_78; }
	inline XmlQualifiedName_t2760654312 ** get_address_of_QnNillable_78() { return &___QnNillable_78; }
	inline void set_QnNillable_78(XmlQualifiedName_t2760654312 * value)
	{
		___QnNillable_78 = value;
		Il2CppCodeGenWriteBarrier((&___QnNillable_78), value);
	}

	inline static int32_t get_offset_of_QnRef_79() { return static_cast<int32_t>(offsetof(SchemaNames_t661607975, ___QnRef_79)); }
	inline XmlQualifiedName_t2760654312 * get_QnRef_79() const { return ___QnRef_79; }
	inline XmlQualifiedName_t2760654312 ** get_address_of_QnRef_79() { return &___QnRef_79; }
	inline void set_QnRef_79(XmlQualifiedName_t2760654312 * value)
	{
		___QnRef_79 = value;
		Il2CppCodeGenWriteBarrier((&___QnRef_79), value);
	}

	inline static int32_t get_offset_of_QnBase_80() { return static_cast<int32_t>(offsetof(SchemaNames_t661607975, ___QnBase_80)); }
	inline XmlQualifiedName_t2760654312 * get_QnBase_80() const { return ___QnBase_80; }
	inline XmlQualifiedName_t2760654312 ** get_address_of_QnBase_80() { return &___QnBase_80; }
	inline void set_QnBase_80(XmlQualifiedName_t2760654312 * value)
	{
		___QnBase_80 = value;
		Il2CppCodeGenWriteBarrier((&___QnBase_80), value);
	}

	inline static int32_t get_offset_of_QnDerivedBy_81() { return static_cast<int32_t>(offsetof(SchemaNames_t661607975, ___QnDerivedBy_81)); }
	inline XmlQualifiedName_t2760654312 * get_QnDerivedBy_81() const { return ___QnDerivedBy_81; }
	inline XmlQualifiedName_t2760654312 ** get_address_of_QnDerivedBy_81() { return &___QnDerivedBy_81; }
	inline void set_QnDerivedBy_81(XmlQualifiedName_t2760654312 * value)
	{
		___QnDerivedBy_81 = value;
		Il2CppCodeGenWriteBarrier((&___QnDerivedBy_81), value);
	}

	inline static int32_t get_offset_of_QnNamespace_82() { return static_cast<int32_t>(offsetof(SchemaNames_t661607975, ___QnNamespace_82)); }
	inline XmlQualifiedName_t2760654312 * get_QnNamespace_82() const { return ___QnNamespace_82; }
	inline XmlQualifiedName_t2760654312 ** get_address_of_QnNamespace_82() { return &___QnNamespace_82; }
	inline void set_QnNamespace_82(XmlQualifiedName_t2760654312 * value)
	{
		___QnNamespace_82 = value;
		Il2CppCodeGenWriteBarrier((&___QnNamespace_82), value);
	}

	inline static int32_t get_offset_of_QnProcessContents_83() { return static_cast<int32_t>(offsetof(SchemaNames_t661607975, ___QnProcessContents_83)); }
	inline XmlQualifiedName_t2760654312 * get_QnProcessContents_83() const { return ___QnProcessContents_83; }
	inline XmlQualifiedName_t2760654312 ** get_address_of_QnProcessContents_83() { return &___QnProcessContents_83; }
	inline void set_QnProcessContents_83(XmlQualifiedName_t2760654312 * value)
	{
		___QnProcessContents_83 = value;
		Il2CppCodeGenWriteBarrier((&___QnProcessContents_83), value);
	}

	inline static int32_t get_offset_of_QnRefer_84() { return static_cast<int32_t>(offsetof(SchemaNames_t661607975, ___QnRefer_84)); }
	inline XmlQualifiedName_t2760654312 * get_QnRefer_84() const { return ___QnRefer_84; }
	inline XmlQualifiedName_t2760654312 ** get_address_of_QnRefer_84() { return &___QnRefer_84; }
	inline void set_QnRefer_84(XmlQualifiedName_t2760654312 * value)
	{
		___QnRefer_84 = value;
		Il2CppCodeGenWriteBarrier((&___QnRefer_84), value);
	}

	inline static int32_t get_offset_of_QnPublic_85() { return static_cast<int32_t>(offsetof(SchemaNames_t661607975, ___QnPublic_85)); }
	inline XmlQualifiedName_t2760654312 * get_QnPublic_85() const { return ___QnPublic_85; }
	inline XmlQualifiedName_t2760654312 ** get_address_of_QnPublic_85() { return &___QnPublic_85; }
	inline void set_QnPublic_85(XmlQualifiedName_t2760654312 * value)
	{
		___QnPublic_85 = value;
		Il2CppCodeGenWriteBarrier((&___QnPublic_85), value);
	}

	inline static int32_t get_offset_of_QnSystem_86() { return static_cast<int32_t>(offsetof(SchemaNames_t661607975, ___QnSystem_86)); }
	inline XmlQualifiedName_t2760654312 * get_QnSystem_86() const { return ___QnSystem_86; }
	inline XmlQualifiedName_t2760654312 ** get_address_of_QnSystem_86() { return &___QnSystem_86; }
	inline void set_QnSystem_86(XmlQualifiedName_t2760654312 * value)
	{
		___QnSystem_86 = value;
		Il2CppCodeGenWriteBarrier((&___QnSystem_86), value);
	}

	inline static int32_t get_offset_of_QnSchemaLocation_87() { return static_cast<int32_t>(offsetof(SchemaNames_t661607975, ___QnSchemaLocation_87)); }
	inline XmlQualifiedName_t2760654312 * get_QnSchemaLocation_87() const { return ___QnSchemaLocation_87; }
	inline XmlQualifiedName_t2760654312 ** get_address_of_QnSchemaLocation_87() { return &___QnSchemaLocation_87; }
	inline void set_QnSchemaLocation_87(XmlQualifiedName_t2760654312 * value)
	{
		___QnSchemaLocation_87 = value;
		Il2CppCodeGenWriteBarrier((&___QnSchemaLocation_87), value);
	}

	inline static int32_t get_offset_of_QnValue_88() { return static_cast<int32_t>(offsetof(SchemaNames_t661607975, ___QnValue_88)); }
	inline XmlQualifiedName_t2760654312 * get_QnValue_88() const { return ___QnValue_88; }
	inline XmlQualifiedName_t2760654312 ** get_address_of_QnValue_88() { return &___QnValue_88; }
	inline void set_QnValue_88(XmlQualifiedName_t2760654312 * value)
	{
		___QnValue_88 = value;
		Il2CppCodeGenWriteBarrier((&___QnValue_88), value);
	}

	inline static int32_t get_offset_of_QnUse_89() { return static_cast<int32_t>(offsetof(SchemaNames_t661607975, ___QnUse_89)); }
	inline XmlQualifiedName_t2760654312 * get_QnUse_89() const { return ___QnUse_89; }
	inline XmlQualifiedName_t2760654312 ** get_address_of_QnUse_89() { return &___QnUse_89; }
	inline void set_QnUse_89(XmlQualifiedName_t2760654312 * value)
	{
		___QnUse_89 = value;
		Il2CppCodeGenWriteBarrier((&___QnUse_89), value);
	}

	inline static int32_t get_offset_of_QnForm_90() { return static_cast<int32_t>(offsetof(SchemaNames_t661607975, ___QnForm_90)); }
	inline XmlQualifiedName_t2760654312 * get_QnForm_90() const { return ___QnForm_90; }
	inline XmlQualifiedName_t2760654312 ** get_address_of_QnForm_90() { return &___QnForm_90; }
	inline void set_QnForm_90(XmlQualifiedName_t2760654312 * value)
	{
		___QnForm_90 = value;
		Il2CppCodeGenWriteBarrier((&___QnForm_90), value);
	}

	inline static int32_t get_offset_of_QnElementFormDefault_91() { return static_cast<int32_t>(offsetof(SchemaNames_t661607975, ___QnElementFormDefault_91)); }
	inline XmlQualifiedName_t2760654312 * get_QnElementFormDefault_91() const { return ___QnElementFormDefault_91; }
	inline XmlQualifiedName_t2760654312 ** get_address_of_QnElementFormDefault_91() { return &___QnElementFormDefault_91; }
	inline void set_QnElementFormDefault_91(XmlQualifiedName_t2760654312 * value)
	{
		___QnElementFormDefault_91 = value;
		Il2CppCodeGenWriteBarrier((&___QnElementFormDefault_91), value);
	}

	inline static int32_t get_offset_of_QnAttributeFormDefault_92() { return static_cast<int32_t>(offsetof(SchemaNames_t661607975, ___QnAttributeFormDefault_92)); }
	inline XmlQualifiedName_t2760654312 * get_QnAttributeFormDefault_92() const { return ___QnAttributeFormDefault_92; }
	inline XmlQualifiedName_t2760654312 ** get_address_of_QnAttributeFormDefault_92() { return &___QnAttributeFormDefault_92; }
	inline void set_QnAttributeFormDefault_92(XmlQualifiedName_t2760654312 * value)
	{
		___QnAttributeFormDefault_92 = value;
		Il2CppCodeGenWriteBarrier((&___QnAttributeFormDefault_92), value);
	}

	inline static int32_t get_offset_of_QnItemType_93() { return static_cast<int32_t>(offsetof(SchemaNames_t661607975, ___QnItemType_93)); }
	inline XmlQualifiedName_t2760654312 * get_QnItemType_93() const { return ___QnItemType_93; }
	inline XmlQualifiedName_t2760654312 ** get_address_of_QnItemType_93() { return &___QnItemType_93; }
	inline void set_QnItemType_93(XmlQualifiedName_t2760654312 * value)
	{
		___QnItemType_93 = value;
		Il2CppCodeGenWriteBarrier((&___QnItemType_93), value);
	}

	inline static int32_t get_offset_of_QnMemberTypes_94() { return static_cast<int32_t>(offsetof(SchemaNames_t661607975, ___QnMemberTypes_94)); }
	inline XmlQualifiedName_t2760654312 * get_QnMemberTypes_94() const { return ___QnMemberTypes_94; }
	inline XmlQualifiedName_t2760654312 ** get_address_of_QnMemberTypes_94() { return &___QnMemberTypes_94; }
	inline void set_QnMemberTypes_94(XmlQualifiedName_t2760654312 * value)
	{
		___QnMemberTypes_94 = value;
		Il2CppCodeGenWriteBarrier((&___QnMemberTypes_94), value);
	}

	inline static int32_t get_offset_of_QnXPath_95() { return static_cast<int32_t>(offsetof(SchemaNames_t661607975, ___QnXPath_95)); }
	inline XmlQualifiedName_t2760654312 * get_QnXPath_95() const { return ___QnXPath_95; }
	inline XmlQualifiedName_t2760654312 ** get_address_of_QnXPath_95() { return &___QnXPath_95; }
	inline void set_QnXPath_95(XmlQualifiedName_t2760654312 * value)
	{
		___QnXPath_95 = value;
		Il2CppCodeGenWriteBarrier((&___QnXPath_95), value);
	}

	inline static int32_t get_offset_of_QnXsdSchema_96() { return static_cast<int32_t>(offsetof(SchemaNames_t661607975, ___QnXsdSchema_96)); }
	inline XmlQualifiedName_t2760654312 * get_QnXsdSchema_96() const { return ___QnXsdSchema_96; }
	inline XmlQualifiedName_t2760654312 ** get_address_of_QnXsdSchema_96() { return &___QnXsdSchema_96; }
	inline void set_QnXsdSchema_96(XmlQualifiedName_t2760654312 * value)
	{
		___QnXsdSchema_96 = value;
		Il2CppCodeGenWriteBarrier((&___QnXsdSchema_96), value);
	}

	inline static int32_t get_offset_of_QnXsdAnnotation_97() { return static_cast<int32_t>(offsetof(SchemaNames_t661607975, ___QnXsdAnnotation_97)); }
	inline XmlQualifiedName_t2760654312 * get_QnXsdAnnotation_97() const { return ___QnXsdAnnotation_97; }
	inline XmlQualifiedName_t2760654312 ** get_address_of_QnXsdAnnotation_97() { return &___QnXsdAnnotation_97; }
	inline void set_QnXsdAnnotation_97(XmlQualifiedName_t2760654312 * value)
	{
		___QnXsdAnnotation_97 = value;
		Il2CppCodeGenWriteBarrier((&___QnXsdAnnotation_97), value);
	}

	inline static int32_t get_offset_of_QnXsdInclude_98() { return static_cast<int32_t>(offsetof(SchemaNames_t661607975, ___QnXsdInclude_98)); }
	inline XmlQualifiedName_t2760654312 * get_QnXsdInclude_98() const { return ___QnXsdInclude_98; }
	inline XmlQualifiedName_t2760654312 ** get_address_of_QnXsdInclude_98() { return &___QnXsdInclude_98; }
	inline void set_QnXsdInclude_98(XmlQualifiedName_t2760654312 * value)
	{
		___QnXsdInclude_98 = value;
		Il2CppCodeGenWriteBarrier((&___QnXsdInclude_98), value);
	}

	inline static int32_t get_offset_of_QnXsdImport_99() { return static_cast<int32_t>(offsetof(SchemaNames_t661607975, ___QnXsdImport_99)); }
	inline XmlQualifiedName_t2760654312 * get_QnXsdImport_99() const { return ___QnXsdImport_99; }
	inline XmlQualifiedName_t2760654312 ** get_address_of_QnXsdImport_99() { return &___QnXsdImport_99; }
	inline void set_QnXsdImport_99(XmlQualifiedName_t2760654312 * value)
	{
		___QnXsdImport_99 = value;
		Il2CppCodeGenWriteBarrier((&___QnXsdImport_99), value);
	}

	inline static int32_t get_offset_of_QnXsdElement_100() { return static_cast<int32_t>(offsetof(SchemaNames_t661607975, ___QnXsdElement_100)); }
	inline XmlQualifiedName_t2760654312 * get_QnXsdElement_100() const { return ___QnXsdElement_100; }
	inline XmlQualifiedName_t2760654312 ** get_address_of_QnXsdElement_100() { return &___QnXsdElement_100; }
	inline void set_QnXsdElement_100(XmlQualifiedName_t2760654312 * value)
	{
		___QnXsdElement_100 = value;
		Il2CppCodeGenWriteBarrier((&___QnXsdElement_100), value);
	}

	inline static int32_t get_offset_of_QnXsdAttribute_101() { return static_cast<int32_t>(offsetof(SchemaNames_t661607975, ___QnXsdAttribute_101)); }
	inline XmlQualifiedName_t2760654312 * get_QnXsdAttribute_101() const { return ___QnXsdAttribute_101; }
	inline XmlQualifiedName_t2760654312 ** get_address_of_QnXsdAttribute_101() { return &___QnXsdAttribute_101; }
	inline void set_QnXsdAttribute_101(XmlQualifiedName_t2760654312 * value)
	{
		___QnXsdAttribute_101 = value;
		Il2CppCodeGenWriteBarrier((&___QnXsdAttribute_101), value);
	}

	inline static int32_t get_offset_of_QnXsdAttributeGroup_102() { return static_cast<int32_t>(offsetof(SchemaNames_t661607975, ___QnXsdAttributeGroup_102)); }
	inline XmlQualifiedName_t2760654312 * get_QnXsdAttributeGroup_102() const { return ___QnXsdAttributeGroup_102; }
	inline XmlQualifiedName_t2760654312 ** get_address_of_QnXsdAttributeGroup_102() { return &___QnXsdAttributeGroup_102; }
	inline void set_QnXsdAttributeGroup_102(XmlQualifiedName_t2760654312 * value)
	{
		___QnXsdAttributeGroup_102 = value;
		Il2CppCodeGenWriteBarrier((&___QnXsdAttributeGroup_102), value);
	}

	inline static int32_t get_offset_of_QnXsdAnyAttribute_103() { return static_cast<int32_t>(offsetof(SchemaNames_t661607975, ___QnXsdAnyAttribute_103)); }
	inline XmlQualifiedName_t2760654312 * get_QnXsdAnyAttribute_103() const { return ___QnXsdAnyAttribute_103; }
	inline XmlQualifiedName_t2760654312 ** get_address_of_QnXsdAnyAttribute_103() { return &___QnXsdAnyAttribute_103; }
	inline void set_QnXsdAnyAttribute_103(XmlQualifiedName_t2760654312 * value)
	{
		___QnXsdAnyAttribute_103 = value;
		Il2CppCodeGenWriteBarrier((&___QnXsdAnyAttribute_103), value);
	}

	inline static int32_t get_offset_of_QnXsdGroup_104() { return static_cast<int32_t>(offsetof(SchemaNames_t661607975, ___QnXsdGroup_104)); }
	inline XmlQualifiedName_t2760654312 * get_QnXsdGroup_104() const { return ___QnXsdGroup_104; }
	inline XmlQualifiedName_t2760654312 ** get_address_of_QnXsdGroup_104() { return &___QnXsdGroup_104; }
	inline void set_QnXsdGroup_104(XmlQualifiedName_t2760654312 * value)
	{
		___QnXsdGroup_104 = value;
		Il2CppCodeGenWriteBarrier((&___QnXsdGroup_104), value);
	}

	inline static int32_t get_offset_of_QnXsdAll_105() { return static_cast<int32_t>(offsetof(SchemaNames_t661607975, ___QnXsdAll_105)); }
	inline XmlQualifiedName_t2760654312 * get_QnXsdAll_105() const { return ___QnXsdAll_105; }
	inline XmlQualifiedName_t2760654312 ** get_address_of_QnXsdAll_105() { return &___QnXsdAll_105; }
	inline void set_QnXsdAll_105(XmlQualifiedName_t2760654312 * value)
	{
		___QnXsdAll_105 = value;
		Il2CppCodeGenWriteBarrier((&___QnXsdAll_105), value);
	}

	inline static int32_t get_offset_of_QnXsdChoice_106() { return static_cast<int32_t>(offsetof(SchemaNames_t661607975, ___QnXsdChoice_106)); }
	inline XmlQualifiedName_t2760654312 * get_QnXsdChoice_106() const { return ___QnXsdChoice_106; }
	inline XmlQualifiedName_t2760654312 ** get_address_of_QnXsdChoice_106() { return &___QnXsdChoice_106; }
	inline void set_QnXsdChoice_106(XmlQualifiedName_t2760654312 * value)
	{
		___QnXsdChoice_106 = value;
		Il2CppCodeGenWriteBarrier((&___QnXsdChoice_106), value);
	}

	inline static int32_t get_offset_of_QnXsdSequence_107() { return static_cast<int32_t>(offsetof(SchemaNames_t661607975, ___QnXsdSequence_107)); }
	inline XmlQualifiedName_t2760654312 * get_QnXsdSequence_107() const { return ___QnXsdSequence_107; }
	inline XmlQualifiedName_t2760654312 ** get_address_of_QnXsdSequence_107() { return &___QnXsdSequence_107; }
	inline void set_QnXsdSequence_107(XmlQualifiedName_t2760654312 * value)
	{
		___QnXsdSequence_107 = value;
		Il2CppCodeGenWriteBarrier((&___QnXsdSequence_107), value);
	}

	inline static int32_t get_offset_of_QnXsdAny_108() { return static_cast<int32_t>(offsetof(SchemaNames_t661607975, ___QnXsdAny_108)); }
	inline XmlQualifiedName_t2760654312 * get_QnXsdAny_108() const { return ___QnXsdAny_108; }
	inline XmlQualifiedName_t2760654312 ** get_address_of_QnXsdAny_108() { return &___QnXsdAny_108; }
	inline void set_QnXsdAny_108(XmlQualifiedName_t2760654312 * value)
	{
		___QnXsdAny_108 = value;
		Il2CppCodeGenWriteBarrier((&___QnXsdAny_108), value);
	}

	inline static int32_t get_offset_of_QnXsdNotation_109() { return static_cast<int32_t>(offsetof(SchemaNames_t661607975, ___QnXsdNotation_109)); }
	inline XmlQualifiedName_t2760654312 * get_QnXsdNotation_109() const { return ___QnXsdNotation_109; }
	inline XmlQualifiedName_t2760654312 ** get_address_of_QnXsdNotation_109() { return &___QnXsdNotation_109; }
	inline void set_QnXsdNotation_109(XmlQualifiedName_t2760654312 * value)
	{
		___QnXsdNotation_109 = value;
		Il2CppCodeGenWriteBarrier((&___QnXsdNotation_109), value);
	}

	inline static int32_t get_offset_of_QnXsdSimpleType_110() { return static_cast<int32_t>(offsetof(SchemaNames_t661607975, ___QnXsdSimpleType_110)); }
	inline XmlQualifiedName_t2760654312 * get_QnXsdSimpleType_110() const { return ___QnXsdSimpleType_110; }
	inline XmlQualifiedName_t2760654312 ** get_address_of_QnXsdSimpleType_110() { return &___QnXsdSimpleType_110; }
	inline void set_QnXsdSimpleType_110(XmlQualifiedName_t2760654312 * value)
	{
		___QnXsdSimpleType_110 = value;
		Il2CppCodeGenWriteBarrier((&___QnXsdSimpleType_110), value);
	}

	inline static int32_t get_offset_of_QnXsdComplexType_111() { return static_cast<int32_t>(offsetof(SchemaNames_t661607975, ___QnXsdComplexType_111)); }
	inline XmlQualifiedName_t2760654312 * get_QnXsdComplexType_111() const { return ___QnXsdComplexType_111; }
	inline XmlQualifiedName_t2760654312 ** get_address_of_QnXsdComplexType_111() { return &___QnXsdComplexType_111; }
	inline void set_QnXsdComplexType_111(XmlQualifiedName_t2760654312 * value)
	{
		___QnXsdComplexType_111 = value;
		Il2CppCodeGenWriteBarrier((&___QnXsdComplexType_111), value);
	}

	inline static int32_t get_offset_of_QnXsdUnique_112() { return static_cast<int32_t>(offsetof(SchemaNames_t661607975, ___QnXsdUnique_112)); }
	inline XmlQualifiedName_t2760654312 * get_QnXsdUnique_112() const { return ___QnXsdUnique_112; }
	inline XmlQualifiedName_t2760654312 ** get_address_of_QnXsdUnique_112() { return &___QnXsdUnique_112; }
	inline void set_QnXsdUnique_112(XmlQualifiedName_t2760654312 * value)
	{
		___QnXsdUnique_112 = value;
		Il2CppCodeGenWriteBarrier((&___QnXsdUnique_112), value);
	}

	inline static int32_t get_offset_of_QnXsdKey_113() { return static_cast<int32_t>(offsetof(SchemaNames_t661607975, ___QnXsdKey_113)); }
	inline XmlQualifiedName_t2760654312 * get_QnXsdKey_113() const { return ___QnXsdKey_113; }
	inline XmlQualifiedName_t2760654312 ** get_address_of_QnXsdKey_113() { return &___QnXsdKey_113; }
	inline void set_QnXsdKey_113(XmlQualifiedName_t2760654312 * value)
	{
		___QnXsdKey_113 = value;
		Il2CppCodeGenWriteBarrier((&___QnXsdKey_113), value);
	}

	inline static int32_t get_offset_of_QnXsdKeyRef_114() { return static_cast<int32_t>(offsetof(SchemaNames_t661607975, ___QnXsdKeyRef_114)); }
	inline XmlQualifiedName_t2760654312 * get_QnXsdKeyRef_114() const { return ___QnXsdKeyRef_114; }
	inline XmlQualifiedName_t2760654312 ** get_address_of_QnXsdKeyRef_114() { return &___QnXsdKeyRef_114; }
	inline void set_QnXsdKeyRef_114(XmlQualifiedName_t2760654312 * value)
	{
		___QnXsdKeyRef_114 = value;
		Il2CppCodeGenWriteBarrier((&___QnXsdKeyRef_114), value);
	}

	inline static int32_t get_offset_of_QnXsdSelector_115() { return static_cast<int32_t>(offsetof(SchemaNames_t661607975, ___QnXsdSelector_115)); }
	inline XmlQualifiedName_t2760654312 * get_QnXsdSelector_115() const { return ___QnXsdSelector_115; }
	inline XmlQualifiedName_t2760654312 ** get_address_of_QnXsdSelector_115() { return &___QnXsdSelector_115; }
	inline void set_QnXsdSelector_115(XmlQualifiedName_t2760654312 * value)
	{
		___QnXsdSelector_115 = value;
		Il2CppCodeGenWriteBarrier((&___QnXsdSelector_115), value);
	}

	inline static int32_t get_offset_of_QnXsdField_116() { return static_cast<int32_t>(offsetof(SchemaNames_t661607975, ___QnXsdField_116)); }
	inline XmlQualifiedName_t2760654312 * get_QnXsdField_116() const { return ___QnXsdField_116; }
	inline XmlQualifiedName_t2760654312 ** get_address_of_QnXsdField_116() { return &___QnXsdField_116; }
	inline void set_QnXsdField_116(XmlQualifiedName_t2760654312 * value)
	{
		___QnXsdField_116 = value;
		Il2CppCodeGenWriteBarrier((&___QnXsdField_116), value);
	}

	inline static int32_t get_offset_of_QnXsdMinExclusive_117() { return static_cast<int32_t>(offsetof(SchemaNames_t661607975, ___QnXsdMinExclusive_117)); }
	inline XmlQualifiedName_t2760654312 * get_QnXsdMinExclusive_117() const { return ___QnXsdMinExclusive_117; }
	inline XmlQualifiedName_t2760654312 ** get_address_of_QnXsdMinExclusive_117() { return &___QnXsdMinExclusive_117; }
	inline void set_QnXsdMinExclusive_117(XmlQualifiedName_t2760654312 * value)
	{
		___QnXsdMinExclusive_117 = value;
		Il2CppCodeGenWriteBarrier((&___QnXsdMinExclusive_117), value);
	}

	inline static int32_t get_offset_of_QnXsdMinInclusive_118() { return static_cast<int32_t>(offsetof(SchemaNames_t661607975, ___QnXsdMinInclusive_118)); }
	inline XmlQualifiedName_t2760654312 * get_QnXsdMinInclusive_118() const { return ___QnXsdMinInclusive_118; }
	inline XmlQualifiedName_t2760654312 ** get_address_of_QnXsdMinInclusive_118() { return &___QnXsdMinInclusive_118; }
	inline void set_QnXsdMinInclusive_118(XmlQualifiedName_t2760654312 * value)
	{
		___QnXsdMinInclusive_118 = value;
		Il2CppCodeGenWriteBarrier((&___QnXsdMinInclusive_118), value);
	}

	inline static int32_t get_offset_of_QnXsdMaxInclusive_119() { return static_cast<int32_t>(offsetof(SchemaNames_t661607975, ___QnXsdMaxInclusive_119)); }
	inline XmlQualifiedName_t2760654312 * get_QnXsdMaxInclusive_119() const { return ___QnXsdMaxInclusive_119; }
	inline XmlQualifiedName_t2760654312 ** get_address_of_QnXsdMaxInclusive_119() { return &___QnXsdMaxInclusive_119; }
	inline void set_QnXsdMaxInclusive_119(XmlQualifiedName_t2760654312 * value)
	{
		___QnXsdMaxInclusive_119 = value;
		Il2CppCodeGenWriteBarrier((&___QnXsdMaxInclusive_119), value);
	}

	inline static int32_t get_offset_of_QnXsdMaxExclusive_120() { return static_cast<int32_t>(offsetof(SchemaNames_t661607975, ___QnXsdMaxExclusive_120)); }
	inline XmlQualifiedName_t2760654312 * get_QnXsdMaxExclusive_120() const { return ___QnXsdMaxExclusive_120; }
	inline XmlQualifiedName_t2760654312 ** get_address_of_QnXsdMaxExclusive_120() { return &___QnXsdMaxExclusive_120; }
	inline void set_QnXsdMaxExclusive_120(XmlQualifiedName_t2760654312 * value)
	{
		___QnXsdMaxExclusive_120 = value;
		Il2CppCodeGenWriteBarrier((&___QnXsdMaxExclusive_120), value);
	}

	inline static int32_t get_offset_of_QnXsdTotalDigits_121() { return static_cast<int32_t>(offsetof(SchemaNames_t661607975, ___QnXsdTotalDigits_121)); }
	inline XmlQualifiedName_t2760654312 * get_QnXsdTotalDigits_121() const { return ___QnXsdTotalDigits_121; }
	inline XmlQualifiedName_t2760654312 ** get_address_of_QnXsdTotalDigits_121() { return &___QnXsdTotalDigits_121; }
	inline void set_QnXsdTotalDigits_121(XmlQualifiedName_t2760654312 * value)
	{
		___QnXsdTotalDigits_121 = value;
		Il2CppCodeGenWriteBarrier((&___QnXsdTotalDigits_121), value);
	}

	inline static int32_t get_offset_of_QnXsdFractionDigits_122() { return static_cast<int32_t>(offsetof(SchemaNames_t661607975, ___QnXsdFractionDigits_122)); }
	inline XmlQualifiedName_t2760654312 * get_QnXsdFractionDigits_122() const { return ___QnXsdFractionDigits_122; }
	inline XmlQualifiedName_t2760654312 ** get_address_of_QnXsdFractionDigits_122() { return &___QnXsdFractionDigits_122; }
	inline void set_QnXsdFractionDigits_122(XmlQualifiedName_t2760654312 * value)
	{
		___QnXsdFractionDigits_122 = value;
		Il2CppCodeGenWriteBarrier((&___QnXsdFractionDigits_122), value);
	}

	inline static int32_t get_offset_of_QnXsdLength_123() { return static_cast<int32_t>(offsetof(SchemaNames_t661607975, ___QnXsdLength_123)); }
	inline XmlQualifiedName_t2760654312 * get_QnXsdLength_123() const { return ___QnXsdLength_123; }
	inline XmlQualifiedName_t2760654312 ** get_address_of_QnXsdLength_123() { return &___QnXsdLength_123; }
	inline void set_QnXsdLength_123(XmlQualifiedName_t2760654312 * value)
	{
		___QnXsdLength_123 = value;
		Il2CppCodeGenWriteBarrier((&___QnXsdLength_123), value);
	}

	inline static int32_t get_offset_of_QnXsdMinLength_124() { return static_cast<int32_t>(offsetof(SchemaNames_t661607975, ___QnXsdMinLength_124)); }
	inline XmlQualifiedName_t2760654312 * get_QnXsdMinLength_124() const { return ___QnXsdMinLength_124; }
	inline XmlQualifiedName_t2760654312 ** get_address_of_QnXsdMinLength_124() { return &___QnXsdMinLength_124; }
	inline void set_QnXsdMinLength_124(XmlQualifiedName_t2760654312 * value)
	{
		___QnXsdMinLength_124 = value;
		Il2CppCodeGenWriteBarrier((&___QnXsdMinLength_124), value);
	}

	inline static int32_t get_offset_of_QnXsdMaxLength_125() { return static_cast<int32_t>(offsetof(SchemaNames_t661607975, ___QnXsdMaxLength_125)); }
	inline XmlQualifiedName_t2760654312 * get_QnXsdMaxLength_125() const { return ___QnXsdMaxLength_125; }
	inline XmlQualifiedName_t2760654312 ** get_address_of_QnXsdMaxLength_125() { return &___QnXsdMaxLength_125; }
	inline void set_QnXsdMaxLength_125(XmlQualifiedName_t2760654312 * value)
	{
		___QnXsdMaxLength_125 = value;
		Il2CppCodeGenWriteBarrier((&___QnXsdMaxLength_125), value);
	}

	inline static int32_t get_offset_of_QnXsdEnumeration_126() { return static_cast<int32_t>(offsetof(SchemaNames_t661607975, ___QnXsdEnumeration_126)); }
	inline XmlQualifiedName_t2760654312 * get_QnXsdEnumeration_126() const { return ___QnXsdEnumeration_126; }
	inline XmlQualifiedName_t2760654312 ** get_address_of_QnXsdEnumeration_126() { return &___QnXsdEnumeration_126; }
	inline void set_QnXsdEnumeration_126(XmlQualifiedName_t2760654312 * value)
	{
		___QnXsdEnumeration_126 = value;
		Il2CppCodeGenWriteBarrier((&___QnXsdEnumeration_126), value);
	}

	inline static int32_t get_offset_of_QnXsdPattern_127() { return static_cast<int32_t>(offsetof(SchemaNames_t661607975, ___QnXsdPattern_127)); }
	inline XmlQualifiedName_t2760654312 * get_QnXsdPattern_127() const { return ___QnXsdPattern_127; }
	inline XmlQualifiedName_t2760654312 ** get_address_of_QnXsdPattern_127() { return &___QnXsdPattern_127; }
	inline void set_QnXsdPattern_127(XmlQualifiedName_t2760654312 * value)
	{
		___QnXsdPattern_127 = value;
		Il2CppCodeGenWriteBarrier((&___QnXsdPattern_127), value);
	}

	inline static int32_t get_offset_of_QnXsdDocumentation_128() { return static_cast<int32_t>(offsetof(SchemaNames_t661607975, ___QnXsdDocumentation_128)); }
	inline XmlQualifiedName_t2760654312 * get_QnXsdDocumentation_128() const { return ___QnXsdDocumentation_128; }
	inline XmlQualifiedName_t2760654312 ** get_address_of_QnXsdDocumentation_128() { return &___QnXsdDocumentation_128; }
	inline void set_QnXsdDocumentation_128(XmlQualifiedName_t2760654312 * value)
	{
		___QnXsdDocumentation_128 = value;
		Il2CppCodeGenWriteBarrier((&___QnXsdDocumentation_128), value);
	}

	inline static int32_t get_offset_of_QnXsdAppinfo_129() { return static_cast<int32_t>(offsetof(SchemaNames_t661607975, ___QnXsdAppinfo_129)); }
	inline XmlQualifiedName_t2760654312 * get_QnXsdAppinfo_129() const { return ___QnXsdAppinfo_129; }
	inline XmlQualifiedName_t2760654312 ** get_address_of_QnXsdAppinfo_129() { return &___QnXsdAppinfo_129; }
	inline void set_QnXsdAppinfo_129(XmlQualifiedName_t2760654312 * value)
	{
		___QnXsdAppinfo_129 = value;
		Il2CppCodeGenWriteBarrier((&___QnXsdAppinfo_129), value);
	}

	inline static int32_t get_offset_of_QnSource_130() { return static_cast<int32_t>(offsetof(SchemaNames_t661607975, ___QnSource_130)); }
	inline XmlQualifiedName_t2760654312 * get_QnSource_130() const { return ___QnSource_130; }
	inline XmlQualifiedName_t2760654312 ** get_address_of_QnSource_130() { return &___QnSource_130; }
	inline void set_QnSource_130(XmlQualifiedName_t2760654312 * value)
	{
		___QnSource_130 = value;
		Il2CppCodeGenWriteBarrier((&___QnSource_130), value);
	}

	inline static int32_t get_offset_of_QnXsdComplexContent_131() { return static_cast<int32_t>(offsetof(SchemaNames_t661607975, ___QnXsdComplexContent_131)); }
	inline XmlQualifiedName_t2760654312 * get_QnXsdComplexContent_131() const { return ___QnXsdComplexContent_131; }
	inline XmlQualifiedName_t2760654312 ** get_address_of_QnXsdComplexContent_131() { return &___QnXsdComplexContent_131; }
	inline void set_QnXsdComplexContent_131(XmlQualifiedName_t2760654312 * value)
	{
		___QnXsdComplexContent_131 = value;
		Il2CppCodeGenWriteBarrier((&___QnXsdComplexContent_131), value);
	}

	inline static int32_t get_offset_of_QnXsdSimpleContent_132() { return static_cast<int32_t>(offsetof(SchemaNames_t661607975, ___QnXsdSimpleContent_132)); }
	inline XmlQualifiedName_t2760654312 * get_QnXsdSimpleContent_132() const { return ___QnXsdSimpleContent_132; }
	inline XmlQualifiedName_t2760654312 ** get_address_of_QnXsdSimpleContent_132() { return &___QnXsdSimpleContent_132; }
	inline void set_QnXsdSimpleContent_132(XmlQualifiedName_t2760654312 * value)
	{
		___QnXsdSimpleContent_132 = value;
		Il2CppCodeGenWriteBarrier((&___QnXsdSimpleContent_132), value);
	}

	inline static int32_t get_offset_of_QnXsdRestriction_133() { return static_cast<int32_t>(offsetof(SchemaNames_t661607975, ___QnXsdRestriction_133)); }
	inline XmlQualifiedName_t2760654312 * get_QnXsdRestriction_133() const { return ___QnXsdRestriction_133; }
	inline XmlQualifiedName_t2760654312 ** get_address_of_QnXsdRestriction_133() { return &___QnXsdRestriction_133; }
	inline void set_QnXsdRestriction_133(XmlQualifiedName_t2760654312 * value)
	{
		___QnXsdRestriction_133 = value;
		Il2CppCodeGenWriteBarrier((&___QnXsdRestriction_133), value);
	}

	inline static int32_t get_offset_of_QnXsdExtension_134() { return static_cast<int32_t>(offsetof(SchemaNames_t661607975, ___QnXsdExtension_134)); }
	inline XmlQualifiedName_t2760654312 * get_QnXsdExtension_134() const { return ___QnXsdExtension_134; }
	inline XmlQualifiedName_t2760654312 ** get_address_of_QnXsdExtension_134() { return &___QnXsdExtension_134; }
	inline void set_QnXsdExtension_134(XmlQualifiedName_t2760654312 * value)
	{
		___QnXsdExtension_134 = value;
		Il2CppCodeGenWriteBarrier((&___QnXsdExtension_134), value);
	}

	inline static int32_t get_offset_of_QnXsdUnion_135() { return static_cast<int32_t>(offsetof(SchemaNames_t661607975, ___QnXsdUnion_135)); }
	inline XmlQualifiedName_t2760654312 * get_QnXsdUnion_135() const { return ___QnXsdUnion_135; }
	inline XmlQualifiedName_t2760654312 ** get_address_of_QnXsdUnion_135() { return &___QnXsdUnion_135; }
	inline void set_QnXsdUnion_135(XmlQualifiedName_t2760654312 * value)
	{
		___QnXsdUnion_135 = value;
		Il2CppCodeGenWriteBarrier((&___QnXsdUnion_135), value);
	}

	inline static int32_t get_offset_of_QnXsdList_136() { return static_cast<int32_t>(offsetof(SchemaNames_t661607975, ___QnXsdList_136)); }
	inline XmlQualifiedName_t2760654312 * get_QnXsdList_136() const { return ___QnXsdList_136; }
	inline XmlQualifiedName_t2760654312 ** get_address_of_QnXsdList_136() { return &___QnXsdList_136; }
	inline void set_QnXsdList_136(XmlQualifiedName_t2760654312 * value)
	{
		___QnXsdList_136 = value;
		Il2CppCodeGenWriteBarrier((&___QnXsdList_136), value);
	}

	inline static int32_t get_offset_of_QnXsdWhiteSpace_137() { return static_cast<int32_t>(offsetof(SchemaNames_t661607975, ___QnXsdWhiteSpace_137)); }
	inline XmlQualifiedName_t2760654312 * get_QnXsdWhiteSpace_137() const { return ___QnXsdWhiteSpace_137; }
	inline XmlQualifiedName_t2760654312 ** get_address_of_QnXsdWhiteSpace_137() { return &___QnXsdWhiteSpace_137; }
	inline void set_QnXsdWhiteSpace_137(XmlQualifiedName_t2760654312 * value)
	{
		___QnXsdWhiteSpace_137 = value;
		Il2CppCodeGenWriteBarrier((&___QnXsdWhiteSpace_137), value);
	}

	inline static int32_t get_offset_of_QnXsdRedefine_138() { return static_cast<int32_t>(offsetof(SchemaNames_t661607975, ___QnXsdRedefine_138)); }
	inline XmlQualifiedName_t2760654312 * get_QnXsdRedefine_138() const { return ___QnXsdRedefine_138; }
	inline XmlQualifiedName_t2760654312 ** get_address_of_QnXsdRedefine_138() { return &___QnXsdRedefine_138; }
	inline void set_QnXsdRedefine_138(XmlQualifiedName_t2760654312 * value)
	{
		___QnXsdRedefine_138 = value;
		Il2CppCodeGenWriteBarrier((&___QnXsdRedefine_138), value);
	}

	inline static int32_t get_offset_of_QnXsdAnyType_139() { return static_cast<int32_t>(offsetof(SchemaNames_t661607975, ___QnXsdAnyType_139)); }
	inline XmlQualifiedName_t2760654312 * get_QnXsdAnyType_139() const { return ___QnXsdAnyType_139; }
	inline XmlQualifiedName_t2760654312 ** get_address_of_QnXsdAnyType_139() { return &___QnXsdAnyType_139; }
	inline void set_QnXsdAnyType_139(XmlQualifiedName_t2760654312 * value)
	{
		___QnXsdAnyType_139 = value;
		Il2CppCodeGenWriteBarrier((&___QnXsdAnyType_139), value);
	}

	inline static int32_t get_offset_of_TokenToQName_140() { return static_cast<int32_t>(offsetof(SchemaNames_t661607975, ___TokenToQName_140)); }
	inline XmlQualifiedNameU5BU5D_t1471530361* get_TokenToQName_140() const { return ___TokenToQName_140; }
	inline XmlQualifiedNameU5BU5D_t1471530361** get_address_of_TokenToQName_140() { return &___TokenToQName_140; }
	inline void set_TokenToQName_140(XmlQualifiedNameU5BU5D_t1471530361* value)
	{
		___TokenToQName_140 = value;
		Il2CppCodeGenWriteBarrier((&___TokenToQName_140), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SCHEMANAMES_T661607975_H
#ifndef SCHEMANOTATION_T1947677467_H
#define SCHEMANOTATION_T1947677467_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Schema.SchemaNotation
struct  SchemaNotation_t1947677467  : public RuntimeObject
{
public:
	// System.Xml.XmlQualifiedName System.Xml.Schema.SchemaNotation::name
	XmlQualifiedName_t2760654312 * ___name_0;
	// System.String System.Xml.Schema.SchemaNotation::systemLiteral
	String_t* ___systemLiteral_1;
	// System.String System.Xml.Schema.SchemaNotation::pubid
	String_t* ___pubid_2;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(SchemaNotation_t1947677467, ___name_0)); }
	inline XmlQualifiedName_t2760654312 * get_name_0() const { return ___name_0; }
	inline XmlQualifiedName_t2760654312 ** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(XmlQualifiedName_t2760654312 * value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier((&___name_0), value);
	}

	inline static int32_t get_offset_of_systemLiteral_1() { return static_cast<int32_t>(offsetof(SchemaNotation_t1947677467, ___systemLiteral_1)); }
	inline String_t* get_systemLiteral_1() const { return ___systemLiteral_1; }
	inline String_t** get_address_of_systemLiteral_1() { return &___systemLiteral_1; }
	inline void set_systemLiteral_1(String_t* value)
	{
		___systemLiteral_1 = value;
		Il2CppCodeGenWriteBarrier((&___systemLiteral_1), value);
	}

	inline static int32_t get_offset_of_pubid_2() { return static_cast<int32_t>(offsetof(SchemaNotation_t1947677467, ___pubid_2)); }
	inline String_t* get_pubid_2() const { return ___pubid_2; }
	inline String_t** get_address_of_pubid_2() { return &___pubid_2; }
	inline void set_pubid_2(String_t* value)
	{
		___pubid_2 = value;
		Il2CppCodeGenWriteBarrier((&___pubid_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SCHEMANOTATION_T1947677467_H
#ifndef ATTRIBUTECONTENT_T2997225126_H
#define ATTRIBUTECONTENT_T2997225126_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Schema.XdrBuilder/AttributeContent
struct  AttributeContent_t2997225126  : public RuntimeObject
{
public:
	// System.Xml.Schema.SchemaAttDef System.Xml.Schema.XdrBuilder/AttributeContent::_AttDef
	SchemaAttDef_t2429541159 * ____AttDef_0;
	// System.Xml.XmlQualifiedName System.Xml.Schema.XdrBuilder/AttributeContent::_Name
	XmlQualifiedName_t2760654312 * ____Name_1;
	// System.String System.Xml.Schema.XdrBuilder/AttributeContent::_Prefix
	String_t* ____Prefix_2;
	// System.Boolean System.Xml.Schema.XdrBuilder/AttributeContent::_Required
	bool ____Required_3;
	// System.UInt32 System.Xml.Schema.XdrBuilder/AttributeContent::_MinVal
	uint32_t ____MinVal_4;
	// System.UInt32 System.Xml.Schema.XdrBuilder/AttributeContent::_MaxVal
	uint32_t ____MaxVal_5;
	// System.UInt32 System.Xml.Schema.XdrBuilder/AttributeContent::_MaxLength
	uint32_t ____MaxLength_6;
	// System.UInt32 System.Xml.Schema.XdrBuilder/AttributeContent::_MinLength
	uint32_t ____MinLength_7;
	// System.Boolean System.Xml.Schema.XdrBuilder/AttributeContent::_EnumerationRequired
	bool ____EnumerationRequired_8;
	// System.Boolean System.Xml.Schema.XdrBuilder/AttributeContent::_HasDataType
	bool ____HasDataType_9;
	// System.Boolean System.Xml.Schema.XdrBuilder/AttributeContent::_Global
	bool ____Global_10;
	// System.Object System.Xml.Schema.XdrBuilder/AttributeContent::_Default
	RuntimeObject * ____Default_11;

public:
	inline static int32_t get_offset_of__AttDef_0() { return static_cast<int32_t>(offsetof(AttributeContent_t2997225126, ____AttDef_0)); }
	inline SchemaAttDef_t2429541159 * get__AttDef_0() const { return ____AttDef_0; }
	inline SchemaAttDef_t2429541159 ** get_address_of__AttDef_0() { return &____AttDef_0; }
	inline void set__AttDef_0(SchemaAttDef_t2429541159 * value)
	{
		____AttDef_0 = value;
		Il2CppCodeGenWriteBarrier((&____AttDef_0), value);
	}

	inline static int32_t get_offset_of__Name_1() { return static_cast<int32_t>(offsetof(AttributeContent_t2997225126, ____Name_1)); }
	inline XmlQualifiedName_t2760654312 * get__Name_1() const { return ____Name_1; }
	inline XmlQualifiedName_t2760654312 ** get_address_of__Name_1() { return &____Name_1; }
	inline void set__Name_1(XmlQualifiedName_t2760654312 * value)
	{
		____Name_1 = value;
		Il2CppCodeGenWriteBarrier((&____Name_1), value);
	}

	inline static int32_t get_offset_of__Prefix_2() { return static_cast<int32_t>(offsetof(AttributeContent_t2997225126, ____Prefix_2)); }
	inline String_t* get__Prefix_2() const { return ____Prefix_2; }
	inline String_t** get_address_of__Prefix_2() { return &____Prefix_2; }
	inline void set__Prefix_2(String_t* value)
	{
		____Prefix_2 = value;
		Il2CppCodeGenWriteBarrier((&____Prefix_2), value);
	}

	inline static int32_t get_offset_of__Required_3() { return static_cast<int32_t>(offsetof(AttributeContent_t2997225126, ____Required_3)); }
	inline bool get__Required_3() const { return ____Required_3; }
	inline bool* get_address_of__Required_3() { return &____Required_3; }
	inline void set__Required_3(bool value)
	{
		____Required_3 = value;
	}

	inline static int32_t get_offset_of__MinVal_4() { return static_cast<int32_t>(offsetof(AttributeContent_t2997225126, ____MinVal_4)); }
	inline uint32_t get__MinVal_4() const { return ____MinVal_4; }
	inline uint32_t* get_address_of__MinVal_4() { return &____MinVal_4; }
	inline void set__MinVal_4(uint32_t value)
	{
		____MinVal_4 = value;
	}

	inline static int32_t get_offset_of__MaxVal_5() { return static_cast<int32_t>(offsetof(AttributeContent_t2997225126, ____MaxVal_5)); }
	inline uint32_t get__MaxVal_5() const { return ____MaxVal_5; }
	inline uint32_t* get_address_of__MaxVal_5() { return &____MaxVal_5; }
	inline void set__MaxVal_5(uint32_t value)
	{
		____MaxVal_5 = value;
	}

	inline static int32_t get_offset_of__MaxLength_6() { return static_cast<int32_t>(offsetof(AttributeContent_t2997225126, ____MaxLength_6)); }
	inline uint32_t get__MaxLength_6() const { return ____MaxLength_6; }
	inline uint32_t* get_address_of__MaxLength_6() { return &____MaxLength_6; }
	inline void set__MaxLength_6(uint32_t value)
	{
		____MaxLength_6 = value;
	}

	inline static int32_t get_offset_of__MinLength_7() { return static_cast<int32_t>(offsetof(AttributeContent_t2997225126, ____MinLength_7)); }
	inline uint32_t get__MinLength_7() const { return ____MinLength_7; }
	inline uint32_t* get_address_of__MinLength_7() { return &____MinLength_7; }
	inline void set__MinLength_7(uint32_t value)
	{
		____MinLength_7 = value;
	}

	inline static int32_t get_offset_of__EnumerationRequired_8() { return static_cast<int32_t>(offsetof(AttributeContent_t2997225126, ____EnumerationRequired_8)); }
	inline bool get__EnumerationRequired_8() const { return ____EnumerationRequired_8; }
	inline bool* get_address_of__EnumerationRequired_8() { return &____EnumerationRequired_8; }
	inline void set__EnumerationRequired_8(bool value)
	{
		____EnumerationRequired_8 = value;
	}

	inline static int32_t get_offset_of__HasDataType_9() { return static_cast<int32_t>(offsetof(AttributeContent_t2997225126, ____HasDataType_9)); }
	inline bool get__HasDataType_9() const { return ____HasDataType_9; }
	inline bool* get_address_of__HasDataType_9() { return &____HasDataType_9; }
	inline void set__HasDataType_9(bool value)
	{
		____HasDataType_9 = value;
	}

	inline static int32_t get_offset_of__Global_10() { return static_cast<int32_t>(offsetof(AttributeContent_t2997225126, ____Global_10)); }
	inline bool get__Global_10() const { return ____Global_10; }
	inline bool* get_address_of__Global_10() { return &____Global_10; }
	inline void set__Global_10(bool value)
	{
		____Global_10 = value;
	}

	inline static int32_t get_offset_of__Default_11() { return static_cast<int32_t>(offsetof(AttributeContent_t2997225126, ____Default_11)); }
	inline RuntimeObject * get__Default_11() const { return ____Default_11; }
	inline RuntimeObject ** get_address_of__Default_11() { return &____Default_11; }
	inline void set__Default_11(RuntimeObject * value)
	{
		____Default_11 = value;
		Il2CppCodeGenWriteBarrier((&____Default_11), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ATTRIBUTECONTENT_T2997225126_H
#ifndef DECLBASEINFO_T2186480169_H
#define DECLBASEINFO_T2186480169_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Schema.XdrBuilder/DeclBaseInfo
struct  DeclBaseInfo_t2186480169  : public RuntimeObject
{
public:
	// System.Xml.XmlQualifiedName System.Xml.Schema.XdrBuilder/DeclBaseInfo::_Name
	XmlQualifiedName_t2760654312 * ____Name_0;
	// System.String System.Xml.Schema.XdrBuilder/DeclBaseInfo::_Prefix
	String_t* ____Prefix_1;
	// System.Xml.XmlQualifiedName System.Xml.Schema.XdrBuilder/DeclBaseInfo::_TypeName
	XmlQualifiedName_t2760654312 * ____TypeName_2;
	// System.String System.Xml.Schema.XdrBuilder/DeclBaseInfo::_TypePrefix
	String_t* ____TypePrefix_3;
	// System.Object System.Xml.Schema.XdrBuilder/DeclBaseInfo::_Default
	RuntimeObject * ____Default_4;
	// System.Object System.Xml.Schema.XdrBuilder/DeclBaseInfo::_Revises
	RuntimeObject * ____Revises_5;
	// System.UInt32 System.Xml.Schema.XdrBuilder/DeclBaseInfo::_MaxOccurs
	uint32_t ____MaxOccurs_6;
	// System.UInt32 System.Xml.Schema.XdrBuilder/DeclBaseInfo::_MinOccurs
	uint32_t ____MinOccurs_7;
	// System.Boolean System.Xml.Schema.XdrBuilder/DeclBaseInfo::_Checking
	bool ____Checking_8;
	// System.Xml.Schema.SchemaElementDecl System.Xml.Schema.XdrBuilder/DeclBaseInfo::_ElementDecl
	SchemaElementDecl_t2267464004 * ____ElementDecl_9;
	// System.Xml.Schema.SchemaAttDef System.Xml.Schema.XdrBuilder/DeclBaseInfo::_Attdef
	SchemaAttDef_t2429541159 * ____Attdef_10;
	// System.Xml.Schema.XdrBuilder/DeclBaseInfo System.Xml.Schema.XdrBuilder/DeclBaseInfo::_Next
	DeclBaseInfo_t2186480169 * ____Next_11;

public:
	inline static int32_t get_offset_of__Name_0() { return static_cast<int32_t>(offsetof(DeclBaseInfo_t2186480169, ____Name_0)); }
	inline XmlQualifiedName_t2760654312 * get__Name_0() const { return ____Name_0; }
	inline XmlQualifiedName_t2760654312 ** get_address_of__Name_0() { return &____Name_0; }
	inline void set__Name_0(XmlQualifiedName_t2760654312 * value)
	{
		____Name_0 = value;
		Il2CppCodeGenWriteBarrier((&____Name_0), value);
	}

	inline static int32_t get_offset_of__Prefix_1() { return static_cast<int32_t>(offsetof(DeclBaseInfo_t2186480169, ____Prefix_1)); }
	inline String_t* get__Prefix_1() const { return ____Prefix_1; }
	inline String_t** get_address_of__Prefix_1() { return &____Prefix_1; }
	inline void set__Prefix_1(String_t* value)
	{
		____Prefix_1 = value;
		Il2CppCodeGenWriteBarrier((&____Prefix_1), value);
	}

	inline static int32_t get_offset_of__TypeName_2() { return static_cast<int32_t>(offsetof(DeclBaseInfo_t2186480169, ____TypeName_2)); }
	inline XmlQualifiedName_t2760654312 * get__TypeName_2() const { return ____TypeName_2; }
	inline XmlQualifiedName_t2760654312 ** get_address_of__TypeName_2() { return &____TypeName_2; }
	inline void set__TypeName_2(XmlQualifiedName_t2760654312 * value)
	{
		____TypeName_2 = value;
		Il2CppCodeGenWriteBarrier((&____TypeName_2), value);
	}

	inline static int32_t get_offset_of__TypePrefix_3() { return static_cast<int32_t>(offsetof(DeclBaseInfo_t2186480169, ____TypePrefix_3)); }
	inline String_t* get__TypePrefix_3() const { return ____TypePrefix_3; }
	inline String_t** get_address_of__TypePrefix_3() { return &____TypePrefix_3; }
	inline void set__TypePrefix_3(String_t* value)
	{
		____TypePrefix_3 = value;
		Il2CppCodeGenWriteBarrier((&____TypePrefix_3), value);
	}

	inline static int32_t get_offset_of__Default_4() { return static_cast<int32_t>(offsetof(DeclBaseInfo_t2186480169, ____Default_4)); }
	inline RuntimeObject * get__Default_4() const { return ____Default_4; }
	inline RuntimeObject ** get_address_of__Default_4() { return &____Default_4; }
	inline void set__Default_4(RuntimeObject * value)
	{
		____Default_4 = value;
		Il2CppCodeGenWriteBarrier((&____Default_4), value);
	}

	inline static int32_t get_offset_of__Revises_5() { return static_cast<int32_t>(offsetof(DeclBaseInfo_t2186480169, ____Revises_5)); }
	inline RuntimeObject * get__Revises_5() const { return ____Revises_5; }
	inline RuntimeObject ** get_address_of__Revises_5() { return &____Revises_5; }
	inline void set__Revises_5(RuntimeObject * value)
	{
		____Revises_5 = value;
		Il2CppCodeGenWriteBarrier((&____Revises_5), value);
	}

	inline static int32_t get_offset_of__MaxOccurs_6() { return static_cast<int32_t>(offsetof(DeclBaseInfo_t2186480169, ____MaxOccurs_6)); }
	inline uint32_t get__MaxOccurs_6() const { return ____MaxOccurs_6; }
	inline uint32_t* get_address_of__MaxOccurs_6() { return &____MaxOccurs_6; }
	inline void set__MaxOccurs_6(uint32_t value)
	{
		____MaxOccurs_6 = value;
	}

	inline static int32_t get_offset_of__MinOccurs_7() { return static_cast<int32_t>(offsetof(DeclBaseInfo_t2186480169, ____MinOccurs_7)); }
	inline uint32_t get__MinOccurs_7() const { return ____MinOccurs_7; }
	inline uint32_t* get_address_of__MinOccurs_7() { return &____MinOccurs_7; }
	inline void set__MinOccurs_7(uint32_t value)
	{
		____MinOccurs_7 = value;
	}

	inline static int32_t get_offset_of__Checking_8() { return static_cast<int32_t>(offsetof(DeclBaseInfo_t2186480169, ____Checking_8)); }
	inline bool get__Checking_8() const { return ____Checking_8; }
	inline bool* get_address_of__Checking_8() { return &____Checking_8; }
	inline void set__Checking_8(bool value)
	{
		____Checking_8 = value;
	}

	inline static int32_t get_offset_of__ElementDecl_9() { return static_cast<int32_t>(offsetof(DeclBaseInfo_t2186480169, ____ElementDecl_9)); }
	inline SchemaElementDecl_t2267464004 * get__ElementDecl_9() const { return ____ElementDecl_9; }
	inline SchemaElementDecl_t2267464004 ** get_address_of__ElementDecl_9() { return &____ElementDecl_9; }
	inline void set__ElementDecl_9(SchemaElementDecl_t2267464004 * value)
	{
		____ElementDecl_9 = value;
		Il2CppCodeGenWriteBarrier((&____ElementDecl_9), value);
	}

	inline static int32_t get_offset_of__Attdef_10() { return static_cast<int32_t>(offsetof(DeclBaseInfo_t2186480169, ____Attdef_10)); }
	inline SchemaAttDef_t2429541159 * get__Attdef_10() const { return ____Attdef_10; }
	inline SchemaAttDef_t2429541159 ** get_address_of__Attdef_10() { return &____Attdef_10; }
	inline void set__Attdef_10(SchemaAttDef_t2429541159 * value)
	{
		____Attdef_10 = value;
		Il2CppCodeGenWriteBarrier((&____Attdef_10), value);
	}

	inline static int32_t get_offset_of__Next_11() { return static_cast<int32_t>(offsetof(DeclBaseInfo_t2186480169, ____Next_11)); }
	inline DeclBaseInfo_t2186480169 * get__Next_11() const { return ____Next_11; }
	inline DeclBaseInfo_t2186480169 ** get_address_of__Next_11() { return &____Next_11; }
	inline void set__Next_11(DeclBaseInfo_t2186480169 * value)
	{
		____Next_11 = value;
		Il2CppCodeGenWriteBarrier((&____Next_11), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DECLBASEINFO_T2186480169_H
#ifndef ELEMENTCONTENT_T2671703075_H
#define ELEMENTCONTENT_T2671703075_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Schema.XdrBuilder/ElementContent
struct  ElementContent_t2671703075  : public RuntimeObject
{
public:
	// System.Xml.Schema.SchemaElementDecl System.Xml.Schema.XdrBuilder/ElementContent::_ElementDecl
	SchemaElementDecl_t2267464004 * ____ElementDecl_0;
	// System.Int32 System.Xml.Schema.XdrBuilder/ElementContent::_ContentAttr
	int32_t ____ContentAttr_1;
	// System.Int32 System.Xml.Schema.XdrBuilder/ElementContent::_OrderAttr
	int32_t ____OrderAttr_2;
	// System.Boolean System.Xml.Schema.XdrBuilder/ElementContent::_MasterGroupRequired
	bool ____MasterGroupRequired_3;
	// System.Boolean System.Xml.Schema.XdrBuilder/ElementContent::_ExistTerminal
	bool ____ExistTerminal_4;
	// System.Boolean System.Xml.Schema.XdrBuilder/ElementContent::_AllowDataType
	bool ____AllowDataType_5;
	// System.Boolean System.Xml.Schema.XdrBuilder/ElementContent::_HasDataType
	bool ____HasDataType_6;
	// System.Boolean System.Xml.Schema.XdrBuilder/ElementContent::_HasType
	bool ____HasType_7;
	// System.Boolean System.Xml.Schema.XdrBuilder/ElementContent::_EnumerationRequired
	bool ____EnumerationRequired_8;
	// System.UInt32 System.Xml.Schema.XdrBuilder/ElementContent::_MinVal
	uint32_t ____MinVal_9;
	// System.UInt32 System.Xml.Schema.XdrBuilder/ElementContent::_MaxVal
	uint32_t ____MaxVal_10;
	// System.UInt32 System.Xml.Schema.XdrBuilder/ElementContent::_MaxLength
	uint32_t ____MaxLength_11;
	// System.UInt32 System.Xml.Schema.XdrBuilder/ElementContent::_MinLength
	uint32_t ____MinLength_12;
	// System.Collections.Hashtable System.Xml.Schema.XdrBuilder/ElementContent::_AttDefList
	Hashtable_t1853889766 * ____AttDefList_13;

public:
	inline static int32_t get_offset_of__ElementDecl_0() { return static_cast<int32_t>(offsetof(ElementContent_t2671703075, ____ElementDecl_0)); }
	inline SchemaElementDecl_t2267464004 * get__ElementDecl_0() const { return ____ElementDecl_0; }
	inline SchemaElementDecl_t2267464004 ** get_address_of__ElementDecl_0() { return &____ElementDecl_0; }
	inline void set__ElementDecl_0(SchemaElementDecl_t2267464004 * value)
	{
		____ElementDecl_0 = value;
		Il2CppCodeGenWriteBarrier((&____ElementDecl_0), value);
	}

	inline static int32_t get_offset_of__ContentAttr_1() { return static_cast<int32_t>(offsetof(ElementContent_t2671703075, ____ContentAttr_1)); }
	inline int32_t get__ContentAttr_1() const { return ____ContentAttr_1; }
	inline int32_t* get_address_of__ContentAttr_1() { return &____ContentAttr_1; }
	inline void set__ContentAttr_1(int32_t value)
	{
		____ContentAttr_1 = value;
	}

	inline static int32_t get_offset_of__OrderAttr_2() { return static_cast<int32_t>(offsetof(ElementContent_t2671703075, ____OrderAttr_2)); }
	inline int32_t get__OrderAttr_2() const { return ____OrderAttr_2; }
	inline int32_t* get_address_of__OrderAttr_2() { return &____OrderAttr_2; }
	inline void set__OrderAttr_2(int32_t value)
	{
		____OrderAttr_2 = value;
	}

	inline static int32_t get_offset_of__MasterGroupRequired_3() { return static_cast<int32_t>(offsetof(ElementContent_t2671703075, ____MasterGroupRequired_3)); }
	inline bool get__MasterGroupRequired_3() const { return ____MasterGroupRequired_3; }
	inline bool* get_address_of__MasterGroupRequired_3() { return &____MasterGroupRequired_3; }
	inline void set__MasterGroupRequired_3(bool value)
	{
		____MasterGroupRequired_3 = value;
	}

	inline static int32_t get_offset_of__ExistTerminal_4() { return static_cast<int32_t>(offsetof(ElementContent_t2671703075, ____ExistTerminal_4)); }
	inline bool get__ExistTerminal_4() const { return ____ExistTerminal_4; }
	inline bool* get_address_of__ExistTerminal_4() { return &____ExistTerminal_4; }
	inline void set__ExistTerminal_4(bool value)
	{
		____ExistTerminal_4 = value;
	}

	inline static int32_t get_offset_of__AllowDataType_5() { return static_cast<int32_t>(offsetof(ElementContent_t2671703075, ____AllowDataType_5)); }
	inline bool get__AllowDataType_5() const { return ____AllowDataType_5; }
	inline bool* get_address_of__AllowDataType_5() { return &____AllowDataType_5; }
	inline void set__AllowDataType_5(bool value)
	{
		____AllowDataType_5 = value;
	}

	inline static int32_t get_offset_of__HasDataType_6() { return static_cast<int32_t>(offsetof(ElementContent_t2671703075, ____HasDataType_6)); }
	inline bool get__HasDataType_6() const { return ____HasDataType_6; }
	inline bool* get_address_of__HasDataType_6() { return &____HasDataType_6; }
	inline void set__HasDataType_6(bool value)
	{
		____HasDataType_6 = value;
	}

	inline static int32_t get_offset_of__HasType_7() { return static_cast<int32_t>(offsetof(ElementContent_t2671703075, ____HasType_7)); }
	inline bool get__HasType_7() const { return ____HasType_7; }
	inline bool* get_address_of__HasType_7() { return &____HasType_7; }
	inline void set__HasType_7(bool value)
	{
		____HasType_7 = value;
	}

	inline static int32_t get_offset_of__EnumerationRequired_8() { return static_cast<int32_t>(offsetof(ElementContent_t2671703075, ____EnumerationRequired_8)); }
	inline bool get__EnumerationRequired_8() const { return ____EnumerationRequired_8; }
	inline bool* get_address_of__EnumerationRequired_8() { return &____EnumerationRequired_8; }
	inline void set__EnumerationRequired_8(bool value)
	{
		____EnumerationRequired_8 = value;
	}

	inline static int32_t get_offset_of__MinVal_9() { return static_cast<int32_t>(offsetof(ElementContent_t2671703075, ____MinVal_9)); }
	inline uint32_t get__MinVal_9() const { return ____MinVal_9; }
	inline uint32_t* get_address_of__MinVal_9() { return &____MinVal_9; }
	inline void set__MinVal_9(uint32_t value)
	{
		____MinVal_9 = value;
	}

	inline static int32_t get_offset_of__MaxVal_10() { return static_cast<int32_t>(offsetof(ElementContent_t2671703075, ____MaxVal_10)); }
	inline uint32_t get__MaxVal_10() const { return ____MaxVal_10; }
	inline uint32_t* get_address_of__MaxVal_10() { return &____MaxVal_10; }
	inline void set__MaxVal_10(uint32_t value)
	{
		____MaxVal_10 = value;
	}

	inline static int32_t get_offset_of__MaxLength_11() { return static_cast<int32_t>(offsetof(ElementContent_t2671703075, ____MaxLength_11)); }
	inline uint32_t get__MaxLength_11() const { return ____MaxLength_11; }
	inline uint32_t* get_address_of__MaxLength_11() { return &____MaxLength_11; }
	inline void set__MaxLength_11(uint32_t value)
	{
		____MaxLength_11 = value;
	}

	inline static int32_t get_offset_of__MinLength_12() { return static_cast<int32_t>(offsetof(ElementContent_t2671703075, ____MinLength_12)); }
	inline uint32_t get__MinLength_12() const { return ____MinLength_12; }
	inline uint32_t* get_address_of__MinLength_12() { return &____MinLength_12; }
	inline void set__MinLength_12(uint32_t value)
	{
		____MinLength_12 = value;
	}

	inline static int32_t get_offset_of__AttDefList_13() { return static_cast<int32_t>(offsetof(ElementContent_t2671703075, ____AttDefList_13)); }
	inline Hashtable_t1853889766 * get__AttDefList_13() const { return ____AttDefList_13; }
	inline Hashtable_t1853889766 ** get_address_of__AttDefList_13() { return &____AttDefList_13; }
	inline void set__AttDefList_13(Hashtable_t1853889766 * value)
	{
		____AttDefList_13 = value;
		Il2CppCodeGenWriteBarrier((&____AttDefList_13), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ELEMENTCONTENT_T2671703075_H
#ifndef GROUPCONTENT_T833025371_H
#define GROUPCONTENT_T833025371_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Schema.XdrBuilder/GroupContent
struct  GroupContent_t833025371  : public RuntimeObject
{
public:
	// System.UInt32 System.Xml.Schema.XdrBuilder/GroupContent::_MinVal
	uint32_t ____MinVal_0;
	// System.UInt32 System.Xml.Schema.XdrBuilder/GroupContent::_MaxVal
	uint32_t ____MaxVal_1;
	// System.Boolean System.Xml.Schema.XdrBuilder/GroupContent::_HasMaxAttr
	bool ____HasMaxAttr_2;
	// System.Boolean System.Xml.Schema.XdrBuilder/GroupContent::_HasMinAttr
	bool ____HasMinAttr_3;
	// System.Int32 System.Xml.Schema.XdrBuilder/GroupContent::_Order
	int32_t ____Order_4;

public:
	inline static int32_t get_offset_of__MinVal_0() { return static_cast<int32_t>(offsetof(GroupContent_t833025371, ____MinVal_0)); }
	inline uint32_t get__MinVal_0() const { return ____MinVal_0; }
	inline uint32_t* get_address_of__MinVal_0() { return &____MinVal_0; }
	inline void set__MinVal_0(uint32_t value)
	{
		____MinVal_0 = value;
	}

	inline static int32_t get_offset_of__MaxVal_1() { return static_cast<int32_t>(offsetof(GroupContent_t833025371, ____MaxVal_1)); }
	inline uint32_t get__MaxVal_1() const { return ____MaxVal_1; }
	inline uint32_t* get_address_of__MaxVal_1() { return &____MaxVal_1; }
	inline void set__MaxVal_1(uint32_t value)
	{
		____MaxVal_1 = value;
	}

	inline static int32_t get_offset_of__HasMaxAttr_2() { return static_cast<int32_t>(offsetof(GroupContent_t833025371, ____HasMaxAttr_2)); }
	inline bool get__HasMaxAttr_2() const { return ____HasMaxAttr_2; }
	inline bool* get_address_of__HasMaxAttr_2() { return &____HasMaxAttr_2; }
	inline void set__HasMaxAttr_2(bool value)
	{
		____HasMaxAttr_2 = value;
	}

	inline static int32_t get_offset_of__HasMinAttr_3() { return static_cast<int32_t>(offsetof(GroupContent_t833025371, ____HasMinAttr_3)); }
	inline bool get__HasMinAttr_3() const { return ____HasMinAttr_3; }
	inline bool* get_address_of__HasMinAttr_3() { return &____HasMinAttr_3; }
	inline void set__HasMinAttr_3(bool value)
	{
		____HasMinAttr_3 = value;
	}

	inline static int32_t get_offset_of__Order_4() { return static_cast<int32_t>(offsetof(GroupContent_t833025371, ____Order_4)); }
	inline int32_t get__Order_4() const { return ____Order_4; }
	inline int32_t* get_address_of__Order_4() { return &____Order_4; }
	inline void set__Order_4(int32_t value)
	{
		____Order_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GROUPCONTENT_T833025371_H
#ifndef NAMESPACEPREFIXFORQNAME_T198417103_H
#define NAMESPACEPREFIXFORQNAME_T198417103_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Schema.XmlAtomicValue/NamespacePrefixForQName
struct  NamespacePrefixForQName_t198417103  : public RuntimeObject
{
public:
	// System.String System.Xml.Schema.XmlAtomicValue/NamespacePrefixForQName::prefix
	String_t* ___prefix_0;
	// System.String System.Xml.Schema.XmlAtomicValue/NamespacePrefixForQName::ns
	String_t* ___ns_1;

public:
	inline static int32_t get_offset_of_prefix_0() { return static_cast<int32_t>(offsetof(NamespacePrefixForQName_t198417103, ___prefix_0)); }
	inline String_t* get_prefix_0() const { return ___prefix_0; }
	inline String_t** get_address_of_prefix_0() { return &___prefix_0; }
	inline void set_prefix_0(String_t* value)
	{
		___prefix_0 = value;
		Il2CppCodeGenWriteBarrier((&___prefix_0), value);
	}

	inline static int32_t get_offset_of_ns_1() { return static_cast<int32_t>(offsetof(NamespacePrefixForQName_t198417103, ___ns_1)); }
	inline String_t* get_ns_1() const { return ___ns_1; }
	inline String_t** get_address_of_ns_1() { return &___ns_1; }
	inline void set_ns_1(String_t* value)
	{
		___ns_1 = value;
		Il2CppCodeGenWriteBarrier((&___ns_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NAMESPACEPREFIXFORQNAME_T198417103_H
#ifndef XMLSCHEMACOLLECTION_T3610399789_H
#define XMLSCHEMACOLLECTION_T3610399789_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Schema.XmlSchemaCollection
struct  XmlSchemaCollection_t3610399789  : public RuntimeObject
{
public:
	// System.Collections.Hashtable System.Xml.Schema.XmlSchemaCollection::collection
	Hashtable_t1853889766 * ___collection_0;
	// System.Xml.XmlNameTable System.Xml.Schema.XmlSchemaCollection::nameTable
	XmlNameTable_t71772148 * ___nameTable_1;
	// System.Xml.Schema.SchemaNames System.Xml.Schema.XmlSchemaCollection::schemaNames
	SchemaNames_t661607975 * ___schemaNames_2;
	// System.Threading.ReaderWriterLock System.Xml.Schema.XmlSchemaCollection::wLock
	ReaderWriterLock_t367846299 * ___wLock_3;
	// System.Int32 System.Xml.Schema.XmlSchemaCollection::timeout
	int32_t ___timeout_4;
	// System.Boolean System.Xml.Schema.XmlSchemaCollection::isThreadSafe
	bool ___isThreadSafe_5;
	// System.Xml.Schema.ValidationEventHandler System.Xml.Schema.XmlSchemaCollection::validationEventHandler
	ValidationEventHandler_t791314227 * ___validationEventHandler_6;
	// System.Xml.XmlResolver System.Xml.Schema.XmlSchemaCollection::xmlResolver
	XmlResolver_t626023767 * ___xmlResolver_7;

public:
	inline static int32_t get_offset_of_collection_0() { return static_cast<int32_t>(offsetof(XmlSchemaCollection_t3610399789, ___collection_0)); }
	inline Hashtable_t1853889766 * get_collection_0() const { return ___collection_0; }
	inline Hashtable_t1853889766 ** get_address_of_collection_0() { return &___collection_0; }
	inline void set_collection_0(Hashtable_t1853889766 * value)
	{
		___collection_0 = value;
		Il2CppCodeGenWriteBarrier((&___collection_0), value);
	}

	inline static int32_t get_offset_of_nameTable_1() { return static_cast<int32_t>(offsetof(XmlSchemaCollection_t3610399789, ___nameTable_1)); }
	inline XmlNameTable_t71772148 * get_nameTable_1() const { return ___nameTable_1; }
	inline XmlNameTable_t71772148 ** get_address_of_nameTable_1() { return &___nameTable_1; }
	inline void set_nameTable_1(XmlNameTable_t71772148 * value)
	{
		___nameTable_1 = value;
		Il2CppCodeGenWriteBarrier((&___nameTable_1), value);
	}

	inline static int32_t get_offset_of_schemaNames_2() { return static_cast<int32_t>(offsetof(XmlSchemaCollection_t3610399789, ___schemaNames_2)); }
	inline SchemaNames_t661607975 * get_schemaNames_2() const { return ___schemaNames_2; }
	inline SchemaNames_t661607975 ** get_address_of_schemaNames_2() { return &___schemaNames_2; }
	inline void set_schemaNames_2(SchemaNames_t661607975 * value)
	{
		___schemaNames_2 = value;
		Il2CppCodeGenWriteBarrier((&___schemaNames_2), value);
	}

	inline static int32_t get_offset_of_wLock_3() { return static_cast<int32_t>(offsetof(XmlSchemaCollection_t3610399789, ___wLock_3)); }
	inline ReaderWriterLock_t367846299 * get_wLock_3() const { return ___wLock_3; }
	inline ReaderWriterLock_t367846299 ** get_address_of_wLock_3() { return &___wLock_3; }
	inline void set_wLock_3(ReaderWriterLock_t367846299 * value)
	{
		___wLock_3 = value;
		Il2CppCodeGenWriteBarrier((&___wLock_3), value);
	}

	inline static int32_t get_offset_of_timeout_4() { return static_cast<int32_t>(offsetof(XmlSchemaCollection_t3610399789, ___timeout_4)); }
	inline int32_t get_timeout_4() const { return ___timeout_4; }
	inline int32_t* get_address_of_timeout_4() { return &___timeout_4; }
	inline void set_timeout_4(int32_t value)
	{
		___timeout_4 = value;
	}

	inline static int32_t get_offset_of_isThreadSafe_5() { return static_cast<int32_t>(offsetof(XmlSchemaCollection_t3610399789, ___isThreadSafe_5)); }
	inline bool get_isThreadSafe_5() const { return ___isThreadSafe_5; }
	inline bool* get_address_of_isThreadSafe_5() { return &___isThreadSafe_5; }
	inline void set_isThreadSafe_5(bool value)
	{
		___isThreadSafe_5 = value;
	}

	inline static int32_t get_offset_of_validationEventHandler_6() { return static_cast<int32_t>(offsetof(XmlSchemaCollection_t3610399789, ___validationEventHandler_6)); }
	inline ValidationEventHandler_t791314227 * get_validationEventHandler_6() const { return ___validationEventHandler_6; }
	inline ValidationEventHandler_t791314227 ** get_address_of_validationEventHandler_6() { return &___validationEventHandler_6; }
	inline void set_validationEventHandler_6(ValidationEventHandler_t791314227 * value)
	{
		___validationEventHandler_6 = value;
		Il2CppCodeGenWriteBarrier((&___validationEventHandler_6), value);
	}

	inline static int32_t get_offset_of_xmlResolver_7() { return static_cast<int32_t>(offsetof(XmlSchemaCollection_t3610399789, ___xmlResolver_7)); }
	inline XmlResolver_t626023767 * get_xmlResolver_7() const { return ___xmlResolver_7; }
	inline XmlResolver_t626023767 ** get_address_of_xmlResolver_7() { return &___xmlResolver_7; }
	inline void set_xmlResolver_7(XmlResolver_t626023767 * value)
	{
		___xmlResolver_7 = value;
		Il2CppCodeGenWriteBarrier((&___xmlResolver_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XMLSCHEMACOLLECTION_T3610399789_H
#ifndef XMLSCHEMACOLLECTIONENUMERATOR_T1663512188_H
#define XMLSCHEMACOLLECTIONENUMERATOR_T1663512188_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Schema.XmlSchemaCollectionEnumerator
struct  XmlSchemaCollectionEnumerator_t1663512188  : public RuntimeObject
{
public:
	// System.Collections.IDictionaryEnumerator System.Xml.Schema.XmlSchemaCollectionEnumerator::enumerator
	RuntimeObject* ___enumerator_0;

public:
	inline static int32_t get_offset_of_enumerator_0() { return static_cast<int32_t>(offsetof(XmlSchemaCollectionEnumerator_t1663512188, ___enumerator_0)); }
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
#endif // XMLSCHEMACOLLECTIONENUMERATOR_T1663512188_H
#ifndef XMLSCHEMACOLLECTIONNODE_T2379032341_H
#define XMLSCHEMACOLLECTIONNODE_T2379032341_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Schema.XmlSchemaCollectionNode
struct  XmlSchemaCollectionNode_t2379032341  : public RuntimeObject
{
public:
	// System.String System.Xml.Schema.XmlSchemaCollectionNode::namespaceUri
	String_t* ___namespaceUri_0;
	// System.Xml.Schema.SchemaInfo System.Xml.Schema.XmlSchemaCollectionNode::schemaInfo
	SchemaInfo_t3347508623 * ___schemaInfo_1;
	// System.Xml.Schema.XmlSchema System.Xml.Schema.XmlSchemaCollectionNode::schema
	XmlSchema_t3742557897 * ___schema_2;

public:
	inline static int32_t get_offset_of_namespaceUri_0() { return static_cast<int32_t>(offsetof(XmlSchemaCollectionNode_t2379032341, ___namespaceUri_0)); }
	inline String_t* get_namespaceUri_0() const { return ___namespaceUri_0; }
	inline String_t** get_address_of_namespaceUri_0() { return &___namespaceUri_0; }
	inline void set_namespaceUri_0(String_t* value)
	{
		___namespaceUri_0 = value;
		Il2CppCodeGenWriteBarrier((&___namespaceUri_0), value);
	}

	inline static int32_t get_offset_of_schemaInfo_1() { return static_cast<int32_t>(offsetof(XmlSchemaCollectionNode_t2379032341, ___schemaInfo_1)); }
	inline SchemaInfo_t3347508623 * get_schemaInfo_1() const { return ___schemaInfo_1; }
	inline SchemaInfo_t3347508623 ** get_address_of_schemaInfo_1() { return &___schemaInfo_1; }
	inline void set_schemaInfo_1(SchemaInfo_t3347508623 * value)
	{
		___schemaInfo_1 = value;
		Il2CppCodeGenWriteBarrier((&___schemaInfo_1), value);
	}

	inline static int32_t get_offset_of_schema_2() { return static_cast<int32_t>(offsetof(XmlSchemaCollectionNode_t2379032341, ___schema_2)); }
	inline XmlSchema_t3742557897 * get_schema_2() const { return ___schema_2; }
	inline XmlSchema_t3742557897 ** get_address_of_schema_2() { return &___schema_2; }
	inline void set_schema_2(XmlSchema_t3742557897 * value)
	{
		___schema_2 = value;
		Il2CppCodeGenWriteBarrier((&___schema_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XMLSCHEMACOLLECTIONNODE_T2379032341_H
#ifndef XMLSCHEMACOMPILATIONSETTINGS_T2218765537_H
#define XMLSCHEMACOMPILATIONSETTINGS_T2218765537_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Schema.XmlSchemaCompilationSettings
struct  XmlSchemaCompilationSettings_t2218765537  : public RuntimeObject
{
public:
	// System.Boolean System.Xml.Schema.XmlSchemaCompilationSettings::enableUpaCheck
	bool ___enableUpaCheck_0;

public:
	inline static int32_t get_offset_of_enableUpaCheck_0() { return static_cast<int32_t>(offsetof(XmlSchemaCompilationSettings_t2218765537, ___enableUpaCheck_0)); }
	inline bool get_enableUpaCheck_0() const { return ___enableUpaCheck_0; }
	inline bool* get_address_of_enableUpaCheck_0() { return &___enableUpaCheck_0; }
	inline void set_enableUpaCheck_0(bool value)
	{
		___enableUpaCheck_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XMLSCHEMACOMPILATIONSETTINGS_T2218765537_H
#ifndef XMLSCHEMADATATYPE_T322714710_H
#define XMLSCHEMADATATYPE_T322714710_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Schema.XmlSchemaDatatype
struct  XmlSchemaDatatype_t322714710  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XMLSCHEMADATATYPE_T322714710_H
#ifndef XMLSCHEMAOBJECT_T1315720168_H
#define XMLSCHEMAOBJECT_T1315720168_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Schema.XmlSchemaObject
struct  XmlSchemaObject_t1315720168  : public RuntimeObject
{
public:
	// System.Int32 System.Xml.Schema.XmlSchemaObject::lineNum
	int32_t ___lineNum_0;
	// System.Int32 System.Xml.Schema.XmlSchemaObject::linePos
	int32_t ___linePos_1;
	// System.String System.Xml.Schema.XmlSchemaObject::sourceUri
	String_t* ___sourceUri_2;
	// System.Xml.Serialization.XmlSerializerNamespaces System.Xml.Schema.XmlSchemaObject::namespaces
	XmlSerializerNamespaces_t2702737953 * ___namespaces_3;
	// System.Xml.Schema.XmlSchemaObject System.Xml.Schema.XmlSchemaObject::parent
	XmlSchemaObject_t1315720168 * ___parent_4;
	// System.Boolean System.Xml.Schema.XmlSchemaObject::isProcessing
	bool ___isProcessing_5;

public:
	inline static int32_t get_offset_of_lineNum_0() { return static_cast<int32_t>(offsetof(XmlSchemaObject_t1315720168, ___lineNum_0)); }
	inline int32_t get_lineNum_0() const { return ___lineNum_0; }
	inline int32_t* get_address_of_lineNum_0() { return &___lineNum_0; }
	inline void set_lineNum_0(int32_t value)
	{
		___lineNum_0 = value;
	}

	inline static int32_t get_offset_of_linePos_1() { return static_cast<int32_t>(offsetof(XmlSchemaObject_t1315720168, ___linePos_1)); }
	inline int32_t get_linePos_1() const { return ___linePos_1; }
	inline int32_t* get_address_of_linePos_1() { return &___linePos_1; }
	inline void set_linePos_1(int32_t value)
	{
		___linePos_1 = value;
	}

	inline static int32_t get_offset_of_sourceUri_2() { return static_cast<int32_t>(offsetof(XmlSchemaObject_t1315720168, ___sourceUri_2)); }
	inline String_t* get_sourceUri_2() const { return ___sourceUri_2; }
	inline String_t** get_address_of_sourceUri_2() { return &___sourceUri_2; }
	inline void set_sourceUri_2(String_t* value)
	{
		___sourceUri_2 = value;
		Il2CppCodeGenWriteBarrier((&___sourceUri_2), value);
	}

	inline static int32_t get_offset_of_namespaces_3() { return static_cast<int32_t>(offsetof(XmlSchemaObject_t1315720168, ___namespaces_3)); }
	inline XmlSerializerNamespaces_t2702737953 * get_namespaces_3() const { return ___namespaces_3; }
	inline XmlSerializerNamespaces_t2702737953 ** get_address_of_namespaces_3() { return &___namespaces_3; }
	inline void set_namespaces_3(XmlSerializerNamespaces_t2702737953 * value)
	{
		___namespaces_3 = value;
		Il2CppCodeGenWriteBarrier((&___namespaces_3), value);
	}

	inline static int32_t get_offset_of_parent_4() { return static_cast<int32_t>(offsetof(XmlSchemaObject_t1315720168, ___parent_4)); }
	inline XmlSchemaObject_t1315720168 * get_parent_4() const { return ___parent_4; }
	inline XmlSchemaObject_t1315720168 ** get_address_of_parent_4() { return &___parent_4; }
	inline void set_parent_4(XmlSchemaObject_t1315720168 * value)
	{
		___parent_4 = value;
		Il2CppCodeGenWriteBarrier((&___parent_4), value);
	}

	inline static int32_t get_offset_of_isProcessing_5() { return static_cast<int32_t>(offsetof(XmlSchemaObject_t1315720168, ___isProcessing_5)); }
	inline bool get_isProcessing_5() const { return ___isProcessing_5; }
	inline bool* get_address_of_isProcessing_5() { return &___isProcessing_5; }
	inline void set_isProcessing_5(bool value)
	{
		___isProcessing_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XMLSCHEMAOBJECT_T1315720168_H
#ifndef XPATHITEM_T4250588140_H
#define XPATHITEM_T4250588140_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XPath.XPathItem
struct  XPathItem_t4250588140  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XPATHITEM_T4250588140_H
#ifndef XMLNAMESPACEMANAGER_T418790500_H
#define XMLNAMESPACEMANAGER_T418790500_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XmlNamespaceManager
struct  XmlNamespaceManager_t418790500  : public RuntimeObject
{
public:
	// System.Xml.XmlNamespaceManager/NamespaceDeclaration[] System.Xml.XmlNamespaceManager::nsdecls
	NamespaceDeclarationU5BU5D_t3609802718* ___nsdecls_0;
	// System.Int32 System.Xml.XmlNamespaceManager::lastDecl
	int32_t ___lastDecl_1;
	// System.Xml.XmlNameTable System.Xml.XmlNamespaceManager::nameTable
	XmlNameTable_t71772148 * ___nameTable_2;
	// System.Int32 System.Xml.XmlNamespaceManager::scopeId
	int32_t ___scopeId_3;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Xml.XmlNamespaceManager::hashTable
	Dictionary_2_t2736202052 * ___hashTable_4;
	// System.Boolean System.Xml.XmlNamespaceManager::useHashtable
	bool ___useHashtable_5;
	// System.String System.Xml.XmlNamespaceManager::xml
	String_t* ___xml_6;
	// System.String System.Xml.XmlNamespaceManager::xmlNs
	String_t* ___xmlNs_7;

public:
	inline static int32_t get_offset_of_nsdecls_0() { return static_cast<int32_t>(offsetof(XmlNamespaceManager_t418790500, ___nsdecls_0)); }
	inline NamespaceDeclarationU5BU5D_t3609802718* get_nsdecls_0() const { return ___nsdecls_0; }
	inline NamespaceDeclarationU5BU5D_t3609802718** get_address_of_nsdecls_0() { return &___nsdecls_0; }
	inline void set_nsdecls_0(NamespaceDeclarationU5BU5D_t3609802718* value)
	{
		___nsdecls_0 = value;
		Il2CppCodeGenWriteBarrier((&___nsdecls_0), value);
	}

	inline static int32_t get_offset_of_lastDecl_1() { return static_cast<int32_t>(offsetof(XmlNamespaceManager_t418790500, ___lastDecl_1)); }
	inline int32_t get_lastDecl_1() const { return ___lastDecl_1; }
	inline int32_t* get_address_of_lastDecl_1() { return &___lastDecl_1; }
	inline void set_lastDecl_1(int32_t value)
	{
		___lastDecl_1 = value;
	}

	inline static int32_t get_offset_of_nameTable_2() { return static_cast<int32_t>(offsetof(XmlNamespaceManager_t418790500, ___nameTable_2)); }
	inline XmlNameTable_t71772148 * get_nameTable_2() const { return ___nameTable_2; }
	inline XmlNameTable_t71772148 ** get_address_of_nameTable_2() { return &___nameTable_2; }
	inline void set_nameTable_2(XmlNameTable_t71772148 * value)
	{
		___nameTable_2 = value;
		Il2CppCodeGenWriteBarrier((&___nameTable_2), value);
	}

	inline static int32_t get_offset_of_scopeId_3() { return static_cast<int32_t>(offsetof(XmlNamespaceManager_t418790500, ___scopeId_3)); }
	inline int32_t get_scopeId_3() const { return ___scopeId_3; }
	inline int32_t* get_address_of_scopeId_3() { return &___scopeId_3; }
	inline void set_scopeId_3(int32_t value)
	{
		___scopeId_3 = value;
	}

	inline static int32_t get_offset_of_hashTable_4() { return static_cast<int32_t>(offsetof(XmlNamespaceManager_t418790500, ___hashTable_4)); }
	inline Dictionary_2_t2736202052 * get_hashTable_4() const { return ___hashTable_4; }
	inline Dictionary_2_t2736202052 ** get_address_of_hashTable_4() { return &___hashTable_4; }
	inline void set_hashTable_4(Dictionary_2_t2736202052 * value)
	{
		___hashTable_4 = value;
		Il2CppCodeGenWriteBarrier((&___hashTable_4), value);
	}

	inline static int32_t get_offset_of_useHashtable_5() { return static_cast<int32_t>(offsetof(XmlNamespaceManager_t418790500, ___useHashtable_5)); }
	inline bool get_useHashtable_5() const { return ___useHashtable_5; }
	inline bool* get_address_of_useHashtable_5() { return &___useHashtable_5; }
	inline void set_useHashtable_5(bool value)
	{
		___useHashtable_5 = value;
	}

	inline static int32_t get_offset_of_xml_6() { return static_cast<int32_t>(offsetof(XmlNamespaceManager_t418790500, ___xml_6)); }
	inline String_t* get_xml_6() const { return ___xml_6; }
	inline String_t** get_address_of_xml_6() { return &___xml_6; }
	inline void set_xml_6(String_t* value)
	{
		___xml_6 = value;
		Il2CppCodeGenWriteBarrier((&___xml_6), value);
	}

	inline static int32_t get_offset_of_xmlNs_7() { return static_cast<int32_t>(offsetof(XmlNamespaceManager_t418790500, ___xmlNs_7)); }
	inline String_t* get_xmlNs_7() const { return ___xmlNs_7; }
	inline String_t** get_address_of_xmlNs_7() { return &___xmlNs_7; }
	inline void set_xmlNs_7(String_t* value)
	{
		___xmlNs_7 = value;
		Il2CppCodeGenWriteBarrier((&___xmlNs_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XMLNAMESPACEMANAGER_T418790500_H
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
#ifndef BINARYFACETSCHECKER_T976301705_H
#define BINARYFACETSCHECKER_T976301705_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Schema.BinaryFacetsChecker
struct  BinaryFacetsChecker_t976301705  : public FacetsChecker_t3316496195
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BINARYFACETSCHECKER_T976301705_H
#ifndef COMPILER_T2647573624_H
#define COMPILER_T2647573624_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Schema.Compiler
struct  Compiler_t2647573624  : public BaseProcessor_t2302394543
{
public:
	// System.String System.Xml.Schema.Compiler::restrictionErrorMsg
	String_t* ___restrictionErrorMsg_6;
	// System.Xml.Schema.XmlSchemaObjectTable System.Xml.Schema.Compiler::attributes
	XmlSchemaObjectTable_t2546974348 * ___attributes_7;
	// System.Xml.Schema.XmlSchemaObjectTable System.Xml.Schema.Compiler::attributeGroups
	XmlSchemaObjectTable_t2546974348 * ___attributeGroups_8;
	// System.Xml.Schema.XmlSchemaObjectTable System.Xml.Schema.Compiler::elements
	XmlSchemaObjectTable_t2546974348 * ___elements_9;
	// System.Xml.Schema.XmlSchemaObjectTable System.Xml.Schema.Compiler::schemaTypes
	XmlSchemaObjectTable_t2546974348 * ___schemaTypes_10;
	// System.Xml.Schema.XmlSchemaObjectTable System.Xml.Schema.Compiler::groups
	XmlSchemaObjectTable_t2546974348 * ___groups_11;
	// System.Xml.Schema.XmlSchemaObjectTable System.Xml.Schema.Compiler::notations
	XmlSchemaObjectTable_t2546974348 * ___notations_12;
	// System.Xml.Schema.XmlSchemaObjectTable System.Xml.Schema.Compiler::examplars
	XmlSchemaObjectTable_t2546974348 * ___examplars_13;
	// System.Xml.Schema.XmlSchemaObjectTable System.Xml.Schema.Compiler::identityConstraints
	XmlSchemaObjectTable_t2546974348 * ___identityConstraints_14;
	// System.Collections.Stack System.Xml.Schema.Compiler::complexTypeStack
	Stack_t2329662280 * ___complexTypeStack_15;
	// System.Collections.Hashtable System.Xml.Schema.Compiler::schemasToCompile
	Hashtable_t1853889766 * ___schemasToCompile_16;
	// System.Collections.Hashtable System.Xml.Schema.Compiler::importedSchemas
	Hashtable_t1853889766 * ___importedSchemas_17;
	// System.Xml.Schema.XmlSchema System.Xml.Schema.Compiler::schemaForSchema
	XmlSchema_t3742557897 * ___schemaForSchema_18;

public:
	inline static int32_t get_offset_of_restrictionErrorMsg_6() { return static_cast<int32_t>(offsetof(Compiler_t2647573624, ___restrictionErrorMsg_6)); }
	inline String_t* get_restrictionErrorMsg_6() const { return ___restrictionErrorMsg_6; }
	inline String_t** get_address_of_restrictionErrorMsg_6() { return &___restrictionErrorMsg_6; }
	inline void set_restrictionErrorMsg_6(String_t* value)
	{
		___restrictionErrorMsg_6 = value;
		Il2CppCodeGenWriteBarrier((&___restrictionErrorMsg_6), value);
	}

	inline static int32_t get_offset_of_attributes_7() { return static_cast<int32_t>(offsetof(Compiler_t2647573624, ___attributes_7)); }
	inline XmlSchemaObjectTable_t2546974348 * get_attributes_7() const { return ___attributes_7; }
	inline XmlSchemaObjectTable_t2546974348 ** get_address_of_attributes_7() { return &___attributes_7; }
	inline void set_attributes_7(XmlSchemaObjectTable_t2546974348 * value)
	{
		___attributes_7 = value;
		Il2CppCodeGenWriteBarrier((&___attributes_7), value);
	}

	inline static int32_t get_offset_of_attributeGroups_8() { return static_cast<int32_t>(offsetof(Compiler_t2647573624, ___attributeGroups_8)); }
	inline XmlSchemaObjectTable_t2546974348 * get_attributeGroups_8() const { return ___attributeGroups_8; }
	inline XmlSchemaObjectTable_t2546974348 ** get_address_of_attributeGroups_8() { return &___attributeGroups_8; }
	inline void set_attributeGroups_8(XmlSchemaObjectTable_t2546974348 * value)
	{
		___attributeGroups_8 = value;
		Il2CppCodeGenWriteBarrier((&___attributeGroups_8), value);
	}

	inline static int32_t get_offset_of_elements_9() { return static_cast<int32_t>(offsetof(Compiler_t2647573624, ___elements_9)); }
	inline XmlSchemaObjectTable_t2546974348 * get_elements_9() const { return ___elements_9; }
	inline XmlSchemaObjectTable_t2546974348 ** get_address_of_elements_9() { return &___elements_9; }
	inline void set_elements_9(XmlSchemaObjectTable_t2546974348 * value)
	{
		___elements_9 = value;
		Il2CppCodeGenWriteBarrier((&___elements_9), value);
	}

	inline static int32_t get_offset_of_schemaTypes_10() { return static_cast<int32_t>(offsetof(Compiler_t2647573624, ___schemaTypes_10)); }
	inline XmlSchemaObjectTable_t2546974348 * get_schemaTypes_10() const { return ___schemaTypes_10; }
	inline XmlSchemaObjectTable_t2546974348 ** get_address_of_schemaTypes_10() { return &___schemaTypes_10; }
	inline void set_schemaTypes_10(XmlSchemaObjectTable_t2546974348 * value)
	{
		___schemaTypes_10 = value;
		Il2CppCodeGenWriteBarrier((&___schemaTypes_10), value);
	}

	inline static int32_t get_offset_of_groups_11() { return static_cast<int32_t>(offsetof(Compiler_t2647573624, ___groups_11)); }
	inline XmlSchemaObjectTable_t2546974348 * get_groups_11() const { return ___groups_11; }
	inline XmlSchemaObjectTable_t2546974348 ** get_address_of_groups_11() { return &___groups_11; }
	inline void set_groups_11(XmlSchemaObjectTable_t2546974348 * value)
	{
		___groups_11 = value;
		Il2CppCodeGenWriteBarrier((&___groups_11), value);
	}

	inline static int32_t get_offset_of_notations_12() { return static_cast<int32_t>(offsetof(Compiler_t2647573624, ___notations_12)); }
	inline XmlSchemaObjectTable_t2546974348 * get_notations_12() const { return ___notations_12; }
	inline XmlSchemaObjectTable_t2546974348 ** get_address_of_notations_12() { return &___notations_12; }
	inline void set_notations_12(XmlSchemaObjectTable_t2546974348 * value)
	{
		___notations_12 = value;
		Il2CppCodeGenWriteBarrier((&___notations_12), value);
	}

	inline static int32_t get_offset_of_examplars_13() { return static_cast<int32_t>(offsetof(Compiler_t2647573624, ___examplars_13)); }
	inline XmlSchemaObjectTable_t2546974348 * get_examplars_13() const { return ___examplars_13; }
	inline XmlSchemaObjectTable_t2546974348 ** get_address_of_examplars_13() { return &___examplars_13; }
	inline void set_examplars_13(XmlSchemaObjectTable_t2546974348 * value)
	{
		___examplars_13 = value;
		Il2CppCodeGenWriteBarrier((&___examplars_13), value);
	}

	inline static int32_t get_offset_of_identityConstraints_14() { return static_cast<int32_t>(offsetof(Compiler_t2647573624, ___identityConstraints_14)); }
	inline XmlSchemaObjectTable_t2546974348 * get_identityConstraints_14() const { return ___identityConstraints_14; }
	inline XmlSchemaObjectTable_t2546974348 ** get_address_of_identityConstraints_14() { return &___identityConstraints_14; }
	inline void set_identityConstraints_14(XmlSchemaObjectTable_t2546974348 * value)
	{
		___identityConstraints_14 = value;
		Il2CppCodeGenWriteBarrier((&___identityConstraints_14), value);
	}

	inline static int32_t get_offset_of_complexTypeStack_15() { return static_cast<int32_t>(offsetof(Compiler_t2647573624, ___complexTypeStack_15)); }
	inline Stack_t2329662280 * get_complexTypeStack_15() const { return ___complexTypeStack_15; }
	inline Stack_t2329662280 ** get_address_of_complexTypeStack_15() { return &___complexTypeStack_15; }
	inline void set_complexTypeStack_15(Stack_t2329662280 * value)
	{
		___complexTypeStack_15 = value;
		Il2CppCodeGenWriteBarrier((&___complexTypeStack_15), value);
	}

	inline static int32_t get_offset_of_schemasToCompile_16() { return static_cast<int32_t>(offsetof(Compiler_t2647573624, ___schemasToCompile_16)); }
	inline Hashtable_t1853889766 * get_schemasToCompile_16() const { return ___schemasToCompile_16; }
	inline Hashtable_t1853889766 ** get_address_of_schemasToCompile_16() { return &___schemasToCompile_16; }
	inline void set_schemasToCompile_16(Hashtable_t1853889766 * value)
	{
		___schemasToCompile_16 = value;
		Il2CppCodeGenWriteBarrier((&___schemasToCompile_16), value);
	}

	inline static int32_t get_offset_of_importedSchemas_17() { return static_cast<int32_t>(offsetof(Compiler_t2647573624, ___importedSchemas_17)); }
	inline Hashtable_t1853889766 * get_importedSchemas_17() const { return ___importedSchemas_17; }
	inline Hashtable_t1853889766 ** get_address_of_importedSchemas_17() { return &___importedSchemas_17; }
	inline void set_importedSchemas_17(Hashtable_t1853889766 * value)
	{
		___importedSchemas_17 = value;
		Il2CppCodeGenWriteBarrier((&___importedSchemas_17), value);
	}

	inline static int32_t get_offset_of_schemaForSchema_18() { return static_cast<int32_t>(offsetof(Compiler_t2647573624, ___schemaForSchema_18)); }
	inline XmlSchema_t3742557897 * get_schemaForSchema_18() const { return ___schemaForSchema_18; }
	inline XmlSchema_t3742557897 ** get_address_of_schemaForSchema_18() { return &___schemaForSchema_18; }
	inline void set_schemaForSchema_18(XmlSchema_t3742557897 * value)
	{
		___schemaForSchema_18 = value;
		Il2CppCodeGenWriteBarrier((&___schemaForSchema_18), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPILER_T2647573624_H
#ifndef DATETIMEFACETSCHECKER_T3377331714_H
#define DATETIMEFACETSCHECKER_T3377331714_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Schema.DateTimeFacetsChecker
struct  DateTimeFacetsChecker_t3377331714  : public FacetsChecker_t3316496195
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATETIMEFACETSCHECKER_T3377331714_H
#ifndef DTDVALIDATOR_T3036232587_H
#define DTDVALIDATOR_T3036232587_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Schema.DtdValidator
struct  DtdValidator_t3036232587  : public BaseValidator_t868759770
{
public:
	// System.Xml.HWStack System.Xml.Schema.DtdValidator::validationStack
	HWStack_t658497212 * ___validationStack_16;
	// System.Collections.Hashtable System.Xml.Schema.DtdValidator::attPresence
	Hashtable_t1853889766 * ___attPresence_17;
	// System.Xml.XmlQualifiedName System.Xml.Schema.DtdValidator::name
	XmlQualifiedName_t2760654312 * ___name_18;
	// System.Collections.Hashtable System.Xml.Schema.DtdValidator::IDs
	Hashtable_t1853889766 * ___IDs_19;
	// System.Xml.Schema.IdRefNode System.Xml.Schema.DtdValidator::idRefListHead
	IdRefNode_t3774897917 * ___idRefListHead_20;
	// System.Boolean System.Xml.Schema.DtdValidator::processIdentityConstraints
	bool ___processIdentityConstraints_21;

public:
	inline static int32_t get_offset_of_validationStack_16() { return static_cast<int32_t>(offsetof(DtdValidator_t3036232587, ___validationStack_16)); }
	inline HWStack_t658497212 * get_validationStack_16() const { return ___validationStack_16; }
	inline HWStack_t658497212 ** get_address_of_validationStack_16() { return &___validationStack_16; }
	inline void set_validationStack_16(HWStack_t658497212 * value)
	{
		___validationStack_16 = value;
		Il2CppCodeGenWriteBarrier((&___validationStack_16), value);
	}

	inline static int32_t get_offset_of_attPresence_17() { return static_cast<int32_t>(offsetof(DtdValidator_t3036232587, ___attPresence_17)); }
	inline Hashtable_t1853889766 * get_attPresence_17() const { return ___attPresence_17; }
	inline Hashtable_t1853889766 ** get_address_of_attPresence_17() { return &___attPresence_17; }
	inline void set_attPresence_17(Hashtable_t1853889766 * value)
	{
		___attPresence_17 = value;
		Il2CppCodeGenWriteBarrier((&___attPresence_17), value);
	}

	inline static int32_t get_offset_of_name_18() { return static_cast<int32_t>(offsetof(DtdValidator_t3036232587, ___name_18)); }
	inline XmlQualifiedName_t2760654312 * get_name_18() const { return ___name_18; }
	inline XmlQualifiedName_t2760654312 ** get_address_of_name_18() { return &___name_18; }
	inline void set_name_18(XmlQualifiedName_t2760654312 * value)
	{
		___name_18 = value;
		Il2CppCodeGenWriteBarrier((&___name_18), value);
	}

	inline static int32_t get_offset_of_IDs_19() { return static_cast<int32_t>(offsetof(DtdValidator_t3036232587, ___IDs_19)); }
	inline Hashtable_t1853889766 * get_IDs_19() const { return ___IDs_19; }
	inline Hashtable_t1853889766 ** get_address_of_IDs_19() { return &___IDs_19; }
	inline void set_IDs_19(Hashtable_t1853889766 * value)
	{
		___IDs_19 = value;
		Il2CppCodeGenWriteBarrier((&___IDs_19), value);
	}

	inline static int32_t get_offset_of_idRefListHead_20() { return static_cast<int32_t>(offsetof(DtdValidator_t3036232587, ___idRefListHead_20)); }
	inline IdRefNode_t3774897917 * get_idRefListHead_20() const { return ___idRefListHead_20; }
	inline IdRefNode_t3774897917 ** get_address_of_idRefListHead_20() { return &___idRefListHead_20; }
	inline void set_idRefListHead_20(IdRefNode_t3774897917 * value)
	{
		___idRefListHead_20 = value;
		Il2CppCodeGenWriteBarrier((&___idRefListHead_20), value);
	}

	inline static int32_t get_offset_of_processIdentityConstraints_21() { return static_cast<int32_t>(offsetof(DtdValidator_t3036232587, ___processIdentityConstraints_21)); }
	inline bool get_processIdentityConstraints_21() const { return ___processIdentityConstraints_21; }
	inline bool* get_address_of_processIdentityConstraints_21() { return &___processIdentityConstraints_21; }
	inline void set_processIdentityConstraints_21(bool value)
	{
		___processIdentityConstraints_21 = value;
	}
};

struct DtdValidator_t3036232587_StaticFields
{
public:
	// System.Xml.Schema.DtdValidator/NamespaceManager System.Xml.Schema.DtdValidator::namespaceManager
	NamespaceManager_t2339540891 * ___namespaceManager_15;

public:
	inline static int32_t get_offset_of_namespaceManager_15() { return static_cast<int32_t>(offsetof(DtdValidator_t3036232587_StaticFields, ___namespaceManager_15)); }
	inline NamespaceManager_t2339540891 * get_namespaceManager_15() const { return ___namespaceManager_15; }
	inline NamespaceManager_t2339540891 ** get_address_of_namespaceManager_15() { return &___namespaceManager_15; }
	inline void set_namespaceManager_15(NamespaceManager_t2339540891 * value)
	{
		___namespaceManager_15 = value;
		Il2CppCodeGenWriteBarrier((&___namespaceManager_15), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DTDVALIDATOR_T3036232587_H
#ifndef NAMESPACEMANAGER_T2339540891_H
#define NAMESPACEMANAGER_T2339540891_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Schema.DtdValidator/NamespaceManager
struct  NamespaceManager_t2339540891  : public XmlNamespaceManager_t418790500
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NAMESPACEMANAGER_T2339540891_H
#ifndef DURATIONFACETSCHECKER_T104576138_H
#define DURATIONFACETSCHECKER_T104576138_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Schema.DurationFacetsChecker
struct  DurationFacetsChecker_t104576138  : public FacetsChecker_t3316496195
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DURATIONFACETSCHECKER_T104576138_H
#ifndef MAP_T1331044427_H
#define MAP_T1331044427_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Schema.FacetsChecker/FacetsCompiler/Map
struct  Map_t1331044427 
{
public:
	// System.Char System.Xml.Schema.FacetsChecker/FacetsCompiler/Map::match
	Il2CppChar ___match_0;
	// System.String System.Xml.Schema.FacetsChecker/FacetsCompiler/Map::replacement
	String_t* ___replacement_1;

public:
	inline static int32_t get_offset_of_match_0() { return static_cast<int32_t>(offsetof(Map_t1331044427, ___match_0)); }
	inline Il2CppChar get_match_0() const { return ___match_0; }
	inline Il2CppChar* get_address_of_match_0() { return &___match_0; }
	inline void set_match_0(Il2CppChar value)
	{
		___match_0 = value;
	}

	inline static int32_t get_offset_of_replacement_1() { return static_cast<int32_t>(offsetof(Map_t1331044427, ___replacement_1)); }
	inline String_t* get_replacement_1() const { return ___replacement_1; }
	inline String_t** get_address_of_replacement_1() { return &___replacement_1; }
	inline void set_replacement_1(String_t* value)
	{
		___replacement_1 = value;
		Il2CppCodeGenWriteBarrier((&___replacement_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Xml.Schema.FacetsChecker/FacetsCompiler/Map
struct Map_t1331044427_marshaled_pinvoke
{
	uint8_t ___match_0;
	char* ___replacement_1;
};
// Native definition for COM marshalling of System.Xml.Schema.FacetsChecker/FacetsCompiler/Map
struct Map_t1331044427_marshaled_com
{
	uint8_t ___match_0;
	Il2CppChar* ___replacement_1;
};
#endif // MAP_T1331044427_H
#ifndef LISTFACETSCHECKER_T3393181093_H
#define LISTFACETSCHECKER_T3393181093_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Schema.ListFacetsChecker
struct  ListFacetsChecker_t3393181093  : public FacetsChecker_t3316496195
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LISTFACETSCHECKER_T3393181093_H
#ifndef MISCFACETSCHECKER_T114397606_H
#define MISCFACETSCHECKER_T114397606_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Schema.MiscFacetsChecker
struct  MiscFacetsChecker_t114397606  : public FacetsChecker_t3316496195
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MISCFACETSCHECKER_T114397606_H
#ifndef NUMERIC2FACETSCHECKER_T421813322_H
#define NUMERIC2FACETSCHECKER_T421813322_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Schema.Numeric2FacetsChecker
struct  Numeric2FacetsChecker_t421813322  : public FacetsChecker_t3316496195
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NUMERIC2FACETSCHECKER_T421813322_H
#ifndef PREPROCESSOR_T3894248582_H
#define PREPROCESSOR_T3894248582_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Schema.Preprocessor
struct  Preprocessor_t3894248582  : public BaseProcessor_t2302394543
{
public:

public:
};

struct Preprocessor_t3894248582_StaticFields
{
public:
	// System.Xml.Schema.XmlSchema System.Xml.Schema.Preprocessor::builtInSchemaForXmlNS
	XmlSchema_t3742557897 * ___builtInSchemaForXmlNS_6;

public:
	inline static int32_t get_offset_of_builtInSchemaForXmlNS_6() { return static_cast<int32_t>(offsetof(Preprocessor_t3894248582_StaticFields, ___builtInSchemaForXmlNS_6)); }
	inline XmlSchema_t3742557897 * get_builtInSchemaForXmlNS_6() const { return ___builtInSchemaForXmlNS_6; }
	inline XmlSchema_t3742557897 ** get_address_of_builtInSchemaForXmlNS_6() { return &___builtInSchemaForXmlNS_6; }
	inline void set_builtInSchemaForXmlNS_6(XmlSchema_t3742557897 * value)
	{
		___builtInSchemaForXmlNS_6 = value;
		Il2CppCodeGenWriteBarrier((&___builtInSchemaForXmlNS_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PREPROCESSOR_T3894248582_H
#ifndef QNAMEFACETSCHECKER_T971749529_H
#define QNAMEFACETSCHECKER_T971749529_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Schema.QNameFacetsChecker
struct  QNameFacetsChecker_t971749529  : public FacetsChecker_t3316496195
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // QNAMEFACETSCHECKER_T971749529_H
#ifndef SCHEMACOLLECTIONCOMPILER_T940890354_H
#define SCHEMACOLLECTIONCOMPILER_T940890354_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Schema.SchemaCollectionCompiler
struct  SchemaCollectionCompiler_t940890354  : public BaseProcessor_t2302394543
{
public:
	// System.Boolean System.Xml.Schema.SchemaCollectionCompiler::compileContentModel
	bool ___compileContentModel_6;
	// System.Xml.Schema.XmlSchemaObjectTable System.Xml.Schema.SchemaCollectionCompiler::examplars
	XmlSchemaObjectTable_t2546974348 * ___examplars_7;
	// System.Collections.Stack System.Xml.Schema.SchemaCollectionCompiler::complexTypeStack
	Stack_t2329662280 * ___complexTypeStack_8;
	// System.Xml.Schema.XmlSchema System.Xml.Schema.SchemaCollectionCompiler::schema
	XmlSchema_t3742557897 * ___schema_9;

public:
	inline static int32_t get_offset_of_compileContentModel_6() { return static_cast<int32_t>(offsetof(SchemaCollectionCompiler_t940890354, ___compileContentModel_6)); }
	inline bool get_compileContentModel_6() const { return ___compileContentModel_6; }
	inline bool* get_address_of_compileContentModel_6() { return &___compileContentModel_6; }
	inline void set_compileContentModel_6(bool value)
	{
		___compileContentModel_6 = value;
	}

	inline static int32_t get_offset_of_examplars_7() { return static_cast<int32_t>(offsetof(SchemaCollectionCompiler_t940890354, ___examplars_7)); }
	inline XmlSchemaObjectTable_t2546974348 * get_examplars_7() const { return ___examplars_7; }
	inline XmlSchemaObjectTable_t2546974348 ** get_address_of_examplars_7() { return &___examplars_7; }
	inline void set_examplars_7(XmlSchemaObjectTable_t2546974348 * value)
	{
		___examplars_7 = value;
		Il2CppCodeGenWriteBarrier((&___examplars_7), value);
	}

	inline static int32_t get_offset_of_complexTypeStack_8() { return static_cast<int32_t>(offsetof(SchemaCollectionCompiler_t940890354, ___complexTypeStack_8)); }
	inline Stack_t2329662280 * get_complexTypeStack_8() const { return ___complexTypeStack_8; }
	inline Stack_t2329662280 ** get_address_of_complexTypeStack_8() { return &___complexTypeStack_8; }
	inline void set_complexTypeStack_8(Stack_t2329662280 * value)
	{
		___complexTypeStack_8 = value;
		Il2CppCodeGenWriteBarrier((&___complexTypeStack_8), value);
	}

	inline static int32_t get_offset_of_schema_9() { return static_cast<int32_t>(offsetof(SchemaCollectionCompiler_t940890354, ___schema_9)); }
	inline XmlSchema_t3742557897 * get_schema_9() const { return ___schema_9; }
	inline XmlSchema_t3742557897 ** get_address_of_schema_9() { return &___schema_9; }
	inline void set_schema_9(XmlSchema_t3742557897 * value)
	{
		___schema_9 = value;
		Il2CppCodeGenWriteBarrier((&___schema_9), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SCHEMACOLLECTIONCOMPILER_T940890354_H
#ifndef SCHEMANAMESPACEMANAGER_T2152351463_H
#define SCHEMANAMESPACEMANAGER_T2152351463_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Schema.SchemaNamespaceManager
struct  SchemaNamespaceManager_t2152351463  : public XmlNamespaceManager_t418790500
{
public:
	// System.Xml.Schema.XmlSchemaObject System.Xml.Schema.SchemaNamespaceManager::node
	XmlSchemaObject_t1315720168 * ___node_8;

public:
	inline static int32_t get_offset_of_node_8() { return static_cast<int32_t>(offsetof(SchemaNamespaceManager_t2152351463, ___node_8)); }
	inline XmlSchemaObject_t1315720168 * get_node_8() const { return ___node_8; }
	inline XmlSchemaObject_t1315720168 ** get_address_of_node_8() { return &___node_8; }
	inline void set_node_8(XmlSchemaObject_t1315720168 * value)
	{
		___node_8 = value;
		Il2CppCodeGenWriteBarrier((&___node_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SCHEMANAMESPACEMANAGER_T2152351463_H
#ifndef STATEUNION_T2516366335_H
#define STATEUNION_T2516366335_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Schema.StateUnion
struct  StateUnion_t2516366335 
{
public:
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int32 System.Xml.Schema.StateUnion::State
			int32_t ___State_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___State_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int32 System.Xml.Schema.StateUnion::AllElementsRequired
			int32_t ___AllElementsRequired_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___AllElementsRequired_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int32 System.Xml.Schema.StateUnion::CurPosIndex
			int32_t ___CurPosIndex_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___CurPosIndex_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int32 System.Xml.Schema.StateUnion::NumberOfRunningPos
			int32_t ___NumberOfRunningPos_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___NumberOfRunningPos_3_forAlignmentOnly;
		};
	};

public:
	inline static int32_t get_offset_of_State_0() { return static_cast<int32_t>(offsetof(StateUnion_t2516366335, ___State_0)); }
	inline int32_t get_State_0() const { return ___State_0; }
	inline int32_t* get_address_of_State_0() { return &___State_0; }
	inline void set_State_0(int32_t value)
	{
		___State_0 = value;
	}

	inline static int32_t get_offset_of_AllElementsRequired_1() { return static_cast<int32_t>(offsetof(StateUnion_t2516366335, ___AllElementsRequired_1)); }
	inline int32_t get_AllElementsRequired_1() const { return ___AllElementsRequired_1; }
	inline int32_t* get_address_of_AllElementsRequired_1() { return &___AllElementsRequired_1; }
	inline void set_AllElementsRequired_1(int32_t value)
	{
		___AllElementsRequired_1 = value;
	}

	inline static int32_t get_offset_of_CurPosIndex_2() { return static_cast<int32_t>(offsetof(StateUnion_t2516366335, ___CurPosIndex_2)); }
	inline int32_t get_CurPosIndex_2() const { return ___CurPosIndex_2; }
	inline int32_t* get_address_of_CurPosIndex_2() { return &___CurPosIndex_2; }
	inline void set_CurPosIndex_2(int32_t value)
	{
		___CurPosIndex_2 = value;
	}

	inline static int32_t get_offset_of_NumberOfRunningPos_3() { return static_cast<int32_t>(offsetof(StateUnion_t2516366335, ___NumberOfRunningPos_3)); }
	inline int32_t get_NumberOfRunningPos_3() const { return ___NumberOfRunningPos_3; }
	inline int32_t* get_address_of_NumberOfRunningPos_3() { return &___NumberOfRunningPos_3; }
	inline void set_NumberOfRunningPos_3(int32_t value)
	{
		___NumberOfRunningPos_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STATEUNION_T2516366335_H
#ifndef STRINGFACETSCHECKER_T2361523877_H
#define STRINGFACETSCHECKER_T2361523877_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Schema.StringFacetsChecker
struct  StringFacetsChecker_t2361523877  : public FacetsChecker_t3316496195
{
public:

public:
};

struct StringFacetsChecker_t2361523877_StaticFields
{
public:
	// System.Text.RegularExpressions.Regex System.Xml.Schema.StringFacetsChecker::languagePattern
	Regex_t3657309853 * ___languagePattern_0;

public:
	inline static int32_t get_offset_of_languagePattern_0() { return static_cast<int32_t>(offsetof(StringFacetsChecker_t2361523877_StaticFields, ___languagePattern_0)); }
	inline Regex_t3657309853 * get_languagePattern_0() const { return ___languagePattern_0; }
	inline Regex_t3657309853 ** get_address_of_languagePattern_0() { return &___languagePattern_0; }
	inline void set_languagePattern_0(Regex_t3657309853 * value)
	{
		___languagePattern_0 = value;
		Il2CppCodeGenWriteBarrier((&___languagePattern_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRINGFACETSCHECKER_T2361523877_H
#ifndef UNIONFACETSCHECKER_T1294230376_H
#define UNIONFACETSCHECKER_T1294230376_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Schema.UnionFacetsChecker
struct  UnionFacetsChecker_t1294230376  : public FacetsChecker_t3316496195
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNIONFACETSCHECKER_T1294230376_H
#ifndef XDRBUILDER_T781626846_H
#define XDRBUILDER_T781626846_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Schema.XdrBuilder
struct  XdrBuilder_t781626846  : public SchemaBuilder_t3521006541
{
public:
	// System.Xml.Schema.SchemaInfo System.Xml.Schema.XdrBuilder::_SchemaInfo
	SchemaInfo_t3347508623 * ____SchemaInfo_14;
	// System.String System.Xml.Schema.XdrBuilder::_TargetNamespace
	String_t* ____TargetNamespace_15;
	// System.Xml.XmlReader System.Xml.Schema.XdrBuilder::_reader
	XmlReader_t3121518892 * ____reader_16;
	// System.Xml.PositionInfo System.Xml.Schema.XdrBuilder::positionInfo
	PositionInfo_t2441432568 * ___positionInfo_17;
	// System.Xml.Schema.ParticleContentValidator System.Xml.Schema.XdrBuilder::_contentValidator
	ParticleContentValidator_t2931748829 * ____contentValidator_18;
	// System.Xml.Schema.XdrBuilder/XdrEntry System.Xml.Schema.XdrBuilder::_CurState
	XdrEntry_t1852396641 * ____CurState_19;
	// System.Xml.Schema.XdrBuilder/XdrEntry System.Xml.Schema.XdrBuilder::_NextState
	XdrEntry_t1852396641 * ____NextState_20;
	// System.Xml.HWStack System.Xml.Schema.XdrBuilder::_StateHistory
	HWStack_t658497212 * ____StateHistory_21;
	// System.Xml.HWStack System.Xml.Schema.XdrBuilder::_GroupStack
	HWStack_t658497212 * ____GroupStack_22;
	// System.String System.Xml.Schema.XdrBuilder::_XdrName
	String_t* ____XdrName_23;
	// System.String System.Xml.Schema.XdrBuilder::_XdrPrefix
	String_t* ____XdrPrefix_24;
	// System.Xml.Schema.XdrBuilder/ElementContent System.Xml.Schema.XdrBuilder::_ElementDef
	ElementContent_t2671703075 * ____ElementDef_25;
	// System.Xml.Schema.XdrBuilder/GroupContent System.Xml.Schema.XdrBuilder::_GroupDef
	GroupContent_t833025371 * ____GroupDef_26;
	// System.Xml.Schema.XdrBuilder/AttributeContent System.Xml.Schema.XdrBuilder::_AttributeDef
	AttributeContent_t2997225126 * ____AttributeDef_27;
	// System.Xml.Schema.XdrBuilder/DeclBaseInfo System.Xml.Schema.XdrBuilder::_UndefinedAttributeTypes
	DeclBaseInfo_t2186480169 * ____UndefinedAttributeTypes_28;
	// System.Xml.Schema.XdrBuilder/DeclBaseInfo System.Xml.Schema.XdrBuilder::_BaseDecl
	DeclBaseInfo_t2186480169 * ____BaseDecl_29;
	// System.Xml.XmlNameTable System.Xml.Schema.XdrBuilder::_NameTable
	XmlNameTable_t71772148 * ____NameTable_30;
	// System.Xml.Schema.SchemaNames System.Xml.Schema.XdrBuilder::_SchemaNames
	SchemaNames_t661607975 * ____SchemaNames_31;
	// System.Xml.XmlNamespaceManager System.Xml.Schema.XdrBuilder::_CurNsMgr
	XmlNamespaceManager_t418790500 * ____CurNsMgr_32;
	// System.String System.Xml.Schema.XdrBuilder::_Text
	String_t* ____Text_33;
	// System.Xml.Schema.ValidationEventHandler System.Xml.Schema.XdrBuilder::validationEventHandler
	ValidationEventHandler_t791314227 * ___validationEventHandler_34;
	// System.Collections.Hashtable System.Xml.Schema.XdrBuilder::_UndeclaredElements
	Hashtable_t1853889766 * ____UndeclaredElements_35;
	// System.Xml.XmlResolver System.Xml.Schema.XdrBuilder::xmlResolver
	XmlResolver_t626023767 * ___xmlResolver_36;

public:
	inline static int32_t get_offset_of__SchemaInfo_14() { return static_cast<int32_t>(offsetof(XdrBuilder_t781626846, ____SchemaInfo_14)); }
	inline SchemaInfo_t3347508623 * get__SchemaInfo_14() const { return ____SchemaInfo_14; }
	inline SchemaInfo_t3347508623 ** get_address_of__SchemaInfo_14() { return &____SchemaInfo_14; }
	inline void set__SchemaInfo_14(SchemaInfo_t3347508623 * value)
	{
		____SchemaInfo_14 = value;
		Il2CppCodeGenWriteBarrier((&____SchemaInfo_14), value);
	}

	inline static int32_t get_offset_of__TargetNamespace_15() { return static_cast<int32_t>(offsetof(XdrBuilder_t781626846, ____TargetNamespace_15)); }
	inline String_t* get__TargetNamespace_15() const { return ____TargetNamespace_15; }
	inline String_t** get_address_of__TargetNamespace_15() { return &____TargetNamespace_15; }
	inline void set__TargetNamespace_15(String_t* value)
	{
		____TargetNamespace_15 = value;
		Il2CppCodeGenWriteBarrier((&____TargetNamespace_15), value);
	}

	inline static int32_t get_offset_of__reader_16() { return static_cast<int32_t>(offsetof(XdrBuilder_t781626846, ____reader_16)); }
	inline XmlReader_t3121518892 * get__reader_16() const { return ____reader_16; }
	inline XmlReader_t3121518892 ** get_address_of__reader_16() { return &____reader_16; }
	inline void set__reader_16(XmlReader_t3121518892 * value)
	{
		____reader_16 = value;
		Il2CppCodeGenWriteBarrier((&____reader_16), value);
	}

	inline static int32_t get_offset_of_positionInfo_17() { return static_cast<int32_t>(offsetof(XdrBuilder_t781626846, ___positionInfo_17)); }
	inline PositionInfo_t2441432568 * get_positionInfo_17() const { return ___positionInfo_17; }
	inline PositionInfo_t2441432568 ** get_address_of_positionInfo_17() { return &___positionInfo_17; }
	inline void set_positionInfo_17(PositionInfo_t2441432568 * value)
	{
		___positionInfo_17 = value;
		Il2CppCodeGenWriteBarrier((&___positionInfo_17), value);
	}

	inline static int32_t get_offset_of__contentValidator_18() { return static_cast<int32_t>(offsetof(XdrBuilder_t781626846, ____contentValidator_18)); }
	inline ParticleContentValidator_t2931748829 * get__contentValidator_18() const { return ____contentValidator_18; }
	inline ParticleContentValidator_t2931748829 ** get_address_of__contentValidator_18() { return &____contentValidator_18; }
	inline void set__contentValidator_18(ParticleContentValidator_t2931748829 * value)
	{
		____contentValidator_18 = value;
		Il2CppCodeGenWriteBarrier((&____contentValidator_18), value);
	}

	inline static int32_t get_offset_of__CurState_19() { return static_cast<int32_t>(offsetof(XdrBuilder_t781626846, ____CurState_19)); }
	inline XdrEntry_t1852396641 * get__CurState_19() const { return ____CurState_19; }
	inline XdrEntry_t1852396641 ** get_address_of__CurState_19() { return &____CurState_19; }
	inline void set__CurState_19(XdrEntry_t1852396641 * value)
	{
		____CurState_19 = value;
		Il2CppCodeGenWriteBarrier((&____CurState_19), value);
	}

	inline static int32_t get_offset_of__NextState_20() { return static_cast<int32_t>(offsetof(XdrBuilder_t781626846, ____NextState_20)); }
	inline XdrEntry_t1852396641 * get__NextState_20() const { return ____NextState_20; }
	inline XdrEntry_t1852396641 ** get_address_of__NextState_20() { return &____NextState_20; }
	inline void set__NextState_20(XdrEntry_t1852396641 * value)
	{
		____NextState_20 = value;
		Il2CppCodeGenWriteBarrier((&____NextState_20), value);
	}

	inline static int32_t get_offset_of__StateHistory_21() { return static_cast<int32_t>(offsetof(XdrBuilder_t781626846, ____StateHistory_21)); }
	inline HWStack_t658497212 * get__StateHistory_21() const { return ____StateHistory_21; }
	inline HWStack_t658497212 ** get_address_of__StateHistory_21() { return &____StateHistory_21; }
	inline void set__StateHistory_21(HWStack_t658497212 * value)
	{
		____StateHistory_21 = value;
		Il2CppCodeGenWriteBarrier((&____StateHistory_21), value);
	}

	inline static int32_t get_offset_of__GroupStack_22() { return static_cast<int32_t>(offsetof(XdrBuilder_t781626846, ____GroupStack_22)); }
	inline HWStack_t658497212 * get__GroupStack_22() const { return ____GroupStack_22; }
	inline HWStack_t658497212 ** get_address_of__GroupStack_22() { return &____GroupStack_22; }
	inline void set__GroupStack_22(HWStack_t658497212 * value)
	{
		____GroupStack_22 = value;
		Il2CppCodeGenWriteBarrier((&____GroupStack_22), value);
	}

	inline static int32_t get_offset_of__XdrName_23() { return static_cast<int32_t>(offsetof(XdrBuilder_t781626846, ____XdrName_23)); }
	inline String_t* get__XdrName_23() const { return ____XdrName_23; }
	inline String_t** get_address_of__XdrName_23() { return &____XdrName_23; }
	inline void set__XdrName_23(String_t* value)
	{
		____XdrName_23 = value;
		Il2CppCodeGenWriteBarrier((&____XdrName_23), value);
	}

	inline static int32_t get_offset_of__XdrPrefix_24() { return static_cast<int32_t>(offsetof(XdrBuilder_t781626846, ____XdrPrefix_24)); }
	inline String_t* get__XdrPrefix_24() const { return ____XdrPrefix_24; }
	inline String_t** get_address_of__XdrPrefix_24() { return &____XdrPrefix_24; }
	inline void set__XdrPrefix_24(String_t* value)
	{
		____XdrPrefix_24 = value;
		Il2CppCodeGenWriteBarrier((&____XdrPrefix_24), value);
	}

	inline static int32_t get_offset_of__ElementDef_25() { return static_cast<int32_t>(offsetof(XdrBuilder_t781626846, ____ElementDef_25)); }
	inline ElementContent_t2671703075 * get__ElementDef_25() const { return ____ElementDef_25; }
	inline ElementContent_t2671703075 ** get_address_of__ElementDef_25() { return &____ElementDef_25; }
	inline void set__ElementDef_25(ElementContent_t2671703075 * value)
	{
		____ElementDef_25 = value;
		Il2CppCodeGenWriteBarrier((&____ElementDef_25), value);
	}

	inline static int32_t get_offset_of__GroupDef_26() { return static_cast<int32_t>(offsetof(XdrBuilder_t781626846, ____GroupDef_26)); }
	inline GroupContent_t833025371 * get__GroupDef_26() const { return ____GroupDef_26; }
	inline GroupContent_t833025371 ** get_address_of__GroupDef_26() { return &____GroupDef_26; }
	inline void set__GroupDef_26(GroupContent_t833025371 * value)
	{
		____GroupDef_26 = value;
		Il2CppCodeGenWriteBarrier((&____GroupDef_26), value);
	}

	inline static int32_t get_offset_of__AttributeDef_27() { return static_cast<int32_t>(offsetof(XdrBuilder_t781626846, ____AttributeDef_27)); }
	inline AttributeContent_t2997225126 * get__AttributeDef_27() const { return ____AttributeDef_27; }
	inline AttributeContent_t2997225126 ** get_address_of__AttributeDef_27() { return &____AttributeDef_27; }
	inline void set__AttributeDef_27(AttributeContent_t2997225126 * value)
	{
		____AttributeDef_27 = value;
		Il2CppCodeGenWriteBarrier((&____AttributeDef_27), value);
	}

	inline static int32_t get_offset_of__UndefinedAttributeTypes_28() { return static_cast<int32_t>(offsetof(XdrBuilder_t781626846, ____UndefinedAttributeTypes_28)); }
	inline DeclBaseInfo_t2186480169 * get__UndefinedAttributeTypes_28() const { return ____UndefinedAttributeTypes_28; }
	inline DeclBaseInfo_t2186480169 ** get_address_of__UndefinedAttributeTypes_28() { return &____UndefinedAttributeTypes_28; }
	inline void set__UndefinedAttributeTypes_28(DeclBaseInfo_t2186480169 * value)
	{
		____UndefinedAttributeTypes_28 = value;
		Il2CppCodeGenWriteBarrier((&____UndefinedAttributeTypes_28), value);
	}

	inline static int32_t get_offset_of__BaseDecl_29() { return static_cast<int32_t>(offsetof(XdrBuilder_t781626846, ____BaseDecl_29)); }
	inline DeclBaseInfo_t2186480169 * get__BaseDecl_29() const { return ____BaseDecl_29; }
	inline DeclBaseInfo_t2186480169 ** get_address_of__BaseDecl_29() { return &____BaseDecl_29; }
	inline void set__BaseDecl_29(DeclBaseInfo_t2186480169 * value)
	{
		____BaseDecl_29 = value;
		Il2CppCodeGenWriteBarrier((&____BaseDecl_29), value);
	}

	inline static int32_t get_offset_of__NameTable_30() { return static_cast<int32_t>(offsetof(XdrBuilder_t781626846, ____NameTable_30)); }
	inline XmlNameTable_t71772148 * get__NameTable_30() const { return ____NameTable_30; }
	inline XmlNameTable_t71772148 ** get_address_of__NameTable_30() { return &____NameTable_30; }
	inline void set__NameTable_30(XmlNameTable_t71772148 * value)
	{
		____NameTable_30 = value;
		Il2CppCodeGenWriteBarrier((&____NameTable_30), value);
	}

	inline static int32_t get_offset_of__SchemaNames_31() { return static_cast<int32_t>(offsetof(XdrBuilder_t781626846, ____SchemaNames_31)); }
	inline SchemaNames_t661607975 * get__SchemaNames_31() const { return ____SchemaNames_31; }
	inline SchemaNames_t661607975 ** get_address_of__SchemaNames_31() { return &____SchemaNames_31; }
	inline void set__SchemaNames_31(SchemaNames_t661607975 * value)
	{
		____SchemaNames_31 = value;
		Il2CppCodeGenWriteBarrier((&____SchemaNames_31), value);
	}

	inline static int32_t get_offset_of__CurNsMgr_32() { return static_cast<int32_t>(offsetof(XdrBuilder_t781626846, ____CurNsMgr_32)); }
	inline XmlNamespaceManager_t418790500 * get__CurNsMgr_32() const { return ____CurNsMgr_32; }
	inline XmlNamespaceManager_t418790500 ** get_address_of__CurNsMgr_32() { return &____CurNsMgr_32; }
	inline void set__CurNsMgr_32(XmlNamespaceManager_t418790500 * value)
	{
		____CurNsMgr_32 = value;
		Il2CppCodeGenWriteBarrier((&____CurNsMgr_32), value);
	}

	inline static int32_t get_offset_of__Text_33() { return static_cast<int32_t>(offsetof(XdrBuilder_t781626846, ____Text_33)); }
	inline String_t* get__Text_33() const { return ____Text_33; }
	inline String_t** get_address_of__Text_33() { return &____Text_33; }
	inline void set__Text_33(String_t* value)
	{
		____Text_33 = value;
		Il2CppCodeGenWriteBarrier((&____Text_33), value);
	}

	inline static int32_t get_offset_of_validationEventHandler_34() { return static_cast<int32_t>(offsetof(XdrBuilder_t781626846, ___validationEventHandler_34)); }
	inline ValidationEventHandler_t791314227 * get_validationEventHandler_34() const { return ___validationEventHandler_34; }
	inline ValidationEventHandler_t791314227 ** get_address_of_validationEventHandler_34() { return &___validationEventHandler_34; }
	inline void set_validationEventHandler_34(ValidationEventHandler_t791314227 * value)
	{
		___validationEventHandler_34 = value;
		Il2CppCodeGenWriteBarrier((&___validationEventHandler_34), value);
	}

	inline static int32_t get_offset_of__UndeclaredElements_35() { return static_cast<int32_t>(offsetof(XdrBuilder_t781626846, ____UndeclaredElements_35)); }
	inline Hashtable_t1853889766 * get__UndeclaredElements_35() const { return ____UndeclaredElements_35; }
	inline Hashtable_t1853889766 ** get_address_of__UndeclaredElements_35() { return &____UndeclaredElements_35; }
	inline void set__UndeclaredElements_35(Hashtable_t1853889766 * value)
	{
		____UndeclaredElements_35 = value;
		Il2CppCodeGenWriteBarrier((&____UndeclaredElements_35), value);
	}

	inline static int32_t get_offset_of_xmlResolver_36() { return static_cast<int32_t>(offsetof(XdrBuilder_t781626846, ___xmlResolver_36)); }
	inline XmlResolver_t626023767 * get_xmlResolver_36() const { return ___xmlResolver_36; }
	inline XmlResolver_t626023767 ** get_address_of_xmlResolver_36() { return &___xmlResolver_36; }
	inline void set_xmlResolver_36(XmlResolver_t626023767 * value)
	{
		___xmlResolver_36 = value;
		Il2CppCodeGenWriteBarrier((&___xmlResolver_36), value);
	}
};

struct XdrBuilder_t781626846_StaticFields
{
public:
	// System.Int32[] System.Xml.Schema.XdrBuilder::S_XDR_Root_Element
	Int32U5BU5D_t385246372* ___S_XDR_Root_Element_0;
	// System.Int32[] System.Xml.Schema.XdrBuilder::S_XDR_Root_SubElements
	Int32U5BU5D_t385246372* ___S_XDR_Root_SubElements_1;
	// System.Int32[] System.Xml.Schema.XdrBuilder::S_XDR_ElementType_SubElements
	Int32U5BU5D_t385246372* ___S_XDR_ElementType_SubElements_2;
	// System.Int32[] System.Xml.Schema.XdrBuilder::S_XDR_AttributeType_SubElements
	Int32U5BU5D_t385246372* ___S_XDR_AttributeType_SubElements_3;
	// System.Int32[] System.Xml.Schema.XdrBuilder::S_XDR_Group_SubElements
	Int32U5BU5D_t385246372* ___S_XDR_Group_SubElements_4;
	// System.Xml.Schema.XdrBuilder/XdrAttributeEntry[] System.Xml.Schema.XdrBuilder::S_XDR_Root_Attributes
	XdrAttributeEntryU5BU5D_t4099313209* ___S_XDR_Root_Attributes_5;
	// System.Xml.Schema.XdrBuilder/XdrAttributeEntry[] System.Xml.Schema.XdrBuilder::S_XDR_ElementType_Attributes
	XdrAttributeEntryU5BU5D_t4099313209* ___S_XDR_ElementType_Attributes_6;
	// System.Xml.Schema.XdrBuilder/XdrAttributeEntry[] System.Xml.Schema.XdrBuilder::S_XDR_AttributeType_Attributes
	XdrAttributeEntryU5BU5D_t4099313209* ___S_XDR_AttributeType_Attributes_7;
	// System.Xml.Schema.XdrBuilder/XdrAttributeEntry[] System.Xml.Schema.XdrBuilder::S_XDR_Element_Attributes
	XdrAttributeEntryU5BU5D_t4099313209* ___S_XDR_Element_Attributes_8;
	// System.Xml.Schema.XdrBuilder/XdrAttributeEntry[] System.Xml.Schema.XdrBuilder::S_XDR_Attribute_Attributes
	XdrAttributeEntryU5BU5D_t4099313209* ___S_XDR_Attribute_Attributes_9;
	// System.Xml.Schema.XdrBuilder/XdrAttributeEntry[] System.Xml.Schema.XdrBuilder::S_XDR_Group_Attributes
	XdrAttributeEntryU5BU5D_t4099313209* ___S_XDR_Group_Attributes_10;
	// System.Xml.Schema.XdrBuilder/XdrAttributeEntry[] System.Xml.Schema.XdrBuilder::S_XDR_ElementDataType_Attributes
	XdrAttributeEntryU5BU5D_t4099313209* ___S_XDR_ElementDataType_Attributes_11;
	// System.Xml.Schema.XdrBuilder/XdrAttributeEntry[] System.Xml.Schema.XdrBuilder::S_XDR_AttributeDataType_Attributes
	XdrAttributeEntryU5BU5D_t4099313209* ___S_XDR_AttributeDataType_Attributes_12;
	// System.Xml.Schema.XdrBuilder/XdrEntry[] System.Xml.Schema.XdrBuilder::S_SchemaEntries
	XdrEntryU5BU5D_t507154684* ___S_SchemaEntries_13;

public:
	inline static int32_t get_offset_of_S_XDR_Root_Element_0() { return static_cast<int32_t>(offsetof(XdrBuilder_t781626846_StaticFields, ___S_XDR_Root_Element_0)); }
	inline Int32U5BU5D_t385246372* get_S_XDR_Root_Element_0() const { return ___S_XDR_Root_Element_0; }
	inline Int32U5BU5D_t385246372** get_address_of_S_XDR_Root_Element_0() { return &___S_XDR_Root_Element_0; }
	inline void set_S_XDR_Root_Element_0(Int32U5BU5D_t385246372* value)
	{
		___S_XDR_Root_Element_0 = value;
		Il2CppCodeGenWriteBarrier((&___S_XDR_Root_Element_0), value);
	}

	inline static int32_t get_offset_of_S_XDR_Root_SubElements_1() { return static_cast<int32_t>(offsetof(XdrBuilder_t781626846_StaticFields, ___S_XDR_Root_SubElements_1)); }
	inline Int32U5BU5D_t385246372* get_S_XDR_Root_SubElements_1() const { return ___S_XDR_Root_SubElements_1; }
	inline Int32U5BU5D_t385246372** get_address_of_S_XDR_Root_SubElements_1() { return &___S_XDR_Root_SubElements_1; }
	inline void set_S_XDR_Root_SubElements_1(Int32U5BU5D_t385246372* value)
	{
		___S_XDR_Root_SubElements_1 = value;
		Il2CppCodeGenWriteBarrier((&___S_XDR_Root_SubElements_1), value);
	}

	inline static int32_t get_offset_of_S_XDR_ElementType_SubElements_2() { return static_cast<int32_t>(offsetof(XdrBuilder_t781626846_StaticFields, ___S_XDR_ElementType_SubElements_2)); }
	inline Int32U5BU5D_t385246372* get_S_XDR_ElementType_SubElements_2() const { return ___S_XDR_ElementType_SubElements_2; }
	inline Int32U5BU5D_t385246372** get_address_of_S_XDR_ElementType_SubElements_2() { return &___S_XDR_ElementType_SubElements_2; }
	inline void set_S_XDR_ElementType_SubElements_2(Int32U5BU5D_t385246372* value)
	{
		___S_XDR_ElementType_SubElements_2 = value;
		Il2CppCodeGenWriteBarrier((&___S_XDR_ElementType_SubElements_2), value);
	}

	inline static int32_t get_offset_of_S_XDR_AttributeType_SubElements_3() { return static_cast<int32_t>(offsetof(XdrBuilder_t781626846_StaticFields, ___S_XDR_AttributeType_SubElements_3)); }
	inline Int32U5BU5D_t385246372* get_S_XDR_AttributeType_SubElements_3() const { return ___S_XDR_AttributeType_SubElements_3; }
	inline Int32U5BU5D_t385246372** get_address_of_S_XDR_AttributeType_SubElements_3() { return &___S_XDR_AttributeType_SubElements_3; }
	inline void set_S_XDR_AttributeType_SubElements_3(Int32U5BU5D_t385246372* value)
	{
		___S_XDR_AttributeType_SubElements_3 = value;
		Il2CppCodeGenWriteBarrier((&___S_XDR_AttributeType_SubElements_3), value);
	}

	inline static int32_t get_offset_of_S_XDR_Group_SubElements_4() { return static_cast<int32_t>(offsetof(XdrBuilder_t781626846_StaticFields, ___S_XDR_Group_SubElements_4)); }
	inline Int32U5BU5D_t385246372* get_S_XDR_Group_SubElements_4() const { return ___S_XDR_Group_SubElements_4; }
	inline Int32U5BU5D_t385246372** get_address_of_S_XDR_Group_SubElements_4() { return &___S_XDR_Group_SubElements_4; }
	inline void set_S_XDR_Group_SubElements_4(Int32U5BU5D_t385246372* value)
	{
		___S_XDR_Group_SubElements_4 = value;
		Il2CppCodeGenWriteBarrier((&___S_XDR_Group_SubElements_4), value);
	}

	inline static int32_t get_offset_of_S_XDR_Root_Attributes_5() { return static_cast<int32_t>(offsetof(XdrBuilder_t781626846_StaticFields, ___S_XDR_Root_Attributes_5)); }
	inline XdrAttributeEntryU5BU5D_t4099313209* get_S_XDR_Root_Attributes_5() const { return ___S_XDR_Root_Attributes_5; }
	inline XdrAttributeEntryU5BU5D_t4099313209** get_address_of_S_XDR_Root_Attributes_5() { return &___S_XDR_Root_Attributes_5; }
	inline void set_S_XDR_Root_Attributes_5(XdrAttributeEntryU5BU5D_t4099313209* value)
	{
		___S_XDR_Root_Attributes_5 = value;
		Il2CppCodeGenWriteBarrier((&___S_XDR_Root_Attributes_5), value);
	}

	inline static int32_t get_offset_of_S_XDR_ElementType_Attributes_6() { return static_cast<int32_t>(offsetof(XdrBuilder_t781626846_StaticFields, ___S_XDR_ElementType_Attributes_6)); }
	inline XdrAttributeEntryU5BU5D_t4099313209* get_S_XDR_ElementType_Attributes_6() const { return ___S_XDR_ElementType_Attributes_6; }
	inline XdrAttributeEntryU5BU5D_t4099313209** get_address_of_S_XDR_ElementType_Attributes_6() { return &___S_XDR_ElementType_Attributes_6; }
	inline void set_S_XDR_ElementType_Attributes_6(XdrAttributeEntryU5BU5D_t4099313209* value)
	{
		___S_XDR_ElementType_Attributes_6 = value;
		Il2CppCodeGenWriteBarrier((&___S_XDR_ElementType_Attributes_6), value);
	}

	inline static int32_t get_offset_of_S_XDR_AttributeType_Attributes_7() { return static_cast<int32_t>(offsetof(XdrBuilder_t781626846_StaticFields, ___S_XDR_AttributeType_Attributes_7)); }
	inline XdrAttributeEntryU5BU5D_t4099313209* get_S_XDR_AttributeType_Attributes_7() const { return ___S_XDR_AttributeType_Attributes_7; }
	inline XdrAttributeEntryU5BU5D_t4099313209** get_address_of_S_XDR_AttributeType_Attributes_7() { return &___S_XDR_AttributeType_Attributes_7; }
	inline void set_S_XDR_AttributeType_Attributes_7(XdrAttributeEntryU5BU5D_t4099313209* value)
	{
		___S_XDR_AttributeType_Attributes_7 = value;
		Il2CppCodeGenWriteBarrier((&___S_XDR_AttributeType_Attributes_7), value);
	}

	inline static int32_t get_offset_of_S_XDR_Element_Attributes_8() { return static_cast<int32_t>(offsetof(XdrBuilder_t781626846_StaticFields, ___S_XDR_Element_Attributes_8)); }
	inline XdrAttributeEntryU5BU5D_t4099313209* get_S_XDR_Element_Attributes_8() const { return ___S_XDR_Element_Attributes_8; }
	inline XdrAttributeEntryU5BU5D_t4099313209** get_address_of_S_XDR_Element_Attributes_8() { return &___S_XDR_Element_Attributes_8; }
	inline void set_S_XDR_Element_Attributes_8(XdrAttributeEntryU5BU5D_t4099313209* value)
	{
		___S_XDR_Element_Attributes_8 = value;
		Il2CppCodeGenWriteBarrier((&___S_XDR_Element_Attributes_8), value);
	}

	inline static int32_t get_offset_of_S_XDR_Attribute_Attributes_9() { return static_cast<int32_t>(offsetof(XdrBuilder_t781626846_StaticFields, ___S_XDR_Attribute_Attributes_9)); }
	inline XdrAttributeEntryU5BU5D_t4099313209* get_S_XDR_Attribute_Attributes_9() const { return ___S_XDR_Attribute_Attributes_9; }
	inline XdrAttributeEntryU5BU5D_t4099313209** get_address_of_S_XDR_Attribute_Attributes_9() { return &___S_XDR_Attribute_Attributes_9; }
	inline void set_S_XDR_Attribute_Attributes_9(XdrAttributeEntryU5BU5D_t4099313209* value)
	{
		___S_XDR_Attribute_Attributes_9 = value;
		Il2CppCodeGenWriteBarrier((&___S_XDR_Attribute_Attributes_9), value);
	}

	inline static int32_t get_offset_of_S_XDR_Group_Attributes_10() { return static_cast<int32_t>(offsetof(XdrBuilder_t781626846_StaticFields, ___S_XDR_Group_Attributes_10)); }
	inline XdrAttributeEntryU5BU5D_t4099313209* get_S_XDR_Group_Attributes_10() const { return ___S_XDR_Group_Attributes_10; }
	inline XdrAttributeEntryU5BU5D_t4099313209** get_address_of_S_XDR_Group_Attributes_10() { return &___S_XDR_Group_Attributes_10; }
	inline void set_S_XDR_Group_Attributes_10(XdrAttributeEntryU5BU5D_t4099313209* value)
	{
		___S_XDR_Group_Attributes_10 = value;
		Il2CppCodeGenWriteBarrier((&___S_XDR_Group_Attributes_10), value);
	}

	inline static int32_t get_offset_of_S_XDR_ElementDataType_Attributes_11() { return static_cast<int32_t>(offsetof(XdrBuilder_t781626846_StaticFields, ___S_XDR_ElementDataType_Attributes_11)); }
	inline XdrAttributeEntryU5BU5D_t4099313209* get_S_XDR_ElementDataType_Attributes_11() const { return ___S_XDR_ElementDataType_Attributes_11; }
	inline XdrAttributeEntryU5BU5D_t4099313209** get_address_of_S_XDR_ElementDataType_Attributes_11() { return &___S_XDR_ElementDataType_Attributes_11; }
	inline void set_S_XDR_ElementDataType_Attributes_11(XdrAttributeEntryU5BU5D_t4099313209* value)
	{
		___S_XDR_ElementDataType_Attributes_11 = value;
		Il2CppCodeGenWriteBarrier((&___S_XDR_ElementDataType_Attributes_11), value);
	}

	inline static int32_t get_offset_of_S_XDR_AttributeDataType_Attributes_12() { return static_cast<int32_t>(offsetof(XdrBuilder_t781626846_StaticFields, ___S_XDR_AttributeDataType_Attributes_12)); }
	inline XdrAttributeEntryU5BU5D_t4099313209* get_S_XDR_AttributeDataType_Attributes_12() const { return ___S_XDR_AttributeDataType_Attributes_12; }
	inline XdrAttributeEntryU5BU5D_t4099313209** get_address_of_S_XDR_AttributeDataType_Attributes_12() { return &___S_XDR_AttributeDataType_Attributes_12; }
	inline void set_S_XDR_AttributeDataType_Attributes_12(XdrAttributeEntryU5BU5D_t4099313209* value)
	{
		___S_XDR_AttributeDataType_Attributes_12 = value;
		Il2CppCodeGenWriteBarrier((&___S_XDR_AttributeDataType_Attributes_12), value);
	}

	inline static int32_t get_offset_of_S_SchemaEntries_13() { return static_cast<int32_t>(offsetof(XdrBuilder_t781626846_StaticFields, ___S_SchemaEntries_13)); }
	inline XdrEntryU5BU5D_t507154684* get_S_SchemaEntries_13() const { return ___S_SchemaEntries_13; }
	inline XdrEntryU5BU5D_t507154684** get_address_of_S_SchemaEntries_13() { return &___S_SchemaEntries_13; }
	inline void set_S_SchemaEntries_13(XdrEntryU5BU5D_t507154684* value)
	{
		___S_SchemaEntries_13 = value;
		Il2CppCodeGenWriteBarrier((&___S_SchemaEntries_13), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XDRBUILDER_T781626846_H
#ifndef XDRVALIDATOR_T1704189332_H
#define XDRVALIDATOR_T1704189332_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Schema.XdrValidator
struct  XdrValidator_t1704189332  : public BaseValidator_t868759770
{
public:
	// System.Xml.HWStack System.Xml.Schema.XdrValidator::validationStack
	HWStack_t658497212 * ___validationStack_15;
	// System.Collections.Hashtable System.Xml.Schema.XdrValidator::attPresence
	Hashtable_t1853889766 * ___attPresence_16;
	// System.Xml.XmlQualifiedName System.Xml.Schema.XdrValidator::name
	XmlQualifiedName_t2760654312 * ___name_17;
	// System.Xml.XmlNamespaceManager System.Xml.Schema.XdrValidator::nsManager
	XmlNamespaceManager_t418790500 * ___nsManager_18;
	// System.Boolean System.Xml.Schema.XdrValidator::isProcessContents
	bool ___isProcessContents_19;
	// System.Collections.Hashtable System.Xml.Schema.XdrValidator::IDs
	Hashtable_t1853889766 * ___IDs_20;
	// System.Xml.Schema.IdRefNode System.Xml.Schema.XdrValidator::idRefListHead
	IdRefNode_t3774897917 * ___idRefListHead_21;
	// System.Xml.Schema.Parser System.Xml.Schema.XdrValidator::inlineSchemaParser
	Parser_t3220530449 * ___inlineSchemaParser_22;

public:
	inline static int32_t get_offset_of_validationStack_15() { return static_cast<int32_t>(offsetof(XdrValidator_t1704189332, ___validationStack_15)); }
	inline HWStack_t658497212 * get_validationStack_15() const { return ___validationStack_15; }
	inline HWStack_t658497212 ** get_address_of_validationStack_15() { return &___validationStack_15; }
	inline void set_validationStack_15(HWStack_t658497212 * value)
	{
		___validationStack_15 = value;
		Il2CppCodeGenWriteBarrier((&___validationStack_15), value);
	}

	inline static int32_t get_offset_of_attPresence_16() { return static_cast<int32_t>(offsetof(XdrValidator_t1704189332, ___attPresence_16)); }
	inline Hashtable_t1853889766 * get_attPresence_16() const { return ___attPresence_16; }
	inline Hashtable_t1853889766 ** get_address_of_attPresence_16() { return &___attPresence_16; }
	inline void set_attPresence_16(Hashtable_t1853889766 * value)
	{
		___attPresence_16 = value;
		Il2CppCodeGenWriteBarrier((&___attPresence_16), value);
	}

	inline static int32_t get_offset_of_name_17() { return static_cast<int32_t>(offsetof(XdrValidator_t1704189332, ___name_17)); }
	inline XmlQualifiedName_t2760654312 * get_name_17() const { return ___name_17; }
	inline XmlQualifiedName_t2760654312 ** get_address_of_name_17() { return &___name_17; }
	inline void set_name_17(XmlQualifiedName_t2760654312 * value)
	{
		___name_17 = value;
		Il2CppCodeGenWriteBarrier((&___name_17), value);
	}

	inline static int32_t get_offset_of_nsManager_18() { return static_cast<int32_t>(offsetof(XdrValidator_t1704189332, ___nsManager_18)); }
	inline XmlNamespaceManager_t418790500 * get_nsManager_18() const { return ___nsManager_18; }
	inline XmlNamespaceManager_t418790500 ** get_address_of_nsManager_18() { return &___nsManager_18; }
	inline void set_nsManager_18(XmlNamespaceManager_t418790500 * value)
	{
		___nsManager_18 = value;
		Il2CppCodeGenWriteBarrier((&___nsManager_18), value);
	}

	inline static int32_t get_offset_of_isProcessContents_19() { return static_cast<int32_t>(offsetof(XdrValidator_t1704189332, ___isProcessContents_19)); }
	inline bool get_isProcessContents_19() const { return ___isProcessContents_19; }
	inline bool* get_address_of_isProcessContents_19() { return &___isProcessContents_19; }
	inline void set_isProcessContents_19(bool value)
	{
		___isProcessContents_19 = value;
	}

	inline static int32_t get_offset_of_IDs_20() { return static_cast<int32_t>(offsetof(XdrValidator_t1704189332, ___IDs_20)); }
	inline Hashtable_t1853889766 * get_IDs_20() const { return ___IDs_20; }
	inline Hashtable_t1853889766 ** get_address_of_IDs_20() { return &___IDs_20; }
	inline void set_IDs_20(Hashtable_t1853889766 * value)
	{
		___IDs_20 = value;
		Il2CppCodeGenWriteBarrier((&___IDs_20), value);
	}

	inline static int32_t get_offset_of_idRefListHead_21() { return static_cast<int32_t>(offsetof(XdrValidator_t1704189332, ___idRefListHead_21)); }
	inline IdRefNode_t3774897917 * get_idRefListHead_21() const { return ___idRefListHead_21; }
	inline IdRefNode_t3774897917 ** get_address_of_idRefListHead_21() { return &___idRefListHead_21; }
	inline void set_idRefListHead_21(IdRefNode_t3774897917 * value)
	{
		___idRefListHead_21 = value;
		Il2CppCodeGenWriteBarrier((&___idRefListHead_21), value);
	}

	inline static int32_t get_offset_of_inlineSchemaParser_22() { return static_cast<int32_t>(offsetof(XdrValidator_t1704189332, ___inlineSchemaParser_22)); }
	inline Parser_t3220530449 * get_inlineSchemaParser_22() const { return ___inlineSchemaParser_22; }
	inline Parser_t3220530449 ** get_address_of_inlineSchemaParser_22() { return &___inlineSchemaParser_22; }
	inline void set_inlineSchemaParser_22(Parser_t3220530449 * value)
	{
		___inlineSchemaParser_22 = value;
		Il2CppCodeGenWriteBarrier((&___inlineSchemaParser_22), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XDRVALIDATOR_T1704189332_H
#ifndef XMLSCHEMAANNOTATED_T2603549639_H
#define XMLSCHEMAANNOTATED_T2603549639_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Schema.XmlSchemaAnnotated
struct  XmlSchemaAnnotated_t2603549639  : public XmlSchemaObject_t1315720168
{
public:
	// System.String System.Xml.Schema.XmlSchemaAnnotated::id
	String_t* ___id_6;
	// System.Xml.Schema.XmlSchemaAnnotation System.Xml.Schema.XmlSchemaAnnotated::annotation
	XmlSchemaAnnotation_t2553753397 * ___annotation_7;
	// System.Xml.XmlAttribute[] System.Xml.Schema.XmlSchemaAnnotated::moreAttributes
	XmlAttributeU5BU5D_t1490365106* ___moreAttributes_8;

public:
	inline static int32_t get_offset_of_id_6() { return static_cast<int32_t>(offsetof(XmlSchemaAnnotated_t2603549639, ___id_6)); }
	inline String_t* get_id_6() const { return ___id_6; }
	inline String_t** get_address_of_id_6() { return &___id_6; }
	inline void set_id_6(String_t* value)
	{
		___id_6 = value;
		Il2CppCodeGenWriteBarrier((&___id_6), value);
	}

	inline static int32_t get_offset_of_annotation_7() { return static_cast<int32_t>(offsetof(XmlSchemaAnnotated_t2603549639, ___annotation_7)); }
	inline XmlSchemaAnnotation_t2553753397 * get_annotation_7() const { return ___annotation_7; }
	inline XmlSchemaAnnotation_t2553753397 ** get_address_of_annotation_7() { return &___annotation_7; }
	inline void set_annotation_7(XmlSchemaAnnotation_t2553753397 * value)
	{
		___annotation_7 = value;
		Il2CppCodeGenWriteBarrier((&___annotation_7), value);
	}

	inline static int32_t get_offset_of_moreAttributes_8() { return static_cast<int32_t>(offsetof(XmlSchemaAnnotated_t2603549639, ___moreAttributes_8)); }
	inline XmlAttributeU5BU5D_t1490365106* get_moreAttributes_8() const { return ___moreAttributes_8; }
	inline XmlAttributeU5BU5D_t1490365106** get_address_of_moreAttributes_8() { return &___moreAttributes_8; }
	inline void set_moreAttributes_8(XmlAttributeU5BU5D_t1490365106* value)
	{
		___moreAttributes_8 = value;
		Il2CppCodeGenWriteBarrier((&___moreAttributes_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XMLSCHEMAANNOTATED_T2603549639_H
#ifndef XMLSCHEMAANNOTATION_T2553753397_H
#define XMLSCHEMAANNOTATION_T2553753397_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Schema.XmlSchemaAnnotation
struct  XmlSchemaAnnotation_t2553753397  : public XmlSchemaObject_t1315720168
{
public:
	// System.String System.Xml.Schema.XmlSchemaAnnotation::id
	String_t* ___id_6;
	// System.Xml.Schema.XmlSchemaObjectCollection System.Xml.Schema.XmlSchemaAnnotation::items
	XmlSchemaObjectCollection_t1064819932 * ___items_7;
	// System.Xml.XmlAttribute[] System.Xml.Schema.XmlSchemaAnnotation::moreAttributes
	XmlAttributeU5BU5D_t1490365106* ___moreAttributes_8;

public:
	inline static int32_t get_offset_of_id_6() { return static_cast<int32_t>(offsetof(XmlSchemaAnnotation_t2553753397, ___id_6)); }
	inline String_t* get_id_6() const { return ___id_6; }
	inline String_t** get_address_of_id_6() { return &___id_6; }
	inline void set_id_6(String_t* value)
	{
		___id_6 = value;
		Il2CppCodeGenWriteBarrier((&___id_6), value);
	}

	inline static int32_t get_offset_of_items_7() { return static_cast<int32_t>(offsetof(XmlSchemaAnnotation_t2553753397, ___items_7)); }
	inline XmlSchemaObjectCollection_t1064819932 * get_items_7() const { return ___items_7; }
	inline XmlSchemaObjectCollection_t1064819932 ** get_address_of_items_7() { return &___items_7; }
	inline void set_items_7(XmlSchemaObjectCollection_t1064819932 * value)
	{
		___items_7 = value;
		Il2CppCodeGenWriteBarrier((&___items_7), value);
	}

	inline static int32_t get_offset_of_moreAttributes_8() { return static_cast<int32_t>(offsetof(XmlSchemaAnnotation_t2553753397, ___moreAttributes_8)); }
	inline XmlAttributeU5BU5D_t1490365106* get_moreAttributes_8() const { return ___moreAttributes_8; }
	inline XmlAttributeU5BU5D_t1490365106** get_address_of_moreAttributes_8() { return &___moreAttributes_8; }
	inline void set_moreAttributes_8(XmlAttributeU5BU5D_t1490365106* value)
	{
		___moreAttributes_8 = value;
		Il2CppCodeGenWriteBarrier((&___moreAttributes_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XMLSCHEMAANNOTATION_T2553753397_H
#ifndef XMLSCHEMAAPPINFO_T426084712_H
#define XMLSCHEMAAPPINFO_T426084712_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Schema.XmlSchemaAppInfo
struct  XmlSchemaAppInfo_t426084712  : public XmlSchemaObject_t1315720168
{
public:
	// System.String System.Xml.Schema.XmlSchemaAppInfo::source
	String_t* ___source_6;
	// System.Xml.XmlNode[] System.Xml.Schema.XmlSchemaAppInfo::markup
	XmlNodeU5BU5D_t3728671178* ___markup_7;

public:
	inline static int32_t get_offset_of_source_6() { return static_cast<int32_t>(offsetof(XmlSchemaAppInfo_t426084712, ___source_6)); }
	inline String_t* get_source_6() const { return ___source_6; }
	inline String_t** get_address_of_source_6() { return &___source_6; }
	inline void set_source_6(String_t* value)
	{
		___source_6 = value;
		Il2CppCodeGenWriteBarrier((&___source_6), value);
	}

	inline static int32_t get_offset_of_markup_7() { return static_cast<int32_t>(offsetof(XmlSchemaAppInfo_t426084712, ___markup_7)); }
	inline XmlNodeU5BU5D_t3728671178* get_markup_7() const { return ___markup_7; }
	inline XmlNodeU5BU5D_t3728671178** get_address_of_markup_7() { return &___markup_7; }
	inline void set_markup_7(XmlNodeU5BU5D_t3728671178* value)
	{
		___markup_7 = value;
		Il2CppCodeGenWriteBarrier((&___markup_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XMLSCHEMAAPPINFO_T426084712_H
#ifndef XMLSCHEMADOCUMENTATION_T1182960532_H
#define XMLSCHEMADOCUMENTATION_T1182960532_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Schema.XmlSchemaDocumentation
struct  XmlSchemaDocumentation_t1182960532  : public XmlSchemaObject_t1315720168
{
public:
	// System.String System.Xml.Schema.XmlSchemaDocumentation::source
	String_t* ___source_6;
	// System.String System.Xml.Schema.XmlSchemaDocumentation::language
	String_t* ___language_7;
	// System.Xml.XmlNode[] System.Xml.Schema.XmlSchemaDocumentation::markup
	XmlNodeU5BU5D_t3728671178* ___markup_8;

public:
	inline static int32_t get_offset_of_source_6() { return static_cast<int32_t>(offsetof(XmlSchemaDocumentation_t1182960532, ___source_6)); }
	inline String_t* get_source_6() const { return ___source_6; }
	inline String_t** get_address_of_source_6() { return &___source_6; }
	inline void set_source_6(String_t* value)
	{
		___source_6 = value;
		Il2CppCodeGenWriteBarrier((&___source_6), value);
	}

	inline static int32_t get_offset_of_language_7() { return static_cast<int32_t>(offsetof(XmlSchemaDocumentation_t1182960532, ___language_7)); }
	inline String_t* get_language_7() const { return ___language_7; }
	inline String_t** get_address_of_language_7() { return &___language_7; }
	inline void set_language_7(String_t* value)
	{
		___language_7 = value;
		Il2CppCodeGenWriteBarrier((&___language_7), value);
	}

	inline static int32_t get_offset_of_markup_8() { return static_cast<int32_t>(offsetof(XmlSchemaDocumentation_t1182960532, ___markup_8)); }
	inline XmlNodeU5BU5D_t3728671178* get_markup_8() const { return ___markup_8; }
	inline XmlNodeU5BU5D_t3728671178** get_address_of_markup_8() { return &___markup_8; }
	inline void set_markup_8(XmlNodeU5BU5D_t3728671178* value)
	{
		___markup_8 = value;
		Il2CppCodeGenWriteBarrier((&___markup_8), value);
	}
};

struct XmlSchemaDocumentation_t1182960532_StaticFields
{
public:
	// System.Xml.Schema.XmlSchemaSimpleType System.Xml.Schema.XmlSchemaDocumentation::languageType
	XmlSchemaSimpleType_t2678868104 * ___languageType_9;

public:
	inline static int32_t get_offset_of_languageType_9() { return static_cast<int32_t>(offsetof(XmlSchemaDocumentation_t1182960532_StaticFields, ___languageType_9)); }
	inline XmlSchemaSimpleType_t2678868104 * get_languageType_9() const { return ___languageType_9; }
	inline XmlSchemaSimpleType_t2678868104 ** get_address_of_languageType_9() { return &___languageType_9; }
	inline void set_languageType_9(XmlSchemaSimpleType_t2678868104 * value)
	{
		___languageType_9 = value;
		Il2CppCodeGenWriteBarrier((&___languageType_9), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XMLSCHEMADOCUMENTATION_T1182960532_H
#ifndef XMLCHARTYPE_T2277243275_H
#define XMLCHARTYPE_T2277243275_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XmlCharType
struct  XmlCharType_t2277243275 
{
public:
	// System.Byte[] System.Xml.XmlCharType::charProperties
	ByteU5BU5D_t4116647657* ___charProperties_2;

public:
	inline static int32_t get_offset_of_charProperties_2() { return static_cast<int32_t>(offsetof(XmlCharType_t2277243275, ___charProperties_2)); }
	inline ByteU5BU5D_t4116647657* get_charProperties_2() const { return ___charProperties_2; }
	inline ByteU5BU5D_t4116647657** get_address_of_charProperties_2() { return &___charProperties_2; }
	inline void set_charProperties_2(ByteU5BU5D_t4116647657* value)
	{
		___charProperties_2 = value;
		Il2CppCodeGenWriteBarrier((&___charProperties_2), value);
	}
};

struct XmlCharType_t2277243275_StaticFields
{
public:
	// System.Object System.Xml.XmlCharType::s_Lock
	RuntimeObject * ___s_Lock_0;
	// System.Byte[] modreq(System.Runtime.CompilerServices.IsVolatile) System.Xml.XmlCharType::s_CharProperties
	ByteU5BU5D_t4116647657* ___s_CharProperties_1;

public:
	inline static int32_t get_offset_of_s_Lock_0() { return static_cast<int32_t>(offsetof(XmlCharType_t2277243275_StaticFields, ___s_Lock_0)); }
	inline RuntimeObject * get_s_Lock_0() const { return ___s_Lock_0; }
	inline RuntimeObject ** get_address_of_s_Lock_0() { return &___s_Lock_0; }
	inline void set_s_Lock_0(RuntimeObject * value)
	{
		___s_Lock_0 = value;
		Il2CppCodeGenWriteBarrier((&___s_Lock_0), value);
	}

	inline static int32_t get_offset_of_s_CharProperties_1() { return static_cast<int32_t>(offsetof(XmlCharType_t2277243275_StaticFields, ___s_CharProperties_1)); }
	inline ByteU5BU5D_t4116647657* get_s_CharProperties_1() const { return ___s_CharProperties_1; }
	inline ByteU5BU5D_t4116647657** get_address_of_s_CharProperties_1() { return &___s_CharProperties_1; }
	inline void set_s_CharProperties_1(ByteU5BU5D_t4116647657* value)
	{
		___s_CharProperties_1 = value;
		Il2CppCodeGenWriteBarrier((&___s_CharProperties_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Xml.XmlCharType
struct XmlCharType_t2277243275_marshaled_pinvoke
{
	uint8_t* ___charProperties_2;
};
// Native definition for COM marshalling of System.Xml.XmlCharType
struct XmlCharType_t2277243275_marshaled_com
{
	uint8_t* ___charProperties_2;
};
#endif // XMLCHARTYPE_T2277243275_H
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
#ifndef TYPECODE_T2987224087_H
#define TYPECODE_T2987224087_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.TypeCode
struct  TypeCode_t2987224087 
{
public:
	// System.Int32 System.TypeCode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TypeCode_t2987224087, ___value___2)); }
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
#endif // TYPECODE_T2987224087_H
#ifndef ATTRIBUTEMATCHSTATE_T1537420415_H
#define ATTRIBUTEMATCHSTATE_T1537420415_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Schema.AttributeMatchState
struct  AttributeMatchState_t1537420415 
{
public:
	// System.Int32 System.Xml.Schema.AttributeMatchState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AttributeMatchState_t1537420415, ___value___2)); }
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
#endif // ATTRIBUTEMATCHSTATE_T1537420415_H
#ifndef COMPOSITOR_T1780395003_H
#define COMPOSITOR_T1780395003_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Schema.Compositor
struct  Compositor_t1780395003 
{
public:
	// System.Int32 System.Xml.Schema.Compositor::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Compositor_t1780395003, ___value___2)); }
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
#endif // COMPOSITOR_T1780395003_H
#ifndef FACETTYPE_T2273005353_H
#define FACETTYPE_T2273005353_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Schema.FacetType
struct  FacetType_t2273005353 
{
public:
	// System.Int32 System.Xml.Schema.FacetType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FacetType_t2273005353, ___value___2)); }
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
#endif // FACETTYPE_T2273005353_H
#ifndef LISTTYPE_T2118133397_H
#define LISTTYPE_T2118133397_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Schema.NamespaceList/ListType
struct  ListType_t2118133397 
{
public:
	// System.Int32 System.Xml.Schema.NamespaceList/ListType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ListType_t2118133397, ___value___2)); }
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
#endif // LISTTYPE_T2118133397_H
#ifndef NUMERIC10FACETSCHECKER_T3323854505_H
#define NUMERIC10FACETSCHECKER_T3323854505_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Schema.Numeric10FacetsChecker
struct  Numeric10FacetsChecker_t3323854505  : public FacetsChecker_t3316496195
{
public:
	// System.Decimal System.Xml.Schema.Numeric10FacetsChecker::maxValue
	Decimal_t2948259380  ___maxValue_1;
	// System.Decimal System.Xml.Schema.Numeric10FacetsChecker::minValue
	Decimal_t2948259380  ___minValue_2;

public:
	inline static int32_t get_offset_of_maxValue_1() { return static_cast<int32_t>(offsetof(Numeric10FacetsChecker_t3323854505, ___maxValue_1)); }
	inline Decimal_t2948259380  get_maxValue_1() const { return ___maxValue_1; }
	inline Decimal_t2948259380 * get_address_of_maxValue_1() { return &___maxValue_1; }
	inline void set_maxValue_1(Decimal_t2948259380  value)
	{
		___maxValue_1 = value;
	}

	inline static int32_t get_offset_of_minValue_2() { return static_cast<int32_t>(offsetof(Numeric10FacetsChecker_t3323854505, ___minValue_2)); }
	inline Decimal_t2948259380  get_minValue_2() const { return ___minValue_2; }
	inline Decimal_t2948259380 * get_address_of_minValue_2() { return &___minValue_2; }
	inline void set_minValue_2(Decimal_t2948259380  value)
	{
		___minValue_2 = value;
	}
};

struct Numeric10FacetsChecker_t3323854505_StaticFields
{
public:
	// System.Char[] System.Xml.Schema.Numeric10FacetsChecker::signs
	CharU5BU5D_t3528271667* ___signs_0;

public:
	inline static int32_t get_offset_of_signs_0() { return static_cast<int32_t>(offsetof(Numeric10FacetsChecker_t3323854505_StaticFields, ___signs_0)); }
	inline CharU5BU5D_t3528271667* get_signs_0() const { return ___signs_0; }
	inline CharU5BU5D_t3528271667** get_address_of_signs_0() { return &___signs_0; }
	inline void set_signs_0(CharU5BU5D_t3528271667* value)
	{
		___signs_0 = value;
		Il2CppCodeGenWriteBarrier((&___signs_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NUMERIC10FACETSCHECKER_T3323854505_H
#ifndef RESTRICTIONFLAGS_T1570337630_H
#define RESTRICTIONFLAGS_T1570337630_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Schema.RestrictionFlags
struct  RestrictionFlags_t1570337630 
{
public:
	// System.Int32 System.Xml.Schema.RestrictionFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(RestrictionFlags_t1570337630, ___value___2)); }
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
#endif // RESTRICTIONFLAGS_T1570337630_H
#ifndef RESERVE_T3586464976_H
#define RESERVE_T3586464976_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Schema.SchemaAttDef/Reserve
struct  Reserve_t3586464976 
{
public:
	// System.Int32 System.Xml.Schema.SchemaAttDef/Reserve::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Reserve_t3586464976, ___value___2)); }
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
#endif // RESERVE_T3586464976_H
#ifndef COMPOSITOR_T1322920825_H
#define COMPOSITOR_T1322920825_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Schema.SchemaCollectionPreprocessor/Compositor
struct  Compositor_t1322920825 
{
public:
	// System.Int32 System.Xml.Schema.SchemaCollectionPreprocessor/Compositor::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Compositor_t1322920825, ___value___2)); }
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
#endif // COMPOSITOR_T1322920825_H
#ifndef USE_T2902096781_H
#define USE_T2902096781_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Schema.SchemaDeclBase/Use
struct  Use_t2902096781 
{
public:
	// System.Int32 System.Xml.Schema.SchemaDeclBase/Use::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Use_t2902096781, ___value___2)); }
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
#endif // USE_T2902096781_H
#ifndef TOKEN_T1171039503_H
#define TOKEN_T1171039503_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Schema.SchemaNames/Token
struct  Token_t1171039503 
{
public:
	// System.Int32 System.Xml.Schema.SchemaNames/Token::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Token_t1171039503, ___value___2)); }
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
#endif // TOKEN_T1171039503_H
#ifndef SCHEMATYPE_T3738787686_H
#define SCHEMATYPE_T3738787686_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Schema.SchemaType
struct  SchemaType_t3738787686 
{
public:
	// System.Int32 System.Xml.Schema.SchemaType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SchemaType_t3738787686, ___value___2)); }
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
#endif // SCHEMATYPE_T3738787686_H
#ifndef UNION_T2178763312_H
#define UNION_T2178763312_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Schema.XmlAtomicValue/Union
struct  Union_t2178763312 
{
public:
	union
	{
		struct
		{
			union
			{
				#pragma pack(push, tp, 1)
				struct
				{
					// System.Boolean System.Xml.Schema.XmlAtomicValue/Union::boolVal
					bool ___boolVal_0;
				};
				#pragma pack(pop, tp)
				struct
				{
					bool ___boolVal_0_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					// System.Double System.Xml.Schema.XmlAtomicValue/Union::dblVal
					double ___dblVal_1;
				};
				#pragma pack(pop, tp)
				struct
				{
					double ___dblVal_1_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					// System.Int64 System.Xml.Schema.XmlAtomicValue/Union::i64Val
					int64_t ___i64Val_2;
				};
				#pragma pack(pop, tp)
				struct
				{
					int64_t ___i64Val_2_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					// System.Int32 System.Xml.Schema.XmlAtomicValue/Union::i32Val
					int32_t ___i32Val_3;
				};
				#pragma pack(pop, tp)
				struct
				{
					int32_t ___i32Val_3_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					// System.DateTime System.Xml.Schema.XmlAtomicValue/Union::dtVal
					DateTime_t3738529785  ___dtVal_4;
				};
				#pragma pack(pop, tp)
				struct
				{
					DateTime_t3738529785  ___dtVal_4_forAlignmentOnly;
				};
			};
		};
		uint8_t Union_t2178763312__padding[8];
	};

public:
	inline static int32_t get_offset_of_boolVal_0() { return static_cast<int32_t>(offsetof(Union_t2178763312, ___boolVal_0)); }
	inline bool get_boolVal_0() const { return ___boolVal_0; }
	inline bool* get_address_of_boolVal_0() { return &___boolVal_0; }
	inline void set_boolVal_0(bool value)
	{
		___boolVal_0 = value;
	}

	inline static int32_t get_offset_of_dblVal_1() { return static_cast<int32_t>(offsetof(Union_t2178763312, ___dblVal_1)); }
	inline double get_dblVal_1() const { return ___dblVal_1; }
	inline double* get_address_of_dblVal_1() { return &___dblVal_1; }
	inline void set_dblVal_1(double value)
	{
		___dblVal_1 = value;
	}

	inline static int32_t get_offset_of_i64Val_2() { return static_cast<int32_t>(offsetof(Union_t2178763312, ___i64Val_2)); }
	inline int64_t get_i64Val_2() const { return ___i64Val_2; }
	inline int64_t* get_address_of_i64Val_2() { return &___i64Val_2; }
	inline void set_i64Val_2(int64_t value)
	{
		___i64Val_2 = value;
	}

	inline static int32_t get_offset_of_i32Val_3() { return static_cast<int32_t>(offsetof(Union_t2178763312, ___i32Val_3)); }
	inline int32_t get_i32Val_3() const { return ___i32Val_3; }
	inline int32_t* get_address_of_i32Val_3() { return &___i32Val_3; }
	inline void set_i32Val_3(int32_t value)
	{
		___i32Val_3 = value;
	}

	inline static int32_t get_offset_of_dtVal_4() { return static_cast<int32_t>(offsetof(Union_t2178763312, ___dtVal_4)); }
	inline DateTime_t3738529785  get_dtVal_4() const { return ___dtVal_4; }
	inline DateTime_t3738529785 * get_address_of_dtVal_4() { return &___dtVal_4; }
	inline void set_dtVal_4(DateTime_t3738529785  value)
	{
		___dtVal_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Xml.Schema.XmlAtomicValue/Union
struct Union_t2178763312_marshaled_pinvoke
{
	union
	{
		struct
		{
			union
			{
				#pragma pack(push, tp, 1)
				struct
				{
					int32_t ___boolVal_0;
				};
				#pragma pack(pop, tp)
				struct
				{
					int32_t ___boolVal_0_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					double ___dblVal_1;
				};
				#pragma pack(pop, tp)
				struct
				{
					double ___dblVal_1_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					int64_t ___i64Val_2;
				};
				#pragma pack(pop, tp)
				struct
				{
					int64_t ___i64Val_2_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					int32_t ___i32Val_3;
				};
				#pragma pack(pop, tp)
				struct
				{
					int32_t ___i32Val_3_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					DateTime_t3738529785  ___dtVal_4;
				};
				#pragma pack(pop, tp)
				struct
				{
					DateTime_t3738529785  ___dtVal_4_forAlignmentOnly;
				};
			};
		};
		uint8_t Union_t2178763312__padding[8];
	};
};
// Native definition for COM marshalling of System.Xml.Schema.XmlAtomicValue/Union
struct Union_t2178763312_marshaled_com
{
	union
	{
		struct
		{
			union
			{
				#pragma pack(push, tp, 1)
				struct
				{
					int32_t ___boolVal_0;
				};
				#pragma pack(pop, tp)
				struct
				{
					int32_t ___boolVal_0_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					double ___dblVal_1;
				};
				#pragma pack(pop, tp)
				struct
				{
					double ___dblVal_1_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					int64_t ___i64Val_2;
				};
				#pragma pack(pop, tp)
				struct
				{
					int64_t ___i64Val_2_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					int32_t ___i32Val_3;
				};
				#pragma pack(pop, tp)
				struct
				{
					int32_t ___i32Val_3_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					DateTime_t3738529785  ___dtVal_4;
				};
				#pragma pack(pop, tp)
				struct
				{
					DateTime_t3738529785  ___dtVal_4_forAlignmentOnly;
				};
			};
		};
		uint8_t Union_t2178763312__padding[8];
	};
};
#endif // UNION_T2178763312_H
#ifndef XMLSCHEMAATTRIBUTEGROUP_T246430545_H
#define XMLSCHEMAATTRIBUTEGROUP_T246430545_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Schema.XmlSchemaAttributeGroup
struct  XmlSchemaAttributeGroup_t246430545  : public XmlSchemaAnnotated_t2603549639
{
public:
	// System.String System.Xml.Schema.XmlSchemaAttributeGroup::name
	String_t* ___name_9;
	// System.Xml.Schema.XmlSchemaObjectCollection System.Xml.Schema.XmlSchemaAttributeGroup::attributes
	XmlSchemaObjectCollection_t1064819932 * ___attributes_10;
	// System.Xml.Schema.XmlSchemaAnyAttribute System.Xml.Schema.XmlSchemaAttributeGroup::anyAttribute
	XmlSchemaAnyAttribute_t963227996 * ___anyAttribute_11;
	// System.Xml.XmlQualifiedName System.Xml.Schema.XmlSchemaAttributeGroup::qname
	XmlQualifiedName_t2760654312 * ___qname_12;
	// System.Xml.Schema.XmlSchemaAttributeGroup System.Xml.Schema.XmlSchemaAttributeGroup::redefined
	XmlSchemaAttributeGroup_t246430545 * ___redefined_13;
	// System.Xml.Schema.XmlSchemaObjectTable System.Xml.Schema.XmlSchemaAttributeGroup::attributeUses
	XmlSchemaObjectTable_t2546974348 * ___attributeUses_14;
	// System.Xml.Schema.XmlSchemaAnyAttribute System.Xml.Schema.XmlSchemaAttributeGroup::attributeWildcard
	XmlSchemaAnyAttribute_t963227996 * ___attributeWildcard_15;
	// System.Int32 System.Xml.Schema.XmlSchemaAttributeGroup::selfReferenceCount
	int32_t ___selfReferenceCount_16;

public:
	inline static int32_t get_offset_of_name_9() { return static_cast<int32_t>(offsetof(XmlSchemaAttributeGroup_t246430545, ___name_9)); }
	inline String_t* get_name_9() const { return ___name_9; }
	inline String_t** get_address_of_name_9() { return &___name_9; }
	inline void set_name_9(String_t* value)
	{
		___name_9 = value;
		Il2CppCodeGenWriteBarrier((&___name_9), value);
	}

	inline static int32_t get_offset_of_attributes_10() { return static_cast<int32_t>(offsetof(XmlSchemaAttributeGroup_t246430545, ___attributes_10)); }
	inline XmlSchemaObjectCollection_t1064819932 * get_attributes_10() const { return ___attributes_10; }
	inline XmlSchemaObjectCollection_t1064819932 ** get_address_of_attributes_10() { return &___attributes_10; }
	inline void set_attributes_10(XmlSchemaObjectCollection_t1064819932 * value)
	{
		___attributes_10 = value;
		Il2CppCodeGenWriteBarrier((&___attributes_10), value);
	}

	inline static int32_t get_offset_of_anyAttribute_11() { return static_cast<int32_t>(offsetof(XmlSchemaAttributeGroup_t246430545, ___anyAttribute_11)); }
	inline XmlSchemaAnyAttribute_t963227996 * get_anyAttribute_11() const { return ___anyAttribute_11; }
	inline XmlSchemaAnyAttribute_t963227996 ** get_address_of_anyAttribute_11() { return &___anyAttribute_11; }
	inline void set_anyAttribute_11(XmlSchemaAnyAttribute_t963227996 * value)
	{
		___anyAttribute_11 = value;
		Il2CppCodeGenWriteBarrier((&___anyAttribute_11), value);
	}

	inline static int32_t get_offset_of_qname_12() { return static_cast<int32_t>(offsetof(XmlSchemaAttributeGroup_t246430545, ___qname_12)); }
	inline XmlQualifiedName_t2760654312 * get_qname_12() const { return ___qname_12; }
	inline XmlQualifiedName_t2760654312 ** get_address_of_qname_12() { return &___qname_12; }
	inline void set_qname_12(XmlQualifiedName_t2760654312 * value)
	{
		___qname_12 = value;
		Il2CppCodeGenWriteBarrier((&___qname_12), value);
	}

	inline static int32_t get_offset_of_redefined_13() { return static_cast<int32_t>(offsetof(XmlSchemaAttributeGroup_t246430545, ___redefined_13)); }
	inline XmlSchemaAttributeGroup_t246430545 * get_redefined_13() const { return ___redefined_13; }
	inline XmlSchemaAttributeGroup_t246430545 ** get_address_of_redefined_13() { return &___redefined_13; }
	inline void set_redefined_13(XmlSchemaAttributeGroup_t246430545 * value)
	{
		___redefined_13 = value;
		Il2CppCodeGenWriteBarrier((&___redefined_13), value);
	}

	inline static int32_t get_offset_of_attributeUses_14() { return static_cast<int32_t>(offsetof(XmlSchemaAttributeGroup_t246430545, ___attributeUses_14)); }
	inline XmlSchemaObjectTable_t2546974348 * get_attributeUses_14() const { return ___attributeUses_14; }
	inline XmlSchemaObjectTable_t2546974348 ** get_address_of_attributeUses_14() { return &___attributeUses_14; }
	inline void set_attributeUses_14(XmlSchemaObjectTable_t2546974348 * value)
	{
		___attributeUses_14 = value;
		Il2CppCodeGenWriteBarrier((&___attributeUses_14), value);
	}

	inline static int32_t get_offset_of_attributeWildcard_15() { return static_cast<int32_t>(offsetof(XmlSchemaAttributeGroup_t246430545, ___attributeWildcard_15)); }
	inline XmlSchemaAnyAttribute_t963227996 * get_attributeWildcard_15() const { return ___attributeWildcard_15; }
	inline XmlSchemaAnyAttribute_t963227996 ** get_address_of_attributeWildcard_15() { return &___attributeWildcard_15; }
	inline void set_attributeWildcard_15(XmlSchemaAnyAttribute_t963227996 * value)
	{
		___attributeWildcard_15 = value;
		Il2CppCodeGenWriteBarrier((&___attributeWildcard_15), value);
	}

	inline static int32_t get_offset_of_selfReferenceCount_16() { return static_cast<int32_t>(offsetof(XmlSchemaAttributeGroup_t246430545, ___selfReferenceCount_16)); }
	inline int32_t get_selfReferenceCount_16() const { return ___selfReferenceCount_16; }
	inline int32_t* get_address_of_selfReferenceCount_16() { return &___selfReferenceCount_16; }
	inline void set_selfReferenceCount_16(int32_t value)
	{
		___selfReferenceCount_16 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XMLSCHEMAATTRIBUTEGROUP_T246430545_H
#ifndef XMLSCHEMAATTRIBUTEGROUPREF_T846390688_H
#define XMLSCHEMAATTRIBUTEGROUPREF_T846390688_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Schema.XmlSchemaAttributeGroupRef
struct  XmlSchemaAttributeGroupRef_t846390688  : public XmlSchemaAnnotated_t2603549639
{
public:
	// System.Xml.XmlQualifiedName System.Xml.Schema.XmlSchemaAttributeGroupRef::refName
	XmlQualifiedName_t2760654312 * ___refName_9;

public:
	inline static int32_t get_offset_of_refName_9() { return static_cast<int32_t>(offsetof(XmlSchemaAttributeGroupRef_t846390688, ___refName_9)); }
	inline XmlQualifiedName_t2760654312 * get_refName_9() const { return ___refName_9; }
	inline XmlQualifiedName_t2760654312 ** get_address_of_refName_9() { return &___refName_9; }
	inline void set_refName_9(XmlQualifiedName_t2760654312 * value)
	{
		___refName_9 = value;
		Il2CppCodeGenWriteBarrier((&___refName_9), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XMLSCHEMAATTRIBUTEGROUPREF_T846390688_H
#ifndef XMLSCHEMACONTENT_T1040349258_H
#define XMLSCHEMACONTENT_T1040349258_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Schema.XmlSchemaContent
struct  XmlSchemaContent_t1040349258  : public XmlSchemaAnnotated_t2603549639
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XMLSCHEMACONTENT_T1040349258_H
#ifndef XMLSCHEMACONTENTMODEL_T602185179_H
#define XMLSCHEMACONTENTMODEL_T602185179_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Schema.XmlSchemaContentModel
struct  XmlSchemaContentModel_t602185179  : public XmlSchemaAnnotated_t2603549639
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XMLSCHEMACONTENTMODEL_T602185179_H
#ifndef XMLSCHEMACONTENTPROCESSING_T826201100_H
#define XMLSCHEMACONTENTPROCESSING_T826201100_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Schema.XmlSchemaContentProcessing
struct  XmlSchemaContentProcessing_t826201100 
{
public:
	// System.Int32 System.Xml.Schema.XmlSchemaContentProcessing::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(XmlSchemaContentProcessing_t826201100, ___value___2)); }
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
#endif // XMLSCHEMACONTENTPROCESSING_T826201100_H
#ifndef XMLSCHEMACONTENTTYPE_T3022550233_H
#define XMLSCHEMACONTENTTYPE_T3022550233_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Schema.XmlSchemaContentType
struct  XmlSchemaContentType_t3022550233 
{
public:
	// System.Int32 System.Xml.Schema.XmlSchemaContentType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(XmlSchemaContentType_t3022550233, ___value___2)); }
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
#endif // XMLSCHEMACONTENTTYPE_T3022550233_H
#ifndef XMLSCHEMADATATYPEVARIETY_T1737164534_H
#define XMLSCHEMADATATYPEVARIETY_T1737164534_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Schema.XmlSchemaDatatypeVariety
struct  XmlSchemaDatatypeVariety_t1737164534 
{
public:
	// System.Int32 System.Xml.Schema.XmlSchemaDatatypeVariety::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(XmlSchemaDatatypeVariety_t1737164534, ___value___2)); }
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
#endif // XMLSCHEMADATATYPEVARIETY_T1737164534_H
#ifndef XMLSCHEMADERIVATIONMETHOD_T1774354337_H
#define XMLSCHEMADERIVATIONMETHOD_T1774354337_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Schema.XmlSchemaDerivationMethod
struct  XmlSchemaDerivationMethod_t1774354337 
{
public:
	// System.Int32 System.Xml.Schema.XmlSchemaDerivationMethod::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(XmlSchemaDerivationMethod_t1774354337, ___value___2)); }
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
#endif // XMLSCHEMADERIVATIONMETHOD_T1774354337_H
#ifndef XMLSCHEMAEXCEPTION_T3511258692_H
#define XMLSCHEMAEXCEPTION_T3511258692_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Schema.XmlSchemaException
struct  XmlSchemaException_t3511258692  : public SystemException_t176217640
{
public:
	// System.String System.Xml.Schema.XmlSchemaException::res
	String_t* ___res_17;
	// System.String[] System.Xml.Schema.XmlSchemaException::args
	StringU5BU5D_t1281789340* ___args_18;
	// System.String System.Xml.Schema.XmlSchemaException::sourceUri
	String_t* ___sourceUri_19;
	// System.Int32 System.Xml.Schema.XmlSchemaException::lineNumber
	int32_t ___lineNumber_20;
	// System.Int32 System.Xml.Schema.XmlSchemaException::linePosition
	int32_t ___linePosition_21;
	// System.Xml.Schema.XmlSchemaObject System.Xml.Schema.XmlSchemaException::sourceSchemaObject
	XmlSchemaObject_t1315720168 * ___sourceSchemaObject_22;
	// System.String System.Xml.Schema.XmlSchemaException::message
	String_t* ___message_23;

public:
	inline static int32_t get_offset_of_res_17() { return static_cast<int32_t>(offsetof(XmlSchemaException_t3511258692, ___res_17)); }
	inline String_t* get_res_17() const { return ___res_17; }
	inline String_t** get_address_of_res_17() { return &___res_17; }
	inline void set_res_17(String_t* value)
	{
		___res_17 = value;
		Il2CppCodeGenWriteBarrier((&___res_17), value);
	}

	inline static int32_t get_offset_of_args_18() { return static_cast<int32_t>(offsetof(XmlSchemaException_t3511258692, ___args_18)); }
	inline StringU5BU5D_t1281789340* get_args_18() const { return ___args_18; }
	inline StringU5BU5D_t1281789340** get_address_of_args_18() { return &___args_18; }
	inline void set_args_18(StringU5BU5D_t1281789340* value)
	{
		___args_18 = value;
		Il2CppCodeGenWriteBarrier((&___args_18), value);
	}

	inline static int32_t get_offset_of_sourceUri_19() { return static_cast<int32_t>(offsetof(XmlSchemaException_t3511258692, ___sourceUri_19)); }
	inline String_t* get_sourceUri_19() const { return ___sourceUri_19; }
	inline String_t** get_address_of_sourceUri_19() { return &___sourceUri_19; }
	inline void set_sourceUri_19(String_t* value)
	{
		___sourceUri_19 = value;
		Il2CppCodeGenWriteBarrier((&___sourceUri_19), value);
	}

	inline static int32_t get_offset_of_lineNumber_20() { return static_cast<int32_t>(offsetof(XmlSchemaException_t3511258692, ___lineNumber_20)); }
	inline int32_t get_lineNumber_20() const { return ___lineNumber_20; }
	inline int32_t* get_address_of_lineNumber_20() { return &___lineNumber_20; }
	inline void set_lineNumber_20(int32_t value)
	{
		___lineNumber_20 = value;
	}

	inline static int32_t get_offset_of_linePosition_21() { return static_cast<int32_t>(offsetof(XmlSchemaException_t3511258692, ___linePosition_21)); }
	inline int32_t get_linePosition_21() const { return ___linePosition_21; }
	inline int32_t* get_address_of_linePosition_21() { return &___linePosition_21; }
	inline void set_linePosition_21(int32_t value)
	{
		___linePosition_21 = value;
	}

	inline static int32_t get_offset_of_sourceSchemaObject_22() { return static_cast<int32_t>(offsetof(XmlSchemaException_t3511258692, ___sourceSchemaObject_22)); }
	inline XmlSchemaObject_t1315720168 * get_sourceSchemaObject_22() const { return ___sourceSchemaObject_22; }
	inline XmlSchemaObject_t1315720168 ** get_address_of_sourceSchemaObject_22() { return &___sourceSchemaObject_22; }
	inline void set_sourceSchemaObject_22(XmlSchemaObject_t1315720168 * value)
	{
		___sourceSchemaObject_22 = value;
		Il2CppCodeGenWriteBarrier((&___sourceSchemaObject_22), value);
	}

	inline static int32_t get_offset_of_message_23() { return static_cast<int32_t>(offsetof(XmlSchemaException_t3511258692, ___message_23)); }
	inline String_t* get_message_23() const { return ___message_23; }
	inline String_t** get_address_of_message_23() { return &___message_23; }
	inline void set_message_23(String_t* value)
	{
		___message_23 = value;
		Il2CppCodeGenWriteBarrier((&___message_23), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XMLSCHEMAEXCEPTION_T3511258692_H
#ifndef XMLSCHEMAFORM_T4264307319_H
#define XMLSCHEMAFORM_T4264307319_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Schema.XmlSchemaForm
struct  XmlSchemaForm_t4264307319 
{
public:
	// System.Int32 System.Xml.Schema.XmlSchemaForm::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(XmlSchemaForm_t4264307319, ___value___2)); }
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
#endif // XMLSCHEMAFORM_T4264307319_H
#ifndef OCCURS_T3988442794_H
#define OCCURS_T3988442794_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Schema.XmlSchemaParticle/Occurs
struct  Occurs_t3988442794 
{
public:
	// System.Int32 System.Xml.Schema.XmlSchemaParticle/Occurs::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Occurs_t3988442794, ___value___2)); }
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
#endif // OCCURS_T3988442794_H
#ifndef XMLSCHEMAUSE_T647315988_H
#define XMLSCHEMAUSE_T647315988_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Schema.XmlSchemaUse
struct  XmlSchemaUse_t647315988 
{
public:
	// System.Int32 System.Xml.Schema.XmlSchemaUse::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(XmlSchemaUse_t647315988, ___value___2)); }
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
#endif // XMLSCHEMAUSE_T647315988_H
#ifndef XMLSEVERITYTYPE_T1894651412_H
#define XMLSEVERITYTYPE_T1894651412_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Schema.XmlSeverityType
struct  XmlSeverityType_t1894651412 
{
public:
	// System.Int32 System.Xml.Schema.XmlSeverityType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(XmlSeverityType_t1894651412, ___value___2)); }
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
#endif // XMLSEVERITYTYPE_T1894651412_H
#ifndef XMLTYPECODE_T2623622950_H
#define XMLTYPECODE_T2623622950_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Schema.XmlTypeCode
struct  XmlTypeCode_t2623622950 
{
public:
	// System.Int32 System.Xml.Schema.XmlTypeCode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(XmlTypeCode_t2623622950, ___value___2)); }
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
#endif // XMLTYPECODE_T2623622950_H
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
#ifndef DATATYPEIMPLEMENTATION_T3722098011_H
#define DATATYPEIMPLEMENTATION_T3722098011_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Schema.DatatypeImplementation
struct  DatatypeImplementation_t3722098011  : public XmlSchemaDatatype_t322714710
{
public:
	// System.Xml.Schema.XmlSchemaDatatypeVariety System.Xml.Schema.DatatypeImplementation::variety
	int32_t ___variety_0;
	// System.Xml.Schema.RestrictionFacets System.Xml.Schema.DatatypeImplementation::restriction
	RestrictionFacets_t1638599442 * ___restriction_1;
	// System.Xml.Schema.DatatypeImplementation System.Xml.Schema.DatatypeImplementation::baseType
	DatatypeImplementation_t3722098011 * ___baseType_2;
	// System.Xml.Schema.XmlValueConverter System.Xml.Schema.DatatypeImplementation::valueConverter
	XmlValueConverter_t585560190 * ___valueConverter_3;
	// System.Xml.Schema.XmlSchemaType System.Xml.Schema.DatatypeImplementation::parentSchemaType
	XmlSchemaType_t2033747345 * ___parentSchemaType_4;

public:
	inline static int32_t get_offset_of_variety_0() { return static_cast<int32_t>(offsetof(DatatypeImplementation_t3722098011, ___variety_0)); }
	inline int32_t get_variety_0() const { return ___variety_0; }
	inline int32_t* get_address_of_variety_0() { return &___variety_0; }
	inline void set_variety_0(int32_t value)
	{
		___variety_0 = value;
	}

	inline static int32_t get_offset_of_restriction_1() { return static_cast<int32_t>(offsetof(DatatypeImplementation_t3722098011, ___restriction_1)); }
	inline RestrictionFacets_t1638599442 * get_restriction_1() const { return ___restriction_1; }
	inline RestrictionFacets_t1638599442 ** get_address_of_restriction_1() { return &___restriction_1; }
	inline void set_restriction_1(RestrictionFacets_t1638599442 * value)
	{
		___restriction_1 = value;
		Il2CppCodeGenWriteBarrier((&___restriction_1), value);
	}

	inline static int32_t get_offset_of_baseType_2() { return static_cast<int32_t>(offsetof(DatatypeImplementation_t3722098011, ___baseType_2)); }
	inline DatatypeImplementation_t3722098011 * get_baseType_2() const { return ___baseType_2; }
	inline DatatypeImplementation_t3722098011 ** get_address_of_baseType_2() { return &___baseType_2; }
	inline void set_baseType_2(DatatypeImplementation_t3722098011 * value)
	{
		___baseType_2 = value;
		Il2CppCodeGenWriteBarrier((&___baseType_2), value);
	}

	inline static int32_t get_offset_of_valueConverter_3() { return static_cast<int32_t>(offsetof(DatatypeImplementation_t3722098011, ___valueConverter_3)); }
	inline XmlValueConverter_t585560190 * get_valueConverter_3() const { return ___valueConverter_3; }
	inline XmlValueConverter_t585560190 ** get_address_of_valueConverter_3() { return &___valueConverter_3; }
	inline void set_valueConverter_3(XmlValueConverter_t585560190 * value)
	{
		___valueConverter_3 = value;
		Il2CppCodeGenWriteBarrier((&___valueConverter_3), value);
	}

	inline static int32_t get_offset_of_parentSchemaType_4() { return static_cast<int32_t>(offsetof(DatatypeImplementation_t3722098011, ___parentSchemaType_4)); }
	inline XmlSchemaType_t2033747345 * get_parentSchemaType_4() const { return ___parentSchemaType_4; }
	inline XmlSchemaType_t2033747345 ** get_address_of_parentSchemaType_4() { return &___parentSchemaType_4; }
	inline void set_parentSchemaType_4(XmlSchemaType_t2033747345 * value)
	{
		___parentSchemaType_4 = value;
		Il2CppCodeGenWriteBarrier((&___parentSchemaType_4), value);
	}
};

struct DatatypeImplementation_t3722098011_StaticFields
{
public:
	// System.Collections.Hashtable System.Xml.Schema.DatatypeImplementation::builtinTypes
	Hashtable_t1853889766 * ___builtinTypes_5;
	// System.Xml.Schema.XmlSchemaSimpleType[] System.Xml.Schema.DatatypeImplementation::enumToTypeCode
	XmlSchemaSimpleTypeU5BU5D_t1394089049* ___enumToTypeCode_6;
	// System.Xml.Schema.XmlSchemaSimpleType System.Xml.Schema.DatatypeImplementation::anySimpleType
	XmlSchemaSimpleType_t2678868104 * ___anySimpleType_7;
	// System.Xml.Schema.XmlSchemaSimpleType System.Xml.Schema.DatatypeImplementation::anyAtomicType
	XmlSchemaSimpleType_t2678868104 * ___anyAtomicType_8;
	// System.Xml.Schema.XmlSchemaSimpleType System.Xml.Schema.DatatypeImplementation::untypedAtomicType
	XmlSchemaSimpleType_t2678868104 * ___untypedAtomicType_9;
	// System.Xml.Schema.XmlSchemaSimpleType System.Xml.Schema.DatatypeImplementation::yearMonthDurationType
	XmlSchemaSimpleType_t2678868104 * ___yearMonthDurationType_10;
	// System.Xml.Schema.XmlSchemaSimpleType System.Xml.Schema.DatatypeImplementation::dayTimeDurationType
	XmlSchemaSimpleType_t2678868104 * ___dayTimeDurationType_11;
	// System.Xml.Schema.XmlSchemaSimpleType modreq(System.Runtime.CompilerServices.IsVolatile) System.Xml.Schema.DatatypeImplementation::normalizedStringTypeV1Compat
	XmlSchemaSimpleType_t2678868104 * ___normalizedStringTypeV1Compat_12;
	// System.Xml.Schema.XmlSchemaSimpleType modreq(System.Runtime.CompilerServices.IsVolatile) System.Xml.Schema.DatatypeImplementation::tokenTypeV1Compat
	XmlSchemaSimpleType_t2678868104 * ___tokenTypeV1Compat_13;
	// System.Xml.XmlQualifiedName System.Xml.Schema.DatatypeImplementation::QnAnySimpleType
	XmlQualifiedName_t2760654312 * ___QnAnySimpleType_14;
	// System.Xml.XmlQualifiedName System.Xml.Schema.DatatypeImplementation::QnAnyType
	XmlQualifiedName_t2760654312 * ___QnAnyType_15;
	// System.Xml.Schema.FacetsChecker System.Xml.Schema.DatatypeImplementation::stringFacetsChecker
	FacetsChecker_t3316496195 * ___stringFacetsChecker_16;
	// System.Xml.Schema.FacetsChecker System.Xml.Schema.DatatypeImplementation::miscFacetsChecker
	FacetsChecker_t3316496195 * ___miscFacetsChecker_17;
	// System.Xml.Schema.FacetsChecker System.Xml.Schema.DatatypeImplementation::numeric2FacetsChecker
	FacetsChecker_t3316496195 * ___numeric2FacetsChecker_18;
	// System.Xml.Schema.FacetsChecker System.Xml.Schema.DatatypeImplementation::binaryFacetsChecker
	FacetsChecker_t3316496195 * ___binaryFacetsChecker_19;
	// System.Xml.Schema.FacetsChecker System.Xml.Schema.DatatypeImplementation::dateTimeFacetsChecker
	FacetsChecker_t3316496195 * ___dateTimeFacetsChecker_20;
	// System.Xml.Schema.FacetsChecker System.Xml.Schema.DatatypeImplementation::durationFacetsChecker
	FacetsChecker_t3316496195 * ___durationFacetsChecker_21;
	// System.Xml.Schema.FacetsChecker System.Xml.Schema.DatatypeImplementation::listFacetsChecker
	FacetsChecker_t3316496195 * ___listFacetsChecker_22;
	// System.Xml.Schema.FacetsChecker System.Xml.Schema.DatatypeImplementation::qnameFacetsChecker
	FacetsChecker_t3316496195 * ___qnameFacetsChecker_23;
	// System.Xml.Schema.FacetsChecker System.Xml.Schema.DatatypeImplementation::unionFacetsChecker
	FacetsChecker_t3316496195 * ___unionFacetsChecker_24;
	// System.Xml.Schema.DatatypeImplementation System.Xml.Schema.DatatypeImplementation::c_anySimpleType
	DatatypeImplementation_t3722098011 * ___c_anySimpleType_25;
	// System.Xml.Schema.DatatypeImplementation System.Xml.Schema.DatatypeImplementation::c_anyURI
	DatatypeImplementation_t3722098011 * ___c_anyURI_26;
	// System.Xml.Schema.DatatypeImplementation System.Xml.Schema.DatatypeImplementation::c_base64Binary
	DatatypeImplementation_t3722098011 * ___c_base64Binary_27;
	// System.Xml.Schema.DatatypeImplementation System.Xml.Schema.DatatypeImplementation::c_boolean
	DatatypeImplementation_t3722098011 * ___c_boolean_28;
	// System.Xml.Schema.DatatypeImplementation System.Xml.Schema.DatatypeImplementation::c_byte
	DatatypeImplementation_t3722098011 * ___c_byte_29;
	// System.Xml.Schema.DatatypeImplementation System.Xml.Schema.DatatypeImplementation::c_char
	DatatypeImplementation_t3722098011 * ___c_char_30;
	// System.Xml.Schema.DatatypeImplementation System.Xml.Schema.DatatypeImplementation::c_date
	DatatypeImplementation_t3722098011 * ___c_date_31;
	// System.Xml.Schema.DatatypeImplementation System.Xml.Schema.DatatypeImplementation::c_dateTime
	DatatypeImplementation_t3722098011 * ___c_dateTime_32;
	// System.Xml.Schema.DatatypeImplementation System.Xml.Schema.DatatypeImplementation::c_dateTimeNoTz
	DatatypeImplementation_t3722098011 * ___c_dateTimeNoTz_33;
	// System.Xml.Schema.DatatypeImplementation System.Xml.Schema.DatatypeImplementation::c_dateTimeTz
	DatatypeImplementation_t3722098011 * ___c_dateTimeTz_34;
	// System.Xml.Schema.DatatypeImplementation System.Xml.Schema.DatatypeImplementation::c_day
	DatatypeImplementation_t3722098011 * ___c_day_35;
	// System.Xml.Schema.DatatypeImplementation System.Xml.Schema.DatatypeImplementation::c_decimal
	DatatypeImplementation_t3722098011 * ___c_decimal_36;
	// System.Xml.Schema.DatatypeImplementation System.Xml.Schema.DatatypeImplementation::c_double
	DatatypeImplementation_t3722098011 * ___c_double_37;
	// System.Xml.Schema.DatatypeImplementation System.Xml.Schema.DatatypeImplementation::c_doubleXdr
	DatatypeImplementation_t3722098011 * ___c_doubleXdr_38;
	// System.Xml.Schema.DatatypeImplementation System.Xml.Schema.DatatypeImplementation::c_duration
	DatatypeImplementation_t3722098011 * ___c_duration_39;
	// System.Xml.Schema.DatatypeImplementation System.Xml.Schema.DatatypeImplementation::c_ENTITY
	DatatypeImplementation_t3722098011 * ___c_ENTITY_40;
	// System.Xml.Schema.DatatypeImplementation System.Xml.Schema.DatatypeImplementation::c_ENTITIES
	DatatypeImplementation_t3722098011 * ___c_ENTITIES_41;
	// System.Xml.Schema.DatatypeImplementation System.Xml.Schema.DatatypeImplementation::c_ENUMERATION
	DatatypeImplementation_t3722098011 * ___c_ENUMERATION_42;
	// System.Xml.Schema.DatatypeImplementation System.Xml.Schema.DatatypeImplementation::c_fixed
	DatatypeImplementation_t3722098011 * ___c_fixed_43;
	// System.Xml.Schema.DatatypeImplementation System.Xml.Schema.DatatypeImplementation::c_float
	DatatypeImplementation_t3722098011 * ___c_float_44;
	// System.Xml.Schema.DatatypeImplementation System.Xml.Schema.DatatypeImplementation::c_floatXdr
	DatatypeImplementation_t3722098011 * ___c_floatXdr_45;
	// System.Xml.Schema.DatatypeImplementation System.Xml.Schema.DatatypeImplementation::c_hexBinary
	DatatypeImplementation_t3722098011 * ___c_hexBinary_46;
	// System.Xml.Schema.DatatypeImplementation System.Xml.Schema.DatatypeImplementation::c_ID
	DatatypeImplementation_t3722098011 * ___c_ID_47;
	// System.Xml.Schema.DatatypeImplementation System.Xml.Schema.DatatypeImplementation::c_IDREF
	DatatypeImplementation_t3722098011 * ___c_IDREF_48;
	// System.Xml.Schema.DatatypeImplementation System.Xml.Schema.DatatypeImplementation::c_IDREFS
	DatatypeImplementation_t3722098011 * ___c_IDREFS_49;
	// System.Xml.Schema.DatatypeImplementation System.Xml.Schema.DatatypeImplementation::c_int
	DatatypeImplementation_t3722098011 * ___c_int_50;
	// System.Xml.Schema.DatatypeImplementation System.Xml.Schema.DatatypeImplementation::c_integer
	DatatypeImplementation_t3722098011 * ___c_integer_51;
	// System.Xml.Schema.DatatypeImplementation System.Xml.Schema.DatatypeImplementation::c_language
	DatatypeImplementation_t3722098011 * ___c_language_52;
	// System.Xml.Schema.DatatypeImplementation System.Xml.Schema.DatatypeImplementation::c_long
	DatatypeImplementation_t3722098011 * ___c_long_53;
	// System.Xml.Schema.DatatypeImplementation System.Xml.Schema.DatatypeImplementation::c_month
	DatatypeImplementation_t3722098011 * ___c_month_54;
	// System.Xml.Schema.DatatypeImplementation System.Xml.Schema.DatatypeImplementation::c_monthDay
	DatatypeImplementation_t3722098011 * ___c_monthDay_55;
	// System.Xml.Schema.DatatypeImplementation System.Xml.Schema.DatatypeImplementation::c_Name
	DatatypeImplementation_t3722098011 * ___c_Name_56;
	// System.Xml.Schema.DatatypeImplementation System.Xml.Schema.DatatypeImplementation::c_NCName
	DatatypeImplementation_t3722098011 * ___c_NCName_57;
	// System.Xml.Schema.DatatypeImplementation System.Xml.Schema.DatatypeImplementation::c_negativeInteger
	DatatypeImplementation_t3722098011 * ___c_negativeInteger_58;
	// System.Xml.Schema.DatatypeImplementation System.Xml.Schema.DatatypeImplementation::c_NMTOKEN
	DatatypeImplementation_t3722098011 * ___c_NMTOKEN_59;
	// System.Xml.Schema.DatatypeImplementation System.Xml.Schema.DatatypeImplementation::c_NMTOKENS
	DatatypeImplementation_t3722098011 * ___c_NMTOKENS_60;
	// System.Xml.Schema.DatatypeImplementation System.Xml.Schema.DatatypeImplementation::c_nonNegativeInteger
	DatatypeImplementation_t3722098011 * ___c_nonNegativeInteger_61;
	// System.Xml.Schema.DatatypeImplementation System.Xml.Schema.DatatypeImplementation::c_nonPositiveInteger
	DatatypeImplementation_t3722098011 * ___c_nonPositiveInteger_62;
	// System.Xml.Schema.DatatypeImplementation System.Xml.Schema.DatatypeImplementation::c_normalizedString
	DatatypeImplementation_t3722098011 * ___c_normalizedString_63;
	// System.Xml.Schema.DatatypeImplementation System.Xml.Schema.DatatypeImplementation::c_NOTATION
	DatatypeImplementation_t3722098011 * ___c_NOTATION_64;
	// System.Xml.Schema.DatatypeImplementation System.Xml.Schema.DatatypeImplementation::c_positiveInteger
	DatatypeImplementation_t3722098011 * ___c_positiveInteger_65;
	// System.Xml.Schema.DatatypeImplementation System.Xml.Schema.DatatypeImplementation::c_QName
	DatatypeImplementation_t3722098011 * ___c_QName_66;
	// System.Xml.Schema.DatatypeImplementation System.Xml.Schema.DatatypeImplementation::c_QNameXdr
	DatatypeImplementation_t3722098011 * ___c_QNameXdr_67;
	// System.Xml.Schema.DatatypeImplementation System.Xml.Schema.DatatypeImplementation::c_short
	DatatypeImplementation_t3722098011 * ___c_short_68;
	// System.Xml.Schema.DatatypeImplementation System.Xml.Schema.DatatypeImplementation::c_string
	DatatypeImplementation_t3722098011 * ___c_string_69;
	// System.Xml.Schema.DatatypeImplementation System.Xml.Schema.DatatypeImplementation::c_time
	DatatypeImplementation_t3722098011 * ___c_time_70;
	// System.Xml.Schema.DatatypeImplementation System.Xml.Schema.DatatypeImplementation::c_timeNoTz
	DatatypeImplementation_t3722098011 * ___c_timeNoTz_71;
	// System.Xml.Schema.DatatypeImplementation System.Xml.Schema.DatatypeImplementation::c_timeTz
	DatatypeImplementation_t3722098011 * ___c_timeTz_72;
	// System.Xml.Schema.DatatypeImplementation System.Xml.Schema.DatatypeImplementation::c_token
	DatatypeImplementation_t3722098011 * ___c_token_73;
	// System.Xml.Schema.DatatypeImplementation System.Xml.Schema.DatatypeImplementation::c_unsignedByte
	DatatypeImplementation_t3722098011 * ___c_unsignedByte_74;
	// System.Xml.Schema.DatatypeImplementation System.Xml.Schema.DatatypeImplementation::c_unsignedInt
	DatatypeImplementation_t3722098011 * ___c_unsignedInt_75;
	// System.Xml.Schema.DatatypeImplementation System.Xml.Schema.DatatypeImplementation::c_unsignedLong
	DatatypeImplementation_t3722098011 * ___c_unsignedLong_76;
	// System.Xml.Schema.DatatypeImplementation System.Xml.Schema.DatatypeImplementation::c_unsignedShort
	DatatypeImplementation_t3722098011 * ___c_unsignedShort_77;
	// System.Xml.Schema.DatatypeImplementation System.Xml.Schema.DatatypeImplementation::c_uuid
	DatatypeImplementation_t3722098011 * ___c_uuid_78;
	// System.Xml.Schema.DatatypeImplementation System.Xml.Schema.DatatypeImplementation::c_year
	DatatypeImplementation_t3722098011 * ___c_year_79;
	// System.Xml.Schema.DatatypeImplementation System.Xml.Schema.DatatypeImplementation::c_yearMonth
	DatatypeImplementation_t3722098011 * ___c_yearMonth_80;
	// System.Xml.Schema.DatatypeImplementation System.Xml.Schema.DatatypeImplementation::c_normalizedStringV1Compat
	DatatypeImplementation_t3722098011 * ___c_normalizedStringV1Compat_81;
	// System.Xml.Schema.DatatypeImplementation System.Xml.Schema.DatatypeImplementation::c_tokenV1Compat
	DatatypeImplementation_t3722098011 * ___c_tokenV1Compat_82;
	// System.Xml.Schema.DatatypeImplementation System.Xml.Schema.DatatypeImplementation::c_anyAtomicType
	DatatypeImplementation_t3722098011 * ___c_anyAtomicType_83;
	// System.Xml.Schema.DatatypeImplementation System.Xml.Schema.DatatypeImplementation::c_dayTimeDuration
	DatatypeImplementation_t3722098011 * ___c_dayTimeDuration_84;
	// System.Xml.Schema.DatatypeImplementation System.Xml.Schema.DatatypeImplementation::c_untypedAtomicType
	DatatypeImplementation_t3722098011 * ___c_untypedAtomicType_85;
	// System.Xml.Schema.DatatypeImplementation System.Xml.Schema.DatatypeImplementation::c_yearMonthDuration
	DatatypeImplementation_t3722098011 * ___c_yearMonthDuration_86;
	// System.Xml.Schema.DatatypeImplementation[] System.Xml.Schema.DatatypeImplementation::c_tokenizedTypes
	DatatypeImplementationU5BU5D_t1069202138* ___c_tokenizedTypes_87;
	// System.Xml.Schema.DatatypeImplementation[] System.Xml.Schema.DatatypeImplementation::c_tokenizedTypesXsd
	DatatypeImplementationU5BU5D_t1069202138* ___c_tokenizedTypesXsd_88;
	// System.Xml.Schema.DatatypeImplementation/SchemaDatatypeMap[] System.Xml.Schema.DatatypeImplementation::c_XdrTypes
	SchemaDatatypeMapU5BU5D_t4071411298* ___c_XdrTypes_89;
	// System.Xml.Schema.DatatypeImplementation/SchemaDatatypeMap[] System.Xml.Schema.DatatypeImplementation::c_XsdTypes
	SchemaDatatypeMapU5BU5D_t4071411298* ___c_XsdTypes_90;

public:
	inline static int32_t get_offset_of_builtinTypes_5() { return static_cast<int32_t>(offsetof(DatatypeImplementation_t3722098011_StaticFields, ___builtinTypes_5)); }
	inline Hashtable_t1853889766 * get_builtinTypes_5() const { return ___builtinTypes_5; }
	inline Hashtable_t1853889766 ** get_address_of_builtinTypes_5() { return &___builtinTypes_5; }
	inline void set_builtinTypes_5(Hashtable_t1853889766 * value)
	{
		___builtinTypes_5 = value;
		Il2CppCodeGenWriteBarrier((&___builtinTypes_5), value);
	}

	inline static int32_t get_offset_of_enumToTypeCode_6() { return static_cast<int32_t>(offsetof(DatatypeImplementation_t3722098011_StaticFields, ___enumToTypeCode_6)); }
	inline XmlSchemaSimpleTypeU5BU5D_t1394089049* get_enumToTypeCode_6() const { return ___enumToTypeCode_6; }
	inline XmlSchemaSimpleTypeU5BU5D_t1394089049** get_address_of_enumToTypeCode_6() { return &___enumToTypeCode_6; }
	inline void set_enumToTypeCode_6(XmlSchemaSimpleTypeU5BU5D_t1394089049* value)
	{
		___enumToTypeCode_6 = value;
		Il2CppCodeGenWriteBarrier((&___enumToTypeCode_6), value);
	}

	inline static int32_t get_offset_of_anySimpleType_7() { return static_cast<int32_t>(offsetof(DatatypeImplementation_t3722098011_StaticFields, ___anySimpleType_7)); }
	inline XmlSchemaSimpleType_t2678868104 * get_anySimpleType_7() const { return ___anySimpleType_7; }
	inline XmlSchemaSimpleType_t2678868104 ** get_address_of_anySimpleType_7() { return &___anySimpleType_7; }
	inline void set_anySimpleType_7(XmlSchemaSimpleType_t2678868104 * value)
	{
		___anySimpleType_7 = value;
		Il2CppCodeGenWriteBarrier((&___anySimpleType_7), value);
	}

	inline static int32_t get_offset_of_anyAtomicType_8() { return static_cast<int32_t>(offsetof(DatatypeImplementation_t3722098011_StaticFields, ___anyAtomicType_8)); }
	inline XmlSchemaSimpleType_t2678868104 * get_anyAtomicType_8() const { return ___anyAtomicType_8; }
	inline XmlSchemaSimpleType_t2678868104 ** get_address_of_anyAtomicType_8() { return &___anyAtomicType_8; }
	inline void set_anyAtomicType_8(XmlSchemaSimpleType_t2678868104 * value)
	{
		___anyAtomicType_8 = value;
		Il2CppCodeGenWriteBarrier((&___anyAtomicType_8), value);
	}

	inline static int32_t get_offset_of_untypedAtomicType_9() { return static_cast<int32_t>(offsetof(DatatypeImplementation_t3722098011_StaticFields, ___untypedAtomicType_9)); }
	inline XmlSchemaSimpleType_t2678868104 * get_untypedAtomicType_9() const { return ___untypedAtomicType_9; }
	inline XmlSchemaSimpleType_t2678868104 ** get_address_of_untypedAtomicType_9() { return &___untypedAtomicType_9; }
	inline void set_untypedAtomicType_9(XmlSchemaSimpleType_t2678868104 * value)
	{
		___untypedAtomicType_9 = value;
		Il2CppCodeGenWriteBarrier((&___untypedAtomicType_9), value);
	}

	inline static int32_t get_offset_of_yearMonthDurationType_10() { return static_cast<int32_t>(offsetof(DatatypeImplementation_t3722098011_StaticFields, ___yearMonthDurationType_10)); }
	inline XmlSchemaSimpleType_t2678868104 * get_yearMonthDurationType_10() const { return ___yearMonthDurationType_10; }
	inline XmlSchemaSimpleType_t2678868104 ** get_address_of_yearMonthDurationType_10() { return &___yearMonthDurationType_10; }
	inline void set_yearMonthDurationType_10(XmlSchemaSimpleType_t2678868104 * value)
	{
		___yearMonthDurationType_10 = value;
		Il2CppCodeGenWriteBarrier((&___yearMonthDurationType_10), value);
	}

	inline static int32_t get_offset_of_dayTimeDurationType_11() { return static_cast<int32_t>(offsetof(DatatypeImplementation_t3722098011_StaticFields, ___dayTimeDurationType_11)); }
	inline XmlSchemaSimpleType_t2678868104 * get_dayTimeDurationType_11() const { return ___dayTimeDurationType_11; }
	inline XmlSchemaSimpleType_t2678868104 ** get_address_of_dayTimeDurationType_11() { return &___dayTimeDurationType_11; }
	inline void set_dayTimeDurationType_11(XmlSchemaSimpleType_t2678868104 * value)
	{
		___dayTimeDurationType_11 = value;
		Il2CppCodeGenWriteBarrier((&___dayTimeDurationType_11), value);
	}

	inline static int32_t get_offset_of_normalizedStringTypeV1Compat_12() { return static_cast<int32_t>(offsetof(DatatypeImplementation_t3722098011_StaticFields, ___normalizedStringTypeV1Compat_12)); }
	inline XmlSchemaSimpleType_t2678868104 * get_normalizedStringTypeV1Compat_12() const { return ___normalizedStringTypeV1Compat_12; }
	inline XmlSchemaSimpleType_t2678868104 ** get_address_of_normalizedStringTypeV1Compat_12() { return &___normalizedStringTypeV1Compat_12; }
	inline void set_normalizedStringTypeV1Compat_12(XmlSchemaSimpleType_t2678868104 * value)
	{
		___normalizedStringTypeV1Compat_12 = value;
		Il2CppCodeGenWriteBarrier((&___normalizedStringTypeV1Compat_12), value);
	}

	inline static int32_t get_offset_of_tokenTypeV1Compat_13() { return static_cast<int32_t>(offsetof(DatatypeImplementation_t3722098011_StaticFields, ___tokenTypeV1Compat_13)); }
	inline XmlSchemaSimpleType_t2678868104 * get_tokenTypeV1Compat_13() const { return ___tokenTypeV1Compat_13; }
	inline XmlSchemaSimpleType_t2678868104 ** get_address_of_tokenTypeV1Compat_13() { return &___tokenTypeV1Compat_13; }
	inline void set_tokenTypeV1Compat_13(XmlSchemaSimpleType_t2678868104 * value)
	{
		___tokenTypeV1Compat_13 = value;
		Il2CppCodeGenWriteBarrier((&___tokenTypeV1Compat_13), value);
	}

	inline static int32_t get_offset_of_QnAnySimpleType_14() { return static_cast<int32_t>(offsetof(DatatypeImplementation_t3722098011_StaticFields, ___QnAnySimpleType_14)); }
	inline XmlQualifiedName_t2760654312 * get_QnAnySimpleType_14() const { return ___QnAnySimpleType_14; }
	inline XmlQualifiedName_t2760654312 ** get_address_of_QnAnySimpleType_14() { return &___QnAnySimpleType_14; }
	inline void set_QnAnySimpleType_14(XmlQualifiedName_t2760654312 * value)
	{
		___QnAnySimpleType_14 = value;
		Il2CppCodeGenWriteBarrier((&___QnAnySimpleType_14), value);
	}

	inline static int32_t get_offset_of_QnAnyType_15() { return static_cast<int32_t>(offsetof(DatatypeImplementation_t3722098011_StaticFields, ___QnAnyType_15)); }
	inline XmlQualifiedName_t2760654312 * get_QnAnyType_15() const { return ___QnAnyType_15; }
	inline XmlQualifiedName_t2760654312 ** get_address_of_QnAnyType_15() { return &___QnAnyType_15; }
	inline void set_QnAnyType_15(XmlQualifiedName_t2760654312 * value)
	{
		___QnAnyType_15 = value;
		Il2CppCodeGenWriteBarrier((&___QnAnyType_15), value);
	}

	inline static int32_t get_offset_of_stringFacetsChecker_16() { return static_cast<int32_t>(offsetof(DatatypeImplementation_t3722098011_StaticFields, ___stringFacetsChecker_16)); }
	inline FacetsChecker_t3316496195 * get_stringFacetsChecker_16() const { return ___stringFacetsChecker_16; }
	inline FacetsChecker_t3316496195 ** get_address_of_stringFacetsChecker_16() { return &___stringFacetsChecker_16; }
	inline void set_stringFacetsChecker_16(FacetsChecker_t3316496195 * value)
	{
		___stringFacetsChecker_16 = value;
		Il2CppCodeGenWriteBarrier((&___stringFacetsChecker_16), value);
	}

	inline static int32_t get_offset_of_miscFacetsChecker_17() { return static_cast<int32_t>(offsetof(DatatypeImplementation_t3722098011_StaticFields, ___miscFacetsChecker_17)); }
	inline FacetsChecker_t3316496195 * get_miscFacetsChecker_17() const { return ___miscFacetsChecker_17; }
	inline FacetsChecker_t3316496195 ** get_address_of_miscFacetsChecker_17() { return &___miscFacetsChecker_17; }
	inline void set_miscFacetsChecker_17(FacetsChecker_t3316496195 * value)
	{
		___miscFacetsChecker_17 = value;
		Il2CppCodeGenWriteBarrier((&___miscFacetsChecker_17), value);
	}

	inline static int32_t get_offset_of_numeric2FacetsChecker_18() { return static_cast<int32_t>(offsetof(DatatypeImplementation_t3722098011_StaticFields, ___numeric2FacetsChecker_18)); }
	inline FacetsChecker_t3316496195 * get_numeric2FacetsChecker_18() const { return ___numeric2FacetsChecker_18; }
	inline FacetsChecker_t3316496195 ** get_address_of_numeric2FacetsChecker_18() { return &___numeric2FacetsChecker_18; }
	inline void set_numeric2FacetsChecker_18(FacetsChecker_t3316496195 * value)
	{
		___numeric2FacetsChecker_18 = value;
		Il2CppCodeGenWriteBarrier((&___numeric2FacetsChecker_18), value);
	}

	inline static int32_t get_offset_of_binaryFacetsChecker_19() { return static_cast<int32_t>(offsetof(DatatypeImplementation_t3722098011_StaticFields, ___binaryFacetsChecker_19)); }
	inline FacetsChecker_t3316496195 * get_binaryFacetsChecker_19() const { return ___binaryFacetsChecker_19; }
	inline FacetsChecker_t3316496195 ** get_address_of_binaryFacetsChecker_19() { return &___binaryFacetsChecker_19; }
	inline void set_binaryFacetsChecker_19(FacetsChecker_t3316496195 * value)
	{
		___binaryFacetsChecker_19 = value;
		Il2CppCodeGenWriteBarrier((&___binaryFacetsChecker_19), value);
	}

	inline static int32_t get_offset_of_dateTimeFacetsChecker_20() { return static_cast<int32_t>(offsetof(DatatypeImplementation_t3722098011_StaticFields, ___dateTimeFacetsChecker_20)); }
	inline FacetsChecker_t3316496195 * get_dateTimeFacetsChecker_20() const { return ___dateTimeFacetsChecker_20; }
	inline FacetsChecker_t3316496195 ** get_address_of_dateTimeFacetsChecker_20() { return &___dateTimeFacetsChecker_20; }
	inline void set_dateTimeFacetsChecker_20(FacetsChecker_t3316496195 * value)
	{
		___dateTimeFacetsChecker_20 = value;
		Il2CppCodeGenWriteBarrier((&___dateTimeFacetsChecker_20), value);
	}

	inline static int32_t get_offset_of_durationFacetsChecker_21() { return static_cast<int32_t>(offsetof(DatatypeImplementation_t3722098011_StaticFields, ___durationFacetsChecker_21)); }
	inline FacetsChecker_t3316496195 * get_durationFacetsChecker_21() const { return ___durationFacetsChecker_21; }
	inline FacetsChecker_t3316496195 ** get_address_of_durationFacetsChecker_21() { return &___durationFacetsChecker_21; }
	inline void set_durationFacetsChecker_21(FacetsChecker_t3316496195 * value)
	{
		___durationFacetsChecker_21 = value;
		Il2CppCodeGenWriteBarrier((&___durationFacetsChecker_21), value);
	}

	inline static int32_t get_offset_of_listFacetsChecker_22() { return static_cast<int32_t>(offsetof(DatatypeImplementation_t3722098011_StaticFields, ___listFacetsChecker_22)); }
	inline FacetsChecker_t3316496195 * get_listFacetsChecker_22() const { return ___listFacetsChecker_22; }
	inline FacetsChecker_t3316496195 ** get_address_of_listFacetsChecker_22() { return &___listFacetsChecker_22; }
	inline void set_listFacetsChecker_22(FacetsChecker_t3316496195 * value)
	{
		___listFacetsChecker_22 = value;
		Il2CppCodeGenWriteBarrier((&___listFacetsChecker_22), value);
	}

	inline static int32_t get_offset_of_qnameFacetsChecker_23() { return static_cast<int32_t>(offsetof(DatatypeImplementation_t3722098011_StaticFields, ___qnameFacetsChecker_23)); }
	inline FacetsChecker_t3316496195 * get_qnameFacetsChecker_23() const { return ___qnameFacetsChecker_23; }
	inline FacetsChecker_t3316496195 ** get_address_of_qnameFacetsChecker_23() { return &___qnameFacetsChecker_23; }
	inline void set_qnameFacetsChecker_23(FacetsChecker_t3316496195 * value)
	{
		___qnameFacetsChecker_23 = value;
		Il2CppCodeGenWriteBarrier((&___qnameFacetsChecker_23), value);
	}

	inline static int32_t get_offset_of_unionFacetsChecker_24() { return static_cast<int32_t>(offsetof(DatatypeImplementation_t3722098011_StaticFields, ___unionFacetsChecker_24)); }
	inline FacetsChecker_t3316496195 * get_unionFacetsChecker_24() const { return ___unionFacetsChecker_24; }
	inline FacetsChecker_t3316496195 ** get_address_of_unionFacetsChecker_24() { return &___unionFacetsChecker_24; }
	inline void set_unionFacetsChecker_24(FacetsChecker_t3316496195 * value)
	{
		___unionFacetsChecker_24 = value;
		Il2CppCodeGenWriteBarrier((&___unionFacetsChecker_24), value);
	}

	inline static int32_t get_offset_of_c_anySimpleType_25() { return static_cast<int32_t>(offsetof(DatatypeImplementation_t3722098011_StaticFields, ___c_anySimpleType_25)); }
	inline DatatypeImplementation_t3722098011 * get_c_anySimpleType_25() const { return ___c_anySimpleType_25; }
	inline DatatypeImplementation_t3722098011 ** get_address_of_c_anySimpleType_25() { return &___c_anySimpleType_25; }
	inline void set_c_anySimpleType_25(DatatypeImplementation_t3722098011 * value)
	{
		___c_anySimpleType_25 = value;
		Il2CppCodeGenWriteBarrier((&___c_anySimpleType_25), value);
	}

	inline static int32_t get_offset_of_c_anyURI_26() { return static_cast<int32_t>(offsetof(DatatypeImplementation_t3722098011_StaticFields, ___c_anyURI_26)); }
	inline DatatypeImplementation_t3722098011 * get_c_anyURI_26() const { return ___c_anyURI_26; }
	inline DatatypeImplementation_t3722098011 ** get_address_of_c_anyURI_26() { return &___c_anyURI_26; }
	inline void set_c_anyURI_26(DatatypeImplementation_t3722098011 * value)
	{
		___c_anyURI_26 = value;
		Il2CppCodeGenWriteBarrier((&___c_anyURI_26), value);
	}

	inline static int32_t get_offset_of_c_base64Binary_27() { return static_cast<int32_t>(offsetof(DatatypeImplementation_t3722098011_StaticFields, ___c_base64Binary_27)); }
	inline DatatypeImplementation_t3722098011 * get_c_base64Binary_27() const { return ___c_base64Binary_27; }
	inline DatatypeImplementation_t3722098011 ** get_address_of_c_base64Binary_27() { return &___c_base64Binary_27; }
	inline void set_c_base64Binary_27(DatatypeImplementation_t3722098011 * value)
	{
		___c_base64Binary_27 = value;
		Il2CppCodeGenWriteBarrier((&___c_base64Binary_27), value);
	}

	inline static int32_t get_offset_of_c_boolean_28() { return static_cast<int32_t>(offsetof(DatatypeImplementation_t3722098011_StaticFields, ___c_boolean_28)); }
	inline DatatypeImplementation_t3722098011 * get_c_boolean_28() const { return ___c_boolean_28; }
	inline DatatypeImplementation_t3722098011 ** get_address_of_c_boolean_28() { return &___c_boolean_28; }
	inline void set_c_boolean_28(DatatypeImplementation_t3722098011 * value)
	{
		___c_boolean_28 = value;
		Il2CppCodeGenWriteBarrier((&___c_boolean_28), value);
	}

	inline static int32_t get_offset_of_c_byte_29() { return static_cast<int32_t>(offsetof(DatatypeImplementation_t3722098011_StaticFields, ___c_byte_29)); }
	inline DatatypeImplementation_t3722098011 * get_c_byte_29() const { return ___c_byte_29; }
	inline DatatypeImplementation_t3722098011 ** get_address_of_c_byte_29() { return &___c_byte_29; }
	inline void set_c_byte_29(DatatypeImplementation_t3722098011 * value)
	{
		___c_byte_29 = value;
		Il2CppCodeGenWriteBarrier((&___c_byte_29), value);
	}

	inline static int32_t get_offset_of_c_char_30() { return static_cast<int32_t>(offsetof(DatatypeImplementation_t3722098011_StaticFields, ___c_char_30)); }
	inline DatatypeImplementation_t3722098011 * get_c_char_30() const { return ___c_char_30; }
	inline DatatypeImplementation_t3722098011 ** get_address_of_c_char_30() { return &___c_char_30; }
	inline void set_c_char_30(DatatypeImplementation_t3722098011 * value)
	{
		___c_char_30 = value;
		Il2CppCodeGenWriteBarrier((&___c_char_30), value);
	}

	inline static int32_t get_offset_of_c_date_31() { return static_cast<int32_t>(offsetof(DatatypeImplementation_t3722098011_StaticFields, ___c_date_31)); }
	inline DatatypeImplementation_t3722098011 * get_c_date_31() const { return ___c_date_31; }
	inline DatatypeImplementation_t3722098011 ** get_address_of_c_date_31() { return &___c_date_31; }
	inline void set_c_date_31(DatatypeImplementation_t3722098011 * value)
	{
		___c_date_31 = value;
		Il2CppCodeGenWriteBarrier((&___c_date_31), value);
	}

	inline static int32_t get_offset_of_c_dateTime_32() { return static_cast<int32_t>(offsetof(DatatypeImplementation_t3722098011_StaticFields, ___c_dateTime_32)); }
	inline DatatypeImplementation_t3722098011 * get_c_dateTime_32() const { return ___c_dateTime_32; }
	inline DatatypeImplementation_t3722098011 ** get_address_of_c_dateTime_32() { return &___c_dateTime_32; }
	inline void set_c_dateTime_32(DatatypeImplementation_t3722098011 * value)
	{
		___c_dateTime_32 = value;
		Il2CppCodeGenWriteBarrier((&___c_dateTime_32), value);
	}

	inline static int32_t get_offset_of_c_dateTimeNoTz_33() { return static_cast<int32_t>(offsetof(DatatypeImplementation_t3722098011_StaticFields, ___c_dateTimeNoTz_33)); }
	inline DatatypeImplementation_t3722098011 * get_c_dateTimeNoTz_33() const { return ___c_dateTimeNoTz_33; }
	inline DatatypeImplementation_t3722098011 ** get_address_of_c_dateTimeNoTz_33() { return &___c_dateTimeNoTz_33; }
	inline void set_c_dateTimeNoTz_33(DatatypeImplementation_t3722098011 * value)
	{
		___c_dateTimeNoTz_33 = value;
		Il2CppCodeGenWriteBarrier((&___c_dateTimeNoTz_33), value);
	}

	inline static int32_t get_offset_of_c_dateTimeTz_34() { return static_cast<int32_t>(offsetof(DatatypeImplementation_t3722098011_StaticFields, ___c_dateTimeTz_34)); }
	inline DatatypeImplementation_t3722098011 * get_c_dateTimeTz_34() const { return ___c_dateTimeTz_34; }
	inline DatatypeImplementation_t3722098011 ** get_address_of_c_dateTimeTz_34() { return &___c_dateTimeTz_34; }
	inline void set_c_dateTimeTz_34(DatatypeImplementation_t3722098011 * value)
	{
		___c_dateTimeTz_34 = value;
		Il2CppCodeGenWriteBarrier((&___c_dateTimeTz_34), value);
	}

	inline static int32_t get_offset_of_c_day_35() { return static_cast<int32_t>(offsetof(DatatypeImplementation_t3722098011_StaticFields, ___c_day_35)); }
	inline DatatypeImplementation_t3722098011 * get_c_day_35() const { return ___c_day_35; }
	inline DatatypeImplementation_t3722098011 ** get_address_of_c_day_35() { return &___c_day_35; }
	inline void set_c_day_35(DatatypeImplementation_t3722098011 * value)
	{
		___c_day_35 = value;
		Il2CppCodeGenWriteBarrier((&___c_day_35), value);
	}

	inline static int32_t get_offset_of_c_decimal_36() { return static_cast<int32_t>(offsetof(DatatypeImplementation_t3722098011_StaticFields, ___c_decimal_36)); }
	inline DatatypeImplementation_t3722098011 * get_c_decimal_36() const { return ___c_decimal_36; }
	inline DatatypeImplementation_t3722098011 ** get_address_of_c_decimal_36() { return &___c_decimal_36; }
	inline void set_c_decimal_36(DatatypeImplementation_t3722098011 * value)
	{
		___c_decimal_36 = value;
		Il2CppCodeGenWriteBarrier((&___c_decimal_36), value);
	}

	inline static int32_t get_offset_of_c_double_37() { return static_cast<int32_t>(offsetof(DatatypeImplementation_t3722098011_StaticFields, ___c_double_37)); }
	inline DatatypeImplementation_t3722098011 * get_c_double_37() const { return ___c_double_37; }
	inline DatatypeImplementation_t3722098011 ** get_address_of_c_double_37() { return &___c_double_37; }
	inline void set_c_double_37(DatatypeImplementation_t3722098011 * value)
	{
		___c_double_37 = value;
		Il2CppCodeGenWriteBarrier((&___c_double_37), value);
	}

	inline static int32_t get_offset_of_c_doubleXdr_38() { return static_cast<int32_t>(offsetof(DatatypeImplementation_t3722098011_StaticFields, ___c_doubleXdr_38)); }
	inline DatatypeImplementation_t3722098011 * get_c_doubleXdr_38() const { return ___c_doubleXdr_38; }
	inline DatatypeImplementation_t3722098011 ** get_address_of_c_doubleXdr_38() { return &___c_doubleXdr_38; }
	inline void set_c_doubleXdr_38(DatatypeImplementation_t3722098011 * value)
	{
		___c_doubleXdr_38 = value;
		Il2CppCodeGenWriteBarrier((&___c_doubleXdr_38), value);
	}

	inline static int32_t get_offset_of_c_duration_39() { return static_cast<int32_t>(offsetof(DatatypeImplementation_t3722098011_StaticFields, ___c_duration_39)); }
	inline DatatypeImplementation_t3722098011 * get_c_duration_39() const { return ___c_duration_39; }
	inline DatatypeImplementation_t3722098011 ** get_address_of_c_duration_39() { return &___c_duration_39; }
	inline void set_c_duration_39(DatatypeImplementation_t3722098011 * value)
	{
		___c_duration_39 = value;
		Il2CppCodeGenWriteBarrier((&___c_duration_39), value);
	}

	inline static int32_t get_offset_of_c_ENTITY_40() { return static_cast<int32_t>(offsetof(DatatypeImplementation_t3722098011_StaticFields, ___c_ENTITY_40)); }
	inline DatatypeImplementation_t3722098011 * get_c_ENTITY_40() const { return ___c_ENTITY_40; }
	inline DatatypeImplementation_t3722098011 ** get_address_of_c_ENTITY_40() { return &___c_ENTITY_40; }
	inline void set_c_ENTITY_40(DatatypeImplementation_t3722098011 * value)
	{
		___c_ENTITY_40 = value;
		Il2CppCodeGenWriteBarrier((&___c_ENTITY_40), value);
	}

	inline static int32_t get_offset_of_c_ENTITIES_41() { return static_cast<int32_t>(offsetof(DatatypeImplementation_t3722098011_StaticFields, ___c_ENTITIES_41)); }
	inline DatatypeImplementation_t3722098011 * get_c_ENTITIES_41() const { return ___c_ENTITIES_41; }
	inline DatatypeImplementation_t3722098011 ** get_address_of_c_ENTITIES_41() { return &___c_ENTITIES_41; }
	inline void set_c_ENTITIES_41(DatatypeImplementation_t3722098011 * value)
	{
		___c_ENTITIES_41 = value;
		Il2CppCodeGenWriteBarrier((&___c_ENTITIES_41), value);
	}

	inline static int32_t get_offset_of_c_ENUMERATION_42() { return static_cast<int32_t>(offsetof(DatatypeImplementation_t3722098011_StaticFields, ___c_ENUMERATION_42)); }
	inline DatatypeImplementation_t3722098011 * get_c_ENUMERATION_42() const { return ___c_ENUMERATION_42; }
	inline DatatypeImplementation_t3722098011 ** get_address_of_c_ENUMERATION_42() { return &___c_ENUMERATION_42; }
	inline void set_c_ENUMERATION_42(DatatypeImplementation_t3722098011 * value)
	{
		___c_ENUMERATION_42 = value;
		Il2CppCodeGenWriteBarrier((&___c_ENUMERATION_42), value);
	}

	inline static int32_t get_offset_of_c_fixed_43() { return static_cast<int32_t>(offsetof(DatatypeImplementation_t3722098011_StaticFields, ___c_fixed_43)); }
	inline DatatypeImplementation_t3722098011 * get_c_fixed_43() const { return ___c_fixed_43; }
	inline DatatypeImplementation_t3722098011 ** get_address_of_c_fixed_43() { return &___c_fixed_43; }
	inline void set_c_fixed_43(DatatypeImplementation_t3722098011 * value)
	{
		___c_fixed_43 = value;
		Il2CppCodeGenWriteBarrier((&___c_fixed_43), value);
	}

	inline static int32_t get_offset_of_c_float_44() { return static_cast<int32_t>(offsetof(DatatypeImplementation_t3722098011_StaticFields, ___c_float_44)); }
	inline DatatypeImplementation_t3722098011 * get_c_float_44() const { return ___c_float_44; }
	inline DatatypeImplementation_t3722098011 ** get_address_of_c_float_44() { return &___c_float_44; }
	inline void set_c_float_44(DatatypeImplementation_t3722098011 * value)
	{
		___c_float_44 = value;
		Il2CppCodeGenWriteBarrier((&___c_float_44), value);
	}

	inline static int32_t get_offset_of_c_floatXdr_45() { return static_cast<int32_t>(offsetof(DatatypeImplementation_t3722098011_StaticFields, ___c_floatXdr_45)); }
	inline DatatypeImplementation_t3722098011 * get_c_floatXdr_45() const { return ___c_floatXdr_45; }
	inline DatatypeImplementation_t3722098011 ** get_address_of_c_floatXdr_45() { return &___c_floatXdr_45; }
	inline void set_c_floatXdr_45(DatatypeImplementation_t3722098011 * value)
	{
		___c_floatXdr_45 = value;
		Il2CppCodeGenWriteBarrier((&___c_floatXdr_45), value);
	}

	inline static int32_t get_offset_of_c_hexBinary_46() { return static_cast<int32_t>(offsetof(DatatypeImplementation_t3722098011_StaticFields, ___c_hexBinary_46)); }
	inline DatatypeImplementation_t3722098011 * get_c_hexBinary_46() const { return ___c_hexBinary_46; }
	inline DatatypeImplementation_t3722098011 ** get_address_of_c_hexBinary_46() { return &___c_hexBinary_46; }
	inline void set_c_hexBinary_46(DatatypeImplementation_t3722098011 * value)
	{
		___c_hexBinary_46 = value;
		Il2CppCodeGenWriteBarrier((&___c_hexBinary_46), value);
	}

	inline static int32_t get_offset_of_c_ID_47() { return static_cast<int32_t>(offsetof(DatatypeImplementation_t3722098011_StaticFields, ___c_ID_47)); }
	inline DatatypeImplementation_t3722098011 * get_c_ID_47() const { return ___c_ID_47; }
	inline DatatypeImplementation_t3722098011 ** get_address_of_c_ID_47() { return &___c_ID_47; }
	inline void set_c_ID_47(DatatypeImplementation_t3722098011 * value)
	{
		___c_ID_47 = value;
		Il2CppCodeGenWriteBarrier((&___c_ID_47), value);
	}

	inline static int32_t get_offset_of_c_IDREF_48() { return static_cast<int32_t>(offsetof(DatatypeImplementation_t3722098011_StaticFields, ___c_IDREF_48)); }
	inline DatatypeImplementation_t3722098011 * get_c_IDREF_48() const { return ___c_IDREF_48; }
	inline DatatypeImplementation_t3722098011 ** get_address_of_c_IDREF_48() { return &___c_IDREF_48; }
	inline void set_c_IDREF_48(DatatypeImplementation_t3722098011 * value)
	{
		___c_IDREF_48 = value;
		Il2CppCodeGenWriteBarrier((&___c_IDREF_48), value);
	}

	inline static int32_t get_offset_of_c_IDREFS_49() { return static_cast<int32_t>(offsetof(DatatypeImplementation_t3722098011_StaticFields, ___c_IDREFS_49)); }
	inline DatatypeImplementation_t3722098011 * get_c_IDREFS_49() const { return ___c_IDREFS_49; }
	inline DatatypeImplementation_t3722098011 ** get_address_of_c_IDREFS_49() { return &___c_IDREFS_49; }
	inline void set_c_IDREFS_49(DatatypeImplementation_t3722098011 * value)
	{
		___c_IDREFS_49 = value;
		Il2CppCodeGenWriteBarrier((&___c_IDREFS_49), value);
	}

	inline static int32_t get_offset_of_c_int_50() { return static_cast<int32_t>(offsetof(DatatypeImplementation_t3722098011_StaticFields, ___c_int_50)); }
	inline DatatypeImplementation_t3722098011 * get_c_int_50() const { return ___c_int_50; }
	inline DatatypeImplementation_t3722098011 ** get_address_of_c_int_50() { return &___c_int_50; }
	inline void set_c_int_50(DatatypeImplementation_t3722098011 * value)
	{
		___c_int_50 = value;
		Il2CppCodeGenWriteBarrier((&___c_int_50), value);
	}

	inline static int32_t get_offset_of_c_integer_51() { return static_cast<int32_t>(offsetof(DatatypeImplementation_t3722098011_StaticFields, ___c_integer_51)); }
	inline DatatypeImplementation_t3722098011 * get_c_integer_51() const { return ___c_integer_51; }
	inline DatatypeImplementation_t3722098011 ** get_address_of_c_integer_51() { return &___c_integer_51; }
	inline void set_c_integer_51(DatatypeImplementation_t3722098011 * value)
	{
		___c_integer_51 = value;
		Il2CppCodeGenWriteBarrier((&___c_integer_51), value);
	}

	inline static int32_t get_offset_of_c_language_52() { return static_cast<int32_t>(offsetof(DatatypeImplementation_t3722098011_StaticFields, ___c_language_52)); }
	inline DatatypeImplementation_t3722098011 * get_c_language_52() const { return ___c_language_52; }
	inline DatatypeImplementation_t3722098011 ** get_address_of_c_language_52() { return &___c_language_52; }
	inline void set_c_language_52(DatatypeImplementation_t3722098011 * value)
	{
		___c_language_52 = value;
		Il2CppCodeGenWriteBarrier((&___c_language_52), value);
	}

	inline static int32_t get_offset_of_c_long_53() { return static_cast<int32_t>(offsetof(DatatypeImplementation_t3722098011_StaticFields, ___c_long_53)); }
	inline DatatypeImplementation_t3722098011 * get_c_long_53() const { return ___c_long_53; }
	inline DatatypeImplementation_t3722098011 ** get_address_of_c_long_53() { return &___c_long_53; }
	inline void set_c_long_53(DatatypeImplementation_t3722098011 * value)
	{
		___c_long_53 = value;
		Il2CppCodeGenWriteBarrier((&___c_long_53), value);
	}

	inline static int32_t get_offset_of_c_month_54() { return static_cast<int32_t>(offsetof(DatatypeImplementation_t3722098011_StaticFields, ___c_month_54)); }
	inline DatatypeImplementation_t3722098011 * get_c_month_54() const { return ___c_month_54; }
	inline DatatypeImplementation_t3722098011 ** get_address_of_c_month_54() { return &___c_month_54; }
	inline void set_c_month_54(DatatypeImplementation_t3722098011 * value)
	{
		___c_month_54 = value;
		Il2CppCodeGenWriteBarrier((&___c_month_54), value);
	}

	inline static int32_t get_offset_of_c_monthDay_55() { return static_cast<int32_t>(offsetof(DatatypeImplementation_t3722098011_StaticFields, ___c_monthDay_55)); }
	inline DatatypeImplementation_t3722098011 * get_c_monthDay_55() const { return ___c_monthDay_55; }
	inline DatatypeImplementation_t3722098011 ** get_address_of_c_monthDay_55() { return &___c_monthDay_55; }
	inline void set_c_monthDay_55(DatatypeImplementation_t3722098011 * value)
	{
		___c_monthDay_55 = value;
		Il2CppCodeGenWriteBarrier((&___c_monthDay_55), value);
	}

	inline static int32_t get_offset_of_c_Name_56() { return static_cast<int32_t>(offsetof(DatatypeImplementation_t3722098011_StaticFields, ___c_Name_56)); }
	inline DatatypeImplementation_t3722098011 * get_c_Name_56() const { return ___c_Name_56; }
	inline DatatypeImplementation_t3722098011 ** get_address_of_c_Name_56() { return &___c_Name_56; }
	inline void set_c_Name_56(DatatypeImplementation_t3722098011 * value)
	{
		___c_Name_56 = value;
		Il2CppCodeGenWriteBarrier((&___c_Name_56), value);
	}

	inline static int32_t get_offset_of_c_NCName_57() { return static_cast<int32_t>(offsetof(DatatypeImplementation_t3722098011_StaticFields, ___c_NCName_57)); }
	inline DatatypeImplementation_t3722098011 * get_c_NCName_57() const { return ___c_NCName_57; }
	inline DatatypeImplementation_t3722098011 ** get_address_of_c_NCName_57() { return &___c_NCName_57; }
	inline void set_c_NCName_57(DatatypeImplementation_t3722098011 * value)
	{
		___c_NCName_57 = value;
		Il2CppCodeGenWriteBarrier((&___c_NCName_57), value);
	}

	inline static int32_t get_offset_of_c_negativeInteger_58() { return static_cast<int32_t>(offsetof(DatatypeImplementation_t3722098011_StaticFields, ___c_negativeInteger_58)); }
	inline DatatypeImplementation_t3722098011 * get_c_negativeInteger_58() const { return ___c_negativeInteger_58; }
	inline DatatypeImplementation_t3722098011 ** get_address_of_c_negativeInteger_58() { return &___c_negativeInteger_58; }
	inline void set_c_negativeInteger_58(DatatypeImplementation_t3722098011 * value)
	{
		___c_negativeInteger_58 = value;
		Il2CppCodeGenWriteBarrier((&___c_negativeInteger_58), value);
	}

	inline static int32_t get_offset_of_c_NMTOKEN_59() { return static_cast<int32_t>(offsetof(DatatypeImplementation_t3722098011_StaticFields, ___c_NMTOKEN_59)); }
	inline DatatypeImplementation_t3722098011 * get_c_NMTOKEN_59() const { return ___c_NMTOKEN_59; }
	inline DatatypeImplementation_t3722098011 ** get_address_of_c_NMTOKEN_59() { return &___c_NMTOKEN_59; }
	inline void set_c_NMTOKEN_59(DatatypeImplementation_t3722098011 * value)
	{
		___c_NMTOKEN_59 = value;
		Il2CppCodeGenWriteBarrier((&___c_NMTOKEN_59), value);
	}

	inline static int32_t get_offset_of_c_NMTOKENS_60() { return static_cast<int32_t>(offsetof(DatatypeImplementation_t3722098011_StaticFields, ___c_NMTOKENS_60)); }
	inline DatatypeImplementation_t3722098011 * get_c_NMTOKENS_60() const { return ___c_NMTOKENS_60; }
	inline DatatypeImplementation_t3722098011 ** get_address_of_c_NMTOKENS_60() { return &___c_NMTOKENS_60; }
	inline void set_c_NMTOKENS_60(DatatypeImplementation_t3722098011 * value)
	{
		___c_NMTOKENS_60 = value;
		Il2CppCodeGenWriteBarrier((&___c_NMTOKENS_60), value);
	}

	inline static int32_t get_offset_of_c_nonNegativeInteger_61() { return static_cast<int32_t>(offsetof(DatatypeImplementation_t3722098011_StaticFields, ___c_nonNegativeInteger_61)); }
	inline DatatypeImplementation_t3722098011 * get_c_nonNegativeInteger_61() const { return ___c_nonNegativeInteger_61; }
	inline DatatypeImplementation_t3722098011 ** get_address_of_c_nonNegativeInteger_61() { return &___c_nonNegativeInteger_61; }
	inline void set_c_nonNegativeInteger_61(DatatypeImplementation_t3722098011 * value)
	{
		___c_nonNegativeInteger_61 = value;
		Il2CppCodeGenWriteBarrier((&___c_nonNegativeInteger_61), value);
	}

	inline static int32_t get_offset_of_c_nonPositiveInteger_62() { return static_cast<int32_t>(offsetof(DatatypeImplementation_t3722098011_StaticFields, ___c_nonPositiveInteger_62)); }
	inline DatatypeImplementation_t3722098011 * get_c_nonPositiveInteger_62() const { return ___c_nonPositiveInteger_62; }
	inline DatatypeImplementation_t3722098011 ** get_address_of_c_nonPositiveInteger_62() { return &___c_nonPositiveInteger_62; }
	inline void set_c_nonPositiveInteger_62(DatatypeImplementation_t3722098011 * value)
	{
		___c_nonPositiveInteger_62 = value;
		Il2CppCodeGenWriteBarrier((&___c_nonPositiveInteger_62), value);
	}

	inline static int32_t get_offset_of_c_normalizedString_63() { return static_cast<int32_t>(offsetof(DatatypeImplementation_t3722098011_StaticFields, ___c_normalizedString_63)); }
	inline DatatypeImplementation_t3722098011 * get_c_normalizedString_63() const { return ___c_normalizedString_63; }
	inline DatatypeImplementation_t3722098011 ** get_address_of_c_normalizedString_63() { return &___c_normalizedString_63; }
	inline void set_c_normalizedString_63(DatatypeImplementation_t3722098011 * value)
	{
		___c_normalizedString_63 = value;
		Il2CppCodeGenWriteBarrier((&___c_normalizedString_63), value);
	}

	inline static int32_t get_offset_of_c_NOTATION_64() { return static_cast<int32_t>(offsetof(DatatypeImplementation_t3722098011_StaticFields, ___c_NOTATION_64)); }
	inline DatatypeImplementation_t3722098011 * get_c_NOTATION_64() const { return ___c_NOTATION_64; }
	inline DatatypeImplementation_t3722098011 ** get_address_of_c_NOTATION_64() { return &___c_NOTATION_64; }
	inline void set_c_NOTATION_64(DatatypeImplementation_t3722098011 * value)
	{
		___c_NOTATION_64 = value;
		Il2CppCodeGenWriteBarrier((&___c_NOTATION_64), value);
	}

	inline static int32_t get_offset_of_c_positiveInteger_65() { return static_cast<int32_t>(offsetof(DatatypeImplementation_t3722098011_StaticFields, ___c_positiveInteger_65)); }
	inline DatatypeImplementation_t3722098011 * get_c_positiveInteger_65() const { return ___c_positiveInteger_65; }
	inline DatatypeImplementation_t3722098011 ** get_address_of_c_positiveInteger_65() { return &___c_positiveInteger_65; }
	inline void set_c_positiveInteger_65(DatatypeImplementation_t3722098011 * value)
	{
		___c_positiveInteger_65 = value;
		Il2CppCodeGenWriteBarrier((&___c_positiveInteger_65), value);
	}

	inline static int32_t get_offset_of_c_QName_66() { return static_cast<int32_t>(offsetof(DatatypeImplementation_t3722098011_StaticFields, ___c_QName_66)); }
	inline DatatypeImplementation_t3722098011 * get_c_QName_66() const { return ___c_QName_66; }
	inline DatatypeImplementation_t3722098011 ** get_address_of_c_QName_66() { return &___c_QName_66; }
	inline void set_c_QName_66(DatatypeImplementation_t3722098011 * value)
	{
		___c_QName_66 = value;
		Il2CppCodeGenWriteBarrier((&___c_QName_66), value);
	}

	inline static int32_t get_offset_of_c_QNameXdr_67() { return static_cast<int32_t>(offsetof(DatatypeImplementation_t3722098011_StaticFields, ___c_QNameXdr_67)); }
	inline DatatypeImplementation_t3722098011 * get_c_QNameXdr_67() const { return ___c_QNameXdr_67; }
	inline DatatypeImplementation_t3722098011 ** get_address_of_c_QNameXdr_67() { return &___c_QNameXdr_67; }
	inline void set_c_QNameXdr_67(DatatypeImplementation_t3722098011 * value)
	{
		___c_QNameXdr_67 = value;
		Il2CppCodeGenWriteBarrier((&___c_QNameXdr_67), value);
	}

	inline static int32_t get_offset_of_c_short_68() { return static_cast<int32_t>(offsetof(DatatypeImplementation_t3722098011_StaticFields, ___c_short_68)); }
	inline DatatypeImplementation_t3722098011 * get_c_short_68() const { return ___c_short_68; }
	inline DatatypeImplementation_t3722098011 ** get_address_of_c_short_68() { return &___c_short_68; }
	inline void set_c_short_68(DatatypeImplementation_t3722098011 * value)
	{
		___c_short_68 = value;
		Il2CppCodeGenWriteBarrier((&___c_short_68), value);
	}

	inline static int32_t get_offset_of_c_string_69() { return static_cast<int32_t>(offsetof(DatatypeImplementation_t3722098011_StaticFields, ___c_string_69)); }
	inline DatatypeImplementation_t3722098011 * get_c_string_69() const { return ___c_string_69; }
	inline DatatypeImplementation_t3722098011 ** get_address_of_c_string_69() { return &___c_string_69; }
	inline void set_c_string_69(DatatypeImplementation_t3722098011 * value)
	{
		___c_string_69 = value;
		Il2CppCodeGenWriteBarrier((&___c_string_69), value);
	}

	inline static int32_t get_offset_of_c_time_70() { return static_cast<int32_t>(offsetof(DatatypeImplementation_t3722098011_StaticFields, ___c_time_70)); }
	inline DatatypeImplementation_t3722098011 * get_c_time_70() const { return ___c_time_70; }
	inline DatatypeImplementation_t3722098011 ** get_address_of_c_time_70() { return &___c_time_70; }
	inline void set_c_time_70(DatatypeImplementation_t3722098011 * value)
	{
		___c_time_70 = value;
		Il2CppCodeGenWriteBarrier((&___c_time_70), value);
	}

	inline static int32_t get_offset_of_c_timeNoTz_71() { return static_cast<int32_t>(offsetof(DatatypeImplementation_t3722098011_StaticFields, ___c_timeNoTz_71)); }
	inline DatatypeImplementation_t3722098011 * get_c_timeNoTz_71() const { return ___c_timeNoTz_71; }
	inline DatatypeImplementation_t3722098011 ** get_address_of_c_timeNoTz_71() { return &___c_timeNoTz_71; }
	inline void set_c_timeNoTz_71(DatatypeImplementation_t3722098011 * value)
	{
		___c_timeNoTz_71 = value;
		Il2CppCodeGenWriteBarrier((&___c_timeNoTz_71), value);
	}

	inline static int32_t get_offset_of_c_timeTz_72() { return static_cast<int32_t>(offsetof(DatatypeImplementation_t3722098011_StaticFields, ___c_timeTz_72)); }
	inline DatatypeImplementation_t3722098011 * get_c_timeTz_72() const { return ___c_timeTz_72; }
	inline DatatypeImplementation_t3722098011 ** get_address_of_c_timeTz_72() { return &___c_timeTz_72; }
	inline void set_c_timeTz_72(DatatypeImplementation_t3722098011 * value)
	{
		___c_timeTz_72 = value;
		Il2CppCodeGenWriteBarrier((&___c_timeTz_72), value);
	}

	inline static int32_t get_offset_of_c_token_73() { return static_cast<int32_t>(offsetof(DatatypeImplementation_t3722098011_StaticFields, ___c_token_73)); }
	inline DatatypeImplementation_t3722098011 * get_c_token_73() const { return ___c_token_73; }
	inline DatatypeImplementation_t3722098011 ** get_address_of_c_token_73() { return &___c_token_73; }
	inline void set_c_token_73(DatatypeImplementation_t3722098011 * value)
	{
		___c_token_73 = value;
		Il2CppCodeGenWriteBarrier((&___c_token_73), value);
	}

	inline static int32_t get_offset_of_c_unsignedByte_74() { return static_cast<int32_t>(offsetof(DatatypeImplementation_t3722098011_StaticFields, ___c_unsignedByte_74)); }
	inline DatatypeImplementation_t3722098011 * get_c_unsignedByte_74() const { return ___c_unsignedByte_74; }
	inline DatatypeImplementation_t3722098011 ** get_address_of_c_unsignedByte_74() { return &___c_unsignedByte_74; }
	inline void set_c_unsignedByte_74(DatatypeImplementation_t3722098011 * value)
	{
		___c_unsignedByte_74 = value;
		Il2CppCodeGenWriteBarrier((&___c_unsignedByte_74), value);
	}

	inline static int32_t get_offset_of_c_unsignedInt_75() { return static_cast<int32_t>(offsetof(DatatypeImplementation_t3722098011_StaticFields, ___c_unsignedInt_75)); }
	inline DatatypeImplementation_t3722098011 * get_c_unsignedInt_75() const { return ___c_unsignedInt_75; }
	inline DatatypeImplementation_t3722098011 ** get_address_of_c_unsignedInt_75() { return &___c_unsignedInt_75; }
	inline void set_c_unsignedInt_75(DatatypeImplementation_t3722098011 * value)
	{
		___c_unsignedInt_75 = value;
		Il2CppCodeGenWriteBarrier((&___c_unsignedInt_75), value);
	}

	inline static int32_t get_offset_of_c_unsignedLong_76() { return static_cast<int32_t>(offsetof(DatatypeImplementation_t3722098011_StaticFields, ___c_unsignedLong_76)); }
	inline DatatypeImplementation_t3722098011 * get_c_unsignedLong_76() const { return ___c_unsignedLong_76; }
	inline DatatypeImplementation_t3722098011 ** get_address_of_c_unsignedLong_76() { return &___c_unsignedLong_76; }
	inline void set_c_unsignedLong_76(DatatypeImplementation_t3722098011 * value)
	{
		___c_unsignedLong_76 = value;
		Il2CppCodeGenWriteBarrier((&___c_unsignedLong_76), value);
	}

	inline static int32_t get_offset_of_c_unsignedShort_77() { return static_cast<int32_t>(offsetof(DatatypeImplementation_t3722098011_StaticFields, ___c_unsignedShort_77)); }
	inline DatatypeImplementation_t3722098011 * get_c_unsignedShort_77() const { return ___c_unsignedShort_77; }
	inline DatatypeImplementation_t3722098011 ** get_address_of_c_unsignedShort_77() { return &___c_unsignedShort_77; }
	inline void set_c_unsignedShort_77(DatatypeImplementation_t3722098011 * value)
	{
		___c_unsignedShort_77 = value;
		Il2CppCodeGenWriteBarrier((&___c_unsignedShort_77), value);
	}

	inline static int32_t get_offset_of_c_uuid_78() { return static_cast<int32_t>(offsetof(DatatypeImplementation_t3722098011_StaticFields, ___c_uuid_78)); }
	inline DatatypeImplementation_t3722098011 * get_c_uuid_78() const { return ___c_uuid_78; }
	inline DatatypeImplementation_t3722098011 ** get_address_of_c_uuid_78() { return &___c_uuid_78; }
	inline void set_c_uuid_78(DatatypeImplementation_t3722098011 * value)
	{
		___c_uuid_78 = value;
		Il2CppCodeGenWriteBarrier((&___c_uuid_78), value);
	}

	inline static int32_t get_offset_of_c_year_79() { return static_cast<int32_t>(offsetof(DatatypeImplementation_t3722098011_StaticFields, ___c_year_79)); }
	inline DatatypeImplementation_t3722098011 * get_c_year_79() const { return ___c_year_79; }
	inline DatatypeImplementation_t3722098011 ** get_address_of_c_year_79() { return &___c_year_79; }
	inline void set_c_year_79(DatatypeImplementation_t3722098011 * value)
	{
		___c_year_79 = value;
		Il2CppCodeGenWriteBarrier((&___c_year_79), value);
	}

	inline static int32_t get_offset_of_c_yearMonth_80() { return static_cast<int32_t>(offsetof(DatatypeImplementation_t3722098011_StaticFields, ___c_yearMonth_80)); }
	inline DatatypeImplementation_t3722098011 * get_c_yearMonth_80() const { return ___c_yearMonth_80; }
	inline DatatypeImplementation_t3722098011 ** get_address_of_c_yearMonth_80() { return &___c_yearMonth_80; }
	inline void set_c_yearMonth_80(DatatypeImplementation_t3722098011 * value)
	{
		___c_yearMonth_80 = value;
		Il2CppCodeGenWriteBarrier((&___c_yearMonth_80), value);
	}

	inline static int32_t get_offset_of_c_normalizedStringV1Compat_81() { return static_cast<int32_t>(offsetof(DatatypeImplementation_t3722098011_StaticFields, ___c_normalizedStringV1Compat_81)); }
	inline DatatypeImplementation_t3722098011 * get_c_normalizedStringV1Compat_81() const { return ___c_normalizedStringV1Compat_81; }
	inline DatatypeImplementation_t3722098011 ** get_address_of_c_normalizedStringV1Compat_81() { return &___c_normalizedStringV1Compat_81; }
	inline void set_c_normalizedStringV1Compat_81(DatatypeImplementation_t3722098011 * value)
	{
		___c_normalizedStringV1Compat_81 = value;
		Il2CppCodeGenWriteBarrier((&___c_normalizedStringV1Compat_81), value);
	}

	inline static int32_t get_offset_of_c_tokenV1Compat_82() { return static_cast<int32_t>(offsetof(DatatypeImplementation_t3722098011_StaticFields, ___c_tokenV1Compat_82)); }
	inline DatatypeImplementation_t3722098011 * get_c_tokenV1Compat_82() const { return ___c_tokenV1Compat_82; }
	inline DatatypeImplementation_t3722098011 ** get_address_of_c_tokenV1Compat_82() { return &___c_tokenV1Compat_82; }
	inline void set_c_tokenV1Compat_82(DatatypeImplementation_t3722098011 * value)
	{
		___c_tokenV1Compat_82 = value;
		Il2CppCodeGenWriteBarrier((&___c_tokenV1Compat_82), value);
	}

	inline static int32_t get_offset_of_c_anyAtomicType_83() { return static_cast<int32_t>(offsetof(DatatypeImplementation_t3722098011_StaticFields, ___c_anyAtomicType_83)); }
	inline DatatypeImplementation_t3722098011 * get_c_anyAtomicType_83() const { return ___c_anyAtomicType_83; }
	inline DatatypeImplementation_t3722098011 ** get_address_of_c_anyAtomicType_83() { return &___c_anyAtomicType_83; }
	inline void set_c_anyAtomicType_83(DatatypeImplementation_t3722098011 * value)
	{
		___c_anyAtomicType_83 = value;
		Il2CppCodeGenWriteBarrier((&___c_anyAtomicType_83), value);
	}

	inline static int32_t get_offset_of_c_dayTimeDuration_84() { return static_cast<int32_t>(offsetof(DatatypeImplementation_t3722098011_StaticFields, ___c_dayTimeDuration_84)); }
	inline DatatypeImplementation_t3722098011 * get_c_dayTimeDuration_84() const { return ___c_dayTimeDuration_84; }
	inline DatatypeImplementation_t3722098011 ** get_address_of_c_dayTimeDuration_84() { return &___c_dayTimeDuration_84; }
	inline void set_c_dayTimeDuration_84(DatatypeImplementation_t3722098011 * value)
	{
		___c_dayTimeDuration_84 = value;
		Il2CppCodeGenWriteBarrier((&___c_dayTimeDuration_84), value);
	}

	inline static int32_t get_offset_of_c_untypedAtomicType_85() { return static_cast<int32_t>(offsetof(DatatypeImplementation_t3722098011_StaticFields, ___c_untypedAtomicType_85)); }
	inline DatatypeImplementation_t3722098011 * get_c_untypedAtomicType_85() const { return ___c_untypedAtomicType_85; }
	inline DatatypeImplementation_t3722098011 ** get_address_of_c_untypedAtomicType_85() { return &___c_untypedAtomicType_85; }
	inline void set_c_untypedAtomicType_85(DatatypeImplementation_t3722098011 * value)
	{
		___c_untypedAtomicType_85 = value;
		Il2CppCodeGenWriteBarrier((&___c_untypedAtomicType_85), value);
	}

	inline static int32_t get_offset_of_c_yearMonthDuration_86() { return static_cast<int32_t>(offsetof(DatatypeImplementation_t3722098011_StaticFields, ___c_yearMonthDuration_86)); }
	inline DatatypeImplementation_t3722098011 * get_c_yearMonthDuration_86() const { return ___c_yearMonthDuration_86; }
	inline DatatypeImplementation_t3722098011 ** get_address_of_c_yearMonthDuration_86() { return &___c_yearMonthDuration_86; }
	inline void set_c_yearMonthDuration_86(DatatypeImplementation_t3722098011 * value)
	{
		___c_yearMonthDuration_86 = value;
		Il2CppCodeGenWriteBarrier((&___c_yearMonthDuration_86), value);
	}

	inline static int32_t get_offset_of_c_tokenizedTypes_87() { return static_cast<int32_t>(offsetof(DatatypeImplementation_t3722098011_StaticFields, ___c_tokenizedTypes_87)); }
	inline DatatypeImplementationU5BU5D_t1069202138* get_c_tokenizedTypes_87() const { return ___c_tokenizedTypes_87; }
	inline DatatypeImplementationU5BU5D_t1069202138** get_address_of_c_tokenizedTypes_87() { return &___c_tokenizedTypes_87; }
	inline void set_c_tokenizedTypes_87(DatatypeImplementationU5BU5D_t1069202138* value)
	{
		___c_tokenizedTypes_87 = value;
		Il2CppCodeGenWriteBarrier((&___c_tokenizedTypes_87), value);
	}

	inline static int32_t get_offset_of_c_tokenizedTypesXsd_88() { return static_cast<int32_t>(offsetof(DatatypeImplementation_t3722098011_StaticFields, ___c_tokenizedTypesXsd_88)); }
	inline DatatypeImplementationU5BU5D_t1069202138* get_c_tokenizedTypesXsd_88() const { return ___c_tokenizedTypesXsd_88; }
	inline DatatypeImplementationU5BU5D_t1069202138** get_address_of_c_tokenizedTypesXsd_88() { return &___c_tokenizedTypesXsd_88; }
	inline void set_c_tokenizedTypesXsd_88(DatatypeImplementationU5BU5D_t1069202138* value)
	{
		___c_tokenizedTypesXsd_88 = value;
		Il2CppCodeGenWriteBarrier((&___c_tokenizedTypesXsd_88), value);
	}

	inline static int32_t get_offset_of_c_XdrTypes_89() { return static_cast<int32_t>(offsetof(DatatypeImplementation_t3722098011_StaticFields, ___c_XdrTypes_89)); }
	inline SchemaDatatypeMapU5BU5D_t4071411298* get_c_XdrTypes_89() const { return ___c_XdrTypes_89; }
	inline SchemaDatatypeMapU5BU5D_t4071411298** get_address_of_c_XdrTypes_89() { return &___c_XdrTypes_89; }
	inline void set_c_XdrTypes_89(SchemaDatatypeMapU5BU5D_t4071411298* value)
	{
		___c_XdrTypes_89 = value;
		Il2CppCodeGenWriteBarrier((&___c_XdrTypes_89), value);
	}

	inline static int32_t get_offset_of_c_XsdTypes_90() { return static_cast<int32_t>(offsetof(DatatypeImplementation_t3722098011_StaticFields, ___c_XsdTypes_90)); }
	inline SchemaDatatypeMapU5BU5D_t4071411298* get_c_XsdTypes_90() const { return ___c_XsdTypes_90; }
	inline SchemaDatatypeMapU5BU5D_t4071411298** get_address_of_c_XsdTypes_90() { return &___c_XsdTypes_90; }
	inline void set_c_XsdTypes_90(SchemaDatatypeMapU5BU5D_t4071411298* value)
	{
		___c_XsdTypes_90 = value;
		Il2CppCodeGenWriteBarrier((&___c_XsdTypes_90), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATATYPEIMPLEMENTATION_T3722098011_H
#ifndef FACETSCOMPILER_T1584362354_H
#define FACETSCOMPILER_T1584362354_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Schema.FacetsChecker/FacetsCompiler
struct  FacetsCompiler_t1584362354 
{
public:
	// System.Xml.Schema.DatatypeImplementation System.Xml.Schema.FacetsChecker/FacetsCompiler::datatype
	DatatypeImplementation_t3722098011 * ___datatype_0;
	// System.Xml.Schema.RestrictionFacets System.Xml.Schema.FacetsChecker/FacetsCompiler::derivedRestriction
	RestrictionFacets_t1638599442 * ___derivedRestriction_1;
	// System.Xml.Schema.RestrictionFlags System.Xml.Schema.FacetsChecker/FacetsCompiler::baseFlags
	int32_t ___baseFlags_2;
	// System.Xml.Schema.RestrictionFlags System.Xml.Schema.FacetsChecker/FacetsCompiler::baseFixedFlags
	int32_t ___baseFixedFlags_3;
	// System.Xml.Schema.RestrictionFlags System.Xml.Schema.FacetsChecker/FacetsCompiler::validRestrictionFlags
	int32_t ___validRestrictionFlags_4;
	// System.Xml.Schema.XmlSchemaDatatype System.Xml.Schema.FacetsChecker/FacetsCompiler::nonNegativeInt
	XmlSchemaDatatype_t322714710 * ___nonNegativeInt_5;
	// System.Xml.Schema.XmlSchemaDatatype System.Xml.Schema.FacetsChecker/FacetsCompiler::builtInType
	XmlSchemaDatatype_t322714710 * ___builtInType_6;
	// System.Xml.Schema.XmlTypeCode System.Xml.Schema.FacetsChecker/FacetsCompiler::builtInEnum
	int32_t ___builtInEnum_7;
	// System.Boolean System.Xml.Schema.FacetsChecker/FacetsCompiler::firstPattern
	bool ___firstPattern_8;
	// System.Text.StringBuilder System.Xml.Schema.FacetsChecker/FacetsCompiler::regStr
	StringBuilder_t * ___regStr_9;
	// System.Xml.Schema.XmlSchemaPatternFacet System.Xml.Schema.FacetsChecker/FacetsCompiler::pattern_facet
	XmlSchemaPatternFacet_t3316004401 * ___pattern_facet_10;

public:
	inline static int32_t get_offset_of_datatype_0() { return static_cast<int32_t>(offsetof(FacetsCompiler_t1584362354, ___datatype_0)); }
	inline DatatypeImplementation_t3722098011 * get_datatype_0() const { return ___datatype_0; }
	inline DatatypeImplementation_t3722098011 ** get_address_of_datatype_0() { return &___datatype_0; }
	inline void set_datatype_0(DatatypeImplementation_t3722098011 * value)
	{
		___datatype_0 = value;
		Il2CppCodeGenWriteBarrier((&___datatype_0), value);
	}

	inline static int32_t get_offset_of_derivedRestriction_1() { return static_cast<int32_t>(offsetof(FacetsCompiler_t1584362354, ___derivedRestriction_1)); }
	inline RestrictionFacets_t1638599442 * get_derivedRestriction_1() const { return ___derivedRestriction_1; }
	inline RestrictionFacets_t1638599442 ** get_address_of_derivedRestriction_1() { return &___derivedRestriction_1; }
	inline void set_derivedRestriction_1(RestrictionFacets_t1638599442 * value)
	{
		___derivedRestriction_1 = value;
		Il2CppCodeGenWriteBarrier((&___derivedRestriction_1), value);
	}

	inline static int32_t get_offset_of_baseFlags_2() { return static_cast<int32_t>(offsetof(FacetsCompiler_t1584362354, ___baseFlags_2)); }
	inline int32_t get_baseFlags_2() const { return ___baseFlags_2; }
	inline int32_t* get_address_of_baseFlags_2() { return &___baseFlags_2; }
	inline void set_baseFlags_2(int32_t value)
	{
		___baseFlags_2 = value;
	}

	inline static int32_t get_offset_of_baseFixedFlags_3() { return static_cast<int32_t>(offsetof(FacetsCompiler_t1584362354, ___baseFixedFlags_3)); }
	inline int32_t get_baseFixedFlags_3() const { return ___baseFixedFlags_3; }
	inline int32_t* get_address_of_baseFixedFlags_3() { return &___baseFixedFlags_3; }
	inline void set_baseFixedFlags_3(int32_t value)
	{
		___baseFixedFlags_3 = value;
	}

	inline static int32_t get_offset_of_validRestrictionFlags_4() { return static_cast<int32_t>(offsetof(FacetsCompiler_t1584362354, ___validRestrictionFlags_4)); }
	inline int32_t get_validRestrictionFlags_4() const { return ___validRestrictionFlags_4; }
	inline int32_t* get_address_of_validRestrictionFlags_4() { return &___validRestrictionFlags_4; }
	inline void set_validRestrictionFlags_4(int32_t value)
	{
		___validRestrictionFlags_4 = value;
	}

	inline static int32_t get_offset_of_nonNegativeInt_5() { return static_cast<int32_t>(offsetof(FacetsCompiler_t1584362354, ___nonNegativeInt_5)); }
	inline XmlSchemaDatatype_t322714710 * get_nonNegativeInt_5() const { return ___nonNegativeInt_5; }
	inline XmlSchemaDatatype_t322714710 ** get_address_of_nonNegativeInt_5() { return &___nonNegativeInt_5; }
	inline void set_nonNegativeInt_5(XmlSchemaDatatype_t322714710 * value)
	{
		___nonNegativeInt_5 = value;
		Il2CppCodeGenWriteBarrier((&___nonNegativeInt_5), value);
	}

	inline static int32_t get_offset_of_builtInType_6() { return static_cast<int32_t>(offsetof(FacetsCompiler_t1584362354, ___builtInType_6)); }
	inline XmlSchemaDatatype_t322714710 * get_builtInType_6() const { return ___builtInType_6; }
	inline XmlSchemaDatatype_t322714710 ** get_address_of_builtInType_6() { return &___builtInType_6; }
	inline void set_builtInType_6(XmlSchemaDatatype_t322714710 * value)
	{
		___builtInType_6 = value;
		Il2CppCodeGenWriteBarrier((&___builtInType_6), value);
	}

	inline static int32_t get_offset_of_builtInEnum_7() { return static_cast<int32_t>(offsetof(FacetsCompiler_t1584362354, ___builtInEnum_7)); }
	inline int32_t get_builtInEnum_7() const { return ___builtInEnum_7; }
	inline int32_t* get_address_of_builtInEnum_7() { return &___builtInEnum_7; }
	inline void set_builtInEnum_7(int32_t value)
	{
		___builtInEnum_7 = value;
	}

	inline static int32_t get_offset_of_firstPattern_8() { return static_cast<int32_t>(offsetof(FacetsCompiler_t1584362354, ___firstPattern_8)); }
	inline bool get_firstPattern_8() const { return ___firstPattern_8; }
	inline bool* get_address_of_firstPattern_8() { return &___firstPattern_8; }
	inline void set_firstPattern_8(bool value)
	{
		___firstPattern_8 = value;
	}

	inline static int32_t get_offset_of_regStr_9() { return static_cast<int32_t>(offsetof(FacetsCompiler_t1584362354, ___regStr_9)); }
	inline StringBuilder_t * get_regStr_9() const { return ___regStr_9; }
	inline StringBuilder_t ** get_address_of_regStr_9() { return &___regStr_9; }
	inline void set_regStr_9(StringBuilder_t * value)
	{
		___regStr_9 = value;
		Il2CppCodeGenWriteBarrier((&___regStr_9), value);
	}

	inline static int32_t get_offset_of_pattern_facet_10() { return static_cast<int32_t>(offsetof(FacetsCompiler_t1584362354, ___pattern_facet_10)); }
	inline XmlSchemaPatternFacet_t3316004401 * get_pattern_facet_10() const { return ___pattern_facet_10; }
	inline XmlSchemaPatternFacet_t3316004401 ** get_address_of_pattern_facet_10() { return &___pattern_facet_10; }
	inline void set_pattern_facet_10(XmlSchemaPatternFacet_t3316004401 * value)
	{
		___pattern_facet_10 = value;
		Il2CppCodeGenWriteBarrier((&___pattern_facet_10), value);
	}
};

struct FacetsCompiler_t1584362354_StaticFields
{
public:
	// System.Xml.Schema.FacetsChecker/FacetsCompiler/Map[] System.Xml.Schema.FacetsChecker/FacetsCompiler::c_map
	MapU5BU5D_t475731498* ___c_map_11;

public:
	inline static int32_t get_offset_of_c_map_11() { return static_cast<int32_t>(offsetof(FacetsCompiler_t1584362354_StaticFields, ___c_map_11)); }
	inline MapU5BU5D_t475731498* get_c_map_11() const { return ___c_map_11; }
	inline MapU5BU5D_t475731498** get_address_of_c_map_11() { return &___c_map_11; }
	inline void set_c_map_11(MapU5BU5D_t475731498* value)
	{
		___c_map_11 = value;
		Il2CppCodeGenWriteBarrier((&___c_map_11), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Xml.Schema.FacetsChecker/FacetsCompiler
struct FacetsCompiler_t1584362354_marshaled_pinvoke
{
	DatatypeImplementation_t3722098011 * ___datatype_0;
	RestrictionFacets_t1638599442 * ___derivedRestriction_1;
	int32_t ___baseFlags_2;
	int32_t ___baseFixedFlags_3;
	int32_t ___validRestrictionFlags_4;
	XmlSchemaDatatype_t322714710 * ___nonNegativeInt_5;
	XmlSchemaDatatype_t322714710 * ___builtInType_6;
	int32_t ___builtInEnum_7;
	int32_t ___firstPattern_8;
	char* ___regStr_9;
	XmlSchemaPatternFacet_t3316004401 * ___pattern_facet_10;
};
// Native definition for COM marshalling of System.Xml.Schema.FacetsChecker/FacetsCompiler
struct FacetsCompiler_t1584362354_marshaled_com
{
	DatatypeImplementation_t3722098011 * ___datatype_0;
	RestrictionFacets_t1638599442 * ___derivedRestriction_1;
	int32_t ___baseFlags_2;
	int32_t ___baseFixedFlags_3;
	int32_t ___validRestrictionFlags_4;
	XmlSchemaDatatype_t322714710 * ___nonNegativeInt_5;
	XmlSchemaDatatype_t322714710 * ___builtInType_6;
	int32_t ___builtInEnum_7;
	int32_t ___firstPattern_8;
	Il2CppChar* ___regStr_9;
	XmlSchemaPatternFacet_t3316004401 * ___pattern_facet_10;
};
#endif // FACETSCOMPILER_T1584362354_H
#ifndef NAMESPACELIST_T60893868_H
#define NAMESPACELIST_T60893868_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Schema.NamespaceList
struct  NamespaceList_t60893868  : public RuntimeObject
{
public:
	// System.Xml.Schema.NamespaceList/ListType System.Xml.Schema.NamespaceList::type
	int32_t ___type_0;
	// System.Collections.Hashtable System.Xml.Schema.NamespaceList::set
	Hashtable_t1853889766 * ___set_1;
	// System.String System.Xml.Schema.NamespaceList::targetNamespace
	String_t* ___targetNamespace_2;

public:
	inline static int32_t get_offset_of_type_0() { return static_cast<int32_t>(offsetof(NamespaceList_t60893868, ___type_0)); }
	inline int32_t get_type_0() const { return ___type_0; }
	inline int32_t* get_address_of_type_0() { return &___type_0; }
	inline void set_type_0(int32_t value)
	{
		___type_0 = value;
	}

	inline static int32_t get_offset_of_set_1() { return static_cast<int32_t>(offsetof(NamespaceList_t60893868, ___set_1)); }
	inline Hashtable_t1853889766 * get_set_1() const { return ___set_1; }
	inline Hashtable_t1853889766 ** get_address_of_set_1() { return &___set_1; }
	inline void set_set_1(Hashtable_t1853889766 * value)
	{
		___set_1 = value;
		Il2CppCodeGenWriteBarrier((&___set_1), value);
	}

	inline static int32_t get_offset_of_targetNamespace_2() { return static_cast<int32_t>(offsetof(NamespaceList_t60893868, ___targetNamespace_2)); }
	inline String_t* get_targetNamespace_2() const { return ___targetNamespace_2; }
	inline String_t** get_address_of_targetNamespace_2() { return &___targetNamespace_2; }
	inline void set_targetNamespace_2(String_t* value)
	{
		___targetNamespace_2 = value;
		Il2CppCodeGenWriteBarrier((&___targetNamespace_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NAMESPACELIST_T60893868_H
#ifndef PARSER_T3220530449_H
#define PARSER_T3220530449_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Schema.Parser
struct  Parser_t3220530449  : public RuntimeObject
{
public:
	// System.Xml.Schema.SchemaType System.Xml.Schema.Parser::schemaType
	int32_t ___schemaType_0;
	// System.Xml.XmlNameTable System.Xml.Schema.Parser::nameTable
	XmlNameTable_t71772148 * ___nameTable_1;
	// System.Xml.Schema.SchemaNames System.Xml.Schema.Parser::schemaNames
	SchemaNames_t661607975 * ___schemaNames_2;
	// System.Xml.Schema.ValidationEventHandler System.Xml.Schema.Parser::eventHandler
	ValidationEventHandler_t791314227 * ___eventHandler_3;
	// System.Xml.XmlNamespaceManager System.Xml.Schema.Parser::namespaceManager
	XmlNamespaceManager_t418790500 * ___namespaceManager_4;
	// System.Xml.XmlReader System.Xml.Schema.Parser::reader
	XmlReader_t3121518892 * ___reader_5;
	// System.Xml.PositionInfo System.Xml.Schema.Parser::positionInfo
	PositionInfo_t2441432568 * ___positionInfo_6;
	// System.Boolean System.Xml.Schema.Parser::isProcessNamespaces
	bool ___isProcessNamespaces_7;
	// System.Int32 System.Xml.Schema.Parser::schemaXmlDepth
	int32_t ___schemaXmlDepth_8;
	// System.Int32 System.Xml.Schema.Parser::markupDepth
	int32_t ___markupDepth_9;
	// System.Xml.Schema.SchemaBuilder System.Xml.Schema.Parser::builder
	SchemaBuilder_t3521006541 * ___builder_10;
	// System.Xml.Schema.XmlSchema System.Xml.Schema.Parser::schema
	XmlSchema_t3742557897 * ___schema_11;
	// System.Xml.Schema.SchemaInfo System.Xml.Schema.Parser::xdrSchema
	SchemaInfo_t3347508623 * ___xdrSchema_12;
	// System.Xml.XmlResolver System.Xml.Schema.Parser::xmlResolver
	XmlResolver_t626023767 * ___xmlResolver_13;
	// System.Xml.XmlDocument System.Xml.Schema.Parser::dummyDocument
	XmlDocument_t2837193595 * ___dummyDocument_14;
	// System.Boolean System.Xml.Schema.Parser::processMarkup
	bool ___processMarkup_15;
	// System.Xml.XmlNode System.Xml.Schema.Parser::parentNode
	XmlNode_t3767805227 * ___parentNode_16;
	// System.Xml.XmlNamespaceManager System.Xml.Schema.Parser::annotationNSManager
	XmlNamespaceManager_t418790500 * ___annotationNSManager_17;
	// System.String System.Xml.Schema.Parser::xmlns
	String_t* ___xmlns_18;
	// System.Xml.XmlCharType System.Xml.Schema.Parser::xmlCharType
	XmlCharType_t2277243275  ___xmlCharType_19;

public:
	inline static int32_t get_offset_of_schemaType_0() { return static_cast<int32_t>(offsetof(Parser_t3220530449, ___schemaType_0)); }
	inline int32_t get_schemaType_0() const { return ___schemaType_0; }
	inline int32_t* get_address_of_schemaType_0() { return &___schemaType_0; }
	inline void set_schemaType_0(int32_t value)
	{
		___schemaType_0 = value;
	}

	inline static int32_t get_offset_of_nameTable_1() { return static_cast<int32_t>(offsetof(Parser_t3220530449, ___nameTable_1)); }
	inline XmlNameTable_t71772148 * get_nameTable_1() const { return ___nameTable_1; }
	inline XmlNameTable_t71772148 ** get_address_of_nameTable_1() { return &___nameTable_1; }
	inline void set_nameTable_1(XmlNameTable_t71772148 * value)
	{
		___nameTable_1 = value;
		Il2CppCodeGenWriteBarrier((&___nameTable_1), value);
	}

	inline static int32_t get_offset_of_schemaNames_2() { return static_cast<int32_t>(offsetof(Parser_t3220530449, ___schemaNames_2)); }
	inline SchemaNames_t661607975 * get_schemaNames_2() const { return ___schemaNames_2; }
	inline SchemaNames_t661607975 ** get_address_of_schemaNames_2() { return &___schemaNames_2; }
	inline void set_schemaNames_2(SchemaNames_t661607975 * value)
	{
		___schemaNames_2 = value;
		Il2CppCodeGenWriteBarrier((&___schemaNames_2), value);
	}

	inline static int32_t get_offset_of_eventHandler_3() { return static_cast<int32_t>(offsetof(Parser_t3220530449, ___eventHandler_3)); }
	inline ValidationEventHandler_t791314227 * get_eventHandler_3() const { return ___eventHandler_3; }
	inline ValidationEventHandler_t791314227 ** get_address_of_eventHandler_3() { return &___eventHandler_3; }
	inline void set_eventHandler_3(ValidationEventHandler_t791314227 * value)
	{
		___eventHandler_3 = value;
		Il2CppCodeGenWriteBarrier((&___eventHandler_3), value);
	}

	inline static int32_t get_offset_of_namespaceManager_4() { return static_cast<int32_t>(offsetof(Parser_t3220530449, ___namespaceManager_4)); }
	inline XmlNamespaceManager_t418790500 * get_namespaceManager_4() const { return ___namespaceManager_4; }
	inline XmlNamespaceManager_t418790500 ** get_address_of_namespaceManager_4() { return &___namespaceManager_4; }
	inline void set_namespaceManager_4(XmlNamespaceManager_t418790500 * value)
	{
		___namespaceManager_4 = value;
		Il2CppCodeGenWriteBarrier((&___namespaceManager_4), value);
	}

	inline static int32_t get_offset_of_reader_5() { return static_cast<int32_t>(offsetof(Parser_t3220530449, ___reader_5)); }
	inline XmlReader_t3121518892 * get_reader_5() const { return ___reader_5; }
	inline XmlReader_t3121518892 ** get_address_of_reader_5() { return &___reader_5; }
	inline void set_reader_5(XmlReader_t3121518892 * value)
	{
		___reader_5 = value;
		Il2CppCodeGenWriteBarrier((&___reader_5), value);
	}

	inline static int32_t get_offset_of_positionInfo_6() { return static_cast<int32_t>(offsetof(Parser_t3220530449, ___positionInfo_6)); }
	inline PositionInfo_t2441432568 * get_positionInfo_6() const { return ___positionInfo_6; }
	inline PositionInfo_t2441432568 ** get_address_of_positionInfo_6() { return &___positionInfo_6; }
	inline void set_positionInfo_6(PositionInfo_t2441432568 * value)
	{
		___positionInfo_6 = value;
		Il2CppCodeGenWriteBarrier((&___positionInfo_6), value);
	}

	inline static int32_t get_offset_of_isProcessNamespaces_7() { return static_cast<int32_t>(offsetof(Parser_t3220530449, ___isProcessNamespaces_7)); }
	inline bool get_isProcessNamespaces_7() const { return ___isProcessNamespaces_7; }
	inline bool* get_address_of_isProcessNamespaces_7() { return &___isProcessNamespaces_7; }
	inline void set_isProcessNamespaces_7(bool value)
	{
		___isProcessNamespaces_7 = value;
	}

	inline static int32_t get_offset_of_schemaXmlDepth_8() { return static_cast<int32_t>(offsetof(Parser_t3220530449, ___schemaXmlDepth_8)); }
	inline int32_t get_schemaXmlDepth_8() const { return ___schemaXmlDepth_8; }
	inline int32_t* get_address_of_schemaXmlDepth_8() { return &___schemaXmlDepth_8; }
	inline void set_schemaXmlDepth_8(int32_t value)
	{
		___schemaXmlDepth_8 = value;
	}

	inline static int32_t get_offset_of_markupDepth_9() { return static_cast<int32_t>(offsetof(Parser_t3220530449, ___markupDepth_9)); }
	inline int32_t get_markupDepth_9() const { return ___markupDepth_9; }
	inline int32_t* get_address_of_markupDepth_9() { return &___markupDepth_9; }
	inline void set_markupDepth_9(int32_t value)
	{
		___markupDepth_9 = value;
	}

	inline static int32_t get_offset_of_builder_10() { return static_cast<int32_t>(offsetof(Parser_t3220530449, ___builder_10)); }
	inline SchemaBuilder_t3521006541 * get_builder_10() const { return ___builder_10; }
	inline SchemaBuilder_t3521006541 ** get_address_of_builder_10() { return &___builder_10; }
	inline void set_builder_10(SchemaBuilder_t3521006541 * value)
	{
		___builder_10 = value;
		Il2CppCodeGenWriteBarrier((&___builder_10), value);
	}

	inline static int32_t get_offset_of_schema_11() { return static_cast<int32_t>(offsetof(Parser_t3220530449, ___schema_11)); }
	inline XmlSchema_t3742557897 * get_schema_11() const { return ___schema_11; }
	inline XmlSchema_t3742557897 ** get_address_of_schema_11() { return &___schema_11; }
	inline void set_schema_11(XmlSchema_t3742557897 * value)
	{
		___schema_11 = value;
		Il2CppCodeGenWriteBarrier((&___schema_11), value);
	}

	inline static int32_t get_offset_of_xdrSchema_12() { return static_cast<int32_t>(offsetof(Parser_t3220530449, ___xdrSchema_12)); }
	inline SchemaInfo_t3347508623 * get_xdrSchema_12() const { return ___xdrSchema_12; }
	inline SchemaInfo_t3347508623 ** get_address_of_xdrSchema_12() { return &___xdrSchema_12; }
	inline void set_xdrSchema_12(SchemaInfo_t3347508623 * value)
	{
		___xdrSchema_12 = value;
		Il2CppCodeGenWriteBarrier((&___xdrSchema_12), value);
	}

	inline static int32_t get_offset_of_xmlResolver_13() { return static_cast<int32_t>(offsetof(Parser_t3220530449, ___xmlResolver_13)); }
	inline XmlResolver_t626023767 * get_xmlResolver_13() const { return ___xmlResolver_13; }
	inline XmlResolver_t626023767 ** get_address_of_xmlResolver_13() { return &___xmlResolver_13; }
	inline void set_xmlResolver_13(XmlResolver_t626023767 * value)
	{
		___xmlResolver_13 = value;
		Il2CppCodeGenWriteBarrier((&___xmlResolver_13), value);
	}

	inline static int32_t get_offset_of_dummyDocument_14() { return static_cast<int32_t>(offsetof(Parser_t3220530449, ___dummyDocument_14)); }
	inline XmlDocument_t2837193595 * get_dummyDocument_14() const { return ___dummyDocument_14; }
	inline XmlDocument_t2837193595 ** get_address_of_dummyDocument_14() { return &___dummyDocument_14; }
	inline void set_dummyDocument_14(XmlDocument_t2837193595 * value)
	{
		___dummyDocument_14 = value;
		Il2CppCodeGenWriteBarrier((&___dummyDocument_14), value);
	}

	inline static int32_t get_offset_of_processMarkup_15() { return static_cast<int32_t>(offsetof(Parser_t3220530449, ___processMarkup_15)); }
	inline bool get_processMarkup_15() const { return ___processMarkup_15; }
	inline bool* get_address_of_processMarkup_15() { return &___processMarkup_15; }
	inline void set_processMarkup_15(bool value)
	{
		___processMarkup_15 = value;
	}

	inline static int32_t get_offset_of_parentNode_16() { return static_cast<int32_t>(offsetof(Parser_t3220530449, ___parentNode_16)); }
	inline XmlNode_t3767805227 * get_parentNode_16() const { return ___parentNode_16; }
	inline XmlNode_t3767805227 ** get_address_of_parentNode_16() { return &___parentNode_16; }
	inline void set_parentNode_16(XmlNode_t3767805227 * value)
	{
		___parentNode_16 = value;
		Il2CppCodeGenWriteBarrier((&___parentNode_16), value);
	}

	inline static int32_t get_offset_of_annotationNSManager_17() { return static_cast<int32_t>(offsetof(Parser_t3220530449, ___annotationNSManager_17)); }
	inline XmlNamespaceManager_t418790500 * get_annotationNSManager_17() const { return ___annotationNSManager_17; }
	inline XmlNamespaceManager_t418790500 ** get_address_of_annotationNSManager_17() { return &___annotationNSManager_17; }
	inline void set_annotationNSManager_17(XmlNamespaceManager_t418790500 * value)
	{
		___annotationNSManager_17 = value;
		Il2CppCodeGenWriteBarrier((&___annotationNSManager_17), value);
	}

	inline static int32_t get_offset_of_xmlns_18() { return static_cast<int32_t>(offsetof(Parser_t3220530449, ___xmlns_18)); }
	inline String_t* get_xmlns_18() const { return ___xmlns_18; }
	inline String_t** get_address_of_xmlns_18() { return &___xmlns_18; }
	inline void set_xmlns_18(String_t* value)
	{
		___xmlns_18 = value;
		Il2CppCodeGenWriteBarrier((&___xmlns_18), value);
	}

	inline static int32_t get_offset_of_xmlCharType_19() { return static_cast<int32_t>(offsetof(Parser_t3220530449, ___xmlCharType_19)); }
	inline XmlCharType_t2277243275  get_xmlCharType_19() const { return ___xmlCharType_19; }
	inline XmlCharType_t2277243275 * get_address_of_xmlCharType_19() { return &___xmlCharType_19; }
	inline void set_xmlCharType_19(XmlCharType_t2277243275  value)
	{
		___xmlCharType_19 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PARSER_T3220530449_H
#ifndef SCHEMACOLLECTIONPREPROCESSOR_T2786719976_H
#define SCHEMACOLLECTIONPREPROCESSOR_T2786719976_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Schema.SchemaCollectionPreprocessor
struct  SchemaCollectionPreprocessor_t2786719976  : public BaseProcessor_t2302394543
{
public:
	// System.Xml.Schema.XmlSchema System.Xml.Schema.SchemaCollectionPreprocessor::schema
	XmlSchema_t3742557897 * ___schema_6;
	// System.String System.Xml.Schema.SchemaCollectionPreprocessor::targetNamespace
	String_t* ___targetNamespace_7;
	// System.Boolean System.Xml.Schema.SchemaCollectionPreprocessor::buildinIncluded
	bool ___buildinIncluded_8;
	// System.Xml.Schema.XmlSchemaForm System.Xml.Schema.SchemaCollectionPreprocessor::elementFormDefault
	int32_t ___elementFormDefault_9;
	// System.Xml.Schema.XmlSchemaForm System.Xml.Schema.SchemaCollectionPreprocessor::attributeFormDefault
	int32_t ___attributeFormDefault_10;
	// System.Xml.Schema.XmlSchemaDerivationMethod System.Xml.Schema.SchemaCollectionPreprocessor::blockDefault
	int32_t ___blockDefault_11;
	// System.Xml.Schema.XmlSchemaDerivationMethod System.Xml.Schema.SchemaCollectionPreprocessor::finalDefault
	int32_t ___finalDefault_12;
	// System.Collections.Hashtable System.Xml.Schema.SchemaCollectionPreprocessor::schemaLocations
	Hashtable_t1853889766 * ___schemaLocations_13;
	// System.Collections.Hashtable System.Xml.Schema.SchemaCollectionPreprocessor::referenceNamespaces
	Hashtable_t1853889766 * ___referenceNamespaces_14;
	// System.String System.Xml.Schema.SchemaCollectionPreprocessor::Xmlns
	String_t* ___Xmlns_15;
	// System.Xml.XmlResolver System.Xml.Schema.SchemaCollectionPreprocessor::xmlResolver
	XmlResolver_t626023767 * ___xmlResolver_16;

public:
	inline static int32_t get_offset_of_schema_6() { return static_cast<int32_t>(offsetof(SchemaCollectionPreprocessor_t2786719976, ___schema_6)); }
	inline XmlSchema_t3742557897 * get_schema_6() const { return ___schema_6; }
	inline XmlSchema_t3742557897 ** get_address_of_schema_6() { return &___schema_6; }
	inline void set_schema_6(XmlSchema_t3742557897 * value)
	{
		___schema_6 = value;
		Il2CppCodeGenWriteBarrier((&___schema_6), value);
	}

	inline static int32_t get_offset_of_targetNamespace_7() { return static_cast<int32_t>(offsetof(SchemaCollectionPreprocessor_t2786719976, ___targetNamespace_7)); }
	inline String_t* get_targetNamespace_7() const { return ___targetNamespace_7; }
	inline String_t** get_address_of_targetNamespace_7() { return &___targetNamespace_7; }
	inline void set_targetNamespace_7(String_t* value)
	{
		___targetNamespace_7 = value;
		Il2CppCodeGenWriteBarrier((&___targetNamespace_7), value);
	}

	inline static int32_t get_offset_of_buildinIncluded_8() { return static_cast<int32_t>(offsetof(SchemaCollectionPreprocessor_t2786719976, ___buildinIncluded_8)); }
	inline bool get_buildinIncluded_8() const { return ___buildinIncluded_8; }
	inline bool* get_address_of_buildinIncluded_8() { return &___buildinIncluded_8; }
	inline void set_buildinIncluded_8(bool value)
	{
		___buildinIncluded_8 = value;
	}

	inline static int32_t get_offset_of_elementFormDefault_9() { return static_cast<int32_t>(offsetof(SchemaCollectionPreprocessor_t2786719976, ___elementFormDefault_9)); }
	inline int32_t get_elementFormDefault_9() const { return ___elementFormDefault_9; }
	inline int32_t* get_address_of_elementFormDefault_9() { return &___elementFormDefault_9; }
	inline void set_elementFormDefault_9(int32_t value)
	{
		___elementFormDefault_9 = value;
	}

	inline static int32_t get_offset_of_attributeFormDefault_10() { return static_cast<int32_t>(offsetof(SchemaCollectionPreprocessor_t2786719976, ___attributeFormDefault_10)); }
	inline int32_t get_attributeFormDefault_10() const { return ___attributeFormDefault_10; }
	inline int32_t* get_address_of_attributeFormDefault_10() { return &___attributeFormDefault_10; }
	inline void set_attributeFormDefault_10(int32_t value)
	{
		___attributeFormDefault_10 = value;
	}

	inline static int32_t get_offset_of_blockDefault_11() { return static_cast<int32_t>(offsetof(SchemaCollectionPreprocessor_t2786719976, ___blockDefault_11)); }
	inline int32_t get_blockDefault_11() const { return ___blockDefault_11; }
	inline int32_t* get_address_of_blockDefault_11() { return &___blockDefault_11; }
	inline void set_blockDefault_11(int32_t value)
	{
		___blockDefault_11 = value;
	}

	inline static int32_t get_offset_of_finalDefault_12() { return static_cast<int32_t>(offsetof(SchemaCollectionPreprocessor_t2786719976, ___finalDefault_12)); }
	inline int32_t get_finalDefault_12() const { return ___finalDefault_12; }
	inline int32_t* get_address_of_finalDefault_12() { return &___finalDefault_12; }
	inline void set_finalDefault_12(int32_t value)
	{
		___finalDefault_12 = value;
	}

	inline static int32_t get_offset_of_schemaLocations_13() { return static_cast<int32_t>(offsetof(SchemaCollectionPreprocessor_t2786719976, ___schemaLocations_13)); }
	inline Hashtable_t1853889766 * get_schemaLocations_13() const { return ___schemaLocations_13; }
	inline Hashtable_t1853889766 ** get_address_of_schemaLocations_13() { return &___schemaLocations_13; }
	inline void set_schemaLocations_13(Hashtable_t1853889766 * value)
	{
		___schemaLocations_13 = value;
		Il2CppCodeGenWriteBarrier((&___schemaLocations_13), value);
	}

	inline static int32_t get_offset_of_referenceNamespaces_14() { return static_cast<int32_t>(offsetof(SchemaCollectionPreprocessor_t2786719976, ___referenceNamespaces_14)); }
	inline Hashtable_t1853889766 * get_referenceNamespaces_14() const { return ___referenceNamespaces_14; }
	inline Hashtable_t1853889766 ** get_address_of_referenceNamespaces_14() { return &___referenceNamespaces_14; }
	inline void set_referenceNamespaces_14(Hashtable_t1853889766 * value)
	{
		___referenceNamespaces_14 = value;
		Il2CppCodeGenWriteBarrier((&___referenceNamespaces_14), value);
	}

	inline static int32_t get_offset_of_Xmlns_15() { return static_cast<int32_t>(offsetof(SchemaCollectionPreprocessor_t2786719976, ___Xmlns_15)); }
	inline String_t* get_Xmlns_15() const { return ___Xmlns_15; }
	inline String_t** get_address_of_Xmlns_15() { return &___Xmlns_15; }
	inline void set_Xmlns_15(String_t* value)
	{
		___Xmlns_15 = value;
		Il2CppCodeGenWriteBarrier((&___Xmlns_15), value);
	}

	inline static int32_t get_offset_of_xmlResolver_16() { return static_cast<int32_t>(offsetof(SchemaCollectionPreprocessor_t2786719976, ___xmlResolver_16)); }
	inline XmlResolver_t626023767 * get_xmlResolver_16() const { return ___xmlResolver_16; }
	inline XmlResolver_t626023767 ** get_address_of_xmlResolver_16() { return &___xmlResolver_16; }
	inline void set_xmlResolver_16(XmlResolver_t626023767 * value)
	{
		___xmlResolver_16 = value;
		Il2CppCodeGenWriteBarrier((&___xmlResolver_16), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SCHEMACOLLECTIONPREPROCESSOR_T2786719976_H
#ifndef SCHEMADECLBASE_T3500554832_H
#define SCHEMADECLBASE_T3500554832_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Schema.SchemaDeclBase
struct  SchemaDeclBase_t3500554832  : public RuntimeObject
{
public:
	// System.Xml.XmlQualifiedName System.Xml.Schema.SchemaDeclBase::name
	XmlQualifiedName_t2760654312 * ___name_0;
	// System.String System.Xml.Schema.SchemaDeclBase::prefix
	String_t* ___prefix_1;
	// System.Boolean System.Xml.Schema.SchemaDeclBase::isDeclaredInExternal
	bool ___isDeclaredInExternal_2;
	// System.Xml.Schema.SchemaDeclBase/Use System.Xml.Schema.SchemaDeclBase::presence
	int32_t ___presence_3;
	// System.Xml.Schema.XmlSchemaType System.Xml.Schema.SchemaDeclBase::schemaType
	XmlSchemaType_t2033747345 * ___schemaType_4;
	// System.Xml.Schema.XmlSchemaDatatype System.Xml.Schema.SchemaDeclBase::datatype
	XmlSchemaDatatype_t322714710 * ___datatype_5;
	// System.String System.Xml.Schema.SchemaDeclBase::defaultValueRaw
	String_t* ___defaultValueRaw_6;
	// System.Object System.Xml.Schema.SchemaDeclBase::defaultValueTyped
	RuntimeObject * ___defaultValueTyped_7;
	// System.Int64 System.Xml.Schema.SchemaDeclBase::maxLength
	int64_t ___maxLength_8;
	// System.Int64 System.Xml.Schema.SchemaDeclBase::minLength
	int64_t ___minLength_9;
	// System.Collections.Generic.List`1<System.String> System.Xml.Schema.SchemaDeclBase::values
	List_1_t3319525431 * ___values_10;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(SchemaDeclBase_t3500554832, ___name_0)); }
	inline XmlQualifiedName_t2760654312 * get_name_0() const { return ___name_0; }
	inline XmlQualifiedName_t2760654312 ** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(XmlQualifiedName_t2760654312 * value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier((&___name_0), value);
	}

	inline static int32_t get_offset_of_prefix_1() { return static_cast<int32_t>(offsetof(SchemaDeclBase_t3500554832, ___prefix_1)); }
	inline String_t* get_prefix_1() const { return ___prefix_1; }
	inline String_t** get_address_of_prefix_1() { return &___prefix_1; }
	inline void set_prefix_1(String_t* value)
	{
		___prefix_1 = value;
		Il2CppCodeGenWriteBarrier((&___prefix_1), value);
	}

	inline static int32_t get_offset_of_isDeclaredInExternal_2() { return static_cast<int32_t>(offsetof(SchemaDeclBase_t3500554832, ___isDeclaredInExternal_2)); }
	inline bool get_isDeclaredInExternal_2() const { return ___isDeclaredInExternal_2; }
	inline bool* get_address_of_isDeclaredInExternal_2() { return &___isDeclaredInExternal_2; }
	inline void set_isDeclaredInExternal_2(bool value)
	{
		___isDeclaredInExternal_2 = value;
	}

	inline static int32_t get_offset_of_presence_3() { return static_cast<int32_t>(offsetof(SchemaDeclBase_t3500554832, ___presence_3)); }
	inline int32_t get_presence_3() const { return ___presence_3; }
	inline int32_t* get_address_of_presence_3() { return &___presence_3; }
	inline void set_presence_3(int32_t value)
	{
		___presence_3 = value;
	}

	inline static int32_t get_offset_of_schemaType_4() { return static_cast<int32_t>(offsetof(SchemaDeclBase_t3500554832, ___schemaType_4)); }
	inline XmlSchemaType_t2033747345 * get_schemaType_4() const { return ___schemaType_4; }
	inline XmlSchemaType_t2033747345 ** get_address_of_schemaType_4() { return &___schemaType_4; }
	inline void set_schemaType_4(XmlSchemaType_t2033747345 * value)
	{
		___schemaType_4 = value;
		Il2CppCodeGenWriteBarrier((&___schemaType_4), value);
	}

	inline static int32_t get_offset_of_datatype_5() { return static_cast<int32_t>(offsetof(SchemaDeclBase_t3500554832, ___datatype_5)); }
	inline XmlSchemaDatatype_t322714710 * get_datatype_5() const { return ___datatype_5; }
	inline XmlSchemaDatatype_t322714710 ** get_address_of_datatype_5() { return &___datatype_5; }
	inline void set_datatype_5(XmlSchemaDatatype_t322714710 * value)
	{
		___datatype_5 = value;
		Il2CppCodeGenWriteBarrier((&___datatype_5), value);
	}

	inline static int32_t get_offset_of_defaultValueRaw_6() { return static_cast<int32_t>(offsetof(SchemaDeclBase_t3500554832, ___defaultValueRaw_6)); }
	inline String_t* get_defaultValueRaw_6() const { return ___defaultValueRaw_6; }
	inline String_t** get_address_of_defaultValueRaw_6() { return &___defaultValueRaw_6; }
	inline void set_defaultValueRaw_6(String_t* value)
	{
		___defaultValueRaw_6 = value;
		Il2CppCodeGenWriteBarrier((&___defaultValueRaw_6), value);
	}

	inline static int32_t get_offset_of_defaultValueTyped_7() { return static_cast<int32_t>(offsetof(SchemaDeclBase_t3500554832, ___defaultValueTyped_7)); }
	inline RuntimeObject * get_defaultValueTyped_7() const { return ___defaultValueTyped_7; }
	inline RuntimeObject ** get_address_of_defaultValueTyped_7() { return &___defaultValueTyped_7; }
	inline void set_defaultValueTyped_7(RuntimeObject * value)
	{
		___defaultValueTyped_7 = value;
		Il2CppCodeGenWriteBarrier((&___defaultValueTyped_7), value);
	}

	inline static int32_t get_offset_of_maxLength_8() { return static_cast<int32_t>(offsetof(SchemaDeclBase_t3500554832, ___maxLength_8)); }
	inline int64_t get_maxLength_8() const { return ___maxLength_8; }
	inline int64_t* get_address_of_maxLength_8() { return &___maxLength_8; }
	inline void set_maxLength_8(int64_t value)
	{
		___maxLength_8 = value;
	}

	inline static int32_t get_offset_of_minLength_9() { return static_cast<int32_t>(offsetof(SchemaDeclBase_t3500554832, ___minLength_9)); }
	inline int64_t get_minLength_9() const { return ___minLength_9; }
	inline int64_t* get_address_of_minLength_9() { return &___minLength_9; }
	inline void set_minLength_9(int64_t value)
	{
		___minLength_9 = value;
	}

	inline static int32_t get_offset_of_values_10() { return static_cast<int32_t>(offsetof(SchemaDeclBase_t3500554832, ___values_10)); }
	inline List_1_t3319525431 * get_values_10() const { return ___values_10; }
	inline List_1_t3319525431 ** get_address_of_values_10() { return &___values_10; }
	inline void set_values_10(List_1_t3319525431 * value)
	{
		___values_10 = value;
		Il2CppCodeGenWriteBarrier((&___values_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SCHEMADECLBASE_T3500554832_H
#ifndef SCHEMAINFO_T3347508623_H
#define SCHEMAINFO_T3347508623_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Schema.SchemaInfo
struct  SchemaInfo_t3347508623  : public RuntimeObject
{
public:
	// System.Collections.Generic.Dictionary`2<System.Xml.XmlQualifiedName,System.Xml.Schema.SchemaElementDecl> System.Xml.Schema.SchemaInfo::elementDecls
	Dictionary_2_t2242461324 * ___elementDecls_0;
	// System.Collections.Generic.Dictionary`2<System.Xml.XmlQualifiedName,System.Xml.Schema.SchemaElementDecl> System.Xml.Schema.SchemaInfo::undeclaredElementDecls
	Dictionary_2_t2242461324 * ___undeclaredElementDecls_1;
	// System.Collections.Generic.Dictionary`2<System.Xml.XmlQualifiedName,System.Xml.Schema.SchemaEntity> System.Xml.Schema.SchemaInfo::generalEntities
	Dictionary_2_t1552439284 * ___generalEntities_2;
	// System.Collections.Generic.Dictionary`2<System.Xml.XmlQualifiedName,System.Xml.Schema.SchemaEntity> System.Xml.Schema.SchemaInfo::parameterEntities
	Dictionary_2_t1552439284 * ___parameterEntities_3;
	// System.Xml.XmlQualifiedName System.Xml.Schema.SchemaInfo::docTypeName
	XmlQualifiedName_t2760654312 * ___docTypeName_4;
	// System.String System.Xml.Schema.SchemaInfo::internalDtdSubset
	String_t* ___internalDtdSubset_5;
	// System.Boolean System.Xml.Schema.SchemaInfo::hasNonCDataAttributes
	bool ___hasNonCDataAttributes_6;
	// System.Boolean System.Xml.Schema.SchemaInfo::hasDefaultAttributes
	bool ___hasDefaultAttributes_7;
	// System.Collections.Generic.Dictionary`2<System.String,System.Boolean> System.Xml.Schema.SchemaInfo::targetNamespaces
	Dictionary_2_t4177511560 * ___targetNamespaces_8;
	// System.Collections.Generic.Dictionary`2<System.Xml.XmlQualifiedName,System.Xml.Schema.SchemaAttDef> System.Xml.Schema.SchemaInfo::attributeDecls
	Dictionary_2_t2404538479 * ___attributeDecls_9;
	// System.Int32 System.Xml.Schema.SchemaInfo::errorCount
	int32_t ___errorCount_10;
	// System.Xml.Schema.SchemaType System.Xml.Schema.SchemaInfo::schemaType
	int32_t ___schemaType_11;
	// System.Collections.Generic.Dictionary`2<System.Xml.XmlQualifiedName,System.Xml.Schema.SchemaElementDecl> System.Xml.Schema.SchemaInfo::elementDeclsByType
	Dictionary_2_t2242461324 * ___elementDeclsByType_12;
	// System.Collections.Generic.Dictionary`2<System.String,System.Xml.Schema.SchemaNotation> System.Xml.Schema.SchemaInfo::notations
	Dictionary_2_t1732933766 * ___notations_13;

public:
	inline static int32_t get_offset_of_elementDecls_0() { return static_cast<int32_t>(offsetof(SchemaInfo_t3347508623, ___elementDecls_0)); }
	inline Dictionary_2_t2242461324 * get_elementDecls_0() const { return ___elementDecls_0; }
	inline Dictionary_2_t2242461324 ** get_address_of_elementDecls_0() { return &___elementDecls_0; }
	inline void set_elementDecls_0(Dictionary_2_t2242461324 * value)
	{
		___elementDecls_0 = value;
		Il2CppCodeGenWriteBarrier((&___elementDecls_0), value);
	}

	inline static int32_t get_offset_of_undeclaredElementDecls_1() { return static_cast<int32_t>(offsetof(SchemaInfo_t3347508623, ___undeclaredElementDecls_1)); }
	inline Dictionary_2_t2242461324 * get_undeclaredElementDecls_1() const { return ___undeclaredElementDecls_1; }
	inline Dictionary_2_t2242461324 ** get_address_of_undeclaredElementDecls_1() { return &___undeclaredElementDecls_1; }
	inline void set_undeclaredElementDecls_1(Dictionary_2_t2242461324 * value)
	{
		___undeclaredElementDecls_1 = value;
		Il2CppCodeGenWriteBarrier((&___undeclaredElementDecls_1), value);
	}

	inline static int32_t get_offset_of_generalEntities_2() { return static_cast<int32_t>(offsetof(SchemaInfo_t3347508623, ___generalEntities_2)); }
	inline Dictionary_2_t1552439284 * get_generalEntities_2() const { return ___generalEntities_2; }
	inline Dictionary_2_t1552439284 ** get_address_of_generalEntities_2() { return &___generalEntities_2; }
	inline void set_generalEntities_2(Dictionary_2_t1552439284 * value)
	{
		___generalEntities_2 = value;
		Il2CppCodeGenWriteBarrier((&___generalEntities_2), value);
	}

	inline static int32_t get_offset_of_parameterEntities_3() { return static_cast<int32_t>(offsetof(SchemaInfo_t3347508623, ___parameterEntities_3)); }
	inline Dictionary_2_t1552439284 * get_parameterEntities_3() const { return ___parameterEntities_3; }
	inline Dictionary_2_t1552439284 ** get_address_of_parameterEntities_3() { return &___parameterEntities_3; }
	inline void set_parameterEntities_3(Dictionary_2_t1552439284 * value)
	{
		___parameterEntities_3 = value;
		Il2CppCodeGenWriteBarrier((&___parameterEntities_3), value);
	}

	inline static int32_t get_offset_of_docTypeName_4() { return static_cast<int32_t>(offsetof(SchemaInfo_t3347508623, ___docTypeName_4)); }
	inline XmlQualifiedName_t2760654312 * get_docTypeName_4() const { return ___docTypeName_4; }
	inline XmlQualifiedName_t2760654312 ** get_address_of_docTypeName_4() { return &___docTypeName_4; }
	inline void set_docTypeName_4(XmlQualifiedName_t2760654312 * value)
	{
		___docTypeName_4 = value;
		Il2CppCodeGenWriteBarrier((&___docTypeName_4), value);
	}

	inline static int32_t get_offset_of_internalDtdSubset_5() { return static_cast<int32_t>(offsetof(SchemaInfo_t3347508623, ___internalDtdSubset_5)); }
	inline String_t* get_internalDtdSubset_5() const { return ___internalDtdSubset_5; }
	inline String_t** get_address_of_internalDtdSubset_5() { return &___internalDtdSubset_5; }
	inline void set_internalDtdSubset_5(String_t* value)
	{
		___internalDtdSubset_5 = value;
		Il2CppCodeGenWriteBarrier((&___internalDtdSubset_5), value);
	}

	inline static int32_t get_offset_of_hasNonCDataAttributes_6() { return static_cast<int32_t>(offsetof(SchemaInfo_t3347508623, ___hasNonCDataAttributes_6)); }
	inline bool get_hasNonCDataAttributes_6() const { return ___hasNonCDataAttributes_6; }
	inline bool* get_address_of_hasNonCDataAttributes_6() { return &___hasNonCDataAttributes_6; }
	inline void set_hasNonCDataAttributes_6(bool value)
	{
		___hasNonCDataAttributes_6 = value;
	}

	inline static int32_t get_offset_of_hasDefaultAttributes_7() { return static_cast<int32_t>(offsetof(SchemaInfo_t3347508623, ___hasDefaultAttributes_7)); }
	inline bool get_hasDefaultAttributes_7() const { return ___hasDefaultAttributes_7; }
	inline bool* get_address_of_hasDefaultAttributes_7() { return &___hasDefaultAttributes_7; }
	inline void set_hasDefaultAttributes_7(bool value)
	{
		___hasDefaultAttributes_7 = value;
	}

	inline static int32_t get_offset_of_targetNamespaces_8() { return static_cast<int32_t>(offsetof(SchemaInfo_t3347508623, ___targetNamespaces_8)); }
	inline Dictionary_2_t4177511560 * get_targetNamespaces_8() const { return ___targetNamespaces_8; }
	inline Dictionary_2_t4177511560 ** get_address_of_targetNamespaces_8() { return &___targetNamespaces_8; }
	inline void set_targetNamespaces_8(Dictionary_2_t4177511560 * value)
	{
		___targetNamespaces_8 = value;
		Il2CppCodeGenWriteBarrier((&___targetNamespaces_8), value);
	}

	inline static int32_t get_offset_of_attributeDecls_9() { return static_cast<int32_t>(offsetof(SchemaInfo_t3347508623, ___attributeDecls_9)); }
	inline Dictionary_2_t2404538479 * get_attributeDecls_9() const { return ___attributeDecls_9; }
	inline Dictionary_2_t2404538479 ** get_address_of_attributeDecls_9() { return &___attributeDecls_9; }
	inline void set_attributeDecls_9(Dictionary_2_t2404538479 * value)
	{
		___attributeDecls_9 = value;
		Il2CppCodeGenWriteBarrier((&___attributeDecls_9), value);
	}

	inline static int32_t get_offset_of_errorCount_10() { return static_cast<int32_t>(offsetof(SchemaInfo_t3347508623, ___errorCount_10)); }
	inline int32_t get_errorCount_10() const { return ___errorCount_10; }
	inline int32_t* get_address_of_errorCount_10() { return &___errorCount_10; }
	inline void set_errorCount_10(int32_t value)
	{
		___errorCount_10 = value;
	}

	inline static int32_t get_offset_of_schemaType_11() { return static_cast<int32_t>(offsetof(SchemaInfo_t3347508623, ___schemaType_11)); }
	inline int32_t get_schemaType_11() const { return ___schemaType_11; }
	inline int32_t* get_address_of_schemaType_11() { return &___schemaType_11; }
	inline void set_schemaType_11(int32_t value)
	{
		___schemaType_11 = value;
	}

	inline static int32_t get_offset_of_elementDeclsByType_12() { return static_cast<int32_t>(offsetof(SchemaInfo_t3347508623, ___elementDeclsByType_12)); }
	inline Dictionary_2_t2242461324 * get_elementDeclsByType_12() const { return ___elementDeclsByType_12; }
	inline Dictionary_2_t2242461324 ** get_address_of_elementDeclsByType_12() { return &___elementDeclsByType_12; }
	inline void set_elementDeclsByType_12(Dictionary_2_t2242461324 * value)
	{
		___elementDeclsByType_12 = value;
		Il2CppCodeGenWriteBarrier((&___elementDeclsByType_12), value);
	}

	inline static int32_t get_offset_of_notations_13() { return static_cast<int32_t>(offsetof(SchemaInfo_t3347508623, ___notations_13)); }
	inline Dictionary_2_t1732933766 * get_notations_13() const { return ___notations_13; }
	inline Dictionary_2_t1732933766 ** get_address_of_notations_13() { return &___notations_13; }
	inline void set_notations_13(Dictionary_2_t1732933766 * value)
	{
		___notations_13 = value;
		Il2CppCodeGenWriteBarrier((&___notations_13), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SCHEMAINFO_T3347508623_H
#ifndef VALIDATIONEVENTARGS_T2784773869_H
#define VALIDATIONEVENTARGS_T2784773869_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Schema.ValidationEventArgs
struct  ValidationEventArgs_t2784773869  : public EventArgs_t3591816995
{
public:
	// System.Xml.Schema.XmlSchemaException System.Xml.Schema.ValidationEventArgs::ex
	XmlSchemaException_t3511258692 * ___ex_1;
	// System.Xml.Schema.XmlSeverityType System.Xml.Schema.ValidationEventArgs::severity
	int32_t ___severity_2;

public:
	inline static int32_t get_offset_of_ex_1() { return static_cast<int32_t>(offsetof(ValidationEventArgs_t2784773869, ___ex_1)); }
	inline XmlSchemaException_t3511258692 * get_ex_1() const { return ___ex_1; }
	inline XmlSchemaException_t3511258692 ** get_address_of_ex_1() { return &___ex_1; }
	inline void set_ex_1(XmlSchemaException_t3511258692 * value)
	{
		___ex_1 = value;
		Il2CppCodeGenWriteBarrier((&___ex_1), value);
	}

	inline static int32_t get_offset_of_severity_2() { return static_cast<int32_t>(offsetof(ValidationEventArgs_t2784773869, ___severity_2)); }
	inline int32_t get_severity_2() const { return ___severity_2; }
	inline int32_t* get_address_of_severity_2() { return &___severity_2; }
	inline void set_severity_2(int32_t value)
	{
		___severity_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VALIDATIONEVENTARGS_T2784773869_H
#ifndef VALIDATIONSTATE_T603008718_H
#define VALIDATIONSTATE_T603008718_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Schema.ValidationState
struct  ValidationState_t603008718  : public RuntimeObject
{
public:
	// System.Boolean System.Xml.Schema.ValidationState::IsNill
	bool ___IsNill_0;
	// System.Boolean System.Xml.Schema.ValidationState::NeedValidateChildren
	bool ___NeedValidateChildren_1;
	// System.Xml.Schema.XmlSchemaContentProcessing System.Xml.Schema.ValidationState::ProcessContents
	int32_t ___ProcessContents_2;
	// System.Xml.Schema.SchemaElementDecl System.Xml.Schema.ValidationState::ElementDecl
	SchemaElementDecl_t2267464004 * ___ElementDecl_3;
	// System.String System.Xml.Schema.ValidationState::LocalName
	String_t* ___LocalName_4;
	// System.String System.Xml.Schema.ValidationState::Namespace
	String_t* ___Namespace_5;
	// System.Xml.Schema.ConstraintStruct[] System.Xml.Schema.ValidationState::Constr
	ConstraintStructU5BU5D_t3023613795* ___Constr_6;
	// System.Xml.Schema.StateUnion System.Xml.Schema.ValidationState::CurrentState
	StateUnion_t2516366335  ___CurrentState_7;
	// System.Boolean System.Xml.Schema.ValidationState::HasMatched
	bool ___HasMatched_8;
	// System.Xml.Schema.BitSet[] System.Xml.Schema.ValidationState::CurPos
	BitSetU5BU5D_t1465593420* ___CurPos_9;
	// System.Xml.Schema.BitSet System.Xml.Schema.ValidationState::AllElementsSet
	BitSet_t1154229585 * ___AllElementsSet_10;
	// System.Collections.Generic.List`1<System.Xml.Schema.RangePositionInfo> System.Xml.Schema.ValidationState::RunningPositions
	List_1_t2062043678 * ___RunningPositions_11;
	// System.Boolean System.Xml.Schema.ValidationState::TooComplex
	bool ___TooComplex_12;

public:
	inline static int32_t get_offset_of_IsNill_0() { return static_cast<int32_t>(offsetof(ValidationState_t603008718, ___IsNill_0)); }
	inline bool get_IsNill_0() const { return ___IsNill_0; }
	inline bool* get_address_of_IsNill_0() { return &___IsNill_0; }
	inline void set_IsNill_0(bool value)
	{
		___IsNill_0 = value;
	}

	inline static int32_t get_offset_of_NeedValidateChildren_1() { return static_cast<int32_t>(offsetof(ValidationState_t603008718, ___NeedValidateChildren_1)); }
	inline bool get_NeedValidateChildren_1() const { return ___NeedValidateChildren_1; }
	inline bool* get_address_of_NeedValidateChildren_1() { return &___NeedValidateChildren_1; }
	inline void set_NeedValidateChildren_1(bool value)
	{
		___NeedValidateChildren_1 = value;
	}

	inline static int32_t get_offset_of_ProcessContents_2() { return static_cast<int32_t>(offsetof(ValidationState_t603008718, ___ProcessContents_2)); }
	inline int32_t get_ProcessContents_2() const { return ___ProcessContents_2; }
	inline int32_t* get_address_of_ProcessContents_2() { return &___ProcessContents_2; }
	inline void set_ProcessContents_2(int32_t value)
	{
		___ProcessContents_2 = value;
	}

	inline static int32_t get_offset_of_ElementDecl_3() { return static_cast<int32_t>(offsetof(ValidationState_t603008718, ___ElementDecl_3)); }
	inline SchemaElementDecl_t2267464004 * get_ElementDecl_3() const { return ___ElementDecl_3; }
	inline SchemaElementDecl_t2267464004 ** get_address_of_ElementDecl_3() { return &___ElementDecl_3; }
	inline void set_ElementDecl_3(SchemaElementDecl_t2267464004 * value)
	{
		___ElementDecl_3 = value;
		Il2CppCodeGenWriteBarrier((&___ElementDecl_3), value);
	}

	inline static int32_t get_offset_of_LocalName_4() { return static_cast<int32_t>(offsetof(ValidationState_t603008718, ___LocalName_4)); }
	inline String_t* get_LocalName_4() const { return ___LocalName_4; }
	inline String_t** get_address_of_LocalName_4() { return &___LocalName_4; }
	inline void set_LocalName_4(String_t* value)
	{
		___LocalName_4 = value;
		Il2CppCodeGenWriteBarrier((&___LocalName_4), value);
	}

	inline static int32_t get_offset_of_Namespace_5() { return static_cast<int32_t>(offsetof(ValidationState_t603008718, ___Namespace_5)); }
	inline String_t* get_Namespace_5() const { return ___Namespace_5; }
	inline String_t** get_address_of_Namespace_5() { return &___Namespace_5; }
	inline void set_Namespace_5(String_t* value)
	{
		___Namespace_5 = value;
		Il2CppCodeGenWriteBarrier((&___Namespace_5), value);
	}

	inline static int32_t get_offset_of_Constr_6() { return static_cast<int32_t>(offsetof(ValidationState_t603008718, ___Constr_6)); }
	inline ConstraintStructU5BU5D_t3023613795* get_Constr_6() const { return ___Constr_6; }
	inline ConstraintStructU5BU5D_t3023613795** get_address_of_Constr_6() { return &___Constr_6; }
	inline void set_Constr_6(ConstraintStructU5BU5D_t3023613795* value)
	{
		___Constr_6 = value;
		Il2CppCodeGenWriteBarrier((&___Constr_6), value);
	}

	inline static int32_t get_offset_of_CurrentState_7() { return static_cast<int32_t>(offsetof(ValidationState_t603008718, ___CurrentState_7)); }
	inline StateUnion_t2516366335  get_CurrentState_7() const { return ___CurrentState_7; }
	inline StateUnion_t2516366335 * get_address_of_CurrentState_7() { return &___CurrentState_7; }
	inline void set_CurrentState_7(StateUnion_t2516366335  value)
	{
		___CurrentState_7 = value;
	}

	inline static int32_t get_offset_of_HasMatched_8() { return static_cast<int32_t>(offsetof(ValidationState_t603008718, ___HasMatched_8)); }
	inline bool get_HasMatched_8() const { return ___HasMatched_8; }
	inline bool* get_address_of_HasMatched_8() { return &___HasMatched_8; }
	inline void set_HasMatched_8(bool value)
	{
		___HasMatched_8 = value;
	}

	inline static int32_t get_offset_of_CurPos_9() { return static_cast<int32_t>(offsetof(ValidationState_t603008718, ___CurPos_9)); }
	inline BitSetU5BU5D_t1465593420* get_CurPos_9() const { return ___CurPos_9; }
	inline BitSetU5BU5D_t1465593420** get_address_of_CurPos_9() { return &___CurPos_9; }
	inline void set_CurPos_9(BitSetU5BU5D_t1465593420* value)
	{
		___CurPos_9 = value;
		Il2CppCodeGenWriteBarrier((&___CurPos_9), value);
	}

	inline static int32_t get_offset_of_AllElementsSet_10() { return static_cast<int32_t>(offsetof(ValidationState_t603008718, ___AllElementsSet_10)); }
	inline BitSet_t1154229585 * get_AllElementsSet_10() const { return ___AllElementsSet_10; }
	inline BitSet_t1154229585 ** get_address_of_AllElementsSet_10() { return &___AllElementsSet_10; }
	inline void set_AllElementsSet_10(BitSet_t1154229585 * value)
	{
		___AllElementsSet_10 = value;
		Il2CppCodeGenWriteBarrier((&___AllElementsSet_10), value);
	}

	inline static int32_t get_offset_of_RunningPositions_11() { return static_cast<int32_t>(offsetof(ValidationState_t603008718, ___RunningPositions_11)); }
	inline List_1_t2062043678 * get_RunningPositions_11() const { return ___RunningPositions_11; }
	inline List_1_t2062043678 ** get_address_of_RunningPositions_11() { return &___RunningPositions_11; }
	inline void set_RunningPositions_11(List_1_t2062043678 * value)
	{
		___RunningPositions_11 = value;
		Il2CppCodeGenWriteBarrier((&___RunningPositions_11), value);
	}

	inline static int32_t get_offset_of_TooComplex_12() { return static_cast<int32_t>(offsetof(ValidationState_t603008718, ___TooComplex_12)); }
	inline bool get_TooComplex_12() const { return ___TooComplex_12; }
	inline bool* get_address_of_TooComplex_12() { return &___TooComplex_12; }
	inline void set_TooComplex_12(bool value)
	{
		___TooComplex_12 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VALIDATIONSTATE_T603008718_H
#ifndef XDRATTRIBUTEENTRY_T1100747816_H
#define XDRATTRIBUTEENTRY_T1100747816_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Schema.XdrBuilder/XdrAttributeEntry
struct  XdrAttributeEntry_t1100747816  : public RuntimeObject
{
public:
	// System.Xml.Schema.SchemaNames/Token System.Xml.Schema.XdrBuilder/XdrAttributeEntry::_Attribute
	int32_t ____Attribute_0;
	// System.Int32 System.Xml.Schema.XdrBuilder/XdrAttributeEntry::_SchemaFlags
	int32_t ____SchemaFlags_1;
	// System.Xml.Schema.XmlSchemaDatatype System.Xml.Schema.XdrBuilder/XdrAttributeEntry::_Datatype
	XmlSchemaDatatype_t322714710 * ____Datatype_2;
	// System.Xml.Schema.XdrBuilder/XdrBuildFunction System.Xml.Schema.XdrBuilder/XdrAttributeEntry::_BuildFunc
	XdrBuildFunction_t4965607 * ____BuildFunc_3;

public:
	inline static int32_t get_offset_of__Attribute_0() { return static_cast<int32_t>(offsetof(XdrAttributeEntry_t1100747816, ____Attribute_0)); }
	inline int32_t get__Attribute_0() const { return ____Attribute_0; }
	inline int32_t* get_address_of__Attribute_0() { return &____Attribute_0; }
	inline void set__Attribute_0(int32_t value)
	{
		____Attribute_0 = value;
	}

	inline static int32_t get_offset_of__SchemaFlags_1() { return static_cast<int32_t>(offsetof(XdrAttributeEntry_t1100747816, ____SchemaFlags_1)); }
	inline int32_t get__SchemaFlags_1() const { return ____SchemaFlags_1; }
	inline int32_t* get_address_of__SchemaFlags_1() { return &____SchemaFlags_1; }
	inline void set__SchemaFlags_1(int32_t value)
	{
		____SchemaFlags_1 = value;
	}

	inline static int32_t get_offset_of__Datatype_2() { return static_cast<int32_t>(offsetof(XdrAttributeEntry_t1100747816, ____Datatype_2)); }
	inline XmlSchemaDatatype_t322714710 * get__Datatype_2() const { return ____Datatype_2; }
	inline XmlSchemaDatatype_t322714710 ** get_address_of__Datatype_2() { return &____Datatype_2; }
	inline void set__Datatype_2(XmlSchemaDatatype_t322714710 * value)
	{
		____Datatype_2 = value;
		Il2CppCodeGenWriteBarrier((&____Datatype_2), value);
	}

	inline static int32_t get_offset_of__BuildFunc_3() { return static_cast<int32_t>(offsetof(XdrAttributeEntry_t1100747816, ____BuildFunc_3)); }
	inline XdrBuildFunction_t4965607 * get__BuildFunc_3() const { return ____BuildFunc_3; }
	inline XdrBuildFunction_t4965607 ** get_address_of__BuildFunc_3() { return &____BuildFunc_3; }
	inline void set__BuildFunc_3(XdrBuildFunction_t4965607 * value)
	{
		____BuildFunc_3 = value;
		Il2CppCodeGenWriteBarrier((&____BuildFunc_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XDRATTRIBUTEENTRY_T1100747816_H
#ifndef XDRENTRY_T1852396641_H
#define XDRENTRY_T1852396641_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Schema.XdrBuilder/XdrEntry
struct  XdrEntry_t1852396641  : public RuntimeObject
{
public:
	// System.Xml.Schema.SchemaNames/Token System.Xml.Schema.XdrBuilder/XdrEntry::_Name
	int32_t ____Name_0;
	// System.Int32[] System.Xml.Schema.XdrBuilder/XdrEntry::_NextStates
	Int32U5BU5D_t385246372* ____NextStates_1;
	// System.Xml.Schema.XdrBuilder/XdrAttributeEntry[] System.Xml.Schema.XdrBuilder/XdrEntry::_Attributes
	XdrAttributeEntryU5BU5D_t4099313209* ____Attributes_2;
	// System.Xml.Schema.XdrBuilder/XdrInitFunction System.Xml.Schema.XdrBuilder/XdrEntry::_InitFunc
	XdrInitFunction_t326013928 * ____InitFunc_3;
	// System.Xml.Schema.XdrBuilder/XdrBeginChildFunction System.Xml.Schema.XdrBuilder/XdrEntry::_BeginChildFunc
	XdrBeginChildFunction_t3571964013 * ____BeginChildFunc_4;
	// System.Xml.Schema.XdrBuilder/XdrEndChildFunction System.Xml.Schema.XdrBuilder/XdrEntry::_EndChildFunc
	XdrEndChildFunction_t2609844494 * ____EndChildFunc_5;
	// System.Boolean System.Xml.Schema.XdrBuilder/XdrEntry::_AllowText
	bool ____AllowText_6;

public:
	inline static int32_t get_offset_of__Name_0() { return static_cast<int32_t>(offsetof(XdrEntry_t1852396641, ____Name_0)); }
	inline int32_t get__Name_0() const { return ____Name_0; }
	inline int32_t* get_address_of__Name_0() { return &____Name_0; }
	inline void set__Name_0(int32_t value)
	{
		____Name_0 = value;
	}

	inline static int32_t get_offset_of__NextStates_1() { return static_cast<int32_t>(offsetof(XdrEntry_t1852396641, ____NextStates_1)); }
	inline Int32U5BU5D_t385246372* get__NextStates_1() const { return ____NextStates_1; }
	inline Int32U5BU5D_t385246372** get_address_of__NextStates_1() { return &____NextStates_1; }
	inline void set__NextStates_1(Int32U5BU5D_t385246372* value)
	{
		____NextStates_1 = value;
		Il2CppCodeGenWriteBarrier((&____NextStates_1), value);
	}

	inline static int32_t get_offset_of__Attributes_2() { return static_cast<int32_t>(offsetof(XdrEntry_t1852396641, ____Attributes_2)); }
	inline XdrAttributeEntryU5BU5D_t4099313209* get__Attributes_2() const { return ____Attributes_2; }
	inline XdrAttributeEntryU5BU5D_t4099313209** get_address_of__Attributes_2() { return &____Attributes_2; }
	inline void set__Attributes_2(XdrAttributeEntryU5BU5D_t4099313209* value)
	{
		____Attributes_2 = value;
		Il2CppCodeGenWriteBarrier((&____Attributes_2), value);
	}

	inline static int32_t get_offset_of__InitFunc_3() { return static_cast<int32_t>(offsetof(XdrEntry_t1852396641, ____InitFunc_3)); }
	inline XdrInitFunction_t326013928 * get__InitFunc_3() const { return ____InitFunc_3; }
	inline XdrInitFunction_t326013928 ** get_address_of__InitFunc_3() { return &____InitFunc_3; }
	inline void set__InitFunc_3(XdrInitFunction_t326013928 * value)
	{
		____InitFunc_3 = value;
		Il2CppCodeGenWriteBarrier((&____InitFunc_3), value);
	}

	inline static int32_t get_offset_of__BeginChildFunc_4() { return static_cast<int32_t>(offsetof(XdrEntry_t1852396641, ____BeginChildFunc_4)); }
	inline XdrBeginChildFunction_t3571964013 * get__BeginChildFunc_4() const { return ____BeginChildFunc_4; }
	inline XdrBeginChildFunction_t3571964013 ** get_address_of__BeginChildFunc_4() { return &____BeginChildFunc_4; }
	inline void set__BeginChildFunc_4(XdrBeginChildFunction_t3571964013 * value)
	{
		____BeginChildFunc_4 = value;
		Il2CppCodeGenWriteBarrier((&____BeginChildFunc_4), value);
	}

	inline static int32_t get_offset_of__EndChildFunc_5() { return static_cast<int32_t>(offsetof(XdrEntry_t1852396641, ____EndChildFunc_5)); }
	inline XdrEndChildFunction_t2609844494 * get__EndChildFunc_5() const { return ____EndChildFunc_5; }
	inline XdrEndChildFunction_t2609844494 ** get_address_of__EndChildFunc_5() { return &____EndChildFunc_5; }
	inline void set__EndChildFunc_5(XdrEndChildFunction_t2609844494 * value)
	{
		____EndChildFunc_5 = value;
		Il2CppCodeGenWriteBarrier((&____EndChildFunc_5), value);
	}

	inline static int32_t get_offset_of__AllowText_6() { return static_cast<int32_t>(offsetof(XdrEntry_t1852396641, ____AllowText_6)); }
	inline bool get__AllowText_6() const { return ____AllowText_6; }
	inline bool* get_address_of__AllowText_6() { return &____AllowText_6; }
	inline void set__AllowText_6(bool value)
	{
		____AllowText_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XDRENTRY_T1852396641_H
#ifndef XMLATOMICVALUE_T3775050121_H
#define XMLATOMICVALUE_T3775050121_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Schema.XmlAtomicValue
struct  XmlAtomicValue_t3775050121  : public XPathItem_t4250588140
{
public:
	// System.Xml.Schema.XmlSchemaType System.Xml.Schema.XmlAtomicValue::xmlType
	XmlSchemaType_t2033747345 * ___xmlType_0;
	// System.Object System.Xml.Schema.XmlAtomicValue::objVal
	RuntimeObject * ___objVal_1;
	// System.TypeCode System.Xml.Schema.XmlAtomicValue::clrType
	int32_t ___clrType_2;
	// System.Xml.Schema.XmlAtomicValue/Union System.Xml.Schema.XmlAtomicValue::unionVal
	Union_t2178763312  ___unionVal_3;
	// System.Xml.Schema.XmlAtomicValue/NamespacePrefixForQName System.Xml.Schema.XmlAtomicValue::nsPrefix
	NamespacePrefixForQName_t198417103 * ___nsPrefix_4;

public:
	inline static int32_t get_offset_of_xmlType_0() { return static_cast<int32_t>(offsetof(XmlAtomicValue_t3775050121, ___xmlType_0)); }
	inline XmlSchemaType_t2033747345 * get_xmlType_0() const { return ___xmlType_0; }
	inline XmlSchemaType_t2033747345 ** get_address_of_xmlType_0() { return &___xmlType_0; }
	inline void set_xmlType_0(XmlSchemaType_t2033747345 * value)
	{
		___xmlType_0 = value;
		Il2CppCodeGenWriteBarrier((&___xmlType_0), value);
	}

	inline static int32_t get_offset_of_objVal_1() { return static_cast<int32_t>(offsetof(XmlAtomicValue_t3775050121, ___objVal_1)); }
	inline RuntimeObject * get_objVal_1() const { return ___objVal_1; }
	inline RuntimeObject ** get_address_of_objVal_1() { return &___objVal_1; }
	inline void set_objVal_1(RuntimeObject * value)
	{
		___objVal_1 = value;
		Il2CppCodeGenWriteBarrier((&___objVal_1), value);
	}

	inline static int32_t get_offset_of_clrType_2() { return static_cast<int32_t>(offsetof(XmlAtomicValue_t3775050121, ___clrType_2)); }
	inline int32_t get_clrType_2() const { return ___clrType_2; }
	inline int32_t* get_address_of_clrType_2() { return &___clrType_2; }
	inline void set_clrType_2(int32_t value)
	{
		___clrType_2 = value;
	}

	inline static int32_t get_offset_of_unionVal_3() { return static_cast<int32_t>(offsetof(XmlAtomicValue_t3775050121, ___unionVal_3)); }
	inline Union_t2178763312  get_unionVal_3() const { return ___unionVal_3; }
	inline Union_t2178763312 * get_address_of_unionVal_3() { return &___unionVal_3; }
	inline void set_unionVal_3(Union_t2178763312  value)
	{
		___unionVal_3 = value;
	}

	inline static int32_t get_offset_of_nsPrefix_4() { return static_cast<int32_t>(offsetof(XmlAtomicValue_t3775050121, ___nsPrefix_4)); }
	inline NamespacePrefixForQName_t198417103 * get_nsPrefix_4() const { return ___nsPrefix_4; }
	inline NamespacePrefixForQName_t198417103 ** get_address_of_nsPrefix_4() { return &___nsPrefix_4; }
	inline void set_nsPrefix_4(NamespacePrefixForQName_t198417103 * value)
	{
		___nsPrefix_4 = value;
		Il2CppCodeGenWriteBarrier((&___nsPrefix_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XMLATOMICVALUE_T3775050121_H
#ifndef XMLSCHEMA_T3742557897_H
#define XMLSCHEMA_T3742557897_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Schema.XmlSchema
struct  XmlSchema_t3742557897  : public XmlSchemaObject_t1315720168
{
public:
	// System.Xml.Schema.XmlSchemaForm System.Xml.Schema.XmlSchema::attributeFormDefault
	int32_t ___attributeFormDefault_6;
	// System.Xml.Schema.XmlSchemaForm System.Xml.Schema.XmlSchema::elementFormDefault
	int32_t ___elementFormDefault_7;
	// System.Xml.Schema.XmlSchemaDerivationMethod System.Xml.Schema.XmlSchema::blockDefault
	int32_t ___blockDefault_8;
	// System.Xml.Schema.XmlSchemaDerivationMethod System.Xml.Schema.XmlSchema::finalDefault
	int32_t ___finalDefault_9;
	// System.String System.Xml.Schema.XmlSchema::targetNs
	String_t* ___targetNs_10;
	// System.String System.Xml.Schema.XmlSchema::version
	String_t* ___version_11;
	// System.Xml.Schema.XmlSchemaObjectCollection System.Xml.Schema.XmlSchema::includes
	XmlSchemaObjectCollection_t1064819932 * ___includes_12;
	// System.Xml.Schema.XmlSchemaObjectCollection System.Xml.Schema.XmlSchema::items
	XmlSchemaObjectCollection_t1064819932 * ___items_13;
	// System.String System.Xml.Schema.XmlSchema::id
	String_t* ___id_14;
	// System.Xml.XmlAttribute[] System.Xml.Schema.XmlSchema::moreAttributes
	XmlAttributeU5BU5D_t1490365106* ___moreAttributes_15;
	// System.Boolean System.Xml.Schema.XmlSchema::isCompiled
	bool ___isCompiled_16;
	// System.Boolean System.Xml.Schema.XmlSchema::isCompiledBySet
	bool ___isCompiledBySet_17;
	// System.Boolean System.Xml.Schema.XmlSchema::isPreprocessed
	bool ___isPreprocessed_18;
	// System.Int32 System.Xml.Schema.XmlSchema::errorCount
	int32_t ___errorCount_19;
	// System.Xml.Schema.XmlSchemaObjectTable System.Xml.Schema.XmlSchema::attributes
	XmlSchemaObjectTable_t2546974348 * ___attributes_20;
	// System.Xml.Schema.XmlSchemaObjectTable System.Xml.Schema.XmlSchema::attributeGroups
	XmlSchemaObjectTable_t2546974348 * ___attributeGroups_21;
	// System.Xml.Schema.XmlSchemaObjectTable System.Xml.Schema.XmlSchema::elements
	XmlSchemaObjectTable_t2546974348 * ___elements_22;
	// System.Xml.Schema.XmlSchemaObjectTable System.Xml.Schema.XmlSchema::types
	XmlSchemaObjectTable_t2546974348 * ___types_23;
	// System.Xml.Schema.XmlSchemaObjectTable System.Xml.Schema.XmlSchema::groups
	XmlSchemaObjectTable_t2546974348 * ___groups_24;
	// System.Xml.Schema.XmlSchemaObjectTable System.Xml.Schema.XmlSchema::notations
	XmlSchemaObjectTable_t2546974348 * ___notations_25;
	// System.Xml.Schema.XmlSchemaObjectTable System.Xml.Schema.XmlSchema::identityConstraints
	XmlSchemaObjectTable_t2546974348 * ___identityConstraints_26;
	// System.Int32 System.Xml.Schema.XmlSchema::schemaId
	int32_t ___schemaId_28;
	// System.Uri System.Xml.Schema.XmlSchema::baseUri
	Uri_t100236324 * ___baseUri_29;
	// System.Collections.Hashtable System.Xml.Schema.XmlSchema::ids
	Hashtable_t1853889766 * ___ids_30;
	// System.Xml.XmlDocument System.Xml.Schema.XmlSchema::document
	XmlDocument_t2837193595 * ___document_31;

public:
	inline static int32_t get_offset_of_attributeFormDefault_6() { return static_cast<int32_t>(offsetof(XmlSchema_t3742557897, ___attributeFormDefault_6)); }
	inline int32_t get_attributeFormDefault_6() const { return ___attributeFormDefault_6; }
	inline int32_t* get_address_of_attributeFormDefault_6() { return &___attributeFormDefault_6; }
	inline void set_attributeFormDefault_6(int32_t value)
	{
		___attributeFormDefault_6 = value;
	}

	inline static int32_t get_offset_of_elementFormDefault_7() { return static_cast<int32_t>(offsetof(XmlSchema_t3742557897, ___elementFormDefault_7)); }
	inline int32_t get_elementFormDefault_7() const { return ___elementFormDefault_7; }
	inline int32_t* get_address_of_elementFormDefault_7() { return &___elementFormDefault_7; }
	inline void set_elementFormDefault_7(int32_t value)
	{
		___elementFormDefault_7 = value;
	}

	inline static int32_t get_offset_of_blockDefault_8() { return static_cast<int32_t>(offsetof(XmlSchema_t3742557897, ___blockDefault_8)); }
	inline int32_t get_blockDefault_8() const { return ___blockDefault_8; }
	inline int32_t* get_address_of_blockDefault_8() { return &___blockDefault_8; }
	inline void set_blockDefault_8(int32_t value)
	{
		___blockDefault_8 = value;
	}

	inline static int32_t get_offset_of_finalDefault_9() { return static_cast<int32_t>(offsetof(XmlSchema_t3742557897, ___finalDefault_9)); }
	inline int32_t get_finalDefault_9() const { return ___finalDefault_9; }
	inline int32_t* get_address_of_finalDefault_9() { return &___finalDefault_9; }
	inline void set_finalDefault_9(int32_t value)
	{
		___finalDefault_9 = value;
	}

	inline static int32_t get_offset_of_targetNs_10() { return static_cast<int32_t>(offsetof(XmlSchema_t3742557897, ___targetNs_10)); }
	inline String_t* get_targetNs_10() const { return ___targetNs_10; }
	inline String_t** get_address_of_targetNs_10() { return &___targetNs_10; }
	inline void set_targetNs_10(String_t* value)
	{
		___targetNs_10 = value;
		Il2CppCodeGenWriteBarrier((&___targetNs_10), value);
	}

	inline static int32_t get_offset_of_version_11() { return static_cast<int32_t>(offsetof(XmlSchema_t3742557897, ___version_11)); }
	inline String_t* get_version_11() const { return ___version_11; }
	inline String_t** get_address_of_version_11() { return &___version_11; }
	inline void set_version_11(String_t* value)
	{
		___version_11 = value;
		Il2CppCodeGenWriteBarrier((&___version_11), value);
	}

	inline static int32_t get_offset_of_includes_12() { return static_cast<int32_t>(offsetof(XmlSchema_t3742557897, ___includes_12)); }
	inline XmlSchemaObjectCollection_t1064819932 * get_includes_12() const { return ___includes_12; }
	inline XmlSchemaObjectCollection_t1064819932 ** get_address_of_includes_12() { return &___includes_12; }
	inline void set_includes_12(XmlSchemaObjectCollection_t1064819932 * value)
	{
		___includes_12 = value;
		Il2CppCodeGenWriteBarrier((&___includes_12), value);
	}

	inline static int32_t get_offset_of_items_13() { return static_cast<int32_t>(offsetof(XmlSchema_t3742557897, ___items_13)); }
	inline XmlSchemaObjectCollection_t1064819932 * get_items_13() const { return ___items_13; }
	inline XmlSchemaObjectCollection_t1064819932 ** get_address_of_items_13() { return &___items_13; }
	inline void set_items_13(XmlSchemaObjectCollection_t1064819932 * value)
	{
		___items_13 = value;
		Il2CppCodeGenWriteBarrier((&___items_13), value);
	}

	inline static int32_t get_offset_of_id_14() { return static_cast<int32_t>(offsetof(XmlSchema_t3742557897, ___id_14)); }
	inline String_t* get_id_14() const { return ___id_14; }
	inline String_t** get_address_of_id_14() { return &___id_14; }
	inline void set_id_14(String_t* value)
	{
		___id_14 = value;
		Il2CppCodeGenWriteBarrier((&___id_14), value);
	}

	inline static int32_t get_offset_of_moreAttributes_15() { return static_cast<int32_t>(offsetof(XmlSchema_t3742557897, ___moreAttributes_15)); }
	inline XmlAttributeU5BU5D_t1490365106* get_moreAttributes_15() const { return ___moreAttributes_15; }
	inline XmlAttributeU5BU5D_t1490365106** get_address_of_moreAttributes_15() { return &___moreAttributes_15; }
	inline void set_moreAttributes_15(XmlAttributeU5BU5D_t1490365106* value)
	{
		___moreAttributes_15 = value;
		Il2CppCodeGenWriteBarrier((&___moreAttributes_15), value);
	}

	inline static int32_t get_offset_of_isCompiled_16() { return static_cast<int32_t>(offsetof(XmlSchema_t3742557897, ___isCompiled_16)); }
	inline bool get_isCompiled_16() const { return ___isCompiled_16; }
	inline bool* get_address_of_isCompiled_16() { return &___isCompiled_16; }
	inline void set_isCompiled_16(bool value)
	{
		___isCompiled_16 = value;
	}

	inline static int32_t get_offset_of_isCompiledBySet_17() { return static_cast<int32_t>(offsetof(XmlSchema_t3742557897, ___isCompiledBySet_17)); }
	inline bool get_isCompiledBySet_17() const { return ___isCompiledBySet_17; }
	inline bool* get_address_of_isCompiledBySet_17() { return &___isCompiledBySet_17; }
	inline void set_isCompiledBySet_17(bool value)
	{
		___isCompiledBySet_17 = value;
	}

	inline static int32_t get_offset_of_isPreprocessed_18() { return static_cast<int32_t>(offsetof(XmlSchema_t3742557897, ___isPreprocessed_18)); }
	inline bool get_isPreprocessed_18() const { return ___isPreprocessed_18; }
	inline bool* get_address_of_isPreprocessed_18() { return &___isPreprocessed_18; }
	inline void set_isPreprocessed_18(bool value)
	{
		___isPreprocessed_18 = value;
	}

	inline static int32_t get_offset_of_errorCount_19() { return static_cast<int32_t>(offsetof(XmlSchema_t3742557897, ___errorCount_19)); }
	inline int32_t get_errorCount_19() const { return ___errorCount_19; }
	inline int32_t* get_address_of_errorCount_19() { return &___errorCount_19; }
	inline void set_errorCount_19(int32_t value)
	{
		___errorCount_19 = value;
	}

	inline static int32_t get_offset_of_attributes_20() { return static_cast<int32_t>(offsetof(XmlSchema_t3742557897, ___attributes_20)); }
	inline XmlSchemaObjectTable_t2546974348 * get_attributes_20() const { return ___attributes_20; }
	inline XmlSchemaObjectTable_t2546974348 ** get_address_of_attributes_20() { return &___attributes_20; }
	inline void set_attributes_20(XmlSchemaObjectTable_t2546974348 * value)
	{
		___attributes_20 = value;
		Il2CppCodeGenWriteBarrier((&___attributes_20), value);
	}

	inline static int32_t get_offset_of_attributeGroups_21() { return static_cast<int32_t>(offsetof(XmlSchema_t3742557897, ___attributeGroups_21)); }
	inline XmlSchemaObjectTable_t2546974348 * get_attributeGroups_21() const { return ___attributeGroups_21; }
	inline XmlSchemaObjectTable_t2546974348 ** get_address_of_attributeGroups_21() { return &___attributeGroups_21; }
	inline void set_attributeGroups_21(XmlSchemaObjectTable_t2546974348 * value)
	{
		___attributeGroups_21 = value;
		Il2CppCodeGenWriteBarrier((&___attributeGroups_21), value);
	}

	inline static int32_t get_offset_of_elements_22() { return static_cast<int32_t>(offsetof(XmlSchema_t3742557897, ___elements_22)); }
	inline XmlSchemaObjectTable_t2546974348 * get_elements_22() const { return ___elements_22; }
	inline XmlSchemaObjectTable_t2546974348 ** get_address_of_elements_22() { return &___elements_22; }
	inline void set_elements_22(XmlSchemaObjectTable_t2546974348 * value)
	{
		___elements_22 = value;
		Il2CppCodeGenWriteBarrier((&___elements_22), value);
	}

	inline static int32_t get_offset_of_types_23() { return static_cast<int32_t>(offsetof(XmlSchema_t3742557897, ___types_23)); }
	inline XmlSchemaObjectTable_t2546974348 * get_types_23() const { return ___types_23; }
	inline XmlSchemaObjectTable_t2546974348 ** get_address_of_types_23() { return &___types_23; }
	inline void set_types_23(XmlSchemaObjectTable_t2546974348 * value)
	{
		___types_23 = value;
		Il2CppCodeGenWriteBarrier((&___types_23), value);
	}

	inline static int32_t get_offset_of_groups_24() { return static_cast<int32_t>(offsetof(XmlSchema_t3742557897, ___groups_24)); }
	inline XmlSchemaObjectTable_t2546974348 * get_groups_24() const { return ___groups_24; }
	inline XmlSchemaObjectTable_t2546974348 ** get_address_of_groups_24() { return &___groups_24; }
	inline void set_groups_24(XmlSchemaObjectTable_t2546974348 * value)
	{
		___groups_24 = value;
		Il2CppCodeGenWriteBarrier((&___groups_24), value);
	}

	inline static int32_t get_offset_of_notations_25() { return static_cast<int32_t>(offsetof(XmlSchema_t3742557897, ___notations_25)); }
	inline XmlSchemaObjectTable_t2546974348 * get_notations_25() const { return ___notations_25; }
	inline XmlSchemaObjectTable_t2546974348 ** get_address_of_notations_25() { return &___notations_25; }
	inline void set_notations_25(XmlSchemaObjectTable_t2546974348 * value)
	{
		___notations_25 = value;
		Il2CppCodeGenWriteBarrier((&___notations_25), value);
	}

	inline static int32_t get_offset_of_identityConstraints_26() { return static_cast<int32_t>(offsetof(XmlSchema_t3742557897, ___identityConstraints_26)); }
	inline XmlSchemaObjectTable_t2546974348 * get_identityConstraints_26() const { return ___identityConstraints_26; }
	inline XmlSchemaObjectTable_t2546974348 ** get_address_of_identityConstraints_26() { return &___identityConstraints_26; }
	inline void set_identityConstraints_26(XmlSchemaObjectTable_t2546974348 * value)
	{
		___identityConstraints_26 = value;
		Il2CppCodeGenWriteBarrier((&___identityConstraints_26), value);
	}

	inline static int32_t get_offset_of_schemaId_28() { return static_cast<int32_t>(offsetof(XmlSchema_t3742557897, ___schemaId_28)); }
	inline int32_t get_schemaId_28() const { return ___schemaId_28; }
	inline int32_t* get_address_of_schemaId_28() { return &___schemaId_28; }
	inline void set_schemaId_28(int32_t value)
	{
		___schemaId_28 = value;
	}

	inline static int32_t get_offset_of_baseUri_29() { return static_cast<int32_t>(offsetof(XmlSchema_t3742557897, ___baseUri_29)); }
	inline Uri_t100236324 * get_baseUri_29() const { return ___baseUri_29; }
	inline Uri_t100236324 ** get_address_of_baseUri_29() { return &___baseUri_29; }
	inline void set_baseUri_29(Uri_t100236324 * value)
	{
		___baseUri_29 = value;
		Il2CppCodeGenWriteBarrier((&___baseUri_29), value);
	}

	inline static int32_t get_offset_of_ids_30() { return static_cast<int32_t>(offsetof(XmlSchema_t3742557897, ___ids_30)); }
	inline Hashtable_t1853889766 * get_ids_30() const { return ___ids_30; }
	inline Hashtable_t1853889766 ** get_address_of_ids_30() { return &___ids_30; }
	inline void set_ids_30(Hashtable_t1853889766 * value)
	{
		___ids_30 = value;
		Il2CppCodeGenWriteBarrier((&___ids_30), value);
	}

	inline static int32_t get_offset_of_document_31() { return static_cast<int32_t>(offsetof(XmlSchema_t3742557897, ___document_31)); }
	inline XmlDocument_t2837193595 * get_document_31() const { return ___document_31; }
	inline XmlDocument_t2837193595 ** get_address_of_document_31() { return &___document_31; }
	inline void set_document_31(XmlDocument_t2837193595 * value)
	{
		___document_31 = value;
		Il2CppCodeGenWriteBarrier((&___document_31), value);
	}
};

struct XmlSchema_t3742557897_StaticFields
{
public:
	// System.Int32 System.Xml.Schema.XmlSchema::globalIdCounter
	int32_t ___globalIdCounter_27;

public:
	inline static int32_t get_offset_of_globalIdCounter_27() { return static_cast<int32_t>(offsetof(XmlSchema_t3742557897_StaticFields, ___globalIdCounter_27)); }
	inline int32_t get_globalIdCounter_27() const { return ___globalIdCounter_27; }
	inline int32_t* get_address_of_globalIdCounter_27() { return &___globalIdCounter_27; }
	inline void set_globalIdCounter_27(int32_t value)
	{
		___globalIdCounter_27 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XMLSCHEMA_T3742557897_H
#ifndef XMLSCHEMAANYATTRIBUTE_T963227996_H
#define XMLSCHEMAANYATTRIBUTE_T963227996_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Schema.XmlSchemaAnyAttribute
struct  XmlSchemaAnyAttribute_t963227996  : public XmlSchemaAnnotated_t2603549639
{
public:
	// System.String System.Xml.Schema.XmlSchemaAnyAttribute::ns
	String_t* ___ns_9;
	// System.Xml.Schema.XmlSchemaContentProcessing System.Xml.Schema.XmlSchemaAnyAttribute::processContents
	int32_t ___processContents_10;
	// System.Xml.Schema.NamespaceList System.Xml.Schema.XmlSchemaAnyAttribute::namespaceList
	NamespaceList_t60893868 * ___namespaceList_11;

public:
	inline static int32_t get_offset_of_ns_9() { return static_cast<int32_t>(offsetof(XmlSchemaAnyAttribute_t963227996, ___ns_9)); }
	inline String_t* get_ns_9() const { return ___ns_9; }
	inline String_t** get_address_of_ns_9() { return &___ns_9; }
	inline void set_ns_9(String_t* value)
	{
		___ns_9 = value;
		Il2CppCodeGenWriteBarrier((&___ns_9), value);
	}

	inline static int32_t get_offset_of_processContents_10() { return static_cast<int32_t>(offsetof(XmlSchemaAnyAttribute_t963227996, ___processContents_10)); }
	inline int32_t get_processContents_10() const { return ___processContents_10; }
	inline int32_t* get_address_of_processContents_10() { return &___processContents_10; }
	inline void set_processContents_10(int32_t value)
	{
		___processContents_10 = value;
	}

	inline static int32_t get_offset_of_namespaceList_11() { return static_cast<int32_t>(offsetof(XmlSchemaAnyAttribute_t963227996, ___namespaceList_11)); }
	inline NamespaceList_t60893868 * get_namespaceList_11() const { return ___namespaceList_11; }
	inline NamespaceList_t60893868 ** get_address_of_namespaceList_11() { return &___namespaceList_11; }
	inline void set_namespaceList_11(NamespaceList_t60893868 * value)
	{
		___namespaceList_11 = value;
		Il2CppCodeGenWriteBarrier((&___namespaceList_11), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XMLSCHEMAANYATTRIBUTE_T963227996_H
#ifndef XMLSCHEMAATTRIBUTE_T2797257020_H
#define XMLSCHEMAATTRIBUTE_T2797257020_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Schema.XmlSchemaAttribute
struct  XmlSchemaAttribute_t2797257020  : public XmlSchemaAnnotated_t2603549639
{
public:
	// System.String System.Xml.Schema.XmlSchemaAttribute::defaultValue
	String_t* ___defaultValue_9;
	// System.String System.Xml.Schema.XmlSchemaAttribute::fixedValue
	String_t* ___fixedValue_10;
	// System.String System.Xml.Schema.XmlSchemaAttribute::name
	String_t* ___name_11;
	// System.Xml.Schema.XmlSchemaForm System.Xml.Schema.XmlSchemaAttribute::form
	int32_t ___form_12;
	// System.Xml.Schema.XmlSchemaUse System.Xml.Schema.XmlSchemaAttribute::use
	int32_t ___use_13;
	// System.Xml.XmlQualifiedName System.Xml.Schema.XmlSchemaAttribute::refName
	XmlQualifiedName_t2760654312 * ___refName_14;
	// System.Xml.XmlQualifiedName System.Xml.Schema.XmlSchemaAttribute::typeName
	XmlQualifiedName_t2760654312 * ___typeName_15;
	// System.Xml.XmlQualifiedName System.Xml.Schema.XmlSchemaAttribute::qualifiedName
	XmlQualifiedName_t2760654312 * ___qualifiedName_16;
	// System.Xml.Schema.XmlSchemaSimpleType System.Xml.Schema.XmlSchemaAttribute::type
	XmlSchemaSimpleType_t2678868104 * ___type_17;
	// System.Xml.Schema.XmlSchemaSimpleType System.Xml.Schema.XmlSchemaAttribute::attributeType
	XmlSchemaSimpleType_t2678868104 * ___attributeType_18;
	// System.Xml.Schema.SchemaAttDef System.Xml.Schema.XmlSchemaAttribute::attDef
	SchemaAttDef_t2429541159 * ___attDef_19;

public:
	inline static int32_t get_offset_of_defaultValue_9() { return static_cast<int32_t>(offsetof(XmlSchemaAttribute_t2797257020, ___defaultValue_9)); }
	inline String_t* get_defaultValue_9() const { return ___defaultValue_9; }
	inline String_t** get_address_of_defaultValue_9() { return &___defaultValue_9; }
	inline void set_defaultValue_9(String_t* value)
	{
		___defaultValue_9 = value;
		Il2CppCodeGenWriteBarrier((&___defaultValue_9), value);
	}

	inline static int32_t get_offset_of_fixedValue_10() { return static_cast<int32_t>(offsetof(XmlSchemaAttribute_t2797257020, ___fixedValue_10)); }
	inline String_t* get_fixedValue_10() const { return ___fixedValue_10; }
	inline String_t** get_address_of_fixedValue_10() { return &___fixedValue_10; }
	inline void set_fixedValue_10(String_t* value)
	{
		___fixedValue_10 = value;
		Il2CppCodeGenWriteBarrier((&___fixedValue_10), value);
	}

	inline static int32_t get_offset_of_name_11() { return static_cast<int32_t>(offsetof(XmlSchemaAttribute_t2797257020, ___name_11)); }
	inline String_t* get_name_11() const { return ___name_11; }
	inline String_t** get_address_of_name_11() { return &___name_11; }
	inline void set_name_11(String_t* value)
	{
		___name_11 = value;
		Il2CppCodeGenWriteBarrier((&___name_11), value);
	}

	inline static int32_t get_offset_of_form_12() { return static_cast<int32_t>(offsetof(XmlSchemaAttribute_t2797257020, ___form_12)); }
	inline int32_t get_form_12() const { return ___form_12; }
	inline int32_t* get_address_of_form_12() { return &___form_12; }
	inline void set_form_12(int32_t value)
	{
		___form_12 = value;
	}

	inline static int32_t get_offset_of_use_13() { return static_cast<int32_t>(offsetof(XmlSchemaAttribute_t2797257020, ___use_13)); }
	inline int32_t get_use_13() const { return ___use_13; }
	inline int32_t* get_address_of_use_13() { return &___use_13; }
	inline void set_use_13(int32_t value)
	{
		___use_13 = value;
	}

	inline static int32_t get_offset_of_refName_14() { return static_cast<int32_t>(offsetof(XmlSchemaAttribute_t2797257020, ___refName_14)); }
	inline XmlQualifiedName_t2760654312 * get_refName_14() const { return ___refName_14; }
	inline XmlQualifiedName_t2760654312 ** get_address_of_refName_14() { return &___refName_14; }
	inline void set_refName_14(XmlQualifiedName_t2760654312 * value)
	{
		___refName_14 = value;
		Il2CppCodeGenWriteBarrier((&___refName_14), value);
	}

	inline static int32_t get_offset_of_typeName_15() { return static_cast<int32_t>(offsetof(XmlSchemaAttribute_t2797257020, ___typeName_15)); }
	inline XmlQualifiedName_t2760654312 * get_typeName_15() const { return ___typeName_15; }
	inline XmlQualifiedName_t2760654312 ** get_address_of_typeName_15() { return &___typeName_15; }
	inline void set_typeName_15(XmlQualifiedName_t2760654312 * value)
	{
		___typeName_15 = value;
		Il2CppCodeGenWriteBarrier((&___typeName_15), value);
	}

	inline static int32_t get_offset_of_qualifiedName_16() { return static_cast<int32_t>(offsetof(XmlSchemaAttribute_t2797257020, ___qualifiedName_16)); }
	inline XmlQualifiedName_t2760654312 * get_qualifiedName_16() const { return ___qualifiedName_16; }
	inline XmlQualifiedName_t2760654312 ** get_address_of_qualifiedName_16() { return &___qualifiedName_16; }
	inline void set_qualifiedName_16(XmlQualifiedName_t2760654312 * value)
	{
		___qualifiedName_16 = value;
		Il2CppCodeGenWriteBarrier((&___qualifiedName_16), value);
	}

	inline static int32_t get_offset_of_type_17() { return static_cast<int32_t>(offsetof(XmlSchemaAttribute_t2797257020, ___type_17)); }
	inline XmlSchemaSimpleType_t2678868104 * get_type_17() const { return ___type_17; }
	inline XmlSchemaSimpleType_t2678868104 ** get_address_of_type_17() { return &___type_17; }
	inline void set_type_17(XmlSchemaSimpleType_t2678868104 * value)
	{
		___type_17 = value;
		Il2CppCodeGenWriteBarrier((&___type_17), value);
	}

	inline static int32_t get_offset_of_attributeType_18() { return static_cast<int32_t>(offsetof(XmlSchemaAttribute_t2797257020, ___attributeType_18)); }
	inline XmlSchemaSimpleType_t2678868104 * get_attributeType_18() const { return ___attributeType_18; }
	inline XmlSchemaSimpleType_t2678868104 ** get_address_of_attributeType_18() { return &___attributeType_18; }
	inline void set_attributeType_18(XmlSchemaSimpleType_t2678868104 * value)
	{
		___attributeType_18 = value;
		Il2CppCodeGenWriteBarrier((&___attributeType_18), value);
	}

	inline static int32_t get_offset_of_attDef_19() { return static_cast<int32_t>(offsetof(XmlSchemaAttribute_t2797257020, ___attDef_19)); }
	inline SchemaAttDef_t2429541159 * get_attDef_19() const { return ___attDef_19; }
	inline SchemaAttDef_t2429541159 ** get_address_of_attDef_19() { return &___attDef_19; }
	inline void set_attDef_19(SchemaAttDef_t2429541159 * value)
	{
		___attDef_19 = value;
		Il2CppCodeGenWriteBarrier((&___attDef_19), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XMLSCHEMAATTRIBUTE_T2797257020_H
#ifndef XMLSCHEMACOMPLEXCONTENT_T3528540772_H
#define XMLSCHEMACOMPLEXCONTENT_T3528540772_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Schema.XmlSchemaComplexContent
struct  XmlSchemaComplexContent_t3528540772  : public XmlSchemaContentModel_t602185179
{
public:
	// System.Xml.Schema.XmlSchemaContent System.Xml.Schema.XmlSchemaComplexContent::content
	XmlSchemaContent_t1040349258 * ___content_9;
	// System.Boolean System.Xml.Schema.XmlSchemaComplexContent::isMixed
	bool ___isMixed_10;
	// System.Boolean System.Xml.Schema.XmlSchemaComplexContent::hasMixedAttribute
	bool ___hasMixedAttribute_11;

public:
	inline static int32_t get_offset_of_content_9() { return static_cast<int32_t>(offsetof(XmlSchemaComplexContent_t3528540772, ___content_9)); }
	inline XmlSchemaContent_t1040349258 * get_content_9() const { return ___content_9; }
	inline XmlSchemaContent_t1040349258 ** get_address_of_content_9() { return &___content_9; }
	inline void set_content_9(XmlSchemaContent_t1040349258 * value)
	{
		___content_9 = value;
		Il2CppCodeGenWriteBarrier((&___content_9), value);
	}

	inline static int32_t get_offset_of_isMixed_10() { return static_cast<int32_t>(offsetof(XmlSchemaComplexContent_t3528540772, ___isMixed_10)); }
	inline bool get_isMixed_10() const { return ___isMixed_10; }
	inline bool* get_address_of_isMixed_10() { return &___isMixed_10; }
	inline void set_isMixed_10(bool value)
	{
		___isMixed_10 = value;
	}

	inline static int32_t get_offset_of_hasMixedAttribute_11() { return static_cast<int32_t>(offsetof(XmlSchemaComplexContent_t3528540772, ___hasMixedAttribute_11)); }
	inline bool get_hasMixedAttribute_11() const { return ___hasMixedAttribute_11; }
	inline bool* get_address_of_hasMixedAttribute_11() { return &___hasMixedAttribute_11; }
	inline void set_hasMixedAttribute_11(bool value)
	{
		___hasMixedAttribute_11 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XMLSCHEMACOMPLEXCONTENT_T3528540772_H
#ifndef XMLSCHEMACOMPLEXCONTENTEXTENSION_T2396613513_H
#define XMLSCHEMACOMPLEXCONTENTEXTENSION_T2396613513_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Schema.XmlSchemaComplexContentExtension
struct  XmlSchemaComplexContentExtension_t2396613513  : public XmlSchemaContent_t1040349258
{
public:
	// System.Xml.Schema.XmlSchemaParticle System.Xml.Schema.XmlSchemaComplexContentExtension::particle
	XmlSchemaParticle_t3828501457 * ___particle_9;
	// System.Xml.Schema.XmlSchemaObjectCollection System.Xml.Schema.XmlSchemaComplexContentExtension::attributes
	XmlSchemaObjectCollection_t1064819932 * ___attributes_10;
	// System.Xml.Schema.XmlSchemaAnyAttribute System.Xml.Schema.XmlSchemaComplexContentExtension::anyAttribute
	XmlSchemaAnyAttribute_t963227996 * ___anyAttribute_11;
	// System.Xml.XmlQualifiedName System.Xml.Schema.XmlSchemaComplexContentExtension::baseTypeName
	XmlQualifiedName_t2760654312 * ___baseTypeName_12;

public:
	inline static int32_t get_offset_of_particle_9() { return static_cast<int32_t>(offsetof(XmlSchemaComplexContentExtension_t2396613513, ___particle_9)); }
	inline XmlSchemaParticle_t3828501457 * get_particle_9() const { return ___particle_9; }
	inline XmlSchemaParticle_t3828501457 ** get_address_of_particle_9() { return &___particle_9; }
	inline void set_particle_9(XmlSchemaParticle_t3828501457 * value)
	{
		___particle_9 = value;
		Il2CppCodeGenWriteBarrier((&___particle_9), value);
	}

	inline static int32_t get_offset_of_attributes_10() { return static_cast<int32_t>(offsetof(XmlSchemaComplexContentExtension_t2396613513, ___attributes_10)); }
	inline XmlSchemaObjectCollection_t1064819932 * get_attributes_10() const { return ___attributes_10; }
	inline XmlSchemaObjectCollection_t1064819932 ** get_address_of_attributes_10() { return &___attributes_10; }
	inline void set_attributes_10(XmlSchemaObjectCollection_t1064819932 * value)
	{
		___attributes_10 = value;
		Il2CppCodeGenWriteBarrier((&___attributes_10), value);
	}

	inline static int32_t get_offset_of_anyAttribute_11() { return static_cast<int32_t>(offsetof(XmlSchemaComplexContentExtension_t2396613513, ___anyAttribute_11)); }
	inline XmlSchemaAnyAttribute_t963227996 * get_anyAttribute_11() const { return ___anyAttribute_11; }
	inline XmlSchemaAnyAttribute_t963227996 ** get_address_of_anyAttribute_11() { return &___anyAttribute_11; }
	inline void set_anyAttribute_11(XmlSchemaAnyAttribute_t963227996 * value)
	{
		___anyAttribute_11 = value;
		Il2CppCodeGenWriteBarrier((&___anyAttribute_11), value);
	}

	inline static int32_t get_offset_of_baseTypeName_12() { return static_cast<int32_t>(offsetof(XmlSchemaComplexContentExtension_t2396613513, ___baseTypeName_12)); }
	inline XmlQualifiedName_t2760654312 * get_baseTypeName_12() const { return ___baseTypeName_12; }
	inline XmlQualifiedName_t2760654312 ** get_address_of_baseTypeName_12() { return &___baseTypeName_12; }
	inline void set_baseTypeName_12(XmlQualifiedName_t2760654312 * value)
	{
		___baseTypeName_12 = value;
		Il2CppCodeGenWriteBarrier((&___baseTypeName_12), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XMLSCHEMACOMPLEXCONTENTEXTENSION_T2396613513_H
#ifndef XMLSCHEMACOMPLEXCONTENTRESTRICTION_T3155540863_H
#define XMLSCHEMACOMPLEXCONTENTRESTRICTION_T3155540863_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Schema.XmlSchemaComplexContentRestriction
struct  XmlSchemaComplexContentRestriction_t3155540863  : public XmlSchemaContent_t1040349258
{
public:
	// System.Xml.Schema.XmlSchemaParticle System.Xml.Schema.XmlSchemaComplexContentRestriction::particle
	XmlSchemaParticle_t3828501457 * ___particle_9;
	// System.Xml.Schema.XmlSchemaObjectCollection System.Xml.Schema.XmlSchemaComplexContentRestriction::attributes
	XmlSchemaObjectCollection_t1064819932 * ___attributes_10;
	// System.Xml.Schema.XmlSchemaAnyAttribute System.Xml.Schema.XmlSchemaComplexContentRestriction::anyAttribute
	XmlSchemaAnyAttribute_t963227996 * ___anyAttribute_11;
	// System.Xml.XmlQualifiedName System.Xml.Schema.XmlSchemaComplexContentRestriction::baseTypeName
	XmlQualifiedName_t2760654312 * ___baseTypeName_12;

public:
	inline static int32_t get_offset_of_particle_9() { return static_cast<int32_t>(offsetof(XmlSchemaComplexContentRestriction_t3155540863, ___particle_9)); }
	inline XmlSchemaParticle_t3828501457 * get_particle_9() const { return ___particle_9; }
	inline XmlSchemaParticle_t3828501457 ** get_address_of_particle_9() { return &___particle_9; }
	inline void set_particle_9(XmlSchemaParticle_t3828501457 * value)
	{
		___particle_9 = value;
		Il2CppCodeGenWriteBarrier((&___particle_9), value);
	}

	inline static int32_t get_offset_of_attributes_10() { return static_cast<int32_t>(offsetof(XmlSchemaComplexContentRestriction_t3155540863, ___attributes_10)); }
	inline XmlSchemaObjectCollection_t1064819932 * get_attributes_10() const { return ___attributes_10; }
	inline XmlSchemaObjectCollection_t1064819932 ** get_address_of_attributes_10() { return &___attributes_10; }
	inline void set_attributes_10(XmlSchemaObjectCollection_t1064819932 * value)
	{
		___attributes_10 = value;
		Il2CppCodeGenWriteBarrier((&___attributes_10), value);
	}

	inline static int32_t get_offset_of_anyAttribute_11() { return static_cast<int32_t>(offsetof(XmlSchemaComplexContentRestriction_t3155540863, ___anyAttribute_11)); }
	inline XmlSchemaAnyAttribute_t963227996 * get_anyAttribute_11() const { return ___anyAttribute_11; }
	inline XmlSchemaAnyAttribute_t963227996 ** get_address_of_anyAttribute_11() { return &___anyAttribute_11; }
	inline void set_anyAttribute_11(XmlSchemaAnyAttribute_t963227996 * value)
	{
		___anyAttribute_11 = value;
		Il2CppCodeGenWriteBarrier((&___anyAttribute_11), value);
	}

	inline static int32_t get_offset_of_baseTypeName_12() { return static_cast<int32_t>(offsetof(XmlSchemaComplexContentRestriction_t3155540863, ___baseTypeName_12)); }
	inline XmlQualifiedName_t2760654312 * get_baseTypeName_12() const { return ___baseTypeName_12; }
	inline XmlQualifiedName_t2760654312 ** get_address_of_baseTypeName_12() { return &___baseTypeName_12; }
	inline void set_baseTypeName_12(XmlQualifiedName_t2760654312 * value)
	{
		___baseTypeName_12 = value;
		Il2CppCodeGenWriteBarrier((&___baseTypeName_12), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XMLSCHEMACOMPLEXCONTENTRESTRICTION_T3155540863_H
#ifndef XMLSCHEMAEXTERNAL_T3074890143_H
#define XMLSCHEMAEXTERNAL_T3074890143_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Schema.XmlSchemaExternal
struct  XmlSchemaExternal_t3074890143  : public XmlSchemaObject_t1315720168
{
public:
	// System.String System.Xml.Schema.XmlSchemaExternal::location
	String_t* ___location_6;
	// System.Uri System.Xml.Schema.XmlSchemaExternal::baseUri
	Uri_t100236324 * ___baseUri_7;
	// System.Xml.Schema.XmlSchema System.Xml.Schema.XmlSchemaExternal::schema
	XmlSchema_t3742557897 * ___schema_8;
	// System.String System.Xml.Schema.XmlSchemaExternal::id
	String_t* ___id_9;
	// System.Xml.XmlAttribute[] System.Xml.Schema.XmlSchemaExternal::moreAttributes
	XmlAttributeU5BU5D_t1490365106* ___moreAttributes_10;
	// System.Xml.Schema.Compositor System.Xml.Schema.XmlSchemaExternal::compositor
	int32_t ___compositor_11;

public:
	inline static int32_t get_offset_of_location_6() { return static_cast<int32_t>(offsetof(XmlSchemaExternal_t3074890143, ___location_6)); }
	inline String_t* get_location_6() const { return ___location_6; }
	inline String_t** get_address_of_location_6() { return &___location_6; }
	inline void set_location_6(String_t* value)
	{
		___location_6 = value;
		Il2CppCodeGenWriteBarrier((&___location_6), value);
	}

	inline static int32_t get_offset_of_baseUri_7() { return static_cast<int32_t>(offsetof(XmlSchemaExternal_t3074890143, ___baseUri_7)); }
	inline Uri_t100236324 * get_baseUri_7() const { return ___baseUri_7; }
	inline Uri_t100236324 ** get_address_of_baseUri_7() { return &___baseUri_7; }
	inline void set_baseUri_7(Uri_t100236324 * value)
	{
		___baseUri_7 = value;
		Il2CppCodeGenWriteBarrier((&___baseUri_7), value);
	}

	inline static int32_t get_offset_of_schema_8() { return static_cast<int32_t>(offsetof(XmlSchemaExternal_t3074890143, ___schema_8)); }
	inline XmlSchema_t3742557897 * get_schema_8() const { return ___schema_8; }
	inline XmlSchema_t3742557897 ** get_address_of_schema_8() { return &___schema_8; }
	inline void set_schema_8(XmlSchema_t3742557897 * value)
	{
		___schema_8 = value;
		Il2CppCodeGenWriteBarrier((&___schema_8), value);
	}

	inline static int32_t get_offset_of_id_9() { return static_cast<int32_t>(offsetof(XmlSchemaExternal_t3074890143, ___id_9)); }
	inline String_t* get_id_9() const { return ___id_9; }
	inline String_t** get_address_of_id_9() { return &___id_9; }
	inline void set_id_9(String_t* value)
	{
		___id_9 = value;
		Il2CppCodeGenWriteBarrier((&___id_9), value);
	}

	inline static int32_t get_offset_of_moreAttributes_10() { return static_cast<int32_t>(offsetof(XmlSchemaExternal_t3074890143, ___moreAttributes_10)); }
	inline XmlAttributeU5BU5D_t1490365106* get_moreAttributes_10() const { return ___moreAttributes_10; }
	inline XmlAttributeU5BU5D_t1490365106** get_address_of_moreAttributes_10() { return &___moreAttributes_10; }
	inline void set_moreAttributes_10(XmlAttributeU5BU5D_t1490365106* value)
	{
		___moreAttributes_10 = value;
		Il2CppCodeGenWriteBarrier((&___moreAttributes_10), value);
	}

	inline static int32_t get_offset_of_compositor_11() { return static_cast<int32_t>(offsetof(XmlSchemaExternal_t3074890143, ___compositor_11)); }
	inline int32_t get_compositor_11() const { return ___compositor_11; }
	inline int32_t* get_address_of_compositor_11() { return &___compositor_11; }
	inline void set_compositor_11(int32_t value)
	{
		___compositor_11 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XMLSCHEMAEXTERNAL_T3074890143_H
#ifndef XMLSCHEMAFACET_T1906017689_H
#define XMLSCHEMAFACET_T1906017689_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Schema.XmlSchemaFacet
struct  XmlSchemaFacet_t1906017689  : public XmlSchemaAnnotated_t2603549639
{
public:
	// System.String System.Xml.Schema.XmlSchemaFacet::value
	String_t* ___value_9;
	// System.Boolean System.Xml.Schema.XmlSchemaFacet::isFixed
	bool ___isFixed_10;
	// System.Xml.Schema.FacetType System.Xml.Schema.XmlSchemaFacet::facetType
	int32_t ___facetType_11;

public:
	inline static int32_t get_offset_of_value_9() { return static_cast<int32_t>(offsetof(XmlSchemaFacet_t1906017689, ___value_9)); }
	inline String_t* get_value_9() const { return ___value_9; }
	inline String_t** get_address_of_value_9() { return &___value_9; }
	inline void set_value_9(String_t* value)
	{
		___value_9 = value;
		Il2CppCodeGenWriteBarrier((&___value_9), value);
	}

	inline static int32_t get_offset_of_isFixed_10() { return static_cast<int32_t>(offsetof(XmlSchemaFacet_t1906017689, ___isFixed_10)); }
	inline bool get_isFixed_10() const { return ___isFixed_10; }
	inline bool* get_address_of_isFixed_10() { return &___isFixed_10; }
	inline void set_isFixed_10(bool value)
	{
		___isFixed_10 = value;
	}

	inline static int32_t get_offset_of_facetType_11() { return static_cast<int32_t>(offsetof(XmlSchemaFacet_t1906017689, ___facetType_11)); }
	inline int32_t get_facetType_11() const { return ___facetType_11; }
	inline int32_t* get_address_of_facetType_11() { return &___facetType_11; }
	inline void set_facetType_11(int32_t value)
	{
		___facetType_11 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XMLSCHEMAFACET_T1906017689_H
#ifndef XMLSCHEMAPARTICLE_T3828501457_H
#define XMLSCHEMAPARTICLE_T3828501457_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Schema.XmlSchemaParticle
struct  XmlSchemaParticle_t3828501457  : public XmlSchemaAnnotated_t2603549639
{
public:
	// System.Decimal System.Xml.Schema.XmlSchemaParticle::minOccurs
	Decimal_t2948259380  ___minOccurs_9;
	// System.Decimal System.Xml.Schema.XmlSchemaParticle::maxOccurs
	Decimal_t2948259380  ___maxOccurs_10;
	// System.Xml.Schema.XmlSchemaParticle/Occurs System.Xml.Schema.XmlSchemaParticle::flags
	int32_t ___flags_11;

public:
	inline static int32_t get_offset_of_minOccurs_9() { return static_cast<int32_t>(offsetof(XmlSchemaParticle_t3828501457, ___minOccurs_9)); }
	inline Decimal_t2948259380  get_minOccurs_9() const { return ___minOccurs_9; }
	inline Decimal_t2948259380 * get_address_of_minOccurs_9() { return &___minOccurs_9; }
	inline void set_minOccurs_9(Decimal_t2948259380  value)
	{
		___minOccurs_9 = value;
	}

	inline static int32_t get_offset_of_maxOccurs_10() { return static_cast<int32_t>(offsetof(XmlSchemaParticle_t3828501457, ___maxOccurs_10)); }
	inline Decimal_t2948259380  get_maxOccurs_10() const { return ___maxOccurs_10; }
	inline Decimal_t2948259380 * get_address_of_maxOccurs_10() { return &___maxOccurs_10; }
	inline void set_maxOccurs_10(Decimal_t2948259380  value)
	{
		___maxOccurs_10 = value;
	}

	inline static int32_t get_offset_of_flags_11() { return static_cast<int32_t>(offsetof(XmlSchemaParticle_t3828501457, ___flags_11)); }
	inline int32_t get_flags_11() const { return ___flags_11; }
	inline int32_t* get_address_of_flags_11() { return &___flags_11; }
	inline void set_flags_11(int32_t value)
	{
		___flags_11 = value;
	}
};

struct XmlSchemaParticle_t3828501457_StaticFields
{
public:
	// System.Xml.Schema.XmlSchemaParticle System.Xml.Schema.XmlSchemaParticle::Empty
	XmlSchemaParticle_t3828501457 * ___Empty_12;

public:
	inline static int32_t get_offset_of_Empty_12() { return static_cast<int32_t>(offsetof(XmlSchemaParticle_t3828501457_StaticFields, ___Empty_12)); }
	inline XmlSchemaParticle_t3828501457 * get_Empty_12() const { return ___Empty_12; }
	inline XmlSchemaParticle_t3828501457 ** get_address_of_Empty_12() { return &___Empty_12; }
	inline void set_Empty_12(XmlSchemaParticle_t3828501457 * value)
	{
		___Empty_12 = value;
		Il2CppCodeGenWriteBarrier((&___Empty_12), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XMLSCHEMAPARTICLE_T3828501457_H
#ifndef XMLSCHEMATYPE_T2033747345_H
#define XMLSCHEMATYPE_T2033747345_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Schema.XmlSchemaType
struct  XmlSchemaType_t2033747345  : public XmlSchemaAnnotated_t2603549639
{
public:
	// System.String System.Xml.Schema.XmlSchemaType::name
	String_t* ___name_9;
	// System.Xml.Schema.XmlSchemaDerivationMethod System.Xml.Schema.XmlSchemaType::final
	int32_t ___final_10;
	// System.Xml.Schema.XmlSchemaDerivationMethod System.Xml.Schema.XmlSchemaType::derivedBy
	int32_t ___derivedBy_11;
	// System.Xml.Schema.XmlSchemaType System.Xml.Schema.XmlSchemaType::baseSchemaType
	XmlSchemaType_t2033747345 * ___baseSchemaType_12;
	// System.Xml.Schema.XmlSchemaDatatype System.Xml.Schema.XmlSchemaType::datatype
	XmlSchemaDatatype_t322714710 * ___datatype_13;
	// System.Xml.Schema.XmlSchemaDerivationMethod System.Xml.Schema.XmlSchemaType::finalResolved
	int32_t ___finalResolved_14;
	// System.Xml.Schema.SchemaElementDecl modreq(System.Runtime.CompilerServices.IsVolatile) System.Xml.Schema.XmlSchemaType::elementDecl
	SchemaElementDecl_t2267464004 * ___elementDecl_15;
	// System.Xml.XmlQualifiedName modreq(System.Runtime.CompilerServices.IsVolatile) System.Xml.Schema.XmlSchemaType::qname
	XmlQualifiedName_t2760654312 * ___qname_16;
	// System.Xml.Schema.XmlSchemaType System.Xml.Schema.XmlSchemaType::redefined
	XmlSchemaType_t2033747345 * ___redefined_17;
	// System.Xml.Schema.XmlSchemaContentType System.Xml.Schema.XmlSchemaType::contentType
	int32_t ___contentType_18;

public:
	inline static int32_t get_offset_of_name_9() { return static_cast<int32_t>(offsetof(XmlSchemaType_t2033747345, ___name_9)); }
	inline String_t* get_name_9() const { return ___name_9; }
	inline String_t** get_address_of_name_9() { return &___name_9; }
	inline void set_name_9(String_t* value)
	{
		___name_9 = value;
		Il2CppCodeGenWriteBarrier((&___name_9), value);
	}

	inline static int32_t get_offset_of_final_10() { return static_cast<int32_t>(offsetof(XmlSchemaType_t2033747345, ___final_10)); }
	inline int32_t get_final_10() const { return ___final_10; }
	inline int32_t* get_address_of_final_10() { return &___final_10; }
	inline void set_final_10(int32_t value)
	{
		___final_10 = value;
	}

	inline static int32_t get_offset_of_derivedBy_11() { return static_cast<int32_t>(offsetof(XmlSchemaType_t2033747345, ___derivedBy_11)); }
	inline int32_t get_derivedBy_11() const { return ___derivedBy_11; }
	inline int32_t* get_address_of_derivedBy_11() { return &___derivedBy_11; }
	inline void set_derivedBy_11(int32_t value)
	{
		___derivedBy_11 = value;
	}

	inline static int32_t get_offset_of_baseSchemaType_12() { return static_cast<int32_t>(offsetof(XmlSchemaType_t2033747345, ___baseSchemaType_12)); }
	inline XmlSchemaType_t2033747345 * get_baseSchemaType_12() const { return ___baseSchemaType_12; }
	inline XmlSchemaType_t2033747345 ** get_address_of_baseSchemaType_12() { return &___baseSchemaType_12; }
	inline void set_baseSchemaType_12(XmlSchemaType_t2033747345 * value)
	{
		___baseSchemaType_12 = value;
		Il2CppCodeGenWriteBarrier((&___baseSchemaType_12), value);
	}

	inline static int32_t get_offset_of_datatype_13() { return static_cast<int32_t>(offsetof(XmlSchemaType_t2033747345, ___datatype_13)); }
	inline XmlSchemaDatatype_t322714710 * get_datatype_13() const { return ___datatype_13; }
	inline XmlSchemaDatatype_t322714710 ** get_address_of_datatype_13() { return &___datatype_13; }
	inline void set_datatype_13(XmlSchemaDatatype_t322714710 * value)
	{
		___datatype_13 = value;
		Il2CppCodeGenWriteBarrier((&___datatype_13), value);
	}

	inline static int32_t get_offset_of_finalResolved_14() { return static_cast<int32_t>(offsetof(XmlSchemaType_t2033747345, ___finalResolved_14)); }
	inline int32_t get_finalResolved_14() const { return ___finalResolved_14; }
	inline int32_t* get_address_of_finalResolved_14() { return &___finalResolved_14; }
	inline void set_finalResolved_14(int32_t value)
	{
		___finalResolved_14 = value;
	}

	inline static int32_t get_offset_of_elementDecl_15() { return static_cast<int32_t>(offsetof(XmlSchemaType_t2033747345, ___elementDecl_15)); }
	inline SchemaElementDecl_t2267464004 * get_elementDecl_15() const { return ___elementDecl_15; }
	inline SchemaElementDecl_t2267464004 ** get_address_of_elementDecl_15() { return &___elementDecl_15; }
	inline void set_elementDecl_15(SchemaElementDecl_t2267464004 * value)
	{
		___elementDecl_15 = value;
		Il2CppCodeGenWriteBarrier((&___elementDecl_15), value);
	}

	inline static int32_t get_offset_of_qname_16() { return static_cast<int32_t>(offsetof(XmlSchemaType_t2033747345, ___qname_16)); }
	inline XmlQualifiedName_t2760654312 * get_qname_16() const { return ___qname_16; }
	inline XmlQualifiedName_t2760654312 ** get_address_of_qname_16() { return &___qname_16; }
	inline void set_qname_16(XmlQualifiedName_t2760654312 * value)
	{
		___qname_16 = value;
		Il2CppCodeGenWriteBarrier((&___qname_16), value);
	}

	inline static int32_t get_offset_of_redefined_17() { return static_cast<int32_t>(offsetof(XmlSchemaType_t2033747345, ___redefined_17)); }
	inline XmlSchemaType_t2033747345 * get_redefined_17() const { return ___redefined_17; }
	inline XmlSchemaType_t2033747345 ** get_address_of_redefined_17() { return &___redefined_17; }
	inline void set_redefined_17(XmlSchemaType_t2033747345 * value)
	{
		___redefined_17 = value;
		Il2CppCodeGenWriteBarrier((&___redefined_17), value);
	}

	inline static int32_t get_offset_of_contentType_18() { return static_cast<int32_t>(offsetof(XmlSchemaType_t2033747345, ___contentType_18)); }
	inline int32_t get_contentType_18() const { return ___contentType_18; }
	inline int32_t* get_address_of_contentType_18() { return &___contentType_18; }
	inline void set_contentType_18(int32_t value)
	{
		___contentType_18 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XMLSCHEMATYPE_T2033747345_H
#ifndef DATATYPE_ANYSIMPLETYPE_T2047875136_H
#define DATATYPE_ANYSIMPLETYPE_T2047875136_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Schema.Datatype_anySimpleType
struct  Datatype_anySimpleType_t2047875136  : public DatatypeImplementation_t3722098011
{
public:

public:
};

struct Datatype_anySimpleType_t2047875136_StaticFields
{
public:
	// System.Type System.Xml.Schema.Datatype_anySimpleType::atomicValueType
	Type_t * ___atomicValueType_91;
	// System.Type System.Xml.Schema.Datatype_anySimpleType::listValueType
	Type_t * ___listValueType_92;

public:
	inline static int32_t get_offset_of_atomicValueType_91() { return static_cast<int32_t>(offsetof(Datatype_anySimpleType_t2047875136_StaticFields, ___atomicValueType_91)); }
	inline Type_t * get_atomicValueType_91() const { return ___atomicValueType_91; }
	inline Type_t ** get_address_of_atomicValueType_91() { return &___atomicValueType_91; }
	inline void set_atomicValueType_91(Type_t * value)
	{
		___atomicValueType_91 = value;
		Il2CppCodeGenWriteBarrier((&___atomicValueType_91), value);
	}

	inline static int32_t get_offset_of_listValueType_92() { return static_cast<int32_t>(offsetof(Datatype_anySimpleType_t2047875136_StaticFields, ___listValueType_92)); }
	inline Type_t * get_listValueType_92() const { return ___listValueType_92; }
	inline Type_t ** get_address_of_listValueType_92() { return &___listValueType_92; }
	inline void set_listValueType_92(Type_t * value)
	{
		___listValueType_92 = value;
		Il2CppCodeGenWriteBarrier((&___listValueType_92), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATATYPE_ANYSIMPLETYPE_T2047875136_H
#ifndef NAMESPACELISTV1COMPAT_T1490102757_H
#define NAMESPACELISTV1COMPAT_T1490102757_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Schema.NamespaceListV1Compat
struct  NamespaceListV1Compat_t1490102757  : public NamespaceList_t60893868
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NAMESPACELISTV1COMPAT_T1490102757_H
#ifndef SCHEMAATTDEF_T2429541159_H
#define SCHEMAATTDEF_T2429541159_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Schema.SchemaAttDef
struct  SchemaAttDef_t2429541159  : public SchemaDeclBase_t3500554832
{
public:
	// System.String System.Xml.Schema.SchemaAttDef::defExpanded
	String_t* ___defExpanded_11;
	// System.Int32 System.Xml.Schema.SchemaAttDef::lineNum
	int32_t ___lineNum_12;
	// System.Int32 System.Xml.Schema.SchemaAttDef::linePos
	int32_t ___linePos_13;
	// System.Int32 System.Xml.Schema.SchemaAttDef::valueLineNum
	int32_t ___valueLineNum_14;
	// System.Int32 System.Xml.Schema.SchemaAttDef::valueLinePos
	int32_t ___valueLinePos_15;
	// System.Xml.Schema.SchemaAttDef/Reserve System.Xml.Schema.SchemaAttDef::reserved
	int32_t ___reserved_16;
	// System.Xml.Schema.XmlSchemaAttribute System.Xml.Schema.SchemaAttDef::schemaAttribute
	XmlSchemaAttribute_t2797257020 * ___schemaAttribute_17;

public:
	inline static int32_t get_offset_of_defExpanded_11() { return static_cast<int32_t>(offsetof(SchemaAttDef_t2429541159, ___defExpanded_11)); }
	inline String_t* get_defExpanded_11() const { return ___defExpanded_11; }
	inline String_t** get_address_of_defExpanded_11() { return &___defExpanded_11; }
	inline void set_defExpanded_11(String_t* value)
	{
		___defExpanded_11 = value;
		Il2CppCodeGenWriteBarrier((&___defExpanded_11), value);
	}

	inline static int32_t get_offset_of_lineNum_12() { return static_cast<int32_t>(offsetof(SchemaAttDef_t2429541159, ___lineNum_12)); }
	inline int32_t get_lineNum_12() const { return ___lineNum_12; }
	inline int32_t* get_address_of_lineNum_12() { return &___lineNum_12; }
	inline void set_lineNum_12(int32_t value)
	{
		___lineNum_12 = value;
	}

	inline static int32_t get_offset_of_linePos_13() { return static_cast<int32_t>(offsetof(SchemaAttDef_t2429541159, ___linePos_13)); }
	inline int32_t get_linePos_13() const { return ___linePos_13; }
	inline int32_t* get_address_of_linePos_13() { return &___linePos_13; }
	inline void set_linePos_13(int32_t value)
	{
		___linePos_13 = value;
	}

	inline static int32_t get_offset_of_valueLineNum_14() { return static_cast<int32_t>(offsetof(SchemaAttDef_t2429541159, ___valueLineNum_14)); }
	inline int32_t get_valueLineNum_14() const { return ___valueLineNum_14; }
	inline int32_t* get_address_of_valueLineNum_14() { return &___valueLineNum_14; }
	inline void set_valueLineNum_14(int32_t value)
	{
		___valueLineNum_14 = value;
	}

	inline static int32_t get_offset_of_valueLinePos_15() { return static_cast<int32_t>(offsetof(SchemaAttDef_t2429541159, ___valueLinePos_15)); }
	inline int32_t get_valueLinePos_15() const { return ___valueLinePos_15; }
	inline int32_t* get_address_of_valueLinePos_15() { return &___valueLinePos_15; }
	inline void set_valueLinePos_15(int32_t value)
	{
		___valueLinePos_15 = value;
	}

	inline static int32_t get_offset_of_reserved_16() { return static_cast<int32_t>(offsetof(SchemaAttDef_t2429541159, ___reserved_16)); }
	inline int32_t get_reserved_16() const { return ___reserved_16; }
	inline int32_t* get_address_of_reserved_16() { return &___reserved_16; }
	inline void set_reserved_16(int32_t value)
	{
		___reserved_16 = value;
	}

	inline static int32_t get_offset_of_schemaAttribute_17() { return static_cast<int32_t>(offsetof(SchemaAttDef_t2429541159, ___schemaAttribute_17)); }
	inline XmlSchemaAttribute_t2797257020 * get_schemaAttribute_17() const { return ___schemaAttribute_17; }
	inline XmlSchemaAttribute_t2797257020 ** get_address_of_schemaAttribute_17() { return &___schemaAttribute_17; }
	inline void set_schemaAttribute_17(XmlSchemaAttribute_t2797257020 * value)
	{
		___schemaAttribute_17 = value;
		Il2CppCodeGenWriteBarrier((&___schemaAttribute_17), value);
	}
};

struct SchemaAttDef_t2429541159_StaticFields
{
public:
	// System.Xml.Schema.SchemaAttDef System.Xml.Schema.SchemaAttDef::Empty
	SchemaAttDef_t2429541159 * ___Empty_18;

public:
	inline static int32_t get_offset_of_Empty_18() { return static_cast<int32_t>(offsetof(SchemaAttDef_t2429541159_StaticFields, ___Empty_18)); }
	inline SchemaAttDef_t2429541159 * get_Empty_18() const { return ___Empty_18; }
	inline SchemaAttDef_t2429541159 ** get_address_of_Empty_18() { return &___Empty_18; }
	inline void set_Empty_18(SchemaAttDef_t2429541159 * value)
	{
		___Empty_18 = value;
		Il2CppCodeGenWriteBarrier((&___Empty_18), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SCHEMAATTDEF_T2429541159_H
#ifndef SCHEMAELEMENTDECL_T2267464004_H
#define SCHEMAELEMENTDECL_T2267464004_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Schema.SchemaElementDecl
struct  SchemaElementDecl_t2267464004  : public SchemaDeclBase_t3500554832
{
public:
	// System.Collections.Generic.Dictionary`2<System.Xml.XmlQualifiedName,System.Xml.Schema.SchemaAttDef> System.Xml.Schema.SchemaElementDecl::attdefs
	Dictionary_2_t2404538479 * ___attdefs_11;
	// System.Collections.Generic.List`1<System.Xml.IDtdDefaultAttributeInfo> System.Xml.Schema.SchemaElementDecl::defaultAttdefs
	List_1_t4247439429 * ___defaultAttdefs_12;
	// System.Boolean System.Xml.Schema.SchemaElementDecl::isIdDeclared
	bool ___isIdDeclared_13;
	// System.Boolean System.Xml.Schema.SchemaElementDecl::hasNonCDataAttribute
	bool ___hasNonCDataAttribute_14;
	// System.Boolean System.Xml.Schema.SchemaElementDecl::isAbstract
	bool ___isAbstract_15;
	// System.Boolean System.Xml.Schema.SchemaElementDecl::isNillable
	bool ___isNillable_16;
	// System.Boolean System.Xml.Schema.SchemaElementDecl::hasRequiredAttribute
	bool ___hasRequiredAttribute_17;
	// System.Boolean System.Xml.Schema.SchemaElementDecl::isNotationDeclared
	bool ___isNotationDeclared_18;
	// System.Collections.Generic.Dictionary`2<System.Xml.XmlQualifiedName,System.Xml.XmlQualifiedName> System.Xml.Schema.SchemaElementDecl::prohibitedAttributes
	Dictionary_2_t2735651632 * ___prohibitedAttributes_19;
	// System.Xml.Schema.ContentValidator System.Xml.Schema.SchemaElementDecl::contentValidator
	ContentValidator_t2085579204 * ___contentValidator_20;
	// System.Xml.Schema.XmlSchemaAnyAttribute System.Xml.Schema.SchemaElementDecl::anyAttribute
	XmlSchemaAnyAttribute_t963227996 * ___anyAttribute_21;
	// System.Xml.Schema.XmlSchemaDerivationMethod System.Xml.Schema.SchemaElementDecl::block
	int32_t ___block_22;
	// System.Xml.Schema.CompiledIdentityConstraint[] System.Xml.Schema.SchemaElementDecl::constraints
	CompiledIdentityConstraintU5BU5D_t2573057752* ___constraints_23;
	// System.Xml.Schema.XmlSchemaElement System.Xml.Schema.SchemaElementDecl::schemaElement
	XmlSchemaElement_t427880856 * ___schemaElement_24;

public:
	inline static int32_t get_offset_of_attdefs_11() { return static_cast<int32_t>(offsetof(SchemaElementDecl_t2267464004, ___attdefs_11)); }
	inline Dictionary_2_t2404538479 * get_attdefs_11() const { return ___attdefs_11; }
	inline Dictionary_2_t2404538479 ** get_address_of_attdefs_11() { return &___attdefs_11; }
	inline void set_attdefs_11(Dictionary_2_t2404538479 * value)
	{
		___attdefs_11 = value;
		Il2CppCodeGenWriteBarrier((&___attdefs_11), value);
	}

	inline static int32_t get_offset_of_defaultAttdefs_12() { return static_cast<int32_t>(offsetof(SchemaElementDecl_t2267464004, ___defaultAttdefs_12)); }
	inline List_1_t4247439429 * get_defaultAttdefs_12() const { return ___defaultAttdefs_12; }
	inline List_1_t4247439429 ** get_address_of_defaultAttdefs_12() { return &___defaultAttdefs_12; }
	inline void set_defaultAttdefs_12(List_1_t4247439429 * value)
	{
		___defaultAttdefs_12 = value;
		Il2CppCodeGenWriteBarrier((&___defaultAttdefs_12), value);
	}

	inline static int32_t get_offset_of_isIdDeclared_13() { return static_cast<int32_t>(offsetof(SchemaElementDecl_t2267464004, ___isIdDeclared_13)); }
	inline bool get_isIdDeclared_13() const { return ___isIdDeclared_13; }
	inline bool* get_address_of_isIdDeclared_13() { return &___isIdDeclared_13; }
	inline void set_isIdDeclared_13(bool value)
	{
		___isIdDeclared_13 = value;
	}

	inline static int32_t get_offset_of_hasNonCDataAttribute_14() { return static_cast<int32_t>(offsetof(SchemaElementDecl_t2267464004, ___hasNonCDataAttribute_14)); }
	inline bool get_hasNonCDataAttribute_14() const { return ___hasNonCDataAttribute_14; }
	inline bool* get_address_of_hasNonCDataAttribute_14() { return &___hasNonCDataAttribute_14; }
	inline void set_hasNonCDataAttribute_14(bool value)
	{
		___hasNonCDataAttribute_14 = value;
	}

	inline static int32_t get_offset_of_isAbstract_15() { return static_cast<int32_t>(offsetof(SchemaElementDecl_t2267464004, ___isAbstract_15)); }
	inline bool get_isAbstract_15() const { return ___isAbstract_15; }
	inline bool* get_address_of_isAbstract_15() { return &___isAbstract_15; }
	inline void set_isAbstract_15(bool value)
	{
		___isAbstract_15 = value;
	}

	inline static int32_t get_offset_of_isNillable_16() { return static_cast<int32_t>(offsetof(SchemaElementDecl_t2267464004, ___isNillable_16)); }
	inline bool get_isNillable_16() const { return ___isNillable_16; }
	inline bool* get_address_of_isNillable_16() { return &___isNillable_16; }
	inline void set_isNillable_16(bool value)
	{
		___isNillable_16 = value;
	}

	inline static int32_t get_offset_of_hasRequiredAttribute_17() { return static_cast<int32_t>(offsetof(SchemaElementDecl_t2267464004, ___hasRequiredAttribute_17)); }
	inline bool get_hasRequiredAttribute_17() const { return ___hasRequiredAttribute_17; }
	inline bool* get_address_of_hasRequiredAttribute_17() { return &___hasRequiredAttribute_17; }
	inline void set_hasRequiredAttribute_17(bool value)
	{
		___hasRequiredAttribute_17 = value;
	}

	inline static int32_t get_offset_of_isNotationDeclared_18() { return static_cast<int32_t>(offsetof(SchemaElementDecl_t2267464004, ___isNotationDeclared_18)); }
	inline bool get_isNotationDeclared_18() const { return ___isNotationDeclared_18; }
	inline bool* get_address_of_isNotationDeclared_18() { return &___isNotationDeclared_18; }
	inline void set_isNotationDeclared_18(bool value)
	{
		___isNotationDeclared_18 = value;
	}

	inline static int32_t get_offset_of_prohibitedAttributes_19() { return static_cast<int32_t>(offsetof(SchemaElementDecl_t2267464004, ___prohibitedAttributes_19)); }
	inline Dictionary_2_t2735651632 * get_prohibitedAttributes_19() const { return ___prohibitedAttributes_19; }
	inline Dictionary_2_t2735651632 ** get_address_of_prohibitedAttributes_19() { return &___prohibitedAttributes_19; }
	inline void set_prohibitedAttributes_19(Dictionary_2_t2735651632 * value)
	{
		___prohibitedAttributes_19 = value;
		Il2CppCodeGenWriteBarrier((&___prohibitedAttributes_19), value);
	}

	inline static int32_t get_offset_of_contentValidator_20() { return static_cast<int32_t>(offsetof(SchemaElementDecl_t2267464004, ___contentValidator_20)); }
	inline ContentValidator_t2085579204 * get_contentValidator_20() const { return ___contentValidator_20; }
	inline ContentValidator_t2085579204 ** get_address_of_contentValidator_20() { return &___contentValidator_20; }
	inline void set_contentValidator_20(ContentValidator_t2085579204 * value)
	{
		___contentValidator_20 = value;
		Il2CppCodeGenWriteBarrier((&___contentValidator_20), value);
	}

	inline static int32_t get_offset_of_anyAttribute_21() { return static_cast<int32_t>(offsetof(SchemaElementDecl_t2267464004, ___anyAttribute_21)); }
	inline XmlSchemaAnyAttribute_t963227996 * get_anyAttribute_21() const { return ___anyAttribute_21; }
	inline XmlSchemaAnyAttribute_t963227996 ** get_address_of_anyAttribute_21() { return &___anyAttribute_21; }
	inline void set_anyAttribute_21(XmlSchemaAnyAttribute_t963227996 * value)
	{
		___anyAttribute_21 = value;
		Il2CppCodeGenWriteBarrier((&___anyAttribute_21), value);
	}

	inline static int32_t get_offset_of_block_22() { return static_cast<int32_t>(offsetof(SchemaElementDecl_t2267464004, ___block_22)); }
	inline int32_t get_block_22() const { return ___block_22; }
	inline int32_t* get_address_of_block_22() { return &___block_22; }
	inline void set_block_22(int32_t value)
	{
		___block_22 = value;
	}

	inline static int32_t get_offset_of_constraints_23() { return static_cast<int32_t>(offsetof(SchemaElementDecl_t2267464004, ___constraints_23)); }
	inline CompiledIdentityConstraintU5BU5D_t2573057752* get_constraints_23() const { return ___constraints_23; }
	inline CompiledIdentityConstraintU5BU5D_t2573057752** get_address_of_constraints_23() { return &___constraints_23; }
	inline void set_constraints_23(CompiledIdentityConstraintU5BU5D_t2573057752* value)
	{
		___constraints_23 = value;
		Il2CppCodeGenWriteBarrier((&___constraints_23), value);
	}

	inline static int32_t get_offset_of_schemaElement_24() { return static_cast<int32_t>(offsetof(SchemaElementDecl_t2267464004, ___schemaElement_24)); }
	inline XmlSchemaElement_t427880856 * get_schemaElement_24() const { return ___schemaElement_24; }
	inline XmlSchemaElement_t427880856 ** get_address_of_schemaElement_24() { return &___schemaElement_24; }
	inline void set_schemaElement_24(XmlSchemaElement_t427880856 * value)
	{
		___schemaElement_24 = value;
		Il2CppCodeGenWriteBarrier((&___schemaElement_24), value);
	}
};

struct SchemaElementDecl_t2267464004_StaticFields
{
public:
	// System.Xml.Schema.SchemaElementDecl System.Xml.Schema.SchemaElementDecl::Empty
	SchemaElementDecl_t2267464004 * ___Empty_25;

public:
	inline static int32_t get_offset_of_Empty_25() { return static_cast<int32_t>(offsetof(SchemaElementDecl_t2267464004_StaticFields, ___Empty_25)); }
	inline SchemaElementDecl_t2267464004 * get_Empty_25() const { return ___Empty_25; }
	inline SchemaElementDecl_t2267464004 ** get_address_of_Empty_25() { return &___Empty_25; }
	inline void set_Empty_25(SchemaElementDecl_t2267464004 * value)
	{
		___Empty_25 = value;
		Il2CppCodeGenWriteBarrier((&___Empty_25), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SCHEMAELEMENTDECL_T2267464004_H
#ifndef VALIDATIONEVENTHANDLER_T791314227_H
#define VALIDATIONEVENTHANDLER_T791314227_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Schema.ValidationEventHandler
struct  ValidationEventHandler_t791314227  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VALIDATIONEVENTHANDLER_T791314227_H
#ifndef XDRBEGINCHILDFUNCTION_T3571964013_H
#define XDRBEGINCHILDFUNCTION_T3571964013_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Schema.XdrBuilder/XdrBeginChildFunction
struct  XdrBeginChildFunction_t3571964013  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XDRBEGINCHILDFUNCTION_T3571964013_H
#ifndef XDRBUILDFUNCTION_T4965607_H
#define XDRBUILDFUNCTION_T4965607_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Schema.XdrBuilder/XdrBuildFunction
struct  XdrBuildFunction_t4965607  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XDRBUILDFUNCTION_T4965607_H
#ifndef XDRENDCHILDFUNCTION_T2609844494_H
#define XDRENDCHILDFUNCTION_T2609844494_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Schema.XdrBuilder/XdrEndChildFunction
struct  XdrEndChildFunction_t2609844494  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XDRENDCHILDFUNCTION_T2609844494_H
#ifndef XDRINITFUNCTION_T326013928_H
#define XDRINITFUNCTION_T326013928_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Schema.XdrBuilder/XdrInitFunction
struct  XdrInitFunction_t326013928  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XDRINITFUNCTION_T326013928_H
#ifndef XMLSCHEMAANY_T1119175207_H
#define XMLSCHEMAANY_T1119175207_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Schema.XmlSchemaAny
struct  XmlSchemaAny_t1119175207  : public XmlSchemaParticle_t3828501457
{
public:
	// System.String System.Xml.Schema.XmlSchemaAny::ns
	String_t* ___ns_13;
	// System.Xml.Schema.XmlSchemaContentProcessing System.Xml.Schema.XmlSchemaAny::processContents
	int32_t ___processContents_14;
	// System.Xml.Schema.NamespaceList System.Xml.Schema.XmlSchemaAny::namespaceList
	NamespaceList_t60893868 * ___namespaceList_15;

public:
	inline static int32_t get_offset_of_ns_13() { return static_cast<int32_t>(offsetof(XmlSchemaAny_t1119175207, ___ns_13)); }
	inline String_t* get_ns_13() const { return ___ns_13; }
	inline String_t** get_address_of_ns_13() { return &___ns_13; }
	inline void set_ns_13(String_t* value)
	{
		___ns_13 = value;
		Il2CppCodeGenWriteBarrier((&___ns_13), value);
	}

	inline static int32_t get_offset_of_processContents_14() { return static_cast<int32_t>(offsetof(XmlSchemaAny_t1119175207, ___processContents_14)); }
	inline int32_t get_processContents_14() const { return ___processContents_14; }
	inline int32_t* get_address_of_processContents_14() { return &___processContents_14; }
	inline void set_processContents_14(int32_t value)
	{
		___processContents_14 = value;
	}

	inline static int32_t get_offset_of_namespaceList_15() { return static_cast<int32_t>(offsetof(XmlSchemaAny_t1119175207, ___namespaceList_15)); }
	inline NamespaceList_t60893868 * get_namespaceList_15() const { return ___namespaceList_15; }
	inline NamespaceList_t60893868 ** get_address_of_namespaceList_15() { return &___namespaceList_15; }
	inline void set_namespaceList_15(NamespaceList_t60893868 * value)
	{
		___namespaceList_15 = value;
		Il2CppCodeGenWriteBarrier((&___namespaceList_15), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XMLSCHEMAANY_T1119175207_H
#ifndef XMLSCHEMACOMPLEXTYPE_T3740801802_H
#define XMLSCHEMACOMPLEXTYPE_T3740801802_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Schema.XmlSchemaComplexType
struct  XmlSchemaComplexType_t3740801802  : public XmlSchemaType_t2033747345
{
public:
	// System.Xml.Schema.XmlSchemaDerivationMethod System.Xml.Schema.XmlSchemaComplexType::block
	int32_t ___block_19;
	// System.Xml.Schema.XmlSchemaContentModel System.Xml.Schema.XmlSchemaComplexType::contentModel
	XmlSchemaContentModel_t602185179 * ___contentModel_20;
	// System.Xml.Schema.XmlSchemaParticle System.Xml.Schema.XmlSchemaComplexType::particle
	XmlSchemaParticle_t3828501457 * ___particle_21;
	// System.Xml.Schema.XmlSchemaObjectCollection System.Xml.Schema.XmlSchemaComplexType::attributes
	XmlSchemaObjectCollection_t1064819932 * ___attributes_22;
	// System.Xml.Schema.XmlSchemaAnyAttribute System.Xml.Schema.XmlSchemaComplexType::anyAttribute
	XmlSchemaAnyAttribute_t963227996 * ___anyAttribute_23;
	// System.Xml.Schema.XmlSchemaParticle System.Xml.Schema.XmlSchemaComplexType::contentTypeParticle
	XmlSchemaParticle_t3828501457 * ___contentTypeParticle_24;
	// System.Xml.Schema.XmlSchemaDerivationMethod System.Xml.Schema.XmlSchemaComplexType::blockResolved
	int32_t ___blockResolved_25;
	// System.Xml.Schema.XmlSchemaObjectTable System.Xml.Schema.XmlSchemaComplexType::localElements
	XmlSchemaObjectTable_t2546974348 * ___localElements_26;
	// System.Xml.Schema.XmlSchemaObjectTable System.Xml.Schema.XmlSchemaComplexType::attributeUses
	XmlSchemaObjectTable_t2546974348 * ___attributeUses_27;
	// System.Xml.Schema.XmlSchemaAnyAttribute System.Xml.Schema.XmlSchemaComplexType::attributeWildcard
	XmlSchemaAnyAttribute_t963227996 * ___attributeWildcard_28;
	// System.Byte System.Xml.Schema.XmlSchemaComplexType::pvFlags
	uint8_t ___pvFlags_32;

public:
	inline static int32_t get_offset_of_block_19() { return static_cast<int32_t>(offsetof(XmlSchemaComplexType_t3740801802, ___block_19)); }
	inline int32_t get_block_19() const { return ___block_19; }
	inline int32_t* get_address_of_block_19() { return &___block_19; }
	inline void set_block_19(int32_t value)
	{
		___block_19 = value;
	}

	inline static int32_t get_offset_of_contentModel_20() { return static_cast<int32_t>(offsetof(XmlSchemaComplexType_t3740801802, ___contentModel_20)); }
	inline XmlSchemaContentModel_t602185179 * get_contentModel_20() const { return ___contentModel_20; }
	inline XmlSchemaContentModel_t602185179 ** get_address_of_contentModel_20() { return &___contentModel_20; }
	inline void set_contentModel_20(XmlSchemaContentModel_t602185179 * value)
	{
		___contentModel_20 = value;
		Il2CppCodeGenWriteBarrier((&___contentModel_20), value);
	}

	inline static int32_t get_offset_of_particle_21() { return static_cast<int32_t>(offsetof(XmlSchemaComplexType_t3740801802, ___particle_21)); }
	inline XmlSchemaParticle_t3828501457 * get_particle_21() const { return ___particle_21; }
	inline XmlSchemaParticle_t3828501457 ** get_address_of_particle_21() { return &___particle_21; }
	inline void set_particle_21(XmlSchemaParticle_t3828501457 * value)
	{
		___particle_21 = value;
		Il2CppCodeGenWriteBarrier((&___particle_21), value);
	}

	inline static int32_t get_offset_of_attributes_22() { return static_cast<int32_t>(offsetof(XmlSchemaComplexType_t3740801802, ___attributes_22)); }
	inline XmlSchemaObjectCollection_t1064819932 * get_attributes_22() const { return ___attributes_22; }
	inline XmlSchemaObjectCollection_t1064819932 ** get_address_of_attributes_22() { return &___attributes_22; }
	inline void set_attributes_22(XmlSchemaObjectCollection_t1064819932 * value)
	{
		___attributes_22 = value;
		Il2CppCodeGenWriteBarrier((&___attributes_22), value);
	}

	inline static int32_t get_offset_of_anyAttribute_23() { return static_cast<int32_t>(offsetof(XmlSchemaComplexType_t3740801802, ___anyAttribute_23)); }
	inline XmlSchemaAnyAttribute_t963227996 * get_anyAttribute_23() const { return ___anyAttribute_23; }
	inline XmlSchemaAnyAttribute_t963227996 ** get_address_of_anyAttribute_23() { return &___anyAttribute_23; }
	inline void set_anyAttribute_23(XmlSchemaAnyAttribute_t963227996 * value)
	{
		___anyAttribute_23 = value;
		Il2CppCodeGenWriteBarrier((&___anyAttribute_23), value);
	}

	inline static int32_t get_offset_of_contentTypeParticle_24() { return static_cast<int32_t>(offsetof(XmlSchemaComplexType_t3740801802, ___contentTypeParticle_24)); }
	inline XmlSchemaParticle_t3828501457 * get_contentTypeParticle_24() const { return ___contentTypeParticle_24; }
	inline XmlSchemaParticle_t3828501457 ** get_address_of_contentTypeParticle_24() { return &___contentTypeParticle_24; }
	inline void set_contentTypeParticle_24(XmlSchemaParticle_t3828501457 * value)
	{
		___contentTypeParticle_24 = value;
		Il2CppCodeGenWriteBarrier((&___contentTypeParticle_24), value);
	}

	inline static int32_t get_offset_of_blockResolved_25() { return static_cast<int32_t>(offsetof(XmlSchemaComplexType_t3740801802, ___blockResolved_25)); }
	inline int32_t get_blockResolved_25() const { return ___blockResolved_25; }
	inline int32_t* get_address_of_blockResolved_25() { return &___blockResolved_25; }
	inline void set_blockResolved_25(int32_t value)
	{
		___blockResolved_25 = value;
	}

	inline static int32_t get_offset_of_localElements_26() { return static_cast<int32_t>(offsetof(XmlSchemaComplexType_t3740801802, ___localElements_26)); }
	inline XmlSchemaObjectTable_t2546974348 * get_localElements_26() const { return ___localElements_26; }
	inline XmlSchemaObjectTable_t2546974348 ** get_address_of_localElements_26() { return &___localElements_26; }
	inline void set_localElements_26(XmlSchemaObjectTable_t2546974348 * value)
	{
		___localElements_26 = value;
		Il2CppCodeGenWriteBarrier((&___localElements_26), value);
	}

	inline static int32_t get_offset_of_attributeUses_27() { return static_cast<int32_t>(offsetof(XmlSchemaComplexType_t3740801802, ___attributeUses_27)); }
	inline XmlSchemaObjectTable_t2546974348 * get_attributeUses_27() const { return ___attributeUses_27; }
	inline XmlSchemaObjectTable_t2546974348 ** get_address_of_attributeUses_27() { return &___attributeUses_27; }
	inline void set_attributeUses_27(XmlSchemaObjectTable_t2546974348 * value)
	{
		___attributeUses_27 = value;
		Il2CppCodeGenWriteBarrier((&___attributeUses_27), value);
	}

	inline static int32_t get_offset_of_attributeWildcard_28() { return static_cast<int32_t>(offsetof(XmlSchemaComplexType_t3740801802, ___attributeWildcard_28)); }
	inline XmlSchemaAnyAttribute_t963227996 * get_attributeWildcard_28() const { return ___attributeWildcard_28; }
	inline XmlSchemaAnyAttribute_t963227996 ** get_address_of_attributeWildcard_28() { return &___attributeWildcard_28; }
	inline void set_attributeWildcard_28(XmlSchemaAnyAttribute_t963227996 * value)
	{
		___attributeWildcard_28 = value;
		Il2CppCodeGenWriteBarrier((&___attributeWildcard_28), value);
	}

	inline static int32_t get_offset_of_pvFlags_32() { return static_cast<int32_t>(offsetof(XmlSchemaComplexType_t3740801802, ___pvFlags_32)); }
	inline uint8_t get_pvFlags_32() const { return ___pvFlags_32; }
	inline uint8_t* get_address_of_pvFlags_32() { return &___pvFlags_32; }
	inline void set_pvFlags_32(uint8_t value)
	{
		___pvFlags_32 = value;
	}
};

struct XmlSchemaComplexType_t3740801802_StaticFields
{
public:
	// System.Xml.Schema.XmlSchemaComplexType System.Xml.Schema.XmlSchemaComplexType::anyTypeLax
	XmlSchemaComplexType_t3740801802 * ___anyTypeLax_29;
	// System.Xml.Schema.XmlSchemaComplexType System.Xml.Schema.XmlSchemaComplexType::anyTypeSkip
	XmlSchemaComplexType_t3740801802 * ___anyTypeSkip_30;
	// System.Xml.Schema.XmlSchemaComplexType System.Xml.Schema.XmlSchemaComplexType::untypedAnyType
	XmlSchemaComplexType_t3740801802 * ___untypedAnyType_31;

public:
	inline static int32_t get_offset_of_anyTypeLax_29() { return static_cast<int32_t>(offsetof(XmlSchemaComplexType_t3740801802_StaticFields, ___anyTypeLax_29)); }
	inline XmlSchemaComplexType_t3740801802 * get_anyTypeLax_29() const { return ___anyTypeLax_29; }
	inline XmlSchemaComplexType_t3740801802 ** get_address_of_anyTypeLax_29() { return &___anyTypeLax_29; }
	inline void set_anyTypeLax_29(XmlSchemaComplexType_t3740801802 * value)
	{
		___anyTypeLax_29 = value;
		Il2CppCodeGenWriteBarrier((&___anyTypeLax_29), value);
	}

	inline static int32_t get_offset_of_anyTypeSkip_30() { return static_cast<int32_t>(offsetof(XmlSchemaComplexType_t3740801802_StaticFields, ___anyTypeSkip_30)); }
	inline XmlSchemaComplexType_t3740801802 * get_anyTypeSkip_30() const { return ___anyTypeSkip_30; }
	inline XmlSchemaComplexType_t3740801802 ** get_address_of_anyTypeSkip_30() { return &___anyTypeSkip_30; }
	inline void set_anyTypeSkip_30(XmlSchemaComplexType_t3740801802 * value)
	{
		___anyTypeSkip_30 = value;
		Il2CppCodeGenWriteBarrier((&___anyTypeSkip_30), value);
	}

	inline static int32_t get_offset_of_untypedAnyType_31() { return static_cast<int32_t>(offsetof(XmlSchemaComplexType_t3740801802_StaticFields, ___untypedAnyType_31)); }
	inline XmlSchemaComplexType_t3740801802 * get_untypedAnyType_31() const { return ___untypedAnyType_31; }
	inline XmlSchemaComplexType_t3740801802 ** get_address_of_untypedAnyType_31() { return &___untypedAnyType_31; }
	inline void set_untypedAnyType_31(XmlSchemaComplexType_t3740801802 * value)
	{
		___untypedAnyType_31 = value;
		Il2CppCodeGenWriteBarrier((&___untypedAnyType_31), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XMLSCHEMACOMPLEXTYPE_T3740801802_H
#ifndef XMLSCHEMAELEMENT_T427880856_H
#define XMLSCHEMAELEMENT_T427880856_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Schema.XmlSchemaElement
struct  XmlSchemaElement_t427880856  : public XmlSchemaParticle_t3828501457
{
public:
	// System.Boolean System.Xml.Schema.XmlSchemaElement::isAbstract
	bool ___isAbstract_13;
	// System.Boolean System.Xml.Schema.XmlSchemaElement::hasAbstractAttribute
	bool ___hasAbstractAttribute_14;
	// System.Boolean System.Xml.Schema.XmlSchemaElement::isNillable
	bool ___isNillable_15;
	// System.Boolean System.Xml.Schema.XmlSchemaElement::hasNillableAttribute
	bool ___hasNillableAttribute_16;
	// System.Boolean System.Xml.Schema.XmlSchemaElement::isLocalTypeDerivationChecked
	bool ___isLocalTypeDerivationChecked_17;
	// System.Xml.Schema.XmlSchemaDerivationMethod System.Xml.Schema.XmlSchemaElement::block
	int32_t ___block_18;
	// System.Xml.Schema.XmlSchemaDerivationMethod System.Xml.Schema.XmlSchemaElement::final
	int32_t ___final_19;
	// System.Xml.Schema.XmlSchemaForm System.Xml.Schema.XmlSchemaElement::form
	int32_t ___form_20;
	// System.String System.Xml.Schema.XmlSchemaElement::defaultValue
	String_t* ___defaultValue_21;
	// System.String System.Xml.Schema.XmlSchemaElement::fixedValue
	String_t* ___fixedValue_22;
	// System.String System.Xml.Schema.XmlSchemaElement::name
	String_t* ___name_23;
	// System.Xml.XmlQualifiedName System.Xml.Schema.XmlSchemaElement::refName
	XmlQualifiedName_t2760654312 * ___refName_24;
	// System.Xml.XmlQualifiedName System.Xml.Schema.XmlSchemaElement::substitutionGroup
	XmlQualifiedName_t2760654312 * ___substitutionGroup_25;
	// System.Xml.XmlQualifiedName System.Xml.Schema.XmlSchemaElement::typeName
	XmlQualifiedName_t2760654312 * ___typeName_26;
	// System.Xml.Schema.XmlSchemaType System.Xml.Schema.XmlSchemaElement::type
	XmlSchemaType_t2033747345 * ___type_27;
	// System.Xml.XmlQualifiedName System.Xml.Schema.XmlSchemaElement::qualifiedName
	XmlQualifiedName_t2760654312 * ___qualifiedName_28;
	// System.Xml.Schema.XmlSchemaType System.Xml.Schema.XmlSchemaElement::elementType
	XmlSchemaType_t2033747345 * ___elementType_29;
	// System.Xml.Schema.XmlSchemaDerivationMethod System.Xml.Schema.XmlSchemaElement::blockResolved
	int32_t ___blockResolved_30;
	// System.Xml.Schema.XmlSchemaDerivationMethod System.Xml.Schema.XmlSchemaElement::finalResolved
	int32_t ___finalResolved_31;
	// System.Xml.Schema.XmlSchemaObjectCollection System.Xml.Schema.XmlSchemaElement::constraints
	XmlSchemaObjectCollection_t1064819932 * ___constraints_32;
	// System.Xml.Schema.SchemaElementDecl System.Xml.Schema.XmlSchemaElement::elementDecl
	SchemaElementDecl_t2267464004 * ___elementDecl_33;

public:
	inline static int32_t get_offset_of_isAbstract_13() { return static_cast<int32_t>(offsetof(XmlSchemaElement_t427880856, ___isAbstract_13)); }
	inline bool get_isAbstract_13() const { return ___isAbstract_13; }
	inline bool* get_address_of_isAbstract_13() { return &___isAbstract_13; }
	inline void set_isAbstract_13(bool value)
	{
		___isAbstract_13 = value;
	}

	inline static int32_t get_offset_of_hasAbstractAttribute_14() { return static_cast<int32_t>(offsetof(XmlSchemaElement_t427880856, ___hasAbstractAttribute_14)); }
	inline bool get_hasAbstractAttribute_14() const { return ___hasAbstractAttribute_14; }
	inline bool* get_address_of_hasAbstractAttribute_14() { return &___hasAbstractAttribute_14; }
	inline void set_hasAbstractAttribute_14(bool value)
	{
		___hasAbstractAttribute_14 = value;
	}

	inline static int32_t get_offset_of_isNillable_15() { return static_cast<int32_t>(offsetof(XmlSchemaElement_t427880856, ___isNillable_15)); }
	inline bool get_isNillable_15() const { return ___isNillable_15; }
	inline bool* get_address_of_isNillable_15() { return &___isNillable_15; }
	inline void set_isNillable_15(bool value)
	{
		___isNillable_15 = value;
	}

	inline static int32_t get_offset_of_hasNillableAttribute_16() { return static_cast<int32_t>(offsetof(XmlSchemaElement_t427880856, ___hasNillableAttribute_16)); }
	inline bool get_hasNillableAttribute_16() const { return ___hasNillableAttribute_16; }
	inline bool* get_address_of_hasNillableAttribute_16() { return &___hasNillableAttribute_16; }
	inline void set_hasNillableAttribute_16(bool value)
	{
		___hasNillableAttribute_16 = value;
	}

	inline static int32_t get_offset_of_isLocalTypeDerivationChecked_17() { return static_cast<int32_t>(offsetof(XmlSchemaElement_t427880856, ___isLocalTypeDerivationChecked_17)); }
	inline bool get_isLocalTypeDerivationChecked_17() const { return ___isLocalTypeDerivationChecked_17; }
	inline bool* get_address_of_isLocalTypeDerivationChecked_17() { return &___isLocalTypeDerivationChecked_17; }
	inline void set_isLocalTypeDerivationChecked_17(bool value)
	{
		___isLocalTypeDerivationChecked_17 = value;
	}

	inline static int32_t get_offset_of_block_18() { return static_cast<int32_t>(offsetof(XmlSchemaElement_t427880856, ___block_18)); }
	inline int32_t get_block_18() const { return ___block_18; }
	inline int32_t* get_address_of_block_18() { return &___block_18; }
	inline void set_block_18(int32_t value)
	{
		___block_18 = value;
	}

	inline static int32_t get_offset_of_final_19() { return static_cast<int32_t>(offsetof(XmlSchemaElement_t427880856, ___final_19)); }
	inline int32_t get_final_19() const { return ___final_19; }
	inline int32_t* get_address_of_final_19() { return &___final_19; }
	inline void set_final_19(int32_t value)
	{
		___final_19 = value;
	}

	inline static int32_t get_offset_of_form_20() { return static_cast<int32_t>(offsetof(XmlSchemaElement_t427880856, ___form_20)); }
	inline int32_t get_form_20() const { return ___form_20; }
	inline int32_t* get_address_of_form_20() { return &___form_20; }
	inline void set_form_20(int32_t value)
	{
		___form_20 = value;
	}

	inline static int32_t get_offset_of_defaultValue_21() { return static_cast<int32_t>(offsetof(XmlSchemaElement_t427880856, ___defaultValue_21)); }
	inline String_t* get_defaultValue_21() const { return ___defaultValue_21; }
	inline String_t** get_address_of_defaultValue_21() { return &___defaultValue_21; }
	inline void set_defaultValue_21(String_t* value)
	{
		___defaultValue_21 = value;
		Il2CppCodeGenWriteBarrier((&___defaultValue_21), value);
	}

	inline static int32_t get_offset_of_fixedValue_22() { return static_cast<int32_t>(offsetof(XmlSchemaElement_t427880856, ___fixedValue_22)); }
	inline String_t* get_fixedValue_22() const { return ___fixedValue_22; }
	inline String_t** get_address_of_fixedValue_22() { return &___fixedValue_22; }
	inline void set_fixedValue_22(String_t* value)
	{
		___fixedValue_22 = value;
		Il2CppCodeGenWriteBarrier((&___fixedValue_22), value);
	}

	inline static int32_t get_offset_of_name_23() { return static_cast<int32_t>(offsetof(XmlSchemaElement_t427880856, ___name_23)); }
	inline String_t* get_name_23() const { return ___name_23; }
	inline String_t** get_address_of_name_23() { return &___name_23; }
	inline void set_name_23(String_t* value)
	{
		___name_23 = value;
		Il2CppCodeGenWriteBarrier((&___name_23), value);
	}

	inline static int32_t get_offset_of_refName_24() { return static_cast<int32_t>(offsetof(XmlSchemaElement_t427880856, ___refName_24)); }
	inline XmlQualifiedName_t2760654312 * get_refName_24() const { return ___refName_24; }
	inline XmlQualifiedName_t2760654312 ** get_address_of_refName_24() { return &___refName_24; }
	inline void set_refName_24(XmlQualifiedName_t2760654312 * value)
	{
		___refName_24 = value;
		Il2CppCodeGenWriteBarrier((&___refName_24), value);
	}

	inline static int32_t get_offset_of_substitutionGroup_25() { return static_cast<int32_t>(offsetof(XmlSchemaElement_t427880856, ___substitutionGroup_25)); }
	inline XmlQualifiedName_t2760654312 * get_substitutionGroup_25() const { return ___substitutionGroup_25; }
	inline XmlQualifiedName_t2760654312 ** get_address_of_substitutionGroup_25() { return &___substitutionGroup_25; }
	inline void set_substitutionGroup_25(XmlQualifiedName_t2760654312 * value)
	{
		___substitutionGroup_25 = value;
		Il2CppCodeGenWriteBarrier((&___substitutionGroup_25), value);
	}

	inline static int32_t get_offset_of_typeName_26() { return static_cast<int32_t>(offsetof(XmlSchemaElement_t427880856, ___typeName_26)); }
	inline XmlQualifiedName_t2760654312 * get_typeName_26() const { return ___typeName_26; }
	inline XmlQualifiedName_t2760654312 ** get_address_of_typeName_26() { return &___typeName_26; }
	inline void set_typeName_26(XmlQualifiedName_t2760654312 * value)
	{
		___typeName_26 = value;
		Il2CppCodeGenWriteBarrier((&___typeName_26), value);
	}

	inline static int32_t get_offset_of_type_27() { return static_cast<int32_t>(offsetof(XmlSchemaElement_t427880856, ___type_27)); }
	inline XmlSchemaType_t2033747345 * get_type_27() const { return ___type_27; }
	inline XmlSchemaType_t2033747345 ** get_address_of_type_27() { return &___type_27; }
	inline void set_type_27(XmlSchemaType_t2033747345 * value)
	{
		___type_27 = value;
		Il2CppCodeGenWriteBarrier((&___type_27), value);
	}

	inline static int32_t get_offset_of_qualifiedName_28() { return static_cast<int32_t>(offsetof(XmlSchemaElement_t427880856, ___qualifiedName_28)); }
	inline XmlQualifiedName_t2760654312 * get_qualifiedName_28() const { return ___qualifiedName_28; }
	inline XmlQualifiedName_t2760654312 ** get_address_of_qualifiedName_28() { return &___qualifiedName_28; }
	inline void set_qualifiedName_28(XmlQualifiedName_t2760654312 * value)
	{
		___qualifiedName_28 = value;
		Il2CppCodeGenWriteBarrier((&___qualifiedName_28), value);
	}

	inline static int32_t get_offset_of_elementType_29() { return static_cast<int32_t>(offsetof(XmlSchemaElement_t427880856, ___elementType_29)); }
	inline XmlSchemaType_t2033747345 * get_elementType_29() const { return ___elementType_29; }
	inline XmlSchemaType_t2033747345 ** get_address_of_elementType_29() { return &___elementType_29; }
	inline void set_elementType_29(XmlSchemaType_t2033747345 * value)
	{
		___elementType_29 = value;
		Il2CppCodeGenWriteBarrier((&___elementType_29), value);
	}

	inline static int32_t get_offset_of_blockResolved_30() { return static_cast<int32_t>(offsetof(XmlSchemaElement_t427880856, ___blockResolved_30)); }
	inline int32_t get_blockResolved_30() const { return ___blockResolved_30; }
	inline int32_t* get_address_of_blockResolved_30() { return &___blockResolved_30; }
	inline void set_blockResolved_30(int32_t value)
	{
		___blockResolved_30 = value;
	}

	inline static int32_t get_offset_of_finalResolved_31() { return static_cast<int32_t>(offsetof(XmlSchemaElement_t427880856, ___finalResolved_31)); }
	inline int32_t get_finalResolved_31() const { return ___finalResolved_31; }
	inline int32_t* get_address_of_finalResolved_31() { return &___finalResolved_31; }
	inline void set_finalResolved_31(int32_t value)
	{
		___finalResolved_31 = value;
	}

	inline static int32_t get_offset_of_constraints_32() { return static_cast<int32_t>(offsetof(XmlSchemaElement_t427880856, ___constraints_32)); }
	inline XmlSchemaObjectCollection_t1064819932 * get_constraints_32() const { return ___constraints_32; }
	inline XmlSchemaObjectCollection_t1064819932 ** get_address_of_constraints_32() { return &___constraints_32; }
	inline void set_constraints_32(XmlSchemaObjectCollection_t1064819932 * value)
	{
		___constraints_32 = value;
		Il2CppCodeGenWriteBarrier((&___constraints_32), value);
	}

	inline static int32_t get_offset_of_elementDecl_33() { return static_cast<int32_t>(offsetof(XmlSchemaElement_t427880856, ___elementDecl_33)); }
	inline SchemaElementDecl_t2267464004 * get_elementDecl_33() const { return ___elementDecl_33; }
	inline SchemaElementDecl_t2267464004 ** get_address_of_elementDecl_33() { return &___elementDecl_33; }
	inline void set_elementDecl_33(SchemaElementDecl_t2267464004 * value)
	{
		___elementDecl_33 = value;
		Il2CppCodeGenWriteBarrier((&___elementDecl_33), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XMLSCHEMAELEMENT_T427880856_H
#ifndef XMLSCHEMAGROUPBASE_T3631079376_H
#define XMLSCHEMAGROUPBASE_T3631079376_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Schema.XmlSchemaGroupBase
struct  XmlSchemaGroupBase_t3631079376  : public XmlSchemaParticle_t3828501457
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XMLSCHEMAGROUPBASE_T3631079376_H
#ifndef XMLSCHEMANUMERICFACET_T3753040035_H
#define XMLSCHEMANUMERICFACET_T3753040035_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Schema.XmlSchemaNumericFacet
struct  XmlSchemaNumericFacet_t3753040035  : public XmlSchemaFacet_t1906017689
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XMLSCHEMANUMERICFACET_T3753040035_H
#ifndef DATATYPE_QNAMEXDR_T212135083_H
#define DATATYPE_QNAMEXDR_T212135083_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Schema.Datatype_QNameXdr
struct  Datatype_QNameXdr_t212135083  : public Datatype_anySimpleType_t2047875136
{
public:

public:
};

struct Datatype_QNameXdr_t212135083_StaticFields
{
public:
	// System.Type System.Xml.Schema.Datatype_QNameXdr::atomicValueType
	Type_t * ___atomicValueType_93;
	// System.Type System.Xml.Schema.Datatype_QNameXdr::listValueType
	Type_t * ___listValueType_94;

public:
	inline static int32_t get_offset_of_atomicValueType_93() { return static_cast<int32_t>(offsetof(Datatype_QNameXdr_t212135083_StaticFields, ___atomicValueType_93)); }
	inline Type_t * get_atomicValueType_93() const { return ___atomicValueType_93; }
	inline Type_t ** get_address_of_atomicValueType_93() { return &___atomicValueType_93; }
	inline void set_atomicValueType_93(Type_t * value)
	{
		___atomicValueType_93 = value;
		Il2CppCodeGenWriteBarrier((&___atomicValueType_93), value);
	}

	inline static int32_t get_offset_of_listValueType_94() { return static_cast<int32_t>(offsetof(Datatype_QNameXdr_t212135083_StaticFields, ___listValueType_94)); }
	inline Type_t * get_listValueType_94() const { return ___listValueType_94; }
	inline Type_t ** get_address_of_listValueType_94() { return &___listValueType_94; }
	inline void set_listValueType_94(Type_t * value)
	{
		___listValueType_94 = value;
		Il2CppCodeGenWriteBarrier((&___listValueType_94), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATATYPE_QNAMEXDR_T212135083_H
#ifndef DATATYPE_CHAR_T3203819924_H
#define DATATYPE_CHAR_T3203819924_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Schema.Datatype_char
struct  Datatype_char_t3203819924  : public Datatype_anySimpleType_t2047875136
{
public:

public:
};

struct Datatype_char_t3203819924_StaticFields
{
public:
	// System.Type System.Xml.Schema.Datatype_char::atomicValueType
	Type_t * ___atomicValueType_93;
	// System.Type System.Xml.Schema.Datatype_char::listValueType
	Type_t * ___listValueType_94;

public:
	inline static int32_t get_offset_of_atomicValueType_93() { return static_cast<int32_t>(offsetof(Datatype_char_t3203819924_StaticFields, ___atomicValueType_93)); }
	inline Type_t * get_atomicValueType_93() const { return ___atomicValueType_93; }
	inline Type_t ** get_address_of_atomicValueType_93() { return &___atomicValueType_93; }
	inline void set_atomicValueType_93(Type_t * value)
	{
		___atomicValueType_93 = value;
		Il2CppCodeGenWriteBarrier((&___atomicValueType_93), value);
	}

	inline static int32_t get_offset_of_listValueType_94() { return static_cast<int32_t>(offsetof(Datatype_char_t3203819924_StaticFields, ___listValueType_94)); }
	inline Type_t * get_listValueType_94() const { return ___listValueType_94; }
	inline Type_t ** get_address_of_listValueType_94() { return &___listValueType_94; }
	inline void set_listValueType_94(Type_t * value)
	{
		___listValueType_94 = value;
		Il2CppCodeGenWriteBarrier((&___listValueType_94), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATATYPE_CHAR_T3203819924_H
#ifndef DATATYPE_DECIMAL_T1359240665_H
#define DATATYPE_DECIMAL_T1359240665_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Schema.Datatype_decimal
struct  Datatype_decimal_t1359240665  : public Datatype_anySimpleType_t2047875136
{
public:

public:
};

struct Datatype_decimal_t1359240665_StaticFields
{
public:
	// System.Type System.Xml.Schema.Datatype_decimal::atomicValueType
	Type_t * ___atomicValueType_93;
	// System.Type System.Xml.Schema.Datatype_decimal::listValueType
	Type_t * ___listValueType_94;
	// System.Xml.Schema.FacetsChecker System.Xml.Schema.Datatype_decimal::numeric10FacetsChecker
	FacetsChecker_t3316496195 * ___numeric10FacetsChecker_95;

public:
	inline static int32_t get_offset_of_atomicValueType_93() { return static_cast<int32_t>(offsetof(Datatype_decimal_t1359240665_StaticFields, ___atomicValueType_93)); }
	inline Type_t * get_atomicValueType_93() const { return ___atomicValueType_93; }
	inline Type_t ** get_address_of_atomicValueType_93() { return &___atomicValueType_93; }
	inline void set_atomicValueType_93(Type_t * value)
	{
		___atomicValueType_93 = value;
		Il2CppCodeGenWriteBarrier((&___atomicValueType_93), value);
	}

	inline static int32_t get_offset_of_listValueType_94() { return static_cast<int32_t>(offsetof(Datatype_decimal_t1359240665_StaticFields, ___listValueType_94)); }
	inline Type_t * get_listValueType_94() const { return ___listValueType_94; }
	inline Type_t ** get_address_of_listValueType_94() { return &___listValueType_94; }
	inline void set_listValueType_94(Type_t * value)
	{
		___listValueType_94 = value;
		Il2CppCodeGenWriteBarrier((&___listValueType_94), value);
	}

	inline static int32_t get_offset_of_numeric10FacetsChecker_95() { return static_cast<int32_t>(offsetof(Datatype_decimal_t1359240665_StaticFields, ___numeric10FacetsChecker_95)); }
	inline FacetsChecker_t3316496195 * get_numeric10FacetsChecker_95() const { return ___numeric10FacetsChecker_95; }
	inline FacetsChecker_t3316496195 ** get_address_of_numeric10FacetsChecker_95() { return &___numeric10FacetsChecker_95; }
	inline void set_numeric10FacetsChecker_95(FacetsChecker_t3316496195 * value)
	{
		___numeric10FacetsChecker_95 = value;
		Il2CppCodeGenWriteBarrier((&___numeric10FacetsChecker_95), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATATYPE_DECIMAL_T1359240665_H
#ifndef DATATYPE_DOUBLE_T3326302950_H
#define DATATYPE_DOUBLE_T3326302950_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Schema.Datatype_double
struct  Datatype_double_t3326302950  : public Datatype_anySimpleType_t2047875136
{
public:

public:
};

struct Datatype_double_t3326302950_StaticFields
{
public:
	// System.Type System.Xml.Schema.Datatype_double::atomicValueType
	Type_t * ___atomicValueType_93;
	// System.Type System.Xml.Schema.Datatype_double::listValueType
	Type_t * ___listValueType_94;

public:
	inline static int32_t get_offset_of_atomicValueType_93() { return static_cast<int32_t>(offsetof(Datatype_double_t3326302950_StaticFields, ___atomicValueType_93)); }
	inline Type_t * get_atomicValueType_93() const { return ___atomicValueType_93; }
	inline Type_t ** get_address_of_atomicValueType_93() { return &___atomicValueType_93; }
	inline void set_atomicValueType_93(Type_t * value)
	{
		___atomicValueType_93 = value;
		Il2CppCodeGenWriteBarrier((&___atomicValueType_93), value);
	}

	inline static int32_t get_offset_of_listValueType_94() { return static_cast<int32_t>(offsetof(Datatype_double_t3326302950_StaticFields, ___listValueType_94)); }
	inline Type_t * get_listValueType_94() const { return ___listValueType_94; }
	inline Type_t ** get_address_of_listValueType_94() { return &___listValueType_94; }
	inline void set_listValueType_94(Type_t * value)
	{
		___listValueType_94 = value;
		Il2CppCodeGenWriteBarrier((&___listValueType_94), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATATYPE_DOUBLE_T3326302950_H
#ifndef DATATYPE_FLOAT_T3587079609_H
#define DATATYPE_FLOAT_T3587079609_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Schema.Datatype_float
struct  Datatype_float_t3587079609  : public Datatype_anySimpleType_t2047875136
{
public:

public:
};

struct Datatype_float_t3587079609_StaticFields
{
public:
	// System.Type System.Xml.Schema.Datatype_float::atomicValueType
	Type_t * ___atomicValueType_93;
	// System.Type System.Xml.Schema.Datatype_float::listValueType
	Type_t * ___listValueType_94;

public:
	inline static int32_t get_offset_of_atomicValueType_93() { return static_cast<int32_t>(offsetof(Datatype_float_t3587079609_StaticFields, ___atomicValueType_93)); }
	inline Type_t * get_atomicValueType_93() const { return ___atomicValueType_93; }
	inline Type_t ** get_address_of_atomicValueType_93() { return &___atomicValueType_93; }
	inline void set_atomicValueType_93(Type_t * value)
	{
		___atomicValueType_93 = value;
		Il2CppCodeGenWriteBarrier((&___atomicValueType_93), value);
	}

	inline static int32_t get_offset_of_listValueType_94() { return static_cast<int32_t>(offsetof(Datatype_float_t3587079609_StaticFields, ___listValueType_94)); }
	inline Type_t * get_listValueType_94() const { return ___listValueType_94; }
	inline Type_t ** get_address_of_listValueType_94() { return &___listValueType_94; }
	inline void set_listValueType_94(Type_t * value)
	{
		___listValueType_94 = value;
		Il2CppCodeGenWriteBarrier((&___listValueType_94), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATATYPE_FLOAT_T3587079609_H
#ifndef DATATYPE_STRING_T1920293864_H
#define DATATYPE_STRING_T1920293864_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Schema.Datatype_string
struct  Datatype_string_t1920293864  : public Datatype_anySimpleType_t2047875136
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATATYPE_STRING_T1920293864_H
#ifndef DATATYPE_UUID_T4274665131_H
#define DATATYPE_UUID_T4274665131_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Schema.Datatype_uuid
struct  Datatype_uuid_t4274665131  : public Datatype_anySimpleType_t2047875136
{
public:

public:
};

struct Datatype_uuid_t4274665131_StaticFields
{
public:
	// System.Type System.Xml.Schema.Datatype_uuid::atomicValueType
	Type_t * ___atomicValueType_93;
	// System.Type System.Xml.Schema.Datatype_uuid::listValueType
	Type_t * ___listValueType_94;

public:
	inline static int32_t get_offset_of_atomicValueType_93() { return static_cast<int32_t>(offsetof(Datatype_uuid_t4274665131_StaticFields, ___atomicValueType_93)); }
	inline Type_t * get_atomicValueType_93() const { return ___atomicValueType_93; }
	inline Type_t ** get_address_of_atomicValueType_93() { return &___atomicValueType_93; }
	inline void set_atomicValueType_93(Type_t * value)
	{
		___atomicValueType_93 = value;
		Il2CppCodeGenWriteBarrier((&___atomicValueType_93), value);
	}

	inline static int32_t get_offset_of_listValueType_94() { return static_cast<int32_t>(offsetof(Datatype_uuid_t4274665131_StaticFields, ___listValueType_94)); }
	inline Type_t * get_listValueType_94() const { return ___listValueType_94; }
	inline Type_t ** get_address_of_listValueType_94() { return &___listValueType_94; }
	inline void set_listValueType_94(Type_t * value)
	{
		___listValueType_94 = value;
		Il2CppCodeGenWriteBarrier((&___listValueType_94), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATATYPE_UUID_T4274665131_H
#ifndef XMLSCHEMAALL_T1118454309_H
#define XMLSCHEMAALL_T1118454309_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Schema.XmlSchemaAll
struct  XmlSchemaAll_t1118454309  : public XmlSchemaGroupBase_t3631079376
{
public:
	// System.Xml.Schema.XmlSchemaObjectCollection System.Xml.Schema.XmlSchemaAll::items
	XmlSchemaObjectCollection_t1064819932 * ___items_13;

public:
	inline static int32_t get_offset_of_items_13() { return static_cast<int32_t>(offsetof(XmlSchemaAll_t1118454309, ___items_13)); }
	inline XmlSchemaObjectCollection_t1064819932 * get_items_13() const { return ___items_13; }
	inline XmlSchemaObjectCollection_t1064819932 ** get_address_of_items_13() { return &___items_13; }
	inline void set_items_13(XmlSchemaObjectCollection_t1064819932 * value)
	{
		___items_13 = value;
		Il2CppCodeGenWriteBarrier((&___items_13), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XMLSCHEMAALL_T1118454309_H
#ifndef XMLSCHEMACHOICE_T959520675_H
#define XMLSCHEMACHOICE_T959520675_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Schema.XmlSchemaChoice
struct  XmlSchemaChoice_t959520675  : public XmlSchemaGroupBase_t3631079376
{
public:
	// System.Xml.Schema.XmlSchemaObjectCollection System.Xml.Schema.XmlSchemaChoice::items
	XmlSchemaObjectCollection_t1064819932 * ___items_13;

public:
	inline static int32_t get_offset_of_items_13() { return static_cast<int32_t>(offsetof(XmlSchemaChoice_t959520675, ___items_13)); }
	inline XmlSchemaObjectCollection_t1064819932 * get_items_13() const { return ___items_13; }
	inline XmlSchemaObjectCollection_t1064819932 ** get_address_of_items_13() { return &___items_13; }
	inline void set_items_13(XmlSchemaObjectCollection_t1064819932 * value)
	{
		___items_13 = value;
		Il2CppCodeGenWriteBarrier((&___items_13), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XMLSCHEMACHOICE_T959520675_H
#ifndef DATATYPE_DOUBLEXDR_T1639101184_H
#define DATATYPE_DOUBLEXDR_T1639101184_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Schema.Datatype_doubleXdr
struct  Datatype_doubleXdr_t1639101184  : public Datatype_double_t3326302950
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATATYPE_DOUBLEXDR_T1639101184_H
#ifndef DATATYPE_FIXED_T23833418_H
#define DATATYPE_FIXED_T23833418_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Schema.Datatype_fixed
struct  Datatype_fixed_t23833418  : public Datatype_decimal_t1359240665
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATATYPE_FIXED_T23833418_H
#ifndef DATATYPE_FLOATXDR_T452511709_H
#define DATATYPE_FLOATXDR_T452511709_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Schema.Datatype_floatXdr
struct  Datatype_floatXdr_t452511709  : public Datatype_float_t3587079609
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATATYPE_FLOATXDR_T452511709_H
#ifndef DATATYPE_INTEGER_T3081037420_H
#define DATATYPE_INTEGER_T3081037420_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Schema.Datatype_integer
struct  Datatype_integer_t3081037420  : public Datatype_decimal_t1359240665
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATATYPE_INTEGER_T3081037420_H
#ifndef DATATYPE_NORMALIZEDSTRING_T1516036709_H
#define DATATYPE_NORMALIZEDSTRING_T1516036709_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Schema.Datatype_normalizedString
struct  Datatype_normalizedString_t1516036709  : public Datatype_string_t1920293864
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATATYPE_NORMALIZEDSTRING_T1516036709_H
#ifndef DATATYPE_NONNEGATIVEINTEGER_T176994707_H
#define DATATYPE_NONNEGATIVEINTEGER_T176994707_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Schema.Datatype_nonNegativeInteger
struct  Datatype_nonNegativeInteger_t176994707  : public Datatype_integer_t3081037420
{
public:

public:
};

struct Datatype_nonNegativeInteger_t176994707_StaticFields
{
public:
	// System.Xml.Schema.FacetsChecker System.Xml.Schema.Datatype_nonNegativeInteger::numeric10FacetsChecker
	FacetsChecker_t3316496195 * ___numeric10FacetsChecker_96;

public:
	inline static int32_t get_offset_of_numeric10FacetsChecker_96() { return static_cast<int32_t>(offsetof(Datatype_nonNegativeInteger_t176994707_StaticFields, ___numeric10FacetsChecker_96)); }
	inline FacetsChecker_t3316496195 * get_numeric10FacetsChecker_96() const { return ___numeric10FacetsChecker_96; }
	inline FacetsChecker_t3316496195 ** get_address_of_numeric10FacetsChecker_96() { return &___numeric10FacetsChecker_96; }
	inline void set_numeric10FacetsChecker_96(FacetsChecker_t3316496195 * value)
	{
		___numeric10FacetsChecker_96 = value;
		Il2CppCodeGenWriteBarrier((&___numeric10FacetsChecker_96), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATATYPE_NONNEGATIVEINTEGER_T176994707_H
#ifndef DATATYPE_TOKEN_T3046419280_H
#define DATATYPE_TOKEN_T3046419280_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Schema.Datatype_token
struct  Datatype_token_t3046419280  : public Datatype_normalizedString_t1516036709
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATATYPE_TOKEN_T3046419280_H
#ifndef DATATYPE_NMTOKEN_T1058486603_H
#define DATATYPE_NMTOKEN_T1058486603_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Schema.Datatype_NMTOKEN
struct  Datatype_NMTOKEN_t1058486603  : public Datatype_token_t3046419280
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATATYPE_NMTOKEN_T1058486603_H
#ifndef DATATYPE_POSITIVEINTEGER_T1742605520_H
#define DATATYPE_POSITIVEINTEGER_T1742605520_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Schema.Datatype_positiveInteger
struct  Datatype_positiveInteger_t1742605520  : public Datatype_nonNegativeInteger_t176994707
{
public:

public:
};

struct Datatype_positiveInteger_t1742605520_StaticFields
{
public:
	// System.Xml.Schema.FacetsChecker System.Xml.Schema.Datatype_positiveInteger::numeric10FacetsChecker
	FacetsChecker_t3316496195 * ___numeric10FacetsChecker_97;

public:
	inline static int32_t get_offset_of_numeric10FacetsChecker_97() { return static_cast<int32_t>(offsetof(Datatype_positiveInteger_t1742605520_StaticFields, ___numeric10FacetsChecker_97)); }
	inline FacetsChecker_t3316496195 * get_numeric10FacetsChecker_97() const { return ___numeric10FacetsChecker_97; }
	inline FacetsChecker_t3316496195 ** get_address_of_numeric10FacetsChecker_97() { return &___numeric10FacetsChecker_97; }
	inline void set_numeric10FacetsChecker_97(FacetsChecker_t3316496195 * value)
	{
		___numeric10FacetsChecker_97 = value;
		Il2CppCodeGenWriteBarrier((&___numeric10FacetsChecker_97), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATATYPE_POSITIVEINTEGER_T1742605520_H
#ifndef DATATYPE_UNSIGNEDLONG_T2935370556_H
#define DATATYPE_UNSIGNEDLONG_T2935370556_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Schema.Datatype_unsignedLong
struct  Datatype_unsignedLong_t2935370556  : public Datatype_nonNegativeInteger_t176994707
{
public:

public:
};

struct Datatype_unsignedLong_t2935370556_StaticFields
{
public:
	// System.Type System.Xml.Schema.Datatype_unsignedLong::atomicValueType
	Type_t * ___atomicValueType_97;
	// System.Type System.Xml.Schema.Datatype_unsignedLong::listValueType
	Type_t * ___listValueType_98;
	// System.Xml.Schema.FacetsChecker System.Xml.Schema.Datatype_unsignedLong::numeric10FacetsChecker
	FacetsChecker_t3316496195 * ___numeric10FacetsChecker_99;

public:
	inline static int32_t get_offset_of_atomicValueType_97() { return static_cast<int32_t>(offsetof(Datatype_unsignedLong_t2935370556_StaticFields, ___atomicValueType_97)); }
	inline Type_t * get_atomicValueType_97() const { return ___atomicValueType_97; }
	inline Type_t ** get_address_of_atomicValueType_97() { return &___atomicValueType_97; }
	inline void set_atomicValueType_97(Type_t * value)
	{
		___atomicValueType_97 = value;
		Il2CppCodeGenWriteBarrier((&___atomicValueType_97), value);
	}

	inline static int32_t get_offset_of_listValueType_98() { return static_cast<int32_t>(offsetof(Datatype_unsignedLong_t2935370556_StaticFields, ___listValueType_98)); }
	inline Type_t * get_listValueType_98() const { return ___listValueType_98; }
	inline Type_t ** get_address_of_listValueType_98() { return &___listValueType_98; }
	inline void set_listValueType_98(Type_t * value)
	{
		___listValueType_98 = value;
		Il2CppCodeGenWriteBarrier((&___listValueType_98), value);
	}

	inline static int32_t get_offset_of_numeric10FacetsChecker_99() { return static_cast<int32_t>(offsetof(Datatype_unsignedLong_t2935370556_StaticFields, ___numeric10FacetsChecker_99)); }
	inline FacetsChecker_t3316496195 * get_numeric10FacetsChecker_99() const { return ___numeric10FacetsChecker_99; }
	inline FacetsChecker_t3316496195 ** get_address_of_numeric10FacetsChecker_99() { return &___numeric10FacetsChecker_99; }
	inline void set_numeric10FacetsChecker_99(FacetsChecker_t3316496195 * value)
	{
		___numeric10FacetsChecker_99 = value;
		Il2CppCodeGenWriteBarrier((&___numeric10FacetsChecker_99), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATATYPE_UNSIGNEDLONG_T2935370556_H
#ifndef DATATYPE_ENUMERATION_T381889926_H
#define DATATYPE_ENUMERATION_T381889926_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Schema.Datatype_ENUMERATION
struct  Datatype_ENUMERATION_t381889926  : public Datatype_NMTOKEN_t1058486603
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATATYPE_ENUMERATION_T381889926_H
#ifndef DATATYPE_UNSIGNEDINT_T3360771685_H
#define DATATYPE_UNSIGNEDINT_T3360771685_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Schema.Datatype_unsignedInt
struct  Datatype_unsignedInt_t3360771685  : public Datatype_unsignedLong_t2935370556
{
public:

public:
};

struct Datatype_unsignedInt_t3360771685_StaticFields
{
public:
	// System.Type System.Xml.Schema.Datatype_unsignedInt::atomicValueType
	Type_t * ___atomicValueType_100;
	// System.Type System.Xml.Schema.Datatype_unsignedInt::listValueType
	Type_t * ___listValueType_101;
	// System.Xml.Schema.FacetsChecker System.Xml.Schema.Datatype_unsignedInt::numeric10FacetsChecker
	FacetsChecker_t3316496195 * ___numeric10FacetsChecker_102;

public:
	inline static int32_t get_offset_of_atomicValueType_100() { return static_cast<int32_t>(offsetof(Datatype_unsignedInt_t3360771685_StaticFields, ___atomicValueType_100)); }
	inline Type_t * get_atomicValueType_100() const { return ___atomicValueType_100; }
	inline Type_t ** get_address_of_atomicValueType_100() { return &___atomicValueType_100; }
	inline void set_atomicValueType_100(Type_t * value)
	{
		___atomicValueType_100 = value;
		Il2CppCodeGenWriteBarrier((&___atomicValueType_100), value);
	}

	inline static int32_t get_offset_of_listValueType_101() { return static_cast<int32_t>(offsetof(Datatype_unsignedInt_t3360771685_StaticFields, ___listValueType_101)); }
	inline Type_t * get_listValueType_101() const { return ___listValueType_101; }
	inline Type_t ** get_address_of_listValueType_101() { return &___listValueType_101; }
	inline void set_listValueType_101(Type_t * value)
	{
		___listValueType_101 = value;
		Il2CppCodeGenWriteBarrier((&___listValueType_101), value);
	}

	inline static int32_t get_offset_of_numeric10FacetsChecker_102() { return static_cast<int32_t>(offsetof(Datatype_unsignedInt_t3360771685_StaticFields, ___numeric10FacetsChecker_102)); }
	inline FacetsChecker_t3316496195 * get_numeric10FacetsChecker_102() const { return ___numeric10FacetsChecker_102; }
	inline FacetsChecker_t3316496195 ** get_address_of_numeric10FacetsChecker_102() { return &___numeric10FacetsChecker_102; }
	inline void set_numeric10FacetsChecker_102(FacetsChecker_t3316496195 * value)
	{
		___numeric10FacetsChecker_102 = value;
		Il2CppCodeGenWriteBarrier((&___numeric10FacetsChecker_102), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATATYPE_UNSIGNEDINT_T3360771685_H
#ifndef DATATYPE_UNSIGNEDSHORT_T2654615006_H
#define DATATYPE_UNSIGNEDSHORT_T2654615006_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Schema.Datatype_unsignedShort
struct  Datatype_unsignedShort_t2654615006  : public Datatype_unsignedInt_t3360771685
{
public:

public:
};

struct Datatype_unsignedShort_t2654615006_StaticFields
{
public:
	// System.Type System.Xml.Schema.Datatype_unsignedShort::atomicValueType
	Type_t * ___atomicValueType_103;
	// System.Type System.Xml.Schema.Datatype_unsignedShort::listValueType
	Type_t * ___listValueType_104;
	// System.Xml.Schema.FacetsChecker System.Xml.Schema.Datatype_unsignedShort::numeric10FacetsChecker
	FacetsChecker_t3316496195 * ___numeric10FacetsChecker_105;

public:
	inline static int32_t get_offset_of_atomicValueType_103() { return static_cast<int32_t>(offsetof(Datatype_unsignedShort_t2654615006_StaticFields, ___atomicValueType_103)); }
	inline Type_t * get_atomicValueType_103() const { return ___atomicValueType_103; }
	inline Type_t ** get_address_of_atomicValueType_103() { return &___atomicValueType_103; }
	inline void set_atomicValueType_103(Type_t * value)
	{
		___atomicValueType_103 = value;
		Il2CppCodeGenWriteBarrier((&___atomicValueType_103), value);
	}

	inline static int32_t get_offset_of_listValueType_104() { return static_cast<int32_t>(offsetof(Datatype_unsignedShort_t2654615006_StaticFields, ___listValueType_104)); }
	inline Type_t * get_listValueType_104() const { return ___listValueType_104; }
	inline Type_t ** get_address_of_listValueType_104() { return &___listValueType_104; }
	inline void set_listValueType_104(Type_t * value)
	{
		___listValueType_104 = value;
		Il2CppCodeGenWriteBarrier((&___listValueType_104), value);
	}

	inline static int32_t get_offset_of_numeric10FacetsChecker_105() { return static_cast<int32_t>(offsetof(Datatype_unsignedShort_t2654615006_StaticFields, ___numeric10FacetsChecker_105)); }
	inline FacetsChecker_t3316496195 * get_numeric10FacetsChecker_105() const { return ___numeric10FacetsChecker_105; }
	inline FacetsChecker_t3316496195 ** get_address_of_numeric10FacetsChecker_105() { return &___numeric10FacetsChecker_105; }
	inline void set_numeric10FacetsChecker_105(FacetsChecker_t3316496195 * value)
	{
		___numeric10FacetsChecker_105 = value;
		Il2CppCodeGenWriteBarrier((&___numeric10FacetsChecker_105), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATATYPE_UNSIGNEDSHORT_T2654615006_H
#ifndef DATATYPE_UNSIGNEDBYTE_T3646638576_H
#define DATATYPE_UNSIGNEDBYTE_T3646638576_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Schema.Datatype_unsignedByte
struct  Datatype_unsignedByte_t3646638576  : public Datatype_unsignedShort_t2654615006
{
public:

public:
};

struct Datatype_unsignedByte_t3646638576_StaticFields
{
public:
	// System.Type System.Xml.Schema.Datatype_unsignedByte::atomicValueType
	Type_t * ___atomicValueType_106;
	// System.Type System.Xml.Schema.Datatype_unsignedByte::listValueType
	Type_t * ___listValueType_107;
	// System.Xml.Schema.FacetsChecker System.Xml.Schema.Datatype_unsignedByte::numeric10FacetsChecker
	FacetsChecker_t3316496195 * ___numeric10FacetsChecker_108;

public:
	inline static int32_t get_offset_of_atomicValueType_106() { return static_cast<int32_t>(offsetof(Datatype_unsignedByte_t3646638576_StaticFields, ___atomicValueType_106)); }
	inline Type_t * get_atomicValueType_106() const { return ___atomicValueType_106; }
	inline Type_t ** get_address_of_atomicValueType_106() { return &___atomicValueType_106; }
	inline void set_atomicValueType_106(Type_t * value)
	{
		___atomicValueType_106 = value;
		Il2CppCodeGenWriteBarrier((&___atomicValueType_106), value);
	}

	inline static int32_t get_offset_of_listValueType_107() { return static_cast<int32_t>(offsetof(Datatype_unsignedByte_t3646638576_StaticFields, ___listValueType_107)); }
	inline Type_t * get_listValueType_107() const { return ___listValueType_107; }
	inline Type_t ** get_address_of_listValueType_107() { return &___listValueType_107; }
	inline void set_listValueType_107(Type_t * value)
	{
		___listValueType_107 = value;
		Il2CppCodeGenWriteBarrier((&___listValueType_107), value);
	}

	inline static int32_t get_offset_of_numeric10FacetsChecker_108() { return static_cast<int32_t>(offsetof(Datatype_unsignedByte_t3646638576_StaticFields, ___numeric10FacetsChecker_108)); }
	inline FacetsChecker_t3316496195 * get_numeric10FacetsChecker_108() const { return ___numeric10FacetsChecker_108; }
	inline FacetsChecker_t3316496195 ** get_address_of_numeric10FacetsChecker_108() { return &___numeric10FacetsChecker_108; }
	inline void set_numeric10FacetsChecker_108(FacetsChecker_t3316496195 * value)
	{
		___numeric10FacetsChecker_108 = value;
		Il2CppCodeGenWriteBarrier((&___numeric10FacetsChecker_108), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATATYPE_UNSIGNEDBYTE_T3646638576_H





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1900 = { sizeof (Datatype_unsignedByte_t3646638576), -1, sizeof(Datatype_unsignedByte_t3646638576_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1900[3] = 
{
	Datatype_unsignedByte_t3646638576_StaticFields::get_offset_of_atomicValueType_106(),
	Datatype_unsignedByte_t3646638576_StaticFields::get_offset_of_listValueType_107(),
	Datatype_unsignedByte_t3646638576_StaticFields::get_offset_of_numeric10FacetsChecker_108(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1901 = { sizeof (Datatype_positiveInteger_t1742605520), -1, sizeof(Datatype_positiveInteger_t1742605520_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1901[1] = 
{
	Datatype_positiveInteger_t1742605520_StaticFields::get_offset_of_numeric10FacetsChecker_97(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1902 = { sizeof (Datatype_doubleXdr_t1639101184), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1903 = { sizeof (Datatype_floatXdr_t452511709), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1904 = { sizeof (Datatype_QNameXdr_t212135083), -1, sizeof(Datatype_QNameXdr_t212135083_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1904[2] = 
{
	Datatype_QNameXdr_t212135083_StaticFields::get_offset_of_atomicValueType_93(),
	Datatype_QNameXdr_t212135083_StaticFields::get_offset_of_listValueType_94(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1905 = { sizeof (Datatype_ENUMERATION_t381889926), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1906 = { sizeof (Datatype_char_t3203819924), -1, sizeof(Datatype_char_t3203819924_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1906[2] = 
{
	Datatype_char_t3203819924_StaticFields::get_offset_of_atomicValueType_93(),
	Datatype_char_t3203819924_StaticFields::get_offset_of_listValueType_94(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1907 = { sizeof (Datatype_fixed_t23833418), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1908 = { sizeof (Datatype_uuid_t4274665131), -1, sizeof(Datatype_uuid_t4274665131_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1908[2] = 
{
	Datatype_uuid_t4274665131_StaticFields::get_offset_of_atomicValueType_93(),
	Datatype_uuid_t4274665131_StaticFields::get_offset_of_listValueType_94(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1909 = { sizeof (DtdValidator_t3036232587), -1, sizeof(DtdValidator_t3036232587_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1909[7] = 
{
	DtdValidator_t3036232587_StaticFields::get_offset_of_namespaceManager_15(),
	DtdValidator_t3036232587::get_offset_of_validationStack_16(),
	DtdValidator_t3036232587::get_offset_of_attPresence_17(),
	DtdValidator_t3036232587::get_offset_of_name_18(),
	DtdValidator_t3036232587::get_offset_of_IDs_19(),
	DtdValidator_t3036232587::get_offset_of_idRefListHead_20(),
	DtdValidator_t3036232587::get_offset_of_processIdentityConstraints_21(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1910 = { sizeof (NamespaceManager_t2339540891), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1911 = { sizeof (FacetsChecker_t3316496195), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1912 = { sizeof (FacetsCompiler_t1584362354)+ sizeof (RuntimeObject), -1, sizeof(FacetsCompiler_t1584362354_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1912[12] = 
{
	FacetsCompiler_t1584362354::get_offset_of_datatype_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	FacetsCompiler_t1584362354::get_offset_of_derivedRestriction_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	FacetsCompiler_t1584362354::get_offset_of_baseFlags_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	FacetsCompiler_t1584362354::get_offset_of_baseFixedFlags_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	FacetsCompiler_t1584362354::get_offset_of_validRestrictionFlags_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
	FacetsCompiler_t1584362354::get_offset_of_nonNegativeInt_5() + static_cast<int32_t>(sizeof(RuntimeObject)),
	FacetsCompiler_t1584362354::get_offset_of_builtInType_6() + static_cast<int32_t>(sizeof(RuntimeObject)),
	FacetsCompiler_t1584362354::get_offset_of_builtInEnum_7() + static_cast<int32_t>(sizeof(RuntimeObject)),
	FacetsCompiler_t1584362354::get_offset_of_firstPattern_8() + static_cast<int32_t>(sizeof(RuntimeObject)),
	FacetsCompiler_t1584362354::get_offset_of_regStr_9() + static_cast<int32_t>(sizeof(RuntimeObject)),
	FacetsCompiler_t1584362354::get_offset_of_pattern_facet_10() + static_cast<int32_t>(sizeof(RuntimeObject)),
	FacetsCompiler_t1584362354_StaticFields::get_offset_of_c_map_11(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1913 = { sizeof (Map_t1331044427)+ sizeof (RuntimeObject), sizeof(Map_t1331044427_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable1913[2] = 
{
	Map_t1331044427::get_offset_of_match_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Map_t1331044427::get_offset_of_replacement_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1914 = { sizeof (Numeric10FacetsChecker_t3323854505), -1, sizeof(Numeric10FacetsChecker_t3323854505_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1914[3] = 
{
	Numeric10FacetsChecker_t3323854505_StaticFields::get_offset_of_signs_0(),
	Numeric10FacetsChecker_t3323854505::get_offset_of_maxValue_1(),
	Numeric10FacetsChecker_t3323854505::get_offset_of_minValue_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1915 = { sizeof (Numeric2FacetsChecker_t421813322), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1916 = { sizeof (DurationFacetsChecker_t104576138), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1917 = { sizeof (DateTimeFacetsChecker_t3377331714), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1918 = { sizeof (StringFacetsChecker_t2361523877), -1, sizeof(StringFacetsChecker_t2361523877_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1918[1] = 
{
	StringFacetsChecker_t2361523877_StaticFields::get_offset_of_languagePattern_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1919 = { sizeof (QNameFacetsChecker_t971749529), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1920 = { sizeof (MiscFacetsChecker_t114397606), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1921 = { sizeof (BinaryFacetsChecker_t976301705), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1922 = { sizeof (ListFacetsChecker_t3393181093), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1923 = { sizeof (UnionFacetsChecker_t1294230376), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1924 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1925 = { sizeof (NamespaceList_t60893868), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1925[3] = 
{
	NamespaceList_t60893868::get_offset_of_type_0(),
	NamespaceList_t60893868::get_offset_of_set_1(),
	NamespaceList_t60893868::get_offset_of_targetNamespace_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1926 = { sizeof (ListType_t2118133397)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1926[4] = 
{
	ListType_t2118133397::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1927 = { sizeof (NamespaceListV1Compat_t1490102757), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1928 = { sizeof (Parser_t3220530449), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1928[20] = 
{
	Parser_t3220530449::get_offset_of_schemaType_0(),
	Parser_t3220530449::get_offset_of_nameTable_1(),
	Parser_t3220530449::get_offset_of_schemaNames_2(),
	Parser_t3220530449::get_offset_of_eventHandler_3(),
	Parser_t3220530449::get_offset_of_namespaceManager_4(),
	Parser_t3220530449::get_offset_of_reader_5(),
	Parser_t3220530449::get_offset_of_positionInfo_6(),
	Parser_t3220530449::get_offset_of_isProcessNamespaces_7(),
	Parser_t3220530449::get_offset_of_schemaXmlDepth_8(),
	Parser_t3220530449::get_offset_of_markupDepth_9(),
	Parser_t3220530449::get_offset_of_builder_10(),
	Parser_t3220530449::get_offset_of_schema_11(),
	Parser_t3220530449::get_offset_of_xdrSchema_12(),
	Parser_t3220530449::get_offset_of_xmlResolver_13(),
	Parser_t3220530449::get_offset_of_dummyDocument_14(),
	Parser_t3220530449::get_offset_of_processMarkup_15(),
	Parser_t3220530449::get_offset_of_parentNode_16(),
	Parser_t3220530449::get_offset_of_annotationNSManager_17(),
	Parser_t3220530449::get_offset_of_xmlns_18(),
	Parser_t3220530449::get_offset_of_xmlCharType_19(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1929 = { sizeof (Compositor_t1780395003)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1929[5] = 
{
	Compositor_t1780395003::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1930 = { sizeof (Preprocessor_t3894248582), -1, sizeof(Preprocessor_t3894248582_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1930[1] = 
{
	Preprocessor_t3894248582_StaticFields::get_offset_of_builtInSchemaForXmlNS_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1931 = { sizeof (SchemaAttDef_t2429541159), -1, sizeof(SchemaAttDef_t2429541159_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1931[8] = 
{
	SchemaAttDef_t2429541159::get_offset_of_defExpanded_11(),
	SchemaAttDef_t2429541159::get_offset_of_lineNum_12(),
	SchemaAttDef_t2429541159::get_offset_of_linePos_13(),
	SchemaAttDef_t2429541159::get_offset_of_valueLineNum_14(),
	SchemaAttDef_t2429541159::get_offset_of_valueLinePos_15(),
	SchemaAttDef_t2429541159::get_offset_of_reserved_16(),
	SchemaAttDef_t2429541159::get_offset_of_schemaAttribute_17(),
	SchemaAttDef_t2429541159_StaticFields::get_offset_of_Empty_18(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1932 = { sizeof (Reserve_t3586464976)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1932[4] = 
{
	Reserve_t3586464976::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1933 = { sizeof (SchemaBuilder_t3521006541), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1934 = { sizeof (SchemaCollectionCompiler_t940890354), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1934[4] = 
{
	SchemaCollectionCompiler_t940890354::get_offset_of_compileContentModel_6(),
	SchemaCollectionCompiler_t940890354::get_offset_of_examplars_7(),
	SchemaCollectionCompiler_t940890354::get_offset_of_complexTypeStack_8(),
	SchemaCollectionCompiler_t940890354::get_offset_of_schema_9(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1935 = { sizeof (SchemaCollectionPreprocessor_t2786719976), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1935[11] = 
{
	SchemaCollectionPreprocessor_t2786719976::get_offset_of_schema_6(),
	SchemaCollectionPreprocessor_t2786719976::get_offset_of_targetNamespace_7(),
	SchemaCollectionPreprocessor_t2786719976::get_offset_of_buildinIncluded_8(),
	SchemaCollectionPreprocessor_t2786719976::get_offset_of_elementFormDefault_9(),
	SchemaCollectionPreprocessor_t2786719976::get_offset_of_attributeFormDefault_10(),
	SchemaCollectionPreprocessor_t2786719976::get_offset_of_blockDefault_11(),
	SchemaCollectionPreprocessor_t2786719976::get_offset_of_finalDefault_12(),
	SchemaCollectionPreprocessor_t2786719976::get_offset_of_schemaLocations_13(),
	SchemaCollectionPreprocessor_t2786719976::get_offset_of_referenceNamespaces_14(),
	SchemaCollectionPreprocessor_t2786719976::get_offset_of_Xmlns_15(),
	SchemaCollectionPreprocessor_t2786719976::get_offset_of_xmlResolver_16(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1936 = { sizeof (Compositor_t1322920825)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1936[4] = 
{
	Compositor_t1322920825::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1937 = { sizeof (SchemaDeclBase_t3500554832), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1937[11] = 
{
	SchemaDeclBase_t3500554832::get_offset_of_name_0(),
	SchemaDeclBase_t3500554832::get_offset_of_prefix_1(),
	SchemaDeclBase_t3500554832::get_offset_of_isDeclaredInExternal_2(),
	SchemaDeclBase_t3500554832::get_offset_of_presence_3(),
	SchemaDeclBase_t3500554832::get_offset_of_schemaType_4(),
	SchemaDeclBase_t3500554832::get_offset_of_datatype_5(),
	SchemaDeclBase_t3500554832::get_offset_of_defaultValueRaw_6(),
	SchemaDeclBase_t3500554832::get_offset_of_defaultValueTyped_7(),
	SchemaDeclBase_t3500554832::get_offset_of_maxLength_8(),
	SchemaDeclBase_t3500554832::get_offset_of_minLength_9(),
	SchemaDeclBase_t3500554832::get_offset_of_values_10(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1938 = { sizeof (Use_t2902096781)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1938[6] = 
{
	Use_t2902096781::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1939 = { sizeof (SchemaElementDecl_t2267464004), -1, sizeof(SchemaElementDecl_t2267464004_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1939[15] = 
{
	SchemaElementDecl_t2267464004::get_offset_of_attdefs_11(),
	SchemaElementDecl_t2267464004::get_offset_of_defaultAttdefs_12(),
	SchemaElementDecl_t2267464004::get_offset_of_isIdDeclared_13(),
	SchemaElementDecl_t2267464004::get_offset_of_hasNonCDataAttribute_14(),
	SchemaElementDecl_t2267464004::get_offset_of_isAbstract_15(),
	SchemaElementDecl_t2267464004::get_offset_of_isNillable_16(),
	SchemaElementDecl_t2267464004::get_offset_of_hasRequiredAttribute_17(),
	SchemaElementDecl_t2267464004::get_offset_of_isNotationDeclared_18(),
	SchemaElementDecl_t2267464004::get_offset_of_prohibitedAttributes_19(),
	SchemaElementDecl_t2267464004::get_offset_of_contentValidator_20(),
	SchemaElementDecl_t2267464004::get_offset_of_anyAttribute_21(),
	SchemaElementDecl_t2267464004::get_offset_of_block_22(),
	SchemaElementDecl_t2267464004::get_offset_of_constraints_23(),
	SchemaElementDecl_t2267464004::get_offset_of_schemaElement_24(),
	SchemaElementDecl_t2267464004_StaticFields::get_offset_of_Empty_25(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1940 = { sizeof (SchemaEntity_t1577441964), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1940[13] = 
{
	SchemaEntity_t1577441964::get_offset_of_qname_0(),
	SchemaEntity_t1577441964::get_offset_of_url_1(),
	SchemaEntity_t1577441964::get_offset_of_pubid_2(),
	SchemaEntity_t1577441964::get_offset_of_text_3(),
	SchemaEntity_t1577441964::get_offset_of_ndata_4(),
	SchemaEntity_t1577441964::get_offset_of_lineNumber_5(),
	SchemaEntity_t1577441964::get_offset_of_linePosition_6(),
	SchemaEntity_t1577441964::get_offset_of_isParameter_7(),
	SchemaEntity_t1577441964::get_offset_of_isExternal_8(),
	SchemaEntity_t1577441964::get_offset_of_parsingInProgress_9(),
	SchemaEntity_t1577441964::get_offset_of_isDeclaredInExternal_10(),
	SchemaEntity_t1577441964::get_offset_of_baseURI_11(),
	SchemaEntity_t1577441964::get_offset_of_declaredURI_12(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1941 = { sizeof (AttributeMatchState_t1537420415)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1941[11] = 
{
	AttributeMatchState_t1537420415::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1942 = { sizeof (SchemaInfo_t3347508623), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1942[14] = 
{
	SchemaInfo_t3347508623::get_offset_of_elementDecls_0(),
	SchemaInfo_t3347508623::get_offset_of_undeclaredElementDecls_1(),
	SchemaInfo_t3347508623::get_offset_of_generalEntities_2(),
	SchemaInfo_t3347508623::get_offset_of_parameterEntities_3(),
	SchemaInfo_t3347508623::get_offset_of_docTypeName_4(),
	SchemaInfo_t3347508623::get_offset_of_internalDtdSubset_5(),
	SchemaInfo_t3347508623::get_offset_of_hasNonCDataAttributes_6(),
	SchemaInfo_t3347508623::get_offset_of_hasDefaultAttributes_7(),
	SchemaInfo_t3347508623::get_offset_of_targetNamespaces_8(),
	SchemaInfo_t3347508623::get_offset_of_attributeDecls_9(),
	SchemaInfo_t3347508623::get_offset_of_errorCount_10(),
	SchemaInfo_t3347508623::get_offset_of_schemaType_11(),
	SchemaInfo_t3347508623::get_offset_of_elementDeclsByType_12(),
	SchemaInfo_t3347508623::get_offset_of_notations_13(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1943 = { sizeof (SchemaNames_t661607975), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1943[141] = 
{
	SchemaNames_t661607975::get_offset_of_nameTable_0(),
	SchemaNames_t661607975::get_offset_of_NsDataType_1(),
	SchemaNames_t661607975::get_offset_of_NsDataTypeAlias_2(),
	SchemaNames_t661607975::get_offset_of_NsDataTypeOld_3(),
	SchemaNames_t661607975::get_offset_of_NsXml_4(),
	SchemaNames_t661607975::get_offset_of_NsXmlNs_5(),
	SchemaNames_t661607975::get_offset_of_NsXdr_6(),
	SchemaNames_t661607975::get_offset_of_NsXdrAlias_7(),
	SchemaNames_t661607975::get_offset_of_NsXs_8(),
	SchemaNames_t661607975::get_offset_of_NsXsi_9(),
	SchemaNames_t661607975::get_offset_of_XsiType_10(),
	SchemaNames_t661607975::get_offset_of_XsiNil_11(),
	SchemaNames_t661607975::get_offset_of_XsiSchemaLocation_12(),
	SchemaNames_t661607975::get_offset_of_XsiNoNamespaceSchemaLocation_13(),
	SchemaNames_t661607975::get_offset_of_XsdSchema_14(),
	SchemaNames_t661607975::get_offset_of_XdrSchema_15(),
	SchemaNames_t661607975::get_offset_of_QnPCData_16(),
	SchemaNames_t661607975::get_offset_of_QnXml_17(),
	SchemaNames_t661607975::get_offset_of_QnXmlNs_18(),
	SchemaNames_t661607975::get_offset_of_QnDtDt_19(),
	SchemaNames_t661607975::get_offset_of_QnXmlLang_20(),
	SchemaNames_t661607975::get_offset_of_QnName_21(),
	SchemaNames_t661607975::get_offset_of_QnType_22(),
	SchemaNames_t661607975::get_offset_of_QnMaxOccurs_23(),
	SchemaNames_t661607975::get_offset_of_QnMinOccurs_24(),
	SchemaNames_t661607975::get_offset_of_QnInfinite_25(),
	SchemaNames_t661607975::get_offset_of_QnModel_26(),
	SchemaNames_t661607975::get_offset_of_QnOpen_27(),
	SchemaNames_t661607975::get_offset_of_QnClosed_28(),
	SchemaNames_t661607975::get_offset_of_QnContent_29(),
	SchemaNames_t661607975::get_offset_of_QnMixed_30(),
	SchemaNames_t661607975::get_offset_of_QnEmpty_31(),
	SchemaNames_t661607975::get_offset_of_QnEltOnly_32(),
	SchemaNames_t661607975::get_offset_of_QnTextOnly_33(),
	SchemaNames_t661607975::get_offset_of_QnOrder_34(),
	SchemaNames_t661607975::get_offset_of_QnSeq_35(),
	SchemaNames_t661607975::get_offset_of_QnOne_36(),
	SchemaNames_t661607975::get_offset_of_QnMany_37(),
	SchemaNames_t661607975::get_offset_of_QnRequired_38(),
	SchemaNames_t661607975::get_offset_of_QnYes_39(),
	SchemaNames_t661607975::get_offset_of_QnNo_40(),
	SchemaNames_t661607975::get_offset_of_QnString_41(),
	SchemaNames_t661607975::get_offset_of_QnID_42(),
	SchemaNames_t661607975::get_offset_of_QnIDRef_43(),
	SchemaNames_t661607975::get_offset_of_QnIDRefs_44(),
	SchemaNames_t661607975::get_offset_of_QnEntity_45(),
	SchemaNames_t661607975::get_offset_of_QnEntities_46(),
	SchemaNames_t661607975::get_offset_of_QnNmToken_47(),
	SchemaNames_t661607975::get_offset_of_QnNmTokens_48(),
	SchemaNames_t661607975::get_offset_of_QnEnumeration_49(),
	SchemaNames_t661607975::get_offset_of_QnDefault_50(),
	SchemaNames_t661607975::get_offset_of_QnXdrSchema_51(),
	SchemaNames_t661607975::get_offset_of_QnXdrElementType_52(),
	SchemaNames_t661607975::get_offset_of_QnXdrElement_53(),
	SchemaNames_t661607975::get_offset_of_QnXdrGroup_54(),
	SchemaNames_t661607975::get_offset_of_QnXdrAttributeType_55(),
	SchemaNames_t661607975::get_offset_of_QnXdrAttribute_56(),
	SchemaNames_t661607975::get_offset_of_QnXdrDataType_57(),
	SchemaNames_t661607975::get_offset_of_QnXdrDescription_58(),
	SchemaNames_t661607975::get_offset_of_QnXdrExtends_59(),
	SchemaNames_t661607975::get_offset_of_QnXdrAliasSchema_60(),
	SchemaNames_t661607975::get_offset_of_QnDtType_61(),
	SchemaNames_t661607975::get_offset_of_QnDtValues_62(),
	SchemaNames_t661607975::get_offset_of_QnDtMaxLength_63(),
	SchemaNames_t661607975::get_offset_of_QnDtMinLength_64(),
	SchemaNames_t661607975::get_offset_of_QnDtMax_65(),
	SchemaNames_t661607975::get_offset_of_QnDtMin_66(),
	SchemaNames_t661607975::get_offset_of_QnDtMinExclusive_67(),
	SchemaNames_t661607975::get_offset_of_QnDtMaxExclusive_68(),
	SchemaNames_t661607975::get_offset_of_QnTargetNamespace_69(),
	SchemaNames_t661607975::get_offset_of_QnVersion_70(),
	SchemaNames_t661607975::get_offset_of_QnFinalDefault_71(),
	SchemaNames_t661607975::get_offset_of_QnBlockDefault_72(),
	SchemaNames_t661607975::get_offset_of_QnFixed_73(),
	SchemaNames_t661607975::get_offset_of_QnAbstract_74(),
	SchemaNames_t661607975::get_offset_of_QnBlock_75(),
	SchemaNames_t661607975::get_offset_of_QnSubstitutionGroup_76(),
	SchemaNames_t661607975::get_offset_of_QnFinal_77(),
	SchemaNames_t661607975::get_offset_of_QnNillable_78(),
	SchemaNames_t661607975::get_offset_of_QnRef_79(),
	SchemaNames_t661607975::get_offset_of_QnBase_80(),
	SchemaNames_t661607975::get_offset_of_QnDerivedBy_81(),
	SchemaNames_t661607975::get_offset_of_QnNamespace_82(),
	SchemaNames_t661607975::get_offset_of_QnProcessContents_83(),
	SchemaNames_t661607975::get_offset_of_QnRefer_84(),
	SchemaNames_t661607975::get_offset_of_QnPublic_85(),
	SchemaNames_t661607975::get_offset_of_QnSystem_86(),
	SchemaNames_t661607975::get_offset_of_QnSchemaLocation_87(),
	SchemaNames_t661607975::get_offset_of_QnValue_88(),
	SchemaNames_t661607975::get_offset_of_QnUse_89(),
	SchemaNames_t661607975::get_offset_of_QnForm_90(),
	SchemaNames_t661607975::get_offset_of_QnElementFormDefault_91(),
	SchemaNames_t661607975::get_offset_of_QnAttributeFormDefault_92(),
	SchemaNames_t661607975::get_offset_of_QnItemType_93(),
	SchemaNames_t661607975::get_offset_of_QnMemberTypes_94(),
	SchemaNames_t661607975::get_offset_of_QnXPath_95(),
	SchemaNames_t661607975::get_offset_of_QnXsdSchema_96(),
	SchemaNames_t661607975::get_offset_of_QnXsdAnnotation_97(),
	SchemaNames_t661607975::get_offset_of_QnXsdInclude_98(),
	SchemaNames_t661607975::get_offset_of_QnXsdImport_99(),
	SchemaNames_t661607975::get_offset_of_QnXsdElement_100(),
	SchemaNames_t661607975::get_offset_of_QnXsdAttribute_101(),
	SchemaNames_t661607975::get_offset_of_QnXsdAttributeGroup_102(),
	SchemaNames_t661607975::get_offset_of_QnXsdAnyAttribute_103(),
	SchemaNames_t661607975::get_offset_of_QnXsdGroup_104(),
	SchemaNames_t661607975::get_offset_of_QnXsdAll_105(),
	SchemaNames_t661607975::get_offset_of_QnXsdChoice_106(),
	SchemaNames_t661607975::get_offset_of_QnXsdSequence_107(),
	SchemaNames_t661607975::get_offset_of_QnXsdAny_108(),
	SchemaNames_t661607975::get_offset_of_QnXsdNotation_109(),
	SchemaNames_t661607975::get_offset_of_QnXsdSimpleType_110(),
	SchemaNames_t661607975::get_offset_of_QnXsdComplexType_111(),
	SchemaNames_t661607975::get_offset_of_QnXsdUnique_112(),
	SchemaNames_t661607975::get_offset_of_QnXsdKey_113(),
	SchemaNames_t661607975::get_offset_of_QnXsdKeyRef_114(),
	SchemaNames_t661607975::get_offset_of_QnXsdSelector_115(),
	SchemaNames_t661607975::get_offset_of_QnXsdField_116(),
	SchemaNames_t661607975::get_offset_of_QnXsdMinExclusive_117(),
	SchemaNames_t661607975::get_offset_of_QnXsdMinInclusive_118(),
	SchemaNames_t661607975::get_offset_of_QnXsdMaxInclusive_119(),
	SchemaNames_t661607975::get_offset_of_QnXsdMaxExclusive_120(),
	SchemaNames_t661607975::get_offset_of_QnXsdTotalDigits_121(),
	SchemaNames_t661607975::get_offset_of_QnXsdFractionDigits_122(),
	SchemaNames_t661607975::get_offset_of_QnXsdLength_123(),
	SchemaNames_t661607975::get_offset_of_QnXsdMinLength_124(),
	SchemaNames_t661607975::get_offset_of_QnXsdMaxLength_125(),
	SchemaNames_t661607975::get_offset_of_QnXsdEnumeration_126(),
	SchemaNames_t661607975::get_offset_of_QnXsdPattern_127(),
	SchemaNames_t661607975::get_offset_of_QnXsdDocumentation_128(),
	SchemaNames_t661607975::get_offset_of_QnXsdAppinfo_129(),
	SchemaNames_t661607975::get_offset_of_QnSource_130(),
	SchemaNames_t661607975::get_offset_of_QnXsdComplexContent_131(),
	SchemaNames_t661607975::get_offset_of_QnXsdSimpleContent_132(),
	SchemaNames_t661607975::get_offset_of_QnXsdRestriction_133(),
	SchemaNames_t661607975::get_offset_of_QnXsdExtension_134(),
	SchemaNames_t661607975::get_offset_of_QnXsdUnion_135(),
	SchemaNames_t661607975::get_offset_of_QnXsdList_136(),
	SchemaNames_t661607975::get_offset_of_QnXsdWhiteSpace_137(),
	SchemaNames_t661607975::get_offset_of_QnXsdRedefine_138(),
	SchemaNames_t661607975::get_offset_of_QnXsdAnyType_139(),
	SchemaNames_t661607975::get_offset_of_TokenToQName_140(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1944 = { sizeof (Token_t1171039503)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1944[124] = 
{
	Token_t1171039503::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1945 = { sizeof (SchemaNamespaceManager_t2152351463), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1945[1] = 
{
	SchemaNamespaceManager_t2152351463::get_offset_of_node_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1946 = { sizeof (SchemaNotation_t1947677467), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1946[3] = 
{
	SchemaNotation_t1947677467::get_offset_of_name_0(),
	SchemaNotation_t1947677467::get_offset_of_systemLiteral_1(),
	SchemaNotation_t1947677467::get_offset_of_pubid_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1947 = { sizeof (Compiler_t2647573624), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1947[13] = 
{
	Compiler_t2647573624::get_offset_of_restrictionErrorMsg_6(),
	Compiler_t2647573624::get_offset_of_attributes_7(),
	Compiler_t2647573624::get_offset_of_attributeGroups_8(),
	Compiler_t2647573624::get_offset_of_elements_9(),
	Compiler_t2647573624::get_offset_of_schemaTypes_10(),
	Compiler_t2647573624::get_offset_of_groups_11(),
	Compiler_t2647573624::get_offset_of_notations_12(),
	Compiler_t2647573624::get_offset_of_examplars_13(),
	Compiler_t2647573624::get_offset_of_identityConstraints_14(),
	Compiler_t2647573624::get_offset_of_complexTypeStack_15(),
	Compiler_t2647573624::get_offset_of_schemasToCompile_16(),
	Compiler_t2647573624::get_offset_of_importedSchemas_17(),
	Compiler_t2647573624::get_offset_of_schemaForSchema_18(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1948 = { sizeof (SchemaType_t3738787686)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1948[5] = 
{
	SchemaType_t3738787686::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1949 = { sizeof (ValidationEventArgs_t2784773869), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1949[2] = 
{
	ValidationEventArgs_t2784773869::get_offset_of_ex_1(),
	ValidationEventArgs_t2784773869::get_offset_of_severity_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1950 = { sizeof (ValidationEventHandler_t791314227), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1951 = { sizeof (StateUnion_t2516366335)+ sizeof (RuntimeObject), sizeof(StateUnion_t2516366335 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1951[4] = 
{
	StateUnion_t2516366335::get_offset_of_State_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	StateUnion_t2516366335::get_offset_of_AllElementsRequired_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	StateUnion_t2516366335::get_offset_of_CurPosIndex_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	StateUnion_t2516366335::get_offset_of_NumberOfRunningPos_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1952 = { sizeof (ValidationState_t603008718), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1952[13] = 
{
	ValidationState_t603008718::get_offset_of_IsNill_0(),
	ValidationState_t603008718::get_offset_of_NeedValidateChildren_1(),
	ValidationState_t603008718::get_offset_of_ProcessContents_2(),
	ValidationState_t603008718::get_offset_of_ElementDecl_3(),
	ValidationState_t603008718::get_offset_of_LocalName_4(),
	ValidationState_t603008718::get_offset_of_Namespace_5(),
	ValidationState_t603008718::get_offset_of_Constr_6(),
	ValidationState_t603008718::get_offset_of_CurrentState_7(),
	ValidationState_t603008718::get_offset_of_HasMatched_8(),
	ValidationState_t603008718::get_offset_of_CurPos_9(),
	ValidationState_t603008718::get_offset_of_AllElementsSet_10(),
	ValidationState_t603008718::get_offset_of_RunningPositions_11(),
	ValidationState_t603008718::get_offset_of_TooComplex_12(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1953 = { sizeof (XdrBuilder_t781626846), -1, sizeof(XdrBuilder_t781626846_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1953[37] = 
{
	XdrBuilder_t781626846_StaticFields::get_offset_of_S_XDR_Root_Element_0(),
	XdrBuilder_t781626846_StaticFields::get_offset_of_S_XDR_Root_SubElements_1(),
	XdrBuilder_t781626846_StaticFields::get_offset_of_S_XDR_ElementType_SubElements_2(),
	XdrBuilder_t781626846_StaticFields::get_offset_of_S_XDR_AttributeType_SubElements_3(),
	XdrBuilder_t781626846_StaticFields::get_offset_of_S_XDR_Group_SubElements_4(),
	XdrBuilder_t781626846_StaticFields::get_offset_of_S_XDR_Root_Attributes_5(),
	XdrBuilder_t781626846_StaticFields::get_offset_of_S_XDR_ElementType_Attributes_6(),
	XdrBuilder_t781626846_StaticFields::get_offset_of_S_XDR_AttributeType_Attributes_7(),
	XdrBuilder_t781626846_StaticFields::get_offset_of_S_XDR_Element_Attributes_8(),
	XdrBuilder_t781626846_StaticFields::get_offset_of_S_XDR_Attribute_Attributes_9(),
	XdrBuilder_t781626846_StaticFields::get_offset_of_S_XDR_Group_Attributes_10(),
	XdrBuilder_t781626846_StaticFields::get_offset_of_S_XDR_ElementDataType_Attributes_11(),
	XdrBuilder_t781626846_StaticFields::get_offset_of_S_XDR_AttributeDataType_Attributes_12(),
	XdrBuilder_t781626846_StaticFields::get_offset_of_S_SchemaEntries_13(),
	XdrBuilder_t781626846::get_offset_of__SchemaInfo_14(),
	XdrBuilder_t781626846::get_offset_of__TargetNamespace_15(),
	XdrBuilder_t781626846::get_offset_of__reader_16(),
	XdrBuilder_t781626846::get_offset_of_positionInfo_17(),
	XdrBuilder_t781626846::get_offset_of__contentValidator_18(),
	XdrBuilder_t781626846::get_offset_of__CurState_19(),
	XdrBuilder_t781626846::get_offset_of__NextState_20(),
	XdrBuilder_t781626846::get_offset_of__StateHistory_21(),
	XdrBuilder_t781626846::get_offset_of__GroupStack_22(),
	XdrBuilder_t781626846::get_offset_of__XdrName_23(),
	XdrBuilder_t781626846::get_offset_of__XdrPrefix_24(),
	XdrBuilder_t781626846::get_offset_of__ElementDef_25(),
	XdrBuilder_t781626846::get_offset_of__GroupDef_26(),
	XdrBuilder_t781626846::get_offset_of__AttributeDef_27(),
	XdrBuilder_t781626846::get_offset_of__UndefinedAttributeTypes_28(),
	XdrBuilder_t781626846::get_offset_of__BaseDecl_29(),
	XdrBuilder_t781626846::get_offset_of__NameTable_30(),
	XdrBuilder_t781626846::get_offset_of__SchemaNames_31(),
	XdrBuilder_t781626846::get_offset_of__CurNsMgr_32(),
	XdrBuilder_t781626846::get_offset_of__Text_33(),
	XdrBuilder_t781626846::get_offset_of_validationEventHandler_34(),
	XdrBuilder_t781626846::get_offset_of__UndeclaredElements_35(),
	XdrBuilder_t781626846::get_offset_of_xmlResolver_36(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1954 = { sizeof (DeclBaseInfo_t2186480169), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1954[12] = 
{
	DeclBaseInfo_t2186480169::get_offset_of__Name_0(),
	DeclBaseInfo_t2186480169::get_offset_of__Prefix_1(),
	DeclBaseInfo_t2186480169::get_offset_of__TypeName_2(),
	DeclBaseInfo_t2186480169::get_offset_of__TypePrefix_3(),
	DeclBaseInfo_t2186480169::get_offset_of__Default_4(),
	DeclBaseInfo_t2186480169::get_offset_of__Revises_5(),
	DeclBaseInfo_t2186480169::get_offset_of__MaxOccurs_6(),
	DeclBaseInfo_t2186480169::get_offset_of__MinOccurs_7(),
	DeclBaseInfo_t2186480169::get_offset_of__Checking_8(),
	DeclBaseInfo_t2186480169::get_offset_of__ElementDecl_9(),
	DeclBaseInfo_t2186480169::get_offset_of__Attdef_10(),
	DeclBaseInfo_t2186480169::get_offset_of__Next_11(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1955 = { sizeof (GroupContent_t833025371), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1955[5] = 
{
	GroupContent_t833025371::get_offset_of__MinVal_0(),
	GroupContent_t833025371::get_offset_of__MaxVal_1(),
	GroupContent_t833025371::get_offset_of__HasMaxAttr_2(),
	GroupContent_t833025371::get_offset_of__HasMinAttr_3(),
	GroupContent_t833025371::get_offset_of__Order_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1956 = { sizeof (ElementContent_t2671703075), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1956[14] = 
{
	ElementContent_t2671703075::get_offset_of__ElementDecl_0(),
	ElementContent_t2671703075::get_offset_of__ContentAttr_1(),
	ElementContent_t2671703075::get_offset_of__OrderAttr_2(),
	ElementContent_t2671703075::get_offset_of__MasterGroupRequired_3(),
	ElementContent_t2671703075::get_offset_of__ExistTerminal_4(),
	ElementContent_t2671703075::get_offset_of__AllowDataType_5(),
	ElementContent_t2671703075::get_offset_of__HasDataType_6(),
	ElementContent_t2671703075::get_offset_of__HasType_7(),
	ElementContent_t2671703075::get_offset_of__EnumerationRequired_8(),
	ElementContent_t2671703075::get_offset_of__MinVal_9(),
	ElementContent_t2671703075::get_offset_of__MaxVal_10(),
	ElementContent_t2671703075::get_offset_of__MaxLength_11(),
	ElementContent_t2671703075::get_offset_of__MinLength_12(),
	ElementContent_t2671703075::get_offset_of__AttDefList_13(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1957 = { sizeof (AttributeContent_t2997225126), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1957[12] = 
{
	AttributeContent_t2997225126::get_offset_of__AttDef_0(),
	AttributeContent_t2997225126::get_offset_of__Name_1(),
	AttributeContent_t2997225126::get_offset_of__Prefix_2(),
	AttributeContent_t2997225126::get_offset_of__Required_3(),
	AttributeContent_t2997225126::get_offset_of__MinVal_4(),
	AttributeContent_t2997225126::get_offset_of__MaxVal_5(),
	AttributeContent_t2997225126::get_offset_of__MaxLength_6(),
	AttributeContent_t2997225126::get_offset_of__MinLength_7(),
	AttributeContent_t2997225126::get_offset_of__EnumerationRequired_8(),
	AttributeContent_t2997225126::get_offset_of__HasDataType_9(),
	AttributeContent_t2997225126::get_offset_of__Global_10(),
	AttributeContent_t2997225126::get_offset_of__Default_11(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1958 = { sizeof (XdrBuildFunction_t4965607), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1959 = { sizeof (XdrInitFunction_t326013928), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1960 = { sizeof (XdrBeginChildFunction_t3571964013), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1961 = { sizeof (XdrEndChildFunction_t2609844494), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1962 = { sizeof (XdrAttributeEntry_t1100747816), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1962[4] = 
{
	XdrAttributeEntry_t1100747816::get_offset_of__Attribute_0(),
	XdrAttributeEntry_t1100747816::get_offset_of__SchemaFlags_1(),
	XdrAttributeEntry_t1100747816::get_offset_of__Datatype_2(),
	XdrAttributeEntry_t1100747816::get_offset_of__BuildFunc_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1963 = { sizeof (XdrEntry_t1852396641), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1963[7] = 
{
	XdrEntry_t1852396641::get_offset_of__Name_0(),
	XdrEntry_t1852396641::get_offset_of__NextStates_1(),
	XdrEntry_t1852396641::get_offset_of__Attributes_2(),
	XdrEntry_t1852396641::get_offset_of__InitFunc_3(),
	XdrEntry_t1852396641::get_offset_of__BeginChildFunc_4(),
	XdrEntry_t1852396641::get_offset_of__EndChildFunc_5(),
	XdrEntry_t1852396641::get_offset_of__AllowText_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1964 = { sizeof (XdrValidator_t1704189332), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1964[8] = 
{
	XdrValidator_t1704189332::get_offset_of_validationStack_15(),
	XdrValidator_t1704189332::get_offset_of_attPresence_16(),
	XdrValidator_t1704189332::get_offset_of_name_17(),
	XdrValidator_t1704189332::get_offset_of_nsManager_18(),
	XdrValidator_t1704189332::get_offset_of_isProcessContents_19(),
	XdrValidator_t1704189332::get_offset_of_IDs_20(),
	XdrValidator_t1704189332::get_offset_of_idRefListHead_21(),
	XdrValidator_t1704189332::get_offset_of_inlineSchemaParser_22(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1965 = { sizeof (XmlAtomicValue_t3775050121), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1965[5] = 
{
	XmlAtomicValue_t3775050121::get_offset_of_xmlType_0(),
	XmlAtomicValue_t3775050121::get_offset_of_objVal_1(),
	XmlAtomicValue_t3775050121::get_offset_of_clrType_2(),
	XmlAtomicValue_t3775050121::get_offset_of_unionVal_3(),
	XmlAtomicValue_t3775050121::get_offset_of_nsPrefix_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1966 = { sizeof (Union_t2178763312)+ sizeof (RuntimeObject), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1966[5] = 
{
	Union_t2178763312::get_offset_of_boolVal_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Union_t2178763312::get_offset_of_dblVal_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Union_t2178763312::get_offset_of_i64Val_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Union_t2178763312::get_offset_of_i32Val_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Union_t2178763312::get_offset_of_dtVal_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1967 = { sizeof (NamespacePrefixForQName_t198417103), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1967[2] = 
{
	NamespacePrefixForQName_t198417103::get_offset_of_prefix_0(),
	NamespacePrefixForQName_t198417103::get_offset_of_ns_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1968 = { sizeof (XmlSchema_t3742557897), -1, sizeof(XmlSchema_t3742557897_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1968[26] = 
{
	XmlSchema_t3742557897::get_offset_of_attributeFormDefault_6(),
	XmlSchema_t3742557897::get_offset_of_elementFormDefault_7(),
	XmlSchema_t3742557897::get_offset_of_blockDefault_8(),
	XmlSchema_t3742557897::get_offset_of_finalDefault_9(),
	XmlSchema_t3742557897::get_offset_of_targetNs_10(),
	XmlSchema_t3742557897::get_offset_of_version_11(),
	XmlSchema_t3742557897::get_offset_of_includes_12(),
	XmlSchema_t3742557897::get_offset_of_items_13(),
	XmlSchema_t3742557897::get_offset_of_id_14(),
	XmlSchema_t3742557897::get_offset_of_moreAttributes_15(),
	XmlSchema_t3742557897::get_offset_of_isCompiled_16(),
	XmlSchema_t3742557897::get_offset_of_isCompiledBySet_17(),
	XmlSchema_t3742557897::get_offset_of_isPreprocessed_18(),
	XmlSchema_t3742557897::get_offset_of_errorCount_19(),
	XmlSchema_t3742557897::get_offset_of_attributes_20(),
	XmlSchema_t3742557897::get_offset_of_attributeGroups_21(),
	XmlSchema_t3742557897::get_offset_of_elements_22(),
	XmlSchema_t3742557897::get_offset_of_types_23(),
	XmlSchema_t3742557897::get_offset_of_groups_24(),
	XmlSchema_t3742557897::get_offset_of_notations_25(),
	XmlSchema_t3742557897::get_offset_of_identityConstraints_26(),
	XmlSchema_t3742557897_StaticFields::get_offset_of_globalIdCounter_27(),
	XmlSchema_t3742557897::get_offset_of_schemaId_28(),
	XmlSchema_t3742557897::get_offset_of_baseUri_29(),
	XmlSchema_t3742557897::get_offset_of_ids_30(),
	XmlSchema_t3742557897::get_offset_of_document_31(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1969 = { sizeof (XmlSchemaAll_t1118454309), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1969[1] = 
{
	XmlSchemaAll_t1118454309::get_offset_of_items_13(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1970 = { sizeof (XmlSchemaAnnotated_t2603549639), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1970[3] = 
{
	XmlSchemaAnnotated_t2603549639::get_offset_of_id_6(),
	XmlSchemaAnnotated_t2603549639::get_offset_of_annotation_7(),
	XmlSchemaAnnotated_t2603549639::get_offset_of_moreAttributes_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1971 = { sizeof (XmlSchemaAnnotation_t2553753397), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1971[3] = 
{
	XmlSchemaAnnotation_t2553753397::get_offset_of_id_6(),
	XmlSchemaAnnotation_t2553753397::get_offset_of_items_7(),
	XmlSchemaAnnotation_t2553753397::get_offset_of_moreAttributes_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1972 = { sizeof (XmlSchemaAny_t1119175207), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1972[3] = 
{
	XmlSchemaAny_t1119175207::get_offset_of_ns_13(),
	XmlSchemaAny_t1119175207::get_offset_of_processContents_14(),
	XmlSchemaAny_t1119175207::get_offset_of_namespaceList_15(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1973 = { sizeof (XmlSchemaAnyAttribute_t963227996), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1973[3] = 
{
	XmlSchemaAnyAttribute_t963227996::get_offset_of_ns_9(),
	XmlSchemaAnyAttribute_t963227996::get_offset_of_processContents_10(),
	XmlSchemaAnyAttribute_t963227996::get_offset_of_namespaceList_11(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1974 = { sizeof (XmlSchemaAppInfo_t426084712), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1974[2] = 
{
	XmlSchemaAppInfo_t426084712::get_offset_of_source_6(),
	XmlSchemaAppInfo_t426084712::get_offset_of_markup_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1975 = { sizeof (XmlSchemaAttribute_t2797257020), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1975[11] = 
{
	XmlSchemaAttribute_t2797257020::get_offset_of_defaultValue_9(),
	XmlSchemaAttribute_t2797257020::get_offset_of_fixedValue_10(),
	XmlSchemaAttribute_t2797257020::get_offset_of_name_11(),
	XmlSchemaAttribute_t2797257020::get_offset_of_form_12(),
	XmlSchemaAttribute_t2797257020::get_offset_of_use_13(),
	XmlSchemaAttribute_t2797257020::get_offset_of_refName_14(),
	XmlSchemaAttribute_t2797257020::get_offset_of_typeName_15(),
	XmlSchemaAttribute_t2797257020::get_offset_of_qualifiedName_16(),
	XmlSchemaAttribute_t2797257020::get_offset_of_type_17(),
	XmlSchemaAttribute_t2797257020::get_offset_of_attributeType_18(),
	XmlSchemaAttribute_t2797257020::get_offset_of_attDef_19(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1976 = { sizeof (XmlSchemaAttributeGroup_t246430545), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1976[8] = 
{
	XmlSchemaAttributeGroup_t246430545::get_offset_of_name_9(),
	XmlSchemaAttributeGroup_t246430545::get_offset_of_attributes_10(),
	XmlSchemaAttributeGroup_t246430545::get_offset_of_anyAttribute_11(),
	XmlSchemaAttributeGroup_t246430545::get_offset_of_qname_12(),
	XmlSchemaAttributeGroup_t246430545::get_offset_of_redefined_13(),
	XmlSchemaAttributeGroup_t246430545::get_offset_of_attributeUses_14(),
	XmlSchemaAttributeGroup_t246430545::get_offset_of_attributeWildcard_15(),
	XmlSchemaAttributeGroup_t246430545::get_offset_of_selfReferenceCount_16(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1977 = { sizeof (XmlSchemaAttributeGroupRef_t846390688), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1977[1] = 
{
	XmlSchemaAttributeGroupRef_t846390688::get_offset_of_refName_9(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1978 = { sizeof (XmlSchemaChoice_t959520675), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1978[1] = 
{
	XmlSchemaChoice_t959520675::get_offset_of_items_13(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1979 = { sizeof (XmlSchemaCollection_t3610399789), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1979[8] = 
{
	XmlSchemaCollection_t3610399789::get_offset_of_collection_0(),
	XmlSchemaCollection_t3610399789::get_offset_of_nameTable_1(),
	XmlSchemaCollection_t3610399789::get_offset_of_schemaNames_2(),
	XmlSchemaCollection_t3610399789::get_offset_of_wLock_3(),
	XmlSchemaCollection_t3610399789::get_offset_of_timeout_4(),
	XmlSchemaCollection_t3610399789::get_offset_of_isThreadSafe_5(),
	XmlSchemaCollection_t3610399789::get_offset_of_validationEventHandler_6(),
	XmlSchemaCollection_t3610399789::get_offset_of_xmlResolver_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1980 = { sizeof (XmlSchemaCollectionNode_t2379032341), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1980[3] = 
{
	XmlSchemaCollectionNode_t2379032341::get_offset_of_namespaceUri_0(),
	XmlSchemaCollectionNode_t2379032341::get_offset_of_schemaInfo_1(),
	XmlSchemaCollectionNode_t2379032341::get_offset_of_schema_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1981 = { sizeof (XmlSchemaCollectionEnumerator_t1663512188), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1981[1] = 
{
	XmlSchemaCollectionEnumerator_t1663512188::get_offset_of_enumerator_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1982 = { sizeof (XmlSchemaCompilationSettings_t2218765537), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1982[1] = 
{
	XmlSchemaCompilationSettings_t2218765537::get_offset_of_enableUpaCheck_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1983 = { sizeof (XmlSchemaComplexContent_t3528540772), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1983[3] = 
{
	XmlSchemaComplexContent_t3528540772::get_offset_of_content_9(),
	XmlSchemaComplexContent_t3528540772::get_offset_of_isMixed_10(),
	XmlSchemaComplexContent_t3528540772::get_offset_of_hasMixedAttribute_11(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1984 = { sizeof (XmlSchemaComplexContentExtension_t2396613513), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1984[4] = 
{
	XmlSchemaComplexContentExtension_t2396613513::get_offset_of_particle_9(),
	XmlSchemaComplexContentExtension_t2396613513::get_offset_of_attributes_10(),
	XmlSchemaComplexContentExtension_t2396613513::get_offset_of_anyAttribute_11(),
	XmlSchemaComplexContentExtension_t2396613513::get_offset_of_baseTypeName_12(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1985 = { sizeof (XmlSchemaComplexContentRestriction_t3155540863), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1985[4] = 
{
	XmlSchemaComplexContentRestriction_t3155540863::get_offset_of_particle_9(),
	XmlSchemaComplexContentRestriction_t3155540863::get_offset_of_attributes_10(),
	XmlSchemaComplexContentRestriction_t3155540863::get_offset_of_anyAttribute_11(),
	XmlSchemaComplexContentRestriction_t3155540863::get_offset_of_baseTypeName_12(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1986 = { sizeof (XmlSchemaComplexType_t3740801802), -1, sizeof(XmlSchemaComplexType_t3740801802_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1986[14] = 
{
	XmlSchemaComplexType_t3740801802::get_offset_of_block_19(),
	XmlSchemaComplexType_t3740801802::get_offset_of_contentModel_20(),
	XmlSchemaComplexType_t3740801802::get_offset_of_particle_21(),
	XmlSchemaComplexType_t3740801802::get_offset_of_attributes_22(),
	XmlSchemaComplexType_t3740801802::get_offset_of_anyAttribute_23(),
	XmlSchemaComplexType_t3740801802::get_offset_of_contentTypeParticle_24(),
	XmlSchemaComplexType_t3740801802::get_offset_of_blockResolved_25(),
	XmlSchemaComplexType_t3740801802::get_offset_of_localElements_26(),
	XmlSchemaComplexType_t3740801802::get_offset_of_attributeUses_27(),
	XmlSchemaComplexType_t3740801802::get_offset_of_attributeWildcard_28(),
	XmlSchemaComplexType_t3740801802_StaticFields::get_offset_of_anyTypeLax_29(),
	XmlSchemaComplexType_t3740801802_StaticFields::get_offset_of_anyTypeSkip_30(),
	XmlSchemaComplexType_t3740801802_StaticFields::get_offset_of_untypedAnyType_31(),
	XmlSchemaComplexType_t3740801802::get_offset_of_pvFlags_32(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1987 = { sizeof (XmlSchemaContent_t1040349258), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1988 = { sizeof (XmlSchemaContentModel_t602185179), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1989 = { sizeof (XmlSchemaContentProcessing_t826201100)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1989[5] = 
{
	XmlSchemaContentProcessing_t826201100::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1990 = { sizeof (XmlSchemaContentType_t3022550233)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1990[5] = 
{
	XmlSchemaContentType_t3022550233::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1991 = { sizeof (XmlSchemaDatatype_t322714710), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1992 = { sizeof (XmlSchemaDerivationMethod_t1774354337)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1992[9] = 
{
	XmlSchemaDerivationMethod_t1774354337::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1993 = { sizeof (XmlSchemaDocumentation_t1182960532), -1, sizeof(XmlSchemaDocumentation_t1182960532_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1993[4] = 
{
	XmlSchemaDocumentation_t1182960532::get_offset_of_source_6(),
	XmlSchemaDocumentation_t1182960532::get_offset_of_language_7(),
	XmlSchemaDocumentation_t1182960532::get_offset_of_markup_8(),
	XmlSchemaDocumentation_t1182960532_StaticFields::get_offset_of_languageType_9(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1994 = { sizeof (XmlSchemaElement_t427880856), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1994[21] = 
{
	XmlSchemaElement_t427880856::get_offset_of_isAbstract_13(),
	XmlSchemaElement_t427880856::get_offset_of_hasAbstractAttribute_14(),
	XmlSchemaElement_t427880856::get_offset_of_isNillable_15(),
	XmlSchemaElement_t427880856::get_offset_of_hasNillableAttribute_16(),
	XmlSchemaElement_t427880856::get_offset_of_isLocalTypeDerivationChecked_17(),
	XmlSchemaElement_t427880856::get_offset_of_block_18(),
	XmlSchemaElement_t427880856::get_offset_of_final_19(),
	XmlSchemaElement_t427880856::get_offset_of_form_20(),
	XmlSchemaElement_t427880856::get_offset_of_defaultValue_21(),
	XmlSchemaElement_t427880856::get_offset_of_fixedValue_22(),
	XmlSchemaElement_t427880856::get_offset_of_name_23(),
	XmlSchemaElement_t427880856::get_offset_of_refName_24(),
	XmlSchemaElement_t427880856::get_offset_of_substitutionGroup_25(),
	XmlSchemaElement_t427880856::get_offset_of_typeName_26(),
	XmlSchemaElement_t427880856::get_offset_of_type_27(),
	XmlSchemaElement_t427880856::get_offset_of_qualifiedName_28(),
	XmlSchemaElement_t427880856::get_offset_of_elementType_29(),
	XmlSchemaElement_t427880856::get_offset_of_blockResolved_30(),
	XmlSchemaElement_t427880856::get_offset_of_finalResolved_31(),
	XmlSchemaElement_t427880856::get_offset_of_constraints_32(),
	XmlSchemaElement_t427880856::get_offset_of_elementDecl_33(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1995 = { sizeof (XmlSchemaException_t3511258692), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1995[7] = 
{
	XmlSchemaException_t3511258692::get_offset_of_res_17(),
	XmlSchemaException_t3511258692::get_offset_of_args_18(),
	XmlSchemaException_t3511258692::get_offset_of_sourceUri_19(),
	XmlSchemaException_t3511258692::get_offset_of_lineNumber_20(),
	XmlSchemaException_t3511258692::get_offset_of_linePosition_21(),
	XmlSchemaException_t3511258692::get_offset_of_sourceSchemaObject_22(),
	XmlSchemaException_t3511258692::get_offset_of_message_23(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1996 = { sizeof (XmlSchemaExternal_t3074890143), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1996[6] = 
{
	XmlSchemaExternal_t3074890143::get_offset_of_location_6(),
	XmlSchemaExternal_t3074890143::get_offset_of_baseUri_7(),
	XmlSchemaExternal_t3074890143::get_offset_of_schema_8(),
	XmlSchemaExternal_t3074890143::get_offset_of_id_9(),
	XmlSchemaExternal_t3074890143::get_offset_of_moreAttributes_10(),
	XmlSchemaExternal_t3074890143::get_offset_of_compositor_11(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1997 = { sizeof (FacetType_t2273005353)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1997[14] = 
{
	FacetType_t2273005353::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1998 = { sizeof (XmlSchemaFacet_t1906017689), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1998[3] = 
{
	XmlSchemaFacet_t1906017689::get_offset_of_value_9(),
	XmlSchemaFacet_t1906017689::get_offset_of_isFixed_10(),
	XmlSchemaFacet_t1906017689::get_offset_of_facetType_11(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1999 = { sizeof (XmlSchemaNumericFacet_t3753040035), -1, 0, 0 };
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // Modified by PostBuild.cs
