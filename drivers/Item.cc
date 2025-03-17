#ifndef ITEM_CC
#define ITEM_CC

#include "../headers/Item.h"


Item::Item()
{
    name = "None";
    description = "None";
    rarity = "None";
    weight = 0.0;
    price = 0;
    type = "None";
    subtype = "None";
}


Item::Item(std::string name, std::string description, std::string rarity, float weight, int price, std::string type, std::string subtype)
{
    this->name = name;
    this->description = description;
    this->rarity = rarity;
    this->weight = weight;
    this->price = price;
    this->type = type;
    this->subtype = subtype;
}


std::string Item::getName()
{
    return name;
}


std::string Item::getDescription()
{
    return description;
}
 

std::string Item::getRarity()
{
    return rarity;
}

float Item::getWeight()
{
    return weight;
}

int Item::getPrice()
{
    return price;
}

std::string Item::getType()
{
    return type;
}

std::string Item::getSubtype()
{
    return subtype;
}


void Item::setName(std::string name)
{
    this->name = name;
}

void Item::setDescription(std::string description)
{
    this->description = description;
}

void Item::setRarity(std::string rarity)
{
    this->rarity = rarity;
}

void Item::setWeight(float weight)
{
    this->weight = weight;
}

void Item::setPrice(int price)
{
    this->price = price;
}

void Item::setType(std::string type)
{
    this->type = type;
}

void Item::setSubtype(std::string subtype)
{
    this->subtype = subtype;
}

std::string Item::toString()
{
    std::stringstream ss;

    ss << "Name: " << name << std::endl;
    ss << "Description: " << description << std::endl;
    ss << "Rarity: " << rarity << std::endl;
    ss << "Weight: " << weight << std::endl;
    ss << "Price: " << price << std::endl;
    ss << "Type: " << type << std::endl;
    ss << "Subtype: " << subtype << std::endl;

    return ss.str();
}

#endif