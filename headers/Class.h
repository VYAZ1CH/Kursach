#ifndef CLASS_H
#define CLASS_H

#include "Weapon.h"
#include "Armor.h"

class Class
{
private:
    std::string name;
    std::string description;
    Weapon initialWeapon;
    Armor initialArmor;

public:
    Class();
    Class(std::string name, std::string description, Weapon initialWeapon, Armor initialArmor);

    std::string getName();
    std::string getDescription();
    Weapon getInitialWeapon();
    Armor getInitialArmor();

    std::string toString();
};

#endif