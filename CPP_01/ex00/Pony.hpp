#ifndef PONY_HPP
#define PONY_HPP

#include <string>
#include <iostream>

class Pony
{
	private:
		std::string pony_name;
		std::string pony_color;
	public:
		void eat();
		Pony(std::string name, std::string color);
};

#endif