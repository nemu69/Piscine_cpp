/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nepage-l <nepage-l@student.le-101.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/15 14:24:52 by nepage-l          #+#    #+#             */
/*   Updated: 2020/02/21 20:05:02 by nepage-l         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"


int main()
{
	std::string cmd;
	std::string color;
	std::string magic;
  	puts("Welcome to Fairy World");
  	while (1)
  	{
  	  puts("Create an poney !");
  	  puts("Choose 'stack' or 'heap' or 'exit' : ");
  	  std::cin >> cmd;
  	  if (!cmd.compare("stack"))
  	  {
			puts("Choose color :");
			std::cin >> color;
			puts("Choose magic kawaii <3 :");
  			std::cin >> magic;
			ponyOnTheStack(color, magic);
  	  }
  	  else if (!cmd.compare("heap"))
  	  {
			puts("Choose color :");
			std::cin >> color;
			puts("Choose magic kawaii <3 :");
  			std::cin >> magic;
			ponyOnTheHeap(color, magic);
  	  }
  	 else if (!cmd.compare("exit"))
  	    exit(1);
  	 else
  	    puts("Command error");
  	}
  	return (0);
}
