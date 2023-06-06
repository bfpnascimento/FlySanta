#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


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
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.Collections.Generic.List`1<UnityEngine.UI.Image>
struct List_1_t815A476B0A21E183042059E705F9E505478CD8AE;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// UnityEngine.ContactPoint2D[]
struct ContactPoint2DU5BU5D_t7AE0F95E9BFC90DE859575689AA76B503D433277;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642;
// UnityEngine.Material[]
struct MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492;
// UnityEngine.Sprite[]
struct SpriteU5BU5D_t8DB77E112FFC97B722E701189DCB4059F943FD77;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4;
// UnityEngine.Animator
struct Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149;
// UnityEngine.AudioSource
struct AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B;
// UnityEngine.Behaviour
struct Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9;
// Assets.Scripts.Menus.BotoesJogo
struct BotoesJogo_t74E1945FA99F0365ACB794976A779E8DE4F3BFED;
// UnityEngine.BoxCollider2D
struct BoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9;
// UnityEngine.Canvas
struct Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E;
// UnityEngine.Collision2D
struct Collision2D_t95B5FD331CE95276D3658140844190B485D26564;
// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684;
// ControladorCano
struct ControladorCano_t4F03F0C283E42BA3A6246A236DDEE100E8703E91;
// Assets.Scripts.Controladores.ControladorJogo
struct ControladorJogo_tBA3EB5503CCE6D7149F9098AB82E293117900DEF;
// ControladorPersonagem
struct ControladorPersonagem_tA56FE7604ECF00DD04846933C7FCE6CA09127FBA;
// Assets.Scripts.Controladores.ControladorPontos
struct ControladorPontos_t12000FE98845B63BB38922ECF4F837D7ADDB25D4;
// UnityEngine.UI.FontData
struct FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738;
// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319;
// System.Collections.IEnumerator
struct IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105;
// UnityEngine.UI.Image
struct Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C;
// UnityEngine.Material
struct Material_t8927C00353A72755313F046D0CE85178AE8218EE;
// UnityEngine.Mesh
struct Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A;
// NewBehaviourScript
struct NewBehaviourScript_t5ED8D4BD4668DBECFEFD841BD2A8CC1D8FCF38CB;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15;
// UnityEngine.RectTransform
struct RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072;
// UnityEngine.Renderer
struct Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C;
// UnityEngine.Rigidbody2D
struct Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5;
// Assets.Scripts.Parallax.Rolar
struct Rolar_tAD220DBFF42B797A8460E36A239246B7C3381699;
// UnityEngine.Sprite
struct Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9;
// System.String
struct String_t;
// Teste
struct Teste_t57D50A8062F4BAC8E0F13D3CB3AD6B8A6D4C6C59;
// UnityEngine.UI.Text
struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1;
// UnityEngine.TextGenerator
struct TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70;
// UnityEngine.Texture2D
struct Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF;
// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1;
// UnityEngine.Events.UnityAction
struct UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4;

IL2CPP_EXTERN_C RuntimeClass* IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0C10E47675493434D04CD8025C8303AF94F7BA5A;
IL2CPP_EXTERN_C String_t* _stringLiteral11644A2513F57CBE1820BC06F7BF032BF65CF2DF;
IL2CPP_EXTERN_C String_t* _stringLiteral48EAC20407382006CB98C2A0D476DEB3128212A4;
IL2CPP_EXTERN_C String_t* _stringLiteral6F9C676AF0348818182ECA2B172ED24CAB8DDAAD;
IL2CPP_EXTERN_C String_t* _stringLiteral7511348C5B477DA0040D9F19955F690B87914497;
IL2CPP_EXTERN_C String_t* _stringLiteralC61D1802A829C1CF378EA9B2F6F66BC88E133EF5;
IL2CPP_EXTERN_C String_t* _stringLiteralDA0F50F607896C695695DF832B80CB299D708895;
IL2CPP_EXTERN_C String_t* _stringLiteralE33C32A28520C7B4D5D0F44940D75586602765AC;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m56C584BE9A3B866D54FAEE0529E28C8D1E57989F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mCC3B7A679ECE504BFAF8C70C4EF527511F46902F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisBoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9_mD7909FB3C98B8C554A48934864C1F8E9065C36BA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisControladorPontos_t12000FE98845B63BB38922ECF4F837D7ADDB25D4_mED298E3D26B78951B73EF38DA855C02DF3C10BC9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisControladorJogo_tBA3EB5503CCE6D7149F9098AB82E293117900DEF_m2E59DE9E1C7BAA41B2B69B73363EA6334A1639A3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisControladorPontos_t12000FE98845B63BB38922ECF4F837D7ADDB25D4_mCE78E0C398F45A832D7A36593310B936C407377B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_mD787758BED3337F182C18CC67C516C2A11B55466_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisRolar_tAD220DBFF42B797A8460E36A239246B7C3381699_m2FF642EDEC5569C2B7F12F25A08871CD4838C366_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33_RuntimeMethod_var;
struct ContactPoint2D_t5A4C242ABAE740C565BF01A35CEE279058E66A62 ;

struct GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642;
struct MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492;
struct SpriteU5BU5D_t8DB77E112FFC97B722E701189DCB4059F943FD77;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tFDCAFCBB4B3431CFF2DC4D3E03FBFDF54EFF7E9A 
{
public:

public:
};


// System.Object

struct Il2CppArrayBounds;

// System.Array


// NewBehaviourScript
struct NewBehaviourScript_t5ED8D4BD4668DBECFEFD841BD2A8CC1D8FCF38CB  : public RuntimeObject
{
public:

public:
};


// System.String
struct String_t  : public RuntimeObject
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
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_5), (void*)value);
	}
};


// System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_com
{
};

// System.Boolean
struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// UnityEngine.Color
struct Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 
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
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};


// System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA  : public ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52
{
public:

public:
};

struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_com
{
};

// System.Int32
struct Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


// System.IntPtr
struct IntPtr_t 
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


// UnityEngine.Quaternion
struct Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 
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
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___identityQuaternion_4 = value;
	}
};


// System.Single
struct Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};


// UnityEngine.Vector2
struct Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___zeroVector_2)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___oneVector_3)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___upVector_4)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___downVector_5)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___leftVector_6)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___rightVector_7)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___negativeInfinityVector_9 = value;
	}
};


// UnityEngine.Vector3
struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___zeroVector_5)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___oneVector_6)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___upVector_7)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___downVector_8)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___leftVector_9)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___rightVector_10)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___forwardVector_11)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___backVector_12)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___negativeInfinityVector_14 = value;
	}
};


// UnityEngine.Vector4
struct Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 
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
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}

	inline static int32_t get_offset_of_w_4() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___w_4)); }
	inline float get_w_4() const { return ___w_4; }
	inline float* get_address_of_w_4() { return &___w_4; }
	inline void set_w_4(float value)
	{
		___w_4 = value;
	}
};

struct Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields
{
public:
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___negativeInfinityVector_8;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___zeroVector_5)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___oneVector_6)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_7() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___positiveInfinityVector_7)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_positiveInfinityVector_7() const { return ___positiveInfinityVector_7; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_positiveInfinityVector_7() { return &___positiveInfinityVector_7; }
	inline void set_positiveInfinityVector_7(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___positiveInfinityVector_7 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___negativeInfinityVector_8)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_negativeInfinityVector_8() const { return ___negativeInfinityVector_8; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_negativeInfinityVector_8() { return &___negativeInfinityVector_8; }
	inline void set_negativeInfinityVector_8(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___negativeInfinityVector_8 = value;
	}
};


// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5__padding[1];
	};

public:
};


// UnityEngine.Collision2D
struct Collision2D_t95B5FD331CE95276D3658140844190B485D26564  : public RuntimeObject
{
public:
	// System.Int32 UnityEngine.Collision2D::m_Collider
	int32_t ___m_Collider_0;
	// System.Int32 UnityEngine.Collision2D::m_OtherCollider
	int32_t ___m_OtherCollider_1;
	// System.Int32 UnityEngine.Collision2D::m_Rigidbody
	int32_t ___m_Rigidbody_2;
	// System.Int32 UnityEngine.Collision2D::m_OtherRigidbody
	int32_t ___m_OtherRigidbody_3;
	// UnityEngine.Vector2 UnityEngine.Collision2D::m_RelativeVelocity
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_RelativeVelocity_4;
	// System.Int32 UnityEngine.Collision2D::m_Enabled
	int32_t ___m_Enabled_5;
	// System.Int32 UnityEngine.Collision2D::m_ContactCount
	int32_t ___m_ContactCount_6;
	// UnityEngine.ContactPoint2D[] UnityEngine.Collision2D::m_ReusedContacts
	ContactPoint2DU5BU5D_t7AE0F95E9BFC90DE859575689AA76B503D433277* ___m_ReusedContacts_7;
	// UnityEngine.ContactPoint2D[] UnityEngine.Collision2D::m_LegacyContacts
	ContactPoint2DU5BU5D_t7AE0F95E9BFC90DE859575689AA76B503D433277* ___m_LegacyContacts_8;

public:
	inline static int32_t get_offset_of_m_Collider_0() { return static_cast<int32_t>(offsetof(Collision2D_t95B5FD331CE95276D3658140844190B485D26564, ___m_Collider_0)); }
	inline int32_t get_m_Collider_0() const { return ___m_Collider_0; }
	inline int32_t* get_address_of_m_Collider_0() { return &___m_Collider_0; }
	inline void set_m_Collider_0(int32_t value)
	{
		___m_Collider_0 = value;
	}

	inline static int32_t get_offset_of_m_OtherCollider_1() { return static_cast<int32_t>(offsetof(Collision2D_t95B5FD331CE95276D3658140844190B485D26564, ___m_OtherCollider_1)); }
	inline int32_t get_m_OtherCollider_1() const { return ___m_OtherCollider_1; }
	inline int32_t* get_address_of_m_OtherCollider_1() { return &___m_OtherCollider_1; }
	inline void set_m_OtherCollider_1(int32_t value)
	{
		___m_OtherCollider_1 = value;
	}

	inline static int32_t get_offset_of_m_Rigidbody_2() { return static_cast<int32_t>(offsetof(Collision2D_t95B5FD331CE95276D3658140844190B485D26564, ___m_Rigidbody_2)); }
	inline int32_t get_m_Rigidbody_2() const { return ___m_Rigidbody_2; }
	inline int32_t* get_address_of_m_Rigidbody_2() { return &___m_Rigidbody_2; }
	inline void set_m_Rigidbody_2(int32_t value)
	{
		___m_Rigidbody_2 = value;
	}

	inline static int32_t get_offset_of_m_OtherRigidbody_3() { return static_cast<int32_t>(offsetof(Collision2D_t95B5FD331CE95276D3658140844190B485D26564, ___m_OtherRigidbody_3)); }
	inline int32_t get_m_OtherRigidbody_3() const { return ___m_OtherRigidbody_3; }
	inline int32_t* get_address_of_m_OtherRigidbody_3() { return &___m_OtherRigidbody_3; }
	inline void set_m_OtherRigidbody_3(int32_t value)
	{
		___m_OtherRigidbody_3 = value;
	}

	inline static int32_t get_offset_of_m_RelativeVelocity_4() { return static_cast<int32_t>(offsetof(Collision2D_t95B5FD331CE95276D3658140844190B485D26564, ___m_RelativeVelocity_4)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_RelativeVelocity_4() const { return ___m_RelativeVelocity_4; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_RelativeVelocity_4() { return &___m_RelativeVelocity_4; }
	inline void set_m_RelativeVelocity_4(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_RelativeVelocity_4 = value;
	}

	inline static int32_t get_offset_of_m_Enabled_5() { return static_cast<int32_t>(offsetof(Collision2D_t95B5FD331CE95276D3658140844190B485D26564, ___m_Enabled_5)); }
	inline int32_t get_m_Enabled_5() const { return ___m_Enabled_5; }
	inline int32_t* get_address_of_m_Enabled_5() { return &___m_Enabled_5; }
	inline void set_m_Enabled_5(int32_t value)
	{
		___m_Enabled_5 = value;
	}

	inline static int32_t get_offset_of_m_ContactCount_6() { return static_cast<int32_t>(offsetof(Collision2D_t95B5FD331CE95276D3658140844190B485D26564, ___m_ContactCount_6)); }
	inline int32_t get_m_ContactCount_6() const { return ___m_ContactCount_6; }
	inline int32_t* get_address_of_m_ContactCount_6() { return &___m_ContactCount_6; }
	inline void set_m_ContactCount_6(int32_t value)
	{
		___m_ContactCount_6 = value;
	}

	inline static int32_t get_offset_of_m_ReusedContacts_7() { return static_cast<int32_t>(offsetof(Collision2D_t95B5FD331CE95276D3658140844190B485D26564, ___m_ReusedContacts_7)); }
	inline ContactPoint2DU5BU5D_t7AE0F95E9BFC90DE859575689AA76B503D433277* get_m_ReusedContacts_7() const { return ___m_ReusedContacts_7; }
	inline ContactPoint2DU5BU5D_t7AE0F95E9BFC90DE859575689AA76B503D433277** get_address_of_m_ReusedContacts_7() { return &___m_ReusedContacts_7; }
	inline void set_m_ReusedContacts_7(ContactPoint2DU5BU5D_t7AE0F95E9BFC90DE859575689AA76B503D433277* value)
	{
		___m_ReusedContacts_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ReusedContacts_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_LegacyContacts_8() { return static_cast<int32_t>(offsetof(Collision2D_t95B5FD331CE95276D3658140844190B485D26564, ___m_LegacyContacts_8)); }
	inline ContactPoint2DU5BU5D_t7AE0F95E9BFC90DE859575689AA76B503D433277* get_m_LegacyContacts_8() const { return ___m_LegacyContacts_8; }
	inline ContactPoint2DU5BU5D_t7AE0F95E9BFC90DE859575689AA76B503D433277** get_address_of_m_LegacyContacts_8() { return &___m_LegacyContacts_8; }
	inline void set_m_LegacyContacts_8(ContactPoint2DU5BU5D_t7AE0F95E9BFC90DE859575689AA76B503D433277* value)
	{
		___m_LegacyContacts_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_LegacyContacts_8), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Collision2D
struct Collision2D_t95B5FD331CE95276D3658140844190B485D26564_marshaled_pinvoke
{
	int32_t ___m_Collider_0;
	int32_t ___m_OtherCollider_1;
	int32_t ___m_Rigidbody_2;
	int32_t ___m_OtherRigidbody_3;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_RelativeVelocity_4;
	int32_t ___m_Enabled_5;
	int32_t ___m_ContactCount_6;
	ContactPoint2D_t5A4C242ABAE740C565BF01A35CEE279058E66A62 * ___m_ReusedContacts_7;
	ContactPoint2D_t5A4C242ABAE740C565BF01A35CEE279058E66A62 * ___m_LegacyContacts_8;
};
// Native definition for COM marshalling of UnityEngine.Collision2D
struct Collision2D_t95B5FD331CE95276D3658140844190B485D26564_marshaled_com
{
	int32_t ___m_Collider_0;
	int32_t ___m_OtherCollider_1;
	int32_t ___m_Rigidbody_2;
	int32_t ___m_OtherRigidbody_3;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_RelativeVelocity_4;
	int32_t ___m_Enabled_5;
	int32_t ___m_ContactCount_6;
	ContactPoint2D_t5A4C242ABAE740C565BF01A35CEE279058E66A62 * ___m_ReusedContacts_7;
	ContactPoint2D_t5A4C242ABAE740C565BF01A35CEE279058E66A62 * ___m_LegacyContacts_8;
};

// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.RigidbodyType2D
struct RigidbodyType2D_tEF016AC6D4D54AF47773D68E833159CC995DF1E9 
{
public:
	// System.Int32 UnityEngine.RigidbodyType2D::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(RigidbodyType2D_tEF016AC6D4D54AF47773D68E833159CC995DF1E9, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.TouchPhase
struct TouchPhase_tB52B8A497547FB9575DE7975D13AC7D64C3A958A 
{
public:
	// System.Int32 UnityEngine.TouchPhase::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TouchPhase_tB52B8A497547FB9575DE7975D13AC7D64C3A958A, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.TouchType
struct TouchType_t2EF726465ABD45681A6686BAC426814AA087C20F 
{
public:
	// System.Int32 UnityEngine.TouchType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TouchType_t2EF726465ABD45681A6686BAC426814AA087C20F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Image/FillMethod
struct FillMethod_tC37E5898D113A8FBF25A6AB6FBA451CC51E211E2 
{
public:
	// System.Int32 UnityEngine.UI.Image/FillMethod::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FillMethod_tC37E5898D113A8FBF25A6AB6FBA451CC51E211E2, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Image/Type
struct Type_tDCB08AB7425CAB70C1E46CC341F877423B5A5E12 
{
public:
	// System.Int32 UnityEngine.UI.Image/Type::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Type_tDCB08AB7425CAB70C1E46CC341F877423B5A5E12, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.Material
struct Material_t8927C00353A72755313F046D0CE85178AE8218EE  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.Sprite
struct Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.Touch
struct Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C 
{
public:
	// System.Int32 UnityEngine.Touch::m_FingerId
	int32_t ___m_FingerId_0;
	// UnityEngine.Vector2 UnityEngine.Touch::m_Position
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_Position_1;
	// UnityEngine.Vector2 UnityEngine.Touch::m_RawPosition
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_RawPosition_2;
	// UnityEngine.Vector2 UnityEngine.Touch::m_PositionDelta
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_PositionDelta_3;
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
	inline static int32_t get_offset_of_m_FingerId_0() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_FingerId_0)); }
	inline int32_t get_m_FingerId_0() const { return ___m_FingerId_0; }
	inline int32_t* get_address_of_m_FingerId_0() { return &___m_FingerId_0; }
	inline void set_m_FingerId_0(int32_t value)
	{
		___m_FingerId_0 = value;
	}

	inline static int32_t get_offset_of_m_Position_1() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_Position_1)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_Position_1() const { return ___m_Position_1; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_Position_1() { return &___m_Position_1; }
	inline void set_m_Position_1(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_Position_1 = value;
	}

	inline static int32_t get_offset_of_m_RawPosition_2() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_RawPosition_2)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_RawPosition_2() const { return ___m_RawPosition_2; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_RawPosition_2() { return &___m_RawPosition_2; }
	inline void set_m_RawPosition_2(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_RawPosition_2 = value;
	}

	inline static int32_t get_offset_of_m_PositionDelta_3() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_PositionDelta_3)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_PositionDelta_3() const { return ___m_PositionDelta_3; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_PositionDelta_3() { return &___m_PositionDelta_3; }
	inline void set_m_PositionDelta_3(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_PositionDelta_3 = value;
	}

	inline static int32_t get_offset_of_m_TimeDelta_4() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_TimeDelta_4)); }
	inline float get_m_TimeDelta_4() const { return ___m_TimeDelta_4; }
	inline float* get_address_of_m_TimeDelta_4() { return &___m_TimeDelta_4; }
	inline void set_m_TimeDelta_4(float value)
	{
		___m_TimeDelta_4 = value;
	}

	inline static int32_t get_offset_of_m_TapCount_5() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_TapCount_5)); }
	inline int32_t get_m_TapCount_5() const { return ___m_TapCount_5; }
	inline int32_t* get_address_of_m_TapCount_5() { return &___m_TapCount_5; }
	inline void set_m_TapCount_5(int32_t value)
	{
		___m_TapCount_5 = value;
	}

	inline static int32_t get_offset_of_m_Phase_6() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_Phase_6)); }
	inline int32_t get_m_Phase_6() const { return ___m_Phase_6; }
	inline int32_t* get_address_of_m_Phase_6() { return &___m_Phase_6; }
	inline void set_m_Phase_6(int32_t value)
	{
		___m_Phase_6 = value;
	}

	inline static int32_t get_offset_of_m_Type_7() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_Type_7)); }
	inline int32_t get_m_Type_7() const { return ___m_Type_7; }
	inline int32_t* get_address_of_m_Type_7() { return &___m_Type_7; }
	inline void set_m_Type_7(int32_t value)
	{
		___m_Type_7 = value;
	}

	inline static int32_t get_offset_of_m_Pressure_8() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_Pressure_8)); }
	inline float get_m_Pressure_8() const { return ___m_Pressure_8; }
	inline float* get_address_of_m_Pressure_8() { return &___m_Pressure_8; }
	inline void set_m_Pressure_8(float value)
	{
		___m_Pressure_8 = value;
	}

	inline static int32_t get_offset_of_m_maximumPossiblePressure_9() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_maximumPossiblePressure_9)); }
	inline float get_m_maximumPossiblePressure_9() const { return ___m_maximumPossiblePressure_9; }
	inline float* get_address_of_m_maximumPossiblePressure_9() { return &___m_maximumPossiblePressure_9; }
	inline void set_m_maximumPossiblePressure_9(float value)
	{
		___m_maximumPossiblePressure_9 = value;
	}

	inline static int32_t get_offset_of_m_Radius_10() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_Radius_10)); }
	inline float get_m_Radius_10() const { return ___m_Radius_10; }
	inline float* get_address_of_m_Radius_10() { return &___m_Radius_10; }
	inline void set_m_Radius_10(float value)
	{
		___m_Radius_10 = value;
	}

	inline static int32_t get_offset_of_m_RadiusVariance_11() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_RadiusVariance_11)); }
	inline float get_m_RadiusVariance_11() const { return ___m_RadiusVariance_11; }
	inline float* get_address_of_m_RadiusVariance_11() { return &___m_RadiusVariance_11; }
	inline void set_m_RadiusVariance_11(float value)
	{
		___m_RadiusVariance_11 = value;
	}

	inline static int32_t get_offset_of_m_AltitudeAngle_12() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_AltitudeAngle_12)); }
	inline float get_m_AltitudeAngle_12() const { return ___m_AltitudeAngle_12; }
	inline float* get_address_of_m_AltitudeAngle_12() { return &___m_AltitudeAngle_12; }
	inline void set_m_AltitudeAngle_12(float value)
	{
		___m_AltitudeAngle_12 = value;
	}

	inline static int32_t get_offset_of_m_AzimuthAngle_13() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_AzimuthAngle_13)); }
	inline float get_m_AzimuthAngle_13() const { return ___m_AzimuthAngle_13; }
	inline float* get_address_of_m_AzimuthAngle_13() { return &___m_AzimuthAngle_13; }
	inline void set_m_AzimuthAngle_13(float value)
	{
		___m_AzimuthAngle_13 = value;
	}
};


// UnityEngine.Behaviour
struct Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Renderer
struct Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Rigidbody2D
struct Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Animator
struct Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityEngine.AudioBehaviour
struct AudioBehaviour_tB44966D47AD43C50C7294AEE9B57574E55AACA4A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityEngine.Collider2D
struct Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityEngine.AudioSource
struct AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B  : public AudioBehaviour_tB44966D47AD43C50C7294AEE9B57574E55AACA4A
{
public:

public:
};


// Assets.Scripts.Menus.BotoesJogo
struct BotoesJogo_t74E1945FA99F0365ACB794976A779E8DE4F3BFED  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// UnityEngine.BoxCollider2D
struct BoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9  : public Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722
{
public:

public:
};


// ControladorCano
struct ControladorCano_t4F03F0C283E42BA3A6246A236DDEE100E8703E91  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// Assets.Scripts.Controladores.ControladorJogo ControladorCano::controlador
	ControladorJogo_tBA3EB5503CCE6D7149F9098AB82E293117900DEF * ___controlador_4;
	// System.Boolean ControladorCano::pontuado
	bool ___pontuado_5;

public:
	inline static int32_t get_offset_of_controlador_4() { return static_cast<int32_t>(offsetof(ControladorCano_t4F03F0C283E42BA3A6246A236DDEE100E8703E91, ___controlador_4)); }
	inline ControladorJogo_tBA3EB5503CCE6D7149F9098AB82E293117900DEF * get_controlador_4() const { return ___controlador_4; }
	inline ControladorJogo_tBA3EB5503CCE6D7149F9098AB82E293117900DEF ** get_address_of_controlador_4() { return &___controlador_4; }
	inline void set_controlador_4(ControladorJogo_tBA3EB5503CCE6D7149F9098AB82E293117900DEF * value)
	{
		___controlador_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___controlador_4), (void*)value);
	}

	inline static int32_t get_offset_of_pontuado_5() { return static_cast<int32_t>(offsetof(ControladorCano_t4F03F0C283E42BA3A6246A236DDEE100E8703E91, ___pontuado_5)); }
	inline bool get_pontuado_5() const { return ___pontuado_5; }
	inline bool* get_address_of_pontuado_5() { return &___pontuado_5; }
	inline void set_pontuado_5(bool value)
	{
		___pontuado_5 = value;
	}
};


// Assets.Scripts.Controladores.ControladorJogo
struct ControladorJogo_tBA3EB5503CCE6D7149F9098AB82E293117900DEF  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Boolean Assets.Scripts.Controladores.ControladorJogo::jogoIniciado
	bool ___jogoIniciado_4;
	// UnityEngine.GameObject Assets.Scripts.Controladores.ControladorJogo::inicial
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___inicial_5;
	// UnityEngine.GameObject[] Assets.Scripts.Controladores.ControladorJogo::canos
	GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* ___canos_6;
	// UnityEngine.GameObject[] Assets.Scripts.Controladores.ControladorJogo::personagens
	GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* ___personagens_7;
	// UnityEngine.GameObject[] Assets.Scripts.Controladores.ControladorJogo::fundos
	GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* ___fundos_8;
	// UnityEngine.Material[] Assets.Scripts.Controladores.ControladorJogo::dia
	MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492* ___dia_9;
	// UnityEngine.Material[] Assets.Scripts.Controladores.ControladorJogo::noite
	MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492* ___noite_10;
	// System.Single Assets.Scripts.Controladores.ControladorJogo::velocidadeCanos
	float ___velocidadeCanos_11;
	// System.Int32 Assets.Scripts.Controladores.ControladorJogo::periodo
	int32_t ___periodo_12;
	// UnityEngine.GameObject Assets.Scripts.Controladores.ControladorJogo::cano
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___cano_13;

public:
	inline static int32_t get_offset_of_jogoIniciado_4() { return static_cast<int32_t>(offsetof(ControladorJogo_tBA3EB5503CCE6D7149F9098AB82E293117900DEF, ___jogoIniciado_4)); }
	inline bool get_jogoIniciado_4() const { return ___jogoIniciado_4; }
	inline bool* get_address_of_jogoIniciado_4() { return &___jogoIniciado_4; }
	inline void set_jogoIniciado_4(bool value)
	{
		___jogoIniciado_4 = value;
	}

	inline static int32_t get_offset_of_inicial_5() { return static_cast<int32_t>(offsetof(ControladorJogo_tBA3EB5503CCE6D7149F9098AB82E293117900DEF, ___inicial_5)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_inicial_5() const { return ___inicial_5; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_inicial_5() { return &___inicial_5; }
	inline void set_inicial_5(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___inicial_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___inicial_5), (void*)value);
	}

	inline static int32_t get_offset_of_canos_6() { return static_cast<int32_t>(offsetof(ControladorJogo_tBA3EB5503CCE6D7149F9098AB82E293117900DEF, ___canos_6)); }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* get_canos_6() const { return ___canos_6; }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642** get_address_of_canos_6() { return &___canos_6; }
	inline void set_canos_6(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* value)
	{
		___canos_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___canos_6), (void*)value);
	}

	inline static int32_t get_offset_of_personagens_7() { return static_cast<int32_t>(offsetof(ControladorJogo_tBA3EB5503CCE6D7149F9098AB82E293117900DEF, ___personagens_7)); }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* get_personagens_7() const { return ___personagens_7; }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642** get_address_of_personagens_7() { return &___personagens_7; }
	inline void set_personagens_7(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* value)
	{
		___personagens_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___personagens_7), (void*)value);
	}

	inline static int32_t get_offset_of_fundos_8() { return static_cast<int32_t>(offsetof(ControladorJogo_tBA3EB5503CCE6D7149F9098AB82E293117900DEF, ___fundos_8)); }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* get_fundos_8() const { return ___fundos_8; }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642** get_address_of_fundos_8() { return &___fundos_8; }
	inline void set_fundos_8(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* value)
	{
		___fundos_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___fundos_8), (void*)value);
	}

	inline static int32_t get_offset_of_dia_9() { return static_cast<int32_t>(offsetof(ControladorJogo_tBA3EB5503CCE6D7149F9098AB82E293117900DEF, ___dia_9)); }
	inline MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492* get_dia_9() const { return ___dia_9; }
	inline MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492** get_address_of_dia_9() { return &___dia_9; }
	inline void set_dia_9(MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492* value)
	{
		___dia_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dia_9), (void*)value);
	}

	inline static int32_t get_offset_of_noite_10() { return static_cast<int32_t>(offsetof(ControladorJogo_tBA3EB5503CCE6D7149F9098AB82E293117900DEF, ___noite_10)); }
	inline MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492* get_noite_10() const { return ___noite_10; }
	inline MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492** get_address_of_noite_10() { return &___noite_10; }
	inline void set_noite_10(MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492* value)
	{
		___noite_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___noite_10), (void*)value);
	}

	inline static int32_t get_offset_of_velocidadeCanos_11() { return static_cast<int32_t>(offsetof(ControladorJogo_tBA3EB5503CCE6D7149F9098AB82E293117900DEF, ___velocidadeCanos_11)); }
	inline float get_velocidadeCanos_11() const { return ___velocidadeCanos_11; }
	inline float* get_address_of_velocidadeCanos_11() { return &___velocidadeCanos_11; }
	inline void set_velocidadeCanos_11(float value)
	{
		___velocidadeCanos_11 = value;
	}

	inline static int32_t get_offset_of_periodo_12() { return static_cast<int32_t>(offsetof(ControladorJogo_tBA3EB5503CCE6D7149F9098AB82E293117900DEF, ___periodo_12)); }
	inline int32_t get_periodo_12() const { return ___periodo_12; }
	inline int32_t* get_address_of_periodo_12() { return &___periodo_12; }
	inline void set_periodo_12(int32_t value)
	{
		___periodo_12 = value;
	}

	inline static int32_t get_offset_of_cano_13() { return static_cast<int32_t>(offsetof(ControladorJogo_tBA3EB5503CCE6D7149F9098AB82E293117900DEF, ___cano_13)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_cano_13() const { return ___cano_13; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_cano_13() { return &___cano_13; }
	inline void set_cano_13(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___cano_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cano_13), (void*)value);
	}
};


// ControladorPersonagem
struct ControladorPersonagem_tA56FE7604ECF00DD04846933C7FCE6CA09127FBA  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.GameObject ControladorPersonagem::controlador
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___controlador_4;
	// UnityEngine.Vector2 ControladorPersonagem::voo
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___voo_5;
	// System.Boolean ControladorPersonagem::podeVoar
	bool ___podeVoar_6;
	// System.Boolean ControladorPersonagem::jogando
	bool ___jogando_7;

public:
	inline static int32_t get_offset_of_controlador_4() { return static_cast<int32_t>(offsetof(ControladorPersonagem_tA56FE7604ECF00DD04846933C7FCE6CA09127FBA, ___controlador_4)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_controlador_4() const { return ___controlador_4; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_controlador_4() { return &___controlador_4; }
	inline void set_controlador_4(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___controlador_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___controlador_4), (void*)value);
	}

	inline static int32_t get_offset_of_voo_5() { return static_cast<int32_t>(offsetof(ControladorPersonagem_tA56FE7604ECF00DD04846933C7FCE6CA09127FBA, ___voo_5)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_voo_5() const { return ___voo_5; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_voo_5() { return &___voo_5; }
	inline void set_voo_5(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___voo_5 = value;
	}

	inline static int32_t get_offset_of_podeVoar_6() { return static_cast<int32_t>(offsetof(ControladorPersonagem_tA56FE7604ECF00DD04846933C7FCE6CA09127FBA, ___podeVoar_6)); }
	inline bool get_podeVoar_6() const { return ___podeVoar_6; }
	inline bool* get_address_of_podeVoar_6() { return &___podeVoar_6; }
	inline void set_podeVoar_6(bool value)
	{
		___podeVoar_6 = value;
	}

	inline static int32_t get_offset_of_jogando_7() { return static_cast<int32_t>(offsetof(ControladorPersonagem_tA56FE7604ECF00DD04846933C7FCE6CA09127FBA, ___jogando_7)); }
	inline bool get_jogando_7() const { return ___jogando_7; }
	inline bool* get_address_of_jogando_7() { return &___jogando_7; }
	inline void set_jogando_7(bool value)
	{
		___jogando_7 = value;
	}
};


// Assets.Scripts.Controladores.ControladorPontos
struct ControladorPontos_t12000FE98845B63BB38922ECF4F837D7ADDB25D4  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Int32 Assets.Scripts.Controladores.ControladorPontos::<Ponto>k__BackingField
	int32_t ___U3CPontoU3Ek__BackingField_4;
	// UnityEngine.UI.Text Assets.Scripts.Controladores.ControladorPontos::pontuacaoJogo
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___pontuacaoJogo_5;
	// UnityEngine.UI.Text Assets.Scripts.Controladores.ControladorPontos::pontuacaoGOAtual
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___pontuacaoGOAtual_6;
	// UnityEngine.UI.Text Assets.Scripts.Controladores.ControladorPontos::pontuacaoGORecorde
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___pontuacaoGORecorde_7;
	// UnityEngine.UI.Image Assets.Scripts.Controladores.ControladorPontos::pontuacaoMedalha
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * ___pontuacaoMedalha_8;
	// UnityEngine.GameObject Assets.Scripts.Controladores.ControladorPontos::telaGameOver
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___telaGameOver_9;
	// UnityEngine.Sprite[] Assets.Scripts.Controladores.ControladorPontos::medalhas
	SpriteU5BU5D_t8DB77E112FFC97B722E701189DCB4059F943FD77* ___medalhas_10;

public:
	inline static int32_t get_offset_of_U3CPontoU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(ControladorPontos_t12000FE98845B63BB38922ECF4F837D7ADDB25D4, ___U3CPontoU3Ek__BackingField_4)); }
	inline int32_t get_U3CPontoU3Ek__BackingField_4() const { return ___U3CPontoU3Ek__BackingField_4; }
	inline int32_t* get_address_of_U3CPontoU3Ek__BackingField_4() { return &___U3CPontoU3Ek__BackingField_4; }
	inline void set_U3CPontoU3Ek__BackingField_4(int32_t value)
	{
		___U3CPontoU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of_pontuacaoJogo_5() { return static_cast<int32_t>(offsetof(ControladorPontos_t12000FE98845B63BB38922ECF4F837D7ADDB25D4, ___pontuacaoJogo_5)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_pontuacaoJogo_5() const { return ___pontuacaoJogo_5; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_pontuacaoJogo_5() { return &___pontuacaoJogo_5; }
	inline void set_pontuacaoJogo_5(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___pontuacaoJogo_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pontuacaoJogo_5), (void*)value);
	}

	inline static int32_t get_offset_of_pontuacaoGOAtual_6() { return static_cast<int32_t>(offsetof(ControladorPontos_t12000FE98845B63BB38922ECF4F837D7ADDB25D4, ___pontuacaoGOAtual_6)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_pontuacaoGOAtual_6() const { return ___pontuacaoGOAtual_6; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_pontuacaoGOAtual_6() { return &___pontuacaoGOAtual_6; }
	inline void set_pontuacaoGOAtual_6(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___pontuacaoGOAtual_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pontuacaoGOAtual_6), (void*)value);
	}

	inline static int32_t get_offset_of_pontuacaoGORecorde_7() { return static_cast<int32_t>(offsetof(ControladorPontos_t12000FE98845B63BB38922ECF4F837D7ADDB25D4, ___pontuacaoGORecorde_7)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_pontuacaoGORecorde_7() const { return ___pontuacaoGORecorde_7; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_pontuacaoGORecorde_7() { return &___pontuacaoGORecorde_7; }
	inline void set_pontuacaoGORecorde_7(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___pontuacaoGORecorde_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pontuacaoGORecorde_7), (void*)value);
	}

	inline static int32_t get_offset_of_pontuacaoMedalha_8() { return static_cast<int32_t>(offsetof(ControladorPontos_t12000FE98845B63BB38922ECF4F837D7ADDB25D4, ___pontuacaoMedalha_8)); }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * get_pontuacaoMedalha_8() const { return ___pontuacaoMedalha_8; }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C ** get_address_of_pontuacaoMedalha_8() { return &___pontuacaoMedalha_8; }
	inline void set_pontuacaoMedalha_8(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * value)
	{
		___pontuacaoMedalha_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pontuacaoMedalha_8), (void*)value);
	}

	inline static int32_t get_offset_of_telaGameOver_9() { return static_cast<int32_t>(offsetof(ControladorPontos_t12000FE98845B63BB38922ECF4F837D7ADDB25D4, ___telaGameOver_9)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_telaGameOver_9() const { return ___telaGameOver_9; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_telaGameOver_9() { return &___telaGameOver_9; }
	inline void set_telaGameOver_9(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___telaGameOver_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___telaGameOver_9), (void*)value);
	}

	inline static int32_t get_offset_of_medalhas_10() { return static_cast<int32_t>(offsetof(ControladorPontos_t12000FE98845B63BB38922ECF4F837D7ADDB25D4, ___medalhas_10)); }
	inline SpriteU5BU5D_t8DB77E112FFC97B722E701189DCB4059F943FD77* get_medalhas_10() const { return ___medalhas_10; }
	inline SpriteU5BU5D_t8DB77E112FFC97B722E701189DCB4059F943FD77** get_address_of_medalhas_10() { return &___medalhas_10; }
	inline void set_medalhas_10(SpriteU5BU5D_t8DB77E112FFC97B722E701189DCB4059F943FD77* value)
	{
		___medalhas_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___medalhas_10), (void*)value);
	}
};


// Assets.Scripts.Parallax.Rolar
struct Rolar_tAD220DBFF42B797A8460E36A239246B7C3381699  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Single Assets.Scripts.Parallax.Rolar::velocidade
	float ___velocidade_4;

public:
	inline static int32_t get_offset_of_velocidade_4() { return static_cast<int32_t>(offsetof(Rolar_tAD220DBFF42B797A8460E36A239246B7C3381699, ___velocidade_4)); }
	inline float get_velocidade_4() const { return ___velocidade_4; }
	inline float* get_address_of_velocidade_4() { return &___velocidade_4; }
	inline void set_velocidade_4(float value)
	{
		___velocidade_4 = value;
	}
};


// Teste
struct Teste_t57D50A8062F4BAC8E0F13D3CB3AD6B8A6D4C6C59  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// UnityEngine.UI.Graphic
struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24  : public UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___m_RaycastPadding_11;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_RectTransform_12;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * ___m_CanvasRenderer_13;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * ___m_Canvas_14;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_15;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_16;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyLayoutCallback_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyVertsCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyMaterialCallback_19;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___m_CachedMesh_22;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___m_CachedUvs_23;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * ___m_ColorTweenRunner_24;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25;

public:
	inline static int32_t get_offset_of_m_Material_6() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Material_6)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_Material_6() const { return ___m_Material_6; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_Material_6() { return &___m_Material_6; }
	inline void set_m_Material_6(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_Material_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Material_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_Color_7() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Color_7)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_Color_7() const { return ___m_Color_7; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_Color_7() { return &___m_Color_7; }
	inline void set_m_Color_7(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_Color_7 = value;
	}

	inline static int32_t get_offset_of_m_SkipLayoutUpdate_8() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_SkipLayoutUpdate_8)); }
	inline bool get_m_SkipLayoutUpdate_8() const { return ___m_SkipLayoutUpdate_8; }
	inline bool* get_address_of_m_SkipLayoutUpdate_8() { return &___m_SkipLayoutUpdate_8; }
	inline void set_m_SkipLayoutUpdate_8(bool value)
	{
		___m_SkipLayoutUpdate_8 = value;
	}

	inline static int32_t get_offset_of_m_SkipMaterialUpdate_9() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_SkipMaterialUpdate_9)); }
	inline bool get_m_SkipMaterialUpdate_9() const { return ___m_SkipMaterialUpdate_9; }
	inline bool* get_address_of_m_SkipMaterialUpdate_9() { return &___m_SkipMaterialUpdate_9; }
	inline void set_m_SkipMaterialUpdate_9(bool value)
	{
		___m_SkipMaterialUpdate_9 = value;
	}

	inline static int32_t get_offset_of_m_RaycastTarget_10() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RaycastTarget_10)); }
	inline bool get_m_RaycastTarget_10() const { return ___m_RaycastTarget_10; }
	inline bool* get_address_of_m_RaycastTarget_10() { return &___m_RaycastTarget_10; }
	inline void set_m_RaycastTarget_10(bool value)
	{
		___m_RaycastTarget_10 = value;
	}

	inline static int32_t get_offset_of_m_RaycastPadding_11() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RaycastPadding_11)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_m_RaycastPadding_11() const { return ___m_RaycastPadding_11; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_m_RaycastPadding_11() { return &___m_RaycastPadding_11; }
	inline void set_m_RaycastPadding_11(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___m_RaycastPadding_11 = value;
	}

	inline static int32_t get_offset_of_m_RectTransform_12() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RectTransform_12)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_RectTransform_12() const { return ___m_RectTransform_12; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_RectTransform_12() { return &___m_RectTransform_12; }
	inline void set_m_RectTransform_12(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_RectTransform_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RectTransform_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_CanvasRenderer_13() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CanvasRenderer_13)); }
	inline CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * get_m_CanvasRenderer_13() const { return ___m_CanvasRenderer_13; }
	inline CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E ** get_address_of_m_CanvasRenderer_13() { return &___m_CanvasRenderer_13; }
	inline void set_m_CanvasRenderer_13(CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * value)
	{
		___m_CanvasRenderer_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CanvasRenderer_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_Canvas_14() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Canvas_14)); }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * get_m_Canvas_14() const { return ___m_Canvas_14; }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA ** get_address_of_m_Canvas_14() { return &___m_Canvas_14; }
	inline void set_m_Canvas_14(Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * value)
	{
		___m_Canvas_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Canvas_14), (void*)value);
	}

	inline static int32_t get_offset_of_m_VertsDirty_15() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_VertsDirty_15)); }
	inline bool get_m_VertsDirty_15() const { return ___m_VertsDirty_15; }
	inline bool* get_address_of_m_VertsDirty_15() { return &___m_VertsDirty_15; }
	inline void set_m_VertsDirty_15(bool value)
	{
		___m_VertsDirty_15 = value;
	}

	inline static int32_t get_offset_of_m_MaterialDirty_16() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_MaterialDirty_16)); }
	inline bool get_m_MaterialDirty_16() const { return ___m_MaterialDirty_16; }
	inline bool* get_address_of_m_MaterialDirty_16() { return &___m_MaterialDirty_16; }
	inline void set_m_MaterialDirty_16(bool value)
	{
		___m_MaterialDirty_16 = value;
	}

	inline static int32_t get_offset_of_m_OnDirtyLayoutCallback_17() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyLayoutCallback_17)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyLayoutCallback_17() const { return ___m_OnDirtyLayoutCallback_17; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyLayoutCallback_17() { return &___m_OnDirtyLayoutCallback_17; }
	inline void set_m_OnDirtyLayoutCallback_17(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyLayoutCallback_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyLayoutCallback_17), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyVertsCallback_18() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyVertsCallback_18)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyVertsCallback_18() const { return ___m_OnDirtyVertsCallback_18; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyVertsCallback_18() { return &___m_OnDirtyVertsCallback_18; }
	inline void set_m_OnDirtyVertsCallback_18(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyVertsCallback_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyVertsCallback_18), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyMaterialCallback_19() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyMaterialCallback_19)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyMaterialCallback_19() const { return ___m_OnDirtyMaterialCallback_19; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyMaterialCallback_19() { return &___m_OnDirtyMaterialCallback_19; }
	inline void set_m_OnDirtyMaterialCallback_19(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyMaterialCallback_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyMaterialCallback_19), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedMesh_22() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CachedMesh_22)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_m_CachedMesh_22() const { return ___m_CachedMesh_22; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_m_CachedMesh_22() { return &___m_CachedMesh_22; }
	inline void set_m_CachedMesh_22(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___m_CachedMesh_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedMesh_22), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedUvs_23() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CachedUvs_23)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get_m_CachedUvs_23() const { return ___m_CachedUvs_23; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of_m_CachedUvs_23() { return &___m_CachedUvs_23; }
	inline void set_m_CachedUvs_23(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		___m_CachedUvs_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedUvs_23), (void*)value);
	}

	inline static int32_t get_offset_of_m_ColorTweenRunner_24() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_ColorTweenRunner_24)); }
	inline TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * get_m_ColorTweenRunner_24() const { return ___m_ColorTweenRunner_24; }
	inline TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 ** get_address_of_m_ColorTweenRunner_24() { return &___m_ColorTweenRunner_24; }
	inline void set_m_ColorTweenRunner_24(TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * value)
	{
		___m_ColorTweenRunner_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ColorTweenRunner_24), (void*)value);
	}

	inline static int32_t get_offset_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25)); }
	inline bool get_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() const { return ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25; }
	inline bool* get_address_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() { return &___U3CuseLegacyMeshGenerationU3Ek__BackingField_25; }
	inline void set_U3CuseLegacyMeshGenerationU3Ek__BackingField_25(bool value)
	{
		___U3CuseLegacyMeshGenerationU3Ek__BackingField_25 = value;
	}
};

struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___s_Mesh_20;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * ___s_VertexHelper_21;

public:
	inline static int32_t get_offset_of_s_DefaultUI_4() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_DefaultUI_4)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_s_DefaultUI_4() const { return ___s_DefaultUI_4; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_s_DefaultUI_4() { return &___s_DefaultUI_4; }
	inline void set_s_DefaultUI_4(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___s_DefaultUI_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultUI_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_WhiteTexture_5() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_WhiteTexture_5)); }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * get_s_WhiteTexture_5() const { return ___s_WhiteTexture_5; }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF ** get_address_of_s_WhiteTexture_5() { return &___s_WhiteTexture_5; }
	inline void set_s_WhiteTexture_5(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * value)
	{
		___s_WhiteTexture_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_WhiteTexture_5), (void*)value);
	}

	inline static int32_t get_offset_of_s_Mesh_20() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_Mesh_20)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_s_Mesh_20() const { return ___s_Mesh_20; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_s_Mesh_20() { return &___s_Mesh_20; }
	inline void set_s_Mesh_20(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___s_Mesh_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Mesh_20), (void*)value);
	}

	inline static int32_t get_offset_of_s_VertexHelper_21() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_VertexHelper_21)); }
	inline VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * get_s_VertexHelper_21() const { return ___s_VertexHelper_21; }
	inline VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 ** get_address_of_s_VertexHelper_21() { return &___s_VertexHelper_21; }
	inline void set_s_VertexHelper_21(VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * value)
	{
		___s_VertexHelper_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_VertexHelper_21), (void*)value);
	}
};


// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE  : public Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24
{
public:
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_26;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_MaskMaterial_27;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * ___m_ParentMask_28;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_31;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * ___m_OnCullStateChanged_32;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_33;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_34;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___m_Corners_35;

public:
	inline static int32_t get_offset_of_m_ShouldRecalculateStencil_26() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ShouldRecalculateStencil_26)); }
	inline bool get_m_ShouldRecalculateStencil_26() const { return ___m_ShouldRecalculateStencil_26; }
	inline bool* get_address_of_m_ShouldRecalculateStencil_26() { return &___m_ShouldRecalculateStencil_26; }
	inline void set_m_ShouldRecalculateStencil_26(bool value)
	{
		___m_ShouldRecalculateStencil_26 = value;
	}

	inline static int32_t get_offset_of_m_MaskMaterial_27() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_MaskMaterial_27)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_MaskMaterial_27() const { return ___m_MaskMaterial_27; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_MaskMaterial_27() { return &___m_MaskMaterial_27; }
	inline void set_m_MaskMaterial_27(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_MaskMaterial_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_MaskMaterial_27), (void*)value);
	}

	inline static int32_t get_offset_of_m_ParentMask_28() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ParentMask_28)); }
	inline RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * get_m_ParentMask_28() const { return ___m_ParentMask_28; }
	inline RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 ** get_address_of_m_ParentMask_28() { return &___m_ParentMask_28; }
	inline void set_m_ParentMask_28(RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * value)
	{
		___m_ParentMask_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ParentMask_28), (void*)value);
	}

	inline static int32_t get_offset_of_m_Maskable_29() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_Maskable_29)); }
	inline bool get_m_Maskable_29() const { return ___m_Maskable_29; }
	inline bool* get_address_of_m_Maskable_29() { return &___m_Maskable_29; }
	inline void set_m_Maskable_29(bool value)
	{
		___m_Maskable_29 = value;
	}

	inline static int32_t get_offset_of_m_IsMaskingGraphic_30() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_IsMaskingGraphic_30)); }
	inline bool get_m_IsMaskingGraphic_30() const { return ___m_IsMaskingGraphic_30; }
	inline bool* get_address_of_m_IsMaskingGraphic_30() { return &___m_IsMaskingGraphic_30; }
	inline void set_m_IsMaskingGraphic_30(bool value)
	{
		___m_IsMaskingGraphic_30 = value;
	}

	inline static int32_t get_offset_of_m_IncludeForMasking_31() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_IncludeForMasking_31)); }
	inline bool get_m_IncludeForMasking_31() const { return ___m_IncludeForMasking_31; }
	inline bool* get_address_of_m_IncludeForMasking_31() { return &___m_IncludeForMasking_31; }
	inline void set_m_IncludeForMasking_31(bool value)
	{
		___m_IncludeForMasking_31 = value;
	}

	inline static int32_t get_offset_of_m_OnCullStateChanged_32() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_OnCullStateChanged_32)); }
	inline CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * get_m_OnCullStateChanged_32() const { return ___m_OnCullStateChanged_32; }
	inline CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 ** get_address_of_m_OnCullStateChanged_32() { return &___m_OnCullStateChanged_32; }
	inline void set_m_OnCullStateChanged_32(CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * value)
	{
		___m_OnCullStateChanged_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnCullStateChanged_32), (void*)value);
	}

	inline static int32_t get_offset_of_m_ShouldRecalculate_33() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ShouldRecalculate_33)); }
	inline bool get_m_ShouldRecalculate_33() const { return ___m_ShouldRecalculate_33; }
	inline bool* get_address_of_m_ShouldRecalculate_33() { return &___m_ShouldRecalculate_33; }
	inline void set_m_ShouldRecalculate_33(bool value)
	{
		___m_ShouldRecalculate_33 = value;
	}

	inline static int32_t get_offset_of_m_StencilValue_34() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_StencilValue_34)); }
	inline int32_t get_m_StencilValue_34() const { return ___m_StencilValue_34; }
	inline int32_t* get_address_of_m_StencilValue_34() { return &___m_StencilValue_34; }
	inline void set_m_StencilValue_34(int32_t value)
	{
		___m_StencilValue_34 = value;
	}

	inline static int32_t get_offset_of_m_Corners_35() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_Corners_35)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_m_Corners_35() const { return ___m_Corners_35; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_m_Corners_35() { return &___m_Corners_35; }
	inline void set_m_Corners_35(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___m_Corners_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Corners_35), (void*)value);
	}
};


// UnityEngine.UI.Image
struct Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C  : public MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE
{
public:
	// UnityEngine.Sprite UnityEngine.UI.Image::m_Sprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_Sprite_37;
	// UnityEngine.Sprite UnityEngine.UI.Image::m_OverrideSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_OverrideSprite_38;
	// UnityEngine.UI.Image/Type UnityEngine.UI.Image::m_Type
	int32_t ___m_Type_39;
	// System.Boolean UnityEngine.UI.Image::m_PreserveAspect
	bool ___m_PreserveAspect_40;
	// System.Boolean UnityEngine.UI.Image::m_FillCenter
	bool ___m_FillCenter_41;
	// UnityEngine.UI.Image/FillMethod UnityEngine.UI.Image::m_FillMethod
	int32_t ___m_FillMethod_42;
	// System.Single UnityEngine.UI.Image::m_FillAmount
	float ___m_FillAmount_43;
	// System.Boolean UnityEngine.UI.Image::m_FillClockwise
	bool ___m_FillClockwise_44;
	// System.Int32 UnityEngine.UI.Image::m_FillOrigin
	int32_t ___m_FillOrigin_45;
	// System.Single UnityEngine.UI.Image::m_AlphaHitTestMinimumThreshold
	float ___m_AlphaHitTestMinimumThreshold_46;
	// System.Boolean UnityEngine.UI.Image::m_Tracked
	bool ___m_Tracked_47;
	// System.Boolean UnityEngine.UI.Image::m_UseSpriteMesh
	bool ___m_UseSpriteMesh_48;
	// System.Single UnityEngine.UI.Image::m_PixelsPerUnitMultiplier
	float ___m_PixelsPerUnitMultiplier_49;
	// System.Single UnityEngine.UI.Image::m_CachedReferencePixelsPerUnit
	float ___m_CachedReferencePixelsPerUnit_50;

public:
	inline static int32_t get_offset_of_m_Sprite_37() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_Sprite_37)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_Sprite_37() const { return ___m_Sprite_37; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_Sprite_37() { return &___m_Sprite_37; }
	inline void set_m_Sprite_37(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_Sprite_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Sprite_37), (void*)value);
	}

	inline static int32_t get_offset_of_m_OverrideSprite_38() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_OverrideSprite_38)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_OverrideSprite_38() const { return ___m_OverrideSprite_38; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_OverrideSprite_38() { return &___m_OverrideSprite_38; }
	inline void set_m_OverrideSprite_38(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_OverrideSprite_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OverrideSprite_38), (void*)value);
	}

	inline static int32_t get_offset_of_m_Type_39() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_Type_39)); }
	inline int32_t get_m_Type_39() const { return ___m_Type_39; }
	inline int32_t* get_address_of_m_Type_39() { return &___m_Type_39; }
	inline void set_m_Type_39(int32_t value)
	{
		___m_Type_39 = value;
	}

	inline static int32_t get_offset_of_m_PreserveAspect_40() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_PreserveAspect_40)); }
	inline bool get_m_PreserveAspect_40() const { return ___m_PreserveAspect_40; }
	inline bool* get_address_of_m_PreserveAspect_40() { return &___m_PreserveAspect_40; }
	inline void set_m_PreserveAspect_40(bool value)
	{
		___m_PreserveAspect_40 = value;
	}

	inline static int32_t get_offset_of_m_FillCenter_41() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillCenter_41)); }
	inline bool get_m_FillCenter_41() const { return ___m_FillCenter_41; }
	inline bool* get_address_of_m_FillCenter_41() { return &___m_FillCenter_41; }
	inline void set_m_FillCenter_41(bool value)
	{
		___m_FillCenter_41 = value;
	}

	inline static int32_t get_offset_of_m_FillMethod_42() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillMethod_42)); }
	inline int32_t get_m_FillMethod_42() const { return ___m_FillMethod_42; }
	inline int32_t* get_address_of_m_FillMethod_42() { return &___m_FillMethod_42; }
	inline void set_m_FillMethod_42(int32_t value)
	{
		___m_FillMethod_42 = value;
	}

	inline static int32_t get_offset_of_m_FillAmount_43() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillAmount_43)); }
	inline float get_m_FillAmount_43() const { return ___m_FillAmount_43; }
	inline float* get_address_of_m_FillAmount_43() { return &___m_FillAmount_43; }
	inline void set_m_FillAmount_43(float value)
	{
		___m_FillAmount_43 = value;
	}

	inline static int32_t get_offset_of_m_FillClockwise_44() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillClockwise_44)); }
	inline bool get_m_FillClockwise_44() const { return ___m_FillClockwise_44; }
	inline bool* get_address_of_m_FillClockwise_44() { return &___m_FillClockwise_44; }
	inline void set_m_FillClockwise_44(bool value)
	{
		___m_FillClockwise_44 = value;
	}

	inline static int32_t get_offset_of_m_FillOrigin_45() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillOrigin_45)); }
	inline int32_t get_m_FillOrigin_45() const { return ___m_FillOrigin_45; }
	inline int32_t* get_address_of_m_FillOrigin_45() { return &___m_FillOrigin_45; }
	inline void set_m_FillOrigin_45(int32_t value)
	{
		___m_FillOrigin_45 = value;
	}

	inline static int32_t get_offset_of_m_AlphaHitTestMinimumThreshold_46() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_AlphaHitTestMinimumThreshold_46)); }
	inline float get_m_AlphaHitTestMinimumThreshold_46() const { return ___m_AlphaHitTestMinimumThreshold_46; }
	inline float* get_address_of_m_AlphaHitTestMinimumThreshold_46() { return &___m_AlphaHitTestMinimumThreshold_46; }
	inline void set_m_AlphaHitTestMinimumThreshold_46(float value)
	{
		___m_AlphaHitTestMinimumThreshold_46 = value;
	}

	inline static int32_t get_offset_of_m_Tracked_47() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_Tracked_47)); }
	inline bool get_m_Tracked_47() const { return ___m_Tracked_47; }
	inline bool* get_address_of_m_Tracked_47() { return &___m_Tracked_47; }
	inline void set_m_Tracked_47(bool value)
	{
		___m_Tracked_47 = value;
	}

	inline static int32_t get_offset_of_m_UseSpriteMesh_48() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_UseSpriteMesh_48)); }
	inline bool get_m_UseSpriteMesh_48() const { return ___m_UseSpriteMesh_48; }
	inline bool* get_address_of_m_UseSpriteMesh_48() { return &___m_UseSpriteMesh_48; }
	inline void set_m_UseSpriteMesh_48(bool value)
	{
		___m_UseSpriteMesh_48 = value;
	}

	inline static int32_t get_offset_of_m_PixelsPerUnitMultiplier_49() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_PixelsPerUnitMultiplier_49)); }
	inline float get_m_PixelsPerUnitMultiplier_49() const { return ___m_PixelsPerUnitMultiplier_49; }
	inline float* get_address_of_m_PixelsPerUnitMultiplier_49() { return &___m_PixelsPerUnitMultiplier_49; }
	inline void set_m_PixelsPerUnitMultiplier_49(float value)
	{
		___m_PixelsPerUnitMultiplier_49 = value;
	}

	inline static int32_t get_offset_of_m_CachedReferencePixelsPerUnit_50() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_CachedReferencePixelsPerUnit_50)); }
	inline float get_m_CachedReferencePixelsPerUnit_50() const { return ___m_CachedReferencePixelsPerUnit_50; }
	inline float* get_address_of_m_CachedReferencePixelsPerUnit_50() { return &___m_CachedReferencePixelsPerUnit_50; }
	inline void set_m_CachedReferencePixelsPerUnit_50(float value)
	{
		___m_CachedReferencePixelsPerUnit_50 = value;
	}
};

struct Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Image::s_ETC1DefaultUI
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___s_ETC1DefaultUI_36;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_VertScratch
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___s_VertScratch_51;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_UVScratch
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___s_UVScratch_52;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Xy
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___s_Xy_53;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Uv
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___s_Uv_54;
	// System.Collections.Generic.List`1<UnityEngine.UI.Image> UnityEngine.UI.Image::m_TrackedTexturelessImages
	List_1_t815A476B0A21E183042059E705F9E505478CD8AE * ___m_TrackedTexturelessImages_55;
	// System.Boolean UnityEngine.UI.Image::s_Initialized
	bool ___s_Initialized_56;

