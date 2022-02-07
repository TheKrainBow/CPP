#ifndef ITER_H
#define ITER_H

template <typename T>
void iter(T *array, int lenght, T (*function)(T))
{
	int i = -1;
	while (array && ++i < lenght)
		array[i] = function(array[i]);
}

#endif