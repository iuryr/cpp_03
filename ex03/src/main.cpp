#include "DiamondTrap.hpp"

int main(void)
{
	// DiamondTrap d1;
	DiamondTrap d1("Iury");
	d1.attack("Pyra");
	println(d1.getName());
	println(d1.getHP());
	println(d1.getEnergy());
	println(d1.getAttackDamage());
}
