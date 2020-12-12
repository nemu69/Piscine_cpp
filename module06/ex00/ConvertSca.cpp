/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ConvertSca.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nepage-l <nepage-l@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/26 08:03:53 by nepage            #+#    #+#             */
/*   Updated: 2020/12/05 14:27:45 by nepage-l         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ConvertSca.hpp"

std::string const & ConvertSca::getConv() const
{
	return (conv);
}


void ConvertSca::convChar()
{
	int numb;
	if (!(sscanf(conv.c_str(), "%d", &numb)))
		throw ImpossibleConvert();
	else if (numb > 31 && numb < 127)
		std::cout << "'" << (char)numb << "'" << std::endl;
	else
		throw NonDisplayable();
}

void ConvertSca::convInt()
{
	int numb;
	numb  = std::stoi(conv);
	std::cout << numb << std::endl;
}

void ConvertSca::convFloat()
{
	float numb;
	if (conv == "-inf" || conv == "+inf" || conv == "inf" || conv == "nan")
		std::cout << conv << "f" << std::endl;
	else if (conv == "-inff" || conv == "+inff" || conv == "inff" || conv == "nanf")
		std::cout << conv << std::endl;
	else if (!(sscanf(conv.c_str(), "%f", &numb)))
		throw ImpossibleConvert();
	else
	{
		std::cout << numb;
		if (floor(numb) == numb)
			std::cout << ".0";
		std::cout << "f" << std::endl;
	}
}

void ConvertSca::convDouble()
{
	double numb;
	if (conv == "-inf" || conv == "+inf"  || conv == "inf" || conv == "nan")
		std::cout << conv << std::endl;
	else if (conv == "-inff" || conv == "+inff" || conv == "inff" || conv == "nanf")
	{
		conv.resize(conv.size() - 1);
		std::cout << conv << std::endl;
	}
	else if (!(sscanf(conv.c_str(), "%lf", &numb)))
		throw ImpossibleConvert();
	else
	{
		std::cout << numb;
		if (floor(numb) == numb)
			std::cout << ".0";
		std::cout << std::endl;
	}
}

ConvertSca::ConvertSca(const ConvertSca &o)
{
	conv = o.conv;
}

ConvertSca::ConvertSca(std::string conv)
{
	this->conv = conv;
};

ConvertSca::ConvertSca()
{

};

ConvertSca::~ConvertSca()
{

};
