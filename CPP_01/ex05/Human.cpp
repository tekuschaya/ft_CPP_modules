#include "Human.hpp"

std::string Human::identify() const
{
	return (human_brain->identify());
}

const Brain &Human::getBrain() const
{
	return (*human_brain);
}

Human::Human()
{
	human_brain = new Brain();
}

Human::~Human()
{
	delete human_brain;
}