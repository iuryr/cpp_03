#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
	println("### Chaining of construction");
	ScavTrap s1;
	std::cout << std::endl;
	ScavTrap s2("Iury");
	std::cout << std::endl;
	ScavTrap s3(s2);
	std::cout << std::endl;
	ScavTrap s4;
	s4 = s3;

	std::cout << std::endl;
	println("ScavTrap overloaded attack:");
	s4.attack("Pyra");
	s4.guardGate();
	s4.beRepaired(10);
	s4.takeDamage(110);
	s4.attack("Pyra");
	s4.guardGate();

	std::cout << std::endl;
	s1.setEnergy(0);
	s1.attack("Pyra");

	
	std::cout << std::endl;
	println("Chain of destruction");
}
