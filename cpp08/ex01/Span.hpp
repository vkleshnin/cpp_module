#ifndef SPAN_HPP
#define SPAN_HPP
#include <vector>
#include <algorithm>
#include <iostream>

class Span {
private:
	std::vector<int>	_data;
	int 				_maxAmount;
	Span() : _maxAmount(0) {}
public:
	Span(int maxAmount);
	Span(Span &Copy);
	~Span();

	Span &operator = (Span &Copy);
	const int &operator [] (int i);
	void	addNumber(int num);
	int 	shortestSpan();
	int		longestSpan();
	void	randomFill();
	int		size();

	class	ErrorSize : public std::exception {
		virtual const char *what() const throw() {
			return "The amount of numbers is greater than the maximum.";
		}
	};

	class	ImpossibleMission : public std::exception {
		virtual const char *what() const throw() {
			return "There is only one element.";
		}
	};

	class	IndexOutOfRange : public std::exception {
		virtual const char *what() const throw() {
			return "Index out of range.";
		}
	};
};

#endif /*SPAN_HPP*/
