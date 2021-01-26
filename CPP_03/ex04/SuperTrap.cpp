#include "SuperTrap.hpp"

SuperTrap::SuperTrap()
{
	this->name = "Default";
	this->level = 1;
	this->hit_points = FragTrap::hit_points;
	this->max_hit_points = FragTrap::max_hit_points;
	this->energy_points = NinjaTrap::energy_points;
	this->max_energy_points = NinjaTrap::max_energy_points;
	this->melee_attack_damage = NinjaTrap::melee_attack_damage;
	this->ranged_attack_damage = FragTrap::ranged_attack_damage;
	this->armor_damage_reduction = FragTrap::armor_damage_reduction;
	std::cout << YELLOW << "Object SuperTrap is created" << std::endl;
}

SuperTrap::SuperTrap(std::string name)
{
	this->name = name;
	this->level = 1;
	this->hit_points = FragTrap::hit_points;
	this->max_hit_points = FragTrap::max_hit_points;
	this->energy_points = NinjaTrap::energy_points;
	this->max_energy_points = NinjaTrap::max_energy_points;
	this->melee_attack_damage = NinjaTrap::melee_attack_damage;
	this->ranged_attack_damage = FragTrap::ranged_attack_damage;
	this->armor_damage_reduction = FragTrap::armor_damage_reduction;
	std::cout << YELLOW << "Hello! My name is " << this->name;
	std::cout << " and my level is " << this->level << std::endl;
}

SuperTrap::~SuperTrap()
{
	std::cout << YELLOW << "I'll be back!" << std::endl;
}

SuperTrap::SuperTrap(SuperTrap const &trap)
{
	*this = trap;
}

SuperTrap &SuperTrap::operator=(SuperTrap const &trap)
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

void SuperTrap::rangedAttack(std::string const &target)
{
	std::cout << YELLOW;
	FragTrap::rangedAttack(target);
}

void SuperTrap::meleeAttack(std::string const &target)
{
	std::cout << YELLOW;
	NinjaTrap::meleeAttack(target);
}
