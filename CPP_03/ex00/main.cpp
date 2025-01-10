#include "ClapTrap.hpp"

int main()
{
	ClapTrap claptrap("Claptrap");
	claptrap.attack("Enemy");
	claptrap.attack("Enemy");
	claptrap.attack("Enemy");
	claptrap.attack("Enemy");
	claptrap.attack("Enemy");
	claptrap.attack("Enemy");
	claptrap.attack("Enemy");
	claptrap.attack("Enemy");
	claptrap.attack("Enemy");
	claptrap.attack("Enemy");
	claptrap.attack("Enemy");
	claptrap.attack("Enemy");
	claptrap.takeDamage(5);
	claptrap.beRepaired(3);
	return 0;
}