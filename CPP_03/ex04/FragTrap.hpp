#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
	public:
		FragTrap();
		FragTrap(std::string name);
		~FragTrap();
		FragTrap(FragTrap const &src);
		FragTrap &operator=(FragTrap const &src);
		void vaulthunter_dot_exe(std::string const &target);
};

#endif