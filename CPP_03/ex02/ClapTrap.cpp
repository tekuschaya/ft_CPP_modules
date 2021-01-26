#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	std::cout << "Create object of ClapTrap class" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "Destroyed object of ClapTrap class" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const &trap)
{
	*this = trap;
}

ClapTrap &ClapTrap::operator=(ClapTrap const &trap)
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

void ClapTrap::rangedAttack(std::string const &target)
{
	std::cout << this->name << " attacks " << target << " at range, causing ";
	std::cout << this->ranged_attack_damage << " points of damage!" << std::endl;
	this->hit_points = this->hit_points - this->ranged_attack_damage;
}

void ClapTrap::meleeAttack(std::string const &target)
{
	std::cout << this->name << " attacks " << target << " at melee, causing ";
	std::cout << this->melee_attack_damage << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	int tmp;

	if (amount < (unsigned int)this->armor_damage_reduction)
		tmp = 0;
	else
		tmp = amount - this->armor_damage_reduction;
	if (tmp > this->hit_points)
		tmp = this->hit_points;
	this->hit_points = this->hit_points - tmp;
	std::cout << this->name << " taked damage " << tmp << " hit points" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	int tmp;

	tmp = this->hit_points + amount;
	if (tmp > this->max_hit_points)
		tmp = this->max_hit_points;
	std::cout << this->name << " was repaired " << tmp - this->hit_points; 
	std::cout << " hit points" << std::endl;
	this->hit_points = tmp;
}
