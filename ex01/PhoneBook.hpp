#ifndef PHONEBOOK_H
# define PHONEBOOK_H

# include <Contact.hpp>
# include <string.h>
# include <iostream>
# include <algorithm>
# include <cctype>

class PhoneBook {
	public:
		PhoneBook(void);
		~PhoneBook(void);

		int		Search(void);
		int		Add(Contact contact);
		void	Welcome(void);
		void	ParseInput(std::string input);
		void	NewContact(void);
		bool	isValidName(std::string line);
		bool	isValidNumber(std::string phoneNumber);
		void	addFirstName(void);
		void	addLastName(void);
		void	addNickName(void);
		void	addPhoneNumber(void);
		void	addDarkSecret(void);

	private:
		Contact _listContact[8];
		int		_currentIndex;
};

#endif