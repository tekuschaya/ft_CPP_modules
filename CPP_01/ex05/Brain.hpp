#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>
#include <sstream>

class Brain
{
	private:
		std::string address;
	public:
		std::string identify() const;
		Brain();
};

#endif