#include "Form.hpp"

Form::Form() : Name("no_name"), Signed(false), gradeSign(150), gradeExec(150) {
	std::cout << "Default Form constructor called" << std::endl;
}

Form::Form(std::string _Name) : Name(_Name), Signed(false), gradeSign(150), gradeExec(150) {
	std::cout << "Default Form constructor called" << std::endl;
}

Form::Form(std::string _Name, short _gradeSign, short _gradeExec) : Name(_Name), Signed(false), gradeSign(_gradeSign), gradeExec(_gradeExec) {
	std::cout << "Default Form constructor called" << std::endl;
}

Form::Form(Form &Copy) : Name(Copy.Name), Signed(false), gradeSign(Copy.gradeSign), gradeExec(Copy.gradeExec) {
	std::cout << "Copy Form constructor called" << std::endl;
}

Form::~Form() {
	std::cout << "Default Form destructor called" << std::endl;
}

std::string Form::getName() { return Name; }

bool Form::getSigned() { return Signed; }

short Form::getGradeSign() { return gradeSign; }

short Form::getGradeExec() { return gradeExec; }

void Form::checkSign(Bureaucrat &_Bureaucrat) {
	if (_Bureaucrat.getGrade() > this->gradeSign) {
		std::cout << _Bureaucrat.getName() << " couldn’t sign " << this->getName() << " because: ";
		throw Form::GradeTooLowException();
	}
}

void Form::beSigned(Bureaucrat &_Bureaucrat) {
	try {
		checkSign(_Bureaucrat);
		std::cout << _Bureaucrat.getName() << " signed " << this->getName() << std::endl;
		this->Signed = true;
	} catch (std::exception &ex) {
		std::cerr << ex.what() << std::endl;
	}
}

std::ostream &operator << (std::ostream& os, Form &_Form) {
	std::string	temp;
	if (_Form.getSigned()) {
		temp = "signed.";
	} else {
		temp = "not signed.";
	}
	os << "Form " << _Form.getName() << ", grade required to sign " << _Form.getGradeSign()
	<< ", grade required to execute " << _Form.getGradeExec() << ". Form is " << temp;

	return os;
}
