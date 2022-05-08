#include <Brain.hpp>

Brain::Brain(void) {
	
	std::cout << "Brain constructor called" << std::endl;
	return ;
}

Brain::Brain(Brain const &src) {
	
	std::cout << "Brain copy constructor called" << std::endl;
	*this = src;
	return ;
}

Brain::~Brain(void) {

	std::cout << "Brain destructor called" << std::endl;
	return ;
}

Brain&		Brain::operator=(Brain const &src) {

	std::cout << "Brain assignment operator called" << std::endl;
	if (this != &src) {
		for (int i = 0; i < 100; i++) {
			_ideas[i] = src._ideas[i];
		}
	}
	return *this;
}

void		Brain::setIdea(std::string idea, int index) {
	if (index >= 0 && index <= 100) {
		this->_ideas[index] = idea;
	}
	return ;
}

std::string	Brain::getIdea(int index) const {
	if (index >= 0 && index <= 100 ) {
		return this->_ideas[index];
	}
	return "no ideia about this";
}