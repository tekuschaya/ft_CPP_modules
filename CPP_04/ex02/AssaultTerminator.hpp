#ifndef ASSAULTTERMINATOR_HPP
#define ASSAULTTERMINATOR_HPP

#include "ISpaceMarine.hpp"
#include <iostream>

class AssaultTerminator : public ISpaceMarine
{
	public:
		AssaultTerminator();
		virtual ~AssaultTerminator();
		AssaultTerminator(AssaultTerminator const &term);
		AssaultTerminator &operator=(AssaultTerminator const &);
		virtual AssaultTerminator* clone() const;
		virtual void battleCry() const;
		virtual void rangedAttack() const;
		virtual void meleeAttack() const;
};

#endif