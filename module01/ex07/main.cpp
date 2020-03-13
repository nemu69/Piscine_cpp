/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nepage-l <nepage-l@student.le-101.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/20 15:25:17 by nepage-l          #+#    #+#             */
/*   Updated: 2020/02/21 20:07:21 by nepage-l         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

int main(int ac, char **av)
{
	size_t pos;
	std::stringstream ss;
	std::stringstream ss2;
	std::ifstream fs(av[1]);
	std::ofstream fs2;
	std::string str;
	std::string str2;
	std::string *basestr;
	size_t len = std::strlen(av[2]);

	if(ac != 4)
		return (0);
	if(!fs.is_open())
		return(0);
	ss << av[1];
	ss << ".replace";
	str = ss.str();
	fs2.open(str);
	ss2 << fs.rdbuf();
	str2 = ss2.str();
	basestr = &str2;
	while (1)
	{
		pos = basestr->find(av[2]);
		if (pos != std::string::npos)
		{
			basestr->replace(pos, len, av[3]);
		}
		else
			break;
	}
	fs2 << str2;
	fs2.close();
	fs.close();
	return (1);
}