public:
	inline static int32_t get_offset_of_s_ETC1DefaultUI_36() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_ETC1DefaultUI_36)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_s_ETC1DefaultUI_36() const { return ___s_ETC1DefaultUI_36; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_s_ETC1DefaultUI_36() { return &___s_ETC1DefaultUI_36; }
	inline void set_s_ETC1DefaultUI_36(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___s_ETC1DefaultUI_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_ETC1DefaultUI_36), (void*)value);
	}

	inline static int32_t get_offset_of_s_VertScratch_51() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_VertScratch_51)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get_s_VertScratch_51() const { return ___s_VertScratch_51; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of_s_VertScratch_51() { return &___s_VertScratch_51; }
	inline void set_s_VertScratch_51(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		___s_VertScratch_51 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_VertScratch_51), (void*)value);
	}

	inline static int32_t get_offset_of_s_UVScratch_52() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_UVScratch_52)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get_s_UVScratch_52() const { return ___s_UVScratch_52; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of_s_UVScratch_52() { return &___s_UVScratch_52; }
	inline void set_s_UVScratch_52(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		___s_UVScratch_52 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_UVScratch_52), (void*)value);
	}

	inline static int32_t get_offset_of_s_Xy_53() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_Xy_53)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_s_Xy_53() const { return ___s_Xy_53; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_s_Xy_53() { return &___s_Xy_53; }
	inline void set_s_Xy_53(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___s_Xy_53 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Xy_53), (void*)value);
	}

	inline static int32_t get_offset_of_s_Uv_54() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_Uv_54)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_s_Uv_54() const { return ___s_Uv_54; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_s_Uv_54() { return &___s_Uv_54; }
	inline void set_s_Uv_54(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___s_Uv_54 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Uv_54), (void*)value);
	}

	inline static int32_t get_offset_of_m_TrackedTexturelessImages_55() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___m_TrackedTexturelessImages_55)); }
	inline List_1_t815A476B0A21E183042059E705F9E505478CD8AE * get_m_TrackedTexturelessImages_55() const { return ___m_TrackedTexturelessImages_55; }
	inline List_1_t815A476B0A21E183042059E705F9E505478CD8AE ** get_address_of_m_TrackedTexturelessImages_55() { return &___m_TrackedTexturelessImages_55; }
	inline void set_m_TrackedTexturelessImages_55(List_1_t815A476B0A21E183042059E705F9E505478CD8AE * value)
	{
		___m_TrackedTexturelessImages_55 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TrackedTexturelessImages_55), (void*)value);
	}

	inline static int32_t get_offset_of_s_Initialized_56() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_Initialized_56)); }
	inline bool get_s_Initialized_56() const { return ___s_Initialized_56; }
	inline bool* get_address_of_s_Initialized_56() { return &___s_Initialized_56; }
	inline void set_s_Initialized_56(bool value)
	{
		___s_Initialized_56 = value;
	}
};


