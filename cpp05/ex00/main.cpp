#include "Bureaucrat.hpp"

int main(void) {
	Bureaucrat a("Manny");
	Bureaucrat b("Charlie");
	Bureaucrat c("Danny", 11);
	Bureaucrat d(c);

	a = c;
	std::cout << std::endl << a << std::endl;
	std::cout << std::endl << b << std::endl;
	std::cout << std::endl << c << std::endl;
	std::cout << std::endl << d << std::endl << std::endl;
	a.incrementGrade(10);
	std::cout << std::endl << a << std::endl << std::endl;
	b.decrementGrade(20);
	std::cout << std::endl << std::endl << b << std::endl;
	return 0;
}

