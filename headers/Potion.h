#ifndef POTION_H
#define POTION_H

#include <string>

#include "../drivers/Consumable.cc"

class Potion : public Consumable
{
private:
    std::string subtype = "Potion";

public:
    Potion();
    Potion(std::string name, std::string description, std::string rarity, float weight, int price, int health, int mana, int stamina);

    std::string toString();
};

#endif