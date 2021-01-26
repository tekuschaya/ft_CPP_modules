#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template <typename T>
void iter(T *tab, int size, void (*func)(T const &tab))
{
	for (int i = 0; i < size; i++)
		func(tab[i]);
}

#endif
