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
		_type = src._type;
	}
	return *this;
}

Animal::~Animal(void) {

	std::cout << "Animal destructor called" << std::endl;
	return ;
}

std::string	Animal::getType(void) const {
	return _type;
}

void	Animal::makeSound(void) const {
	return ;
}

void	Animal::setIdeaBrain(std::string idea, int index) {
	(void)idea;
	(void)index;
	std::cout << "this animal dont have ideas" << std::endl;
	return ;
}

std::string Animal::getIdeaBrain(int index) const {

	(void)index;
	return "This animal dont have ideas";
}