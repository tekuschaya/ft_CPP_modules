#include "span.hpp"

int main()
{
	Span sp = Span(5);
	sp.addNumber(5);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
	
	std::cout << "-------------------------------" << std::endl;

	try
	{
		sp.addNumber(18);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << "-------------------------------" << std::endl;

	Span test = Span(100000);
	try
	{
		test.addNumber(8);
		std::cout << test.shortestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << "-------------------------------" << std::endl;

	test.fillRandomNumbers();
	std::cout << "shortest: " << test.shortestSpan() << std::endl;
	std::cout << "longest: " << test.longestSpan() << std::endl;
	return 0;
}