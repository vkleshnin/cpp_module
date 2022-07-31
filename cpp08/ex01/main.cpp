#include "Span.hpp"

int main() {
	Span arr(100);

	arr.randomFill();
	for (int i = 0; i < arr.size(); i++) {
		std::cout << arr[i] << " ";
		if (i != 0 && i % 10 == 0) {
			std::cout << std::endl;
		}
	}
	std::cout << std::endl << "Shortest - " << arr.shortestSpan() << std::endl;
	std::cout << "Longest - " << arr.longestSpan() << std::endl << std::endl;

	try {
		arr.addNumber(10);
	} catch (std::exception &ex) {
		std::cerr << ex.what() << std::endl << std::endl;
	}

	try {
		Span arr_new(3);
		arr_new.addNumber(3);
		arr_new.longestSpan();
	} catch (std::exception &ex) {
		std::cerr << ex.what() << std::endl;
	}
	return 0;
}

