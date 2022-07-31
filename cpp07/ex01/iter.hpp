#include <iostream>

template <typename T>
void	iter(T* array, int len, void (*func)(T&));
