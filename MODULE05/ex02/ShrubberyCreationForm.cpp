#include <ShrubberyCreationForm.hpp>

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) :
AForm("ShrubberyCreationForm", false, 145, 137), _target(target) {
	
	return ;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &src) : AForm(src) {
	
	*this = src;
	return ;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(ShrubberyCreationForm const &src) {
	
	if (this != &src) {
		_target = src._target;
	}
	return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm(void) {
	return ;
}

void	ShrubberyCreationForm::execute(Bureaucrat const &executor) {

	std::string fileName;
	std::ofstream file;
	
	this->beSign((Bureaucrat &)executor);
	if (!canExecute((Bureaucrat &)executor)) {
		return ;
	}
	fileName = _target + "_shrubbery";
	file.open(fileName.c_str(), std::ofstream::out | std::ofstream::trunc);
	if (!file.is_open()) {
		std::cout << "Something was wrong creating _shrubbery file" << std::endl;
		file.close();
		return ; 
	}

	file << "          &&& &&  & &&\n"
	<< "      && & /& |& ()|/ @, &&\n"
	<< "      & /(/&/&||/& /_/)_&/_&\n"
	<< "   &() & /&|()|/& / '%' & ()\n"
	<< "  &_ _&&_  |& |&&/&__%_/_& &&\n"
	<< "&&   && & &| &| /& & % ()& /&&\n"
	<< "  ()&_---()& & |&&-&&--%---()~\n"
	<< "     &&      |||\n"
	<< "             |||\n"
	<< "             |||\n"
	<< "             |||\n"
	<< "       , -=-~  .-^- _\n";
	// << "       {/{\{\/}(_){\{\{\(/}/}{\(_)/}/}\}\n"
	// << "         {/({/{\{/{\{\/}(_){\/}/}\}/}(\}\n"
	// << "          (_){/{\/}{\{\/}/}{\{\)/}/}(_)\n"
	// << "            {/{/{\{\/}{/{\{\{\(_)/}\n"
	// << "             {/{\{\{\/}/}{\{\\}/}\n"
	// << "              {){/ {\/}{\/} \}\}\n"
	// << "              (_)  \.-'.-/\n"
	// << "          __...--- |'-.-'| --...__\n"
	// << "   _...--   .-'    |'-.-'|  ' -.  --..__\n" 
	// << " -    ' .  . '     |.'-._| '  . .  '   jro\n"
	// << " .  '-  '    .--'  | '-.'|    .  '  . '\n"
	// << "          ' ..     |'-_.-|\n"
	// << "  .  '  .       _.-|-._ -|-._  .  '  .\n" 
	// << "              .'   |'- .-|   '.\n"
	// << "  ..-'   ' .  '.   `-._.-�   .'  '  - .\n"
	// << "   .-' '        '-._______.-'     '  .\n";
	file.close();
	std::cout << "ASCII trees created\n";
}	
