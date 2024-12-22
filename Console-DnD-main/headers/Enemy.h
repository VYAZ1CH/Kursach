
#ifndef ENEMY_H 
#define ENEMY_H

#include <string>

class Enemy
{
public:

	int Accuracity;
	int HealthPoint;
	int Damage;
	std::string Name;

	Enemy(std::string Name, int Accuracity, int HealthPoint, int Damage);

	void setHealthPoint(int HealthPoint);

	std::string toString();
};

#endif