#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : ClapTrap {
	public:
	FragTrap();
	FragTrap(std::string name);
	FragTrap(const FragTrap &copy);
	FragTrap &operator=(const FragTrap &src);
	~FragTrap();
	void highFivesGuys(void);
};


#endif