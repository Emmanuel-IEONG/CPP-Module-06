/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert_type.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eieong <eieong@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/11 14:47:34 by eieong            #+#    #+#             */
/*   Updated: 2025/12/29 11:49:27 by eieong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ScalarConverter.hpp"
#include <string>
#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <climits>

void	convertDouble(const std::string str)
{
	double	nb = atof(str.c_str());

	std::cout << "char: ";
	if (nb >= 0 && nb <= 127)
	{
		if (isprint(static_cast<int>(nb)))
			std::cout << "'" << static_cast<char>(nb) << "'" << std::endl;
		else
			std::cout << "Non displayable" << std::endl;
	}
	else
		std::cout << "impossible" << std::endl;
	if (static_cast<int>(nb) >= INT_MIN && static_cast<int>(nb) <= INT_MAX)
		std::cout << "int: " << static_cast<int>(nb) << std::endl;
	else
		std::cout << "int: impossible" << std::endl;
	std::cout << "float: " << std::fixed << std::setprecision(1) << static_cast<float>(nb) << "f" << std::endl;
	std::cout << "double: " << static_cast<double>(nb) << std::endl;
}

void	convertFloat(const std::string str)
{
	float	nb = static_cast<float>(atof(str.c_str()));

	std::cout << "char: ";
	if (nb >= 0 && nb <= 127)
	{
		if (isprint(static_cast<int>(nb)))
			std::cout << "'" << static_cast<char>(nb) << "'" << std::endl;
		else
			std::cout << "Non displayable" << std::endl;
	}
	else
		std::cout << "impossible" << std::endl;
	if (static_cast<int>(nb) >= INT_MIN && static_cast<int>(nb) <= INT_MAX)
		std::cout << "int: " << static_cast<int>(nb) << std::endl;
	else
		std::cout << "int: impossible" << std::endl;
	std::cout << "float: " << std::fixed << std::setprecision(1) << nb << "f" << std::endl;
	std::cout << "double: " << static_cast<double>(nb) << std::endl;
}

void	convertInt(const std::string str)
{
	long	nb = atol(str.c_str());

	std::cout << "char: ";
	if (nb >= 0 && nb <= 127)
	{
		if (isprint(static_cast<int>(nb)))
			std::cout << "'" << static_cast<char>(nb) << "'" << std::endl;
		else
			std::cout << "Non displayable" << std::endl;
	}
	else
		std::cout << "impossible" << std::endl;
	if (nb >= INT_MIN && nb <= INT_MAX)
		std::cout << "int: " << static_cast<int>(nb) << std::endl;
	else
		std::cout << "int: impossible" << std::endl;
	std::cout << "float: " << std::fixed << std::setprecision(1) << static_cast<float>(nb) << "f" << std::endl;
	std::cout << "double: " << static_cast<double>(nb) << std::endl;
}

void	convertChar(const std::string str)
{
	if (isprint(str[0]))
	{
		std::cout << "char: '" << str << "'" << std::endl;
		std::cout << "int: " << static_cast<int>(str[0]) << std::endl;
		std::cout << "float: " << static_cast<float>(str[0]) << ".0f" << std::endl;
		std::cout << "double: " << static_cast<double>(str[0]) << ".0" << std::endl;
	}
	else
		std::cout << "char: Non displayable\nThe type conversion is impossible" << std::endl;
}

void	printSpecial(const std::string str)
{
	if (str.find("nan") != std::string::npos)
		std::cout << "char: impossible\nint: impossible\nfloat: nanf\ndouble: nan" << std::endl;
	else if (str.find("-inf") != std::string::npos)
		std::cout << "char: impossible\nint: impossible\nfloat: -inff\ndouble: -inf" << std::endl;
	else if (str.find("+inf") != std::string::npos)
		std::cout << "char: impossible\nint: impossible\nfloat: +inff\ndouble: +inf" << std::endl;
}
