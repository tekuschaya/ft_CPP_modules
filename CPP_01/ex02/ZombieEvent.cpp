#include "ZombieEvent.hpp"

Zombie *ZombieEvent::newZombie(std::string name)
{
	Zombie *tmp = new Zombie;
	tmp->set_name(name);
	if (this->type.length() > 0)
		tmp->set_type(this->type);
	else
		tmp->set_type("clever_zombie");
	tmp->announce();
	return (tmp);
}

void ZombieEvent::setZombieType(std::string type)
{
	this->type = type;
}

void ZombieEvent::randomChump()
{
	int i = 0;
	std::string names[] = {"Jonny", "Emma", "Liam", "Brad", "Jennifer", "Leo", "Will", "Angelina"};
	while (i < 10)
	{
		Zombie random;
		random.set_name(names[rand() % 8]);
		random.set_type(this->type);
		random.announce();
		i++;
	}
}