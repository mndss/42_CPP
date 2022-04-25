#ifndef CONTACT_H
# define CONTACT_H

# include <iostream>
# include <string>
# include <cctype>
# include <algorithm>

class Contact {
	public:
		Contact(void);
		~Contact(void);
		void	setFirstName(std::string name);
		void	setLastName(std::string name);
		void	setNickName(std::string name);
		void	setPhoneNumber(std::string number);
		void	setDarkSecret(std::string secret);
		void	setId(int id);

		std::string	getFirstName(void);
		std::string	getLastName(void);
		std::string	getNickName(void);
		std::string	getPhoneNumber(void);
		std::string	getDarkSecret(void);
		std::string	getId(void);

	private:
		std::string	_firstName;
		std::string	_lastName;
		std::string	_nickName;
		std::string	_phoneNumber;
		std::string	_darkSecret;
		int 		_id;
};

#endif