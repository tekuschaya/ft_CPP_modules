#include "HumanB.hpp"

HumanB::HumanB(std::string name) : name_b(name) {}

void HumanB::setWeapon(Weapon &weapon)
{
	this->weapon_b = &weapon;
}

void HumanB::attack()
{
	std::cout << this->name_b << " attacks with his " << this->weapon_b->getType() << std::endl;
}