#include "Bureaucrat.hpp"

int main(void) {
	Bureaucrat a("Manny", 150);
	Bureaucrat b("Charlie", 130);
	Form form1("Form1", 140, 140);
	Form form2(form1);

	std::cout << std::endl << form1 << std::endl << std::endl;
	form1.beSigned(b);
	std::cout << std::endl << form1 << std::endl << std::endl;
	form2.beSigned(a);
	return 0;
}

