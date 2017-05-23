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
// MovementBehavior
struct MovementBehavior_t755051133;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LevelManager
struct  LevelManager_t3355282079  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject LevelManager::checkpoint
	GameObject_t1756533147 * ___checkpoint_2;
	// MovementBehavior LevelManager::player
	MovementBehavior_t755051133 * ___player_3;

public:
	inline static int32_t get_offset_of_checkpoint_2() { return static_cast<int32_t>(offsetof(LevelManager_t3355282079, ___checkpoint_2)); }
	inline GameObject_t1756533147 * get_checkpoint_2() const { return ___checkpoint_2; }
	inline GameObject_t1756533147 ** get_address_of_checkpoint_2() { return &___checkpoint_2; }
	inline void set_checkpoint_2(GameObject_t1756533147 * value)
	{
		___checkpoint_2 = value;
		Il2CppCodeGenWriteBarrier(&___checkpoint_2, value);
	}

	inline static int32_t get_offset_of_player_3() { return static_cast<int32_t>(offsetof(LevelManager_t3355282079, ___player_3)); }
	inline MovementBehavior_t755051133 * get_player_3() const { return ___player_3; }
	inline MovementBehavior_t755051133 ** get_address_of_player_3() { return &___player_3; }
	inline void set_player_3(MovementBehavior_t755051133 * value)
	{
		___player_3 = value;
		Il2CppCodeGenWriteBarrier(&___player_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
