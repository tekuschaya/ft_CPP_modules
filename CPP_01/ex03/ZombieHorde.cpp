#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(int N)
{
	int i = 0;
	type = "clever_zombie"; 
	horde = new Zombie[N];
	std::string names[] = {"Jonny", "Emma", "Liam", "Brad", "Jennifer", "Leo", "Will", "Angelina"};
	while (i < N)
	{
		horde[i].set_name(names[rand() %8]);
		horde[i].set_type(type);
		horde[i].announce();
		i++;
	}
}

ZombieHorde::~ZombieHorde()
{
	delete [] horde;
}