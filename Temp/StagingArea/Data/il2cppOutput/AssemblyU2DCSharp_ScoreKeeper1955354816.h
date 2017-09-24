#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// ScoreKeeper
struct ScoreKeeper_t1955354816;
// UnityEngine.UI.Text
struct Text_t356221433;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ScoreKeeper
struct  ScoreKeeper_t1955354816  : public MonoBehaviour_t1158329972
{
public:
	// System.Int32 ScoreKeeper::score
	int32_t ___score_3;
	// UnityEngine.UI.Text ScoreKeeper::scoreUI
	Text_t356221433 * ___scoreUI_4;

public:
	inline static int32_t get_offset_of_score_3() { return static_cast<int32_t>(offsetof(ScoreKeeper_t1955354816, ___score_3)); }
	inline int32_t get_score_3() const { return ___score_3; }
	inline int32_t* get_address_of_score_3() { return &___score_3; }
	inline void set_score_3(int32_t value)
	{
		___score_3 = value;
	}

	inline static int32_t get_offset_of_scoreUI_4() { return static_cast<int32_t>(offsetof(ScoreKeeper_t1955354816, ___scoreUI_4)); }
	inline Text_t356221433 * get_scoreUI_4() const { return ___scoreUI_4; }
	inline Text_t356221433 ** get_address_of_scoreUI_4() { return &___scoreUI_4; }
	inline void set_scoreUI_4(Text_t356221433 * value)
	{
		___scoreUI_4 = value;
		Il2CppCodeGenWriteBarrier(&___scoreUI_4, value);
	}
};

struct ScoreKeeper_t1955354816_StaticFields
{
public:
	// ScoreKeeper ScoreKeeper::instance
	ScoreKeeper_t1955354816 * ___instance_2;

public:
	inline static int32_t get_offset_of_instance_2() { return static_cast<int32_t>(offsetof(ScoreKeeper_t1955354816_StaticFields, ___instance_2)); }
	inline ScoreKeeper_t1955354816 * get_instance_2() const { return ___instance_2; }
	inline ScoreKeeper_t1955354816 ** get_address_of_instance_2() { return &___instance_2; }
	inline void set_instance_2(ScoreKeeper_t1955354816 * value)
	{
		___instance_2 = value;
		Il2CppCodeGenWriteBarrier(&___instance_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
