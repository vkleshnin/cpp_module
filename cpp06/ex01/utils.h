#ifndef UTILS_H
#define UTILS_H
#include <stdint.h>
#include <iostream>
#include <iomanip>

typedef struct {
	char	zero;
	int 	one;
	float 	two;
} Data;

std::ostream &operator << (std::ostream &os, Data &_Data);

uintptr_t serialize(Data* ptr);

Data* deserialize(uintptr_t raw);

#endif /*UTILS_H*/
