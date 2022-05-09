#include <Bureaucrat.hpp>
#include <Form.hpp>

int main(void) {

	try {
		Bureaucrat	jorge("Jorge", 1);
		Form		contratation("contratation", false,
		1, 1);

		std::cout << "Grade of jorge is "<< jorge.getGrade() << std::endl;
		std::cout << contratation << std::endl;
		contratation.beSign(jorge);
		std::cout << contratation << std::endl;
		contratation.signForm(jorge);
	} catch (std::exception &ex) {
		std::cout << ex.what() << std::endl;
	}
	std::cout << std::endl;
	try {
		Bureaucrat	jorge("jorge", -123);
		Form		contratation("contratation", false, 1, 1);
		jorge.incrementGrade();
		contratation.beSign(jorge);
		contratation.signForm(jorge);
	} catch (std::exception &ex) {
		std::cout << ex.what() << std::endl;
	}
	std::cout << std::endl;

	try {
		Bureaucrat	jorge("jorge", 7);
		Form		contratation("contratation", false, 10, 10);
		std::cout << jorge << std::endl;
		std::cout << contratation << std::endl;
		jorge.incrementGrade();
		contratation.beSign(jorge);
		contratation.signForm(jorge);
	} catch (std::exception &ex) {
		std::cout << ex.what() << std::endl;	
	}
	std::cout << std::endl;
	
	try {
		Bureaucrat	jorge("jorge", 15);
		Form		contratation("contratation", false, 10, 10);
		std::cout << jorge << std::endl;
		std::cout << contratation << std::endl;
		jorge.incrementGrade();
		contratation.beSign(jorge);
		contratation.signForm(jorge);
	} catch (std::exception &ex) {
		std::cout << ex.what() << std::endl;	
	}
	
	std::cout << std::endl;
	try {
		Form		contratation("contratation", false, -1, 150);
	} catch (std::exception &ex) {
		std::cout << ex.what() << std::endl;
	}
	std::cout << std::endl;
	
	try {
		Form		contratation("contratation", false, 1, 151);
	} catch (std::exception &ex) {
		std::cout << ex.what() << std::endl;
	}
}

