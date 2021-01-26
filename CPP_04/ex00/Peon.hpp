#ifndef PEON_HPP
#define PEON_HPP

#include "Victim.hpp"

class Peon : public Victim
{
	public:
		Peon(std::string new_name);
		virtual ~Peon();
		Peon(Peon const &peon);
		Peon &operator=(Peon const &peon);
		virtual void getPolymorphed() const;
};

#endif