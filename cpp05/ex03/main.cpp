#include "Bureaucrat.hpp"
#include "Intern.hpp"

int main(void) {
	Intern a;
	Bureaucrat b("Joshua", 15);
	Form *form;

	std::cout << std::endl;
	form = a.makeForm("shrubbery creation", "Shrubbery");
	std::cout << std::endl;
	if (form) {
		b.signForm(*form);
		b.executeForm(*form);
		delete form;
	}
	std::cout << std::endl;
	form = a.makeForm("robotomy request", "Roboto");
	std::cout << std::endl;
	if (form) {
		b.signForm(*form);
		b.executeForm(*form);
		delete form;
	}
	std::cout << std::endl;
	form = a.makeForm("presidential pardon", "Roboto");
	std::cout << std::endl;
	if (form) {
		b.signForm(*form);
		b.executeForm(*form);
		delete form;
	}
	std::cout << std::endl;
	return 0;
}

