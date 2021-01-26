#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <iostream>
#include "ICharacter.hpp"

class ICharacter;

class AMateria
{
	private:
		unsigned int _xp;
		std::string _type;
	public:
		AMateria(std::string const &type);
		virtual ~AMateria();
		AMateria(AMateria const &materia);
		AMateria &operator=(AMateria const &materia);
		
		std::string const & getType() const;
		unsigned int getXP() const;
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);
};

#endif