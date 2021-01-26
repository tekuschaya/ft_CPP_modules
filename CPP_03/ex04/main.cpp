#include "ScavTrap.hpp"
#include "SuperTrap.hpp"

int main()
{
	SuperTrap super("Super");
	super.vaulthunter_dot_exe("Rembo");
	super.vaulthunter_dot_exe("Halk");
	super.rangedAttack("Terminator");
	super.meleeAttack("Robocop");
	super.takeDamage(40);
	super.takeDamage(15);
	super.beRepaired(20);

	return 0;
}