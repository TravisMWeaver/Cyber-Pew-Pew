#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// LevelManager
struct LevelManager_t3355282079;
// UIManager
struct UIManager_t2519183485;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// KillBox
struct  KillBox_t2917637805  : public MonoBehaviour_t1158329972
{
public:
	// LevelManager KillBox::levelManager
	LevelManager_t3355282079 * ___levelManager_2;
	// UIManager KillBox::uiManager
	UIManager_t2519183485 * ___uiManager_3;
	// System.Int32 KillBox::livesLost
	int32_t ___livesLost_4;

public:
	inline static int32_t get_offset_of_levelManager_2() { return static_cast<int32_t>(offsetof(KillBox_t2917637805, ___levelManager_2)); }
	inline LevelManager_t3355282079 * get_levelManager_2() const { return ___levelManager_2; }
	inline LevelManager_t3355282079 ** get_address_of_levelManager_2() { return &___levelManager_2; }
	inline void set_levelManager_2(LevelManager_t3355282079 * value)
	{
		___levelManager_2 = value;
		Il2CppCodeGenWriteBarrier(&___levelManager_2, value);
	}

	inline static int32_t get_offset_of_uiManager_3() { return static_cast<int32_t>(offsetof(KillBox_t2917637805, ___uiManager_3)); }
	inline UIManager_t2519183485 * get_uiManager_3() const { return ___uiManager_3; }
	inline UIManager_t2519183485 ** get_address_of_uiManager_3() { return &___uiManager_3; }
	inline void set_uiManager_3(UIManager_t2519183485 * value)
	{
		___uiManager_3 = value;
		Il2CppCodeGenWriteBarrier(&___uiManager_3, value);
	}

	inline static int32_t get_offset_of_livesLost_4() { return static_cast<int32_t>(offsetof(KillBox_t2917637805, ___livesLost_4)); }
	inline int32_t get_livesLost_4() const { return ___livesLost_4; }
	inline int32_t* get_address_of_livesLost_4() { return &___livesLost_4; }
	inline void set_livesLost_4(int32_t value)
	{
		___livesLost_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
