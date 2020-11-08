//include the necessary header files
#include <iostream>
#include <string>
using namespace std;
#include "barbarian.h"

//constructor
Barbarian::Barbarian(string _name, string _race, int _Level, int _Health, int _stamina) : Character (_name, _race, _Level, _Health)
{
	stamina = _stamina;
}

//setter
void Barbarian::SetStamina(int _stamina)
{
	stamina = _stamina;
}
//getter
int Barbarian::getStamina() const
{
	return stamina;
}

//other functions
void Barbarian::EquipWeapon(string name, int damage, int stamina_cost)
{
	active_weapon.name = name;
	active_weapon.damage = damage;
	active_weapon.stamina_cost = stamina_cost;
}

void Barbarian::Attack(Character* target)
{
	if (active_weapon.name == "")
	{
		cout << "Barbarian has no weapon!" << endl;
	}
	else if (stamina < active_weapon.stamina_cost)
	{
		cout << "Insufficient stamina points!" << endl;
	}
	else
	{
		cout << getName() << " attacked " << target->getName() << " with a " << active_weapon.name << ", dealing " << active_weapon.damage << " damage." << endl;

		stamina = stamina - active_weapon.stamina_cost;
		target->SetHealth(target->getHealth() - active_weapon.damage);
	}
}

void Barbarian::Print()
{
	cout << "Character Status: " << endl
		<< "Name: " << getName() << endl
		<< "Race: " << getRace() << endl
		<< "Level: " << getLevel() << endl
		<< "Health: " << getHealth() << endl
		<< "Weapon: " << active_weapon.name << endl
		<< "---" << endl;
}
