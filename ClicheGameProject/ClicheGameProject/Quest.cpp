#include "Quest.h"



Quest::Quest(std::string questName, std::string questDescription)
{
	_questName = questName;
	_questDescription = questDescription;
}

std::string Quest::getQuestStatus()
{
	if (questActive = true)
	{
		return std::to_string(true);
	}
	else
	{
		return std::to_string(false);
	}
}

std::string Quest::getQuestName()
{
	return  _questName;
}

std::string Quest::getQuestDescription()
{
	return _questDescription;
}

void Quest::turnQuestOn()
{
	questActive = true;
}


Quest::~Quest()
{
}
