#ifndef INVENTORY_CC
#define INVENTORY_CC

#include <iostream>
#include <string>
#include <sstream>
#include <vector>

#include "../headers/Inventory.h"
#include "Functions.cc"
#include "Ascii.cc"

Inventory::Inventory()
{
    gold = 0;
    maxWeight = 20;
    currentWeight = 0.0;
}

Inventory::Inventory(float capacity)
{
    gold = 0;
    maxWeight = capacity;
    currentWeight = 0;
}

int Inventory::getGold()
{
    return gold;
}

float Inventory::getMaxWeight()
{
    return maxWeight;
}

float Inventory::getCurrentWeight()
{
    return currentWeight;
}

std::vector<Weapon> Inventory::getWeapons()
{
    return weapons;
}

std::vector<Armor> Inventory::getArmors()
{
    return armors;
}

std::vector<Potion> Inventory::getPotions()
{
    return potions;
}

std::vector<QuestItem> Inventory::getQuestItems()
{
    return questItems;
}

void Inventory::setGold(int gold)
{
    this->gold = gold;
}

void Inventory::setMaxWeight(float maxWeight)
{
    this->maxWeight = maxWeight;
}

void Inventory::setCurrentWeight(float currentWeight)
{
    this->currentWeight = currentWeight;
}

void Inventory::setWeapons(std::vector<Weapon> weapons)
{
    this->weapons = weapons;
}

void Inventory::setArmors(std::vector<Armor> armors)
{
    this->armors = armors;
}

void Inventory::setPotions(std::vector<Potion> potions)
{
    this->potions = potions;
}

void Inventory::setQuestItems(std::vector<QuestItem> questItems)
{
    this->questItems = questItems;
}

void Inventory::addWeapon(Weapon weapon)
{
    weapons.push_back(weapon);
    currentWeight += weapon.getWeight();
}

void Inventory::addArmor(Armor armor)
{
    armors.push_back(armor);
    currentWeight += armor.getWeight();
}

void Inventory::addPotion(Potion potion)
{
    potions.push_back(potion);
    currentWeight += potion.getWeight();
}

void Inventory::addQuestItem(QuestItem questItem)
{
    questItems.push_back(questItem);
    currentWeight += questItem.getWeight();
}

void Inventory::removeWeapon(int index)
{
    currentWeight -= weapons[index].getWeight();
    weapons.erase(weapons.begin() + index);
}

void Inventory::removeArmor(int index)
{
    currentWeight -= armors[index].getWeight();
    armors.erase(armors.begin() + index);
}

void Inventory::removePotion(int index)
{
    currentWeight -= potions[index].getWeight();
    potions.erase(potions.begin() + index);
}

void Inventory::removeQuestItem(int index)
{
    currentWeight -= questItems[index].getWeight();
    questItems.erase(questItems.begin() + index);
}

#endif