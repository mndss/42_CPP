#include <AForm.hpp>

AForm::AForm(std::string name, bool isSigned,
	const int gradeToSign, int gradeToExec) : _name(name),
	_isSigned(isSigned), _gradeReqToSign(gradeToSign), _gradeReqToExec(gradeToExec)
{
	if (gradeToSign < 1 || gradeToExec < 1) {
		throw AForm::GradeTooHighException();
	} else if (gradeToSign > 150 || gradeToExec > 150) {
		throw AForm::GradeTooLowException();
	}
	return ;
}

AForm::AForm(const AForm &src) : _name(src._name),
	_isSigned(src._isSigned), _gradeReqToSign(src._gradeReqToSign),
	_gradeReqToExec(src._gradeReqToExec) {
	*this = src;
	return ;
}

AForm& AForm::operator=(const AForm &src) {
	if (this != &src) {
		_isSigned = src._isSigned;
	}
	return *this;
}

AForm::~AForm(void) {
	return ;
}

std::string	AForm::getName(void) {
	return _name;
}

bool		AForm::getStatus(void) {
	return _isSigned;
}

int			AForm::getGradeToSign(void) {
	return _gradeReqToSign;
}

int			AForm::getGradeToExec(void) {
	return _gradeReqToExec;
}

void		AForm::beSign(Bureaucrat &bureaucrat) {
	
	if (bureaucrat.getGrade() > _gradeReqToSign) {
		return ;
	}
	_isSigned = true;
	return ;
}

bool		AForm::canExecute(Bureaucrat &executor) {
	if (_isSigned == true ) {
		if (executor.getGrade() <= _gradeReqToExec)
			return true; 
		else {
			throw AForm::BureaucratCantExecException();
			return false;
		}
	} else {
		throw AForm::FormNotSignedException();
		return false;
	}
}

void		AForm::signForm(Bureaucrat &bureaucrat) {

	if (_isSigned == true) {
		std::cout << bureaucrat.getName() << " signed form " << _name << std::endl;
	} else {
		std::cout << bureaucrat.getName() << " couldn't sign " << _name <<
		" because your grade is lower than grade required" << std::endl; 
	}
	return ;
}

const char *	AForm::GradeTooHighException::what() const throw() {
	return "Exception: Form grade is too high";
}

const char *	AForm::GradeTooLowException::what() const throw() {
	return "Exception: Form grade is too low";
}

const char *	AForm::FormNotSignedException::what() const throw() {
	return "Exception: Form is not signed";
}

const char *	AForm::BureaucratCantExecException::what() const throw() {
	return "Exception: Bureaucrat can't execute form";
}

std::ostream&	operator<<(std::ostream& output, AForm &src) {
	output << "Form " << src.getName() << " current status is " << src.getStatus() << 
	" grade to sign is " << src.getGradeToSign() << " grade to execute is " << src.getGradeToExec();
	return output;
}