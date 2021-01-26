#include "Cure.hpp"

Cure::Cure() : AMateria("cure") {}

Cure::~Cure() {}

Cure::Cure(Cure const &Cure) : AMateria(Cure) {}

Cure &Cure::operator=(Cure const &)
{
	return (*this);
}

AMateria *Cure::clone() const
{
	return (new Cure(*this));
}

void Cure::use(ICharacter &target)
{
	AMateria::use(target);
	std::cout << "* heals " << target.getName() << "\'s wounds *" << std::endl;
}