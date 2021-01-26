#include <iostream>

int main()
{
	std::string str = "HI THIS IS BRAIN";
	std::string &ref = str;
	std::string *ptr = &str;
	std::cout << "Reference: " << ref << std::endl;
	std::cout << "Pointer: " << *ptr << std::endl;
	return 0;
}