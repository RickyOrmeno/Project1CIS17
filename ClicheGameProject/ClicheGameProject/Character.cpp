#include "Character.h"



Character::Character()
{
	_name = "null";			//default constructor
	_health = 100;
	_mana = 100;
	_attack = 10;
}

Character::Character(std::string name)
{
	_name = name;
}


Character::~Character()
{
}
