#include "easyfind.hpp"
#include <vector>
#include <iostream>

template<typename T>
void	showElem(T iter, T end) {
	if (iter != end)
		std::cout << "Element <" << *iter << "> is find in container" << std::endl;
	else
		std::cout << "The element was not found" << std::endl;
}

int	main( void )
{
	std::vector<int>			vect;
	std::vector<int>::iterator	iter;

	for (int i = 0; i < 100; i++) {
		vect.push_back(i);
	}
	iter = easyfind(vect, 59);
	showElem(iter, vect.end());
	iter = easyfind(vect, 100);
	showElem(iter, vect.end());
}

