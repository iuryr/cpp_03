#ifndef _CLAPTRAP_HPP_
#define _CLAPTRAP_HPP_

#include <iostream>

#include "qolMacros.hpp"

class ClapTrap
{
public:
	ClapTrap(void);
	~ClapTrap(void);
	ClapTrap(const ClapTrap& obj);
	ClapTrap& operator=(const ClapTrap& obj);

	ClapTrap(std::string name);

	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	void setEnergy(int points);

private:
	std::string _name;
	int _hitPoints;
	int _energyPoints;
	unsigned int _attackDamage;

	bool isAlive(void);
	bool hasEnergy(void);
};

#endif //_CLAPTRAP_HPP_
