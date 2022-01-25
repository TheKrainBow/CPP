/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelwaul <mdelwaul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/12 02:04:37 by mdelwaul          #+#    #+#             */
/*   Updated: 2021/07/12 02:04:49 by mdelwaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>

int main(int ac, char **av)
{
	int		i;
	int		j;

	char c;
	if (ac == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
	else
	{
		i = 0;
		while (++i < ac)
		{
			j = -1;
			while (av[i][++j])
			{
				c = toupper(av[i][j]);
				std::cout << c;
			}
		}
	}
	return (0);
}
