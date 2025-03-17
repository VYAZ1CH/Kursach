#ifndef NPC_CC
#define NPC_CC

#include "../headers/NPC.h"
#include "Functions.cc"

NPC::NPC()
{   
    this->name = "NPC";
    this->description = "A non-playable character";
}

NPC::NPC(std::string name, std::string description)
{   
   
    this->name = name;
    this->description = description;
}


std::string NPC::getName()
{
    return this->name;
}

std::string NPC::getDescription()
{
    return this->description;
}


void NPC::setName(std::string name)
{
    this->name = name;
}


void NPC::setDescription(std::string description)
{
    this->description = description;
}

std::string NPC::toString()
{
    std::stringstream ss;

    ss << "Name: " << name << std::endl;
    ss << "Description: " << description << std::endl;

    return ss.str();
}

#endif