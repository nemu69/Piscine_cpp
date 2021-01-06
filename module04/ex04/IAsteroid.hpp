/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IAsteroid.hpp                  	                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nepage <nepage-l@student.le-101.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/27 00:49:47 by nepage            #+#    #+#             */
/*   Updated: 2020/03/02 17:56:16 by nepage           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef IASTEROID_HPP
# define IASTEROID_HPP
#include <iostream>
#include <stdio.h>
#include <iomanip>
#include <string.h>
#include <ctime>
#include <cstdlib>

class StripMiner;
class DeepCoreMiner;
class IAsteroid
{
	public:
		virtual ~IAsteroid() {}
		virtual std::string beMined(DeepCoreMiner *) const = 0;
		virtual std::string beMined(StripMiner *) const = 0;
		virtual std::string getName() const = 0;
};

#endif
