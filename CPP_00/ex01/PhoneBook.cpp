#include "PhoneBook.hpp"

void clearScreen()
{
	// Efface l'écran et remet le curseur en haut à gauche
	std::cout << "\033c";
}

void displayMenu()
{
	std::cout << "=====================\n";
	std::cout << "    PhoneBook CLI    \n";
	std::cout << "=====================\n";
	std::cout << "1. ADD\n";
	std::cout << "2. SEARCH\n";
	std::cout << "3. EXIT\n";
	std::cout << "=====================\n";
	std::cout << "Please choose an option (1-3): ";
}

PhoneBook::PhoneBook() : nb_contact(0)
{
	for (int i = 0; i < 8; i++)
	{
		contactList[i] = Contact();
	}
}

PhoneBook::~PhoneBook() {}

void Contact::DisplayContact(int index)
{
	std::cout << "Detail for contact " << index << " :\n"<<std::endl;
	std::cout << "First name : " << firstName << std::endl;
	std::cout << "Last name : " << name << std::endl;
	std::cout << "Nick name : " << nickName << std::endl;
	std::cout << "Darkest secret : " << darkestSecret << std::endl;
	std::cout << "Phone number : " << phoneNumber << std::endl;
}

void PhoneBook::addContact(Contact contact)
{
	contactList[nb_contact%8] = contact;
	nb_contact++;
}

void PhoneBook::displayPhoneBook()
{
	std::cout << "|Index      |First name |Last name  |Nick name  |\n";
	for (int i = 0; i < 8; i++)
	{
		contactList[i].displaySearchIndex(i + 1);
	}
	std::cout << "|-----------|-----------|-----------|-----------|\n";
}

void PhoneBook::contactDetailChoice()
{
	std::string choice;

	std::cout << "Choose an index for detail or q to quit ... ";

	while (true)
	{
		std::getline(std::cin, choice);
		int choice_int = std::atoi(choice.c_str());
		if (choice_int >= 1 && choice_int <= 8)
		{
			clearScreen();
			contactList[choice_int].DisplayContact(choice_int);
			std::cout << "Press any key to quit ... ";
			std::getline(std::cin, choice);
			break;
		}
		else if (!choice.compare("q"))
			break ;
		else
		{
			clearScreen();
			std::cout << "Wrong index, please choose again or q to quit : ";
		}
	}
}