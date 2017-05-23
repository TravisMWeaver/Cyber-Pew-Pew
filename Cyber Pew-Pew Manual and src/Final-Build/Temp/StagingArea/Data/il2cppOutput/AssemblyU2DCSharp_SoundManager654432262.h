#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// SoundManager
struct SoundManager_t654432262;
// UnityEngine.AudioSource
struct AudioSource_t1135106623;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SoundManager
struct  SoundManager_t654432262  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.AudioSource SoundManager::fxSource
	AudioSource_t1135106623 * ___fxSource_3;
	// UnityEngine.AudioSource SoundManager::musicSource
	AudioSource_t1135106623 * ___musicSource_4;
	// System.Boolean SoundManager::isPlaying
	bool ___isPlaying_5;

public:
	inline static int32_t get_offset_of_fxSource_3() { return static_cast<int32_t>(offsetof(SoundManager_t654432262, ___fxSource_3)); }
	inline AudioSource_t1135106623 * get_fxSource_3() const { return ___fxSource_3; }
	inline AudioSource_t1135106623 ** get_address_of_fxSource_3() { return &___fxSource_3; }
	inline void set_fxSource_3(AudioSource_t1135106623 * value)
	{
		___fxSource_3 = value;
		Il2CppCodeGenWriteBarrier(&___fxSource_3, value);
	}

	inline static int32_t get_offset_of_musicSource_4() { return static_cast<int32_t>(offsetof(SoundManager_t654432262, ___musicSource_4)); }
	inline AudioSource_t1135106623 * get_musicSource_4() const { return ___musicSource_4; }
	inline AudioSource_t1135106623 ** get_address_of_musicSource_4() { return &___musicSource_4; }
	inline void set_musicSource_4(AudioSource_t1135106623 * value)
	{
		___musicSource_4 = value;
		Il2CppCodeGenWriteBarrier(&___musicSource_4, value);
	}

	inline static int32_t get_offset_of_isPlaying_5() { return static_cast<int32_t>(offsetof(SoundManager_t654432262, ___isPlaying_5)); }
	inline bool get_isPlaying_5() const { return ___isPlaying_5; }
	inline bool* get_address_of_isPlaying_5() { return &___isPlaying_5; }
	inline void set_isPlaying_5(bool value)
	{
		___isPlaying_5 = value;
	}
};

struct SoundManager_t654432262_StaticFields
{
public:
	// SoundManager SoundManager::smInstance
	SoundManager_t654432262 * ___smInstance_2;

public:
	inline static int32_t get_offset_of_smInstance_2() { return static_cast<int32_t>(offsetof(SoundManager_t654432262_StaticFields, ___smInstance_2)); }
	inline SoundManager_t654432262 * get_smInstance_2() const { return ___smInstance_2; }
	inline SoundManager_t654432262 ** get_address_of_smInstance_2() { return &___smInstance_2; }
	inline void set_smInstance_2(SoundManager_t654432262 * value)
	{
		___smInstance_2 = value;
		Il2CppCodeGenWriteBarrier(&___smInstance_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
