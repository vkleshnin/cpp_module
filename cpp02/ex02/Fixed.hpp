#ifndef FIXED_HPP
#define FIXED_HPP
#include <iostream>

class Fixed {
private:
	int					value;
	static const int	bits = 8;
public:
	//CONSTRUCTORS
	Fixed();
	Fixed(const int num);
	Fixed(const float num);
	Fixed(const Fixed &object);
	//DESTRUCTOR
	~Fixed();
	//GETSET
	int		getRawBits(void) const;
	void	setRawBits(int const raw);
	//CONVERT
	float	toFloat(void) const;
	int		toInt(void) const;
	//COPY ASSIGMENT OPERATOR
	Fixed & operator = (const Fixed &object);
	Fixed & operator = (const float num);
	//OPERATORS
	bool operator < (const Fixed &object);
	bool operator > (const Fixed &object);
	bool operator >= (const Fixed &object);
	bool operator <= (const Fixed &object);
	bool operator == (const Fixed &object);
	bool operator != (const Fixed &object);
	//ARITHMETIC OPERATORS
	Fixed operator + (const Fixed &object);
	Fixed operator - (const Fixed &object);
	Fixed operator * (const Fixed &object);
	Fixed operator / (const Fixed &object);
	//INCREMENT/DECREMENT
	Fixed & operator ++ ();
	Fixed operator ++ (int);
	Fixed & operator -- ();
	Fixed operator -- (int);
	//MIN/MAX
	static Fixed & min(Fixed &fix1, Fixed &fix2);
	static const Fixed & min(const Fixed &fix1, const Fixed &fix2);
	static Fixed & max(Fixed &fix1, Fixed &fix2);
	static const Fixed & max(const Fixed &fix1, const Fixed &fix2);
};

std::ostream &operator<< (std::ostream &out, const Fixed &object);

#endif //FIXED_HPP
