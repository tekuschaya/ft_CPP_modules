#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "Form.hpp"
#include <fstream>

class ShrubberyCreationForm : public Form
{
	private:
		std::string const target;
	public:
		ShrubberyCreationForm();
		ShrubberyCreationForm(std::string target);
		~ShrubberyCreationForm();
		ShrubberyCreationForm(ShrubberyCreationForm const &rob);
		ShrubberyCreationForm &operator=(ShrubberyCreationForm const &rob);

		void execute(Bureaucrat const &executor) const;
};

#endif
