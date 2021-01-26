#include "iter.hpp"

class Test
{
	private:
		int _n;
	public:
		Test() : _n(42) { return; }
		int get() const { return this->_n; }
		int operator*(int n) const { return (this->_n * n); }
};

std::ostream &operator<<(std::ostream &out, Test const &test)
{
	out << test.get();
	return (out);
}

template <typename T>
void print(T const & x)
{
	std::cout << x << std::endl;
	return ;
}

template <typename T>
void multiplication(T const &x)
{
	std::cout << x * 5 << std::endl;
}

int main()
{
	int tab[] = {0, 1, 2, 3, 4};
	Test tab1[5];
	char tab2[] = {"Qwerty"};

	iter(tab, 5, print);
	std::cout << "----------------------------" << std::endl;
	iter(tab1, 5, print);
	std::cout << "----------------------------" << std::endl;
	iter(tab2, 6, print);
	std::cout << "----------------------------" << std::endl;
	iter(tab, 5, multiplication);
	std::cout << "----------------------------" << std::endl;
	iter(tab1, 5, multiplication);
	std::cout << "----------------------------" << std::endl;
	iter(tab2, 6, multiplication);
	return 0;
}