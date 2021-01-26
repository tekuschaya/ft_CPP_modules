#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <stack>
#include <list>

template <typename T>
class MutantStack : public std::stack<T>
{
	public:
		MutantStack();
		~MutantStack();
		MutantStack(MutantStack const &mutant);
		MutantStack &operator=(MutantStack const &);
		class iterator
		{
			private:
				T *iter;
			public:
				iterator();
				iterator(T *iter);
				~iterator();
				iterator(iterator const &);
				iterator &operator=(iterator const &);
				T &operator*();
				iterator &operator++();
				iterator &operator--();
				bool operator!=(iterator const &);
		};
		iterator begin();
		iterator end();
};

#endif