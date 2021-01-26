#ifndef SUPERTRAP_HPP
#define SUPERTRAP_HPP

#include "FragTrap.hpp"
#include "NinjaTrap.hpp"

class SuperTrap : public FragTrap, public NinjaTrap
{
	public:
		SuperTrap();
		SuperTrap(std::string name);
		~SuperTrap();
		SuperTrap(SuperTrap const &src);
		SuperTrap &operator=(SuperTrap const &src);
		void rangedAttack(std::string const &target);
		void meleeAttack(std::string const &target);
};

#endif