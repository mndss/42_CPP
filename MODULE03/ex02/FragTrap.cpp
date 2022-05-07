#include <FragTrap.hpp>

FragTrap::FragTrap(void) : ClapTrap() {

	std::cout << "FragTrap constructor called" << std::endl;
	this->_name = "";
	this->_hitPoints = 100;
	this->_energy = 100;
	this->_attackDamage = 30;
	return ;
}


FragTrap::FragTrap(std::string const name) : ClapTrap(name) {
	
	std::cout << "FragTrap constructor called" << std::endl;
	this->_name = name;
	this->_hitPoints = 100;
	this->_energy = 100;
	this->_attackDamage = 30;
	return ;
}

FragTrap::FragTrap(FragTrap const &src) : ClapTrap(src) {
	std::cout << "FragTrap copy constructor called" << std::endl;
	*this = src;
	return ;
}

FragTrap& FragTrap::operator=(FragTrap const &src) {
	
	std::cout << "FragTrap assignment operator called" << std::endl;
	
	if (this != &src) {
		this->_name = src._name;
		this->_hitPoints = src._hitPoints;
		this->_energy = src._energy;
		this->_attackDamage = src._attackDamage;
	} 
	return *this;
}

FragTrap::~FragTrap(void) {
	std::cout << "FragTrap destructor called" << std::endl;
	return ;
}

void	FragTrap::attack(std::string const &target) {
	
	if (this->_energy == 0) {
		std::cout << "Dont have energy to attack" << std::endl;
		return ;
	}
	if (this->_hitPoints == 0) {
		std::cout << this->_name << "is dead" << std::endl;
		return ;
	}
	std::cout << "FragTrap " << this->_name << " attacks " << target << ", causing " <<
	this->_attackDamage << " points of damage!" << std::endl;
	this->_energy--;
	return ;
}

void	FragTrap::highFivesGuys(void) {
	std::string highFive;
	
	std::cout << "FragTrap " << this->_name << " 🖐️ :";
	std::getline(std::cin, highFive);
	if (highFive == "🖐️")
		std::cout << " 👏" << std::endl;
	else
		std::cout << "FragTrap " << this->_name << " is sad" << std::endl;
	return ; 
}