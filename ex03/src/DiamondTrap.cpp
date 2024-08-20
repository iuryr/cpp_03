#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void)
{
	ClapTrap::_name = ClapTrap::_name + "_clap_name";
	FragTrap::setHP(100);
	ScavTrap::setEnergy(50);
	FragTrap::setAttackDamage(30);
	this->_name = "DefaultName";
	println("DiamondTrap default constructor called.");
}

DiamondTrap::~DiamondTrap(void)
{
	println("DiamondTrap destructor called.");
}

DiamondTrap::DiamondTrap(std::string name) 
{
	ClapTrap::_name = name + "_clap_name";
	this->_name = name;
	FragTrap::setHP(100);
	ScavTrap::setEnergy(50);
	FragTrap::setAttackDamage(30);
	println("DiamondTrap name constructor called with name " << name);
}

int DiamondTrap::getHP(void)
{
	return this->_hitPoints;
}

unsigned int DiamondTrap::getAttackDamage(void)
{
	return this->_attackDamage;
}

int DiamondTrap::getEnergy(void)
{
	std::cout << "Calling overridden function" << std::endl;
	return this->_energyPoints;
}

void DiamondTrap::attack(const std::string& target)
{
	// std::cout << "Calling overridden function" << std::endl;
	ScavTrap::attack(target);
}

std::string DiamondTrap::getName(void) const
{
	return this->_name;
}

void DiamondTrap::whoAmI(void)
{
	println("My ClapTrap name is " << ClapTrap::_name);
	println("My DiamondTrap name is " << _name);
}
