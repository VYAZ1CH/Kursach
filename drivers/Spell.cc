#ifndef SPELL_CC
#define SPELL_CC

#include <iostream>
#include <string>
#include <sstream>
#include <fstream>
#include <cstdlib>
#include <vector>

#include "../headers/Spell.h"


Spell::Spell()
{
    name = "None";
    description = "None";
    type = "None";
    level = 0;
    damage = 0;
    manaCost = 0;
}

Spell::Spell(std::string name, std::string description, std::string type, int level, int damage, int manaCost)
{
    this->name = name;
    this->description = description;
    this->type = type;
    this->level = level;
    this->damage = damage;
    this->manaCost = manaCost;
}


std::string Spell::getName()
{
    return name;
}

std::string Spell::getDescription()
{
    return description;
}

std::string Spell::getType()
{
    return type;
}

int Spell::getLevel()
{
    return level;
}

int Spell::getDamage()
{
    return damage;
}

int Spell::getManaCost()
{
    return manaCost;
}

void Spell::setName(std::string name)
{
    this->name = name;
}

void Spell::setDescription(std::string description)
{
    this->description = description;
}

void Spell::setType(std::string type)
{
    this->type = type;
}

void Spell::setLevel(int level)
{
    this->level = level;
}

void Spell::setDamage(int damage)
{
    this->damage = damage;
}

void Spell::setManaCost(int manaCost)
{
    this->manaCost = manaCost;
}

std::string Spell::toString()
{
    std::stringstream ss;

    ss << "Name: " << name << std::endl;
    ss << "Description: " << description << std::endl;
    ss << "Type: " << type << std::endl;
    ss << "Level: " << level << std::endl;
    ss << "Damage: " << damage << std::endl;
    ss << "Mana Cost: " << manaCost << std::endl;

    return ss.str();
}

void Spell::levelUp()
{
    level++;
    damage += 10;
    manaCost += 10;
}

#endif