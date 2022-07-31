#include <iostream>
#include <cstddef>
#include <exception>

template <typename T>
class	Array {
	private:
		T				*arr;
		unsigned int	len;
	public:
		Array() : arr(NULL), len(0) {}
		Array(unsigned int len) : len(len) {
			if (len < 0) {
				throw Array::ErrorRange();
			} else {
				this->arr = new T[len];
			}
		}
		Array(const Array& Copy) {
			this->arr = new T[Copy.len];
			this->len = Copy.len;
			try {
				std::uninitialized_copy(Copy.arr, Copy.arr + len, arr);
			} catch (std::exception &ex) {
				throw ex;
			}
		}
		~Array() {
			if (this->arr) {
				delete[] this->arr;
			}
		}

		Array &operator = (const Array& Copy) {
			if (this->arr) {
				delete[] this->arr;
			}
			this->arr = new T[Copy.len];
			this->len = Copy.len;
			try {
				std::uninitialized_copy(Copy.arr, Copy.arr + len, arr);
			} catch (std::exception &ex) {
				throw ex;
			}
			return *this;
		}

		T&		operator[] (unsigned int i) {
			if (i >= this->len || i < 0)
				throw Array::ErrorRange();
			return this->arr[i];
		}

		const T& operator[] (std::size_t i) const {
            if (i >= this->len || i < 0)
                throw Array::ErrorRange();
            return this->arr[i];
		}

		unsigned int	size() const {
			return this->len;
		}

		class ErrorRange : public std::exception {
		public:
			virtual const char* what() const throw() {
					return "Out of array range!";
				}
		};
};
