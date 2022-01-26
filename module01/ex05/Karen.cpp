/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: magostin <magostin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/19 20:33:25 by magostin          #+#    #+#             */
/*   Updated: 2022/01/26 15:21:24 by magostin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

Karen::Karen() {}
Karen::~Karen() {}

void Karen::debug()
{
	std::cout << "J’aime avoir du bacon supplémentaire pour mon burger7XL-double-cheese-triple-pickle-special-ketchup. J’adore ça !" << std::endl;
}

void Karen::info()
{
	std::cout << "Je ne peux pas croire que l’ajout de bacon supplémentaire coûte plus cher. Vous n’en mettez pas assez ! Si vous le faisiez, je n’aurais pas à le demander !" << std::endl;
}

void Karen::warning()
{
	std::cout << "Je pense que je mérite d’avoir du bacon supplémentaire gratuitement. Je viens ici depuis des années et vous n’avez commencé à travailler ici que le mois dernier." << std::endl;
}

void Karen::error()
{
	std::cout << "C’est inacceptable, je veux parler au responsable maintenant" << std::endl;
}

void Karen::complain(std::string level)
{
	std::string s[4]={
        "DEBUG","INFO","WARNING","ERROR"
    };
    void (Karen::*f[4])(void) = {
        &Karen::debug, &Karen::info, &Karen::warning, &Karen::error
    };

	for (int i = 0; i < 4 ; i++)
		if (s[i] == level)
			(this->*f[i])();
}