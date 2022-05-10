#include <Intern.hpp>

Intern::Intern(void) {
	return ;
}

Intern::Intern(Intern const &src) {
	*this = src;
	return ;
}

Intern::~Intern(void) {
	return;
}

Intern&			Intern::operator=(Intern const &src) {
	*this = src;	
	return *this;
}

AForm * 		Intern::_shrubebery(std::string target) {
	AForm * form = new ShrubberyCreationForm(target);
	std::cout << "Intern creates " << form->getName() << std::endl;
	return form;
}

AForm * 		Intern::_robotomy(std::string target) {
	AForm * form = new RobotomyRequestForm(target);
	std::cout << "Intern creates " << form->getName() << std::endl; 
	return form;
}

AForm * 		Intern::_presidential(std::string target) {
	AForm * form = new PresidentialPardonForm(target);
	std::cout << "Intern creates " << form->getName() << std::endl;
	return form;
}

AForm * 		Intern::_unknown(std::string target) {
	(void)target;
	throw FormUnknown();
	return NULL;
}

const char *	Intern::FormUnknown::what() const throw() {
	return "Form Unknown";
}


const char *	Intern::NoTarget::what() const throw() {
	return "No target passed";
}

AForm * 			Intern::makeForm(std::string formName, std::string target) {
	if (target.empty())
		throw NoTarget();
	AForm * (Intern::*f[]) (std::string) = {&Intern::_shrubebery, &Intern::_robotomy, &Intern::_presidential, &Intern::_unknown};
	std::string forms[] = {"shrubbery creation", "robotomy request", "presidential pardon"};
	for (int i = 0; i < 3; i++) {
		if (forms[i] == formName)
			return  ( this->*f[i] ) ( target );
	}
	return (this->*f[3]) (target);
}