#ifndef ITEM_H
#define ITEM_H

#include <iostream>
#include <string>
#include <sstream>

class Item
{
protected:
    std::string name;
    std::string description;
    std::string rarity;

    float weight;
    int price;

    std::string type;
    std::string subtype;

public:
    Item();
    Item(std::string name, std::string description, std::string rarity, float weight, int price, std::string type, std::string subtype);

    std::string getName();
    std::string getDescription();
    std::string getRarity();
    float getWeight();
    int getPrice();
    std::string getType();
    std::string getSubtype();

    void setName(std::string name);
    void setDescription(std::string description);
    void setRarity(std::string rarity);
    void setWeight(float weight);
    void setPrice(int value);
    void setType(std::string type);
    void setSubtype(std::string subtype);

    std::string toString();
};

#endif
