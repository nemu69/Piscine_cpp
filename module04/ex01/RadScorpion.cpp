/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nepage <nepage-l@student.le-101.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/08 08:49:12 by nepage-l          #+#    #+#             */
/*   Updated: 2020/02/26 08:02:48 by nepage           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "RadScorpion.hpp"

RadScorpion::RadScorpion(RadScorpion &o) : Enemy(o)
{
	puts("* click click click *");
}

RadScorpion::RadScorpion() : Enemy(80 , "RadScorpion")
{
	puts("* click click click *");
};

RadScorpion::~RadScorpion()
{
	puts("* SPROTCH *");
};
