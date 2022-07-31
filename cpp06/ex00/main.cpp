#include "Literals.hpp"

int	main(int argc, char **argv) {
	if (argc != 2) {
		std::cerr << "Error: One argument is needed." << std::endl;
		return 1;
	}
	try {
		Literals lit(argv[1]);
		std::cout << lit;
	} catch (std::exception &ex) {
		std::cerr << ex.what() << std::endl;
	}
	return 0;
}

