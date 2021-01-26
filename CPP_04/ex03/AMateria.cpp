#include "AMateria.hpp"

AMateria::AMateria(std::string const &type)
{
	this->_type = type;
	this->_xp = 0;
}

AMateria::~AMateria() {}

AMateria::AMateria(AMateria const &materia)
{
	*this = materia;
}

AMateria &AMateria::operator=(AMateria const &materia)
{
	this->_type = materia._type;
	this->_xp = materia._xp;
	return (*this);
}

std::string const &AMateria::getType() const
{
	return (this->_type);
}

unsigned int AMateria::getXP() const
{
	return (this->_xp);
}

void AMateria::use(ICharacter &)
{
	this->_xp += 10;
}