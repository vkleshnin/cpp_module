#ifndef FORM_HPP
#define FORM_HPP
#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;
class Form {
private:
	const std::string	Name;
	bool				Signed;
	const short			gradeSign;
	const short			gradeExec;
	Form();
public:
	Form(std::string _Name);
	Form(std::string _Name, short _gradeSign, short _gradeExec);
	Form(Form &Copy);
	~Form();

	std::string getName();
	bool		getSigned();
	short		getGradeSign();
	short		getGradeExec();

	void		checkSign(Bureaucrat &_Bureaucrat);
	void		beSigned(Bureaucrat &_Bureaucrat);

	class GradeTooHighException : public std::exception {
		virtual const char *what() const throw() {
			return "Error: Grade is high";
		}
	};

	class GradeTooLowException : public std::exception {
		virtual const char *what() const throw() {
			return "Error: Grade is low";
		}
	};
};

std::ostream &operator << (std::ostream& os, Form &_Form);

#endif /*FORM_HPP*/
