/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   KoalaSteroid.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nepage <nepage-l@student.le-101.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/26 08:03:53 by nepage            #+#    #+#             */
/*   Updated: 2020/02/27 00:18:31 by nepage           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "KoalaSteroid.hpp"

std::string KoalaSteroid::beMined(DeepCoreMiner *dpm) const
{
	(void)dpm;
	return("Meium");
}

std::string KoalaSteroid::beMined(StripMiner *sm) const
{
	(void)sm;
	return("Tartarite");
}

std::string KoalaSteroid::getName() const
{
	return (name);
}

KoalaSteroid::KoalaSteroid(KoalaSteroid &)
{

}

KoalaSteroid::KoalaSteroid()
{

};

KoalaSteroid::~KoalaSteroid()
{

};
