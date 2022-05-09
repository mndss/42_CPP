#include <Bureaucrat.hpp>

int main(void) {

	try {
		Bureaucrat temer("Temer", 150);
		temer.getGrade();
		temer.getName();
		temer.incrementGrade();
		temer.decrementGrade();
		temer.decrementGrade();
	} catch (std::exception &ex) {
		std::cout << ex.what() << std::endl;
	}
	std::cout << std::endl;
	try {
		Bureaucrat giga("giga", 160);
	} catch (std::exception &sa) {
		std::cout << sa.what() << std::endl;
	}
	std::cout << std::endl;
	try {
		Bureaucrat silva("silva", 1);
		std::cout << "The grade of bureaucrat is " << silva.getGrade() << std::endl;
		silva.incrementGrade();
	} catch (std::exception &rs) {
		std::cout << rs.what() << std::endl;
	}
	std::cout << std::endl;
	try
	{
		Bureaucrat jorge("Jorge", 150);
		jorge.incrementGrade();
		std::cout << jorge << std::endl;
	}
	catch (std::exception& ex)
	{
		std::cout << ex.what() << std::endl;
	}
}