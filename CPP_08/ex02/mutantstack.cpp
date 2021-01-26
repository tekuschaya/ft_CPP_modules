#include "mutantstack.hpp"

template <typename T>
MutantStack<T>::MutantStack() {}

template <typename T>
MutantStack<T>::~MutantStack() {}

template <typename T>
MutantStack<T>::MutantStack(MutantStack const &mutant)
{
	*this = mutant;
}

template <typename T>
MutantStack<T> &MutantStack<T>::operator=(MutantStack const &)
{
	return (*this);
}

template <typename T>
typename MutantStack<T>::iterator MutantStack<T>::begin()
{
	return (&this->top());
}

template <typename T>
typename MutantStack<T>::iterator MutantStack<T>::end()
{
	return (&this->top() - this->size());
}

template <typename T>
MutantStack<T>::iterator::iterator(T *iter)
{
	this->iter = iter;
}

template <typename T>
MutantStack<T>::iterator::~iterator() {}

template <typename T>
MutantStack<T>::iterator::iterator(MutantStack::iterator const &iter)
{
	*this = iter;
}

template <typename T>
typename MutantStack<T>::iterator &MutantStack<T>::iterator::operator=(MutantStack::iterator const &iter)
{
	this->iter = iter.iter;
	return (*this);
}

template <typename T>
T &MutantStack<T>::iterator::operator*()
{
	return (*this->iter);
}

template <typename T>
typename MutantStack<T>::iterator &MutantStack<T>::iterator::operator++()
{
	this->iter--;
	return (*this);
}

template <typename T>
typename MutantStack<T>::iterator &MutantStack<T>::iterator::operator--()
{
	this->iter++;
	return (*this);
}

template <typename T>
bool MutantStack<T>::iterator::operator!=(MutantStack::iterator const &iter)
{
	if (this->iter != iter.iter)
		return true;
	return false;
}