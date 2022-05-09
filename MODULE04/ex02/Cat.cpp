#include <Cat.hpp>

Cat::Cat(void){

	_brain = new Brain();
	std::cout << "Cat default constructor called" << std::endl;
	_type = "Cat";
	return ;
}

Cat::Cat(Cat const &src) : AAnimal(src) {

	std::cout << "Cat copy constructor called" << std::endl;
	*this = src;
	return ;
}

Cat& Cat::operator=(Cat const &src) {

	std::cout << "Cat assignment operator called" << std::endl;
	if (this != &src) {
		_type = src._type;
	}
	return *this;
}

Cat::~Cat(void) {

	std::cout << "Cat destructor called" << std::endl;
	delete _brain;
	return ;
}

void 		Cat::makeSound(void) const {
	std::cout << "Cat: Meow!" << std::endl;
	return ;
}


void		Cat::setIdeaBrain(std::string idea, int index) {
	this->_brain->setIdea(idea, index);
	return ;
}

std::string Cat::getIdeaBrain(int index) const {

	return this->_brain->getIdea(index);
}
