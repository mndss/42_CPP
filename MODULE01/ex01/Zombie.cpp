#include <Zombie.hpp>

Zombie::Zombie(void) {
	return ;
}

Zombie::~Zombie(void) {
	std::cout << "Bye bye! " << this->_name << std::endl;
	return ;
}

void	Zombie::Announce(void) {
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void	Zombie::setName(std::string name) {
	this->_name = name;
	return ;
}

Zombie*	zombieHorde(int N, std::string name) {
	Zombie* horder;

	horder = new Zombie[N];
	for (int i = 0; i < N; i++) {
		horder[i].setName(name);
	}
	return horder;
}