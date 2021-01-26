#include "Zombie.hpp"

void Zombie::announce()
{
	std::cout << "<" << this->zombie_name << " (" << this->zombie_type << ")>";
	std::cout << " Braiiiiiiinnnssss..." << std::endl;
}

void Zombie::set_type(std::string type)
{
	this->zombie_type = type;
}

void Zombie::set_name(std::string name)
{
	this->zombie_name = name;
}