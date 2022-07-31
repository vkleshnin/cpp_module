#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP
#include "Form.hpp"
#include<cstdlib>
#include<ctime>

class RobotomyRequestForm : public Form {
private:
	RobotomyRequestForm();
public:
	RobotomyRequestForm(std::string _Name);
	~RobotomyRequestForm();

	virtual void execute(Bureaucrat &_Bureaucrat);
};


#endif /*ROBOTOMYREQUESTFORM_HPP*/
