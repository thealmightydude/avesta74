//////////////////////////////////////////////////////////////////////
// OpenTibia - an opensource roleplaying game
//////////////////////////////////////////////////////////////////////
//
//////////////////////////////////////////////////////////////////////
// This program is free software; you can redistribute it and/or
// modify it under the terms of the GNU General Public License
// as published by the Free Software Foundation; either version 2
// of the License, or (at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with this program; if not, write to the Free Software Foundation,
// Inc., 59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.
//////////////////////////////////////////////////////////////////////

#ifndef __OTSERV_ENUMS_H__
#define __OTSERV_ENUMS_H__

enum RaceType_t {
	RACE_NONE		= 0,
	RACE_VENOM  = 1,
	RACE_BLOOD	= 2,
	RACE_UNDEAD	= 3,
	RACE_FIRE	= 4
};

enum CombatType_t {
	COMBAT_NONE				   = 0,
	COMBAT_FIRST = COMBAT_NONE,
	COMBAT_PHYSICALDAMAGE	= 1,
	COMBAT_ENERGYDAMAGE		= 2,
	COMBAT_POISONDAMAGE		= 4,
	COMBAT_FIREDAMAGE		     = 8,
	COMBAT_UNDEFINEDDAMAGE	= 16,
	COMBAT_LIFEDRAIN		       = 32,
	COMBAT_MANADRAIN		   = 64,
	COMBAT_HEALING			   = 128,
	COMBAT_LAST = COMBAT_HEALING,
	COMBAT_COUNT                 = 9
};

enum CombatParam_t{
	COMBATPARAM_COMBATTYPE				= 1,
	COMBATPARAM_EFFECT					= 2,
	COMBATPARAM_DISTANCEEFFECT			= 3,
	COMBATPARAM_BLOCKEDBYSHIELD			= 4,
	COMBATPARAM_BLOCKEDBYARMOR			= 5,
	COMBATPARAM_TARGETCASTERORTOPMOST	= 6,
	COMBATPARAM_CREATEITEM				= 7,
	COMBATPARAM_AGGRESSIVE				= 8,
	COMBATPARAM_DISPEL					= 9,
	COMBATPARAM_USECHARGES         = 10,
	COMBATPARAM_HITEFFECT            = 11,
	COMBATPARAM_HITTEXTCOLOR      = 12,
};

enum CallBackParam_t{
	CALLBACKPARAM_LEVELMAGICVALUE = 1,
	CALLBACKPARAM_SKILLVALUE = 2,
	CALLBACKPARAM_TARGETTILECALLBACK = 3,
	CALLBACKPARAM_TARGETCREATURECALLBACK = 4
};

enum ConditionParam_t{
	CONDITIONPARAM_OWNER = 1,
	CONDITIONPARAM_TICKS = 2,
	//CONDITIONPARAM_OUTFIT = 3,
	CONDITIONPARAM_HEALTHGAIN = 4,
	CONDITIONPARAM_HEALTHTICKS = 5,
	CONDITIONPARAM_MANAGAIN = 6,
	CONDITIONPARAM_MANATICKS = 7,
	CONDITIONPARAM_DELAYED = 8,
	CONDITIONPARAM_SPEED = 9,
	CONDITIONPARAM_LIGHT_LEVEL = 10,
	CONDITIONPARAM_LIGHT_COLOR = 11,
	CONDITIONPARAM_MINVALUE = 12,
	CONDITIONPARAM_MAXVALUE = 13,
	CONDITIONPARAM_STARTVALUE = 14,
	CONDITIONPARAM_TICKINTERVAL = 15,
	CONDITIONPARAM_FORCEUPDATE = 16,
	CONDITIONPARAM_SKILL_MELEE = 17,
	CONDITIONPARAM_SKILL_FIST = 18,
	CONDITIONPARAM_SKILL_CLUB = 19,
	CONDITIONPARAM_SKILL_SWORD = 20,
	CONDITIONPARAM_SKILL_AXE = 21,
	CONDITIONPARAM_SKILL_DISTANCE = 22,
	CONDITIONPARAM_SKILL_SHIELD = 23,
	CONDITIONPARAM_SKILL_FISHING = 24,
	CONDITIONPARAM_STAT_MAXHITPOINTS = 25,
	CONDITIONPARAM_STAT_MAXMANAPOINTS = 26,
	CONDITIONPARAM_STAT_MAGICPOINTS = 27,
	CONDITIONPARAM_STAT_MAXHITPOINTSPERCENT = 28,
	CONDITIONPARAM_STAT_MAXMANAPOINTSPERCENT = 29,
	CONDITIONPARAM_STAT_MAGICPOINTSPERCENT = 30,
	CONDITIONPARAM_PERIODICDAMAGE = 31,
	CONDITIONPARAM_SKILL_MELEEPERCENT = 32,
	CONDITIONPARAM_SKILL_FISTPERCENT = 33,
	CONDITIONPARAM_SKILL_CLUBPERCENT = 34,
	CONDITIONPARAM_SKILL_SWORDPERCENT = 35,
	CONDITIONPARAM_SKILL_AXEPERCENT = 36,
	CONDITIONPARAM_SKILL_DISTANCEPERCENT = 37,
	CONDITIONPARAM_SKILL_SHIELDPERCENT = 38,
	CONDITIONPARAM_SKILL_FISHINGPERCENT = 39
};

