#include "Pony.hpp"

Pony::Pony(std::string name, std::string color)
{
	pony_name = name;
	pony_color = color;
}

void Pony::eat()
{
	std::cout << "My name is " << this->pony_name;
	std::cout << " and I'm eating right now" << std::endl;
}