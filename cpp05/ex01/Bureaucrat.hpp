#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP
#include <iostream>
#include "Form.hpp"

class Form;
class Bureaucrat {
private:
	const std::string Name;
	short Grade;
	Bureaucrat();
public:
	Bureaucrat(std::string _Name);
	Bureaucrat(std::string _Name, short _Grade);
	Bureaucrat(Bureaucrat &Copy);
	~Bureaucrat();
	Bureaucrat &operator = (Bureaucrat &_Bureaucrat);

	std::string	getName() const;
	short		getGrade();
	void		incrementGrade(short amount);
	void		decrementGrade(short amount);
	void		checkGrade(short _Grade);

	void		signForm(Form &_Form);

	class GradeTooHighException : public std::exception {
		virtual const char *what() const throw() {
			return "Grade is high";
		}
	};

	class GradeTooLowException : public std::exception {
		virtual const char *what() const throw() {
			return "Grade is low";
		}
	};
};

std::ostream &operator << (std::ostream& os, Bureaucrat &_Bureaucrat);


#endif /*BUREAUCRAT_HPP*/
