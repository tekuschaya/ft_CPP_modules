#include "Enemy.hpp"

Enemy::Enemy(int hp, std::string const &type)
{
	this->hp = hp;
	this->type = type;
}

Enemy::~Enemy() {}

Enemy::Enemy(Enemy const &enemy)
{
	*this = enemy;
}

Enemy &Enemy::operator=(Enemy const &enemy)
{
	this->hp = enemy.hp;
	this->type = enemy.type;
	return *this;
}

std::string Enemy::getType() const
{
	return (this->type);
}

int Enemy::getHP() const
{
	return (this->hp);
}

void Enemy::takeDamage(int damage)
{
	if (damage > 0)
		this->hp -= damage;
	if (this->hp < 0)
		this->hp = 0;
}
