#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <iomanip>
#include <stdlib.h>

int		displayUntil(std::string str);
void	printSpace(int nb_space);

class	Contact {
	private:
		std::string	phoneNumber;
		std::string name;
		std::string firstName;
		std::string nickName;
		std::string darkestSecret;
	public:
		Contact();
		~Contact();
		void	DisplayContact(int index);
		void	SetContactInfo();
		int		displayField(std::string field_name);
		void	displaySearchIndex(int index);
};

#endif