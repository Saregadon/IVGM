//include the necessary header files
#include <iostream>
#include <string>
using namespace std;
#include "mage.h"

Mage::Mage(string _name, string _race, int _level, int _health, int _mana) : Character(_name, _race, _level, _health)
{
	mana = _mana;
}

//getters
void Mage::setMana(int _mana)
{
	mana = _mana;
}

//setters
int Mage::getMana() const
{
	return mana;
}

//other functions
int Mage::AddSpell(string spell_name, int spell_damage, int mana_cost)
{
	if (numOfSpells < 10)
	{
		spells[numOfSpells].name = spell_name;
		spells[numOfSpells].damage = spell_damage;
		spells[numOfSpells].mana_cost = mana_cost;

		numOfSpells++;
	}
	else
	{
		cout << "Spells limits reached!" << endl;
	}

	return numOfSpells;
}

void Mage::nextSpell()
{
	active_Spell++;

	if (active_Spell == numOfSpells)
	{
		active_Spell = 0;
	}
}

void Mage::Attack(Character* target)
{
	if (numOfSpells == 0)
	{
		cout << "This mage has no spells!" << endl;
	}
	else if (mana < spells[active_Spell].mana_cost)
	{
		cout << "Insufficient mana points!" << endl;
	}
	else
	{
		cout << getName() << " attacked " << target->getName() << " with spell: " << spells[active_Spell].name << ", dealing " << spells[active_Spell].damage << " damage." << endl;

		mana = mana - spells[active_Spell].mana_cost;
		target->SetHealth(target->getHealth() - spells[active_Spell].damage);

		nextSpell();
	}
}

void Mage::Print()
{
	cout << "Character Status: " << endl
		<< "Name: " << getName() << endl
		<< "Race: " << getRace() << endl
		<< "Level: " << getLevel() << endl
		 << "Health: " << getHealth() << endl
		 << "Spells: " << endl;

		for (int i = 0; i < numOfSpells; i++)
		{
			cout << spells[i].name << endl;
		}

		cout << "---" << endl;


}