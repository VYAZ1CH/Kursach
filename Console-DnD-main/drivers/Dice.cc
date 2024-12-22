#ifndef DICE_CC
#define DICE_CC



#include <iostream>
#include <cstdlib>
#include <ctime>

int roll(int max) {
    return (std::rand() % max) + 1;
}

#endif