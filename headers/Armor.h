#ifndef ARMOR_H
#define ARMOR_H

#include "../drivers/Item.cc"

class Armor : public Item
{
private:
    
    std::string type = "Armor";
    int defense;

public:
   
    Armor();
    Armor(std::string name, std::string description, std::string rarity, float weight, int price, std::string subtype, int defense);

    
    int getDefense();

    
    void setDefense(int defense);

    
    std::string toString();
};

#endif