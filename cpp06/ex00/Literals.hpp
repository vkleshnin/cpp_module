#ifndef LITERALS_HPP
#define LITERALS_HPP
#include <iostream>
#include <iomanip>
#include <string>

class Literals {
private:
	char		charLiteral;
	int			intLiteral;
	float		floatLiteral;
	double		doubleLiteral;
	bool		impossible;
	Literals();
	void		checkInput(std::string _input);
	bool		checkAlpha(const char *_input);
	bool		checkLiterals(std::string _input);
public:
	Literals(std::string _input);
	~Literals();
	char	getChar();
	int		getInt();
	float	getFloat();
	double	getDouble();
	bool	getImpossible();

	class WrongInput : public std::exception {
		virtual const char *what() const throw() {
			return "Error: Input is wrong";
		}
	};
};

std::ostream &operator << (std::ostream &os, Literals &_Literals);

#endif /*LITERALS_HPP*/
