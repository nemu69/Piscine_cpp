/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nepage-l <nepage-l@student.le-101.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/08 08:49:12 by nepage-l          #+#    #+#             */
/*   Updated: 2020/02/21 20:03:23 by nepage-l         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"

int Contact::stat = 0;

void  Contact::set_contact(void)
{
  struct std::tm when;
  index = ++stat;
  puts("First name :");
  std::cin >> fname;   // First name
  puts("Last name :");
  std::cin >> lname;   // Last name
  puts("Nickname :");
  std::cin >> nickname;   // Nickname
  puts("Login :");
  std::cin >> login;   // Login
  puts("Postal adress :");
  std::cin >> postal;   // Postal code
  puts("Email address :");
  std::cin >> mail;   // mail
  puts("Phone number :");
  std::cin >> phone;   // Phone
  puts("Favorite meal :");
  std::cin >> meal;   // Favorite meal
  puts("Underwear color :");
  std::cin >> color;   // Underwear color
  puts("Darkest secret :) :");
  std::cin >> secret;   // secret

  puts("Birthday date :");
  do
  {
    puts("Please, enter the day  :");
    std::cin >> std::get_time(&when, "%d");   // day
  } while (!ft_error_time("day"));
  day = when.tm_mday;
  do
  {
   puts("Please, enter the month  :");
  std::cin >> std::get_time(&when, "%m");   // month
  } while (!ft_error_time("month"));
  month = when.tm_mon + 1;
  do
  {
    puts("Please, enter the year  :");
  std::cin >> std::get_time(&when, "%Y");   // year
  } while (!ft_error_time("year"));
  year = when.tm_year + 1900;
}

int  Contact::search_contact()
{
  std::cout << "         " << index;
  std::cout << "|";
  ft_truncate(fname);
  std::cout << "|";
  ft_truncate(lname);
  std::cout << "|";
  ft_truncate(nickname);
  std::cout << "\n";
  return (1);
}

int  Contact::get_contact()
{
  if (index == -1)
    return(puts("Error index non existant"));
   puts("First name :");
  std::cout << fname << std::endl;   // First name
  puts("Last name :");
  std::cout << lname  << std::endl;   // Last name
  puts("Nickname :");
  std::cout << nickname  << std::endl;   // Nickname
  puts("Login :");
  std::cout << login  << std::endl;   // Login
  puts("Postal adress :");
  std::cout << postal  << std::endl;   // Postal code
  puts("Email address :");
  std::cout << mail  << std::endl;   // mail
  puts("Phone number :");
  std::cout << phone  << std::endl;   // Phone
  puts("Favorite meal :");
  std::cout << meal  << std::endl;   // Favorite meal
  puts("Underwear color :");
  std::cout << color  << std::endl;   // Underwear color
  puts("Darkest secret :) :");
  std::cout << secret  << std::endl;   // secret
  puts("Birthday date :");
  std::cout << day << "/" << month << "/" << year;
  puts("\n");
  return (1);
}

Contact::Contact(void)
{
  index = -1;
};
