#include <iostream>
#include <vector>
#include <list>

template <typename T>
int			easyfind(T cont, int to_find)
{
	typename T::iterator iter;
	for (iter = cont.begin(); iter != cont.end(); iter++)
	{
		if (*iter == to_find)
			return (*iter);
	}
	return (-1);
}