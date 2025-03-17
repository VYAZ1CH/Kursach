#ifndef WEAPON_H
#define WEAPON_H

#include "../drivers/Item.cc"

class Weapon : public Item
{
private:
    
    std::string type = "Weapon";
    int damage;

public:
    
    Weapon();
    Weapon(std::string name, std::string description, std::string rarity, float weight, int price, std::string subtype, int damage);

    
    int getDamage();

  
    void setDamage(int damage);

    
    std::string toString();
};

#endif