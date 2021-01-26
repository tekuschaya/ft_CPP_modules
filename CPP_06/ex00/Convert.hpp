#ifndef CONVERT_HPP
#define CONVERT_HPP

#include <iostream>
#include <cmath>

class Convert
{
	private:
		double number;
	public:
		Convert(std::string str);
		~Convert();
		Convert(Convert const &conv);
		Convert &operator=(Convert const &conv);

		void convertToInt();
		void convertToChar();
		void convertToFloat();
		void convertToDouble();
};

#endif