#ifndef INVENTORY_H
#define INVENTORY_H

#include <vector>

#include "../drivers/Weapon.cc"
#include "../drivers/Armor.cc"
#include "../drivers/Potion.cc"
#include "../drivers/QuestItem.cc"

class Inventory
{
private:
    int gold;
    float maxWeight;
    float currentWeight;
    std::vector<Weapon> weapons;
    std::vector<Armor> armors;
    std::vector<Potion> potions;
    std::vector<QuestItem> questItems;

public:
    Inventory();
    Inventory(float capacity);

    int getGold();
    float getMaxWeight();
    float getCurrentWeight();
    std::vector<Weapon> getWeapons();
    std::vector<Armor> getArmors();
    std::vector<Potion> getPotions();
    std::vector<QuestItem> getQuestItems();

    void setGold(int gold);
    void setMaxWeight(float maxWeight);
    void setCurrentWeight(float currentWeight);
    void setWeapons(std::vector<Weapon> weapons);
    void setArmors(std::vector<Armor> armors);
    void setPotions(std::vector<Potion> potions);
    void setQuestItems(std::vector<QuestItem> questItems);

    void addWeapon(Weapon weapon);
    void addArmor(Armor armor);
    void addPotion(Potion potion);
    void addQuestItem(QuestItem questItem);

    void removeWeapon(int index);
    void removeArmor(int index);
    void removePotion(int index);
    void removeQuestItem(int index);
};

#endif