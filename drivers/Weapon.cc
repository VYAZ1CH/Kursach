#ifndef WEAPON_CC
#define WEAPON_CC

#include "../headers/Weapon.h"


Weapon::Weapon() : Item()
{
    damage = 0;
}


Weapon::Weapon(std::string name, std::string description, std::string rarity, float weight, int price, std::string subtype, int damage) : Item(name, description, rarity, weight, price, "Weapon", subtype)
{
    this->damage = damage;
}



int Weapon::getDamage()
{
    return damage;
}


void Weapon::setDamage(int damage)
{
    this->damage = damage;
}



std::string Weapon::toString()
{
    
    std::stringstream ss;

    
    std::string item = Item::toString();

    
    ss << item;

   
    ss << "Damage: " << damage << std::endl;
    
    g
    return ss.str();
}

#endif