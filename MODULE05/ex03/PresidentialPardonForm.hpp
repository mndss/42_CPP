#ifndef PRESIDENTIAL_PARDON_FORM_HPP
# define PRESIDENTIAL_PARDON_FORM_HPP

# include <iostream>
# include <AForm.hpp> 

class PresidentialPardonForm : public AForm {
	private: 
		std::string _target;
	
	public: 
		PresidentialPardonForm(std::string target);
		PresidentialPardonForm(PresidentialPardonForm const &src);
		~PresidentialPardonForm(void);

		PresidentialPardonForm& operator=(PresidentialPardonForm const &src);

		void	execute(Bureaucrat const &src) const;

};

#endif
