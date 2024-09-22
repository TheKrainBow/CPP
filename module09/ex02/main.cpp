/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: magostin <magostin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 09:22:21 by magostin          #+#    #+#             */
/*   Updated: 2024/09/22 21:13:48 by magostin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PMergeMe.hpp"
#include <cstdlib>

int main(int ac, char **av)
{
	if (ac == 1)
	{
		std::cerr << "Not enough arguments" << std::endl;
		return (1);
	}
	int *array = new int[ac - 1];
	for (int i = 1; i < ac; i++)
	{
		array[i - 1] = atoi(av[i]);
		if (array[i - 1] < 0)
		{
			std::cerr << "Negative number " << array[i - 1] << " in index " << i - 1 << std::endl;
			delete []array;
			return (1);
		}
		for (int j = 0; j < i - 1; j++)
		{
			if (array[j] == array[i - 1])
			{
				std::cerr << "Number duplicate " << array[i - 1] << " in index " << j << " and " << i - 1 << std::endl;
				delete []array;
				return (1);
			}
		}
	}
	PMergeMe pmerge(array, ac - 1);
	pmerge.sort();
	delete []array;
}