#ifndef CHARACTER_H
#define CHARACTER_H

#include <string>
#include <sstream>
#include <vector>

#include "../drivers/Race.cc"
#include "../drivers/Class.cc"
#include "../drivers/Stats.cc"
#include "../drivers/Inventory.cc"
#include "../drivers/Weapon.cc"
#include "../drivers/Armor.cc"
#include "../drivers/Potion.cc"
#include "../drivers/QuestItem.cc"

class Character
{
private:
    
    std::string name;
    std::string gender;
    int age;
    std::string alignment;

    int health;
    int mana;
    int stamina;

    int maxHealth;
    int maxMana;
    int maxStamina;

    int damage;
    int defense;

    Race race;
    Class clss;
    Stats stats;

    Inventory inventory;

    Weapon equippedWeapon;
    Armor equippedArmor;

public:
    
    Character();

    std::string getName();
    std::string getGender();
    int getAge();
    std::string getAlignment();
    int getHealth();
    int getMana();
    int getStamina();
    int getMaxHealth();
    int getMaxMana();
    int getMaxStamina();
    int getDamage();
    int getDefense();

    void setName(std::string name);
    void setGender(std::string gender);
    void setAge(int age);
    void setAlignment(std::string alignment);
    void setHealth(int health);
    void setMana(int mana);
    void setStamina(int stamina);
    void setMaxHealth(int maxHealth);
    void setMaxMana(int maxMana);
    void setMaxStamina(int maxStamina);
    void setDamage(int damage);
    void setDefense(int defense);

    void createCharacter();

    std::string toString();

    int getGold();
    void setGold(int gold);
    void addGold(int gold);

    void defineRace(int option);
    void defineStats();
    void defineClass(int option);

    void showInventory();
    void showEquippedItems();

    std::vector<Weapon> getWeapons();
    std::vector<Armor> getArmors();
    std::vector<Potion> getPotions();
    std::vector<QuestItem> getQuestItems();

    void addWeaponToInventory(Weapon weapon);
    void addArmorToInventory(Armor armor);
    void addPotionToInventory(Potion potion);
    void addQuestItemToInventory(QuestItem questItem);

    void removeWeaponFromInventory(int index);
    void removeArmorFromInventory(int index);
    void removePotionFromInventory(int index);
    void removeQuestItemFromInventory(int index);

    void equipWeapon(int index);
    void equipArmor(int index);

    void drinkPotion(int index);

    void unequipWeapon();
    void unequipArmor();
};

#endif