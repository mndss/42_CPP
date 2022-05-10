#include <PresidentialPardonForm.hpp>

PresidentialPardonForm::PresidentialPardonForm(std::string target) :
AForm("PresidentialPardonForm", false, 25, 5), _target(target) {
	return ;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &src) : AForm(src) {
	*this = src;
	return ;
}

PresidentialPardonForm& PresidentialPardonForm::operator=(PresidentialPardonForm const &src) {
	if (this != &src) {
		_target = src._target;
	}
	return *this;
}

PresidentialPardonForm::~PresidentialPardonForm(void) {
	return ;
}

void	PresidentialPardonForm::execute(Bureaucrat const &executor) const {
	if (!this->canExecute((Bureaucrat &)executor)) {
		return ;
	}
	std::cout << _target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
	return ;
}