#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
class Bureaucrat;
#include "Bureaucrat.hpp"

class Form
{
	private:
		std::string const name;
		bool sign;
		int const gradeSign;
		int const gradeExec;
	public:
		Form();
		Form(std::string name, int grade_sign, int grade_exec);
		virtual ~Form();
		Form(Form const &form);
		Form &operator=(Form const &form);
		class GradeTooHighException : public std::exception
		{
			const char* what() const throw();
		};
		class GradeTooLowException : public std::exception
		{
			const char* what() const throw();
		};
		class UnsignedFormException : public std::exception
		{
			const char* what() const throw();
		};
		std::string getName() const;
		bool getSign() const;
		int getGradeSign() const;
		int getGradeExec() const;
		void beSigned(Bureaucrat &bur);
		virtual void execute(Bureaucrat const &executor) const;

};

std::ostream &operator<<(std::ostream &out, const Form &form);

#endif
