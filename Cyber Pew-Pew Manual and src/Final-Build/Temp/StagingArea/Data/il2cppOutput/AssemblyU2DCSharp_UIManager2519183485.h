#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// AISpawner
struct AISpawner_t2653711002;
// UnityEngine.UI.Text
struct Text_t356221433;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t3057952154;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UIManager
struct  UIManager_t2519183485  : public MonoBehaviour_t1158329972
{
public:
	// AISpawner UIManager::aiSpawner
	AISpawner_t2653711002 * ___aiSpawner_3;
	// System.Int32 UIManager::score
	int32_t ___score_4;
	// UnityEngine.UI.Text UIManager::text
	Text_t356221433 * ___text_5;
	// UnityEngine.UI.Text UIManager::tScore
	Text_t356221433 * ___tScore_6;
	// UnityEngine.GameObject[] UIManager::pauseObjectArr
	GameObjectU5BU5D_t3057952154* ___pauseObjectArr_7;

public:
	inline static int32_t get_offset_of_aiSpawner_3() { return static_cast<int32_t>(offsetof(UIManager_t2519183485, ___aiSpawner_3)); }
	inline AISpawner_t2653711002 * get_aiSpawner_3() const { return ___aiSpawner_3; }
	inline AISpawner_t2653711002 ** get_address_of_aiSpawner_3() { return &___aiSpawner_3; }
	inline void set_aiSpawner_3(AISpawner_t2653711002 * value)
	{
		___aiSpawner_3 = value;
		Il2CppCodeGenWriteBarrier(&___aiSpawner_3, value);
	}

	inline static int32_t get_offset_of_score_4() { return static_cast<int32_t>(offsetof(UIManager_t2519183485, ___score_4)); }
	inline int32_t get_score_4() const { return ___score_4; }
	inline int32_t* get_address_of_score_4() { return &___score_4; }
	inline void set_score_4(int32_t value)
	{
		___score_4 = value;
	}

	inline static int32_t get_offset_of_text_5() { return static_cast<int32_t>(offsetof(UIManager_t2519183485, ___text_5)); }
	inline Text_t356221433 * get_text_5() const { return ___text_5; }
	inline Text_t356221433 ** get_address_of_text_5() { return &___text_5; }
	inline void set_text_5(Text_t356221433 * value)
	{
		___text_5 = value;
		Il2CppCodeGenWriteBarrier(&___text_5, value);
	}

	inline static int32_t get_offset_of_tScore_6() { return static_cast<int32_t>(offsetof(UIManager_t2519183485, ___tScore_6)); }
	inline Text_t356221433 * get_tScore_6() const { return ___tScore_6; }
	inline Text_t356221433 ** get_address_of_tScore_6() { return &___tScore_6; }
	inline void set_tScore_6(Text_t356221433 * value)
	{
		___tScore_6 = value;
		Il2CppCodeGenWriteBarrier(&___tScore_6, value);
	}

	inline static int32_t get_offset_of_pauseObjectArr_7() { return static_cast<int32_t>(offsetof(UIManager_t2519183485, ___pauseObjectArr_7)); }
	inline GameObjectU5BU5D_t3057952154* get_pauseObjectArr_7() const { return ___pauseObjectArr_7; }
	inline GameObjectU5BU5D_t3057952154** get_address_of_pauseObjectArr_7() { return &___pauseObjectArr_7; }
	inline void set_pauseObjectArr_7(GameObjectU5BU5D_t3057952154* value)
	{
		___pauseObjectArr_7 = value;
		Il2CppCodeGenWriteBarrier(&___pauseObjectArr_7, value);
	}
};

struct UIManager_t2519183485_StaticFields
{
public:
	// System.Int32 UIManager::lives
	int32_t ___lives_2;

public:
	inline static int32_t get_offset_of_lives_2() { return static_cast<int32_t>(offsetof(UIManager_t2519183485_StaticFields, ___lives_2)); }
	inline int32_t get_lives_2() const { return ___lives_2; }
	inline int32_t* get_address_of_lives_2() { return &___lives_2; }
	inline void set_lives_2(int32_t value)
	{
		___lives_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
