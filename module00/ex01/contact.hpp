/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nepage-l <nepage-l@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/08 08:48:55 by nepage-l          #+#    #+#             */
/*   Updated: 2021/01/06 10:30:36 by nepage-l         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP
#include <iostream>
#include <stdio.h>
#include <iomanip>
#include <string.h>
#include <ctime>
#include <limits>

int  ft_error_time(const char *str);
void ft_truncate(std::string str);

class Contact
{
  // Attributs

  public :
  Contact();
  static int stat;
  // Setteurs
  void set_contact();
  // Geteurs
  int search_contact();
  int get_contact();

  private :
  int index;
  std::string fname;
  std::string lname;
  std::string nickname;
  std::string login;
  std::string postal;
  std::string mail;
  std::string phone;
  std::string meal;
  std::string color;
  std::string secret;
  int   day;
  int   month;
  int   year;
};

#endif
