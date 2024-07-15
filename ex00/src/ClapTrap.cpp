#include <ClapTrap.hpp>

Claptrap::Claptrap(){
	_name = "Not defined";
	_hitPoints = 10;
	_energyPoints = 10;
	_attackDamage = 0;
	std::cout << "Default constructor called" << std::endl ;
}

Claptrap::Claptrap(std::string name)
{
	_name = name;
	_hitPoints = 10;
	_energyPoints = 10;
	_attackDamage = 0;
	std::cout << "Parameterized constructor called" << std::endl ;
}

void Claptrap::attack(const std::string& target)
{
	std::cout << _name << " ";
	if (_energyPoints <= 0 || _hitPoints <= 0){
		std::cout << "cannot do anything, ";
		if (_hitPoints <= 0){
			std::cout << "no hit points" << std::endl;
			return;
		}
		if (_energyPoints <= 0){
			std::cout << "no energy points" << std::endl;
			return;
		}
	}
	--_energyPoints;
	std::cout << "attacks " << target << ", causing " << _attackDamage << " points of damage!" << std::endl;
}

void Claptrap::takeDamage(unsigned int amount){
	_hitPoints -= amount;
}

void Claptrap::beRepaired(unsigned int amount){
	std::cout << _name << " " ;
	if (_energyPoints <= 0 || _hitPoints <= 0){
		std::cout << "cannot do anything, ";
		if (_hitPoints <= 0){
			std::cout << "no hit points" << std::endl;
			return;
		}
		if (_energyPoints <= 0){
			std::cout << "no energy points" << std::endl;
			return;
		}
	}
	--_energyPoints;
	_hitPoints += amount;
	std::cout << "has repaired " << amount << " points" << std::endl;
}

Claptrap::~Claptrap() {
	std::cout << "Destructor called" << std::endl;
}
