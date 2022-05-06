#include <Fixed.hpp>

int const Fixed::_bits = 8;

Fixed::Fixed(void) : _rawBits(0) {
	return ;
}

Fixed::Fixed(Fixed const &src) {
	*this = src;
	return ;
}

Fixed::Fixed(int const nbr) {
	this->setRawBits( nbr << Fixed::_bits);
	return ;
}

Fixed::Fixed(float const nbr) {
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

Fixed	&Fixed::operator=(Fixed const &src) {
	this->_rawBits = src.getRawBits();
	return *this;
}

Fixed::~Fixed(void) {
	return ;
}

std::ostream& operator<<(std::ostream& output, const Fixed &src) {
	output << src.toFloat();
	return output;
}

bool	Fixed::operator<(Fixed const &rhs) {
	return (this->_rawBits < rhs.getRawBits());
}

bool	Fixed::operator<=(Fixed const &rhs) {
	return (this->_rawBits <= rhs.getRawBits());
}

bool	Fixed::operator>(Fixed const &rhs) {
	return (this->_rawBits > rhs.getRawBits());
}

bool	Fixed::operator>=(Fixed const &rhs) {
	return (this->_rawBits >= rhs.getRawBits());
}

bool	Fixed::operator==(Fixed const &rhs) {
	return (this->_rawBits == rhs.getRawBits());
}

Fixed	Fixed::operator+(Fixed const &rhs) {
	Fixed tmp;
	
	tmp.setRawBits(this->getRawBits() + rhs.getRawBits());
	return tmp;
}

Fixed	Fixed::operator-(Fixed const &rhs) {
	Fixed tmp;
	
	tmp.setRawBits(this->getRawBits() - rhs.getRawBits());
	return tmp;
}

Fixed	Fixed::operator*(Fixed const &rhs) {
	Fixed tmp;

	tmp.setRawBits(this->getRawBits() * rhs.getRawBits() >> Fixed::_bits);
	return tmp;
}

Fixed	Fixed::operator/(Fixed const &rhs) {
	Fixed tmp;

	tmp.setRawBits(this->getRawBits() / rhs.getRawBits() << Fixed::_bits);
	return tmp;
}

Fixed	Fixed::operator++(int) {
	Fixed tmp;

	tmp._rawBits = _rawBits++;
	return  tmp;
}

Fixed	Fixed::operator++(void) {
	Fixed tmp;

	tmp._rawBits = ++_rawBits;
	return  tmp;
}

Fixed	Fixed::operator--(int) {
	Fixed tmp;

	tmp._rawBits = _rawBits--;
	return  tmp;
}

Fixed	Fixed::operator--(void) {
	Fixed tmp;

	tmp._rawBits = --_rawBits;
	return  tmp;
}

Fixed&			Fixed::min(Fixed &lhs, Fixed &rhs) {
	if (lhs.getRawBits() < rhs.getRawBits())
		return lhs;
	return rhs;
}

const Fixed&  	Fixed::min(Fixed const &lhs, Fixed const &rhs) {
	if (lhs.getRawBits() < rhs.getRawBits())
		return lhs;
	return rhs;
}

Fixed&			Fixed::max(Fixed &lhs, Fixed &rhs) {
	if (lhs.getRawBits() > rhs.getRawBits())
		return lhs;
	return rhs;
}

const Fixed&	Fixed::max(Fixed const &lhs, Fixed const &rhs) {
	if (lhs.getRawBits() > rhs.getRawBits())
		return lhs;
	return rhs;
}

