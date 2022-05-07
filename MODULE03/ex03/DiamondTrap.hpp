#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include <FragTrap.hpp>
# include <ScavTrap.hpp>

class DiamondTrap : virtual public ClapTrap, virtual public ScavTrap, virtual public FragTrap {
	private:
		std::string _name;

	public:
		DiamondTrap(void);
		DiamondTrap(std::string name);
		DiamondTrap(DiamondTrap const &src);
		DiamondTrap& operator=(DiamondTrap const &src);
		~DiamondTrap(void);

		void	attack(std::string const &target);
		void	whoAmI(void);
};

#endif 