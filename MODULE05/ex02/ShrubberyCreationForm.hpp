#ifndef SHRUBBERRY_CREATION_FORM_HPP
# define SHRUBBERRY_CREATION_FORM_HPP

# include <AForm.hpp>
# include <fstream>

class ShrubberyCreationForm : public AForm {
	private:
		std::string _target;

	public:
		ShrubberyCreationForm(std::string target);
		ShrubberyCreationForm(ShrubberyCreationForm const &src);
		~ShrubberyCreationForm(void);
		
		ShrubberyCreationForm& operator=(ShrubberyCreationForm const &src);

		void	execute(Bureaucrat const &executor);	
		
};

#endif
