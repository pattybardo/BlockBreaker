#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"

// Paddle
struct Paddle_t763152128;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Ball
struct  Ball_t3972794301  : public MonoBehaviour_t1158329972
{
public:
	// System.Single Ball::ballYVelocity
	float ___ballYVelocity_3;
	// Paddle Ball::paddle
	Paddle_t763152128 * ___paddle_4;
	// UnityEngine.Vector3 Ball::paddleToBallDistance
	Vector3_t2243707580  ___paddleToBallDistance_5;
	// System.Boolean Ball::gameNotStarted
	bool ___gameNotStarted_6;

public:
	inline static int32_t get_offset_of_ballYVelocity_3() { return static_cast<int32_t>(offsetof(Ball_t3972794301, ___ballYVelocity_3)); }
	inline float get_ballYVelocity_3() const { return ___ballYVelocity_3; }
	inline float* get_address_of_ballYVelocity_3() { return &___ballYVelocity_3; }
	inline void set_ballYVelocity_3(float value)
	{
		___ballYVelocity_3 = value;
	}

	inline static int32_t get_offset_of_paddle_4() { return static_cast<int32_t>(offsetof(Ball_t3972794301, ___paddle_4)); }
	inline Paddle_t763152128 * get_paddle_4() const { return ___paddle_4; }
	inline Paddle_t763152128 ** get_address_of_paddle_4() { return &___paddle_4; }
	inline void set_paddle_4(Paddle_t763152128 * value)
	{
		___paddle_4 = value;
		Il2CppCodeGenWriteBarrier(&___paddle_4, value);
	}

	inline static int32_t get_offset_of_paddleToBallDistance_5() { return static_cast<int32_t>(offsetof(Ball_t3972794301, ___paddleToBallDistance_5)); }
	inline Vector3_t2243707580  get_paddleToBallDistance_5() const { return ___paddleToBallDistance_5; }
	inline Vector3_t2243707580 * get_address_of_paddleToBallDistance_5() { return &___paddleToBallDistance_5; }
	inline void set_paddleToBallDistance_5(Vector3_t2243707580  value)
	{
		___paddleToBallDistance_5 = value;
	}

	inline static int32_t get_offset_of_gameNotStarted_6() { return static_cast<int32_t>(offsetof(Ball_t3972794301, ___gameNotStarted_6)); }
	inline bool get_gameNotStarted_6() const { return ___gameNotStarted_6; }
	inline bool* get_address_of_gameNotStarted_6() { return &___gameNotStarted_6; }
	inline void set_gameNotStarted_6(bool value)
	{
		___gameNotStarted_6 = value;
	}
};

struct Ball_t3972794301_StaticFields
{
public:
	// System.Single Ball::totalVelocity
	float ___totalVelocity_2;

public:
	inline static int32_t get_offset_of_totalVelocity_2() { return static_cast<int32_t>(offsetof(Ball_t3972794301_StaticFields, ___totalVelocity_2)); }
	inline float get_totalVelocity_2() const { return ___totalVelocity_2; }
	inline float* get_address_of_totalVelocity_2() { return &___totalVelocity_2; }
	inline void set_totalVelocity_2(float value)
	{
		___totalVelocity_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
