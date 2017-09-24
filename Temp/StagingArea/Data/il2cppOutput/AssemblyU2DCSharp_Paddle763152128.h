#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// Ball
struct Ball_t3972794301;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Paddle
struct  Paddle_t763152128  : public MonoBehaviour_t1158329972
{
public:
	// System.Boolean Paddle::autoPlay
	bool ___autoPlay_2;
	// Ball Paddle::ball
	Ball_t3972794301 * ___ball_3;
	// System.Single Paddle::halfPaddleSize
	float ___halfPaddleSize_4;
	// System.Single Paddle::xDirectionFactor
	float ___xDirectionFactor_5;

public:
	inline static int32_t get_offset_of_autoPlay_2() { return static_cast<int32_t>(offsetof(Paddle_t763152128, ___autoPlay_2)); }
	inline bool get_autoPlay_2() const { return ___autoPlay_2; }
	inline bool* get_address_of_autoPlay_2() { return &___autoPlay_2; }
	inline void set_autoPlay_2(bool value)
	{
		___autoPlay_2 = value;
	}

	inline static int32_t get_offset_of_ball_3() { return static_cast<int32_t>(offsetof(Paddle_t763152128, ___ball_3)); }
	inline Ball_t3972794301 * get_ball_3() const { return ___ball_3; }
	inline Ball_t3972794301 ** get_address_of_ball_3() { return &___ball_3; }
	inline void set_ball_3(Ball_t3972794301 * value)
	{
		___ball_3 = value;
		Il2CppCodeGenWriteBarrier(&___ball_3, value);
	}

	inline static int32_t get_offset_of_halfPaddleSize_4() { return static_cast<int32_t>(offsetof(Paddle_t763152128, ___halfPaddleSize_4)); }
	inline float get_halfPaddleSize_4() const { return ___halfPaddleSize_4; }
	inline float* get_address_of_halfPaddleSize_4() { return &___halfPaddleSize_4; }
	inline void set_halfPaddleSize_4(float value)
	{
		___halfPaddleSize_4 = value;
	}

	inline static int32_t get_offset_of_xDirectionFactor_5() { return static_cast<int32_t>(offsetof(Paddle_t763152128, ___xDirectionFactor_5)); }
	inline float get_xDirectionFactor_5() const { return ___xDirectionFactor_5; }
	inline float* get_address_of_xDirectionFactor_5() { return &___xDirectionFactor_5; }
	inline void set_xDirectionFactor_5(float value)
	{
		___xDirectionFactor_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
