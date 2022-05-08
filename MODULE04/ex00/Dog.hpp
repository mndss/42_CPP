#ifndef DOG_HPP
# define DOG_HPP

# include <Animal.hpp>

class Dog : virtual public Animal {

	protected:
		std::string type;

	public:
		Dog(void);
		Dog(Dog const &src);
		Dog& operator=(Dog const &src);
		~Dog(void);

		void		makeSound(void) const;
		std::string	getType(void) const;
};

#endif
