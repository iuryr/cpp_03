#include "FragTrap.hpp"

FragTrap::FragTrap(void): ClapTrap()
{
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
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

FragTrap::FragTrap(std::string name): ClapTrap(name)
{
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
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

void FragTrap::setHP(int hp)
{
	this->_hitPoints = hp;
	return ;
}

void FragTrap::setAttackDamage(unsigned int points)
{
	this->_attackDamage = points;
	return;
}
