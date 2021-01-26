#include "mutantstack.cpp"

int main()
{
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << mstack.top() << std::endl;
	mstack.pop();
	std::cout << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	//[...] 
	mstack.push(0);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::stack<int> s(mstack);

	std::cout << "-------------------------------" << std::endl;

	std::list<int> tmp;
	tmp.push_front(5);
	tmp.push_front(17);
	std::cout << tmp.front() << std::endl;
	tmp.pop_front();
	std::cout << tmp.size() << std::endl;
	tmp.push_front(3);
	tmp.push_front(5);
	tmp.push_front(737);
	tmp.push_front(0);
	std::list<int>::iterator it1 = tmp.begin();
	std::list<int>::iterator ite1 = tmp.end();
	++it1;
	--it1;
	while (it1 != ite1)
	{
		std::cout << *it1 << std::endl;
		++it1;
	}
	return 0;
}