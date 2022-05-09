#ifndef AANIMAL_HPP 
# define AANIMAL_HPP 

# include <iostream>
# include <Brain.hpp>

class AAnimal {
	protected:
		std::string _type;
	
	public:
		AAnimal(void);
		AAnimal(AAnimal const &src);
		AAnimal& operator=(AAnimal const &src);
		virtual ~AAnimal(void);

		std::string			getType(void) const;
		virtual void		makeSound(void) const = 0;
		virtual void		setIdeaBrain(std::string idea, int index);
		virtual std::string getIdeaBrain(int index) const ;
};
#endif