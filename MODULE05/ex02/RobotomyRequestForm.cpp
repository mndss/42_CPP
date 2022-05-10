#include <RobotomyRequestForm.hpp>

RobotomyRequestForm::RobotomyRequestForm(std::string target) :
AForm("RobotomyRequestForm", false, 72, 45), _target(target) {
	return ;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &src) : AForm(src) {
	*this = src;
	return ;
}

RobotomyRequestForm& RobotomyRequestForm::operator=(RobotomyRequestForm const &src) {
	if (this != &src) {
		_target = src._target;
	}
	return *this;
}

RobotomyRequestForm::~RobotomyRequestForm(void) {
	return ;
}

void	RobotomyRequestForm::execute(Bureaucrat const &executor) {

	this->beSign((Bureaucrat &)executor);
	if (!this->canExecute((Bureaucrat &)executor)) {
		return ;
	}
	std::cout << "ZuuuUUuuuUuu" << std::endl;
	std::cout << "zuuHhhuUUuuuHHUuuhh" << std::endl;
	std::cout << _target << " has been robotomized successfully 50\% of the time"
	<< std::endl;
}