/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nepage <nepage-l@student.le-101.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/15 14:26:58 by nepage-l          #+#    #+#             */
/*   Updated: 2020/03/03 04:42:40 by nepage           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef Enemy_H
# define Enemy_H
#include <iostream>
#include <stdio.h>
#include <iomanip>
#include <string.h>
#include <ctime>
#include <cstdlib>

class Enemy
{

  	public :

  	Enemy(int hp, std::string const & type);
  	Enemy();
  	virtual ~Enemy();
	Enemy(Enemy &o);
  	Enemy&operator=(const Enemy &o) // Operator d'affectation
		{
			HP = o.getHP();
			type = o.getType();
			return (*this);
		};

	// getteurs
  	std::string virtual getType() const;
  	int getHP() const;
  	void setHP(int HP);
	
	// Setteurs

	// Methodes 
  	virtual void takeDamage(int);

	protected :
	
  	int HP;
  	std::string type;
};

#endif
