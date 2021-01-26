#ifndef ZOMBIEHORDE_HPP
#define ZOMBIEHORDE_HPP

#include "Zombie.hpp"

class ZombieHorde
{
	private:
		Zombie *horde;
		std::string type;
	public:
		ZombieHorde(int N);
		~ZombieHorde();
};

#endif