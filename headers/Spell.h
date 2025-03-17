#ifndef SPELL_H
#define SPELL_H

#include <iostream>
#include <string>
#include <sstream>
#include <fstream>
#include <cstdlib>
#include <vector>

#include "../drivers/Functions.cc"


class Spell
{
private:
    std::string name;
    std::string description;
    std::string type;
    int level;
    int damage;
    int manaCost;

public:
    Spell();
    Spell(std::string name, std::string description, std::string type, int level, int damage, int manaCost);

    std::string getName();
    std::string getDescription();
    std::string getType();
    int getLevel();
    int getDamage();
    int getManaCost();

    void setName(std::string name);
    void setDescription(std::string description);
    void setType(std::string type);
    void setLevel(int level);
    void setDamage(int damage);
    void setManaCost(int manaCost);

    std::string toString();
    void levelUp();
};

#endif