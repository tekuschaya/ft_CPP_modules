#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include <iostream>

class ScavTrap
{
	private:
		std::string name;
		int hit_points;
		int max_hit_points;
		int energy_points;
		int max_energy_points;
		int level;
		int melee_attack_damage;
		int ranged_attack_damage;
		int armor_damage_reduction;
	public:
		ScavTrap();
		ScavTrap(std::string name);
		~ScavTrap();
		ScavTrap(ScavTrap const &trap);
		ScavTrap &operator=(ScavTrap const &trap);
		void rangedAttack(std::string const &target);
		void meleeAttack(std::string const &target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		void challengeNewcomer();
};

#endif