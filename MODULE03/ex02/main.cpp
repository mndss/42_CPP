#include <ClapTrap.hpp>
#include <ScavTrap.hpp>

int main(void) {

	ScavTrap a("jhow");

	a.attack("jackson");
	a.takeDamage(30);
	a.guardGate();
	return 0;
}
