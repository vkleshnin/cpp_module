#ifndef EASYFIND_HPP
#define EASYFIND_HPP

template <typename T>
typename T::iterator easyfind(T &container, int parameter) {
	typename T::iterator res = find(container.begin(), container.end(), parameter);
	return res;
}

#endif /*EASYFIND_HPP*/
