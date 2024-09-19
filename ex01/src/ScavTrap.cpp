#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap() {
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
	_guarding = false;
    std::cout << "ScavTrap default constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name) {
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
	_guarding = false;
    std::cout << "ScavTrap parameterized constructor called with name: " << name << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &copy): ClapTrap(copy)
{
	this->_guarding = copy._guarding;
	std::cout << "ScavTrap Copy Constructor called" << std::endl;
}

void ScavTrap::guardGate(){
	_guarding = true;
	std::cout << "ScavTrap is now in Gate keeper mode" << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &src)
{
	std::cout << "ScavTrap Assignation operator called" << std::endl;
	this->_name = src._name;
	this->_hitPoints = src._hitPoints;
	this->_energyPoints = src._energyPoints;
	this->_attackDamage = src._attackDamage;
	this->_guarding = src._guarding;
	return *this;
}

void ScavTrap::attack(const std::string& target)
{
	std::cout << "ScavTrap " << _name << " ";
	if (_hitPoints <= 0){
		std::cout << "cannot do anything, ";
	}
	std::cout << "attacks " << target << ", causing " << _attackDamage << " points of damage!" << std::endl;
	--_hitPoints;
}


ScavTrap::~ScavTrap() {
	std::cout << "ScavTrap destructor called" << std::endl;
}