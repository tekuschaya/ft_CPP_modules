#ifndef TACTICALMARINE_HPP
#define TACTICALMARINE_HPP

#include "ISpaceMarine.hpp"
#include <iostream>

class TacticalMarine : public ISpaceMarine
{
public:
	TacticalMarine();
	virtual ~TacticalMarine();
	TacticalMarine(TacticalMarine const &tact);
	TacticalMarine &operator=(TacticalMarine const &);
	virtual TacticalMarine* clone() const;
	virtual void battleCry() const;
	virtual void rangedAttack() const;
	virtual void meleeAttack() const;
};

#endif