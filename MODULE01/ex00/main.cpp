#include <Zombie.hpp>

int main(void) {
	Zombie *Marcelo;

	Marcelo = newZombie("Marcelo");
	Marcelo->Announce();
	randomChump("Godofredo");
	delete Marcelo;
	return 0;
}
