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

Contact::Contact() : phoneNumber("000000"), name("Name"), 
					firstName("FirstName"), nickName("NickName"), 
					darkestSecret("None") {}

Contact::~Contact() {}

PhoneBook::PhoneBook() : nb_contact(1)
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

int displayUntil(std::string str)
{
	if (str.length() <= 10)
	{
		std::cout << str;
		return str.length();
	}
	else
	{
		std::cout << str.substr(0, 9) << ".";
		return 10;
	}
}

int Contact::displayField(std::string field_name)
{
	if (!field_name.compare("firstName"))
		return displayUntil(firstName);
	if (!field_name.compare("name"))
		return displayUntil(name);
	if (!field_name.compare("nickName"))
		return displayUntil(nickName);
	if (!field_name.compare("darkestSecret"))
		return displayUntil(darkestSecret);
	if (!field_name.compare("phoneNumber"))
		return displayUntil(phoneNumber);
	return 0;
}

void printSpace(int nb_space)
{
	for (int i = 0; i < nb_space; i++)
		std::cout << " ";
}

void Contact::displaySearchIndex(int index)
{
	int nb_space = 11;
	std::cout << "|";
	std::cout << index;
	printSpace(nb_space - 1);
	std::cout << "|";
	printSpace(nb_space - displayField("firstName"));
	std::cout << "|";
	printSpace(nb_space - displayField("name"));
	std::cout << "|";
	printSpace(nb_space - displayField("nickName"));
	std::cout << "|\n";
}

void Contact::SetContactInfo()
{
	std::string choice;
	std::cout << "Enter contact info ..." << std::endl;
	std::cout << "First name : ";
	std::getline(std::cin, choice);
	firstName = choice;

	std::cout << "Name : ";
	std::getline(std::cin, choice);
	name = choice;

	std::cout << "Nickname : ";
	std::getline(std::cin, choice);
	nickName = choice;

	std::cout << "Darkest secret : ";
	std::getline(std::cin, choice);
	darkestSecret = choice;

	std::cout << "Phone number : ";
	std::getline(std::cin, choice);
	phoneNumber = choice;
}

void PhoneBook::addContact(Contact contact)
{
	if (nb_contact == 8)
		contactList[0] = contact;
	else 
		contactList[nb_contact] = contact;
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