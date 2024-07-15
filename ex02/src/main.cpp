//#include <ClapTrap.hpp>
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
	std::cout << "\n1 . ScavTrap Default Constructor ---------------\n" << std::endl;
	ScavTrap derivada;
	std::cout << "\n2 . ScavTrap Parameter Constructor ---------------\n" << std::endl;
	ScavTrap derivada2("Woki");
	std::cout << "\n3 . First Attack ---------------\n" << std::endl;
	derivada.attack("Marvin");
	std::cout << "\n4 . Second Attack ---------------\n" << std::endl;
	derivada2.attack("Marvin");
	std::cout << "\n5 . ScavTrap Gate Keeper -----------------------\n" << std::endl;
	derivada2.guardGate();
	std::cout << "\n6 . FragTrap constructor -----------------------\n" << std::endl;
	FragTrap derivada3("Pochoclo");
	std::cout << "\n7 . FragTrap High five! -----------------------\n" << std::endl;
	derivada3.highFivesGuys();
	std::cout << "\n ---------------" << std::endl;

	return 0;
}