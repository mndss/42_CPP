#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include <ClapTrap.hpp>
# include <ScavTrap.hpp>

class FragTrap : public ClapTrap {
	
	public:
		FragTrap(void);
		FragTrap(std::string name);
		FragTrap(FragTrap const &src);
		~FragTrap(void);
		FragTrap& operator=(FragTrap const &src);

		void	attack(std::string const &target);
		void	highFivesGuys(void);
};

#endif