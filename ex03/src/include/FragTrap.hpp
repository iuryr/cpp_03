#ifndef _FRAGTRAP_HPP_
#define _FRAGTRAP_HPP_

#include "ClapTrap.hpp"

class FragTrap: virtual public ClapTrap
{
public:
	FragTrap(void);
	~FragTrap(void);
	FragTrap(const FragTrap& obj);
	FragTrap& operator=(const FragTrap& obj);
	
	FragTrap(std::string name);

	void highFiveGuys(void);
	void setHP(int hp);
	void setAttackDamage(unsigned int points);
};

#endif //_FRAGTRAP_HPP_
