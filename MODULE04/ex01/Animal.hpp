#ifndef ANIMAL_HPP 
# define ANIMAL_HPP 

# include <iostream>
# include <Brain.hpp>

class Animal {
	protected:
		std::string _type;
	
	public:
		Animal(void);
		Animal(Animal const &src);
		Animal& operator=(Animal const &src);
		virtual ~Animal(void);

		std::string			getType(void) const;
		virtual void		makeSound(void) const;
		virtual void		setIdeaBrain(std::string idea, int index);
		virtual std::string getIdeaBrain(int index) const ;
};
#endif