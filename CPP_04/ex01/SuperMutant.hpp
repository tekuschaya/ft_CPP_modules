#ifndef SUPERMUTANT_HPP
#define SUPERMUTANT_HPP

#include "Enemy.hpp"

class SuperMutant : public Enemy
{
	public:
		SuperMutant();
		virtual ~SuperMutant();
		SuperMutant(SuperMutant const &scorp);
		SuperMutant &operator=(SuperMutant const &scorp);
        virtual void takeDamage(int damage);
};

#endif