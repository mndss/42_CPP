#include <Contact.hpp>
#include <PhoneBook.hpp>


int	main(void) {
	std::string line;
	PhoneBook	phonebook;
	bool		runPhonebook;

	runPhonebook = true;
	while (runPhonebook) {
		std::cout << "Command: "; 
		std::getline(std::cin, line);
		runPhonebook = phonebook.ParseInput(line);
	}
	return 0;
}
