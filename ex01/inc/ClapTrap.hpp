#ifndef ClapTrap_HPP
#define ClapTrap_HPP

#include <iostream>
#include <string>
#include <fstream>
#include <sstream>

class ClapTrap{
	protected:
		std::string _name;
		int _hitPoints;
		int _energyPoints;
		int _attackDamage;

	public:
		ClapTrap();
		ClapTrap(std::string name);
		ClapTrap(const ClapTrap &copy);
		ClapTrap &operator=(const ClapTrap &src);
		virtual void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		~ClapTrap();
};

#endif