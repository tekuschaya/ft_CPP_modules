#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"

int main()
{
	ClapTrap clap("Clap");
	
	FragTrap frag("Frag");
	frag.meleeAttack("Robocop");
	frag.rangedAttack("Halk");
	frag.takeDamage(24);
	frag.beRepaired(50);
	frag.takeDamage(40);
	frag.takeDamage(80);
	frag.beRepaired(150);
	frag.vaulthunter_dot_exe("Terminator");
	frag.vaulthunter_dot_exe("Rambo");
	frag.vaulthunter_dot_exe("Halk");
	frag.vaulthunter_dot_exe("Robocop");
	frag.vaulthunter_dot_exe("Iron man");

	std::cout << "--------------------------------------------" << std::endl;

	ScavTrap scav("Scav");
	scav.meleeAttack("Robocop");
	scav.rangedAttack("Halk");
	scav.takeDamage(24);
	scav.beRepaired(50);
	scav.takeDamage(40);
	scav.takeDamage(80);
	scav.beRepaired(150);
	scav.challengeNewcomer();
	scav.challengeNewcomer();
	scav.challengeNewcomer();
	scav.challengeNewcomer();
	scav.challengeNewcomer();
	scav.challengeNewcomer();

	std::cout << "--------------------------------------------" << std::endl;

	NinjaTrap ninja("Ninja");
	ninja.ninjaShoebox(frag);
	ninja.ninjaShoebox(scav);
	ninja.ninjaShoebox(ninja);
	ninja.ninjaShoebox(clap);

	std::cout << "--------------------------------------------" << std::endl;
	return 0;
}