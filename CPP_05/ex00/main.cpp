#include "Bureaucrat.hpp"

int main()
{
	try
	{
		Bureaucrat jho("Jho", 148);
		std::cout << jho << std::endl;
		jho.decrementGrade();
		std::cout << jho << std::endl;
		jho.incrementGrade();
		std::cout << jho << std::endl;
		jho.decrementGrade();
		std::cout << jho << std::endl;
		jho.decrementGrade();
		std::cout << jho << std::endl;
		jho.decrementGrade();
		std::cout << jho << std::endl;
		jho.incrementGrade();
	}
	catch(const std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << "--------------------------------" << std::endl;
	try
	{
		Bureaucrat bob("Bob", 3);
		std::cout << bob << std::endl;
		bob.incrementGrade();
		std::cout << bob << std::endl;
		bob.incrementGrade();
		std::cout << bob << std::endl;
		bob.incrementGrade();
		std::cout << bob << std::endl;
	}
	catch(std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << "--------------------------------" << std::endl;
	try
	{
		Bureaucrat tom("Tom", 200);
		std::cout << tom << std::endl;
	}
	catch(const std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}
	return 0;
}