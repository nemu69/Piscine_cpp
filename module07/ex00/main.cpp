/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nepage-l <nepage-l@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/21 11:19:15 by nepage-l          #+#    #+#             */
/*   Updated: 2020/12/21 12:16:20 by nepage-l         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"

int	main()
{
	{
		int a = 4;
		int b = 6;
		puts("---- INT ----");
		std::cout << "valeur a : " << a << "\nvaleur b : " << b << std::endl;
		swap(a, b);
		puts("Swap a et b");
		std::cout << "valeur a : " << a << "\nvaleur b : " << b << std::endl;
		std::cout << "valeur max : " << max(a,b) << std::endl;
		std::cout << "valeur min : " << min(a,b) << std::endl;
	}
	{
		const int a = 4;
		const int b = 6;
		puts("---- CONST INT ----");
		std::cout << "valeur a : " << a << "\nvaleur b : " << b << std::endl;
		swap(a, b);
		puts("Swap a et b");
		std::cout << "valeur a : " << a << "\nvaleur b : " << b << std::endl;
		std::cout << "valeur max : " << max(a,b) << std::endl;
		std::cout << "valeur min : " << min(a,b) << std::endl;
		puts("Pas de Swap car const.............. logique :)");
	}
	{
		static int a = 4;
		static int b = 6;
		puts("---- STATIC INT ----");
		std::cout << "valeur a : " << a << "\nvaleur b : " << b << std::endl;
		swap(a, b);
		puts("Swap a et b");
		std::cout << "valeur a : " << a << "\nvaleur b : " << b << std::endl;
		std::cout << "valeur max : " << max(a,b) << std::endl;
		std::cout << "valeur min : " << min(a,b) << std::endl;
	}
	{
		float a = 2.252;
		float b = 6.252;
		puts("---- FLOAT ----");
		std::cout << "valeur a : " << a << "\nvaleur b : " << b << std::endl;
		swap(a, b);
		puts("Swap a et b");
		std::cout << "valeur a : " << a << "\nvaleur b : " << b << std::endl;
		std::cout << "valeur max : " << max(a,b) << std::endl;
		std::cout << "valeur min : " << min(a,b) << std::endl;
	}
	
	{
		std::string a = "abcde";
		std::string b = "ABCDE";
		puts("---- STRING ----");
		std::cout << "valeur a : " << a << "\nvaleur b : " << b << std::endl;
		swap(a, b);
		puts("Swap a et b");
		std::cout << "valeur a : " << a << "\nvaleur b : " << b << std::endl;
		std::cout << "valeur max : " << max(a,b) << std::endl;
		std::cout << "valeur min : " << min(a,b) << std::endl;
	}

	return(0);
}