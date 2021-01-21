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
		std::cout << *it;
		std::advance(it,1);
		if (it != lst.end())
			std::cout << ", ";
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

long int		Span::shortestSpan()
{
	long  long int res = 0;
	if (lst.size() < 2)
		throw SpanNotFound();
	lst.sort();
	std::list<int>::iterator it = lst.begin();
	long int temp = *(it++);
	std::cout << "temp : " << temp << std::endl;
	res = std::abs(static_cast<long>(*it) - static_cast<long>(temp));
	std::cout << "-temp : " << -temp << std::endl;
	std::cout << "it : " << *it << std::endl;
	std::cout << "res : " << res << std::endl;
	while (it != lst.end())
	{
		temp = *(it++);
		if (res > std::abs(static_cast<long>(*it) - static_cast<long>(temp)))
			res = std::abs(static_cast<long>(*it) - static_cast<long>(temp));
	}
	return (res);
}

long int		Span::longestSpan()
{
	if (lst.size() < 2)
		throw SpanNotFound();
	lst.sort();
	return (static_cast<long>(lst.back()) - static_cast<long>(lst.front()));
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

