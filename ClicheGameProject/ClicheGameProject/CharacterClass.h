#pragma once

// Sets base stats for the Character

class CharacterClass
{
private:
	int _health;
	int _mana;
	int _attack;
public:
	CharacterClass();
	CharacterClass(int health, int mana, int attack);
	~CharacterClass();
};

