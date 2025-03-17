#ifndef ENEMY_CC
#define ENEMY_CC


#include "../headers/Enemy.h"
#include <string>
#include <iostream>
	
	Enemy::Enemy(std::string Name, int Accuracity, int HealthPoint, int Damage) {
	
		this->Accuracity = Accuracity;
		this->Damage = Damage;
		this->HealthPoint = HealthPoint;
		this->Name = Name;
	}

	void Enemy::setHealthPoint(int HealthPoint) {

		this->HealthPoint = HealthPoint;
	}

	std::string Enemy::toString()
	{
		std::stringstream ss;

		ss << "Name: " << Name << std::endl;
		ss << "Accuracity: "  << Accuracity << std::endl;
		ss << "HealthPoint: " << HealthPoint << std::endl;
		ss << "Damage: " << Damage << std::endl;
		
		return ss.str();
	}

#endif