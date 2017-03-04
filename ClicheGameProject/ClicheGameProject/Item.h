#pragma once
#include <string>

class Item
{
private:
	std::string _itemName;
	int _boost;
public:
	Item();
	Item(std::string itemName, int boost);

	int Item::getBoost();
	~Item();
};

