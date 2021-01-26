#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
	public:
		FragTrap();
		FragTrap(std::string name);
		~FragTrap();
		FragTrap(FragTrap const &trap);
		FragTrap &operator=(FragTrap const &trap);
		void vaulthunter_dot_exe(std::string const &target);
};

#endif