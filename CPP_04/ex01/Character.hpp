#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "AWeapon.hpp"
#include "Enemy.hpp"

class Character
{
	private:
		std::string name;
		int number_of_AP;
		AWeapon *weapon;

	public:
		Character(std::string const &name);
		~Character();
		Character(Character const &character);
		Character &operator=(Character const &character);
		void recoverAP();
		void equip(AWeapon *weapon);
		void attack(Enemy *enemy);
		int getAP() const;
		AWeapon *getWeapon() const;
		std::string getName() const;
};

std::ostream &operator<<(std::ostream &out, const Character &character);

#endif