#include "Item.h"



Item::Item()
{
	_itemName = "?????";
	_boost = 0;
}

Item::Item(std::string itemName, int boost)
{
	_itemName = itemName;
	_boost = boost;
}


int Item::getBoost()
{
	return _boost;
}

Item::~Item()
{
}
