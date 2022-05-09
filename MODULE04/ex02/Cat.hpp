#ifndef CAT_HPP
# define CAT_HPP

# include <AAnimal.hpp>

class Cat : public AAnimal {

	private:
		Brain*		_brain;

	public:
		Cat(void);
		Cat(Cat const &src);
		Cat& operator=(Cat const &src);
		~Cat(void);

		void		makeSound(void) const;
		void		setIdeaBrain(std::string idea, int index);
		std::string getIdeaBrain(int index) const ;
};

#endif
