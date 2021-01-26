#include "RadScorpion.hpp"

RadScorpion::RadScorpion() : Enemy(80, "RadScorpion")
{
	std::cout << "* click click click *" << std::endl;
}

RadScorpion::~RadScorpion()
{
	std::cout << "* SPROTCH *" << std::endl;
}

RadScorpion::RadScorpion(RadScorpion const &scorp) : Enemy(scorp) {}

RadScorpion &RadScorpion::operator=(RadScorpion const &scorp)
{
	Enemy::operator=(scorp);
	return *this;
}

void RadScorpion::takeDamage(int damage)
{
	Enemy::takeDamage(damage);
}