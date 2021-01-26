#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{
	private:
		int number;
		static const int point_value = 8;
	public:
		Fixed();
		Fixed(Fixed const &fixed);
		~Fixed();
		
		Fixed &operator = (Fixed const &fixed);
		int getRawBits(void) const;
		void setRawBits(int const raw);
};

#endif