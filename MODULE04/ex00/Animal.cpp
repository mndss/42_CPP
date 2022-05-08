#include <Animal.hpp>

Animal::Animal(void) {

	std::cout << "Animal default constructor called" << std::endl;
	_type = "";
	return ;
}

Animal::Animal(Animal const &src) {
	
	std::cout << "Animal copy constructor called" << std::endl;
	*this = src;
	return ;
}

Animal& Animal::operator=(Animal const &src) {
	
	std::cout << "Animal assignment operator called" << std::endl;
	if (this != &src) {
		type = src.type;
	}
	return *this;
}

Animal::~Animal(void) {

	std::cout << "Animal destructor called" << std::endl;
	return ;
}

std::string	Animal::getType(void) const {
	return type;
}

void	Animal::makeSound(void) const {
	return ;
}