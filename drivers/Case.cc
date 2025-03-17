#ifndef CASE_CC
#define CASE_CC

#include <iostream>
#include <vector>
#include "../drivers/Character.cc"
#include "../drivers/Weapon.cc"
#include "../drivers/Dice.cc"
#include "../drivers/Enemy.cc"
#include "../drivers/Functions.cc"
#include "../drivers/Inventory.cc"

void case1(std::vector<Weapon> weaponsVector, Character* character, int chance) {
	int Choice;
	std::vector<Weapon> filtredWeapons;

	cleanScreen();
	std::cout << "Walking through the corridors of the dungeon you see a chest." << std::endl;
	pause();

	cleanScreen();
	std::cout << "Coming closer, you notice that the chest is locked." << std::endl;
	pause();

	cleanScreen();
	std::cout << "Try to pick the lock ?" << std::endl;
	std::cout << "1. Yes!" << std::endl;
	std::cout << "2. No" << std::endl;
	std::cin >> Choice;


	if (Choice == 1)
	{
		cleanScreen();
		std::cout << "To open the chest, roll a dice." << std::endl;
		pause();

		cleanScreen();
		std::cout << "To roll the dice press any button!" << std::endl;
		pause();

		int LockChance = roll(20);

		cleanScreen();
		std::cout << "Your roll is: " << LockChance << std::endl;
		pause();

		if (LockChance >= 10) 
		{
			cleanScreen();
			std::cout << "You are trying to pick the lock." << std::endl;
			pause();

			cleanScreen();
			std::cout << "You have successfully picked the lock!" << std::endl;
			pause();

			if (chance >= 10) {

				for (int i = 0; i < weaponsVector.size(); i++)
				{
					if ((weaponsVector[i].getDamage()) >= 9) {

						filtredWeapons.push_back(weaponsVector[i]);

					}

				}

			}
			else {
				for (int i = 0; i < weaponsVector.size(); i++) {
					if ((weaponsVector[i].getDamage()) < 9) {

						filtredWeapons.push_back(weaponsVector[i]);

					}
				}
			}

			character->addWeaponToInventory(filtredWeapons[roll(filtredWeapons.size()) - 1]);

			cleanScreen();
			std::cout << "You have a new item, look in your inventory!" << std::endl;
		}
		else
		{
			std::cout << "You are trying to pick the lock." << std::endl;
			pause();

			cleanScreen();
			std::cout << "You failed to pick the lock." << std::endl;
		}
	}
	else
	{
		std::cout << "You returned to the entrance." << std::endl;
	}
} 


void case2(Character* character) {

		int Choice;
		Enemy enemy = Enemy("Goblin", 10, 50, 5);
		std::cout << "Walking through the narrow corridors of the dungeon you hear some sounds..." << std::endl;
		pause();

		cleanScreen();
		std::cout << "As you get closer you notice that it is a goblin swarming in the rocks." << std::endl;
		pause();

		cleanScreen();
		std::cout << enemy.toString() << std::endl;
		std::cout << "1: Wanna fight?" << std::endl;
		std::cout << "2: Wanna leave?" << std::endl;
		std::cin >> Choice;

			if (Choice == 1) {
				int Choice2 = 1;
				do {
					if (Choice2 == 1)
					{
						cleanScreen();
						int EnemyDice = roll(20);
						int HeroDice = roll(20);
						std::cout << "To roll the dice press any button!" << std::endl;
						pause();

						cleanScreen();
						std::cout << "Your roll is:" << HeroDice << std::endl;
						pause();

						if (HeroDice >= 10)
						{
							enemy.setHealthPoint(enemy.HealthPoint - character->getDamage());
						}
						else
						{
							cleanScreen();
							std::cout << "You miss!" << std::endl;
							pause();
						}
						if (EnemyDice >= enemy.Accuracity)
						{
							character->setHealth(character->getHealth() - enemy.Damage);
						}
						else
						{
							cleanScreen();
							std::cout << "You dodged enemy atack!" << std::endl;
							pause();
						}

						cleanScreen();

						if (enemy.HealthPoint <= 0) {
							break;
						}
						else
						{
							std::cout << enemy.Name << " Heatlh: " << enemy.HealthPoint << std::endl;
							std::cout << "You health: " << character->getHealth() << std::endl;
							std::cout << "1: Wanna continue fight?" << std::endl;
							std::cout << "2: Wanna run?" << std::endl;
							std::cin >> Choice2;
							cleanScreen();
						}

					}
					else
					{
						cleanScreen();
						std::cout << "You secsesfuly escape!" << std::endl;
						std::cout << "You returned to the entrance." << std::endl;
						break;
					}

				} while (enemy.HealthPoint > 0 && character->getHealth() > 0);


				if (enemy.HealthPoint <= 0)
				{
					std::cout << "You health: " << character->getHealth() << std::endl;
					std::cout << "You sucsesfuly defeted enemy!" << std::endl;
					std::cout << "You returned to the entrance." << std::endl;
				}

				if (character->getHealth() <= 0)
				{
					cleanScreen();
					std::cout << "You die!" << std::endl;
				}
			}
			else
			{
				cleanScreen();
				std::cout << "You returned to the entrance." << std::endl;
			}
	

	
}


#endif