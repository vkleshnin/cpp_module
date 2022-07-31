#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP
#include "Form.hpp"

class PresidentialPardonForm : public Form {
private:
	PresidentialPardonForm();
public:
	PresidentialPardonForm(std::string _Name);
	~PresidentialPardonForm();

	virtual void execute(Bureaucrat &_Bureaucrat);
};

#endif /*PRESIDENTIALPARDONFORM_HPP*/
