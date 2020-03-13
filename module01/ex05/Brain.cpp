/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nepage-l <nepage-l@student.le-101.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/16 15:15:13 by nepage-l          #+#    #+#             */
/*   Updated: 2020/02/21 20:06:12 by nepage-l         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

std::string	Brain::identify() const
{
	std::ostringstream ss;
	ss << id;
	return(ss.str());
}

Brain::Brain()
{
	id = (const void *)this;
}