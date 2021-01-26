#include <iostream>

void MemoryLeak()
{
	std::string* panther = new std::string("String panther");
	std::cout << *panther << std::endl;
	delete panther;
}

int main()
{
	MemoryLeak();
	return 0;
}