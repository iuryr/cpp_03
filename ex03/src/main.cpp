#include "DiamondTrap.hpp"

int main(void)
{
	// println("DiamondTrap d1(\"Iury\");");
	// DiamondTrap d1("Iury");
	// std::cout << std::endl;
	//
	// println("d1.attack(\"Pyra\"); -> calls ScavTrap attack() member function");
	// d1.attack("Pyra");
	// std::cout << std::endl;
	//
	// println("d1.getHP(); //should be 100 (==FragTrap)");
	// println(d1.getHP());
	// std::cout << std::endl;
	//
	// println("d1.getEnergy(); //should be 49 (==ScavTrap - 1 from the attack)");
	// println(d1.getEnergy());
	// std::cout << std::endl;
	//
	// println("d1.getAttackDamage(); //should be 30 (==FragTrap)");
	// println(d1.getAttackDamage());
	// std::cout << std::endl;
	//
	// println("whoAmI():");
	// d1.whoAmI();

	println("####### Default Name######");
	println("DiamondTrap d2;");
	DiamondTrap d2;
	std::cout << std::endl;

	println("d2.attack(\"Pyra\"); -> calls ScavTrap attack() member function");
	d2.attack("Pyra");
	std::cout << std::endl;

	println("d2.getHP(); //should be 100 (==FragTrap)");
	println(d2.getHP());
	std::cout << std::endl;

	println("d2.getEnergy(); //should be 49 (==ScavTrap - 1 from the attack)");
	println(d2.getEnergy());
	std::cout << std::endl;

	println("d2.getAttackDamage(); //should be 30 (==FragTrap)");
	println(d2.getAttackDamage());
	std::cout << std::endl;

	println("whoAmI():");
	d2.whoAmI();


	println("");
	println("### Copy Constructor and Assignment Operator Overload");
	println("DiamondTrap d3(d2);");
	DiamondTrap d3(d2);

	println("DiamondTrap d4;\n d4=d2;");
	DiamondTrap d4;
	d4 = d2;
	println("d4 name:" << d4.getName());


	println("");
	println("Destructor cascade:");
}
