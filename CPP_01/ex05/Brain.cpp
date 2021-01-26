#include "Brain.hpp"

Brain::Brain()
{
	std::stringstream ss;
	ss << this;
	this->address = ss.str();
}

std::string Brain::identify() const
{
	return (this->address);
}