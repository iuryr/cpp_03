#include "FragTrap.hpp"

FragTrap::FragTrap(void): ClapTrap(100, 100, 30)
{
	println("FragTrap default constructor called");
}

FragTrap::~FragTrap(void)
{
	println("FragTrap destructor called.");
}

FragTrap::FragTrap(const FragTrap& obj): ClapTrap(obj)
{
	*this = obj;
	println("FragTrap copy constructor called for " << obj._name);
}

FragTrap& FragTrap::operator=(const FragTrap& obj)
{
	if (this != &obj)
	{
		this->_name = obj._name;
		this->_hitPoints = obj._hitPoints;
		this->_energyPoints = obj._energyPoints;
		this->_attackDamage = obj._attackDamage;
	}
	return *this;
}

FragTrap::FragTrap(std::string name): ClapTrap(name, 100, 100, 30)
{
	println("FragTrap name constructor called with value " << name);
}

void FragTrap::highFiveGuys(void)
{
	if (isAlive() == false)
	{
		println("FragTrap " << this->_name << " is DED and can't high five!");
		return;
	}
	println("FragTrap " << this->_name << " puts its hand up for a high five!");
	return;
}
