#include <WrongAnimal.hpp>

WrongAnimal::WrongAnimal(void) {
	
	std::cout << "WrongAnimal default constructor called" << std::endl;
	return ;
}

WrongAnimal::WrongAnimal(WrongAnimal const &src) {
	
	std::cout << "WrongAnimal copy constructor called" << std::endl;
	*this = src;
	return ;
}

WrongAnimal::~WrongAnimal(void) {
	std::cout << "WrongAnimal destructor called" << std::endl;
	return ;
}

WrongAnimal& WrongAnimal::operator=(WrongAnimal const &src) {
	
	std::cout << "WrongAnimal assignment operator called" << std::endl;
	if (this != &src) {
		type = src.type;
	}
	return *this;
}

std::string	WrongAnimal::getType(void) const {

	return type;
}

void		WrongAnimal::makeSound(void) const {
	return ;
}