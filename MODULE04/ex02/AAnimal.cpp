#include <AAnimal.hpp>

AAnimal::AAnimal(void) {

	std::cout << "AAnimal default constructor called" << std::endl;
	_type = "";
	return ;
}

AAnimal::AAnimal(AAnimal const &src) {
	
	std::cout << "AAnimal copy constructor called" << std::endl;
	*this = src;
	return ;
}

AAnimal& AAnimal::operator=(AAnimal const &src) {
	
	std::cout << "AAnimal assignment operator called" << std::endl;
	if (this != &src) {
		_type = src._type;
	}
	return *this;
}

AAnimal::~AAnimal(void) {

	std::cout << "AAnimal destructor called" << std::endl;
	return ;
}

std::string	AAnimal::getType(void) const {
	return _type;
}

void	AAnimal::setIdeaBrain(std::string idea, int index) {
	(void)idea;
	(void)index;
	std::cout << "This animal dont have ideas" << std::endl;
	return ;
}

std::string AAnimal::getIdeaBrain(int index) const {

	(void)index;
	return "This Animal dont have ideas";
}