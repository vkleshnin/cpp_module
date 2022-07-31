#include "Fixed.hpp"
#include <cmath>

Fixed::Fixed() : value(0){
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int num) {
	std::cout << "Int constructor called" << std::endl;
	this->value = num << this->bits;
}

Fixed::Fixed(const float num) {
	std::cout << "Float constructor called" << std::endl;
	this->value = roundf(num * (float)(1 << Fixed::bits));
}

Fixed::Fixed(const Fixed &object) {
	std::cout << "Copy constructor called" << std::endl;
	*this = object;
}

Fixed::~Fixed() {
	std::cout << "Default destructor called" << std::endl;
}

int Fixed::getRawBits() const {
	return this->value;
}

void Fixed::setRawBits(const int raw) {
	this->value = raw;
}

Fixed &Fixed::operator=(const Fixed &object) {
	std::cout << "Copy assigment operator called" << std::endl;
	this->value = object.getRawBits();
	return (*this);
}

float Fixed::toFloat() const {
	return (float)(this->value) / (float)(1<<this->bits);
}

int Fixed::toInt() const {
	return (this->value >> this->bits);
}

std::ostream &operator<< (std::ostream &out, const Fixed &object) {
	out << object.toFloat();
	return out;
}
