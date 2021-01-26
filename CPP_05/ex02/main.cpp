#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"

int main()
{
	Bureaucrat bob("Bob", 4);
	Bureaucrat joe("Joe", 70);

	ShrubberyCreationForm form("Shrub");
	RobotomyRequestForm form1("Robot");
	PresidentialPardonForm form2("Pres");

	try
	{
		std::cout << bob << std::endl;
		bob.signForm(form);
		bob.executeForm(form);
		joe.signForm(form1);
		joe.signForm(form);
	}
	catch(std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << "----------------------------" << std::endl;
	try
	{
		bob.executeForm(form1);
		joe.executeForm(form1);
	}
	catch(std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << "----------------------------" << std::endl;
	try
	{
		bob.executeForm(form2);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
		std::cout << "----------------------------" << std::endl;
	try
	{
		bob.signForm(form2);
		bob.executeForm(form2);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	return 0;
}