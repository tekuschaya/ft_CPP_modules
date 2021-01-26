#include "Base.hpp"
#include <ctime>

Base *generate(void)
{
	srand(time(NULL));
	int i = rand() % 30;
	std::cout << i << std::endl;
	if (i < 10)
		return (new A);
	else if (i >= 10 && i < 20)
		return (new B);
	else
		return (new C);
}

void identify_from_pointer(Base *p)
{
	if (dynamic_cast<A*>(p))
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "B" << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << "C" << std::endl;
}

void identify_from_reference(Base &p)
{
	try
	{
		A a = dynamic_cast<A&>(p);
		std::cout << "A" << std::endl;
	}
	catch(const std::exception& e) {}
	try
	{
		B b = dynamic_cast<B&>(p);
		std::cout << "B" << std::endl;
	}
	catch(const std::exception& e) {}
	try
	{
		C c = dynamic_cast<C&>(p);
		std::cout << "C" << std::endl;
	}
	catch(const std::exception& e) {}
}

int main()
{
	Base *tmp = generate();
	identify_from_pointer(tmp);
	identify_from_reference(*tmp);

	std::cout << "---------------------------" << std::endl;

	Base *tmp1 = generate();
	identify_from_pointer(tmp1);
	identify_from_reference(*tmp1);

	std::cout << "---------------------------" << std::endl;

	Base *tmp2 = generate();
	identify_from_pointer(tmp2);
	identify_from_reference(*tmp2);

	delete tmp;
	delete tmp1;
	delete tmp2;
	return 0;
}