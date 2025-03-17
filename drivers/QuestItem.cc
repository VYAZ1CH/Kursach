#ifndef QUESTITEM_CC
#define QUESTITEM_CC

#include "../headers/QuestItem.h"

QuestItem::QuestItem() : Item()
{
    quest = "None";
}

QuestItem::QuestItem(std::string name, std::string description, std::string rarity, float weight, int price, std::string subtype, std::string quest) : Item(name, description, rarity, weight, price, "QuestItem", subtype)
{
    this->quest = quest;
}

std::string QuestItem::getQuest()
{
    return quest;
}

std::string QuestItem::toString()
{
    std::stringstream ss;

    std::string item = Item::toString();

    ss << item;
    ss << "Quest: " << quest << std::endl;
    
    return ss.str();
}

#endif