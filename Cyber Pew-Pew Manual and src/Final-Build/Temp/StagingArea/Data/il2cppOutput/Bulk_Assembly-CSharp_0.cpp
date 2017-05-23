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

// AISpawner
struct AISpawner_t2653711002;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// System.Object
struct Il2CppObject;
// CameraBehavior
struct CameraBehavior_t2107318543;
// EnemyAI
struct EnemyAI_t2110961122;
// ScoreManager
struct ScoreManager_t3573108141;
// UnityEngine.Collider2D
struct Collider2D_t646061738;
// KillBox
struct KillBox_t2917637805;
// LevelManager
struct LevelManager_t3355282079;
// UIManager
struct UIManager_t2519183485;
// MovementBehavior
struct MovementBehavior_t755051133;
// UnityEngine.BoxCollider2D
struct BoxCollider2D_t948534547;
// UnityEngine.Rigidbody2D
struct Rigidbody2D_t502193897;
// UnityEngine.Animator
struct Animator_t69676727;
// Projectile
struct Projectile_t4036506763;
// UnityEngine.Collision
struct Collision_t2876846408;
// ProjectileDestroyOnHit
struct ProjectileDestroyOnHit_t3548522401;
// UnityEngine.UI.Text
struct Text_t356221433;
// SoundManager
struct SoundManager_t654432262;
// UnityEngine.AudioClip
struct AudioClip_t1932558630;
// System.String
struct String_t;

#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Array3829468939.h"
#include "AssemblyU2DCSharp_U3CModuleU3E3783534214.h"
#include "AssemblyU2DCSharp_U3CModuleU3E3783534214MethodDeclarations.h"
#include "AssemblyU2DCSharp_AISpawner2653711002.h"
#include "AssemblyU2DCSharp_AISpawner2653711002MethodDeclarations.h"
#include "mscorlib_System_Void1841601450.h"
#include "UnityEngine_UnityEngine_MonoBehaviour1158329972MethodDeclarations.h"
#include "mscorlib_System_Int322071877448.h"
#include "mscorlib_System_Boolean3825574718.h"
#include "mscorlib_System_Single2076509932.h"
#include "mscorlib_System_String2029220233.h"
#include "UnityEngine_UnityEngine_Random1170710517MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Transform3275118058MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Quaternion4030073918MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Object1021602117MethodDeclarations.h"
#include "mscorlib_System_String2029220233MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Debug1368543263MethodDeclarations.h"
#include "UnityEngine_UnityEngine_GameObject1756533147.h"
#include "UnityEngine_ArrayTypes.h"
#include "UnityEngine_UnityEngine_Transform3275118058.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"
#include "UnityEngine_UnityEngine_Quaternion4030073918.h"
#include "UnityEngine_UnityEngine_Object1021602117.h"
#include "mscorlib_System_Object2689449295.h"
#include "AssemblyU2DCSharp_CameraBehavior2107318543.h"
#include "AssemblyU2DCSharp_CameraBehavior2107318543MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Component3819376471MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Vector32243707580MethodDeclarations.h"
#include "AssemblyU2DCSharp_EnemyAI2110961122.h"
#include "AssemblyU2DCSharp_EnemyAI2110961122MethodDeclarations.h"
#include "UnityEngine_UnityEngine_GameObject1756533147MethodDeclarations.h"
#include "AssemblyU2DCSharp_ScoreManager3573108141.h"
#include "UnityEngine_UnityEngine_Time31991979MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Collider2D646061738.h"
#include "AssemblyU2DCSharp_ScoreManager3573108141MethodDeclarations.h"
#include "AssemblyU2DCSharp_KillBox2917637805.h"
#include "AssemblyU2DCSharp_KillBox2917637805MethodDeclarations.h"
#include "AssemblyU2DCSharp_LevelManager3355282079.h"
#include "AssemblyU2DCSharp_UIManager2519183485.h"
#include "AssemblyU2DCSharp_LevelManager3355282079MethodDeclarations.h"
#include "AssemblyU2DCSharp_UIManager2519183485MethodDeclarations.h"
#include "AssemblyU2DCSharp_MovementBehavior755051133.h"
#include "AssemblyU2DCSharp_MovementBehavior755051133MethodDeclarations.h"
#include "UnityEngine_UnityEngine_BoxCollider2D948534547.h"
#include "UnityEngine_UnityEngine_Component3819376471.h"
#include "UnityEngine_UnityEngine_Rigidbody2D502193897.h"
#include "UnityEngine_UnityEngine_Animator69676727.h"
#include "UnityEngine_UnityEngine_Input1785128008MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Animator69676727MethodDeclarations.h"
#include "AssemblyU2DCSharp_Projectile4036506763.h"
#include "AssemblyU2DCSharp_Projectile4036506763MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Physics2D2540166467MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Camera189460977MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Vector22243707579MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Rigidbody2D502193897MethodDeclarations.h"
#include "AssemblyU2DCSharp_SoundManager654432262MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Camera189460977.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"
#include "AssemblyU2DCSharp_SoundManager654432262.h"
#include "UnityEngine_UnityEngine_AudioClip1932558630.h"
#include "UnityEngine_UnityEngine_Collision2876846408.h"
#include "AssemblyU2DCSharp_ProjectileDestroyOnHit3548522401.h"
#include "AssemblyU2DCSharp_ProjectileDestroyOnHit3548522401MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Collision2876846408MethodDeclarations.h"
#include "UnityEngine_UI_UnityEngine_UI_Text356221433.h"
#include "UnityEngine_UI_UnityEngine_UI_Text356221433MethodDeclarations.h"
#include "UnityEngine_UnityEngine_AudioSource1135106623MethodDeclarations.h"
#include "UnityEngine_UnityEngine_AudioSource1135106623.h"
#include "UnityEngine_UnityEngine_KeyCode2283395152.h"
#include "UnityEngine_UnityEngine_SceneManagement_SceneManager90660965MethodDeclarations.h"
#include "UnityEngine_UnityEngine_AsyncOperation3814632279.h"
#include "UnityEngine_UnityEngine_SceneManagement_LoadSceneM2981886439.h"

