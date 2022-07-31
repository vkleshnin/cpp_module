#include "Literals.hpp"

Literals::Literals() : charLiteral(0), intLiteral(0), floatLiteral(0), doubleLiteral(0), impossible(0) {}

Literals::Literals(std::string _input) {
	try {
		checkInput(_input);
	} catch (std::exception &ex){
		throw Literals::WrongInput();
	}
	impossible = false;
	try {
		if (_input.size() == 1 && !isdigit(_input.c_str()[0])) {
			intLiteral = (int)_input.c_str()[0];
		} else {
			int		temp;
			temp = std::stoi(_input);
			intLiteral = temp;
		}
	} catch (std::invalid_argument &ex) {
		impossible = true;
	}
	if (!impossible && isprint(intLiteral)) {
		charLiteral = (char)intLiteral;
	}
	try {
		floatLiteral = std::stof(_input);
		doubleLiteral = std::stod(_input);
	} catch (std::invalid_argument &ex) {
		floatLiteral = (float)intLiteral;
		doubleLiteral = (double)intLiteral;
	}
}

Literals::~Literals() {}

char Literals::getChar() { return  charLiteral; }

int Literals::getInt() { return intLiteral; }

float Literals::getFloat() { return floatLiteral; }

double Literals::getDouble() { return doubleLiteral; }

bool Literals::getImpossible() { return impossible; }

void Literals::checkInput(std::string _input) {
	if (_input == "") {
		throw Literals::WrongInput();
	}
	size_t temp = _input.find(" ", 0);
	if (temp != std::string::npos) {
		throw Literals::WrongInput();
	}
	if (_input.length() > 1 && checkAlpha(_input.c_str()) && !checkLiterals(_input)) {
		throw Literals::WrongInput();
	}
}

bool Literals::checkAlpha(const char *_input) {
	for (int i = 0; _input[i]; i++) {
		if (isalpha(_input[i])) {
			return true;
		}
	}
	return false;
}

bool Literals::checkLiterals(std::string _input) {
	std::string lit[7] = {
			"nan",
			"nanf",
			"-inf",
			"+inf",
			"-inff",
			"+inff"
	};
	for (int i = 0; i < 6; i++) {
		if (lit[i] == _input) {
			return true;
		}
	}
	return false;
}

std::ostream &operator << (std::ostream &os, Literals &_Literals) {
	if (!_Literals.getImpossible()) {
		if (isprint(_Literals.getChar())) {
			os << "char: '" << _Literals.getChar() << "'" << std::endl;
		} else {
			os << "char: No displayable" << std::endl;
		}
		os << "int: " << _Literals.getInt() << std::endl;
	} else {
		os << "char: impossible" << std::endl;
		os << "int: impossible" << std::endl;
	}
	if (_Literals.getFloat() - (float)_Literals.getInt() == 0.0) {
		os << "float: " << std::fixed << std::setprecision(1) << _Literals.getFloat() << "f" << std::endl;
		os << "double: " << std::fixed << std::setprecision(1) << _Literals.getDouble() << std::endl;
	} else {
		os << "float: " << _Literals.getFloat() << "f" << std::endl;
		os << "double: " << _Literals.getDouble() << std::endl;
	}
	return os;
}