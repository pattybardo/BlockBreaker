#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UnityEngine.GameObject
struct GameObject_t1756533147;
// LevelManager
struct LevelManager_t3355282079;
// UnityEngine.Sprite[]
struct SpriteU5BU5D_t3359083662;
// ScoreKeeper
struct ScoreKeeper_t1955354816;
// UnityEngine.AudioClip
struct AudioClip_t1932558630;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Brick
struct  Brick_t1619971827  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject Brick::smoke
	GameObject_t1756533147 * ___smoke_2;
	// LevelManager Brick::levelManager
	LevelManager_t3355282079 * ___levelManager_3;
	// UnityEngine.Sprite[] Brick::hitSprites
	SpriteU5BU5D_t3359083662* ___hitSprites_4;
	// ScoreKeeper Brick::scoreKeeper
	ScoreKeeper_t1955354816 * ___scoreKeeper_5;
	// UnityEngine.AudioClip Brick::crack
	AudioClip_t1932558630 * ___crack_6;
	// System.Boolean Brick::isBreakable
	bool ___isBreakable_8;
	// System.Int32 Brick::timesHit
	int32_t ___timesHit_9;

public:
	inline static int32_t get_offset_of_smoke_2() { return static_cast<int32_t>(offsetof(Brick_t1619971827, ___smoke_2)); }
	inline GameObject_t1756533147 * get_smoke_2() const { return ___smoke_2; }
	inline GameObject_t1756533147 ** get_address_of_smoke_2() { return &___smoke_2; }
	inline void set_smoke_2(GameObject_t1756533147 * value)
	{
		___smoke_2 = value;
		Il2CppCodeGenWriteBarrier(&___smoke_2, value);
	}

	inline static int32_t get_offset_of_levelManager_3() { return static_cast<int32_t>(offsetof(Brick_t1619971827, ___levelManager_3)); }
	inline LevelManager_t3355282079 * get_levelManager_3() const { return ___levelManager_3; }
	inline LevelManager_t3355282079 ** get_address_of_levelManager_3() { return &___levelManager_3; }
	inline void set_levelManager_3(LevelManager_t3355282079 * value)
	{
		___levelManager_3 = value;
		Il2CppCodeGenWriteBarrier(&___levelManager_3, value);
	}

	inline static int32_t get_offset_of_hitSprites_4() { return static_cast<int32_t>(offsetof(Brick_t1619971827, ___hitSprites_4)); }
	inline SpriteU5BU5D_t3359083662* get_hitSprites_4() const { return ___hitSprites_4; }
	inline SpriteU5BU5D_t3359083662** get_address_of_hitSprites_4() { return &___hitSprites_4; }
	inline void set_hitSprites_4(SpriteU5BU5D_t3359083662* value)
	{
		___hitSprites_4 = value;
		Il2CppCodeGenWriteBarrier(&___hitSprites_4, value);
	}

	inline static int32_t get_offset_of_scoreKeeper_5() { return static_cast<int32_t>(offsetof(Brick_t1619971827, ___scoreKeeper_5)); }
	inline ScoreKeeper_t1955354816 * get_scoreKeeper_5() const { return ___scoreKeeper_5; }
	inline ScoreKeeper_t1955354816 ** get_address_of_scoreKeeper_5() { return &___scoreKeeper_5; }
	inline void set_scoreKeeper_5(ScoreKeeper_t1955354816 * value)
	{
		___scoreKeeper_5 = value;
		Il2CppCodeGenWriteBarrier(&___scoreKeeper_5, value);
	}

	inline static int32_t get_offset_of_crack_6() { return static_cast<int32_t>(offsetof(Brick_t1619971827, ___crack_6)); }
	inline AudioClip_t1932558630 * get_crack_6() const { return ___crack_6; }
	inline AudioClip_t1932558630 ** get_address_of_crack_6() { return &___crack_6; }
	inline void set_crack_6(AudioClip_t1932558630 * value)
	{
		___crack_6 = value;
		Il2CppCodeGenWriteBarrier(&___crack_6, value);
	}

	inline static int32_t get_offset_of_isBreakable_8() { return static_cast<int32_t>(offsetof(Brick_t1619971827, ___isBreakable_8)); }
	inline bool get_isBreakable_8() const { return ___isBreakable_8; }
	inline bool* get_address_of_isBreakable_8() { return &___isBreakable_8; }
	inline void set_isBreakable_8(bool value)
	{
		___isBreakable_8 = value;
	}

	inline static int32_t get_offset_of_timesHit_9() { return static_cast<int32_t>(offsetof(Brick_t1619971827, ___timesHit_9)); }
	inline int32_t get_timesHit_9() const { return ___timesHit_9; }
	inline int32_t* get_address_of_timesHit_9() { return &___timesHit_9; }
	inline void set_timesHit_9(int32_t value)
	{
		___timesHit_9 = value;
	}
};

struct Brick_t1619971827_StaticFields
{
public:
	// System.Int32 Brick::breakableCount
	int32_t ___breakableCount_7;

public:
	inline static int32_t get_offset_of_breakableCount_7() { return static_cast<int32_t>(offsetof(Brick_t1619971827_StaticFields, ___breakableCount_7)); }
	inline int32_t get_breakableCount_7() const { return ___breakableCount_7; }
	inline int32_t* get_address_of_breakableCount_7() { return &___breakableCount_7; }
	inline void set_breakableCount_7(int32_t value)
	{
		___breakableCount_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
