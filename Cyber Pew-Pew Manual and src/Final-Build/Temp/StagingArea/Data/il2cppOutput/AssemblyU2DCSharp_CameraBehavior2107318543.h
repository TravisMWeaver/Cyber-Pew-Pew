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

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CameraBehavior
struct  CameraBehavior_t2107318543  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Transform CameraBehavior::player
	Transform_t3275118058 * ___player_2;
	// UnityEngine.Vector3 CameraBehavior::cameraOffset
	Vector3_t2243707580  ___cameraOffset_3;

public:
	inline static int32_t get_offset_of_player_2() { return static_cast<int32_t>(offsetof(CameraBehavior_t2107318543, ___player_2)); }
	inline Transform_t3275118058 * get_player_2() const { return ___player_2; }
	inline Transform_t3275118058 ** get_address_of_player_2() { return &___player_2; }
	inline void set_player_2(Transform_t3275118058 * value)
	{
		___player_2 = value;
		Il2CppCodeGenWriteBarrier(&___player_2, value);
	}

	inline static int32_t get_offset_of_cameraOffset_3() { return static_cast<int32_t>(offsetof(CameraBehavior_t2107318543, ___cameraOffset_3)); }
	inline Vector3_t2243707580  get_cameraOffset_3() const { return ___cameraOffset_3; }
	inline Vector3_t2243707580 * get_address_of_cameraOffset_3() { return &___cameraOffset_3; }
	inline void set_cameraOffset_3(Vector3_t2243707580  value)
	{
		___cameraOffset_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
