#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include<unistd.h>

Base * generate(void) {
	srand(time(NULL));
	int _rand = rand() % 3 + 1;

	if (_rand == 1) {
		std::cout << "Class A generated." << std::endl;
		return new A();
	} else if (_rand == 2) {
		std::cout << "Class B generated." << std::endl;
		return new B();
	} else {
		std::cout << "Class C generated." << std::endl;
		return new C();
	}
}

void identify(Base* p) {
	A *a;
	if ((a = dynamic_cast<A *>(p))) {
		std::cout << "A" << std::endl;
	}
	B *b;
	if ((b = dynamic_cast<B *>(p))) {
		std::cout << "B" << std::endl;
	}
	C *c;
	if ((c = dynamic_cast<C *>(p))) {
		std::cout << "C" << std::endl;
	}
}

void identify(Base& p) {
	try {
		A &a = dynamic_cast<A &>(p);
		(void)a;
		std::cout << "A" << std::endl;
	} catch (std::exception &ex) {
		(void)ex;
	}
	try {
		B &b = dynamic_cast<B &>(p);
		(void)b;
		std::cout << "B" << std::endl;
	} catch (std::exception &ex) {
		(void)ex;
	}
	try {
		C &c = dynamic_cast<C &>(p);
		(void)c;
		std::cout << "C" << std::endl;
	} catch (std::exception &ex) {
		(void)ex;
	}
}

int main(void) {
	Base *rand_elem;

	rand_elem = generate();
	identify(rand_elem);
	delete rand_elem;
	sleep(1);
	rand_elem = generate();
	identify(*rand_elem);
	delete rand_elem;

	return 0;
}

