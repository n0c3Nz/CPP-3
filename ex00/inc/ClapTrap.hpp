#ifndef CLAP_TRAP_HPP
#define CLAP_TRAP_HPP

#include <iostream>
#include <string>
#include <fstream>
#include <sstream>

class Claptrap{
	private:
		std::string _name;
		int _hitPoints;
		int _energyPoints;
		int _attackDamage;

	public:
		Claptrap();
		Claptrap(std::string name);
		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		~Claptrap();
};

#endif