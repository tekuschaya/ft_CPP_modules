#include "Array.cpp"

int main()
{
	Array <int> arr(5);
	Array <double> arr1(8);
	Array <int> arr2;

	try
	{
		for (unsigned int i = 0; i < 5; i++)
			arr[i] = i;
		for (unsigned int i = 0; i < 10; i++)
			std::cout << arr[i] << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << "Index is out of range" << std::endl;
	}

	std::cout << "--------------------------------------" << std::endl;

	try
	{
		for (unsigned int i = 0; i < 8; i++)
			arr1[i] = i + 0.5;
		for (unsigned int i = 0; i < 10; i++)
			std::cout << arr1[i] << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << "Index is out of range" << std::endl;
	}

	std::cout << "--------------------------------------" << std::endl;
	
	try
	{
		std::cout << arr2[0] << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << "Index is out of range" << std::endl;
	}

	std::cout << "--------------------------------------" << std::endl;
	
	try
	{
		arr2 = arr;
		for (unsigned int i = 0; i < 10; i++)
			std::cout << arr2[i] << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << "Index is out of range" << std::endl;
	}
	
	return 0;
}