#ifndef NINJATRAP_HPP
#define NINJATRAP_HPP

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class NinjaTrap : virtual public ClapTrap
{
	public:
		NinjaTrap();
		NinjaTrap(std::string name);
		~NinjaTrap();
		NinjaTrap(NinjaTrap const &trap);
		NinjaTrap &operator=(NinjaTrap const &trap);
		void ninjaShoebox(FragTrap &trap);
		void ninjaShoebox(ClapTrap &trap);
		void ninjaShoebox(ScavTrap &trap);
		void ninjaShoebox(NinjaTrap &trap);
};

#endif