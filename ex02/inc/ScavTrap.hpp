#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {
	private:
		bool _guarding;
	public:
		ScavTrap();
		ScavTrap(std::string name);
		ScavTrap(const ScavTrap &copy);
		ScavTrap &operator=(const ScavTrap &src);
		~ScavTrap();
		void guardGate();
		void attack(const std::string& target);
		// ScavTrap(std::string name);
};

#endif