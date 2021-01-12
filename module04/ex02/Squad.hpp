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

#ifndef Squad_HPP
# define Squad_HPP
#include <iostream>
#include <stdio.h>
#include <iomanip>
#include <string.h>
#include <ctime>
#include <cstdlib>
#include <vector>
#include <iterator>
#include "ISquad.hpp"


struct lst
{
  ISpaceMarine *marine;
  lst *next;
};	

class Squad : public ISquad
{
  	public :

  	Squad();
  	~Squad();
	Squad(Squad &o);
  	Squad&operator=(Squad &o) // Operator d'affectation
	{
		lst *temp = new lst;
		lst *deb = new lst;
		int i = 0;
		if (container)
		{
			temp = container;
			while (temp)
			{
				temp = temp->next;
				delete(container->marine);
				delete(container);
				container = temp;
			}
		}	
		while (i < o.nbUnit)
		{
			this->push(o.getUnit(i));
			i++;	
		}
		return (*this);
	};

	//getteurs
	int getCount() const;
	ISpaceMarine* getUnit(int index) const;

	//setteurs
	void setUnit(int nbUnit);

	//methode
	int push(ISpaceMarine* marine);

	protected :
	
	int nbUnit;
	lst *container;
	lst *tail;
	

};

#endif
