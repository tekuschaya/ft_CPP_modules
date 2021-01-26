#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) : name_a(name), weapon_a(weapon) {}

void HumanA::attack()
{
	std::cout << this->name_a << " attacks with his " << this->weapon_a.getType() << std::endl;
}