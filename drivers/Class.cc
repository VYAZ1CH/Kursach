#ifndef CLASS_CC
#define CLASS_CC

#include "../headers/Class.h"



Class::Class()
{
    name = "Warrior";
    description = "All warriors share a masterful command of weapons and armor, and an exhaustive knowledge of combat skills. In addition, they are closely associated with death, both dealing it out and staring it down in defiance.";
    initialWeapon = Weapon();
    initialArmor = Armor();
}



Class::Class(std::string name, std::string description, Weapon initialWeapon, Armor initialArmor)
{
    this->name = name;
    this->description = description;
    this->initialWeapon = initialWeapon;
    this->initialArmor = initialArmor;
}



std::string Class::getName()
{
    return name;
}



std::string Class::getDescription()
{
    return description;
}



Weapon Class::getInitialWeapon()
{
    return initialWeapon;
}



Armor Class::getInitialArmor()
{
    return initialArmor;
}



std::string Class::toString()
{
    std::stringstream ss;

    ss << "Name: " << name << std::endl;
    ss << "Description: " << description << std::endl;
    ss << std::endl;
    ss << "Initial weapon: " << std::endl;
    ss << initialWeapon.toString() << std::endl;
    ss << "Initial armor: " << std::endl;
    ss << initialArmor.toString() << std::endl;

    return ss.str();
}

#endif