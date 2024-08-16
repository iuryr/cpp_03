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

void ClapTrap::attack(const std::string& target)
{

}
