#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : Form() {
	std::cout << "Default PresidentialPardonForm constructor called." << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(std::string _Name) : Form(_Name, 25, 5) {
	std::cout << "Default PresidentialPardonForm constructor called." << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm() {
	std::cout << "Default PresidentialPardonForm destructor called." << std::endl;
}

void PresidentialPardonForm::execute(Bureaucrat &_Bureaucrat) {
	try {
		this->checkExecutable(_Bureaucrat);
		std::cout << _Bureaucrat.getName() << " has been pardoned by Zaphod Beeblebrox." << std::endl;
	} catch (std::exception &ex) {
		std::cerr << ex.what() << std::endl;
	}
}