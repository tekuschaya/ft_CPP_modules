#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	this->hit_points = 100;
	this->max_hit_points = 100;
	this->energy_points = 100;
	this->max_energy_points = 100;
	this->level = 1;
	this->melee_attack_damage = 30;
	this->ranged_attack_damage = 20;
	this->armor_damage_reduction = 5;
	std::cout << CYAN << "Object FragTrap is created" << std::endl;
}

FragTrap::FragTrap(std::string name)
{
	this->name = name;
	this->hit_points = 100;
	this->max_hit_points = 100;
	this->energy_points = 100;
	this->max_energy_points = 100;
	this->level = 1;
	this->melee_attack_damage = 30;
	this->ranged_attack_damage = 20;
	this->armor_damage_reduction = 5;
	std::cout << CYAN << "Hello! My name is " << this->name;
	std::cout << " and my level is " << this->level << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << CYAN << "Object FragTrap is destroyed" << std::endl;
}

FragTrap::FragTrap(FragTrap const &trap)
{
	*this = trap;
}

FragTrap &FragTrap::operator=(FragTrap const &trap)
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

void FragTrap::vaulthunter_dot_exe(std::string const &target)
{
	int tmp;
	std::string array[] = {"Хорошо, что у меня нет души!", "Мне нужны твои запчасти!",
	"Перекомпиляция боевого кода!", "Хехехехе, мваа ха ха ха, МВАА ХА ХА ХА!",
	"Я принес тебе подарок - БОМБУ!", "На этот раз это будет потрясающе, я обещаю!"};
	if (this->energy_points < 25)
	{
		std::cout << CYAN << "It’s out of energy" << std::endl;
		return ;
	}
	tmp = (rand() + 5) % 6;
	std::cout << CYAN << "[" << this->name << "] " << array[tmp] << std::endl;
	std::cout << this->name << " attacks " << target << " and deals ";
	std::cout << rand() % 30 << " points of damage!" << std::endl;
	this->energy_points = this->energy_points - 25;
}
