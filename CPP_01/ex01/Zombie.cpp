#include "Zombie.hpp"

Zombie::Zombie() {
	Zombie::name = "foo";
}

Zombie::~Zombie() {}

void Zombie::announce()
{
	std::cout << Zombie::name << " : BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::setName(std::string name)
{
	Zombie::name = name;
}