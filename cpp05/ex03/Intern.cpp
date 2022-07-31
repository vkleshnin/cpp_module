#include "Intern.hpp"

Intern::Intern() {
	std::cout << "Default Intern constructor called." << std::endl;
}

Intern::~Intern() {
	std::cout << "Default Intern destructor called." << std::endl;
}

Intern::Intern(Intern &Copy) {
	std::cout << "Copy Intern constructor called." << std::endl;
	*this = Copy;
}

Intern &Intern::operator = (Intern &Copy) {
	std::cout << "Assigment operator called." << std::endl;
	return Copy;
}

Form *Intern::makeForm(std::string type, std::string name) {
	Form *resultForm = NULL;
	s_types types[] = {
			{"shrubbery creation", new ShrubberyCreationForm(name)},
			{"robotomy request", new RobotomyRequestForm(name)},
			{"presidential pardon", new PresidentialPardonForm(name)},
	};

	for (int i = 0; i < 3; i++) {
		if (type == types[i].type) {
			resultForm = types[i].typeForm;
		} else {
			delete types[i].typeForm;
		}
	}
	if (resultForm) {
		std::cout << "Intern creates form " << resultForm->getName() << "." << std::endl;
	} else {
		std::cout << "The intern did not find this type of form." << std::endl;
	}
	return resultForm;
}