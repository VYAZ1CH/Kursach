#ifndef MERCHANT_H
#define MERCHANT_H

#include "../drivers/NPC.cc"
#include "../drivers/Weapon.cc"
#include "../drivers/Armor.cc"
#include "../drivers/Potion.cc"
#include "../drivers/QuestItem.cc"
#include "../drivers/Character.cc"

class Merchant : public NPC
{
private:
    int gold;
    std::vector<Weapon> weapons;
    std::vector<Armor> armors;
    std::vector<Potion> potions;
    std::vector<QuestItem> questItems;

public:
    Merchant();
    Merchant(std::string name, std::string description, int gold, std::vector<Weapon> weapons, std::vector<Armor> armors, std::vector<Potion> potions, std::vector<QuestItem> questItems);

    int getGold();
    std::vector<Weapon> getWeapons();
    std::vector<Armor> getArmors();
    std::vector<Potion> getPotions();
    std::vector<QuestItem> getQuestItems();

    void initialize();

    void setGold(int gold);
    void setWeapons(std::vector<Weapon> weapons);
    void setArmors(std::vector<Armor> armors);
    void setPotions(std::vector<Potion> potions);
    void setQuestItems(std::vector<QuestItem> questItems);

    void buyWeapon(Character &character, int index);
    void buyArmor(Character &character, int index);
    void buyPotion(Character &character, int index);
    void buyQuestItem(Character &character, int index);

    void sellWeapon(Character &character, int index);
    void sellArmor(Character &character, int index);
    void sellPotion(Character &character, int index);
    void sellQuestItem(Character &character, int index);

    void buyItems(Character &character);
    void sellItems(Character &character);

    void openShop(Character &character);

    void interact(Character &character);
};

#endif