/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nepage-l <nepage-l@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/21 11:27:38 by nepage-l          #+#    #+#             */
/*   Updated: 2021/01/04 11:41:56 by nepage-l         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stdio.h>
#include <iomanip>
#include <exception>
#include <string.h>
#include <ctime>
#include <cmath>
#include <cstdlib>

template<typename T>
void	swap(T &a, T &b)
{
	T c = a;
	a = b;
	b = c;
}

template<typename T>
void	swap(const T &a,const T &b)
{
	(void)a;
	(void)b;
}

template<typename T>
T	max(T &a, T &b)
{
	return (a > b ? a : b);
}

template<typename T>
T	min(T &a, T &b)
{
	return (a < b ? a : b);
}

