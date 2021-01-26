#include "Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	this->number = 0;
}

Fixed::Fixed(const Fixed &fixed)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = fixed;
}

Fixed::Fixed(const int n)
{
	std::cout << "Int constructor called" << std::endl;
	this->number = (n << point_value);
}

Fixed::Fixed(const float n)
{
	std::cout << "Float constructor called" << std::endl;
	this->number = (int)roundf((n * 256));
}

Fixed &Fixed::operator = (Fixed const &fixed)
{
	std::cout << "Assignation operator called" << std::endl;
	this->number = fixed.getRawBits();
	return (*this);
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits(void) const
{
	return (this->number);
}

void Fixed::setRawBits(int const raw)
{
	this->number = raw;
}

int Fixed::toInt(void) const
{
	return (this->number >> point_value);
}

float Fixed::toFloat(void) const
{
	return ((float)this->number / 256);
}

std::ostream &operator<<(std::ostream &os, Fixed const &fixed)
{
	os << fixed.toFloat();
	return (os);
}