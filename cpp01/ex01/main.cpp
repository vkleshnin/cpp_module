#include "Zombie.hpp"

int main(void) {
	Zombie *Array;
	int	nums = 10;

	Array = zombieHorde(nums, "Richard");
	for (int i = 0; i < nums; i++) {
		Array[i].announce();
	}
	delete []Array;
	return 0;
}
