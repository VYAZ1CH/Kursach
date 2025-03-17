#ifndef FUNCTIONS_CC
#define FUNCTIONS_CC

#include <iostream>
#include <string>
#include <sstream>
#include <cstdlib>
#include <vector>


void cleanScreen()
{
    system("cls");
}



void pause()
{
    system("pause");
}



void printStringVector(std::vector<std::string> v)
{
    for (int i = 0; i < v.size(); i++)
    {
        std::cout << i + 1 << ". " << v[i] << std::endl;
    }
}

#endif