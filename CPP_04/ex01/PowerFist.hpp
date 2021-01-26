#ifndef POWERFIST_HPP
#define POWERFIST_HPP

#include "AWeapon.hpp"

class PowerFist : public AWeapon
{
	public:
		PowerFist();
		virtual ~PowerFist();
		PowerFist(PowerFist const &fist);
		PowerFist &operator=(PowerFist const &fist);
		virtual void attack() const;
};

#endif