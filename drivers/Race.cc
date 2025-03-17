#ifndef RACE_CC
#define RACE_CC

#include "../headers/Race.h"


Race::Race()
{
    name = "Human";
    description = "Humans are the most adaptable and ambitious people among the common races. They have widely varying tastes, morals, and customs in the many different lands where they have settled. When they settle, though, they stay: they build cities to last for the ages, and great kingdoms that can persist for long centuries. An individual human might have a relatively short life span, but a human nation or culture preserves traditions with origins far beyond the reach of any single human’s memory.";
    strengthModifier = 1;
    dexterityModifier = 1;
    constitutionModifier = 1;
    intelligenceModifier = 1;
    wisdomModifier = 1;
    charismaModifier = 1;
}


Race::Race(std::string name, std::string description, int strengthModifier, int dexterityModifier, int constitutionModifier, int intelligenceModifier, int wisdomModifier, int charismaModifier)
{
    this->name = name;
    this->description = description;
    this->strengthModifier = strengthModifier;
    this->dexterityModifier = dexterityModifier;
    this->constitutionModifier = constitutionModifier;
    this->intelligenceModifier = intelligenceModifier;
    this->wisdomModifier = wisdomModifier;
    this->charismaModifier = charismaModifier;
}

std::string Race::getName()
{
    return name;
}


std::string Race::getDescription()
{
    return description;
}


int Race::getStrengthModifier()
{
    return strengthModifier;
}


int Race::getDexterityModifier()
{
    return dexterityModifier;
}


int Race::getConstitutionModifier()
{
    return constitutionModifier;
}


int Race::getIntelligenceModifier()
{
    return intelligenceModifier;
}



int Race::getWisdomModifier()
{
    return wisdomModifier;
}


int Race::getCharismaModifier()
{
    return charismaModifier;
}



std::string Race::toString()
{
    std::stringstream ss;

    ss << "Name: " << name << std::endl;
    ss << "Description: " << description << std::endl;
    ss << "Strength modifier: " << strengthModifier << std::endl;
    ss << "Dexterity modifier: " << dexterityModifier << std::endl;
    ss << "Constitution modifier: " << constitutionModifier << std::endl;
    ss << "Intelligence modifier: " << intelligenceModifier << std::endl;
    ss << "Wisdom modifier: " << wisdomModifier << std::endl;
    ss << "Charisma modifier: " << charismaModifier << std::endl;

    return ss.str();
}

#endif