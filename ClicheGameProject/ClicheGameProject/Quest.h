#pragma once
#include <string>

class Quest
{
private:
	std::string _questName;
	std::string _questDescription;
	bool questActive = false;

public:
	Quest(std::string questName, std::string questDescription);

	std::string getQuestStatus();
	std::string getQuestName();
	std::string getQuestDescription();

	void Quest::turnQuestOn();

	~Quest();
};

