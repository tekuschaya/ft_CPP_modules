#include "Victim.hpp"

Victim::Victim(std::string new_name)
{
	this->name = new_name;
	std::cout << "Some random victim called " << this->name << " just appeared!" << std::endl;
}

Victim::~Victim()
{
	std::cout << "Victim " << this->name << " just died for no apparent reason!" << std::endl;
}

Victim::Victim(Victim const &vict)
{
	*this = vict;
}

Victim &Victim::operator=(Victim const &vict)
{
	this->name = vict.name;
	return *this;
}

std::string Victim::getName() const
{
	return (this->name);
}

void Victim::getPolymorphed() const
{
	std::cout << this->name << " has been turned into a cute little sheep!" << std::endl;
}

std::ostream &operator<<(std::ostream &out, const Victim &vict)
{
	out << "I am " << vict.getName() << ", and I like otters!" << std::endl;
	return (out);
}

