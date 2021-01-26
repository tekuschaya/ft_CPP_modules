#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

#define GREEN		"\033[32m"			/* for ScavTrap */
#define MAGENTA		"\033[35m"			/* for NinjaTrap */
#define CYAN		"\033[36m"			/* for FragTrap */
#define BOLDBLUE	"\033[1m\033[34m"	/* for ClapTrap */

class ClapTrap
{
	protected:
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
		ClapTrap();
		ClapTrap(std::string name);
		~ClapTrap();
		ClapTrap(ClapTrap const &trap);
		ClapTrap &operator=(ClapTrap const &trap);
		void rangedAttack(std::string const &target);
		void meleeAttack(std::string const &target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
};

#endif