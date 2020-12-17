/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nepage <nepage-l@student.le-101.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/26 08:03:53 by nepage            #+#    #+#             */
/*   Updated: 2020/03/09 05:10:41 by nepage           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

void	Span::print_lst()
{
	std::list<int>::iterator it = lst.begin();
	while (it != lst.end())
	{
		std::cout << *it << ", ";
		std::advance(it,1);
	}
	std::cout << std::endl;
}

void	Span::addNumber(int number)
{
	std::list<int>::iterator it;
	it = std::find(lst.begin(), lst.end(), number);
	if (it == lst.end())
	{
		if (lst.size() < nb)
			lst.push_back(number);
		else
			throw LimitAdd();
	}
}

int		Span::shortestSpan()
{
	int res = 0;
	if (lst.size() < 2)
		throw SpanNotFound();
	lst.sort();
	std::list<int>::iterator it = lst.begin();
	int temp = *(it++);
	res = std::abs(*it - temp);
	while (it != lst.end())
	{
		temp = *(it++);
		if (res > std::abs(*it - temp))
			res = std::abs(*it - temp);
	}
	return (res);
}

int		Span::longestSpan()
{
	if (lst.size() < 2)
		throw SpanNotFound();
	lst.sort();
	return (lst.back() - lst.front());
}

Span::Span(unsigned int n)
{
	nb = n;
};

Span::Span(const Span &o)
{
	*this = o;
}

Span::~Span()
{

};

