#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
class Form;
#include "Form.hpp"

class Bureaucrat
{
	private:
		std::string const name;
		int grade;
	public:
		Bureaucrat();
		Bureaucrat(std::string const name, int grade);
		~Bureaucrat();
		Bureaucrat(Bureaucrat const &bur);
		Bureaucrat &operator=(Bureaucrat const &bur);
		class GradeTooHighException : public std::exception
		{
			const char* what() const throw();
		};
		class GradeTooLowException : public std::exception
		{
			const char* what() const throw();
		};
		std::string const getName() const;
		int getGrade() const;
		void incrementGrade();
		void decrementGrade();
		void signForm(Form &form);
		void executeForm(Form const &form);
		
};

std::ostream &operator<<(std::ostream &out, const Bureaucrat &bur);

#endif
