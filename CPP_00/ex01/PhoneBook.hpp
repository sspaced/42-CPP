#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"

void	clearScreen();
void	displayMenu();

class	PhoneBook {
	private:
		Contact contactList[8];
		int		nb_contact;
	public:
		PhoneBook();
		~PhoneBook();
		void	addContact(Contact contact);
		void	displayPhoneBook();
		void	contactDetailChoice();
};

#endif