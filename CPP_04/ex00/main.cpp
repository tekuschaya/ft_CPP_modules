#include "Sorcerer.hpp"
#include "Peon.hpp"

int main()
{
	Sorcerer robert("Robert", "the Magnificent");
	Victim jim("Jimmy");
	Peon joe("Joe");
	std::cout << robert << jim << joe;
	robert.polymorph(jim);
	robert.polymorph(joe);
	std::cout << "---------------------------------------" << std::endl;
	Sorcerer richard("Richard", "the Horrific");
	Victim bob("Bob");
	Peon rob("Rob");
	std::cout << richard;
	std::cout << bob;
	std::cout << rob;
	robert.polymorph(bob);
	robert.polymorph(rob);
	std::cout << "---------------------------------------" << std::endl;
	return 0;
}