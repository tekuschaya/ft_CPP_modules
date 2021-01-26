#include "Character.hpp"
#include "Enemy.hpp"

Character::Character(std::string const &name)
{
	this->name = name;
	this->number_of_AP = 40;
	this->weapon = nullptr;
}

Character::~Character() {}

Character::Character(Character const &character)
{
	*this = character;
}

Character &Character::operator=(Character const &character)
{
	this->name = character.name;
	this->number_of_AP = character.number_of_AP;
	this->weapon = character.weapon;
	return *this;
}

std::string Character::getName() const
{
	return (this->name);
}

void Character::recoverAP()
{
	this->number_of_AP = this->number_of_AP + 10;
	if (this->number_of_AP > 40)
		this->number_of_AP = 40;
}

void Character::equip(AWeapon *weapon)
{
	this->weapon = weapon;
}

void Character::attack(Enemy *enemy)
{
	if (this->weapon && this->number_of_AP >= this->weapon->getAPCost())
	{
		this->number_of_AP -= this->weapon->getAPCost();
		std::cout << this->name << " attacks " << enemy->getType();
		std::cout << " with a " << this->weapon->getName() << std::endl;
		this->weapon->attack();
		enemy->takeDamage(this->weapon->getDamage());
		if (enemy->getHP() == 0)
			delete enemy;
	}
}

int Character::getAP() const
{
	return (this->number_of_AP);
}

AWeapon *Character::getWeapon() const
{
	return (this->weapon);
}

std::ostream &operator<<(std::ostream &out, const Character &character)
{
	if (character.getWeapon())
		out << character.getName() << " has " << character.getAP() << " AP and wields a " << character.getWeapon()->getName() << std::endl;
	else
		out << character.getName() << " has " << character.getAP() << " AP and is unarmed" << std::endl;
	return (out);
}