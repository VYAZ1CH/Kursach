#ifndef MAIN_H
#define MAIN_H

#include <iostream>
#include <string>
#include <sstream>
#include <fstream>
#include <cstdlib>
#include <vector>

#include "drivers/Dice.cc"
#include "drivers/Case.cc"
#include "drivers/Menu.cc"
#include "drivers/Functions.cc"
#include "drivers/Character.cc"
#include "drivers/Merchant.cc"

void game(Character *character);

int main()
{
    int mainOption;
    Character character;
    Merchant merchant;

    merchant.initialize();

    do
    {
        mainMenu();

        std::cout << "Enter an option:" << std::endl;
        std::cin >> mainOption;
        cleanScreen();

        switch (mainOption)
        {
        case 1:
            if (character.getName() != "None")
            {
                int characterOption;

                std::cout << "There is already a character created" << std::endl;
                std::cout << "Do you want to overwrite it?" << std::endl;
                std::cout << "1. Yes" << std::endl;
                std::cout << "2. No" << std::endl;
                std::cin >> characterOption;

                switch (characterOption)
                {
                case 1:
                    character.createCharacter();
                    break;
                case 2:
                    std::cout << "The character was not overwritten" << std::endl;
                    break;
                default:
                    std::cout << "Invalid option" << std::endl;
                    break;
                }
            }
            else
            {
                character.createCharacter();
            }
            pause();
            break;
        case 2:
            if (character.getName() == "None")
            {
                std::cout << "There is no character to show" << std::endl;
            }
            else
            {
                std::cout << character.toString() << std::endl;
            }
            pause();
            break;
        case 3:
            if (character.getName() == "None")
            {
                std::cout << "There is no character to show" << std::endl;
            }
            else
            {
                character.showEquippedItems();
            }
            pause();
            break;
        case 4:
            if (character.getName() == "None")
            {
                std::cout << "There is no character to show" << std::endl;
            }
            else
            {
                character.showInventory();
            }
            pause();
            break;
        case 5:
            if (character.getName() == "None")
            {
                std::cout << "You need to create a character first" << std::endl;
            }
            else
            {
                merchant.interact(character);
            }
            pause();
            break;
        case 6:
            encyclopediaMenu();
            break;
        case 7:
            if (character.getName() == "None")
            {
                std::cout << "You need to create a character first" << std::endl;
            }
            else
            {
                game(&character);
            }
            pause();
            break;

        case 0:
            std::cout << "Goodbye adventurer. See you soon..." << std::endl;
            pause();
            break;

        default:
            std::cout << "Invalid option" << std::endl;
            pause();
            break;
        }
        cleanScreen();
    } while (mainOption != 0);
}

void game(Character *character) {
    int option = 0;
    cleanScreen();

    std::cout << "You go down the stairs to the first level of the dungeon." << std::endl;
    pause();
    cleanScreen();

    std::cout << "When you go down you see 3 paths." << std::endl;
    pause();
    cleanScreen();

    do {
        cleanScreen();
        std::cout << "Which path will you choose ?" << std::endl;
        std::cout << "1. Firt way" << std::endl;
        std::cout << "2. Second way" << std::endl;
        std::cout << "3. Third way" << std::endl;
        std::cout << "0. Go back to camp" << std::endl;
        std::cin >> option;

        switch (option)
        {
        case 1:
            cleanScreen();
            std::cout << "You are heading to the first path." << std::endl;
            pause();
            cleanScreen();
            case1(initWeapons(), character ,roll(20));
            pause();
            break;

        case 2:
            cleanScreen();
            std::cout << "You are heading to the second path." << std::endl;
            cleanScreen();
            case2(character);
            pause();
            break;

        case 3:
            std::cout << "Third way" << std::endl;
            pause();
            break;

        case 0:
            cleanScreen();
            std::cout << "Goodbye adventurer. See you soon..." << std::endl;
            return;

        default:
            std::cout << "Invalid option" << std::endl;
            pause();
            break;
        }


    } while (character->getHealth() >= 0);

    
}




#endif