#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	this->hit_points = 100;
	this->max_hit_points = 100;
	this->energy_points = 50;
	this->max_energy_points = 50;
	this->level = 1;
	this->melee_attack_damage = 20;
	this->ranged_attack_damage = 15;
	this->armor_damage_reduction = 3;
	std::cout << GREEN << "Object ScavTrap is created" << std::endl;
}

ScavTrap::ScavTrap(std::string name)
{
	this->name = name;
	this->hit_points = 100;
	this->max_hit_points = 100;
	this->energy_points = 50;
	this->max_energy_points = 50;
	this->level = 1;
	this->melee_attack_damage = 20;
	this->ranged_attack_damage = 15;
	this->armor_damage_reduction = 3;
	std::cout << GREEN << "Hello! I'm a robot " << this->name;
	std::cout << " and my level is " << this->level << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << GREEN << this->name << " unfortunately died" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const &trap)
{
	*this = trap;
}

ScavTrap &ScavTrap::operator=(ScavTrap const &trap)
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

void ScavTrap::challengeNewcomer()
{
	int tmp;
	std::string array[] = {"Я не паниковал! Нет, не я!", "Что происходит? ЧТО ПРОИСХОДИТ?!!",
	"Мамочки, страшно то как!", "Ой ой, патронов больше не осталось!",
	"Вау, это действительно сработало?", "Ой, для чего это было?"};
	std::string attacks[] = {"with closed eyes", "on tiptoe", "from the corner"};
	if (this->energy_points < 10)
	{
		std::cout << GREEN << "It’s out of energy" << std::endl;
		return ;
	}
	tmp = (rand() + 5) % 6;
	std::cout << GREEN << this->name << " attacks " << attacks[tmp % 3] << " and deals ";
	std::cout << rand() % 30 << " points of damage!" << std::endl;
	std::cout << "[" << this->name << "] " << array[tmp] << std::endl;
	this->energy_points = this->energy_points - 10;
}
