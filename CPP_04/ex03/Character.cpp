#include "Character.hpp"

Character::Character(std::string const name)
{
	this->name = name;
	for (int i = 0; i < 4; i++)
		this->slots[i] = nullptr;
}

Character::~Character()
{
	for (int i = 0; i < 4; i++)
		delete this->slots[i];
}

Character::Character(Character const &character)
{
	*this = character;
}

Character &Character::operator=(Character const &character)
{
	this->name = character.name;
	for (int i = 0; i < 4; i++)
	{
		if (this->slots[i])
			delete this->slots[i];
	}
	for (int i = 0; i < 4; i++)
	{
		if (character.slots[i])
			this->slots[i] = character.slots[i]->clone();
		else
			this->slots[i] = nullptr;
	}
	return (*this);
}

std::string const &Character::getName() const
{
	return (this->name);
}

void Character::equip(AMateria* m)
{
	if (m)
	{
		for (int i = 0; i < 4; i++)
		{
			if (!this->slots[i])
			{
				this->slots[i] = m;
				break ;
			}
		}
	}
}

void Character::unequip(int idx)
{
	if (idx >= 0 && idx < 4)
		this->slots[idx] = nullptr;
}

void Character::use(int idx, ICharacter &target)
{
	if (idx >= 0 && idx < 4 && this->slots[idx])
		this->slots[idx]->use(target);
}