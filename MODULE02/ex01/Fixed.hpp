#ifndef FIXED_HPP 
# define FIXED_HPP

# include <iostream>
# include <cmath> 
class Fixed {

public:
	Fixed(void);
	Fixed(Fixed const & src);
	Fixed(int const nbr);
	Fixed(float const nbr);
	~Fixed(void);

	Fixed &	operator=(Fixed const & src);
	float	toFloat(void) const;
	int 	toInt(void) const;
	int		getRawBits(void) const;
	void	setRawBits(int const raw);

private: 
	int	static const	_bits;
	int 				_rawBits;
};

std::ostream & operator<<(std::ostream & o, Fixed const & i);

#endif
