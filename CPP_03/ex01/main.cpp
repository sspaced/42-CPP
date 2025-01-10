#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
	ScavTrap scavtrap("Scavtrap");
	scavtrap.attack("Enemy");
	scavtrap.takeDamage(5);
	scavtrap.beRepaired(3);
	return 0;
}