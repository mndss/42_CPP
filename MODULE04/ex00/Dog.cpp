#include <Dog.hpp>

Dog::Dog(void) {

	Animal::type = "Dog";
	std::cout << "Dog default constructor called" << std::endl;
	type = "Dog";
	return ;
}

Dog::Dog(Dog const &src) : Animal(src) {

	std::cout << "Dog copy constructor called" << std::endl;
	*this = src;
	return ;
}

Dog& Dog::operator=(Dog const &src) {

	std::cout << "Dog assignment operator called" << std::endl;
	if (this != &src) {
		type = src.type;
	}
	return *this;
}

Dog::~Dog(void) {

	std::cout << "Dog destructor called" << std::endl;
	return ;
}

void Dog::makeSound(void) const {
	std::cout << "Dog: Ruff, Ruff" << std::endl;
	return ;
}

std::string	Dog::getType(void) const {
	return type;
}