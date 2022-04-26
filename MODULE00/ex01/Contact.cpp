#include <Contact.hpp>

Contact::Contact(void) {
	return ;
}

Contact::~Contact(void) {
	return ;
}

void	Contact::setFirstName(std::string name) {
	this->_firstName = name;
}

void	Contact::setLastName(std::string name) {
	this->_lastName = name;
}

void	Contact::setNickName(std::string name) {
	this->_nickName = name;
}

void	Contact::setPhoneNumber(std::string number) {
	this->_phoneNumber = number;
}

void	Contact::setDarkSecret(std::string secret) {
	this->_darkSecret = secret;
}

void	Contact::setId(int id) {
	this->_id = id;
}

std::string	Contact::getFirstName(void) {
	return this->_firstName;
}

std::string	Contact::getLastName(void) {
	return this->_lastName;
}

std::string	Contact::getNickName(void) {
	return this->_nickName;
}

std::string	Contact::getPhoneNumber(void) {
	return this->_phoneNumber;
}

std::string	Contact::getDarkSecret(void) {
	return this->_darkSecret;
}

std::string	Contact::getId(void) {
	return std::to_string(this->_id);
}
