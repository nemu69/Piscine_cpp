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

#ifndef Array_HPP
# define Array_HPP
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
	unsigned int taille;

	public:
	T **arr;
	
    Array<T>()
	{
		arr = new T*[1];
		arr[0] = new T[0];
		taille = 1;
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
  	Array<T>&operator=(const Array<T> &o) // Operator d'affectation
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
	unsigned int size()
	{
		return (taille);
	}

};

template <typename T>
	inline std::ostream &operator<<(std::ostream &o, const Array<T> &rhs)
	{
		o << rhs.arr;
		return o;
	}

#endif

