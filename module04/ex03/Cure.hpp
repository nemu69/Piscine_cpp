/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nepage <nepage-l@student.le-101.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/03 04:32:29 by nepage            #+#    #+#             */
/*   Updated: 2020/03/07 05:29:32 by nepage           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_H
# define CURE_H
#include <iostream>
#include <stdio.h>
#include <iomanip>
#include <string.h>
#include <ctime>
#include <cstdlib>
#include <vector>
#include <iterator>
#include "AMateria.hpp"

class Cure : public AMateria
{
	public:

	Cure();
  	~Cure();
	Cure(Cure &o);
	Cure&operator=(Cure &) // Operator d'affectation
	{
		return (*this);
	};
	AMateria* clone() const;
	void use(ICharacter& target);
};

#endif
