#include "Squad.hpp"

Squad::Squad()
{
	this->count = 0;
}

Squad::~Squad() 
{
	ISpaceMarine *first;
	int i = 0;
	while (i < this->getCount())
	{
		first = this->list_squad.front();
		this->list_squad.pop_front();
		delete first;
		i++;
	}
}

Squad::Squad(Squad const &squad)
{
	*this = squad;
}

Squad &Squad::operator=(Squad const &squad)
{
	ISpaceMarine *first;
	int i = 0;
	while (i < this->getCount())
	{
		first = this->list_squad.front();
		this->list_squad.pop_front();
		if (first)
			delete first;
		i++;
	}
	this->count = squad.count;
	std::list <ISpaceMarine*>::const_iterator it;
	it = this->list_squad.begin();
	i = 0;
	while (i < squad.getCount())
	{
		this->list_squad.push_back((*it)->clone());
		it++;
		i++;
	}
	return (*this);
}

int Squad::getCount() const
{
	return (this->count);
}

ISpaceMarine *Squad::getUnit(int number) const
{
	if (number < 0 || number >= this->getCount())
		return (nullptr);
	std::list <ISpaceMarine*>::const_iterator it;
	it = this->list_squad.begin();
	int i = 0;
	while (i < number)
	{
		it++;
		i++;
	}
	return (*it);
}

int Squad::push(ISpaceMarine *space)
{
	std::list <ISpaceMarine*>::const_iterator it;
	it = this->list_squad.begin();
	int i = 0;
	if (!space)
		return (this->getCount());
	while (i < this->getCount())
	{
		if (*it == space)
			return (this->getCount());
		i++;
		it++;
	}
	this->list_squad.push_back(space);
	this->count += 1;
	return (this->count);
}