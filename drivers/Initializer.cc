

#ifndef INITIALIZER_CC
#define INITIALIZER_CC

#include <iostream>
#include <string>
#include <sstream>
#include <fstream>
#include <cstdlib>
#include <vector>
#include <D:\Console-DnD-main\include\nlohmann\json.hpp>

#include "Weapon.cc"
#include "Armor.cc"
#include "Race.cc"
#include "Class.cc"
#include "Potion.cc"



std::vector<std::string> listGenders()
{
    
    std::vector<std::string> genders;

    
    genders.push_back("Male");
    genders.push_back("Woman");
    genders.push_back("Other");

    
    return genders;
}



std::vector<std::string> listAlignments()
{
    
    std::vector<std::string> alignments;

   
    alignments.push_back("Lawful Good");
    alignments.push_back("Neutral Good");
    alignments.push_back("Chaotic Good");
    alignments.push_back("Lawful Neutral");
    alignments.push_back("Neutral");
    alignments.push_back("Chaotic Neutral");
    alignments.push_back("Lawful Evil");
    alignments.push_back("Neutral Evil");
    alignments.push_back("Chaotic Evil");

    
    return alignments;
}



std::vector<std::string> listStats()
{
    
    std::vector<std::string> stats;

   
    stats.push_back("Strength");
    stats.push_back("Dexterity");
    stats.push_back("Constitution");
    stats.push_back("Intelligence");
    stats.push_back("Wisdom");
    stats.push_back("Charisma");

   
    return stats;
}


std::vector<Weapon> initWeapons()
{
    
    std::string name;
    std::string description;
    std::string rarity;
    float weight;
    int price;
    std::string subtype;
    int damage;

    
    std::vector<Weapon> weapons;

    
    using json = nlohmann::json;

    
    std::ifstream file("data/weapons.json");

   
    if (!file.is_open())
    {
       
        std::cout << "Error: The file could not be opened." << std::endl;

        
        return weapons;
    }

    
    json weaponsJSON = json::parse(file);

  
    for (int i = 0; i < weaponsJSON.size(); i++)
    {
        
        name = weaponsJSON[i]["name"];
        description = weaponsJSON[i]["description"];
        rarity = weaponsJSON[i]["rarity"];
        weight = weaponsJSON[i]["weight"];
        price = weaponsJSON[i]["price"];
        subtype = weaponsJSON[i]["subtype"];
        damage = weaponsJSON[i]["damage"];

       
        Weapon weapon(name, description, rarity, weight, price, subtype, damage);

        
        weapons.push_back(weapon);
    }

    
    file.close();

    
    return weapons;
}



std::vector<std::string> listWeapons()
{
    
    std::vector<std::string> weapons;

    
    std::vector<Weapon> weaponsVector = initWeapons();

    
    for (int i = 0; i < weaponsVector.size(); i++)
    {
        weapons.push_back(weaponsVector[i].getName());
    }

    
    return weapons;
}



std::vector<Armor> initArmors()
{
    
    std::string name;
    std::string description;
    std::string rarity;
    float weight;
    int price;
    std::string subtype;
    int defense;

    
    std::vector<Armor> armors;

    
    using json = nlohmann::json;

    
    std::ifstream file("data/armors.json");

    
    if (!file.is_open())
    {
        
        std::cout << "Error: The file could not be opened." << std::endl;

        
        return armors;
    }

    
    json armorsJSON = json::parse(file);

   
    for (int i = 0; i < armorsJSON.size(); i++)
    {
       
        name = armorsJSON[i]["name"].get<std::string>();
        description = armorsJSON[i]["description"].get<std::string>();
        rarity = armorsJSON[i]["rarity"].get<std::string>();
        weight = armorsJSON[i]["weight"].get<float>();
        price = armorsJSON[i]["price"].get<int>();
        subtype = armorsJSON[i]["subtype"].get<std::string>();
        defense = armorsJSON[i]["defense"].get<int>();

        
        Armor armor(name, description, rarity, weight, price, subtype, defense);

        
        armors.push_back(armor);
    }

    
    file.close();

    
    return armors;
}



std::vector<std::string> listArmors()
{
    
    std::vector<std::string> armors;

    
    std::vector<Armor> armorsVector = initArmors();

    
    for (int i = 0; i < armorsVector.size(); i++)
    {
        armors.push_back(armorsVector[i].getName());
    }

    
    return armors;
}



std::vector<Race> initRaces()
{
    
    std::string name;
    std::string description;
    int strengthModifier;
    int dexterityModifier;
    int constitutionModifier;
    int intelligenceModifier;
    int wisdomModifier;
    int charismaModifier;

    
    std::vector<Race> races;

    
    using json = nlohmann::json;

    
    std::ifstream file("data/races.json");

    
    if (!file.is_open())
    {
       
        std::cout << "Error: The file could not be opened." << std::endl;

        
        return races;
    }

    
    json racesJSON = json::parse(file);

   
    for (int i = 0; i < racesJSON.size(); i++)
    {
        
        name = racesJSON[i]["name"].get<std::string>();
        description = racesJSON[i]["description"].get<std::string>();
        strengthModifier = racesJSON[i]["strengthModifier"].get<int>();
        dexterityModifier = racesJSON[i]["dexterityModifier"].get<int>();
        constitutionModifier = racesJSON[i]["constitutionModifier"].get<int>();
        intelligenceModifier = racesJSON[i]["intelligenceModifier"].get<int>();
        wisdomModifier = racesJSON[i]["wisdomModifier"].get<int>();
        charismaModifier = racesJSON[i]["charismaModifier"].get<int>();

       
        Race race(name, description, strengthModifier, dexterityModifier, constitutionModifier, intelligenceModifier, wisdomModifier, charismaModifier);

       
        races.push_back(race);
    }

    
    file.close();

    
    return races;
}


