#include "Sorcerer.hpp"

Sorcerer::Sorcerer(std::string new_name, std::string new_title)
{
	this->name = new_name;
	this->title = new_title;
	std::cout << this->name << ", " << this->title << ", is born!" << std::endl;
}

Sorcerer::~Sorcerer()
{
	std::cout << this->name << ", " << this->title;
	std::cout << ", is dead. Consequences will never be the same!" << std::endl;
}

Sorcerer::Sorcerer(Sorcerer const &sorc)
{
	*this = sorc;
}

Sorcerer &Sorcerer::operator=(Sorcerer const &sorc)
{
	this->name = sorc.name;
	this->title = sorc.title;
	return *this;
}

std::string Sorcerer::getName() const
{
	return (this->name);
}

std::string Sorcerer::getTitle() const
{
	return (this->title);
}

void Sorcerer::polymorph(Victim const &victim) const
{
	victim.getPolymorphed();
}

std::ostream &operator<<(std::ostream &out, const Sorcerer &sorc)
{
	out << "I am " << sorc.getName() << ", " << sorc.getTitle() << ", and I like ponies!" << std::endl;
	return (out);
}

