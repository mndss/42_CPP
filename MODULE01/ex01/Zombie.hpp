#ifndef HORDE_OF_ZOMBIES_HPP
# define HORDE_OF_ZOMBIES_HPP

# include <iostream>
# include <stdlib.h>


class Zombie {
	
	public:
		Zombie(void);
		~Zombie(void);
		void	Announce(void);
		void	setName(std::string name);
	
	private:
		std::string _name;
};

Zombie*	zombieHorde( int N, std::string name );

#endif