#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void): ClapTrap()
{
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
	println("ScavTrap default constructor called");
}

ScavTrap::~ScavTrap(void)
{
	println("ScavTrap destructor called.");
}

ScavTrap::ScavTrap(const ScavTrap& obj): ClapTrap(obj)
{
	*this = obj;
	println("ScavTrap copy constructor called for " << obj._name);
}

ScavTrap& ScavTrap::operator=(const ScavTrap& obj)
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

ScavTrap::ScavTrap(std::string name): ClapTrap(name)
{
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
	println("ScavTrap name constructor called with value " << name);
}

void ScavTrap::attack(const std::string& target)
{
	if (isAlive() == false)
	{
		println("ScavTrap " << this->_name << " can't attack cuz he's DED.");
		return;
	}
	if (hasEnergy() == false)
	{
		println("ScavTrap " << this->_name << " can't attack cuz he has no energy");
		return;
	}

	this->_energyPoints--;
	println("ScavTrap " << this->_name << " attacks " << target << ", causing "
		 << this->_attackDamage << " points of damage!");
	return;
}

void ScavTrap::guardGate(void)
{
	if (isAlive() == false)
	{
		println("ScavTrap " << this->_name << " is DED and can't be in Gate keeper mode.");
		return;
	}
	println("ScavTrap " << this->_name << " is now in Gate keeper mode.");
	return;
}

void ScavTrap::setEnergy(int points)
{
	this->_energyPoints = points;
	return;
}
