#include "FragTrap.hpp"

int main()
{
	FragTrap test("Frag");
	test.meleeAttack("Robocop");
	test.rangedAttack("Halk");
	test.takeDamage(24);
	test.beRepaired(50);
	test.takeDamage(40);
	test.takeDamage(80);
	test.beRepaired(150);
	test.vaulthunter_dot_exe("Terminator");
	test.vaulthunter_dot_exe("Rambo");
	test.vaulthunter_dot_exe("Robocop");
	test.vaulthunter_dot_exe("Halk");
	test.vaulthunter_dot_exe("Iron man");
	return 0;
}