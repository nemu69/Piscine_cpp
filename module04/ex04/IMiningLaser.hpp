/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMiningLaser.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nepage <nepage-l@student.le-101.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/27 00:49:47 by nepage            #+#    #+#             */
/*   Updated: 2020/03/02 17:56:16 by nepage           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef IMININGLASER_H
# define IMININGLASER_H
#include <iostream>
#include <stdio.h>
#include <iomanip>
#include <string.h>
#include <ctime>
#include <cstdlib>
#include "IAsteroid.hpp"

class IMiningLaser
{
	public:
		virtual ~IMiningLaser() {}
		virtual void mine(IAsteroid*) = 0;
};

#endif
