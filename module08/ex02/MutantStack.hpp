/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nepage-l <nepage-l@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/26 08:03:36 by nepage            #+#    #+#             */
/*   Updated: 2021/01/06 10:30:35 by nepage-l         ###   ########lyon.fr   */
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
#include <iterator>     // std::iterator, std::bidirectional_iterator_tag

template <typename T>
class	MutantStack : public std::stack<T>
{
	public:
		
		MutantStack<T>(void)
		{
			return;
		}

		MutantStack(MutantStack const &r)
		{
			(void)r;
			return;
		}

		~MutantStack<T>(void)
		{
			return;
		}

		MutantStack &operator=(MutantStack const &r)
		{
			(void)r;
			return;
		}

		T top(void)
		{
			return (_stack.front());
		}

		T size(void)
		{
			return (_stack.size());
		}

		typedef std::list<int>::iterator iterator;

		iterator begin()
		{
			return (_stack.begin());
		}

		iterator end() {
			return (_stack.end());
		}

		void push(T value)
		{
			_stack.push_front(value);
		}

		void pop(void)
		{
			_stack.pop_front();
		}

	private:

		std::list<T>		_stack;

};

#endif

