#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>

template< typename T >
class Array {
	private:
		unsigned int	_length;
		T*				_array;
	
	public:
		Array(void) : _length(0), _array(NULL) {};
		Array(unsigned int n) : _length(n), _array( new T[n]) {};
		Array(const Array&  src) : _array(NULL) {this->operator=(src);};
		~Array(void) {
			delete [] this->_array;
		};

		Array&	operator=(const Array& src) {
			delete [] this->_array;
			this->_array = new T[src.size()];
			this->_length = src._length;
			for (unsigned int i = 0; i < src.size(); i++) {
				this->_array[i] = src[i];
			}
			return *this;
		};

		T&		operator[](unsigned int index) const {
			if (index >= this->_length)
				throw Array::outOfBounds();
			else
				return this->_array[index];
		}

		unsigned int	size(void) const {
			return this->_length;
		}

		class outOfBounds : public std::exception {
			public:
				virtual const char * what() const throw() {
					return "Index out of bounds";
				};
		};
};

#endif