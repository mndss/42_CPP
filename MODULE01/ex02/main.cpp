#include <iostream>

int main(void) {
	std::string hi = "HI THIS IS BRAIN";
	std::string* stringPTR = &hi;
	std::string& stringREF = hi;

	std::cout << "address of h1: " << &hi << std::endl;
	std::cout << "address held by stringPTR: " << stringPTR << std::endl;
	std::cout << "address held by stringREF: " << &stringREF << std::endl;

	std::cout << "value of h1: " << hi << std::endl;
	std::cout << "value pointed to by stringPTR: " << stringPTR << std::endl;
	std::cout << "value pointed to by stringREF: " << stringREF << std::endl;
}
