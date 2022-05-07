#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include <ClapTrap.hpp>

class ScavTrap : public ClapTrap {
	
	public:
		ScavTrap(void);
		ScavTrap(std::string const &name);
		ScavTrap(const ScavTrap &src);
		ScavTrap& operator=(ScavTrap const &src);
		~ScavTrap(void);

		void	guardGate(void);
		void	attack(std::string const &target);
};

#endif