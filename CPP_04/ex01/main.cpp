#include "AWeapon.hpp"
#include "Character.hpp"
#include "Enemy.hpp"
#include "RadScorpion.hpp"
#include "SuperMutant.hpp"
#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"

int main() 
{
Character* me = new Character("me");

std::cout << *me;

Enemy* b = new RadScorpion();

AWeapon* pr = new PlasmaRifle();
AWeapon* pf = new PowerFist();

me->equip(pr);
std::cout << *me;
me->equip(pf);

me->attack(b);
std::cout << *me;
me->equip(pr);
std::cout << *me;
me->attack(b);
std::cout << *me;
me->attack(b);
std::cout << *me;

std::cout << "----------------------------------------" << std::endl;

Enemy *a = new SuperMutant();
me->attack(a);
std::cout << *me;
std::cout << "HP of Super Mutant = " << a->getHP() << std::endl;
me->equip(pf);
std::cout << *me;
me->attack(a);
std::cout << "HP of Super Mutant = " << a->getHP() << std::endl;
std::cout << *me;
me->attack(a);
std::cout << "HP of Super Mutant = " << a->getHP() << std::endl;
std::cout << *me;
me->attack(a);
std::cout << "HP of Super Mutant = " << a->getHP() << std::endl;
std::cout << *me;
me->recoverAP();
std::cout << *me;
me->attack(a);
std::cout << "HP of Super Mutant = " << a->getHP() << std::endl;
std::cout << *me;

delete me;
delete pr;
delete pf;
delete a;
return 0;
}