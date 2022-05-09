#ifndef DOG_HPP
# define DOG_HPP

# include <AAnimal.hpp>

class Dog : public AAnimal {

	private:
		Brain* _brain;

	public:
		Dog(void);
		Dog(Dog const &src);
		Dog& operator=(Dog const &src);
		~Dog(void);

		void		makeSound(void) const;
		void		setIdeaBrain(std::string idea, int index);
		std::string getIdeaBrain(int index) const ;
};

#endif
