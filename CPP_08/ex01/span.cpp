#include "span.hpp"

Span::Span(unsigned int n)
{
	this->number = n;
}

Span::~Span() 
{
	this->arr.clear();
}

Span::Span(Span const &span)
{
	*this = span;
}

Span &Span::operator=(Span const &span)
{
	this->number = span.number;
	this->arr = span.arr;
	return (*this);
}

const char *Span::AddElemError::what() const throw()
{
	return ("Error. Imposssible to add new item");
}

const char *Span::NoSpanError::what() const throw()
{
	return ("Error. There is no span to find");
}

void Span::addNumber(int n)
{
	if (this->arr.size() == this->number)
		throw AddElemError();
	this->arr.push_back(n);
}

int Span::shortestSpan() const
{
	if (this->arr.size() < 2)
		throw NoSpanError();
	std::vector<int> sortArr = this->arr;
	std::sort(sortArr.begin(), sortArr.end());
	std::vector<int>::iterator it = sortArr.begin();
	int diff = (*(sortArr.begin() + 1) - *sortArr.begin());
	if (!diff)
		return 0;
	while (it + 1 < sortArr.end())
	{
		if (*(it + 1) - *it < diff)
		{
			diff = *(it + 1) - *it;
			if (!diff)
				return 0;
		}
		it++;
	}
	return diff;
	/*unsigned long i = 0;
	int first = sortArr[0];
	while (i < sortArr.size())
	{
		if (sortArr[i] != first)
			return (sortArr[i] - first);
		i++;
	}
	return 0;*/
}

int Span::longestSpan() const
{
	if (this->arr.size() < 2)
		throw NoSpanError();
	return (*(std::max_element(this->arr.begin(), this->arr.end())) -
	*(std::min_element(this->arr.begin(), this->arr.end())));
}

void Span::fillRandomNumbers()
{
	this->arr.resize(this->number);
	std::srand(unsigned(std::time(nullptr)));
	std::generate(this->arr.begin(), this->arr.end(), std::rand);
}
