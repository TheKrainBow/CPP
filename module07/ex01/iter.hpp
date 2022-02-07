#ifndef ITER_HPP
#define ITER_HPP

template <typename T>
void iter(T *array, int lenght, void (*function)(T const &))
{
	for (int i = 0; array && i < lenght ; i++)
		function(array[i]);
}

#endif
