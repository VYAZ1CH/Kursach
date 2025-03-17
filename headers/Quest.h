#ifndef QUEST_H
#define QUEST_H

#include <string>
#include <vector>

#include "../drivers/QuestItem.cc"
#include "../drivers/Character.cc"

class Quest
{
private:
    std::string name;
    std::string description;
    QuestItem requiredItem;
    int goldReward;
    std::vector<std::string> responsesWhenCompleted;
    bool completed;

public:
    Quest();
    Quest(std::string name, std::string description, QuestItem requiredItem, int goldReward, std::vector<std::string> responsesWhenCompleted);

    std::string getName();
    std::string getDescription();
    QuestItem getRequiredItem();
    int getGoldReward();
    std::vector<std::string> getResponsesWhenCompleted();
    bool getCompleted();

    void setName(std::string name);
    void setDescription(std::string description);
    void setRequiredItem(QuestItem requiredItem);
    void setGoldReward(int goldReward);
    void setResponsesWhenCompleted(std::vector<std::string> responsesWhenCompleted);
    void setCompleted(bool completed);

    std::string toString();

    void completeQuest(Character &character);

};

#endif