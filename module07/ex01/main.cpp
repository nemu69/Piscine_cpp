/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nepage-l <nepage-l@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/21 11:30:11 by nepage-l          #+#    #+#             */
/*   Updated: 2020/12/21 12:31:07 by nepage-l         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int	main()
{
	puts("--- STRING ---");
	std::string string[] = {"hello", "world", "this", "message"};
	iter(string, 4, print);
	
	puts("--- CHAR[] ---");
	char str[] = "HELLO"; 
	iter(str, 5, print);

	puts("--- INT[] ---");
	int tab[] = {0,1,2,3,4}; 
	iter(tab, 5, print);
	return(0);
}