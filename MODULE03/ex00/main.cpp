#include <ClapTrap.hpp>

int main(void) {

	ClapTrap claptrap("Jailsão");
	ClapTrap a = claptrap;
	
	ClapTrap b(a);

	claptrap.attack("Godofredo");
	claptrap.takeDamage(0);
	claptrap.beRepaired(0);

	return 0;
}