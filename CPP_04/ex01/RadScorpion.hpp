#ifndef RADSCORPION_HPP
#define RADSCORPION_HPP

#include "Enemy.hpp"

class RadScorpion : public Enemy
{
	public:
		RadScorpion();
		virtual ~RadScorpion();
		RadScorpion(RadScorpion const &scorp);
		RadScorpion &operator=(RadScorpion const &scorp);
    	virtual void takeDamage(int damage);
};

#endif