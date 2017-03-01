#include "CharacterClass.h"



CharacterClass::CharacterClass()
{
	_health = 100;
	_mana = 100;
	_attack = 10;
}

CharacterClass::CharacterClass(int health, int mana, int attack)
{
	_health = health;
	_mana = mana;
	_attack = attack;
}


CharacterClass::~CharacterClass()
{
}
