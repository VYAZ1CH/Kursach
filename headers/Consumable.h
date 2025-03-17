#ifndef CONSUMABLE_H
#define CONSUMABLE_H

#include "../drivers/Item.cc"

class Consumable : public Item
{
protected:
    std::string type = "Consumable";
    int health;
    int mana;
    int stamina;

public:
    Consumable();
    Consumable(std::string name, std::string description, std::string rarity, float weight, int price, std::string subtype, int health, int mana, int stamina);

    int getHealth();
    int getMana();
    int getStamina();

    std::string toString();
};

#endif