// UnityEngine.UI.Text
struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1  : public MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE
{
public:
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * ___m_FontData_36;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_37;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * ___m_TextCache_38;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * ___m_TextCacheForLayout_39;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_41;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* ___m_TempVerts_42;

public:
	inline static int32_t get_offset_of_m_FontData_36() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_FontData_36)); }
	inline FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * get_m_FontData_36() const { return ___m_FontData_36; }
	inline FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 ** get_address_of_m_FontData_36() { return &___m_FontData_36; }
	inline void set_m_FontData_36(FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * value)
	{
		___m_FontData_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FontData_36), (void*)value);
	}

	inline static int32_t get_offset_of_m_Text_37() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_Text_37)); }
	inline String_t* get_m_Text_37() const { return ___m_Text_37; }
	inline String_t** get_address_of_m_Text_37() { return &___m_Text_37; }
	inline void set_m_Text_37(String_t* value)
	{
		___m_Text_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Text_37), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextCache_38() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TextCache_38)); }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * get_m_TextCache_38() const { return ___m_TextCache_38; }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 ** get_address_of_m_TextCache_38() { return &___m_TextCache_38; }
	inline void set_m_TextCache_38(TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * value)
	{
		___m_TextCache_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextCache_38), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextCacheForLayout_39() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TextCacheForLayout_39)); }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * get_m_TextCacheForLayout_39() const { return ___m_TextCacheForLayout_39; }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 ** get_address_of_m_TextCacheForLayout_39() { return &___m_TextCacheForLayout_39; }
	inline void set_m_TextCacheForLayout_39(TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * value)
	{
		___m_TextCacheForLayout_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextCacheForLayout_39), (void*)value);
	}

	inline static int32_t get_offset_of_m_DisableFontTextureRebuiltCallback_41() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_DisableFontTextureRebuiltCallback_41)); }
	inline bool get_m_DisableFontTextureRebuiltCallback_41() const { return ___m_DisableFontTextureRebuiltCallback_41; }
	inline bool* get_address_of_m_DisableFontTextureRebuiltCallback_41() { return &___m_DisableFontTextureRebuiltCallback_41; }
	inline void set_m_DisableFontTextureRebuiltCallback_41(bool value)
	{
		___m_DisableFontTextureRebuiltCallback_41 = value;
	}

	inline static int32_t get_offset_of_m_TempVerts_42() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TempVerts_42)); }
	inline UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* get_m_TempVerts_42() const { return ___m_TempVerts_42; }
	inline UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A** get_address_of_m_TempVerts_42() { return &___m_TempVerts_42; }
	inline void set_m_TempVerts_42(UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* value)
	{
		___m_TempVerts_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TempVerts_42), (void*)value);
	}
};

struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___s_DefaultText_40;

public:
	inline static int32_t get_offset_of_s_DefaultText_40() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_StaticFields, ___s_DefaultText_40)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_s_DefaultText_40() const { return ___s_DefaultText_40; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_s_DefaultText_40() { return &___s_DefaultText_40; }
	inline void set_s_DefaultText_40(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___s_DefaultText_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultText_40), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * m_Items[1];

public:
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Material[]
struct MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Material_t8927C00353A72755313F046D0CE85178AE8218EE * m_Items[1];

public:
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Sprite[]
struct SpriteU5BU5D_t8DB77E112FFC97B722E701189DCB4059F943FD77  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * m_Items[1];

public:
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<System.Object>(!!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Object_Instantiate_TisRuntimeObject_m4039C8E65629D33E1EC84D2505BF1D5DDC936622_gshared (RuntimeObject * ___original0, const RuntimeMethod* method);

// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_LoadScene_m7DAF30213E99396ECBDB1BD40CC34CCF36902092 (String_t* ___sceneName0, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.GameObject::Find(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B (String_t* ___name0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<Assets.Scripts.Controladores.ControladorJogo>()
inline ControladorJogo_tBA3EB5503CCE6D7149F9098AB82E293117900DEF * GameObject_GetComponent_TisControladorJogo_tBA3EB5503CCE6D7149F9098AB82E293117900DEF_m2E59DE9E1C7BAA41B2B69B73363EA6334A1639A3 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  ControladorJogo_tBA3EB5503CCE6D7149F9098AB82E293117900DEF * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Random::Range(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Random_Range_mC15372D42A9ABDCAC3DE82E114D60A40C9C311D2 (float ___minInclusive0, float ___maxInclusive1, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Rigidbody2D>()
inline Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, float ___x0, float ___y1, const RuntimeMethod* method);
// System.Void UnityEngine.Rigidbody2D::set_velocity(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody2D_set_velocity_m56B745344E78C85462843AE623BF0A40764FC2DA (Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___value0, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<Assets.Scripts.Controladores.ControladorPontos>()
inline ControladorPontos_t12000FE98845B63BB38922ECF4F837D7ADDB25D4 * Component_GetComponent_TisControladorPontos_t12000FE98845B63BB38922ECF4F837D7ADDB25D4_mED298E3D26B78951B73EF38DA855C02DF3C10BC9 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  ControladorPontos_t12000FE98845B63BB38922ECF4F837D7ADDB25D4 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// System.Void Assets.Scripts.Controladores.ControladorPontos::Pontuar()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ControladorPontos_Pontuar_mAF1D21A1A0AD24B7E2DDE997F2A4459C626C0B43 (ControladorPontos_t12000FE98845B63BB38922ECF4F837D7ADDB25D4 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.AudioSource>()
inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * Component_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mCC3B7A679ECE504BFAF8C70C4EF527511F46902F (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// System.Void UnityEngine.AudioSource::Play()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_Play_mED16664B8F8F3E4D68785C8C00FC96C4DF053AE1 (AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_localPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_localPosition_m527B8B5B625DA9A61E551E0FBCD3BE8CA4539FC2 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___obj0, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::get_zero()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_get_zero_m621041B9DF5FAE86C1EF4CB28C224FEA089CB828 (const RuntimeMethod* method);
// System.Int32 UnityEngine.Random::Range(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A (int32_t ___minInclusive0, int32_t ___maxExclusive1, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.Renderer>()
inline Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * GameObject_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_mD787758BED3337F182C18CC67C516C2A11B55466 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// System.Void UnityEngine.Renderer::set_material(UnityEngine.Material)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_set_material_m8DED7F4F7AF38755C3D7DAFDD613BBE1AAB941BA (Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * __this, Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___value0, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<UnityEngine.GameObject>(!!0)
inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___original0, const RuntimeMethod* method)
{
	return ((  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m4039C8E65629D33E1EC84D2505BF1D5DDC936622_gshared)(___original0, method);
}
// System.Void UnityEngine.MonoBehaviour::InvokeRepeating(System.String,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour_InvokeRepeating_mB77F4276826FBA696A150831D190875CB5802C70 (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, String_t* ___methodName0, float ___time1, float ___repeatRate2, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, bool ___value0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<Assets.Scripts.Parallax.Rolar>()
inline Rolar_tAD220DBFF42B797A8460E36A239246B7C3381699 * GameObject_GetComponent_TisRolar_tAD220DBFF42B797A8460E36A239246B7C3381699_m2FF642EDEC5569C2B7F12F25A08871CD4838C366 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  Rolar_tAD220DBFF42B797A8460E36A239246B7C3381699 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// System.Void UnityEngine.MonoBehaviour::CancelInvoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour_CancelInvoke_mAF87B47704B16B114F82AC6914E4DA9AE034095D (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.Input::get_touchCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Input_get_touchCount_mE1A06AB1973E3456AE398B3CC5105F27CC7335D6 (const RuntimeMethod* method);
// System.Boolean UnityEngine.Input::GetMouseButtonDown(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetMouseButtonDown_m466D81FDCC87C9CB07557B39DCB435EB691F1EF3 (int32_t ___button0, const RuntimeMethod* method);
// UnityEngine.Touch UnityEngine.Input::GetTouch(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C  Input_GetTouch_m6A2A31482B1A7D018C3AAC188C02F5D14500C81F (int32_t ___index0, const RuntimeMethod* method);
// UnityEngine.TouchPhase UnityEngine.Touch::get_phase()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Touch_get_phase_m576EA3F4FE1D12EB85510326AD8EC3C2EB267257 (Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C * __this, const RuntimeMethod* method);
// System.Void Assets.Scripts.Controladores.ControladorJogo::IniciarJogo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ControladorJogo_IniciarJogo_m003E83653C5CD5636B44D39597BD5DE1E9724E66 (ControladorJogo_tBA3EB5503CCE6D7149F9098AB82E293117900DEF * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Rigidbody2D::get_isKinematic()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Rigidbody2D_get_isKinematic_mB7D3E5CA2263CE1C9704DCA3ACC3BCF1DABFFB38 (Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Rigidbody2D::set_bodyType(UnityEngine.RigidbodyType2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody2D_set_bodyType_m8D34999918D42B2DF16FAAB4F237A8663EA8406B (Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void ControladorPersonagem::Voar()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ControladorPersonagem_Voar_m9DC98674AC22772F9D368862E9F6DB0A603FD83E (ControladorPersonagem_tA56FE7604ECF00DD04846933C7FCE6CA09127FBA * __this, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Quaternion::get_eulerAngles()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Quaternion_get_eulerAngles_m3DA616CAD670235A407E8A7A75925AA8E22338C3 (Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * __this, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Quaternion_Euler_m37BF99FFFA09F4B3F83DC066641B82C59B19A9C3 (float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_rotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_rotation_m1B5F3D4CE984AB31254615C9C71B0E54978583B4 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___value0, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Rigidbody2D::get_velocity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Rigidbody2D_get_velocity_m138328DCC01EB876FB5EA025BF08728030D93D66 (Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Rigidbody2D::get_rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rigidbody2D_get_rotation_mD58E62EDB334FCDF7914A94C940F7903E8ADBBFF (Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Rigidbody2D::set_rotation(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody2D_set_rotation_m4982A0057C1FEB61323B58C7A791E8A0D0CD8C77 (Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * __this, float ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Rigidbody2D::AddForce(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody2D_AddForce_mB4754FC98ED65E5381854CDC858D12F0504FB3A2 (Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___force0, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.Collision2D::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Collision2D_get_gameObject_m6F07B9CA1FAD187933EB6D8E44BD9F870658F89F (Collision2D_t95B5FD331CE95276D3658140844190B485D26564 * __this, const RuntimeMethod* method);
// System.String UnityEngine.Object::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * __this, const RuntimeMethod* method);
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// System.Void Assets.Scripts.Controladores.ControladorJogo::PararJogo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ControladorJogo_PararJogo_m1D3B1E47C99A7FC82E7011EA393A41F707EE3F7C (ControladorJogo_tBA3EB5503CCE6D7149F9098AB82E293117900DEF * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Animator>()
inline Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * Component_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m56C584BE9A3B866D54FAEE0529E28C8D1E57989F (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// System.Void UnityEngine.Behaviour::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32 (Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9 * __this, bool ___value0, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Collision2D::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Collision2D_get_transform_mC5A1F1938F67668E8B6BDE1048C727C8578AD827 (Collision2D_t95B5FD331CE95276D3658140844190B485D26564 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<Assets.Scripts.Controladores.ControladorPontos>()
inline ControladorPontos_t12000FE98845B63BB38922ECF4F837D7ADDB25D4 * GameObject_GetComponent_TisControladorPontos_t12000FE98845B63BB38922ECF4F837D7ADDB25D4_mCE78E0C398F45A832D7A36593310B936C407377B (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  ControladorPontos_t12000FE98845B63BB38922ECF4F837D7ADDB25D4 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// System.Void Assets.Scripts.Controladores.ControladorPontos::PreencherGO()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ControladorPontos_PreencherGO_m0AC3AFE6FA17BBD3A30379CE915E265F66BC1852 (ControladorPontos_t12000FE98845B63BB38922ECF4F837D7ADDB25D4 * __this, const RuntimeMethod* method);
// System.String UnityEngine.GameObject::get_tag()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GameObject_get_tag_mC21F33D368C18A631040F2887036C678B96ABC33 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Transform::get_parent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Transform_get_parent_m7D06005D9CB55F90F39D42F6A2AF9C7BC80745C9 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Collections.IEnumerator UnityEngine.Transform::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Transform_GetEnumerator_mBA0E884A69F0AA05FCB69F4EE5F700177F75DD7E (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.BoxCollider2D>()
inline BoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9 * Component_GetComponent_TisBoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9_mD7909FB3C98B8C554A48934864C1F8E9065C36BA (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  BoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// System.Boolean UnityEngine.PlayerPrefs::HasKey(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayerPrefs_HasKey_m48BE5886380B51AB495B91C9A26115B7CB958A92 (String_t* ___key0, const RuntimeMethod* method);
// System.Void UnityEngine.PlayerPrefs::SetInt(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerPrefs_SetInt_m0C5C977E960B9CA8F9AB73AF4129C3DCABD067B6 (String_t* ___key0, int32_t ___value1, const RuntimeMethod* method);
// System.Void Assets.Scripts.Controladores.ControladorPontos::set_Ponto(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ControladorPontos_set_Ponto_mF6FDF3961EFBD82982EB2488565F0C7AA00789D8_inline (ControladorPontos_t12000FE98845B63BB38922ECF4F837D7ADDB25D4 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Int32 Assets.Scripts.Controladores.ControladorPontos::get_Ponto()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ControladorPontos_get_Ponto_mFBBD248A89D66BFA79FE7EE4DD5E3C5AB3748EA9_inline (ControladorPontos_t12000FE98845B63BB38922ECF4F837D7ADDB25D4 * __this, const RuntimeMethod* method);
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411 (int32_t* __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.PlayerPrefs::GetInt(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PlayerPrefs_GetInt_m6BCF9F844298D1810A68BAF23ECBA68C6960A986 (String_t* ___key0, const RuntimeMethod* method);
// System.Void UnityEngine.UI.Image::set_sprite(UnityEngine.Sprite)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Image_set_sprite_m55C50F18ABA0A98E926FC777F7D07FA18A7D04E4 (Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * __this, Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___value0, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// UnityEngine.Material UnityEngine.Renderer::get_material()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t8927C00353A72755313F046D0CE85178AE8218EE * Renderer_get_material_mE6B01125502D08EE0D6DFE2EAEC064AD9BB31804 (Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * __this, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Material::get_mainTextureOffset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Material_get_mainTextureOffset_m515864AC74B322365689879CC668D001C41577D4 (Material_t8927C00353A72755313F046D0CE85178AE8218EE * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Material::set_mainTextureOffset(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_set_mainTextureOffset_m3045530900C547D17F181858EC245CC02CA5F3FE (Material_t8927C00353A72755313F046D0CE85178AE8218EE * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___value0, const RuntimeMethod* method);
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
// System.Void Assets.Scripts.Menus.BotoesJogo::Jogar()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BotoesJogo_Jogar_m363B616C2E2571E4C4026DCC7F365EE2C67E71A1 (BotoesJogo_t74E1945FA99F0365ACB794976A779E8DE4F3BFED * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6F9C676AF0348818182ECA2B172ED24CAB8DDAAD);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene("Jogo");
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7DAF30213E99396ECBDB1BD40CC34CCF36902092(_stringLiteral6F9C676AF0348818182ECA2B172ED24CAB8DDAAD, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Assets.Scripts.Menus.BotoesJogo::Menu()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BotoesJogo_Menu_m896F82925B1BDB21F31251E5E51E53D2CA856A16 (BotoesJogo_t74E1945FA99F0365ACB794976A779E8DE4F3BFED * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0C10E47675493434D04CD8025C8303AF94F7BA5A);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene("Menu");
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7DAF30213E99396ECBDB1BD40CC34CCF36902092(_stringLiteral0C10E47675493434D04CD8025C8303AF94F7BA5A, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Assets.Scripts.Menus.BotoesJogo::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BotoesJogo__ctor_m9D90D82A28E0AADBEDC53AE8DD0B581FBEABBB1D (BotoesJogo_t74E1945FA99F0365ACB794976A779E8DE4F3BFED * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void ControladorCano::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ControladorCano_Start_mE2F006C5559DDEAF0B8DD1F026A697423F102548 (ControladorCano_t4F03F0C283E42BA3A6246A236DDEE100E8703E91 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisControladorJogo_tBA3EB5503CCE6D7149F9098AB82E293117900DEF_m2E59DE9E1C7BAA41B2B69B73363EA6334A1639A3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC61D1802A829C1CF378EA9B2F6F66BC88E133EF5);
		s_Il2CppMethodInitialized = true;
	}
	{
		// controlador = GameObject.Find("Controlador").GetComponent<ControladorJogo>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(_stringLiteralC61D1802A829C1CF378EA9B2F6F66BC88E133EF5, /*hidden argument*/NULL);
		NullCheck(L_0);
		ControladorJogo_tBA3EB5503CCE6D7149F9098AB82E293117900DEF * L_1;
		L_1 = GameObject_GetComponent_TisControladorJogo_tBA3EB5503CCE6D7149F9098AB82E293117900DEF_m2E59DE9E1C7BAA41B2B69B73363EA6334A1639A3(L_0, /*hidden argument*/GameObject_GetComponent_TisControladorJogo_tBA3EB5503CCE6D7149F9098AB82E293117900DEF_m2E59DE9E1C7BAA41B2B69B73363EA6334A1639A3_RuntimeMethod_var);
		__this->set_controlador_4(L_1);
		// transform.position = new Vector3(transform.position.x, Random.Range(0.3f, 2.7f), transform.position.z);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_2;
		L_2 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_3;
		L_3 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_3);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		L_4 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_3, /*hidden argument*/NULL);
		float L_5 = L_4.get_x_2();
		float L_6;
		L_6 = Random_Range_mC15372D42A9ABDCAC3DE82E114D60A40C9C311D2((0.300000012f), (2.70000005f), /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_7;
		L_7 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_7);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8;
		L_8 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_7, /*hidden argument*/NULL);
		float L_9 = L_8.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10;
		memset((&L_10), 0, sizeof(L_10));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_10), L_5, L_6, L_9, /*hidden argument*/NULL);
		NullCheck(L_2);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_2, L_10, /*hidden argument*/NULL);
		// GetComponent<Rigidbody2D>().velocity = new Vector2(controlador.velocidadeCanos, 0);
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_11;
		L_11 = Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487(__this, /*hidden argument*/Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487_RuntimeMethod_var);
		ControladorJogo_tBA3EB5503CCE6D7149F9098AB82E293117900DEF * L_12 = __this->get_controlador_4();
		NullCheck(L_12);
		float L_13 = L_12->get_velocidadeCanos_11();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_14;
		memset((&L_14), 0, sizeof(L_14));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_14), L_13, (0.0f), /*hidden argument*/NULL);
		NullCheck(L_11);
		Rigidbody2D_set_velocity_m56B745344E78C85462843AE623BF0A40764FC2DA(L_11, L_14, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ControladorCano::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ControladorCano_Update_mB997D30C9F70B92291D98A234978B5BCE17B9AC9 (ControladorCano_t4F03F0C283E42BA3A6246A236DDEE100E8703E91 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mCC3B7A679ECE504BFAF8C70C4EF527511F46902F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisControladorPontos_t12000FE98845B63BB38922ECF4F837D7ADDB25D4_mED298E3D26B78951B73EF38DA855C02DF3C10BC9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	int32_t G_B3_0 = 0;
	{
		// if (this.transform.position.x < -4.62f && !pontuado)
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0;
		L_0 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		L_1 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_0, /*hidden argument*/NULL);
		float L_2 = L_1.get_x_2();
		if ((!(((float)L_2) < ((float)(-4.61999989f)))))
		{
			goto IL_0023;
		}
	}
	{
		bool L_3 = __this->get_pontuado_5();
		G_B3_0 = ((((int32_t)L_3) == ((int32_t)0))? 1 : 0);
		goto IL_0024;
	}

IL_0023:
	{
		G_B3_0 = 0;
	}

IL_0024:
	{
		V_0 = (bool)G_B3_0;
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_0053;
		}
	}
	{
		// pontuado = true;
		__this->set_pontuado_5((bool)1);
		// controlador.GetComponent<ControladorPontos>().Pontuar();
		ControladorJogo_tBA3EB5503CCE6D7149F9098AB82E293117900DEF * L_5 = __this->get_controlador_4();
		NullCheck(L_5);
		ControladorPontos_t12000FE98845B63BB38922ECF4F837D7ADDB25D4 * L_6;
		L_6 = Component_GetComponent_TisControladorPontos_t12000FE98845B63BB38922ECF4F837D7ADDB25D4_mED298E3D26B78951B73EF38DA855C02DF3C10BC9(L_5, /*hidden argument*/Component_GetComponent_TisControladorPontos_t12000FE98845B63BB38922ECF4F837D7ADDB25D4_mED298E3D26B78951B73EF38DA855C02DF3C10BC9_RuntimeMethod_var);
		NullCheck(L_6);
		ControladorPontos_Pontuar_mAF1D21A1A0AD24B7E2DDE997F2A4459C626C0B43(L_6, /*hidden argument*/NULL);
		// controlador.GetComponent<AudioSource>().Play();
		ControladorJogo_tBA3EB5503CCE6D7149F9098AB82E293117900DEF * L_7 = __this->get_controlador_4();
		NullCheck(L_7);
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_8;
		L_8 = Component_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mCC3B7A679ECE504BFAF8C70C4EF527511F46902F(L_7, /*hidden argument*/Component_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mCC3B7A679ECE504BFAF8C70C4EF527511F46902F_RuntimeMethod_var);
		NullCheck(L_8);
		AudioSource_Play_mED16664B8F8F3E4D68785C8C00FC96C4DF053AE1(L_8, /*hidden argument*/NULL);
	}

IL_0053:
	{
		// if (this.transform.localPosition.x < -7.0f)
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_9;
		L_9 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_9);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10;
		L_10 = Transform_get_localPosition_m527B8B5B625DA9A61E551E0FBCD3BE8CA4539FC2(L_9, /*hidden argument*/NULL);
		float L_11 = L_10.get_x_2();
		V_1 = (bool)((((float)L_11) < ((float)(-7.0f)))? 1 : 0);
		bool L_12 = V_1;
		if (!L_12)
		{
			goto IL_007c;
		}
	}
	{
		// GameObject.Destroy(this.gameObject);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_13;
		L_13 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_13, /*hidden argument*/NULL);
	}

IL_007c:
	{
		// if (!controlador.jogoIniciado)
		ControladorJogo_tBA3EB5503CCE6D7149F9098AB82E293117900DEF * L_14 = __this->get_controlador_4();
		NullCheck(L_14);
		bool L_15 = L_14->get_jogoIniciado_4();
		V_2 = (bool)((((int32_t)L_15) == ((int32_t)0))? 1 : 0);
		bool L_16 = V_2;
		if (!L_16)
		{
			goto IL_00a1;
		}
	}
	{
		// GetComponent<Rigidbody2D>().velocity = Vector2.zero;
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_17;
		L_17 = Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487(__this, /*hidden argument*/Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487_RuntimeMethod_var);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_18;
		L_18 = Vector2_get_zero_m621041B9DF5FAE86C1EF4CB28C224FEA089CB828(/*hidden argument*/NULL);
		NullCheck(L_17);
		Rigidbody2D_set_velocity_m56B745344E78C85462843AE623BF0A40764FC2DA(L_17, L_18, /*hidden argument*/NULL);
	}

IL_00a1:
	{
		// }
		return;
	}
}
// System.Void ControladorCano::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ControladorCano__ctor_m8AF4656C970B0776272BA1DA89F3305FE3E2DD20 (ControladorCano_t4F03F0C283E42BA3A6246A236DDEE100E8703E91 * __this, const RuntimeMethod* method)
{
	{
		// private bool pontuado = false;
		__this->set_pontuado_5((bool)0);
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void Assets.Scripts.Controladores.ControladorJogo::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ControladorJogo_Awake_mF47793D17B4292327965C035510812C77C55B4E1 (ControladorJogo_tBA3EB5503CCE6D7149F9098AB82E293117900DEF * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_mD787758BED3337F182C18CC67C516C2A11B55466_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * V_1 = NULL;
	bool V_2 = false;
	int32_t V_3 = 0;
	bool V_4 = false;
	int32_t V_5 = 0;
	bool V_6 = false;
	{
		// periodo = Random.Range(0, 2);
		int32_t L_0;
		L_0 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A(0, 2, /*hidden argument*/NULL);
		__this->set_periodo_12(L_0);
		// cano = canos[periodo];
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_1 = __this->get_canos_6();
		int32_t L_2 = __this->get_periodo_12();
		NullCheck(L_1);
		int32_t L_3 = L_2;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		__this->set_cano_13(L_4);
		// if (periodo == 1)
		int32_t L_5 = __this->get_periodo_12();
		V_2 = (bool)((((int32_t)L_5) == ((int32_t)1))? 1 : 0);
		bool L_6 = V_2;
		if (!L_6)
		{
			goto IL_0068;
		}
	}
	{
		// for (int i = 0; i < noite.Length; i++)
		V_3 = 0;
		goto IL_0054;
	}

IL_0033:
	{
		// fundos[i].GetComponent<Renderer>().material = noite[i];
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_7 = __this->get_fundos_8();
		int32_t L_8 = V_3;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		NullCheck(L_10);
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_11;
		L_11 = GameObject_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_mD787758BED3337F182C18CC67C516C2A11B55466(L_10, /*hidden argument*/GameObject_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_mD787758BED3337F182C18CC67C516C2A11B55466_RuntimeMethod_var);
		MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492* L_12 = __this->get_noite_10();
		int32_t L_13 = V_3;
		NullCheck(L_12);
		int32_t L_14 = L_13;
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		NullCheck(L_11);
		Renderer_set_material_m8DED7F4F7AF38755C3D7DAFDD613BBE1AAB941BA(L_11, L_15, /*hidden argument*/NULL);
		// for (int i = 0; i < noite.Length; i++)
		int32_t L_16 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_16, (int32_t)1));
	}

IL_0054:
	{
		// for (int i = 0; i < noite.Length; i++)
		int32_t L_17 = V_3;
		MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492* L_18 = __this->get_noite_10();
		NullCheck(L_18);
		V_4 = (bool)((((int32_t)L_17) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_18)->max_length)))))? 1 : 0);
		bool L_19 = V_4;
		if (L_19)
		{
			goto IL_0033;
		}
	}
	{
		goto IL_00a6;
	}

