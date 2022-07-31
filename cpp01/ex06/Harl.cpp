#include "Harl.hpp"

void Harl::complain(std::string message) {
	void (Harl::*complainFuncs[4])(void) = {
		&Harl::debug,
		&Harl::info,
		&Harl::warning,
		&Harl::error
	};
	std::string complainLevels[4] = {
		"DEBUG",
		"INFO",
		"WARNING",
		"ERROR"
	};
	std::string complainMessage[4] = {
			"I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!",
			"I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!",
			"I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month.",
			"This is unacceptable! I want to speak to the manager now."
	};
	int i = 0;
	for (; i < 4; i++) {
		if (complainLevels[i] == message) {
			while (i < 4) {
				std::cout << "[ " << complainLevels[i] << " ]" << std::endl;
				(this->*complainFuncs[i++])();
				std::cout << std::endl;
			}
			return ;
		}
		if (complainMessage[i] == message) {
			std::cout << "[ " << complainLevels[i] << " ]" << std::endl;
			return ;
		}
	}
	std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
}

void Harl::debug(void) {
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void Harl::info(void) {
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void Harl::warning(void) {
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::error(void) {
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}