enum BlockType_t {
	BLOCK_NONE = 0,
	BLOCK_DEFENSE,
	BLOCK_ARMOR,
	BLOCK_IMMUNITY
};

enum Vocation_t {
	VOCATION_NONE = 0,
	VOCATION_SORCERER = 1,
	VOCATION_DRUID = 2,
	VOCATION_PALADIN = 3,
	VOCATION_KNIGHT = 4
};

enum levelTypes_t {
	LEVEL_FIRST = 0,
	LEVEL_SKILL_FIST = LEVEL_FIRST,
	LEVEL_SKILL_CLUB = 1,
	LEVEL_SKILL_SWORD = 2,
	LEVEL_SKILL_AXE = 3,
	LEVEL_SKILL_DIST = 4,
	LEVEL_SKILL_SHIELD = 5,
	LEVEL_SKILL_FISH = 6,
	LEVEL_MAGIC = 7,
	LEVEL_EXPERIENCE = 8,
	LEVEL_LAST = LEVEL_EXPERIENCE
};

enum skills_t {
	SKILL_FIRST = 0,
	SKILL_FIST = SKILL_FIRST,
	SKILL_CLUB = 1,
	SKILL_SWORD = 2,
	SKILL_AXE = 3,
	SKILL_DIST = 4,
	SKILL_SHIELD = 5,
	SKILL_FISH = 6,
	SKILL_LAST = SKILL_FISH
};

enum stats_t {
	STAT_FIRST = 0,
	STAT_MAXHITPOINTS = STAT_FIRST,
	STAT_MAXMANAPOINTS,
	//STAT_SOULPOINTS,
	STAT_MAGICPOINTS,
	STAT_LAST = STAT_MAGICPOINTS
};

enum lossTypes_t {
	LOSS_FIRST = 0,
	LOSS_EXPERIENCE = LOSS_FIRST,
	LOSS_MANASPENT = 1,
	LOSS_SKILLTRIES = 2,
	LOSS_ITEMS = 3,
	LOSS_LAST = LOSS_ITEMS
};

enum formulaType_t{
	FORMULA_UNDEFINED = 0,
	FORMULA_LEVELMAGIC = 1,
	FORMULA_SKILL = 2,
	FORMULA_VALUE = 3
};

enum ConditionId_t{
	CONDITIONID_DEFAULT = -1,
	CONDITIONID_COMBAT = 0,
	CONDITIONID_HEAD = 1,
	CONDITIONID_NECKLACE = 2,
	CONDITIONID_BACKPACK = 3,
	CONDITIONID_ARMOR = 4,
	CONDITIONID_RIGHT = 5,
	CONDITIONID_LEFT = 6,
	CONDITIONID_LEGS = 7,
	CONDITIONID_FEET = 8,
	CONDITIONID_RING = 9,
	CONDITIONID_AMMO = 10
};

enum playersex_t {
	PLAYERSEX_FEMALE = 0,
	PLAYERSEX_MALE = 1,
	PLAYERSEX_OLDMALE = 2
};

enum CharacterTypes_t{
	PLAYER_MALE_1=0x80,
	PLAYER_MALE_2=0x81,
	PLAYER_MALE_3=0x82,
	PLAYER_MALE_4=0x83,
	PLAYER_MALE_5=0x84,
	PLAYER_MALE_6=0x85,
	PLAYER_MALE_7=0x86,
	PLAYER_FEMALE_1=0x88,
	PLAYER_FEMALE_2=0x89,
	PLAYER_FEMALE_3=0x8A,
	PLAYER_FEMALE_4=0x8B,
	PLAYER_FEMALE_5=0x8C,
	PLAYER_FEMALE_6=0x8D,
	PLAYER_FEMALE_7=0x8E
};

struct Outfit_t{
	Outfit_t(){
		lookHead   = 0;
		lookBody   = 0;
		lookLegs   = 0;
		lookFeet   = 0;
		lookType   = 0;
		lookTypeEx = 0;
	}

	uint32_t lookType;
	uint32_t lookTypeEx;
	uint32_t lookHead;
	uint32_t lookBody;
	uint32_t lookLegs;
	uint32_t lookFeet;
};

struct LightInfo{
	uint32_t level;
	uint32_t color;
	LightInfo(){
		level = 0;
		color = 0;
	};
	LightInfo(uint32_t _level, uint32_t _color){
		level = _level;
		color = _color;
	};
};

#ifdef __XID_EXPERIENCE_STAGES__
struct Stage_t
{
	uint16_t minLv, maxLv, expMul;
};
#endif

#endif
