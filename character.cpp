//include the necessary header files
#include <iostream>
#include <string>
#include "character.h"

using namespace std;

//implement constructors
Character::Character(string _name, string _race, int _level, int _health) //constructor
{
	name = _name;
	race = _race;
	level = _level;
	health = _health;
}

//implement getter functions
string Character::getName() const // name
{
	return name;
}

string Character::getRace() const // race
{
	return race;
}

int Character::getLevel() const // level
{
	return level;
}

int Character::getHealth() const // health
{
	return health;
}

//implement setter functions
void Character::SetName(string _name) // set = to name
{
	name = _name;
}

void Character::SetRace(string _race) // set = to race
{
	race = _race;
}

void Character::SetLevel(int _level) // set = to level
{
	level = _level;
}

void Character::SetHealth(int _health) // set = to health
{
	health = _health;
}

//implement Print function
void Character::Print() //print function for Character Status 
{
	cout << "Character Status: " << endl
		 << "Name: " << name << endl
		 << "Race: " << race << endl
		 << "Level: " << level << endl
		 << "Health: " << health << endl;
}
