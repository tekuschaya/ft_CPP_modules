#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Intern.hpp"

int main()
{
	Intern someRandomIntern;
	Form* rrf;
	rrf = someRandomIntern.makeForm("robotomy request", "Bender");
	std::cout << *rrf << std::endl;
	Form *test1;
	Form *test2;
	Form *test3;
	test1 = someRandomIntern.makeForm("presidential pardon", "Qwerty");
	std::cout << *test1 << std::endl;
	test2 = someRandomIntern.makeForm("shrubbery creation", "qqq111");
	std::cout << *test2 << std::endl;
	test3 = someRandomIntern.makeForm("test", "test");

	delete rrf;
	delete test1;
	delete test2;

	return 0;
}