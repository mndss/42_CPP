#include <PhoneBook.hpp>

PhoneBook::PhoneBook(void) {
	std::cout << "Welcome to your PhoneBook" << std::endl;
	std::cout << "You can type commands: " << std::endl;
	std::cout << "\"Add\" to add a new contact" << std::endl;
	std::cout << "\"Search\" to display your contact list" << std::endl;
	std::cout << "\"Exit\" to exit" << std::endl;

	this->_currentIndex = 0;
	return ;
}

PhoneBook::~PhoneBook(void) {
	std::cout << "Bye bye. Have a nice day!!" << std::endl;
	return ;
}

int		PhoneBook::Add(Contact contact) {
	std::cout << "Method ADD are working" << std::endl;
	return 1;
}

void	PhoneBook::addFirstName(void) {
	bool validValue = false;
	std::string	value;

	do {
		std::cout << "First name: ";
		std::getline(std::cin, value);
		validValue = isValidName(value);
		if (validValue)
			this->_listContact[_currentIndex].setFirstName(value);
	} while (!validValue);
}

void	PhoneBook::addLastName(void) {
	bool validValue = false;
	std::string	value;

	do {
		std::cout << "Last name: ";
		std::getline(std::cin, value);
		validValue = isValidName(value);
		if (validValue)
			this->_listContact[_currentIndex].setLastName(value);
	} while (!validValue);
}

void	PhoneBook::addNickName(void) {
	bool validValue = false;
	std::string	value;

	do {
		std::cout << "Nickname: ";
		std::getline(std::cin, value);
		validValue = isValidName(value);
		if (validValue)
			this->_listContact[_currentIndex].setNickName(value);
	} while (!validValue);
}

void	PhoneBook::addPhoneNumber(void) {
	bool validNumber = false;
	std::string number;

	do {
		std::cout << "Phone number: ";
		std::getline(std::cin, number);
		validNumber = isValidNumber(number);
		if (validNumber)
			this->_listContact[_currentIndex].setPhoneNumber(number);
	} while (!validNumber);
}

void	PhoneBook::addDarkSecret(void) {
	bool validValue = false;
	std::string value;
	
	do {
		std::cout << "Dark secret: ";
		std::getline(std::cin, value);
		validValue = isValidName(value);
		if (validValue)
			this->_listContact[_currentIndex].setDarkSecret(value);
	} while (!validValue);
}

void	PhoneBook::NewContact(void) {
	addFirstName();
	addLastName();
	addNickName();
	addPhoneNumber();
	addDarkSecret();
}

void	PhoneBook::ParseInput(std::string input) {
	if (!input.compare("ADD")) {
		std::cout << "follows workflow add" << std::endl;
		NewContact();
	}
	else if (!input.compare("SEARCH")) {
		// Printar todos os contatos
		std::cout << "follows workflow Search" << std::endl;
	}
	else if (!input.compare("EXIT")) {
		// Sair do loop
		std::cout << "follows workflow exit" << std::endl;
	}
	else
		std::cout << "Command invalid, please send a valid command!!" << std::endl;
}

bool	PhoneBook::isValidName(std::string line) {
	if (line.length() > 1) {
		for(int i = 0; line[i]; i++) {
			if (!isalnum(line[i]) && line[i] != ' ') {
				std::cout << "Please digit a valid name" << std::endl;
				return false;
			}
		}
		return true;
	}
	return false;
}

bool	PhoneBook::isValidNumber(std::string phoneNumber) {
	if (phoneNumber.length() == 0)
		return false;
	for (int i = 0; phoneNumber[i]; i++) {
		if (!isdigit(phoneNumber[i]) && phoneNumber[i] != ' ') {
			std::cout << "Please inform a valid number" << std::endl;
			return false;
		}
	}
	return true;
}
