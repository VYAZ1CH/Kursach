#ifndef QUESTITEM_H
#define QUESTITEM_H

#include "../drivers/Item.cc"

class QuestItem : public Item
{
private:
    
    std::string type = "QuestItem";
    std::string quest;

public:
    QuestItem();
    QuestItem(std::string name, std::string description, std::string rarity, float weight, int price, std::string subtype, std::string quest);

    std::string getQuest();


    std::string toString();
};

#endif