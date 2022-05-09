#ifndef FORM_HPP
# define FORM_HPP

#include <Bureaucrat.hpp>
#include <iostream>

class Form {
	private:
		const std::string	_name;
		bool				_isSigned;
		const int			_gradeReqToSign;
		const int			_gradeReqToExec;

	public: 
		Form(std::string name, bool isSigned, 
			const int gradeToSign, const int gradeToExec);
		Form(const Form &src);
		Form& operator=(const Form &src);
		~Form(void);

		std::string	getName(void);
		bool		getState(void);
		int			getGradeToSign(void);
		int			getGradeToExec(void);
		void		beSign(Bureaucrat &bureaucrat);
		void		signForm(Bureaucrat &bureaucrat);

		class GradeTooHighException : public std::exception {
			public:
				virtual const char * what() const throw();
		};
		class GradeTooLowException : public std::exception {
			public:
				virtual const char * what() const throw();
		};
		
};

std::ostream&	operator<<(std::ostream& output, Form &src);
#endif