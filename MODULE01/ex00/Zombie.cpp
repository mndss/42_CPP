#include <Zombie.hpp>

Zombie::Zombie(std::string name) {
	this->_name = name;
	return ;
}

Zombie::~Zombie(void) {
	std::cout << "Bye bye! " << this->_name << std::endl;
	return ;
}

void	Zombie::Announce(void) {
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
