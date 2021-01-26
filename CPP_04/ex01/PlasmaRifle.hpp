#ifndef PLASMARIFLE_HPP
#define PLASMARIFLE_HPP

#include "PlasmaRifle.hpp"
#include "AWeapon.hpp"

class PlasmaRifle : public AWeapon
{
	public:
		PlasmaRifle();
		virtual ~PlasmaRifle();
		PlasmaRifle(PlasmaRifle const &plasma);
		PlasmaRifle &operator=(PlasmaRifle const &plasma);
		virtual void attack() const;
};

#endif