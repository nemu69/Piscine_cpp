/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DeepCoreMiner.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nepage <nepage-l@student.le-101.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/26 08:03:53 by nepage            #+#    #+#             */
/*   Updated: 2020/02/27 00:18:31 by nepage           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "DeepCoreMiner.hpp"

void 		 DeepCoreMiner::mine(IAsteroid* as)
{ 
	std::cout << "* mining deep ... got " << as->beMined(this) <<" ! *\n";
}

DeepCoreMiner::DeepCoreMiner(DeepCoreMiner &)
{

}

DeepCoreMiner::DeepCoreMiner()
{

};

DeepCoreMiner::~DeepCoreMiner()
{

};
