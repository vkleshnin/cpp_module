#include "Span.hpp"
#include <iostream>

Span::Span(int maxAmount) : _maxAmount(maxAmount) {}

Span::Span(Span &Copy) {
	this->_maxAmount = Copy._maxAmount;
	this->_data = Copy._data;
}

Span::~Span() {}

Span &Span::operator = (Span &Copy) {
	this->_maxAmount = Copy._maxAmount;
	this->_data = Copy._data;
	return *this;
}

const int &Span::operator[](int i) {
	if (i >= 0 && i < (int)this->_data.size()) {
		return this->_data[i];
	} else {
		throw IndexOutOfRange();
	}
}

void Span::addNumber(int num) {
	if (this->_data.size() + 1 > (unsigned long int)this->_maxAmount) {
		throw Span::ErrorSize();
	} else {
		this->_data.push_back(num);
	}
}

int Span::shortestSpan() {
	if (this->_data.size() < 2) {
		throw ImpossibleMission();
	}
	std::vector<int> temp = this->_data;
	std::sort(temp.begin(), temp.end());
	return temp[1] - temp[0];
}

int Span::longestSpan() {
	if (this->_data.size() < 2) {
		throw ImpossibleMission();
	}
	std::vector<int> temp = this->_data;
	std::sort(temp.begin(), temp.end());
	return temp[temp.size() - 1] - temp[0];
}

void Span::randomFill() {
	srand(time(NULL));
	for (int i = this->_data.size(); i < _maxAmount; i++) {
		this->_data.push_back(rand() % 1000 + 1);
	}
}

int Span::size() {
	return this->_data.size();
}
