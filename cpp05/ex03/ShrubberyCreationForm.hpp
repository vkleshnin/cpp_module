#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP
#include "Form.hpp"
#include <fstream>

class ShrubberyCreationForm : public Form {
private:
	ShrubberyCreationForm();
public:
	ShrubberyCreationForm(std::string _Name);
	~ShrubberyCreationForm();

	virtual void execute(Bureaucrat &_Bureaucrat);
};

#endif /*SHRUBBERYCREATIONFORM_HPP*/
