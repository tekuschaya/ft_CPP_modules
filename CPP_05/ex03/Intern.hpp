#ifndef INTERN_HPP
#define INTERN_HPP

#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class Intern
{
	public:
		Intern();
		~Intern();
		Intern(Intern const &intern);
		Intern &operator=(Intern const &intern);

		Form *makeForm(std::string nameForm, std::string targetForm);

};

#endif
