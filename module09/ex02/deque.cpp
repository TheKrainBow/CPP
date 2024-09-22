/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   deque.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: magostin <magostin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 21:39:47 by magostin          #+#    #+#             */
/*   Updated: 2024/09/22 21:44:22 by magostin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PMergeMe.hpp"

std::deque<std::pair<int, int> > mergeDeque(std::deque<std::pair<int, int> > a, std::deque<std::pair<int, int> > b)
{
	std::deque<std::pair<int, int> > dest;

	while (a.size() > 0 && b.size() > 0)
	{
		if (a[0].first < b[0].first)
		{
			dest.push_back(a[0]);
			a.pop_front();
		}
		else
		{
			dest.push_back(b[0]);
			b.pop_front();
		}
	}
	while (a.size() > 0)
	{
		dest.push_back(a[0]);
		a.pop_front();
	}
	while (b.size() > 0)
	{
		dest.push_back(b[0]);
		b.pop_front();
	}
	return (dest);
}

std::deque<std::pair<int, int> > splitDeque(std::deque<std::pair<int, int> > input)
{
	if (input.size() == 1)
		return (input);

	std::deque<std::pair<int, int> >	dequeA;
	std::deque<std::pair<int, int> >	dequeB;
	size_t								i;

	for (i = 0; i < input.size() / 2; i++)
		dequeA.push_back(input[i]);
	for (; i < input.size(); i++)
		dequeB.push_back(input[i]);
	
	dequeA = splitDeque(dequeA);
	dequeB = splitDeque(dequeB);

	return (mergeDeque(dequeA, dequeB));
}

void printAfterDeque(bool shortenPrint, std::deque<int> deque)
{
	size_t size = deque.size();

	std::cout << "After (" << BLUE << "deque" << WHITE << "):   ";
	if (shortenPrint)
		size = static_cast<int>(std::min((int)(size), 20));
	if (size == deque.size())
		for (size_t i = 0; i < deque.size(); i++)
			std::cout << deque[i] << " ";
	else
	{
		for (size_t i = 0; i < 6; i++)
			std::cout << deque[i] << " ";
		std::cout << "[...] ";
		for (size_t i = deque.size() - 6; i < deque.size(); i++)
			std::cout << deque[i] << " ";
	}
	std::cout << std::endl;
}

float PMergeMe::sortDeque(bool print, bool shortenPrint)
{
    struct timeval start, end;
	gettimeofday(&start, NULL);

	int i;
	int leftover = -1;
	std::deque<std::pair<int, int> > deque;
	generateJacob();

	for (i = 0; i < _size - 1; i += 2)
		deque.push_back(std::pair<int, int>(_input[i], _input[i + 1]));
	if (i < _size)
		leftover = _input[i];
	for (std::deque<std::pair<int, int> >::iterator it = deque.begin(); it != deque.end(); it++)
	{
		if ((*it).first < (*it).second)
			std::swap((*it).first, (*it).second);
	}
	deque = splitDeque(deque);

	std::deque<int> final;
	std::deque<int> pending;
	
	for (std::deque<std::pair<int, int> >::iterator it = deque.begin(); it != deque.end(); it++)
	{
		if (it == deque.begin() && (*it).first > (*it).second)
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
		std::deque<int>::iterator itt;
		for (itt = final.begin(); itt != final.end() && *it < static_cast<int>(pending.size()) && (*itt) < pending[*it]; itt++);
		if (*it < static_cast<int>(pending.size()))
			final.insert(itt, pending[*it]);
	}

	if (leftover != -1)
	{
		std::deque<int>::iterator itt;
		for (itt = final.begin(); (*itt) < leftover; itt++);
		final.insert(itt, leftover);
	}
	if (print)
		printAfterDeque(shortenPrint, final);
    gettimeofday(&end, NULL);
	return (end.tv_sec - start.tv_sec + ((end.tv_usec - start.tv_usec) / 1000000.0));
}