#ifndef BARBARIAN_H
#define BARBARIAN_H

#include <iostream>
#include <string>
#include "character.h"
using namespace std;

struct weapon {
	string name = "";
	int damage = 0;
	int stamina_cost = 0;
};

class Barbarian : public Character {

private:
	weapon active_weapon;
	int stamina = 100;
public:
	//constructors
	Barbarian(string _name, string _race, int _Level, int _Health, int _stamina);

	//setter
	void SetStamina(int _stamina);
	//getter
	int getStamina() const;

	//other functions
	void EquipWeapon(string name, int damage, int stamina_cost);
	void Attack(Character * target);
	void Print();
};

#endif