IL_0068:
	{
		// for (int i = 0; i < dia.Length; i++)
		V_5 = 0;
		goto IL_0093;
	}

IL_006e:
	{
		// fundos[i].GetComponent<Renderer>().material = dia[i];
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_20 = __this->get_fundos_8();
		int32_t L_21 = V_5;
		NullCheck(L_20);
		int32_t L_22 = L_21;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_23 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		NullCheck(L_23);
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_24;
		L_24 = GameObject_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_mD787758BED3337F182C18CC67C516C2A11B55466(L_23, /*hidden argument*/GameObject_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_mD787758BED3337F182C18CC67C516C2A11B55466_RuntimeMethod_var);
		MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492* L_25 = __this->get_dia_9();
		int32_t L_26 = V_5;
		NullCheck(L_25);
		int32_t L_27 = L_26;
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_28 = (L_25)->GetAt(static_cast<il2cpp_array_size_t>(L_27));
		NullCheck(L_24);
		Renderer_set_material_m8DED7F4F7AF38755C3D7DAFDD613BBE1AAB941BA(L_24, L_28, /*hidden argument*/NULL);
		// for (int i = 0; i < dia.Length; i++)
		int32_t L_29 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_29, (int32_t)1));
	}

IL_0093:
	{
		// for (int i = 0; i < dia.Length; i++)
		int32_t L_30 = V_5;
		MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492* L_31 = __this->get_dia_9();
		NullCheck(L_31);
		V_6 = (bool)((((int32_t)L_30) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_31)->max_length)))))? 1 : 0);
		bool L_32 = V_6;
		if (L_32)
		{
			goto IL_006e;
		}
	}
	{
	}

