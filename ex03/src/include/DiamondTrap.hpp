#ifndef _DIAMONDTRAP_HPP_
#define _DIAMONDTRAP_HPP_

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

#include <iostream>

class DiamondTrap: public ScavTrap, public FragTrap
{
public:
	DiamondTrap(void);
	~DiamondTrap(void);
	DiamondTrap(const DiamondTrap& obj);
	DiamondTrap& operator=(const DiamondTrap& obj);
	
	DiamondTrap(std::string name);

	int getHP(void);
	int getEnergy(void);
	std::string getName(void) const;
	unsigned int getAttackDamage(void);

	void attack(const std::string& target);
	void whoAmI(void);

private:
	std::string _name;
};

#endif //_DIAMONDTRAP_HPP_
