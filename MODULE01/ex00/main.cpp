#include <Zombie.hpp>

int main(void) {
	Zombie ze("Zé");
	Zombie *Marcelo;
	Zombie *Bub;

	ze.Announce();
	Marcelo = newZombie("Marcelo");
	Marcelo->Announce();
	Bub = newZombie("Bub");
	Bub->Announce();
	randomChump("Godofredo");
	delete Marcelo;
	delete Bub;
	return 0;
}
