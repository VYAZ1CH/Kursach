#ifndef POTION_CC
#define POTION_CC

#include <iostream>
#include <string>
#include <sstream>

#include "../headers/Potion.h"

Potion::Potion() : Consumable()
{
    subtype = "Potion";
}


Potion::Potion(std::string name, std::string description, std::string rarity, float weight, int price, int health, int mana, int stamina) : Consumable(name, description, rarity, weight, price, "Potion", health, mana, stamina) {}

std::string Potion::toString()
{
    std::string consumable = Consumable::toString();

    return consumable;
}

#endif