#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : Name("no_name"), Grade(150) {
	std::cout << "Default Bureaucrat constructor called." << std::endl;
}

Bureaucrat::Bureaucrat(std::string _Name) : Name(_Name), Grade(150) {
	std::cout << "Default Bureaucrat constructor called." << std::endl;
}

Bureaucrat::Bureaucrat(std::string _Name, short _Grade) : Name(_Name) {
	std::cout << "Default Bureaucrat constructor called." << std::endl;
	if (_Grade >= 1 && _Grade <= 150) {
		this->Grade = _Grade;
	} else {
		this->Grade = 150;
	}
}

Bureaucrat::Bureaucrat(Bureaucrat &Copy) : Name(Copy.Name), Grade(Copy.Grade) {
	std::cout << "Copy Bureaucrat constructor called." << std::endl;
}

Bureaucrat::~Bureaucrat() {
	std::cout << "Default Bureaucrat destructor called." << std::endl;
}

Bureaucrat &Bureaucrat::operator = (Bureaucrat &_Bureaucrat) {
	std::cout << "Assigment Bureaucrat operator called." << std::endl;
	std::cout << "The name cannot be copied. Grade is copied." << std::endl;
	this->Grade = _Bureaucrat.getGrade();
	return *this;
}

std::string Bureaucrat::getName() const { return this->Name; }

short Bureaucrat::getGrade() { return this->Grade; }

void Bureaucrat::incrementGrade(short amount) {
	std::cout << "Bureaucrat increment method is called" << std::endl;
	try {
		checkGrade(this->Grade - amount);
		this->Grade -= amount;
	} catch (std::exception &ex) {
		std::cerr << ex.what() << std::endl;
	}
}

void Bureaucrat::decrementGrade(short amount) {
	std::cout << "Bureaucrat decrement method is called" << std::endl;
	try {
		checkGrade(this->Grade + amount);
		this->Grade += amount;
	} catch (std::exception &ex) {
		std::cerr << ex.what() << std::endl;
	}
}

void Bureaucrat::checkGrade(short _Grade) {
	if (_Grade > 150) {
		throw Bureaucrat::GradeTooLowException();
	} else if (_Grade < 1) {
		throw Bureaucrat::GradeTooHighException();
	}
}

void Bureaucrat::signForm(Form &_Form) {
	_Form.beSigned(*this);
}

std::ostream &operator << (std::ostream& os, Bureaucrat &_Bureaucrat) {
	os << _Bureaucrat.getName() << ", bureaucrat grade " << _Bureaucrat.getGrade() << ".";
	return os;
}


