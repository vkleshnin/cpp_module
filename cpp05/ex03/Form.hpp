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
public:
	Form();
	Form(std::string _Name);
	Form(std::string _Name, short _gradeSign, short _gradeExec);
	Form(Form &Copy);
	virtual ~Form();

	std::string getName();
	bool		getSigned();
	short		getGradeSign();
	short		getGradeExec();

	void			checkSign(Bureaucrat &_Bureaucrat);
	void			beSigned(Bureaucrat &_Bureaucrat);
	void			checkExecutable(Bureaucrat &_Bureaucrat);
	virtual void	execute(Bureaucrat &_Bureaucrat) = 0;

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

	class FormIsNotSigned : public std::exception {
		virtual const char *what() const throw() {
			return "Error: Form is not sign";
		}
	};
};

std::ostream &operator << (std::ostream& os, Form &_Form);

#endif /*FORM_HPP*/
