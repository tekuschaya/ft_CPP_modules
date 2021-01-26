#ifndef VICTIM_HPP
#define VICTIM_HPP

#include <iostream>

class Victim
{
	protected:
		std::string name;
	public:
		Victim(std::string new_name);
		virtual ~Victim();
		Victim(Victim const &vict);
		Victim &operator=(Victim const &vict);
		std::string getName() const;
		virtual void getPolymorphed() const;

};

std::ostream &operator<<(std::ostream &out, const Victim &vict);

#endif