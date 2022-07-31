#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : Form() {
	std::cout << "Default Shrubbery constructor called." << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string _Name) : Form(_Name, 145, 137) {
	std::cout << "Default Shrubbery constructor called." << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {
	std::cout << "Default Shrubbery destructor called." << std::endl;
}

void ShrubberyCreationForm::execute(Bureaucrat &_Bureaucrat) {
	std::ofstream	file;
	std::string		filename;
	try {
		this->checkExecutable(_Bureaucrat);
		filename = this->getName() + "_shrubbery";
		file.open(filename.c_str(), std::ios::out);
		if (file.is_open()) {
			file << "       '.," << std::endl;
			file << "        'b      *" << std::endl;
			file << "         '$    #." << std::endl;
			file << "          $:   #:" << std::endl;
			file << "          *#  @):" << std::endl;
			file << "          :@,@):   ,.**:'" << std::endl;
			file << ",         :@@*: ..**'" << std::endl;
			file << " '#o.    .:(@'.@*'" << std::endl;
			file << "    'bq,..:,@@*'   ,*" << std::endl;
			file << "     ,p$q8,:@)'  .p*'" << std::endl;
			file << "   '    '@@Pp@@*' " << std::endl;
			file << "         Y7'.'" << std::endl;
			file << "        :@):." << std::endl;
			file << "       .:@:'." << std::endl;
			file << "     .::(@:. " << std::endl;
			file.close();
			std::cout << _Bureaucrat.getName() << " executed form " << this->getName()
					  << " in file " << filename << "." << std::endl;
		}
	} catch (std::exception &ex) {
		std::cerr << ex.what() << std::endl;
	}
}