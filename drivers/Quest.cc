#ifndef QUEST_CC
#define QUEST_CC

#include "../headers/Quest.h"
#include "Functions.cc"

Quest::Quest()
{
    this->name = "None";
    this->description = "None";
    this->requiredItem = QuestItem();
    this->goldReward = 0;
    this->responsesWhenCompleted = {};
    this->completed = false;
}


Quest::Quest(std::string name, std::string description, QuestItem requiredItem, int goldReward, std::vector<std::string> responsesWhenCompleted)
{
    this->name = name;
    this->description = description;
    this->requiredItem = requiredItem;
    this->goldReward = goldReward;
    this->responsesWhenCompleted = responsesWhenCompleted;
    this->completed = false;
}

std::string Quest::getName()
{
    return this->name;
}

std::string Quest::getDescription()
{
    return this->description;
}

QuestItem Quest::getRequiredItem()
{
    return this->requiredItem;
}

int Quest::getGoldReward()
{
    return this->goldReward;
}

std::vector<std::string> Quest::getResponsesWhenCompleted()
{
    return this->responsesWhenCompleted;
}

bool Quest::getCompleted()
{
    return this->completed;
}

void Quest::setName(std::string name)
{
    this->name = name;
}

void Quest::setDescription(std::string description)
{
    this->description = description;
}

void Quest::setRequiredItem(QuestItem requiredItem)
{
    this->requiredItem = requiredItem;
}

void Quest::setGoldReward(int goldReward)
{
    this->goldReward = goldReward;
}

void Quest::setResponsesWhenCompleted(std::vector<std::string> responsesWhenCompleted)
{
    this->responsesWhenCompleted = responsesWhenCompleted;
}

void Quest::setCompleted(bool completed)
{
    this->completed = completed;
}

std::string Quest::toString()
{
    std::stringstream ss;

    ss << "Name: " << name << std::endl;
    ss << "Description: " << description << std::endl;
    ss << "Required Item: " << requiredItem.getName() << std::endl;
    ss << "Gold Reward: " << goldReward << std::endl;
    ss << "Status: " << (completed ? "Completed" : "Not Completed") << std::endl;

    return ss.str();
}


void Quest::completeQuest(Character &character)
{

    for (int i = 0; i < responsesWhenCompleted.size(); i++)
    {
        cleanScreen();

        std::cout << responsesWhenCompleted[i] << std::endl;

        pause();
    }

    cleanScreen();

    std::cout << "Congratulations " << character.getName() << "! You have completed the quest: " << name << std::endl;
    std::cout << "Reward: " << goldReward << " gold" << std::endl;
    pause();

    character.setGold(character.getGold() + goldReward);

    completed = true;
}

#endif