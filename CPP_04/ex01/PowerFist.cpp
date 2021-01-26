#include "PowerFist.hpp"

PowerFist::PowerFist() : AWeapon("Power Fist", 8, 50) {}

PowerFist::~PowerFist() {}

PowerFist::PowerFist(PowerFist const &fist) : AWeapon(fist) {}

PowerFist &PowerFist::operator=(PowerFist const &fist)
{
	AWeapon::operator=(fist);
	return *this;
}

void PowerFist::attack() const
{
	std::cout << "* pschhh... SBAM! *" << std::endl;
}
