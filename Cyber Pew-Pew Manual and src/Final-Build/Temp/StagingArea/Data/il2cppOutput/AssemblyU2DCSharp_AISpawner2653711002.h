#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject
struct GameObject_t1756533147;
// UnityEngine.Transform[]
struct TransformU5BU5D_t3764228911;
// UnityEngine.Transform
struct Transform_t3275118058;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// AISpawner
struct  AISpawner_t2653711002  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject AISpawner::enemyType1
	GameObject_t1756533147 * ___enemyType1_2;
	// UnityEngine.GameObject AISpawner::enemyType2
	GameObject_t1756533147 * ___enemyType2_3;
	// UnityEngine.GameObject AISpawner::enemyType3
	GameObject_t1756533147 * ___enemyType3_4;
	// System.Int32 AISpawner::totalEnemies
	int32_t ___totalEnemies_5;
	// System.Boolean AISpawner::spawn
	bool ___spawn_6;
	// UnityEngine.Transform[] AISpawner::spawnPointsArr
	TransformU5BU5D_t3764228911* ___spawnPointsArr_7;
	// System.Single AISpawner::spawnTime
	float ___spawnTime_8;
	// UnityEngine.Transform AISpawner::currentTransform
	Transform_t3275118058 * ___currentTransform_10;

public:
	inline static int32_t get_offset_of_enemyType1_2() { return static_cast<int32_t>(offsetof(AISpawner_t2653711002, ___enemyType1_2)); }
	inline GameObject_t1756533147 * get_enemyType1_2() const { return ___enemyType1_2; }
	inline GameObject_t1756533147 ** get_address_of_enemyType1_2() { return &___enemyType1_2; }
	inline void set_enemyType1_2(GameObject_t1756533147 * value)
	{
		___enemyType1_2 = value;
		Il2CppCodeGenWriteBarrier(&___enemyType1_2, value);
	}

	inline static int32_t get_offset_of_enemyType2_3() { return static_cast<int32_t>(offsetof(AISpawner_t2653711002, ___enemyType2_3)); }
	inline GameObject_t1756533147 * get_enemyType2_3() const { return ___enemyType2_3; }
	inline GameObject_t1756533147 ** get_address_of_enemyType2_3() { return &___enemyType2_3; }
	inline void set_enemyType2_3(GameObject_t1756533147 * value)
	{
		___enemyType2_3 = value;
		Il2CppCodeGenWriteBarrier(&___enemyType2_3, value);
	}

	inline static int32_t get_offset_of_enemyType3_4() { return static_cast<int32_t>(offsetof(AISpawner_t2653711002, ___enemyType3_4)); }
	inline GameObject_t1756533147 * get_enemyType3_4() const { return ___enemyType3_4; }
	inline GameObject_t1756533147 ** get_address_of_enemyType3_4() { return &___enemyType3_4; }
	inline void set_enemyType3_4(GameObject_t1756533147 * value)
	{
		___enemyType3_4 = value;
		Il2CppCodeGenWriteBarrier(&___enemyType3_4, value);
	}

	inline static int32_t get_offset_of_totalEnemies_5() { return static_cast<int32_t>(offsetof(AISpawner_t2653711002, ___totalEnemies_5)); }
	inline int32_t get_totalEnemies_5() const { return ___totalEnemies_5; }
	inline int32_t* get_address_of_totalEnemies_5() { return &___totalEnemies_5; }
	inline void set_totalEnemies_5(int32_t value)
	{
		___totalEnemies_5 = value;
	}

	inline static int32_t get_offset_of_spawn_6() { return static_cast<int32_t>(offsetof(AISpawner_t2653711002, ___spawn_6)); }
	inline bool get_spawn_6() const { return ___spawn_6; }
	inline bool* get_address_of_spawn_6() { return &___spawn_6; }
	inline void set_spawn_6(bool value)
	{
		___spawn_6 = value;
	}

	inline static int32_t get_offset_of_spawnPointsArr_7() { return static_cast<int32_t>(offsetof(AISpawner_t2653711002, ___spawnPointsArr_7)); }
	inline TransformU5BU5D_t3764228911* get_spawnPointsArr_7() const { return ___spawnPointsArr_7; }
	inline TransformU5BU5D_t3764228911** get_address_of_spawnPointsArr_7() { return &___spawnPointsArr_7; }
	inline void set_spawnPointsArr_7(TransformU5BU5D_t3764228911* value)
	{
		___spawnPointsArr_7 = value;
		Il2CppCodeGenWriteBarrier(&___spawnPointsArr_7, value);
	}

	inline static int32_t get_offset_of_spawnTime_8() { return static_cast<int32_t>(offsetof(AISpawner_t2653711002, ___spawnTime_8)); }
	inline float get_spawnTime_8() const { return ___spawnTime_8; }
	inline float* get_address_of_spawnTime_8() { return &___spawnTime_8; }
	inline void set_spawnTime_8(float value)
	{
		___spawnTime_8 = value;
	}

	inline static int32_t get_offset_of_currentTransform_10() { return static_cast<int32_t>(offsetof(AISpawner_t2653711002, ___currentTransform_10)); }
	inline Transform_t3275118058 * get_currentTransform_10() const { return ___currentTransform_10; }
	inline Transform_t3275118058 ** get_address_of_currentTransform_10() { return &___currentTransform_10; }
	inline void set_currentTransform_10(Transform_t3275118058 * value)
	{
		___currentTransform_10 = value;
		Il2CppCodeGenWriteBarrier(&___currentTransform_10, value);
	}
};

struct AISpawner_t2653711002_StaticFields
{
public:
	// System.Int32 AISpawner::numEnemies
	int32_t ___numEnemies_9;

public:
	inline static int32_t get_offset_of_numEnemies_9() { return static_cast<int32_t>(offsetof(AISpawner_t2653711002_StaticFields, ___numEnemies_9)); }
	inline int32_t get_numEnemies_9() const { return ___numEnemies_9; }
	inline int32_t* get_address_of_numEnemies_9() { return &___numEnemies_9; }
	inline void set_numEnemies_9(int32_t value)
	{
		___numEnemies_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
