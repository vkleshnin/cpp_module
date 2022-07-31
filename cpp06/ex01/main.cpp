#include "utils.h"

uintptr_t serialize(Data* ptr) {
	return reinterpret_cast<uintptr_t>(ptr);
}

Data* deserialize(uintptr_t raw) {
	return reinterpret_cast<Data *>(raw);
}

std::ostream &operator << (std::ostream &os, Data &_Data) {
	os << "zero - " << _Data.zero << std::endl;
	os << "one - " << _Data.one << std::endl;
	os << "two - " << std::fixed << std::setprecision(1) << _Data.two << std::endl;
	return os;
}

int main(void) {
	Data *data = new Data;
	Data *new_data;
	uintptr_t raw;

	data->zero = '0';
	data->one = 1;
	data->two = 2.0f;
	std::cout << *data << std::endl;
	raw = serialize(data);
	new_data = deserialize(raw);
	std::cout << *new_data;
	delete data;
	return 0;
}

