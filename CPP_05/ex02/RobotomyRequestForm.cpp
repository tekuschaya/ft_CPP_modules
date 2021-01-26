#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form(target, 72, 45), target(target) {}

RobotomyRequestForm::~RobotomyRequestForm() {}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &pres) : Form(pres) {}

RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm const &pres)
{
	Form::operator=(pres);
	return (*this);
}

void RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
	Form::execute(executor);
	std::cout << "Drrrrrrr brrrrrrrr BZZZZZZBZZZZZ " << std::endl << this->target;
	std::cout << " has been robotomized successfully 50% of the time." << std::endl;
}