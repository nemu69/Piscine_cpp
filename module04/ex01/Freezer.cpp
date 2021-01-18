/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Freezer.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nepage <nepage-l@student.le-101.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/08 08:49:12 by nepage-l          #+#    #+#             */
/*   Updated: 2020/02/26 08:02:48 by nepage           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Freezer.hpp"

Freezer::Freezer(Freezer &o) : Enemy(o)
{
	puts("* YO YO YO *");
}

Freezer::Freezer() : Enemy(99999 , "Freezer")
{
	puts("* YO YO YO *");
};

Freezer::~Freezer()
{
	puts("* noooo suppa sayaijin *");
};
