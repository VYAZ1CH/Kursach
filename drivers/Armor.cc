#ifndef ARMOR_CC
#define ARMOR_CC

#include "../headers/Armor.h"

Armor::Armor() : Item()
{
    defense = 0;
}


Armor::Armor(std::string name, std::string description, std::string rarity, float weight, int price, std::string subtype, int defense) : Item(name, description, rarity, weight, price, "Armor", subtype)
{
    this->defense = defense;
}


int Armor::getDefense()
{
    return defense;
}

void Armor::setDefense(int defense)
{
    this->defense = defense;
}


std::string Armor::toString()
{
    
    std::stringstream ss;

    
    std::string item = Item::toString();

    
    ss << item;

    
    ss << "Defense: " << defense << std::endl;
    
    
    return ss.str();
}

#endif