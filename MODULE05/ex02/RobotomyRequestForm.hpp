#ifndef ROBOTOMY_REQUEST_FORM_HPP
# define ROBOTOMY_REQUEST_FORM_HPP

# include <iostream>
# include <AForm.hpp>

class RobotomyRequestForm : public AForm {
	private:
		std::string _target;
	
	public:
		RobotomyRequestForm(std::string target);
		RobotomyRequestForm(RobotomyRequestForm const &src);
		~RobotomyRequestForm(void);

		RobotomyRequestForm& operator=(RobotomyRequestForm const &src);
		void	execute(Bureaucrat const &executor);
};

#endif
