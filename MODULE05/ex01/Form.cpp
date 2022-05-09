#include <Form.hpp>

Form::Form(std::string name, bool isSigned,
	const int gradeToSign, int gradeToExec) : _name(name),
	_isSigned(isSigned), _gradeReqToSign(gradeToSign), _gradeReqToExec(gradeToExec)
{
	if (gradeToSign < 1 || gradeToExec < 1) {
		throw Form::GradeTooHighException();
	} else if (gradeToSign > 150 || gradeToExec > 150) {
		throw Form::GradeTooLowException();
	}
	return ;
}

Form::Form(const Form &src) : _name(src._name),
	_isSigned(src._isSigned), _gradeReqToSign(src._gradeReqToSign),
	_gradeReqToExec(src._gradeReqToExec) {
	*this = src;
	return ;
}

Form& Form::operator=(const Form &src) {
	if (this != &src) {
		_isSigned = src._isSigned;
	}
	return *this;
}

Form::~Form(void) {
	return ;
}

std::string	Form::getName(void) {
	return _name;
}

bool		Form::getState(void) {
	return _isSigned;
}

int			Form::getGradeToSign(void) {
	return _gradeReqToSign;
}

int			Form::getGradeToExec(void) {
	return _gradeReqToExec;
}

void		Form::beSign(Bureaucrat &bureaucrat) {
	
	if (bureaucrat.getGrade() > _gradeReqToSign) {
		return ;
	}
	_isSigned = true;
	return ;
}

void		Form::signForm(Bureaucrat &bureaucrat) {

	if (_isSigned == true) {
		std::cout << bureaucrat.getName() << " signed form " << _name << std::endl;
	} else {
		std::cout << bureaucrat.getName() << " couldn't sign " << _name <<
		" because your grade is lower than grade required" << std::endl; 
	}
	return ;
}

const char *	Form::GradeTooHighException::what() const throw() {
	return "Exception: Form grade is too high";
}


const char *	Form::GradeTooLowException::what() const throw() {
	return "Exception: Form grade is too low";
}

std::ostream&	operator<<(std::ostream& output, Form &src) {
	output << "Form " << src.getName() << " current status is " << src.getState() << 
	" grade to sign is " << src.getGradeToSign() << " grade to execute is " << src.getGradeToExec();
	return output;
}