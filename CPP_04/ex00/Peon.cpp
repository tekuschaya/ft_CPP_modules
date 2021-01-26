#include "Peon.hpp"

Peon::Peon(std::string new_name) : Victim(new_name)
{
	this->name = new_name;
	std::cout << "Zog zog." << std::endl;
}

Peon::~Peon()
{
	std::cout << "Bleuark..." << std::endl;
}

Peon::Peon(Peon const &peon) : Victim(peon)
{
	*this = peon;
}

Peon &Peon::operator=(Peon const &peon)
{
	this->name = peon.name;
	return *this;
}

void Peon::getPolymorphed() const
{
	std::cout << this->name << " has been turned a pink pony!" << std::endl;
}