IL_00a6:
	{
		// int rand = Random.Range(0, personagens.Length);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_33 = __this->get_personagens_7();
		NullCheck(L_33);
		int32_t L_34;
		L_34 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A(0, ((int32_t)((int32_t)(((RuntimeArray*)L_33)->max_length))), /*hidden argument*/NULL);
		V_0 = L_34;
		// GameObject personagem = Instantiate(personagens[rand]);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_35 = __this->get_personagens_7();
		int32_t L_36 = V_0;
		NullCheck(L_35);
		int32_t L_37 = L_36;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_38 = (L_35)->GetAt(static_cast<il2cpp_array_size_t>(L_37));
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_39;
		L_39 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33(L_38, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33_RuntimeMethod_var);
		V_1 = L_39;
		// jogoIniciado = false;
		__this->set_jogoIniciado_4((bool)0);
		// }
		return;
	}
}
// System.Void Assets.Scripts.Controladores.ControladorJogo::IniciarJogo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ControladorJogo_IniciarJogo_m003E83653C5CD5636B44D39597BD5DE1E9724E66 (ControladorJogo_tBA3EB5503CCE6D7149F9098AB82E293117900DEF * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE33C32A28520C7B4D5D0F44940D75586602765AC);
		s_Il2CppMethodInitialized = true;
	}
	{
		// jogoIniciado = true;
		__this->set_jogoIniciado_4((bool)1);
		// InvokeRepeating("InvocaCanos", 2f, Random.Range(1.5f, 2.0f));
		float L_0;
		L_0 = Random_Range_mC15372D42A9ABDCAC3DE82E114D60A40C9C311D2((1.5f), (2.0f), /*hidden argument*/NULL);
		MonoBehaviour_InvokeRepeating_mB77F4276826FBA696A150831D190875CB5802C70(__this, _stringLiteralE33C32A28520C7B4D5D0F44940D75586602765AC, (2.0f), L_0, /*hidden argument*/NULL);
		// inicial.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1 = __this->get_inicial_5();
		NullCheck(L_1);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_1, (bool)0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Assets.Scripts.Controladores.ControladorJogo::PararJogo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ControladorJogo_PararJogo_m1D3B1E47C99A7FC82E7011EA393A41F707EE3F7C (ControladorJogo_tBA3EB5503CCE6D7149F9098AB82E293117900DEF * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRolar_tAD220DBFF42B797A8460E36A239246B7C3381699_m2FF642EDEC5569C2B7F12F25A08871CD4838C366_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* V_0 = NULL;
	int32_t V_1 = 0;
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * V_2 = NULL;
	{
		// jogoIniciado = false;
		__this->set_jogoIniciado_4((bool)0);
		// foreach (GameObject fundo in fundos)
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_0 = __this->get_fundos_8();
		V_0 = L_0;
		V_1 = 0;
		goto IL_002e;
	}

IL_0014:
	{
		// foreach (GameObject fundo in fundos)
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_1 = V_0;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_2 = L_4;
		// fundo.GetComponent<Rolar>().velocidade = 0f;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5 = V_2;
		NullCheck(L_5);
		Rolar_tAD220DBFF42B797A8460E36A239246B7C3381699 * L_6;
		L_6 = GameObject_GetComponent_TisRolar_tAD220DBFF42B797A8460E36A239246B7C3381699_m2FF642EDEC5569C2B7F12F25A08871CD4838C366(L_5, /*hidden argument*/GameObject_GetComponent_TisRolar_tAD220DBFF42B797A8460E36A239246B7C3381699_m2FF642EDEC5569C2B7F12F25A08871CD4838C366_RuntimeMethod_var);
		NullCheck(L_6);
		L_6->set_velocidade_4((0.0f));
		int32_t L_7 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)1));
	}

IL_002e:
	{
		// foreach (GameObject fundo in fundos)
		int32_t L_8 = V_1;
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_9 = V_0;
		NullCheck(L_9);
		if ((((int32_t)L_8) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_9)->max_length))))))
		{
			goto IL_0014;
		}
	}
	{
		// CancelInvoke();
		MonoBehaviour_CancelInvoke_mAF87B47704B16B114F82AC6914E4DA9AE034095D(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Assets.Scripts.Controladores.ControladorJogo::InvocaCanos()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ControladorJogo_InvocaCanos_mF017D1D0490AB03132EBD7EF563653CA637FDEA8 (ControladorJogo_tBA3EB5503CCE6D7149F9098AB82E293117900DEF * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Instantiate(cano);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_cano_13();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33(L_0, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Assets.Scripts.Controladores.ControladorJogo::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ControladorJogo__ctor_m79805BAF43B4920BFED6B3C40B48E36961A43463 (ControladorJogo_tBA3EB5503CCE6D7149F9098AB82E293117900DEF * __this, const RuntimeMethod* method)
{
	{
		// public float velocidadeCanos = -2.0f;
		__this->set_velocidadeCanos_11((-2.0f));
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void ControladorPersonagem::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ControladorPersonagem_Start_mCEB987255AD483174CF5C48FE51BE502DCD36FF1 (ControladorPersonagem_tA56FE7604ECF00DD04846933C7FCE6CA09127FBA * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC61D1802A829C1CF378EA9B2F6F66BC88E133EF5);
		s_Il2CppMethodInitialized = true;
	}
	{
		// controlador = GameObject.Find("Controlador");
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(_stringLiteralC61D1802A829C1CF378EA9B2F6F66BC88E133EF5, /*hidden argument*/NULL);
		__this->set_controlador_4(L_0);
		// }
		return;
	}
}
// System.Void ControladorPersonagem::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ControladorPersonagem_Update_mE6A8B30D53A5177A91BB272C7FA7D50ACDC1EB4B (ControladorPersonagem_tA56FE7604ECF00DD04846933C7FCE6CA09127FBA * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisControladorJogo_tBA3EB5503CCE6D7149F9098AB82E293117900DEF_m2E59DE9E1C7BAA41B2B69B73363EA6334A1639A3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C  V_2;
	memset((&V_2), 0, sizeof(V_2));
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  V_6;
	memset((&V_6), 0, sizeof(V_6));
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	int32_t G_B5_0 = 0;
	int32_t G_B9_0 = 0;
	int32_t G_B23_0 = 0;
	int32_t G_B30_0 = 0;
	int32_t G_B36_0 = 0;
	int32_t G_B41_0 = 0;
	{
		// if ((Input.touchCount > 0 || Input.GetMouseButtonDown(0)) && jogando && podeVoar)
		int32_t L_0;
		L_0 = Input_get_touchCount_mE1A06AB1973E3456AE398B3CC5105F27CC7335D6(/*hidden argument*/NULL);
		if ((((int32_t)L_0) > ((int32_t)0)))
		{
			goto IL_0011;
		}
	}
	{
		bool L_1;
		L_1 = Input_GetMouseButtonDown_m466D81FDCC87C9CB07557B39DCB435EB691F1EF3(0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0021;
		}
	}

IL_0011:
	{
		bool L_2 = __this->get_jogando_7();
		if (!L_2)
		{
			goto IL_0021;
		}
	}
	{
		bool L_3 = __this->get_podeVoar_6();
		G_B5_0 = ((int32_t)(L_3));
		goto IL_0022;
	}

IL_0021:
	{
		G_B5_0 = 0;
	}

IL_0022:
	{
		V_0 = (bool)G_B5_0;
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_00ad;
		}
	}
	{
		// if (Input.GetMouseButtonDown(0) || Input.GetTouch(0).phase == TouchPhase.Began)
		bool L_5;
		L_5 = Input_GetMouseButtonDown_m466D81FDCC87C9CB07557B39DCB435EB691F1EF3(0, /*hidden argument*/NULL);
		if (L_5)
		{
			goto IL_0045;
		}
	}
	{
		Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C  L_6;
		L_6 = Input_GetTouch_m6A2A31482B1A7D018C3AAC188C02F5D14500C81F(0, /*hidden argument*/NULL);
		V_2 = L_6;
		int32_t L_7;
		L_7 = Touch_get_phase_m576EA3F4FE1D12EB85510326AD8EC3C2EB267257((Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C *)(&V_2), /*hidden argument*/NULL);
		G_B9_0 = ((((int32_t)L_7) == ((int32_t)0))? 1 : 0);
		goto IL_0046;
	}

IL_0045:
	{
		G_B9_0 = 1;
	}

IL_0046:
	{
		V_1 = (bool)G_B9_0;
		bool L_8 = V_1;
		if (!L_8)
		{
			goto IL_00ac;
		}
	}
	{
		// if (!controlador.GetComponent<ControladorJogo>().jogoIniciado)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_9 = __this->get_controlador_4();
		NullCheck(L_9);
		ControladorJogo_tBA3EB5503CCE6D7149F9098AB82E293117900DEF * L_10;
		L_10 = GameObject_GetComponent_TisControladorJogo_tBA3EB5503CCE6D7149F9098AB82E293117900DEF_m2E59DE9E1C7BAA41B2B69B73363EA6334A1639A3(L_9, /*hidden argument*/GameObject_GetComponent_TisControladorJogo_tBA3EB5503CCE6D7149F9098AB82E293117900DEF_m2E59DE9E1C7BAA41B2B69B73363EA6334A1639A3_RuntimeMethod_var);
		NullCheck(L_10);
		bool L_11 = L_10->get_jogoIniciado_4();
		V_3 = (bool)((((int32_t)L_11) == ((int32_t)0))? 1 : 0);
		bool L_12 = V_3;
		if (!L_12)
		{
			goto IL_0077;
		}
	}
	{
		// controlador.GetComponent<ControladorJogo>().IniciarJogo();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_13 = __this->get_controlador_4();
		NullCheck(L_13);
		ControladorJogo_tBA3EB5503CCE6D7149F9098AB82E293117900DEF * L_14;
		L_14 = GameObject_GetComponent_TisControladorJogo_tBA3EB5503CCE6D7149F9098AB82E293117900DEF_m2E59DE9E1C7BAA41B2B69B73363EA6334A1639A3(L_13, /*hidden argument*/GameObject_GetComponent_TisControladorJogo_tBA3EB5503CCE6D7149F9098AB82E293117900DEF_m2E59DE9E1C7BAA41B2B69B73363EA6334A1639A3_RuntimeMethod_var);
		NullCheck(L_14);
		ControladorJogo_IniciarJogo_m003E83653C5CD5636B44D39597BD5DE1E9724E66(L_14, /*hidden argument*/NULL);
		goto IL_00ab;
	}

IL_0077:
	{
		// if (this.GetComponent<Rigidbody2D>().isKinematic)
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_15;
		L_15 = Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487(__this, /*hidden argument*/Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487_RuntimeMethod_var);
		NullCheck(L_15);
		bool L_16;
		L_16 = Rigidbody2D_get_isKinematic_mB7D3E5CA2263CE1C9704DCA3ACC3BCF1DABFFB38(L_15, /*hidden argument*/NULL);
		V_4 = L_16;
		bool L_17 = V_4;
		if (!L_17)
		{
			goto IL_00a1;
		}
	}
	{
		// this.GetComponent<Rigidbody2D>().bodyType = RigidbodyType2D.Dynamic;
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_18;
		L_18 = Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487(__this, /*hidden argument*/Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487_RuntimeMethod_var);
		NullCheck(L_18);
		Rigidbody2D_set_bodyType_m8D34999918D42B2DF16FAAB4F237A8663EA8406B(L_18, 0, /*hidden argument*/NULL);
		// Voar();
		ControladorPersonagem_Voar_m9DC98674AC22772F9D368862E9F6DB0A603FD83E(__this, /*hidden argument*/NULL);
		goto IL_00aa;
	}

IL_00a1:
	{
		// Voar();
		ControladorPersonagem_Voar_m9DC98674AC22772F9D368862E9F6DB0A603FD83E(__this, /*hidden argument*/NULL);
	}

IL_00aa:
	{
	}

IL_00ab:
	{
	}

IL_00ac:
	{
	}

IL_00ad:
	{
		// if (this.transform.rotation.eulerAngles.z > 30.0f && this.transform.rotation.eulerAngles.z <= 180 && jogando && podeVoar)
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_19;
		L_19 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_19);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_20;
		L_20 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(L_19, /*hidden argument*/NULL);
		V_6 = L_20;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_21;
		L_21 = Quaternion_get_eulerAngles_m3DA616CAD670235A407E8A7A75925AA8E22338C3((Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 *)(&V_6), /*hidden argument*/NULL);
		float L_22 = L_21.get_z_4();
		if ((!(((float)L_22) > ((float)(30.0f)))))
		{
			goto IL_00fd;
		}
	}
	{
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_23;
		L_23 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_23);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_24;
		L_24 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(L_23, /*hidden argument*/NULL);
		V_6 = L_24;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_25;
		L_25 = Quaternion_get_eulerAngles_m3DA616CAD670235A407E8A7A75925AA8E22338C3((Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 *)(&V_6), /*hidden argument*/NULL);
		float L_26 = L_25.get_z_4();
		if ((!(((float)L_26) <= ((float)(180.0f)))))
		{
			goto IL_00fd;
		}
	}
	{
		bool L_27 = __this->get_jogando_7();
		if (!L_27)
		{
			goto IL_00fd;
		}
	}
	{
		bool L_28 = __this->get_podeVoar_6();
		G_B23_0 = ((int32_t)(L_28));
		goto IL_00fe;
	}

IL_00fd:
	{
		G_B23_0 = 0;
	}

IL_00fe:
	{
		V_5 = (bool)G_B23_0;
		bool L_29 = V_5;
		if (!L_29)
		{
			goto IL_0141;
		}
	}
	{
		// transform.rotation = Quaternion.Euler(this.transform.rotation.x,this.transform.rotation.y,30.0f);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_30;
		L_30 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_31;
		L_31 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_31);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_32;
		L_32 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(L_31, /*hidden argument*/NULL);
		float L_33 = L_32.get_x_0();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_34;
		L_34 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_34);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_35;
		L_35 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(L_34, /*hidden argument*/NULL);
		float L_36 = L_35.get_y_1();
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_37;
		L_37 = Quaternion_Euler_m37BF99FFFA09F4B3F83DC066641B82C59B19A9C3(L_33, L_36, (30.0f), /*hidden argument*/NULL);
		NullCheck(L_30);
		Transform_set_rotation_m1B5F3D4CE984AB31254615C9C71B0E54978583B4(L_30, L_37, /*hidden argument*/NULL);
		goto IL_01d0;
	}

IL_0141:
	{
		// else if (this.transform.rotation.eulerAngles.z > 180.0f && this.transform.rotation.eulerAngles.z < 330 && jogando && podeVoar)
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_38;
		L_38 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_38);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_39;
		L_39 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(L_38, /*hidden argument*/NULL);
		V_6 = L_39;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_40;
		L_40 = Quaternion_get_eulerAngles_m3DA616CAD670235A407E8A7A75925AA8E22338C3((Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 *)(&V_6), /*hidden argument*/NULL);
		float L_41 = L_40.get_z_4();
		if ((!(((float)L_41) > ((float)(180.0f)))))
		{
			goto IL_0191;
		}
	}
	{
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_42;
		L_42 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_42);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_43;
		L_43 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(L_42, /*hidden argument*/NULL);
		V_6 = L_43;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_44;
		L_44 = Quaternion_get_eulerAngles_m3DA616CAD670235A407E8A7A75925AA8E22338C3((Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 *)(&V_6), /*hidden argument*/NULL);
		float L_45 = L_44.get_z_4();
		if ((!(((float)L_45) < ((float)(330.0f)))))
		{
			goto IL_0191;
		}
	}
	{
		bool L_46 = __this->get_jogando_7();
		if (!L_46)
		{
			goto IL_0191;
		}
	}
	{
		bool L_47 = __this->get_podeVoar_6();
		G_B30_0 = ((int32_t)(L_47));
		goto IL_0192;
	}

IL_0191:
	{
		G_B30_0 = 0;
	}

IL_0192:
	{
		V_7 = (bool)G_B30_0;
		bool L_48 = V_7;
		if (!L_48)
		{
			goto IL_01d0;
		}
	}
	{
		// transform.rotation = Quaternion.Euler(this.transform.rotation.x, this.transform.rotation.y, -30.0f);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_49;
		L_49 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_50;
		L_50 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_50);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_51;
		L_51 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(L_50, /*hidden argument*/NULL);
		float L_52 = L_51.get_x_0();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_53;
		L_53 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_53);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_54;
		L_54 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(L_53, /*hidden argument*/NULL);
		float L_55 = L_54.get_y_1();
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_56;
		L_56 = Quaternion_Euler_m37BF99FFFA09F4B3F83DC066641B82C59B19A9C3(L_52, L_55, (-30.0f), /*hidden argument*/NULL);
		NullCheck(L_49);
		Transform_set_rotation_m1B5F3D4CE984AB31254615C9C71B0E54978583B4(L_49, L_56, /*hidden argument*/NULL);
	}

