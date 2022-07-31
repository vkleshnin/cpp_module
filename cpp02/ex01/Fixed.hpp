#ifndef FIXED_HPP
#define FIXED_HPP
#include <iostream>

class Fixed {
private:
	int					value;
	static const int	bits = 8;
public:
	Fixed();
	Fixed(const int num);
	Fixed(const float num);
	Fixed(const Fixed &object);
	~Fixed();
	int		getRawBits(void) const;
	void	setRawBits(int const raw);
	float	toFloat(void) const;
	int		toInt(void) const;
	Fixed & operator=(const Fixed &object);
	Fixed & operator=(const float num);
};

std::ostream &operator<< (std::ostream &out, const Fixed &object);

#endif //FIXED_HPP
