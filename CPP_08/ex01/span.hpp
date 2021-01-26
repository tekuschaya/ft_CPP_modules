#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <vector>
#include <algorithm>
#include <ctime>

class Span
{
	private:
		std::vector <int> arr;
		unsigned int number;
		class AddElemError : public std::exception
		{
			const char *what() const throw();
		};
		class NoSpanError : public std::exception
		{
			const char *what() const throw();
		};

	public:
		Span(unsigned int n);
		~Span();
		Span(Span const &span);
		Span &operator=(Span const &span);
		void addNumber(int n);
		int shortestSpan() const;
		int longestSpan() const;
		void fillRandomNumbers();
};

#endif
