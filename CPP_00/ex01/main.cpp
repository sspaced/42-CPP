#include "PhoneBook.hpp"

int main()
{
	PhoneBook	phoneBook;
	Contact		contact;
	std::string	choice;
	int			exit = 0;

	while (true)
	{
		if (exit == 1)
			break;
		clearScreen();
		displayMenu();
		std::getline(std::cin, choice);
		while (true)
		{
			if (choice == "1" || choice == "ADD")
			{
				clearScreen();
				std::cout << "You chose to ADD a contact.\n\n";
				contact.SetContactInfo();
				phoneBook.addContact(contact);
				break;
			}
			else if (choice == "2" || choice == "SEARCH")
			{
				clearScreen();
				std::cout << "You chose to SEARCH for a contact.\n\n";
				phoneBook.displayPhoneBook();
				phoneBook.contactDetailChoice();
				break;
			}
			else if (choice == "3" || choice == "EXIT")
			{
				clearScreen();
				std::cout << "Exiting PhoneBook. Goodbye!\n";
				exit = 1;
				break;
			}
			else
			{
				std::cout << "Invalid choice. Please choose again.\n";
				std::cout << "Please choose an option (1-3): ";
				std::getline(std::cin, choice);
			}
		}
	}

	return 0;
}