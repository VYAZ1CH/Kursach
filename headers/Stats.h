#ifndef STATS_H
#define STATS_H

#include "Race.h"

class Stats
{
private:
   
    int strength;
    int dexterity;
    int constitution;
    int intelligence;
    int wisdom;
    int charisma;

public:
    
    Stats();
    Stats(Race race);

    int getStrength();
    int getDexterity();
    int getConstitution();
    int getIntelligence();
    int getWisdom();
    int getCharisma();

    void setStrength(int strength);
    void setDexterity(int dexterity);
    void setConstitution(int constitution);
    void setIntelligence(int intelligence);
    void setWisdom(int wisdom);
    void setCharisma(int charisma);

    std::string toString();

    void increaseStats(int strength, int dexterity, int constitution, int intelligence, int wisdom, int charisma);
    void decreaseStats(int strength, int dexterity, int constitution, int intelligence, int wisdom, int charisma);

    void increaseByOne(int stat);
    void decreaseByOne(int stat);

};

#endif