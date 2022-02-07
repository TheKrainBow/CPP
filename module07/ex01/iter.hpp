#ifndef ITER_H
#define ITER_H

template <typename T>
void iter(T *array, int lenght, T (*function)(T))
{
	for (int i = 0; array && i < lenght ; i++)
		array[i] = function(array[i]);
}

#endif