std::vector<std::string> listRaces()
{
    
    std::vector<std::string> races;

   
    std::vector<Race> racesVector = initRaces();

    
    for (int i = 0; i < racesVector.size(); i++)
    {
        races.push_back(racesVector[i].getName());
    }

    
    return races;
}



std::vector<Class> initClasses()
{
    
    std::string name;
    std::string description;

    
    std::string initialWeaponName;
    std::string initialWeaponDescription;
    std::string initialWeaponRarity;
    float initialWeaponWeight;
    int initialWeaponPrice;
    std::string initialWeaponSubtype;
    int initialWeaponDamage;

    
    std::string initialArmorName;
    std::string initialArmorDescription;
    std::string initialArmorRarity;
    float initialArmorWeight;
    int initialArmorPrice;
    std::string initialArmorSubtype;
    int initialArmorDefense;

    
    std::vector<Class> classes;

    
    using json = nlohmann::json;

    
    std::ifstream file("data/classes.json");

    
    if (!file.is_open())
    {
        
        std::cout << "Error: The file could not be opened." << std::endl;

        
        return classes;
    }

    
    json classesJSON = json::parse(file);

    
    for (int i = 0; i < classesJSON.size(); i++)
    {
        
        name = classesJSON[i]["name"].get<std::string>();
        description = classesJSON[i]["description"].get<std::string>();

        
        json initialWeaponJSON = classesJSON[i]["initialWeapon"];

       
        initialWeaponName = initialWeaponJSON["name"].get<std::string>();
        initialWeaponDescription = initialWeaponJSON["description"].get<std::string>();
        initialWeaponRarity = initialWeaponJSON["rarity"].get<std::string>();
        initialWeaponWeight = initialWeaponJSON["weight"].get<float>();
        initialWeaponPrice = initialWeaponJSON["price"].get<int>();
        initialWeaponSubtype = initialWeaponJSON["subtype"].get<std::string>();
        initialWeaponDamage = initialWeaponJSON["damage"].get<int>();

        
        json initialArmorJSON = classesJSON[i]["initialArmor"];

        
        initialArmorName = initialArmorJSON["name"].get<std::string>();
        initialArmorDescription = initialArmorJSON["description"].get<std::string>();
        initialArmorRarity = initialArmorJSON["rarity"].get<std::string>();
        initialArmorWeight = initialArmorJSON["weight"].get<float>();
        initialArmorPrice = initialArmorJSON["price"].get<int>();
        initialArmorSubtype = initialArmorJSON["subtype"].get<std::string>();
        initialArmorDefense = initialArmorJSON["defense"].get<int>();

        
        Weapon initialWeapon(initialWeaponName, initialWeaponDescription, initialWeaponRarity, initialWeaponWeight, initialWeaponPrice, initialWeaponSubtype, initialWeaponDamage);

        
        Armor initialArmor(initialArmorName, initialArmorDescription, initialArmorRarity, initialArmorWeight, initialArmorPrice, initialArmorSubtype, initialArmorDefense);

        
        Class classObject(name, description, initialWeapon, initialArmor);

        
        classes.push_back(classObject);
    }

    
    file.close();

    
    return classes;
}



std::vector<std::string> listClasses()
{
    
    std::vector<std::string> classes;

    
    std::vector<Class> classesVector = initClasses();

    
    for (int i = 0; i < classesVector.size(); i++)
    {
        classes.push_back(classesVector[i].getName());
    }

    
    return classes;
}



std::vector<Potion> initPotions()
{
    
    std::string name;
    std::string description;
    std::string rarity;
    float weight;
    int price;
    int health;
    int mana;
    int stamina;

    
    std::vector<Potion> potions;

   
    using json = nlohmann::json;

    
    std::ifstream file("data/potions.json");

   
    if (!file.is_open())
    {
       
        std::cout << "Error: The file could not be opened." << std::endl;

        
        return potions;
    }

    
    json potionsJSON = json::parse(file);

   
    for (int i = 0; i < potionsJSON.size(); i++)
    {
        
        name = potionsJSON[i]["name"].get<std::string>();
        description = potionsJSON[i]["description"].get<std::string>();
        rarity = potionsJSON[i]["rarity"].get<std::string>();
        weight = potionsJSON[i]["weight"].get<float>();
        price = potionsJSON[i]["price"].get<int>();
        health = potionsJSON[i]["health"].get<int>();
        mana = potionsJSON[i]["mana"].get<int>();
        stamina = potionsJSON[i]["stamina"].get<int>();

        
        Potion potion(name, description, rarity, weight, price, health, mana, stamina);

        
        potions.push_back(potion);
    }

    
    file.close();

    
    return potions;
}



std::vector<std::string> listPotions()
{
    
    std::vector<std::string> potions;

    
    std::vector<Potion> potionsVector = initPotions();

    
    for (int i = 0; i < potionsVector.size(); i++)
    {
        potions.push_back(potionsVector[i].getName());
    }

    
    return potions;
}

#endif