IL_01d0:
	{
		// if (this.GetComponent<Rigidbody2D>().velocity.y < 0 && jogando && podeVoar)
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_57;
		L_57 = Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487(__this, /*hidden argument*/Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487_RuntimeMethod_var);
		NullCheck(L_57);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_58;
		L_58 = Rigidbody2D_get_velocity_m138328DCC01EB876FB5EA025BF08728030D93D66(L_57, /*hidden argument*/NULL);
		float L_59 = L_58.get_y_1();
		if ((!(((float)L_59) < ((float)(0.0f)))))
		{
			goto IL_01f7;
		}
	}
	{
		bool L_60 = __this->get_jogando_7();
		if (!L_60)
		{
			goto IL_01f7;
		}
	}
	{
		bool L_61 = __this->get_podeVoar_6();
		G_B36_0 = ((int32_t)(L_61));
		goto IL_01f8;
	}

IL_01f7:
	{
		G_B36_0 = 0;
	}

IL_01f8:
	{
		V_8 = (bool)G_B36_0;
		bool L_62 = V_8;
		if (!L_62)
		{
			goto IL_0218;
		}
	}
	{
		// this.GetComponent<Rigidbody2D>().rotation -= 1f;
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_63;
		L_63 = Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487(__this, /*hidden argument*/Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487_RuntimeMethod_var);
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_64 = L_63;
		NullCheck(L_64);
		float L_65;
		L_65 = Rigidbody2D_get_rotation_mD58E62EDB334FCDF7914A94C940F7903E8ADBBFF(L_64, /*hidden argument*/NULL);
		NullCheck(L_64);
		Rigidbody2D_set_rotation_m4982A0057C1FEB61323B58C7A791E8A0D0CD8C77(L_64, ((float)il2cpp_codegen_subtract((float)L_65, (float)(1.0f))), /*hidden argument*/NULL);
	}

IL_0218:
	{
		// if (!podeVoar && Math.Abs(transform.rotation.eulerAngles.z - 270f) > 0.1f)
		bool L_66 = __this->get_podeVoar_6();
		if (L_66)
		{
			goto IL_024d;
		}
	}
	{
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_67;
		L_67 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_67);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_68;
		L_68 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(L_67, /*hidden argument*/NULL);
		V_6 = L_68;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_69;
		L_69 = Quaternion_get_eulerAngles_m3DA616CAD670235A407E8A7A75925AA8E22338C3((Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 *)(&V_6), /*hidden argument*/NULL);
		float L_70 = L_69.get_z_4();
		IL2CPP_RUNTIME_CLASS_INIT(Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		float L_71;
		L_71 = fabsf(((float)il2cpp_codegen_subtract((float)L_70, (float)(270.0f))));
		G_B41_0 = ((((float)L_71) > ((float)(0.100000001f)))? 1 : 0);
		goto IL_024e;
	}

IL_024d:
	{
		G_B41_0 = 0;
	}

IL_024e:
	{
		V_9 = (bool)G_B41_0;
		bool L_72 = V_9;
		if (!L_72)
		{
			goto IL_028c;
		}
	}
	{
		// this.transform.rotation = Quaternion.Euler(this.transform.rotation.x, this.transform.rotation.y, 270.0f);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_73;
		L_73 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_74;
		L_74 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_74);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_75;
		L_75 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(L_74, /*hidden argument*/NULL);
		float L_76 = L_75.get_x_0();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_77;
		L_77 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_77);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_78;
		L_78 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(L_77, /*hidden argument*/NULL);
		float L_79 = L_78.get_y_1();
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_80;
		L_80 = Quaternion_Euler_m37BF99FFFA09F4B3F83DC066641B82C59B19A9C3(L_76, L_79, (270.0f), /*hidden argument*/NULL);
		NullCheck(L_73);
		Transform_set_rotation_m1B5F3D4CE984AB31254615C9C71B0E54978583B4(L_73, L_80, /*hidden argument*/NULL);
	}

IL_028c:
	{
		// }
		return;
	}
}
// System.Void ControladorPersonagem::Voar()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ControladorPersonagem_Voar_m9DC98674AC22772F9D368862E9F6DB0A603FD83E (ControladorPersonagem_tA56FE7604ECF00DD04846933C7FCE6CA09127FBA * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mCC3B7A679ECE504BFAF8C70C4EF527511F46902F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * V_1 = NULL;
	bool V_2 = false;
	{
		// if (podeVoar) {
		bool L_0 = __this->get_podeVoar_6();
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_006c;
		}
	}
	{
		// Rigidbody2D passaro = this.GetComponent<Rigidbody2D>();
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_2;
		L_2 = Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487(__this, /*hidden argument*/Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487_RuntimeMethod_var);
		V_1 = L_2;
		// passaro.velocity = Vector2.zero;
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_3 = V_1;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_4;
		L_4 = Vector2_get_zero_m621041B9DF5FAE86C1EF4CB28C224FEA089CB828(/*hidden argument*/NULL);
		NullCheck(L_3);
		Rigidbody2D_set_velocity_m56B745344E78C85462843AE623BF0A40764FC2DA(L_3, L_4, /*hidden argument*/NULL);
		// if (passaro.rotation <= 0)
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_5 = V_1;
		NullCheck(L_5);
		float L_6;
		L_6 = Rigidbody2D_get_rotation_mD58E62EDB334FCDF7914A94C940F7903E8ADBBFF(L_5, /*hidden argument*/NULL);
		V_2 = (bool)((((int32_t)((!(((float)L_6) <= ((float)(0.0f))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_7 = V_2;
		if (!L_7)
		{
			goto IL_003f;
		}
	}
	{
		// passaro.rotation = 7.5f;
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_8 = V_1;
		NullCheck(L_8);
		Rigidbody2D_set_rotation_m4982A0057C1FEB61323B58C7A791E8A0D0CD8C77(L_8, (7.5f), /*hidden argument*/NULL);
	}

IL_003f:
	{
		// passaro.rotation += 7.5f;
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_9 = V_1;
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_10 = L_9;
		NullCheck(L_10);
		float L_11;
		L_11 = Rigidbody2D_get_rotation_mD58E62EDB334FCDF7914A94C940F7903E8ADBBFF(L_10, /*hidden argument*/NULL);
		NullCheck(L_10);
		Rigidbody2D_set_rotation_m4982A0057C1FEB61323B58C7A791E8A0D0CD8C77(L_10, ((float)il2cpp_codegen_add((float)L_11, (float)(7.5f))), /*hidden argument*/NULL);
		// passaro.AddForce(voo);
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_12 = V_1;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_13 = __this->get_voo_5();
		NullCheck(L_12);
		Rigidbody2D_AddForce_mB4754FC98ED65E5381854CDC858D12F0504FB3A2(L_12, L_13, /*hidden argument*/NULL);
		// GetComponent<AudioSource>().Play();
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_14;
		L_14 = Component_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mCC3B7A679ECE504BFAF8C70C4EF527511F46902F(__this, /*hidden argument*/Component_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mCC3B7A679ECE504BFAF8C70C4EF527511F46902F_RuntimeMethod_var);
		NullCheck(L_14);
		AudioSource_Play_mED16664B8F8F3E4D68785C8C00FC96C4DF053AE1(L_14, /*hidden argument*/NULL);
	}

IL_006c:
	{
		// }
		return;
	}
}
// System.Void ControladorPersonagem::OnCollisionEnter2D(UnityEngine.Collision2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ControladorPersonagem_OnCollisionEnter2D_mC74234AF4DCB0210AB07D1D37630651C7415E783 (ControladorPersonagem_tA56FE7604ECF00DD04846933C7FCE6CA09127FBA * __this, Collision2D_t95B5FD331CE95276D3658140844190B485D26564 * ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m56C584BE9A3B866D54FAEE0529E28C8D1E57989F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mCC3B7A679ECE504BFAF8C70C4EF527511F46902F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisBoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9_mD7909FB3C98B8C554A48934864C1F8E9065C36BA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisControladorJogo_tBA3EB5503CCE6D7149F9098AB82E293117900DEF_m2E59DE9E1C7BAA41B2B69B73363EA6334A1639A3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisControladorPontos_t12000FE98845B63BB38922ECF4F837D7ADDB25D4_mCE78E0C398F45A832D7A36593310B936C407377B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral11644A2513F57CBE1820BC06F7BF032BF65CF2DF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral48EAC20407382006CB98C2A0D476DEB3128212A4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7511348C5B477DA0040D9F19955F690B87914497);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	RuntimeObject* V_4 = NULL;
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * V_5 = NULL;
	RuntimeObject* V_6 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// if (jogando) {
		bool L_0 = __this->get_jogando_7();
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_01c2;
		}
	}
	{
		// if (other.gameObject.name == "FundoChao")
		Collision2D_t95B5FD331CE95276D3658140844190B485D26564 * L_2 = ___other0;
		NullCheck(L_2);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3;
		L_3 = Collision2D_get_gameObject_m6F07B9CA1FAD187933EB6D8E44BD9F870658F89F(L_2, /*hidden argument*/NULL);
		NullCheck(L_3);
		String_t* L_4;
		L_4 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_3, /*hidden argument*/NULL);
		bool L_5;
		L_5 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_4, _stringLiteral48EAC20407382006CB98C2A0D476DEB3128212A4, /*hidden argument*/NULL);
		V_1 = L_5;
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_00c8;
		}
	}
	{
		// if (podeVoar)
		bool L_7 = __this->get_podeVoar_6();
		V_2 = L_7;
		bool L_8 = V_2;
		if (!L_8)
		{
			goto IL_008c;
		}
	}
	{
		// controlador.GetComponent<ControladorJogo>().PararJogo();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_9 = __this->get_controlador_4();
		NullCheck(L_9);
		ControladorJogo_tBA3EB5503CCE6D7149F9098AB82E293117900DEF * L_10;
		L_10 = GameObject_GetComponent_TisControladorJogo_tBA3EB5503CCE6D7149F9098AB82E293117900DEF_m2E59DE9E1C7BAA41B2B69B73363EA6334A1639A3(L_9, /*hidden argument*/GameObject_GetComponent_TisControladorJogo_tBA3EB5503CCE6D7149F9098AB82E293117900DEF_m2E59DE9E1C7BAA41B2B69B73363EA6334A1639A3_RuntimeMethod_var);
		NullCheck(L_10);
		ControladorJogo_PararJogo_m1D3B1E47C99A7FC82E7011EA393A41F707EE3F7C(L_10, /*hidden argument*/NULL);
		// this.transform.rotation = Quaternion.Euler(this.transform.rotation.x, this.transform.rotation.y, 270.0f);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_11;
		L_11 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_12;
		L_12 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_12);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_13;
		L_13 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(L_12, /*hidden argument*/NULL);
		float L_14 = L_13.get_x_0();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_15;
		L_15 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_15);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_16;
		L_16 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(L_15, /*hidden argument*/NULL);
		float L_17 = L_16.get_y_1();
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_18;
		L_18 = Quaternion_Euler_m37BF99FFFA09F4B3F83DC066641B82C59B19A9C3(L_14, L_17, (270.0f), /*hidden argument*/NULL);
		NullCheck(L_11);
		Transform_set_rotation_m1B5F3D4CE984AB31254615C9C71B0E54978583B4(L_11, L_18, /*hidden argument*/NULL);
		// this.GetComponent<Animator>().enabled = false;
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_19;
		L_19 = Component_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m56C584BE9A3B866D54FAEE0529E28C8D1E57989F(__this, /*hidden argument*/Component_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m56C584BE9A3B866D54FAEE0529E28C8D1E57989F_RuntimeMethod_var);
		NullCheck(L_19);
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(L_19, (bool)0, /*hidden argument*/NULL);
	}

IL_008c:
	{
		// this.GetComponent<Rigidbody2D>().bodyType = RigidbodyType2D.Static;
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_20;
		L_20 = Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487(__this, /*hidden argument*/Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487_RuntimeMethod_var);
		NullCheck(L_20);
		Rigidbody2D_set_bodyType_m8D34999918D42B2DF16FAAB4F237A8663EA8406B(L_20, 2, /*hidden argument*/NULL);
		// jogando = false;
		__this->set_jogando_7((bool)0);
		// other.transform.GetComponent<AudioSource>().Play();
		Collision2D_t95B5FD331CE95276D3658140844190B485D26564 * L_21 = ___other0;
		NullCheck(L_21);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_22;
		L_22 = Collision2D_get_transform_mC5A1F1938F67668E8B6BDE1048C727C8578AD827(L_21, /*hidden argument*/NULL);
		NullCheck(L_22);
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_23;
		L_23 = Component_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mCC3B7A679ECE504BFAF8C70C4EF527511F46902F(L_22, /*hidden argument*/Component_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mCC3B7A679ECE504BFAF8C70C4EF527511F46902F_RuntimeMethod_var);
		NullCheck(L_23);
		AudioSource_Play_mED16664B8F8F3E4D68785C8C00FC96C4DF053AE1(L_23, /*hidden argument*/NULL);
		// controlador.GetComponent<ControladorPontos>().PreencherGO();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_24 = __this->get_controlador_4();
		NullCheck(L_24);
		ControladorPontos_t12000FE98845B63BB38922ECF4F837D7ADDB25D4 * L_25;
		L_25 = GameObject_GetComponent_TisControladorPontos_t12000FE98845B63BB38922ECF4F837D7ADDB25D4_mCE78E0C398F45A832D7A36593310B936C407377B(L_24, /*hidden argument*/GameObject_GetComponent_TisControladorPontos_t12000FE98845B63BB38922ECF4F837D7ADDB25D4_mCE78E0C398F45A832D7A36593310B936C407377B_RuntimeMethod_var);
		NullCheck(L_25);
		ControladorPontos_PreencherGO_m0AC3AFE6FA17BBD3A30379CE915E265F66BC1852(L_25, /*hidden argument*/NULL);
		goto IL_01c1;
	}

IL_00c8:
	{
		// else if (other.gameObject.tag == "Canos" | other.gameObject.tag == "Limite")
		Collision2D_t95B5FD331CE95276D3658140844190B485D26564 * L_26 = ___other0;
		NullCheck(L_26);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_27;
		L_27 = Collision2D_get_gameObject_m6F07B9CA1FAD187933EB6D8E44BD9F870658F89F(L_26, /*hidden argument*/NULL);
		NullCheck(L_27);
		String_t* L_28;
		L_28 = GameObject_get_tag_mC21F33D368C18A631040F2887036C678B96ABC33(L_27, /*hidden argument*/NULL);
		bool L_29;
		L_29 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_28, _stringLiteral7511348C5B477DA0040D9F19955F690B87914497, /*hidden argument*/NULL);
		Collision2D_t95B5FD331CE95276D3658140844190B485D26564 * L_30 = ___other0;
		NullCheck(L_30);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_31;
		L_31 = Collision2D_get_gameObject_m6F07B9CA1FAD187933EB6D8E44BD9F870658F89F(L_30, /*hidden argument*/NULL);
		NullCheck(L_31);
		String_t* L_32;
		L_32 = GameObject_get_tag_mC21F33D368C18A631040F2887036C678B96ABC33(L_31, /*hidden argument*/NULL);
		bool L_33;
		L_33 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_32, _stringLiteral11644A2513F57CBE1820BC06F7BF032BF65CF2DF, /*hidden argument*/NULL);
		V_3 = (bool)((int32_t)((int32_t)L_29|(int32_t)L_33));
		bool L_34 = V_3;
		if (!L_34)
		{
			goto IL_01c1;
		}
	}
	{
		// podeVoar = false;
		__this->set_podeVoar_6((bool)0);
		// controlador.GetComponent<ControladorJogo>().PararJogo();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_35 = __this->get_controlador_4();
		NullCheck(L_35);
		ControladorJogo_tBA3EB5503CCE6D7149F9098AB82E293117900DEF * L_36;
		L_36 = GameObject_GetComponent_TisControladorJogo_tBA3EB5503CCE6D7149F9098AB82E293117900DEF_m2E59DE9E1C7BAA41B2B69B73363EA6334A1639A3(L_35, /*hidden argument*/GameObject_GetComponent_TisControladorJogo_tBA3EB5503CCE6D7149F9098AB82E293117900DEF_m2E59DE9E1C7BAA41B2B69B73363EA6334A1639A3_RuntimeMethod_var);
		NullCheck(L_36);
		ControladorJogo_PararJogo_m1D3B1E47C99A7FC82E7011EA393A41F707EE3F7C(L_36, /*hidden argument*/NULL);
		// foreach (Transform child in other.transform.parent)
		Collision2D_t95B5FD331CE95276D3658140844190B485D26564 * L_37 = ___other0;
		NullCheck(L_37);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_38;
		L_38 = Collision2D_get_transform_mC5A1F1938F67668E8B6BDE1048C727C8578AD827(L_37, /*hidden argument*/NULL);
		NullCheck(L_38);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_39;
		L_39 = Transform_get_parent_m7D06005D9CB55F90F39D42F6A2AF9C7BC80745C9(L_38, /*hidden argument*/NULL);
		NullCheck(L_39);
		RuntimeObject* L_40;
		L_40 = Transform_GetEnumerator_mBA0E884A69F0AA05FCB69F4EE5F700177F75DD7E(L_39, /*hidden argument*/NULL);
		V_4 = L_40;
	}

IL_0126:
	try
	{ // begin try (depth: 1)
		{
			goto IL_014b;
		}

IL_0128:
		{
			// foreach (Transform child in other.transform.parent)
			RuntimeObject* L_41 = V_4;
			NullCheck(L_41);
			RuntimeObject * L_42;
			L_42 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_41);
			V_5 = ((Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)CastclassClass((RuntimeObject*)L_42, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_il2cpp_TypeInfo_var));
			// child.transform.GetComponent<BoxCollider2D>().enabled = false;
			Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_43 = V_5;
			NullCheck(L_43);
			Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_44;
			L_44 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_43, /*hidden argument*/NULL);
			NullCheck(L_44);
			BoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9 * L_45;
			L_45 = Component_GetComponent_TisBoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9_mD7909FB3C98B8C554A48934864C1F8E9065C36BA(L_44, /*hidden argument*/Component_GetComponent_TisBoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9_mD7909FB3C98B8C554A48934864C1F8E9065C36BA_RuntimeMethod_var);
			NullCheck(L_45);
			Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(L_45, (bool)0, /*hidden argument*/NULL);
		}

