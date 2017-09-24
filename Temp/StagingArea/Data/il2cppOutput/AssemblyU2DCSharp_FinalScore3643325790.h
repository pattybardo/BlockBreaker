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

// FinalScore
struct  FinalScore_t3643325790  : public MonoBehaviour_t1158329972
{
public:
	// ScoreKeeper FinalScore::scoreKeeper
	ScoreKeeper_t1955354816 * ___scoreKeeper_2;
	// System.Int32 FinalScore::scoreFinal
	int32_t ___scoreFinal_3;
	// UnityEngine.UI.Text FinalScore::scoreFinalUI
	Text_t356221433 * ___scoreFinalUI_4;

public:
	inline static int32_t get_offset_of_scoreKeeper_2() { return static_cast<int32_t>(offsetof(FinalScore_t3643325790, ___scoreKeeper_2)); }
	inline ScoreKeeper_t1955354816 * get_scoreKeeper_2() const { return ___scoreKeeper_2; }
	inline ScoreKeeper_t1955354816 ** get_address_of_scoreKeeper_2() { return &___scoreKeeper_2; }
	inline void set_scoreKeeper_2(ScoreKeeper_t1955354816 * value)
	{
		___scoreKeeper_2 = value;
		Il2CppCodeGenWriteBarrier(&___scoreKeeper_2, value);
	}

	inline static int32_t get_offset_of_scoreFinal_3() { return static_cast<int32_t>(offsetof(FinalScore_t3643325790, ___scoreFinal_3)); }
	inline int32_t get_scoreFinal_3() const { return ___scoreFinal_3; }
	inline int32_t* get_address_of_scoreFinal_3() { return &___scoreFinal_3; }
	inline void set_scoreFinal_3(int32_t value)
	{
		___scoreFinal_3 = value;
	}

	inline static int32_t get_offset_of_scoreFinalUI_4() { return static_cast<int32_t>(offsetof(FinalScore_t3643325790, ___scoreFinalUI_4)); }
	inline Text_t356221433 * get_scoreFinalUI_4() const { return ___scoreFinalUI_4; }
	inline Text_t356221433 ** get_address_of_scoreFinalUI_4() { return &___scoreFinalUI_4; }
	inline void set_scoreFinalUI_4(Text_t356221433 * value)
	{
		___scoreFinalUI_4 = value;
		Il2CppCodeGenWriteBarrier(&___scoreFinalUI_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
