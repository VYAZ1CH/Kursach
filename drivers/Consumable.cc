#ifndef CONSUMABLE_CC
#define CONSUMABLE_CC

#include "../headers/Consumable.h"


Consumable::Consumable() : Item()
{
    health = 0;
    mana = 0;
    stamina = 0;
}


Consumable::Consumable(std::string name, std::string description, std::string rarity, float weight, int price, std::string subtype, int health, int mana, int stamina) : Item(name, description, rarity, weight, price, "Consumable", subtype)
{
    this->health = health;
    this->mana = mana;
    this->stamina = stamina;
}



int Consumable::getHealth()
{
    return health;
}



int Consumable::getMana()
{
    return mana;
}



int Consumable::getStamina()
{
    return stamina;
}



std::string Consumable::toString()
{
    
    std::stringstream ss;

    
    std::string item = Item::toString();

    
    ss << item;

    
    ss << "Health: " << health << std::endl;
    ss << "Mana: " << mana << std::endl;
    ss << "Stamina: " << stamina << std::endl;
    
    
    return ss.str();
}

#endif
