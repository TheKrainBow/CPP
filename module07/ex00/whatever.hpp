#ifndef WATHEVER_H
#define WATHEVER_H

template <typename T>
T &min(T &a, T &b)
{
	if (a < b)
		return (a);
	else
		return (b);
}

template <typename T>
T &max(T &a, T &b)
{
	if (a > b)
		return (a);
	else
		return (b);
}

template <typename T>
void swap(T &a, T &b)
{
	T temp = a;
	a = b;
	b = temp;
}

#endif