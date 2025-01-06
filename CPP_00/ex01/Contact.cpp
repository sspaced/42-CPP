#include "Contact.hpp"

Contact::Contact() {}

Contact::~Contact() {}

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

void printSpace(int nb_space)
{
	for (int i = 0; i < nb_space; i++)
		std::cout << " ";
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