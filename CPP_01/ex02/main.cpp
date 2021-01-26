#include "ZombieEvent.hpp"

int main()
{
	ZombieEvent *halloween = new ZombieEvent;
	Zombie *one = new Zombie;
	one->set_name("Alex");
	one->set_type("clever_zombie");
	one->announce();
	delete one;
	halloween->setZombieType("stupid_zombie");
	Zombie *two = halloween->newZombie("Luci");
	delete two;
	halloween->setZombieType("slow_zombie");
	halloween->randomChump();
	return 0;
}