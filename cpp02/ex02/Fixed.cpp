#include "Fixed.hpp"
#include <cmath>

//CONSTRUCTORS
Fixed::Fixed() : value(0){}

Fixed::Fixed(const int num) {
	this->value = num << this->bits;
}

Fixed::Fixed(const float num) {
	this->value = roundf(num * (float)(1 << Fixed::bits));
}

Fixed::Fixed(const Fixed &object) {
	*this = object;
}

//DESTRUCTOR
Fixed::~Fixed() {}

//GETSET
int Fixed::getRawBits() const {
	return this->value;
}

void Fixed::setRawBits(const int raw) {
	this->value = raw;
}

//COPY ASSIGMENT OPERATORS
Fixed &Fixed::operator=(const Fixed &object) {
	this->value = object.getRawBits();
	return (*this);
}

Fixed &Fixed::operator=(const float num) {
	this->value = roundf(num * (float)(1 << Fixed::bits));
	return (*this);
}

//CONVERT
float Fixed::toFloat() const {
	return (float)(this->value) / (float)(1<<this->bits);
}

int Fixed::toInt() const {
	return (this->value >> this->bits);
}

//OPERATORS
bool Fixed::operator > (const Fixed &object) {
	return (this->getRawBits() > object.getRawBits());
}

bool Fixed::operator < (const Fixed &object) {
	return (this->getRawBits() < object.getRawBits());
}

bool Fixed::operator >= (const Fixed &object) {
	return (this->getRawBits() >= object.getRawBits());
}

bool Fixed::operator <= (const Fixed &object) {
	return (this->getRawBits() <= object.getRawBits());
}

bool Fixed::operator == (const Fixed &object) {
	return (this->getRawBits() == object.getRawBits());
}

bool Fixed::operator != (const Fixed &object) {
	return (this->getRawBits() != object.getRawBits());
}

//ARITHMETIC OPERATORS
Fixed Fixed::operator + (const Fixed &object) {
	Fixed	result;
	int		buf;

	buf = this->value + object.getRawBits();
	result.setRawBits(buf);
	return (result);
}

Fixed Fixed::operator - (const Fixed &object) {
	Fixed	result;
	int		buf;

	buf = this->value - object.getRawBits();
	result.setRawBits(buf);
	return (result);
}

Fixed Fixed::operator * (const Fixed &object) {
	Fixed	result;
	long	buf;

	buf = (long)this->value * (long)object.getRawBits();
	result.setRawBits((int)buf >> Fixed::bits);
	return (result);
}

Fixed Fixed::operator / (const Fixed &object) {
	Fixed	result;
	int		buf;

	buf = this->value / object.getRawBits();
	result.setRawBits(buf);
	return (result);
}

//INCREMENT/DECREMENT
Fixed Fixed::operator++(int) {
	Fixed temp(*this);

	this->value++;
	return (temp);
}

Fixed &Fixed::operator++() {
	this->value++;
	return (*this);
}

Fixed Fixed::operator--(int) {
	Fixed temp(*this);

	this->value--;
	return (temp);
}

Fixed &Fixed::operator--() {
	this->value--;
	return (*this);
}

//MIN/MAX
Fixed & Fixed::min(Fixed &fix1, Fixed &fix2) {
	if (fix1.getRawBits() > fix2.getRawBits()) {
		return (fix2);
	}
	return (fix1);
}

const Fixed & Fixed::min(const Fixed &fix1, const Fixed &fix2) {
	if (fix1.getRawBits() > fix2.getRawBits()) {
		return (fix2);
	}
	return (fix1);
}

Fixed & Fixed::max(Fixed &fix1, Fixed &fix2) {
	if (fix1.getRawBits() < fix2.getRawBits()) {
		return (fix2);
	}
	return (fix1);
}

const Fixed & Fixed::max(const Fixed &fix1, const Fixed &fix2) {
	if (fix1.getRawBits() < fix2.getRawBits()) {
		return (fix2);
	}
	return (fix1);
}

//STD COUT OPERATOR
std::ostream &operator<< (std::ostream &out, const Fixed &object) {
	out << object.toFloat();
	return out;
}
