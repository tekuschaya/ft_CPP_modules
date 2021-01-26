#include "AWeapon.hpp"

AWeapon::AWeapon(std::string const &name, int apcost, int damage)
{
	this->name = name;
	this->AP_cost = apcost;
	this->damage = damage;
}

AWeapon::~AWeapon() {}

AWeapon::AWeapon(AWeapon const &weapon)
{
	*this = weapon;
}

AWeapon &AWeapon::operator=(AWeapon const &weapon)
{
	this->name = weapon.name;
	this->AP_cost = weapon.AP_cost;
	this->damage = weapon.damage;
	return *this;
}

std::string AWeapon::getName() const
{
	return (this->name);
}

int AWeapon::getAPCost() const
{
	return (this->AP_cost);
}

int AWeapon::getDamage() const
{
	return (this->damage);
}
