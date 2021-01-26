#include "Bureaucrat.hpp"

int main()
{
	Bureaucrat bob("Bob", 4);
	Bureaucrat joe("Joe", 7);
	Form new_form("New form", 3, 5);
	std::cout << new_form << std::endl;
	try
	{
		Form new_form1("New form1", 151, 5);
		std::cout << new_form1 << std::endl;
	}
	catch(std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << "--------------------------------" << std::endl;
	try
	{
		std::cout << bob << std::endl;
		bob.signForm(new_form);
	}
	catch(std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << "--------------------------------" << std::endl;
	try
	{
		std::cout << bob << std::endl;
		bob.incrementGrade();
		std::cout << bob << std::endl;
		bob.signForm(new_form);
		std::cout << new_form << std::endl;
	}
	catch(std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << "--------------------------------" << std::endl;
	try
	{
		joe.incrementGrade();
		std::cout << joe << std::endl;
		joe.incrementGrade();
		std::cout << joe << std::endl;
		joe.incrementGrade();
		std::cout << joe << std::endl;
		joe.incrementGrade();
		std::cout << joe << std::endl;
		joe.signForm(new_form);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	return 0;
}