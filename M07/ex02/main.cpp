/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oezzaou <oezzaou@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 18:59:14 by oezzaou           #+#    #+#             */
/*   Updated: 2023/12/05 12:17:57 by oezzaou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Array.hpp"

//====< main >==================================================================
int	main(void)
{
	Array<int>	arr;
	Array<int>	arr2(2);

	arr2[0] = 1;
	arr2[1] = 2;
	std::cout << "arr.length : " << arr.size() << std::endl;
	std::cout << "arr2.length : " << arr2.size() << std::endl;

	std::cout << "================ ARR ================" << std::endl;	
	arr.displayElements();
	std::cout << "================ ARR2 ===============" << std::endl;	
	arr2.displayElements();

	arr = arr2;
	
	std::cout << "================ ARR ================" << std::endl;	
	arr.displayElements();
	std::cout << "================ ARR2 ===============" << std::endl;	
	arr2.displayElements();

	arr[0] = 7;
	arr2[1] = 9;

	std::cout << "================ ARR ================" << std::endl;	
	arr.displayElements();
	std::cout << "================ ARR2 ===============" << std::endl;	
	arr2.displayElements();

	std::cout << "====== Accessting invalid index =====" << std::endl;
	arr2[11];
	return (EXIT_SUCCESS);
}
