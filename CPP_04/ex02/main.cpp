#include "AssaultTerminator.hpp"
#include "TacticalMarine.hpp"
#include "Squad.hpp"

int main()
{
	ISpaceMarine* bob = new TacticalMarine;
	ISpaceMarine* jim = new AssaultTerminator;
	ISpaceMarine* bob1 = new TacticalMarine;
	ISquad* vlc = new Squad;
	vlc->push(bob);
	vlc->push(jim);
	vlc->push(jim);
	vlc->push(bob1);
	vlc->push(NULL);

	ISpaceMarine* bob2 = new AssaultTerminator;
	bob2 = jim;
	vlc->push(bob2);

	ISpaceMarine* bob3(bob);
	vlc->push(bob3);

	for (int i = 0; i < vlc->getCount(); ++i)
	{
		ISpaceMarine* cur = vlc->getUnit(i);
		cur->battleCry();
		cur->rangedAttack();
		cur->meleeAttack();
	}

	std::cout << "count = " << vlc->getCount() << std::endl;
	ISpaceMarine* cur = vlc->getUnit(5);
	if (cur)
		cur->battleCry();
	delete vlc;

	return 0; 
}