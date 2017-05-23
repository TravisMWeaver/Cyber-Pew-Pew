#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.BoxCollider2D
struct BoxCollider2D_t948534547;
// UnityEngine.Rigidbody2D
struct Rigidbody2D_t502193897;
// UnityEngine.Animator
struct Animator_t69676727;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_LayerMask3188175821.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MovementBehavior
struct  MovementBehavior_t755051133  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.LayerMask MovementBehavior::blockingLayer
	LayerMask_t3188175821  ___blockingLayer_2;
	// System.Single MovementBehavior::moveTime
	float ___moveTime_3;
	// UnityEngine.BoxCollider2D MovementBehavior::boxCollider
	BoxCollider2D_t948534547 * ___boxCollider_4;
	// UnityEngine.Rigidbody2D MovementBehavior::rigidBody2D
	Rigidbody2D_t502193897 * ___rigidBody2D_5;
	// System.Single MovementBehavior::inverseMoveTime
	float ___inverseMoveTime_6;
	// UnityEngine.Animator MovementBehavior::animator
	Animator_t69676727 * ___animator_7;

public:
	inline static int32_t get_offset_of_blockingLayer_2() { return static_cast<int32_t>(offsetof(MovementBehavior_t755051133, ___blockingLayer_2)); }
	inline LayerMask_t3188175821  get_blockingLayer_2() const { return ___blockingLayer_2; }
	inline LayerMask_t3188175821 * get_address_of_blockingLayer_2() { return &___blockingLayer_2; }
	inline void set_blockingLayer_2(LayerMask_t3188175821  value)
	{
		___blockingLayer_2 = value;
	}

	inline static int32_t get_offset_of_moveTime_3() { return static_cast<int32_t>(offsetof(MovementBehavior_t755051133, ___moveTime_3)); }
	inline float get_moveTime_3() const { return ___moveTime_3; }
	inline float* get_address_of_moveTime_3() { return &___moveTime_3; }
	inline void set_moveTime_3(float value)
	{
		___moveTime_3 = value;
	}

	inline static int32_t get_offset_of_boxCollider_4() { return static_cast<int32_t>(offsetof(MovementBehavior_t755051133, ___boxCollider_4)); }
	inline BoxCollider2D_t948534547 * get_boxCollider_4() const { return ___boxCollider_4; }
	inline BoxCollider2D_t948534547 ** get_address_of_boxCollider_4() { return &___boxCollider_4; }
	inline void set_boxCollider_4(BoxCollider2D_t948534547 * value)
	{
		___boxCollider_4 = value;
		Il2CppCodeGenWriteBarrier(&___boxCollider_4, value);
	}

	inline static int32_t get_offset_of_rigidBody2D_5() { return static_cast<int32_t>(offsetof(MovementBehavior_t755051133, ___rigidBody2D_5)); }
	inline Rigidbody2D_t502193897 * get_rigidBody2D_5() const { return ___rigidBody2D_5; }
	inline Rigidbody2D_t502193897 ** get_address_of_rigidBody2D_5() { return &___rigidBody2D_5; }
	inline void set_rigidBody2D_5(Rigidbody2D_t502193897 * value)
	{
		___rigidBody2D_5 = value;
		Il2CppCodeGenWriteBarrier(&___rigidBody2D_5, value);
	}

	inline static int32_t get_offset_of_inverseMoveTime_6() { return static_cast<int32_t>(offsetof(MovementBehavior_t755051133, ___inverseMoveTime_6)); }
	inline float get_inverseMoveTime_6() const { return ___inverseMoveTime_6; }
	inline float* get_address_of_inverseMoveTime_6() { return &___inverseMoveTime_6; }
	inline void set_inverseMoveTime_6(float value)
	{
		___inverseMoveTime_6 = value;
	}

	inline static int32_t get_offset_of_animator_7() { return static_cast<int32_t>(offsetof(MovementBehavior_t755051133, ___animator_7)); }
	inline Animator_t69676727 * get_animator_7() const { return ___animator_7; }
	inline Animator_t69676727 ** get_address_of_animator_7() { return &___animator_7; }
	inline void set_animator_7(Animator_t69676727 * value)
	{
		___animator_7 = value;
		Il2CppCodeGenWriteBarrier(&___animator_7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
