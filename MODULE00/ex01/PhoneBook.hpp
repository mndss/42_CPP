#ifndef PHONEBOOK_H
# define PHONEBOOK_H

# include <Contact.hpp>
# include <string.h>
# include <iostream>
# include <algorithm>
# include <cctype>
# include <iomanip>
# include <locale>

class PhoneBook {
	public:
		PhoneBook(void);
		~PhoneBook(void);

		int			Search(void);
		int			Add(Contact contact);
		void		Welcome(void);
		bool		ParseInput(std::string input);
		void		NewContact(void);
		bool		isValidName(std::string line);
		bool		isValidNumber(std::string phoneNumber);
		int			isValidId(std::string idString);
		void		addFirstName(void);
		void		addLastName(void);
		void		addNickName(void);
		void		addPhoneNumber(void);
		void		addDarkSecret(void);
		void		printAllContacts(void);
		std::string	resizeString(std::string str);
		void		searchOneContact(void);
		void		printContactByIndex(int index);

	private:
		Contact _listContact[8];
		int		_currentIndex;
		int		_total;
};

#endif