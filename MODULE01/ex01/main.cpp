#include <Zombie.hpp>

int main(int argc, char *argv[]) {

	if (argc != 2)
		return 1;

	int numberOfZombies = atoi(argv[1]);
	Zombie* Horder;

	Horder = zombieHorde(numberOfZombies, "Godofredo");
	for (int i = 0; i < numberOfZombies; i++) {
		Horder[i].Announce();
	}
	delete [] Horder;
	return 0;
}