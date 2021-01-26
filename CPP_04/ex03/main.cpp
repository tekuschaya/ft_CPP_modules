#include "AMateria.hpp"
#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"
int main()
{
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	ICharacter* me = new Character("me");

	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);

	ICharacter* bob = new Character("bob");

	me->use(0, *bob);
	me->use(1, *bob);

	std::cout << "--------------------------------" << std::endl;

	AMateria* tmp1;
	tmp1 = tmp->clone();
	std::cout << "XP tmp1 = " << tmp1->getXP() << std::endl;
	me->equip(tmp1);
	me->use(2, *bob);
	std::cout << "XP tmp1 = " << tmp1->getXP() << std::endl;
	me->use(2, *bob);
	std::cout << "XP tmp1 = " << tmp1->getXP() << std::endl;

	std::cout << "XP tmp = " << tmp->getXP() << std::endl;

	me->unequip(2);
	me->use(2, *bob);
	
	delete bob;
	delete me;
	delete src;
	delete tmp1;
	
	return 0;
}