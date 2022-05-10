#include <Bureaucrat.hpp>

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name) {
	if (grade < 1) {
		throw Bureaucrat::GradeTooHighException();
	}
	else if (grade > 150) {
		throw Bureaucrat::GradeTooLowException();
	}
	else
		_grade = grade;
	return ;
}

Bureaucrat::Bureaucrat(Bureaucrat const &src) {
	*this = src;
	return ;
} 

Bureaucrat& Bureaucrat::operator=(Bureaucrat const &src) {
	if (this != &src) {
		_grade = src._grade;
	}
	return *this;
}

Bureaucrat::~Bureaucrat(void) {
	return ;
}

std::string	Bureaucrat::getName(void) const {
	return _name;
}

int			Bureaucrat::getGrade(void) const{
	return _grade;
}

void		Bureaucrat::incrementGrade(void) {
	_grade--;
	if (_grade < 1) {
		throw Bureaucrat::GradeTooHighException();
	}
	std::cout << "The grade of " << _name << " now is " << _grade << std::endl;
	return ;
}

void		Bureaucrat::decrementGrade(void) {
	_grade++;
	if (_grade > 150) {
		throw Bureaucrat::GradeTooLowException();
	}
	std::cout << "The grade of " << _name << " now is " << _grade << std::endl;
	return ;
}

void		Bureaucrat::executeForm(AForm const &form) {
	try {
		form.execute( *this );
		std::cout << this->_name << " executed " << form.getName();
	} catch (std::exception &ex){
		std::cout << this->_name << " can't execute this form" << std::endl;
	}
}

const char * Bureaucrat::GradeTooHighException::what() const throw() {
	return ("Bureaucrat grade is too high");
}

const char * Bureaucrat::GradeTooLowException::what() const throw() {
	return ("Bureaucrat grade is too low");
}

std::ostream& operator<<(std::ostream& output, Bureaucrat &src) {
	output << src.getName() << ", Bureaucrat grade is " << src.getGrade() << ".";
	return output;
}