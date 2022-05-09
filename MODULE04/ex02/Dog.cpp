#include <Dog.hpp>

Dog::Dog(void) {

	_brain = new Brain();
	std::cout << "Dog default constructor called" << std::endl;
	_type = "Dog";
	return ;
}

Dog::Dog(Dog const &src) : AAnimal(src) {

	std::cout << "Dog copy constructor called" << std::endl;
	*this = src;
	return ;
}

Dog& Dog::operator=(Dog const &src) {

	std::cout << "Dog assignment operator called" << std::endl;
	if (this != &src) {
		_type = src._type;
	}
	return *this;
}

Dog::~Dog(void) {

	std::cout << "Dog destructor called" << std::endl;
	delete _brain;
	return ;
}

void		Dog::makeSound(void) const {
	std::cout << "Dog: Ruff, Ruff" << std::endl;
	return ;
}

void		Dog::setIdeaBrain(std::string idea, int index) {
	_brain->setIdea(idea, index);
	return ;
}

std::string	Dog::getIdeaBrain(int index) const {
	return _brain->getIdea(index);
}