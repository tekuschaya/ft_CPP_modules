#include "Pony.hpp"

void ponyOnTheHeap()
{
	std::cout << "pony on the heap" << std::endl;
	Pony *first = new Pony("First", "white");
	first->eat();
	std::cout << "address of First " << first << std::endl;
	delete first;
	std::cout << "the end of First" << std::endl;
}

void ponyOnTheStack()
{
	std::cout << "pony on the stack" << std::endl;
	Pony second("Second", "black");
	second.eat();
	std::cout << "address of Second " << &second << std::endl;
	std::cout << "the end of Second" << std::endl;
}

int main()
{
	ponyOnTheHeap();
	std::cout << std::endl;
	ponyOnTheStack();
	return 0;
}