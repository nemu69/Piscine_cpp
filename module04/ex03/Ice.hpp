/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nepage <nepage-l@student.le-101.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/26 08:03:36 by nepage            #+#    #+#             */
/*   Updated: 2020/02/26 08:38:18 by nepage           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef Squad_H
# define Squad_H
#include <iostream>
#include <stdio.h>
#include <iomanip>
#include <string.h>
#include <ctime>
#include <cstdlib>
#include <vector>
#include <iterator>
#include "AMateria.hpp"

class Ice : public AMateria
{
	public:

	Ice();
  	~Ice();
	Ice(const Ice&o);
	Ice&operator=( const Ice &) // Operator d'affectation
	{
		return (*this);
	};
	AMateria* clone() const;
	void use(ICharacter& target);
};

#endif
