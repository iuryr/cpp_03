#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void): _name("DefaultName"), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	println("ClapTrap default constructor called.");
}

ClapTrap::~ClapTrap(void)
{
	println("ClapTrap destructor called.");
}

ClapTrap::ClapTrap(const ClapTrap& obj)
{
	*this = obj;
	println("ClapTrap copy constructor called for " << obj._name);
}

ClapTrap& ClapTrap::operator=(const ClapTrap& obj)
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

ClapTrap::ClapTrap(std::string name): _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	println("ClapTrap name constructor called with " << name << " value.");
}

ClapTrap::ClapTrap(int hitPoints, int energyPoints, unsigned int attackDamage):
_name("DefaultName"), _hitPoints(hitPoints), _energyPoints(energyPoints), _attackDamage(attackDamage)
{
	println("ClapTrap custom constructor called.");
}

ClapTrap::ClapTrap(std::string name, int hitPoints, int energyPoints, unsigned int attackDamage):
_name(name), _hitPoints(hitPoints), _energyPoints(energyPoints), _attackDamage(attackDamage)
{
	println("ClapTrap custom constructor called with " << name << " name.");
}

bool ClapTrap::isAlive(void)
{
	if (this->_hitPoints <= 0)
	{
		return false;
	}
	return true;
}

bool ClapTrap::hasEnergy(void)
{
	if (this->_energyPoints <= 0)
	{
		return false;
	}
	return true;
}

void ClapTrap::attack(const std::string& target)
{
	if (isAlive() == false)
	{
		println("ClapTrap " << this->_name << "can't attack cuz he's DED.");
		return;
	}
	if (hasEnergy() == false)
	{
		println("ClapTrap " << this->_name << "can't attack cuz he has no energy");
		return;
	}

	this->_energyPoints--;
	println("ClapTrap " << this->_name << " attacks " << target << ", causing "
		 << this->_attackDamage << " points of damage!");
	return;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (isAlive() == false)
	{
		println("ClapTrap " << this->_name << " can't repair itself cuz he's DED.");
		return;
	}
	if (hasEnergy() == false)
	{
		println("ClapTrap " << this->_name << " can't repair itself cuz he has no energy");
		return;
	}

	this->_energyPoints--;
	this->_hitPoints += amount;
	println("ClapTrap " << this->_name << " repairs itself for "
		 << amount << " hit points!");
	return;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (isAlive() == false)
	{
		println("ClapTrap " << this->_name << " is already DED.");
		return;
	}

	this->_hitPoints -= amount;
	println("ClapTrap " << this->_name << " receives " << amount << " damage!");
	if (this->_hitPoints < 0)
		this->_hitPoints = 0;
	return;
}

int ClapTrap::getEnergy(void) const
{
	return this->_energyPoints;
}

void ClapTrap::setEnergy(int points)
{
	this->_energyPoints = points;
	return;
}
