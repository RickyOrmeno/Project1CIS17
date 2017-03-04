#include "Character.h"
#include <string>


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

std::string Character::GetName()
{
	return _name;
}

std::string Character::GetHealth()
{
	return std::to_string(_health);
}

void Character::changeClassStats(CharacterClass chosenClass)
{
	Character::_health = chosenClass.getHealth();
}

void Character::changeHealth(Item thatItem)
{
	Character::_health = Character::_health + thatItem.getBoost();
}

std::string Character::questStatus(Quest thatQuest)
{
	return thatQuest.getQuestStatus();
}


Character::~Character()
{
}
