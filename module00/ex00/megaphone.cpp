/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nepage-l <nepage-l@student.le-101.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/21 20:01:43 by nepage-l          #+#    #+#             */
/*   Updated: 2020/02/21 20:02:07 by nepage-l         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stdio.h>

int main(int argc, char **argv) 
{
    int i;
    int j;

    i = 1;
    if (argc == 1)
       puts("* LOUD AND UNBEARABLE FEEDBACK NOISE *");
    else
    {
         while(argv[i])
         {
            j = 0;
            while (argv[i][j])
            {
                 putchar(toupper(argv[i][j]));
                 j++;
            }
            i++;
         }
          std::cout << "\n";
    }
   return (0);
}