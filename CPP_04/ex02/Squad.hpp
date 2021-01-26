#ifndef SQUAD_HPP
#define SQUAD_HPP

#include "ISquad.hpp"
#include <iostream>
#include <list>

class Squad : public ISquad
{
	private:
		int	count;
		std::list <ISpaceMarine*> list_squad;
	public:
		Squad();
		virtual ~Squad();
		Squad(Squad const &squad);
		Squad &operator=(Squad const &squad);

		virtual int getCount() const;
		virtual ISpaceMarine* getUnit(int number) const;
		virtual int push(ISpaceMarine *space);
};

#endif
