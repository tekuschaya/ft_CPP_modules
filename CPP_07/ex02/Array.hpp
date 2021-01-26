#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>

template <typename T>
class Array
{
	private:
		T *arr;
		unsigned int n;
	public:
		Array();
		Array(unsigned int n);
		~Array();
		Array(Array const &arr);
		Array &operator=(Array const &arr);
		T &operator[](unsigned int n) const;
		unsigned int sizeArray() const;
};

#endif