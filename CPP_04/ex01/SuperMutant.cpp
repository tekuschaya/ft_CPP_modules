#include "SuperMutant.hpp"

SuperMutant::SuperMutant() : Enemy(170, "Super Mutant")
{
	std::cout << "Gaaah. Me want smash heads!" << std::endl;
}

SuperMutant::~SuperMutant()
{
	std::cout << "Aaargh..." << std::endl;
}

SuperMutant::SuperMutant(SuperMutant const &mutant) : Enemy(mutant) {}

SuperMutant &SuperMutant::operator=(SuperMutant const &mutant)
{
	Enemy::operator=(mutant);
	return *this;
}

void SuperMutant::takeDamage(int damage)
{
	Enemy::takeDamage(damage - 3);
}