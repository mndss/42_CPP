#include <Fixed.hpp>

int const Fixed::_bits = 8;

Fixed::Fixed(void) : _rawBits(0) {
	std::cout << "Default constructor called" << std::endl;
	return ;
}

Fixed::Fixed(Fixed const &src) {
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
	return ;
}

Fixed::Fixed(int const nbr) {
	std::cout << "Int constructor called" << std::endl;
	this->setRawBits( nbr << Fixed::_bits);
	return ;
}

Fixed::Fixed(float const nbr) {
	std::cout << "Float constructor called" << std::endl;
	this->setRawBits(roundf (nbr  * ( 1 << Fixed::_bits)));
	return ;
}

float	Fixed::toFloat(void) const {
	return (float)this->getRawBits() / (1 << Fixed::_bits);
}

int		Fixed::toInt(void) const {
	return this->getRawBits() >> Fixed::_bits;
}

int		Fixed::getRawBits(void) const {
	return this->_rawBits;
}

void	Fixed::setRawBits(int const raw) {
	this->_rawBits = raw;
	return ;
}

Fixed &Fixed::operator=(Fixed const &src) {
	std::cout << "Copy assingment constructor called" << std::endl;
	this->_rawBits = src.getRawBits();
	return *this;
}

Fixed::~Fixed(void) {
	std::cout << "Destructor called" << std::endl;
	return ;
}

std::ostream& operator<<(std::ostream& output, const Fixed &src) {
	output << src.toFloat();
	return output;
}
