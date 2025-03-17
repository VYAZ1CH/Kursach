#ifndef ASCII_CC
#define ASCII_CC

#include <iostream>
#include <string>
#include <sstream>
#include <fstream>


std::string readAsciiArt(std::string fileName)
{
  
    std::string ascii;

    
    std::ifstream file;

    
    file.open(fileName);

    if (file.is_open())
    {
        
        std::stringstream stream;

        
        stream << file.rdbuf();

       
        file.close();

        
        ascii = stream.str();
    }

    
    return ascii;
}

#endif