//#include <ClapTrap.hpp>
#include "ScavTrap.hpp"

int main()
{
	std::cout << "\n1 . Default Constructor ---------------\n" << std::endl;
	ScavTrap derivada;
	std::cout << "\n2 . Parameter Constructor ---------------\n" << std::endl;
	ScavTrap derivada2("Woki");
	std::cout << "\n3 . First Attack ---------------" << std::endl;
	derivada.attack("Marvin");
	std::cout << "\n4 . Second Attack ---------------" << std::endl;
	derivada2.attack("Marvin");
	std::cout << "\n5 . Take Damage ---------------" << std::endl;
	derivada2.takeDamage(10);
	std::cout << "\n-----------------------" << std::endl;
	derivada2.guardGate();
	std::cout << "\n-----------------------" << std::endl;
	return 0;
}