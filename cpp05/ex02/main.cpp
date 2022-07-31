#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main(void) {
	Bureaucrat a("Manny", 140);
	Bureaucrat b("Joshua", 5);
	ShrubberyCreationForm Form1("Shrubbery");
	RobotomyRequestForm Form2("Roboto");
	PresidentialPardonForm Form3("Pardon");

	std::cout << std::endl << a <<std::endl << b << std::endl << std::endl;
	Form1.execute(a);
	std::cout << std::endl;
	a.signForm(Form1);
	std::cout << std::endl;
	Form1.execute(a);
//	std::cout << std::endl;
//	a.signForm(Form2);
//	std::cout << std::endl;
//	Form2.execute(a);
//	std::cout << std::endl;
//	b.signForm(Form3);
//	std::cout << std::endl;
//	b.executeForm(Form3);
//	std::cout << std::endl;
	return 0;
}

