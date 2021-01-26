#ifndef AWEAPON_HPP
#define AWEAPON_HPP

#include <iostream>

class AWeapon
{
	private:
		std::string name;
		int damage;
		int AP_cost;
	public:
		AWeapon(std::string const &	name, int apcost, int damage);
		virtual ~AWeapon();
		AWeapon(AWeapon const &weapon);
		AWeapon &operator=(AWeapon const &weapon);
		std::string getName() const;
		int getAPCost() const;
		int getDamage() const;
		virtual void attack() const = 0;
};

#endif