#ifndef INTERN_HPP
# define INTERN_HPP

# include <iostream>
# include <AForm.hpp>
# include <ShrubberyCreationForm.hpp>
# include <RobotomyRequestForm.hpp>
# include <PresidentialPardonForm.hpp>

class Intern {
	private:
		AForm * _shrubebery(std::string target);
		AForm * _robotomy(std::string target);
		AForm * _presidential(std::string target);
		AForm * _unknown(std::string target);

	public:
		Intern(void);
		Intern(Intern const &src);
		~Intern(void);

		Intern& operator=(Intern const &src);

		AForm *	makeForm(std::string formName, std::string target);

		class FormUnknown : public std::exception {
			const char * what() const throw();
		};

		class NoTarget : public std::exception {
			const char * what() const throw();
		};
};


#endif