#ifndef MENU_CC
#define MENU_CC

#include "Ascii.cc"
#include "Initializer.cc"
#include "Functions.cc"


void mainMenu()
{
    
    cleanScreen();

  
    std::cout << readAsciiArt("asciiArt/title.txt") << std::endl;


    std::cout << "1. Create character" << std::endl;
    std::cout << "2. Show character" << std::endl;
    std::cout << "3. Show equipped items" << std::endl;
    std::cout << "4. Show inventory" << std::endl;
    std::cout << "5. Merchant" << std::endl;
    std::cout << "6. D&D encyclopedia" << std::endl;
    std::cout << "7. Enter the dungeon" << std::endl;
    std::cout << std::endl;


    std::cout << "0. Exit" << std::endl;
    std::cout << std::endl;
}


void racesMenu()
{
    
    int option;


    std::vector<Race> races = initRaces();
    std::vector<std::string> racesNames = listRaces();
    int racesNumber = races.size();


    do
    {
 
        cleanScreen();

   
        std::cout << "Welcome to the D&D's races encyclopedia" << std::endl;
        std::cout << std::endl;

     
        printStringVector(racesNames);
        std::cout << std::endl;

    
        std::cout << "0. Return" << std::endl;
        std::cout << std::endl;

    
        std::cout << "Choose an option: " << std::endl;
        std::cin >> option;

   
        if (option > 0 && option <= racesNumber)
        {

            cleanScreen();

   
            std::cout << races[option - 1].toString() << std::endl;
            pause();
        }
        else if (option == 0)
        {

        }
        else
        {

            std::cout << "Invalid option" << std::endl;
            pause();
        }

    } while (option != 0);
}

void classesMenu()
{
   
    int option;


    std::vector<Class> classes = initClasses();
    std::vector<std::string> classesNames = listClasses();
    int classesNumber = classes.size();


    do
    {

        cleanScreen();


        std::cout << "Welcome to the D&D's classes encyclopedia" << std::endl;
        std::cout << std::endl;


        printStringVector(classesNames);
        std::cout << std::endl;

        std::cout << "0. Return" << std::endl;
        std::cout << std::endl;

        std::cout << "Choose an option: " << std::endl;
        std::cin >> option;


        if (option > 0 && option <= classesNumber)
        {

            cleanScreen();


            std::cout << classes[option - 1].toString() << std::endl;
            pause();
        }
        else if (option == 0)
        {

        }
        else
        {

            std::cout << "Invalid option" << std::endl;
            pause();
        }

    } while (option != 0);
}


void weaponsMenu()
{

    int option;


    std::vector<Weapon> weapons = initWeapons();
    std::vector<std::string> weaponsNames = listWeapons();
    int weaponsNumber = weapons.size();

   
    do
    {

        cleanScreen();

  
        std::cout << "Welcome to the D&D's weapons encyclopedia" << std::endl;
        std::cout << std::endl;

      
        printStringVector(weaponsNames);
        std::cout << std::endl;

        std::cout << "0. Return" << std::endl;
        std::cout << std::endl;

  
        std::cout << "Choose an option: " << std::endl;
        std::cin >> option;


        if (option > 0 && option <= weaponsNumber)
        {
  
            cleanScreen();

 
            std::cout << weapons[option - 1].toString() << std::endl;
            pause();
        }
        else if (option == 0)
        {

        }
        else
        {

            std::cout << "Invalid option" << std::endl;
            pause();
        }

    } while (option != 0);
}


void armorMenu()
{

    int option;


    std::vector<Armor> armors = initArmors();
    std::vector<std::string> armorsNames = listArmors();
    int armorsNumber = armors.size();


    do
    {

        cleanScreen();


        std::cout << "Welcome to the D&D's armors encyclopedia" << std::endl;
        std::cout << std::endl;


        printStringVector(armorsNames);
        std::cout << std::endl;

        std::cout << "0. Return" << std::endl;
        std::cout << std::endl;

 
        std::cout << "Choose an option: " << std::endl;
        std::cin >> option;

 
        if (option > 0 && option <= armorsNumber + 1)
        {

            cleanScreen();


            std::cout << armors[option - 1].toString() << std::endl;
            pause();
        }
        else if (option == 0)
        {

        }
        else
        {

            std::cout << "Invalid option" << std::endl;
            pause();
        }

    } while (option != 0);
}


void potionsMenu()
{

    int option;


    std::vector<Potion> potions = initPotions();
    std::vector<std::string> potionsNames = listPotions();
    int potionsNumber = potions.size();

    do
    {

        cleanScreen();


        std::cout << "Welcome to the D&D's potions encyclopedia" << std::endl;
        std::cout << std::endl;

        printStringVector(potionsNames);
        std::cout << std::endl;


        std::cout << "0. Return" << std::endl;
        std::cout << std::endl;


        std::cout << "Choose an option: " << std::endl;
        std::cin >> option;

        if (option > 0 && option <= potionsNumber + 1)
        {

            cleanScreen();


            std::cout << potions[option - 1].toString() << std::endl;
            pause();
        }
        else if (option == 0)
        {

        }
        else
        {

            std::cout << "Invalid option" << std::endl;
            pause();
        }

    } while (option != 0);
}

void encyclopediaMenu()
{

    int option;

    do
    {

        cleanScreen();


        std::cout << readAsciiArt("asciiArt/encyclopedia.txt") << std::endl;


        std::cout << "1. Races" << std::endl;
        std::cout << "2. Classes" << std::endl;
        std::cout << "3. Weapons" << std::endl;
        std::cout << "4. Armors" << std::endl;
        std::cout << "5. Potions" << std::endl;
        std::cout << std::endl;

 
        std::cout << "0. Return" << std::endl;
        std::cout << std::endl;


        std::cout << "Choose an option: " << std::endl;
        std::cin >> option;


        switch (option)
        {
        case 1:
            racesMenu();
            break;
        case 2:
            classesMenu();
            break;
        case 3:
            weaponsMenu();
            break;
        case 4:
            armorMenu();
            break;
        case 5:
            potionsMenu();
            break;
        case 0:
            std::cout << "You can come here if you want to learn more about D&D" << std::endl;
            break;
        default:
            std::cout << "Invalid option" << std::endl;
            break;
        }

    } while (option != 0);
}

#endif