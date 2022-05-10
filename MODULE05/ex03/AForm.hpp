#ifndef AFORM_HPP
# define AFORM_HPP

#include <Bureaucrat.hpp>
#include <iostream>

class Bureaucrat;

class AForm {
	private:
		const std::string	_name;
		bool				_isSigned;
		const int			_gradeReqToSign;
		const int			_gradeReqToExec;

	public: 
		AForm(std::string name, bool isSigned, 
			const int gradeToSign, const int gradeToExec);
		AForm(const AForm &src);
		AForm& operator=(const AForm &src);
		virtual ~AForm(void);

		std::string	getName(void) const;
		bool		getStatus(void) const;
		int			getGradeToSign(void) const;
		int			getGradeToExec(void) const;
		void		beSign(Bureaucrat &bureaucrat);
		void		signForm(Bureaucrat &bureaucrat);
		
		virtual void	execute(Bureaucrat const &executor) const = 0 ;
		virtual bool	canExecute(Bureaucrat const &executor) const ;

		class GradeTooHighException : public std::exception {
			public:
				virtual const char * what() const throw();
		};
		class GradeTooLowException : public std::exception {
			public:
				virtual const char * what() const throw();
		};
		class FormNotSignedException : public std::exception {
			public:
				virtual const char * what() const throw();
		};
		class BureaucratCantExecException : public std::exception {
			public:
				virtual const char * what() const throw();
		};
};

std::ostream&	operator<<(std::ostream& output, AForm &src);
#endif