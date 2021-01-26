#ifndef SORCERER_HPP
#define SORCERER_HPP

#include "Victim.hpp"

class Sorcerer
{
	private:
		std::string name;
		std::string title;
	public:
		Sorcerer();
		Sorcerer(std::string new_name, std::string new_title);
		~Sorcerer();
		Sorcerer(Sorcerer const &sorc);
		Sorcerer &operator=(Sorcerer const &sorc);
		std::string getName() const;
		std::string getTitle() const;
		void polymorph(Victim const &) const;
};

std::ostream &operator<<(std::ostream &out, const Sorcerer &sorc);

#endif