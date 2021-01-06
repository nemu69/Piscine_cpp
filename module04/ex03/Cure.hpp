/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nepage-l <nepage-l@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/03 04:32:29 by nepage            #+#    #+#             */
/*   Updated: 2021/01/06 10:30:35 by nepage-l         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP
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
	Cure(const Cure&o);
	Cure&operator=( const Cure &) // Operator d'affectation
	{
		return (*this);
	};
	AMateria* clone() const;
	void use(ICharacter& target);
};

#endif
