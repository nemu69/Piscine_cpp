/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nepage-l <nepage-l@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/02 17:39:28 by nepage            #+#    #+#             */
/*   Updated: 2021/01/06 10:30:35 by nepage-l         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP
#include <iostream>
#include <stdio.h>
#include <iomanip>
#include <string.h>
#include <ctime>
#include <cstdlib>
#include <list>
#include <iterator>
#include "ICharacter.hpp"

class ICharacter;
class AMateria
{
	public:

	AMateria();
  	virtual ~AMateria();
	AMateria(const AMateria &o);
  	AMateria&operator=(const AMateria &o) // Operator d'affectation
	{
		_xp = o.getXP();
		return (*this);
	};
	AMateria(std::string const & type);

	//getteurs

	std::string const & getType() const; //Returns the materia type
	unsigned int getXP() const; //Returns the Materia's XP

	//setteurs

	void setXP(unsigned int xp);

	//methodes
	virtual AMateria* clone() const = 0;
	virtual void use(ICharacter& target);
		
	private:
		unsigned int _xp;
		std::string type;
};

#endif
