#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <vector>
#include <ctime>

template <typename T>

typename T::iterator easyfind(T &container, int n)
{
	typename T::iterator start = container.begin();
	typename T::iterator final = container.end();
	typename T::iterator search = std::find(start, final, n);
	if (search == final)
		throw std::exception();
	return (search);
}

#endif
