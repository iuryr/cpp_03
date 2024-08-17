#include "ClapTrap.hpp"
#include "FragTrap.hpp"

int main(void)
{
	println("### Chaining of construction");
	FragTrap s1;
	std::cout << std::endl;
	FragTrap s2("Iury");
	std::cout << std::endl;
	FragTrap s3(s2);
	std::cout << std::endl;
	FragTrap s4;
	s4 = s3;

	std::cout << std::endl;
	println("FragTrap attack:");
	s4.attack("Pyra");
	s4.highFiveGuys();
	s4.beRepaired(10);
	s4.takeDamage(110);
	s4.attack("Pyra");
	s4.highFiveGuys();

	std::cout << std::endl;
	println("s1 energy is " << s1.getEnergy());
	s1.setEnergy(0);
	println("s1 energy is " << s1.getEnergy());
	s1.attack("Pyra");

	
	std::cout << std::endl;
	println("###Chain of destruction");
}
