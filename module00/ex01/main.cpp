/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nepage-l <nepage-l@student.le-101.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/08 08:49:19 by nepage-l          #+#    #+#             */
/*   Updated: 2020/02/21 20:03:46 by nepage-l         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"

int  ft_error_time(const char *str)
{
  if (std::cin.fail())
  {
      std::cout << "Error reading " << str << "\n";
      std::cin.clear(); // reset failbit
      std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
      return(0);
  }
  return(1);
}

void ft_truncate(std::string str)
{
  std::string tmp;
  int i;

  i = 0;
  if ((str.length()) > 10)
  {
    tmp = str.substr(0, 10);
    std::cout << tmp << ".";
  }
  else
  {
     i = 10 - str.length() + 1;
    while (i--)
      putchar(' ');
    std::cout << str;
  }
}

int main()
{
  std::string cmd;
  Contact c1;
  Contact c2;
  Contact c3;
  Contact c4;
  Contact c5;
  Contact c6;
  Contact c7;
  Contact c8;
  int i;
  char index;

  i = 1;
  index = 1;
  puts("Welcome to PhoneBok");
  while (1)
  {
    puts("Place an order (ADD,SEARCH or EXIT) :");
    std::cin >> cmd;
    if (!cmd.compare("ADD"))
    {
      switch (i)
      {
      case 1:
        c1.set_contact();
        break;
      case 2:
        c2.set_contact();
        break;
      case 3:
        c3.set_contact();
        break;
      case 4:
        c4.set_contact();
        break;
      case 5:
        c5.set_contact();
        break;
      case 6:
        c6.set_contact();
        break;
      case 7:
        c7.set_contact();
        break;
      case 8:
        c8.set_contact();
        break;
      default:
        puts("Too much contact in the PhoneBook");
        break;
      }
      i++;
    }
    else if (!cmd.compare("EXIT"))
      exit(1);
    else if (!cmd.compare("SEARCH"))
    {
      puts("   index  |  first    |   last    |  nickname  ");
      i > 1 ? c1.search_contact() : 0;
      i > 2 ? c2.search_contact() : 0;
      i > 3 ? c3.search_contact() : 0;
      i > 4 ? c4.search_contact() : 0;
      i > 5 ? c5.search_contact() : 0;
      i > 6 ? c6.search_contact() : 0;
      i > 7 ? c7.search_contact() : 0;
      i > 8 ? c8.search_contact() : 0;
      std::cin >> index;
      if (index == '1')
        c1.get_contact();
      else if (index == '2')
        c2.get_contact();
      else if (index == '3')
        c3.get_contact();
      else if (index == '4')
        c4.get_contact();
      else if (index == '5')
        c5.get_contact();
      else if (index == '6')
        c6.get_contact();
      else if (index == '7')
        c7.get_contact();
      else if (index == '8')
        c8.get_contact();
      else
        puts("Error index non existant");
    }
    else
      puts("Command error");
  }
   return (0);
}
