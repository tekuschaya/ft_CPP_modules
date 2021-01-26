#include "ZombieHorde.hpp"

int main()
{
	int N;

	std::cout << "Enter the number of zombies: ";
	std::cin >> N;
	if (N <= 0)
	{
		std::cout << "Incorrect number" << std::endl;
		return 1;
	}
	ZombieHorde zombies(N);
	return 0;
}