// !!0 UnityEngine.Object::Instantiate<System.Object>(!!0,UnityEngine.Vector3,UnityEngine.Quaternion)
extern "C"  Il2CppObject * Object_Instantiate_TisIl2CppObject_m3829784634_gshared (Il2CppObject * __this /* static, unused */, Il2CppObject * p0, Vector3_t2243707580  p1, Quaternion_t4030073918  p2, const MethodInfo* method);
#define Object_Instantiate_TisIl2CppObject_m3829784634(__this /* static, unused */, p0, p1, p2, method) ((  Il2CppObject * (*) (Il2CppObject * /* static, unused */, Il2CppObject *, Vector3_t2243707580 , Quaternion_t4030073918 , const MethodInfo*))Object_Instantiate_TisIl2CppObject_m3829784634_gshared)(__this /* static, unused */, p0, p1, p2, method)
// !!0 UnityEngine.Object::Instantiate<UnityEngine.GameObject>(!!0,UnityEngine.Vector3,UnityEngine.Quaternion)
#define Object_Instantiate_TisGameObject_t1756533147_m3064851704(__this /* static, unused */, p0, p1, p2, method) ((  GameObject_t1756533147 * (*) (Il2CppObject * /* static, unused */, GameObject_t1756533147 *, Vector3_t2243707580 , Quaternion_t4030073918 , const MethodInfo*))Object_Instantiate_TisIl2CppObject_m3829784634_gshared)(__this /* static, unused */, p0, p1, p2, method)
// !!0 UnityEngine.Object::FindObjectOfType<System.Object>()
extern "C"  Il2CppObject * Object_FindObjectOfType_TisIl2CppObject_m483057723_gshared (Il2CppObject * __this /* static, unused */, const MethodInfo* method);
#define Object_FindObjectOfType_TisIl2CppObject_m483057723(__this /* static, unused */, method) ((  Il2CppObject * (*) (Il2CppObject * /* static, unused */, const MethodInfo*))Object_FindObjectOfType_TisIl2CppObject_m483057723_gshared)(__this /* static, unused */, method)
// !!0 UnityEngine.Object::FindObjectOfType<AISpawner>()
#define Object_FindObjectOfType_TisAISpawner_t2653711002_m2528198329(__this /* static, unused */, method) ((  AISpawner_t2653711002 * (*) (Il2CppObject * /* static, unused */, const MethodInfo*))Object_FindObjectOfType_TisIl2CppObject_m483057723_gshared)(__this /* static, unused */, method)
// !!0 UnityEngine.Object::FindObjectOfType<ScoreManager>()
#define Object_FindObjectOfType_TisScoreManager_t3573108141_m2130504716(__this /* static, unused */, method) ((  ScoreManager_t3573108141 * (*) (Il2CppObject * /* static, unused */, const MethodInfo*))Object_FindObjectOfType_TisIl2CppObject_m483057723_gshared)(__this /* static, unused */, method)
// !!0 UnityEngine.Object::FindObjectOfType<LevelManager>()
#define Object_FindObjectOfType_TisLevelManager_t3355282079_m1351033480(__this /* static, unused */, method) ((  LevelManager_t3355282079 * (*) (Il2CppObject * /* static, unused */, const MethodInfo*))Object_FindObjectOfType_TisIl2CppObject_m483057723_gshared)(__this /* static, unused */, method)
// !!0 UnityEngine.Object::FindObjectOfType<UIManager>()
#define Object_FindObjectOfType_TisUIManager_t2519183485_m1638675800(__this /* static, unused */, method) ((  UIManager_t2519183485 * (*) (Il2CppObject * /* static, unused */, const MethodInfo*))Object_FindObjectOfType_TisIl2CppObject_m483057723_gshared)(__this /* static, unused */, method)
// !!0 UnityEngine.Object::FindObjectOfType<MovementBehavior>()
#define Object_FindObjectOfType_TisMovementBehavior_t755051133_m436796226(__this /* static, unused */, method) ((  MovementBehavior_t755051133 * (*) (Il2CppObject * /* static, unused */, const MethodInfo*))Object_FindObjectOfType_TisIl2CppObject_m483057723_gshared)(__this /* static, unused */, method)
// !!0 UnityEngine.Component::GetComponent<System.Object>()
extern "C"  Il2CppObject * Component_GetComponent_TisIl2CppObject_m4109961936_gshared (Component_t3819376471 * __this, const MethodInfo* method);
#define Component_GetComponent_TisIl2CppObject_m4109961936(__this, method) ((  Il2CppObject * (*) (Component_t3819376471 *, const MethodInfo*))Component_GetComponent_TisIl2CppObject_m4109961936_gshared)(__this, method)
// !!0 UnityEngine.Component::GetComponent<UnityEngine.BoxCollider2D>()
#define Component_GetComponent_TisBoxCollider2D_t948534547_m324820273(__this, method) ((  BoxCollider2D_t948534547 * (*) (Component_t3819376471 *, const MethodInfo*))Component_GetComponent_TisIl2CppObject_m4109961936_gshared)(__this, method)
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Rigidbody2D>()
#define Component_GetComponent_TisRigidbody2D_t502193897_m3702757851(__this, method) ((  Rigidbody2D_t502193897 * (*) (Component_t3819376471 *, const MethodInfo*))Component_GetComponent_TisIl2CppObject_m4109961936_gshared)(__this, method)
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Animator>()
#define Component_GetComponent_TisAnimator_t69676727_m475627522(__this, method) ((  Animator_t69676727 * (*) (Component_t3819376471 *, const MethodInfo*))Component_GetComponent_TisIl2CppObject_m4109961936_gshared)(__this, method)
// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
extern "C"  Il2CppObject * GameObject_GetComponent_TisIl2CppObject_m2812611596_gshared (GameObject_t1756533147 * __this, const MethodInfo* method);
#define GameObject_GetComponent_TisIl2CppObject_m2812611596(__this, method) ((  Il2CppObject * (*) (GameObject_t1756533147 *, const MethodInfo*))GameObject_GetComponent_TisIl2CppObject_m2812611596_gshared)(__this, method)
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.Collider2D>()
#define GameObject_GetComponent_TisCollider2D_t646061738_m4291101372(__this, method) ((  Collider2D_t646061738 * (*) (GameObject_t1756533147 *, const MethodInfo*))GameObject_GetComponent_TisIl2CppObject_m2812611596_gshared)(__this, method)
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Collider2D>()
#define Component_GetComponent_TisCollider2D_t646061738_m2950827934(__this, method) ((  Collider2D_t646061738 * (*) (Component_t3819376471 *, const MethodInfo*))Component_GetComponent_TisIl2CppObject_m4109961936_gshared)(__this, method)
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.Rigidbody2D>()
#define GameObject_GetComponent_TisRigidbody2D_t502193897_m812242143(__this, method) ((  Rigidbody2D_t502193897 * (*) (GameObject_t1756533147 *, const MethodInfo*))GameObject_GetComponent_TisIl2CppObject_m2812611596_gshared)(__this, method)
// !!0 UnityEngine.Component::GetComponent<UnityEngine.UI.Text>()
#define Component_GetComponent_TisText_t356221433_m1342661039(__this, method) ((  Text_t356221433 * (*) (Component_t3819376471 *, const MethodInfo*))Component_GetComponent_TisIl2CppObject_m4109961936_gshared)(__this, method)
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void AISpawner::.ctor()
extern "C"  void AISpawner__ctor_m3212049327 (AISpawner_t2653711002 * __this, const MethodInfo* method)
{
	{
		__this->set_totalEnemies_5(5);
		__this->set_spawn_6((bool)1);
		__this->set_spawnTime_8((1.0f));
		MonoBehaviour__ctor_m2464341955(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AISpawner::Start()
extern Il2CppClass* AISpawner_t2653711002_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral3908743137;
extern const uint32_t AISpawner_Start_m1000716555_MetadataUsageId;
extern "C"  void AISpawner_Start_m1000716555 (AISpawner_t2653711002 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AISpawner_Start_m1000716555_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(AISpawner_t2653711002_il2cpp_TypeInfo_var);
		((AISpawner_t2653711002_StaticFields*)AISpawner_t2653711002_il2cpp_TypeInfo_var->static_fields)->set_numEnemies_9(0);
		float L_0 = __this->get_spawnTime_8();
		float L_1 = __this->get_spawnTime_8();
		MonoBehaviour_InvokeRepeating_m3468262484(__this, _stringLiteral3908743137, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AISpawner::Update()
extern "C"  void AISpawner_Update_m1930934564 (AISpawner_t2653711002 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void AISpawner::SpawnEnemy()
extern Il2CppClass* AISpawner_t2653711002_il2cpp_TypeInfo_var;
extern Il2CppClass* Object_t1021602117_il2cpp_TypeInfo_var;
extern Il2CppClass* Int32_t2071877448_il2cpp_TypeInfo_var;
extern Il2CppClass* String_t_il2cpp_TypeInfo_var;
extern Il2CppClass* Debug_t1368543263_il2cpp_TypeInfo_var;
extern const MethodInfo* Object_Instantiate_TisGameObject_t1756533147_m3064851704_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral744760360;
extern const uint32_t AISpawner_SpawnEnemy_m1744661340_MetadataUsageId;
extern "C"  void AISpawner_SpawnEnemy_m1744661340 (AISpawner_t2653711002 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AISpawner_SpawnEnemy_m1744661340_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	GameObject_t1756533147 * V_2 = NULL;
	GameObject_t1756533147 * V_3 = NULL;
	GameObject_t1756533147 * V_4 = NULL;
	{
		TransformU5BU5D_t3764228911* L_0 = __this->get_spawnPointsArr_7();
		int32_t L_1 = Random_Range_m694320887(NULL /*static, unused*/, 0, (((int32_t)((int32_t)(((Il2CppArray *)L_0)->max_length)))), /*hidden argument*/NULL);
		V_0 = L_1;
		int32_t L_2 = Random_Range_m694320887(NULL /*static, unused*/, 0, 3, /*hidden argument*/NULL);
		V_1 = L_2;
		IL2CPP_RUNTIME_CLASS_INIT(AISpawner_t2653711002_il2cpp_TypeInfo_var);
		int32_t L_3 = ((AISpawner_t2653711002_StaticFields*)AISpawner_t2653711002_il2cpp_TypeInfo_var->static_fields)->get_numEnemies_9();
		int32_t L_4 = __this->get_totalEnemies_5();
		if ((((int32_t)L_3) >= ((int32_t)L_4)))
		{
			goto IL_00e7;
		}
	}
	{
		int32_t L_5 = V_1;
		if (L_5)
		{
			goto IL_006d;
		}
	}
	{
		GameObject_t1756533147 * L_6 = __this->get_enemyType1_2();
		TransformU5BU5D_t3764228911* L_7 = __this->get_spawnPointsArr_7();
		int32_t L_8 = V_0;
		int32_t L_9 = L_8;
		Transform_t3275118058 * L_10 = (L_7)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_9));
		Vector3_t2243707580  L_11 = Transform_get_position_m1104419803(L_10, /*hidden argument*/NULL);
		Quaternion_t4030073918  L_12 = Quaternion_Euler_m2887458175(NULL /*static, unused*/, (45.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t1021602117_il2cpp_TypeInfo_var);
		GameObject_t1756533147 * L_13 = Object_Instantiate_TisGameObject_t1756533147_m3064851704(NULL /*static, unused*/, L_6, L_11, L_12, /*hidden argument*/Object_Instantiate_TisGameObject_t1756533147_m3064851704_MethodInfo_var);
		V_2 = L_13;
		int32_t L_14 = __this->get_totalEnemies_5();
		__this->set_totalEnemies_5(((int32_t)((int32_t)L_14+(int32_t)1)));
		goto IL_00db;
	}

IL_006d:
	{
		int32_t L_15 = V_1;
		if ((!(((uint32_t)L_15) == ((uint32_t)1))))
		{
			goto IL_00a6;
		}
	}
	{
		GameObject_t1756533147 * L_16 = __this->get_enemyType2_3();
		TransformU5BU5D_t3764228911* L_17 = __this->get_spawnPointsArr_7();
		int32_t L_18 = V_0;
		int32_t L_19 = L_18;
		Transform_t3275118058 * L_20 = (L_17)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_19));
		Vector3_t2243707580  L_21 = Transform_get_position_m1104419803(L_20, /*hidden argument*/NULL);
		Quaternion_t4030073918  L_22 = Quaternion_Euler_m2887458175(NULL /*static, unused*/, (45.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t1021602117_il2cpp_TypeInfo_var);
		GameObject_t1756533147 * L_23 = Object_Instantiate_TisGameObject_t1756533147_m3064851704(NULL /*static, unused*/, L_16, L_21, L_22, /*hidden argument*/Object_Instantiate_TisGameObject_t1756533147_m3064851704_MethodInfo_var);
		V_3 = L_23;
		goto IL_00db;
	}

IL_00a6:
	{
		int32_t L_24 = V_1;
		if ((!(((uint32_t)L_24) == ((uint32_t)2))))
		{
			goto IL_00db;
		}
	}
	{
		GameObject_t1756533147 * L_25 = __this->get_enemyType3_4();
		TransformU5BU5D_t3764228911* L_26 = __this->get_spawnPointsArr_7();
		int32_t L_27 = V_0;
		int32_t L_28 = L_27;
		Transform_t3275118058 * L_29 = (L_26)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_28));
		Vector3_t2243707580  L_30 = Transform_get_position_m1104419803(L_29, /*hidden argument*/NULL);
		Quaternion_t4030073918  L_31 = Quaternion_Euler_m2887458175(NULL /*static, unused*/, (45.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t1021602117_il2cpp_TypeInfo_var);
		GameObject_t1756533147 * L_32 = Object_Instantiate_TisGameObject_t1756533147_m3064851704(NULL /*static, unused*/, L_25, L_30, L_31, /*hidden argument*/Object_Instantiate_TisGameObject_t1756533147_m3064851704_MethodInfo_var);
		V_4 = L_32;
	}

IL_00db:
	{
		IL2CPP_RUNTIME_CLASS_INIT(AISpawner_t2653711002_il2cpp_TypeInfo_var);
		int32_t L_33 = ((AISpawner_t2653711002_StaticFields*)AISpawner_t2653711002_il2cpp_TypeInfo_var->static_fields)->get_numEnemies_9();
		((AISpawner_t2653711002_StaticFields*)AISpawner_t2653711002_il2cpp_TypeInfo_var->static_fields)->set_numEnemies_9(((int32_t)((int32_t)L_33+(int32_t)1)));
	}

IL_00e7:
	{
		IL2CPP_RUNTIME_CLASS_INIT(AISpawner_t2653711002_il2cpp_TypeInfo_var);
		int32_t L_34 = ((AISpawner_t2653711002_StaticFields*)AISpawner_t2653711002_il2cpp_TypeInfo_var->static_fields)->get_numEnemies_9();
		int32_t L_35 = L_34;
		Il2CppObject * L_36 = Box(Int32_t2071877448_il2cpp_TypeInfo_var, &L_35);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_37 = String_Concat_m56707527(NULL /*static, unused*/, _stringLiteral744760360, L_36, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t1368543263_il2cpp_TypeInfo_var);
		Debug_Log_m920475918(NULL /*static, unused*/, L_37, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AISpawner::KillEnemy()
extern Il2CppClass* AISpawner_t2653711002_il2cpp_TypeInfo_var;
extern Il2CppClass* Int32_t2071877448_il2cpp_TypeInfo_var;
extern Il2CppClass* String_t_il2cpp_TypeInfo_var;
extern Il2CppClass* Debug_t1368543263_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral744760360;
extern const uint32_t AISpawner_KillEnemy_m3325872947_MetadataUsageId;
extern "C"  void AISpawner_KillEnemy_m3325872947 (AISpawner_t2653711002 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AISpawner_KillEnemy_m3325872947_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(AISpawner_t2653711002_il2cpp_TypeInfo_var);
		int32_t L_0 = ((AISpawner_t2653711002_StaticFields*)AISpawner_t2653711002_il2cpp_TypeInfo_var->static_fields)->get_numEnemies_9();
		((AISpawner_t2653711002_StaticFields*)AISpawner_t2653711002_il2cpp_TypeInfo_var->static_fields)->set_numEnemies_9(((int32_t)((int32_t)L_0-(int32_t)1)));
		int32_t L_1 = ((AISpawner_t2653711002_StaticFields*)AISpawner_t2653711002_il2cpp_TypeInfo_var->static_fields)->get_numEnemies_9();
		int32_t L_2 = L_1;
		Il2CppObject * L_3 = Box(Int32_t2071877448_il2cpp_TypeInfo_var, &L_2);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_4 = String_Concat_m56707527(NULL /*static, unused*/, _stringLiteral744760360, L_3, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t1368543263_il2cpp_TypeInfo_var);
		Debug_Log_m920475918(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AISpawner::ResetEnemyCount()
extern Il2CppClass* AISpawner_t2653711002_il2cpp_TypeInfo_var;
extern const uint32_t AISpawner_ResetEnemyCount_m3972094831_MetadataUsageId;
extern "C"  void AISpawner_ResetEnemyCount_m3972094831 (AISpawner_t2653711002 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AISpawner_ResetEnemyCount_m3972094831_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(AISpawner_t2653711002_il2cpp_TypeInfo_var);
		((AISpawner_t2653711002_StaticFields*)AISpawner_t2653711002_il2cpp_TypeInfo_var->static_fields)->set_numEnemies_9(0);
		return;
	}
}
// System.Void AISpawner::.cctor()
extern "C"  void AISpawner__cctor_m939221232 (Il2CppObject * __this /* static, unused */, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void CameraBehavior::.ctor()
extern "C"  void CameraBehavior__ctor_m919601176 (CameraBehavior_t2107318543 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2464341955(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void CameraBehavior::Start()
extern "C"  void CameraBehavior_Start_m2976828700 (CameraBehavior_t2107318543 * __this, const MethodInfo* method)
{
	{
		Transform_t3275118058 * L_0 = Component_get_transform_m2697483695(__this, /*hidden argument*/NULL);
		Vector3_t2243707580  L_1 = Transform_get_position_m1104419803(L_0, /*hidden argument*/NULL);
		Transform_t3275118058 * L_2 = __this->get_player_2();
		Transform_t3275118058 * L_3 = Component_get_transform_m2697483695(L_2, /*hidden argument*/NULL);
		Vector3_t2243707580  L_4 = Transform_get_position_m1104419803(L_3, /*hidden argument*/NULL);
		Vector3_t2243707580  L_5 = Vector3_op_Subtraction_m2407545601(NULL /*static, unused*/, L_1, L_4, /*hidden argument*/NULL);
		__this->set_cameraOffset_3(L_5);
		return;
	}
}
// System.Void CameraBehavior::Update()
extern "C"  void CameraBehavior_Update_m1148759119 (CameraBehavior_t2107318543 * __this, const MethodInfo* method)
{
	Vector3_t2243707580  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Vector3_t2243707580  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		Transform_t3275118058 * L_0 = Component_get_transform_m2697483695(__this, /*hidden argument*/NULL);
		Transform_t3275118058 * L_1 = __this->get_player_2();
		Vector3_t2243707580  L_2 = Transform_get_position_m1104419803(L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		float L_3 = (&V_0)->get_x_1();
		Vector3_t2243707580 * L_4 = __this->get_address_of_cameraOffset_3();
		float L_5 = L_4->get_x_1();
		Transform_t3275118058 * L_6 = __this->get_player_2();
		Vector3_t2243707580  L_7 = Transform_get_position_m1104419803(L_6, /*hidden argument*/NULL);
		V_1 = L_7;
		float L_8 = (&V_1)->get_y_2();
		Vector3_t2243707580 * L_9 = __this->get_address_of_cameraOffset_3();
		float L_10 = L_9->get_y_2();
		Vector3_t2243707580 * L_11 = __this->get_address_of_cameraOffset_3();
		float L_12 = L_11->get_z_3();
		Vector3_t2243707580  L_13;
		memset(&L_13, 0, sizeof(L_13));
		Vector3__ctor_m2638739322(&L_13, ((float)((float)L_3+(float)L_5)), ((float)((float)L_8+(float)L_10)), L_12, /*hidden argument*/NULL);
		Transform_set_position_m2469242620(L_0, L_13, /*hidden argument*/NULL);
		return;
	}
}
// System.Void EnemyAI::.ctor()
extern "C"  void EnemyAI__ctor_m3271486257 (EnemyAI_t2110961122 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2464341955(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void EnemyAI::Awake()
extern "C"  void EnemyAI_Awake_m3573152082 (EnemyAI_t2110961122 * __this, const MethodInfo* method)
{
	{
		Transform_t3275118058 * L_0 = Component_get_transform_m2697483695(__this, /*hidden argument*/NULL);
		__this->set_currentTransform_7(L_0);
		return;
	}
}
// System.Void EnemyAI::Start()
extern Il2CppClass* Object_t1021602117_il2cpp_TypeInfo_var;
extern const MethodInfo* Object_FindObjectOfType_TisAISpawner_t2653711002_m2528198329_MethodInfo_var;
extern const MethodInfo* Object_FindObjectOfType_TisScoreManager_t3573108141_m2130504716_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral1875862075;
extern const uint32_t EnemyAI_Start_m2288311913_MetadataUsageId;
extern "C"  void EnemyAI_Start_m2288311913 (EnemyAI_t2110961122 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (EnemyAI_Start_m2288311913_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_t1756533147 * V_0 = NULL;
	{
		GameObject_t1756533147 * L_0 = GameObject_FindGameObjectWithTag_m829057129(NULL /*static, unused*/, _stringLiteral1875862075, /*hidden argument*/NULL);
		V_0 = L_0;
		GameObject_t1756533147 * L_1 = V_0;
		Transform_t3275118058 * L_2 = GameObject_get_transform_m909382139(L_1, /*hidden argument*/NULL);
		__this->set_target_2(L_2);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t1021602117_il2cpp_TypeInfo_var);
		AISpawner_t2653711002 * L_3 = Object_FindObjectOfType_TisAISpawner_t2653711002_m2528198329(NULL /*static, unused*/, /*hidden argument*/Object_FindObjectOfType_TisAISpawner_t2653711002_m2528198329_MethodInfo_var);
		__this->set_aiSpawner_5(L_3);
		ScoreManager_t3573108141 * L_4 = Object_FindObjectOfType_TisScoreManager_t3573108141_m2130504716(NULL /*static, unused*/, /*hidden argument*/Object_FindObjectOfType_TisScoreManager_t3573108141_m2130504716_MethodInfo_var);
		__this->set_scManager_6(L_4);
		return;
	}
}
// System.Void EnemyAI::Update()
extern "C"  void EnemyAI_Update_m845972740 (EnemyAI_t2110961122 * __this, const MethodInfo* method)
{
	Vector3_t2243707580  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Vector3_t2243707580  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		Transform_t3275118058 * L_0 = __this->get_target_2();
		Vector3_t2243707580  L_1 = Transform_get_position_m1104419803(L_0, /*hidden argument*/NULL);
		Transform_t3275118058 * L_2 = __this->get_currentTransform_7();
		Vector3_t2243707580  L_3 = Transform_get_position_m1104419803(L_2, /*hidden argument*/NULL);
		Vector3_t2243707580  L_4 = Vector3_op_Subtraction_m2407545601(NULL /*static, unused*/, L_1, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		(&V_0)->set_z_3((0.0f));
		Vector3_t2243707580  L_5 = V_0;
		Vector3_t2243707580  L_6 = Vector3_get_zero_m1527993324(NULL /*static, unused*/, /*hidden argument*/NULL);
		bool L_7 = Vector3_op_Inequality_m799191452(NULL /*static, unused*/, L_5, L_6, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_006b;
		}
	}
	{
		Transform_t3275118058 * L_8 = __this->get_currentTransform_7();
		Transform_t3275118058 * L_9 = __this->get_currentTransform_7();
		Quaternion_t4030073918  L_10 = Transform_get_rotation_m1033555130(L_9, /*hidden argument*/NULL);
		Vector3_t2243707580  L_11 = Vector3_get_left_m2429378123(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector3_t2243707580  L_12 = V_0;
		Quaternion_t4030073918  L_13 = Quaternion_FromToRotation_m1685306068(NULL /*static, unused*/, L_11, L_12, /*hidden argument*/NULL);
		int32_t L_14 = __this->get_rotationSpeed_4();
		float L_15 = Time_get_deltaTime_m2233168104(NULL /*static, unused*/, /*hidden argument*/NULL);
		Quaternion_t4030073918  L_16 = Quaternion_Slerp_m1992855400(NULL /*static, unused*/, L_10, L_13, ((float)((float)(((float)((float)L_14)))*(float)L_15)), /*hidden argument*/NULL);
		Transform_set_rotation_m3411284563(L_8, L_16, /*hidden argument*/NULL);
	}

IL_006b:
	{
		Transform_t3275118058 * L_17 = __this->get_currentTransform_7();
		Transform_t3275118058 * L_18 = L_17;
		Vector3_t2243707580  L_19 = Transform_get_position_m1104419803(L_18, /*hidden argument*/NULL);
		Transform_t3275118058 * L_20 = __this->get_target_2();
		Vector3_t2243707580  L_21 = Transform_get_position_m1104419803(L_20, /*hidden argument*/NULL);
		Transform_t3275118058 * L_22 = __this->get_currentTransform_7();
		Vector3_t2243707580  L_23 = Transform_get_position_m1104419803(L_22, /*hidden argument*/NULL);
		Vector3_t2243707580  L_24 = Vector3_op_Subtraction_m2407545601(NULL /*static, unused*/, L_21, L_23, /*hidden argument*/NULL);
		V_1 = L_24;
		Vector3_t2243707580  L_25 = Vector3_get_normalized_m936072361((&V_1), /*hidden argument*/NULL);
		int32_t L_26 = __this->get_velocity_3();
		Vector3_t2243707580  L_27 = Vector3_op_Multiply_m1351554733(NULL /*static, unused*/, L_25, (((float)((float)L_26))), /*hidden argument*/NULL);
		float L_28 = Time_get_deltaTime_m2233168104(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector3_t2243707580  L_29 = Vector3_op_Multiply_m1351554733(NULL /*static, unused*/, L_27, L_28, /*hidden argument*/NULL);
		Vector3_t2243707580  L_30 = Vector3_op_Addition_m3146764857(NULL /*static, unused*/, L_19, L_29, /*hidden argument*/NULL);
		Transform_set_position_m2469242620(L_18, L_30, /*hidden argument*/NULL);
		return;
	}
}
// System.Void EnemyAI::OnTriggerEnter2D(UnityEngine.Collider2D)
extern Il2CppClass* String_t_il2cpp_TypeInfo_var;
extern Il2CppClass* Object_t1021602117_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2906788588;
extern const uint32_t EnemyAI_OnTriggerEnter2D_m2303800481_MetadataUsageId;
extern "C"  void EnemyAI_OnTriggerEnter2D_m2303800481 (EnemyAI_t2110961122 * __this, Collider2D_t646061738 * ___colObject0, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (EnemyAI_OnTriggerEnter2D_m2303800481_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Collider2D_t646061738 * L_0 = ___colObject0;
		String_t* L_1 = Object_get_name_m2079638459(L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_2 = String_op_Equality_m1790663636(NULL /*static, unused*/, L_1, _stringLiteral2906788588, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0041;
		}
	}
	{
		GameObject_t1756533147 * L_3 = Component_get_gameObject_m3105766835(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t1021602117_il2cpp_TypeInfo_var);
		Object_Destroy_m4145850038(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		AISpawner_t2653711002 * L_4 = __this->get_aiSpawner_5();
		AISpawner_KillEnemy_m3325872947(L_4, /*hidden argument*/NULL);
		ScoreManager_t3573108141 * L_5 = __this->get_scManager_6();
		ScoreManager_IncreaseScore_m619672742(L_5, /*hidden argument*/NULL);
		Collider2D_t646061738 * L_6 = ___colObject0;
		GameObject_t1756533147 * L_7 = Component_get_gameObject_m3105766835(L_6, /*hidden argument*/NULL);
		Object_Destroy_m4145850038(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
	}

IL_0041:
	{
		return;
	}
}
// System.Void KillBox::.ctor()
extern "C"  void KillBox__ctor_m1644268508 (KillBox_t2917637805 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2464341955(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void KillBox::Start()
extern Il2CppClass* Object_t1021602117_il2cpp_TypeInfo_var;
extern const MethodInfo* Object_FindObjectOfType_TisLevelManager_t3355282079_m1351033480_MethodInfo_var;
extern const MethodInfo* Object_FindObjectOfType_TisUIManager_t2519183485_m1638675800_MethodInfo_var;
extern const uint32_t KillBox_Start_m637009204_MetadataUsageId;
extern "C"  void KillBox_Start_m637009204 (KillBox_t2917637805 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (KillBox_Start_m637009204_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Object_t1021602117_il2cpp_TypeInfo_var);
		LevelManager_t3355282079 * L_0 = Object_FindObjectOfType_TisLevelManager_t3355282079_m1351033480(NULL /*static, unused*/, /*hidden argument*/Object_FindObjectOfType_TisLevelManager_t3355282079_m1351033480_MethodInfo_var);
		__this->set_levelManager_2(L_0);
		UIManager_t2519183485 * L_1 = Object_FindObjectOfType_TisUIManager_t2519183485_m1638675800(NULL /*static, unused*/, /*hidden argument*/Object_FindObjectOfType_TisUIManager_t2519183485_m1638675800_MethodInfo_var);
		__this->set_uiManager_3(L_1);
		__this->set_livesLost_4((-1));
		return;
	}
}
// System.Void KillBox::Update()
extern "C"  void KillBox_Update_m2855415793 (KillBox_t2917637805 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void KillBox::OnTriggerEnter2D(UnityEngine.Collider2D)
extern Il2CppClass* String_t_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral1875862075;
extern const uint32_t KillBox_OnTriggerEnter2D_m2474252220_MetadataUsageId;
extern "C"  void KillBox_OnTriggerEnter2D_m2474252220 (KillBox_t2917637805 * __this, Collider2D_t646061738 * ___colObject0, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (KillBox_OnTriggerEnter2D_m2474252220_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Collider2D_t646061738 * L_0 = ___colObject0;
		String_t* L_1 = Object_get_name_m2079638459(L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_2 = String_op_Equality_m1790663636(NULL /*static, unused*/, L_1, _stringLiteral1875862075, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0031;
		}
	}
	{
		LevelManager_t3355282079 * L_3 = __this->get_levelManager_2();
		LevelManager_RespawnPlayer_m1874715677(L_3, /*hidden argument*/NULL);
		UIManager_t2519183485 * L_4 = __this->get_uiManager_3();
		int32_t L_5 = __this->get_livesLost_4();
		UIManager_UpdateLives_m4288701093(L_4, L_5, /*hidden argument*/NULL);
	}

IL_0031:
	{
		return;
	}
}
// System.Void LevelManager::.ctor()
extern "C"  void LevelManager__ctor_m1225645824 (LevelManager_t3355282079 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2464341955(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void LevelManager::Start()
extern Il2CppClass* Object_t1021602117_il2cpp_TypeInfo_var;
extern const MethodInfo* Object_FindObjectOfType_TisMovementBehavior_t755051133_m436796226_MethodInfo_var;
extern const uint32_t LevelManager_Start_m2304508908_MetadataUsageId;
extern "C"  void LevelManager_Start_m2304508908 (LevelManager_t3355282079 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (LevelManager_Start_m2304508908_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Object_t1021602117_il2cpp_TypeInfo_var);
		MovementBehavior_t755051133 * L_0 = Object_FindObjectOfType_TisMovementBehavior_t755051133_m436796226(NULL /*static, unused*/, /*hidden argument*/Object_FindObjectOfType_TisMovementBehavior_t755051133_m436796226_MethodInfo_var);
		__this->set_player_3(L_0);
		return;
	}
}
// System.Void LevelManager::Update()
extern "C"  void LevelManager_Update_m2027449311 (LevelManager_t3355282079 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void LevelManager::RespawnPlayer()
extern Il2CppClass* Debug_t1368543263_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral1814241898;
extern const uint32_t LevelManager_RespawnPlayer_m1874715677_MetadataUsageId;
extern "C"  void LevelManager_RespawnPlayer_m1874715677 (LevelManager_t3355282079 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (LevelManager_RespawnPlayer_m1874715677_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t1368543263_il2cpp_TypeInfo_var);
		Debug_Log_m920475918(NULL /*static, unused*/, _stringLiteral1814241898, /*hidden argument*/NULL);
		MovementBehavior_t755051133 * L_0 = __this->get_player_3();
		Transform_t3275118058 * L_1 = Component_get_transform_m2697483695(L_0, /*hidden argument*/NULL);
		GameObject_t1756533147 * L_2 = __this->get_checkpoint_2();
		Transform_t3275118058 * L_3 = GameObject_get_transform_m909382139(L_2, /*hidden argument*/NULL);
		Vector3_t2243707580  L_4 = Transform_get_position_m1104419803(L_3, /*hidden argument*/NULL);
		Transform_set_position_m2469242620(L_1, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MovementBehavior::.ctor()
extern "C"  void MovementBehavior__ctor_m3157876046 (MovementBehavior_t755051133 * __this, const MethodInfo* method)
{
	{
		__this->set_moveTime_3((0.1f));
		MonoBehaviour__ctor_m2464341955(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MovementBehavior::Start()
extern const MethodInfo* Component_GetComponent_TisBoxCollider2D_t948534547_m324820273_MethodInfo_var;
extern const MethodInfo* Component_GetComponent_TisRigidbody2D_t502193897_m3702757851_MethodInfo_var;
extern const MethodInfo* Component_GetComponent_TisAnimator_t69676727_m475627522_MethodInfo_var;
extern const uint32_t MovementBehavior_Start_m2429911390_MetadataUsageId;
extern "C"  void MovementBehavior_Start_m2429911390 (MovementBehavior_t755051133 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MovementBehavior_Start_m2429911390_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		BoxCollider2D_t948534547 * L_0 = Component_GetComponent_TisBoxCollider2D_t948534547_m324820273(__this, /*hidden argument*/Component_GetComponent_TisBoxCollider2D_t948534547_m324820273_MethodInfo_var);
		__this->set_boxCollider_4(L_0);
		Rigidbody2D_t502193897 * L_1 = Component_GetComponent_TisRigidbody2D_t502193897_m3702757851(__this, /*hidden argument*/Component_GetComponent_TisRigidbody2D_t502193897_m3702757851_MethodInfo_var);
		__this->set_rigidBody2D_5(L_1);
		Animator_t69676727 * L_2 = Component_GetComponent_TisAnimator_t69676727_m475627522(__this, /*hidden argument*/Component_GetComponent_TisAnimator_t69676727_m475627522_MethodInfo_var);
		__this->set_animator_7(L_2);
		float L_3 = __this->get_moveTime_3();
		__this->set_inverseMoveTime_6(((float)((float)(1.0f)/(float)L_3)));
		return;
	}
}
// System.Void MovementBehavior::Update()
extern Il2CppClass* Input_t1785128008_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral855845486;
extern Il2CppCodeGenString* _stringLiteral1635882288;
extern Il2CppCodeGenString* _stringLiteral652215505;
extern const uint32_t MovementBehavior_Update_m2840501789_MetadataUsageId;
extern "C"  void MovementBehavior_Update_m2840501789 (MovementBehavior_t755051133 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MovementBehavior_Update_m2840501789_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	Vector3_t2243707580  V_2;
	memset(&V_2, 0, sizeof(V_2));
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1785128008_il2cpp_TypeInfo_var);
		float L_0 = Input_GetAxis_m2098048324(NULL /*static, unused*/, _stringLiteral855845486, /*hidden argument*/NULL);
		V_0 = L_0;
		float L_1 = Input_GetAxis_m2098048324(NULL /*static, unused*/, _stringLiteral1635882288, /*hidden argument*/NULL);
		V_1 = L_1;
		float L_2 = V_0;
		float L_3 = V_1;
		Vector3__ctor_m2638739322((&V_2), L_2, L_3, (0.0f), /*hidden argument*/NULL);
		float L_4 = V_0;
		if ((((float)L_4) > ((float)(0.0f))))
		{
			goto IL_0050;
		}
	}
	{
		float L_5 = V_0;
		if ((((float)L_5) < ((float)(0.0f))))
		{
			goto IL_0050;
		}
	}
	{
		float L_6 = V_1;
		if ((((float)L_6) > ((float)(0.0f))))
		{
			goto IL_0050;
		}
	}
	{
		float L_7 = V_1;
		if ((!(((float)L_7) < ((float)(0.0f)))))
		{
			goto IL_0066;
		}
	}

IL_0050:
	{
		Animator_t69676727 * L_8 = __this->get_animator_7();
		Animator_SetInteger_m528582597(L_8, _stringLiteral652215505, 1, /*hidden argument*/NULL);
		goto IL_0077;
	}

IL_0066:
	{
		Animator_t69676727 * L_9 = __this->get_animator_7();
		Animator_SetInteger_m528582597(L_9, _stringLiteral652215505, 0, /*hidden argument*/NULL);
	}

IL_0077:
	{
		Transform_t3275118058 * L_10 = Component_get_transform_m2697483695(__this, /*hidden argument*/NULL);
		Transform_t3275118058 * L_11 = L_10;
		Vector3_t2243707580  L_12 = Transform_get_position_m1104419803(L_11, /*hidden argument*/NULL);
		Vector3_t2243707580  L_13 = V_2;
		float L_14 = __this->get_inverseMoveTime_6();
		Vector3_t2243707580  L_15 = Vector3_op_Multiply_m1351554733(NULL /*static, unused*/, L_13, L_14, /*hidden argument*/NULL);
		float L_16 = Time_get_deltaTime_m2233168104(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector3_t2243707580  L_17 = Vector3_op_Multiply_m1351554733(NULL /*static, unused*/, L_15, L_16, /*hidden argument*/NULL);
		Vector3_t2243707580  L_18 = Vector3_op_Addition_m3146764857(NULL /*static, unused*/, L_12, L_17, /*hidden argument*/NULL);
		Transform_set_position_m2469242620(L_11, L_18, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Projectile::.ctor()
extern "C"  void Projectile__ctor_m2042814794 (Projectile_t4036506763 * __this, const MethodInfo* method)
{
	{
		__this->set_speed_3((300.0f));
		MonoBehaviour__ctor_m2464341955(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Projectile::Start()
extern "C"  void Projectile_Start_m384752054 (Projectile_t4036506763 * __this, const MethodInfo* method)
{
	{
		Transform_t3275118058 * L_0 = Component_get_transform_m2697483695(__this, /*hidden argument*/NULL);
		__this->set_projectileObject_6(L_0);
		return;
	}
}
// System.Void Projectile::Update()
extern Il2CppClass* Input_t1785128008_il2cpp_TypeInfo_var;
extern Il2CppClass* Object_t1021602117_il2cpp_TypeInfo_var;
extern Il2CppClass* Physics2D_t2540166467_il2cpp_TypeInfo_var;
extern Il2CppClass* SoundManager_t654432262_il2cpp_TypeInfo_var;
extern const MethodInfo* Object_Instantiate_TisGameObject_t1756533147_m3064851704_MethodInfo_var;
extern const MethodInfo* GameObject_GetComponent_TisCollider2D_t646061738_m4291101372_MethodInfo_var;
extern const MethodInfo* Component_GetComponent_TisCollider2D_t646061738_m2950827934_MethodInfo_var;
extern const MethodInfo* GameObject_GetComponent_TisRigidbody2D_t502193897_m812242143_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral3645101712;
extern const uint32_t Projectile_Update_m2539680915_MetadataUsageId;
extern "C"  void Projectile_Update_m2539680915 (Projectile_t4036506763 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Projectile_Update_m2539680915_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_t1756533147 * V_0 = NULL;
	Rigidbody2D_t502193897 * V_1 = NULL;
	Vector3_t2243707580  V_2;
	memset(&V_2, 0, sizeof(V_2));
	Vector3_t2243707580  V_3;
	memset(&V_3, 0, sizeof(V_3));
	Vector3_t2243707580  V_4;
	memset(&V_4, 0, sizeof(V_4));
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1785128008_il2cpp_TypeInfo_var);
		bool L_0 = Input_GetButtonDown_m2792523731(NULL /*static, unused*/, _stringLiteral3645101712, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_00ab;
		}
	}
	{
		GameObject_t1756533147 * L_1 = __this->get_projectile_2();
		Transform_t3275118058 * L_2 = __this->get_projectileObject_6();
		Vector3_t2243707580  L_3 = Transform_get_position_m1104419803(L_2, /*hidden argument*/NULL);
		Transform_t3275118058 * L_4 = __this->get_projectileObject_6();
		Quaternion_t4030073918  L_5 = Transform_get_rotation_m1033555130(L_4, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t1021602117_il2cpp_TypeInfo_var);
		GameObject_t1756533147 * L_6 = Object_Instantiate_TisGameObject_t1756533147_m3064851704(NULL /*static, unused*/, L_1, L_3, L_5, /*hidden argument*/Object_Instantiate_TisGameObject_t1756533147_m3064851704_MethodInfo_var);
		V_0 = L_6;
		GameObject_t1756533147 * L_7 = V_0;
		Collider2D_t646061738 * L_8 = GameObject_GetComponent_TisCollider2D_t646061738_m4291101372(L_7, /*hidden argument*/GameObject_GetComponent_TisCollider2D_t646061738_m4291101372_MethodInfo_var);
		Collider2D_t646061738 * L_9 = Component_GetComponent_TisCollider2D_t646061738_m2950827934(__this, /*hidden argument*/Component_GetComponent_TisCollider2D_t646061738_m2950827934_MethodInfo_var);
		IL2CPP_RUNTIME_CLASS_INIT(Physics2D_t2540166467_il2cpp_TypeInfo_var);
		Physics2D_IgnoreCollision_m3013856194(NULL /*static, unused*/, L_8, L_9, /*hidden argument*/NULL);
		GameObject_t1756533147 * L_10 = V_0;
		Rigidbody2D_t502193897 * L_11 = GameObject_GetComponent_TisRigidbody2D_t502193897_m812242143(L_10, /*hidden argument*/GameObject_GetComponent_TisRigidbody2D_t502193897_m812242143_MethodInfo_var);
		V_1 = L_11;
		Camera_t189460977 * L_12 = Camera_get_main_m475173995(NULL /*static, unused*/, /*hidden argument*/NULL);
		Transform_t3275118058 * L_13 = Component_get_transform_m2697483695(__this, /*hidden argument*/NULL);
		Vector3_t2243707580  L_14 = Transform_get_position_m1104419803(L_13, /*hidden argument*/NULL);
		Vector3_t2243707580  L_15 = Camera_WorldToScreenPoint_m638747266(L_12, L_14, /*hidden argument*/NULL);
		V_2 = L_15;
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1785128008_il2cpp_TypeInfo_var);
		Vector3_t2243707580  L_16 = Input_get_mousePosition_m146923508(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector3_t2243707580  L_17 = V_2;
		Vector3_t2243707580  L_18 = Vector3_op_Subtraction_m2407545601(NULL /*static, unused*/, L_16, L_17, /*hidden argument*/NULL);
		V_4 = L_18;
		Vector3_t2243707580  L_19 = Vector3_get_normalized_m936072361((&V_4), /*hidden argument*/NULL);
		V_3 = L_19;
		GameObject_t1756533147 * L_20 = V_0;
		Rigidbody2D_t502193897 * L_21 = GameObject_GetComponent_TisRigidbody2D_t502193897_m812242143(L_20, /*hidden argument*/GameObject_GetComponent_TisRigidbody2D_t502193897_m812242143_MethodInfo_var);
		Vector3_t2243707580  L_22 = V_3;
		float L_23 = __this->get_speed_3();
		Vector3_t2243707580  L_24 = Vector3_op_Multiply_m1351554733(NULL /*static, unused*/, L_22, L_23, /*hidden argument*/NULL);
		Vector2_t2243707579  L_25 = Vector2_op_Implicit_m1064335535(NULL /*static, unused*/, L_24, /*hidden argument*/NULL);
		Rigidbody2D_set_velocity_m3592751374(L_21, L_25, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(SoundManager_t654432262_il2cpp_TypeInfo_var);
		SoundManager_t654432262 * L_26 = ((SoundManager_t654432262_StaticFields*)SoundManager_t654432262_il2cpp_TypeInfo_var->static_fields)->get_smInstance_2();
		AudioClip_t1932558630 * L_27 = __this->get_projectileSound_5();
		SoundManager_Play_m305226100(L_26, L_27, /*hidden argument*/NULL);
		GameObject_t1756533147 * L_28 = V_0;
		Object_Destroy_m4279412553(NULL /*static, unused*/, L_28, (1.0f), /*hidden argument*/NULL);
	}

IL_00ab:
	{
		return;
	}
}
// System.Void Projectile::OnCollisionEnter(UnityEngine.Collision)
extern Il2CppClass* Object_t1021602117_il2cpp_TypeInfo_var;
extern const uint32_t Projectile_OnCollisionEnter_m337584604_MetadataUsageId;
extern "C"  void Projectile_OnCollisionEnter_m337584604 (Projectile_t4036506763 * __this, Collision_t2876846408 * ___colObject0, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Projectile_OnCollisionEnter_m337584604_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		GameObject_t1756533147 * L_0 = Component_get_gameObject_m3105766835(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t1021602117_il2cpp_TypeInfo_var);
		Object_Destroy_m4145850038(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ProjectileDestroyOnHit::.ctor()
extern "C"  void ProjectileDestroyOnHit__ctor_m152142694 (ProjectileDestroyOnHit_t3548522401 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2464341955(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ProjectileDestroyOnHit::Start()
extern "C"  void ProjectileDestroyOnHit_Start_m2208255214 (ProjectileDestroyOnHit_t3548522401 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void ProjectileDestroyOnHit::Update()
extern "C"  void ProjectileDestroyOnHit_Update_m3759017381 (ProjectileDestroyOnHit_t3548522401 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void ProjectileDestroyOnHit::OnCollisionEnter(UnityEngine.Collision)
extern Il2CppClass* Debug_t1368543263_il2cpp_TypeInfo_var;
extern Il2CppClass* Object_t1021602117_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral298284840;
extern const uint32_t ProjectileDestroyOnHit_OnCollisionEnter_m4144135220_MetadataUsageId;
extern "C"  void ProjectileDestroyOnHit_OnCollisionEnter_m4144135220 (ProjectileDestroyOnHit_t3548522401 * __this, Collision_t2876846408 * ___colObject0, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ProjectileDestroyOnHit_OnCollisionEnter_m4144135220_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t1368543263_il2cpp_TypeInfo_var);
		Debug_Log_m920475918(NULL /*static, unused*/, _stringLiteral298284840, /*hidden argument*/NULL);
		Collision_t2876846408 * L_0 = ___colObject0;
		GameObject_t1756533147 * L_1 = Collision_get_gameObject_m1370363400(L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t1021602117_il2cpp_TypeInfo_var);
		Object_Destroy_m4145850038(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ScoreManager::.ctor()
extern "C"  void ScoreManager__ctor_m1636387560 (ScoreManager_t3573108141 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2464341955(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ScoreManager::Start()
extern Il2CppClass* ScoreManager_t3573108141_il2cpp_TypeInfo_var;
extern const MethodInfo* Component_GetComponent_TisText_t356221433_m1342661039_MethodInfo_var;
extern const uint32_t ScoreManager_Start_m1676398040_MetadataUsageId;
extern "C"  void ScoreManager_Start_m1676398040 (ScoreManager_t3573108141 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ScoreManager_Start_m1676398040_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		((ScoreManager_t3573108141_StaticFields*)ScoreManager_t3573108141_il2cpp_TypeInfo_var->static_fields)->set_score_2(0);
		Text_t356221433 * L_0 = Component_GetComponent_TisText_t356221433_m1342661039(__this, /*hidden argument*/Component_GetComponent_TisText_t356221433_m1342661039_MethodInfo_var);
		__this->set_text_3(L_0);
		return;
	}
}
// System.Void ScoreManager::Update()
extern Il2CppClass* String_t_il2cpp_TypeInfo_var;
extern Il2CppClass* ScoreManager_t3573108141_il2cpp_TypeInfo_var;
extern Il2CppClass* Int32_t2071877448_il2cpp_TypeInfo_var;
extern const uint32_t ScoreManager_Update_m1476368025_MetadataUsageId;
extern "C"  void ScoreManager_Update_m1476368025 (ScoreManager_t3573108141 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ScoreManager_Update_m1476368025_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Text_t356221433 * L_0 = __this->get_text_3();
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_1 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->get_Empty_2();
		int32_t L_2 = ((ScoreManager_t3573108141_StaticFields*)ScoreManager_t3573108141_il2cpp_TypeInfo_var->static_fields)->get_score_2();
		int32_t L_3 = L_2;
		Il2CppObject * L_4 = Box(Int32_t2071877448_il2cpp_TypeInfo_var, &L_3);
		String_t* L_5 = String_Concat_m56707527(NULL /*static, unused*/, L_1, L_4, /*hidden argument*/NULL);
		VirtActionInvoker1< String_t* >::Invoke(72 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, L_5);
		return;
	}
}
// System.Void ScoreManager::IncreaseScore()
extern Il2CppClass* ScoreManager_t3573108141_il2cpp_TypeInfo_var;
extern const uint32_t ScoreManager_IncreaseScore_m619672742_MetadataUsageId;
extern "C"  void ScoreManager_IncreaseScore_m619672742 (ScoreManager_t3573108141 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ScoreManager_IncreaseScore_m619672742_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ((ScoreManager_t3573108141_StaticFields*)ScoreManager_t3573108141_il2cpp_TypeInfo_var->static_fields)->get_score_2();
		((ScoreManager_t3573108141_StaticFields*)ScoreManager_t3573108141_il2cpp_TypeInfo_var->static_fields)->set_score_2(((int32_t)((int32_t)L_0+(int32_t)1)));
		return;
	}
}
// System.Void SoundManager::.ctor()
extern "C"  void SoundManager__ctor_m3417712111 (SoundManager_t654432262 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2464341955(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SoundManager::Awake()
extern Il2CppClass* SoundManager_t654432262_il2cpp_TypeInfo_var;
extern Il2CppClass* Object_t1021602117_il2cpp_TypeInfo_var;
extern const uint32_t SoundManager_Awake_m1006343474_MetadataUsageId;
extern "C"  void SoundManager_Awake_m1006343474 (SoundManager_t654432262 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SoundManager_Awake_m1006343474_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(SoundManager_t654432262_il2cpp_TypeInfo_var);
		SoundManager_t654432262 * L_0 = ((SoundManager_t654432262_StaticFields*)SoundManager_t654432262_il2cpp_TypeInfo_var->static_fields)->get_smInstance_2();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t1021602117_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Equality_m3764089466(NULL /*static, unused*/, L_0, (Object_t1021602117 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001b;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(SoundManager_t654432262_il2cpp_TypeInfo_var);
		((SoundManager_t654432262_StaticFields*)SoundManager_t654432262_il2cpp_TypeInfo_var->static_fields)->set_smInstance_2(__this);
		goto IL_0036;
	}

IL_001b:
	{
		IL2CPP_RUNTIME_CLASS_INIT(SoundManager_t654432262_il2cpp_TypeInfo_var);
		SoundManager_t654432262 * L_2 = ((SoundManager_t654432262_StaticFields*)SoundManager_t654432262_il2cpp_TypeInfo_var->static_fields)->get_smInstance_2();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t1021602117_il2cpp_TypeInfo_var);
		bool L_3 = Object_op_Inequality_m2402264703(NULL /*static, unused*/, L_2, __this, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0036;
		}
	}
	{
		GameObject_t1756533147 * L_4 = Component_get_gameObject_m3105766835(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t1021602117_il2cpp_TypeInfo_var);
		Object_Destroy_m4145850038(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
	}

IL_0036:
	{
		GameObject_t1756533147 * L_5 = Component_get_gameObject_m3105766835(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t1021602117_il2cpp_TypeInfo_var);
		Object_DontDestroyOnLoad_m2330762974(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SoundManager::Play(UnityEngine.AudioClip)
extern "C"  void SoundManager_Play_m305226100 (SoundManager_t654432262 * __this, AudioClip_t1932558630 * ___clip0, const MethodInfo* method)
{
	{
		AudioSource_t1135106623 * L_0 = __this->get_fxSource_3();
		AudioClip_t1932558630 * L_1 = ___clip0;
		AudioSource_set_clip_m738814682(L_0, L_1, /*hidden argument*/NULL);
		AudioSource_t1135106623 * L_2 = __this->get_fxSource_3();
		AudioSource_Play_m353744792(L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SoundManager::Update()
extern Il2CppClass* Input_t1785128008_il2cpp_TypeInfo_var;
extern const uint32_t SoundManager_Update_m1087474672_MetadataUsageId;
extern "C"  void SoundManager_Update_m1087474672 (SoundManager_t654432262 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SoundManager_Update_m1087474672_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1785128008_il2cpp_TypeInfo_var);
		bool L_0 = Input_GetKey_m3849524999(NULL /*static, unused*/, ((int32_t)109), /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0041;
		}
	}
	{
		bool L_1 = __this->get_isPlaying_5();
		__this->set_isPlaying_5((bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0));
		bool L_2 = __this->get_isPlaying_5();
		if (!L_2)
		{
			goto IL_0036;
		}
	}
	{
		AudioSource_t1135106623 * L_3 = __this->get_musicSource_4();
		AudioSource_Stop_m3452679614(L_3, /*hidden argument*/NULL);
		goto IL_0041;
	}

IL_0036:
	{
		AudioSource_t1135106623 * L_4 = __this->get_musicSource_4();
		AudioSource_Play_m353744792(L_4, /*hidden argument*/NULL);
	}

IL_0041:
	{
		return;
	}
}
// System.Void SoundManager::.cctor()
extern "C"  void SoundManager__cctor_m1047370624 (Il2CppObject * __this /* static, unused */, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void UIManager::.ctor()
extern "C"  void UIManager__ctor_m896165536 (UIManager_t2519183485 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2464341955(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UIManager::Start()
extern Il2CppClass* Object_t1021602117_il2cpp_TypeInfo_var;
extern Il2CppClass* UIManager_t2519183485_il2cpp_TypeInfo_var;
extern const MethodInfo* Object_FindObjectOfType_TisAISpawner_t2653711002_m2528198329_MethodInfo_var;
extern const MethodInfo* Component_GetComponent_TisText_t356221433_m1342661039_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral2429651463;
extern const uint32_t UIManager_Start_m1848595224_MetadataUsageId;
extern "C"  void UIManager_Start_m1848595224 (UIManager_t2519183485 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UIManager_Start_m1848595224_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Object_t1021602117_il2cpp_TypeInfo_var);
		AISpawner_t2653711002 * L_0 = Object_FindObjectOfType_TisAISpawner_t2653711002_m2528198329(NULL /*static, unused*/, /*hidden argument*/Object_FindObjectOfType_TisAISpawner_t2653711002_m2528198329_MethodInfo_var);
		__this->set_aiSpawner_3(L_0);
		Time_set_timeScale_m2194722837(NULL /*static, unused*/, (1.0f), /*hidden argument*/NULL);
		GameObjectU5BU5D_t3057952154* L_1 = GameObject_FindGameObjectsWithTag_m2154478296(NULL /*static, unused*/, _stringLiteral2429651463, /*hidden argument*/NULL);
		__this->set_pauseObjectArr_7(L_1);
		UIManager_HidePausedScreen_m287963020(__this, /*hidden argument*/NULL);
		Text_t356221433 * L_2 = Component_GetComponent_TisText_t356221433_m1342661039(__this, /*hidden argument*/Component_GetComponent_TisText_t356221433_m1342661039_MethodInfo_var);
		__this->set_text_5(L_2);
		((UIManager_t2519183485_StaticFields*)UIManager_t2519183485_il2cpp_TypeInfo_var->static_fields)->set_lives_2(3);
		__this->set_score_4(0);
		return;
	}
}
// System.Void UIManager::Update()
extern Il2CppClass* String_t_il2cpp_TypeInfo_var;
extern Il2CppClass* UIManager_t2519183485_il2cpp_TypeInfo_var;
extern Il2CppClass* Int32_t2071877448_il2cpp_TypeInfo_var;
extern Il2CppClass* Input_t1785128008_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral1884423134;
extern const uint32_t UIManager_Update_m2888972381_MetadataUsageId;
extern "C"  void UIManager_Update_m2888972381 (UIManager_t2519183485 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UIManager_Update_m2888972381_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Text_t356221433 * L_0 = __this->get_text_5();
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_1 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->get_Empty_2();
		int32_t L_2 = ((UIManager_t2519183485_StaticFields*)UIManager_t2519183485_il2cpp_TypeInfo_var->static_fields)->get_lives_2();
		int32_t L_3 = L_2;
		Il2CppObject * L_4 = Box(Int32_t2071877448_il2cpp_TypeInfo_var, &L_3);
		String_t* L_5 = String_Concat_m56707527(NULL /*static, unused*/, L_1, L_4, /*hidden argument*/NULL);
		VirtActionInvoker1< String_t* >::Invoke(72 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, L_5);
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1785128008_il2cpp_TypeInfo_var);
		bool L_6 = Input_GetKeyDown_m1771960377(NULL /*static, unused*/, ((int32_t)112), /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_006e;
		}
	}
	{
		float L_7 = Time_get_timeScale_m3151482970(NULL /*static, unused*/, /*hidden argument*/NULL);
		if ((!(((float)L_7) == ((float)(0.0f)))))
		{
			goto IL_004f;
		}
	}
	{
		Time_set_timeScale_m2194722837(NULL /*static, unused*/, (1.0f), /*hidden argument*/NULL);
		UIManager_HidePausedScreen_m287963020(__this, /*hidden argument*/NULL);
		goto IL_006e;
	}

IL_004f:
	{
		float L_8 = Time_get_timeScale_m3151482970(NULL /*static, unused*/, /*hidden argument*/NULL);
		if ((!(((float)L_8) == ((float)(1.0f)))))
		{
			goto IL_006e;
		}
	}
	{
		Time_set_timeScale_m2194722837(NULL /*static, unused*/, (0.0f), /*hidden argument*/NULL);
		UIManager_ShowPausedScreen_m4150519529(__this, /*hidden argument*/NULL);
	}

IL_006e:
	{
		int32_t L_9 = ((UIManager_t2519183485_StaticFields*)UIManager_t2519183485_il2cpp_TypeInfo_var->static_fields)->get_lives_2();
		if ((((int32_t)L_9) >= ((int32_t)0)))
		{
			goto IL_008f;
		}
	}
	{
		Time_set_timeScale_m2194722837(NULL /*static, unused*/, (1.0f), /*hidden argument*/NULL);
		SceneManager_LoadSceneAsync_m2648120039(NULL /*static, unused*/, _stringLiteral1884423134, 0, /*hidden argument*/NULL);
	}

IL_008f:
	{
		return;
	}
}
// System.Void UIManager::UpdateLives(System.Int32)
extern Il2CppClass* UIManager_t2519183485_il2cpp_TypeInfo_var;
extern const uint32_t UIManager_UpdateLives_m4288701093_MetadataUsageId;
extern "C"  void UIManager_UpdateLives_m4288701093 (UIManager_t2519183485 * __this, int32_t ___changeToLives0, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UIManager_UpdateLives_m4288701093_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ((UIManager_t2519183485_StaticFields*)UIManager_t2519183485_il2cpp_TypeInfo_var->static_fields)->get_lives_2();
		int32_t L_1 = ___changeToLives0;
		((UIManager_t2519183485_StaticFields*)UIManager_t2519183485_il2cpp_TypeInfo_var->static_fields)->set_lives_2(((int32_t)((int32_t)L_0+(int32_t)L_1)));
		return;
	}
}
// System.Void UIManager::Reset()
extern Il2CppClass* UIManager_t2519183485_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral3538073363;
extern const uint32_t UIManager_Reset_m2404565437_MetadataUsageId;
extern "C"  void UIManager_Reset_m2404565437 (UIManager_t2519183485 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UIManager_Reset_m2404565437_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		SceneManager_LoadSceneAsync_m2648120039(NULL /*static, unused*/, _stringLiteral3538073363, 0, /*hidden argument*/NULL);
		AISpawner_t2653711002 * L_0 = __this->get_aiSpawner_3();
		AISpawner_ResetEnemyCount_m3972094831(L_0, /*hidden argument*/NULL);
		((UIManager_t2519183485_StaticFields*)UIManager_t2519183485_il2cpp_TypeInfo_var->static_fields)->set_lives_2(3);
		return;
	}
}
// System.Void UIManager::PauseController()
extern "C"  void UIManager_PauseController_m2593488226 (UIManager_t2519183485 * __this, const MethodInfo* method)
{
	{
		float L_0 = Time_get_timeScale_m3151482970(NULL /*static, unused*/, /*hidden argument*/NULL);
		if ((!(((float)L_0) == ((float)(0.0f)))))
		{
			goto IL_0024;
		}
	}
	{
		Time_set_timeScale_m2194722837(NULL /*static, unused*/, (1.0f), /*hidden argument*/NULL);
		UIManager_HidePausedScreen_m287963020(__this, /*hidden argument*/NULL);
		goto IL_0043;
	}

IL_0024:
	{
		float L_1 = Time_get_timeScale_m3151482970(NULL /*static, unused*/, /*hidden argument*/NULL);
		if ((!(((float)L_1) == ((float)(1.0f)))))
		{
			goto IL_0043;
		}
	}
	{
		Time_set_timeScale_m2194722837(NULL /*static, unused*/, (0.0f), /*hidden argument*/NULL);
		UIManager_ShowPausedScreen_m4150519529(__this, /*hidden argument*/NULL);
	}

IL_0043:
	{
		return;
	}
}
// System.Void UIManager::ShowPausedScreen()
extern "C"  void UIManager_ShowPausedScreen_m4150519529 (UIManager_t2519183485 * __this, const MethodInfo* method)
{
	GameObject_t1756533147 * V_0 = NULL;
	GameObjectU5BU5D_t3057952154* V_1 = NULL;
	int32_t V_2 = 0;
	{
		GameObjectU5BU5D_t3057952154* L_0 = __this->get_pauseObjectArr_7();
		V_1 = L_0;
		V_2 = 0;
		goto IL_001d;
	}

IL_000e:
	{
		GameObjectU5BU5D_t3057952154* L_1 = V_1;
		int32_t L_2 = V_2;
		int32_t L_3 = L_2;
		GameObject_t1756533147 * L_4 = (L_1)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_3));
		V_0 = L_4;
		GameObject_t1756533147 * L_5 = V_0;
		GameObject_SetActive_m2887581199(L_5, (bool)1, /*hidden argument*/NULL);
		int32_t L_6 = V_2;
		V_2 = ((int32_t)((int32_t)L_6+(int32_t)1));
	}

IL_001d:
	{
		int32_t L_7 = V_2;
		GameObjectU5BU5D_t3057952154* L_8 = V_1;
		if ((((int32_t)L_7) < ((int32_t)(((int32_t)((int32_t)(((Il2CppArray *)L_8)->max_length)))))))
		{
			goto IL_000e;
		}
	}
	{
		return;
	}
}
// System.Void UIManager::HidePausedScreen()
extern "C"  void UIManager_HidePausedScreen_m287963020 (UIManager_t2519183485 * __this, const MethodInfo* method)
{
	GameObject_t1756533147 * V_0 = NULL;
	GameObjectU5BU5D_t3057952154* V_1 = NULL;
	int32_t V_2 = 0;
	{
		GameObjectU5BU5D_t3057952154* L_0 = __this->get_pauseObjectArr_7();
		V_1 = L_0;
		V_2 = 0;
		goto IL_001d;
	}

IL_000e:
	{
		GameObjectU5BU5D_t3057952154* L_1 = V_1;
		int32_t L_2 = V_2;
		int32_t L_3 = L_2;
		GameObject_t1756533147 * L_4 = (L_1)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_3));
		V_0 = L_4;
		GameObject_t1756533147 * L_5 = V_0;
		GameObject_SetActive_m2887581199(L_5, (bool)0, /*hidden argument*/NULL);
		int32_t L_6 = V_2;
		V_2 = ((int32_t)((int32_t)L_6+(int32_t)1));
	}

IL_001d:
	{
		int32_t L_7 = V_2;
		GameObjectU5BU5D_t3057952154* L_8 = V_1;
		if ((((int32_t)L_7) < ((int32_t)(((int32_t)((int32_t)(((Il2CppArray *)L_8)->max_length)))))))
		{
			goto IL_000e;
		}
	}
	{
		return;
	}
}
// System.Void UIManager::LoadLevel(System.String)
extern "C"  void UIManager_LoadLevel_m2444576344 (UIManager_t2519183485 * __this, String_t* ___level0, const MethodInfo* method)
{
	{
		String_t* L_0 = ___level0;
		SceneManager_LoadSceneAsync_m2648120039(NULL /*static, unused*/, L_0, 0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UIManager::IncreaseScore()
extern "C"  void UIManager_IncreaseScore_m297310422 (UIManager_t2519183485 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = __this->get_score_4();
		__this->set_score_4(((int32_t)((int32_t)L_0+(int32_t)1)));
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
