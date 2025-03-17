#ifndef RACE_H
#define RACE_H

class Race
{
private:
    std::string name;
    std::string description;
    int strengthModifier;
    int dexterityModifier;
    int constitutionModifier;
    int intelligenceModifier;
    int wisdomModifier;
    int charismaModifier;

public:
    Race();
    Race(std::string name, std::string description, int strengthModifier, int dexterityModifier, int constitutionModifier, int intelligenceModifier, int wisdomModifier, int charismaModifier);

    std::string getName();
    std::string getDescription();
    int getStrengthModifier();
    int getDexterityModifier();
    int getConstitutionModifier();
    int getIntelligenceModifier();
    int getWisdomModifier();
    int getCharismaModifier();

    std::string toString();
};

#endif
