/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nepage-l <nepage-l@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/26 08:03:36 by nepage            #+#    #+#             */
/*   Updated: 2020/11/30 12:41:57 by nepage-l         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef easyfind_H
# define easyfind_H
#include <iostream>
#include <stdio.h>
#include <iomanip>
#include <exception>
#include <stdexcept>
#include <string.h>
#include <ctime>
#include <cmath>
#include <cstdlib>
#include <vector>
#include <list>
#include <map>
#include <algorithm>

class NotFound : public std::exception
{
	virtual const char* what() const throw()
	{
		return "Number not found";
	};
};

template <typename T>
void easyfind(T & container, int n)
{
	typename T::iterator it;
	it = std::find(container.begin(), container.end(), n);
	if (it == container.end())
		throw NotFound();
}

#endif

