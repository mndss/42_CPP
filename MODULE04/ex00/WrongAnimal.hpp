#ifndef WRONG_ANIMAL_HPP
# define WRONG_ANIMAL_HPP

# include <iostream>

class WrongAnimal {
	protected:
		std::string type;
	
	public:
		WrongAnimal(void);
		WrongAnimal(WrongAnimal const &src);
		~WrongAnimal(void);
		
		WrongAnimal& operator=(WrongAnimal const &src);

		virtual std::string	getType(void) const;
		virtual void		makeSound(void) const;
};

#endif