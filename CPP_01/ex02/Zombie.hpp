#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

class Zombie
{
	private:
		std::string zombie_name;
		std::string zombie_type;
	public:
		void announce();
		void set_name(std::string name);
		void set_type(std::string type);
};

#endif