#include <Cat.hpp>

Cat::Cat(void){

	Animal::type = "Cat";
	std::cout << "Cat default constructor called" << std::endl;
	type = "Cat";
	return ;
}

Cat::Cat(Cat const &src) : Animal(src) {

	std::cout << "Cat copy constructor called" << std::endl;
	*this = src;
	return ;
}

Cat& Cat::operator=(Cat const &src) {

	std::cout << "Cat assignment operator called" << std::endl;
	if (this != &src) {
		type = src.type;
	}
	return *this;
}

Cat::~Cat(void) {

	std::cout << "Cat destructor called" << std::endl;
	return ;
}

void Cat::makeSound(void) const {
	std::cout << "Cat: Meow!" << std::endl;
	return ;
}

std::string	Cat::getType(void) const {
	return type;
}

