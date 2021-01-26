#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "Form.hpp"


class PresidentialPardonForm : public Form
{
	private:
		std::string const target;
	public:
		PresidentialPardonForm();
		PresidentialPardonForm(std::string target);
		~PresidentialPardonForm();
		PresidentialPardonForm(PresidentialPardonForm const &pres);
		PresidentialPardonForm &operator=(PresidentialPardonForm const &pres);

		void execute(Bureaucrat const &executor) const;
};

#endif
