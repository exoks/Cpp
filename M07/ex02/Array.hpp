/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oezzaou <oezzaou@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 18:55:33 by oezzaou           #+#    #+#             */
/*   Updated: 2023/12/05 12:21:16 by oezzaou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ARRAY_HPP__
# define __ARRAY_HPP__

# include <iostream>
# include <exception>

template <class T = char>
class	Array
{
	private:
		T				*arr;
		int				length;

	public:
		
		Array(void);
		Array(unsigned int n);
		Array(const Array<T> & arr);
		~Array(void);

		void	operator=(const Array<T> & arr);
		T&		operator[](int index) const;
		void	displayElements(void);
		int		size(void) const;
};

# include "Array.tpp"

#endif /*__ARRAY_HPP__*/