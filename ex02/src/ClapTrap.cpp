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

ClapTrap::ClapTrap(const ClapTrap &copy)
{
	std::cout << "ClapTrap Copy Constructor called" << std::endl;
	*this = copy;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &src)
{
	std::cout << "ClapTrap Assignation operator called" << std::endl;
	this->_name = src._name;
	this->_hitPoints = src._hitPoints;
	this->_energyPoints = src._energyPoints;
	this->_attackDamage = src._attackDamage;
	return *this;
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
