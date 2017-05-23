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
// UnityEngine.Camera
struct Camera_t189460977;
// UnityEngine.AudioClip
struct AudioClip_t1932558630;
// UnityEngine.Transform
struct Transform_t3275118058;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Projectile
struct  Projectile_t4036506763  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject Projectile::projectile
	GameObject_t1756533147 * ___projectile_2;
	// System.Single Projectile::speed
	float ___speed_3;
	// UnityEngine.Camera Projectile::camera
	Camera_t189460977 * ___camera_4;
	// UnityEngine.AudioClip Projectile::projectileSound
	AudioClip_t1932558630 * ___projectileSound_5;
	// UnityEngine.Transform Projectile::projectileObject
	Transform_t3275118058 * ___projectileObject_6;
	// UnityEngine.Vector2 Projectile::lookDirection
	Vector2_t2243707579  ___lookDirection_7;

public:
	inline static int32_t get_offset_of_projectile_2() { return static_cast<int32_t>(offsetof(Projectile_t4036506763, ___projectile_2)); }
	inline GameObject_t1756533147 * get_projectile_2() const { return ___projectile_2; }
	inline GameObject_t1756533147 ** get_address_of_projectile_2() { return &___projectile_2; }
	inline void set_projectile_2(GameObject_t1756533147 * value)
	{
		___projectile_2 = value;
		Il2CppCodeGenWriteBarrier(&___projectile_2, value);
	}

	inline static int32_t get_offset_of_speed_3() { return static_cast<int32_t>(offsetof(Projectile_t4036506763, ___speed_3)); }
	inline float get_speed_3() const { return ___speed_3; }
	inline float* get_address_of_speed_3() { return &___speed_3; }
	inline void set_speed_3(float value)
	{
		___speed_3 = value;
	}

	inline static int32_t get_offset_of_camera_4() { return static_cast<int32_t>(offsetof(Projectile_t4036506763, ___camera_4)); }
	inline Camera_t189460977 * get_camera_4() const { return ___camera_4; }
	inline Camera_t189460977 ** get_address_of_camera_4() { return &___camera_4; }
	inline void set_camera_4(Camera_t189460977 * value)
	{
		___camera_4 = value;
		Il2CppCodeGenWriteBarrier(&___camera_4, value);
	}

	inline static int32_t get_offset_of_projectileSound_5() { return static_cast<int32_t>(offsetof(Projectile_t4036506763, ___projectileSound_5)); }
	inline AudioClip_t1932558630 * get_projectileSound_5() const { return ___projectileSound_5; }
	inline AudioClip_t1932558630 ** get_address_of_projectileSound_5() { return &___projectileSound_5; }
	inline void set_projectileSound_5(AudioClip_t1932558630 * value)
	{
		___projectileSound_5 = value;
		Il2CppCodeGenWriteBarrier(&___projectileSound_5, value);
	}

	inline static int32_t get_offset_of_projectileObject_6() { return static_cast<int32_t>(offsetof(Projectile_t4036506763, ___projectileObject_6)); }
	inline Transform_t3275118058 * get_projectileObject_6() const { return ___projectileObject_6; }
	inline Transform_t3275118058 ** get_address_of_projectileObject_6() { return &___projectileObject_6; }
	inline void set_projectileObject_6(Transform_t3275118058 * value)
	{
		___projectileObject_6 = value;
		Il2CppCodeGenWriteBarrier(&___projectileObject_6, value);
	}

	inline static int32_t get_offset_of_lookDirection_7() { return static_cast<int32_t>(offsetof(Projectile_t4036506763, ___lookDirection_7)); }
	inline Vector2_t2243707579  get_lookDirection_7() const { return ___lookDirection_7; }
	inline Vector2_t2243707579 * get_address_of_lookDirection_7() { return &___lookDirection_7; }
	inline void set_lookDirection_7(Vector2_t2243707579  value)
	{
		___lookDirection_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
