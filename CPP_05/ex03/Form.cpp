#include "Form.hpp"

Form::Form(std::string name, int grade_sign, int grade_exec) : name(name), gradeSign(grade_sign), gradeExec(grade_exec) 
{
	if (this->gradeSign < 1 || this->gradeExec < 1)
		throw Form::GradeTooHighException();
	else if (this->gradeSign > 150 || this->gradeExec > 150)
		throw Form::GradeTooLowException();
	this->sign = false;
}

Form::~Form() {}

Form::Form(Form const &form) : name(form.name), sign(form.sign), gradeSign(form.gradeSign), gradeExec(form.gradeExec) {}

Form &Form::operator=(Form const &form)
{
	this->sign = form.sign;
	return (*this);
}

const char *Form::GradeTooHighException::what() const throw()
{
	return ("Error. Grade too high");
}

const char *Form::GradeTooLowException::what() const throw()
{
	return ("Error. Grade too low");
}

const char *Form::UnsignedFormException::what() const throw()
{
	return ("Error. Form isn't signed yet");
}

std::string Form::getName() const
{
	return (this->name);
}
bool Form::getSign() const
{
	return (this->sign);
}

int Form::getGradeSign() const
{
	return (this->gradeSign);
}

int Form::getGradeExec() const
{
	return (this->gradeExec);
}

void Form::beSigned(Bureaucrat &bur)
{
	if (this->gradeSign >= bur.getGrade())
		this->sign = true;
	else
		throw Form::GradeTooLowException();
}

void Form::execute(Bureaucrat const &executor) const
{
	if (executor.getGrade() > this->gradeExec)
		throw Form::GradeTooLowException();
	else if (!this->sign)
		throw Form::UnsignedFormException();
}

std::ostream &operator<<(std::ostream &out, const Form &form)
{
	out << "Form name is " << form.getName() << ", form gradeExec is " << form.getGradeExec();
	out << ", form gradeSign is " << form.getGradeSign();
	if (!form.getSign())
		out << " and this form isn't signed yet";
	else
		out << " and this form is already signed";
	return out;
}
