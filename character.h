#ifndef CHARACTER_H
#define CHARACTER_H

#include <iostream>
#include <string>
using namespace std;

class Character {
private:
	string name;
	string race;
	int level;
	int health;

public:
	//constructors
	Character(string _name, string _race, int _level, int _health);

	//getter functions
	string getName() const;
	string getRace() const;
	int getLevel() const;
	int getHealth() const;

	//setter functions
	void SetName(string _name);
	void SetRace(string _race);
	void SetLevel(int _level);
	void SetHealth(int _health);
	
	//other functions
	virtual void Print();
	virtual void Attack(Character * target) = 0;
};

#endif