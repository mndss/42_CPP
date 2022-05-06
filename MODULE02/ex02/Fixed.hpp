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

	Fixed&	operator=(Fixed const &src);
	Fixed	operator+(Fixed const &rhs);
	Fixed	operator-(Fixed const &rhs);
	Fixed	operator*(Fixed const &rhs);
	Fixed	operator/(Fixed const &rhs);

	Fixed	operator++(int);
	Fixed	operator++(void);
	Fixed	operator--(int);
	Fixed	operator--(void);

	bool 	operator>(Fixed const &rhs);
	bool 	operator>=(Fixed const &rhs);
	bool 	operator<(Fixed const &rhs);
	bool 	operator<=(Fixed const &rhs);
	bool 	operator==(Fixed const &rhs);
	bool 	operator!=(Fixed const &rhs);

	float	toFloat(void) const;
	int 	toInt(void) const;
	int		getRawBits(void) const;
	void	setRawBits(int const raw);

	static Fixed&			min(Fixed &lhs, Fixed &rhs);
	static const Fixed& 	min(Fixed const &lhs, Fixed const &rhs);
	static Fixed&			max(Fixed &lhs, Fixed &rhs);
	static const Fixed&  	max(Fixed const &lhs, Fixed const &rhs);

private:
	int	static const	_bits;
	int 				_rawBits;
};

std::ostream & operator<<(std::ostream & o, Fixed const & i);

#endif
