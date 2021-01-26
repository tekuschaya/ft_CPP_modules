#include "Convert.hpp"

Convert::Convert(std::string str)
{
	this->number = std::stod(str);
}

Convert::~Convert() {}

Convert::Convert(Convert const &conv)
{
	*this = conv;
}

Convert &Convert::operator=(Convert const &)
{
	return (*this);
}

void Convert::convertToInt()
{
	std::cout << "int: ";
	if (std::isnan(this->number) || std::isinf(this->number) || this->number <= -2147483649 || this->number >= 2147483648)
		std::cout << "impossible" << std::endl;
	else
		std::cout << static_cast<int>(this->number) << std::endl;
}

void Convert::convertToChar()
{
	std::cout << "char: ";
	if (this->number >= 32 && this->number < 127)
		std::cout << "\'" << static_cast<char>(this->number) << "\'" << std::endl;
	else if (this->number >= 0 && this->number < 32)
		std::cout << "Non displayable" << std::endl;
	else
		std::cout << "impossible" << std::endl;
}

void Convert::convertToFloat()
{
	float f = static_cast<float>(this->number);
	std::cout << "float: ";
	if (std::isnan(this->number) || std::isinf(this->number) ||
	(f - static_cast<int>(f)) != 0 || f >= 1000000 || f <= -1000000)
		std::cout << f << 'f' << std::endl;
	else
		std::cout << f << ".0f" << std::endl;
}

void Convert::convertToDouble()
{
	std::cout << "double: ";
	if ((this->number - static_cast<int>(this->number)) != 0 || std::isnan(this->number) ||
	std::isinf(this->number) || this->number >= 1000000 || this->number <= -1000000)
		std::cout << this->number << std::endl;
	else
		std::cout << this->number << ".0" << std::endl;
}