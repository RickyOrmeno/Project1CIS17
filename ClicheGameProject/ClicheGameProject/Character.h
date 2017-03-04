#pragma once
#include <string>
#include "CharacterClass.h"
#include "Item.h"
#include "Quest.h"

class Character
{
private:
	std::string _name;
	CharacterClass chosenClass;
	int _health = 100;
	int _mana = 100;
	int _attack = 10;
public:
	Character();
	Character(std::string name);

	std::string GetName();
	std::string GetHealth();
	std::string questStatus(Quest thatQuest);

	void changeClassStats(CharacterClass chosenClass);
	void changeHealth(Item thatItem);

	

	~Character();
};


