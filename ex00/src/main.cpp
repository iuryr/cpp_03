#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap c1;
	std::cout << std::endl;
	ClapTrap c2(c1);
	std::cout << std::endl;
	ClapTrap c3("Galder");
	c3.attack("Pyra");
	c3.beRepaired(10);
	c3.takeDamage(20);
	c3.attack("Pyra");
	c3.beRepaired(10);
	c3.takeDamage(20);

	std::cout << std::endl;
	c2.setEnergy(0);
	c2.attack("Pyra");
	c2.beRepaired(10);
}
