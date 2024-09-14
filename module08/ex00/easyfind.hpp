#include <list>
#include <algorithm>
#include <cassert>
#include <complex>
#include <iostream>
#include <vector>

template <typename T>
bool	easyfind(T cont, int to_find)
{
	return (std::find(cont.begin(), cont.end(), to_find) != cont.end());
}