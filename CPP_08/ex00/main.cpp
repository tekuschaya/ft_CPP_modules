#include "easyfind.hpp"

int main()
{
	std::vector<int> tmp;
	std::vector<int>::iterator res;
	srand(time(NULL));
	for (int i = 0; i < 20; i++)
	{
		tmp.push_back(rand() % 50);
		std::cout << tmp[i] << " ";
	}
	std::cout << std::endl;
	try
	{
		res = easyfind(tmp, 2);
		std::cout << "Index of this elem = " << std::distance(tmp.begin(), res) << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << "Element not found" << std::endl;
	}

	std::cout << "-------------------------------" << std::endl;

	std::vector<int> tmp1;
	std::vector<int>::iterator res1;
	for (int i = 0; i < 20; i++)
	{
		tmp1.push_back(rand() % 5);
		std::cout << tmp1[i] << " ";
	}
	std::cout << std::endl;
	try
	{
		res1 = easyfind(tmp1, 2);
		std::cout << "Index of this elem = " << std::distance(tmp1.begin(), res1) << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << "Element not found" << std::endl;
	}

	std::cout << "-------------------------------" << std::endl;

	std::vector<char> tmp2;
	std::vector<char>::iterator res2;
	for (int i = 0; i < 20; i++)
	{
		tmp2.push_back(rand() % 62 + 65);
		std::cout << tmp2[i] << " ";
	}
	std::cout << std::endl;
	try
	{
		res2 = easyfind(tmp2, 65);
		std::cout << "Index of this elem = " << std::distance(tmp2.begin(), res2) << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << "Element not found" << std::endl;
	}
	return 0;
}