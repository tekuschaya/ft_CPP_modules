#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
	private:
		int number;
		static const int point_value = 8;
	public:
		Fixed();
		Fixed(const Fixed &fixed);
		Fixed(const int n);
		Fixed(const float n);
		~Fixed();
		
		Fixed &operator = (Fixed const &fixed);
		int getRawBits(void) const;
		void setRawBits(int const raw);
		int toInt(void) const;
		float toFloat(void) const;
};

std::ostream &operator<<(std::ostream &os, const Fixed &what);

#endif