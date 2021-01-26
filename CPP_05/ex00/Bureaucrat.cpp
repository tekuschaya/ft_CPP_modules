#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string const name, int grade) : name(name), grade(grade)
{
	if (this->grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (this->grade > 150)
		throw Bureaucrat::GradeTooLowException();
}

Bureaucrat::~Bureaucrat() {}

Bureaucrat::Bureaucrat(Bureaucrat const &bur)
{
	*this = bur;
}

Bureaucrat &Bureaucrat::operator=(Bureaucrat const &bur)
{
	this->grade = bur.grade;
	return (*this);
}

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Error. Grade too high");
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Error. Grade too low");
}

std::string const Bureaucrat::getName() const
{
	return (this->name);
}

int Bureaucrat::getGrade() const
{
	return (this->grade);
}

void Bureaucrat::incrementGrade()
{
	if (this->grade - 1 < 1)
		throw Bureaucrat::GradeTooHighException();
	this->grade--;
}
void Bureaucrat::decrementGrade()
{
	if (this->grade + 1 > 150)
		throw Bureaucrat::GradeTooLowException();
	this->grade++;
}

std::ostream &operator<<(std::ostream &out, const Bureaucrat &bur)
{
	out << bur.getName() << ", bureaucrat grade " << bur.getGrade();
	return out;
}