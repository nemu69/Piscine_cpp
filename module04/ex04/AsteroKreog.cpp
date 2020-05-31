/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AsteroKreog.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nepage <nepage-l@student.le-101.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/26 08:03:53 by nepage            #+#    #+#             */
/*   Updated: 2020/02/27 00:18:31 by nepage           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "AsteroKreog.hpp"

std::string AsteroKreog::beMined(DeepCoreMiner *dpm) const
{
	(void)dpm;
	return("Dragonite");
}

std::string AsteroKreog::beMined(StripMiner *sm) const
{
	(void)sm;
	return("Flavium");
}

std::string AsteroKreog::getName() const
{
	return (name);
}

AsteroKreog::AsteroKreog(const AsteroKreog &)
{

}

AsteroKreog::AsteroKreog()
{

};

AsteroKreog::~AsteroKreog()
{

};
