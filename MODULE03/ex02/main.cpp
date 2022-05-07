#include <ClapTrap.hpp>
#include <ScavTrap.hpp>
#include <FragTrap.hpp>

int main(void) {

	FragTrap a("jhow");

	a.attack("jackson");
	a.takeDamage(30);
	a.highFivesGuys();
	return 0;
}
