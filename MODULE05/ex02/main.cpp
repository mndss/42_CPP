#include <Bureaucrat.hpp>
#include <AForm.hpp>
#include <ShrubberyCreationForm.hpp>
#include <RobotomyRequestForm.hpp>
#include <PresidentialPardonForm.hpp>

int main(void) {

	try {
		ShrubberyCreationForm	test("home");
		Bureaucrat				jorge("jorge", 137);
		test.beSign(jorge);
		test.execute(jorge);
	} catch (std::exception &ex) {
		std::cout << ex.what() << std::endl;
	}
	std::cout << std::endl;
	
	try {
		ShrubberyCreationForm test("home");
		Bureaucrat jorge("jorge", 140);
		test.beSign(jorge);
		test.execute(jorge);
	} catch (std::exception &ex) {
		std::cout << ex.what() << std::endl;
	}
	std::cout << std::endl;

	try {
		RobotomyRequestForm	xamps("xamps");
		Bureaucrat			jorge("jorge", 72);
		xamps.beSign(jorge);
		xamps.execute(jorge);
	} catch (std::exception &ex) {
		std::cout << ex.what() << std::endl;
	}
	std::cout << std::endl;

	try {
		RobotomyRequestForm	xamps("xamps");
		Bureaucrat			jorge("jorge", 45);
		xamps.beSign(jorge);
		xamps.execute(jorge);
	} catch (std::exception &ex) {
		std::cout << ex.what() << std::endl;
	}
	std::cout << std::endl;
	
	try {
		PresidentialPardonForm juan("Juan");		
		Bureaucrat david("david", 25);
		juan.beSign(david);
		juan.execute(david);		
	} catch (std::exception &ex) {
		std::cout << ex.what() << std::endl;
	}
	std::cout << std::endl;
	
	try {
		PresidentialPardonForm juan("Juan");		
		Bureaucrat david("david", 5);
		juan.beSign(david);
		juan.execute(david);		
	} catch (std::exception &ex) {
		std::cout << ex.what() << std::endl;
	}
	std::cout << std::endl;
	
	try {
		PresidentialPardonForm juan("Juan");		
		Bureaucrat david("david", 40);
		juan.beSign(david);
		juan.execute(david);		
	} catch (std::exception &ex) {
		std::cout << ex.what() << std::endl;
	}
	std::cout << std::endl;

	try {
		PresidentialPardonForm juan("Juan");		
		Bureaucrat david("david", 4);
		juan.beSign(david);
		david.executeForm(juan);
	} catch (std::exception &ex) {
		std::cout << ex.what() << std::endl;
	}
	std::cout << std::endl;

	try {
		PresidentialPardonForm juan("Juan");		
		Bureaucrat david("david", 7);
		juan.beSign(david);
		david.executeForm(juan);
	} catch (std::exception &ex) {
		std::cout << ex.what() << std::endl;
	}
	std::cout << std::endl;

	try {
		PresidentialPardonForm juan("Juan");
		Bureaucrat david("david", 26);
		juan.beSign(david);
		david.executeForm(juan);
	} catch (std::exception &ex) {
		std::cout << ex.what() << std::endl;
	}
	return 0;
}

