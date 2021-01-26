#ifndef HUMAN_B_HPP
#define HUMAN_B_HPP

#include "Weapon.hpp"

class HumanB
{
	private:
		std::string name_b;
		Weapon *weapon_b;
	public:
		void attack();
		void setWeapon(Weapon &weapon);
		HumanB(std::string name);
};

#endif