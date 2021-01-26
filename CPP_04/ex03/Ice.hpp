#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"

class Ice : public AMateria
{
	public:
		Ice();
		virtual ~Ice();
		Ice(Ice const &ice);
		Ice &operator=(Ice const &ice);

		virtual AMateria* clone() const;
		virtual void use(ICharacter& target);
};

#endif