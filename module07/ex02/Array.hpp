/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nepage <nepage-l@student.le-101.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/26 08:03:36 by nepage            #+#    #+#             */
/*   Updated: 2020/03/07 05:53:33 by nepage           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef Array_H
# define Array_H
#include <iostream>
#include <stdio.h>
#include <iomanip>
#include <exception>
#include <stdexcept>
#include <string.h>
#include <ctime>
#include <cmath>
#include <cstdlib>

template <typename T>
class Array
{	
	private : 
	T **arr;
	unsigned int taille;

	public:
	
    Array<T>()
	{
		arr = NULL;
		taille = 0;
	};
    Array<T>(unsigned int i)
	{
		taille = i;
		arr = new T*[i];
		for (unsigned int siz = 0;siz < taille;siz++)
			arr[siz] = new T[siz];
	};
	Array<T>(Array<T> const &o)
	{
		*this = o;
	};
  	Array<T>&operator=( const Array<T> const &o) // Operator d'affectation
	{
		taille = o.taille;
		arr = new T*[taille];
		for (unsigned int i = 0;i < taille;i++)
			arr[i] = new T[o.arr[i]];
		return (*this);
	};
	T& operator[](unsigned int idx)
	{
		if (idx >= taille)
			throw std::out_of_range("Out of range");
		return (*arr[idx]);
	}
    ~Array<T>(void)
	{
		for (unsigned int i = 0;i < taille ;i++)
			delete arr[i];
		delete [] arr;
	}
	int 	size()
	{
		return (taille);
	}

};

#endif

