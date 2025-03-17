#ifndef NPC_H
#define NPC_H

#include <iostream>
#include <string>
#include <sstream>
#include <cstdlib>
#include <vector>

class NPC
{
protected:
    std::string name;
    std::string description;
    
public:

    NPC();
    NPC(std::string name, std::string description);

    std::string getName();
    std::string getDescription();

    void setName(std::string name);
    void setDescription(std::string description);

    std::string toString();
};

#endif