#ifndef ENEMY_HPP
#define ENEMY_HPP

#include <iostream>

class Enemy 
{
	private:
		int hp;
		std::string type;
	public:
		Enemy(int hp, std::string const &type);
		virtual ~Enemy();
		Enemy(Enemy const &enemy);
		Enemy &operator=(Enemy const &enemy);
		std::string getType() const;
		int getHP() const;
        virtual void takeDamage(int damage);
};

#endif