IL_014b:
		{
			// foreach (Transform child in other.transform.parent)
			RuntimeObject* L_46 = V_4;
			NullCheck(L_46);
			bool L_47;
			L_47 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_46);
			if (L_47)
			{
				goto IL_0128;
			}
		}

IL_0154:
		{
			IL2CPP_LEAVE(0x16C, FINALLY_0156);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0156;
	}

FINALLY_0156:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_48 = V_4;
			V_6 = ((RuntimeObject*)IsInst((RuntimeObject*)L_48, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var));
			RuntimeObject* L_49 = V_6;
			if (!L_49)
			{
				goto IL_016b;
			}
		}

IL_0163:
		{
			RuntimeObject* L_50 = V_6;
			NullCheck(L_50);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_50);
		}

IL_016b:
		{
			IL2CPP_END_FINALLY(342)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(342)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x16C, IL_016c)
	}

IL_016c:
	{
		// this.transform.rotation = Quaternion.Euler(this.transform.rotation.x, this.transform.rotation.y, 270.0f);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_51;
		L_51 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_52;
		L_52 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_52);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_53;
		L_53 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(L_52, /*hidden argument*/NULL);
		float L_54 = L_53.get_x_0();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_55;
		L_55 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_55);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_56;
		L_56 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(L_55, /*hidden argument*/NULL);
		float L_57 = L_56.get_y_1();
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_58;
		L_58 = Quaternion_Euler_m37BF99FFFA09F4B3F83DC066641B82C59B19A9C3(L_54, L_57, (270.0f), /*hidden argument*/NULL);
		NullCheck(L_51);
		Transform_set_rotation_m1B5F3D4CE984AB31254615C9C71B0E54978583B4(L_51, L_58, /*hidden argument*/NULL);
		// this.GetComponent<Animator>().enabled = false;
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_59;
		L_59 = Component_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m56C584BE9A3B866D54FAEE0529E28C8D1E57989F(__this, /*hidden argument*/Component_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m56C584BE9A3B866D54FAEE0529E28C8D1E57989F_RuntimeMethod_var);
		NullCheck(L_59);
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(L_59, (bool)0, /*hidden argument*/NULL);
		// other.transform.GetComponent<AudioSource>().Play();
		Collision2D_t95B5FD331CE95276D3658140844190B485D26564 * L_60 = ___other0;
		NullCheck(L_60);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_61;
		L_61 = Collision2D_get_transform_mC5A1F1938F67668E8B6BDE1048C727C8578AD827(L_60, /*hidden argument*/NULL);
		NullCheck(L_61);
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_62;
		L_62 = Component_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mCC3B7A679ECE504BFAF8C70C4EF527511F46902F(L_61, /*hidden argument*/Component_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mCC3B7A679ECE504BFAF8C70C4EF527511F46902F_RuntimeMethod_var);
		NullCheck(L_62);
		AudioSource_Play_mED16664B8F8F3E4D68785C8C00FC96C4DF053AE1(L_62, /*hidden argument*/NULL);
	}

IL_01c1:
	{
	}

IL_01c2:
	{
		// }
		return;
	}
}
// System.Void ControladorPersonagem::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ControladorPersonagem__ctor_mC0A71030B3780FC195E820140CDCF59C63887DA6 (ControladorPersonagem_tA56FE7604ECF00DD04846933C7FCE6CA09127FBA * __this, const RuntimeMethod* method)
{
	{
		// [SerializeField]private Vector2 voo = new Vector2(0, 3500);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0;
		memset((&L_0), 0, sizeof(L_0));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_0), (0.0f), (3500.0f), /*hidden argument*/NULL);
		__this->set_voo_5(L_0);
		// private bool podeVoar = true;
		__this->set_podeVoar_6((bool)1);
		// private bool jogando = true;
		__this->set_jogando_7((bool)1);
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Int32 Assets.Scripts.Controladores.ControladorPontos::get_Ponto()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ControladorPontos_get_Ponto_mFBBD248A89D66BFA79FE7EE4DD5E3C5AB3748EA9 (ControladorPontos_t12000FE98845B63BB38922ECF4F837D7ADDB25D4 * __this, const RuntimeMethod* method)
{
	{
		// public int Ponto { get; private set; }
		int32_t L_0 = __this->get_U3CPontoU3Ek__BackingField_4();
		return L_0;
	}
}
// System.Void Assets.Scripts.Controladores.ControladorPontos::set_Ponto(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ControladorPontos_set_Ponto_mF6FDF3961EFBD82982EB2488565F0C7AA00789D8 (ControladorPontos_t12000FE98845B63BB38922ECF4F837D7ADDB25D4 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public int Ponto { get; private set; }
		int32_t L_0 = ___value0;
		__this->set_U3CPontoU3Ek__BackingField_4(L_0);
		return;
	}
}
// System.Void Assets.Scripts.Controladores.ControladorPontos::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ControladorPontos_Awake_m72EEEFDB7EBD0088E15BD620FD7DAB2C48F18042 (ControladorPontos_t12000FE98845B63BB38922ECF4F837D7ADDB25D4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA0F50F607896C695695DF832B80CB299D708895);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (!PlayerPrefs.HasKey("Recorde"))
		bool L_0;
		L_0 = PlayerPrefs_HasKey_m48BE5886380B51AB495B91C9A26115B7CB958A92(_stringLiteralDA0F50F607896C695695DF832B80CB299D708895, /*hidden argument*/NULL);
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0020;
		}
	}
	{
		// PlayerPrefs.SetInt("Recorde",0);
		PlayerPrefs_SetInt_m0C5C977E960B9CA8F9AB73AF4129C3DCABD067B6(_stringLiteralDA0F50F607896C695695DF832B80CB299D708895, 0, /*hidden argument*/NULL);
	}

IL_0020:
	{
		// Ponto = 0;
		ControladorPontos_set_Ponto_mF6FDF3961EFBD82982EB2488565F0C7AA00789D8_inline(__this, 0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Assets.Scripts.Controladores.ControladorPontos::Pontuar()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ControladorPontos_Pontuar_mAF1D21A1A0AD24B7E2DDE997F2A4459C626C0B43 (ControladorPontos_t12000FE98845B63BB38922ECF4F837D7ADDB25D4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA0F50F607896C695695DF832B80CB299D708895);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	{
		// Ponto++;
		int32_t L_0;
		L_0 = ControladorPontos_get_Ponto_mFBBD248A89D66BFA79FE7EE4DD5E3C5AB3748EA9_inline(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		int32_t L_1 = V_0;
		ControladorPontos_set_Ponto_mF6FDF3961EFBD82982EB2488565F0C7AA00789D8_inline(__this, ((int32_t)il2cpp_codegen_add((int32_t)L_1, (int32_t)1)), /*hidden argument*/NULL);
		// pontuacaoJogo.text = Ponto.ToString();
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_2 = __this->get_pontuacaoJogo_5();
		int32_t L_3;
		L_3 = ControladorPontos_get_Ponto_mFBBD248A89D66BFA79FE7EE4DD5E3C5AB3748EA9_inline(__this, /*hidden argument*/NULL);
		V_0 = L_3;
		String_t* L_4;
		L_4 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_0), /*hidden argument*/NULL);
		NullCheck(L_2);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_2, L_4);
		// if (Ponto > PlayerPrefs.GetInt("Recorde"))
		int32_t L_5;
		L_5 = ControladorPontos_get_Ponto_mFBBD248A89D66BFA79FE7EE4DD5E3C5AB3748EA9_inline(__this, /*hidden argument*/NULL);
		int32_t L_6;
		L_6 = PlayerPrefs_GetInt_m6BCF9F844298D1810A68BAF23ECBA68C6960A986(_stringLiteralDA0F50F607896C695695DF832B80CB299D708895, /*hidden argument*/NULL);
		V_1 = (bool)((((int32_t)L_5) > ((int32_t)L_6))? 1 : 0);
		bool L_7 = V_1;
		if (!L_7)
		{
			goto IL_0055;
		}
	}
	{
		// PlayerPrefs.SetInt("Recorde", Ponto);
		int32_t L_8;
		L_8 = ControladorPontos_get_Ponto_mFBBD248A89D66BFA79FE7EE4DD5E3C5AB3748EA9_inline(__this, /*hidden argument*/NULL);
		PlayerPrefs_SetInt_m0C5C977E960B9CA8F9AB73AF4129C3DCABD067B6(_stringLiteralDA0F50F607896C695695DF832B80CB299D708895, L_8, /*hidden argument*/NULL);
	}

IL_0055:
	{
		// }
		return;
	}
}
// System.Void Assets.Scripts.Controladores.ControladorPontos::PreencherGO()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ControladorPontos_PreencherGO_m0AC3AFE6FA17BBD3A30379CE915E265F66BC1852 (ControladorPontos_t12000FE98845B63BB38922ECF4F837D7ADDB25D4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA0F50F607896C695695DF832B80CB299D708895);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	int32_t V_2 = 0;
	bool V_3 = false;
	{
		// telaGameOver.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_telaGameOver_9();
		NullCheck(L_0);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_0, (bool)1, /*hidden argument*/NULL);
		// pontuacaoGOAtual.text = Ponto.ToString();
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_1 = __this->get_pontuacaoGOAtual_6();
		int32_t L_2;
		L_2 = ControladorPontos_get_Ponto_mFBBD248A89D66BFA79FE7EE4DD5E3C5AB3748EA9_inline(__this, /*hidden argument*/NULL);
		V_0 = L_2;
		String_t* L_3;
		L_3 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_0), /*hidden argument*/NULL);
		NullCheck(L_1);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_1, L_3);
		// pontuacaoGORecorde.text = PlayerPrefs.GetInt("Recorde").ToString();
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_4 = __this->get_pontuacaoGORecorde_7();
		int32_t L_5;
		L_5 = PlayerPrefs_GetInt_m6BCF9F844298D1810A68BAF23ECBA68C6960A986(_stringLiteralDA0F50F607896C695695DF832B80CB299D708895, /*hidden argument*/NULL);
		V_0 = L_5;
		String_t* L_6;
		L_6 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_0), /*hidden argument*/NULL);
		NullCheck(L_4);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_4, L_6);
		// if (Ponto >= 3)
		int32_t L_7;
		L_7 = ControladorPontos_get_Ponto_mFBBD248A89D66BFA79FE7EE4DD5E3C5AB3748EA9_inline(__this, /*hidden argument*/NULL);
		V_1 = (bool)((((int32_t)((((int32_t)L_7) < ((int32_t)3))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_8 = V_1;
		if (!L_8)
		{
			goto IL_00a4;
		}
	}
	{
		// pontuacaoMedalha.enabled = true;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_9 = __this->get_pontuacaoMedalha_8();
		NullCheck(L_9);
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(L_9, (bool)1, /*hidden argument*/NULL);
		// int medalha = (Ponto / 3)-1;
		int32_t L_10;
		L_10 = ControladorPontos_get_Ponto_mFBBD248A89D66BFA79FE7EE4DD5E3C5AB3748EA9_inline(__this, /*hidden argument*/NULL);
		V_2 = ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)((int32_t)L_10/(int32_t)3)), (int32_t)1));
		// if (medalha > medalhas.Length - 1)
		int32_t L_11 = V_2;
		SpriteU5BU5D_t8DB77E112FFC97B722E701189DCB4059F943FD77* L_12 = __this->get_medalhas_10();
		NullCheck(L_12);
		V_3 = (bool)((((int32_t)L_11) > ((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_12)->max_length))), (int32_t)1))))? 1 : 0);
		bool L_13 = V_3;
		if (!L_13)
		{
			goto IL_008d;
		}
	}
	{
		// medalha = medalhas.Length - 1;
		SpriteU5BU5D_t8DB77E112FFC97B722E701189DCB4059F943FD77* L_14 = __this->get_medalhas_10();
		NullCheck(L_14);
		V_2 = ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length))), (int32_t)1));
	}

IL_008d:
	{
		// pontuacaoMedalha.sprite = medalhas[medalha];
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_15 = __this->get_pontuacaoMedalha_8();
		SpriteU5BU5D_t8DB77E112FFC97B722E701189DCB4059F943FD77* L_16 = __this->get_medalhas_10();
		int32_t L_17 = V_2;
		NullCheck(L_16);
		int32_t L_18 = L_17;
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_19 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		NullCheck(L_15);
		Image_set_sprite_m55C50F18ABA0A98E926FC777F7D07FA18A7D04E4(L_15, L_19, /*hidden argument*/NULL);
		goto IL_00b3;
	}

IL_00a4:
	{
		// pontuacaoMedalha.enabled = false;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_20 = __this->get_pontuacaoMedalha_8();
		NullCheck(L_20);
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(L_20, (bool)0, /*hidden argument*/NULL);
	}

IL_00b3:
	{
		// }
		return;
	}
}
// System.Void Assets.Scripts.Controladores.ControladorPontos::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ControladorPontos__ctor_m8B834724CA6CB126FF8C2ECD9F05D7227095F564 (ControladorPontos_t12000FE98845B63BB38922ECF4F837D7ADDB25D4 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void NewBehaviourScript::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NewBehaviourScript_Start_m783F84A617DADC4574B0BF1524481E6B96C65661 (NewBehaviourScript_t5ED8D4BD4668DBECFEFD841BD2A8CC1D8FCF38CB * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void NewBehaviourScript::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NewBehaviourScript_Update_m411C4D5C2D993FD70092FDA0FE2AC4786F8AC001 (NewBehaviourScript_t5ED8D4BD4668DBECFEFD841BD2A8CC1D8FCF38CB * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void NewBehaviourScript::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NewBehaviourScript__ctor_m437970EA37D66BDF32972F4CC0F65B95E5961FAA (NewBehaviourScript_t5ED8D4BD4668DBECFEFD841BD2A8CC1D8FCF38CB * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
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
// System.Void Assets.Scripts.Parallax.Rolar::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rolar_Update_mE89BF94DD43929093D792C54EE6FACF847D40F1E (Rolar_tAD220DBFF42B797A8460E36A239246B7C3381699 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_mD787758BED3337F182C18CC67C516C2A11B55466_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * V_0 = NULL;
	float V_1 = 0.0f;
	{
		// Material material = this.gameObject.GetComponent<Renderer>().material;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_1;
		L_1 = GameObject_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_mD787758BED3337F182C18CC67C516C2A11B55466(L_0, /*hidden argument*/GameObject_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_mD787758BED3337F182C18CC67C516C2A11B55466_RuntimeMethod_var);
		NullCheck(L_1);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_2;
		L_2 = Renderer_get_material_mE6B01125502D08EE0D6DFE2EAEC064AD9BB31804(L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		// float posicao = material.mainTextureOffset.x + velocidade;
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_3 = V_0;
		NullCheck(L_3);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_4;
		L_4 = Material_get_mainTextureOffset_m515864AC74B322365689879CC668D001C41577D4(L_3, /*hidden argument*/NULL);
		float L_5 = L_4.get_x_0();
		float L_6 = __this->get_velocidade_4();
		V_1 = ((float)il2cpp_codegen_add((float)L_5, (float)L_6));
		// material.mainTextureOffset = new Vector2(posicao, material.mainTextureOffset.y);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_7 = V_0;
		float L_8 = V_1;
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_9 = V_0;
		NullCheck(L_9);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_10;
		L_10 = Material_get_mainTextureOffset_m515864AC74B322365689879CC668D001C41577D4(L_9, /*hidden argument*/NULL);
		float L_11 = L_10.get_y_1();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_12), L_8, L_11, /*hidden argument*/NULL);
		NullCheck(L_7);
		Material_set_mainTextureOffset_m3045530900C547D17F181858EC245CC02CA5F3FE(L_7, L_12, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Assets.Scripts.Parallax.Rolar::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rolar__ctor_mC897078593965B001A3CBF37859AE77361655A1F (Rolar_tAD220DBFF42B797A8460E36A239246B7C3381699 * __this, const RuntimeMethod* method)
{
	{
		// public float velocidade = 0;
		__this->set_velocidade_4((0.0f));
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void Teste::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Teste_Start_m3DF10D42809A4FE94441F4BC4CCAD0B1210121F5 (Teste_t57D50A8062F4BAC8E0F13D3CB3AD6B8A6D4C6C59 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void Teste::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Teste_Update_mE2019AD8355ECF2CE600CCFE618F52BD1EF9A6AD (Teste_t57D50A8062F4BAC8E0F13D3CB3AD6B8A6D4C6C59 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void Teste::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Teste__ctor_mF498399B4EA41DFEE24FED200B55626D7D956B24 (Teste_t57D50A8062F4BAC8E0F13D3CB3AD6B8A6D4C6C59 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method)
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, float ___x0, float ___y1, const RuntimeMethod* method)
{
	{
		float L_0 = ___x0;
		__this->set_x_0(L_0);
		float L_1 = ___y1;
		__this->set_y_1(L_1);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ControladorPontos_set_Ponto_mF6FDF3961EFBD82982EB2488565F0C7AA00789D8_inline (ControladorPontos_t12000FE98845B63BB38922ECF4F837D7ADDB25D4 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public int Ponto { get; private set; }
		int32_t L_0 = ___value0;
		__this->set_U3CPontoU3Ek__BackingField_4(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ControladorPontos_get_Ponto_mFBBD248A89D66BFA79FE7EE4DD5E3C5AB3748EA9_inline (ControladorPontos_t12000FE98845B63BB38922ECF4F837D7ADDB25D4 * __this, const RuntimeMethod* method)
{
	{
		// public int Ponto { get; private set; }
		int32_t L_0 = __this->get_U3CPontoU3Ek__BackingField_4();
		return L_0;
	}
}
