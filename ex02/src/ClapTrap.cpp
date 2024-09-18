#include <ClapTrap.hpp>

ClapTrap::ClapTrap(){
	_name = "Not defined";
	_hitPoints = 10;
	_energyPoints = 10;
	_attackDamage = 0;
	std::cout << "Default constructor called" << std::endl ;
}

ClapTrap::ClapTrap(std::string name)
{
	_name = name;
	_hitPoints = 10;
	_energyPoints = 10;
	_attackDamage = 0;
	std::cout << "Parameterized constructor called" << std::endl ;
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
	if (_hitPoints <= 0){
		std::cout << "cannot do anything, ";
	}
	std::cout << "attacks " << target << ", causing " << _attackDamage << " points of damage!" << std::endl;
	--_hitPoints;
}

void ClapTrap::takeDamage(unsigned int amount){
	_hitPoints -= amount;
}

void ClapTrap::beRepaired(unsigned int amount){
	std::cout << _name << " " ;
	if (_energyPoints <= 0){
		std::cout << "no energy points" << std::endl;
		return;
	}
	_energyPoints--;
	std::cout << "has repaired " << amount << " points" << std::endl;
}

ClapTrap::~ClapTrap() {
	std::cout << "Destructor called" << std::endl;
}
