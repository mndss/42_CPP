#ifndef WRONG_CAT_HPP
# define WRONG_CAT_HPP

# include <WrongAnimal.hpp>

class WrongCat : public WrongAnimal {

	protected:
		std::string	type;

	public:
		WrongCat(void);
		WrongCat(WrongCat const &src);
		~WrongCat(void);
		
		WrongCat& operator=(WrongCat const &src);
		std::string	getType(void) const;
		void		makeSound(void) const;
};

#endif