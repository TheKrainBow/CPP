/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: magostin <magostin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/16 03:10:57 by magostin          #+#    #+#             */
/*   Updated: 2022/02/03 13:26:35 by magostin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iomanip>
#include <iostream>
#include <fstream>
#include "Karen.hpp"

int			main(void)
{
	Karen karouninette;

	karouninette.complain("DEBUG");
	karouninette.complain("INFO");
	karouninette.complain("WARNING");
	karouninette.complain("ERROR");
}