#include <WrongCat.hpp>

WrongCat::WrongCat(void) {
	
	std::cout << "WrongCat default constructor called" << std::endl;
	type = "WrongCat";
	WrongAnimal::type = "wrongCat";	
	return ;
}

WrongCat::WrongCat(WrongCat const &src) : WrongAnimal(src) {
	
	std::cout << "WrongCat copy constructor called" << std::endl;
	*this = src;
	return ;
}

WrongCat::~WrongCat(void) {
	std::cout << "WrongCat destructor called" << std::endl;
	return ;
}

WrongCat& WrongCat::operator=(WrongCat const &src) {
	
	std::cout << "WrongCat assignment operator called" << std::endl;
	if (this != &src) {
		type = src.type;
	}
	return *this;
}

std::string	WrongCat::getType(void) const {
	return type;
}

void		WrongCat::makeSound(void) const {
	
	std::cout << "WrongCat: Ih Óh, Ih Óh" << std::endl; 
	return ;
}