#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap()
{
	this->energy_points = 120;
	this->max_energy_points = 120;
	this->melee_attack_damage = 60;
	std::cout << MAGENTA << "Object NinjaTrap is created" << std::endl;
}

NinjaTrap::NinjaTrap(std::string name)
{
	this->name = name;
	this->hit_points = 60;
	this->max_hit_points = 60;
	this->energy_points = 120;
	this->max_energy_points = 120;
	this->level = 1;
	this->melee_attack_damage = 60;
	this->ranged_attack_damage = 5;
	this->armor_damage_reduction = 0;
	std::cout << MAGENTA << "Hello! My name is " << this->name;
	std::cout << " and my level is " << this->level << std::endl;
}

NinjaTrap::~NinjaTrap()
{
	std::cout << MAGENTA << "Object NinjaTrap is destroyed" << std::endl;
}

NinjaTrap::NinjaTrap(NinjaTrap const &trap)
{
	*this = trap;
}

NinjaTrap &NinjaTrap::operator=(NinjaTrap const &trap)
{
	this->name = trap.name;
	this->hit_points = trap.hit_points;
	this->energy_points = trap.energy_points;
	this->max_hit_points = trap.max_hit_points;
	this->max_energy_points = trap.max_energy_points;
	this->level = trap.level;
	this->melee_attack_damage = trap.melee_attack_damage;
	this->ranged_attack_damage = trap.ranged_attack_damage;
	this->armor_damage_reduction = trap.armor_damage_reduction;
	return *this;
}

void NinjaTrap::ninjaShoebox(FragTrap &trap)
{
	std::cout << CYAN << "Ninja hugs and gives some hit points" << std::endl;
	trap.beRepaired(rand() % 25);
}

void NinjaTrap::ninjaShoebox(ScavTrap &trap)
{
	std::cout << GREEN << "Ninja stealthily added to food 座枯薬" << std::endl;
	for (int i = 0; i < 5; i++)
		trap.takeDamage(rand() % 10 + 5);
}

void NinjaTrap::ninjaShoebox(NinjaTrap &trap)
{
	std::cout << MAGENTA << "Ninja stealed up and used 柔術" << std::endl;
	trap.takeDamage(rand() % 25);
}

void NinjaTrap::ninjaShoebox(ClapTrap &trap)
{
	std::cout << BOLDBLUE << "Ninja sent an air kiss and run away" << std::endl;
	trap.beRepaired(rand() % 15);
}

