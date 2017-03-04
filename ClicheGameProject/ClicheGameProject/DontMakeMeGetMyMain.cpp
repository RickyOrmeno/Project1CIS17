#include <iostream>
#include <string>

#include "Character.h"
#include "CharacterClass.h"
#include "Item.h"
#include "Quest.h"

using namespace std;

int main()
{
	
	CharacterClass tank = CharacterClass("Tank", 200, 150, 7);		//Instanciating the Tank Character Class

	Character howlbourn = Character("Howlbourn");					//Instanciating the Character Howlbourn

	Item permaHealthBoost = Item("PermaHealth", 5);					//Item Class

	Quest getGud = Quest("Get Gud", "You must achieve the level of above satisfactory.");	//Quest class

	cout <<"Character name is: " << howlbourn.GetName() << endl;
	
	cout << "Health is: " << howlbourn.GetHealth() << endl;

	cout << "Selecting the tank class..." << endl;

	howlbourn.changeClassStats(tank); //CharacterClass changes private info in Character

	cout << "Health is now: " << howlbourn.GetHealth() << endl; //New information is displayed

	cout << "Taking a permanent health booster... " << endl;

	howlbourn.changeHealth(permaHealthBoost); //Item class changes info in Character

	cout << "Health is now: " << howlbourn.GetHealth() << endl;

	cout << "Acepting quest: " << getGud.getQuestName() << endl; 
	cout << "Here is your challenge... \n" << getGud.getQuestDescription() << endl;

	getGud.turnQuestOn();

	getchar();

	return 0;
}