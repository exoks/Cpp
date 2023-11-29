/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oezzaou <oezzaou@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 10:45:09 by oezzaou           #+#    #+#             */
/*   Updated: 2023/11/29 15:40:18 by oezzaou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"
#include "FSM.hpp"

//====< main >==================================================================
int	main(int ac, char **av)
{
	if (ac == 1)
		return (EXIT_FAILURE);
	ScalarConverter::convert(std::string(*(++av)));
	return (EXIT_SUCCESS);
}
