#include "Array.hpp"

template <typename T>
Array<T>::Array()
{
	this->n = 0;
	this->arr = new T[0];
}

template <typename T>
Array<T>::Array(unsigned int n)
{
	this->n = n;
	this->arr = new T[n];
}

template <typename T>
Array<T>::~Array()
{
	delete [] this->arr;
}

template <typename T>
Array<T>::Array(Array const &arr)
{
	*this = arr;
}

template <typename T>
Array<T> &Array<T>::operator=(Array const &arr)
{
	delete [] this->arr;
	this->arr = new T(arr.n);
	for (unsigned int i = 0; i < arr.n; i++)
		this->arr[i] = arr[i];
	this->n = arr.n;
	return (*this);
}

template <typename T>
T &Array<T>::operator[](unsigned int i) const
{
	if (i >= this->n)
		throw std::exception();
	return (this->arr[i]);
}

template <typename T>
unsigned int Array<T>::sizeArray() const
{
	return (this->n);
}