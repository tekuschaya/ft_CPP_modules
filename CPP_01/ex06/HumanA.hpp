#ifndef HUMAN_A_HPP
#define HUMAN_A_HPP

#include "Weapon.hpp"

class HumanA
{
	private:
		std::string name_a;
		Weapon &weapon_a;
	public:
		void attack();
		HumanA(std::string name, Weapon &weapon);
};


#endif