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
		nbUnit = o.getCount();

		if (o.container)
		{
			container = deb;
			container->marine = o.container->marine->clone();
			container->next = NULL;
			temp = o.container;
			o.container = o.container->next;
			delete temp->marine;
			deb = container;
			while (o.container)
			{
				deb->next = new lst;
				deb = deb->next;
				temp = o.container;
				deb->marine = o.container->marine->clone();
				o.container = o.container->next;
				delete temp->marine;
			}
			tail = deb;
			tail->next = NULL;
		}	
		o.nbUnit = 0;
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
