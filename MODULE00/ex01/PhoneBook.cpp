#include <PhoneBook.hpp>

PhoneBook::PhoneBook(void) {
	std::cout << "Welcome to your PhoneBook" << std::endl;
	std::cout << "You can type commands: " << std::endl;
	std::cout << "\"ADD\" to add a new contact" << std::endl;
	std::cout << "\"SEARCH\" to display your contact list" << std::endl;
	std::cout << "\"EXIT\" to exit" << std::endl;

	this->_currentIndex = 0;
	this->_total = 0;
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
	if (_currentIndex == 8)
		this->_currentIndex = 0;	
	addFirstName();
	addLastName();
	addNickName();
	addPhoneNumber();
	addDarkSecret();
	_listContact[_currentIndex].setId(_currentIndex + 1);
	this->_currentIndex++;
	if (_total < 8) {
		this->_total++;
	}
}

std::string	PhoneBook::resizeString(std::string str) {
	std::string newStr;

	if (str.length() > 10) {
		newStr = str.substr(0, 10);
		newStr[9] = '.';
		return newStr;
	}
	return str;
} 

void	PhoneBook::printAllContacts(void) {
	std::cout << "|        ID|FIRST NAME| LAST NAME|  NICKNAME|" << std::endl;
	std::cout << "*********************************************" << std::endl;
	for (int i = 0; i < _total; i++) {
		std::cout << std::right <<
		'|' << std::setw(10) << resizeString(_listContact[i].getId()) << 
		'|' << std::setw(10) << resizeString(_listContact[i].getFirstName()) <<
		'|' << std::setw(10) << resizeString(_listContact[i].getLastName())<<
		'|' << std::setw(10) << resizeString(_listContact[i].getNickName())<< 
		'|' << std::endl;
	}
}

void	PhoneBook::printContactByIndex(int index) {
	std::cout << "FIRST NAME: " << this->_listContact[index].getFirstName() << std::endl; 
	std::cout << "LAST NAME: " << this->_listContact[index].getLastName() << std::endl;
	std::cout << "NICKNAME: " << this->_listContact[index].getNickName() << std::endl; 
	std::cout << "PHONE NUMBER: " << this->_listContact[index].getPhoneNumber() << std::endl; 
	std::cout << "DARK SECRET: " << this->_listContact[index].getDarkSecret() << std::endl; 
}

void	PhoneBook::searchOneContact(void) {
	std::string	idString;
	bool		validId;
	int			id;

	do {
		std::cout << "Inform a id: ";
		std::getline(std::cin, idString);
		id = isValidId(idString);
		if (id)
			printContactByIndex(id - 1);
		else
			std::cout << "Inform a valid id" << std::endl;
	} while (!id);
}

bool	PhoneBook::ParseInput(std::string input) {
	if (!input.compare("ADD")) {
		NewContact();
	}
	else if (!input.compare("SEARCH")) {
		printAllContacts();
		searchOneContact();
	}
	else if (!input.compare("EXIT")) 
		return false;
	else
		std::cout << "Command invalid, please type a valid command!!" << std::endl;
	return true;
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

int		PhoneBook::isValidId(std::string idString) {
	int id;

	if (idString.length() == 1 && isdigit(idString[0]))
		id = stoi(idString);
		if (id > 0 && id <= _total)
			return id;
	return 0;
}