#pragma once
#include <string>
// Sets base stats for the Character

class CharacterClass
{
private:
	std::string _className;
	int _health;
	int _mana;
	int _attack;
public:
	CharacterClass();
	CharacterClass(std::string className, int health, int mana, int attack);

	int CharacterClass::getHealth();

	~CharacterClass();
};

