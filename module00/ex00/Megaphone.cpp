/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: magostin <magostin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/12 02:04:37 by magostin          #+#    #+#             */
/*   Updated: 2022/02/01 23:07:32 by magostin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>

int main(int ac, char **av)
{
	int		i;

	if (ac == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
	else
	{
		i = 0;
		while (++i < ac)
		{
			std::string argu(av[i]);
			for (std::string::iterator it=argu.begin(); (it != argu.end()); ++it)
				std::cout << (char)toupper(*it);
		}
	}
	std::cout << std::endl;
	return (0);
}
