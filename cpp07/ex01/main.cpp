#include "iter.hpp"

template <typename T>
void	decrement(T& i) {
	i--;
}

template <typename T>
void    iter(T* array, int len, void (*func)(T&)) {
	for(int i = 0; i < len; i++) {
		func(array[i]);
	}
}

int main() {
	int arr[6] = {1,2,3,4,5,6};
	iter(arr, 6, decrement);
	for (int i = 0; i < 6; i++) {
		std::cout << arr[i] << std::endl;
	}
}
