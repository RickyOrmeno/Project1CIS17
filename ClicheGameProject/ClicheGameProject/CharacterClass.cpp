#include "CharacterClass.h"
#include <string>


CharacterClass::CharacterClass()
{
	_health = 100;
	_mana = 100;
	_attack = 10;
}

CharacterClass::CharacterClass(std::string className, int health, int mana, int attack)
{
	_className = className;
	_health = health;
	_mana = mana;
	_attack = attack;
}

int CharacterClass::getHealth()
{
	return _health;
}

CharacterClass::~CharacterClass()
{
}
