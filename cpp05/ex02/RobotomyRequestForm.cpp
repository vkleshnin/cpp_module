#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : Form() {
	std::cout << "Default RobotomyRequestForm constructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string _Name) : Form(_Name, 72, 45) {
	std::cout << "Default RobotomyRequestForm constructor called" << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm() {
	std::cout << "Default RobotomyRequestForm destructor called" << std::endl;
}

void RobotomyRequestForm::execute(Bureaucrat &_Bureaucrat) {
	int _rand;

	try {
		this->checkExecutable(_Bureaucrat);
		srand(time(NULL));
		_rand = rand() % 10 + 1;
		if (_rand > 5) {
			std::cout << _Bureaucrat.getName() << " successfully robotized the form "
					  << this->getName() << "." << std::endl;
		} else {
			std::cout << _Bureaucrat.getName() << " unsuccessfully robotized the form "
					  << this->getName() << "." << std::endl;
		}
	} catch (std::exception &ex) {
		std::cerr << ex.what() << std::endl;
	}
}
