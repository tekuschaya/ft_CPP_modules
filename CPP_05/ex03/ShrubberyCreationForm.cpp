#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form(target, 145, 137), target(target) {}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &pres) : Form(pres) {}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm const &pres)
{
	Form::operator=(pres);
	return (*this);
}

void ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
	Form::execute(executor);
	std::ofstream new_file(this->target + "_shrubbery");
	if (!new_file.is_open())
		std::cerr << "File cannot be created or opened" << std::endl;
	else
	{
		new_file << "			* " << std::endl
				 << "         _/   \\_" << std::endl
				 << "        \\      /" << std::endl
				 << "         /_   _\\" << std::endl
				 << "         / +   \\" << std::endl
				 << "        /    -  \\" << std::endl
				 << "       /   @     \\" << std::endl
				 << "      / +      @  \\" << std::endl
				 << "     /      '  *   \\" << std::endl
				 << "    / _   @    _    \\" << std::endl
				 << "   *-----------------*" << std::endl
				 << "       [__________]" << std::endl
				 << "        \\_______/" << std::endl;
		new_file.close();
	}
}