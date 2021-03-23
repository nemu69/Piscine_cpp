/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nepage-l <nepage-l@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/26 08:03:36 by nepage            #+#    #+#             */
/*   Updated: 2021/01/29 09:59:45 by nepage-l         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef MutantStack_HPP
# define MutantStack_HPP
#include <iostream>
#include <stdio.h>
#include <iomanip>
#include <exception>
#include <stdexcept>
#include <string.h>
#include <ctime>
#include <cmath>
#include <cstdlib>
#include <stack>
#include <list>
#include <algorithm>
#include <iterator>

template <typename T>
class MutantStack : public std::stack<T>
{
	public:
		MutantStack(void): std::stack<T>() {}
		virtual ~MutantStack(void) {}

		MutantStack(std::stack<T> const &obj): std::stack<T>(obj) {}
		MutantStack(MutantStack const &obj): std::stack<T>(obj) {}

		MutantStack &operator=(const MutantStack &op)
        {
            if (this == &op)
                return (*this);
            std::stack<T>::operator=(op);
            return (*this);
        };

		typedef typename std::stack<T>::container_type::iterator iterator;

		// http://en.cppreference.com/w/cpp/container/stack
		// c is the container, and a member of std::stack
		iterator begin(void) { return std::begin(std::stack<T>::c); }
		iterator end(void) { return std::end(std::stack<T>::c); }
};

#endif

