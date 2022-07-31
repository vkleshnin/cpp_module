#include "Harl.hpp"

int main(int argc, char **argv) {
	Harl x;

	switch (argc) {
		case 2:
			x.complain(argv[1]);
			break;
		default:
			std::cerr << "Wrong arguments" << std::endl;
			return 1;
	}
	return 0;
}

