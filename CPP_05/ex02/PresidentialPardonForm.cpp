#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form(target, 25, 5), target(target) {}

PresidentialPardonForm::~PresidentialPardonForm() {}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &pres) : Form(pres) {}

PresidentialPardonForm &PresidentialPardonForm::operator=(PresidentialPardonForm const &pres)
{
	Form::operator=(pres);
	return (*this);
}

void PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
	Form::execute(executor);
	std::cout << this->target << " has been pardoned by Zafod Beeblebrox." << std::endl;
}