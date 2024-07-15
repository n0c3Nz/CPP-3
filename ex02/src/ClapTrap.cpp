#include <ClapTrap.hpp>

ClapTrap::ClapTrap(){
	_hitPoints = 10;
	_energyPoints = 10;
	_attackDamage = 0;
	std::cout << "ClapTrap default constructor called" << std::endl ;
}

ClapTrap::ClapTrap(std::string name)
{
	_name = name;
	_hitPoints = 10;
	_energyPoints = 10;
	_attackDamage = 0;
	std::cout << "ClapTrap parameterized constructor called with name: " << name << std::endl ;
}

void ClapTrap::attack(const std::string& target)
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

void ClapTrap::takeDamage(unsigned int amount){
	_hitPoints -= amount;
}

void ClapTrap::beRepaired(unsigned int amount){
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

ClapTrap::~ClapTrap() {
	std::cout << "ClapTrap destructor called" << std::endl;
}
