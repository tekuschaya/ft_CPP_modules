#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle() : AWeapon("Plasma Rifle", 5, 21) {}

PlasmaRifle::~PlasmaRifle() {}

PlasmaRifle::PlasmaRifle(PlasmaRifle const &plasma) : AWeapon(plasma) {}

PlasmaRifle &PlasmaRifle::operator=(PlasmaRifle const &plasma)
{
	AWeapon::operator=(plasma);
	return *this;
} 

void PlasmaRifle::attack() const
{
	std::cout << "* piouuu piouuu piouuu *" << std::endl;
}
