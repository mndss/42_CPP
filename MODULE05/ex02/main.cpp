#include <Bureaucrat.hpp>
#include <AForm.hpp>
#include <ShrubberyCreationForm.hpp>
#include <RobotomyRequestForm.hpp>
#include <PresidentialPardonForm.hpp>

int main(void) {

	try {
		ShrubberyCreationForm	test("home");
		Bureaucrat				jorge("jorge", 137);
		test.execute(jorge);
	} catch (std::exception &ex) {
		std::cout << ex.what() << std::endl;
	}
	std::cout << std::endl;
	
	try {
		ShrubberyCreationForm test("home");
		Bureaucrat jorge("jorge", 140);
		test.execute(jorge);
	} catch (std::exception &ex) {
		std::cout << ex.what() << std::endl;
	}
	std::cout << std::endl;

	try {
		RobotomyRequestForm	xamps("xamps");
		Bureaucrat			jorge("jorge", 72);
		xamps.execute(jorge);
	} catch (std::exception &ex) {
		std::cout << ex.what() << std::endl;
	}
	std::cout << std::endl;

	try {
		RobotomyRequestForm	xamps("xamps");
		Bureaucrat			jorge("jorge", 45);
		xamps.execute(jorge);
	} catch (std::exception &ex) {
		std::cout << ex.what() << std::endl;
	}
	std::cout << std::endl;
	
	try {
		PresidentialPardonForm juan("Juan");		
		Bureaucrat david("david", 25);
		juan.execute(david);		
	} catch (std::exception &ex) {
		std::cout << ex.what() << std::endl;
	}
	std::cout << std::endl;
	
	try {
		PresidentialPardonForm juan("Juan");		
		Bureaucrat david("david", 5);
		juan.execute(david);		
	} catch (std::exception &ex) {
		std::cout << ex.what() << std::endl;
	}
	std::cout << std::endl;
	
	try {
		PresidentialPardonForm juan("Juan");		
		Bureaucrat david("david", 40);
		juan.execute(david);		
	} catch (std::exception &ex) {
		std::cout << ex.what() << std::endl;
	}

	return 0;
}

