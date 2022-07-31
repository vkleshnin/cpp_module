#ifndef INTERN_HPP
#define INTERN_HPP
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class Intern {
private:
	typedef struct s_types {
		std::string type;
		Form		*typeForm;
	} t_types;
public:
	Intern();
	Intern(Intern &Copy);
	Intern &operator = (Intern &Copy);
	~Intern();

	Form *makeForm(std::string type, std::string name);
};


#endif /*INTERN_HPP*/
