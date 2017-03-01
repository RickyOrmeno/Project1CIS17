#pragma once
#include <string>
#include "CharacterClass.h"

class Character
{
private:
	std::string _name;
	CharacterClass chosenClass;
	int _health;
	int _mana;
	int _attack;
public:
	Character();
	Character(std::string name);


	~Character();
};


