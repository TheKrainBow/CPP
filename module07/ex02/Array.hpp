#ifndef ARRAY_HPP
#define ARRAY_HPP
#include <iostream>

template <typename T>
class Array
{
	private:
		int _size;
		T *_array;

	public:
		// CONSTRUCTORS / DESTRUCTORS
		Array() : _size(0), _array(new T[_size]) {};
		Array(const Array &toCopy) : _size(toCopy._size), _array(new T[_size])
		{
			*this = toCopy;
		}
		Array &operator=(const Array &toCopy)
		{
			if (toCopy._size > _size)
				throw OutOfArray("Impossible to copy into a smaller Array");
			for (int i = 0; i < _size; i++)
				_array[i] = toCopy._array[i];
			return (*this);
		}
		~Array() {delete [] _array;};

		Array(int size) : _size(size), _array(new T[size])
		{
			for (int i = 0; i < _size; i++)
				_array[i] = 0;
		}
		// EXCEPTIONS
		class OutOfArray : public virtual std::exception
		{
			private:
				std::string error_message;
			public:
				OutOfArray(const std::string &msg) : error_message(msg) {}
				virtual ~OutOfArray() throw () {}
				const char *what() const throw() {return error_message.c_str();};
		};

		// OPERATORS
		T &operator[](int idx)
		{
			if (idx >= _size || idx < 0)
				throw OutOfArray("Index is out of Array!");
			return _array[idx];
		}
		const T &operator[](int idx) const 
		{
			if (idx >= _size || idx < 0)
				throw OutOfArray("Index is out of Array!");
			return _array[idx];
		}
		// FUNCTIONS
		int size(void)
		{
			return (_size);
		};
};
#endif
