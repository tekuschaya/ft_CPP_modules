#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "Form.hpp"


class RobotomyRequestForm : public Form
{
	private:
		std::string const target;
	public:
		RobotomyRequestForm();
		RobotomyRequestForm(std::string target);
		~RobotomyRequestForm();
		RobotomyRequestForm(RobotomyRequestForm const &rob);
		RobotomyRequestForm &operator=(RobotomyRequestForm const &rob);

		void execute(Bureaucrat const &executor) const;
};

#endif
