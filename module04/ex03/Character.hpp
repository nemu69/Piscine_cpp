/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nepage <nepage-l@student.le-101.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/26 08:03:36 by nepage            #+#    #+#             */
/*   Updated: 2020/03/07 05:53:33 by nepage           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef Character_H
# define Character_H
#include <iostream>
#include <stdio.h>
#include <iomanip>
#include <string.h>
#include <ctime>
#include <cstdlib>
#include "ICharacter.hpp"
#include "MateriaSource.hpp"

class Character : public ICharacter
{

  	public :

	Character(std::string const & name);
  	Character();
  	~Character();
	Character(Character &o);
  	Character&operator=(const Character &o) // Operator d'affectation
	{
		name = o.getName();
		nbEquip = o.getnbEquip();
		inventaire = new lst(*o.inventaire);
		lst *temp = new lst;
		lst *otemp = new lst;
		temp = inventaire;
		otemp = o.inventaire;
		while (otemp)
		{
			temp->m = otemp->m->clone();
			otemp->next ? temp->i = 1 : temp->i = 0;
			delete otemp->m;
			temp->next = new lst(*otemp);
			tail = temp;
			temp = temp->next;
			otemp = otemp->next;
		}
		temp = NULL;
		delete(temp);
		delete(otemp);
		return (*this);
	};

	// getteurs
	
	std::string const & getName() const;
	int getnbEquip() const;
	
	// Setteurs

	// Methodes 
	void equip(AMateria* m);
	void unequip(int idx);
	void use(int idx, ICharacter& target);

	protected :

  	lst *inventaire;
	lst *tail;
	std::string name;
	int nbEquip;
};

#endif
