#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>

class Bureaucrat {

	private:
		std::string const	_name;
		int					_grade;
	
	public:
		Bureaucrat(std::string name, int grade);
		Bureaucrat(Bureaucrat const &src);
		~Bureaucrat(void);

		Bureaucrat& operator=(Bureaucrat const &src);

		std::string	getName(void);
		int			getGrade(void);
		void		incrementGrade(void);
		void		decrementGrade(void);

		class GradeTooHighException : public std::exception {
			public:
				virtual const char * what() const throw();
		};

		class GradeTooLowException : public std::exception {
			public:
				virtual const char * what() const throw();
		};

};

std::ostream& operator<<(std::ostream& output, Bureaucrat &src);

#endif