#ifndef CAT_HPP
# define CAT_HPP

# include <Animal.hpp>

class Cat : virtual public Animal {

	protected:
		std::string type;

	public:
		Cat(void);
		Cat(Cat const &src);
		Cat& operator=(Cat const &src);
		~Cat(void);

		void		makeSound(void) const;
		std::string	getType(void) const;

};

#endif
