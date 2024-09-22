/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: magostin <magostin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 21:39:47 by magostin          #+#    #+#             */
/*   Updated: 2024/09/19 21:41:48 by magostin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PMergeMe.hpp"

std::vector<std::pair<int, int> > mergeVector(std::vector<std::pair<int, int> > a, std::vector<std::pair<int, int> > b)
{
	std::vector<std::pair<int, int> > dest;

	while (a.size() > 0 && b.size() > 0)
	{
		if (a[0].first < b[0].first)
		{
			dest.push_back(a[0]);
			a.erase(a.begin());
		}
		else
		{
			dest.push_back(b[0]);
			b.erase(b.begin());
		}
	}
	while (a.size() > 0)
	{
		dest.push_back(a[0]);
		a.erase(a.begin());
	}
	while (b.size() > 0)
	{
		dest.push_back(b[0]);
		b.erase(b.begin());
	}
	return (dest);
}

std::vector<std::pair<int, int> > splitVector(std::vector<std::pair<int, int> > input)
{
	if (input.size() == 1)
		return (input);

	std::vector<std::pair<int, int> >	vectorA;
	std::vector<std::pair<int, int> >	vectorB;
	size_t								i;

	for (i = 0; i < input.size() / 2; i++)
		vectorA.push_back(input[i]);
	for (; i < input.size(); i++)
		vectorB.push_back(input[i]);
	
	vectorA = splitVector(vectorA);
	vectorB = splitVector(vectorB);

	return (mergeVector(vectorA, vectorB));
}

void printAfterVector(bool shortenPrint, std::vector<int> vector)
{
	size_t size = vector.size();

	std::cout << "After (" << PURPLE << "vector" << WHITE << "):  ";
	if (shortenPrint)
		size = static_cast<int>(std::min((int)(size), 20));
	if (size == vector.size())
		for (size_t i = 0; i < vector.size(); i++)
			std::cout << vector[i] << " ";
	else
	{
		for (size_t i = 0; i < 6; i++)
			std::cout << vector[i] << " ";
		std::cout << "[...] ";
		for (size_t i = vector.size() - 6; i < vector.size(); i++)
			std::cout << vector[i] << " ";
	}
	std::cout << std::endl;
}

double PMergeMe::sortVector(bool print, bool shortenPrint)
{
    struct timeval start, end;
	gettimeofday(&start, NULL);

	int i;
	int leftover = -1;
	std::vector<std::pair<int, int> > vector;
	generateJacob();
	
	for (i = 0; i < _size - 1; i += 2)
		vector.push_back(std::pair<int, int>(_input[i], _input[i + 1]));
	if (i < _size)
		leftover = _input[i];
	for (std::vector<std::pair<int, int> >::iterator it = vector.begin(); it != vector.end(); it++)
	{
		if ((*it).first < (*it).second)
			std::swap((*it).first, (*it).second);
	}
	vector = splitVector(vector);

	std::vector<int> final;
	std::vector<int> pending;
	
	for (std::vector<std::pair<int, int> >::iterator it = vector.begin(); it != vector.end(); it++)
	{
		if (it == vector.begin() && (*it).first > (*it).second)
		{
			final.push_back((*it).second);
			final.push_back((*it).first);
			pending.push_back((*it).second);
			_jacob.pop_front();
		}
		else
		{
			final.push_back((*it).first);
			pending.push_back((*it).second);
		}
	}
	for (std::deque<int>::iterator it = _jacob.begin(); it != _jacob.end(); it++)
	{
		std::vector<int>::iterator itt;
		for (itt = final.begin(); itt != final.end() && *it < static_cast<int>(pending.size()) && (*itt) < pending[*it]; itt++);
		if (*it < static_cast<int>(pending.size()))
			final.insert(itt, pending[*it]);
	}
	if (leftover != -1)
	{
		std::vector<int>::iterator itt;
		for (itt = final.begin(); (*itt) < leftover; itt++);
		final.insert(itt, leftover);
	}
	if (print)
		printAfterVector(shortenPrint, final);
    gettimeofday(&end, NULL);
	return (end.tv_sec - start.tv_sec + ((end.tv_usec - start.tv_usec) / 1000000.0));
}