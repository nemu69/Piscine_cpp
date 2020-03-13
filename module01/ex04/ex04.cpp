/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nepage-l <nepage-l@student.le-101.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/16 14:29:10 by nepage-l          #+#    #+#             */
/*   Updated: 2020/02/21 20:06:02 by nepage-l         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stdio.h>
#include <iomanip>
#include <string.h>
#include <ctime>
#include <cstdlib>

int main(void)
{
	std::string hello = "HI THIS IS BRAIN";
	std::string *spoint = &hello;
	std::string& sref = hello;
	std::cout << *spoint << std::endl << sref << std::endl;
	return (0);
}
