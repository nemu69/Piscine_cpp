/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nepage-l <nepage-l@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/26 08:03:36 by nepage            #+#    #+#             */
/*   Updated: 2021/01/06 10:30:35 by nepage-l         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP
#include <iostream>
#include <stdio.h>
#include <iomanip>
#include <string.h>
#include <ctime>
#include <cstdlib>
#include "IMateriaSource.hpp"
#include "AMateria.hpp"

struct lst
{
  AMateria *m;
  int i;
  lst *next;
};	

class AMateria;
class MateriaSource : public IMateriaSource
{

  	public :

  	MateriaSource();
  	~MateriaSource();
	MateriaSource(const MateriaSource&o);
  	MateriaSource&operator=(const MateriaSource &o) // Operator d'affectation
	{
		nbEquip = o.nbEquip;
		source = new lst(*o.source);
		lst *temp = new lst;
		lst *otemp = new lst;
		temp = source;
		otemp = o.source;
		while (otemp)
		{
			temp->m = otemp->m->clone();
			delete otemp->m;
			tail = temp;
			temp->next = new lst(*otemp);
			temp = temp->next;
			otemp = otemp->next;
		}
		temp = NULL;
		delete(temp);
		delete(otemp);
		return (*this);
	};

	// getteurs
	
	// Setteurs

	// Methodes 
	void learnMateria(AMateria*);
	AMateria* createMateria(std::string const & type);

	protected :

  	lst *source;
	lst *tail;
	int nbEquip;
};

#endif
