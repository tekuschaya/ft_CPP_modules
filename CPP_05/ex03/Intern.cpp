#include "Intern.hpp"

Intern::Intern() {}

Intern::~Intern() {}

Intern::Intern(Intern const &intern)
{
	*this = intern;
}

Intern &Intern::operator=(Intern const &intern)
{
	(void)intern;
	return (*this);
}

Form *shruberryCreation(std::string target)
{
	return (new ShrubberyCreationForm(target));
}

Form *robotomyRequest(std::string target)
{
	return (new RobotomyRequestForm(target));
}

Form *presidentialPardon(std::string target)
{
	return (new PresidentialPardonForm(target));
}

Form *Intern::makeForm(std::string nameForm, std::string targetForm)
{
	Form *tmp = nullptr;
	typedef struct		s_form
	{
		std::string		name;
		Form			*(*func)(std::string);
	}					t_form;
	t_form forms[3] = {{"shrubbery creation",  shruberryCreation}, 
	{"robotomy request", robotomyRequest}, {"presidential pardon", presidentialPardon}};
	for (int i = 0; i < 3; i++)
	{
		if (nameForm == forms[i].name)
		{
			std::cout << "Intern creates " << nameForm << " form" << std::endl;
			tmp = forms[i].func(targetForm);
			return (tmp);
		}
	}
	std::cout << "Impossible to create this form" << std::endl;
	return (tmp);
}