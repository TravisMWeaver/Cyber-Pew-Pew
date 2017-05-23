#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Transform
struct Transform_t3275118058;
// AISpawner
struct AISpawner_t2653711002;
// ScoreManager
struct ScoreManager_t3573108141;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// EnemyAI
struct  EnemyAI_t2110961122  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Transform EnemyAI::target
	Transform_t3275118058 * ___target_2;
	// System.Int32 EnemyAI::velocity
	int32_t ___velocity_3;
	// System.Int32 EnemyAI::rotationSpeed
	int32_t ___rotationSpeed_4;
	// AISpawner EnemyAI::aiSpawner
	AISpawner_t2653711002 * ___aiSpawner_5;
	// ScoreManager EnemyAI::scManager
	ScoreManager_t3573108141 * ___scManager_6;
	// UnityEngine.Transform EnemyAI::currentTransform
	Transform_t3275118058 * ___currentTransform_7;

public:
	inline static int32_t get_offset_of_target_2() { return static_cast<int32_t>(offsetof(EnemyAI_t2110961122, ___target_2)); }
	inline Transform_t3275118058 * get_target_2() const { return ___target_2; }
	inline Transform_t3275118058 ** get_address_of_target_2() { return &___target_2; }
	inline void set_target_2(Transform_t3275118058 * value)
	{
		___target_2 = value;
		Il2CppCodeGenWriteBarrier(&___target_2, value);
	}

	inline static int32_t get_offset_of_velocity_3() { return static_cast<int32_t>(offsetof(EnemyAI_t2110961122, ___velocity_3)); }
	inline int32_t get_velocity_3() const { return ___velocity_3; }
	inline int32_t* get_address_of_velocity_3() { return &___velocity_3; }
	inline void set_velocity_3(int32_t value)
	{
		___velocity_3 = value;
	}

	inline static int32_t get_offset_of_rotationSpeed_4() { return static_cast<int32_t>(offsetof(EnemyAI_t2110961122, ___rotationSpeed_4)); }
	inline int32_t get_rotationSpeed_4() const { return ___rotationSpeed_4; }
	inline int32_t* get_address_of_rotationSpeed_4() { return &___rotationSpeed_4; }
	inline void set_rotationSpeed_4(int32_t value)
	{
		___rotationSpeed_4 = value;
	}

	inline static int32_t get_offset_of_aiSpawner_5() { return static_cast<int32_t>(offsetof(EnemyAI_t2110961122, ___aiSpawner_5)); }
	inline AISpawner_t2653711002 * get_aiSpawner_5() const { return ___aiSpawner_5; }
	inline AISpawner_t2653711002 ** get_address_of_aiSpawner_5() { return &___aiSpawner_5; }
	inline void set_aiSpawner_5(AISpawner_t2653711002 * value)
	{
		___aiSpawner_5 = value;
		Il2CppCodeGenWriteBarrier(&___aiSpawner_5, value);
	}

	inline static int32_t get_offset_of_scManager_6() { return static_cast<int32_t>(offsetof(EnemyAI_t2110961122, ___scManager_6)); }
	inline ScoreManager_t3573108141 * get_scManager_6() const { return ___scManager_6; }
	inline ScoreManager_t3573108141 ** get_address_of_scManager_6() { return &___scManager_6; }
	inline void set_scManager_6(ScoreManager_t3573108141 * value)
	{
		___scManager_6 = value;
		Il2CppCodeGenWriteBarrier(&___scManager_6, value);
	}

	inline static int32_t get_offset_of_currentTransform_7() { return static_cast<int32_t>(offsetof(EnemyAI_t2110961122, ___currentTransform_7)); }
	inline Transform_t3275118058 * get_currentTransform_7() const { return ___currentTransform_7; }
	inline Transform_t3275118058 ** get_address_of_currentTransform_7() { return &___currentTransform_7; }
	inline void set_currentTransform_7(Transform_t3275118058 * value)
	{
		___currentTransform_7 = value;
		Il2CppCodeGenWriteBarrier(&___currentTransform_7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
