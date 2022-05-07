#include <ScavTrap.hpp>

ScavTrap::ScavTrap(void) : ClapTrap() {
	std::cout << "ScavTrap default constructor called" << std::endl;
	this->_name = "";
	this->_hitPoints = 100;
	this->_energy = 50;
	this->_attackDamage = 20;
	return ;
}
ScavTrap::ScavTrap(std::string const &name) {

	std::cout << "ScavTrap default constructor called" << std::endl;
	this->_name = name;
	this->_hitPoints = 100;
	this->_energy = 50;
	this->_attackDamage = 20;
}

ScavTrap::ScavTrap(const ScavTrap &src) : ClapTrap( src ) {

	std::cout << "ScavTrap Copy constructor called" << std::endl;
	*this = src;
	return ;
}

ScavTrap& ScavTrap::operator=(const ScavTrap  &src) {

	std::cout << "ScavTrap Assingment operator called" << std::endl;
	if (this != &src) {
		this->_name = src._name;
		this->_hitPoints = src._hitPoints;
		this->_energy = src._energy;
		this->_attackDamage = src._attackDamage;
	}
	return *this;
}

ScavTrap::~ScavTrap(void) {
	std::cout << "ScavTrap desctructor called" << std::endl;
	return ;
}

void	ScavTrap::guardGate(void) {
	std::cout << "ScavTrap " << this->_name << " is now in Gate keeper mode" << std::endl;
	return ;
}

void	ScavTrap::attack(std::string const &target) {

	if (this->_energy == 0) {
		std::cout << "ScavTrap " << this->_name <<  " not have energy enought to attack" << std::endl;
		return ;
	}
	if (this->_hitPoints == 0) {
		std::cout << "ScavTrap" << this->_name << " is died" << std::endl;
		return ;
	}
	std::cout << "ScavTrap " << this->_name << " attacks " << target << ", causing " <<
	this->_attackDamage << " points of damage!" << std::endl;
	this->_energy--;
}